#include "global.h"
#include "new_game.h"
#include "random.h"
#include "pokemon.h"
#include "roamer.h"
#include "pokemon_size_record.h"
#include "script.h"
#include "lottery_corner.h"
#include "play_time.h"
#include "mauville_old_man.h"
#include "match_call.h"
#include "lilycove_lady.h"
#include "load_save.h"
#include "pokeblock.h"
#include "dewford_trend.h"
#include "berry.h"
#include "rtc.h"
#include "easy_chat.h"
#include "event_data.h"
#include "money.h"
#include "trainer_hill.h"
#include "tv.h"
#include "coins.h"
#include "text.h"
#include "overworld.h"
#include "mail.h"
#include "battle_records.h"
#include "item.h"
#include "pokedex.h"
#include "apprentice.h"
#include "frontier_util.h"
#include "pokedex.h"
#include "save.h"
#include "link_rfu.h"
#include "main.h"
#include "contest.h"
#include "item_menu.h"
#include "pokemon_storage_system.h"
#include "pokemon_jump.h"
#include "decoration_inventory.h"
#include "secret_base.h"
#include "player_pc.h"
#include "field_specials.h"
#include "berry_powder.h"
#include "mystery_gift.h"
#include "union_room_chat.h"
#include "constants/map_groups.h"
#include "constants/items.h"
#include "daycare.h"
#include "constants/pokevial.h"

extern const u8 EventScript_ResetAllMapFlags[];

static void ClearFrontierRecord(void);
static void WarpToTruck(void);
static void ResetMiniGamesRecords(void);
void ClearSav1NotDex(void);

EWRAM_DATA bool8 gDifferentSaveFile = FALSE;
EWRAM_DATA bool8 gEnableContestDebugging = FALSE;

static const struct ContestWinner sContestWinnerPicDummy =
{
    .monName = _(""),
    .trainerName = _("")
};

void SetTrainerId(u32 trainerId, u8 *dst)
{
    dst[0] = trainerId;
    dst[1] = trainerId >> 8;
    dst[2] = trainerId >> 16;
    dst[3] = trainerId >> 24;
}

u32 GetTrainerId(u8 *trainerId)
{
    return (trainerId[3] << 24) | (trainerId[2] << 16) | (trainerId[1] << 8) | (trainerId[0]);
}

void CopyTrainerId(u8 *dst, u8 *src)
{
    s32 i;
    for (i = 0; i < TRAINER_ID_LENGTH; i++)
        dst[i] = src[i];
}

static void InitPlayerTrainerId(void)
{
    u32 trainerId = (Random() << 16) | GetGeneratedTrainerIdLower();
    SetTrainerId(trainerId, gSaveBlock2Ptr->playerTrainerId);
}

// L=A isnt set here for some reason.
static void SetDefaultOptions(void)
{
    gSaveBlock2Ptr->optionsTextSpeed = OPTIONS_TEXT_SPEED_FAST;
    gSaveBlock2Ptr->optionsWindowFrameType = 27;
    gSaveBlock2Ptr->optionsSound = OPTIONS_SOUND_STEREO;
    gSaveBlock2Ptr->optionsBattleStyle = OPTIONS_BATTLE_STYLE_SET;
    gSaveBlock2Ptr->optionsBattleSceneOff = FALSE;
    gSaveBlock2Ptr->regionMapZoom = FALSE;
    gSaveBlock2Ptr->optionsUnitSystem = 0;          //tx_optionsPlus
    gSaveBlock2Ptr->optionsHpBarSpeed = 0;          //tx_optionsPlus
    gSaveBlock2Ptr->optionsBattleSpeed = 0;         //tx_optionsPlus
    gSaveBlock2Ptr->optionsDisableMatchCall = 0;    //tx_optionsPlus
    gSaveBlock2Ptr->optionsCurrentFont = 0;         //tx_optionsPlus
    gSaveBlock2Ptr->optionsMusicRegion = 2;         //tx_optionsPlus
    gSaveBlock2Ptr->optionsLevelCaps = 1;           //tx_optionsPlus
}
/*
static void ClearPokedexFlags(void)
{
    gUnusedPokedexU8 = 0;
    memset(&gSaveBlock1Ptr->dexCaught, 0, sizeof(gSaveBlock1Ptr->dexCaught));
    memset(&gSaveBlock1Ptr->dexSeen, 0, sizeof(gSaveBlock1Ptr->dexSeen));
}
*/
void ClearAllContestWinnerPics(void)
{
    s32 i;

    ClearContestWinnerPicsInContestHall();

    // Clear Museum paintings
    for (i = MUSEUM_CONTEST_WINNERS_START; i < NUM_CONTEST_WINNERS; i++)
        gSaveBlock1Ptr->contestWinners[i] = sContestWinnerPicDummy;
}

static void ClearFrontierRecord(void)
{
    CpuFill32(0, &gSaveBlock2Ptr->frontier, sizeof(gSaveBlock2Ptr->frontier));

    gSaveBlock2Ptr->frontier.opponentNames[0][0] = EOS;
    gSaveBlock2Ptr->frontier.opponentNames[1][0] = EOS;
}

static void WarpToTruck(void)
{
    SetWarpDestination(MAP_GROUP(INSIDE_OF_TRUCK), MAP_NUM(INSIDE_OF_TRUCK), WARP_ID_NONE, -1, -1);
    WarpIntoMap();
}

void Sav2_ClearSetDefault(void)
{
    ClearSav2();
    SetDefaultOptions();
}

void ResetMenuAndMonGlobals(void)
{
    gDifferentSaveFile = FALSE;
    ResetPokedexScrollPositions();
    ZeroPlayerPartyMons();
    ZeroEnemyPartyMons();
    ResetBagScrollPositions();
    ResetPokeblockScrollPositions();
}

void NewGameInitData(void)
{
    if (gSaveFileStatus == SAVE_STATUS_EMPTY || gSaveFileStatus == SAVE_STATUS_CORRUPT)
        RtcReset();

    gDifferentSaveFile = TRUE;
    gSaveBlock2Ptr->encryptionKey = 0;
    ZeroEnemyPartyMons();
    ResetPokedex();
    ClearFrontierRecord();
    ClearSav1NotDex();
    ClearAllMail();
    gSaveBlock2Ptr->specialSaveWarpFlags = 0;
    gSaveBlock2Ptr->gcnLinkFlags = 0;
    InitPlayerTrainerId();
    PlayTimeCounter_Reset();
//    ClearPokedexFlags();
    InitEventData();
    ClearTVShowData();
    ResetGabbyAndTy();
    ClearSecretBases();
    ClearBerryTrees();
    SetMoney(&gSaveBlock1Ptr->money, 3000);
    SetCoins(0);
    ResetLinkContestBoolean();
    ResetGameStats();
    ClearAllContestWinnerPics();
    ClearPlayerLinkBattleRecords();
    InitSeedotSizeRecord();
    InitLotadSizeRecord();
    gPlayerPartyCount = 0;
    ZeroPlayerPartyMons();
    ResetPokemonStorageSystem();
    DeactivateAllRoamers();
    gSaveBlock1Ptr->registeredItemCompat = ITEM_NONE;
    memset(gSaveBlock1Ptr->registeredItems, 0, sizeof(gSaveBlock1Ptr->registeredItems));
    ClearBag();
    NewGameInitPCItems();
    ClearPokeblocks();
    ClearDecorationInventories();
    InitEasyChatPhrases();
    SetMauvilleOldMan();
    InitDewfordTrend();
    ResetFanClub();
    ResetLotteryCorner();
    WarpToTruck();
    RunScriptImmediately(EventScript_ResetAllMapFlags);
    ResetMiniGamesRecords();
    InitUnionRoomChatRegisteredTexts();
    InitLilycoveLady();
    ResetAllApprenticeData();
    ClearRankingHallRecords();
    InitMatchCallCounters();
    ClearMysteryGift();
    WipeTrainerNameRecords();
    ResetTrainerHillResults();
    ResetContestLinkResults();
    memset(gSaveBlock1Ptr->dexNavSearchLevels, 0, sizeof(gSaveBlock1Ptr->dexNavSearchLevels));
    gSaveBlock1Ptr->dexNavChain = 0;
}

static void ResetMiniGamesRecords(void)
{
    CpuFill16(0, &gSaveBlock2Ptr->berryCrush, sizeof(struct BerryCrush));
    SetBerryPowder(&gSaveBlock2Ptr->berryCrush.berryPowderAmount, 0);
    ResetPokemonJumpRecords();
    CpuFill16(0, &gSaveBlock2Ptr->berryPick, sizeof(struct BerryPickingResults));
}

void ClearSav1NotDex(void)
{
    s32 i;

    gSaveBlock1Ptr->savedMusic = 0;
    gSaveBlock1Ptr->weather = 0;
    gSaveBlock1Ptr->weatherCycleStage = 0;
    gSaveBlock1Ptr->flashLevel = 0;
    gSaveBlock1Ptr->mapLayoutId = 0;
    gSaveBlock1Ptr->playerPartyCount = 0;
    gSaveBlock1Ptr->berryBlenderRecords[0] = 0;
    gSaveBlock1Ptr->berryBlenderRecords[1] = 0;
    gSaveBlock1Ptr->berryBlenderRecords[2] = 0;
    gSaveBlock1Ptr->trainerRematchStepCounter = 0;

	for (i = 0; i < MAX_REMATCH_ENTRIES; i++)
    {
        gSaveBlock1Ptr->trainerRematches[i] = 0;
    }

    CpuFill16(0, &gSaveBlock1Ptr->objectEvents, sizeof(struct ObjectEvent));
    CpuFill16(0, &gSaveBlock1Ptr->objectEventTemplates, sizeof(struct ObjectEventTemplate));
/* This might be covered by InitEventData
	for (i = 0; i < NUM_FLAG_BYTES; i++)
    {
        gSaveBlock1Ptr->flags[i] = 0;
    }

	for (i = 0; i < VARS_COUNT; i++)
    {
        gSaveBlock1Ptr->vars[i] = 0;
    }
*/
    EndMassOutbreak();
    TakePokemonFromDaycare();
    TakePokemonFromDaycare();

	for (i = 0; i < GIFT_RIBBONS_COUNT; i++)
    {
        gSaveBlock1Ptr->giftRibbons[i] = 0;
    }

    CpuFill32(0, &gSaveBlock1Ptr->externalEventData, sizeof(struct ExternalEventData));
    CpuFill32(0, &gSaveBlock1Ptr->externalEventFlags, sizeof(struct ExternalEventFlags));
    CpuFill32(0, &gSaveBlock1Ptr->roamer, sizeof(struct Roamer));
    CpuFill32(0, &gSaveBlock1Ptr->enigmaBerry, sizeof(struct EnigmaBerry));
    CpuFill32(0, &gSaveBlock1Ptr->mysteryGift, sizeof(struct MysteryGiftSave));
    CpuFill32(0, &gSaveBlock1Ptr->ramScript, sizeof(struct RamScript));
    CpuFill32(0, &gSaveBlock1Ptr->recordMixingGift, sizeof(struct RecordMixingGift));
    CpuFill32(0, &gSaveBlock1Ptr->recordMixingGift, sizeof(struct RecordMixingGift));
    gSaveBlock1Ptr->pokevial.Size = VIAL_MIN_SIZE;
    gSaveBlock1Ptr->pokevial.Dose = VIAL_MIN_SIZE;
}
