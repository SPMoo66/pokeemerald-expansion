
    [DIFFICULTY_NORMAL][TRAINER_NONE] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _(""),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = 0,
        .partySize = 0,
        .party = NULL,
    },

    [DIFFICULTY_NORMAL][TRAINER_SAWYER_1] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("Sawyer"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Sawyer1),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_GRUNT_AQUA_HIDEOUT_1] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .trainerName = _("Grunt"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntAquaHideout1),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_GRUNT_AQUA_HIDEOUT_2] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .trainerName = _("Grunt"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntAquaHideout2),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_GRUNT_AQUA_HIDEOUT_3] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .trainerName = _("Grunt"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntAquaHideout3),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_GRUNT_AQUA_HIDEOUT_4] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .trainerName = _("Grunt"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntAquaHideout4),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SEAFLOOR_CAVERN_1] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .trainerName = _("Grunt"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntSeafloorCavern1),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SEAFLOOR_CAVERN_2] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .trainerName = _("Grunt"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntSeafloorCavern2),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SEAFLOOR_CAVERN_3] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .trainerName = _("Grunt"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntSeafloorCavern3),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_GABRIELLE_1] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .trainerName = _("Gabrielle"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Gabrielle1),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_GRUNT_PETALBURG_WOODS] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .trainerName = _("Grunt"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntPetalburgWoods),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_MARCEL] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("Marcel"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Marcel),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_ALBERTO] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("Alberto"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Alberto),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_ED] =
    {
        .trainerClass = TRAINER_CLASS_COLLECTOR,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .trainerName = _("Ed"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Ed),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SEAFLOOR_CAVERN_4] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .trainerName = _("Grunt"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntSeafloorCavern4),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_DECLAN] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("Declan"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Declan),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_GRUNT_RUSTURF_TUNNEL] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .trainerName = _("Grunt"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntRusturfTunnel),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_GRUNT_WEATHER_INST_1] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .trainerName = _("Grunt"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntWeatherInst1),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_GRUNT_WEATHER_INST_2] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .trainerName = _("Grunt"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntWeatherInst2),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_GRUNT_WEATHER_INST_3] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .trainerName = _("Grunt"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntWeatherInst3),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MUSEUM_1] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .trainerName = _("Grunt"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntMuseum1),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MUSEUM_2] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .trainerName = _("Grunt"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntMuseum2),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_1] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("Grunt"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntSpaceCenter1),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MT_PYRE_1] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .trainerName = _("Grunt"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntMtPyre1),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MT_PYRE_2] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .trainerName = _("Grunt"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntMtPyre2),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MT_PYRE_3] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .trainerName = _("Grunt"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntMtPyre3),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_GRUNT_WEATHER_INST_4] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .trainerName = _("Grunt"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntWeatherInst4),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_GRUNT_AQUA_HIDEOUT_5] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .trainerName = _("Grunt"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntAquaHideout5),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_GRUNT_AQUA_HIDEOUT_6] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .trainerName = _("Grunt"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntAquaHideout6),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_FREDRICK] =
    {
        .trainerClass = TRAINER_CLASS_EXPERT,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .trainerName = _("Fredrick"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Fredrick),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_MATT] =
    {
        .trainerClass = TRAINER_CLASS_AQUA_ADMIN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_ADMIN_MATT,
        .trainerName = _("Matt"),
        .items = {ITEM_SUPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE | AI_FLAG_HP_AWARE/* | AI_FLAG_ACE_POKEMON*/ | AI_FLAG_SMART_SWITCHING,
        .party = TRAINER_PARTY(sParty_Matt),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_ZANDER] =
    {
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("Zander"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Zander),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_SHELLY_WEATHER_INSTITUTE] =
    {
        .trainerClass = TRAINER_CLASS_AQUA_ADMIN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_ADMIN_SHELLY,
        .trainerName = _("Shelly"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE | AI_FLAG_HP_AWARE/* | AI_FLAG_ACE_POKEMON*/,
        .party = TRAINER_PARTY(sParty_ShellyWeatherInstitute),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_SHELLY_SEAFLOOR_CAVERN] =
    {
        .trainerClass = TRAINER_CLASS_AQUA_ADMIN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_ADMIN_SHELLY,
        .trainerName = _("Shelly"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE | AI_FLAG_HP_AWARE/* | AI_FLAG_ACE_POKEMON*/ | AI_FLAG_SMART_SWITCHING,
        .party = TRAINER_PARTY(sParty_ShellySeafloorCavern),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_ARCHIE] =
    {
        .trainerClass = TRAINER_CLASS_AQUA_LEADER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_LEADER_ARCHIE,
        .trainerName = _("Archie"),
        .items = {ITEM_SUPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE | AI_FLAG_HP_AWARE/* | AI_FLAG_ACE_POKEMON*/ | AI_FLAG_SMART_SWITCHING,
        .party = TRAINER_PARTY(sParty_Archie),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_LEAH] =
    {
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .trainerName = _("Leah"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Leah),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_DAISY] =
    {
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .trainerName = _("Daisy"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Daisy),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_ROSE_1] =
    {
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .trainerName = _("Rose"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Rose1),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_FELIX] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("Felix"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Felix),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_VIOLET] =
    {
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .trainerName = _("Violet"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Violet),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_ROSE_2] =
    {
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .trainerName = _("Rose"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Rose2),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_ROSE_3] =
    {
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .trainerName = _("Rose"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Rose3),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_ROSE_4] =
    {
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .trainerName = _("Rose"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Rose4),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_ROSE_5] =
    {
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .trainerName = _("Rose"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Rose5),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_DUSTY_1] =
    {
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .trainerName = _("Dusty"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Dusty1),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_CHIP] =
    {
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .trainerName = _("Chip"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Chip),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_FOSTER] =
    {
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .trainerName = _("Foster"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Foster),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_DUSTY_2] =
    {
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .trainerName = _("Dusty"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Dusty2),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_DUSTY_3] =
    {
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .trainerName = _("Dusty"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Dusty3),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_DUSTY_4] =
    {
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .trainerName = _("Dusty"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Dusty4),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_DUSTY_5] =
    {
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .trainerName = _("Dusty"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Dusty5),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_GABBY_AND_TY_1] =
    {
        .trainerClass = TRAINER_CLASS_INTERVIEWER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTERVIEWER,
        .trainerPic = TRAINER_PIC_INTERVIEWER,
        .trainerName = _("Gabby & Ty"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GabbyAndTy1),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_GABBY_AND_TY_2] =
    {
        .trainerClass = TRAINER_CLASS_INTERVIEWER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTERVIEWER,
        .trainerPic = TRAINER_PIC_INTERVIEWER,
        .trainerName = _("Gabby & Ty"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GabbyAndTy2),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_GABBY_AND_TY_3] =
    {
        .trainerClass = TRAINER_CLASS_INTERVIEWER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTERVIEWER,
        .trainerPic = TRAINER_PIC_INTERVIEWER,
        .trainerName = _("Gabby & Ty"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GabbyAndTy3),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_GABBY_AND_TY_4] =
    {
        .trainerClass = TRAINER_CLASS_INTERVIEWER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTERVIEWER,
        .trainerPic = TRAINER_PIC_INTERVIEWER,
        .trainerName = _("Gabby & Ty"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GabbyAndTy4),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_GABBY_AND_TY_5] =
    {
        .trainerClass = TRAINER_CLASS_INTERVIEWER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTERVIEWER,
        .trainerPic = TRAINER_PIC_INTERVIEWER,
        .trainerName = _("Gabby & Ty"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GabbyAndTy5),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_GABBY_AND_TY_6] =
    {
        .trainerClass = TRAINER_CLASS_INTERVIEWER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTERVIEWER,
        .trainerPic = TRAINER_PIC_INTERVIEWER,
        .trainerName = _("Gabby & Ty"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GabbyAndTy6),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_LOLA_1] =
    {
        .trainerClass = TRAINER_CLASS_TUBER_F,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_TUBER_F,
        .trainerName = _("Lola"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Lola1),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_AUSTINA] =
    {
        .trainerClass = TRAINER_CLASS_TUBER_F,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_TUBER_F,
        .trainerName = _("Austina"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Austina),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_GWEN] =
    {
        .trainerClass = TRAINER_CLASS_TUBER_F,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_TUBER_F,
        .trainerName = _("Gwen"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Gwen),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_LOLA_2] =
    {
        .trainerClass = TRAINER_CLASS_TUBER_F,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_TUBER_F,
        .trainerName = _("Lola"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Lola2),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_LOLA_3] =
    {
        .trainerClass = TRAINER_CLASS_TUBER_F,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_TUBER_F,
        .trainerName = _("Lola"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Lola3),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_LOLA_4] =
    {
        .trainerClass = TRAINER_CLASS_TUBER_F,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_TUBER_F,
        .trainerName = _("Lola"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Lola4),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_LOLA_5] =
    {
        .trainerClass = TRAINER_CLASS_TUBER_F,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_TUBER_F,
        .trainerName = _("Lola"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Lola5),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_RICKY_1] =
    {
        .trainerClass = TRAINER_CLASS_TUBER_M,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_TUBER_M,
        .trainerName = _("Ricky"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Ricky1),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_SIMON] =
    {
        .trainerClass = TRAINER_CLASS_TUBER_M,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_TUBER_M,
        .trainerName = _("Simon"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Simon),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_CHARLIE] =
    {
        .trainerClass = TRAINER_CLASS_TUBER_M,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_TUBER_M,
        .trainerName = _("Charlie"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Charlie),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_RICKY_2] =
    {
        .trainerClass = TRAINER_CLASS_TUBER_M,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_TUBER_M,
        .trainerName = _("Ricky"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Ricky2),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_RICKY_3] =
    {
        .trainerClass = TRAINER_CLASS_TUBER_M,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_TUBER_M,
        .trainerName = _("Ricky"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Ricky3),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_RICKY_4] =
    {
        .trainerClass = TRAINER_CLASS_TUBER_M,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_TUBER_M,
        .trainerName = _("Ricky"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Ricky4),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_RICKY_5] =
    {
        .trainerClass = TRAINER_CLASS_TUBER_M,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_TUBER_M,
        .trainerName = _("Ricky"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Ricky5),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_RANDALL] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("Randall"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Randall),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_PARKER] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("Parker"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Parker),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_GEORGE] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("George"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_George),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_BERKE] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("Berke"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Berke),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_BRAXTON] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("Braxton"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Braxton),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_VINCENT] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("Vincent"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Vincent),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_LEROY] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("Leroy"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Leroy),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_WILTON_1] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("Wilton"),
        .items = {ITEM_SUPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Wilton1),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_EDGAR] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("Edgar"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Edgar),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_ALBERT] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("Albert"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Albert),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_SAMUEL] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("Samuel"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Samuel),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_VITO] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("Vito"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Vito),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_OWEN] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("Owen"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Owen),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_WILTON_2] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("Wilton"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Wilton2),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_WILTON_3] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("Wilton"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Wilton3),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_WILTON_4] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("Wilton"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Wilton4),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_WILTON_5] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("Wilton"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Wilton5),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_WARREN] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("Warren"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Warren),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_MARY] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("Mary"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Mary),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_ALEXIA] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("Alexia"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Alexia),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_JODY] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("Jody"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_FORCE_SETUP_FIRST_TURN,
        .party = TRAINER_PARTY(sParty_Jody),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_WENDY] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("Wendy"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_FORCE_SETUP_FIRST_TURN,
        .party = TRAINER_PARTY(sParty_Wendy),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_KEIRA] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("Keira"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_FORCE_SETUP_FIRST_TURN,
        .party = TRAINER_PARTY(sParty_Keira),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_BROOKE_1] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("Brooke"),
        .items = {ITEM_SUPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Brooke1),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_JENNIFER] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("Jennifer"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Jennifer),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_HOPE] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("Hope"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Hope),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_SHANNON] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("Shannon"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Shannon),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_MICHELLE] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("Michelle"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Michelle),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_CAROLINE] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("Caroline"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Caroline),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_JULIE] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("Julie"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Julie),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_BROOKE_2] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("Brooke"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Brooke2),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_BROOKE_3] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("Brooke"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Brooke3),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_BROOKE_4] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("Brooke"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Brooke4),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_BROOKE_5] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("Brooke"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Brooke5),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_PATRICIA] =
    {
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .trainerName = _("Patricia"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Patricia),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_KINDRA] =
    {
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .trainerName = _("Kindra"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Kindra),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_TAMMY] =
    {
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .trainerName = _("Tammy"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Tammy),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_VALERIE_1] =
    {
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .trainerName = _("Valerie"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Valerie1),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_TASHA] =
    {
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .trainerName = _("Tasha"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Tasha),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_VALERIE_2] =
    {
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .trainerName = _("Valerie"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Valerie2),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_VALERIE_3] =
    {
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .trainerName = _("Valerie"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Valerie3),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_VALERIE_4] =
    {
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .trainerName = _("Valerie"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Valerie4),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_VALERIE_5] =
    {
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .trainerName = _("Valerie"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Valerie5),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_CINDY_1] =
    {
        .trainerClass = TRAINER_CLASS_LADY,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LADY,
        .trainerName = _("Cindy"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Cindy1),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_DAPHNE] =
    {
        .trainerClass = TRAINER_CLASS_LADY,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LADY,
        .trainerName = _("Daphne"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Daphne),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_2] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("Grunt"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntSpaceCenter2),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_EVELYN] =
    {
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .trainerName = _("Evelyn"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Evelyn),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_BRIANNA] =
    {
        .trainerClass = TRAINER_CLASS_LADY,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LADY,
        .trainerName = _("Brianna"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Brianna),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_NAOMI] =
    {
        .trainerClass = TRAINER_CLASS_LADY,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LADY,
        .trainerName = _("Naomi"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Naomi),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_CINDY_3] =
    {
        .trainerClass = TRAINER_CLASS_LADY,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LADY,
        .trainerName = _("Cindy"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Cindy3),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_CINDY_4] =
    {
        .trainerClass = TRAINER_CLASS_LADY,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LADY,
        .trainerName = _("Cindy"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Cindy4),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_CINDY_5] =
    {
        .trainerClass = TRAINER_CLASS_LADY,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LADY,
        .trainerName = _("Cindy"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Cindy5),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_CINDY_6] =
    {
        .trainerClass = TRAINER_CLASS_LADY,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LADY,
        .trainerName = _("Cindy"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Cindy6),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_MELISSA] =
    {
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("Melissa"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Melissa),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_SHEILA] =
    {
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("Sheila"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Sheila),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_SHIRLEY] =
    {
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("Shirley"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Shirley),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_JESSICA_1] =
    {
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("Jessica"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Jessica1),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_CONNIE] =
    {
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("Connie"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Connie),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_BRIDGET] =
    {
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("Bridget"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Bridget),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_OLIVIA] =
    {
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("Olivia"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Olivia),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_TIFFANY] =
    {
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("Tiffany"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Tiffany),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_JESSICA_2] =
    {
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("Jessica"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Jessica2),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_JESSICA_3] =
    {
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("Jessica"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Jessica3),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_JESSICA_4] =
    {
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("Jessica"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Jessica4),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_JESSICA_5] =
    {
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("Jessica"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Jessica5),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_WINSTON_1] =
    {
        .trainerClass = TRAINER_CLASS_RICH_BOY,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .trainerName = _("Winston"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Winston1),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_MOLLIE] =
    {
        .trainerClass = TRAINER_CLASS_EXPERT,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .trainerName = _("Mollie"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Mollie),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_GARRET] =
    {
        .trainerClass = TRAINER_CLASS_RICH_BOY,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .trainerName = _("Garret"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Garret),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_WINSTON_2] =
    {
        .trainerClass = TRAINER_CLASS_RICH_BOY,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .trainerName = _("Winston"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Winston2),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_WINSTON_3] =
    {
        .trainerClass = TRAINER_CLASS_RICH_BOY,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .trainerName = _("Winston"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Winston3),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_WINSTON_4] =
    {
        .trainerClass = TRAINER_CLASS_RICH_BOY,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .trainerName = _("Winston"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Winston4),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_WINSTON_5] =
    {
        .trainerClass = TRAINER_CLASS_RICH_BOY,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .trainerName = _("Winston"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Winston5),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_STEVE_1] =
    {
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .trainerName = _("Steve"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Steve1),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_THALIA_1] =
    {
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("Thalia"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Thalia1),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_MARK] =
    {
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .trainerName = _("Mark"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Mark),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MT_CHIMNEY_1] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .trainerName = _("Grunt"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntMtChimney1),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_STEVE_2] =
    {
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .trainerName = _("Steve"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Steve2),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_STEVE_3] =
    {
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .trainerName = _("Steve"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Steve3),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_STEVE_4] =
    {
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .trainerName = _("Steve"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Steve4),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_STEVE_5] =
    {
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .trainerName = _("Steve"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Steve5),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_LUIS] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("Luis"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Luis),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_DOMINIK] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("Dominik"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Dominik),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_DOUGLAS] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("Douglas"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Douglas),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_DARRIN] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("Darrin"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Darrin),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_TONY_1] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("Tony"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Tony1),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_JEROME] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("Jerome"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Jerome),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_MATTHEW] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("Matthew"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Matthew),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_DAVID] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("David"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_David),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_SPENCER] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("Spencer"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Spencer),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_ROLAND] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("Roland"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Roland),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_NOLEN] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("Nolen"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Nolen),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_STAN] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("Stan"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Stan),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_BARRY] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("Barry"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Barry),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_DEAN] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("Dean"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Dean),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_RODNEY] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("Rodney"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Rodney),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_RICHARD] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("Richard"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Richard),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_HERMAN] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("Herman"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Herman),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_SANTIAGO] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("Santiago"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Santiago),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_GILBERT] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("Gilbert"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Gilbert),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_FRANKLIN] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("Franklin"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Franklin),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_KEVIN] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("Kevin"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Kevin),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_JACK] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("Jack"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Jack),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_LOGAN] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("Logan"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Logan),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_CHAD] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("Chad"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Chad),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_TONY_2] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("Tony"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Tony2),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_TONY_3] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("Tony"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Tony3),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_TONY_4] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("Tony"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Tony4),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_TONY_5] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("Tony"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Tony5),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_TAKAO] =
    {
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("Takao"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Takao),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_HITOSHI] =
    {
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("Hitoshi"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Hitoshi),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_KIYO] =
    {
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("Kiyo"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Kiyo),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_KOICHI] =
    {
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("Koichi"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Koichi),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_NOB_1] =
    {
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("Nob"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Nob1),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_NOB_2] =
    {
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("Nob"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Nob2),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_NOB_3] =
    {
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("Nob"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Nob3),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_NOB_4] =
    {
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("Nob"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Nob4),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_NOB_5] =
    {
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("Nob"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Nob5),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_YUJI] =
    {
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("Yuji"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Yuji),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_DAISUKE] =
    {
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("Daisuke"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Daisuke),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_ATSUSHI] =
    {
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("Atsushi"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Atsushi),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_KIRK] =
    {
        .trainerClass = TRAINER_CLASS_GUITARIST,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_GUITARIST,
        .trainerName = _("Kirk"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Kirk),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_GRUNT_AQUA_HIDEOUT_7] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .trainerName = _("Grunt"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntAquaHideout7),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_GRUNT_AQUA_HIDEOUT_8] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .trainerName = _("Grunt"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntAquaHideout8),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_SHAWN] =
    {
        .trainerClass = TRAINER_CLASS_GUITARIST,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_GUITARIST,
        .trainerName = _("Shawn"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Shawn),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_FERNANDO_1] =
    {
        .trainerClass = TRAINER_CLASS_GUITARIST,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_GUITARIST,
        .trainerName = _("Fernando"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Fernando1),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_DALTON_1] =
    {
        .trainerClass = TRAINER_CLASS_GUITARIST,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_GUITARIST,
        .trainerName = _("Dalton"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Dalton1),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_DALTON_2] =
    {
        .trainerClass = TRAINER_CLASS_GUITARIST,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_GUITARIST,
        .trainerName = _("Dalton"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Dalton2),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_DALTON_3] =
    {
        .trainerClass = TRAINER_CLASS_GUITARIST,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_GUITARIST,
        .trainerName = _("Dalton"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Dalton3),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_DALTON_4] =
    {
        .trainerClass = TRAINER_CLASS_GUITARIST,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_GUITARIST,
        .trainerName = _("Dalton"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Dalton4),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_DALTON_5] =
    {
        .trainerClass = TRAINER_CLASS_GUITARIST,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_GUITARIST,
        .trainerName = _("Dalton"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Dalton5),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_COLE] =
    {
        .trainerClass = TRAINER_CLASS_KINDLER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_KINDLER,
        .trainerName = _("Cole"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Cole),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_JEFF] =
    {
        .trainerClass = TRAINER_CLASS_KINDLER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_KINDLER,
        .trainerName = _("Jeff"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Jeff),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_AXLE] =
    {
        .trainerClass = TRAINER_CLASS_KINDLER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_KINDLER,
        .trainerName = _("Axle"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Axle),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_JACE] =
    {
        .trainerClass = TRAINER_CLASS_KINDLER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_KINDLER,
        .trainerName = _("Jace"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Jace),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_KEEGAN] =
    {
        .trainerClass = TRAINER_CLASS_KINDLER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_KINDLER,
        .trainerName = _("Keegan"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Keegan),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_BERNIE_1] =
    {
        .trainerClass = TRAINER_CLASS_KINDLER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_KINDLER,
        .trainerName = _("Bernie"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Bernie1),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_BERNIE_2] =
    {
        .trainerClass = TRAINER_CLASS_KINDLER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_KINDLER,
        .trainerName = _("Bernie"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Bernie2),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_BERNIE_3] =
    {
        .trainerClass = TRAINER_CLASS_KINDLER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_KINDLER,
        .trainerName = _("Bernie"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Bernie3),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_BERNIE_4] =
    {
        .trainerClass = TRAINER_CLASS_KINDLER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_KINDLER,
        .trainerName = _("Bernie"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Bernie4),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_BERNIE_5] =
    {
        .trainerClass = TRAINER_CLASS_KINDLER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_KINDLER,
        .trainerName = _("Bernie"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Bernie5),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_DREW] =
    {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("Drew"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Drew),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_BEAU] =
    {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("Beau"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Beau),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_LARRY] =
    {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("Larry"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Larry),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_SHANE] =
    {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("Shane"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Shane),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_JUSTIN] =
    {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("Justin"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Justin),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_ETHAN_1] =
    {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("Ethan"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Ethan1),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_AUTUMN] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("Autumn"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Autumn),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_TRAVIS] =
    {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("Travis"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Travis),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_ETHAN_2] =
    {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("Ethan"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Ethan2),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_ETHAN_3] =
    {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("Ethan"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Ethan3),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_ETHAN_4] =
    {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("Ethan"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Ethan4),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_ETHAN_5] =
    {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("Ethan"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Ethan5),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_BRENT] =
    {
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .trainerName = _("Brent"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Brent),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_DONALD] =
    {
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .trainerName = _("Donald"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Donald),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_TAYLOR] =
    {
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .trainerName = _("Taylor"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Taylor),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_JEFFREY_1] =
    {
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .trainerName = _("Jeffrey"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Jeffrey1),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_DEREK] =
    {
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .trainerName = _("Derek"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Derek),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_JEFFREY_2] =
    {
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .trainerName = _("Jeffrey"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Jeffrey2),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_JEFFREY_3] =
    {
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .trainerName = _("Jeffrey"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Jeffrey3),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_JEFFREY_4] =
    {
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .trainerName = _("Jeffrey"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Jeffrey4),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_JEFFREY_5] =
    {
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .trainerName = _("Jeffrey"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Jeffrey5),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_EDWARD] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .trainerName = _("Edward"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Edward),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_PRESTON] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .trainerName = _("Preston"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Preston),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_VIRGIL] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .trainerName = _("Virgil"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Virgil),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_BLAKE] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .trainerName = _("Blake"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Blake),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_WILLIAM] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .trainerName = _("William"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_William),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_JOSHUA] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .trainerName = _("Joshua"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Joshua),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_CAMERON_1] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .trainerName = _("Cameron"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Cameron1),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_CAMERON_2] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .trainerName = _("Cameron"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Cameron2),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_CAMERON_3] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .trainerName = _("Cameron"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Cameron3),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_CAMERON_4] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .trainerName = _("Cameron"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Cameron4),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_CAMERON_5] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .trainerName = _("Cameron"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Cameron5),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_JACLYN] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .trainerName = _("Jaclyn"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Jaclyn),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_HANNAH] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .trainerName = _("Hannah"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Hannah),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_SAMANTHA] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .trainerName = _("Samantha"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Samantha),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_MAURA] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .trainerName = _("Maura"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Maura),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_KAYLA] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .trainerName = _("Kayla"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Kayla),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_ALEXIS] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .trainerName = _("Alexis"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Alexis),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_JACKI_1] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .trainerName = _("Jacki"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Jacki1),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_JACKI_2] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .trainerName = _("Jacki"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Jacki2),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_JACKI_3] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .trainerName = _("Jacki"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Jacki3),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_JACKI_4] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .trainerName = _("Jacki"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Jacki4),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_JACKI_5] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .trainerName = _("Jacki"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Jacki5),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_WALTER_1] =
    {
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .trainerName = _("Walter"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Walter1),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_MICAH] =
    {
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .trainerName = _("Micah"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Micah),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_THOMAS] =
    {
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .trainerName = _("Thomas"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Thomas),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_WALTER_2] =
    {
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .trainerName = _("Walter"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Walter2),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_WALTER_3] =
    {
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .trainerName = _("Walter"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Walter3),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_WALTER_4] =
    {
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .trainerName = _("Walter"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Walter4),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_WALTER_5] =
    {
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .trainerName = _("Walter"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Walter5),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_SIDNEY] =
    {
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
        .trainerPic = TRAINER_PIC_ELITE_FOUR_SIDNEY,
        .trainerName = _("Sidney"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE | AI_FLAG_HP_AWARE/* | AI_FLAG_ACE_POKEMON*/ | AI_FLAG_SMART_SWITCHING,
        .party = TRAINER_PARTY(sParty_Sidney),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_PHOEBE] =
    {
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
        .trainerPic = TRAINER_PIC_ELITE_FOUR_PHOEBE,
        .trainerName = _("Phoebe"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .mugshotColor = MUGSHOT_COLOR_GREEN,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE | AI_FLAG_HP_AWARE/* | AI_FLAG_ACE_POKEMON*/ | AI_FLAG_SMART_SWITCHING,
        .party = TRAINER_PARTY(sParty_Phoebe),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_GLACIA] =
    {
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
        .trainerPic = TRAINER_PIC_ELITE_FOUR_GLACIA,
        .trainerName = _("Glacia"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .mugshotColor = MUGSHOT_COLOR_PINK,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE | AI_FLAG_HP_AWARE/* | AI_FLAG_ACE_POKEMON*/ | AI_FLAG_SMART_SWITCHING,
        .party = TRAINER_PARTY(sParty_Glacia),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_DRAKE] =
    {
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
        .trainerPic = TRAINER_PIC_ELITE_FOUR_DRAKE,
        .trainerName = _("Drake"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .mugshotColor = MUGSHOT_COLOR_BLUE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE | AI_FLAG_HP_AWARE/* | AI_FLAG_ACE_POKEMON*/ | AI_FLAG_SMART_SWITCHING,
        .party = TRAINER_PARTY(sParty_Drake),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_ROXANNE_1] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_ROXANNE,
        .trainerName = _("Roxanne"),
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .mugshotColor = MUGSHOT_COLOR_ICE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE/* | AI_FLAG_ACE_POKEMON*/,
        .party = TRAINER_PARTY(sParty_Roxanne1),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_BRAWLY_1] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_BRAWLY,
        .trainerName = _("Brawly"),
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE/* | AI_FLAG_ACE_POKEMON*/,
        .party = TRAINER_PARTY(sParty_Brawly1),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_WATTSON_1] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_WATTSON,
        .trainerName = _("Wattson"),
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .mugshotColor = MUGSHOT_COLOR_STEEL,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE/* | AI_FLAG_ACE_POKEMON*/,
        .party = TRAINER_PARTY(sParty_Wattson1),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_FLANNERY_1] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_FLANNERY,
        .trainerName = _("Flannery"),
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .mugshotColor = MUGSHOT_COLOR_BLUE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE | AI_FLAG_HP_AWARE/* | AI_FLAG_ACE_POKEMON*/,
        .party = TRAINER_PARTY(sParty_Flannery1),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_NORMAN_1] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_NORMAN,
        .trainerName = _("Norman"),
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .mugshotColor = MUGSHOT_COLOR_FIRE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE | AI_FLAG_HP_AWARE/* | AI_FLAG_ACE_POKEMON*/ | AI_FLAG_SMART_SWITCHING | AI_FLAG_CONSERVATIVE,
        .party = TRAINER_PARTY(sParty_Norman1),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_WINONA_1] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_WINONA,
        .trainerName = _("Winona"),
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .mugshotColor = MUGSHOT_COLOR_GRASS,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_RISKY | AI_FLAG_DOUBLE_BATTLE | AI_FLAG_HP_AWARE/* | AI_FLAG_ACE_POKEMON*/ | AI_FLAG_SMART_SWITCHING,
        .party = TRAINER_PARTY(sParty_Winona1),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_TATE_AND_LIZA_1] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_TATE_AND_LIZA,
        .trainerName = _("Tate&Liza"),
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .mugshotColor = MUGSHOT_COLOR_ELECTRIC,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE | AI_FLAG_HP_AWARE/* | AI_FLAG_ACE_POKEMON*/ | AI_FLAG_SMART_SWITCHING,
        .party = TRAINER_PARTY(sParty_TateAndLiza1),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_JUAN_1] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_JUAN,
        .trainerName = _("Juan"),
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .mugshotColor = MUGSHOT_COLOR_DRAGON,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE | AI_FLAG_HP_AWARE/* | AI_FLAG_ACE_POKEMON*/ | AI_FLAG_SMART_SWITCHING,
        .party = TRAINER_PARTY(sParty_Juan1),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_JERRY_1] =
    {
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .trainerName = _("Jerry"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Jerry1),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_TED] =
    {
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .trainerName = _("Ted"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Ted),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_PAUL] =
    {
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .trainerName = _("Paul"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Paul),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_JERRY_2] =
    {
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .trainerName = _("Jerry"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Jerry2),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_JERRY_3] =
    {
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .trainerName = _("Jerry"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Jerry3),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_JERRY_4] =
    {
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .trainerName = _("Jerry"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Jerry4),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_JERRY_5] =
    {
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .trainerName = _("Jerry"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Jerry5),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_KAREN_1] =
    {
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
        .trainerName = _("Karen"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Karen1),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_GEORGIA] =
    {
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
        .trainerName = _("Georgia"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Georgia),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_KAREN_2] =
    {
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
        .trainerName = _("Karen"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Karen2),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_KAREN_3] =
    {
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
        .trainerName = _("Karen"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Karen3),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_KAREN_4] =
    {
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
        .trainerName = _("Karen"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Karen4),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_KAREN_5] =
    {
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
        .trainerName = _("Karen"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Karen5),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_KATE_AND_JOY] =
    {
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .trainerName = _("Kate & Joy"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_KateAndJoy),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_ANNA_AND_MEG_1] =
    {
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .trainerName = _("Anna & Meg"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_AnnaAndMeg1),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_ANNA_AND_MEG_2] =
    {
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .trainerName = _("Anna & Meg"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_AnnaAndMeg2),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_ANNA_AND_MEG_3] =
    {
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .trainerName = _("Anna & Meg"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_AnnaAndMeg3),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_ANNA_AND_MEG_4] =
    {
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .trainerName = _("Anna & Meg"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_AnnaAndMeg4),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_ANNA_AND_MEG_5] =
    {
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .trainerName = _("Anna & Meg"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_AnnaAndMeg5),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_VICTOR] =
    {
        .trainerClass = TRAINER_CLASS_WINSTRATE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .trainerName = _("Victor"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Victor),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_MIGUEL_1] =
    {
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .trainerName = _("Miguel"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Miguel1),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_COLTON] =
    {
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .trainerName = _("Colton"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Colton),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_MIGUEL_2] =
    {
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .trainerName = _("Miguel"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Miguel2),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_MIGUEL_3] =
    {
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .trainerName = _("Miguel"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Miguel3),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_MIGUEL_4] =
    {
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .trainerName = _("Miguel"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Miguel4),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_MIGUEL_5] =
    {
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .trainerName = _("Miguel"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Miguel5),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_VICTORIA] =
    {
        .trainerClass = TRAINER_CLASS_WINSTRATE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .trainerName = _("Victoria"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .party = TRAINER_PARTY(sParty_Victoria),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_VANESSA] =
    {
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .trainerName = _("Vanessa"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Vanessa),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_BETHANY] =
    {
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .trainerName = _("Bethany"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Bethany),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_ISABEL_1] =
    {
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .trainerName = _("Isabel"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Isabel1),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_ISABEL_2] =
    {
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .trainerName = _("Isabel"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Isabel2),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_ISABEL_3] =
    {
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .trainerName = _("Isabel"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Isabel3),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_ISABEL_4] =
    {
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .trainerName = _("Isabel"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Isabel4),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_ISABEL_5] =
    {
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .trainerName = _("Isabel"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Isabel5),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_TIMOTHY_1] =
    {
        .trainerClass = TRAINER_CLASS_EXPERT,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .trainerName = _("Timothy"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Timothy1),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_TIMOTHY_2] =
    {
        .trainerClass = TRAINER_CLASS_EXPERT,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .trainerName = _("Timothy"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Timothy2),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_TIMOTHY_3] =
    {
        .trainerClass = TRAINER_CLASS_EXPERT,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .trainerName = _("Timothy"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Timothy3),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_TIMOTHY_4] =
    {
        .trainerClass = TRAINER_CLASS_EXPERT,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .trainerName = _("Timothy"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Timothy4),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_TIMOTHY_5] =
    {
        .trainerClass = TRAINER_CLASS_EXPERT,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .trainerName = _("Timothy"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Timothy5),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_VICKY] =
    {
        .trainerClass = TRAINER_CLASS_WINSTRATE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .trainerName = _("Vicky"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Vicky),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_SHELBY_1] =
    {
        .trainerClass = TRAINER_CLASS_EXPERT,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .trainerName = _("Shelby"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Shelby1),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_SHELBY_2] =
    {
        .trainerClass = TRAINER_CLASS_EXPERT,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .trainerName = _("Shelby"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Shelby2),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_SHELBY_3] =
    {
        .trainerClass = TRAINER_CLASS_EXPERT,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .trainerName = _("Shelby"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Shelby3),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_SHELBY_4] =
    {
        .trainerClass = TRAINER_CLASS_EXPERT,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .trainerName = _("Shelby"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Shelby4),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_SHELBY_5] =
    {
        .trainerClass = TRAINER_CLASS_EXPERT,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .trainerName = _("Shelby"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Shelby5),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_CALVIN_1] =
    {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("Calvin"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Calvin1),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_BILLY] =
    {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("Billy"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Billy),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_JOSH] =
    {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("Josh"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Josh),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_TOMMY] =
    {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("Tommy"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Tommy),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_JOEY] =
    {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("Joey"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Joey),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_BEN] =
    {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("Ben"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Ben),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_QUINCY] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("Quincy"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Quincy),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_KATELYNN] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("Katelynn"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Katelynn),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_JAYLEN] =
    {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("Jaylen"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Jaylen),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_DILLON] =
    {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("Dillon"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Dillon),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_CALVIN_2] =
    {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("Calvin"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Calvin2),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_CALVIN_3] =
    {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("Calvin"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Calvin3),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_CALVIN_4] =
    {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("Calvin"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Calvin4),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_CALVIN_5] =
    {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("Calvin"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Calvin5),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_EDDIE] =
    {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("Eddie"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Eddie),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_ALLEN] =
    {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("Allen"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Allen),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_TIMMY] =
    {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("Timmy"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Timmy),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_WALLACE] =
    {
        .trainerClass = TRAINER_CLASS_CHAMPION,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CHAMPION_WALLACE,
        .trainerName = _("Wallace"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .mugshotColor = MUGSHOT_COLOR_YELLOW,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE | AI_FLAG_HP_AWARE | AI_FLAG_SMART_SWITCHING,
        .party = TRAINER_PARTY(sParty_Wallace),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_ANDREW] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("Andrew"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Andrew),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_IVAN] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("Ivan"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Ivan),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_CLAUDE] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("Claude"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Claude),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_ELLIOT_1] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("Elliot"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Elliot1),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_NED] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("Ned"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Ned),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_DALE] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("Dale"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Dale),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_NOLAN] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("Nolan"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Nolan),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_BARNY] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("Barny"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Barny),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_WADE] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("Wade"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Wade),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_CARTER] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("Carter"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Carter),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_ELLIOT_2] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("Elliot"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Elliot2),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_ELLIOT_3] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("Elliot"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Elliot3),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_ELLIOT_4] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("Elliot"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Elliot4),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_ELLIOT_5] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("Elliot"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .party = TRAINER_PARTY(sParty_Elliot5),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_RONALD] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("Ronald"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Ronald),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_JACOB] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .trainerName = _("Jacob"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Jacob),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_ANTHONY] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .trainerName = _("Anthony"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Anthony),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_BENJAMIN_1] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .trainerName = _("Benjamin"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Benjamin1),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_BENJAMIN_2] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .trainerName = _("Benjamin"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Benjamin2),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_BENJAMIN_3] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .trainerName = _("Benjamin"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Benjamin3),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_BENJAMIN_4] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .trainerName = _("Benjamin"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Benjamin4),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_BENJAMIN_5] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .trainerName = _("Benjamin"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Benjamin5),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_ABIGAIL_1] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .trainerName = _("Abigail"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Abigail1),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_JASMINE] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .trainerName = _("Jasmine"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Jasmine),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_ABIGAIL_2] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .trainerName = _("Abigail"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Abigail2),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_ABIGAIL_3] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .trainerName = _("Abigail"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Abigail3),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_ABIGAIL_4] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .trainerName = _("Abigail"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Abigail4),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_ABIGAIL_5] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .trainerName = _("Abigail"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Abigail5),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_DYLAN_1] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_M,
        .trainerName = _("Dylan"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Dylan1),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_DYLAN_2] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_M,
        .trainerName = _("Dylan"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Dylan2),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_DYLAN_3] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_M,
        .trainerName = _("Dylan"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Dylan3),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_DYLAN_4] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_M,
        .trainerName = _("Dylan"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Dylan4),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_DYLAN_5] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_M,
        .trainerName = _("Dylan"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Dylan5),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_MARIA_1] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .trainerName = _("Maria"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Maria1),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_MARIA_2] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .trainerName = _("Maria"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Maria2),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_MARIA_3] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .trainerName = _("Maria"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Maria3),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_MARIA_4] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .trainerName = _("Maria"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Maria4),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_MARIA_5] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .trainerName = _("Maria"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Maria5),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_CAMDEN] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .trainerName = _("Camden"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Camden),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_DEMETRIUS] =
    {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("Demetrius"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Demetrius),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_ISAIAH_1] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .trainerName = _("Isaiah"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Isaiah1),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_PABLO_1] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .trainerName = _("Pablo"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Pablo1),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_CHASE] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .trainerName = _("Chase"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Chase),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_ISAIAH_2] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .trainerName = _("Isaiah"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Isaiah2),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_ISAIAH_3] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .trainerName = _("Isaiah"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Isaiah3),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_ISAIAH_4] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .trainerName = _("Isaiah"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Isaiah4),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_ISAIAH_5] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .trainerName = _("Isaiah"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Isaiah5),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_ISOBEL] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .trainerName = _("Isobel"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Isobel),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_DONNY] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .trainerName = _("Donny"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Donny),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_TALIA] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .trainerName = _("Talia"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Talia),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_KATELYN_1] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .trainerName = _("Katelyn"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Katelyn1),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_ALLISON] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .trainerName = _("Allison"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Allison),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_KATELYN_2] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .trainerName = _("Katelyn"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Katelyn2),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_KATELYN_3] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .trainerName = _("Katelyn"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Katelyn3),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_KATELYN_4] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .trainerName = _("Katelyn"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Katelyn4),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_KATELYN_5] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .trainerName = _("Katelyn"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Katelyn5),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_NICOLAS_1] =
    {
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .trainerName = _("Nicolas"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Nicolas1),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_NICOLAS_2] =
    {
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .trainerName = _("Nicolas"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Nicolas2),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_NICOLAS_3] =
    {
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .trainerName = _("Nicolas"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Nicolas3),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_NICOLAS_4] =
    {
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .trainerName = _("Nicolas"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Nicolas4),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_NICOLAS_5] =
    {
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .trainerName = _("Nicolas"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Nicolas5),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_AARON] =
    {
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .trainerName = _("Aaron"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Aaron),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_PERRY] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("Perry"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Perry),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_HUGH] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("Hugh"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Hugh),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_PHIL] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("Phil"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Phil),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_JARED] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("Jared"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Jared),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_HUMBERTO] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("Humberto"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Humberto),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_PRESLEY] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("Presley"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Presley),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_EDWARDO] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("Edwardo"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Edwardo),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_COLIN] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("Colin"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Colin),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_ROBERT_1] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("Robert"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Robert1),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_BENNY] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("Benny"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Benny),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_CHESTER] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("Chester"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Chester),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_ROBERT_2] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("Robert"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Robert2),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_ROBERT_3] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("Robert"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Robert3),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_ROBERT_4] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("Robert"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Robert4),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_ROBERT_5] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("Robert"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Robert5),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_ALEX] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("Alex"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Alex),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_BECK] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("Beck"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Beck),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_YASU] =
    {
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .trainerName = _("Yasu"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .party = TRAINER_PARTY(sParty_Yasu),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_TAKASHI] =
    {
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .trainerName = _("Takashi"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .party = TRAINER_PARTY(sParty_Takashi),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_DIANNE] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("Dianne"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = 0,
        .party = TRAINER_PARTY(sParty_Dianne),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_JANI] =
    {
        .trainerClass = TRAINER_CLASS_TUBER_F,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_TUBER_F,
        .trainerName = _("Jani"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = 0,
        .party = TRAINER_PARTY(sParty_Jani),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_LAO_1] =
    {
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .trainerName = _("Lao"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = 0,
        .party = TRAINER_PARTY(sParty_Lao1),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_LUNG] =
    {
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .trainerName = _("Lung"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = 0,
        .party = TRAINER_PARTY(sParty_Lung),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_LAO_2] =
    {
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .trainerName = _("Lao"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = 0,
        .party = TRAINER_PARTY(sParty_Lao2),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_LAO_3] =
    {
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .trainerName = _("Lao"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = 0,
        .party = TRAINER_PARTY(sParty_Lao3),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_LAO_4] =
    {
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .trainerName = _("Lao"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = 0,
        .party = TRAINER_PARTY(sParty_Lao4),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_LAO_5] =
    {
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .trainerName = _("Lao"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = 0,
        .party = TRAINER_PARTY(sParty_Lao5),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_JOCELYN] =
    {
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .trainerName = _("Jocelyn"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Jocelyn),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_LAURA] =
    {
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .trainerName = _("Laura"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Laura),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_CYNDY_1] =
    {
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .trainerName = _("Cyndy"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Cyndy1),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_CORA] =
    {
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .trainerName = _("Cora"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Cora),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_PAULA] =
    {
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .trainerName = _("Paula"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Paula),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_CYNDY_2] =
    {
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .trainerName = _("Cyndy"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Cyndy2),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_CYNDY_3] =
    {
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .trainerName = _("Cyndy"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Cyndy3),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_CYNDY_4] =
    {
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .trainerName = _("Cyndy"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Cyndy4),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_CYNDY_5] =
    {
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .trainerName = _("Cyndy"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Cyndy5),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_MADELINE_1] =
    {
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .trainerName = _("Madeline"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Madeline1),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_CLARISSA] =
    {
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .trainerName = _("Clarissa"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Clarissa),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_ANGELICA] =
    {
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .trainerName = _("Angelica"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Angelica),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_MADELINE_2] =
    {
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .trainerName = _("Madeline"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Madeline2),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_MADELINE_3] =
    {
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .trainerName = _("Madeline"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Madeline3),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_MADELINE_4] =
    {
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .trainerName = _("Madeline"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Madeline4),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_MADELINE_5] =
    {
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .trainerName = _("Madeline"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Madeline5),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_BEVERLY] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("Beverly"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Beverly),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_IMANI] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("Imani"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Imani),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_KYLA] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("Kyla"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Kyla),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_DENISE] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("Denise"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Denise),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_BETH] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("Beth"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Beth),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_TARA] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("Tara"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Tara),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_MISSY] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("Missy"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Missy),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_ALICE] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("Alice"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Alice),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_JENNY_1] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("Jenny"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Jenny1),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_GRACE] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("Grace"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Grace),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_TANYA] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("Tanya"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Tanya),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_SHARON] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("Sharon"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Sharon),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_NIKKI] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("Nikki"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Nikki),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_BRENDA] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("Brenda"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Brenda),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_KATIE] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("Katie"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Katie),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_SUSIE] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("Susie"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Susie),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_KARA] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("Kara"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Kara),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_DANA] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("Dana"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Dana),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_SIENNA] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("Sienna"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Sienna),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_DEBRA] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("Debra"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Debra),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_LINDA] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("Linda"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Linda),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_NOAH] =
    {
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .trainerName = _("Noah"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Noah),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_LAUREL] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("Laurel"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Laurel),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_CARLEE] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("Carlee"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Carlee),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_JENNY_2] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("Jenny"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Jenny2),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_JENNY_3] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("Jenny"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Jenny3),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_JENNY_4] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("Jenny"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Jenny4),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_JENNY_5] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("Jenny"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Jenny5),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_HEIDI] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("Heidi"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Heidi),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_BECKY] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("Becky"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Becky),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_CAROL] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("Carol"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Carol),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_NANCY] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("Nancy"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Nancy),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_MARTHA] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("Martha"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Martha),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_DIANA_1] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("Diana"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Diana1),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_CEDRIC] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .trainerName = _("Cedric"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Cedric),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_IRENE] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("Irene"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Irene),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_DIANA_2] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("Diana"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Diana2),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_DIANA_3] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("Diana"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Diana3),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_DIANA_4] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("Diana"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Diana4),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_DIANA_5] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("Diana"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Diana5),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_AMY_AND_LIV_1] =
    {
        .trainerClass = TRAINER_CLASS_TWINS,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_TWINS,
        .trainerName = _("Amy & Liv"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_AmyAndLiv1),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_AMY_AND_LIV_2] =
    {
        .trainerClass = TRAINER_CLASS_TWINS,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_TWINS,
        .trainerName = _("Amy & Liv"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_AmyAndLiv2),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_GINA_AND_MIA_1] =
    {
        .trainerClass = TRAINER_CLASS_TWINS,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_TWINS,
        .trainerName = _("Gina & Mia"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GinaAndMia1),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_MIU_AND_YUKI] =
    {
        .trainerClass = TRAINER_CLASS_TWINS,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_TWINS,
        .trainerName = _("Miu & Yuki"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_MiuAndYuki),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_MAGMA_GRUNT_METEOR_FALLS] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("Grunt"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_MagmaGruntMeteorFalls),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_COURTNEY_METEOR_FALLS] =
    {
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN_COURTNEY,
        .trainerName = _("Courtney"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_CourtneyMeteorFalls),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_AMY_AND_LIV_4] =
    {
        .trainerClass = TRAINER_CLASS_TWINS,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_TWINS,
        .trainerName = _("Amy & Liv"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_AmyAndLiv4),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_AMY_AND_LIV_5] =
    {
        .trainerClass = TRAINER_CLASS_TWINS,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_TWINS,
        .trainerName = _("Amy & Liv"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_AmyAndLiv5),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_AMY_AND_LIV_6] =
    {
        .trainerClass = TRAINER_CLASS_TWINS,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_TWINS,
        .trainerName = _("Amy & Liv"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_AmyAndLiv6),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_HUEY] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("Huey"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Huey),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_EDMOND] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("Edmond"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Edmond),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_ERNEST_1] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("Ernest"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Ernest1),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_DWAYNE] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("Dwayne"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Dwayne),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_PHILLIP] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("Phillip"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Phillip),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_LEONARD] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("Leonard"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Leonard),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_DUNCAN] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("Duncan"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Duncan),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_ERNEST_2] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("Ernest"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Ernest2),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_ERNEST_3] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("Ernest"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Ernest3),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_ERNEST_4] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("Ernest"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Ernest4),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_ERNEST_5] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("Ernest"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Ernest5),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_ELI] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("Eli"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Eli),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_ANNIKA] =
    {
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .trainerName = _("Annika"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Annika),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_JAZMYN] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("Jazmyn"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Jazmyn),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_JONAS] =
    {
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .trainerName = _("Jonas"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Jonas),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_KAYLEY] =
    {
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .trainerName = _("Kayley"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Kayley),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_AURON] =
    {
        .trainerClass = TRAINER_CLASS_EXPERT,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .trainerName = _("Auron"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Auron),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_KELVIN] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("Kelvin"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Kelvin),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_MARLEY] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("Marley"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Marley),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_REYNA] =
    {
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .trainerName = _("Reyna"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Reyna),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_HUDSON] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("Hudson"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Hudson),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_CONOR] =
    {
        .trainerClass = TRAINER_CLASS_EXPERT,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .trainerName = _("Conor"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Conor),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_EDWIN_1] =
    {
        .trainerClass = TRAINER_CLASS_COLLECTOR,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .trainerName = _("Edwin"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Edwin1),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_HECTOR] =
    {
        .trainerClass = TRAINER_CLASS_COLLECTOR,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .trainerName = _("Hector"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Hector),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_TABITHA_MOSSDEEP] =
    {
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN_TABITHA,
        .trainerName = _("Tabitha"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE | AI_FLAG_HP_AWARE | AI_FLAG_SMART_SWITCHING,
        .party = TRAINER_PARTY(sParty_TabithaMossdeep),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_EDWIN_2] =
    {
        .trainerClass = TRAINER_CLASS_COLLECTOR,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .trainerName = _("Edwin"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Edwin2),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_EDWIN_3] =
    {
        .trainerClass = TRAINER_CLASS_COLLECTOR,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .trainerName = _("Edwin"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Edwin3),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_EDWIN_4] =
    {
        .trainerClass = TRAINER_CLASS_COLLECTOR,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .trainerName = _("Edwin"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Edwin4),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_EDWIN_5] =
    {
        .trainerClass = TRAINER_CLASS_COLLECTOR,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .trainerName = _("Edwin"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Edwin5),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_WALLY_VR_1] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_WALLY_CONFIDENT,
        .trainerName = _("Wally"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .mugshotColor = MUGSHOT_COLOR_GREEN,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE | AI_FLAG_HP_AWARE/* | AI_FLAG_ACE_POKEMON*/ | AI_FLAG_SMART_SWITCHING | AI_FLAG_CONSERVATIVE,
        .party = TRAINER_PARTY(sParty_WallyVR1),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_103_MUDKIP] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BRENDAN,
        .trainerName = _("Brendan"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_BrendanRoute103Mudkip),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_110_MUDKIP] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BRENDAN,
        .trainerName = _("Brendan"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_BrendanRoute110Mudkip),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_119_MUDKIP] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BRENDAN,
        .trainerName = _("Brendan"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_BrendanRoute119Mudkip),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_103_TREECKO] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BRENDAN,
        .trainerName = _("Brendan"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_FORCE_SETUP_FIRST_TURN,
        .party = TRAINER_PARTY(sParty_BrendanRoute103Treecko),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_110_TREECKO] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BRENDAN,
        .trainerName = _("Brendan"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_BrendanRoute110Treecko),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_119_TREECKO] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BRENDAN,
        .trainerName = _("Brendan"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_BrendanRoute119Treecko),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_103_TORCHIC] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BRENDAN,
        .trainerName = _("Brendan"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_BrendanRoute103Torchic),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_110_TORCHIC] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BRENDAN,
        .trainerName = _("Brendan"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_BrendanRoute110Torchic),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_119_TORCHIC] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BRENDAN,
        .trainerName = _("Brendan"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_BrendanRoute119Torchic),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_103_MUDKIP] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_MAY,
        .trainerName = _("May"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_MayRoute103Mudkip),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_110_MUDKIP] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_MAY,
        .trainerName = _("May"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_MayRoute110Mudkip),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_119_MUDKIP] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_MAY,
        .trainerName = _("May"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_MayRoute119Mudkip),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_103_TREECKO] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_MAY,
        .trainerName = _("May"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_MayRoute103Treecko),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_110_TREECKO] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_MAY,
        .trainerName = _("May"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_MayRoute110Treecko),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_119_TREECKO] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_MAY,
        .trainerName = _("May"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_MayRoute119Treecko),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_103_TORCHIC] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_MAY,
        .trainerName = _("May"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_MayRoute103Torchic),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_110_TORCHIC] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_MAY,
        .trainerName = _("May"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_MayRoute110Torchic),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_119_TORCHIC] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_MAY,
        .trainerName = _("May"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_MayRoute119Torchic),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_ISAAC_1] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .trainerName = _("Isaac"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Isaac1),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_DAVIS] =
    {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("Davis"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Davis),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_MITCHELL] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("Mitchell"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Mitchell),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_ISAAC_2] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .trainerName = _("Isaac"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Isaac2),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_ISAAC_3] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .trainerName = _("Isaac"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Isaac3),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_ISAAC_4] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .trainerName = _("Isaac"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Isaac4),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_ISAAC_5] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .trainerName = _("Isaac"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Isaac5),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_LYDIA_1] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .trainerName = _("Lydia"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Lydia1),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_HALLE] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("Halle"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Halle),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_GARRISON] =
    {
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .trainerName = _("Garrison"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Garrison),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_LYDIA_2] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .trainerName = _("Lydia"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Lydia2),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_LYDIA_3] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .trainerName = _("Lydia"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Lydia3),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_LYDIA_4] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .trainerName = _("Lydia"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Lydia4),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_LYDIA_5] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .trainerName = _("Lydia"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Lydia5),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_JACKSON_1] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .trainerName = _("Jackson"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Jackson1),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_LORENZO] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .trainerName = _("Lorenzo"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Lorenzo),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_SEBASTIAN] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .trainerName = _("Sebastian"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Sebastian),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_JACKSON_2] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .trainerName = _("Jackson"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_FORCE_SETUP_FIRST_TURN,
        .party = TRAINER_PARTY(sParty_Jackson2),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_JACKSON_3] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .trainerName = _("Jackson"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Jackson3),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_JACKSON_4] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .trainerName = _("Jackson"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_FORCE_SETUP_FIRST_TURN,
        .party = TRAINER_PARTY(sParty_Jackson4),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_JACKSON_5] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .trainerName = _("Jackson"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Jackson5),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_CATHERINE_1] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .trainerName = _("Catherine"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_FORCE_SETUP_FIRST_TURN,
        .party = TRAINER_PARTY(sParty_Catherine1),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_JENNA] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .trainerName = _("Jenna"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_FORCE_SETUP_FIRST_TURN,
        .party = TRAINER_PARTY(sParty_Jenna),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_SOPHIA] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .trainerName = _("Sophia"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Sophia),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_CATHERINE_2] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .trainerName = _("Catherine"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_FORCE_SETUP_FIRST_TURN,
        .party = TRAINER_PARTY(sParty_Catherine2),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_CATHERINE_3] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .trainerName = _("Catherine"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Catherine3),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_CATHERINE_4] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .trainerName = _("Catherine"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_FORCE_SETUP_FIRST_TURN,
        .party = TRAINER_PARTY(sParty_Catherine4),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_CATHERINE_5] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .trainerName = _("Catherine"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Catherine5),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_JULIO] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .trainerName = _("Julio"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Julio),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SEAFLOOR_CAVERN_5] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .trainerName = _("Grunt"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntSeafloorCavern5),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_JOSEF] =
    {
        .trainerClass = TRAINER_CLASS_SKIER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_SKIER_M,
        .trainerName = _("Josef"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Josef),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MT_PYRE_4] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .trainerName = _("Grunt"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntMtPyre4),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_GRUNT_JAGGED_PASS] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("Grunt"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntJaggedPass),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_MARC] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("Marc"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Marc),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_BRENDEN] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("Brenden"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Brenden),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_LILITH] =
    {
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .trainerName = _("Lilith"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Lilith),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_CRISTIAN] =
    {
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("Cristian"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Cristian),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_SYLVIA] =
    {
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .trainerName = _("Sylvia"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Sylvia),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_LEONARDO] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("Leonardo"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Leonardo),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_ATHENA] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("Athena"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Athena),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_HARRISON] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("Harrison"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Harrison),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MT_CHIMNEY_2] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("Grunt"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntMtChimney2),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_CLARENCE] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("Clarence"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Clarence),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_CANDY] =
    {
        .trainerClass = TRAINER_CLASS_SKIER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_SKIER_F,
        .trainerName = _("Candy"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Candy),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_NATE] =
    {
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .trainerName = _("Nate"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Nate),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_KATHLEEN] =
    {
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .trainerName = _("Kathleen"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Kathleen),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_CLIFFORD] =
    {
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .trainerName = _("Clifford"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Clifford),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_NICHOLAS] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .trainerName = _("Nicholas"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Nicholas),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_3] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .trainerName = _("Grunt"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntSpaceCenter3),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_4] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("Grunt"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntSpaceCenter4),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_5] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("Grunt"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntSpaceCenter5),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_6] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("Grunt"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntSpaceCenter6),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_COURTNEY_MOSSDEEP] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN_COURTNEY,
        .trainerName = _("Courtney"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE | AI_FLAG_HP_AWARE/* | AI_FLAG_ACE_POKEMON*/ | AI_FLAG_SMART_SWITCHING,
        .party = TRAINER_PARTY(sParty_CourtneyMossdeep),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_MACEY] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .trainerName = _("Macey"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Macey),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_RUSTBORO_TREECKO] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BRENDAN,
        .trainerName = _("Brendan"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_BrendanRustboroTreecko),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_RUSTBORO_MUDKIP] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BRENDAN,
        .trainerName = _("Brendan"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_BrendanRustboroMudkip),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_PAXTON] =
    {
        .trainerClass = TRAINER_CLASS_EXPERT,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .trainerName = _("Paxton"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Paxton),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_ISABELLA] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .trainerName = _("Isabella"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Isabella),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_GRUNT_WEATHER_INST_5] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .trainerName = _("Grunt"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntWeatherInst5),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_TABITHA_MT_CHIMNEY] =
    {
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN_TABITHA,
        .trainerName = _("Tabitha"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE,
        .party = TRAINER_PARTY(sParty_TabithaMtChimney),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_JONATHAN] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("Jonathan"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_FORCE_SETUP_FIRST_TURN,
        .party = TRAINER_PARTY(sParty_Jonathan),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_RUSTBORO_TORCHIC] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BRENDAN,
        .trainerName = _("Brendan"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_BrendanRustboroTorchic),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_MAY_RUSTBORO_MUDKIP] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_MAY,
        .trainerName = _("May"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_FORCE_SETUP_FIRST_TURN,
        .party = TRAINER_PARTY(sParty_MayRustboroMudkip),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_MAXIE_MAGMA_HIDEOUT] =
    {
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
        .trainerName = _("Maxie"),
        .items = {ITEM_SUPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE | AI_FLAG_HP_AWARE/* | AI_FLAG_ACE_POKEMON*/ | AI_FLAG_SMART_SWITCHING,
        .party = TRAINER_PARTY(sParty_MaxieMagmaHideout),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_MAXIE_MT_CHIMNEY] =
    {
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
        .trainerName = _("Maxie"),
        .items = {ITEM_SUPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE | AI_FLAG_HP_AWARE/* | AI_FLAG_ACE_POKEMON*/,
        .party = TRAINER_PARTY(sParty_MaxieMtChimney),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_TIANA] =
    {
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("Tiana"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Tiana),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_HALEY_1] =
    {
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("Haley"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Haley1),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_JANICE] =
    {
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("Janice"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Janice),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_VIVI] =
    {
        .trainerClass = TRAINER_CLASS_WINSTRATE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("Vivi"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Vivi),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_HALEY_2] =
    {
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("Haley"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Haley2),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_HALEY_3] =
    {
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("Haley"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Haley3),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_HALEY_4] =
    {
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("Haley"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Haley4),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_HALEY_5] =
    {
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("Haley"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Haley5),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_SALLY] =
    {
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("Sally"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Sally),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_ROBIN] =
    {
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("Robin"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Robin),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_ANDREA] =
    {
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("Andrea"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Andrea),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_CRISSY] =
    {
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("Crissy"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Crissy),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_RICK] =
    {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("Rick"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Rick),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_LYLE] =
    {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("Lyle"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Lyle),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_JOSE] =
    {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("Jose"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Jose),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_DOUG] =
    {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("Doug"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Doug),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_GREG] =
    {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("Greg"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Greg),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_KENT] =
    {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("Kent"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Kent),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_JAMES_1] =
    {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("James"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_James1),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_JAMES_2] =
    {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("James"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_James2),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_JAMES_3] =
    {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("James"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_James3),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_JAMES_4] =
    {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("James"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_James4),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_JAMES_5] =
    {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("James"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_James5),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_BRICE] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("Brice"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Brice),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_TRENT_1] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("Trent"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Trent1),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_LENNY] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("Lenny"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Lenny),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_LUCAS_1] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("Lucas"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Lucas1),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_ALAN] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("Alan"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Alan),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_CLARK] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("Clark"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Clark),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_ERIC] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("Eric"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Eric),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_GERARDO] =
    {
        .trainerClass = TRAINER_CLASS_SKIER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_SKIER_M,
        .trainerName = _("Gerardo"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Gerardo),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_AURELIA] =
    {
        .trainerClass = TRAINER_CLASS_SKIER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_SKIER_F,
        .trainerName = _("Aurelia"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Aurelia),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_MIKE_2] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("Mike"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Mike2),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_TRENT_2] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("Trent"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Trent2),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_TRENT_3] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("Trent"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Trent3),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_TRENT_4] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("Trent"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Trent4),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_TRENT_5] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("Trent"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Trent5),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_DEZ_AND_LUKE] =
    {
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .trainerName = _("Dez & Luke"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_DezAndLuke),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_LEA_AND_JED] =
    {
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .trainerName = _("Lea & Jed"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_LeaAndJed),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_KIRA_AND_DAN_1] =
    {
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .trainerName = _("Kira & Dan"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_KiraAndDan1),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_KIRA_AND_DAN_2] =
    {
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .trainerName = _("Kira & Dan"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_KiraAndDan2),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_KIRA_AND_DAN_3] =
    {
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .trainerName = _("Kira & Dan"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_KiraAndDan3),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_KIRA_AND_DAN_4] =
    {
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .trainerName = _("Kira & Dan"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_KiraAndDan4),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_KIRA_AND_DAN_5] =
    {
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .trainerName = _("Kira & Dan"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_KiraAndDan5),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_JOHANNA] =
    {
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("Johanna"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Johanna),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_GERALD] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("Gerald"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Gerald),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_VIVIAN] =
    {
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .trainerName = _("Vivian"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Vivian),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_DANIELLE] =
    {
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .trainerName = _("Danielle"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Danielle),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_HIDEO] =
    {
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .trainerName = _("Hideo"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .party = TRAINER_PARTY(sParty_Hideo),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_KEIGO] =
    {
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .trainerName = _("Keigo"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .party = TRAINER_PARTY(sParty_Keigo),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_RILEY] =
    {
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .trainerName = _("Riley"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .party = TRAINER_PARTY(sParty_Riley),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_FLINT] =
    {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("Flint"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Flint),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_ASHLEY] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("Ashley"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Ashley),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_WALLY_MAUVILLE] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_WALLY,
        .trainerName = _("Wally"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_WallyMauville),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_WALLY_VR_2] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_WALLY_CONFIDENT,
        .trainerName = _("Wally"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .mugshotColor = MUGSHOT_COLOR_GREEN,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_WallyVR2),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_WALLY_VR_3] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_WALLY_CONFIDENT,
        .trainerName = _("Wally"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .mugshotColor = MUGSHOT_COLOR_GREEN,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_WallyVR3),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_WALLY_VR_4] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_WALLY_CONFIDENT,
        .trainerName = _("Wally"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .mugshotColor = MUGSHOT_COLOR_GREEN,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_WallyVR4),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_WALLY_VR_5] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_WALLY_CONFIDENT,
        .trainerName = _("Wally"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .mugshotColor = MUGSHOT_COLOR_GREEN,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_WallyVR5),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_LILYCOVE_MUDKIP] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BRENDAN,
        .trainerName = _("Brendan"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE | AI_FLAG_HP_AWARE | AI_FLAG_SMART_SWITCHING ,
        .party = TRAINER_PARTY(sParty_BrendanLilycoveMudkip),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_LILYCOVE_TREECKO] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BRENDAN,
        .trainerName = _("Brendan"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE | AI_FLAG_HP_AWARE | AI_FLAG_SMART_SWITCHING ,
        .party = TRAINER_PARTY(sParty_BrendanLilycoveTreecko),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_LILYCOVE_TORCHIC] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BRENDAN,
        .trainerName = _("Brendan"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE | AI_FLAG_HP_AWARE | AI_FLAG_SMART_SWITCHING ,
        .party = TRAINER_PARTY(sParty_BrendanLilycoveTorchic),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_MAY_LILYCOVE_MUDKIP] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_MAY,
        .trainerName = _("May"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE | AI_FLAG_HP_AWARE | AI_FLAG_SMART_SWITCHING ,
        .party = TRAINER_PARTY(sParty_MayLilycoveMudkip),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_MAY_LILYCOVE_TREECKO] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_MAY,
        .trainerName = _("May"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE | AI_FLAG_HP_AWARE | AI_FLAG_SMART_SWITCHING ,
        .party = TRAINER_PARTY(sParty_MayLilycoveTreecko),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_MAY_LILYCOVE_TORCHIC] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_MAY,
        .trainerName = _("May"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE | AI_FLAG_HP_AWARE | AI_FLAG_SMART_SWITCHING ,
        .party = TRAINER_PARTY(sParty_MayLilycoveTorchic),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_JONAH] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("Jonah"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Jonah),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_HENRY] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("Henry"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Henry),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_ROGER] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("Roger"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Roger),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_ALEXA] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("Alexa"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Alexa),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_RUBEN] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("Ruben"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Ruben),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_KOJI_1] =
    {
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("Koji"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Koji1),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_WAYNE] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("Wayne"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Wayne),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_AIDAN] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("Aidan"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Aidan),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_REED] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("Reed"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Reed),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_TISHA] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("Tisha"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Tisha),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_TORI_AND_TIA] =
    {
        .trainerClass = TRAINER_CLASS_TWINS,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_TWINS,
        .trainerName = _("Tori & Tia"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_ToriAndTia),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_KIM_AND_IRIS] =
    {
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .trainerName = _("Kim & Iris"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_KimAndIris),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_TYRA_AND_IVY] =
    {
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .trainerName = _("Tyra & Ivy"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_TyraAndIvy),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_MEL_AND_PAUL] =
    {
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .trainerName = _("Mel & Paul"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_MelAndPaul),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_JOHN_AND_JAY_1] =
    {
        .trainerClass = TRAINER_CLASS_OLD_COUPLE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_OLD_COUPLE,
        .trainerName = _("John & Jay"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_JohnAndJay1),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_JOHN_AND_JAY_2] =
    {
        .trainerClass = TRAINER_CLASS_OLD_COUPLE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_OLD_COUPLE,
        .trainerName = _("John & Jay"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_JohnAndJay2),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_JOHN_AND_JAY_3] =
    {
        .trainerClass = TRAINER_CLASS_OLD_COUPLE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_OLD_COUPLE,
        .trainerName = _("John & Jay"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_JohnAndJay3),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_JOHN_AND_JAY_4] =
    {
        .trainerClass = TRAINER_CLASS_OLD_COUPLE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_OLD_COUPLE,
        .trainerName = _("John & Jay"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_FORCE_SETUP_FIRST_TURN,
        .party = TRAINER_PARTY(sParty_JohnAndJay4),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_JOHN_AND_JAY_5] =
    {
        .trainerClass = TRAINER_CLASS_OLD_COUPLE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_OLD_COUPLE,
        .trainerName = _("John & Jay"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_JohnAndJay5),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_RELI_AND_IAN] =
    {
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .trainerName = _("Reli & Ian"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_ReliAndIan),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_LILA_AND_ROY_1] =
    {
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .trainerName = _("Lila & Roy"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_LilaAndRoy1),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_LILA_AND_ROY_2] =
    {
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .trainerName = _("Lila & Roy"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_LilaAndRoy2),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_LILA_AND_ROY_3] =
    {
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .trainerName = _("Lila & Roy"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_LilaAndRoy3),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_LILA_AND_ROY_4] =
    {
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .trainerName = _("Lila & Roy"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_LilaAndRoy4),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_LILA_AND_ROY_5] =
    {
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .trainerName = _("Lila & Roy"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_LilaAndRoy5),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_LISA_AND_RAY] =
    {
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .trainerName = _("Lisa & Ray"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_LisaAndRay),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_CHRIS] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("Chris"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Chris),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_DAWSON] =
    {
        .trainerClass = TRAINER_CLASS_RICH_BOY,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .trainerName = _("Dawson"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Dawson),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_SARAH] =
    {
        .trainerClass = TRAINER_CLASS_LADY,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LADY,
        .trainerName = _("Sarah"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Sarah),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_DARIAN] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("Darian"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Darian),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_HAILEY] =
    {
        .trainerClass = TRAINER_CLASS_TUBER_F,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_TUBER_F,
        .trainerName = _("Hailey"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Hailey),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_CHANDLER] =
    {
        .trainerClass = TRAINER_CLASS_TUBER_M,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_TUBER_M,
        .trainerName = _("Chandler"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Chandler),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_KALEB] =
    {
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .trainerName = _("Kaleb"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Kaleb),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_JOSEPH] =
    {
        .trainerClass = TRAINER_CLASS_GUITARIST,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_GUITARIST,
        .trainerName = _("Joseph"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Joseph),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_ALYSSA] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .trainerName = _("Alyssa"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Alyssa),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_MARCOS] =
    {
        .trainerClass = TRAINER_CLASS_GUITARIST,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_GUITARIST,
        .trainerName = _("Marcos"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Marcos),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_RHETT] =
    {
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("Rhett"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Rhett),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_TYRON] =
    {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("Tyron"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Tyron),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_CELINA] =
    {
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .trainerName = _("Celina"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Celina),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_BIANCA] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("Bianca"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Bianca),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_HAYDEN] =
    {
        .trainerClass = TRAINER_CLASS_KINDLER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_KINDLER,
        .trainerName = _("Hayden"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Hayden),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_SOPHIE] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("Sophie"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Sophie),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_COBY] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("Coby"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Coby),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_LAWRENCE] =
    {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("Lawrence"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Lawrence),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_WYATT] =
    {
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .trainerName = _("Wyatt"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Wyatt),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_ANGELINA] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("Angelina"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Angelina),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_KAI] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("Kai"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Kai),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_CHARLOTTE] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("Charlotte"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Charlotte),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_DEANDRE] =
    {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("Deandre"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Deandre),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_1] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("Grunt"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntMagmaHideout1),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_2] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("Grunt"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntMagmaHideout2),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_3] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("Grunt"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntMagmaHideout3),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_4] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("Grunt"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntMagmaHideout4),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_5] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("Grunt"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntMagmaHideout5),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_6] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("Grunt"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntMagmaHideout6),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_7] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("Grunt"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntMagmaHideout7),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_8] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("Grunt"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntMagmaHideout8),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_9] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("Grunt"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntMagmaHideout9),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_10] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("Grunt"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntMagmaHideout10),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_11] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("Grunt"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntMagmaHideout11),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_12] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("Grunt"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntMagmaHideout12),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_13] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("Grunt"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntMagmaHideout13),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_14] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .trainerName = _("Grunt"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntMagmaHideout14),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_15] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .trainerName = _("Grunt"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntMagmaHideout15),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_16] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .trainerName = _("Grunt"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntMagmaHideout16),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_TABITHA_MAGMA_HIDEOUT] =
    {
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN_TABITHA,
        .trainerName = _("Tabitha"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE | AI_FLAG_HP_AWARE/* | AI_FLAG_ACE_POKEMON*/,
        .party = TRAINER_PARTY(sParty_TabithaMagmaHideout),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_DARCY] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("Darcy"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Darcy),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_MAXIE_MOSSDEEP] =
    {
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
        .trainerName = _("Maxie"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags =  AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE | AI_FLAG_HP_AWARE/* | AI_FLAG_ACE_POKEMON*/ | AI_FLAG_SMART_SWITCHING,
        .party = TRAINER_PARTY(sParty_MaxieMossdeep),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_PETE] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("Pete"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Pete),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_ISABELLE] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("Isabelle"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Isabelle),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_ANDRES_1] =
    {
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .trainerName = _("Andres"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Andres1),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_JOSUE] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("Josue"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Josue),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_CAMRON] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .trainerName = _("Camron"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Camron),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_CORY_1] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("Cory"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Cory1),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_CAROLINA] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("Carolina"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Carolina),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_ELIJAH] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("Elijah"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Elijah),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_CELIA] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("Celia"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Celia),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_BRYAN] =
    {
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .trainerName = _("Bryan"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Bryan),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_BRANDEN] =
    {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("Branden"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Branden),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_BRYANT] =
    {
        .trainerClass = TRAINER_CLASS_KINDLER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_KINDLER,
        .trainerName = _("Bryant"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Bryant),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_SHAYLA] =
    {
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .trainerName = _("Shayla"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Shayla),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_KYRA] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .trainerName = _("Kyra"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Kyra),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_JAIDEN] =
    {
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .trainerName = _("Jaiden"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Jaiden),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_ALIX] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .trainerName = _("Alix"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Alix),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_HELENE] =
    {
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .trainerName = _("Helene"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Helene),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_MARLENE] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .trainerName = _("Marlene"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Marlene),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_DEVAN] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("Devan"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Devan),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_JOHNSON] =
    {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("Johnson"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Johnson),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_MELINA] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .trainerName = _("Melina"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Melina),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_BRANDI] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .trainerName = _("Brandi"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Brandi),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_AISHA] =
    {
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .trainerName = _("Aisha"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Aisha),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_MAKAYLA] =
    {
        .trainerClass = TRAINER_CLASS_EXPERT,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .trainerName = _("Makayla"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Makayla),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_FABIAN] =
    {
        .trainerClass = TRAINER_CLASS_GUITARIST,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_GUITARIST,
        .trainerName = _("Fabian"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Fabian),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_DAYTON] =
    {
        .trainerClass = TRAINER_CLASS_KINDLER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_KINDLER,
        .trainerName = _("Dayton"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Dayton),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_RACHEL] =
    {
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .trainerName = _("Rachel"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Rachel),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_LEONEL] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("Leonel"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Leonel),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_CALLIE] =
    {
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .trainerName = _("Callie"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Callie),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_CALE] =
    {
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .trainerName = _("Cale"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Cale),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_MYLES] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .trainerName = _("Myles"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Myles),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_PAT] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .trainerName = _("Pat"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Pat),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_CRISTIN_1] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("Cristin"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Cristin1),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_MAY_RUSTBORO_TREECKO] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_MAY,
        .trainerName = _("May"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_MayRustboroTreecko),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_MAY_RUSTBORO_TORCHIC] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_MAY,
        .trainerName = _("May"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_MayRustboroTorchic),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_ROXANNE_2] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_ROXANNE,
        .trainerName = _("Roxanne"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Roxanne2),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_ROXANNE_3] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_ROXANNE,
        .trainerName = _("Roxanne"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Roxanne3),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_ROXANNE_4] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_ROXANNE,
        .trainerName = _("Roxanne"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Roxanne4),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_ROXANNE_5] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_ROXANNE,
        .trainerName = _("Roxanne"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Roxanne5),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_BRAWLY_2] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_BRAWLY,
        .trainerName = _("Brawly"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Brawly2),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_BRAWLY_3] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_BRAWLY,
        .trainerName = _("Brawly"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Brawly3),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_BRAWLY_4] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_BRAWLY,
        .trainerName = _("Brawly"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Brawly4),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_BRAWLY_5] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_BRAWLY,
        .trainerName = _("Brawly"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Brawly5),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_WATTSON_2] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_WATTSON,
        .trainerName = _("Wattson"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Wattson2),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_WATTSON_3] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_WATTSON,
        .trainerName = _("Wattson"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Wattson3),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_WATTSON_4] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_WATTSON,
        .trainerName = _("Wattson"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Wattson4),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_WATTSON_5] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_WATTSON,
        .trainerName = _("Wattson"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Wattson5),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_FLANNERY_2] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_FLANNERY,
        .trainerName = _("Flannery"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Flannery2),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_FLANNERY_3] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_FLANNERY,
        .trainerName = _("Flannery"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Flannery3),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_FLANNERY_4] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_FLANNERY,
        .trainerName = _("Flannery"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Flannery4),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_FLANNERY_5] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_FLANNERY,
        .trainerName = _("Flannery"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Flannery5),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_NORMAN_2] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_NORMAN,
        .trainerName = _("Norman"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Norman2),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_NORMAN_3] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_NORMAN,
        .trainerName = _("Norman"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Norman3),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_NORMAN_4] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_NORMAN,
        .trainerName = _("Norman"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Norman4),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_NORMAN_5] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_NORMAN,
        .trainerName = _("Norman"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Norman5),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_WINONA_2] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_WINONA,
        .trainerName = _("Winona"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_RISKY,
        .party = TRAINER_PARTY(sParty_Winona2),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_WINONA_3] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_WINONA,
        .trainerName = _("Winona"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_RISKY,
        .party = TRAINER_PARTY(sParty_Winona3),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_WINONA_4] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_WINONA,
        .trainerName = _("Winona"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_RISKY,
        .party = TRAINER_PARTY(sParty_Winona4),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_WINONA_5] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_WINONA,
        .trainerName = _("Winona"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_RISKY,
        .party = TRAINER_PARTY(sParty_Winona5),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_TATE_AND_LIZA_2] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_TATE_AND_LIZA,
        .trainerName = _("Tate&Liza"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_TateAndLiza2),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_TATE_AND_LIZA_3] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_TATE_AND_LIZA,
        .trainerName = _("Tate&Liza"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_TateAndLiza3),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_TATE_AND_LIZA_4] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_TATE_AND_LIZA,
        .trainerName = _("Tate&Liza"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_TateAndLiza4),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_TATE_AND_LIZA_5] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_TATE_AND_LIZA,
        .trainerName = _("Tate&Liza"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_TateAndLiza5),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_JUAN_2] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_JUAN,
        .trainerName = _("Juan"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Juan2),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_JUAN_3] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_JUAN,
        .trainerName = _("Juan"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Juan3),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_JUAN_4] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_JUAN,
        .trainerName = _("Juan"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Juan4),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_JUAN_5] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_JUAN,
        .trainerName = _("Juan"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Juan5),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_ANGELO] =
    {
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .trainerName = _("Angelo"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Angelo),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_DARIUS] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("Darius"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Darius),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_STEVEN] =
    {
        .trainerClass = TRAINER_CLASS_CHAMPION,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_STEVEN,
        .trainerName = _("Steven"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .mugshotColor = MUGSHOT_COLOR_STEVEN,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE | AI_FLAG_HP_AWARE/* | AI_FLAG_ACE_POKEMON*/ | AI_FLAG_SMART_SWITCHING,
        .party = TRAINER_PARTY(sParty_Steven),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_ANABEL] =
    {
        .trainerClass = TRAINER_CLASS_SALON_MAIDEN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SALON_MAIDEN_ANABEL,
        .trainerName = _("Anabel"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Anabel),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_TUCKER] =
    {
        .trainerClass = TRAINER_CLASS_DOME_ACE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_DOME_ACE_TUCKER,
        .trainerName = _("Tucker"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Tucker),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_SPENSER] =
    {
        .trainerClass = TRAINER_CLASS_PALACE_MAVEN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_PALACE_MAVEN_SPENSER,
        .trainerName = _("Spenser"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Spenser),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_GRETA] =
    {
        .trainerClass = TRAINER_CLASS_ARENA_TYCOON,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_ARENA_TYCOON_GRETA,
        .trainerName = _("Greta"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Greta),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_NOLAND] =
    {
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .trainerName = _("Noland"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Noland),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_LUCY] =
    {
        .trainerClass = TRAINER_CLASS_PIKE_QUEEN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_PIKE_QUEEN_LUCY,
        .trainerName = _("Lucy"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Lucy),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_BRANDON] =
    {
        .trainerClass = TRAINER_CLASS_PYRAMID_KING,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_PYRAMID_KING_BRANDON,
        .trainerName = _("Brandon"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Brandon),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_ANDRES_2] =
    {
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .trainerName = _("Andres"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Andres2),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_ANDRES_3] =
    {
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .trainerName = _("Andres"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Andres3),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_ANDRES_4] =
    {
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .trainerName = _("Andres"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Andres4),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_ANDRES_5] =
    {
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .trainerName = _("Andres"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Andres5),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_CORY_2] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("Cory"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Cory2),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_CORY_3] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("Cory"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Cory3),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_CORY_4] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("Cory"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Cory4),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_CORY_5] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("Cory"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Cory5),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_PABLO_2] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .trainerName = _("Pablo"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Pablo2),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_PABLO_3] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .trainerName = _("Pablo"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Pablo3),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_PABLO_4] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .trainerName = _("Pablo"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Pablo4),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_PABLO_5] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .trainerName = _("Pablo"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Pablo5),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_KOJI_2] =
    {
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("Koji"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Koji2),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_KOJI_3] =
    {
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("Koji"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Koji3),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_KOJI_4] =
    {
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("Koji"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Koji4),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_KOJI_5] =
    {
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("Koji"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Koji5),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_CRISTIN_2] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("Cristin"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Cristin2),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_CRISTIN_3] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("Cristin"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Cristin3),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_CRISTIN_4] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("Cristin"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Cristin4),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_CRISTIN_5] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("Cristin"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Cristin5),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_FERNANDO_2] =
    {
        .trainerClass = TRAINER_CLASS_GUITARIST,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_GUITARIST,
        .trainerName = _("Fernando"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Fernando2),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_FERNANDO_3] =
    {
        .trainerClass = TRAINER_CLASS_GUITARIST,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_GUITARIST,
        .trainerName = _("Fernando"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Fernando3),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_FERNANDO_4] =
    {
        .trainerClass = TRAINER_CLASS_GUITARIST,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_GUITARIST,
        .trainerName = _("Fernando"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Fernando4),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_FERNANDO_5] =
    {
        .trainerClass = TRAINER_CLASS_GUITARIST,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_GUITARIST,
        .trainerName = _("Fernando"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Fernando5),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_SAWYER_2] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("Sawyer"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Sawyer2),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_SAWYER_3] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("Sawyer"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Sawyer3),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_SAWYER_4] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("Sawyer"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Sawyer4),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_SAWYER_5] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("Sawyer"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Sawyer5),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_GABRIELLE_2] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .trainerName = _("Gabrielle"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Gabrielle2),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_GABRIELLE_3] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .trainerName = _("Gabrielle"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Gabrielle3),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_GABRIELLE_4] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .trainerName = _("Gabrielle"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Gabrielle4),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_GABRIELLE_5] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .trainerName = _("Gabrielle"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Gabrielle5),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_THALIA_2] =
    {
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("Thalia"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Thalia2),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_THALIA_3] =
    {
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("Thalia"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Thalia3),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_THALIA_4] =
    {
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("Thalia"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Thalia4),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_THALIA_5] =
    {
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("Thalia"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Thalia5),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_MARIELA] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .trainerName = _("Mariela"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = 0,
        .party = TRAINER_PARTY(sParty_Mariela),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_ALVARO] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .trainerName = _("Alvaro"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = 0,
        .party = TRAINER_PARTY(sParty_Alvaro),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_EVERETT] =
    {
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .trainerName = _("Everett"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = 0,
        .party = TRAINER_PARTY(sParty_Everett),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_RED] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_RED,
        .trainerName = _("Red"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = 0,
        .party = TRAINER_PARTY(sParty_Red),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_LEAF] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEAF,
        .trainerName = _("Leaf"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = 0,
        .party = TRAINER_PARTY(sParty_Leaf),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_PLACEHOLDER] =
    {
        .trainerClass = TRAINER_CLASS_RS_PROTAG,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_RS_BRENDAN,
        .trainerName = _("Brendan"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = 0,
        .party = TRAINER_PARTY(sParty_BrendanLinkPlaceholder),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_MAY_PLACEHOLDER] =
    {
        .trainerClass = TRAINER_CLASS_RS_PROTAG,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_RS_MAY,
        .trainerName = _("May"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = 0,
        .party = TRAINER_PARTY(sParty_MayLinkPlaceholder),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_ROCKET_GRUNT_DEVONCORP_1] =
    {
        .trainerClass = TRAINER_CLASS_ROCKET,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ROCKET_M,
        .trainerName = _("Grunt"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_RocketGruntDevoncorp1),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_ROCKET_GRUNT_DEVONCORP_2] =
    {
        .trainerClass = TRAINER_CLASS_ROCKET,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ROCKET_F,
        .trainerName = _("Grunt"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_RocketGruntDevoncorp2),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_ROCKET_GRUNT_DEVONCORP_3] =
    {
        .trainerClass = TRAINER_CLASS_ROCKET,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ROCKET_M,
        .trainerName = _("Grunt"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_RocketGruntDevoncorp3),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_ROCKET_GRUNT_DEVONCORP_4] =
    {
        .trainerClass = TRAINER_CLASS_ROCKET,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ROCKET_F,
        .trainerName = _("Grunt"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_RocketGruntDevoncorp4),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_ROCKET_GRUNT_DEVONCORP_5] =
    {
        .trainerClass = TRAINER_CLASS_ROCKET,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ROCKET_M,
        .trainerName = _("Grunt"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_RocketGruntDevoncorp5),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_GIOVANNI_DEVONCORP] =
    {
        .trainerClass = TRAINER_CLASS_BOSS,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_GIOVANNI,
        .trainerName = _("Giovanni"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GiovanniDevoncorp),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_MAGMA_GRUNT_F_GRANITE_CAVE] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .trainerName = _("Grunt"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_DOUBLE_BATTLE,
        .party = TRAINER_PARTY(sParty_MagmaGruntFGraniteCave),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_MAGMA_GRUNT_M_GRANITE_CAVE] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("Grunt"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_DOUBLE_BATTLE,
        .party = TRAINER_PARTY(sParty_MagmaGruntMGraniteCave),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_WALLY_PETALBURG] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_WALLY,
        .trainerName = _("Wally"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_HP_AWARE | AI_FLAG_SMART_SWITCHING | AI_FLAG_CONSERVATIVE,
        .party = TRAINER_PARTY(sParty_WallyPetalburg),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_SKY_PILLAR_MUDKIP] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BRENDAN,
        .trainerName = _("Brendan"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE | AI_FLAG_HP_AWARE | AI_FLAG_SMART_SWITCHING ,
        .party = TRAINER_PARTY(sParty_BrendanSkyPillarMudkip),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_SKY_PILLAR_TREECKO] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BRENDAN,
        .trainerName = _("Brendan"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE | AI_FLAG_HP_AWARE | AI_FLAG_SMART_SWITCHING ,
        .party = TRAINER_PARTY(sParty_BrendanSkyPillarTreecko),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_SKY_PILLAR_TORCHIC] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BRENDAN,
        .trainerName = _("Brendan"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE | AI_FLAG_HP_AWARE | AI_FLAG_SMART_SWITCHING ,
        .party = TRAINER_PARTY(sParty_BrendanSkyPillarTorchic),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_MAY_SKY_PILLAR_MUDKIP] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_MAY,
        .trainerName = _("May"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE | AI_FLAG_HP_AWARE | AI_FLAG_SMART_SWITCHING ,
        .party = TRAINER_PARTY(sParty_MaySkyPillarMudkip),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_MAY_SKY_PILLAR_TREECKO] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_MAY,
        .trainerName = _("May"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE | AI_FLAG_HP_AWARE | AI_FLAG_SMART_SWITCHING ,
        .party = TRAINER_PARTY(sParty_MaySkyPillarTreecko),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_MAY_SKY_PILLAR_TORCHIC] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_MAY,
        .trainerName = _("May"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE | AI_FLAG_HP_AWARE | AI_FLAG_SMART_SWITCHING ,
        .party = TRAINER_PARTY(sParty_MaySkyPillarTorchic),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_JAKSON_1] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_JAKSON,
        .trainerName = _("Jakson"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE,
        .party = TRAINER_PARTY(sParty_Jakson1),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_JAKSON_2] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_JAKSON,
        .trainerName = _("Jakson"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE,
        .party = TRAINER_PARTY(sParty_Jakson2),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_JAKSON_3] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_JAKSON,
        .trainerName = _("Jakson"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_Jakson3),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_JAKSON_4] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_JAKSON,
        .trainerName = _("Jakson"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE | AI_FLAG_HP_AWARE | AI_FLAG_SMART_SWITCHING,
        .party = TRAINER_PARTY(sParty_Jakson4),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_JAKSON_5] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_JAKSON,
        .trainerName = _("Jakson"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .mugshotColor = MUGSHOT_COLOR_JAKSON,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE | AI_FLAG_HP_AWARE | AI_FLAG_SMART_SWITCHING/* | AI_FLAG_ACE_POKEMON*/,
        .party = TRAINER_PARTY(sParty_Jakson5),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_HARPER_1] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_HARPER,
        .trainerName = _("Harper"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE,
        .party = TRAINER_PARTY(sParty_Harper1),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_HARPER_2] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_HARPER,
        .trainerName = _("Harper"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE,
        .party = TRAINER_PARTY(sParty_Harper2),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_HARPER_3] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_HARPER,
        .trainerName = _("Harper"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_Harper3),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_HARPER_4] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_HARPER,
        .trainerName = _("Harper"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE | AI_FLAG_HP_AWARE | AI_FLAG_SMART_SWITCHING,
        .party = TRAINER_PARTY(sParty_Harper4),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_HARPER_5] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_HARPER,
        .trainerName = _("Harper"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .mugshotColor = MUGSHOT_COLOR_HARPER,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE | AI_FLAG_HP_AWARE | AI_FLAG_SMART_SWITCHING/* | AI_FLAG_ACE_POKEMON*/,
        .party = TRAINER_PARTY(sParty_Harper5),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_REDD_1] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_REDD,
        .trainerName = _("Redd"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE,
        .party = TRAINER_PARTY(sParty_Redd1),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_REDD_2] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_REDD,
        .trainerName = _("Redd"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE,
        .party = TRAINER_PARTY(sParty_Redd2),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_REDD_3] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_REDD,
        .trainerName = _("Redd"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_Redd3),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_REDD_4] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_REDD,
        .trainerName = _("Redd"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE | AI_FLAG_HP_AWARE | AI_FLAG_SMART_SWITCHING,
        .party = TRAINER_PARTY(sParty_Redd4),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_REDD_5] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_REDD,
        .trainerName = _("Redd"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .mugshotColor = MUGSHOT_COLOR_REDD,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE | AI_FLAG_HP_AWARE | AI_FLAG_SMART_SWITCHING/* | AI_FLAG_ACE_POKEMON*/,
        .party = TRAINER_PARTY(sParty_Redd5),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_SAKURA_1] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_SAKURA,
        .trainerName = _("Sakura"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE,
        .party = TRAINER_PARTY(sParty_Sakura1),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_SAKURA_2] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_SAKURA,
        .trainerName = _("Sakura"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE,
        .party = TRAINER_PARTY(sParty_Sakura2),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_SAKURA_3] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_SAKURA,
        .trainerName = _("Sakura"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_Sakura3),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_SAKURA_4] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_SAKURA,
        .trainerName = _("Sakura"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE | AI_FLAG_HP_AWARE | AI_FLAG_SMART_SWITCHING,
        .party = TRAINER_PARTY(sParty_Sakura4),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_SAKURA_5] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_SAKURA,
        .trainerName = _("Sakura"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .mugshotColor = MUGSHOT_COLOR_SAKURA,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE | AI_FLAG_HP_AWARE | AI_FLAG_SMART_SWITCHING/* | AI_FLAG_ACE_POKEMON*/,
        .party = TRAINER_PARTY(sParty_Sakura5),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_BARON_1] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BARON,
        .trainerName = _("Baron"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE,
        .party = TRAINER_PARTY(sParty_Baron1),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_BARON_2] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BARON,
        .trainerName = _("Baron"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE,
        .party = TRAINER_PARTY(sParty_Baron2),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_BARON_3] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BARON,
        .trainerName = _("Baron"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_Baron3),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_BARON_4] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BARON,
        .trainerName = _("Baron"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE | AI_FLAG_HP_AWARE | AI_FLAG_SMART_SWITCHING,
        .party = TRAINER_PARTY(sParty_Baron4),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_BARON_5] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BARON,
        .trainerName = _("Baron"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .mugshotColor = MUGSHOT_COLOR_BARON,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE | AI_FLAG_HP_AWARE | AI_FLAG_SMART_SWITCHING/* | AI_FLAG_ACE_POKEMON*/,
        .party = TRAINER_PARTY(sParty_Baron5),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_ROCKET_GRUNT_REFUGE_1] =
    {
        .trainerClass = TRAINER_CLASS_ROCKET,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ROCKET_M,
        .trainerName = _("Grunt"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_RocketGruntRefuge1),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_ROCKET_GRUNT_REFUGE_2] =
    {
        .trainerClass = TRAINER_CLASS_ROCKET,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ROCKET_M,
        .trainerName = _("Grunt"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_RocketGruntRefuge2),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_ROCKET_GRUNT_REFUGE_3] =
    {
        .trainerClass = TRAINER_CLASS_ROCKET,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ROCKET_F,
        .trainerName = _("Grunt"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_RocketGruntRefuge3),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_ROCKET_GRUNT_REFUGE_4] =
    {
        .trainerClass = TRAINER_CLASS_ROCKET,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ROCKET_F,
        .trainerName = _("Grunt"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_RocketGruntRefuge4),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_ROCKET_GRUNT_REFUGE_5] =
    {
        .trainerClass = TRAINER_CLASS_ROCKET,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ROCKET_M,
        .trainerName = _("Grunt"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_RocketGruntRefuge5),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_ROCKET_GRUNT_REFUGE_6] =
    {
        .trainerClass = TRAINER_CLASS_ROCKET,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ROCKET_M,
        .trainerName = _("Grunt"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_RocketGruntRefuge6),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_ROCKET_GRUNT_REFUGE_7] =
    {
        .trainerClass = TRAINER_CLASS_ROCKET,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ROCKET_F,
        .trainerName = _("Grunt"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_RocketGruntRefuge7),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_ROCKET_GRUNT_REFUGE_8] =
    {
        .trainerClass = TRAINER_CLASS_ROCKET,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ROCKET_F,
        .trainerName = _("Grunt"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_RocketGruntRefuge8),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_ROCKET_GRUNT_REFUGE_9] =
    {
        .trainerClass = TRAINER_CLASS_ROCKET,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ROCKET_M,
        .trainerName = _("Grunt"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_RocketGruntRefuge9),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_ROCKET_GRUNT_REFUGE_10] =
    {
        .trainerClass = TRAINER_CLASS_ROCKET,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ROCKET_M,
        .trainerName = _("Grunt"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_RocketGruntRefuge10),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_GIOVANNI_REFUGE] =
    {
        .trainerClass = TRAINER_CLASS_BOSS,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_GIOVANNI,
        .trainerName = _("Giovanni"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GiovanniRefuge),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_LEXIE] =
    {
        .trainerClass = TRAINER_CLASS_SKIER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_SKIER_F,
        .trainerName = _("Lexie"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Lexie),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_BJORN] =
    {
        .trainerClass = TRAINER_CLASS_SKIER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_SKIER_M,
        .trainerName = _("Bjorn"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Bjorn),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_SIMULATOR_ROARK] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_ROARK,
        .trainerName = _("Roark"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE | AI_FLAG_HP_AWARE/* | AI_FLAG_ACE_POKEMON*/ | AI_FLAG_SMART_SWITCHING,
        .party = TRAINER_PARTY(sParty_RoarkSimulator),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_SIMULATOR_GARDENIA] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_GARDENIA,
        .trainerName = _("Gardenia"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE | AI_FLAG_HP_AWARE/* | AI_FLAG_ACE_POKEMON*/ | AI_FLAG_SMART_SWITCHING,
        .party = TRAINER_PARTY(sParty_GardeniaSimulator),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_SIMULATOR_MAYLENE] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_MAYLENE,
        .trainerName = _("Maylene"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE | AI_FLAG_HP_AWARE/* | AI_FLAG_ACE_POKEMON*/ | AI_FLAG_SMART_SWITCHING,
        .party = TRAINER_PARTY(sParty_MayleneSimulator),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_SIMULATOR_WAKE] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_WAKE,
        .trainerName = _("Wake"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE | AI_FLAG_HP_AWARE/* | AI_FLAG_ACE_POKEMON*/ | AI_FLAG_SMART_SWITCHING,
        .party = TRAINER_PARTY(sParty_WakeSimulator),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_SIMULATOR_FANTINA] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_FANTINA,
        .trainerName = _("Fantina"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE | AI_FLAG_HP_AWARE/* | AI_FLAG_ACE_POKEMON*/ | AI_FLAG_SMART_SWITCHING,
        .party = TRAINER_PARTY(sParty_FantinaSimulator),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_SIMULATOR_BYRON] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_BYRON,
        .trainerName = _("Byron"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE | AI_FLAG_HP_AWARE/* | AI_FLAG_ACE_POKEMON*/ | AI_FLAG_SMART_SWITCHING,
        .party = TRAINER_PARTY(sParty_ByronSimulator),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_SIMULATOR_CANDICE] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_CANDICE,
        .trainerName = _("Candice"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE | AI_FLAG_HP_AWARE/* | AI_FLAG_ACE_POKEMON*/ | AI_FLAG_SMART_SWITCHING,
        .party = TRAINER_PARTY(sParty_CandiceSimulator),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_SIMULATOR_VOLKNER] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_VOLKNER,
        .trainerName = _("Volkner"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE | AI_FLAG_HP_AWARE/* | AI_FLAG_ACE_POKEMON*/ | AI_FLAG_SMART_SWITCHING,
        .party = TRAINER_PARTY(sParty_VolknerSimulator),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_SIMULATOR_AARON] =
    {
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_ELITE_FOUR_AARON,
        .trainerName = _("Aaron"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE | AI_FLAG_HP_AWARE/* | AI_FLAG_ACE_POKEMON*/ | AI_FLAG_SMART_SWITCHING,
        .party = TRAINER_PARTY(sParty_AaronSimulator),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_SIMULATOR_BERTHA] =
    {
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_ELITE_FOUR_BERTHA,
        .trainerName = _("Bertha"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE | AI_FLAG_HP_AWARE/* | AI_FLAG_ACE_POKEMON*/ | AI_FLAG_SMART_SWITCHING,
        .party = TRAINER_PARTY(sParty_BerthaSimulator),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_SIMULATOR_FLINT] =
    {
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_ELITE_FOUR_FLINT,
        .trainerName = _("Flint"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE | AI_FLAG_HP_AWARE/* | AI_FLAG_ACE_POKEMON*/ | AI_FLAG_SMART_SWITCHING,
        .party = TRAINER_PARTY(sParty_FlintSimulator),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_SIMULATOR_LUCIAN] =
    {
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_ELITE_FOUR_LUCIAN,
        .trainerName = _("Lucian"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE | AI_FLAG_HP_AWARE/* | AI_FLAG_ACE_POKEMON*/ | AI_FLAG_SMART_SWITCHING,
        .party = TRAINER_PARTY(sParty_LucianSimulator),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_SIMULATOR_CYNTHIA] =
    {
        .trainerClass = TRAINER_CLASS_CHAMPION,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_CYNTHIA,
        .trainerName = _("Cynthia"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE | AI_FLAG_HP_AWARE/* | AI_FLAG_ACE_POKEMON*/ | AI_FLAG_SMART_SWITCHING,
        .party = TRAINER_PARTY(sParty_CynthiaSimulator),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_WILD_POKEMON_IG_1] =
    {
        .trainerClass = TRAINER_CLASS_WILD,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_SHADOWED_LUCARIO,
        .trainerName = _("Pokémon"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE,
        .party = TRAINER_PARTY(sParty_WildPokemonIG1),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_WILD_POKEMON_IG_2] =
    {
        .trainerClass = TRAINER_CLASS_WILD,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_SHADOWED_LUCARIO,
        .trainerName = _("Pokémon"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE,
        .party = TRAINER_PARTY(sParty_WildPokemonIG2),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_WILD_POKEMON_IG_3] =
    {
        .trainerClass = TRAINER_CLASS_WILD,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_SHADOWED_LUCARIO,
        .trainerName = _("Pokémon"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE,
        .party = TRAINER_PARTY(sParty_WildPokemonIG3),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_WILD_POKEMON_IG_4] =
    {
        .trainerClass = TRAINER_CLASS_WILD,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_SHADOWED_LUCARIO,
        .trainerName = _("Pokémon"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE,
        .party = TRAINER_PARTY(sParty_WildPokemonIG4),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_LEO] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_M,
        .trainerName = _("Leo"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE,
        .party = TRAINER_PARTY(sParty_Leo),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_ERYK] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("Eryk"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE,
        .party = TRAINER_PARTY(sParty_Eryk),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_SELINA] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("Selina"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE,
        .party = TRAINER_PARTY(sParty_Selina),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_CODY] =
    {
        .trainerClass = TRAINER_CLASS_KINDLER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_KINDLER,
        .trainerName = _("Cody"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE,
        .party = TRAINER_PARTY(sParty_Cody),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_DARREN] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("Darren"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE,
        .party = TRAINER_PARTY(sParty_Darren),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_JAKOB] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("Jakob"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE,
        .party = TRAINER_PARTY(sParty_Jakob),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_MILO] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("Milo"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE,
        .party = TRAINER_PARTY(sParty_Milo),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_MIRA] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("Mira"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE,
        .party = TRAINER_PARTY(sParty_Mira),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_DELLA] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("Della"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE,
        .party = TRAINER_PARTY(sParty_Della),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_DARIO] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("Dario"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE,
        .party = TRAINER_PARTY(sParty_Dario),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_GRUNT_BLANCHED_DEPTHS_1] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .trainerName = _("Grunt"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE,
        .party = TRAINER_PARTY(sParty_GruntBlanchedDepths1),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_GRUNT_BLANCHED_DEPTHS_2] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .trainerName = _(""),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE,
        .party = TRAINER_PARTY(sParty_GruntBlanchedDepths2),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_GRUNT_BLANCHED_DEPTHS_3] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .trainerName = _(""),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE,
        .party = TRAINER_PARTY(sParty_GruntBlanchedDepths3),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_GRUNT_BLANCHED_DEPTHS_4] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .trainerName = _(""),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE,
        .party = TRAINER_PARTY(sParty_GruntBlanchedDepths4),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_GRUNT_BLANCHED_DEPTHS_5] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .trainerName = _(""),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE,
        .party = TRAINER_PARTY(sParty_GruntBlanchedDepths5),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_GRUNT_BLANCHED_DEPTHS_6] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .trainerName = _(""),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE,
        .party = TRAINER_PARTY(sParty_GruntBlanchedDepths6),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_MATT_BLANCHED_DEPTHS] =
    {
        .trainerClass = TRAINER_CLASS_AQUA_ADMIN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_ADMIN_MATT,
        .trainerName = _("Matt"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE | AI_FLAG_HP_AWARE | AI_FLAG_SMART_SWITCHING,
        .party = TRAINER_PARTY(sParty_MattBlanchedDepths),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_MAX] =
    {
        .trainerClass = TRAINER_CLASS_COLLECTOR,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .trainerName = _("Max"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE,
        .party = TRAINER_PARTY(sParty_Max),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_WILLOW] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .trainerName = _("Willow"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE,
        .party = TRAINER_PARTY(sParty_Willow),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_VANCE] =
    {
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .trainerName = _("Vance"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE,
        .party = TRAINER_PARTY(sParty_Vance),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_AVELINE] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .trainerName = _("Aveline"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE,
        .party = TRAINER_PARTY(sParty_Aveline),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SUBMERGED_CAVE] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .trainerName = _("Grunt"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE,
        .party = TRAINER_PARTY(sParty_GruntSubmergedCave),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_ZADEN] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("Zaden"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE,
        .party = TRAINER_PARTY(sParty_Zaden),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_CORVIN] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("Corvin"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE,
        .party = TRAINER_PARTY(sParty_Corvin),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_SABLE] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("Sable"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE,
        .party = TRAINER_PARTY(sParty_Sable),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_RENZO] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("Renzo"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE,
        .party = TRAINER_PARTY(sParty_Renzo),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_THEO] =
    {
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .trainerName = _("Theo"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE,
        .party = TRAINER_PARTY(sParty_Theo),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_GAVIN] =
    {
        .trainerClass = TRAINER_CLASS_RICH_BOY,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .trainerName = _("Gavin"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE,
        .party = TRAINER_PARTY(sParty_Gavin),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_FINN] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("Finn"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE,
        .party = TRAINER_PARTY(sParty_Finn),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_BRIAN] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("Brian"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE,
        .party = TRAINER_PARTY(sParty_Brian),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_OTIS] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("Otis"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE,
        .party = TRAINER_PARTY(sParty_Otis),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_LARS] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("Lars"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE,
        .party = TRAINER_PARTY(sParty_Lars),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_KEELA] =
    {
        .trainerClass = TRAINER_CLASS_TUBER_F,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_TUBER_F,
        .trainerName = _("Keela"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE,
        .party = TRAINER_PARTY(sParty_Keela),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_GORDON] =
    {
        .trainerClass = TRAINER_CLASS_TUBER_M,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_TUBER_M,
        .trainerName = _("Gordon"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE,
        .party = TRAINER_PARTY(sParty_Gordon),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_VERNON] =
    {
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .trainerName = _("Vernon"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE,
        .party = TRAINER_PARTY(sParty_Vernon),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_HUMPHREY] =
    {
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .trainerName = _("Humphrey"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE,
        .party = TRAINER_PARTY(sParty_Humphrey),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_FRED] =
    {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("Fred"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE,
        .party = TRAINER_PARTY(sParty_Fred),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_DIO] =
    {
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .trainerName = _("Dio"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE,
        .party = TRAINER_PARTY(sParty_Dio),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_SERAPHINA] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("Seraphina"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE,
        .party = TRAINER_PARTY(sParty_Seraphina),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_ELARA] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("Elara"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE,
        .party = TRAINER_PARTY(sParty_Elara),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_JON] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("Jon"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE,
        .party = TRAINER_PARTY(sParty_Jon),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_ELMER] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("Elmer"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE,
        .party = TRAINER_PARTY(sParty_Elmer),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_DEWEY] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("Dewey"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE,
        .party = TRAINER_PARTY(sParty_Dewey),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_HAROLD] =
    {
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .trainerName = _("Harold"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE,
        .party = TRAINER_PARTY(sParty_Harold),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_AURORA] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("Aurora"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE,
        .party = TRAINER_PARTY(sParty_Aurora),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_TOBY] =
    {
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .trainerName = _("Toby"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE,
        .party = TRAINER_PARTY(sParty_Toby),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_MARVIN] =
    {
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .trainerName = _("Marvin"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE,
        .party = TRAINER_PARTY(sParty_Marvin),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_LUTHOR] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("Luthor"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE,
        .party = TRAINER_PARTY(sParty_Luthor),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_ZED] =
    {
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .trainerName = _("Zed"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE,
        .party = TRAINER_PARTY(sParty_Zed),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_TESSA] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("Tessa"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE,
        .party = TRAINER_PARTY(sParty_Tessa),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_LEX] =
    {
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .trainerName = _("Lex"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE,
        .party = TRAINER_PARTY(sParty_Lex),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_WILD_POKEMON_BV_1] =
    {
        .trainerClass = TRAINER_CLASS_WILD,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_SHADOWED_LUCARIO,
        .trainerName = _("Pokémon"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE,
        .party = TRAINER_PARTY(sParty_WildPokemonBV1),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_WILD_POKEMON_BV_2] =
    {
        .trainerClass = TRAINER_CLASS_WILD,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_SHADOWED_LUCARIO,
        .trainerName = _("Pokémon"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE,
        .party = TRAINER_PARTY(sParty_WildPokemonBV2),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },

    [DIFFICULTY_NORMAL][TRAINER_STEVEN_EXP_1] =
    {
        .trainerClass = TRAINER_CLASS_CHAMPION,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_STEVEN,
        .trainerName = _("Steven"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE,
        .party = TRAINER_PARTY(sParty_CynthiaSimulator),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },
/*

    [DIFFICULTY_NORMAL][TRAINER_] =
    {
        .trainerClass = TRAINER_CLASS_,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_,
        .trainerPic = TRAINER_PIC_,
        .trainerName = _(""),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_DOUBLE_BATTLE,
        .party = TRAINER_PARTY(sParty_CynthiaSimulator),
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
    },
*/
