#include "constants/abilities.h"
#include "constants/teaching_types.h"
#include "species_info/shared_dex_text.h"
#include "species_info/shared_front_pic_anims.h"

// Macros for ease of use.

#define EVOLUTION(...) (const struct Evolution[]) { __VA_ARGS__, { EVOLUTIONS_END }, }
#define CONDITIONS(...) ((const struct EvolutionParam[]) { __VA_ARGS__, {CONDITIONS_END} })

#define ANIM_FRAMES(...) (const union AnimCmd *const[]) { sAnim_GeneralFrame0, (const union AnimCmd[]) { __VA_ARGS__ ANIMCMD_END, }, }

#if P_FOOTPRINTS
#define FOOTPRINT(sprite) .footprint = gMonFootprint_## sprite,
#else
#define FOOTPRINT(sprite)
#endif

#if B_ENEMY_MON_SHADOW_STYLE >= GEN_4 && P_GBA_STYLE_SPECIES_GFX == FALSE
#define SHADOW(x, y, size)  .enemyShadowXOffset = x, .enemyShadowYOffset = y, .enemyShadowSize = size,
#define NO_SHADOW           .suppressEnemyShadow = TRUE,
#else
#define SHADOW(x, y, size)  .enemyShadowXOffset = 0, .enemyShadowYOffset = 0, .enemyShadowSize = 0,
#define NO_SHADOW           .suppressEnemyShadow = FALSE,
#endif

#define SIZE_32x32 1
#define SIZE_64x64 0

// Set .compressed = OW_GFX_COMPRESS
#define COMP OW_GFX_COMPRESS

#if OW_POKEMON_OBJECT_EVENTS
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
#define OVERWORLD_PAL(...)                                  \
    .overworldPalette = DEFAULT(NULL, __VA_ARGS__),         \
    .overworldShinyPalette = DEFAULT_2(NULL, __VA_ARGS__),
#if P_GENDER_DIFFERENCES
#define OVERWORLD_PAL_FEMALE(...)                                 \
    .overworldPaletteFemale = DEFAULT(NULL, __VA_ARGS__),         \
    .overworldShinyPaletteFemale = DEFAULT_2(NULL, __VA_ARGS__),
#else
#define OVERWORLD_PAL_FEMALE(...)
#endif //P_GENDER_DIFFERENCES
#else
#define OVERWORLD_PAL(...)
#define OVERWORLD_PAL_FEMALE(...)
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE

#define OVERWORLD_DATA(picTable, _size, shadow, _tracks, _anims)                                                                     \
{                                                                                                                                       \
    .tileTag = TAG_NONE,                                                                                                                \
    .paletteTag = OBJ_EVENT_PAL_TAG_DYNAMIC,                                                                                            \
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,                                                                                     \
    .size = (_size == SIZE_32x32 ? 512 : 2048),                                                                                         \
    .width = (_size == SIZE_32x32 ? 32 : 64),                                                                                           \
    .height = (_size == SIZE_32x32 ? 32 : 64),                                                                                          \
    .paletteSlot = PALSLOT_NPC_1,                                                                                                       \
    .shadowSize = shadow,                                                                                                               \
    .inanimate = FALSE,                                                                                                                 \
    .compressed = COMP,                                                                                                                 \
    .tracks = _tracks,                                                                                                                  \
    .oam = (_size == SIZE_32x32 ? &gObjectEventBaseOam_32x32 : &gObjectEventBaseOam_64x64),                                             \
    .subspriteTables = (_size == SIZE_32x32 ? sOamTables_32x32 : sOamTables_64x64),                                                     \
    .anims = _anims,                                                                                                                    \
    .images = picTable,                                                                                                                 \
}

#define OVERWORLD(objEventPic, _size, shadow, _tracks, _anims, ...)                                 \
    .overworldData = OVERWORLD_DATA(objEventPic, _size, shadow, _tracks, _anims),                   \
    OVERWORLD_PAL(__VA_ARGS__)

#if P_GENDER_DIFFERENCES
#define OVERWORLD_FEMALE(objEventPic, _size, shadow, _tracks, _anims, ...)                          \
    .overworldDataFemale = OVERWORLD_DATA(objEventPic, _size, shadow, _tracks, _anims),             \
    OVERWORLD_PAL_FEMALE(__VA_ARGS__)
#else
#define OVERWORLD_FEMALE(...)
#endif //P_GENDER_DIFFERENCES

#else
#define OVERWORLD(...)
#define OVERWORLD_FEMALE(...)
#define OVERWORLD_PAL(...)
#define OVERWORLD_PAL_FEMALE(...)
#endif //OW_POKEMON_OBJECT_EVENTS

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
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_NONE,
        .categoryName = _("Unknown"),
        .height = 0,
        .weight = 0,
        .description = gFallbackPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_CircledQuestionMark,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_TwoFramePlaceHolder,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_CircledQuestionMark,
        .backPicSize = MON_COORDS_SIZE(40, 40),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_CircledQuestionMark,
        .shinyPalette = gMonShinyPalette_CircledQuestionMark,
        .iconSprite = gMonIcon_QuestionMark,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        FOOTPRINT(QuestionMark)
        SHADOW(-1, 0, SHADOW_SIZE_M)
    #if OW_POKEMON_OBJECT_EVENTS
        .overworldData = {
            .tileTag = TAG_NONE,
            .paletteTag = OBJ_EVENT_PAL_TAG_SUBSTITUTE,
            .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
            .size = 512,
            .width = 32,
            .height = 32,
            .paletteSlot = PALSLOT_NPC_1,
            .shadowSize = SHADOW_SIZE_M,
            .inanimate = FALSE,
            .compressed = COMP,
            .tracks = TRACKS_FOOT,
            .oam = &gObjectEventBaseOam_32x32,
            .subspriteTables = sOamTables_32x32,
            .anims = sAnimTable_Following,
            .images = sPicTable_Substitute,
        },
    #endif
        .levelUpLearnset = sNoneLevelUpLearnset,
        .teachableLearnset = sNoneTeachableLearnset,
        .eggMoveLearnset = sNoneEggMoveLearnset,
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


// -------------------------------------------------------------------------------------
// -------------------------------------------------------------------------------------
// --------------------------------------- FRiB ----------------------------------------
// -------------------------------------------------------------------------------------
// -------------------------------------------------------------------------------------

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
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Arsellosky,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Arsellosky,
        .shinyPalette = gMonShinyPalette_Arsellosky,
        .iconSprite = gMonIcon_Arsellosky,
        .iconPalIndex = 0,
        SHADOW(1, 11, SHADOW_SIZE_M)
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
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Evaleon,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Evaleon,
        .shinyPalette = gMonShinyPalette_Evaleon,
        .iconSprite = gMonIcon_Evaleon,
        .iconPalIndex = 2,
        SHADOW(0, 14, SHADOW_SIZE_L)
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
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Aereon,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Aereon,
        .shinyPalette = gMonShinyPalette_Aereon,
        .iconSprite = gMonIcon_Aereon,
        .iconPalIndex = 2,
        SHADOW(0, 8, SHADOW_SIZE_M)
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
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Contageon,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Contageon,
        .shinyPalette = gMonShinyPalette_Contageon,
        .iconSprite = gMonIcon_Contageon,
        .iconPalIndex = 2,
        SHADOW(0, 5, SHADOW_SIZE_L)
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
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Laneon,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 6,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Laneon,
        .shinyPalette = gMonShinyPalette_Laneon,
        .iconSprite = gMonIcon_Laneon,
        .iconPalIndex = 2,
        SHADOW(0, 12, SHADOW_SIZE_M)
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
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Scaleon,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 6,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Scaleon,
        .shinyPalette = gMonShinyPalette_Scaleon,
        .iconSprite = gMonIcon_Scaleon,
        .iconPalIndex = 0,
        SHADOW(0, 8, SHADOW_SIZE_L)
        //.footprint = gMonFootprint_None,
        .levelUpLearnset = sScaleonLevelUpLearnset,
        .teachableLearnset = sScaleonTeachableLearnset,
    },

// -------------------------------------------------------------------------------------
// -------------------------------------------------------------------------------------
// ---------------------------------------- EmB ----------------------------------------
// -------------------------------------------------------------------------------------
// -------------------------------------------------------------------------------------

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
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Titaneon,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Titaneon,
        .shinyPalette = gMonShinyPalette_Titaneon,
        .iconSprite = gMonIcon_Titaneon,
        .iconPalIndex = 2,
        SHADOW(-1, 9, SHADOW_SIZE_L)
        //.footprint = gMonFootprint_None,
        .levelUpLearnset = sTitaneonLevelUpLearnset,
        .teachableLearnset = sTitaneonTeachableLearnset,
    },

    [SPECIES_TANGTRIP] =
    {
        .baseHP        = 45,
        .baseAttack    = 35,
        .baseDefense   = 50,
        .baseSpeed     = 50,
        .baseSpAttack  = 35,
        .baseSpDefense = 45,
        .types = MON_TYPES(TYPE_GRASS),
        .catchRate = 100,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 44 : 37,
        .evYield_Defense = 1,
        .itemRare = ITEM_LUM_BERRY,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_GRASS),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_CHLOROPHYLL, ABILITY_LEAF_GUARD, ABILITY_REGENERATOR },
    #else
        .abilities = { ABILITY_CHLOROPHYLL, ABILITY_NONE, ABILITY_REGENERATOR },
    #endif
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Tangtrip"),
        .cryId = CRY_TANGELA,
        .natDexNum = NATIONAL_DEX_TANGTRIP,
        .categoryName = _("Vine"),
        .height = 4,
        .weight = 55,
        .description = COMPOUND_STRING(
            "Some may try to keep Tangtrip as pets,\n"
            "but their evolution into viney monsters\n"
            "lead many to regret."),
        .pokemonScale = 304,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Tangtrip,
        .frontPicSize = MON_COORDS_SIZE(48, 40),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        .frontAnimId = ANIM_H_JUMPS_V_STRETCH,
        .backPic = gMonBackPic_Tangtrip,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_V_STRETCH,
        .palette = gMonPalette_Tangtrip,
        .shinyPalette = gMonShinyPalette_Tangtrip,
        .iconSprite = gMonIcon_Tangtrip,
        .iconPalIndex = 0,
        SHADOW(0, 4, SHADOW_SIZE_S)
        FOOTPRINT(Tangela)
        .levelUpLearnset = sTangtripLevelUpLearnset,
        .teachableLearnset = sTangtripTeachableLearnset,
        .eggMoveLearnset = sTangtripEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 15, SPECIES_TANGELA}),
    },

    [SPECIES_SLUDGMA] =
    {
        .baseHP        = 45,
        .baseAttack    = 40,
        .baseDefense   = 50,
        .baseSpeed     = 25,
        .baseSpAttack  = 70,
        .baseSpDefense = 45,
        .types = MON_TYPES(TYPE_GROUND, TYPE_WATER),
        .catchRate = 190,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 50 : 78,
        .evYield_SpAttack = 1,
        .itemRare = ITEM_SOFT_SAND,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_DRY_SKIN, ABILITY_THERMAL_EXCHANGE, ABILITY_MOLD_BREAKER },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Sludgma"),
        .cryId = CRY_SLUGMA,
        .natDexNum = NATIONAL_DEX_SLUDGMA,
        .categoryName = _("Mud"),
        .height = 7,
        .weight = 350,
        .description = COMPOUND_STRING(
            "This species of Pokémon is a living mud.\n"
            "It is observed that even mud falls from\n"
            "its body, it never runs out, making some\n"
            "wonder what part of it is the Pokémon."),
        .pokemonScale = 329,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Sludgma,
        .frontPicSize = MON_COORDS_SIZE(32, 48),
        .frontPicYOffset = 12,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Sludgma,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
        .palette = gMonPalette_Sludgma,
        .shinyPalette = gMonShinyPalette_Sludgma,
        .iconSprite = gMonIcon_Sludgma,
        .iconPalIndex = 0,
        SHADOW(0, 1, SHADOW_SIZE_S)
        FOOTPRINT(Slugma)
        OVERWORLD(
            sPicTable_Slugma,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SLITHER,
            sAnimTable_Following,
            gOverworldPalette_Slugma,
            gShinyOverworldPalette_Slugma
        )
        .levelUpLearnset = sSludgmaLevelUpLearnset,
        .teachableLearnset = sSludgmaTeachableLearnset,
        .eggMoveLearnset = sSludgmaEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 31, SPECIES_MUDCARGO}),
    },

    [SPECIES_MUDCARGO] =
    {
        .baseHP        = P_UPDATED_STATS >= GEN_7 ? 75 : 65,
        .baseAttack    = 50,
        .baseDefense   = 105,
        .baseSpeed     = 50,
        .baseSpAttack  = P_UPDATED_STATS >= GEN_7 ? 105 : 95,
        .baseSpDefense = 105,
        .types = MON_TYPES(TYPE_GROUND, TYPE_WATER),
        .catchRate = 75,
    #if P_UPDATED_EXP_YIELDS >= GEN_7
        .expYield = 151,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 144,
    #else
        .expYield = 154,
    #endif
        .evYield_Defense = 1,
        .evYield_SpAttack = 1,
        .itemRare = ITEM_SOFT_SAND,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_DRY_SKIN, ABILITY_THERMAL_EXCHANGE, ABILITY_MOLD_BREAKER },
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = TRUE,
        .speciesName = _("Mudcargo"),
        .cryId = CRY_MAGCARGO,
        .natDexNum = NATIONAL_DEX_MUDCARGO,
        .categoryName = _("Mud"),
        .height = 9,
        .weight = 550,
        .description = COMPOUND_STRING(
            "The shell on its back is made of hardened\n"
            "mud. The patterns on it have inspired\n"
            "generations of artists' pottery."),
        .pokemonScale = 332,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Mudcargo,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 6,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Mudcargo,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
        .palette = gMonPalette_Mudcargo,
        .shinyPalette = gMonShinyPalette_Mudcargo,
        .iconSprite = gMonIcon_Mudcargo,
        .iconPalIndex = 0,
        SHADOW(-1, 8, SHADOW_SIZE_L)
        FOOTPRINT(Magcargo)
        OVERWORLD(
            sPicTable_Magcargo,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SLITHER,
            sAnimTable_Following,
            gOverworldPalette_Magcargo,
            gShinyOverworldPalette_Magcargo
        )
        .levelUpLearnset = sMudcargoLevelUpLearnset,
        .teachableLearnset = sMudcargoTeachableLearnset,
    },

    [SPECIES_KOTORA] =
    {
        .baseHP        = 50,
        .baseAttack    = 40,
        .baseDefense   = 58,
        .baseSpeed     = 60,
        .baseSpAttack  = 65,
        .baseSpDefense = 52,
        .types = MON_TYPES(TYPE_ELECTRIC, TYPE_NORMAL),
        .catchRate = 200,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 50 : 78,
        .evYield_SpAttack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_RIVALRY, ABILITY_LIGHTNING_ROD, ABILITY_BEAST_BOOST },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Kotora"),
        .cryId = CRY_NONE,
        .natDexNum = NATIONAL_DEX_KOTORA,
        .categoryName = _("Saber Tiger"),
        .height = 5,
        .weight = 55,
        .description = COMPOUND_STRING(
            "A species of Pokémon once thought to\n"
            "be extinct. Its cute appearance quickly\n"
            "increased awareness of the need for its\n"
            "conservation."),
        .pokemonScale = 329,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Kotora,
        .frontPicSize = MON_COORDS_SIZE(32, 48),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Kotora,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 15,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
        .palette = gMonPalette_Kotora,
        .shinyPalette = gMonShinyPalette_Kotora,
        .iconSprite = gMonIcon_Kotora,
        .iconPalIndex = 0,
        SHADOW(-4, 7, SHADOW_SIZE_M)
        .levelUpLearnset = sKotoraLevelUpLearnset,
        .teachableLearnset = sKotoraTeachableLearnset,
        .eggMoveLearnset = sKotoraEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_RAITORA}),
    },

    [SPECIES_RAITORA] =
    {
        .baseHP        = P_UPDATED_STATS >= GEN_7 ? 85 : 75,
        .baseAttack    = 60,
        .baseDefense   = 96,
        .baseSpeed     = 90,
        .baseSpAttack  = P_UPDATED_STATS >= GEN_7 ? 110 : 100,
        .baseSpDefense = 74,
        .types = MON_TYPES(TYPE_ELECTRIC, TYPE_NORMAL),
        .catchRate = 75,
    #if P_UPDATED_EXP_YIELDS >= GEN_7
        .expYield = 151,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 144,
    #else
        .expYield = 154,
    #endif
        .evYield_SpAttack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_RIVALRY, ABILITY_LIGHTNING_ROD, ABILITY_BEAST_BOOST },
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = TRUE,
        .speciesName = _("Raitora"),
        .cryId = CRY_NONE,
        .natDexNum = NATIONAL_DEX_RAITORA,
        .categoryName = _("Saber Tiger"),
        .height = 9,
        .weight = 550,
        .description = COMPOUND_STRING(
            "It was once thought that this\n"
            "Pokémon could evolve further,\n"
            "but that theory has seen no\n"
            "new evidence for many years."),
        .pokemonScale = 332,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Raitora,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Raitora,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
        .palette = gMonPalette_Raitora,
        .shinyPalette = gMonShinyPalette_Raitora,
        .iconSprite = gMonIcon_Raitora,
        .iconPalIndex = 0,
        SHADOW(1, 5, SHADOW_SIZE_L)
        .levelUpLearnset = sRaitoraLevelUpLearnset,
        .teachableLearnset = sRaitoraTeachableLearnset,
    },

    [SPECIES_MADAME] =
    {
        .baseHP        = 80,
        .baseAttack    = 115,
        .baseDefense   = 85,
        .baseSpeed     = 85,
        .baseSpAttack  = 75,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_FLYING),
        .catchRate = 45,
        .expYield = FARFETCHD_EXP_YIELD,
        .evYield_Attack = 2,
        .itemCommon = ITEM_LEEK,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING, EGG_GROUP_FIELD),
        .abilities = { ABILITY_KEEN_EYE, ABILITY_INNER_FOCUS, ABILITY_SUPER_LUCK },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Madame"),
        .cryId = CRY_FARFETCHD,
        .natDexNum = NATIONAL_DEX_MADAME,
        .categoryName = _("Wild Duck"),
        .height = 12,
        .weight = 305,
        .description = COMPOUND_STRING(
            "Even after a Farfetch'd has evolved,\n"
            "it never gives up its beloved stick.\n"
            "Its evolution only serves to allow\n"
            "its better usage."),
        .pokemonScale = 330,
        .pokemonOffset = 2,
        .trainerScale = 293,
        .trainerOffset = 2,
        .frontPic = gMonFrontPic_Madame,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        .frontAnimId = ANIM_BOUNCE_ROTATE_TO_SIDES_SMALL,
        .backPic = gMonBackPic_Madame,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Madame,
        .shinyPalette = gMonShinyPalette_Madame,
        .iconSprite = gMonIcon_Madame,
        .iconPalIndex = 0,
        SHADOW(-3, 11, SHADOW_SIZE_M)
        FOOTPRINT(Farfetchd)
        .levelUpLearnset = sMadameLevelUpLearnset,
        .teachableLearnset = sMadameTeachableLearnset,
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
            "An offshoot of Marill brought about\n"
            "by exposure to metallic materials.\n"
            "Its spiked tail is actually best\n"
            "used defensively."),
        .pokemonScale = 448,
        .pokemonOffset = 16,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Apimarill,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Apimarill,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Apimarill,
        .shinyPalette = gMonShinyPalette_Apimarill,
        .iconSprite = gMonIcon_Apimarill,
        .iconPalIndex = 0,
        SHADOW(-3, 6, SHADOW_SIZE_S)
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
            "When Sunflora is forcibly exposed to\n"
            "certain materials, it can become a\n"
            "Solflora, gaining the power of fire\n"
            "that it desperately needs."),
        .pokemonScale = 444,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Solflora,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Solflora,
        .backPicSize = MON_COORDS_SIZE(56, 56),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Solflora,
        .shinyPalette = gMonShinyPalette_Solflora,
        .iconSprite = gMonIcon_Solflora,
        .iconPalIndex = 1,
        SHADOW(3, 13, SHADOW_SIZE_M)
        FOOTPRINT(Sunflora)
        .levelUpLearnset = sSolfloraLevelUpLearnset,
        .teachableLearnset = sSolfloraTeachableLearnset,
    },

    [SPECIES_SHIBIREFUGU] =
    {
        .baseHP        = 85,
        .baseAttack    = 115,
        .baseDefense   = P_UPDATED_STATS >= GEN_7 ? 95 : 85,
        .baseSpeed     = 85,
        .baseSpAttack  = 65,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_WATER, TYPE_POISON),
        .catchRate = 45,
        .expYield = 179,
        .evYield_Attack = 2,
        .itemCommon = ITEM_PAYAPA_BERRY,
        .itemRare = ITEM_POISON_BARB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_2),
        .abilities = { ABILITY_POISON_POINT, ABILITY_SWIFT_SWIM, ABILITY_INTIMIDATE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Shibirefugu"),
        .cryId = CRY_QWILFISH,
        .natDexNum = NATIONAL_DEX_SHIBIREFUGU,
        .categoryName = _("Balloon"),
        .height = 12,
        .weight = 325,
        .description = COMPOUND_STRING(
            "This Pokémon has had its body expanded\n"
            "further than normal. The high pressure\n"
            "allows it higher capabilities in combat."),
        .pokemonScale = 430,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Shibirefugu,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        .frontAnimId = ANIM_GROW_IN_STAGES,
        .frontAnimDelay = 39,
        .enemyMonElevation = 1,
        .backPic = gMonBackPic_Shibirefugu,
        .backPicSize = MON_COORDS_SIZE(56, 56),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_GROW_STUTTER,
        .palette = gMonPalette_Shibirefugu,
        .shinyPalette = gMonShinyPalette_Shibirefugu,
        .iconSprite = gMonIcon_Shibirefugu,
        .iconPalIndex = 0,
        SHADOW(0, 14, SHADOW_SIZE_M)
        FOOTPRINT(Qwilfish)
        .levelUpLearnset = sShibirefuguLevelUpLearnset,
        .teachableLearnset = sShibirefuguTeachableLearnset,
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
            "On holiday evenings, rare reports of\n"
            "Delijoy appearing in the dark skies,\n"
            "their icy wings sparkling, have been\n"
            "made."),
        .pokemonScale = 293,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Delijoy,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
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
        SHADOW(0, 4, SHADOW_SIZE_S)
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
            "When a space Pokémon is exposed to\n"
            "rare materials only found on the\n"
            "surface of Earth, evolutions into\n"
            "new species may occur."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Cogment,
        .frontPicSize = MON_COORDS_SIZE(48, 40),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
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
        SHADOW(1, 11, SHADOW_SIZE_S)
        //.footprint = gMonFootprint_None,
        .levelUpLearnset = sCogmentLevelUpLearnset,
        .teachableLearnset = sCogmentTeachableLearnset,
    },

// -------------------------------------------------------------------------------------
// -------------------------------------------------------------------------------------
// ------------------------------------ Expansion 1 ------------------------------------
// -------------------------------------------------------------------------------------
// -------------------------------------------------------------------------------------

    [SPECIES_MAGNEMELT] =
    {
        .baseHP        = 100,
        .baseAttack    = 70,
        .baseDefense   = 65,
        .baseSpeed     = 75,
        .baseSpAttack  = 100,
        .baseSpDefense = 125,
        .types = MON_TYPES(TYPE_FIRE, TYPE_ELECTRIC),
        .catchRate = 30,
        .expYield = 268,
        .evYield_SpDefense = 3,
        .itemCommon = ITEM_MAGNET,
        .itemRare = ITEM_METAL_COAT,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_MAGNET_PULL, ABILITY_FLAME_BODY, ABILITY_STEELWORKER },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Magnemelt"),
        .cryId = CRY_MAGNEZONE,
        .natDexNum = NATIONAL_DEX_MAGNEMELT,
        .categoryName = _("Magnet Forms"),
        .height = 11,
        .weight = 1800,
        .description = COMPOUND_STRING(
            "It has full control over the heat its\n"
            "lava core emanates. The minerals within\n"
            "can be manipulated to create magnetic\n"
            "attraction and temporary steel limbs."),
        .pokemonScale = 282,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Magnemelt,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        .frontAnimId = ANIM_H_SLIDE_WOBBLE,
        .enemyMonElevation = 0,
        .backPic = gMonBackPic_Magnemelt,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_Magnemelt,
        .shinyPalette = gMonShinyPalette_Magnemelt,
        .iconSprite = gMonIcon_Magnemelt,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(2, 2, SHADOW_SIZE_M)
        FOOTPRINT(Magnezone)
        .levelUpLearnset = sMagnemeltLevelUpLearnset,
        .teachableLearnset = sMagnemeltTeachableLearnset,
    },

    [SPECIES_CHOUTEI] =
    {
        .baseHP        = 100,
        .baseAttack    = 40,
        .baseDefense   = 65,
        .baseSpeed     = 30,
        .baseSpAttack  = 40,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_GRASS, TYPE_ROCK),
        .catchRate = 190,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 66 : 90,
        .evYield_HP = 1,
        .itemRare = ITEM_DEEP_SEA_SCALE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_2),
        .abilities = { ABILITY_OVERGROW, ABILITY_LIMBER, ABILITY_DAMP},
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Choutei"),
        .cryId = CRY_CHINCHOU,
        .natDexNum = NATIONAL_DEX_CHOUTEI,
        .categoryName = _("Bedrock"),
        .height = 5,
        .weight = 120,
        .description = COMPOUND_STRING(
            "Choutei are born from their spores falling\n"
            "to the ocean floor. The many roots form\n"
            "and coalesce in a shared journey to\n"
            "connect within the bedrock of the sea."),
        .pokemonScale = 424,
        .pokemonOffset = -2,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Choutei,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 40) : MON_COORDS_SIZE(64, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        .backPic = gMonBackPic_Choutei,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 2,
        .backAnimId = BACK_ANIM_V_STRETCH,
        .palette = gMonPalette_Choutei,
        .shinyPalette = gMonShinyPalette_Choutei,
        .iconSprite = gMonIcon_Choutei,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 2, SHADOW_SIZE_M)
        FOOTPRINT(Chinchou)
        OVERWORLD(
            sPicTable_Chinchou,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            sAnimTable_Following,
            gOverworldPalette_Chinchou,
            gShinyOverworldPalette_Chinchou
        )
        .levelUpLearnset = sChouteiLevelUpLearnset,
        .teachableLearnset = sChouteiTeachableLearnset,
        .eggMoveLearnset = sChouteiEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_THUNDER_STONE, SPECIES_KAILANT}),
    },

    [SPECIES_KAILANT] =
    {
        .baseHP        = 100,
        .baseAttack    = 40,
        .baseDefense   = 64,
        .baseSpeed     = 110,
        .baseSpAttack  = 110,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_GRASS, TYPE_ROCK),
        .catchRate = 75,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 161 : 156,
        .evYield_HP = 2,
        .itemRare = ITEM_DEEP_SEA_SCALE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_2),
        .abilities = { ABILITY_TRANSISTOR, ABILITY_ILLUMINATE, ABILITY_LIGHTNING_ROD },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Kailant"),
        .cryId = CRY_LANTURN,
        .natDexNum = NATIONAL_DEX_KAILANT,
        .categoryName = _("Bedrock"),
        .height = 12,
        .weight = 225,
        .description = COMPOUND_STRING(
            "Kailant seek out electric currents. They\n"
            "grow indefinitely, trying to reach high\n"
            "enough in the ocean to draw lightning strikes\n"
            "that can travel and turbocharge their roots."),
        .pokemonScale = 269,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Kailant,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(64, 48),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        .frontAnimId = ANIM_V_SLIDE_WOBBLE_SMALL,
        .backPic = gMonBackPic_Kailant,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 48) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_SHAKE_FLASH_YELLOW,
        .palette = gMonPalette_Kailant,
        .shinyPalette = gMonShinyPalette_Kailant,
        .iconSprite = gMonIcon_Kailant,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(13, 10, SHADOW_SIZE_M)
        FOOTPRINT(Lanturn)
        OVERWORLD(
            sPicTable_Lanturn,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            sAnimTable_Following,
            gOverworldPalette_Lanturn,
            gShinyOverworldPalette_Lanturn
        )
        .levelUpLearnset = sKailantLevelUpLearnset,
        .teachableLearnset = sKailantTeachableLearnset,
    },

    [SPECIES_CORPELLA] =
    {
        .baseHP        = 75,
        .baseAttack    = 55,
        .baseDefense   = 85,
        .baseSpeed     = 95,
        .baseSpAttack  = 115,
        .baseSpDefense = 85,
        .types = MON_TYPES(TYPE_WATER, TYPE_FAIRY),
        .catchRate = 30,
        .expYield = 179,
        .evYield_Defense = 1,
        .evYield_SpDefense = 1,
        .itemRare = ITEM_LUMINOUS_MOSS,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_WATER_3),
        .abilities = { ABILITY_PIXILATE, ABILITY_SOUNDPROOF, ABILITY_REGENERATOR },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Corpella"),
        .cryId = CRY_CORSOLA,
        .natDexNum = NATIONAL_DEX_CORPELLA,
        .categoryName = _("Coral"),
        .height = 10,
        .weight = 173,
        .description = COMPOUND_STRING(
            "Corpella has become attuned to the\n"
            "rhythm of the ocean waves. They share\n"
            "a song beneath the waves that resonates\n"
            "and fills them with harmonic radiance."),
        .pokemonScale = 410,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Corpella,
        .frontPicSize = MON_COORDS_SIZE(48, 40),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        .frontAnimId = ANIM_H_SLIDE,
        .backPic = gMonBackPic_Corpella,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 40) : MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Corpella,
        .shinyPalette = gMonShinyPalette_Corpella,
        .iconSprite = gMonIcon_Corpella,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 6, SHADOW_SIZE_S)
        FOOTPRINT(Corsola)
        OVERWORLD(
            sPicTable_Corsola,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Corsola,
            gShinyOverworldPalette_Corsola
        )
        .levelUpLearnset = sCorpellaLevelUpLearnset,
        .teachableLearnset = sCorpellaTeachableLearnset,
    },

    [SPECIES_CALAMITY_MAW] =
    {
        .baseHP        = 85,
        .baseAttack    = 140,
        .baseDefense   = 105,
        .baseSpeed     = 95,
        .baseSpAttack  = 80,
        .baseSpDefense = 95,
        .types = MON_TYPES(TYPE_DARK, TYPE_DRAGON),
        .catchRate = 20,
        .expYield = 285,
        .evYield_Attack = 3,
        .itemRare = ITEM_BOOSTER_ENERGY,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 50,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_PROTOSYNTHESIS, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Calamity Maw"),
        .cryId = CRY_GYARADOS,
        .natDexNum = NATIONAL_DEX_CALAMITY_MAW,
        .categoryName = _("Paradox"),
        .height = 22,
        .weight = 3200,
        .description = COMPOUND_STRING(
            "Sightings of this myth have often\n"
            "been mistakenly identified as\n"
            "Gyarados after they appeared in\n"
            "certain paranormal magazines."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_CalamityMaw,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_CalamityMaw,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_CalamityMaw,
        .shinyPalette = gMonShinyPalette_CalamityMaw,
        .iconSprite = gMonIcon_CalamityMaw,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(8, 12, SHADOW_SIZE_L)
        FOOTPRINT(Gyarados)
        .isParadox = TRUE,
        .levelUpLearnset = sCalamityMawLevelUpLearnset,
        .teachableLearnset = sCalamityMawTeachableLearnset,
    },

    [SPECIES_CALAMITY_MAW_BOSS] =
    {
        .baseHP        = 255,
        .baseAttack    = 140,
        .baseDefense   = 185,
        .baseSpeed     = 95,
        .baseSpAttack  = 80,
        .baseSpDefense = 175,
        .types = MON_TYPES(TYPE_DARK, TYPE_DRAGON),
        .catchRate = 20,
        .expYield = 285,
        .evYield_HP = 3,
        .evYield_Attack = 2,
        .evYield_Defense = 2,
        .evYield_SpDefense = 2,
        .itemRare = ITEM_BOOSTER_ENERGY,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 50,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_PROTOSYNTHESIS, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Calamity Maw"),
        .cryId = CRY_GYARADOS,
        .natDexNum = NATIONAL_DEX_CALAMITY_MAW,
        .categoryName = _("Paradox"),
        .height = 22,
        .weight = 3200,
        .description = COMPOUND_STRING(
            "Sightings of this myth have often\n"
            "been mistakenly identified as\n"
            "Gyarados after they appeared in\n"
            "certain paranormal magazines."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_CalamityMaw,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_CalamityMaw,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_CalamityMaw,
        .shinyPalette = gMonShinyPalette_CalamityMaw,
        .iconSprite = gMonIcon_CalamityMaw,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(8, 12, SHADOW_SIZE_L)
        FOOTPRINT(Gyarados)
        .isParadox = TRUE,
        .levelUpLearnset = sCalamityMawLevelUpLearnset,
        .teachableLearnset = sCalamityMawTeachableLearnset,
    },

    [SPECIES_OCEAN_GLEAM] =
    {
        .baseHP        = 100,
        .baseAttack    = 70,
        .baseDefense   = 144,
        .baseSpeed     = 45,
        .baseSpAttack  = 85,
        .baseSpDefense = 126,
        .types = MON_TYPES(TYPE_ROCK, TYPE_FAIRY),
        .catchRate = 30,
        .expYield = 285,
        .evYield_Defense = 2,
        .evYield_SpDefense = 1,
        .itemRare = ITEM_BOOSTER_ENERGY,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 50,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_PROTOSYNTHESIS, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Ocean Gleam"),
        .cryId = CRY_LAPRAS,
        .natDexNum = NATIONAL_DEX_OCEAN_GLEAM,
        .categoryName = _("Paradox"),
        .height = 25,
        .weight = 2528,
        .description = COMPOUND_STRING(
            "Some paranormal magazines have claimed\n"
            "sightings of the creature during wondrous\n"
            "sunset events on the ocean, where those\n"
            "who saw it claimed it was responsible."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_OceanGleam,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_OceanGleam,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_OceanGleam,
        .shinyPalette = gMonShinyPalette_OceanGleam,
        .iconSprite = gMonIcon_OceanGleam,
        .iconPalIndex = 5,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(3, 5, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Lapras)
        .isParadox = TRUE,
        .levelUpLearnset = sOceanGleamLevelUpLearnset,
        .teachableLearnset = sOceanGleamTeachableLearnset,
    },

    [SPECIES_REND_ECLIPSE] =
    {
        .baseHP        = 230,
        .baseAttack    = 100,
        .baseDefense   = 60,
        .baseSpeed     = 20,
        .baseSpAttack  = 100,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_GHOST, TYPE_FLYING),
        .catchRate = 30,
        .expYield = 285,
        .evYield_HP = 3,
        .itemRare = ITEM_BOOSTER_ENERGY,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 50,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_PROTOSYNTHESIS, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Rend Eclipse"),
        .cryId = CRY_WAILORD,
        .natDexNum = NATIONAL_DEX_REND_ECLIPSE,
        .categoryName = _("Paradox"),
        .height = 22,
        .weight = 3200,
        .description = COMPOUND_STRING(
            "Paranormal magazines claim sightings of\n"
            "these creature blotting out the sun.\n"
            "Those who see it are left blinded by the\n"
            "dangerous sight of an unfiltered eclipse."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_RendEclipse,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 5,
        .backPic = gMonBackPic_RendEclipse,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_RendEclipse,
        .shinyPalette = gMonShinyPalette_RendEclipse,
        .iconSprite = gMonIcon_RendEclipse,
        .iconPalIndex = 5,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 17, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Wailord)
        .isParadox = TRUE,
        .levelUpLearnset = sRendEclipseLevelUpLearnset,
        .teachableLearnset = sRendEclipseTeachableLearnset,
    },

    [SPECIES_TUNDRA_HUSK] =
    {
        .baseHP        = 120,
        .baseAttack    = 110,
        .baseDefense   = 110,
        .baseSpeed     = 50,
        .baseSpAttack  = 90,
        .baseSpDefense = 90,
        .types = MON_TYPES(TYPE_GRASS, TYPE_ROCK),
        .catchRate = 30,
        .expYield = 285,
        .evYield_HP = 2,
        .evYield_Attack = 1,
        .itemRare = ITEM_BOOSTER_ENERGY,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 50,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_PROTOSYNTHESIS, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Tundra Husk"),
        .cryId = CRY_GLALIE,
        .natDexNum = NATIONAL_DEX_TUNDRA_HUSK,
        .categoryName = _("Paradox"),
        .height = 16,
        .weight = 2565,
        .description = COMPOUND_STRING(
            "Sightings of this creature are unreliable.\n"
            "It can come in many shapes and sizes, and\n"
            "paranormal magazines are quick to claim\n"
            "any familiar shaped rock may be one."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_TundraHusk,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 8,
        .backPic = gMonBackPic_TundraHusk,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_TundraHusk,
        .shinyPalette = gMonShinyPalette_TundraHusk,
        .iconSprite = gMonIcon_TundraHusk,
        .iconPalIndex = 5,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 20, SHADOW_SIZE_L)
        FOOTPRINT(Glalie)
        .isParadox = TRUE,
        .levelUpLearnset = sTundraHuskLevelUpLearnset,
        .teachableLearnset = sTundraHuskTeachableLearnset,
    },

    [SPECIES_REGIAGUA] =
    {
        .baseHP        = 100,
        .baseAttack    = 80,
        .baseDefense   = 100,
        .baseSpeed     = 80,
        .baseSpAttack  = 100,
        .baseSpDefense = 120,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 3,
        .expYield = 290,
        .evYield_SpDefense = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 80,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_WATER_BUBBLE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Regiagua"),
        .cryId = CRY_REGICE,
        .natDexNum = NATIONAL_DEX_REGIAGUA,
        .categoryName = _("Bottle Ship"),
        .height = 18,
        .weight = 1480,
        .description = COMPOUND_STRING(
            "It is rumored that the core of Regiagua\n"
            "is a fabled water creating jewel, and\n"
            "that it was once used as a mechanism\n"
            "in the mythical fountain of youth."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 301,
        .trainerOffset = 2,
        .frontPic = gMonFrontPic_Regiagua,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_FOUR_PETAL : ANIM_H_SLIDE_SLOW,
        .backPic = gMonBackPic_Regiagua,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 40) : MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Regiagua,
        .shinyPalette = gMonShinyPalette_Regiagua,
        .iconSprite = gMonIcon_Regiagua,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 11, SHADOW_SIZE_S)
        FOOTPRINT(Regice)
        .isSubLegendary = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sRegiaguaLevelUpLearnset,
        .teachableLearnset = sRegiaguaTeachableLearnset,
    },

    [SPECIES_MISSINGNO_YELLOW_BOSS] =
    {
        .baseHP        = 255,
        .baseAttack    = 80,
        .baseDefense   = 110,
        .baseSpeed     = 70,
        .baseSpAttack  = 80,
        .baseSpDefense = 110,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_FLYING),
        .catchRate = 20,
        .expYield = 285,
        .evYield_HP = 1,
        .evYield_Defense = 1,
        .evYield_SpDefense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 50,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_INSOMNIA, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("MISSINGNO."),
        .cryId = CRY_RHYDON,
        .natDexNum = NATIONAL_DEX_BULBASAUR,
        .categoryName = _("Paradox"),
        .height = 22,
        .weight = 15908,
        .description = COMPOUND_STRING(""),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_MissingnoYellow,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonFrontPic_MissingnoYellow,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_MissingnoYellow,
        .shinyPalette = gMonPalette_MissingnoYellow,
        .iconSprite = gMonIcon_Bulbasaur,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(4, 12, SHADOW_SIZE_L)
        FOOTPRINT(Bulbasaur)
        .levelUpLearnset = sBulbasaurLevelUpLearnset,
        .teachableLearnset = sBulbasaurTeachableLearnset,
    },

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
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_None,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_CircledQuestionMark,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 7,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_CircledQuestionMark,
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 64),
        .backPicFemale = gMonBackPic_CircledQuestionMarkF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 64),
        .paletteFemale = gMonPalette_CircledQuestionMarkF,
        .shinyPaletteFemale = gMonShinyPalette_CircledQuestionMarkF,
        .iconSpriteFemale = gMonIcon_QuestionMarkF,
        .iconPalIndexFemale = 1,
#endif //P_GENDER_DIFFERENCES
        .backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_CircledQuestionMark,
        .shinyPalette = gMonShinyPalette_CircledQuestionMark,
        .iconSprite = gMonIcon_QuestionMark,
        .iconPalIndex = 0,
        FOOTPRINT(QuestionMark)
        .levelUpLearnset = sNoneLevelUpLearnset,
        .teachableLearnset = sNoneTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 100, SPECIES_NONE},
                                {EVO_ITEM, ITEM_MOOMOO_MILK, SPECIES_NONE}),
        //.formSpeciesIdTable = sNoneFormSpeciesIdTable,
        //.formChangeTable = sNoneFormChangeTable,
        //.perfectIVCount = NUM_STATS,
    },
    */

const struct EggData gEggDatas[EGG_ID_COUNT] =
{
#include "egg_data.h"
};
