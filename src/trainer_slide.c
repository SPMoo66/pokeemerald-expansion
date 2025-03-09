#include "global.h"
#include "battle.h"
#include "battle_anim.h"
#include "battle_controllers.h"
#include "battle_message.h"
#include "battle_setup.h"
#include "battle_tower.h"
#include "battle_z_move.h"
#include "data.h"
#include "event_data.h"
#include "frontier_util.h"
#include "graphics.h"
#include "international_string_util.h"
#include "item.h"
#include "link.h"
#include "menu.h"
#include "palette.h"
#include "recorded_battle.h"
#include "string_util.h"
#include "strings.h"
#include "test_runner.h"
#include "text.h"
#include "trainer_hill.h"
#include "window.h"
#include "line_break.h"
#include "constants/abilities.h"
#include "constants/battle_dome.h"
#include "constants/battle_string_ids.h"
#include "constants/frontier_util.h"
#include "constants/items.h"
#include "constants/moves.h"
#include "constants/opponents.h"
#include "constants/species.h"
#include "constants/trainers.h"
#include "constants/trainer_hill.h"
#include "constants/weather.h"
#include "trainer_slide.h"
#include "battle_message.h"

static u32 BattlerHPPercentage(u32 battler, u32 operation, u32 threshold);
static u32 GetEnemyMonCount(u32 firstId, u32 lastId, bool32 onlyAlive);
static bool32 DoesTrainerHaveSlideMessage(enum DifficultyLevel difficulty, u32 trainerId, u32 slideId);
static bool32 ShouldRunTrainerSlidePlayerLandsFirstCriticalHit(enum TrainerSlideType slideId);
static bool32 ShouldRunTrainerSlideEnemyLandsFirstCriticalHit(enum TrainerSlideType slideId);
static bool32 ShouldRunTrainerSlidePlayerLandsFirstSuperEffectiveHit(u32 battler, enum TrainerSlideType slideId);
static bool32 ShouldRunTrainerSlidePlayerLandsFirstSTABMove(u32 firstId, u32 lastId, enum TrainerSlideType slideId);
static bool32 ShouldRunTrainerSlidePlayerLandsFirstDown(u32 firstId, u32 lastId);
static bool32 ShouldRunTrainerSlideEnemyMonUnaffected(u32 firstId, u32 lastId, enum TrainerSlideType slideId);
static bool32 ShouldRunTrainerSlideLastSwitchIn(u32 battler);
static bool32 ShouldRunTrainerSlideLastHalfHP(u32 firstId, u32 lastId, u32 battler);
static bool32 ShouldRunTrainerSlideLastLowHp(u32 firstId, u32 lastId, u32 battler);
static void SetTrainerSlideParamters(u32 battler, u32* firstId, u32* lastId, u32* trainerId, u32* retValue);
static bool32 IsSlideInitalizedOrPlayed(enum TrainerSlideType slideId);



static const u8 sText_FirstDownRoxanne[] = _("I just have to apply what I've\nlearned in school. Then, I'll win!");
static const u8 sText_FirstDownBrawly[] = _("Whoa, that's what I'm talking about!");
static const u8 sText_FirstDownWattson[] = _("Wahaha! What a shock!");
static const u8 sText_FirstDownFlannery[] = _("Shoot, what line am I supposed to say?");
static const u8 sText_FirstDownNorman[] = _("Oh? You've become strong!");
static const u8 sText_FirstDownWinona[] = _("Ha!\nCome, rise up!");
static const u8 sText_FirstDownLizaTate[] = _("Liza: The stars will guide us!");
static const u8 sText_FirstDownJuan[] = _("Yes! Let me embrace your artistry!");
static const u8 sText_FirstDownSidney[] = _("Yeah! My blood's pumping!");
static const u8 sText_FirstDownPhoebe[] = _("Are the bonds you share enough to\nbeat ours?");
static const u8 sText_FirstDownGlacia[] = _("Is that the best that one from\nHoenn can bring?");
static const u8 sText_FirstDownDrake[] = _("Is that luck… or skill?");
static const u8 sText_FirstDownWallace[] = _("");
static const u8 sText_LastSwitchRoxanne[] = _("No… What was I supposed to do in\nthis situation?");
static const u8 sText_LastSwitchBrawly[] = _("Great show!\nBut there's no wave I can't conquer!");
static const u8 sText_LastSwitchWattson[] = _("Let's see if you get past this last\ntrap I've laid!");
static const u8 sText_LastSwitchFlannery[] = _("Ah! Trainer!\nI've not lost yet!");
static const u8 sText_LastSwitchNorman[] = _("{B_PLAYER_NAME}, I'm so proud…");
static const u8 sText_LastSwitchWinona[] = _("Every great tale has its climax…\nEn garde!");
static const u8 sText_LastSwitchLizaTate[] = _("Tate: Liza, focus!");
static const u8 sText_LastSwitchJuan[] = _("Glitz! Glamor!\nShow me all you have!");
static const u8 sText_LastSwitchSidney[] = _("Keep it up, or I'll knock you out!");
static const u8 sText_LastSwitchPhoebe[] = _("Down to the last…\nWe can do this.");
static const u8 sText_LastSwitchGlacia[] = _("A trainer of your strength has been\nsuch a rare occurrence!");
static const u8 sText_LastSwitchDrake[] = _("Pay attention now. It's far from over!");
static const u8 sText_LastSwitchWallace[] = _("Keep this dance going!");
static const u8 sText_LastSwitchMaxieMtChimney[] = _("I must last…\nUntil the Meteorite…");
static const u8 sText_LastSwitchMaxieMagmaHideout[] = _("Where is… Groudon?");
static const u8 sText_LastSwitchMaxieMossdeep[] = _("No… Not this plan too!");
static const u8 sText_LastSwitchArchie[] = _("How 'boat that?\nWe're down to the last…");
static const u8 sText_MegaLizaTate[] = _("Tate: Now!\nLiza: Mega Evolution!");
static const u8 sText_MegaJuan[] = _("Now, to display even greater beauty!\nDance with me!");
static const u8 sText_MegaSidney[] = _("What a show!\nCome on, Centiskorch!");
static const u8 sText_MegaPhoebe[] = _("Hydreigon, help me finish this out!");
static const u8 sText_MegaGlacia[] = _("Let me cool down your drive.");
static const u8 sText_MegaDrake[] = _("Flygon, let's put an end to this!");
static const u8 sText_MegaWallace[] = _("Yes, more power is what I'll need to\nkeep up with you!");
static const u8 sText_MegaMaxieMagmaHideout[] = _("Sandaconda!\nUse this power!");
static const u8 sText_MegaArchie[] = _("No! More power!");
static const u8 sText_CriticalHitMaxie[] = _("Child! Stop that at once!");
static const u8 sText_CriticalHitArchie[] = _("Ha! Bring it on, kid!");
static const u8 sText_LastHalfSidney[] = _("Come on, time for the photo finish!");
static const u8 sText_LastHalfPhoebe[] = _("{B_PLAYER_NAME}, it seems that\nyou've overcome a lot.");
static const u8 sText_LastHalfGlacia[] = _("What a fiery spirit you have within you!");
static const u8 sText_LastHalfDrake[] = _("Yes… it seems like you may know what\nyou need to be a trainer.");
static const u8 sText_LastHalfWallace[] = _("And now, the final step!");
static const u8 sText_LastHalfMaxieMossdeep[] = _("Hah… Is this… the end?");
static const u8 sText_LastHalfArchie[] = _("Hah…\nIt's looking pretty grim now.");
static const u8 sText_BeforeFirstTurnWallace[] = _("I know your strength, but now is your\nchance to show the world!");


static const u8* const sTrainerSlides[DIFFICULTY_COUNT][TRAINERS_COUNT][TRAINER_SLIDE_COUNT] =
{
    [DIFFICULTY_NORMAL] =
    {
        [TRAINER_ROXANNE_1] =
		{
            [TRAINER_SLIDE_PLAYER_LANDS_FIRST_DOWN] = sText_FirstDownRoxanne,
            [TRAINER_SLIDE_LAST_SWITCHIN] = sText_LastSwitchRoxanne,
        },
        [TRAINER_BRAWLY_1] =
		{
            [TRAINER_SLIDE_PLAYER_LANDS_FIRST_DOWN] = sText_FirstDownBrawly,
            [TRAINER_SLIDE_LAST_SWITCHIN] = sText_LastSwitchBrawly,
        },
        [TRAINER_WATTSON_1] =
		{
            [TRAINER_SLIDE_PLAYER_LANDS_FIRST_DOWN] = sText_FirstDownWattson,
            [TRAINER_SLIDE_LAST_SWITCHIN] = sText_LastSwitchWattson,
        },
        [TRAINER_FLANNERY_1] =
		{
            [TRAINER_SLIDE_PLAYER_LANDS_FIRST_DOWN] = sText_FirstDownFlannery,
            [TRAINER_SLIDE_LAST_SWITCHIN] = sText_LastSwitchFlannery
        },
        [TRAINER_NORMAN_1] =
		{
            [TRAINER_SLIDE_PLAYER_LANDS_FIRST_DOWN] = sText_FirstDownNorman,
            [TRAINER_SLIDE_LAST_SWITCHIN] = sText_LastSwitchNorman
        },
        [TRAINER_WINONA_1] =
		{
            [TRAINER_SLIDE_PLAYER_LANDS_FIRST_DOWN] = sText_FirstDownWinona,
            [TRAINER_SLIDE_LAST_SWITCHIN] = sText_LastSwitchWinona
        },
        [TRAINER_TATE_AND_LIZA_1] =
		{
            [TRAINER_SLIDE_PLAYER_LANDS_FIRST_DOWN] = sText_FirstDownLizaTate,
            [TRAINER_SLIDE_MEGA_EVOLUTION] = sText_MegaLizaTate,
            [TRAINER_SLIDE_LAST_SWITCHIN] = sText_LastSwitchLizaTate
        },
        [TRAINER_JUAN_1] =
		{
            [TRAINER_SLIDE_PLAYER_LANDS_FIRST_DOWN] = sText_FirstDownJuan,
            [TRAINER_SLIDE_MEGA_EVOLUTION] = sText_MegaJuan,
            [TRAINER_SLIDE_LAST_SWITCHIN] = sText_LastSwitchJuan
        },
        [TRAINER_SIDNEY] =
		{
            [TRAINER_SLIDE_PLAYER_LANDS_FIRST_DOWN] = sText_FirstDownSidney,
            [TRAINER_SLIDE_MEGA_EVOLUTION] = sText_MegaSidney,
            [TRAINER_SLIDE_LAST_SWITCHIN] = sText_LastSwitchSidney,
            [TRAINER_SLIDE_LAST_HALF_HP] = sText_LastHalfSidney
        },
        [TRAINER_PHOEBE] =
		{
            [TRAINER_SLIDE_PLAYER_LANDS_FIRST_DOWN] = sText_FirstDownPhoebe,
            [TRAINER_SLIDE_MEGA_EVOLUTION] = sText_MegaPhoebe,
            [TRAINER_SLIDE_LAST_SWITCHIN] = sText_LastSwitchPhoebe,
            [TRAINER_SLIDE_LAST_HALF_HP] = sText_LastHalfPhoebe
        },
        [TRAINER_GLACIA] =
		{
            [TRAINER_SLIDE_PLAYER_LANDS_FIRST_DOWN] = sText_FirstDownGlacia,
            [TRAINER_SLIDE_MEGA_EVOLUTION] = sText_MegaGlacia,
            [TRAINER_SLIDE_LAST_SWITCHIN] = sText_LastSwitchGlacia,
            [TRAINER_SLIDE_LAST_HALF_HP] = sText_LastHalfGlacia
        },
        [TRAINER_DRAKE] =
		{
            [TRAINER_SLIDE_PLAYER_LANDS_FIRST_DOWN] = sText_FirstDownDrake,
            [TRAINER_SLIDE_MEGA_EVOLUTION] = sText_MegaDrake,
            [TRAINER_SLIDE_LAST_SWITCHIN] = sText_LastSwitchDrake,
            [TRAINER_SLIDE_LAST_HALF_HP] = sText_LastHalfDrake
        },
        [TRAINER_WALLACE] =
		{
            [TRAINER_SLIDE_BEFORE_FIRST_TURN] = sText_BeforeFirstTurnWallace,
            [TRAINER_SLIDE_PLAYER_LANDS_FIRST_DOWN] = sText_FirstDownWallace,
            [TRAINER_SLIDE_MEGA_EVOLUTION] = sText_MegaWallace,
            [TRAINER_SLIDE_LAST_SWITCHIN] = sText_LastSwitchWallace,
            [TRAINER_SLIDE_LAST_HALF_HP] = sText_LastHalfWallace
        },
        [TRAINER_ARCHIE] =
		{
            [TRAINER_SLIDE_MEGA_EVOLUTION] = sText_MegaArchie,
            [TRAINER_SLIDE_LAST_SWITCHIN] = sText_LastSwitchArchie,
            [TRAINER_SLIDE_LAST_HALF_HP] = sText_LastHalfArchie,
            [TRAINER_SLIDE_PLAYER_LANDS_FIRST_CRITICAL_HIT] = sText_CriticalHitArchie
        },
        [TRAINER_MAXIE_MT_CHIMNEY] =
		{
            [TRAINER_SLIDE_LAST_SWITCHIN] = sText_LastSwitchMaxieMtChimney,
            [TRAINER_SLIDE_PLAYER_LANDS_FIRST_CRITICAL_HIT] = sText_CriticalHitMaxie
        },
        [TRAINER_MAXIE_MAGMA_HIDEOUT] =
		{
            [TRAINER_SLIDE_MEGA_EVOLUTION] = sText_MegaMaxieMagmaHideout,
            [TRAINER_SLIDE_LAST_SWITCHIN] = sText_LastSwitchMaxieMagmaHideout,
            [TRAINER_SLIDE_PLAYER_LANDS_FIRST_CRITICAL_HIT] = sText_CriticalHitMaxie
        },
        [TRAINER_MAXIE_MOSSDEEP] =
		{
            [TRAINER_SLIDE_LAST_SWITCHIN] = sText_LastSwitchMaxieMossdeep,
            [TRAINER_SLIDE_LAST_HALF_HP] = sText_LastHalfMaxieMossdeep,
            [TRAINER_SLIDE_PLAYER_LANDS_FIRST_CRITICAL_HIT] = sText_CriticalHitMaxie
        }
    },
};

static const u8* const sFrontierTrainerSlides[DIFFICULTY_COUNT][FRONTIER_TRAINERS_COUNT][TRAINER_SLIDE_COUNT] =
{
    [DIFFICULTY_NORMAL] =
    {
    },
};

static const u8* const sTestTrainerSlides[DIFFICULTY_COUNT][TRAINERS_COUNT][TRAINER_SLIDE_COUNT] =
{
#include "../test/battle/trainer_slides.h"
};

static u32 BattlerHPPercentage(u32 battler, u32 operation, u32 threshold)
{
    switch (operation)
    {
        case LESS_THAN:
            return gBattleMons[battler].hp < (gBattleMons[battler].maxHP / threshold);
        case EQUAL:
            return gBattleMons[battler].hp == (gBattleMons[battler].maxHP / threshold);
        case GREATER_THAN:
            return gBattleMons[battler].hp > (gBattleMons[battler].maxHP / threshold);
        case LESS_THAN_OR_EQUAL:
            return gBattleMons[battler].hp <= (gBattleMons[battler].maxHP / threshold);
        case GREATER_THAN_OR_EQUAL:
            return gBattleMons[battler].hp >= (gBattleMons[battler].maxHP / threshold);
        case NOT_EQUAL:
        default:
            return gBattleMons[battler].hp != (gBattleMons[battler].maxHP / threshold);
    }
}

static u32 GetEnemyMonCount(u32 firstId, u32 lastId, bool32 onlyAlive)
{
    u32 i, count = 0;

    for (i = firstId; i < lastId; i++)
    {
        u32 species = GetMonData(&gEnemyParty[i], MON_DATA_SPECIES_OR_EGG, NULL);
        if (species != SPECIES_NONE
                && species != SPECIES_EGG
                && (!onlyAlive || GetMonData(&gEnemyParty[i], MON_DATA_HP, NULL)))
            count++;
    }

    return count;
}

static const u8* const *GetTrainerSlideArray(enum DifficultyLevel difficulty, u32 trainerId, u32 slideId)
{
    if (gBattleTypeFlags & BATTLE_TYPE_FRONTIER)
        return sFrontierTrainerSlides[difficulty][trainerId];
    else if (TESTING)
        return sTestTrainerSlides[difficulty][trainerId];
    else
        return sTrainerSlides[difficulty][trainerId];
}

static bool32 DoesTrainerHaveSlideMessage(enum DifficultyLevel difficulty, u32 trainerId, u32 slideId)
{
    const u8* const *trainerSlides = GetTrainerSlideArray(difficulty, trainerId, slideId);
    const u8* const *trainerSlidesNormal = GetTrainerSlideArray(DIFFICULTY_NORMAL, trainerId, slideId);

    if (trainerSlides[slideId] == NULL)
        return (trainerSlidesNormal[slideId] != NULL);
    else
        return TRUE;
}

void SetTrainerSlideMessage(enum DifficultyLevel difficulty, u32 trainerId, u32 slideId)
{
    const u8* const *trainerSlides = GetTrainerSlideArray(difficulty, trainerId, slideId);
    const u8* const *trainerSlidesNormal = GetTrainerSlideArray(DIFFICULTY_NORMAL, trainerId, slideId);

    if (trainerSlides[slideId] != NULL)
        gBattleStruct->trainerSlideMsg = trainerSlides[slideId];
    else
        gBattleStruct->trainerSlideMsg = trainerSlidesNormal[slideId];
}

static bool32 ShouldRunTrainerSlidePlayerLandsFirstCriticalHit(enum TrainerSlideType slideId)
{
    return IsTrainerSlideInitialized(slideId);
}

static bool32 ShouldRunTrainerSlideEnemyLandsFirstCriticalHit(enum TrainerSlideType slideId)
{
    return IsTrainerSlideInitialized(slideId);
}

static bool32 ShouldRunTrainerSlidePlayerLandsFirstSuperEffectiveHit(u32 battler, enum TrainerSlideType slideId)
{
    if (!IsTrainerSlideInitialized(slideId))
        return FALSE;

    if (!IsBattlerAlive(battler))
        return FALSE;

    return TRUE;
}

static bool32 ShouldRunTrainerSlidePlayerLandsFirstSTABMove(u32 firstId, u32 lastId, enum TrainerSlideType slideId)
{
    if (!IsTrainerSlideInitialized(slideId))
        return FALSE;

    if (GetEnemyMonCount(firstId, lastId, TRUE) != GetEnemyMonCount(firstId, lastId, FALSE))
        return FALSE;

    return TRUE;
}

static bool32 ShouldRunTrainerSlidePlayerLandsFirstDown(u32 firstId, u32 lastId)
{
    return ((GetEnemyMonCount(firstId, lastId, TRUE) == (GetEnemyMonCount(firstId, lastId, FALSE) - 1)));
}

static bool32 ShouldRunTrainerSlideEnemyMonUnaffected(u32 firstId, u32 lastId, enum TrainerSlideType slideId)
{
    if (!IsTrainerSlideInitialized(slideId))
        return FALSE;

    return (GetEnemyMonCount(firstId, lastId, TRUE) == GetEnemyMonCount(firstId, lastId, FALSE));
}

static bool32 ShouldRunTrainerSlideLastSwitchIn(u32 battler)
{
    return !CanBattlerSwitch(battler);
}

static bool32 ShouldRunTrainerSlideLastHalfHP(u32 firstId, u32 lastId, u32 battler)
{
    if (GetEnemyMonCount(firstId, lastId, TRUE) != 1)
        return FALSE;

    if (BattlerHPPercentage(battler, GREATER_THAN, 2))
        return FALSE;

    return (BattlerHPPercentage(battler, GREATER_THAN, 4));
}

static bool32 ShouldRunTrainerSlideLastLowHp(u32 firstId, u32 lastId, u32 battler)
{
    if (GetEnemyMonCount(firstId, lastId, TRUE) != 1)
        return FALSE;

    return (BattlerHPPercentage(battler, LESS_THAN_OR_EQUAL, 4));
}

static void SetTrainerSlideParamters(u32 battler, u32* firstId, u32* lastId, u32* trainerId, u32* retValue)
{
    if (gBattleTypeFlags & BATTLE_TYPE_TWO_OPPONENTS)
    {
        if (gBattlerPartyIndexes[battler] >= MULTI_PARTY_SIZE)
        {
            *firstId = MULTI_PARTY_SIZE;
            *lastId = PARTY_SIZE;
            *trainerId = SanitizeTrainerId(TRAINER_BATTLE_PARAM.opponentB);
            *retValue = TRAINER_SLIDE_TARGET_TRAINER_B;
        }
        else
        {
            *firstId = 0;
            *lastId = MULTI_PARTY_SIZE;
            *trainerId = SanitizeTrainerId(TRAINER_BATTLE_PARAM.opponentA);
        }
    }
    else
    {
        *firstId = 0;
        *lastId = PARTY_SIZE;
        *trainerId = SanitizeTrainerId(TRAINER_BATTLE_PARAM.opponentA);
    }
}

enum TrainerSlideTargets ShouldDoTrainerSlide(u32 battler, enum TrainerSlideType slideId)
{
    u32 firstId, lastId, trainerId;
    u32 retValue = TRAINER_SLIDE_TARGET_TRAINER_A;
    bool32 shouldRun = FALSE;

    if (!(gBattleTypeFlags & BATTLE_TYPE_TRAINER) || GetBattlerSide(battler) != B_SIDE_OPPONENT)
        return TRAINER_SLIDE_TARGET_NONE;

    SetTrainerSlideParamters(battler, &firstId, &lastId, &trainerId, &retValue);
    enum DifficultyLevel difficulty = GetCurrentDifficultyLevel();

    gBattleScripting.battler = battler;

    if (IsTrainerSlidePlayed(slideId))
        return TRAINER_SLIDE_TARGET_NONE;

    if (!DoesTrainerHaveSlideMessage(difficulty,trainerId,slideId))
        return TRAINER_SLIDE_TARGET_NONE;

    switch (slideId)
    {
        case TRAINER_SLIDE_PLAYER_LANDS_FIRST_CRITICAL_HIT:
            shouldRun = ShouldRunTrainerSlidePlayerLandsFirstCriticalHit(slideId);
            break;
        case TRAINER_SLIDE_ENEMY_LANDS_FIRST_CRITICAL_HIT:
            shouldRun = ShouldRunTrainerSlideEnemyLandsFirstCriticalHit(slideId);
            break;
        case TRAINER_SLIDE_PLAYER_LANDS_FIRST_SUPER_EFFECTIVE_HIT:
            shouldRun = ShouldRunTrainerSlidePlayerLandsFirstSuperEffectiveHit(battler, slideId);
            break;
        case TRAINER_SLIDE_PLAYER_LANDS_FIRST_STAB_MOVE:
            shouldRun = ShouldRunTrainerSlidePlayerLandsFirstSTABMove(firstId, lastId, slideId);
            break;
        case TRAINER_SLIDE_PLAYER_LANDS_FIRST_DOWN:
            shouldRun = ShouldRunTrainerSlidePlayerLandsFirstDown(firstId, lastId);
            break;
        case TRAINER_SLIDE_ENEMY_MON_UNAFFECTED:
            shouldRun = ShouldRunTrainerSlideEnemyMonUnaffected(firstId, lastId, slideId);
            break;
        case TRAINER_SLIDE_LAST_SWITCHIN:
            shouldRun = ShouldRunTrainerSlideLastSwitchIn(battler);
            break;
        case TRAINER_SLIDE_LAST_HALF_HP:
            shouldRun = ShouldRunTrainerSlideLastHalfHP(firstId, lastId, battler);
            break;
        case TRAINER_SLIDE_LAST_LOW_HP:
            shouldRun = ShouldRunTrainerSlideLastLowHp(firstId, lastId, battler);
            break;
        case TRAINER_SLIDE_BEFORE_FIRST_TURN:
        case TRAINER_SLIDE_MEGA_EVOLUTION:
        case TRAINER_SLIDE_Z_MOVE:
        case TRAINER_SLIDE_DYNAMAX:
            shouldRun = TRUE;
            break;
        default:
            return TRAINER_SLIDE_TARGET_NONE;
    }

    if (shouldRun == FALSE)
        return TRAINER_SLIDE_TARGET_NONE;

    MarkTrainerSlideAsPlayed(slideId);
    SetTrainerSlideMessage(difficulty,trainerId,slideId);
    return retValue;
}

static bool32 IsSlideInitalizedOrPlayed(enum TrainerSlideType slideId)
{
    if (IsTrainerSlideInitialized(slideId))
        return TRUE;

    if (IsTrainerSlidePlayed(slideId))
        return TRUE;

    return FALSE;
}

void TryInitializeFirstSTABMoveTrainerSlide(u32 battlerDef, u32 battlerAtk, u32 moveType)
{
    enum TrainerSlideType slideId = TRAINER_SLIDE_PLAYER_LANDS_FIRST_STAB_MOVE;

    if (IsSlideInitalizedOrPlayed(slideId))
        return;

    if ((GetBattlerSide(battlerDef) == B_SIDE_PLAYER))
        return;

    if (IS_BATTLER_OF_TYPE(battlerAtk, moveType) == FALSE)
        return;

    InitalizeTrainerSlide(slideId);
}

void TryInitializeTrainerSlidePlayerLandsFirstCriticalHit(u32 target)
{
    enum TrainerSlideType slideId = TRAINER_SLIDE_PLAYER_LANDS_FIRST_CRITICAL_HIT;

    if (IsSlideInitalizedOrPlayed(slideId))
        return;

    if (GetBattlerSide(target) == B_SIDE_PLAYER)
        return;

    InitalizeTrainerSlide(slideId);
}

void TryInitializeTrainerSlideEnemyLandsFirstCriticalHit(u32 target)
{
    enum TrainerSlideType slideId = TRAINER_SLIDE_ENEMY_LANDS_FIRST_CRITICAL_HIT;

    if (IsSlideInitalizedOrPlayed(slideId))
        return;

    if (GetBattlerSide(target) == B_SIDE_OPPONENT)
        return;

    InitalizeTrainerSlide(slideId);
}

void TryInitializeTrainerSlidePlayerLandsFirstSuperEffectiveHit(u32 target)
{
    enum TrainerSlideType slideId = TRAINER_SLIDE_PLAYER_LANDS_FIRST_SUPER_EFFECTIVE_HIT;

    if (IsSlideInitalizedOrPlayed(slideId))
        return;

    if (GetBattlerSide(target) == B_SIDE_PLAYER)
        return;

    InitalizeTrainerSlide(slideId);
}

void TryInitializeTrainerSlideEnemyMonUnaffected(u32 target)
{
    enum TrainerSlideType slideId = TRAINER_SLIDE_ENEMY_MON_UNAFFECTED;

    if (IsSlideInitalizedOrPlayed(slideId))
        return;

    if (GetBattlerSide(target) != B_SIDE_OPPONENT)
        return;

    InitalizeTrainerSlide(slideId);
}

bool32 IsTrainerSlideInitialized(enum TrainerSlideType slideId)
{
    u32 arrayIndex = slideId / TRAINER_SLIDES_PER_ARRAY;
    u32 bitPosition = slideId % TRAINER_SLIDES_PER_ARRAY;

    return (gBattleStruct->slideMessageStatus.messageInitalized[arrayIndex] & (1 << bitPosition)) != 0;
}

bool32 IsTrainerSlidePlayed(enum TrainerSlideType slideId)
{
    u32 arrayIndex = slideId / TRAINER_SLIDES_PER_ARRAY;
    u32 bitPosition = slideId % TRAINER_SLIDES_PER_ARRAY;

    return (gBattleStruct->slideMessageStatus.messagePlayed[arrayIndex] & (1 << bitPosition)) != 0;
}

void InitalizeTrainerSlide(enum TrainerSlideType slideId)
{
    u32 arrayIndex = slideId / TRAINER_SLIDES_PER_ARRAY;
    u32 bitPosition = slideId % TRAINER_SLIDES_PER_ARRAY;

    gBattleStruct->slideMessageStatus.messageInitalized[arrayIndex] |= (1 << bitPosition);
}

void MarkTrainerSlideAsPlayed(enum TrainerSlideType slideId)
{
    u32 arrayIndex = slideId / TRAINER_SLIDES_PER_ARRAY;
    u32 bitPosition = slideId % TRAINER_SLIDES_PER_ARRAY;

    gBattleStruct->slideMessageStatus.messagePlayed[arrayIndex] |= (1 << bitPosition);
}
