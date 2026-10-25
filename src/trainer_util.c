#include "global.h"
#include "main.h"
#include "data.h"
#include "event_data.h"
#include "move.h"
#include "random.h"
#include "string_util.h"
#include "trainer_util.h"
#include "text.h"

#include "constants/battle_ai.h"
#include "constants/pokeball.h"

rng_value_t GeneratePartySeed(const struct Trainer *trainer)
{
    u32 seed = Crc32B((const u8 *)trainer, sizeof(struct Trainer)) ^ READ_OTID_FROM_SAVE;
    return LocalRandomSeed(seed);
}

void CustomTrainerPartyAssignMoves(struct Pokemon *mon, const struct TrainerMon *partyEntry)
{
    bool32 noMoveSet = TRUE;
    u32 j;

    for (j = 0; j < MAX_MON_MOVES; ++j)
    {
        if (partyEntry->moves[j] != MOVE_NONE)
            noMoveSet = FALSE;
    }
    if (noMoveSet)
    {
        GiveMonInitialMoveset(mon);
        // TODO: Figure out a default strategy when moves are not set, to generate a good moveset
        return;
    }

    for (j = 0; j < MAX_MON_MOVES; ++j)
    {
        u32 pp = GetMovePP(partyEntry->moves[j]);
        SetMonData(mon, MON_DATA_MOVE1 + j, &partyEntry->moves[j]);
        SetMonData(mon, MON_DATA_PP1 + j, &pp);
    }
}

u32 GeneratePersonalityForGender(u32 gender, u32 species)
{
    const struct SpeciesInfo *speciesInfo = &gSpeciesInfo[species];
    if (gender == MON_MALE)
    {
        assertf(speciesInfo->genderRatio < MON_FEMALE, "species %d cannot be male", species);
        return ((255 - speciesInfo->genderRatio) / 2) + speciesInfo->genderRatio;
    }
    if (gender == MON_FEMALE)
    {
        assertf(speciesInfo->genderRatio != MON_MALE && speciesInfo->genderRatio != MON_GENDERLESS, "species %d cannot be female", species);
        return speciesInfo->genderRatio / 2;
    }
    if (gender == MON_GENDERLESS)
        assertf(speciesInfo->genderRatio == MON_GENDERLESS, "species %d cannot be genderless", species);
    else
        errorf("GeneratePersonalityForGender called with invalid gender value %d", gender);
    return 0;
}

const u8 sModuloLUT[25] = {0, 21, 17, 13, 9, 5, 1, 22, 18, 14, 10, 6, 2, 23, 19, 15, 11, 7, 3, 24, 20, 16, 12, 8, 4};

static void ModifyPersonalityForNature(u32 *personality, s32 newNature)
{
    s32 nature = GetNatureFromPersonality(*personality);
    s32 diff = abs(newNature - nature);
    s32 sign = (newNature > nature) ? 1 : -1;
    if (diff > NUM_NATURES / 2)
    {
        diff = NUM_NATURES - diff;
        sign *= -1;
    }
    *personality += (sModuloLUT[diff] * 0x100 * sign);
}

static bool32 SetCorrectAbilityNum(struct Pokemon *mon, enum Species species, enum Ability ability)
{
    const struct SpeciesInfo *speciesInfo = &gSpeciesInfo[species];
    u32 abilityNum;
    u32 maxAbilityNum = ARRAY_COUNT(speciesInfo->abilities);
    for (abilityNum = 0; abilityNum < maxAbilityNum; ++abilityNum)
    {
        if (speciesInfo->abilities[abilityNum] == ability)
            break;
    }
    assertf(abilityNum < maxAbilityNum, "illegal ability %S for %S", gAbilitiesInfo[ability].name, speciesInfo->speciesName)
    {
        return FALSE;
    }
    SetMonData(mon, MON_DATA_ABILITY_NUM, &abilityNum);
    return TRUE;
}

void MakeTrainerGenerator(struct TrainerGenerator *trainerGen, const struct Trainer *trainer)
{
    trainerGen->gender = trainer->gender;
    if (trainer->aiFlags & AI_FLAG_SMART_TERA)
        trainerGen->smartTera = TRUE;
    trainerGen->isFrontier = FALSE;
    StringCopyN(trainerGen->name, trainer->trainerName, TRAINER_NAME_LENGTH + 1);
    trainerGen->trainerClass = trainer->trainerClass;
    trainerGen->otID = OTID_STRUCT_RANDOM_NO_SHINY;
    trainerGen->localRngState = GeneratePartySeed(trainer);
}

void MakePartnerGenerator(struct TrainerGenerator *trainerGen, const struct Trainer *partner)
{
    u32 otID;
    trainerGen->gender = partner->gender;
    if (partner->aiFlags & AI_FLAG_SMART_TERA)
        trainerGen->smartTera = TRUE;
    trainerGen->isFrontier = FALSE;
    StringCopyN(trainerGen->name, partner->trainerName, TRAINER_NAME_LENGTH + 1);
    trainerGen->trainerClass = partner->trainerClass;
    otID = Crc32B((const u8 *)partner, sizeof(struct Trainer));
    trainerGen->otID = OTID_STRUCT_PRESET(otID);
    trainerGen->localRngState = LocalRandomSeed(otID);
}

u8 GetMaxLevel(u8 lvl)
{
    s32 i;
    u8 level = 1;
	lvl = 1;
    for (i = 0; i < PARTY_SIZE; i++)
    {
        level = GetMonData(&gParties[B_TRAINER_PLAYER][i], MON_DATA_LEVEL);
        if (level > lvl)
        {
            lvl = level;
        }
    }
	return lvl;
}

void GenerateMonFromTrainerMon(struct Pokemon *mon, const struct TrainerMon *trainerMon, struct TrainerGenerator *trainer)
{
    u32 data;
    u32 personality = (LocalRandom32(&trainer->localRngState) & 0xFFFFDF00) + 0x1000;
    u32 genderValue = 0;
    if (trainerMon->gender == TRAINER_MON_RANDOM_GENDER)
        genderValue = LocalRandom32(&trainer->localRngState) & 0x000000FF;
    else if (trainerMon->gender == TRAINER_MON_MALE)
        genderValue = GeneratePersonalityForGender(MON_MALE, trainerMon->species);
    else if (trainerMon->gender == TRAINER_MON_FEMALE)
        genderValue = GeneratePersonalityForGender(MON_FEMALE, trainerMon->species);
    else
        errorf("Unkwown trainer mon gender value %d", trainerMon->gender);
    personality |= genderValue;
    ModifyPersonalityForNature(&personality, trainerMon->nature);

    if (gSaveBlock2Ptr->optionsLevelSync) { // Checks if the level sync option is set
        u8 lvl = 1;
        lvl = GetMaxLevel(0);
        if (FlagGet(FLAG_IGNORE_LEVEL_SYNC)) // Ignore level sync
        {
            CreateMon(mon, trainerMon->species, trainerMon->lvl, personality, trainer->otID);
        }
        else if (FlagGet(FLAG_CHALLENGING_TRAINER)) // Checks if the Challenging Trainer flag is set, scales to level if so
        {
            CreateMon(mon, trainerMon->species, lvl, personality, trainer->otID);
        }
        else if (FlagGet(FLAG_SUPERBOSS_TRAINER)) // Checks if the Superboss Trainer flag is set, scales to level + 3 if so
        {
            CreateMon(mon, trainerMon->species, lvl + 3, personality, trainer->otID);
        }
        else // If no trainer level flag is set, scales to level - 2
        {
            CreateMon(mon, trainerMon->species, lvl - 2, personality, trainer->otID);
        }
    }
    else if (FlagGet(FLAG_ELITE_FOUR_CHALLENGE)) // This is active at all times during the Elite Four + Champion, cleared after whiteout or completion of Elite Four + Champion
    {                                            // It sets levels to the normally assigned trainer levels during first run, then +10 after completing the game once
        u8 gameClearLevelBoost = 0;
        if (FlagGet(FLAG_SYS_GAME_CLEAR))
            gameClearLevelBoost = 10; // mons are gameClearLevelBoost levels higher when rematching
        CreateMon(mon, trainerMon->species, 57 + VarGet(VAR_ELITE_4_STATE) + gameClearLevelBoost, personality, trainer->otID);
    }
    else
    {
        CreateMon(mon, trainerMon->species, trainerMon->lvl, personality, trainer->otID);
    }

    if (trainerMon->nickname != NULL)
        SetMonData(mon, MON_DATA_NICKNAME, trainerMon->nickname);
    if (trainerMon->ev) //ev in struct TrainerMon are stored in Showdown order not vanilla Emerald order
    {
        SetMonData(mon, MON_DATA_HP_EV, &trainerMon->ev[0]);
        SetMonData(mon, MON_DATA_ATK_EV, &trainerMon->ev[1]);
        SetMonData(mon, MON_DATA_DEF_EV, &trainerMon->ev[2]);
        SetMonData(mon, MON_DATA_SPATK_EV, &trainerMon->ev[3]);
        SetMonData(mon, MON_DATA_SPDEF_EV, &trainerMon->ev[4]);
        SetMonData(mon, MON_DATA_SPEED_EV, &trainerMon->ev[5]);
    }

    SetMonData(mon, MON_DATA_IVS, &trainerMon->iv);
    CustomTrainerPartyAssignMoves(mon, trainerMon);
    SetMonData(mon, MON_DATA_HELD_ITEM, &trainerMon->heldItem);

    bool32 abilitySet = FALSE;
    if (trainerMon->ability)
    {
        abilitySet = SetCorrectAbilityNum(mon, trainerMon->species, trainerMon->ability);
    }

    if (!abilitySet)
    {
        if (B_TRAINER_MON_RANDOM_ABILITY == 2)
        {
            do {
                data = Random() % NUM_ABILITY_SLOTS; // includes hidden abilities
            } while (GetAbilityBySpecies(trainerMon->species, data) == ABILITY_NONE);
            SetMonData(mon, MON_DATA_ABILITY_NUM, &data);
        }
        else if (B_TRAINER_MON_RANDOM_ABILITY == 0)
        {
            data = 0;
            SetMonData(mon, MON_DATA_ABILITY_NUM, &data);
        }
        // else B_TRAINER_MON_RANDOM_ABILITY == 1
        // this is the default from CreateMon (random non-hidden ability based on personality)
    }

    if (trainerMon->ball < POKEBALL_COUNT)
    {
        data = trainerMon->ball;
        SetMonData(mon, MON_DATA_POKEBALL, &data);
    }
    else if (B_TRAINER_CLASS_POKE_BALLS >= GEN_7 && trainer->trainerClass && trainerMon->ball == POKEBALL_COUNT)
    {
        data = gTrainerClasses[trainer->trainerClass].ball ?: BALL_POKE;
        SetMonData(mon, MON_DATA_POKEBALL, &data);
    }
    else if (trainerMon->ball > POKEBALL_COUNT)
    {
        errorf("Invalid ball for %S in %S's party", GetMonData(mon, MON_DATA_NICKNAME), trainer->name);
    }

    SetMonData(mon, MON_DATA_FRIENDSHIP, &trainerMon->friendship);

    data = trainerMon->isShiny;
    SetMonData(mon, MON_DATA_IS_SHINY, &data);
    if (trainerMon->shouldUseDynamax)
    {
        data = trainerMon->dynamaxLevel;
    }
    else
    {
        data = BLOCK_AI_DYNAMAX;
    }
    SetMonData(mon, MON_DATA_DYNAMAX_LEVEL, &data);
    if (trainerMon->gigantamaxFactor)
    {
        data = trainerMon->gigantamaxFactor;
        SetMonData(mon, MON_DATA_GIGANTAMAX_FACTOR, &data);
    }
    if (trainerMon->teraType)
    {
        data = trainerMon->teraType;
        SetMonData(mon, MON_DATA_TERA_TYPE, &data);
    }
    else if (!trainer->smartTera)
    {
        data = TYPE_MYSTERY;
        SetMonData(mon, MON_DATA_TERA_TYPE, &data);
    }

    CalculateMonStats(mon);
    SetMonData(mon, MON_DATA_OT_NAME, trainer->name);
    data = trainer->gender;
    SetMonData(mon, MON_DATA_OT_GENDER, &data);
}
