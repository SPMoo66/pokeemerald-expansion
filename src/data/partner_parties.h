static const struct TrainerMon sParty_StevenPartnerMossdeep[] = {
    {
        .species = SPECIES_METANG,
        .lvl = 47,
        .nature = NATURE_BRAVE,
        .heldItem = ITEM_AIR_BALLOON,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
        .moves = {MOVE_LIGHT_SCREEN, MOVE_ZEN_HEADBUTT, MOVE_REFLECT, MOVE_IRON_HEAD},
    },
    {
        .species = SPECIES_SKARMORY,
        .lvl = 48,
        .nature = NATURE_IMPISH,
        .heldItem = ITEM_SITRUS_BERRY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 6, 252),
        .moves = {MOVE_TOXIC, MOVE_DRILL_PECK, MOVE_PROTECT, MOVE_STEEL_WING},
    },
    {
        .species = SPECIES_AGGRON,
        .lvl = 49,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_MEGA_STONE_X,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 6),
        .moves = {MOVE_IRON_TAIL, MOVE_PROTECT, MOVE_ROCK_SLIDE, MOVE_DRAGON_CLAW},
    }
};

static const struct TrainerMon sParty_MayPartnerMeteorFalls[] = {
    {
        .species = SPECIES_TRANQUILL,
        .lvl = 27,
        .nature = NATURE_JOLLY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .moves = {MOVE_TAILWIND, MOVE_AERIAL_ACE, MOVE_NIGHT_SLASH, MOVE_STEEL_WING},
    },
    {
        .species = SPECIES_GOTHORITA,
        .lvl = 27,
        .nature = NATURE_CALM,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(244, 0, 172, 4, 76, 12),
        .moves = {MOVE_PSYBEAM, MOVE_FAKE_OUT, MOVE_HELPING_HAND, MOVE_HEAL_PULSE},
    },
    {
        .species = SPECIES_BUNEARY,
        .lvl = 27,
        .nature = NATURE_JOLLY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 6, 252),
        .moves = {MOVE_DOUBLE_KICK, MOVE_ENCORE, MOVE_FAKE_OUT, MOVE_WATER_PULSE},
    }
};

static const struct TrainerMon sParty_BrendanPartnerMeteorFalls[] = {
    {
        .species = SPECIES_TRANQUILL,
        .lvl = 27,
        .nature = NATURE_JOLLY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .moves = {MOVE_TAILWIND, MOVE_AERIAL_ACE, MOVE_NIGHT_SLASH, MOVE_STEEL_WING},
    },
    {
        .species = SPECIES_MORGREM,
        .lvl = 27,
        .nature = NATURE_BOLD,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(244, 0, 188, 0, 76, 0),
        .moves = {MOVE_REFLECT, MOVE_LIGHT_SCREEN, MOVE_FOUL_PLAY, MOVE_DAZZLING_GLEAM},
    },
    {
        .species = SPECIES_MUNCHLAX,
        .lvl = 27,
        .nature = NATURE_JOLLY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 6, 252),
        .moves = {MOVE_CURSE, MOVE_FACADE, MOVE_BULLDOZE, MOVE_WATER_PULSE},
    }
};

static const struct TrainerMon sParty_RayquazaPartner[] = {
    {
        .species = SPECIES_RAYQUAZA,
		.ball = ITEM_PARK_BALL,
        .lvl = 70,
        .nature = NATURE_JOLLY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .moves = {MOVE_DRAGON_DANCE, MOVE_DRAGON_ASCENT, MOVE_EXTREME_SPEED, MOVE_DRACO_METEOR},
    }
};

static const struct TrainerMon sParty_StevenPartnerGraniteCave[] = {
    {
        .species = SPECIES_ARSELLOSKY,
        .lvl = 16,
		.ability = ABILITY_BIG_PECKS,
        .nature = NATURE_ADAMANT,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(4, 128, 0, 128, 0, 0),
        .moves = {MOVE_WING_ATTACK, MOVE_STEEL_WING, MOVE_SPIKES, MOVE_CRUSH_CLAW},
    },
    {
        .species = SPECIES_LILEEP,
        .lvl = 16,
		.ability = ABILITY_SAP_SIPPER,
        .nature = NATURE_MODEST,
        .heldItem = ITEM_BIG_ROOT,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(128, 0, 128, 0, 0, 4),
        .moves = {MOVE_INGRAIN, MOVE_MEGA_DRAIN, MOVE_CONFUSE_RAY, MOVE_MUD_SHOT},
    },
    {
        .species = SPECIES_ARON,
        .lvl = 16,
		.ability = ABILITY_STURDY,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_CUSTAP_BERRY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(128, 0, 4, 0, 0, 128),
        .moves = {MOVE_ROCK_TOMB, MOVE_METAL_CLAW, MOVE_ENDEAVOR, MOVE_CURSE},
    }
};
