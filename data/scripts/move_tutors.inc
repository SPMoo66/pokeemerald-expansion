SlateportCity_PokemonFanClub_EventScript_SwaggerTutor::
# 2 "data/scripts/move_tutors.pory"
	lock
# 3 "data/scripts/move_tutors.pory"
	faceplayer
# 4 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_SwaggerTeach, MSGBOX_YESNO
# 5 "data/scripts/move_tutors.pory"
	compare VAR_RESULT, NO
	goto_if_eq SlateportCity_PokemonFanClub_EventScript_SwaggerTutor_2
SlateportCity_PokemonFanClub_EventScript_SwaggerTutor_1:
# 8 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_SwaggerWhichMon, MSGBOX_DEFAULT
# 9 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_SWAGGER
# 10 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 11 "data/scripts/move_tutors.pory"
	compare VAR_RESULT, NO
	goto_if_eq SlateportCity_PokemonFanClub_EventScript_SwaggerTutor_5
SlateportCity_PokemonFanClub_EventScript_SwaggerTutor_4:
# 14 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_SwaggerTaught, MSGBOX_DEFAULT
# 15 "data/scripts/move_tutors.pory"
	release
	return

SlateportCity_PokemonFanClub_EventScript_SwaggerTutor_2:
# 6 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_SwaggerDeclined
	goto SlateportCity_PokemonFanClub_EventScript_SwaggerTutor_1

SlateportCity_PokemonFanClub_EventScript_SwaggerTutor_5:
# 12 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_SwaggerDeclined
	goto SlateportCity_PokemonFanClub_EventScript_SwaggerTutor_4


MoveTutor_EventScript_SwaggerDeclined::
# 19 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_SwaggerDeclined, MSGBOX_DEFAULT
# 20 "data/scripts/move_tutors.pory"
	release
	return


MauvilleCity_EventScript_TricksTutor::
# 25 "data/scripts/move_tutors.pory"
	lock
# 26 "data/scripts/move_tutors.pory"
	faceplayer
# 27 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_TricksTeach, MSGBOX_YESNO
# 28 "data/scripts/move_tutors.pory"
	compare VAR_RESULT, NO
	goto_if_eq MauvilleCity_EventScript_TricksTutor_2
MauvilleCity_EventScript_TricksTutor_1:
# 31 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_WhichMoveToTeach, MSGBOX_DEFAULT
# 32 "data/scripts/move_tutors.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, MauvilleCity_EventScript_TricksTutor_Text_0, MauvilleCity_EventScript_TricksTutor_Text_1
# 33 "data/scripts/move_tutors.pory"
	switch VAR_RESULT
# 34 "data/scripts/move_tutors.pory"
	case 0, MauvilleCity_EventScript_TricksTutor_6
# 36 "data/scripts/move_tutors.pory"
	case 1, MauvilleCity_EventScript_TricksTutor_7
# 38 "data/scripts/move_tutors.pory"
	case 127, MauvilleCity_EventScript_TricksTutor_8
MauvilleCity_EventScript_TricksTutor_4:
# 41 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_TricksWhichMon, MSGBOX_DEFAULT
# 42 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 43 "data/scripts/move_tutors.pory"
	compare VAR_RESULT, NO
	goto_if_eq MauvilleCity_EventScript_TricksTutor_10
MauvilleCity_EventScript_TricksTutor_9:
# 46 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_TricksTaught, MSGBOX_DEFAULT
# 47 "data/scripts/move_tutors.pory"
	release
	return

MauvilleCity_EventScript_TricksTutor_2:
# 29 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_TricksDeclined
	goto MauvilleCity_EventScript_TricksTutor_1

MauvilleCity_EventScript_TricksTutor_6:
# 35 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_TRICK
	goto MauvilleCity_EventScript_TricksTutor_4

MauvilleCity_EventScript_TricksTutor_7:
# 37 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_SWITCHEROO
	goto MauvilleCity_EventScript_TricksTutor_4

MauvilleCity_EventScript_TricksTutor_8:
# 39 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_TricksDeclined
	goto MauvilleCity_EventScript_TricksTutor_4

MauvilleCity_EventScript_TricksTutor_10:
# 44 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_TricksDeclined
	goto MauvilleCity_EventScript_TricksTutor_9


MoveTutor_EventScript_TricksDeclined::
# 51 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_TricksDeclined, MSGBOX_DEFAULT
# 52 "data/scripts/move_tutors.pory"
	release
	return


VerdanturfTown_PokemonCenter_1F_EventScript_IcyWindTutor::
# 57 "data/scripts/move_tutors.pory"
	lock
# 58 "data/scripts/move_tutors.pory"
	faceplayer
# 59 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_IcyWindTeach, MSGBOX_YESNO
# 60 "data/scripts/move_tutors.pory"
	compare VAR_RESULT, NO
	goto_if_eq VerdanturfTown_PokemonCenter_1F_EventScript_IcyWindTutor_2
VerdanturfTown_PokemonCenter_1F_EventScript_IcyWindTutor_1:
# 63 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_IcyWindWhichMon, MSGBOX_DEFAULT
# 64 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_ICY_WIND
# 65 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 66 "data/scripts/move_tutors.pory"
	compare VAR_RESULT, NO
	goto_if_eq VerdanturfTown_PokemonCenter_1F_EventScript_IcyWindTutor_5
VerdanturfTown_PokemonCenter_1F_EventScript_IcyWindTutor_4:
# 69 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_IcyWindTaught, MSGBOX_DEFAULT
# 70 "data/scripts/move_tutors.pory"
	release
	return

VerdanturfTown_PokemonCenter_1F_EventScript_IcyWindTutor_2:
# 61 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_IcyWindDeclined
	goto VerdanturfTown_PokemonCenter_1F_EventScript_IcyWindTutor_1

VerdanturfTown_PokemonCenter_1F_EventScript_IcyWindTutor_5:
# 67 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_IcyWindDeclined
	goto VerdanturfTown_PokemonCenter_1F_EventScript_IcyWindTutor_4


MoveTutor_EventScript_IcyWindDeclined::
# 74 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_IcyWindDeclined, MSGBOX_DEFAULT
# 75 "data/scripts/move_tutors.pory"
	release
	return


FallarborTown_Mart_EventScript_SignalBeamTutor::
# 80 "data/scripts/move_tutors.pory"
	lock
# 81 "data/scripts/move_tutors.pory"
	faceplayer
# 82 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_SignalBeamTeach, MSGBOX_YESNO
# 83 "data/scripts/move_tutors.pory"
	compare VAR_RESULT, NO
	goto_if_eq FallarborTown_Mart_EventScript_SignalBeamTutor_2
FallarborTown_Mart_EventScript_SignalBeamTutor_1:
# 86 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_SignalBeamWhichMon, MSGBOX_DEFAULT
# 87 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_SIGNAL_BEAM
# 88 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 89 "data/scripts/move_tutors.pory"
	compare VAR_RESULT, NO
	goto_if_eq FallarborTown_Mart_EventScript_SignalBeamTutor_5
FallarborTown_Mart_EventScript_SignalBeamTutor_4:
# 92 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_SignalBeamTaught, MSGBOX_DEFAULT
# 93 "data/scripts/move_tutors.pory"
	release
	return

FallarborTown_Mart_EventScript_SignalBeamTutor_2:
# 84 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_SignalBeamDeclined
	goto FallarborTown_Mart_EventScript_SignalBeamTutor_1

FallarborTown_Mart_EventScript_SignalBeamTutor_5:
# 90 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_SignalBeamDeclined
	goto FallarborTown_Mart_EventScript_SignalBeamTutor_4


MoveTutor_EventScript_SignalBeamDeclined::
# 97 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_SignalBeamDeclined, MSGBOX_DEFAULT
# 98 "data/scripts/move_tutors.pory"
	release
	return


LavaridgeTown_House_EventScript_SleepTalkTutor::
# 103 "data/scripts/move_tutors.pory"
	lock
# 104 "data/scripts/move_tutors.pory"
	faceplayer
# 105 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_SleepTalkTeach, MSGBOX_YESNO
# 106 "data/scripts/move_tutors.pory"
	compare VAR_RESULT, NO
	goto_if_eq LavaridgeTown_House_EventScript_SleepTalkTutor_2
LavaridgeTown_House_EventScript_SleepTalkTutor_1:
# 109 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_SleepTalkWhichMon, MSGBOX_DEFAULT
# 110 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_SLEEP_TALK
# 111 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 112 "data/scripts/move_tutors.pory"
	compare VAR_RESULT, NO
	goto_if_eq LavaridgeTown_House_EventScript_SleepTalkTutor_5
LavaridgeTown_House_EventScript_SleepTalkTutor_4:
# 115 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_SleepTalkTaught, MSGBOX_DEFAULT
# 116 "data/scripts/move_tutors.pory"
	release
	return

LavaridgeTown_House_EventScript_SleepTalkTutor_2:
# 107 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_SleepTalkDeclined
	goto LavaridgeTown_House_EventScript_SleepTalkTutor_1

LavaridgeTown_House_EventScript_SleepTalkTutor_5:
# 113 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_SleepTalkDeclined
	goto LavaridgeTown_House_EventScript_SleepTalkTutor_4


MoveTutor_EventScript_SleepTalkDeclined::
# 120 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_SleepTalkDeclined, MSGBOX_DEFAULT
# 121 "data/scripts/move_tutors.pory"
	release
	return


FortreeCity_House2_EventScript_BodySlamTutor::
# 126 "data/scripts/move_tutors.pory"
	lock
# 127 "data/scripts/move_tutors.pory"
	faceplayer
# 128 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_BodySlamTeach, MSGBOX_YESNO
# 129 "data/scripts/move_tutors.pory"
	compare VAR_RESULT, NO
	goto_if_eq FortreeCity_House2_EventScript_BodySlamTutor_2
FortreeCity_House2_EventScript_BodySlamTutor_1:
# 132 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_BodySlamWhichMon, MSGBOX_DEFAULT
# 133 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_SLEEP_TALK
# 134 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 135 "data/scripts/move_tutors.pory"
	compare VAR_RESULT, NO
	goto_if_eq FortreeCity_House2_EventScript_BodySlamTutor_5
FortreeCity_House2_EventScript_BodySlamTutor_4:
# 138 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_BodySlamTaught, MSGBOX_DEFAULT
# 139 "data/scripts/move_tutors.pory"
	release
	return

FortreeCity_House2_EventScript_BodySlamTutor_2:
# 130 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_BodySlamDeclined
	goto FortreeCity_House2_EventScript_BodySlamTutor_1

FortreeCity_House2_EventScript_BodySlamTutor_5:
# 136 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_BodySlamDeclined
	goto FortreeCity_House2_EventScript_BodySlamTutor_4


MoveTutor_EventScript_BodySlamDeclined::
# 143 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_BodySlamDeclined, MSGBOX_DEFAULT
# 144 "data/scripts/move_tutors.pory"
	release
	return


LilycoveCity_DepartmentStoreRooftop_EventScript_HyperVoiceTutor::
# 149 "data/scripts/move_tutors.pory"
	lock
# 150 "data/scripts/move_tutors.pory"
	faceplayer
# 151 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_HyperVoiceTeach, MSGBOX_YESNO
# 152 "data/scripts/move_tutors.pory"
	compare VAR_RESULT, NO
	goto_if_eq LilycoveCity_DepartmentStoreRooftop_EventScript_HyperVoiceTutor_2
LilycoveCity_DepartmentStoreRooftop_EventScript_HyperVoiceTutor_1:
# 155 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_HyperVoiceWhichMon, MSGBOX_DEFAULT
# 156 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_HYPER_VOICE
# 157 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 158 "data/scripts/move_tutors.pory"
	compare VAR_RESULT, NO
	goto_if_eq LilycoveCity_DepartmentStoreRooftop_EventScript_HyperVoiceTutor_5
LilycoveCity_DepartmentStoreRooftop_EventScript_HyperVoiceTutor_4:
# 161 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_HyperVoiceTaught, MSGBOX_DEFAULT
# 162 "data/scripts/move_tutors.pory"
	release
	return

LilycoveCity_DepartmentStoreRooftop_EventScript_HyperVoiceTutor_2:
# 153 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_HyperVoiceDeclined
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_HyperVoiceTutor_1

LilycoveCity_DepartmentStoreRooftop_EventScript_HyperVoiceTutor_5:
# 159 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_HyperVoiceDeclined
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_HyperVoiceTutor_4


MoveTutor_EventScript_HyperVoiceDeclined::
# 166 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_HyperVoiceDeclined, MSGBOX_DEFAULT
# 167 "data/scripts/move_tutors.pory"
	release
	return


LilycoveCity_EventScript_CombatMoveTutor::
# 172 "data/scripts/move_tutors.pory"
	lock
# 173 "data/scripts/move_tutors.pory"
	faceplayer
# 174 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_CombatMoveTeach, MSGBOX_YESNO
# 175 "data/scripts/move_tutors.pory"
	compare VAR_RESULT, NO
	goto_if_eq LilycoveCity_EventScript_CombatMoveTutor_2
LilycoveCity_EventScript_CombatMoveTutor_1:
# 178 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_WhichMoveToTeach, MSGBOX_DEFAULT
# 179 "data/scripts/move_tutors.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, LilycoveCity_EventScript_CombatMoveTutor_Text_0, LilycoveCity_EventScript_CombatMoveTutor_Text_1, LilycoveCity_EventScript_CombatMoveTutor_Text_2, LilycoveCity_EventScript_CombatMoveTutor_Text_3, LilycoveCity_EventScript_CombatMoveTutor_Text_4, LilycoveCity_EventScript_CombatMoveTutor_Text_5
# 180 "data/scripts/move_tutors.pory"
	switch VAR_RESULT
# 181 "data/scripts/move_tutors.pory"
	case 0, LilycoveCity_EventScript_CombatMoveTutor_6
# 183 "data/scripts/move_tutors.pory"
	case 1, LilycoveCity_EventScript_CombatMoveTutor_7
# 185 "data/scripts/move_tutors.pory"
	case 2, LilycoveCity_EventScript_CombatMoveTutor_8
# 187 "data/scripts/move_tutors.pory"
	case 3, LilycoveCity_EventScript_CombatMoveTutor_9
# 189 "data/scripts/move_tutors.pory"
	case 4, LilycoveCity_EventScript_CombatMoveTutor_10
# 191 "data/scripts/move_tutors.pory"
	case 5, LilycoveCity_EventScript_CombatMoveTutor_11
# 193 "data/scripts/move_tutors.pory"
	case 127, LilycoveCity_EventScript_CombatMoveTutor_12
LilycoveCity_EventScript_CombatMoveTutor_4:
# 196 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_CombatMoveWhichMon, MSGBOX_DEFAULT
# 197 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 198 "data/scripts/move_tutors.pory"
	compare VAR_RESULT, NO
	goto_if_eq LilycoveCity_EventScript_CombatMoveTutor_14
LilycoveCity_EventScript_CombatMoveTutor_13:
# 201 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_CombatMoveTaught, MSGBOX_DEFAULT
# 202 "data/scripts/move_tutors.pory"
	release
	return

LilycoveCity_EventScript_CombatMoveTutor_2:
# 176 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_CombatMoveDeclined
	goto LilycoveCity_EventScript_CombatMoveTutor_1

LilycoveCity_EventScript_CombatMoveTutor_6:
# 182 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_ICE_PUNCH
	goto LilycoveCity_EventScript_CombatMoveTutor_4

LilycoveCity_EventScript_CombatMoveTutor_7:
# 184 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_THUNDER_PUNCH
	goto LilycoveCity_EventScript_CombatMoveTutor_4

LilycoveCity_EventScript_CombatMoveTutor_8:
# 186 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_FIRE_PUNCH
	goto LilycoveCity_EventScript_CombatMoveTutor_4

LilycoveCity_EventScript_CombatMoveTutor_9:
# 188 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_MEGA_PUNCH
	goto LilycoveCity_EventScript_CombatMoveTutor_4

LilycoveCity_EventScript_CombatMoveTutor_10:
# 190 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_MEGA_KICK
	goto LilycoveCity_EventScript_CombatMoveTutor_4

LilycoveCity_EventScript_CombatMoveTutor_11:
# 192 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_ROCK_SLIDE
	goto LilycoveCity_EventScript_CombatMoveTutor_4

LilycoveCity_EventScript_CombatMoveTutor_12:
# 194 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_CombatMoveDeclined
	goto LilycoveCity_EventScript_CombatMoveTutor_4

LilycoveCity_EventScript_CombatMoveTutor_14:
# 199 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_CombatMoveDeclined
	goto LilycoveCity_EventScript_CombatMoveTutor_13


MoveTutor_EventScript_CombatMoveDeclined::
# 206 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_CombatMoveDeclined, MSGBOX_DEFAULT
# 207 "data/scripts/move_tutors.pory"
	release
	return


MossdeepCity_EventScript_PledgeMoveTutor::
# 212 "data/scripts/move_tutors.pory"
	lock
# 213 "data/scripts/move_tutors.pory"
	faceplayer
# 214 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_PledgeMoveTeach, MSGBOX_YESNO
# 215 "data/scripts/move_tutors.pory"
	compare VAR_RESULT, NO
	goto_if_eq MossdeepCity_EventScript_PledgeMoveTutor_2
MossdeepCity_EventScript_PledgeMoveTutor_1:
# 218 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_WhichMoveToTeach, MSGBOX_DEFAULT
# 219 "data/scripts/move_tutors.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, MossdeepCity_EventScript_PledgeMoveTutor_Text_0, MossdeepCity_EventScript_PledgeMoveTutor_Text_1, MossdeepCity_EventScript_PledgeMoveTutor_Text_2
# 220 "data/scripts/move_tutors.pory"
	switch VAR_RESULT
# 221 "data/scripts/move_tutors.pory"
	case 0, MossdeepCity_EventScript_PledgeMoveTutor_6
# 223 "data/scripts/move_tutors.pory"
	case 1, MossdeepCity_EventScript_PledgeMoveTutor_7
# 225 "data/scripts/move_tutors.pory"
	case 2, MossdeepCity_EventScript_PledgeMoveTutor_8
# 227 "data/scripts/move_tutors.pory"
	case 127, MossdeepCity_EventScript_PledgeMoveTutor_9
MossdeepCity_EventScript_PledgeMoveTutor_4:
# 230 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_PledgeMoveWhichMon, MSGBOX_DEFAULT
# 231 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 232 "data/scripts/move_tutors.pory"
	compare VAR_RESULT, NO
	goto_if_eq MossdeepCity_EventScript_PledgeMoveTutor_11
MossdeepCity_EventScript_PledgeMoveTutor_10:
# 235 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_PledgeMoveTaught, MSGBOX_DEFAULT
# 236 "data/scripts/move_tutors.pory"
	release
	return

MossdeepCity_EventScript_PledgeMoveTutor_2:
# 216 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_PledgeMoveDeclined
	goto MossdeepCity_EventScript_PledgeMoveTutor_1

MossdeepCity_EventScript_PledgeMoveTutor_6:
# 222 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_GRASS_PLEDGE
	goto MossdeepCity_EventScript_PledgeMoveTutor_4

MossdeepCity_EventScript_PledgeMoveTutor_7:
# 224 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_FIRE_PLEDGE
	goto MossdeepCity_EventScript_PledgeMoveTutor_4

MossdeepCity_EventScript_PledgeMoveTutor_8:
# 226 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_WATER_PLEDGE
	goto MossdeepCity_EventScript_PledgeMoveTutor_4

MossdeepCity_EventScript_PledgeMoveTutor_9:
# 228 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_PledgeMoveDeclined
	goto MossdeepCity_EventScript_PledgeMoveTutor_4

MossdeepCity_EventScript_PledgeMoveTutor_11:
# 233 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_PledgeMoveDeclined
	goto MossdeepCity_EventScript_PledgeMoveTutor_10


MoveTutor_EventScript_PledgeMoveDeclined::
# 240 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_PledgeMoveDeclined, MSGBOX_DEFAULT
# 241 "data/scripts/move_tutors.pory"
	release
	return


SootopolisCity_PokemonCenter_1F_EventScript_DynamicPunchTutor::
# 246 "data/scripts/move_tutors.pory"
	lock
# 247 "data/scripts/move_tutors.pory"
	faceplayer
# 248 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_DynamicPunchTeach, MSGBOX_YESNO
# 249 "data/scripts/move_tutors.pory"
	compare VAR_RESULT, NO
	goto_if_eq SootopolisCity_PokemonCenter_1F_EventScript_DynamicPunchTutor_2
SootopolisCity_PokemonCenter_1F_EventScript_DynamicPunchTutor_1:
# 252 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_DynamicPunchWhichMon, MSGBOX_DEFAULT
# 253 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_DYNAMIC_PUNCH
# 254 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 255 "data/scripts/move_tutors.pory"
	compare VAR_RESULT, NO
	goto_if_eq SootopolisCity_PokemonCenter_1F_EventScript_DynamicPunchTutor_5
SootopolisCity_PokemonCenter_1F_EventScript_DynamicPunchTutor_4:
# 258 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_DynamicPunchTaught, MSGBOX_DEFAULT
# 259 "data/scripts/move_tutors.pory"
	release
	return

SootopolisCity_PokemonCenter_1F_EventScript_DynamicPunchTutor_2:
# 250 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_DynamicPunchDeclined
	goto SootopolisCity_PokemonCenter_1F_EventScript_DynamicPunchTutor_1

SootopolisCity_PokemonCenter_1F_EventScript_DynamicPunchTutor_5:
# 256 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_DynamicPunchDeclined
	goto SootopolisCity_PokemonCenter_1F_EventScript_DynamicPunchTutor_4


MoveTutor_EventScript_DynamicPunchDeclined::
# 263 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_DynamicPunchDeclined, MSGBOX_DEFAULT
# 264 "data/scripts/move_tutors.pory"
	release
	return


PacifidlogTown_PokemonCenter_1F_EventScript_RecoilMoveTutor::
# 269 "data/scripts/move_tutors.pory"
	lock
# 270 "data/scripts/move_tutors.pory"
	faceplayer
# 271 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_RecoilMoveTeach, MSGBOX_YESNO
# 272 "data/scripts/move_tutors.pory"
	compare VAR_RESULT, NO
	goto_if_eq PacifidlogTown_PokemonCenter_1F_EventScript_RecoilMoveTutor_2
PacifidlogTown_PokemonCenter_1F_EventScript_RecoilMoveTutor_1:
# 275 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_WhichMoveToTeach, MSGBOX_DEFAULT
# 276 "data/scripts/move_tutors.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, PacifidlogTown_PokemonCenter_1F_EventScript_RecoilMoveTutor_Text_0, PacifidlogTown_PokemonCenter_1F_EventScript_RecoilMoveTutor_Text_1, PacifidlogTown_PokemonCenter_1F_EventScript_RecoilMoveTutor_Text_2, PacifidlogTown_PokemonCenter_1F_EventScript_RecoilMoveTutor_Text_3, PacifidlogTown_PokemonCenter_1F_EventScript_RecoilMoveTutor_Text_4, PacifidlogTown_PokemonCenter_1F_EventScript_RecoilMoveTutor_Text_5
# 277 "data/scripts/move_tutors.pory"
	switch VAR_RESULT
# 278 "data/scripts/move_tutors.pory"
	case 0, PacifidlogTown_PokemonCenter_1F_EventScript_RecoilMoveTutor_6
# 280 "data/scripts/move_tutors.pory"
	case 1, PacifidlogTown_PokemonCenter_1F_EventScript_RecoilMoveTutor_7
# 282 "data/scripts/move_tutors.pory"
	case 2, PacifidlogTown_PokemonCenter_1F_EventScript_RecoilMoveTutor_8
# 284 "data/scripts/move_tutors.pory"
	case 3, PacifidlogTown_PokemonCenter_1F_EventScript_RecoilMoveTutor_9
# 286 "data/scripts/move_tutors.pory"
	case 4, PacifidlogTown_PokemonCenter_1F_EventScript_RecoilMoveTutor_10
# 288 "data/scripts/move_tutors.pory"
	case 5, PacifidlogTown_PokemonCenter_1F_EventScript_RecoilMoveTutor_11
# 290 "data/scripts/move_tutors.pory"
	case 127, PacifidlogTown_PokemonCenter_1F_EventScript_RecoilMoveTutor_12
PacifidlogTown_PokemonCenter_1F_EventScript_RecoilMoveTutor_4:
# 293 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_RecoilMoveWhichMon, MSGBOX_DEFAULT
# 294 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 295 "data/scripts/move_tutors.pory"
	compare VAR_RESULT, NO
	goto_if_eq PacifidlogTown_PokemonCenter_1F_EventScript_RecoilMoveTutor_14
PacifidlogTown_PokemonCenter_1F_EventScript_RecoilMoveTutor_13:
# 298 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_RecoilMoveTaught, MSGBOX_DEFAULT
# 299 "data/scripts/move_tutors.pory"
	release
	return

PacifidlogTown_PokemonCenter_1F_EventScript_RecoilMoveTutor_2:
# 273 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_RecoilMoveDeclined
	goto PacifidlogTown_PokemonCenter_1F_EventScript_RecoilMoveTutor_1

PacifidlogTown_PokemonCenter_1F_EventScript_RecoilMoveTutor_6:
# 279 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_DOUBLE_EDGE
	goto PacifidlogTown_PokemonCenter_1F_EventScript_RecoilMoveTutor_4

PacifidlogTown_PokemonCenter_1F_EventScript_RecoilMoveTutor_7:
# 281 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_WOOD_HAMMER
	goto PacifidlogTown_PokemonCenter_1F_EventScript_RecoilMoveTutor_4

PacifidlogTown_PokemonCenter_1F_EventScript_RecoilMoveTutor_8:
# 283 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_FLARE_BLITZ
	goto PacifidlogTown_PokemonCenter_1F_EventScript_RecoilMoveTutor_4

PacifidlogTown_PokemonCenter_1F_EventScript_RecoilMoveTutor_9:
# 285 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_WAVE_CRASH
	goto PacifidlogTown_PokemonCenter_1F_EventScript_RecoilMoveTutor_4

PacifidlogTown_PokemonCenter_1F_EventScript_RecoilMoveTutor_10:
# 287 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_BRAVE_BIRD
	goto PacifidlogTown_PokemonCenter_1F_EventScript_RecoilMoveTutor_4

PacifidlogTown_PokemonCenter_1F_EventScript_RecoilMoveTutor_11:
# 289 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_WILD_CHARGE
	goto PacifidlogTown_PokemonCenter_1F_EventScript_RecoilMoveTutor_4

PacifidlogTown_PokemonCenter_1F_EventScript_RecoilMoveTutor_12:
# 291 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_RecoilMoveDeclined
	goto PacifidlogTown_PokemonCenter_1F_EventScript_RecoilMoveTutor_4

PacifidlogTown_PokemonCenter_1F_EventScript_RecoilMoveTutor_14:
# 296 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_RecoilMoveDeclined
	goto PacifidlogTown_PokemonCenter_1F_EventScript_RecoilMoveTutor_13


MoveTutor_EventScript_RecoilMoveDeclined::
# 303 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_RecoilMoveDeclined, MSGBOX_DEFAULT
# 304 "data/scripts/move_tutors.pory"
	release
	return


EverGrandeCity_PokemonLeague_1F_EventScript_MoveTutor::
# 309 "data/scripts/move_tutors.pory"
	lock
# 310 "data/scripts/move_tutors.pory"
	faceplayer
# 311 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_LeagueMoveTeach, MSGBOX_YESNO
# 312 "data/scripts/move_tutors.pory"
	compare VAR_RESULT, NO
	goto_if_eq EverGrandeCity_PokemonLeague_1F_EventScript_MoveTutor_2
EverGrandeCity_PokemonLeague_1F_EventScript_MoveTutor_1:
# 315 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_WhichMoveToTeach, MSGBOX_DEFAULT
# 316 "data/scripts/move_tutors.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, EverGrandeCity_PokemonLeague_1F_EventScript_MoveTutor_Text_0, EverGrandeCity_PokemonLeague_1F_EventScript_MoveTutor_Text_1, EverGrandeCity_PokemonLeague_1F_EventScript_MoveTutor_Text_2, EverGrandeCity_PokemonLeague_1F_EventScript_MoveTutor_Text_3, EverGrandeCity_PokemonLeague_1F_EventScript_MoveTutor_Text_4
# 317 "data/scripts/move_tutors.pory"
	switch VAR_RESULT
# 318 "data/scripts/move_tutors.pory"
	case 0, EverGrandeCity_PokemonLeague_1F_EventScript_MoveTutor_6
# 320 "data/scripts/move_tutors.pory"
	case 1, EverGrandeCity_PokemonLeague_1F_EventScript_MoveTutor_7
# 322 "data/scripts/move_tutors.pory"
	case 2, EverGrandeCity_PokemonLeague_1F_EventScript_MoveTutor_8
# 324 "data/scripts/move_tutors.pory"
	case 3, EverGrandeCity_PokemonLeague_1F_EventScript_MoveTutor_9
# 326 "data/scripts/move_tutors.pory"
	case 4, EverGrandeCity_PokemonLeague_1F_EventScript_MoveTutor_10
# 328 "data/scripts/move_tutors.pory"
	case 127, EverGrandeCity_PokemonLeague_1F_EventScript_MoveTutor_11
EverGrandeCity_PokemonLeague_1F_EventScript_MoveTutor_4:
# 331 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_LeagueMoveWhichMon, MSGBOX_DEFAULT
# 332 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 333 "data/scripts/move_tutors.pory"
	compare VAR_RESULT, NO
	goto_if_eq EverGrandeCity_PokemonLeague_1F_EventScript_MoveTutor_13
EverGrandeCity_PokemonLeague_1F_EventScript_MoveTutor_12:
# 336 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_LeagueMoveTaught, MSGBOX_DEFAULT
# 337 "data/scripts/move_tutors.pory"
	release
	return

EverGrandeCity_PokemonLeague_1F_EventScript_MoveTutor_2:
# 313 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_LeagueMoveDeclined
	goto EverGrandeCity_PokemonLeague_1F_EventScript_MoveTutor_1

EverGrandeCity_PokemonLeague_1F_EventScript_MoveTutor_6:
# 319 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_FRENZY_PLANT
	goto EverGrandeCity_PokemonLeague_1F_EventScript_MoveTutor_4

EverGrandeCity_PokemonLeague_1F_EventScript_MoveTutor_7:
# 321 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_BLAST_BURN
	goto EverGrandeCity_PokemonLeague_1F_EventScript_MoveTutor_4

EverGrandeCity_PokemonLeague_1F_EventScript_MoveTutor_8:
# 323 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_HYDRO_CANNON
	goto EverGrandeCity_PokemonLeague_1F_EventScript_MoveTutor_4

EverGrandeCity_PokemonLeague_1F_EventScript_MoveTutor_9:
# 325 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_ROCK_WRECKER
	goto EverGrandeCity_PokemonLeague_1F_EventScript_MoveTutor_4

EverGrandeCity_PokemonLeague_1F_EventScript_MoveTutor_10:
# 327 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_ROAR_OF_TIME
	goto EverGrandeCity_PokemonLeague_1F_EventScript_MoveTutor_4

EverGrandeCity_PokemonLeague_1F_EventScript_MoveTutor_11:
# 329 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_LeagueMoveDeclined
	goto EverGrandeCity_PokemonLeague_1F_EventScript_MoveTutor_4

EverGrandeCity_PokemonLeague_1F_EventScript_MoveTutor_13:
# 334 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_LeagueMoveDeclined
	goto EverGrandeCity_PokemonLeague_1F_EventScript_MoveTutor_12


MoveTutor_EventScript_LeagueMoveDeclined::
# 341 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_LeagueMoveDeclined, MSGBOX_DEFAULT
# 342 "data/scripts/move_tutors.pory"
	release
	return


MoveTutor_EventScript_OpenPartyMenu::
# 348 "data/scripts/move_tutors.pory"
	special ChooseMonForMoveTutor
# 349 "data/scripts/move_tutors.pory"
	waitstate
# 350 "data/scripts/move_tutors.pory"
	lock
# 351 "data/scripts/move_tutors.pory"
	faceplayer
# 352 "data/scripts/move_tutors.pory"
	release
	return


MauvilleCity_EventScript_TricksTutor_Text_0:
# 32 "data/scripts/move_tutors.pory"
	.string "Trick$"

MauvilleCity_EventScript_TricksTutor_Text_1:
# 32 "data/scripts/move_tutors.pory"
	.string "Switcheroo$"

LilycoveCity_EventScript_CombatMoveTutor_Text_0:
# 179 "data/scripts/move_tutors.pory"
	.string "Ice Punch$"

LilycoveCity_EventScript_CombatMoveTutor_Text_1:
# 179 "data/scripts/move_tutors.pory"
	.string "Thunder Punch$"

LilycoveCity_EventScript_CombatMoveTutor_Text_2:
# 179 "data/scripts/move_tutors.pory"
	.string "Fire Punch$"

LilycoveCity_EventScript_CombatMoveTutor_Text_3:
# 179 "data/scripts/move_tutors.pory"
	.string "Mega Punch$"

LilycoveCity_EventScript_CombatMoveTutor_Text_4:
# 179 "data/scripts/move_tutors.pory"
	.string "Mega Kick$"

LilycoveCity_EventScript_CombatMoveTutor_Text_5:
# 179 "data/scripts/move_tutors.pory"
	.string "Rock Slide$"

MossdeepCity_EventScript_PledgeMoveTutor_Text_0:
# 219 "data/scripts/move_tutors.pory"
	.string "Grass Pledge$"

MossdeepCity_EventScript_PledgeMoveTutor_Text_1:
# 219 "data/scripts/move_tutors.pory"
	.string "Fire Pledge$"

MossdeepCity_EventScript_PledgeMoveTutor_Text_2:
# 219 "data/scripts/move_tutors.pory"
	.string "Water Pledge$"

PacifidlogTown_PokemonCenter_1F_EventScript_RecoilMoveTutor_Text_0:
# 276 "data/scripts/move_tutors.pory"
	.string "Double-Edge$"

PacifidlogTown_PokemonCenter_1F_EventScript_RecoilMoveTutor_Text_1:
# 276 "data/scripts/move_tutors.pory"
	.string "Wood Hammer$"

PacifidlogTown_PokemonCenter_1F_EventScript_RecoilMoveTutor_Text_2:
# 276 "data/scripts/move_tutors.pory"
	.string "Flare Blitz$"

PacifidlogTown_PokemonCenter_1F_EventScript_RecoilMoveTutor_Text_3:
# 276 "data/scripts/move_tutors.pory"
	.string "Wave Crash$"

PacifidlogTown_PokemonCenter_1F_EventScript_RecoilMoveTutor_Text_4:
# 276 "data/scripts/move_tutors.pory"
	.string "Brave Bird$"

PacifidlogTown_PokemonCenter_1F_EventScript_RecoilMoveTutor_Text_5:
# 276 "data/scripts/move_tutors.pory"
	.string "Wild Charge$"

EverGrandeCity_PokemonLeague_1F_EventScript_MoveTutor_Text_0:
# 316 "data/scripts/move_tutors.pory"
	.string "Frenzy Plant$"

EverGrandeCity_PokemonLeague_1F_EventScript_MoveTutor_Text_1:
# 316 "data/scripts/move_tutors.pory"
	.string "Blast Burn$"

EverGrandeCity_PokemonLeague_1F_EventScript_MoveTutor_Text_2:
# 316 "data/scripts/move_tutors.pory"
	.string "Hydro Cannon$"

EverGrandeCity_PokemonLeague_1F_EventScript_MoveTutor_Text_3:
# 316 "data/scripts/move_tutors.pory"
	.string "Rock Wrecker$"

EverGrandeCity_PokemonLeague_1F_EventScript_MoveTutor_Text_4:
# 316 "data/scripts/move_tutors.pory"
	.string "Roar of Time$"
