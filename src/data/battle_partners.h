const struct Trainer gBattlePartners[] = {
    [PARTNER_NONE] =
    {
        .party = NULL,
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _(""),
        .items = {},
    },

    [PARTNER_STEVEN_MOSSDEEP] =
    {
        .party = TRAINER_PARTY(sParty_StevenPartnerMossdeep),
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_BACK_PIC_STEVEN,
        .trainerName = _("Steven"),
    },

    [PARTNER_MAY_METEOR_FALLS] =
    {
        .party = TRAINER_PARTY(sParty_MayPartnerMeteorFalls),
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_BACK_PIC_MAY,
        .trainerName = _("May"),
    },

    [PARTNER_BRENDAN_METEOR_FALLS] =
    {
        .party = TRAINER_PARTY(sParty_BrendanPartnerMeteorFalls),
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_BACK_PIC_BRENDAN,
        .trainerName = _("Brendan"),
    },
};
