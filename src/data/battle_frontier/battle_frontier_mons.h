const struct FacilityMon gBattleFrontierMons[NUM_FRONTIER_MONS] =
{
    [FRONTIER_MON_VENUSAUR] = {
        .species = SPECIES_VENUSAUR,
        .moves = {MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB, MOVE_SUNNY_DAY, MOVE_SYNTHESIS},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SP_ATTACK,
        .nature = NATURE_MODEST,
		.ability = 2
    },
    [FRONTIER_MON_CHARIZARD] = {
        .species = SPECIES_CHARIZARD,
        .moves = {MOVE_FLAMETHROWER, MOVE_AIR_SLASH, MOVE_DRAGON_PULSE, MOVE_FOCUS_BLAST},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_SPECS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.ability = 0
    },
    [FRONTIER_MON_CHARIZARD_EMERIBIAN] = {
        .species = SPECIES_CHARIZARD_EMERIBIAN,
        .moves = {MOVE_FLAMETHROWER, MOVE_FLEUR_CANNON, MOVE_DAZZLING_GLEAM, MOVE_FOCUS_BLAST},
        .itemTableId = BATTLE_FRONTIER_ITEM_WHITE_HERB,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.ability = 0
    },
    [FRONTIER_MON_BLASTOISE] = {
        .species = SPECIES_BLASTOISE,
        .moves = {MOVE_FAKE_OUT, MOVE_FOLLOW_ME, MOVE_AQUA_TAIL, MOVE_FLASH_CANNON},
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_IMPISH,
		.ability = 0
    },
    [FRONTIER_MON_BUTTERFREE] = {
        .species = SPECIES_BUTTERFREE,
        .moves = {MOVE_QUIVER_DANCE, MOVE_HURRICANE, MOVE_SLEEP_POWDER, MOVE_SUBSTITUTE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.ability = 0
    },
    [FRONTIER_MON_BEEDRILL] = {
        .species = SPECIES_BEEDRILL,
        .moves = {MOVE_U_TURN, MOVE_POISON_JAB, MOVE_DRILL_RUN, MOVE_KNOCK_OFF},
        .itemTableId = BATTLE_FRONTIER_ITEM_ASSAULT_VEST,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.ability = 0
    },
    [FRONTIER_MON_PIDGEOT] = {
        .species = SPECIES_PIDGEOT,
        .moves = {MOVE_HURRICANE, MOVE_HEAT_WAVE, MOVE_U_TURN, MOVE_ROOST},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHARP_BEAK,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.ability = 2
    },
    [FRONTIER_MON_RATICATE] = {
        .species = SPECIES_RATICATE,
        .moves = {MOVE_SUCKER_PUNCH, MOVE_STOMPING_TANTRUM, MOVE_U_TURN, MOVE_HYPER_FANG},
        .itemTableId = BATTLE_FRONTIER_ITEM_FLAME_ORB,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.ability = 1
    },
    [FRONTIER_MON_RATICATE_ALOLAN] = {
        .species = SPECIES_RATICATE_ALOLAN,
        .moves = {MOVE_SWORDS_DANCE, MOVE_DOUBLE_EDGE, MOVE_KNOCK_OFF, MOVE_SUCKER_PUNCH},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOPLE_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT,
		.ability = 1
    },
    [FRONTIER_MON_FEAROW] = {
        .species = SPECIES_FEAROW,
        .moves = {MOVE_DRILL_PECK, MOVE_DRILL_RUN, MOVE_SLASH, MOVE_U_TURN},
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.ability = 2
    },
    [FRONTIER_MON_ARBOK] = {
        .species = SPECIES_ARBOK,
        .moves = {MOVE_GUNK_SHOT, MOVE_COIL, MOVE_EARTHQUAKE, MOVE_ICE_FANG},
        .itemTableId = BATTLE_FRONTIER_ITEM_WIDE_LENS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT,
		.ability = 0
    },
    [FRONTIER_MON_RAICHU] = {
        .species = SPECIES_RAICHU,
        .moves = {MOVE_NASTY_PLOT, MOVE_THUNDERBOLT, MOVE_SURF, MOVE_FOCUS_BLAST},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.ability = 0
    },
    [FRONTIER_MON_RAICHU_ALOLAN] = {
        .species = SPECIES_RAICHU_ALOLAN,
        .moves = {MOVE_NASTY_PLOT, MOVE_PSYCHIC, MOVE_RISING_VOLTAGE, MOVE_GRASS_KNOT},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST,
		.ability = 0
    },
    [FRONTIER_MON_SANDSLASH] = {
        .species = SPECIES_SANDSLASH,
        .moves = {MOVE_SWORDS_DANCE, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_RAPID_SPIN},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT,
		.ability = 1
    },
    [FRONTIER_MON_SANDSLASH_ALOLAN] = {
        .species = SPECIES_SANDSLASH_ALOLAN,
        .moves = {MOVE_SWORDS_DANCE, MOVE_TRIPLE_AXEL, MOVE_EARTHQUAKE, MOVE_KNOCK_OFF},
        .itemTableId = BATTLE_FRONTIER_ITEM_WIDE_LENS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.ability = 1
    },
    [FRONTIER_MON_NIDOQUEEN] = {
        .species = SPECIES_NIDOQUEEN,
        .moves = {MOVE_STEALTH_ROCK, MOVE_EARTH_POWER, MOVE_SLUDGE_WAVE, MOVE_ICE_BEAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.ability = 2
    },
    [FRONTIER_MON_NIDOKING] = {
        .species = SPECIES_NIDOKING,
        .moves = {MOVE_SLUDGE_WAVE, MOVE_EARTH_POWER, MOVE_FIRE_BLAST, MOVE_THUNDERBOLT},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST,
		.ability = 2
    },
    [FRONTIER_MON_CLEFABLE] = {
        .species = SPECIES_CLEFABLE,
        .moves = {MOVE_MOONBLAST, MOVE_THUNDER_WAVE, MOVE_KNOCK_OFF, MOVE_SOFT_BOILED},
        .itemTableId = BATTLE_FRONTIER_ITEM_ROCKY_HELMET,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_CALM,
		.ability = 1
    },
    [FRONTIER_MON_NINETALES] = {
        .species = SPECIES_NINETALES,
        .moves = {MOVE_FIRE_BLAST, MOVE_SOLAR_BEAM, MOVE_NASTY_PLOT, MOVE_TOXIC},
        .itemTableId = BATTLE_FRONTIER_ITEM_HEAT_ROCK,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.ability = 2
    },
    [FRONTIER_MON_NINETALES_ALOLAN] = {
        .species = SPECIES_NINETALES_ALOLAN,
        .moves = {MOVE_AURORA_VEIL, MOVE_FREEZE_DRY, MOVE_ENCORE, MOVE_MOONBLAST},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIGHT_CLAY,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.ability = 2
    },
    [FRONTIER_MON_NINETALES_EMERIBIAN] = {
        .species = SPECIES_NINETALES_EMERIBIAN,
        .moves = {MOVE_WILL_O_WISP, MOVE_BITTER_MALICE, MOVE_FIRE_BLAST, MOVE_NASTY_PLOT},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHARCOAL,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.ability = 0
    },
    [FRONTIER_MON_WIGGLYTUFF] = {
        .species = SPECIES_WIGGLYTUFF,
        .moves = {MOVE_DAZZLING_GLEAM, MOVE_WISH, MOVE_KNOCK_OFF, MOVE_HYPER_VOICE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST,
		.ability = 1
    },
    [FRONTIER_MON_VILEPLUME] = {
        .species = SPECIES_VILEPLUME,
        .moves = {MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB, MOVE_STRENGTH_SAP, MOVE_SLEEP_POWDER},
        .itemTableId = BATTLE_FRONTIER_ITEM_BLACK_SLUDGE,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_BOLD,
		.ability = 2
    },
    [FRONTIER_MON_VILEPLUME_EMERIBIAN] = {
        .species = SPECIES_VILEPLUME_EMERIBIAN,
        .moves = {MOVE_SPARKLING_ARIA, MOVE_GIGA_DRAIN, MOVE_ALLURING_VOICE, MOVE_SYNTHESIS},
        .itemTableId = BATTLE_FRONTIER_ITEM_ABSORB_BULB,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SP_ATTACK,
        .nature = NATURE_MODEST,
		.ability = 1
    },
    [FRONTIER_MON_PARASECT] = {
        .species = SPECIES_PARASECT,
        .moves = {MOVE_SPORE, MOVE_LEECH_LIFE, MOVE_KNOCK_OFF, MOVE_SYNTHESIS},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_CAREFUL,
		.ability = 0
    },
    [FRONTIER_MON_VENOMOTH] = {
        .species = SPECIES_VENOMOTH,
        .moves = {MOVE_QUIVER_DANCE, MOVE_SLEEP_POWDER, MOVE_BUG_BUZZ, MOVE_SLUDGE_BOMB},
        .itemTableId = BATTLE_FRONTIER_ITEM_OCCA_BERRY,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_TIMID,
		.ability = 1
    },
    [FRONTIER_MON_DUGTRIO] = {
        .species = SPECIES_DUGTRIO,
        .moves = {MOVE_SWORDS_DANCE, MOVE_EARTHQUAKE, MOVE_STONE_EDGE, MOVE_STEALTH_ROCK},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_SASH,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.ability = 1
    },
    [FRONTIER_MON_DUGTRIO_ALOLAN] = {
        .species = SPECIES_DUGTRIO_ALOLAN,
        .moves = {MOVE_EARTHQUAKE, MOVE_IRON_HEAD, MOVE_SUCKER_PUNCH, MOVE_ROCK_SLIDE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_JOLLY,
		.ability = 1
    },
    [FRONTIER_MON_PERSIAN] = {
        .species = SPECIES_PERSIAN,
        .moves = {MOVE_FAKE_OUT, MOVE_COVET, MOVE_U_TURN, MOVE_PLAY_ROUGH},
        .itemTableId = BATTLE_FRONTIER_ITEM_NONE,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.ability = 1
    },
    [FRONTIER_MON_PERSIAN_ALOLAN] = {
        .species = SPECIES_PERSIAN_ALOLAN,
        .moves = {MOVE_KNOCK_OFF, MOVE_PARTING_SHOT, MOVE_TOXIC, MOVE_FOUL_PLAY},
        .itemTableId = BATTLE_FRONTIER_ITEM_HEAVY_DUTY_BOOTS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.ability = 0
    },
    [FRONTIER_MON_GOLDUCK] = {
        .species = SPECIES_GOLDUCK,
        .moves = {MOVE_NASTY_PLOT, MOVE_SCALD, MOVE_ICE_BEAM, MOVE_RAIN_DANCE},
        .itemTableId = BATTLE_FRONTIER_ITEM_MYSTIC_WATER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST,
		.ability = 2
    },
    [FRONTIER_MON_ARCANINE] = {
        .species = SPECIES_ARCANINE,
        .moves = {MOVE_FLARE_BLITZ, MOVE_EXTREME_SPEED, MOVE_WILL_O_WISP, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_HEAVY_DUTY_BOOTS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_ADAMANT,
		.ability = 0
    },
    [FRONTIER_MON_ARCANINE_HISUIAN] = {
        .species = SPECIES_ARCANINE_HISUIAN,
        .moves = {MOVE_RAGING_FURY, MOVE_EXTREME_SPEED, MOVE_ROCK_SLIDE, MOVE_CRUNCH},
        .itemTableId = BATTLE_FRONTIER_ITEM_ASSAULT_VEST,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT,
		.ability = 0
    },
    [FRONTIER_MON_POLIWRATH] = {
        .species = SPECIES_POLIWRATH,
        .moves = {MOVE_LIQUIDATION, MOVE_CLOSE_COMBAT, MOVE_EARTHQUAKE, MOVE_POISON_JAB},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT,
		.ability = 0
    },
    [FRONTIER_MON_ALAKAZAM] = {
        .species = SPECIES_ALAKAZAM,
        .moves = {MOVE_NASTY_PLOT, MOVE_PSYCHIC, MOVE_FOCUS_BLAST, MOVE_SHADOW_BALL},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_SASH,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.ability = 2
    },
    [FRONTIER_MON_MACHAMP] = {
        .species = SPECIES_MACHAMP,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_FACADE, MOVE_KNOCK_OFF, MOVE_BULLET_PUNCH},
        .itemTableId = BATTLE_FRONTIER_ITEM_FLAME_ORB,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT,
		.ability = 0
    },
    [FRONTIER_MON_VICTREEBEL] = {
        .species = SPECIES_VICTREEBEL,
        .moves = {MOVE_SWORDS_DANCE, MOVE_STRENGTH_SAP, MOVE_POWER_WHIP, MOVE_POISON_JAB},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.ability = 1
    },
    [FRONTIER_MON_TENTACRUEL] = {
        .species = SPECIES_TENTACRUEL,
        .moves = {MOVE_SCALD, MOVE_RAPID_SPIN, MOVE_KNOCK_OFF, MOVE_SLUDGE_BOMB},
        .itemTableId = BATTLE_FRONTIER_ITEM_BLACK_SLUDGE,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.ability = 1
    },
    [FRONTIER_MON_GOLEM] = {
        .species = SPECIES_GOLEM,
        .moves = {MOVE_STEALTH_ROCK, MOVE_EARTHQUAKE, MOVE_STONE_EDGE, MOVE_EXPLOSION},
        .itemTableId = BATTLE_FRONTIER_ITEM_CUSTAP_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT,
		.ability = 1
    },
    [FRONTIER_MON_GOLEM_ALOLAN] = {
        .species = SPECIES_GOLEM_ALOLAN,
        .moves = {MOVE_WILD_CHARGE, MOVE_EARTHQUAKE, MOVE_FIRE_PUNCH, MOVE_STONE_EDGE},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_SCARF,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.ability = 0
    },
    [FRONTIER_MON_GOLEM_FRIBIAN] = {
        .species = SPECIES_GOLEM_FRIBIAN,
        .moves = {MOVE_PHANTOM_FORCE, MOVE_HEAVY_SLAM, MOVE_HEAT_CRASH, MOVE_ROCK_SLIDE},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT,
		.ability = 2
    },
    [FRONTIER_MON_RAPIDASH] = {
        .species = SPECIES_RAPIDASH,
        .moves = {MOVE_FLARE_BLITZ, MOVE_HIGH_HORSEPOWER, MOVE_WILD_CHARGE, MOVE_MORNING_SUN},
        .itemTableId = BATTLE_FRONTIER_ITEM_HEAVY_DUTY_BOOTS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.ability = 1
    },
    [FRONTIER_MON_RAPIDASH_GALARIAN] = {
        .species = SPECIES_RAPIDASH_GALARIAN,
        .moves = {MOVE_FLEUR_CANNON, MOVE_CALM_MIND, MOVE_PSYCHIC, MOVE_MORNING_SUN},
        .itemTableId = BATTLE_FRONTIER_ITEM_WHITE_HERB,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.ability = 1
    },
    [FRONTIER_MON_SLOWBRO] = {
        .species = SPECIES_SLOWBRO,
        .moves = {MOVE_PSYCHIC, MOVE_CHILLING_WATER, MOVE_TELEPORT, MOVE_SLACK_OFF},
        .itemTableId = BATTLE_FRONTIER_ITEM_ROCKY_HELMET,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_BOLD,
		.ability = 2
    },
    [FRONTIER_MON_SLOWBRO_GALARIAN] = {
        .species = SPECIES_SLOWBRO_GALARIAN,
        .moves = {MOVE_CALM_MIND, MOVE_SLUDGE_BOMB, MOVE_SCALD, MOVE_SLACK_OFF},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHUCA_BERRY,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_BOLD,
		.ability = 2
    },
    [FRONTIER_MON_FARFETCHD] = {
        .species = SPECIES_FARFETCHD,
        .moves = {MOVE_BRAVE_BIRD, MOVE_CLOSE_COMBAT, MOVE_KNOCK_OFF, MOVE_FIRST_IMPRESSION},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEEK,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT,
		.ability = 2
    },
    [FRONTIER_MON_DODRIO] = {
        .species = SPECIES_DODRIO,
        .moves = {MOVE_BRAVE_BIRD, MOVE_JUMP_KICK, MOVE_DOUBLE_HIT, MOVE_PURSUIT},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_SCARF,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.ability = 1
    },
    [FRONTIER_MON_DEWGONG] = {
        .species = SPECIES_DEWGONG,
        .moves = {MOVE_WHIRLPOOL, MOVE_PERISH_SONG, MOVE_RAIN_DANCE, MOVE_REST},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_CALM,
		.ability = 1
    },
    [FRONTIER_MON_MUK] = {
        .species = SPECIES_MUK,
        .moves = {MOVE_POISON_JAB, MOVE_DRAIN_PUNCH, MOVE_HAZE, MOVE_TOXIC_SPIKES},
        .itemTableId = BATTLE_FRONTIER_ITEM_BLACK_SLUDGE,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_CAREFUL,
		.ability = 2
    },
    [FRONTIER_MON_MUK_ALOLAN] = {
        .species = SPECIES_MUK_ALOLAN,
        .moves = {MOVE_KNOCK_OFF, MOVE_POISON_JAB, MOVE_PURSUIT, MOVE_ROCK_SLIDE},
        .itemTableId = BATTLE_FRONTIER_ITEM_ASSAULT_VEST,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_CAREFUL,
		.ability = 0
    },
    [FRONTIER_MON_CLOYSTER] = {
        .species = SPECIES_CLOYSTER,
        .moves = {MOVE_SPIKY_SHIELD, MOVE_SHELL_SMASH, MOVE_ICICLE_SPEAR, MOVE_DRILL_RUN},
        .itemTableId = BATTLE_FRONTIER_ITEM_WHITE_HERB,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT,
		.ability = 1
    },
    [FRONTIER_MON_CLOYSTER_FRIBIAN] = {
        .species = SPECIES_CLOYSTER_FRIBIAN,
        .moves = {MOVE_STEALTH_ROCK, MOVE_RAZOR_SHELL, MOVE_POISON_JAB, MOVE_IRON_DEFENSE},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHUCA_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_ADAMANT,
		.ability = 2
    },
    [FRONTIER_MON_GENGAR] = {
        .species = SPECIES_GENGAR,
        .moves = {MOVE_NASTY_PLOT, MOVE_SHADOW_BALL, MOVE_SLUDGE_BOMB, MOVE_FOCUS_BLAST},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_SASH,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.ability = 1
    },
    [FRONTIER_MON_HYPNO] = {
        .species = SPECIES_HYPNO,
        .moves = {MOVE_HYPNOSIS, MOVE_ZEN_HEADBUTT, MOVE_BELLY_DRUM, MOVE_DRAIN_PUNCH},
        .itemTableId = BATTLE_FRONTIER_ITEM_WIDE_LENS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.ability = 0
    },
    [FRONTIER_MON_KINGLER] = {
        .species = SPECIES_KINGLER,
        .moves = {MOVE_SWORDS_DANCE, MOVE_AGILITY, MOVE_LIQUIDATION, MOVE_X_SCISSOR},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT,
		.ability = 2
    },
    [FRONTIER_MON_ELECTRODE] = {
        .species = SPECIES_ELECTRODE,
        .moves = {MOVE_RAIN_DANCE, MOVE_TAUNT, MOVE_THUNDER, MOVE_VOLT_SWITCH},
        .itemTableId = BATTLE_FRONTIER_ITEM_DAMP_ROCK,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.ability = 2
    },
    [FRONTIER_MON_ELECTRODE_HISUIAN] = {
        .species = SPECIES_ELECTRODE_HISUIAN,
        .moves = {MOVE_THUNDERBOLT, MOVE_VOLT_SWITCH, MOVE_TAUNT, MOVE_GIGA_DRAIN},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST,
		.ability = 2
    },
    [FRONTIER_MON_EXEGGUTOR] = {
        .species = SPECIES_EXEGGUTOR,
        .moves = {MOVE_LEAF_STORM, MOVE_PSYCHIC, MOVE_GIGA_DRAIN, MOVE_PSYSHOCK},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_SPECS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST,
		.ability = 1
    },
    [FRONTIER_MON_EXEGGUTOR_ALOLAN] = {
        .species = SPECIES_EXEGGUTOR_ALOLAN,
        .moves = {MOVE_DRACO_METEOR, MOVE_LEAF_STORM, MOVE_FLAMETHROWER, MOVE_TELEPORT},
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST,
		.ability = 2
    },
    [FRONTIER_MON_MAROWAK] = {
        .species = SPECIES_MAROWAK,
        .moves = {MOVE_SWORDS_DANCE, MOVE_BONEMERANG, MOVE_KNOCK_OFF, MOVE_STONE_EDGE},
        .itemTableId = BATTLE_FRONTIER_ITEM_THICK_CLUB,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT,
		.ability = 2
    },
    [FRONTIER_MON_MAROWAK_ALOLAN] = {
        .species = SPECIES_MAROWAK_ALOLAN,
        .moves = {MOVE_POLTERGEIST, MOVE_FIRE_PUNCH, MOVE_LOW_KICK, MOVE_SHADOW_BONE},
        .itemTableId = BATTLE_FRONTIER_ITEM_THICK_CLUB,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT,
		.ability = 1
    },
    [FRONTIER_MON_HITMONLEE] = {
        .species = SPECIES_HITMONLEE,
        .moves = {MOVE_BULK_UP, MOVE_CLOSE_COMBAT, MOVE_KNOCK_OFF, MOVE_BULLDOZE},
        .itemTableId = BATTLE_FRONTIER_ITEM_KEE_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT,
		.ability = 2
    },
    [FRONTIER_MON_HITMONCHAN] = {
        .species = SPECIES_HITMONCHAN,
        .moves = {MOVE_RAPID_SPIN, MOVE_DRAIN_PUNCH, MOVE_MACH_PUNCH, MOVE_THROAT_CHOP},
        .itemTableId = BATTLE_FRONTIER_ITEM_ASSAULT_VEST,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT,
		.ability = 1
    },
    [FRONTIER_MON_WEEZING] = {
        .species = SPECIES_WEEZING,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_WILL_O_WISP, MOVE_TOXIC_SPIKES, MOVE_TAUNT},
        .itemTableId = BATTLE_FRONTIER_ITEM_BLACK_SLUDGE,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_BOLD,
		.ability = 1
    },
    [FRONTIER_MON_WEEZING_GALARIAN] = {
        .species = SPECIES_WEEZING_GALARIAN,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_STRANGE_STEAM, MOVE_DEFOG, MOVE_WILL_O_WISP},
        .itemTableId = BATTLE_FRONTIER_ITEM_BLACK_SLUDGE,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_BOLD,
		.ability = 0
    },
    [FRONTIER_MON_KANGASKHAN] = {
        .species = SPECIES_KANGASKHAN,
        .moves = {MOVE_FAKE_OUT, MOVE_DOUBLE_EDGE, MOVE_SUCKER_PUNCH, MOVE_EARTHQUAKE},
        .itemTableId = BATTLE_FRONTIER_ITEM_SILK_SCARF,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.ability = 1
    },
    [FRONTIER_MON_SEAKING] = {
        .species = SPECIES_SEAKING,
        .moves = {MOVE_FLIP_TURN, MOVE_KNOCK_OFF, MOVE_REST, MOVE_SLEEP_TALK},
        .itemTableId = BATTLE_FRONTIER_ITEM_HEAVY_DUTY_BOOTS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_IMPISH,
		.ability = 2
    },
    [FRONTIER_MON_STARMIE] = {
        .species = SPECIES_STARMIE,
        .moves = {MOVE_SCALD, MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_RECOVER},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.ability = 2
    },
    [FRONTIER_MON_MR_MIME] = {
        .species = SPECIES_MR_MIME,
        .moves = {MOVE_PSYCHIC, MOVE_DAZZLING_GLEAM, MOVE_TRICK, MOVE_WIDE_GUARD},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_SCARF,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.ability = 1
    },
    [FRONTIER_MON_JYNX] = {
        .species = SPECIES_JYNX,
        .moves = {MOVE_LOVELY_KISS, MOVE_ICE_BEAM, MOVE_FOCUS_BLAST, MOVE_PSYCHIC},
        .itemTableId = BATTLE_FRONTIER_ITEM_HEAVY_DUTY_BOOTS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.ability = 1
    },
    [FRONTIER_MON_PINSIR] = {
        .species = SPECIES_PINSIR,
        .moves = {MOVE_SWORDS_DANCE, MOVE_X_SCISSOR, MOVE_CLOSE_COMBAT, MOVE_STRENGTH},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.ability = 0
    },
    [FRONTIER_MON_TAUROS] = {
        .species = SPECIES_TAUROS,
        .moves = {MOVE_BODY_SLAM, MOVE_CLOSE_COMBAT, MOVE_THROAT_CHOP, MOVE_IRON_HEAD},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.ability = 2
    },
    [FRONTIER_MON_TAUROS_PALDEAN] = {
        .species = SPECIES_TAUROS_PALDEAN_COMBAT_BREED,
        .moves = {MOVE_BULK_UP, MOVE_CLOSE_COMBAT, MOVE_TRAILBLAZE, MOVE_STONE_EDGE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.ability = 0
    },
    [FRONTIER_MON_TAUROS_PALDEAN_BLAZE_BREED] = {
        .species = SPECIES_TAUROS_PALDEAN_BLAZE_BREED,
        .moves = {MOVE_WILL_O_WISP, MOVE_BODY_PRESS, MOVE_RAGING_BULL, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_IMPISH,
		.ability = 0
    },
    [FRONTIER_MON_TAUROS_PALDEAN_AQUA_BREED] = {
        .species = SPECIES_TAUROS_PALDEAN_AQUA_BREED,
        .moves = {MOVE_WAVE_CRASH, MOVE_CLOSE_COMBAT, MOVE_WILD_CHARGE, MOVE_AQUA_JET},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.ability = 0
    },
    [FRONTIER_MON_GYARADOS] = {
        .species = SPECIES_GYARADOS,
        .moves = {MOVE_DRAGON_DANCE, MOVE_WATERFALL, MOVE_EARTHQUAKE, MOVE_TAUNT},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT,
		.ability = 0
    },
    [FRONTIER_MON_LAPRAS] = {
        .species = SPECIES_LAPRAS,
        .moves = {MOVE_FREEZE_DRY, MOVE_SPARKLING_ARIA, MOVE_THUNDERBOLT, MOVE_PERISH_SONG},
        .itemTableId = BATTLE_FRONTIER_ITEM_HEAVY_DUTY_BOOTS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SP_ATTACK,
        .nature = NATURE_MODEST,
		.ability = 0
    },
    [FRONTIER_MON_DITTO] = {
        .species = SPECIES_DITTO,
        .moves = {MOVE_TRANSFORM, MOVE_NONE, MOVE_NONE, MOVE_NONE},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_SCARF,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_RELAXED,
		.ability = 2
    },
    [FRONTIER_MON_VAPOREON] = {
        .species = SPECIES_VAPOREON,
        .moves = {MOVE_SCALD, MOVE_CALM_MIND, MOVE_WISH, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_BOLD,
		.ability = 0
    },
    [FRONTIER_MON_JOLTEON] = {
        .species = SPECIES_JOLTEON,
        .moves = {MOVE_THUNDERBOLT, MOVE_VOLT_SWITCH, MOVE_CALM_MIND, MOVE_SHADOW_BALL},
        .itemTableId = BATTLE_FRONTIER_ITEM_HEAVY_DUTY_BOOTS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST,
		.ability = 0
    },
    [FRONTIER_MON_FLAREON] = {
        .species = SPECIES_FLAREON,
        .moves = {MOVE_FACADE, MOVE_SUPERPOWER, MOVE_SACRED_FIRE, MOVE_BODY_SLAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_TOXIC_ORB,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT,
		.ability = 2
    },
    [FRONTIER_MON_OMASTAR] = {
        .species = SPECIES_OMASTAR,
        .moves = {MOVE_SHELL_SMASH, MOVE_METEOR_BEAM, MOVE_HYDRO_PUMP, MOVE_ICE_BEAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_POWER_HERB,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.ability = 2
    },
    [FRONTIER_MON_KABUTOPS] = {
        .species = SPECIES_KABUTOPS,
        .moves = {MOVE_SWORDS_DANCE, MOVE_LIQUIDATION, MOVE_STONE_EDGE, MOVE_AQUA_JET},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT,
		.ability = 1
    },
    [FRONTIER_MON_AERODACTYL] = {
        .species = SPECIES_AERODACTYL,
        .moves = {MOVE_STONE_EDGE, MOVE_EARTHQUAKE, MOVE_ROOST, MOVE_STEALTH_ROCK},
        .itemTableId = BATTLE_FRONTIER_ITEM_HEAVY_DUTY_BOOTS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.ability = 1
    },
    [FRONTIER_MON_SNORLAX] = {
        .species = SPECIES_SNORLAX,
        .moves = {MOVE_CURSE, MOVE_BODY_SLAM, MOVE_WOOD_HAMMER, MOVE_REST},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_CAREFUL,
		.ability = 1
    },
    [FRONTIER_MON_ARTICUNO] = {
        .species = SPECIES_ARTICUNO,
        .moves = {MOVE_FREEZE_DRY, MOVE_DEFOG, MOVE_HEAL_BELL, MOVE_ROOST},
        .itemTableId = BATTLE_FRONTIER_ITEM_HEAVY_DUTY_BOOTS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SPEED,
        .nature = NATURE_CALM,
		.ability = 0
    },
    [FRONTIER_MON_ARTICUNO_GALARIAN] = {
        .species = SPECIES_ARTICUNO_GALARIAN,
        .moves = {MOVE_ESPER_WING, MOVE_HURRICANE, MOVE_RECOVER, MOVE_DEFOG},
        .itemTableId = BATTLE_FRONTIER_ITEM_HEAVY_DUTY_BOOTS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.ability = 0
    },
    [FRONTIER_MON_ZAPDOS] = {
        .species = SPECIES_ZAPDOS,
        .moves = {MOVE_DISCHARGE, MOVE_HEAT_WAVE, MOVE_ROOST, MOVE_DEFOG},
        .itemTableId = BATTLE_FRONTIER_ITEM_HEAVY_DUTY_BOOTS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_TIMID,
		.ability = 2
    },
    [FRONTIER_MON_ZAPDOS_GALARIAN] = {
        .species = SPECIES_ZAPDOS_GALARIAN,
        .moves = {MOVE_BRAVE_BIRD, MOVE_CLOSE_COMBAT, MOVE_STOMPING_TANTRUM, MOVE_U_TURN},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.ability = 0
    },
    [FRONTIER_MON_MOLTRES] = {
        .species = SPECIES_MOLTRES,
        .moves = {MOVE_FLAMETHROWER, MOVE_HURRICANE, MOVE_U_TURN, MOVE_ROOST},
        .itemTableId = BATTLE_FRONTIER_ITEM_HEAVY_DUTY_BOOTS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.ability = 2
    },
    [FRONTIER_MON_MOLTRES_GALARIAN] = {
        .species = SPECIES_MOLTRES_GALARIAN,
        .moves = {MOVE_NASTY_PLOT, MOVE_AGILITY, MOVE_FIERY_WRATH, MOVE_AIR_SLASH},
        .itemTableId = BATTLE_FRONTIER_ITEM_WEAKNESS_POLICY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST,
		.ability = 0
    },
    [FRONTIER_MON_DRAGONITE] = {
        .species = SPECIES_DRAGONITE,
        .moves = {MOVE_DRAGON_DANCE, MOVE_EXTREME_SPEED, MOVE_EARTHQUAKE, MOVE_FIRE_PUNCH},
        .itemTableId = BATTLE_FRONTIER_ITEM_HEAVY_DUTY_BOOTS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT,
		.ability = 2
    },
    [FRONTIER_MON_MEGANIUM] = {
        .species = SPECIES_MEGANIUM,
        .moves = {MOVE_AROMATHERAPY, MOVE_GIGA_DRAIN, MOVE_SYNTHESIS, MOVE_DRAGON_TAIL},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_CALM,
		.ability = 0
    },
    [FRONTIER_MON_TYPHLOSION] = {
        .species = SPECIES_TYPHLOSION,
        .moves = {MOVE_ERUPTION, MOVE_FLAMETHROWER, MOVE_FOCUS_BLAST, MOVE_EXTRASENSORY},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_SPECS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.ability = 0
    },
    [FRONTIER_MON_TYPHLOSION_HISUIAN] = {
        .species = SPECIES_TYPHLOSION_HISUIAN,
        .moves = {MOVE_WILL_O_WISP, MOVE_CONFUSE_RAY, MOVE_SUBSTITUTE, MOVE_HEAT_WAVE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SP_ATTACK,
        .nature = NATURE_MODEST,
		.ability = 1
    },
    [FRONTIER_MON_FERALIGATR] = {
        .species = SPECIES_FERALIGATR,
        .moves = {MOVE_DRAGON_DANCE, MOVE_LIQUIDATION, MOVE_ICE_PUNCH, MOVE_CRUNCH},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.ability = 2
    },
    [FRONTIER_MON_FURRET] = {
        .species = SPECIES_FURRET,
        .moves = {MOVE_TRICK, MOVE_STRENGTH, MOVE_U_TURN, MOVE_KNOCK_OFF},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.ability = 2
    },
    [FRONTIER_MON_NOCTOWL] = {
        .species = SPECIES_NOCTOWL,
        .moves = {MOVE_NASTY_PLOT, MOVE_HYPNOSIS, MOVE_HURRICANE, MOVE_ROOST},
        .itemTableId = BATTLE_FRONTIER_ITEM_BLUNDER_POLICY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST,
		.ability = 2
    },
    [FRONTIER_MON_NOCTOWL_EMERIBIAN] = {
        .species = SPECIES_NOCTOWL_EMERIBIAN,
        .moves = {MOVE_NIGHT_DAZE, MOVE_HURRICANE, MOVE_DREAM_EATER, MOVE_HYPNOSIS},
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST,
		.ability = 1
    },
    [FRONTIER_MON_LEDIAN] = {
        .species = SPECIES_LEDIAN,
        .moves = {MOVE_POWER_UP_PUNCH, MOVE_DRAIN_PUNCH, MOVE_ICE_PUNCH, MOVE_THUNDER_PUNCH},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.ability = 2
    },
    [FRONTIER_MON_ARIADOS] = {
        .species = SPECIES_ARIADOS,
        .moves = {MOVE_STICKY_WEB, MOVE_TOXIC_SPIKES, MOVE_TOXIC_THREAD, MOVE_MEGAHORN},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_SASH,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.ability = 0
    },
    [FRONTIER_MON_ARIADOS_EMERIBIAN] = {
        .species = SPECIES_ARIADOS_EMERIBIAN,
        .moves = {MOVE_THUNDERBOLT, MOVE_SLUDGE_BOMB, MOVE_TOXIC_THREAD, MOVE_VOLT_SWITCH},
        .itemTableId = BATTLE_FRONTIER_ITEM_MAGNET,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.ability = 1
    },
    [FRONTIER_MON_CROBAT] = {
        .species = SPECIES_CROBAT,
        .moves = {MOVE_BRAVE_BIRD, MOVE_U_TURN, MOVE_ROOST, MOVE_TAUNT},
        .itemTableId = BATTLE_FRONTIER_ITEM_HEAVY_DUTY_BOOTS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.ability = 2
    },
    [FRONTIER_MON_LANTURN] = {
        .species = SPECIES_LANTURN,
        .moves = {MOVE_SCALD, MOVE_VOLT_SWITCH, MOVE_TOXIC, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_CALM,
		.ability = 1
    },
    [FRONTIER_MON_XATU] = {
        .species = SPECIES_XATU,
        .moves = {MOVE_ESPER_WING, MOVE_HEAT_WAVE, MOVE_ROOST, MOVE_U_TURN},
        .itemTableId = BATTLE_FRONTIER_ITEM_ROCKY_HELMET,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_BOLD,
		.ability = 2
    },
    [FRONTIER_MON_AMPHAROS] = {
        .species = SPECIES_AMPHAROS,
        .moves = {MOVE_DAZZLING_GLEAM, MOVE_FOCUS_BLAST, MOVE_VOLT_SWITCH, MOVE_DRAGON_TAIL},
        .itemTableId = BATTLE_FRONTIER_ITEM_ASSAULT_VEST,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_MODEST,
		.ability = 0
    },
    [FRONTIER_MON_BELLOSSOM] = {
        .species = SPECIES_BELLOSSOM,
        .moves = {MOVE_QUIVER_DANCE, MOVE_STRENGTH_SAP, MOVE_GIGA_DRAIN, MOVE_SAFEGUARD},
        .itemTableId = BATTLE_FRONTIER_ITEM_KEE_BERRY,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.ability = 2
    },
    [FRONTIER_MON_BELLOSSOM_EMERIBIAN] = {
        .species = SPECIES_BELLOSSOM_EMERIBIAN,
        .moves = {MOVE_LEAF_STORM, MOVE_HYDRO_PUMP, MOVE_GRASSY_TERRAIN, MOVE_JUNGLE_HEALING},
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SP_ATTACK,
        .nature = NATURE_MODEST,
		.ability = 1
    },
    [FRONTIER_MON_AZUMARILL] = {
        .species = SPECIES_AZUMARILL,
        .moves = {MOVE_BELLY_DRUM, MOVE_PLAY_ROUGH, MOVE_AQUA_JET, MOVE_LIQUIDATION},
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT,
		.ability = 1
    },
    [FRONTIER_MON_SUDOWOODO] = {
        .species = SPECIES_SUDOWOODO,
        .moves = {MOVE_STEALTH_ROCK, MOVE_HEAD_SMASH, MOVE_WOOD_HAMMER, MOVE_SUCKER_PUNCH},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT,
		.ability = 1
    },
    [FRONTIER_MON_POLITOED] = {
        .species = SPECIES_POLITOED,
        .moves = {MOVE_SCALD, MOVE_ENCORE, MOVE_ICE_BEAM, MOVE_REST},
        .itemTableId = BATTLE_FRONTIER_ITEM_DAMP_ROCK,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_BOLD,
		.ability = 2
    },
    [FRONTIER_MON_JUMPLUFF] = {
        .species = SPECIES_JUMPLUFF,
        .moves = {MOVE_STRENGTH_SAP, MOVE_ACROBATICS, MOVE_LEECH_SEED, MOVE_U_TURN},
        .itemTableId = BATTLE_FRONTIER_ITEM_NONE,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.ability = 2
    },
    [FRONTIER_MON_SUNFLORA] = {
        .species = SPECIES_SUNFLORA,
        .moves = {MOVE_EARTH_POWER, MOVE_SLUDGE_BOMB, MOVE_GIGA_DRAIN, MOVE_TRAILBLAZE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST,
		.ability = 2
    },
    [FRONTIER_MON_QUAGSIRE] = {
        .species = SPECIES_QUAGSIRE,
        .moves = {MOVE_TOXIC, MOVE_EARTHQUAKE, MOVE_RECOVER, MOVE_SPIKES},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_IMPISH,
		.ability = 2
    },
    [FRONTIER_MON_ESPEON] = {
        .species = SPECIES_ESPEON,
        .moves = {MOVE_PSYCHIC, MOVE_GRASS_KNOT, MOVE_MORNING_SUN, MOVE_DAZZLING_GLEAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_EXPERT_BELT,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.ability = 2
    },
    [FRONTIER_MON_UMBREON] = {
        .species = SPECIES_UMBREON,
        .moves = {MOVE_FOUL_PLAY, MOVE_WISH, MOVE_PROTECT, MOVE_YAWN},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_CALM,
		.ability = 1
    },
    [FRONTIER_MON_SLOWKING] = {
        .species = SPECIES_SLOWKING,
        .moves = {MOVE_FUTURE_SIGHT, MOVE_CHILLY_RECEPTION, MOVE_SCALD, MOVE_SLACK_OFF},
        .itemTableId = BATTLE_FRONTIER_ITEM_HEAVY_DUTY_BOOTS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_SASSY,
		.ability = 2
    },
    [FRONTIER_MON_SLOWKING_GALARIAN] = {
        .species = SPECIES_SLOWKING_GALARIAN,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_FUTURE_SIGHT, MOVE_FLAMETHROWER, MOVE_ICE_BEAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_ASSAULT_VEST,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_CALM,
		.ability = 2
    },
    [FRONTIER_MON_WOBBUFFET] = {
        .species = SPECIES_WOBBUFFET,
        .moves = {MOVE_ENCORE, MOVE_COUNTER, MOVE_MIRROR_COAT, MOVE_DESTINY_BOND},
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_CALM,
		.ability = 0
    },
    [FRONTIER_MON_FORRETRESS] = {
        .species = SPECIES_FORRETRESS,
        .moves = {MOVE_STEALTH_ROCK, MOVE_RAPID_SPIN, MOVE_GYRO_BALL, MOVE_SPIKY_SHIELD},
        .itemTableId = BATTLE_FRONTIER_ITEM_RED_CARD,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_RELAXED,
		.ability = 0
    },
    [FRONTIER_MON_STEELIX] = {
        .species = SPECIES_STEELIX,
        .moves = {MOVE_STEALTH_ROCK, MOVE_EARTHQUAKE, MOVE_HEAVY_SLAM, MOVE_TOXIC},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_CAREFUL,
		.ability = 1
    },
    [FRONTIER_MON_GRANBULL] = {
        .species = SPECIES_GRANBULL,
        .moves = {MOVE_HEAL_BELL, MOVE_THUNDER_WAVE, MOVE_SPIRIT_BREAK, MOVE_EARTHQUAKE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT,
		.ability = 0
    },
    [FRONTIER_MON_QWILFISH] = {
        .species = SPECIES_QWILFISH,
        .moves = {MOVE_SPIKES, MOVE_TOXIC_SPIKES, MOVE_WATERFALL, MOVE_SPIKY_SHIELD},
        .itemTableId = BATTLE_FRONTIER_ITEM_ROCKY_HELMET,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_IMPISH,
		.ability = 0
    },
    [FRONTIER_MON_SCIZOR] = {
        .species = SPECIES_SCIZOR,
        .moves = {MOVE_SWORDS_DANCE, MOVE_BULLET_PUNCH, MOVE_U_TURN, MOVE_CLOSE_COMBAT},
        .itemTableId = BATTLE_FRONTIER_ITEM_PROTECTIVE_PADS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT,
		.ability = 1
    },
    [FRONTIER_MON_SHUCKLE] = {
        .species = SPECIES_SHUCKLE,
        .moves = {MOVE_STICKY_WEB, MOVE_STEALTH_ROCK, MOVE_ENCORE, MOVE_FINAL_GAMBIT},
        .itemTableId = BATTLE_FRONTIER_ITEM_RED_CARD,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_BOLD,
		.ability = 0
    },
    [FRONTIER_MON_SHUCKLE_FRIBIAN] = {
        .species = SPECIES_SHUCKLE_FRIBIAN,
        .moves = {MOVE_STICKY_WEB, MOVE_INFESTATION, MOVE_POWER_TRICK, MOVE_BULLET_PUNCH},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_SASSY,
		.ability = 2
    },
    [FRONTIER_MON_HERACROSS] = {
        .species = SPECIES_HERACROSS,
        .moves = {MOVE_MEGAHORN, MOVE_CLOSE_COMBAT, MOVE_FACADE, MOVE_THROAT_CHOP},
        .itemTableId = BATTLE_FRONTIER_ITEM_FLAME_ORB,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.ability = 1
    },
    [FRONTIER_MON_MAGCARGO] = {
        .species = SPECIES_MAGCARGO,
        .moves = {MOVE_STEALTH_ROCK, MOVE_RECOVER, MOVE_YAWN, MOVE_LAVA_PLUME},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_CALM,
		.ability = 1
    },
    [FRONTIER_MON_MAGCARGO_EMERIBIAN] = {
        .species = SPECIES_MAGCARGO_EMERIBIAN,
        .moves = {MOVE_SACRED_FIRE, MOVE_IRON_HEAD, MOVE_ROCK_SLIDE, MOVE_YAWN},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHUCA_BERRY,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT,
		.ability = 0
    },
    [FRONTIER_MON_CORSOLA] = {
        .species = SPECIES_CORSOLA,
        .moves = {MOVE_STEALTH_ROCK, MOVE_ROCK_SLIDE, MOVE_TOXIC, MOVE_RECOVER},
        .itemTableId = BATTLE_FRONTIER_ITEM_ROCKY_HELMET,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_CAREFUL,
		.ability = 2
    },
    [FRONTIER_MON_OCTILLERY] = {
        .species = SPECIES_OCTILLERY,
        .moves = {MOVE_HYDRO_PUMP, MOVE_FIRE_BLAST, MOVE_ENERGY_BALL, MOVE_ICE_BEAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST,
		.ability = 0
    },
    [FRONTIER_MON_OCTILLERY_FRIBIAN] = {
        .species = SPECIES_OCTILLERY_FRIBIAN,
        .moves = {MOVE_SNIPE_SHOT, MOVE_FOCUS_ENERGY, MOVE_STEAM_ERUPTION, MOVE_FIRE_BLAST},
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SP_ATTACK,
        .nature = NATURE_MODEST,
		.ability = 1
    },
    [FRONTIER_MON_DELIBIRD] = {
        .species = SPECIES_DELIBIRD,
        .moves = {MOVE_ICE_SPINNER, MOVE_RAPID_SPIN, MOVE_FREEZE_DRY, MOVE_MEMENTO},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_SASH,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.ability = 0
    },
    [FRONTIER_MON_MANTINE] = {
        .species = SPECIES_MANTINE,
        .moves = {MOVE_SCALD, MOVE_HURRICANE, MOVE_ROOST, MOVE_DEFOG},
        .itemTableId = BATTLE_FRONTIER_ITEM_HEAVY_DUTY_BOOTS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_SPEED,
        .nature = NATURE_BOLD,
		.ability = 1
    },
    [FRONTIER_MON_SKARMORY] = {
        .species = SPECIES_SKARMORY,
        .moves = {MOVE_IRON_DEFENSE, MOVE_SPIKES, MOVE_ROOST, MOVE_BODY_PRESS},
        .itemTableId = BATTLE_FRONTIER_ITEM_ROCKY_HELMET,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_SPEED,
        .nature = NATURE_BOLD,
		.ability = 1
    },
    [FRONTIER_MON_SKARMORY_FRIBIAN] = {
        .species = SPECIES_SKARMORY_FRIBIAN,
        .moves = {MOVE_HEAT_CRASH, MOVE_WHIRLWIND, MOVE_FAKE_OUT, MOVE_SMART_STRIKE},
        .itemTableId = BATTLE_FRONTIER_ITEM_AIR_BALLOON,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.ability = 2
    },
    [FRONTIER_MON_HOUNDOOM] = {
        .species = SPECIES_HOUNDOOM,
        .moves = {MOVE_DARK_PULSE, MOVE_FIRE_BLAST, MOVE_OVERHEAT, MOVE_SLUDGE_BOMB},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_SCARF,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.ability = 1
    },
    [FRONTIER_MON_KINGDRA] = {
        .species = SPECIES_KINGDRA,
        .moves = {MOVE_FOCUS_ENERGY, MOVE_DRACO_METEOR, MOVE_FLIP_TURN, MOVE_SCALD},
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST,
		.ability = 1
    },
    [FRONTIER_MON_DONPHAN] = {
        .species = SPECIES_DONPHAN,
        .moves = {MOVE_EARTHQUAKE, MOVE_KNOCK_OFF, MOVE_RAPID_SPIN, MOVE_ICE_SPINNER},
        .itemTableId = BATTLE_FRONTIER_ITEM_ASSAULT_VEST,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_ADAMANT,
		.ability = 0
    },
    [FRONTIER_MON_SMEARGLE] = {
        .species = SPECIES_SMEARGLE,
        .moves = {MOVE_STICKY_WEB, MOVE_TAUNT, MOVE_SPORE, MOVE_ICY_WIND},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_SASH,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.ability = 1
    },
    [FRONTIER_MON_HITMONTOP] = {
        .species = SPECIES_HITMONTOP,
        .moves = {MOVE_RAPID_SPIN, MOVE_TRIPLE_AXEL, MOVE_MACH_PUNCH, MOVE_PURSUIT},
        .itemTableId = BATTLE_FRONTIER_ITEM_ASSAULT_VEST,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT,
		.ability = 1
    },
    [FRONTIER_MON_MILTANK] = {
        .species = SPECIES_MILTANK,
        .moves = {MOVE_MILK_DRINK, MOVE_BODY_SLAM, MOVE_TOXIC, MOVE_HEAL_BELL},
        .itemTableId = BATTLE_FRONTIER_ITEM_ROCKY_HELMET,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_IMPISH,
		.ability = 0
    },
    [FRONTIER_MON_BLISSEY] = {
        .species = SPECIES_BLISSEY,
        .moves = {MOVE_SEISMIC_TOSS, MOVE_SOFT_BOILED, MOVE_THUNDER_WAVE, MOVE_TELEPORT},
        .itemTableId = BATTLE_FRONTIER_ITEM_HEAVY_DUTY_BOOTS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_BOLD,
		.ability = 0
    },
    [FRONTIER_MON_RAIKOU] = {
        .species = SPECIES_RAIKOU,
        .moves = {MOVE_VOLT_SWITCH, MOVE_THUNDERBOLT, MOVE_SCALD, MOVE_TOXIC},
        .itemTableId = BATTLE_FRONTIER_ITEM_HEAVY_DUTY_BOOTS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.ability = 2
    },
    [FRONTIER_MON_ENTEI] = {
        .species = SPECIES_ENTEI,
        .moves = {MOVE_SACRED_FIRE, MOVE_FLARE_BLITZ, MOVE_STONE_EDGE, MOVE_EXTREME_SPEED},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.ability = 2
    },
    [FRONTIER_MON_SUICUNE] = {
        .species = SPECIES_SUICUNE,
        .moves = {MOVE_CALM_MIND, MOVE_SCALD, MOVE_SUBSTITUTE, MOVE_ICE_BEAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.ability = 0
    },
    [FRONTIER_MON_TYRANITAR] = {
        .species = SPECIES_TYRANITAR,
        .moves = {MOVE_DRAGON_DANCE, MOVE_SUBSTITUTE, MOVE_STONE_EDGE, MOVE_EARTHQUAKE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.ability = 0
    },
    [FRONTIER_MON_SCEPTILE] = {
        .species = SPECIES_SCEPTILE,
        .moves = {MOVE_SWORDS_DANCE, MOVE_LEAF_BLADE, MOVE_ROCK_SLIDE, MOVE_LOW_KICK},
        .itemTableId = BATTLE_FRONTIER_ITEM_OCCA_BERRY,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT,
		.ability = 0
    },
    [FRONTIER_MON_BLAZIKEN] = {
        .species = SPECIES_BLAZIKEN,
        .moves = {MOVE_SWORDS_DANCE, MOVE_FLARE_BLITZ, MOVE_CLOSE_COMBAT, MOVE_THUNDER_PUNCH},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.ability = 2
    },
    [FRONTIER_MON_SWAMPERT] = {
        .species = SPECIES_SWAMPERT,
        .moves = {MOVE_EARTHQUAKE, MOVE_FLIP_TURN, MOVE_TOXIC, MOVE_STEALTH_ROCK},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_SASSY,
		.ability = 0
    },
    [FRONTIER_MON_MIGHTYENA] = {
        .species = SPECIES_MIGHTYENA,
        .moves = {MOVE_CRUNCH, MOVE_SUCKER_PUNCH, MOVE_PLAY_ROUGH, MOVE_IRON_TAIL},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.ability = 2
    },
    [FRONTIER_MON_LINOONE] = {
        .species = SPECIES_LINOONE,
        .moves = {MOVE_BELLY_DRUM, MOVE_EXTREME_SPEED, MOVE_STOMPING_TANTRUM, MOVE_SEED_BOMB},
        .itemTableId = BATTLE_FRONTIER_ITEM_FIGY_BERRY,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT,
		.ability = 1
    },
    [FRONTIER_MON_BEAUTIFLY] = {
        .species = SPECIES_BEAUTIFLY,
        .moves = {MOVE_QUIVER_DANCE, MOVE_BUG_BUZZ, MOVE_RAZOR_WIND, MOVE_ROOST},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.ability = 1
    },
    [FRONTIER_MON_DUSTOX] = {
        .species = SPECIES_DUSTOX,
        .moves = {MOVE_QUIVER_DANCE, MOVE_IRON_DEFENSE, MOVE_BUG_BUZZ, MOVE_ROOST},
        .itemTableId = BATTLE_FRONTIER_ITEM_BLACK_SLUDGE,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_SPEED,
        .nature = NATURE_BOLD,
		.ability = 0
    },
    [FRONTIER_MON_LUDICOLO] = {
        .species = SPECIES_LUDICOLO,
        .moves = {MOVE_WEATHER_BALL, MOVE_GIGA_DRAIN, MOVE_ICE_BEAM, MOVE_RAIN_DANCE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST,
		.ability = 0
    },
    [FRONTIER_MON_SHIFTRY] = {
        .species = SPECIES_SHIFTRY,
        .moves = {MOVE_GROWTH, MOVE_SOLAR_BLADE, MOVE_KNOCK_OFF, MOVE_SUNNY_DAY},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT,
		.ability = 0
    },
    [FRONTIER_MON_SWELLOW] = {
        .species = SPECIES_SWELLOW,
        .moves = {MOVE_FACADE, MOVE_BRAVE_BIRD, MOVE_U_TURN, MOVE_TAILWIND},
        .itemTableId = BATTLE_FRONTIER_ITEM_FLAME_ORB,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.ability = 0
    },
    [FRONTIER_MON_PELIPPER] = {
        .species = SPECIES_PELIPPER,
        .moves = {MOVE_SCALD, MOVE_U_TURN, MOVE_ROOST, MOVE_DEFOG},
        .itemTableId = BATTLE_FRONTIER_ITEM_DAMP_ROCK,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_BOLD,
		.ability = 1
    },
    [FRONTIER_MON_GARDEVOIR] = {
        .species = SPECIES_GARDEVOIR,
        .moves = {MOVE_PSYCHIC, MOVE_MOONBLAST, MOVE_MYSTICAL_FIRE, MOVE_AURA_SPHERE},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_SCARF,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.ability = 1
    },
    [FRONTIER_MON_GARDEVOIR_EMERIBIAN] = {
        .species = SPECIES_GARDEVOIR_EMERIBIAN,
        .moves = {MOVE_STRANGE_STEAM, MOVE_FLAMETHROWER, MOVE_DAZZLING_GLEAM, MOVE_WILL_O_WISP},
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST,
		.ability = 1
    },
    [FRONTIER_MON_MASQUERAIN] = {
        .species = SPECIES_MASQUERAIN,
        .moves = {MOVE_STICKY_WEB, MOVE_QUIVER_DANCE, MOVE_BUG_BUZZ, MOVE_HYDRO_PUMP},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_SASH,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.ability = 0
    },
    [FRONTIER_MON_BRELOOM] = {
        .species = SPECIES_BRELOOM,
        .moves = {MOVE_SPORE, MOVE_BULLET_SEED, MOVE_MACH_PUNCH, MOVE_CLOSE_COMBAT},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_SASH,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT,
		.ability = 2
    },
    [FRONTIER_MON_BRELOOM_FRIBIAN] = {
        .species = SPECIES_BRELOOM_FRIBIAN,
        .moves = {MOVE_SEED_BOMB, MOVE_THOUSAND_WAVES, MOVE_DRAIN_PUNCH, MOVE_MACH_PUNCH},
        .itemTableId = BATTLE_FRONTIER_ITEM_HEAT_ROCK,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT,
		.ability = 1
    },
    [FRONTIER_MON_SLAKING] = {
        .species = SPECIES_SLAKING,
        .moves = {MOVE_BODY_SLAM, MOVE_EARTHQUAKE, MOVE_NIGHT_SLASH, MOVE_SUCKER_PUNCH},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.ability = 0
    },
    [FRONTIER_MON_NINJASK] = {
        .species = SPECIES_NINJASK,
        .moves = {MOVE_ACROBATICS, MOVE_U_TURN, MOVE_PROTECT, MOVE_SWORDS_DANCE},
        .itemTableId = BATTLE_FRONTIER_ITEM_NONE,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT,
		.ability = 0
    },
    [FRONTIER_MON_SHEDINJA] = {
        .species = SPECIES_SHEDINJA,
        .moves = {MOVE_TOXIC, MOVE_WILL_O_WISP, MOVE_X_SCISSOR, MOVE_SHADOW_SNEAK},
        .itemTableId = BATTLE_FRONTIER_ITEM_HEAVY_DUTY_BOOTS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_HASTY,
		.ability = 0
    },
    [FRONTIER_MON_EXPLOUD] = {
        .species = SPECIES_EXPLOUD,
        .moves = {MOVE_BOOMBURST, MOVE_OVERHEAT, MOVE_ICY_WIND, MOVE_FOCUS_BLAST},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_SPECS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.ability = 2
    },
    [FRONTIER_MON_HARIYAMA] = {
        .species = SPECIES_HARIYAMA,
        .moves = {MOVE_BULLET_PUNCH, MOVE_FAKE_OUT, MOVE_CLOSE_COMBAT, MOVE_HEADLONG_RUSH},
        .itemTableId = BATTLE_FRONTIER_ITEM_ASSAULT_VEST,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_ADAMANT,
		.ability = 0
    },
    [FRONTIER_MON_DELCATTY] = {
        .species = SPECIES_DELCATTY,
        .moves = {MOVE_FAKE_OUT, MOVE_SUCKER_PUNCH, MOVE_PLAY_ROUGH, MOVE_THUNDER_WAVE},
        .itemTableId = BATTLE_FRONTIER_ITEM_ASSAULT_VEST,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.ability = 1
    },
    [FRONTIER_MON_SABLEYE] = {
        .species = SPECIES_SABLEYE,
        .moves = {MOVE_KNOCK_OFF, MOVE_WILL_O_WISP, MOVE_RECOVER, MOVE_ENCORE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_IMPISH,
		.ability = 2
    },
    [FRONTIER_MON_MAWILE] = {
        .species = SPECIES_MAWILE,
        .moves = {MOVE_PLAY_ROUGH, MOVE_IRON_HEAD, MOVE_SUCKER_PUNCH, MOVE_SWORDS_DANCE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT,
		.ability = 1
    },
    [FRONTIER_MON_AGGRON] = {
        .species = SPECIES_AGGRON,
        .moves = {MOVE_STEALTH_ROCK, MOVE_HEAD_SMASH, MOVE_EARTHQUAKE, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_CAREFUL,
		.ability = 1
    },
    [FRONTIER_MON_MEDICHAM] = {
        .species = SPECIES_MEDICHAM,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_ZEN_HEADBUTT, MOVE_THUNDER_PUNCH, MOVE_TRICK},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_SCARF,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.ability = 0
    },
    [FRONTIER_MON_MANECTRIC] = {
        .species = SPECIES_MANECTRIC,
        .moves = {MOVE_THUNDERBOLT, MOVE_VOLT_SWITCH, MOVE_OVERHEAT, MOVE_HYPER_VOICE},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_SPECS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.ability = 1
    },
    [FRONTIER_MON_PLUSLE] = {
        .species = SPECIES_PLUSLE,
        .moves = {MOVE_NASTY_PLOT, MOVE_THUNDERBOLT, MOVE_GRASS_KNOT, MOVE_ENCORE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.ability = 1
    },
    [FRONTIER_MON_MINUN] = {
        .species = SPECIES_MINUN,
        .moves = {MOVE_NASTY_PLOT, MOVE_THUNDERBOLT, MOVE_GRASS_KNOT, MOVE_SUBSTITUTE},
        .itemTableId = BATTLE_FRONTIER_ITEM_ELECTRIC_SEED,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.ability = 1
    },
    [FRONTIER_MON_VOLBEAT] = {
        .species = SPECIES_VOLBEAT,
        .moves = {MOVE_RAIN_DANCE, MOVE_U_TURN, MOVE_THUNDER_WAVE, MOVE_ENCORE},
        .itemTableId = BATTLE_FRONTIER_ITEM_DAMP_ROCK,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_RELAXED,
		.ability = 2
    },
    [FRONTIER_MON_ILLUMISE] = {
        .species = SPECIES_ILLUMISE,
        .moves = {MOVE_SUNNY_DAY, MOVE_U_TURN, MOVE_THUNDER_WAVE, MOVE_DEFOG},
        .itemTableId = BATTLE_FRONTIER_ITEM_HEAT_ROCK,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_RELAXED,
		.ability = 2
    },
    [FRONTIER_MON_SWALOT] = {
        .species = SPECIES_SWALOT,
        .moves = {MOVE_ACID_ARMOR, MOVE_BODY_PRESS, MOVE_TOXIC, MOVE_SHADOW_BALL},
        .itemTableId = BATTLE_FRONTIER_ITEM_BLACK_SLUDGE,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_BOLD,
		.ability = 0
    },
    [FRONTIER_MON_SHARPEDO] = {
        .species = SPECIES_SHARPEDO,
        .moves = {MOVE_PROTECT, MOVE_WATERFALL, MOVE_CRUNCH, MOVE_CLOSE_COMBAT},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT,
		.ability = 2
    },
    [FRONTIER_MON_WAILORD] = {
        .species = SPECIES_WAILORD,
        .moves = {MOVE_BLOCK, MOVE_REST, MOVE_NOBLE_ROAR, MOVE_TOXIC},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_CALM,
		.ability = 2
    },
    [FRONTIER_MON_CAMERUPT] = {
        .species = SPECIES_CAMERUPT,
        .moves = {MOVE_STEALTH_ROCK, MOVE_LAVA_PLUME, MOVE_EARTH_POWER, MOVE_YAWN},
        .itemTableId = BATTLE_FRONTIER_ITEM_HEAVY_DUTY_BOOTS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_CALM,
		.ability = 1
    },
    [FRONTIER_MON_TORKOAL] = {
        .species = SPECIES_TORKOAL,
        .moves = {MOVE_LAVA_PLUME, MOVE_RAPID_SPIN, MOVE_STEALTH_ROCK, MOVE_WILL_O_WISP},
        .itemTableId = BATTLE_FRONTIER_ITEM_HEAT_ROCK,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_BOLD,
		.ability = 1
    },
    [FRONTIER_MON_GRUMPIG] = {
        .species = SPECIES_GRUMPIG,
        .moves = {MOVE_NASTY_PLOT, MOVE_PSYSHOCK, MOVE_EARTH_POWER, MOVE_DAZZLING_GLEAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST,
		.ability = 0
    },
    [FRONTIER_MON_SPINDA] = {
        .species = SPECIES_SPINDA,
        .moves = {MOVE_TRICK_ROOM, MOVE_SUPERPOWER, MOVE_SUCKER_PUNCH, MOVE_ASSIST},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_ATTACK,
        .nature = NATURE_BRAVE,
		.ability = 2
    },
    [FRONTIER_MON_FLYGON] = {
        .species = SPECIES_FLYGON,
        .moves = {MOVE_DRAGON_DANCE, MOVE_BULLDOZE, MOVE_OUTRAGE, MOVE_STONE_EDGE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_BRAVE,
		.ability = 0
    },
    [FRONTIER_MON_CACTURNE] = {
        .species = SPECIES_CACTURNE,
        .moves = {MOVE_SPIKY_SHIELD, MOVE_SPIKES, MOVE_NEEDLE_ARM, MOVE_SUCKER_PUNCH},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT,
		.ability = 1
    },
    [FRONTIER_MON_ALTARIA] = {
        .species = SPECIES_ALTARIA,
        .moves = {MOVE_BRAVE_BIRD, MOVE_PERISH_SONG, MOVE_WILL_O_WISP, MOVE_ROOST},
        .itemTableId = BATTLE_FRONTIER_ITEM_HEAVY_DUTY_BOOTS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_IMPISH,
		.ability = 1
    },
    [FRONTIER_MON_ZANGOOSE] = {
        .species = SPECIES_ZANGOOSE,
        .moves = {MOVE_FACADE, MOVE_CLOSE_COMBAT, MOVE_NIGHT_SLASH, MOVE_QUICK_ATTACK},
        .itemTableId = BATTLE_FRONTIER_ITEM_TOXIC_ORB,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.ability = 2
    },
    [FRONTIER_MON_SEVIPER] = {
        .species = SPECIES_SEVIPER,
        .moves = {MOVE_TOXIC, MOVE_VENOSHOCK, MOVE_GIGA_DRAIN, MOVE_FLAMETHROWER},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_RASH,
		.ability = 1
    },
    [FRONTIER_MON_LUNATONE] = {
        .species = SPECIES_LUNATONE,
        .moves = {MOVE_METEOR_BEAM, MOVE_PSYSHOCK, MOVE_EARTH_POWER, MOVE_ROCK_POLISH},
        .itemTableId = BATTLE_FRONTIER_ITEM_POWER_HERB,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST,
		.ability = 0
    },
    [FRONTIER_MON_SOLROCK] = {
        .species = SPECIES_SOLROCK,
        .moves = {MOVE_MORNING_SUN, MOVE_STEALTH_ROCK, MOVE_WILL_O_WISP, MOVE_ROCK_SLIDE},
        .itemTableId = BATTLE_FRONTIER_ITEM_ROCKY_HELMET,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_SPEED,
        .nature = NATURE_BOLD,
		.ability = 0
    },
    [FRONTIER_MON_WHISCASH] = {
        .species = SPECIES_WHISCASH,
        .moves = {MOVE_STEALTH_ROCK, MOVE_EARTH_POWER, MOVE_ICE_BEAM, MOVE_SPIKES},
        .itemTableId = BATTLE_FRONTIER_ITEM_HEAVY_DUTY_BOOTS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_CALM,
		.ability = 0
    },
    [FRONTIER_MON_CRAWDAUNT] = {
        .species = SPECIES_CRAWDAUNT,
        .moves = {MOVE_CRABHAMMER, MOVE_KNOCK_OFF, MOVE_AQUA_JET, MOVE_CLOSE_COMBAT},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT,
		.ability = 2
    },
    [FRONTIER_MON_CLAYDOL] = {
        .species = SPECIES_CLAYDOL,
        .moves = {MOVE_RAPID_SPIN, MOVE_TOXIC, MOVE_SCORCHING_SANDS, MOVE_PSYCHIC},
        .itemTableId = BATTLE_FRONTIER_ITEM_COLBUR_BERRY,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_BOLD,
		.ability = 0
    },
    [FRONTIER_MON_CRADILY] = {
        .species = SPECIES_CRADILY,
        .moves = {MOVE_ROCK_BLAST, MOVE_STEALTH_ROCK, MOVE_TOXIC, MOVE_RECOVER},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_CAREFUL,
		.ability = 1
    },
    [FRONTIER_MON_ARMALDO] = {
        .species = SPECIES_ARMALDO,
        .moves = {MOVE_STEALTH_ROCK, MOVE_RAPID_SPIN, MOVE_STONE_EDGE, MOVE_X_SCISSOR},
        .itemTableId = BATTLE_FRONTIER_ITEM_HEAVY_DUTY_BOOTS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT,
		.ability = 1
    },
    [FRONTIER_MON_MILOTIC] = {
        .species = SPECIES_MILOTIC,
        .moves = {MOVE_SCALD, MOVE_RECOVER, MOVE_ICE_BEAM, MOVE_HAZE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_SPEED,
        .nature = NATURE_BOLD,
		.ability = 0
    },
    [FRONTIER_MON_CASTFORM] = {
        .species = SPECIES_CASTFORM,
        .moves = {MOVE_RAIN_DANCE, MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_THUNDER},
        .itemTableId = BATTLE_FRONTIER_ITEM_WATER_GEM,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.ability = 0
    },
    [FRONTIER_MON_KECLEON] = {
        .species = SPECIES_KECLEON,
        .moves = {MOVE_PROTECT, MOVE_KNOCK_OFF, MOVE_DRAIN_PUNCH, MOVE_SHADOW_SNEAK},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT,
		.ability = 1
    },
    [FRONTIER_MON_BANETTE] = {
        .species = SPECIES_BANETTE,
        .moves = {MOVE_SWORDS_DANCE, MOVE_KNOCK_OFF, MOVE_SHADOW_CLAW, MOVE_SUCKER_PUNCH},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.ability = 1
    },
    [FRONTIER_MON_TROPIUS] = {
        .species = SPECIES_TROPIUS,
        .moves = {MOVE_LEECH_SEED, MOVE_REST, MOVE_AIR_SLASH, MOVE_DRAGON_TAIL},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_ATTACK,
        .nature = NATURE_BOLD,
		.ability = 2
    },
    [FRONTIER_MON_CHIMECHO] = {
        .species = SPECIES_CHIMECHO,
        .moves = {MOVE_DEFOG, MOVE_RECOVER, MOVE_PSYCHIC, MOVE_THUNDER_WAVE},
        .itemTableId = BATTLE_FRONTIER_ITEM_COLBUR_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_CALM,
		.ability = 0
    },
    [FRONTIER_MON_ABSOL] = {
        .species = SPECIES_ABSOL,
        .moves = {MOVE_SWORDS_DANCE, MOVE_KNOCK_OFF, MOVE_SUCKER_PUNCH, MOVE_PLAY_ROUGH},
        .itemTableId = BATTLE_FRONTIER_ITEM_BLACK_GLASSES,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.ability = 2
    },
    [FRONTIER_MON_GLALIE] = {
        .species = SPECIES_GLALIE,
        .moves = {MOVE_PROTECT, MOVE_SPIKES, MOVE_ICE_SPINNER, MOVE_ICE_SHARD},
        .itemTableId = BATTLE_FRONTIER_ITEM_HEAVY_DUTY_BOOTS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.ability = 2
    },
    [FRONTIER_MON_WALREIN] = {
        .species = SPECIES_WALREIN,
        .moves = {MOVE_SWORDS_DANCE, MOVE_ICICLE_SPEAR, MOVE_EARTHQUAKE, MOVE_LIQUIDATION},
        .itemTableId = BATTLE_FRONTIER_ITEM_HEAVY_DUTY_BOOTS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT,
		.ability = 0
    },
    [FRONTIER_MON_HUNTAIL] = {
        .species = SPECIES_HUNTAIL,
        .moves = {MOVE_SHELL_SMASH, MOVE_WATERFALL, MOVE_SUCKER_PUNCH, MOVE_ICE_FANG},
        .itemTableId = BATTLE_FRONTIER_ITEM_WHITE_HERB,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT,
		.ability = 2
    },
    [FRONTIER_MON_GOREBYSS] = {
        .species = SPECIES_GOREBYSS,
        .moves = {MOVE_SHELL_SMASH, MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_SUBSTITUTE},
        .itemTableId = BATTLE_FRONTIER_ITEM_WHITE_HERB,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST,
		.ability = 1
    },
    [FRONTIER_MON_RELICANTH] = {
        .species = SPECIES_RELICANTH,
        .moves = {MOVE_HEAD_SMASH, MOVE_WATERFALL, MOVE_BULLDOZE, MOVE_ZEN_HEADBUTT},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT,
		.ability = 1
    },
    [FRONTIER_MON_LUVDISC] = {
        .species = SPECIES_LUVDISC,
        .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_RECOVER, MOVE_SCALD},
        .itemTableId = BATTLE_FRONTIER_ITEM_DAMP_ROCK,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST,
		.ability = 1
    },
    [FRONTIER_MON_SALAMENCE] = {
        .species = SPECIES_SALAMENCE,
        .moves = {MOVE_DRACO_METEOR, MOVE_HURRICANE, MOVE_FLAMETHROWER, MOVE_ROOST},
        .itemTableId = BATTLE_FRONTIER_ITEM_HEAVY_DUTY_BOOTS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.ability = 0
    },
    [FRONTIER_MON_METAGROSS] = {
        .species = SPECIES_METAGROSS,
        .moves = {MOVE_PROTECT, MOVE_IRON_HEAD, MOVE_ICE_PUNCH, MOVE_BULLET_PUNCH},
        .itemTableId = BATTLE_FRONTIER_ITEM_WEAKNESS_POLICY,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT,
		.ability = 0
    },
    [FRONTIER_MON_REGIROCK] = {
        .species = SPECIES_REGIROCK,
        .moves = {MOVE_STEALTH_ROCK, MOVE_STONE_EDGE, MOVE_BODY_PRESS, MOVE_THUNDER_WAVE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_IMPISH,
		.ability = 0
    },
    [FRONTIER_MON_REGICE] = {
        .species = SPECIES_REGICE,
        .moves = {MOVE_ROCK_POLISH, MOVE_ICE_BEAM, MOVE_THUNDERBOLT, MOVE_FOCUS_BLAST},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.ability = 0
    },
    [FRONTIER_MON_REGISTEEL] = {
        .species = SPECIES_REGISTEEL,
        .moves = {MOVE_STEALTH_ROCK, MOVE_TOXIC, MOVE_BODY_PRESS, MOVE_HEAVY_SLAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_CAREFUL,
		.ability = 0
    },
    [FRONTIER_MON_LATIAS] = {
        .species = SPECIES_LATIAS,
        .moves = {MOVE_CALM_MIND, MOVE_ROOST, MOVE_ESPER_WING, MOVE_DRACO_METEOR},
        .itemTableId = BATTLE_FRONTIER_ITEM_SOUL_DEW,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.ability = 0
    },
    [FRONTIER_MON_LATIOS] = {
        .species = SPECIES_LATIOS,
        .moves = {MOVE_CALM_MIND, MOVE_PSYSHOCK, MOVE_DRACO_METEOR, MOVE_THUNDERBOLT},
        .itemTableId = BATTLE_FRONTIER_ITEM_SOUL_DEW,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.ability = 0
    },
    [FRONTIER_MON_TORTERRA] = {
        .species = SPECIES_TORTERRA,
        .moves = {MOVE_STEALTH_ROCK, MOVE_WOOD_HAMMER, MOVE_HEADLONG_RUSH, MOVE_SYNTHESIS},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_IMPISH,
		.ability = 1
    },
    [FRONTIER_MON_INFERNAPE] = {
        .species = SPECIES_INFERNAPE,
        .moves = {MOVE_OVERHEAT, MOVE_STEALTH_ROCK, MOVE_U_TURN, MOVE_CLOSE_COMBAT},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_HASTY,
		.ability = 0
    },
    [FRONTIER_MON_EMPOLEON] = {
        .species = SPECIES_EMPOLEON,
        .moves = {MOVE_SCALD, MOVE_ICE_BEAM, MOVE_DEFOG, MOVE_ROAR},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHUCA_BERRY,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_CALM,
		.ability = 0
    },
    [FRONTIER_MON_STARAPTOR] = {
        .species = SPECIES_STARAPTOR,
        .moves = {MOVE_BRAVE_BIRD, MOVE_DOUBLE_EDGE, MOVE_CLOSE_COMBAT, MOVE_U_TURN},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_SCARF,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.ability = 2
    },
    [FRONTIER_MON_BIBAREL] = {
        .species = SPECIES_BIBAREL,
        .moves = {MOVE_PROTECT, MOVE_WATERFALL, MOVE_AQUA_JET, MOVE_STRENGTH},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT,
		.ability = 2
    },
    [FRONTIER_MON_KRICKETUNE] = {
        .species = SPECIES_KRICKETUNE,
        .moves = {MOVE_STICKY_WEB, MOVE_POUNCE, MOVE_TAUNT, MOVE_TRAILBLAZE},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_SASH,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.ability = 2
    },
    [FRONTIER_MON_LUXRAY] = {
        .species = SPECIES_LUXRAY,
        .moves = {MOVE_FACADE, MOVE_WILD_CHARGE, MOVE_SUPERPOWER, MOVE_CRUNCH},
        .itemTableId = BATTLE_FRONTIER_ITEM_FLAME_ORB,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT,
		.ability = 2
    },
    [FRONTIER_MON_ROSERADE] = {
        .species = SPECIES_ROSERADE,
        .moves = {MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB, MOVE_SPIKES, MOVE_SYNTHESIS},
        .itemTableId = BATTLE_FRONTIER_ITEM_BLACK_SLUDGE,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.ability = 0
    },
    [FRONTIER_MON_RAMPARDOS] = {
        .species = SPECIES_RAMPARDOS,
        .moves = {MOVE_SUPERPOWER, MOVE_ROCK_SLIDE, MOVE_PURSUIT, MOVE_ZEN_HEADBUTT},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_SCARF,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.ability = 1
    },
    [FRONTIER_MON_BASTIODON] = {
        .species = SPECIES_BASTIODON,
        .moves = {MOVE_STEALTH_ROCK, MOVE_ROCK_SLIDE, MOVE_METAL_BURST, MOVE_TOXIC},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_CAREFUL,
		.ability = 0
    },
    [FRONTIER_MON_WORMADAM] = {
        .species = SPECIES_WORMADAM,
        .moves = {MOVE_QUIVER_DANCE, MOVE_BUG_BUZZ, MOVE_GIGA_DRAIN, MOVE_PSYCHIC},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.ability = 1
    },
    [FRONTIER_MON_MOTHIM] = {
        .species = SPECIES_MOTHIM,
        .moves = {MOVE_BUG_BUZZ, MOVE_AIR_SLASH, MOVE_U_TURN, MOVE_ENERGY_BALL},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_SPECS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_RASH,
		.ability = 2
    },
    [FRONTIER_MON_VESPIQUEN] = {
        .species = SPECIES_VESPIQUEN,
        .moves = {MOVE_SPIKES, MOVE_U_TURN, MOVE_TOXIC, MOVE_ROOST},
        .itemTableId = BATTLE_FRONTIER_ITEM_HEAVY_DUTY_BOOTS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_RELAXED,
		.ability = 0
    },
    [FRONTIER_MON_PACHIRISU] = {
        .species = SPECIES_PACHIRISU,
        .moves = {MOVE_NUZZLE, MOVE_ENCORE, MOVE_U_TURN, MOVE_SUPER_FANG},
        .itemTableId = BATTLE_FRONTIER_ITEM_HEAVY_DUTY_BOOTS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.ability = 2
    },
    [FRONTIER_MON_FLOATZEL] = {
        .species = SPECIES_FLOATZEL,
        .moves = {MOVE_LIQUIDATION, MOVE_WAVE_CRASH, MOVE_ICE_SHARD, MOVE_AQUA_JET},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT,
		.ability = 1
    },
    [FRONTIER_MON_CHERRIM] = {
        .species = SPECIES_CHERRIM,
        .moves = {MOVE_SUNNY_DAY, MOVE_SOLAR_BLADE, MOVE_PLAY_ROUGH, MOVE_WEATHER_BALL},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_NAIVE,
		.ability = 0
    },
    [FRONTIER_MON_GASTRODON] = {
        .species = SPECIES_GASTRODON,
        .moves = {MOVE_ICE_BEAM, MOVE_EARTH_POWER, MOVE_TOXIC, MOVE_RECOVER},
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_CALM,
		.ability = 1
    },
    [FRONTIER_MON_AMBIPOM] = {
        .species = SPECIES_AMBIPOM,
        .moves = {MOVE_FAKE_OUT, MOVE_LOW_KICK, MOVE_PURSUIT, MOVE_U_TURN},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.ability = 0
    },
    [FRONTIER_MON_DRIFBLIM] = {
        .species = SPECIES_DRIFBLIM,
        .moves = {MOVE_HEX, MOVE_WILL_O_WISP, MOVE_DEFOG, MOVE_STRENGTH_SAP},
        .itemTableId = BATTLE_FRONTIER_ITEM_HEAVY_DUTY_BOOTS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_BOLD,
		.ability = 0
    },
    [FRONTIER_MON_DRIFBLIM_EMERIBIAN] = {
        .species = SPECIES_DRIFBLIM_EMERIBIAN,
        .moves = {MOVE_PROTECT, MOVE_BURN_UP, MOVE_SHADOW_BALL, MOVE_TAILWIND},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHARCOAL,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SP_ATTACK,
        .nature = NATURE_TIMID,
		.ability = 2
    },
    [FRONTIER_MON_LOPUNNY] = {
        .species = SPECIES_LOPUNNY,
        .moves = {MOVE_SWITCHEROO, MOVE_STRENGTH, MOVE_U_TURN, MOVE_THUNDER_WAVE},
        .itemTableId = BATTLE_FRONTIER_ITEM_ASSAULT_VEST,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.ability = 1
    },
    [FRONTIER_MON_MISMAGIUS] = {
        .species = SPECIES_MISMAGIUS,
        .moves = {MOVE_NASTY_PLOT, MOVE_SHADOW_BALL, MOVE_MYSTICAL_FIRE, MOVE_PSYSHOCK},
        .itemTableId = BATTLE_FRONTIER_ITEM_COLBUR_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.ability = 0
    },
    [FRONTIER_MON_HONCHKROW] = {
        .species = SPECIES_HONCHKROW,
        .moves = {MOVE_BRAVE_BIRD, MOVE_SUCKER_PUNCH, MOVE_NIGHT_SLASH, MOVE_U_TURN},
        .itemTableId = BATTLE_FRONTIER_ITEM_HEAVY_DUTY_BOOTS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.ability = 2
    },
    [FRONTIER_MON_PURUGLY] = {
        .species = SPECIES_PURUGLY,
        .moves = {MOVE_FAKE_OUT, MOVE_STRENGTH, MOVE_KNOCK_OFF, MOVE_U_TURN},
        .itemTableId = BATTLE_FRONTIER_ITEM_SILK_SCARF,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.ability = 2
    },
    [FRONTIER_MON_SKUNTANK] = {
        .species = SPECIES_SKUNTANK,
        .moves = {MOVE_POISON_JAB, MOVE_SUCKER_PUNCH, MOVE_TAUNT, MOVE_TOXIC_SPIKES},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.ability = 1
    },
    [FRONTIER_MON_BRONZONG] = {
        .species = SPECIES_BRONZONG,
        .moves = {MOVE_IRON_DEFENSE, MOVE_BODY_PRESS, MOVE_STORED_POWER, MOVE_CALM_MIND},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_BOLD,
		.ability = 0
    },
    [FRONTIER_MON_CHATOT] = {
        .species = SPECIES_CHATOT,
        .moves = {MOVE_BOOMBURST, MOVE_HEAT_WAVE, MOVE_U_TURN, MOVE_HURRICANE},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_SCARF,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.ability = 1
    },
    [FRONTIER_MON_SPIRITOMB] = {
        .species = SPECIES_SPIRITOMB,
        .moves = {MOVE_CALM_MIND, MOVE_DARK_PULSE, MOVE_REST, MOVE_SLEEP_TALK},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_CALM,
		.ability = 0
    },
    [FRONTIER_MON_GARCHOMP] = {
        .species = SPECIES_GARCHOMP,
        .moves = {MOVE_EARTHQUAKE, MOVE_DRAGON_CLAW, MOVE_STEALTH_ROCK, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_CLEAR_AMULET,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.ability = 2
    },
    [FRONTIER_MON_LUCARIO] = {
        .species = SPECIES_LUCARIO,
        .moves = {MOVE_SWORDS_DANCE, MOVE_CLOSE_COMBAT, MOVE_EXTREME_SPEED, MOVE_BULLET_PUNCH},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT,
		.ability = 2
    },
    [FRONTIER_MON_HIPPOWDON] = {
        .species = SPECIES_HIPPOWDON,
        .moves = {MOVE_STOMPING_TANTRUM, MOVE_STEALTH_ROCK, MOVE_SLACK_OFF, MOVE_WHIRLWIND},
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_ADAMANT,
		.ability = 0
    },
    [FRONTIER_MON_DRAPION] = {
        .species = SPECIES_DRAPION,
        .moves = {MOVE_SWORDS_DANCE, MOVE_KNOCK_OFF, MOVE_POISON_JAB, MOVE_AQUA_TAIL},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHUCA_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.ability = 0
    },
    [FRONTIER_MON_TOXICROAK] = {
        .species = SPECIES_TOXICROAK,
        .moves = {MOVE_SWORDS_DANCE, MOVE_CLOSE_COMBAT, MOVE_GUNK_SHOT, MOVE_SUCKER_PUNCH},
        .itemTableId = BATTLE_FRONTIER_ITEM_BLACK_SLUDGE,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.ability = 2
    },
    [FRONTIER_MON_CARNIVINE] = {
        .species = SPECIES_CARNIVINE,
        .moves = {MOVE_SWORDS_DANCE, MOVE_POWER_WHIP, MOVE_KNOCK_OFF, MOVE_SLEEP_POWDER},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT,
		.ability = 0
    },
    [FRONTIER_MON_LUMINEON] = {
        .species = SPECIES_LUMINEON,
        .moves = {MOVE_SCALD, MOVE_ICE_BEAM, MOVE_U_TURN, MOVE_ENCORE},
        .itemTableId = BATTLE_FRONTIER_ITEM_HEAVY_DUTY_BOOTS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_BOLD,
		.ability =  1
    },
    [FRONTIER_MON_ABOMASNOW] = {
        .species = SPECIES_ABOMASNOW,
        .moves = {MOVE_BLIZZARD, MOVE_GIGA_DRAIN, MOVE_AURORA_VEIL, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_BABIRI_BERRY,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SP_ATTACK,
        .nature = NATURE_MODEST,
		.ability = 0
    },
    [FRONTIER_MON_WEAVILE] = {
        .species = SPECIES_WEAVILE,
        .moves = {MOVE_ICE_SHARD, MOVE_NIGHT_SLASH, MOVE_ICE_SPINNER, MOVE_LOW_KICK},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.ability = 1
    },
    [FRONTIER_MON_MAGNEZONE] = {
        .species = SPECIES_MAGNEZONE,
        .moves = {MOVE_THUNDERBOLT, MOVE_FLASH_CANNON, MOVE_TRI_ATTACK, MOVE_VOLT_SWITCH},
        .itemTableId = BATTLE_FRONTIER_ITEM_ASSAULT_VEST,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST,
		.ability = 0
    },
    [FRONTIER_MON_LICKILICKY] = {
        .species = SPECIES_LICKILICKY,
        .moves = {MOVE_WISH, MOVE_PROTECT, MOVE_HEAL_BELL, MOVE_KNOCK_OFF},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_CAREFUL,
		.ability = 1
    },
    [FRONTIER_MON_RHYPERIOR] = {
        .species = SPECIES_RHYPERIOR,
        .moves = {MOVE_ROCK_BLAST, MOVE_EARTHQUAKE, MOVE_SWORDS_DANCE, MOVE_ICE_PUNCH},
        .itemTableId = BATTLE_FRONTIER_ITEM_WEAKNESS_POLICY,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT,
		.ability = 1
    },
    [FRONTIER_MON_TANGROWTH] = {
        .species = SPECIES_TANGROWTH,
        .moves = {MOVE_GIGA_DRAIN, MOVE_KNOCK_OFF, MOVE_EARTHQUAKE, MOVE_SLEEP_POWDER},
        .itemTableId = BATTLE_FRONTIER_ITEM_ROCKY_HELMET,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_RELAXED,
		.ability = 2
    },
    [FRONTIER_MON_ELECTIVIRE] = {
        .species = SPECIES_ELECTIVIRE,
        .moves = {MOVE_ZING_ZAP, MOVE_FIRE_PUNCH, MOVE_DARKEST_LARIAT, MOVE_EARTHQUAKE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_NAIVE,
		.ability = 1
    },
    [FRONTIER_MON_MAGMORTAR] = {
        .species = SPECIES_MAGMORTAR,
        .moves = {MOVE_FIRE_BLAST, MOVE_THUNDERBOLT, MOVE_FOCUS_BLAST, MOVE_SCORCHING_SANDS},
        .itemTableId = BATTLE_FRONTIER_ITEM_HEAVY_DUTY_BOOTS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST,
		.ability = 1
    },
    [FRONTIER_MON_TOGEKISS] = {
        .species = SPECIES_TOGEKISS,
        .moves = {MOVE_AIR_SLASH, MOVE_DAZZLING_GLEAM, MOVE_FOLLOW_ME, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST,
		.ability = 2
    },
    [FRONTIER_MON_YANMEGA] = {
        .species = SPECIES_YANMEGA,
        .moves = {MOVE_BUG_BUZZ, MOVE_AIR_SLASH, MOVE_U_TURN, MOVE_GIGA_DRAIN},
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.ability = 1
    },
    [FRONTIER_MON_LEAFEON] = {
        .species = SPECIES_LEAFEON,
        .moves = {MOVE_LEAF_BLADE, MOVE_WISH, MOVE_PROTECT, MOVE_X_SCISSOR},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_IMPISH,
		.ability = 1
    },
    [FRONTIER_MON_GLACEON] = {
        .species = SPECIES_GLACEON,
        .moves = {MOVE_CALM_MIND, MOVE_FREEZE_DRY, MOVE_WISH, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_HEAVY_DUTY_BOOTS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_BOLD,
		.ability = 1
    },
    [FRONTIER_MON_GLISCOR] = {
        .species = SPECIES_GLISCOR,
        .moves = {MOVE_STEALTH_ROCK, MOVE_EARTHQUAKE, MOVE_ICE_SHARD, MOVE_FREEZE_DRY},
        .itemTableId = BATTLE_FRONTIER_ITEM_TOXIC_ORB,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_CAREFUL,
		.ability = 2
    },
    [FRONTIER_MON_MAMOSWINE] = {
        .species = SPECIES_MAMOSWINE,
        .moves = {MOVE_ICICLE_SPEAR, MOVE_EARTHQUAKE, MOVE_ICE_SHARD, MOVE_FREEZE_DRY},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_SASH,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT,
		.ability = 0
    },
    [FRONTIER_MON_PORYGON_Z] = {
        .species = SPECIES_PORYGON_Z,
        .moves = {MOVE_TRI_ATTACK, MOVE_SHADOW_BALL, MOVE_TRICK, MOVE_ICE_BEAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_SCARF,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.ability = 0
    },
    [FRONTIER_MON_GALLADE] = {
        .species = SPECIES_GALLADE,
        .moves = {MOVE_PSYBLADE, MOVE_SACRED_SWORD, MOVE_LEAF_BLADE, MOVE_KNOCK_OFF},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_SCARF,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.ability = 1
    },
    [FRONTIER_MON_PROBOPASS] = {
        .species = SPECIES_PROBOPASS,
        .moves = {MOVE_STEALTH_ROCK, MOVE_FLASH_CANNON, MOVE_VOLT_SWITCH, MOVE_EARTH_POWER},
        .itemTableId = BATTLE_FRONTIER_ITEM_AIR_BALLOON,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST,
		.ability = 1
    },
    [FRONTIER_MON_DUSKNOIR] = {
        .species = SPECIES_DUSKNOIR,
        .moves = {MOVE_SUBSTITUTE, MOVE_POLTERGEIST, MOVE_SHADOW_SNEAK, MOVE_MEAN_LOOK},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT,
		.ability = 0
    },
    [FRONTIER_MON_FROSLASS] = {
        .species = SPECIES_FROSLASS,
        .moves = {MOVE_SPIKES, MOVE_TAUNT, MOVE_ICE_BEAM, MOVE_SHADOW_BALL},
        .itemTableId = BATTLE_FRONTIER_ITEM_HEAVY_DUTY_BOOTS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.ability = 2
    },
    [FRONTIER_MON_ROTOM] = {
        .species = SPECIES_ROTOM,
        .moves = {MOVE_THUNDERBOLT, MOVE_SHADOW_BALL, MOVE_VOLT_SWITCH, MOVE_TRICK},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_SCARF,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.ability = 0
    },
    [FRONTIER_MON_UXIE] = {
        .species = SPECIES_UXIE,
        .moves = {MOVE_TRICK_ROOM, MOVE_STEALTH_ROCK, MOVE_YAWN, MOVE_MAGIC_COAT},
        .itemTableId = BATTLE_FRONTIER_ITEM_MENTAL_HERB,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_RELAXED,
		.ability = 0
    },
    [FRONTIER_MON_MESPRIT] = {
        .species = SPECIES_MESPRIT,
        .moves = {MOVE_STEALTH_ROCK, MOVE_PSYCHIC, MOVE_DAZZLING_GLEAM, MOVE_DARKEST_LARIAT},
        .itemTableId = BATTLE_FRONTIER_ITEM_COLBUR_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.ability = 0
    },
    [FRONTIER_MON_AZELF] = {
        .species = SPECIES_AZELF,
        .moves = {MOVE_NASTY_PLOT, MOVE_PSYCHIC, MOVE_FLAMETHROWER, MOVE_ENERGY_BALL},
        .itemTableId = BATTLE_FRONTIER_ITEM_EXPERT_BELT,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.ability = 0
    },
    [FRONTIER_MON_HEATRAN] = {
        .species = SPECIES_HEATRAN,
        .moves = {MOVE_HEAT_WAVE, MOVE_FLASH_CANNON, MOVE_EARTH_POWER, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST,
		.ability = 0
    },
    [FRONTIER_MON_CRESSELIA] = {
        .species = SPECIES_CRESSELIA,
        .moves = {MOVE_PSYCHIC, MOVE_LUNAR_BLESSING, MOVE_TRICK_ROOM, MOVE_HELPING_HAND},
        .itemTableId = BATTLE_FRONTIER_ITEM_SAFETY_GOGGLES,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_SASSY,
		.ability = 0
    },
    [FRONTIER_MON_PHIONE] = {
        .species = SPECIES_PHIONE,
        .moves = {MOVE_RAIN_DANCE, MOVE_HEAL_BELL, MOVE_SCALD, MOVE_U_TURN},
        .itemTableId = BATTLE_FRONTIER_ITEM_DAMP_ROCK,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_RELAXED,
		.ability = 0
    },
    [FRONTIER_MON_SERPERIOR] = {
        .species = SPECIES_SERPERIOR,
        .moves = {MOVE_SUBSTITUTE, MOVE_GLARE, MOVE_LEAF_STORM, MOVE_REFLECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.ability = 2
    },
    [FRONTIER_MON_EMBOAR] = {
        .species = SPECIES_EMBOAR,
        .moves = {MOVE_FLARE_BLITZ, MOVE_SUPERPOWER, MOVE_WILD_CHARGE, MOVE_SUCKER_PUNCH},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.ability = 2
    },
    [FRONTIER_MON_SAMUROTT] = {
        .species = SPECIES_SAMUROTT,
        .moves = {MOVE_SCALD, MOVE_ICE_BEAM, MOVE_AIR_SLASH, MOVE_DETECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST,
		.ability = 1
    },
    [FRONTIER_MON_SAMUROTT_HISUIAN] = {
        .species = SPECIES_SAMUROTT_HISUIAN,
        .moves = {MOVE_SWORDS_DANCE, MOVE_RAZOR_SHELL, MOVE_CEASELESS_EDGE, MOVE_AQUA_JET},
        .itemTableId = BATTLE_FRONTIER_ITEM_MYSTIC_WATER,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.ability = 2
    },
    [FRONTIER_MON_WATCHOG] = {
        .species = SPECIES_WATCHOG,
        .moves = {MOVE_STRENGTH, MOVE_LOW_KICK, MOVE_KNOCK_OFF, MOVE_SEED_BOMB},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.ability = 2
    },
    [FRONTIER_MON_STOUTLAND] = {
        .species = SPECIES_STOUTLAND,
        .moves = {MOVE_RETALIATE, MOVE_LAST_RESORT, MOVE_NONE, MOVE_NONE},
        .itemTableId = BATTLE_FRONTIER_ITEM_SILK_SCARF,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_ADAMANT,
		.ability = 2
    },
    [FRONTIER_MON_LIEPARD] = {
        .species = SPECIES_LIEPARD,
        .moves = {MOVE_NASTY_PLOT, MOVE_DARK_PULSE, MOVE_COPYCAT, MOVE_ENCORE},
        .itemTableId = BATTLE_FRONTIER_ITEM_HEAVY_DUTY_BOOTS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.ability = 2
    },
    [FRONTIER_MON_SIMISAGE] = {
        .species = SPECIES_SIMISAGE,
        .moves = {MOVE_LEAF_STORM, MOVE_SUPERPOWER, MOVE_ROCK_SLIDE, MOVE_GUNK_SHOT},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_NAIVE,
		.ability = 2
    },
    [FRONTIER_MON_SIMISEAR] = {
        .species = SPECIES_SIMISEAR,
        .moves = {MOVE_NASTY_PLOT, MOVE_FIRE_BLAST, MOVE_GRASS_KNOT, MOVE_FOCUS_BLAST},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHARCOAL,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.ability = 2
    },
    [FRONTIER_MON_SIMIPOUR] = {
        .species = SPECIES_SIMIPOUR,
        .moves = {MOVE_NASTY_PLOT, MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_GRASS_KNOT},
        .itemTableId = BATTLE_FRONTIER_ITEM_MYSTIC_WATER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.ability = 2
    },
    [FRONTIER_MON_MUSHARNA] = {
        .species = SPECIES_MUSHARNA,
        .moves = {MOVE_CALM_MIND, MOVE_MOONLIGHT, MOVE_PSYCHIC, MOVE_HEAL_BELL},
        .itemTableId = BATTLE_FRONTIER_ITEM_KEE_BERRY,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_BOLD,
		.ability = 1
    },
    [FRONTIER_MON_UNFEZANT] = {
        .species = SPECIES_UNFEZANT,
        .moves = {MOVE_DEFOG, MOVE_ROOST, MOVE_BRAVE_BIRD, MOVE_U_TURN},
        .itemTableId = BATTLE_FRONTIER_ITEM_HEAVY_DUTY_BOOTS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.ability = 1
    },
    [FRONTIER_MON_ZEBSTRIKA] = {
        .species = SPECIES_ZEBSTRIKA,
        .moves = {MOVE_THUNDERBOLT, MOVE_VOLT_SWITCH, MOVE_OVERHEAT, MOVE_SIGNAL_BEAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.ability = 2
    },
    [FRONTIER_MON_GIGALITH] = {
        .species = SPECIES_GIGALITH,
        .moves = {MOVE_STEALTH_ROCK, MOVE_STONE_EDGE, MOVE_EARTHQUAKE, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_CAREFUL,
		.ability = 1
    },
    [FRONTIER_MON_GIGALITH_FRIBIAN] = {
        .species = SPECIES_GIGALITH_FRIBIAN,
        .moves = {MOVE_DRAGON_HAMMER, MOVE_BREAKING_SWIPE, MOVE_ROCK_SLIDE, MOVE_IRON_DEFENSE},
        .itemTableId = BATTLE_FRONTIER_ITEM_ZOOM_LENS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_RELAXED,
		.ability = 0
    },
    [FRONTIER_MON_SWOOBAT] = {
        .species = SPECIES_SWOOBAT,
        .moves = {MOVE_CALM_MIND, MOVE_ROOST, MOVE_STORED_POWER, MOVE_SUBSTITUTE},
        .itemTableId = BATTLE_FRONTIER_ITEM_KEE_BERRY,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.ability = 2
    },
    [FRONTIER_MON_EXCADRILL] = {
        .species = SPECIES_EXCADRILL,
        .moves = {MOVE_HIGH_HORSEPOWER, MOVE_IRON_HEAD, MOVE_EARTHQUAKE, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT,
		.ability = 2
    },
    [FRONTIER_MON_AUDINO] = {
        .species = SPECIES_AUDINO,
        .moves = {MOVE_WISH, MOVE_PROTECT, MOVE_KNOCK_OFF, MOVE_HEAL_BELL},
        .itemTableId = BATTLE_FRONTIER_ITEM_HEAVY_DUTY_BOOTS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_CAREFUL,
		.ability = 1
    },
    [FRONTIER_MON_CONKELDURR] = {
        .species = SPECIES_CONKELDURR,
        .moves = {MOVE_DRAIN_PUNCH, MOVE_FACADE, MOVE_KNOCK_OFF, MOVE_MACH_PUNCH},
        .itemTableId = BATTLE_FRONTIER_ITEM_FLAME_ORB,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT,
		.ability = 0
    },
    [FRONTIER_MON_SEISMITOAD] = {
        .species = SPECIES_SEISMITOAD,
        .moves = {MOVE_LIQUIDATION, MOVE_EARTHQUAKE, MOVE_POWER_WHIP, MOVE_BRICK_BREAK},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT,
		.ability = 1
    },
    [FRONTIER_MON_THROH] = {
        .species = SPECIES_THROH,
        .moves = {MOVE_CIRCLE_THROW, MOVE_KNOCK_OFF, MOVE_REST, MOVE_SLEEP_TALK},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_CAREFUL,
		.ability = 0
    },
    [FRONTIER_MON_SAWK] = {
        .species = SPECIES_SAWK,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_EARTHQUAKE, MOVE_KNOCK_OFF, MOVE_POISON_JAB},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.ability = 2
    },
    [FRONTIER_MON_LEAVANNY] = {
        .species = SPECIES_LEAVANNY,
        .moves = {MOVE_STICKY_WEB, MOVE_LEAF_BLADE, MOVE_X_SCISSOR, MOVE_KNOCK_OFF},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_SASH,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.ability = 0
    },
    [FRONTIER_MON_SCOLIPEDE] = {
        .species = SPECIES_SCOLIPEDE,
        .moves = {MOVE_SPIKES, MOVE_POISON_JAB, MOVE_ENDEAVOR, MOVE_EARTHQUAKE},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_SASH,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.ability = 2
    },
    [FRONTIER_MON_WHIMSICOTT] = {
        .species = SPECIES_WHIMSICOTT,
        .moves = {MOVE_TAILWIND, MOVE_ENCORE, MOVE_MOONBLAST, MOVE_FAKE_TEARS},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_SASH,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.ability = 0
    },
    [FRONTIER_MON_LILLIGANT] = {
        .species = SPECIES_LILLIGANT,
        .moves = {MOVE_LEAF_STORM, MOVE_SLEEP_POWDER, MOVE_AFTER_YOU, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_SASH,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.ability = 0
    },
    [FRONTIER_MON_LILLIGANT_HISUIAN] = {
        .species = SPECIES_LILLIGANT_HISUIAN,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_SLEEP_POWDER, MOVE_AFTER_YOU, MOVE_ENCORE},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_SASH,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.ability = 0
    },
    [FRONTIER_MON_KROOKODILE] = {
        .species = SPECIES_KROOKODILE,
        .moves = {MOVE_EARTHQUAKE, MOVE_KNOCK_OFF, MOVE_STEALTH_ROCK, MOVE_TAUNT},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOPLE_BERRY,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.ability = 0
    },
    [FRONTIER_MON_DARMANITAN] = {
        .species = SPECIES_DARMANITAN,
        .moves = {MOVE_FLARE_BLITZ, MOVE_U_TURN, MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_SCARF,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.ability = 0
    },
    [FRONTIER_MON_DARMANITAN_GALARIAN] = {
        .species = SPECIES_DARMANITAN_GALARIAN,
        .moves = {MOVE_ICICLE_CRASH, MOVE_FLARE_BLITZ, MOVE_U_TURN, MOVE_STONE_EDGE},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_SCARF,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.ability = 0
    },
    [FRONTIER_MON_MARACTUS] = {
        .species = SPECIES_MARACTUS,
        .moves = {MOVE_SPIKES, MOVE_ENDEAVOR, MOVE_ENERGY_BALL, MOVE_SUCKER_PUNCH},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_SASH,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SPEED,
        .nature = NATURE_CALM,
		.ability = 0
    },
    [FRONTIER_MON_CRUSTLE] = {
        .species = SPECIES_CRUSTLE,
        .moves = {MOVE_SHELL_SMASH, MOVE_STONE_EDGE, MOVE_X_SCISSOR, MOVE_EARTHQUAKE},
        .itemTableId = BATTLE_FRONTIER_ITEM_HEAVY_DUTY_BOOTS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT,
		.ability = 0
    },
    [FRONTIER_MON_SCRAFTY] = {
        .species = SPECIES_SCRAFTY,
        .moves = {MOVE_FAKE_OUT, MOVE_CLOSE_COMBAT, MOVE_KNOCK_OFF, MOVE_ICE_PUNCH},
        .itemTableId = BATTLE_FRONTIER_ITEM_ASSAULT_VEST,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_ATTACK,
        .nature = NATURE_BRAVE,
		.ability = 2
    },
    [FRONTIER_MON_SIGILYPH] = {
        .species = SPECIES_SIGILYPH,
        .moves = {MOVE_PSYSHOCK, MOVE_HEAT_WAVE, MOVE_ROOST, MOVE_DEFOG},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.ability = 1
    },
    [FRONTIER_MON_COFAGRIGUS] = {
        .species = SPECIES_COFAGRIGUS,
        .moves = {MOVE_IRON_DEFENSE, MOVE_BODY_PRESS, MOVE_SHADOW_BALL, MOVE_REST},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_SPEED,
        .nature = NATURE_BOLD,
		.ability = 0
    },
    [FRONTIER_MON_CARRACOSTA] = {
        .species = SPECIES_CARRACOSTA,
        .moves = {MOVE_SHELL_SMASH, MOVE_STONE_EDGE, MOVE_AQUA_JET, MOVE_ICE_BEAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_WHITE_HERB,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_NAIVE,
		.ability = 0
    },
    [FRONTIER_MON_ARCHEOPS] = {
        .species = SPECIES_ARCHEOPS,
        .moves = {MOVE_METEOR_BEAM, MOVE_AIR_SLASH, MOVE_EARTH_POWER, MOVE_STEALTH_ROCK},
        .itemTableId = BATTLE_FRONTIER_ITEM_POWER_HERB,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.ability = 0
    },
    [FRONTIER_MON_GARBODOR] = {
        .species = SPECIES_GARBODOR,
        .moves = {MOVE_SPIKES, MOVE_GUNK_SHOT, MOVE_PAIN_SPLIT, MOVE_TOXIC_SPIKES},
        .itemTableId = BATTLE_FRONTIER_ITEM_ROCKY_HELMET,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_IMPISH,
		.ability = 2
    },
    [FRONTIER_MON_ZOROARK] = {
        .species = SPECIES_ZOROARK,
        .moves = {MOVE_KNOCK_OFF, MOVE_U_TURN, MOVE_FLAMETHROWER, MOVE_SLUDGE_BOMB},
        .itemTableId = BATTLE_FRONTIER_ITEM_HEAVY_DUTY_BOOTS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SPEED,
        .nature = NATURE_NAIVE,
		.ability = 0
    },
    [FRONTIER_MON_ZOROARK_HISUIAN] = {
        .species = SPECIES_ZOROARK_HISUIAN,
        .moves = {MOVE_NASTY_PLOT, MOVE_SHADOW_BALL, MOVE_FLAMETHROWER, MOVE_FOCUS_BLAST},
        .itemTableId = BATTLE_FRONTIER_ITEM_HEAVY_DUTY_BOOTS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.ability = 0
    },
    [FRONTIER_MON_CINCCINO] = {
        .species = SPECIES_CINCCINO,
        .moves = {MOVE_TAIL_SLAP, MOVE_BULLET_SEED, MOVE_KNOCK_OFF, MOVE_ROCK_BLAST},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.ability = 2
    },
    [FRONTIER_MON_GOTHITELLE] = {
        .species = SPECIES_GOTHITELLE,
        .moves = {MOVE_PSYBLADE, MOVE_FAKE_OUT, MOVE_HELPING_HAND, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_WIKI_BERRY,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_CALM,
		.ability = 2
    },
    [FRONTIER_MON_REUNICLUS] = {
        .species = SPECIES_REUNICLUS,
        .moves = {MOVE_CALM_MIND, MOVE_PSYSHOCK, MOVE_SHADOW_BALL, MOVE_RECOVER},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_BOLD,
		.ability = 1
    },
    [FRONTIER_MON_SWANNA] = {
        .species = SPECIES_SWANNA,
        .moves = {MOVE_HURRICANE, MOVE_SCALD, MOVE_ROOST, MOVE_RAIN_DANCE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.ability = 2
    },
    [FRONTIER_MON_VANILLUXE] = {
        .species = SPECIES_VANILLUXE,
        .moves = {MOVE_BLIZZARD, MOVE_FREEZE_DRY, MOVE_TAUNT, MOVE_AURORA_VEIL},
        .itemTableId = BATTLE_FRONTIER_ITEM_ICY_ROCK,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.ability = 1
    },
    [FRONTIER_MON_SAWSBUCK] = {
        .species = SPECIES_SAWSBUCK,
        .moves = {MOVE_HEADBUTT, MOVE_HORN_LEECH, MOVE_DOUBLE_EDGE, MOVE_ZEN_HEADBUTT},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_SCARF,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.ability = 2
    },
    [FRONTIER_MON_EMOLGA] = {
        .species = SPECIES_EMOLGA,
        .moves = {MOVE_ACROBATICS, MOVE_KNOCK_OFF, MOVE_U_TURN, MOVE_ROOST},
        .itemTableId = BATTLE_FRONTIER_ITEM_ELECTRIC_SEED,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.ability = 1
    },
    [FRONTIER_MON_ESCAVALIER] = {
        .species = SPECIES_ESCAVALIER,
        .moves = {MOVE_IRON_HEAD, MOVE_KNOCK_OFF, MOVE_TOXIC, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_CAREFUL,
		.ability = 2
    },
    [FRONTIER_MON_AMOONGUSS] = {
        .species = SPECIES_AMOONGUSS,
        .moves = {MOVE_SPORE, MOVE_RAGE_POWDER, MOVE_POLLEN_PUFF, MOVE_LEAF_STORM},
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_BOLD,
		.ability = 2
    },
    [FRONTIER_MON_JELLICENT] = {
        .species = SPECIES_JELLICENT,
        .moves = {MOVE_RECOVER, MOVE_TAUNT, MOVE_WILL_O_WISP, MOVE_HEX},
        .itemTableId = BATTLE_FRONTIER_ITEM_COLBUR_BERRY,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_SPEED,
        .nature = NATURE_BOLD,
		.ability = 1
    },
    [FRONTIER_MON_ALOMOMOLA] = {
        .species = SPECIES_ALOMOMOLA,
        .moves = {MOVE_WHIRLPOOL, MOVE_PLAY_ROUGH, MOVE_WISH, MOVE_FLIP_TURN},
        .itemTableId = BATTLE_FRONTIER_ITEM_ROCKY_HELMET,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_RELAXED,
		.ability = 2
    },
    [FRONTIER_MON_GALVANTULA] = {
        .species = SPECIES_GALVANTULA,
        .moves = {MOVE_STICKY_WEB, MOVE_VOLT_SWITCH, MOVE_BUG_BUZZ, MOVE_THUNDER},
        .itemTableId = BATTLE_FRONTIER_ITEM_HEAVY_DUTY_BOOTS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.ability = 0
    },
    [FRONTIER_MON_FERROTHORN] = {
        .species = SPECIES_FERROTHORN,
        .moves = {MOVE_BODY_PRESS, MOVE_IRON_DEFENSE, MOVE_LEECH_SEED, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_BOLD,
		.ability = 0
    },
    [FRONTIER_MON_KLINKLANG] = {
        .species = SPECIES_KLINKLANG,
        .moves = {MOVE_SHIFT_GEAR, MOVE_GEAR_GRIND, MOVE_SUBSTITUTE, MOVE_WILD_CHARGE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT,
		.ability = 2
    },
    [FRONTIER_MON_EELEKTROSS] = {
        .species = SPECIES_EELEKTROSS,
        .moves = {MOVE_THUNDER_PUNCH, MOVE_DRAIN_PUNCH, MOVE_DRAGON_TAIL, MOVE_COIL},
        .itemTableId = BATTLE_FRONTIER_ITEM_ELECTRIC_SEED,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_CAREFUL,
		.ability = 2
    },
    [FRONTIER_MON_BEHEEYEM] = {
        .species = SPECIES_BEHEEYEM,
        .moves = {MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_RECOVER, MOVE_TELEPORT},
        .itemTableId = BATTLE_FRONTIER_ITEM_COLBUR_BERRY,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_BOLD,
		.ability = 2
    },
    [FRONTIER_MON_CHANDELURE] = {
        .species = SPECIES_CHANDELURE,
        .moves = {MOVE_FIRE_BLAST, MOVE_SHADOW_BALL, MOVE_TOXIC, MOVE_ENERGY_BALL},
        .itemTableId = BATTLE_FRONTIER_ITEM_HEAVY_DUTY_BOOTS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.ability = 1
    },
    [FRONTIER_MON_HAXORUS] = {
        .species = SPECIES_HAXORUS,
        .moves = {MOVE_DRAGON_DANCE, MOVE_DRAGON_CLAW, MOVE_EARTHQUAKE, MOVE_X_SCISSOR},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.ability = 1
    },
    [FRONTIER_MON_BEARTIC] = {
        .species = SPECIES_BEARTIC,
        .moves = {MOVE_SWORDS_DANCE, MOVE_ICICLE_CRASH, MOVE_CLOSE_COMBAT, MOVE_LIQUIDATION},
        .itemTableId = BATTLE_FRONTIER_ITEM_HEAVY_DUTY_BOOTS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT,
		.ability = 2
    },
    [FRONTIER_MON_CRYOGONAL] = {
        .species = SPECIES_CRYOGONAL,
        .moves = {MOVE_RAPID_SPIN, MOVE_FREEZE_DRY, MOVE_RECOVER, MOVE_HAZE},
        .itemTableId = BATTLE_FRONTIER_ITEM_HEAVY_DUTY_BOOTS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.ability = 0
    },
    [FRONTIER_MON_ACCELGOR] = {
        .species = SPECIES_ACCELGOR,
        .moves = {MOVE_SPIKES, MOVE_BUG_BUZZ, MOVE_KNOCK_OFF, MOVE_FOCUS_BLAST},
        .itemTableId = BATTLE_FRONTIER_ITEM_HEAVY_DUTY_BOOTS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.ability = 1
    },
    [FRONTIER_MON_STUNFISK] = {
        .species = SPECIES_STUNFISK,
        .moves = {MOVE_STEALTH_ROCK, MOVE_TOXIC, MOVE_EARTH_POWER, MOVE_FOUL_PLAY},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_CALM,
		.ability = 0
    },
    [FRONTIER_MON_STUNFISK_GALARIAN] = {
        .species = SPECIES_STUNFISK_GALARIAN,
        .moves = {MOVE_STEALTH_ROCK, MOVE_EARTHQUAKE, MOVE_SLUDGE_BOMB, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_CAREFUL,
		.ability = 0
    },
    [FRONTIER_MON_MIENSHAO] = {
        .species = SPECIES_MIENSHAO,
        .moves = {MOVE_HIGH_JUMP_KICK, MOVE_KNOCK_OFF, MOVE_U_TURN, MOVE_FAKE_OUT},
        .itemTableId = BATTLE_FRONTIER_ITEM_ASSAULT_VEST,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.ability = 1
    },
    [FRONTIER_MON_DRUDDIGON] = {
        .species = SPECIES_DRUDDIGON,
        .moves = {MOVE_DRAGON_TAIL, MOVE_STEALTH_ROCK, MOVE_GLARE, MOVE_BULLDOZE},
        .itemTableId = BATTLE_FRONTIER_ITEM_ROCKY_HELMET,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_IMPISH,
		.ability = 0
    },
    [FRONTIER_MON_GOLURK] = {
        .species = SPECIES_GOLURK,
        .moves = {MOVE_TRICK_ROOM, MOVE_STEALTH_ROCK, MOVE_POLTERGEIST, MOVE_EARTHQUAKE},
        .itemTableId = BATTLE_FRONTIER_ITEM_STICKY_BARB,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT,
		.ability = 1
    },
    [FRONTIER_MON_BOUFFALANT] = {
        .species = SPECIES_BOUFFALANT,
        .moves = {MOVE_SWORDS_DANCE, MOVE_SUBSTITUTE, MOVE_HEAD_CHARGE, MOVE_THROAT_CHOP},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT,
		.ability = 1
    },
    [FRONTIER_MON_BRAVIARY] = {
        .species = SPECIES_BRAVIARY,
        .moves = {MOVE_BRAVE_BIRD, MOVE_DEFOG, MOVE_ROOST, MOVE_U_TURN},
        .itemTableId = BATTLE_FRONTIER_ITEM_HEAVY_DUTY_BOOTS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_ADAMANT,
		.ability = 0
    },
    [FRONTIER_MON_BRAVIARY_HISUIAN] = {
        .species = SPECIES_BRAVIARY_HISUIAN,
        .moves = {MOVE_CALM_MIND, MOVE_ESPER_WING, MOVE_HURRICANE, MOVE_ROOST},
        .itemTableId = BATTLE_FRONTIER_ITEM_HEAVY_DUTY_BOOTS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.ability = 2
    },
    [FRONTIER_MON_MANDIBUZZ] = {
        .species = SPECIES_MANDIBUZZ,
        .moves = {MOVE_KNOCK_OFF, MOVE_TOXIC, MOVE_DEFOG, MOVE_ROOST},
        .itemTableId = BATTLE_FRONTIER_ITEM_HEAVY_DUTY_BOOTS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_IMPISH,
		.ability = 1
    },
    [FRONTIER_MON_HEATMOR] = {
        .species = SPECIES_HEATMOR,
        .moves = {MOVE_FIRE_LASH, MOVE_KNOCK_OFF, MOVE_SUCKER_PUNCH, MOVE_SUPERPOWER},
        .itemTableId = BATTLE_FRONTIER_ITEM_HEAVY_DUTY_BOOTS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT,
		.ability = 1
    },
    [FRONTIER_MON_DURANT] = {
        .species = SPECIES_DURANT,
        .moves = {MOVE_FIRST_IMPRESSION, MOVE_IRON_HEAD, MOVE_ROCK_SLIDE, MOVE_SUPERPOWER},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.ability = 1
    },
    [FRONTIER_MON_HYDREIGON] = {
        .species = SPECIES_HYDREIGON,
        .moves = {MOVE_DRACO_METEOR, MOVE_DARK_PULSE, MOVE_FLASH_CANNON, MOVE_TAILWIND},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST,
		.ability = 0
    },
    [FRONTIER_MON_VOLCARONA] = {
        .species = SPECIES_VOLCARONA,
        .moves = {MOVE_FIERY_DANCE, MOVE_BUG_BUZZ, MOVE_QUIVER_DANCE, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_MODEST,
		.ability = 0
    },
    [FRONTIER_MON_COBALION] = {
        .species = SPECIES_COBALION,
        .moves = {MOVE_SWORDS_DANCE, MOVE_CLOSE_COMBAT, MOVE_IRON_HEAD, MOVE_MEGAHORN},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHUCA_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.ability = 0
    },
    [FRONTIER_MON_TERRAKION] = {
        .species = SPECIES_TERRAKION,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_STONE_EDGE, MOVE_EARTHQUAKE, MOVE_MEGAHORN},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.ability = 0
    },
    [FRONTIER_MON_VIRIZION] = {
        .species = SPECIES_VIRIZION,
        .moves = {MOVE_SWORDS_DANCE, MOVE_CLOSE_COMBAT, MOVE_LEAF_BLADE, MOVE_ZEN_HEADBUTT},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.ability = 0
    },
    [FRONTIER_MON_TORNADUS] = {
        .species = SPECIES_TORNADUS,
        .moves = {MOVE_TAILWIND, MOVE_TAUNT, MOVE_PROTECT, MOVE_BLEAKWIND_STORM},
        .itemTableId = BATTLE_FRONTIER_ITEM_COVERT_CLOAK,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.ability = 0
    },
    [FRONTIER_MON_TORNADUS_THERIAN] = {
        .species = SPECIES_TORNADUS_THERIAN,
        .moves = {MOVE_HURRICANE, MOVE_HEAT_WAVE, MOVE_U_TURN, MOVE_TAUNT},
        .itemTableId = BATTLE_FRONTIER_ITEM_HEAVY_DUTY_BOOTS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.ability = 0
    },
    [FRONTIER_MON_THUNDURUS] = {
        .species = SPECIES_THUNDURUS,
        .moves = {MOVE_THUNDER_WAVE, MOVE_TAUNT, MOVE_EERIE_IMPULSE, MOVE_WILDBOLT_STORM},
        .itemTableId = BATTLE_FRONTIER_ITEM_COVERT_CLOAK,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_CALM,
		.ability = 0
    },
    [FRONTIER_MON_THUNDURUS_THERIAN] = {
        .species = SPECIES_THUNDURUS_THERIAN,
        .moves = {MOVE_NASTY_PLOT, MOVE_THUNDERBOLT, MOVE_FOCUS_BLAST, MOVE_GRASS_KNOT},
        .itemTableId = BATTLE_FRONTIER_ITEM_HEAVY_DUTY_BOOTS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.ability = 0
    },
    [FRONTIER_MON_KELDEO] = {
        .species = SPECIES_KELDEO,
        .moves = {MOVE_HYDRO_PUMP, MOVE_SECRET_SWORD, MOVE_SCALD, MOVE_ICY_WIND},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_SPECS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.ability = 0
    },
    [FRONTIER_MON_CHESNAUGHT] = {
        .species = SPECIES_CHESNAUGHT,
        .moves = {MOVE_LEECH_SEED, MOVE_SPIKY_SHIELD, MOVE_BODY_PRESS, MOVE_SPIKES},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_BOLD,
		.ability = 2
    },
    [FRONTIER_MON_DELPHOX] = {
        .species = SPECIES_DELPHOX,
        .moves = {MOVE_CALM_MIND, MOVE_FIERY_DANCE, MOVE_PSYCHIC, MOVE_GRASS_KNOT},
        .itemTableId = BATTLE_FRONTIER_ITEM_COLBUR_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.ability = 0
    },
    [FRONTIER_MON_GRENINJA] = {
        .species = SPECIES_GRENINJA,
        .moves = {MOVE_HYDRO_PUMP, MOVE_DARK_PULSE, MOVE_ICE_BEAM, MOVE_GRASS_KNOT},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_SPECS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.ability = 2
    },
    [FRONTIER_MON_GRENINJA_2] = {
        .species = SPECIES_GRENINJA,
        .moves = {MOVE_HYDRO_PUMP, MOVE_DARK_PULSE, MOVE_GRASS_KNOT, MOVE_WATER_SHURIKEN},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.ability = 1
    },
    [FRONTIER_MON_DIGGERSBY] = {
        .species = SPECIES_DIGGERSBY,
        .moves = {MOVE_SWORDS_DANCE, MOVE_QUICK_ATTACK, MOVE_BULLDOZE, MOVE_MEGA_KICK},
        .itemTableId = BATTLE_FRONTIER_ITEM_SILK_SCARF,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT,
		.ability = 2
    },
    [FRONTIER_MON_TALONFLAME] = {
        .species = SPECIES_TALONFLAME,
        .moves = {MOVE_BRAVE_BIRD, MOVE_TAILWIND, MOVE_WILL_O_WISP, MOVE_TAUNT},
        .itemTableId = BATTLE_FRONTIER_ITEM_WIDE_LENS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.ability = 2
    },
    [FRONTIER_MON_VIVILLON] = {
        .species = SPECIES_VIVILLON,
        .moves = {MOVE_QUIVER_DANCE, MOVE_SLEEP_POWDER, MOVE_HURRICANE, MOVE_BUG_BUZZ},
        .itemTableId = BATTLE_FRONTIER_ITEM_HEAVY_DUTY_BOOTS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.ability = 1
    },
    [FRONTIER_MON_PYROAR] = {
        .species = SPECIES_PYROAR,
        .moves = {MOVE_FLAMETHROWER, MOVE_HYPER_VOICE, MOVE_WILL_O_WISP, MOVE_TAUNT},
        .itemTableId = BATTLE_FRONTIER_ITEM_HEAVY_DUTY_BOOTS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.ability = 1
    },
    [FRONTIER_MON_FLORGES] = {
        .species = SPECIES_FLORGES,
        .moves = {MOVE_WISH, MOVE_PROTECT, MOVE_CALM_MIND, MOVE_MOONBLAST},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_BOLD,
		.ability = 1
    },
    [FRONTIER_MON_GOGOAT] = {
        .species = SPECIES_GOGOAT,
        .moves = {MOVE_BULK_UP, MOVE_HORN_LEECH, MOVE_ROCK_SLIDE, MOVE_MILK_DRINK},
        .itemTableId = BATTLE_FRONTIER_ITEM_HEAVY_DUTY_BOOTS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_CAREFUL,
		.ability = 1
    },
    [FRONTIER_MON_GOGOAT_EMERIBIAN] = {
        .species = SPECIES_GOGOAT_EMERIBIAN,
        .moves = {MOVE_LEAF_BLADE, MOVE_SPIKY_SHIELD, MOVE_GRASSY_TERRAIN, MOVE_AVALANCHE},
        .itemTableId = BATTLE_FRONTIER_ITEM_OCCA_BERRY,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_IMPISH,
		.ability = 2
    },
    [FRONTIER_MON_PANGORO] = {
        .species = SPECIES_PANGORO,
        .moves = {MOVE_SWORDS_DANCE, MOVE_DRAIN_PUNCH, MOVE_KNOCK_OFF, MOVE_BULLET_PUNCH},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT,
		.ability = 0
    },
    [FRONTIER_MON_FURFROU] = {
        .species = SPECIES_FURFROU,
        .moves = {MOVE_RETURN, MOVE_U_TURN, MOVE_TOXIC, MOVE_SUCKER_PUNCH},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.ability = 0
    },
    [FRONTIER_MON_MEOWSTIC] = {
        .species = SPECIES_MEOWSTIC,
        .moves = {MOVE_REFLECT, MOVE_LIGHT_SCREEN, MOVE_YAWN, MOVE_PSYCHIC},
        .itemTableId = BATTLE_FRONTIER_ITEM_EJECT_BUTTON,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_TIMID,
		.ability = 2
    },
    [FRONTIER_MON_MEOWSTIC_FEMALE] = {
        .species = SPECIES_MEOWSTIC_FEMALE,
        .moves = {MOVE_NASTY_PLOT, MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_SHADOW_BALL},
        .itemTableId = BATTLE_FRONTIER_ITEM_EJECT_BUTTON,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.ability = 2
    },
    [FRONTIER_MON_AEGISLASH] = {
        .species = SPECIES_AEGISLASH,
        .moves = {MOVE_SHADOW_BALL, MOVE_FLASH_CANNON, MOVE_TOXIC, MOVE_KINGS_SHIELD},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SP_ATTACK,
        .nature = NATURE_MODEST,
		.ability = 0
    },
    [FRONTIER_MON_AEGISLASH_EMERIBIAN] = {
        .species = SPECIES_AEGISLASH_EMERIBIAN,
        .moves = {MOVE_BEHEMOTH_BASH, MOVE_HAMMER_ARM, MOVE_FLARE_BLITZ, MOVE_SHADOW_SNEAK},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT,
		.ability = 2
    },
    [FRONTIER_MON_AROMATISSE] = {
        .species = SPECIES_AROMATISSE,
        .moves = {MOVE_MOONBLAST, MOVE_WISH, MOVE_PROTECT, MOVE_HEAL_BELL},
        .itemTableId = BATTLE_FRONTIER_ITEM_HEAVY_DUTY_BOOTS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_BOLD,
		.ability = 2
    },
    [FRONTIER_MON_SLURPUFF] = {
        .species = SPECIES_SLURPUFF,
        .moves = {MOVE_STICKY_WEB, MOVE_MAGIC_COAT, MOVE_MISTY_EXPLOSION, MOVE_ENDEAVOR},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_SASH,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_NAIVE,
		.ability = 2
    },
    [FRONTIER_MON_MALAMAR] = {
        .species = SPECIES_MALAMAR,
        .moves = {MOVE_SUPERPOWER, MOVE_KNOCK_OFF, MOVE_REST, MOVE_SLEEP_TALK},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_CAREFUL,
		.ability = 0
    },
    [FRONTIER_MON_BARBARACLE] = {
        .species = SPECIES_BARBARACLE,
        .moves = {MOVE_SHELL_SMASH, MOVE_LIQUIDATION, MOVE_STONE_EDGE, MOVE_GRASS_KNOT},
        .itemTableId = BATTLE_FRONTIER_ITEM_WHITE_HERB,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.ability = 0
    },
    [FRONTIER_MON_DRAGALGE] = {
        .species = SPECIES_DRAGALGE,
        .moves = {MOVE_DRACO_METEOR, MOVE_SLUDGE_BOMB, MOVE_FOCUS_BLAST, MOVE_SHADOW_BALL},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_SPECS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST,
		.ability = 2
    },
    [FRONTIER_MON_CLAWITZER] = {
        .species = SPECIES_CLAWITZER,
        .moves = {MOVE_DRAGON_PULSE, MOVE_WATER_PULSE, MOVE_AURA_SPHERE, MOVE_FLASH_CANNON},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_SPECS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST,
		.ability = 0
    },
    [FRONTIER_MON_HELIOLISK] = {
        .species = SPECIES_HELIOLISK,
        .moves = {MOVE_THUNDERBOLT, MOVE_HYPER_VOICE, MOVE_VOLT_SWITCH, MOVE_DARK_PULSE},
        .itemTableId = BATTLE_FRONTIER_ITEM_HEAVY_DUTY_BOOTS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.ability = 0
    },
    [FRONTIER_MON_TYRANTRUM] = {
        .species = SPECIES_TYRANTRUM,
        .moves = {MOVE_DRAGON_DANCE, MOVE_SCALE_SHOT, MOVE_HEAD_SMASH, MOVE_CLOSE_COMBAT},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.ability = 2
    },
    [FRONTIER_MON_AURORUS] = {
        .species = SPECIES_AURORUS,
        .moves = {MOVE_STEALTH_ROCK, MOVE_ICE_BEAM, MOVE_ENCORE, MOVE_EARTH_POWER},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_SASH,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST,
		.ability = 1
    },
    [FRONTIER_MON_SYLVEON] = {
        .species = SPECIES_SYLVEON,
        .moves = {MOVE_HYPER_VOICE, MOVE_WISH, MOVE_PROTECT, MOVE_CALM_MIND},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_BOLD,
		.ability = 2
    },
    [FRONTIER_MON_HAWLUCHA] = {
        .species = SPECIES_HAWLUCHA,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_BRAVE_BIRD, MOVE_U_TURN, MOVE_DEFOG},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_SCARF,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.ability = 0
    },
    [FRONTIER_MON_DEDENNE] = {
        .species = SPECIES_DEDENNE,
        .moves = {MOVE_SUBSTITUTE, MOVE_RECYCLE, MOVE_THUNDERBOLT, MOVE_HYDRO_PUMP},
        .itemTableId = BATTLE_FRONTIER_ITEM_PETAYA_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.ability = 0
    },
    [FRONTIER_MON_CARBINK] = {
        .species = SPECIES_CARBINK,
        .moves = {MOVE_STEALTH_ROCK, MOVE_BODY_PRESS, MOVE_POWER_GEM, MOVE_SPIKES},
        .itemTableId = BATTLE_FRONTIER_ITEM_HEAVY_DUTY_BOOTS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_CALM,
		.ability = 1
    },
    [FRONTIER_MON_GOODRA] = {
        .species = SPECIES_GOODRA,
        .moves = {MOVE_DRACO_METEOR, MOVE_FLAMETHROWER, MOVE_THUNDERBOLT, MOVE_HYDRO_PUMP},
        .itemTableId = BATTLE_FRONTIER_ITEM_EXPERT_BELT,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_CALM,
		.ability = 0
    },
    [FRONTIER_MON_GOODRA_HISUIAN] = {
        .species = SPECIES_GOODRA_HISUIAN,
        .moves = {MOVE_ACID_ARMOR, MOVE_BODY_PRESS, MOVE_HEAVY_SLAM, MOVE_LIFE_DEW},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_CALM,
		.ability = 0
    },
    [FRONTIER_MON_KLEFKI] = {
        .species = SPECIES_KLEFKI,
        .moves = {MOVE_SPIKES, MOVE_LIGHT_SCREEN, MOVE_REFLECT, MOVE_TRICK_ROOM},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIGHT_CLAY,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_RELAXED,
		.ability = 0
    },
    [FRONTIER_MON_TREVENANT] = {
        .species = SPECIES_TREVENANT,
        .moves = {MOVE_WOOD_HAMMER, MOVE_HORN_LEECH, MOVE_EARTHQUAKE, MOVE_PHANTOM_FORCE},
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT,
		.ability = 2
    },
    [FRONTIER_MON_TREVENANT_EMERIBIAN] = {
        .species = SPECIES_TREVENANT_EMERIBIAN,
        .moves = {MOVE_PLAY_ROUGH, MOVE_HORN_LEECH, MOVE_DECORATE, MOVE_SHADOW_CLAW},
        .itemTableId = BATTLE_FRONTIER_ITEM_KASIB_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT,
		.ability = 2
    },
    [FRONTIER_MON_GOURGEIST] = {
        .species = SPECIES_GOURGEIST,
        .moves = {MOVE_FLAME_CHARGE, MOVE_POLTERGEIST, MOVE_POWER_WHIP, MOVE_SHADOW_SNEAK},
        .itemTableId = BATTLE_FRONTIER_ITEM_WEAKNESS_POLICY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT,
		.ability = 0
    },
    [FRONTIER_MON_AVALUGG] = {
        .species = SPECIES_AVALUGG,
        .moves = {MOVE_BODY_PRESS, MOVE_ICE_SPINNER, MOVE_RECOVER, MOVE_RAPID_SPIN},
        .itemTableId = BATTLE_FRONTIER_ITEM_HEAVY_DUTY_BOOTS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_IMPISH,
		.ability = 2
    },
    [FRONTIER_MON_AVALUGG_HISUIAN] = {
        .species = SPECIES_AVALUGG_HISUIAN,
        .moves = {MOVE_RAPID_SPIN, MOVE_RECOVER, MOVE_ROCK_SLIDE, MOVE_AVALANCHE},
        .itemTableId = BATTLE_FRONTIER_ITEM_HEAVY_DUTY_BOOTS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_IMPISH,
		.ability = 2
    },
    [FRONTIER_MON_NOIVERN] = {
        .species = SPECIES_NOIVERN,
        .moves = {MOVE_DRACO_METEOR, MOVE_FLAMETHROWER, MOVE_U_TURN, MOVE_ROOST},
        .itemTableId = BATTLE_FRONTIER_ITEM_HEAVY_DUTY_BOOTS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.ability = 1
    },
    [FRONTIER_MON_DECIDUEYE] = {
        .species = SPECIES_DECIDUEYE,
        .moves = {MOVE_LEAF_BLADE, MOVE_SPIRIT_SHACKLE, MOVE_U_TURN, MOVE_SHADOW_SNEAK},
        .itemTableId = BATTLE_FRONTIER_ITEM_SPELL_TAG,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT,
		.ability = 2
    },
    [FRONTIER_MON_DECIDUEYE_HISUIAN] = {
        .species = SPECIES_DECIDUEYE_HISUIAN,
        .moves = {MOVE_TRIPLE_ARROWS, MOVE_KNOCK_OFF, MOVE_ROOST, MOVE_DEFOG},
        .itemTableId = BATTLE_FRONTIER_ITEM_HEAVY_DUTY_BOOTS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_SPEED,
        .nature = NATURE_IMPISH,
		.ability = 2
    },
    [FRONTIER_MON_INCINEROAR] = {
        .species = SPECIES_INCINEROAR,
        .moves = {MOVE_FAKE_OUT, MOVE_FLARE_BLITZ, MOVE_KNOCK_OFF, MOVE_CLOSE_COMBAT},
        .itemTableId = BATTLE_FRONTIER_ITEM_ASSAULT_VEST,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_CAREFUL,
		.ability = 2
    },
    [FRONTIER_MON_PRIMARINA] = {
        .species = SPECIES_PRIMARINA,
        .moves = {MOVE_HYPER_VOICE, MOVE_MOONBLAST, MOVE_ENERGY_BALL, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SP_ATTACK,
        .nature = NATURE_MODEST,
		.ability = 2
    },
    [FRONTIER_MON_TOUCANNON] = {
        .species = SPECIES_TOUCANNON,
        .moves = {MOVE_HYPER_VOICE, MOVE_BRAVE_BIRD, MOVE_BULLET_SEED, MOVE_OVERHEAT},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_NAIVE,
		.ability = 1
    },
    [FRONTIER_MON_GUMSHOOS] = {
        .species = SPECIES_GUMSHOOS,
        .moves = {MOVE_BODY_SLAM, MOVE_CRUNCH, MOVE_EARTHQUAKE, MOVE_U_TURN},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT,
		.ability = 2
    },
    [FRONTIER_MON_VIKAVOLT] = {
        .species = SPECIES_VIKAVOLT,
        .moves = {MOVE_STICKY_WEB, MOVE_VOLT_SWITCH, MOVE_BUG_BUZZ, MOVE_ROOST},
        .itemTableId = BATTLE_FRONTIER_ITEM_HEAVY_DUTY_BOOTS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST,
		.ability = 0
    },
    [FRONTIER_MON_CRABOMINABLE] = {
        .species = SPECIES_CRABOMINABLE,
        .moves = {MOVE_DRAIN_PUNCH, MOVE_ICE_HAMMER, MOVE_EARTHQUAKE, MOVE_THUNDER_PUNCH},
        .itemTableId = BATTLE_FRONTIER_ITEM_ASSAULT_VEST,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_ADAMANT,
		.ability = 1
    },
    [FRONTIER_MON_ORICORIO] = {
        .species = SPECIES_ORICORIO,
        .moves = {MOVE_CALM_MIND, MOVE_HURRICANE, MOVE_REVELATION_DANCE, MOVE_ROOST},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHARP_BEAK,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.ability = 0
    },
    [FRONTIER_MON_RIBOMBEE] = {
        .species = SPECIES_RIBOMBEE,
        .moves = {MOVE_STICKY_WEB, MOVE_MOONBLAST, MOVE_STUN_SPORE, MOVE_U_TURN},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_SASH,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.ability = 1
    },
    [FRONTIER_MON_LYCANROC] = {
        .species = SPECIES_LYCANROC,
        .moves = {MOVE_SWORDS_DANCE, MOVE_CLOSE_COMBAT, MOVE_STONE_EDGE, MOVE_CRUNCH},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.ability = 1
    },
    [FRONTIER_MON_LYCANROC_MIDNIGHT] = {
        .species = SPECIES_LYCANROC_MIDNIGHT,
        .moves = {MOVE_STONE_EDGE, MOVE_CLOSE_COMBAT, MOVE_IRON_HEAD, MOVE_PLAY_ROUGH},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_SCARF,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.ability = 2
    },
    [FRONTIER_MON_LYCANROC_DUSK] = {
        .species = SPECIES_LYCANROC_DUSK,
        .moves = {MOVE_STONE_EDGE, MOVE_CLOSE_COMBAT, MOVE_ACCELEROCK, MOVE_CRUNCH},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.ability = 0
    },
    [FRONTIER_MON_WISHIWASHI] = {
        .species = SPECIES_WISHIWASHI,
        .moves = {MOVE_SCALD, MOVE_U_TURN, MOVE_REST, MOVE_SLEEP_TALK},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_RELAXED,
		.ability = 0
    },
    [FRONTIER_MON_TOXAPEX] = {
        .species = SPECIES_TOXAPEX,
        .moves = {MOVE_SCALD, MOVE_RECOVER, MOVE_HAZE, MOVE_TOXIC_SPIKES},
        .itemTableId = BATTLE_FRONTIER_ITEM_COVERT_CLOAK,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_BOLD,
		.ability = 2
    },
    [FRONTIER_MON_MUDSDALE] = {
        .species = SPECIES_MUDSDALE,
        .moves = {MOVE_STEALTH_ROCK, MOVE_HEADLONG_RUSH, MOVE_HEAVY_SLAM, MOVE_ROAR},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_IMPISH,
		.ability = 1
    },
    [FRONTIER_MON_ARAQUANID] = {
        .species = SPECIES_ARAQUANID,
        .moves = {MOVE_LIQUIDATION, MOVE_BUG_BITE, MOVE_STICKY_WEB, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_HEAVY_DUTY_BOOTS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_ATTACK,
        .nature = NATURE_BRAVE,
		.ability = 1
    },
    [FRONTIER_MON_LURANTIS] = {
        .species = SPECIES_LURANTIS,
        .moves = {MOVE_LEAF_BLADE, MOVE_SUPERPOWER, MOVE_KNOCK_OFF, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_ATTACK,
        .nature = NATURE_BRAVE,
		.ability = 2
    },
    [FRONTIER_MON_SHIINOTIC] = {
        .species = SPECIES_SHIINOTIC,
        .moves = {MOVE_STRENGTH_SAP, MOVE_SPORE, MOVE_MOONBLAST, MOVE_GIGA_DRAIN},
        .itemTableId = BATTLE_FRONTIER_ITEM_ROCKY_HELMET,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_BOLD,
		.ability = 0
    },
    [FRONTIER_MON_SALAZZLE] = {
        .species = SPECIES_SALAZZLE,
        .moves = {MOVE_NASTY_PLOT, MOVE_OVERHEAT, MOVE_SLUDGE_BOMB, MOVE_TOXIC},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_SASH,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.ability = 0
    },
    [FRONTIER_MON_BEWEAR] = {
        .species = SPECIES_BEWEAR,
        .moves = {MOVE_SWORDS_DANCE, MOVE_DOUBLE_EDGE, MOVE_DRAIN_PUNCH, MOVE_DARKEST_LARIAT},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOPLE_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.ability = 0
    },
    [FRONTIER_MON_TSAREENA] = {
        .species = SPECIES_TSAREENA,
        .moves = {MOVE_POWER_WHIP, MOVE_ZEN_HEADBUTT, MOVE_U_TURN, MOVE_RAPID_SPIN},
        .itemTableId = BATTLE_FRONTIER_ITEM_ASSAULT_VEST,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT,
		.ability = 1
    },
    [FRONTIER_MON_COMFEY] = {
        .species = SPECIES_COMFEY,
        .moves = {MOVE_CALM_MIND, MOVE_DRAINING_KISS, MOVE_STORED_POWER, MOVE_AROMATHERAPY},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHILAN_BERRY,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SP_ATTACK,
        .nature = NATURE_MODEST,
		.ability = 1
    },
    [FRONTIER_MON_ORANGURU] = {
        .species = SPECIES_ORANGURU,
        .moves = {MOVE_CALM_MIND, MOVE_HYPER_VOICE, MOVE_PSYCHIC, MOVE_ENCORE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_BOLD,
		.ability = 1
    },
    [FRONTIER_MON_PASSIMIAN] = {
        .species = SPECIES_PASSIMIAN,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_KNOCK_OFF, MOVE_U_TURN, MOVE_ROCK_SLIDE},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_SCARF,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.ability = 2
    },
    [FRONTIER_MON_GOLISOPOD] = {
        .species = SPECIES_GOLISOPOD,
        .moves = {MOVE_FIRST_IMPRESSION, MOVE_LEECH_LIFE, MOVE_LIQUIDATION, MOVE_KNOCK_OFF},
        .itemTableId = BATTLE_FRONTIER_ITEM_HEAVY_DUTY_BOOTS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT,
		.ability = 0
    },
    [FRONTIER_MON_PALOSSAND] = {
        .species = SPECIES_PALOSSAND,
        .moves = {MOVE_STEALTH_ROCK, MOVE_EARTH_POWER, MOVE_SHADOW_BALL, MOVE_SHORE_UP},
        .itemTableId = BATTLE_FRONTIER_ITEM_COLBUR_BERRY,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_BOLD,
		.ability = 0
    },
    [FRONTIER_MON_PYUKUMUKU] = {
        .species = SPECIES_PYUKUMUKU,
        .moves = {MOVE_BLOCK, MOVE_SPITE, MOVE_RECOVER, MOVE_TOXIC},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_BOLD,
		.ability = 2
    },
    [FRONTIER_MON_SILVALLY] = {
        .species = SPECIES_SILVALLY,
        .moves = {MOVE_MULTI_ATTACK, MOVE_U_TURN, MOVE_EXPLOSION, MOVE_CRUNCH},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_SCARF,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.ability = 0
    },
    [FRONTIER_MON_MINIOR] = {
        .species = SPECIES_MINIOR,
        .moves = {MOVE_SHELL_SMASH, MOVE_STONE_EDGE, MOVE_BULLDOZE, MOVE_ACROBATICS},
        .itemTableId = BATTLE_FRONTIER_ITEM_WHITE_HERB,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_NAUGHTY,
		.ability = 0
    },
    [FRONTIER_MON_KOMALA] = {
        .species = SPECIES_KOMALA,
        .moves = {MOVE_RAPID_SPIN, MOVE_PROTECT, MOVE_U_TURN, MOVE_SUCKER_PUNCH},
        .itemTableId = BATTLE_FRONTIER_ITEM_ASSAULT_VEST,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT,
		.ability = 0
    },
    [FRONTIER_MON_TURTONATOR] = {
        .species = SPECIES_TURTONATOR,
        .moves = {MOVE_SHELL_SMASH, MOVE_FIRE_BLAST, MOVE_DRACO_METEOR, MOVE_FLASH_CANNON},
        .itemTableId = BATTLE_FRONTIER_ITEM_WHITE_HERB,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.ability = 0
    },
    [FRONTIER_MON_TOGEDEMARU] = {
        .species = SPECIES_TOGEDEMARU,
        .moves = {MOVE_WISH, MOVE_SPIKY_SHIELD, MOVE_IRON_HEAD, MOVE_U_TURN},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_CAREFUL,
		.ability = 1
    },
    [FRONTIER_MON_MIMIKYU] = {
        .species = SPECIES_MIMIKYU,
        .moves = {MOVE_PLAY_ROUGH, MOVE_SHADOW_CLAW, MOVE_SHADOW_SNEAK, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.ability = 0
    },
    [FRONTIER_MON_MIMIKYU_EMERIBIAN] = {
        .species = SPECIES_MIMIKYU_EMERIBIAN,
        .moves = {MOVE_MIGHTY_CLEAVE, MOVE_SACRED_SWORD, MOVE_POLTERGEIST, MOVE_STEALTH_ROCK},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.ability = 1
    },
    [FRONTIER_MON_BRUXISH] = {
        .species = SPECIES_BRUXISH,
        .moves = {MOVE_SWORDS_DANCE, MOVE_PSYCHIC_FANGS, MOVE_AQUA_JET, MOVE_LIQUIDATION},
        .itemTableId = BATTLE_FRONTIER_ITEM_MYSTIC_WATER,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.ability = 1
    },
    [FRONTIER_MON_DRAMPA] = {
        .species = SPECIES_DRAMPA,
        .moves = {MOVE_CALM_MIND, MOVE_ROOST, MOVE_HYPER_VOICE, MOVE_FLAMETHROWER},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST,
		.ability = 0
    },
    [FRONTIER_MON_DHELMISE] = {
        .species = SPECIES_DHELMISE,
        .moves = {MOVE_ANCHOR_SHOT, MOVE_POWER_WHIP, MOVE_SHADOW_CLAW, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_HEAVY_DUTY_BOOTS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_ATTACK,
        .nature = NATURE_BRAVE,
		.ability = 0
    },
    [FRONTIER_MON_KOMMO_O] = {
        .species = SPECIES_KOMMO_O,
        .moves = {MOVE_CLANGING_SCALES, MOVE_FLAMETHROWER, MOVE_CLOSE_COMBAT, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_ROCKY_HELMET,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_BOLD,
		.ability = 1
    },
    [FRONTIER_MON_TAPU_KOKO] = {
        .species = SPECIES_TAPU_KOKO,
        .moves = {MOVE_WILD_CHARGE, MOVE_BRAVE_BIRD, MOVE_IRON_HEAD, MOVE_U_TURN},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT,
		.ability = 0
    },
    [FRONTIER_MON_TAPU_LELE] = {
        .species = SPECIES_TAPU_LELE,
        .moves = {MOVE_PSYCHIC, MOVE_MOONBLAST, MOVE_TAUNT, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.ability = 0
    },
    [FRONTIER_MON_TAPU_BULU] = {
        .species = SPECIES_TAPU_BULU,
        .moves = {MOVE_SWORDS_DANCE, MOVE_HORN_LEECH, MOVE_CLOSE_COMBAT, MOVE_STONE_EDGE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.ability = 0
    },
    [FRONTIER_MON_TAPU_FINI] = {
        .species = SPECIES_TAPU_FINI,
        .moves = {MOVE_MUDDY_WATER, MOVE_MOONBLAST, MOVE_CALM_MIND, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_SP_ATTACK,
        .nature = NATURE_BOLD,
		.ability = 0
    },
    [FRONTIER_MON_NIHILEGO] = {
        .species = SPECIES_NIHILEGO,
        .moves = {MOVE_METEOR_BEAM, MOVE_SLUDGE_BOMB, MOVE_POWER_GEM, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_POWER_HERB,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.ability = 0
    },
    [FRONTIER_MON_BUZZWOLE] = {
        .species = SPECIES_BUZZWOLE,
        .moves = {MOVE_SUPERPOWER, MOVE_POISON_JAB, MOVE_ICE_PUNCH, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_ROCKY_HELMET,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT,
		.ability = 0
    },
    [FRONTIER_MON_PHEROMOSA] = {
        .species = SPECIES_PHEROMOSA,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_U_TURN, MOVE_ICE_BEAM, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_NAIVE,
		.ability = 0
    },
    [FRONTIER_MON_XURKITREE] = {
        .species = SPECIES_XURKITREE,
        .moves = {MOVE_THUNDERBOLT, MOVE_DAZZLING_GLEAM, MOVE_ENERGY_BALL, MOVE_VOLT_SWITCH},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_SCARF,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST,
		.ability = 0
    },
    [FRONTIER_MON_CELESTEELA] = {
        .species = SPECIES_CELESTEELA,
        .moves = {MOVE_METEOR_BEAM, MOVE_AIR_SLASH, MOVE_FLASH_CANNON, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_POWER_HERB,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST,
		.ability = 0
    },
    [FRONTIER_MON_KARTANA] = {
        .species = SPECIES_KARTANA,
        .moves = {MOVE_LEAF_BLADE, MOVE_SMART_STRIKE, MOVE_AERIAL_ACE, MOVE_SACRED_SWORD},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.ability = 0
    },
    [FRONTIER_MON_GUZZLORD] = {
        .species = SPECIES_GUZZLORD,
        .moves = {MOVE_KNOCK_OFF, MOVE_HEAVY_SLAM, MOVE_TOXIC, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_ADAMANT,
		.ability = 0
    },
    [FRONTIER_MON_NAGANADEL] = {
        .species = SPECIES_NAGANADEL,
        .moves = {MOVE_DRACO_METEOR, MOVE_SLUDGE_BOMB, MOVE_FIRE_BLAST, MOVE_TAILWIND},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.ability = 0
    },
    [FRONTIER_MON_STAKATAKA] = {
        .species = SPECIES_STAKATAKA,
        .moves = {MOVE_GYRO_BALL, MOVE_STONE_EDGE, MOVE_TRICK_ROOM, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_ATTACK,
        .nature = NATURE_LONELY,
		.ability = 0
    },
    [FRONTIER_MON_BLACEPHALON] = {
        .species = SPECIES_BLACEPHALON,
        .moves = {MOVE_HEAT_WAVE, MOVE_SHADOW_BALL, MOVE_SUBSTITUTE, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_SCARF,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.ability = 0
    },
    [FRONTIER_MON_RILLABOOM] = {
        .species = SPECIES_RILLABOOM,
        .moves = {MOVE_FAKE_OUT, MOVE_WOOD_HAMMER, MOVE_U_TURN, MOVE_TAUNT},
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_ATTACK | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_ADAMANT,
		.ability = 2
    },
    [FRONTIER_MON_CINDERACE] = {
        .species = SPECIES_CINDERACE,
        .moves = {MOVE_BOUNCE, MOVE_HIGH_JUMP_KICK, MOVE_IRON_HEAD, MOVE_PYRO_BALL},
        .itemTableId = BATTLE_FRONTIER_ITEM_WIDE_LENS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.ability = 2
    },
    [FRONTIER_MON_INTELEON] = {
        .species = SPECIES_INTELEON,
        .moves = {MOVE_HYDRO_PUMP, MOVE_DARK_PULSE, MOVE_ICE_BEAM, MOVE_U_TURN},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_SPECS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.ability = 1
    },
    [FRONTIER_MON_GREEDENT] = {
        .species = SPECIES_GREEDENT,
        .moves = {MOVE_SWORDS_DANCE, MOVE_BODY_SLAM, MOVE_BULLDOZE, MOVE_CRUNCH},
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT,
		.ability = 0
    },
    [FRONTIER_MON_CORVIKNIGHT] = {
        .species = SPECIES_CORVIKNIGHT,
        .moves = {MOVE_BRAVE_BIRD, MOVE_IRON_HEAD, MOVE_BULK_UP, MOVE_ROOST},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_ATTACK | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_ADAMANT,
		.ability = 2
    },
    [FRONTIER_MON_ORBEETLE] = {
        .species = SPECIES_ORBEETLE,
        .moves = {MOVE_REFLECT, MOVE_LIGHT_SCREEN, MOVE_STICKY_WEB, MOVE_U_TURN},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIGHT_CLAY,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.ability = 1
    },
    [FRONTIER_MON_THIEVUL] = {
        .species = SPECIES_THIEVUL,
        .moves = {MOVE_NASTY_PLOT, MOVE_DARK_PULSE, MOVE_BURNING_JEALOUSY, MOVE_GRASS_KNOT},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_SASH,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST,
		.ability = 1
    },
    [FRONTIER_MON_ELDEGOSS] = {
        .species = SPECIES_ELDEGOSS,
        .moves = {MOVE_GIGA_DRAIN, MOVE_RAPID_SPIN, MOVE_AROMATHERAPY, MOVE_LEECH_SEED},
        .itemTableId = BATTLE_FRONTIER_ITEM_HEAVY_DUTY_BOOTS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_BOLD,
		.ability = 1
    },
    [FRONTIER_MON_DUBWOOL] = {
        .species = SPECIES_DUBWOOL,
        .moves = {MOVE_COTTON_GUARD, MOVE_BODY_PRESS, MOVE_REST, MOVE_SLEEP_TALK},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.ability = 0
    },
    [FRONTIER_MON_DUBWOOL_FRIBIAN] = {
        .species = SPECIES_DUBWOOL_FRIBIAN,
        .moves = {MOVE_WICKED_BLOW, MOVE_PLAY_ROUGH, MOVE_U_TURN, MOVE_BODY_PRESS},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_SCARF,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_IMPISH,
		.ability = 2
    },
    [FRONTIER_MON_DREDNAW] = {
        .species = SPECIES_DREDNAW,
        .moves = {MOVE_LIQUIDATION, MOVE_STONE_EDGE, MOVE_MEGAHORN, MOVE_SWORDS_DANCE},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHUCA_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT,
		.ability = 1
    },
    [FRONTIER_MON_BOLTUND] = {
        .species = SPECIES_BOLTUND,
        .moves = {MOVE_THUNDER_FANG, MOVE_VOLT_SWITCH, MOVE_FIRE_FANG, MOVE_CRUNCH},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.ability = 0
    },
    [FRONTIER_MON_COALOSSAL] = {
        .species = SPECIES_COALOSSAL,
        .moves = {MOVE_HEAT_WAVE, MOVE_METEOR_BEAM, MOVE_EARTH_POWER, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_WEAKNESS_POLICY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST,
		.ability = 0
    },
    [FRONTIER_MON_FLAPPLE] = {
        .species = SPECIES_FLAPPLE,
        .moves = {MOVE_GRAV_APPLE, MOVE_OUTRAGE, MOVE_GRASSY_GLIDE, MOVE_U_TURN},
        .itemTableId = BATTLE_FRONTIER_ITEM_WIDE_LENS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_NAIVE,
		.ability = 2
    },
    [FRONTIER_MON_APPLETUN] = {
        .species = SPECIES_APPLETUN,
        .moves = {MOVE_DRACO_METEOR, MOVE_APPLE_ACID, MOVE_DRAGON_PULSE, MOVE_RECOVER},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_SPECS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST,
		.ability = 2
    },
    [FRONTIER_MON_SANDACONDA] = {
        .species = SPECIES_SANDACONDA,
        .moves = {MOVE_STEALTH_ROCK, MOVE_BULLDOZE, MOVE_GLARE, MOVE_REST},
        .itemTableId = BATTLE_FRONTIER_ITEM_ROCKY_HELMET,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_SPEED,
        .nature = NATURE_IMPISH,
		.ability = 1
    },
    [FRONTIER_MON_CRAMORANT] = {
        .species = SPECIES_CRAMORANT,
        .moves = {MOVE_DEFOG, MOVE_ROOST, MOVE_SCALD, MOVE_HURRICANE},
        .itemTableId = BATTLE_FRONTIER_ITEM_HEAVY_DUTY_BOOTS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_BOLD,
		.ability = 0
    },
    [FRONTIER_MON_BARRASKEWDA] = {
        .species = SPECIES_BARRASKEWDA,
        .moves = {MOVE_LIQUIDATION, MOVE_CLOSE_COMBAT, MOVE_PSYCHIC_FANGS, MOVE_AQUA_JET},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.ability = 1
    },
    [FRONTIER_MON_TOXTRICITY] = {
        .species = SPECIES_TOXTRICITY,
        .moves = {MOVE_VOLT_SWITCH, MOVE_OVERDRIVE, MOVE_SLUDGE_BOMB, MOVE_HYPER_VOICE},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_SCARF,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.ability = 0
    },
    [FRONTIER_MON_CENTISKORCH] = {
        .species = SPECIES_CENTISKORCH,
        .moves = {MOVE_FIRE_LASH, MOVE_LEECH_LIFE, MOVE_POWER_WHIP, MOVE_KNOCK_OFF},
        .itemTableId = BATTLE_FRONTIER_ITEM_HEAVY_DUTY_BOOTS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT,
		.ability = 0
    },
    [FRONTIER_MON_GRAPPLOCT] = {
        .species = SPECIES_GRAPPLOCT,
        .moves = {MOVE_OCTOLOCK, MOVE_DRAIN_PUNCH, MOVE_ICE_PUNCH, MOVE_SUBSTITUTE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT,
		.ability = 1
    },
    [FRONTIER_MON_POLTEAGEIST] = {
        .species = SPECIES_POLTEAGEIST,
        .moves = {MOVE_SHELL_SMASH, MOVE_SHADOW_BALL, MOVE_STORED_POWER, MOVE_CALM_MIND},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_SASH,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.ability = 0
    },
    [FRONTIER_MON_HATTERENE] = {
        .species = SPECIES_HATTERENE,
        .moves = {MOVE_DAZZLING_GLEAM, MOVE_PSYCHIC, MOVE_TRICK_ROOM, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_WISE_GLASSES,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SP_ATTACK,
        .nature = NATURE_QUIET,
		.ability = 2
    },
    [FRONTIER_MON_GRIMMSNARL] = {
        .species = SPECIES_GRIMMSNARL,
        .moves = {MOVE_REFLECT, MOVE_LIGHT_SCREEN, MOVE_SPIRIT_BREAK, MOVE_PARTING_SHOT},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIGHT_CLAY,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_CAREFUL,
		.ability = 0
    },
    [FRONTIER_MON_OBSTAGOON] = {
        .species = SPECIES_OBSTAGOON,
        .moves = {MOVE_FACADE, MOVE_KNOCK_OFF, MOVE_REST, MOVE_SLEEP_TALK},
        .itemTableId = BATTLE_FRONTIER_ITEM_FLAME_ORB,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.ability = 1
    },
    [FRONTIER_MON_PERRSERKER] = {
        .species = SPECIES_PERRSERKER,
        .moves = {MOVE_STEALTH_ROCK, MOVE_IRON_HEAD, MOVE_CLOSE_COMBAT, MOVE_U_TURN},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_ADAMANT,
		.ability = 1
    },
    [FRONTIER_MON_CURSOLA] = {
        .species = SPECIES_CURSOLA,
        .moves = {MOVE_SHADOW_BALL, MOVE_POWER_GEM, MOVE_EARTH_POWER, MOVE_HYDRO_PUMP},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_SPECS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST,
		.ability = 0
    },
    [FRONTIER_MON_SIRFETCHD] = {
        .species = SPECIES_SIRFETCHD,
        .moves = {MOVE_BRAVE_BIRD, MOVE_KNOCK_OFF, MOVE_CLOSE_COMBAT, MOVE_POISON_JAB},
        .itemTableId = BATTLE_FRONTIER_ITEM_ASSAULT_VEST,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT,
		.ability = 1
    },
    [FRONTIER_MON_MR_RIME] = {
        .species = SPECIES_MR_RIME,
        .moves = {MOVE_RAPID_SPIN, MOVE_SLACK_OFF, MOVE_FREEZE_DRY, MOVE_FUTURE_SIGHT},
        .itemTableId = BATTLE_FRONTIER_ITEM_HEAVY_DUTY_BOOTS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SP_ATTACK,
        .nature = NATURE_MODEST,
		.ability = 1
    },
    [FRONTIER_MON_RUNERIGUS] = {
        .species = SPECIES_RUNERIGUS,
        .moves = {MOVE_STEALTH_ROCK, MOVE_BODY_PRESS, MOVE_WILL_O_WISP, MOVE_TOXIC_SPIKES},
        .itemTableId = BATTLE_FRONTIER_ITEM_COLBUR_BERRY,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_IMPISH,
		.ability = 0
    },
    [FRONTIER_MON_ALCREMIE] = {
        .species = SPECIES_ALCREMIE,
        .moves = {MOVE_RECOVER, MOVE_DAZZLING_GLEAM, MOVE_MYSTICAL_FIRE, MOVE_AROMATHERAPY},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_BOLD,
		.ability = 2
    },
    [FRONTIER_MON_FALINKS] = {
        .species = SPECIES_FALINKS,
        .moves = {MOVE_NO_RETREAT, MOVE_CLOSE_COMBAT, MOVE_ROCK_SLIDE, MOVE_IRON_HEAD},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.ability = 1
    },
    [FRONTIER_MON_FALINKS_EMERIBIAN] = {
        .species = SPECIES_FALINKS_EMERIBIAN,
        .moves = {MOVE_BANEFUL_BUNKER, MOVE_GUNK_SHOT, MOVE_MEGAHORN, MOVE_IRON_TAIL},
        .itemTableId = BATTLE_FRONTIER_ITEM_WIDE_LENS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_JOLLY,
		.ability = 2
    },
    [FRONTIER_MON_PINCURCHIN] = {
        .species = SPECIES_PINCURCHIN,
        .moves = {MOVE_THUNDERBOLT, MOVE_SPIKES, MOVE_THUNDER_WAVE, MOVE_TOXIC_SPIKES},
        .itemTableId = BATTLE_FRONTIER_ITEM_TERRAIN_EXTENDER,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_BOLD,
		.ability = 2
    },
    [FRONTIER_MON_FROSMOTH] = {
        .species = SPECIES_FROSMOTH,
        .moves = {MOVE_QUIVER_DANCE, MOVE_ICE_BEAM, MOVE_GIGA_DRAIN, MOVE_SUBSTITUTE},
        .itemTableId = BATTLE_FRONTIER_ITEM_HEAVY_DUTY_BOOTS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.ability = 2
    },
    [FRONTIER_MON_STONJOURNER] = {
        .species = SPECIES_STONJOURNER,
        .moves = {MOVE_IRON_DEFENSE, MOVE_BODY_PRESS, MOVE_HEAVY_SLAM, MOVE_BULLDOZE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SPEED,
        .nature = NATURE_IMPISH,
		.ability = 0
    },
    [FRONTIER_MON_EISCUE] = {
        .species = SPECIES_EISCUE,
        .moves = {MOVE_BELLY_DRUM, MOVE_SUBSTITUTE, MOVE_ICE_SPINNER, MOVE_HAIL},
        .itemTableId = BATTLE_FRONTIER_ITEM_SALAC_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.ability = 0
    },
    [FRONTIER_MON_INDEEDEE] = {
        .species = SPECIES_INDEEDEE,
        .moves = {MOVE_PSYCHIC, MOVE_DAZZLING_GLEAM, MOVE_ENCORE, MOVE_HEALING_WISH},
        .itemTableId = BATTLE_FRONTIER_ITEM_TERRAIN_EXTENDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.ability = 2
    },
    [FRONTIER_MON_MORPEKO] = {
        .species = SPECIES_MORPEKO,
        .moves = {MOVE_AURA_WHEEL, MOVE_PARTING_SHOT, MOVE_SUPER_FANG, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_HEAVY_DUTY_BOOTS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.ability = 0
    },
    [FRONTIER_MON_COPPERAJAH] = {
        .species = SPECIES_COPPERAJAH,
        .moves = {MOVE_STEALTH_ROCK, MOVE_HEAVY_SLAM, MOVE_BULLDOZE, MOVE_ROCK_SLIDE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_CAREFUL,
		.ability = 2
    },
    [FRONTIER_MON_DRACOZOLT] = {
        .species = SPECIES_DRACOZOLT,
        .moves = {MOVE_BOLT_BEAK, MOVE_DRACO_METEOR, MOVE_SUBSTITUTE, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_NAUGHTY,
		.ability = 2
    },
    [FRONTIER_MON_ARCTOZOLT] = {
        .species = SPECIES_ARCTOZOLT,
        .moves = {MOVE_SUBSTITUTE, MOVE_BOLT_BEAK, MOVE_BLIZZARD, MOVE_LOW_KICK},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_NAIVE,
		.ability = 1
    },
    [FRONTIER_MON_DRACOVISH] = {
        .species = SPECIES_DRACOVISH,
        .moves = {MOVE_FISHIOUS_REND, MOVE_PSYCHIC_FANGS, MOVE_DRAGON_RUSH, MOVE_SLEEP_TALK},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT,
		.ability = 2
    },
    [FRONTIER_MON_ARCTOVISH] = {
        .species = SPECIES_ARCTOVISH,
        .moves = {MOVE_FISHIOUS_REND, MOVE_FREEZE_DRY, MOVE_ICICLE_CRASH, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_NAIVE,
		.ability = 0
    },
    [FRONTIER_MON_DURALUDON] = {
        .species = SPECIES_DURALUDON,
        .moves = {MOVE_DRACO_METEOR, MOVE_FLASH_CANNON, MOVE_BODY_PRESS, MOVE_THUNDERBOLT},
        .itemTableId = BATTLE_FRONTIER_ITEM_EXPERT_BELT,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST,
		.ability = 0
    },
    [FRONTIER_MON_DRAGAPULT] = {
        .species = SPECIES_DRAGAPULT,
        .moves = {MOVE_DRACO_METEOR, MOVE_SHADOW_BALL, MOVE_HYDRO_PUMP, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.ability = 1
    },
    [FRONTIER_MON_URSHIFU_RAPID_STRIKE_STYLE] = {
        .species = SPECIES_URSHIFU_RAPID_STRIKE_STYLE,
        .moves = {MOVE_SURGING_STRIKES, MOVE_TAUNT, MOVE_AQUA_JET, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_MYSTIC_WATER,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_ADAMANT,
		.ability = 0
    },
    [FRONTIER_MON_URSHIFU] = {
        .species = SPECIES_URSHIFU,
        .moves = {MOVE_WICKED_BLOW, MOVE_SUCKER_PUNCH, MOVE_CLOSE_COMBAT, MOVE_DETECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_BLACK_GLASSES,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT,
		.ability = 0
    },
    [FRONTIER_MON_REGIELEKI] = {
        .species = SPECIES_REGIELEKI,
        .moves = {MOVE_VOLT_SWITCH, MOVE_ELECTROWEB, MOVE_LIGHT_SCREEN, MOVE_REFLECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_SASH,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.ability = 0
    },
    [FRONTIER_MON_REGIDRAGO] = {
        .species = SPECIES_REGIDRAGO,
        .moves = {MOVE_DRAGON_ENERGY, MOVE_DRACO_METEOR, MOVE_EARTH_POWER, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_DRAGON_FANG,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST,
		.ability = 0
    },
    [FRONTIER_MON_GLASTRIER] = {
        .species = SPECIES_GLASTRIER,
        .moves = {MOVE_ICICLE_CRASH, MOVE_STOMPING_TANTRUM, MOVE_HEAVY_SLAM, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_CLEAR_AMULET,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_ATTACK,
        .nature = NATURE_BRAVE,
		.ability = 0
    },
    [FRONTIER_MON_SPECTRIER] = {
        .species = SPECIES_SPECTRIER,
        .moves = {MOVE_SHADOW_BALL, MOVE_MUD_SHOT, MOVE_NASTY_PLOT, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.ability = 0
    },
    [FRONTIER_MON_CALYREX] = {
        .species = SPECIES_CALYREX,
        .moves = {MOVE_CALM_MIND, MOVE_AGILITY, MOVE_STORED_POWER, MOVE_GIGA_DRAIN},
        .itemTableId = BATTLE_FRONTIER_ITEM_WEAKNESS_POLICY,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.ability = 0
    },
    [FRONTIER_MON_WYRDEER] = {
        .species = SPECIES_WYRDEER,
        .moves = {MOVE_PSYSHIELD_BASH, MOVE_AGILITY, MOVE_STORED_POWER, MOVE_CALM_MIND},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT,
		.ability = 0
    },
    [FRONTIER_MON_KLEAVOR] = {
        .species = SPECIES_KLEAVOR,
        .moves = {MOVE_STONE_AXE, MOVE_X_SCISSOR, MOVE_CLOSE_COMBAT, MOVE_ROCK_SLIDE},
        .itemTableId = BATTLE_FRONTIER_ITEM_HEAVY_DUTY_BOOTS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_ATTACK | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_JOLLY,
		.ability = 2
    },
    [FRONTIER_MON_URSALUNA] = {
        .species = SPECIES_URSALUNA,
        .moves = {MOVE_FACADE, MOVE_BULLDOZE, MOVE_SWORDS_DANCE, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_FLAME_ORB,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_ATTACK,
        .nature = NATURE_BRAVE,
		.ability = 0
    },
    [FRONTIER_MON_URSALUNA_BLOODMOON] = {
        .species = SPECIES_URSALUNA_BLOODMOON,
        .moves = {MOVE_BLOOD_MOON, MOVE_EARTH_POWER, MOVE_PROTECT, MOVE_MOONBLAST},
        .itemTableId = BATTLE_FRONTIER_ITEM_PASSHO_BERRY,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SP_ATTACK,
        .nature = NATURE_MODEST,
		.ability = 0
    },
    [FRONTIER_MON_BASCULEGION] = {
        .species = SPECIES_BASCULEGION,
        .moves = {MOVE_LAST_RESPECTS, MOVE_WAVE_CRASH, MOVE_AQUA_JET, MOVE_PSYCHIC_FANGS},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.ability = 1
    },
    [FRONTIER_MON_SNEASLER] = {
        .species = SPECIES_SNEASLER,
        .moves = {MOVE_DIRE_CLAW, MOVE_CLOSE_COMBAT, MOVE_FAKE_OUT, MOVE_SHADOW_CLAW},
        .itemTableId = BATTLE_FRONTIER_ITEM_NORMAL_GEM,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT,
		.ability = 1
    },
    [FRONTIER_MON_OVERQWIL] = {
        .species = SPECIES_OVERQWIL,
        .moves = {MOVE_TOXIC_SPIKES, MOVE_BARB_BARRAGE, MOVE_THROAT_CHOP, MOVE_LIQUIDATION},
        .itemTableId = BATTLE_FRONTIER_ITEM_ROCKY_HELMET,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_IMPISH,
		.ability = 2
    },
    [FRONTIER_MON_ENAMORUS] = {
        .species = SPECIES_ENAMORUS,
        .moves = {MOVE_PLAY_ROUGH, MOVE_SUPERPOWER, MOVE_IRON_HEAD, MOVE_SKY_ATTACK},
        .itemTableId = BATTLE_FRONTIER_ITEM_ASSAULT_VEST,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.ability = 2
    },
    [FRONTIER_MON_ENAMORUS_THERIAN] = {
        .species = SPECIES_ENAMORUS_THERIAN,
        .moves = {MOVE_CALM_MIND, MOVE_MOONBLAST, MOVE_EARTH_POWER, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SP_ATTACK,
        .nature = NATURE_MODEST,
		.ability = 0
    },
    [FRONTIER_MON_MEOWSCARADA] = {
        .species = SPECIES_MEOWSCARADA,
        .moves = {MOVE_FLOWER_TRICK, MOVE_SUCKER_PUNCH, MOVE_KNOCK_OFF, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_SASH,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.ability = 0
    },
    [FRONTIER_MON_SKELEDIRGE] = {
        .species = SPECIES_SKELEDIRGE,
        .moves = {MOVE_TORCH_SONG, MOVE_SLACK_OFF, MOVE_YAWN, MOVE_SHADOW_BALL},
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_BOLD,
		.ability = 2
    },
    [FRONTIER_MON_QUAQUAVAL] = {
        .species = SPECIES_QUAQUAVAL,
        .moves = {MOVE_AQUA_STEP, MOVE_CLOSE_COMBAT, MOVE_BRAVE_BIRD, MOVE_DETECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_MUSCLE_BAND,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.ability = 2
    },
    [FRONTIER_MON_OINKOLOGNE] = {
        .species = SPECIES_OINKOLOGNE,
        .moves = {MOVE_BULLDOZE, MOVE_PLAY_ROUGH, MOVE_IRON_HEAD, MOVE_SEED_BOMB},
        .itemTableId = BATTLE_FRONTIER_ITEM_ASSAULT_VEST,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT,
		.ability = 2
    },
    [FRONTIER_MON_SPIDOPS] = {
        .species = SPECIES_SPIDOPS,
        .moves = {MOVE_STICKY_WEB, MOVE_TOXIC_SPIKES, MOVE_FIRST_IMPRESSION, MOVE_CIRCLE_THROW},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_SASH,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT,
		.ability = 2
    },
    [FRONTIER_MON_LOKIX] = {
        .species = SPECIES_LOKIX,
        .moves = {MOVE_FIRST_IMPRESSION, MOVE_U_TURN, MOVE_THROAT_CHOP, MOVE_AXE_KICK},
        .itemTableId = BATTLE_FRONTIER_ITEM_HEAVY_DUTY_BOOTS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.ability = 2
    },
    [FRONTIER_MON_PAWMOT] = {
        .species = SPECIES_PAWMOT,
        .moves = {MOVE_FAKE_OUT, MOVE_REVIVAL_BLESSING, MOVE_CLOSE_COMBAT, MOVE_DOUBLE_SHOCK},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_SASH,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.ability = 1
    },
    [FRONTIER_MON_MAUSHOLD] = {
        .species = SPECIES_MAUSHOLD,
        .moves = {MOVE_POPULATION_BOMB, MOVE_FOLLOW_ME, MOVE_TIDY_UP, MOVE_ENCORE},
        .itemTableId = BATTLE_FRONTIER_ITEM_WIDE_LENS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.ability = 2
    },
    [FRONTIER_MON_DACHSBUN] = {
        .species = SPECIES_DACHSBUN,
        .moves = {MOVE_WISH, MOVE_PROTECT, MOVE_BODY_PRESS, MOVE_PLAY_ROUGH},
        .itemTableId = BATTLE_FRONTIER_ITEM_HEAVY_DUTY_BOOTS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_CAREFUL,
		.ability = 0
    },
    [FRONTIER_MON_ARBOLIVA] = {
        .species = SPECIES_ARBOLIVA,
        .moves = {MOVE_LEAF_STORM, MOVE_EARTH_POWER, MOVE_HYPER_VOICE, MOVE_GIGA_DRAIN},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_SPECS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SP_ATTACK,
        .nature = NATURE_MODEST,
		.ability = 0
    },
    [FRONTIER_MON_SQUAWKABILLY] = {
        .species = SPECIES_SQUAWKABILLY,
        .moves = {MOVE_FACADE, MOVE_BRAVE_BIRD, MOVE_QUICK_ATTACK, MOVE_ROOST},
        .itemTableId = BATTLE_FRONTIER_ITEM_FLAME_ORB,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.ability = 2
    },
    [FRONTIER_MON_GARGANACL] = {
        .species = SPECIES_GARGANACL,
        .moves = {MOVE_SALT_CURE, MOVE_RECOVER, MOVE_WIDE_GUARD, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_CAREFUL,
		.ability = 0
    },
    [FRONTIER_MON_ARMAROUGE] = {
        .species = SPECIES_ARMAROUGE,
        .moves = {MOVE_ARMOR_CANNON, MOVE_EXPANDING_FORCE, MOVE_AURA_SPHERE, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_SAFETY_GOGGLES,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SP_ATTACK,
        .nature = NATURE_MODEST,
		.ability = 1
    },
    [FRONTIER_MON_CERULEDGE] = {
        .species = SPECIES_CERULEDGE,
        .moves = {MOVE_BULK_UP, MOVE_BITTER_BLADE, MOVE_SHADOW_SNEAK, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_CLEAR_AMULET,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT,
		.ability = 1
    },
    [FRONTIER_MON_BELLIBOLT] = {
        .species = SPECIES_BELLIBOLT,
        .moves = {MOVE_PARABOLIC_CHARGE, MOVE_SLACK_OFF, MOVE_VOLT_SWITCH, MOVE_MUDDY_WATER},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_BOLD,
		.ability = 0
    },
    [FRONTIER_MON_KILOWATTREL] = {
        .species = SPECIES_KILOWATTREL,
        .moves = {MOVE_THUNDERBOLT, MOVE_AIR_SLASH, MOVE_TAILWIND, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_SASH,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.ability = 0
    },
    [FRONTIER_MON_MABOSSTIFF] = {
        .species = SPECIES_MABOSSTIFF,
        .moves = {MOVE_CRUNCH, MOVE_PLAY_ROUGH, MOVE_PSYCHIC_FANGS, MOVE_OUTRAGE},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_SCARF,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.ability = 2
    },
    [FRONTIER_MON_GRAFAIAI] = {
        .species = SPECIES_GRAFAIAI,
        .moves = {MOVE_ENCORE, MOVE_PARTING_SHOT, MOVE_SUBSTITUTE, MOVE_GUNK_SHOT},
        .itemTableId = BATTLE_FRONTIER_ITEM_HEAVY_DUTY_BOOTS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.ability = 2
    },
    [FRONTIER_MON_BRAMBLEGHAST] = {
        .species = SPECIES_BRAMBLEGHAST,
        .moves = {MOVE_STRENGTH_SAP, MOVE_SPIKES, MOVE_SHADOW_BALL, MOVE_RAPID_SPIN},
        .itemTableId = BATTLE_FRONTIER_ITEM_HEAVY_DUTY_BOOTS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_BOLD,
		.ability = 0
    },
    [FRONTIER_MON_TOEDSCRUEL] = {
        .species = SPECIES_TOEDSCRUEL,
        .moves = {MOVE_SPORE, MOVE_SPIKES, MOVE_LEAF_STORM, MOVE_EARTH_POWER},
        .itemTableId = BATTLE_FRONTIER_ITEM_TOXIC_ORB,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.ability = 2
    },
    [FRONTIER_MON_KLAWF] = {
        .species = SPECIES_KLAWF,
        .moves = {MOVE_STEALTH_ROCK, MOVE_ROCK_SLIDE, MOVE_KNOCK_OFF, MOVE_SWORDS_DANCE},
        .itemTableId = BATTLE_FRONTIER_ITEM_HEAVY_DUTY_BOOTS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_JOLLY,
		.ability = 2
    },
    [FRONTIER_MON_SCOVILLAIN] = {
        .species = SPECIES_SCOVILLAIN,
        .moves = {MOVE_LEECH_SEED, MOVE_SUBSTITUTE, MOVE_TRAILBLAZE, MOVE_FIRE_FANG},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.ability = 2
    },
    [FRONTIER_MON_RABSCA] = {
        .species = SPECIES_RABSCA,
        .moves = {MOVE_TRICK_ROOM, MOVE_REVIVAL_BLESSING, MOVE_BUG_BUZZ, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_PSYCHIC_SEED,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_RELAXED,
		.ability = 1
    },
    [FRONTIER_MON_ESPATHRA] = {
        .species = SPECIES_ESPATHRA,
        .moves = {MOVE_CALM_MIND, MOVE_STORED_POWER, MOVE_LUMINA_CRASH, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_SPEED,
        .nature = NATURE_BOLD,
		.ability = 2
    },
    [FRONTIER_MON_TINKATON] = {
        .species = SPECIES_TINKATON,
        .moves = {MOVE_GIGATON_HAMMER, MOVE_PLAY_ROUGH, MOVE_KNOCK_OFF, MOVE_FAKE_OUT},
        .itemTableId = BATTLE_FRONTIER_ITEM_ASSAULT_VEST,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT,
		.ability = 0
    },
    [FRONTIER_MON_WUGTRIO] = {
        .species = SPECIES_WUGTRIO,
        .moves = {MOVE_TRIPLE_DIVE, MOVE_AQUA_JET, MOVE_STOMPING_TANTRUM, MOVE_THROAT_CHOP},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.ability = 0
    },
    [FRONTIER_MON_BOMBIRDIER] = {
        .species = SPECIES_BOMBIRDIER,
        .moves = {MOVE_KNOCK_OFF, MOVE_STEALTH_ROCK, MOVE_PARTING_SHOT, MOVE_ROOST},
        .itemTableId = BATTLE_FRONTIER_ITEM_HEAVY_DUTY_BOOTS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_CAREFUL,
		.ability = 0
    },
    [FRONTIER_MON_PALAFIN] = {
        .species = SPECIES_PALAFIN,
        .moves = {MOVE_BULK_UP, MOVE_JET_PUNCH, MOVE_DRAIN_PUNCH, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_ADAMANT,
		.ability = 0
    },
    [FRONTIER_MON_REVAVROOM] = {
        .species = SPECIES_REVAVROOM,
        .moves = {MOVE_SPIN_OUT, MOVE_PARTING_SHOT, MOVE_HAZE, MOVE_TOXIC},
        .itemTableId = BATTLE_FRONTIER_ITEM_AIR_BALLOON,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_CAREFUL,
		.ability = 2
    },
    [FRONTIER_MON_CYCLIZAR] = {
        .species = SPECIES_CYCLIZAR,
        .moves = {MOVE_DRAGON_TAIL, MOVE_KNOCK_OFF, MOVE_U_TURN, MOVE_RAPID_SPIN},
        .itemTableId = BATTLE_FRONTIER_ITEM_ASSAULT_VEST,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.ability = 2
    },
    [FRONTIER_MON_ORTHWORM] = {
        .species = SPECIES_ORTHWORM,
        .moves = {MOVE_SHED_TAIL, MOVE_STEALTH_ROCK, MOVE_BODY_PRESS, MOVE_IRON_HEAD},
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_IMPISH,
		.ability = 0
    },
    [FRONTIER_MON_GLIMMORA] = {
        .species = SPECIES_GLIMMORA,
        .moves = {MOVE_STEALTH_ROCK, MOVE_MORTAL_SPIN, MOVE_SLUDGE_BOMB, MOVE_SPIKY_SHIELD},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_SASH,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.ability = 0
    },
    [FRONTIER_MON_HOUNDSTONE] = {
        .species = SPECIES_HOUNDSTONE,
        .moves = {MOVE_LAST_RESPECTS, MOVE_BODY_PRESS, MOVE_WILL_O_WISP, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_SPELL_TAG,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT,
		.ability = 1
    },
    [FRONTIER_MON_FLAMIGO] = {
        .species = SPECIES_FLAMIGO,
        .moves = {MOVE_BRAVE_BIRD, MOVE_CLOSE_COMBAT, MOVE_U_TURN, MOVE_ROOST},
        .itemTableId = BATTLE_FRONTIER_ITEM_HEAVY_DUTY_BOOTS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.ability = 0
    },
    [FRONTIER_MON_CETITAN] = {
        .species = SPECIES_CETITAN,
        .moves = {MOVE_BELLY_DRUM, MOVE_ICE_SPINNER, MOVE_PLAY_ROUGH, MOVE_ICE_SHARD},
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT,
		.ability = 0
    },
    [FRONTIER_MON_VELUZA] = {
        .species = SPECIES_VELUZA,
        .moves = {MOVE_FILLET_AWAY, MOVE_AQUA_CUTTER, MOVE_PSYCHO_CUT, MOVE_SUBSTITUTE},
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.ability = 2
    },
    [FRONTIER_MON_DONDOZO] = {
        .species = SPECIES_DONDOZO,
        .moves = {MOVE_WAVE_CRASH, MOVE_BULLDOZE, MOVE_REST, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT,
		.ability = 0
    },
    [FRONTIER_MON_TATSUGIRI] = {
        .species = SPECIES_TATSUGIRI,
        .moves = {MOVE_MUDDY_WATER, MOVE_DRACO_METEOR, MOVE_ICY_WIND, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_SASH,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.ability = 2
    },
    [FRONTIER_MON_ANNIHILAPE] = {
        .species = SPECIES_ANNIHILAPE,
        .moves = {MOVE_RAGE_FIST, MOVE_DRAIN_PUNCH, MOVE_BULK_UP, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT,
		.ability = 2
    },
    [FRONTIER_MON_CLODSIRE] = {
        .species = SPECIES_CLODSIRE,
        .moves = {MOVE_TOXIC_SPIKES, MOVE_STEALTH_ROCK, MOVE_RECOVER, MOVE_EARTHQUAKE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_CAREFUL,
		.ability = 1
    },
    [FRONTIER_MON_FARIGIRAF] = {
        .species = SPECIES_FARIGIRAF,
        .moves = {MOVE_HYPER_VOICE, MOVE_DAZZLING_GLEAM, MOVE_TRICK_ROOM, MOVE_PSYCHIC},
        .itemTableId = BATTLE_FRONTIER_ITEM_COLBUR_BERRY,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SP_ATTACK,
        .nature = NATURE_QUIET,
		.ability = 1
    },
    [FRONTIER_MON_DUDUNSPARCE] = {
        .species = SPECIES_DUDUNSPARCE,
        .moves = {MOVE_ROOST, MOVE_BODY_SLAM, MOVE_ROCK_SLIDE, MOVE_GLARE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_CAREFUL,
		.ability = 0
    },
    [FRONTIER_MON_KINGAMBIT] = {
        .species = SPECIES_KINGAMBIT,
        .moves = {MOVE_SWORDS_DANCE, MOVE_SUCKER_PUNCH, MOVE_IRON_HEAD, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_BLACK_GLASSES,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT,
		.ability = 1
    },
    [FRONTIER_MON_GREAT_TUSK] = {
        .species = SPECIES_GREAT_TUSK,
        .moves = {MOVE_HEADLONG_RUSH, MOVE_CLOSE_COMBAT, MOVE_ROCK_SLIDE, MOVE_RAPID_SPIN},
        .itemTableId = BATTLE_FRONTIER_ITEM_BOOSTER_ENERGY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT,
		.ability = 0
    },
    [FRONTIER_MON_SCREAM_TAIL] = {
        .species = SPECIES_SCREAM_TAIL,
        .moves = {MOVE_STEALTH_ROCK, MOVE_PSYCHIC_FANGS, MOVE_ENCORE, MOVE_THUNDER_WAVE},
        .itemTableId = BATTLE_FRONTIER_ITEM_BOOSTER_ENERGY,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.ability = 0
    },
    [FRONTIER_MON_BRUTE_BONNET] = {
        .species = SPECIES_BRUTE_BONNET,
        .moves = {MOVE_SPORE, MOVE_SEED_BOMB, MOVE_SUCKER_PUNCH, MOVE_CLOSE_COMBAT},
        .itemTableId = BATTLE_FRONTIER_ITEM_BOOSTER_ENERGY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT,
		.ability = 0
    },
    [FRONTIER_MON_FLUTTER_MANE] = {
        .species = SPECIES_FLUTTER_MANE,
        .moves = {MOVE_SHADOW_BALL, MOVE_ICY_WIND, MOVE_MISTY_TERRAIN, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_BOOSTER_ENERGY,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_TIMID,
		.ability = 0
    },
    [FRONTIER_MON_SLITHER_WING] = {
        .species = SPECIES_SLITHER_WING,
        .moves = {MOVE_FIRST_IMPRESSION, MOVE_CLOSE_COMBAT, MOVE_U_TURN, MOVE_BULK_UP},
        .itemTableId = BATTLE_FRONTIER_ITEM_BOOSTER_ENERGY,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_SPEED,
        .nature = NATURE_IMPISH,
		.ability = 0
    },
    [FRONTIER_MON_SANDY_SHOCKS] = {
        .species = SPECIES_SANDY_SHOCKS,
        .moves = {MOVE_VOLT_SWITCH, MOVE_EARTH_POWER, MOVE_THUNDERBOLT, MOVE_STEALTH_ROCK},
        .itemTableId = BATTLE_FRONTIER_ITEM_BOOSTER_ENERGY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.ability = 0
    },
    [FRONTIER_MON_IRON_TREADS] = {
        .species = SPECIES_IRON_TREADS,
        .moves = {MOVE_EARTHQUAKE, MOVE_KNOCK_OFF, MOVE_STEALTH_ROCK, MOVE_RAPID_SPIN},
        .itemTableId = BATTLE_FRONTIER_ITEM_BOOSTER_ENERGY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.ability = 0
    },
    [FRONTIER_MON_IRON_BUNDLE] = {
        .species = SPECIES_IRON_BUNDLE,
        .moves = {MOVE_SCALD, MOVE_FREEZE_DRY, MOVE_ICY_WIND, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_BOOSTER_ENERGY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.ability = 0
    },
    [FRONTIER_MON_IRON_HANDS] = {
        .species = SPECIES_IRON_HANDS,
        .moves = {MOVE_FAKE_OUT, MOVE_DRAIN_PUNCH, MOVE_WILD_CHARGE, MOVE_ICE_PUNCH},
        .itemTableId = BATTLE_FRONTIER_ITEM_BOOSTER_ENERGY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_ADAMANT,
		.ability = 0
    },
    [FRONTIER_MON_IRON_JUGULIS] = {
        .species = SPECIES_IRON_JUGULIS,
        .moves = {MOVE_DARK_PULSE, MOVE_HURRICANE, MOVE_TAILWIND, MOVE_TAUNT},
        .itemTableId = BATTLE_FRONTIER_ITEM_BOOSTER_ENERGY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.ability = 0
    },
    [FRONTIER_MON_IRON_MOTH] = {
        .species = SPECIES_IRON_MOTH,
        .moves = {MOVE_HEAT_WAVE, MOVE_ACID_SPRAY, MOVE_ENERGY_BALL, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_BOOSTER_ENERGY,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.ability = 0
    },
    [FRONTIER_MON_IRON_THORNS] = {
        .species = SPECIES_IRON_THORNS,
        .moves = {MOVE_STEALTH_ROCK, MOVE_DRAGON_DANCE, MOVE_STONE_EDGE, MOVE_ICE_PUNCH},
        .itemTableId = BATTLE_FRONTIER_ITEM_BOOSTER_ENERGY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.ability = 0
    },
    [FRONTIER_MON_BAXCALIBUR] = {
        .species = SPECIES_BAXCALIBUR,
        .moves = {MOVE_GLAIVE_RUSH, MOVE_ICICLE_SPEAR, MOVE_ICE_SHARD, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_LOADED_DICE,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT,
		.ability = 0
    },
    [FRONTIER_MON_GHOLDENGO] = {
        .species = SPECIES_GHOLDENGO,
        .moves = {MOVE_MAKE_IT_RAIN, MOVE_SHADOW_BALL, MOVE_NASTY_PLOT, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.ability = 0
    },
    [FRONTIER_MON_WO_CHIEN] = {
        .species = SPECIES_WO_CHIEN,
        .moves = {MOVE_RUINATION, MOVE_LEECH_SEED, MOVE_POLLEN_PUFF, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_CALM,
		.ability = 0
    },
    [FRONTIER_MON_CHIEN_PAO] = {
        .species = SPECIES_CHIEN_PAO,
        .moves = {MOVE_ICE_SPINNER, MOVE_CRUNCH, MOVE_ACROBATICS, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_SASH,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.ability = 0
    },
    [FRONTIER_MON_TING_LU] = {
        .species = SPECIES_TING_LU,
        .moves = {MOVE_STOMPING_TANTRUM, MOVE_THROAT_CHOP, MOVE_WHIRLWIND, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_ATTACK | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_ADAMANT,
		.ability = 0
    },
    [FRONTIER_MON_CHI_YU] = {
        .species = SPECIES_CHI_YU,
        .moves = {MOVE_FLAMETHROWER, MOVE_SNARL, MOVE_CONFUSE_RAY, MOVE_INCINERATE},
        .itemTableId = BATTLE_FRONTIER_ITEM_AIR_BALLOON,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.ability = 0
    },
    [FRONTIER_MON_ROARING_MOON] = {
        .species = SPECIES_ROARING_MOON,
        .moves = {MOVE_BREAKING_SWIPE, MOVE_ACROBATICS, MOVE_TAILWIND, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_BOOSTER_ENERGY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.ability = 0
    },
    [FRONTIER_MON_IRON_VALIANT] = {
        .species = SPECIES_IRON_VALIANT,
        .moves = {MOVE_SWORDS_DANCE, MOVE_SPIRIT_BREAK, MOVE_KNOCK_OFF, MOVE_ENCORE},
        .itemTableId = BATTLE_FRONTIER_ITEM_BOOSTER_ENERGY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.ability = 0
    },
    [FRONTIER_MON_WALKING_WAKE] = {
        .species = SPECIES_WALKING_WAKE,
        .moves = {MOVE_HYDRO_STEAM, MOVE_DRACO_METEOR, MOVE_FLAMETHROWER, MOVE_DRAGON_PULSE},
        .itemTableId = BATTLE_FRONTIER_ITEM_BOOSTER_ENERGY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID,
		.ability = 0
    },
    [FRONTIER_MON_IRON_LEAVES] = {
        .species = SPECIES_IRON_LEAVES,
        .moves = {MOVE_SWORDS_DANCE, MOVE_LEAF_BLADE, MOVE_PSYBLADE, MOVE_WILD_CHARGE},
        .itemTableId = BATTLE_FRONTIER_ITEM_BOOSTER_ENERGY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.ability = 0
    },
    [FRONTIER_MON_DIPPLIN] = {
        .species = SPECIES_DIPPLIN,
        .moves = {MOVE_SYRUP_BOMB, MOVE_RECOVER, MOVE_DRAGON_TAIL, MOVE_SUBSTITUTE},
        .itemTableId = BATTLE_FRONTIER_ITEM_YACHE_BERRY,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_CAREFUL,
		.ability = 0
    },
    [FRONTIER_MON_SINISTCHA] = {
        .species = SPECIES_SINISTCHA,
        .moves = {MOVE_MATCHA_GOTCHA, MOVE_SHADOW_BALL, MOVE_LEAF_STORM, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_COLBUR_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST,
		.ability = 0
    },
    [FRONTIER_MON_OKIDOGI] = {
        .species = SPECIES_OKIDOGI,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_POISON_JAB, MOVE_KNOCK_OFF, MOVE_HIGH_HORSEPOWER},
        .itemTableId = BATTLE_FRONTIER_ITEM_ASSAULT_VEST,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT,
		.ability = 2
    },
    [FRONTIER_MON_MUNKIDORI] = {
        .species = SPECIES_MUNKIDORI,
        .moves = {MOVE_PROTECT, MOVE_PSYCHIC, MOVE_SLUDGE_BOMB, MOVE_NASTY_PLOT},
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST,
		.ability = 0
    },
    [FRONTIER_MON_FEZANDIPITI] = {
        .species = SPECIES_FEZANDIPITI,
        .moves = {MOVE_TAILWIND, MOVE_ICY_WIND, MOVE_ROOST, MOVE_DAZZLING_GLEAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_BOLD,
		.ability = 0
    },
    [FRONTIER_MON_OGERPON] = {
        .species = SPECIES_OGERPON,
        .moves = {MOVE_SWORDS_DANCE, MOVE_IVY_CUDGEL, MOVE_ZEN_HEADBUTT, MOVE_KNOCK_OFF},
        .itemTableId = BATTLE_FRONTIER_ITEM_MIRACLE_SEED,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY,
		.ability = 0
    },
    [FRONTIER_MON_EVALEON] = {
        .species = SPECIES_EVALEON,
        .moves = {MOVE_TROP_KICK, MOVE_BOUNCE, MOVE_ACCELEROCK, MOVE_HYPER_BEAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_HARDY,
		.ability = 2
    },
    [FRONTIER_MON_AEREON] = {
        .species = SPECIES_AEREON,
        .moves = {MOVE_BRAVE_BIRD, MOVE_OBLIVION_WING, MOVE_YAWN, MOVE_COPYCAT},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHARP_BEAK,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_BRAVE,
		.ability = 2
    },
    [FRONTIER_MON_CONTAGEON] = {
        .species = SPECIES_CONTAGEON,
        .moves = {MOVE_TOXIC, MOVE_DIRE_CLAW, MOVE_YAWN, MOVE_DETECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_BLACK_SLUDGE,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_IMPISH,
		.ability = 1
    },
    [FRONTIER_MON_LANEON] = {
        .species = SPECIES_LANEON,
        .moves = {MOVE_SCORCHING_SANDS, MOVE_BELLY_DRUM, MOVE_WISH, MOVE_BATON_PASS},
        .itemTableId = BATTLE_FRONTIER_ITEM_GROUND_GEM,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_CALM,
		.ability = 2
    },
    [FRONTIER_MON_SCALEON] = {
        .species = SPECIES_SCALEON,
        .moves = {MOVE_SCALE_SHOT, MOVE_SHADOW_CLAW, MOVE_IRON_TAIL, MOVE_DRAGON_DANCE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LOADED_DICE,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT,
		.ability = 2
    },
    [FRONTIER_MON_TITANEON] = {
        .species = SPECIES_TITANEON,
        .moves = {MOVE_STRENGTH_SAP, MOVE_PARABOLIC_CHARGE, MOVE_IRON_TAIL, MOVE_REVIVAL_BLESSING},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_BRAVE,
		.ability = 2
    },
};
