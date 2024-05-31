#include "constants/abilities.h"
#include "species_info/shared_dex_text.h"

// Macros for ease of use.

#define EVOLUTION(...) (const struct Evolution[]) { __VA_ARGS__, { EVOLUTIONS_END }, }

#if P_FOOTPRINTS
#define FOOTPRINT(sprite) .footprint = gMonFootprint_## sprite,
#else
#define FOOTPRINT(sprite)
#endif

// Maximum value for a female Pokémon is 254 (MON_FEMALE) which is 100% female.
// 255 (MON_GENDERLESS) is reserved for genderless Pokémon.
#define PERCENT_FEMALE(percent) min(254, ((percent * 255) / 100))

#define MON_TYPES(type1, ...) { type1, DEFAULT(type1, __VA_ARGS__) }
#define MON_EGG_GROUPS(group1, ...) { group1, DEFAULT(group1, __VA_ARGS__) }

#define FLIP    0
#define NO_FLIP 1

const struct SpeciesInfo gSpeciesInfo[] =
{
    [SPECIES_NONE] =
    {
        .speciesName = _("??????????"),
        .cryId = CRY_NONE,
        .natDexNum = NATIONAL_DEX_NONE,
        .categoryName = _("Unknown"),
        .height = 0,
        .weight = 0,
        .description = COMPOUND_STRING(
            "This is a newly discovered Pokémon.\n"
            "It is currently under investigation.\n"
            "No detailed information is available\n"
            "at this time."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_CircledQuestionMark,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_None,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_CircledQuestionMark,
        .backPicSize = MON_COORDS_SIZE(40, 40),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_CircledQuestionMark,
        .shinyPalette = gMonShinyPalette_CircledQuestionMark,
        .iconSprite = gMonIcon_QuestionMark,
        .iconPalIndex = 0,
        FOOTPRINT(QuestionMark)
        .levelUpLearnset = sNoneLevelUpLearnset,
        .teachableLearnset = sNoneTeachableLearnset,
    },

    #include "species_info/gen_1_families.h"
    #include "species_info/gen_2_families.h"
    #include "species_info/gen_3_families.h"
    #include "species_info/gen_4_families.h"
    #include "species_info/gen_5_families.h"
    #include "species_info/gen_6_families.h"
    #include "species_info/gen_7_families.h"
    #include "species_info/gen_8_families.h"
    #include "species_info/gen_9_families.h"

    [SPECIES_EGG] =
    {
        .frontPic = gMonFrontPic_Egg,
        .frontPicSize = MON_COORDS_SIZE(24, 24),
        .frontPicYOffset = 20,
        .backPic = gMonFrontPic_Egg,
        .backPicSize = MON_COORDS_SIZE(24, 24),
        .backPicYOffset = 20,
        .palette = gMonPalette_Egg,
        .shinyPalette = gMonPalette_Egg,
        .iconSprite = gMonIcon_Egg,
        .iconPalIndex = 1,
    },

    [SPECIES_ARSELLOSKY] =
    {
        .baseHP        = 30,
        .baseAttack    = 60,
        .baseDefense   = 70,
        .baseSpeed     = 60,
        .baseSpAttack  = 35,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_STEEL, TYPE_FLYING),
        .catchRate = 120,
        .expYield = 80,
        .evYield_Defense = 1,
        .itemCommon = ITEM_ASPEAR_BERRY,
        .itemRare = ITEM_COBA_BERRY,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_KEEN_EYE, ABILITY_BIG_PECKS, ABILITY_RUN_AWAY },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Arsellosky"),
        .cryId = CRY_SKARMORY,
        .natDexNum = NATIONAL_DEX_ARSELLOSKY,
        .categoryName = _("Plated Bird"),
        .height = 7,
        .weight = 230,
        .description = COMPOUND_STRING(
            "It is born with an iron eggshell\n"
            "that is larger than itself. In its\n"
            "infancy it grows into it before\n"
            "it can begin to fly."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Arsellosky,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_Arsellosky,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Arsellosky,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Arsellosky,
        .shinyPalette = gMonShinyPalette_Arsellosky,
        .iconSprite = gMonIcon_Arsellosky,
        .iconPalIndex = 0,
        //.footprint = gMonFootprint_None,
        .levelUpLearnset = sArselloskyLevelUpLearnset,
        .teachableLearnset = sArselloskyTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 32, SPECIES_SKARMORY},
                                {EVO_ITEM, ITEM_FIRE_STONE, SPECIES_SKARMORY_FRIBIAN}),
    },

    [SPECIES_EVALEON] =
    {
        .baseHP        = 90,
        .baseAttack    = 75,
        .baseDefense   = 75,
        .baseSpeed     = 95,
        .baseSpAttack  = 100,
        .baseSpDefense = 90,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 45,
        .expYield = 184,
        .evYield_Defense = 1,
        .evYield_SpDefense = 1,
        .itemCommon = ITEM_ENIGMA_BERRY,
        .itemRare = ITEM_SITRUS_BERRY,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 35,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_FRIEND_GUARD, ABILITY_TECHNICIAN, ABILITY_FUR_COAT },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Evaleon"),
        .cryId = CRY_EEVEE,
        .natDexNum = NATIONAL_DEX_EVALEON,
        .categoryName = _("Evolution"),
        .height = 7,
        .weight = 250,
        .description = COMPOUND_STRING(
            "It can use its fluffy tail like a\n"
            "rudimentary paint brush, and is\n"
            "said to be like an open canvas\n"
            "by many of its fans."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Evaleon,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Evaleon,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Evaleon,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Evaleon,
        .shinyPalette = gMonShinyPalette_Evaleon,
        .iconSprite = gMonIcon_Evaleon,
        .iconPalIndex = 2,
        //.footprint = gMonFootprint_None,
        .levelUpLearnset = sEvaleonLevelUpLearnset,
        .teachableLearnset = sEvaleonTeachableLearnset,
    },

    [SPECIES_AEREON] =
    {
        .baseHP        = 65,
        .baseAttack    = 110,
        .baseDefense   = 95,
        .baseSpeed     = 130,
        .baseSpAttack  = 65,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_FLYING),
        .catchRate = 45,
        .expYield = 184,
        .evYield_Speed = 2,
        .itemCommon = ITEM_WACAN_BERRY,
        .itemRare = ITEM_PRETTY_FEATHER,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 35,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_CLOUD_NINE, ABILITY_UNAWARE, ABILITY_GALE_WINGS },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Aereon"),
        .cryId = CRY_EEVEE,
        .natDexNum = NATIONAL_DEX_AEREON,
        .categoryName = _("Cloud"),
        .height = 8,
        .weight = 245,
        .description = COMPOUND_STRING(
            "The clouds that envelop it\n"
            "also offset part of its\n"
            "weight. It can bounce\n"
            "around like a feather."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Aereon,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_Aereon,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Aereon,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Aereon,
        .shinyPalette = gMonShinyPalette_Aereon,
        .iconSprite = gMonIcon_Aereon,
        .iconPalIndex = 2,
        //.footprint = gMonFootprint_None,
        .levelUpLearnset = sAereonLevelUpLearnset,
        .teachableLearnset = sAereonTeachableLearnset,
    },

    [SPECIES_CONTAGEON] =
    {
        .baseHP        = 120,
        .baseAttack    = 70,
        .baseDefense   = 105,
        .baseSpeed     = 60,
        .baseSpAttack  = 70,
        .baseSpDefense = 100,
        .types = MON_TYPES(TYPE_POISON),
        .catchRate = 45,
        .expYield = 184,
        .evYield_Defense = 1,
        .evYield_SpDefense = 1,
        .itemCommon = ITEM_PECHA_BERRY,
        .itemRare = ITEM_BABIRI_BERRY,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 35,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_POISON_TOUCH, ABILITY_CORROSION, ABILITY_NEUTRALIZING_GAS },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Contageon"),
        .cryId = CRY_EEVEE,
        .natDexNum = NATIONAL_DEX_CONTAGEON,
        .categoryName = _("Pandemic"),
        .height = 10,
        .weight = 290,
        .description = COMPOUND_STRING(
            "It leaks out a weak corrosive gas.\n"
            "To the surprise of many, it smells\n"
            "nice and is often used as a basis\n"
            "for perfumes."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Contageon,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Contageon,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Contageon,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Contageon,
        .shinyPalette = gMonShinyPalette_Contageon,
        .iconSprite = gMonIcon_Contageon,
        .iconPalIndex = 2,
        //.footprint = gMonFootprint_None,
        .levelUpLearnset = sContageonLevelUpLearnset,
        .teachableLearnset = sContageonTeachableLearnset,
    },

    [SPECIES_LANEON] =
    {
        .baseHP        = 75,
        .baseAttack    = 60,
        .baseDefense   = 95,
        .baseSpeed     = 65,
        .baseSpAttack  = 110,
        .baseSpDefense = 120,
        .types = MON_TYPES(TYPE_GROUND),
        .catchRate = 45,
        .expYield = 184,
        .evYield_SpAttack = 1,
        .evYield_SpDefense = 1,
        .itemCommon = ITEM_ORAN_BERRY,
        .itemRare = ITEM_YACHE_BERRY,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 35,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_WONDER_SKIN, ABILITY_DRY_SKIN, ABILITY_SOUL_HEART },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Laneon"),
        .cryId = CRY_EEVEE,
        .natDexNum = NATIONAL_DEX_LANEON,
        .categoryName = _("Sun Dried"),
        .height = 10,
        .weight = 255,
        .description = COMPOUND_STRING(
            "It spends its days lying in the dry\n"
            "heat of sun-filled days. Its\n"
            "observations of the world allow it\n"
            "to be prepared when threats appear."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Laneon,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_Laneon,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Laneon,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 6,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Laneon,
        .shinyPalette = gMonShinyPalette_Laneon,
        .iconSprite = gMonIcon_Laneon,
        .iconPalIndex = 2,
        //.footprint = gMonFootprint_None,
        .levelUpLearnset = sLaneonLevelUpLearnset,
        .teachableLearnset = sLaneonTeachableLearnset,
    },

    [SPECIES_SCALEON] =
    {
        .baseHP        = 115,
        .baseAttack    = 80,
        .baseDefense   = 80,
        .baseSpeed     = 90,
        .baseSpAttack  = 80,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_DRAGON),
        .catchRate = 45,
        .expYield = 184,
        .evYield_HP = 2,
        .itemCommon = ITEM_WACAN_BERRY,
        .itemRare = ITEM_PRETTY_FEATHER,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 35,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_HYPER_CUTTER, ABILITY_MARVEL_SCALE, ABILITY_PROTEAN },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Scaleon"),
        .cryId = CRY_EEVEE,
        .natDexNum = NATIONAL_DEX_SCALEON,
        .categoryName = _("Draconic"),
        .height = 10,
        .weight = 290,
        .description = COMPOUND_STRING(
            "It is the result of its own unstable\n"
            "genestics going awry. An unexpected\n"
            "evolution into it can lead to shock\n"
            "and a trainer releasing it."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Scaleon,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_Scaleon,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Scaleon,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 6,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Scaleon,
        .shinyPalette = gMonShinyPalette_Scaleon,
        .iconSprite = gMonIcon_Scaleon,
        .iconPalIndex = 0,
        //.footprint = gMonFootprint_None,
        .levelUpLearnset = sScaleonLevelUpLearnset,
        .teachableLearnset = sScaleonTeachableLearnset,
    },

    [SPECIES_TITANEON] =
    {
        .baseHP        = 140,
        .baseAttack    = 80,
        .baseDefense   = 105,
        .baseSpeed     = 50,
        .baseSpAttack  = 60,
        .baseSpDefense = 90,
        .types = MON_TYPES(TYPE_STEEL),
        .catchRate = 45,
        .expYield = 184,
        .evYield_HP = 2,
        .itemCommon = ITEM_ORAN_BERRY,
        .itemRare = ITEM_METAL_COAT,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 35,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_FULL_METAL_BODY, ABILITY_BULLETPROOF, ABILITY_TRIAGE },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Titaneon"),
        .cryId = CRY_EEVEE,
        .natDexNum = NATIONAL_DEX_TITANEON,
        .categoryName = _("Rampart"),
        .height = 10,
        .weight = 290,
        .description = COMPOUND_STRING(
            "Its scales have a shine like\n"
            "stainless steel. It has been a\n"
            "constant companion as a rescue\n"
            "animal in times of war and strife."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Titaneon,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Titaneon,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Titaneon,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Titaneon,
        .shinyPalette = gMonShinyPalette_Titaneon,
        .iconSprite = gMonIcon_Titaneon,
        .iconPalIndex = 2,
        //.footprint = gMonFootprint_None,
        .levelUpLearnset = sTitaneonLevelUpLearnset,
        .teachableLearnset = sTitaneonTeachableLearnset,
    },

    [SPECIES_APIMARILL] =
    {
        .baseHP        = 100,
        .baseAttack    = 85,
        .baseDefense   = 100,
        .baseSpeed     = 70,
        .baseSpAttack  = 40,
        .baseSpDefense = 100,
        .types = MON_TYPES(TYPE_WATER, TYPE_STEEL),
        .catchRate = 75,
        .expYield = 210,
        .evYield_HP = 1,
        .evYield_Defense = 1,
        .evYield_SpDefense = 1,
        .itemCommon = ITEM_WACAN_BERRY,
        .itemRare = ITEM_SEA_INCENSE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_FAIRY),
        .abilities = { ABILITY_THICK_FAT, ABILITY_STEELY_SPIRIT, ABILITY_SAP_SIPPER },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Apimarill"),
        .cryId = CRY_AZUMARILL,
        .natDexNum = NATIONAL_DEX_APIMARILL,
        .categoryName = _("Flail"),
        .height = 7,
        .weight = 356,
        .description = COMPOUND_STRING(
            "Placeholder\n"
            "Placeholder\n"
            "Placeholder\n"
            "Placeholder"),
        .pokemonScale = 448,
        .pokemonOffset = 16,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Apimarill,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_Apimarill,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Apimarill,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Apimarill,
        .shinyPalette = gMonShinyPalette_Apimarill,
        .iconSprite = gMonIcon_Apimarill,
        .iconPalIndex = 0,
        FOOTPRINT(Azumarill)
        .levelUpLearnset = sApimarillLevelUpLearnset,
        .teachableLearnset = sApimarillTeachableLearnset,
    },

    [SPECIES_SOLFLORA] =
    {
        .baseHP        = 85,
        .baseAttack    = 80,
        .baseDefense   = 75,
        .baseSpeed     = 55,
        .baseSpAttack  = 130,
        .baseSpDefense = 100,
        .types = MON_TYPES(TYPE_GRASS, TYPE_FIRE),
        .catchRate = 30,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 200 : 160,
        .evYield_SpAttack = 2,
        .evYield_SpDefense = 1,
        .itemCommon = ITEM_COBA_BERRY,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_GRASS),
        .abilities = { ABILITY_CHLOROPHYLL, ABILITY_SOLAR_POWER, ABILITY_DRY_SKIN },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Solflora"),
        .cryId = CRY_SUNFLORA,
        .natDexNum = NATIONAL_DEX_SOLFLORA,
        .categoryName = _("Sun"),
        .height = 12,
        .weight = 190,
        .description = COMPOUND_STRING(
            "Placeholder\n"
            "Placeholder\n"
            "Placeholder\n"
            "Placeholder"),
        .pokemonScale = 444,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Solflora,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Solflora,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Solflora,
        .backPicSize = MON_COORDS_SIZE(56, 56),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Solflora,
        .shinyPalette = gMonShinyPalette_Solflora,
        .iconSprite = gMonIcon_Solflora,
        .iconPalIndex = 1,
        FOOTPRINT(Sunflora)
        .levelUpLearnset = sSolfloraLevelUpLearnset,
        .teachableLearnset = sSolfloraTeachableLearnset,
    },

    [SPECIES_DELIJOY] =
    {
        .baseHP        = 80,
        .baseAttack    = 85,
        .baseDefense   = 70,
        .baseSpeed     = 110,
        .baseSpAttack  = 105,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_ICE, TYPE_FLYING),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 183 : 183,
        .evYield_SpAttack = 1,
        .evYield_SpDefense = 1,
		.itemCommon = ITEM_STARDUST,
		.itemRare = ITEM_STAR_PIECE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_FIELD),
        .abilities = { ABILITY_SNOW_WARNING, ABILITY_DAZZLING, ABILITY_SOUL_HEART },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Delijoy"),
        .cryId = CRY_DELIBIRD,
        .natDexNum = NATIONAL_DEX_DELIJOY,
        .categoryName = _("Delivery"),
        .height = 9,
        .weight = 163,
        .description = COMPOUND_STRING(
            "Placeholder\n"
            "Placeholder\n"
            "Placeholder\n"
            "Placeholder"),
        .pokemonScale = 293,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Delijoy,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Delijoy,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 1,
        .backPic = gMonBackPic_Delijoy,
        .backPicSize = MON_COORDS_SIZE(56, 56),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_Delijoy,
        .shinyPalette = gMonShinyPalette_Delijoy,
        .iconSprite = gMonIcon_Delijoy,
        .iconPalIndex = 2,
        FOOTPRINT(Delibird)
        .levelUpLearnset = sDelijoyLevelUpLearnset,
        .teachableLearnset = sDelijoyTeachableLearnset,
    },

    [SPECIES_COGMENT] =
    {
        .baseHP        = 70,
        .baseAttack    = 100,
        .baseDefense   = 60,
        .baseSpeed     = 110,
        .baseSpAttack  = 100,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_ROCK, TYPE_FAIRY),
        .catchRate = 30,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 184 : 184,
        .evYield_Attack = 1,
        .evYield_SpAttack = 1,
		.itemCommon = ITEM_STAR_PIECE,
		.itemRare = ITEM_COMET_SHARD,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_LEVITATE, ABILITY_NONE, ABILITY_NONE},
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Cogment"),
        .cryId = CRY_MINIOR,
        .natDexNum = NATIONAL_DEX_COGMENT,
        .categoryName = _("Meteor"),
        .height = 3,
        .weight = 350,
        .description = COMPOUND_STRING(
            "Placeholder\n"
            "Placeholder\n"
            "Placeholder\n"
            "Placeholder"),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Cogment,
        .frontPicSize = MON_COORDS_SIZE(48, 40),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Delijoy,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 9,
        .backPic = gMonBackPic_Cogment,
        .backPicSize = MON_COORDS_SIZE(56, 56),
        .backPicYOffset = 14,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_Cogment,
        .shinyPalette = gMonShinyPalette_Cogment,
        .iconSprite = gMonIcon_Cogment,
        .iconPalIndex = 2,
        //.footprint = gMonFootprint_None,
        .levelUpLearnset = sCogmentLevelUpLearnset,
        .teachableLearnset = sCogmentTeachableLearnset,
    },



#define MINIOR_MISC_INFO(color)                                             \
        .types = MON_TYPES(TYPE_ROCK, TYPE_FLYING),                         \
        .catchRate = 30,                                                    \
        .expYield = 154,                                                    \
        .evYield_Defense = 1,                                               \
        .evYield_SpDefense = 1,                                             \
        .itemRare = ITEM_STAR_PIECE,                                        \
        .genderRatio = MON_GENDERLESS,                                      \
        .eggCycles = 25,                                                    \
        .friendship = STANDARD_FRIENDSHIP,                                  \
        .growthRate = GROWTH_MEDIUM_SLOW,                                   \
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),                     \
        .abilities = { ABILITY_SHIELDS_DOWN, ABILITY_NONE, ABILITY_NONE },  \
        .bodyColor = color,                                                 \
        .noFlip = TRUE,                                                     \
        .speciesName = _("Minior"),                                         \
        .cryId = CRY_MINIOR,                                                \
        .natDexNum = NATIONAL_DEX_MINIOR,                                   \
        .categoryName = _("Meteor"),                                        \
        .height = 3,                                                        \
        .pokemonScale = 530,                                                \
        .pokemonOffset = 13,                                                \
        .trainerScale = 256,                                                \
        .trainerOffset = 0,                                                 \
        FOOTPRINT(Minior)                                                   \
        .levelUpLearnset = sMiniorLevelUpLearnset,                          \
        .teachableLearnset = sMiniorTeachableLearnset,                      \
        .formSpeciesIdTable = sMiniorFormSpeciesIdTable

#define MINIOR_METEOR_SPECIES_INFO(Form)                        \
    {                                                           \
        .baseHP        = 60,                                    \
        .baseAttack    = 60,                                    \
        .baseDefense   = 100,                                   \
        .baseSpeed     = 60,                                    \
        .baseSpAttack  = 60,                                    \
        .baseSpDefense = 100,                                   \
        .weight = 400,                                          \
        .frontPic = gMonFrontPic_MiniorMeteor,                  \
        .frontPicSize = MON_COORDS_SIZE(48, 40),                \
        .frontPicYOffset = 14,                                  \
        .frontAnimFrames = sAnims_MiniorMeteor,                 \
        .frontAnimId = ANIM_TUMBLING_FRONT_FLIP_TWICE,          \
        .enemyMonElevation = 17,                                \
        .backPic = gMonBackPic_MiniorMeteor,                    \
        .backPicSize = MON_COORDS_SIZE(56, 40),                 \
        .backPicYOffset = 14,                                   \
        /*.backAnimId = BACK_ANIM_NONE,*/                       \
        .palette = gMonPalette_MiniorMeteor,                    \
        .shinyPalette = gMonShinyPalette_MiniorMeteor,          \
        .iconSprite = gMonIcon_MiniorMeteor,                    \
        .iconPalIndex = 0,                                      \
        .formChangeTable = sMinior ##Form##FormChangeTable,     \
        MINIOR_MISC_INFO(BODY_COLOR_BROWN),                     \
    }

};
    /* You may add any custom species below this point based on the following structure: */

    /*
    [SPECIES_NONE] =
    {
        .baseHP        = 1,
        .baseAttack    = 1,
        .baseDefense   = 1,
        .baseSpeed     = 1,
        .baseSpAttack  = 1,
        .baseSpDefense = 1,
        .types = MON_TYPES(TYPE_MYSTERY),
        .catchRate = 255,
        .expYield = 67,
        .evYield_HP = 1,
        .evYield_Defense = 1,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_NONE, ABILITY_CURSED_BODY, ABILITY_DAMP },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("??????????"),
        .cryId = CRY_NONE,
        .natDexNum = NATIONAL_DEX_NONE,
        .categoryName = _("Unknown"),
        .height = 0,
        .weight = 0,
        .description = COMPOUND_STRING(
            "This is a newly discovered Pokémon.\n"
            "It is currently under investigation.\n"
            "No detailed information is available\n"
            "at this time."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_CircledQuestionMark,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        //.frontPicFemale = gMonFrontPic_CircledQuestionMark,
        //.frontPicSizeFemale = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_None,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_CircledQuestionMark,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        //.backPicFemale = gMonBackPic_CircledQuestionMarkF,
        //.backPicSizeFemale = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_CircledQuestionMark,
        .shinyPalette = gMonShinyPalette_CircledQuestionMark,
        //.paletteFemale = gMonPalette_CircledQuestionMarkF,
        .shinyPaletteFemale = gMonShinyPalette_CircledQuestionMarkF,
        .iconSprite = gMonIcon_QuestionMark,
        .iconPalIndex = 0,
        //.iconSpriteFemale = gMonIcon_QuestionMarkF,
        //.iconPalIndexFemale = 1,
        FOOTPRINT(QuestionMark)
        .levelUpLearnset = sNoneLevelUpLearnset,
        .teachableLearnset = sNoneTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 100, SPECIES_NONE},
                                {EVO_ITEM, ITEM_MOOMOO_MILK, SPECIES_NONE}),
        //.formSpeciesIdTable = sNoneFormSpeciesIdTable,
        //.formChangeTable = sNoneFormChangeTable,
        .allPerfectIVs = TRUE,
    },
    */
