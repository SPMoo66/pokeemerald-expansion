    [DIFFICULTY_NORMAL][PARTNER_NONE] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
        .trainerBackPic = TRAINER_BACK_PIC_BRENDAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 0,
        .party = (const struct TrainerMon[])
        {
        },
    },

    [DIFFICULTY_NORMAL][PARTNER_STEVEN_MOSSDEEP] =
    {
        .party = TRAINER_PARTY(sParty_StevenPartnerMossdeep),
        .trainerClass = TRAINER_CLASS_CHAMPION,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerBackPic = TRAINER_BACK_PIC_STEVEN,
        .trainerName = _("Steven"),
        .items = {ITEM_MEGA_RING},
    },

    [DIFFICULTY_NORMAL][PARTNER_MAY_METEOR_FALLS] =
    {
        .party = TRAINER_PARTY(sParty_MayPartnerMeteorFalls),
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerBackPic = TRAINER_BACK_PIC_MAY,
        .trainerName = _("May"),
    },

    [DIFFICULTY_NORMAL][PARTNER_BRENDAN_METEOR_FALLS] =
    {
        .party = TRAINER_PARTY(sParty_BrendanPartnerMeteorFalls),
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerBackPic = TRAINER_BACK_PIC_BRENDAN,
        .trainerName = _("Brendan"),
    },

    [DIFFICULTY_NORMAL][PARTNER_RAYQUAZA] =
    {
        .party = TRAINER_PARTY(sParty_RayquazaPartner),
        .trainerClass = TRAINER_CLASS_WILD,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerBackPic = TRAINER_BACK_PIC_BLANK,
        .trainerName = _("Rayquaza"),
    },

    [DIFFICULTY_NORMAL][PARTNER_STEVEN_GRANITE_CAVE] =
    {
        .party = TRAINER_PARTY(sParty_StevenPartnerGraniteCave),
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerBackPic = TRAINER_BACK_PIC_STEVEN,
        .trainerName = _("Steven"),
    },

