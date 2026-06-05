    [DIFFICULTY_NORMAL][PARTNER_NONE] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
        .trainerBackPic = TRAINER_PIC_BACK_BRENDAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 0,
        .party = (const struct TrainerMon[])
        {
        },
    },

    [DIFFICULTY_NORMAL][PARTNER_STEVEN_MOSSDEEP] =
    {
        .party = TRAINER_PARTY(sParty_StevenPartnerMossdeep),
        .trainerClass = TRAINER_CLASS_CHAMPION,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerBackPic = TRAINER_PIC_BACK_STEVEN,
        .trainerName = _("Steven"),
        .items = {ITEM_MEGA_RING},
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING,
    },

    [DIFFICULTY_NORMAL][PARTNER_MAY_METEOR_FALLS] =
    {
        .party = TRAINER_PARTY(sParty_MayPartnerMeteorFalls),
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerBackPic = TRAINER_PIC_BACK_MAY,
        .trainerName = _("May"),
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    },

    [DIFFICULTY_NORMAL][PARTNER_BRENDAN_METEOR_FALLS] =
    {
        .party = TRAINER_PARTY(sParty_BrendanPartnerMeteorFalls),
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerBackPic = TRAINER_PIC_BACK_BRENDAN,
        .trainerName = _("Brendan"),
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    },

    [DIFFICULTY_NORMAL][PARTNER_RAYQUAZA] =
    {
        .party = TRAINER_PARTY(sParty_RayquazaPartner),
        .trainerClass = TRAINER_CLASS_WILD,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerBackPic = TRAINER_PIC_BACK_BLANK,
        .trainerName = _("Rayquaza"),
        .aiFlags = AI_FLAG_SMART_TRAINER,
    },

    [DIFFICULTY_NORMAL][PARTNER_STEVEN_GRANITE_CAVE] =
    {
        .party = TRAINER_PARTY(sParty_StevenPartnerGraniteCave),
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerBackPic = TRAINER_PIC_BACK_STEVEN,
        .trainerName = _("Steven"),
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    },

    [DIFFICULTY_NORMAL][PARTNER_FOLLOWER_HARPER_SUBMERGED_CAVE] =
    {
        .party = TRAINER_PARTY(sParty_HarperFollowerSubmergedCave),
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_FRONT_HARPER,
        .trainerBackPic = TRAINER_PIC_BACK_WALLY,
        .trainerName = _("Harper"),
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    },

