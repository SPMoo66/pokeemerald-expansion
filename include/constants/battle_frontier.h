#ifndef GUARD_CONSTANTS_BATTLE_FRONTIER_H
#define GUARD_CONSTANTS_BATTLE_FRONTIER_H

#include "constants/pokemon.h"

#define FRONTIER_CHALLENGE(facility, mode) ((facility << 8) + mode)

// Battle Frontier facility ids.
#define FRONTIER_FACILITY_TOWER    0
#define FRONTIER_FACILITY_DOME     1
#define FRONTIER_FACILITY_PALACE   2  // also Verdanturf Tent
#define FRONTIER_FACILITY_ARENA    3  // also Fallarbor Tent
#define FRONTIER_FACILITY_FACTORY  4  // also Slateport Tent
#define FRONTIER_FACILITY_PIKE     5
#define FRONTIER_FACILITY_PYRAMID  6
#define NUM_FRONTIER_FACILITIES    7
// VAR_FRONTIER_FACILITY is re-used for the below facilities as well
#define FACILITY_LINK_CONTEST      7
#define FACILITY_UNION_ROOM        8
#define FACILITY_MULTI_OR_EREADER  9  // Direct Corner multi battles, multi battle with Steven, and e-Reader battles

// Battle Frontier battle modes.
#define FRONTIER_MODE_SINGLES      0
#define FRONTIER_MODE_DOUBLES      1
#define FRONTIER_MODE_MULTIS       2
#define FRONTIER_MODE_LINK_MULTIS  3
#define FRONTIER_MODE_COUNT        4

// Challenge Statuses
#define CHALLENGE_STATUS_SAVING   1
#define CHALLENGE_STATUS_PAUSED   2
#define CHALLENGE_STATUS_WON      3
#define CHALLENGE_STATUS_LOST     4

// Special trainer battles.
#define SPECIAL_BATTLE_TOWER 0
#define SPECIAL_BATTLE_SECRET_BASE 1
#define SPECIAL_BATTLE_EREADER 2
#define SPECIAL_BATTLE_DOME 3
#define SPECIAL_BATTLE_PALACE 4
#define SPECIAL_BATTLE_ARENA 5
#define SPECIAL_BATTLE_FACTORY 6
#define SPECIAL_BATTLE_PIKE_SINGLE 7
#define SPECIAL_BATTLE_PIKE_DOUBLE 8
#define SPECIAL_BATTLE_PYRAMID 9
#define SPECIAL_BATTLE_MULTI 10

#define MAX_BATTLE_FRONTIER_POINTS 9999
#define MAX_STREAK 9999

#define FRONTIER_MAX_LEVEL_50   50
#define FRONTIER_MIN_LEVEL_OPEN 60
#define FRONTIER_MAX_LEVEL_OPEN MAX_LEVEL

// This is the default number of battles (or floors, in Battle Pyramid) per challenge.
// There are 2 facilities that differ: Battle Dome (DOME_ROUNDS_COUNT) and Battle Pike (NUM_PIKE_ROOMS).
#define FRONTIER_STAGES_PER_CHALLENGE 7

// These sets of facility ids would be redundant if the order was consistent
// The order is important for this set so that all the non-link records can be continuous
#define RANKING_HALL_TOWER_SINGLES   0
#define RANKING_HALL_TOWER_DOUBLES   1
#define RANKING_HALL_TOWER_MULTIS    2
#define RANKING_HALL_DOME            3
#define RANKING_HALL_PALACE          4
#define RANKING_HALL_ARENA           5
#define RANKING_HALL_FACTORY         6
#define RANKING_HALL_PIKE            7
#define RANKING_HALL_PYRAMID         8
#define RANKING_HALL_TOWER_LINK      9

#define FRONTIER_MANIAC_TOWER_SINGLES   0
#define FRONTIER_MANIAC_TOWER_DOUBLES   1
#define FRONTIER_MANIAC_TOWER_MULTIS    2
#define FRONTIER_MANIAC_TOWER_LINK      3
#define FRONTIER_MANIAC_DOME            4
#define FRONTIER_MANIAC_FACTORY         5
#define FRONTIER_MANIAC_PALACE          6
#define FRONTIER_MANIAC_ARENA           7
#define FRONTIER_MANIAC_PIKE            8
#define FRONTIER_MANIAC_PYRAMID         9
#define FRONTIER_MANIAC_FACILITY_COUNT  10

#define FRONTIER_MANIAC_MESSAGE_COUNT 3

// Frontier TV Show
#define FRONTIER_SHOW_TOWER_SINGLES      1
#define FRONTIER_SHOW_TOWER_DOUBLES      2
#define FRONTIER_SHOW_TOWER_MULTIS       3
#define FRONTIER_SHOW_TOWER_LINK_MULTIS  4
#define FRONTIER_SHOW_DOME_SINGLES       5
#define FRONTIER_SHOW_DOME_DOUBLES       6
#define FRONTIER_SHOW_FACTORY_SINGLES    7
#define FRONTIER_SHOW_FACTORY_DOUBLES    8
#define FRONTIER_SHOW_PIKE               9
#define FRONTIER_SHOW_ARENA              10
#define FRONTIER_SHOW_PALACE_SINGLES     11
#define FRONTIER_SHOW_PALACE_DOUBLES     12
#define FRONTIER_SHOW_PYRAMID            13

// Frontier Gambler
#define FRONTIER_GAMBLER_WAITING     0
#define FRONTIER_GAMBLER_PLACED_BET  1
#define FRONTIER_GAMBLER_WON         2
#define FRONTIER_GAMBLER_LOST        3

#define FRONTIER_GAMBLER_BET_5      0
#define FRONTIER_GAMBLER_BET_10     1
#define FRONTIER_GAMBLER_BET_15     2
#define FRONTIER_GAMBLER_BET_CANCEL 3

#define FRONTIER_GAMBLER_CHALLENGE_COUNT 12

#define EXCHANGE_CORNER_DECOR1_CLERK     0
#define EXCHANGE_CORNER_DECOR2_CLERK     1
#define EXCHANGE_CORNER_VITAMIN_CLERK    2
#define EXCHANGE_CORNER_HOLD_ITEM_CLERK  3

#define F_EV_SPREAD_HP         (1 << 0)
#define F_EV_SPREAD_ATTACK     (1 << 1)
#define F_EV_SPREAD_DEFENSE    (1 << 2)
#define F_EV_SPREAD_SPEED      (1 << 3)
#define F_EV_SPREAD_SP_ATTACK  (1 << 4)
#define F_EV_SPREAD_SP_DEFENSE (1 << 5)

#define BATTLE_FRONTIER_ITEM_NONE              0 
#define BATTLE_FRONTIER_ITEM_SITRUS_BERRY      1 
#define BATTLE_FRONTIER_ITEM_CHESTO_BERRY      2 
#define BATTLE_FRONTIER_ITEM_BLACK_GLASSES     3 
#define BATTLE_FRONTIER_ITEM_SOUL_DEW          4 
#define BATTLE_FRONTIER_ITEM_CHOICE_BAND       5 
#define BATTLE_FRONTIER_ITEM_CHOICE_SCARF      6 
#define BATTLE_FRONTIER_ITEM_CHOICE_SPECS      7 
#define BATTLE_FRONTIER_ITEM_SILK_SCARF        8 
#define BATTLE_FRONTIER_ITEM_WHITE_HERB        9 
#define BATTLE_FRONTIER_ITEM_MYSTIC_WATER      10
#define BATTLE_FRONTIER_ITEM_SHARP_BEAK        11
#define BATTLE_FRONTIER_ITEM_LEFTOVERS         12
#define BATTLE_FRONTIER_ITEM_SPELL_TAG         13
#define BATTLE_FRONTIER_ITEM_SCOPE_LENS        14
#define BATTLE_FRONTIER_ITEM_MENTAL_HERB       15
#define BATTLE_FRONTIER_ITEM_CHARCOAL          16
#define BATTLE_FRONTIER_ITEM_LUM_BERRY         17
#define BATTLE_FRONTIER_ITEM_DRAGON_FANG       18
#define BATTLE_FRONTIER_ITEM_SALAC_BERRY       19
#define BATTLE_FRONTIER_ITEM_LEEK              20
#define BATTLE_FRONTIER_ITEM_FIGY_BERRY        21
#define BATTLE_FRONTIER_ITEM_THICK_CLUB        22
#define BATTLE_FRONTIER_ITEM_PETAYA_BERRY      23
#define BATTLE_FRONTIER_ITEM_LUCKY_PUNCH       24
#define BATTLE_FRONTIER_ITEM_LIFE_ORB          25
#define BATTLE_FRONTIER_ITEM_ASSAULT_VEST      26
#define BATTLE_FRONTIER_ITEM_FLAME_ORB         27
#define BATTLE_FRONTIER_ITEM_CHOPLE_BERRY      28
#define BATTLE_FRONTIER_ITEM_WIDE_LENS         29
#define BATTLE_FRONTIER_ITEM_ROCKY_HELMET      30
#define BATTLE_FRONTIER_ITEM_HEAT_ROCK         31
#define BATTLE_FRONTIER_ITEM_LIGHT_CLAY        32
#define BATTLE_FRONTIER_ITEM_BLACK_SLUDGE      33
#define BATTLE_FRONTIER_ITEM_OCCA_BERRY        34
#define BATTLE_FRONTIER_ITEM_FOCUS_SASH        35
#define BATTLE_FRONTIER_ITEM_HEAVY_DUTY_BOOTS  36
#define BATTLE_FRONTIER_ITEM_CUSTAP_BERRY      37
#define BATTLE_FRONTIER_ITEM_SHUCA_BERRY       38
#define BATTLE_FRONTIER_ITEM_DAMP_ROCK         39
#define BATTLE_FRONTIER_ITEM_KEE_BERRY         40
#define BATTLE_FRONTIER_ITEM_TOXIC_ORB         41
#define BATTLE_FRONTIER_ITEM_POWER_HERB        42
#define BATTLE_FRONTIER_ITEM_WEAKNESS_POLICY   43
#define BATTLE_FRONTIER_ITEM_BLUNDER_POLICY    44
#define BATTLE_FRONTIER_ITEM_RED_CARD          45
#define BATTLE_FRONTIER_ITEM_PROTECTIVE_PADS   46
#define BATTLE_FRONTIER_ITEM_AIR_BALLOON       47
#define BATTLE_FRONTIER_ITEM_ELECTRIC_SEED     48
#define BATTLE_FRONTIER_ITEM_COLBUR_BERRY      49
#define BATTLE_FRONTIER_ITEM_WATER_GEM         50
#define BATTLE_FRONTIER_ITEM_CLEAR_AMULET      51
#define BATTLE_FRONTIER_ITEM_BABIRI_BERRY      52
#define BATTLE_FRONTIER_ITEM_EXPERT_BELT       53
#define BATTLE_FRONTIER_ITEM_SAFETY_GOGGLES    54
#define BATTLE_FRONTIER_ITEM_ZOOM_LENS         55
#define BATTLE_FRONTIER_ITEM_WIKI_BERRY        56
#define BATTLE_FRONTIER_ITEM_ICY_ROCK          57
#define BATTLE_FRONTIER_ITEM_STICKY_BARB       58
#define BATTLE_FRONTIER_ITEM_COVERT_CLOAK      59
#define BATTLE_FRONTIER_ITEM_EJECT_BUTTON      60
#define BATTLE_FRONTIER_ITEM_CHILAN_BERRY      61
#define BATTLE_FRONTIER_ITEM_WISE_GLASSES      62
#define BATTLE_FRONTIER_ITEM_TERRAIN_EXTENDER  63
#define BATTLE_FRONTIER_ITEM_NORMAL_GEM        64
#define BATTLE_FRONTIER_ITEM_MUSCLE_BAND       65
#define BATTLE_FRONTIER_ITEM_PSYCHIC_SEED      66
#define BATTLE_FRONTIER_ITEM_BOOSTER_ENERGY    67
#define BATTLE_FRONTIER_ITEM_LOADED_DICE       68
#define BATTLE_FRONTIER_ITEM_YACHE_BERRY       69
#define BATTLE_FRONTIER_ITEM_GROUND_GEM        70
#define BATTLE_FRONTIER_ITEM_PASSHO_BERRY      71
#define BATTLE_FRONTIER_ITEM_ABSORB_BULB       72
#define BATTLE_FRONTIER_ITEM_MAGNET            73
#define BATTLE_FRONTIER_ITEM_KASIB_BERRY       74
#define BATTLE_FRONTIER_ITEM_MIRACLE_SEED      75

#endif // GUARD_CONSTANTS_BATTLE_FRONTIER_H
