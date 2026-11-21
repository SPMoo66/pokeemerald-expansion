Unused_MoveTutors::
# 2 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_TERA_BLAST
	return


SlateportCity_PokemonFanClub_EventScript_SwaggerTutor::
# 6 "data/scripts/move_tutors.pory"
	lock
# 7 "data/scripts/move_tutors.pory"
	faceplayer
# 8 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_SwaggerTeach, MSGBOX_YESNO
# 9 "data/scripts/move_tutors.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SlateportCity_PokemonFanClub_EventScript_SwaggerTutor_2
SlateportCity_PokemonFanClub_EventScript_SwaggerTutor_1:
# 12 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_SwaggerWhichMon, MSGBOX_DEFAULT
# 13 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_SWAGGER
# 14 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 15 "data/scripts/move_tutors.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SlateportCity_PokemonFanClub_EventScript_SwaggerTutor_5
SlateportCity_PokemonFanClub_EventScript_SwaggerTutor_4:
# 18 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_SwaggerTaught, MSGBOX_DEFAULT
# 19 "data/scripts/move_tutors.pory"
	release
	return

SlateportCity_PokemonFanClub_EventScript_SwaggerTutor_2:
# 10 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_SwaggerDeclined
	goto SlateportCity_PokemonFanClub_EventScript_SwaggerTutor_1

SlateportCity_PokemonFanClub_EventScript_SwaggerTutor_5:
# 16 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_SwaggerDeclined
	goto SlateportCity_PokemonFanClub_EventScript_SwaggerTutor_4


MoveTutor_EventScript_SwaggerDeclined::
# 23 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_SwaggerDeclined, MSGBOX_DEFAULT
# 24 "data/scripts/move_tutors.pory"
	release
	return


MauvilleCity_EventScript_TricksTutor::
# 29 "data/scripts/move_tutors.pory"
	lock
# 30 "data/scripts/move_tutors.pory"
	faceplayer
# 31 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_TricksTeach, MSGBOX_YESNO
# 32 "data/scripts/move_tutors.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MauvilleCity_EventScript_TricksTutor_2
MauvilleCity_EventScript_TricksTutor_1:
# 35 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_WhichMoveToTeach, MSGBOX_DEFAULT
# 36 "data/scripts/move_tutors.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, MauvilleCity_EventScript_TricksTutor_Text_0, MauvilleCity_EventScript_TricksTutor_Text_1
# 37 "data/scripts/move_tutors.pory"
	switch VAR_RESULT
# 38 "data/scripts/move_tutors.pory"
	case 0, MauvilleCity_EventScript_TricksTutor_6
# 40 "data/scripts/move_tutors.pory"
	case 1, MauvilleCity_EventScript_TricksTutor_7
# 42 "data/scripts/move_tutors.pory"
	case 127, MauvilleCity_EventScript_TricksTutor_8
MauvilleCity_EventScript_TricksTutor_4:
# 45 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_TricksWhichMon, MSGBOX_DEFAULT
# 46 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 47 "data/scripts/move_tutors.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MauvilleCity_EventScript_TricksTutor_10
MauvilleCity_EventScript_TricksTutor_9:
# 50 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_TricksTaught, MSGBOX_DEFAULT
# 51 "data/scripts/move_tutors.pory"
	release
	return

MauvilleCity_EventScript_TricksTutor_2:
# 33 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_TricksDeclined
	goto MauvilleCity_EventScript_TricksTutor_1

MauvilleCity_EventScript_TricksTutor_6:
# 39 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_TRICK
	goto MauvilleCity_EventScript_TricksTutor_4

MauvilleCity_EventScript_TricksTutor_7:
# 41 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_SWITCHEROO
	goto MauvilleCity_EventScript_TricksTutor_4

MauvilleCity_EventScript_TricksTutor_8:
# 43 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_TricksDeclined
	goto MauvilleCity_EventScript_TricksTutor_4

MauvilleCity_EventScript_TricksTutor_10:
# 48 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_TricksDeclined
	goto MauvilleCity_EventScript_TricksTutor_9


MoveTutor_EventScript_TricksDeclined::
# 55 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_TricksDeclined, MSGBOX_DEFAULT
# 56 "data/scripts/move_tutors.pory"
	release
	return


VerdanturfTown_PokemonCenter_1F_EventScript_IcyWindTutor::
# 61 "data/scripts/move_tutors.pory"
	lock
# 62 "data/scripts/move_tutors.pory"
	faceplayer
# 63 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_IcyWindTeach, MSGBOX_YESNO
# 64 "data/scripts/move_tutors.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq VerdanturfTown_PokemonCenter_1F_EventScript_IcyWindTutor_2
VerdanturfTown_PokemonCenter_1F_EventScript_IcyWindTutor_1:
# 67 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_IcyWindWhichMon, MSGBOX_DEFAULT
# 68 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_ICY_WIND
# 69 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 70 "data/scripts/move_tutors.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq VerdanturfTown_PokemonCenter_1F_EventScript_IcyWindTutor_5
VerdanturfTown_PokemonCenter_1F_EventScript_IcyWindTutor_4:
# 73 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_IcyWindTaught, MSGBOX_DEFAULT
# 74 "data/scripts/move_tutors.pory"
	release
	return

VerdanturfTown_PokemonCenter_1F_EventScript_IcyWindTutor_2:
# 65 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_IcyWindDeclined
	goto VerdanturfTown_PokemonCenter_1F_EventScript_IcyWindTutor_1

VerdanturfTown_PokemonCenter_1F_EventScript_IcyWindTutor_5:
# 71 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_IcyWindDeclined
	goto VerdanturfTown_PokemonCenter_1F_EventScript_IcyWindTutor_4


MoveTutor_EventScript_IcyWindDeclined::
# 78 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_IcyWindDeclined, MSGBOX_DEFAULT
# 79 "data/scripts/move_tutors.pory"
	release
	return


FallarborTown_Mart_EventScript_SignalBeamTutor::
# 84 "data/scripts/move_tutors.pory"
	lock
# 85 "data/scripts/move_tutors.pory"
	faceplayer
# 86 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_SignalBeamTeach, MSGBOX_YESNO
# 87 "data/scripts/move_tutors.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq FallarborTown_Mart_EventScript_SignalBeamTutor_2
FallarborTown_Mart_EventScript_SignalBeamTutor_1:
# 90 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_SignalBeamWhichMon, MSGBOX_DEFAULT
# 91 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_SIGNAL_BEAM
# 92 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 93 "data/scripts/move_tutors.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq FallarborTown_Mart_EventScript_SignalBeamTutor_5
FallarborTown_Mart_EventScript_SignalBeamTutor_4:
# 96 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_SignalBeamTaught, MSGBOX_DEFAULT
# 97 "data/scripts/move_tutors.pory"
	release
	return

FallarborTown_Mart_EventScript_SignalBeamTutor_2:
# 88 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_SignalBeamDeclined
	goto FallarborTown_Mart_EventScript_SignalBeamTutor_1

FallarborTown_Mart_EventScript_SignalBeamTutor_5:
# 94 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_SignalBeamDeclined
	goto FallarborTown_Mart_EventScript_SignalBeamTutor_4


MoveTutor_EventScript_SignalBeamDeclined::
# 101 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_SignalBeamDeclined, MSGBOX_DEFAULT
# 102 "data/scripts/move_tutors.pory"
	release
	return


LavaridgeTown_House_EventScript_SleepTalkTutor::
# 107 "data/scripts/move_tutors.pory"
	lock
# 108 "data/scripts/move_tutors.pory"
	faceplayer
# 109 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_SleepTalkTeach, MSGBOX_YESNO
# 110 "data/scripts/move_tutors.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq LavaridgeTown_House_EventScript_SleepTalkTutor_2
LavaridgeTown_House_EventScript_SleepTalkTutor_1:
# 113 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_SleepTalkWhichMon, MSGBOX_DEFAULT
# 114 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_SLEEP_TALK
# 115 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 116 "data/scripts/move_tutors.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq LavaridgeTown_House_EventScript_SleepTalkTutor_5
LavaridgeTown_House_EventScript_SleepTalkTutor_4:
# 119 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_SleepTalkTaught, MSGBOX_DEFAULT
# 120 "data/scripts/move_tutors.pory"
	release
	return

LavaridgeTown_House_EventScript_SleepTalkTutor_2:
# 111 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_SleepTalkDeclined
	goto LavaridgeTown_House_EventScript_SleepTalkTutor_1

LavaridgeTown_House_EventScript_SleepTalkTutor_5:
# 117 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_SleepTalkDeclined
	goto LavaridgeTown_House_EventScript_SleepTalkTutor_4


MoveTutor_EventScript_SleepTalkDeclined::
# 124 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_SleepTalkDeclined, MSGBOX_DEFAULT
# 125 "data/scripts/move_tutors.pory"
	release
	return


FortreeCity_House2_EventScript_BodySlamTutor::
# 130 "data/scripts/move_tutors.pory"
	lock
# 131 "data/scripts/move_tutors.pory"
	faceplayer
# 132 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_BodySlamTeach, MSGBOX_YESNO
# 133 "data/scripts/move_tutors.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq FortreeCity_House2_EventScript_BodySlamTutor_2
FortreeCity_House2_EventScript_BodySlamTutor_1:
# 136 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_BodySlamWhichMon, MSGBOX_DEFAULT
# 137 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_BODY_SLAM
# 138 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 139 "data/scripts/move_tutors.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq FortreeCity_House2_EventScript_BodySlamTutor_5
FortreeCity_House2_EventScript_BodySlamTutor_4:
# 142 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_BodySlamTaught, MSGBOX_DEFAULT
# 143 "data/scripts/move_tutors.pory"
	release
	return

FortreeCity_House2_EventScript_BodySlamTutor_2:
# 134 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_BodySlamDeclined
	goto FortreeCity_House2_EventScript_BodySlamTutor_1

FortreeCity_House2_EventScript_BodySlamTutor_5:
# 140 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_BodySlamDeclined
	goto FortreeCity_House2_EventScript_BodySlamTutor_4


MoveTutor_EventScript_BodySlamDeclined::
# 147 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_BodySlamDeclined, MSGBOX_DEFAULT
# 148 "data/scripts/move_tutors.pory"
	release
	return


LilycoveCity_DepartmentStoreRooftop_EventScript_HyperVoiceTutor::
# 153 "data/scripts/move_tutors.pory"
	lock
# 154 "data/scripts/move_tutors.pory"
	faceplayer
# 155 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_HyperVoiceTeach, MSGBOX_YESNO
# 156 "data/scripts/move_tutors.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq LilycoveCity_DepartmentStoreRooftop_EventScript_HyperVoiceTutor_2
LilycoveCity_DepartmentStoreRooftop_EventScript_HyperVoiceTutor_1:
# 159 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_HyperVoiceWhichMon, MSGBOX_DEFAULT
# 160 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_HYPER_VOICE
# 161 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 162 "data/scripts/move_tutors.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq LilycoveCity_DepartmentStoreRooftop_EventScript_HyperVoiceTutor_5
LilycoveCity_DepartmentStoreRooftop_EventScript_HyperVoiceTutor_4:
# 165 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_HyperVoiceTaught, MSGBOX_DEFAULT
# 166 "data/scripts/move_tutors.pory"
	release
	return

LilycoveCity_DepartmentStoreRooftop_EventScript_HyperVoiceTutor_2:
# 157 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_HyperVoiceDeclined
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_HyperVoiceTutor_1

LilycoveCity_DepartmentStoreRooftop_EventScript_HyperVoiceTutor_5:
# 163 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_HyperVoiceDeclined
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_HyperVoiceTutor_4


MoveTutor_EventScript_HyperVoiceDeclined::
# 170 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_HyperVoiceDeclined, MSGBOX_DEFAULT
# 171 "data/scripts/move_tutors.pory"
	release
	return


LilycoveCity_EventScript_CombatMoveTutor::
# 176 "data/scripts/move_tutors.pory"
	lock
# 177 "data/scripts/move_tutors.pory"
	faceplayer
# 178 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_CombatMoveTeach, MSGBOX_YESNO
# 179 "data/scripts/move_tutors.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq LilycoveCity_EventScript_CombatMoveTutor_2
LilycoveCity_EventScript_CombatMoveTutor_1:
# 182 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_WhichMoveToTeach, MSGBOX_DEFAULT
# 183 "data/scripts/move_tutors.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, LilycoveCity_EventScript_CombatMoveTutor_Text_0, LilycoveCity_EventScript_CombatMoveTutor_Text_1, LilycoveCity_EventScript_CombatMoveTutor_Text_2, LilycoveCity_EventScript_CombatMoveTutor_Text_3, LilycoveCity_EventScript_CombatMoveTutor_Text_4, LilycoveCity_EventScript_CombatMoveTutor_Text_5
# 184 "data/scripts/move_tutors.pory"
	switch VAR_RESULT
# 185 "data/scripts/move_tutors.pory"
	case 0, LilycoveCity_EventScript_CombatMoveTutor_6
# 187 "data/scripts/move_tutors.pory"
	case 1, LilycoveCity_EventScript_CombatMoveTutor_7
# 189 "data/scripts/move_tutors.pory"
	case 2, LilycoveCity_EventScript_CombatMoveTutor_8
# 191 "data/scripts/move_tutors.pory"
	case 3, LilycoveCity_EventScript_CombatMoveTutor_9
# 193 "data/scripts/move_tutors.pory"
	case 4, LilycoveCity_EventScript_CombatMoveTutor_10
# 195 "data/scripts/move_tutors.pory"
	case 5, LilycoveCity_EventScript_CombatMoveTutor_11
# 197 "data/scripts/move_tutors.pory"
	case 127, LilycoveCity_EventScript_CombatMoveTutor_12
LilycoveCity_EventScript_CombatMoveTutor_4:
# 200 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_CombatMoveWhichMon, MSGBOX_DEFAULT
# 201 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 202 "data/scripts/move_tutors.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq LilycoveCity_EventScript_CombatMoveTutor_14
LilycoveCity_EventScript_CombatMoveTutor_13:
# 205 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_CombatMoveTaught, MSGBOX_DEFAULT
# 206 "data/scripts/move_tutors.pory"
	release
	return

LilycoveCity_EventScript_CombatMoveTutor_2:
# 180 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_CombatMoveDeclined
	goto LilycoveCity_EventScript_CombatMoveTutor_1

LilycoveCity_EventScript_CombatMoveTutor_6:
# 186 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_ICE_PUNCH
	goto LilycoveCity_EventScript_CombatMoveTutor_4

LilycoveCity_EventScript_CombatMoveTutor_7:
# 188 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_THUNDER_PUNCH
	goto LilycoveCity_EventScript_CombatMoveTutor_4

LilycoveCity_EventScript_CombatMoveTutor_8:
# 190 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_FIRE_PUNCH
	goto LilycoveCity_EventScript_CombatMoveTutor_4

LilycoveCity_EventScript_CombatMoveTutor_9:
# 192 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_MEGA_PUNCH
	goto LilycoveCity_EventScript_CombatMoveTutor_4

LilycoveCity_EventScript_CombatMoveTutor_10:
# 194 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_MEGA_KICK
	goto LilycoveCity_EventScript_CombatMoveTutor_4

LilycoveCity_EventScript_CombatMoveTutor_11:
# 196 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_ROCK_SLIDE
	goto LilycoveCity_EventScript_CombatMoveTutor_4

LilycoveCity_EventScript_CombatMoveTutor_12:
# 198 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_CombatMoveDeclined
	goto LilycoveCity_EventScript_CombatMoveTutor_4

LilycoveCity_EventScript_CombatMoveTutor_14:
# 203 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_CombatMoveDeclined
	goto LilycoveCity_EventScript_CombatMoveTutor_13


MoveTutor_EventScript_CombatMoveDeclined::
# 210 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_CombatMoveDeclined, MSGBOX_DEFAULT
# 211 "data/scripts/move_tutors.pory"
	release
	return


MossdeepCity_EventScript_PledgeMoveTutor::
# 216 "data/scripts/move_tutors.pory"
	lock
# 217 "data/scripts/move_tutors.pory"
	faceplayer
# 218 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_PledgeMoveTeach, MSGBOX_YESNO
# 219 "data/scripts/move_tutors.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MossdeepCity_EventScript_PledgeMoveTutor_2
MossdeepCity_EventScript_PledgeMoveTutor_1:
# 222 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_WhichMoveToTeach, MSGBOX_DEFAULT
# 223 "data/scripts/move_tutors.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, MossdeepCity_EventScript_PledgeMoveTutor_Text_0, MossdeepCity_EventScript_PledgeMoveTutor_Text_1, MossdeepCity_EventScript_PledgeMoveTutor_Text_2
# 224 "data/scripts/move_tutors.pory"
	switch VAR_RESULT
# 225 "data/scripts/move_tutors.pory"
	case 0, MossdeepCity_EventScript_PledgeMoveTutor_6
# 227 "data/scripts/move_tutors.pory"
	case 1, MossdeepCity_EventScript_PledgeMoveTutor_7
# 229 "data/scripts/move_tutors.pory"
	case 2, MossdeepCity_EventScript_PledgeMoveTutor_8
# 231 "data/scripts/move_tutors.pory"
	case 127, MossdeepCity_EventScript_PledgeMoveTutor_9
MossdeepCity_EventScript_PledgeMoveTutor_4:
# 234 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_PledgeMoveWhichMon, MSGBOX_DEFAULT
# 235 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 236 "data/scripts/move_tutors.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MossdeepCity_EventScript_PledgeMoveTutor_11
MossdeepCity_EventScript_PledgeMoveTutor_10:
# 239 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_PledgeMoveTaught, MSGBOX_DEFAULT
# 240 "data/scripts/move_tutors.pory"
	release
	return

MossdeepCity_EventScript_PledgeMoveTutor_2:
# 220 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_PledgeMoveDeclined
	goto MossdeepCity_EventScript_PledgeMoveTutor_1

MossdeepCity_EventScript_PledgeMoveTutor_6:
# 226 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_GRASS_PLEDGE
	goto MossdeepCity_EventScript_PledgeMoveTutor_4

MossdeepCity_EventScript_PledgeMoveTutor_7:
# 228 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_FIRE_PLEDGE
	goto MossdeepCity_EventScript_PledgeMoveTutor_4

MossdeepCity_EventScript_PledgeMoveTutor_8:
# 230 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_WATER_PLEDGE
	goto MossdeepCity_EventScript_PledgeMoveTutor_4

MossdeepCity_EventScript_PledgeMoveTutor_9:
# 232 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_PledgeMoveDeclined
	goto MossdeepCity_EventScript_PledgeMoveTutor_4

MossdeepCity_EventScript_PledgeMoveTutor_11:
# 237 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_PledgeMoveDeclined
	goto MossdeepCity_EventScript_PledgeMoveTutor_10


MoveTutor_EventScript_PledgeMoveDeclined::
# 244 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_PledgeMoveDeclined, MSGBOX_DEFAULT
# 245 "data/scripts/move_tutors.pory"
	release
	return


SootopolisCity_PokemonCenter_1F_EventScript_DynamicPunchTutor::
# 250 "data/scripts/move_tutors.pory"
	lock
# 251 "data/scripts/move_tutors.pory"
	faceplayer
# 252 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_DynamicPunchTeach, MSGBOX_YESNO
# 253 "data/scripts/move_tutors.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SootopolisCity_PokemonCenter_1F_EventScript_DynamicPunchTutor_2
SootopolisCity_PokemonCenter_1F_EventScript_DynamicPunchTutor_1:
# 256 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_DynamicPunchWhichMon, MSGBOX_DEFAULT
# 257 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_DYNAMIC_PUNCH
# 258 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 259 "data/scripts/move_tutors.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SootopolisCity_PokemonCenter_1F_EventScript_DynamicPunchTutor_5
SootopolisCity_PokemonCenter_1F_EventScript_DynamicPunchTutor_4:
# 262 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_DynamicPunchTaught, MSGBOX_DEFAULT
# 263 "data/scripts/move_tutors.pory"
	release
	return

SootopolisCity_PokemonCenter_1F_EventScript_DynamicPunchTutor_2:
# 254 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_DynamicPunchDeclined
	goto SootopolisCity_PokemonCenter_1F_EventScript_DynamicPunchTutor_1

SootopolisCity_PokemonCenter_1F_EventScript_DynamicPunchTutor_5:
# 260 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_DynamicPunchDeclined
	goto SootopolisCity_PokemonCenter_1F_EventScript_DynamicPunchTutor_4


MoveTutor_EventScript_DynamicPunchDeclined::
# 267 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_DynamicPunchDeclined, MSGBOX_DEFAULT
# 268 "data/scripts/move_tutors.pory"
	release
	return


PacifidlogTown_PokemonCenter_1F_EventScript_RecoilMoveTutor::
# 273 "data/scripts/move_tutors.pory"
	lock
# 274 "data/scripts/move_tutors.pory"
	faceplayer
# 275 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_RecoilMoveTeach, MSGBOX_YESNO
# 276 "data/scripts/move_tutors.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PacifidlogTown_PokemonCenter_1F_EventScript_RecoilMoveTutor_2
PacifidlogTown_PokemonCenter_1F_EventScript_RecoilMoveTutor_1:
# 279 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_WhichMoveToTeach, MSGBOX_DEFAULT
# 280 "data/scripts/move_tutors.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, PacifidlogTown_PokemonCenter_1F_EventScript_RecoilMoveTutor_Text_0, PacifidlogTown_PokemonCenter_1F_EventScript_RecoilMoveTutor_Text_1, PacifidlogTown_PokemonCenter_1F_EventScript_RecoilMoveTutor_Text_2, PacifidlogTown_PokemonCenter_1F_EventScript_RecoilMoveTutor_Text_3, PacifidlogTown_PokemonCenter_1F_EventScript_RecoilMoveTutor_Text_4, PacifidlogTown_PokemonCenter_1F_EventScript_RecoilMoveTutor_Text_5
# 281 "data/scripts/move_tutors.pory"
	switch VAR_RESULT
# 282 "data/scripts/move_tutors.pory"
	case 0, PacifidlogTown_PokemonCenter_1F_EventScript_RecoilMoveTutor_6
# 284 "data/scripts/move_tutors.pory"
	case 1, PacifidlogTown_PokemonCenter_1F_EventScript_RecoilMoveTutor_7
# 286 "data/scripts/move_tutors.pory"
	case 2, PacifidlogTown_PokemonCenter_1F_EventScript_RecoilMoveTutor_8
# 288 "data/scripts/move_tutors.pory"
	case 3, PacifidlogTown_PokemonCenter_1F_EventScript_RecoilMoveTutor_9
# 290 "data/scripts/move_tutors.pory"
	case 4, PacifidlogTown_PokemonCenter_1F_EventScript_RecoilMoveTutor_10
# 292 "data/scripts/move_tutors.pory"
	case 5, PacifidlogTown_PokemonCenter_1F_EventScript_RecoilMoveTutor_11
# 294 "data/scripts/move_tutors.pory"
	case 127, PacifidlogTown_PokemonCenter_1F_EventScript_RecoilMoveTutor_12
PacifidlogTown_PokemonCenter_1F_EventScript_RecoilMoveTutor_4:
# 297 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_RecoilMoveWhichMon, MSGBOX_DEFAULT
# 298 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 299 "data/scripts/move_tutors.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PacifidlogTown_PokemonCenter_1F_EventScript_RecoilMoveTutor_14
PacifidlogTown_PokemonCenter_1F_EventScript_RecoilMoveTutor_13:
# 302 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_RecoilMoveTaught, MSGBOX_DEFAULT
# 303 "data/scripts/move_tutors.pory"
	release
	return

PacifidlogTown_PokemonCenter_1F_EventScript_RecoilMoveTutor_2:
# 277 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_RecoilMoveDeclined
	goto PacifidlogTown_PokemonCenter_1F_EventScript_RecoilMoveTutor_1

PacifidlogTown_PokemonCenter_1F_EventScript_RecoilMoveTutor_6:
# 283 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_DOUBLE_EDGE
	goto PacifidlogTown_PokemonCenter_1F_EventScript_RecoilMoveTutor_4

PacifidlogTown_PokemonCenter_1F_EventScript_RecoilMoveTutor_7:
# 285 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_WOOD_HAMMER
	goto PacifidlogTown_PokemonCenter_1F_EventScript_RecoilMoveTutor_4

PacifidlogTown_PokemonCenter_1F_EventScript_RecoilMoveTutor_8:
# 287 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_FLARE_BLITZ
	goto PacifidlogTown_PokemonCenter_1F_EventScript_RecoilMoveTutor_4

PacifidlogTown_PokemonCenter_1F_EventScript_RecoilMoveTutor_9:
# 289 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_WAVE_CRASH
	goto PacifidlogTown_PokemonCenter_1F_EventScript_RecoilMoveTutor_4

PacifidlogTown_PokemonCenter_1F_EventScript_RecoilMoveTutor_10:
# 291 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_BRAVE_BIRD
	goto PacifidlogTown_PokemonCenter_1F_EventScript_RecoilMoveTutor_4

PacifidlogTown_PokemonCenter_1F_EventScript_RecoilMoveTutor_11:
# 293 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_WILD_CHARGE
	goto PacifidlogTown_PokemonCenter_1F_EventScript_RecoilMoveTutor_4

PacifidlogTown_PokemonCenter_1F_EventScript_RecoilMoveTutor_12:
# 295 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_RecoilMoveDeclined
	goto PacifidlogTown_PokemonCenter_1F_EventScript_RecoilMoveTutor_4

PacifidlogTown_PokemonCenter_1F_EventScript_RecoilMoveTutor_14:
# 300 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_RecoilMoveDeclined
	goto PacifidlogTown_PokemonCenter_1F_EventScript_RecoilMoveTutor_13


MoveTutor_EventScript_RecoilMoveDeclined::
# 307 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_RecoilMoveDeclined, MSGBOX_DEFAULT
# 308 "data/scripts/move_tutors.pory"
	release
	return


EverGrandeCity_PokemonCenter_1F_EventScript_MoveTutor::
# 313 "data/scripts/move_tutors.pory"
	lock
# 314 "data/scripts/move_tutors.pory"
	faceplayer
# 315 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_LeagueMoveTeach, MSGBOX_YESNO
# 316 "data/scripts/move_tutors.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EverGrandeCity_PokemonCenter_1F_EventScript_MoveTutor_2
EverGrandeCity_PokemonCenter_1F_EventScript_MoveTutor_1:
# 319 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_WhichMoveToTeach, MSGBOX_DEFAULT
# 320 "data/scripts/move_tutors.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, EverGrandeCity_PokemonCenter_1F_EventScript_MoveTutor_Text_0, EverGrandeCity_PokemonCenter_1F_EventScript_MoveTutor_Text_1, EverGrandeCity_PokemonCenter_1F_EventScript_MoveTutor_Text_2, EverGrandeCity_PokemonCenter_1F_EventScript_MoveTutor_Text_3, EverGrandeCity_PokemonCenter_1F_EventScript_MoveTutor_Text_4, EverGrandeCity_PokemonCenter_1F_EventScript_MoveTutor_Text_5, EverGrandeCity_PokemonCenter_1F_EventScript_MoveTutor_Text_6, EverGrandeCity_PokemonCenter_1F_EventScript_MoveTutor_Text_7, EverGrandeCity_PokemonCenter_1F_EventScript_MoveTutor_Text_8, EverGrandeCity_PokemonCenter_1F_EventScript_MoveTutor_Text_9, EverGrandeCity_PokemonCenter_1F_EventScript_MoveTutor_Text_10, EverGrandeCity_PokemonCenter_1F_EventScript_MoveTutor_Text_11
# 321 "data/scripts/move_tutors.pory"
	switch VAR_RESULT
# 322 "data/scripts/move_tutors.pory"
	case 0, EverGrandeCity_PokemonCenter_1F_EventScript_MoveTutor_6
# 324 "data/scripts/move_tutors.pory"
	case 1, EverGrandeCity_PokemonCenter_1F_EventScript_MoveTutor_7
# 326 "data/scripts/move_tutors.pory"
	case 2, EverGrandeCity_PokemonCenter_1F_EventScript_MoveTutor_8
# 328 "data/scripts/move_tutors.pory"
	case 3, EverGrandeCity_PokemonCenter_1F_EventScript_MoveTutor_9
# 330 "data/scripts/move_tutors.pory"
	case 4, EverGrandeCity_PokemonCenter_1F_EventScript_MoveTutor_10
# 332 "data/scripts/move_tutors.pory"
	case 5, EverGrandeCity_PokemonCenter_1F_EventScript_MoveTutor_11
# 334 "data/scripts/move_tutors.pory"
	case 6, EverGrandeCity_PokemonCenter_1F_EventScript_MoveTutor_12
# 336 "data/scripts/move_tutors.pory"
	case 7, EverGrandeCity_PokemonCenter_1F_EventScript_MoveTutor_13
# 338 "data/scripts/move_tutors.pory"
	case 8, EverGrandeCity_PokemonCenter_1F_EventScript_MoveTutor_14
# 340 "data/scripts/move_tutors.pory"
	case 9, EverGrandeCity_PokemonCenter_1F_EventScript_MoveTutor_15
# 342 "data/scripts/move_tutors.pory"
	case 10, EverGrandeCity_PokemonCenter_1F_EventScript_MoveTutor_16
# 344 "data/scripts/move_tutors.pory"
	case 11, EverGrandeCity_PokemonCenter_1F_EventScript_MoveTutor_17
# 346 "data/scripts/move_tutors.pory"
	case 127, EverGrandeCity_PokemonCenter_1F_EventScript_MoveTutor_18
EverGrandeCity_PokemonCenter_1F_EventScript_MoveTutor_4:
# 349 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_LeagueMoveWhichMon, MSGBOX_DEFAULT
# 350 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 351 "data/scripts/move_tutors.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EverGrandeCity_PokemonCenter_1F_EventScript_MoveTutor_20
EverGrandeCity_PokemonCenter_1F_EventScript_MoveTutor_19:
# 354 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_LeagueMoveTaught, MSGBOX_DEFAULT
# 355 "data/scripts/move_tutors.pory"
	release
	return

EverGrandeCity_PokemonCenter_1F_EventScript_MoveTutor_2:
# 317 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_LeagueMoveDeclined
	goto EverGrandeCity_PokemonCenter_1F_EventScript_MoveTutor_1

EverGrandeCity_PokemonCenter_1F_EventScript_MoveTutor_6:
# 323 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_TEMPER_FLARE
	goto EverGrandeCity_PokemonCenter_1F_EventScript_MoveTutor_4

EverGrandeCity_PokemonCenter_1F_EventScript_MoveTutor_7:
# 325 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_GRASSY_GLIDE
	goto EverGrandeCity_PokemonCenter_1F_EventScript_MoveTutor_4

EverGrandeCity_PokemonCenter_1F_EventScript_MoveTutor_8:
# 327 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_SUPERCELL_SLAM
	goto EverGrandeCity_PokemonCenter_1F_EventScript_MoveTutor_4

EverGrandeCity_PokemonCenter_1F_EventScript_MoveTutor_9:
# 329 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_COACHING
	goto EverGrandeCity_PokemonCenter_1F_EventScript_MoveTutor_4

EverGrandeCity_PokemonCenter_1F_EventScript_MoveTutor_10:
# 331 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_UPPER_HAND
	goto EverGrandeCity_PokemonCenter_1F_EventScript_MoveTutor_4

EverGrandeCity_PokemonCenter_1F_EventScript_MoveTutor_11:
# 333 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_PSYCHIC_NOISE
	goto EverGrandeCity_PokemonCenter_1F_EventScript_MoveTutor_4

EverGrandeCity_PokemonCenter_1F_EventScript_MoveTutor_12:
# 335 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_TRIPLE_AXEL
	goto EverGrandeCity_PokemonCenter_1F_EventScript_MoveTutor_4

EverGrandeCity_PokemonCenter_1F_EventScript_MoveTutor_13:
# 337 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_SKITTER_SMACK
	goto EverGrandeCity_PokemonCenter_1F_EventScript_MoveTutor_4

EverGrandeCity_PokemonCenter_1F_EventScript_MoveTutor_14:
# 339 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_DRAGON_CHEER
	goto EverGrandeCity_PokemonCenter_1F_EventScript_MoveTutor_4

EverGrandeCity_PokemonCenter_1F_EventScript_MoveTutor_15:
# 341 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_LASH_OUT
	goto EverGrandeCity_PokemonCenter_1F_EventScript_MoveTutor_4

EverGrandeCity_PokemonCenter_1F_EventScript_MoveTutor_16:
# 343 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_STEEL_BEAM
	goto EverGrandeCity_PokemonCenter_1F_EventScript_MoveTutor_4

EverGrandeCity_PokemonCenter_1F_EventScript_MoveTutor_17:
# 345 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_ALLURING_VOICE
	goto EverGrandeCity_PokemonCenter_1F_EventScript_MoveTutor_4

EverGrandeCity_PokemonCenter_1F_EventScript_MoveTutor_18:
# 347 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_LeagueMoveDeclined
	goto EverGrandeCity_PokemonCenter_1F_EventScript_MoveTutor_4

EverGrandeCity_PokemonCenter_1F_EventScript_MoveTutor_20:
# 352 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_LeagueMoveDeclined
	goto EverGrandeCity_PokemonCenter_1F_EventScript_MoveTutor_19


EverGrandeCity_PokemonLeague_1F_EventScript_MoveTutor::
# 360 "data/scripts/move_tutors.pory"
	lock
# 361 "data/scripts/move_tutors.pory"
	faceplayer
# 362 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_LeagueMoveTeach, MSGBOX_YESNO
# 363 "data/scripts/move_tutors.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EverGrandeCity_PokemonLeague_1F_EventScript_MoveTutor_2
EverGrandeCity_PokemonLeague_1F_EventScript_MoveTutor_1:
# 366 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_WhichMoveToTeach, MSGBOX_DEFAULT
# 367 "data/scripts/move_tutors.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, EverGrandeCity_PokemonLeague_1F_EventScript_MoveTutor_Text_0, EverGrandeCity_PokemonLeague_1F_EventScript_MoveTutor_Text_1, EverGrandeCity_PokemonLeague_1F_EventScript_MoveTutor_Text_2, EverGrandeCity_PokemonLeague_1F_EventScript_MoveTutor_Text_3, EverGrandeCity_PokemonLeague_1F_EventScript_MoveTutor_Text_4
# 368 "data/scripts/move_tutors.pory"
	switch VAR_RESULT
# 369 "data/scripts/move_tutors.pory"
	case 0, EverGrandeCity_PokemonLeague_1F_EventScript_MoveTutor_6
# 371 "data/scripts/move_tutors.pory"
	case 1, EverGrandeCity_PokemonLeague_1F_EventScript_MoveTutor_7
# 373 "data/scripts/move_tutors.pory"
	case 2, EverGrandeCity_PokemonLeague_1F_EventScript_MoveTutor_8
# 375 "data/scripts/move_tutors.pory"
	case 3, EverGrandeCity_PokemonLeague_1F_EventScript_MoveTutor_9
# 377 "data/scripts/move_tutors.pory"
	case 4, EverGrandeCity_PokemonLeague_1F_EventScript_MoveTutor_10
# 379 "data/scripts/move_tutors.pory"
	case 127, EverGrandeCity_PokemonLeague_1F_EventScript_MoveTutor_11
EverGrandeCity_PokemonLeague_1F_EventScript_MoveTutor_4:
# 382 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_LeagueMoveWhichMon, MSGBOX_DEFAULT
# 383 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 384 "data/scripts/move_tutors.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EverGrandeCity_PokemonLeague_1F_EventScript_MoveTutor_13
EverGrandeCity_PokemonLeague_1F_EventScript_MoveTutor_12:
# 387 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_LeagueMoveTaught, MSGBOX_DEFAULT
# 388 "data/scripts/move_tutors.pory"
	release
	return

EverGrandeCity_PokemonLeague_1F_EventScript_MoveTutor_2:
# 364 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_LeagueMoveDeclined
	goto EverGrandeCity_PokemonLeague_1F_EventScript_MoveTutor_1

EverGrandeCity_PokemonLeague_1F_EventScript_MoveTutor_6:
# 370 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_FRENZY_PLANT
	goto EverGrandeCity_PokemonLeague_1F_EventScript_MoveTutor_4

EverGrandeCity_PokemonLeague_1F_EventScript_MoveTutor_7:
# 372 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_BLAST_BURN
	goto EverGrandeCity_PokemonLeague_1F_EventScript_MoveTutor_4

EverGrandeCity_PokemonLeague_1F_EventScript_MoveTutor_8:
# 374 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_HYDRO_CANNON
	goto EverGrandeCity_PokemonLeague_1F_EventScript_MoveTutor_4

EverGrandeCity_PokemonLeague_1F_EventScript_MoveTutor_9:
# 376 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_ROCK_WRECKER
	goto EverGrandeCity_PokemonLeague_1F_EventScript_MoveTutor_4

EverGrandeCity_PokemonLeague_1F_EventScript_MoveTutor_10:
# 378 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_ROAR_OF_TIME
	goto EverGrandeCity_PokemonLeague_1F_EventScript_MoveTutor_4

EverGrandeCity_PokemonLeague_1F_EventScript_MoveTutor_11:
# 380 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_LeagueMoveDeclined
	goto EverGrandeCity_PokemonLeague_1F_EventScript_MoveTutor_4

EverGrandeCity_PokemonLeague_1F_EventScript_MoveTutor_13:
# 385 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_LeagueMoveDeclined
	goto EverGrandeCity_PokemonLeague_1F_EventScript_MoveTutor_12


MoveTutor_EventScript_LeagueMoveDeclined::
# 392 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_LeagueMoveDeclined, MSGBOX_DEFAULT
# 393 "data/scripts/move_tutors.pory"
	release
	return


BattleFrontier_Lounge4_EventScript_MoveTutor::
# 398 "data/scripts/move_tutors.pory"
	lock
# 399 "data/scripts/move_tutors.pory"
	faceplayer
# 400 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_BattleFrontierFreeMoveTeach, MSGBOX_YESNO
# 401 "data/scripts/move_tutors.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq BattleFrontier_Lounge4_EventScript_MoveTutor_2
BattleFrontier_Lounge4_EventScript_MoveTutor_1:
# 404 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_WhichMoveToTeach, MSGBOX_DEFAULT
# 405 "data/scripts/move_tutors.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, BattleFrontier_Lounge4_EventScript_MoveTutor_Text_0, BattleFrontier_Lounge4_EventScript_MoveTutor_Text_1, BattleFrontier_Lounge4_EventScript_MoveTutor_Text_2, BattleFrontier_Lounge4_EventScript_MoveTutor_Text_3, BattleFrontier_Lounge4_EventScript_MoveTutor_Text_4
# 406 "data/scripts/move_tutors.pory"
	switch VAR_RESULT
# 407 "data/scripts/move_tutors.pory"
	case 0, BattleFrontier_Lounge4_EventScript_MoveTutor_6
# 409 "data/scripts/move_tutors.pory"
	case 1, BattleFrontier_Lounge4_EventScript_MoveTutor_7
# 411 "data/scripts/move_tutors.pory"
	case 2, BattleFrontier_Lounge4_EventScript_MoveTutor_8
# 413 "data/scripts/move_tutors.pory"
	case 3, BattleFrontier_Lounge4_EventScript_MoveTutor_9
# 415 "data/scripts/move_tutors.pory"
	case 4, BattleFrontier_Lounge4_EventScript_MoveTutor_10
# 417 "data/scripts/move_tutors.pory"
	case 127, BattleFrontier_Lounge4_EventScript_MoveTutor_11
BattleFrontier_Lounge4_EventScript_MoveTutor_4:
# 420 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_BattleFrontierFreeMoveWhichMon, MSGBOX_DEFAULT
# 421 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 422 "data/scripts/move_tutors.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq BattleFrontier_Lounge4_EventScript_MoveTutor_13
BattleFrontier_Lounge4_EventScript_MoveTutor_12:
# 425 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_BattleFrontierFreeMoveTaught, MSGBOX_DEFAULT
# 426 "data/scripts/move_tutors.pory"
	release
	return

BattleFrontier_Lounge4_EventScript_MoveTutor_2:
# 402 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_BattleFrontierFreeMoveDeclined
	goto BattleFrontier_Lounge4_EventScript_MoveTutor_1

BattleFrontier_Lounge4_EventScript_MoveTutor_6:
# 408 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_SPRINGTIDE_STORM
	goto BattleFrontier_Lounge4_EventScript_MoveTutor_4

BattleFrontier_Lounge4_EventScript_MoveTutor_7:
# 410 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_BLEAKWIND_STORM
	goto BattleFrontier_Lounge4_EventScript_MoveTutor_4

BattleFrontier_Lounge4_EventScript_MoveTutor_8:
# 412 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_WILDBOLT_STORM
	goto BattleFrontier_Lounge4_EventScript_MoveTutor_4

BattleFrontier_Lounge4_EventScript_MoveTutor_9:
# 414 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_SANDSEAR_STORM
	goto BattleFrontier_Lounge4_EventScript_MoveTutor_4

BattleFrontier_Lounge4_EventScript_MoveTutor_10:
# 416 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_METEOR_BEAM
	goto BattleFrontier_Lounge4_EventScript_MoveTutor_4

BattleFrontier_Lounge4_EventScript_MoveTutor_11:
# 418 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_BattleFrontierFreeMoveDeclined
	goto BattleFrontier_Lounge4_EventScript_MoveTutor_4

BattleFrontier_Lounge4_EventScript_MoveTutor_13:
# 423 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_BattleFrontierFreeMoveDeclined
	goto BattleFrontier_Lounge4_EventScript_MoveTutor_12


MoveTutor_EventScript_BattleFrontierFreeMoveDeclined::
# 430 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_BattleFrontierFreeMoveDeclined, MSGBOX_DEFAULT
# 431 "data/scripts/move_tutors.pory"
	release
	return


BattleFrontier_Lounge7_EventScript_LeftMoveTutor::
# 436 "data/scripts/move_tutors.pory"
	lock
# 437 "data/scripts/move_tutors.pory"
	faceplayer
# 438 "data/scripts/move_tutors.pory"
	setvar VAR_TEMP_FRONTIER_TUTOR_ID, 0
# 439 "data/scripts/move_tutors.pory"
	goto_if_set FLAG_MET_FRONTIER_BEAUTY_MOVE_TUTOR, BattleFrontier_Lounge7_EventScript_LeftMoveTutor_2
# 443 "data/scripts/move_tutors.pory"
	msgbox BattleFrontier_Lounge7_Text_LeftTutorIntro, MSGBOX_DEFAULT
# 444 "data/scripts/move_tutors.pory"
	setflag FLAG_MET_FRONTIER_BEAUTY_MOVE_TUTOR
BattleFrontier_Lounge7_EventScript_LeftMoveTutor_1:
# 446 "data/scripts/move_tutors.pory"
	goto BattleFrontier_Lounge7_EventScript_LeftMoveTutor2
	return

BattleFrontier_Lounge7_EventScript_LeftMoveTutor_2:
# 440 "data/scripts/move_tutors.pory"
	msgbox BattleFrontier_Lounge7_Text_LeftTutorWelcomeBack, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge7_EventScript_LeftMoveTutor_1


BattleFrontier_Lounge7_EventScript_LeftMoveTutor2::
# 450 "data/scripts/move_tutors.pory"
	msgbox BattleFrontier_Lounge7_Text_TeachWhichMove, MSGBOX_DEFAULT
# 451 "data/scripts/move_tutors.pory"
	special ShowBattlePointsWindow
# 452 "data/scripts/move_tutors.pory"
	dynmultichoice 16, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, BattleFrontier_Lounge7_EventScript_LeftMoveTutor2_Text_0, BattleFrontier_Lounge7_EventScript_LeftMoveTutor2_Text_1, BattleFrontier_Lounge7_EventScript_LeftMoveTutor2_Text_2, BattleFrontier_Lounge7_EventScript_LeftMoveTutor2_Text_3, BattleFrontier_Lounge7_EventScript_LeftMoveTutor2_Text_4, BattleFrontier_Lounge7_EventScript_LeftMoveTutor2_Text_5, BattleFrontier_Lounge7_EventScript_LeftMoveTutor2_Text_6, BattleFrontier_Lounge7_EventScript_LeftMoveTutor2_Text_7
# 453 "data/scripts/move_tutors.pory"
	switch VAR_RESULT
# 454 "data/scripts/move_tutors.pory"
	case 0, BattleFrontier_Lounge7_EventScript_LeftMoveTutor2_3
# 456 "data/scripts/move_tutors.pory"
	case 1, BattleFrontier_Lounge7_EventScript_LeftMoveTutor2_4
# 458 "data/scripts/move_tutors.pory"
	case 2, BattleFrontier_Lounge7_EventScript_LeftMoveTutor2_5
# 460 "data/scripts/move_tutors.pory"
	case 3, BattleFrontier_Lounge7_EventScript_LeftMoveTutor2_6
# 462 "data/scripts/move_tutors.pory"
	case 4, BattleFrontier_Lounge7_EventScript_LeftMoveTutor2_7
# 464 "data/scripts/move_tutors.pory"
	case 5, BattleFrontier_Lounge7_EventScript_LeftMoveTutor2_8
# 466 "data/scripts/move_tutors.pory"
	case 6, BattleFrontier_Lounge7_EventScript_LeftMoveTutor2_9
# 468 "data/scripts/move_tutors.pory"
	case 7, BattleFrontier_Lounge7_EventScript_LeftMoveTutor2_10
# 470 "data/scripts/move_tutors.pory"
	case 127, BattleFrontier_Lounge7_EventScript_LeftMoveTutor2_11
BattleFrontier_Lounge7_EventScript_LeftMoveTutor2_1:
# 473 "data/scripts/move_tutors.pory"
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
	return

BattleFrontier_Lounge7_EventScript_LeftMoveTutor2_3:
# 455 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_AEROBLAST
	goto BattleFrontier_Lounge7_EventScript_LeftMoveTutor2_1

BattleFrontier_Lounge7_EventScript_LeftMoveTutor2_4:
# 457 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_DOOM_DESIRE
	goto BattleFrontier_Lounge7_EventScript_LeftMoveTutor2_1

BattleFrontier_Lounge7_EventScript_LeftMoveTutor2_5:
# 459 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_PSYCHO_BOOST
	goto BattleFrontier_Lounge7_EventScript_LeftMoveTutor2_1

BattleFrontier_Lounge7_EventScript_LeftMoveTutor2_6:
# 461 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_GLACIATE
	goto BattleFrontier_Lounge7_EventScript_LeftMoveTutor2_1

BattleFrontier_Lounge7_EventScript_LeftMoveTutor2_7:
# 463 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_STEAM_ERUPTION
	goto BattleFrontier_Lounge7_EventScript_LeftMoveTutor2_1

BattleFrontier_Lounge7_EventScript_LeftMoveTutor2_8:
# 465 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_FLEUR_CANNON
	goto BattleFrontier_Lounge7_EventScript_LeftMoveTutor2_1

BattleFrontier_Lounge7_EventScript_LeftMoveTutor2_9:
# 467 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_MALIGNANT_CHAIN
	goto BattleFrontier_Lounge7_EventScript_LeftMoveTutor2_1

BattleFrontier_Lounge7_EventScript_LeftMoveTutor2_10:
# 469 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_FIERY_WRATH
	goto BattleFrontier_Lounge7_EventScript_LeftMoveTutor2_1

BattleFrontier_Lounge7_EventScript_LeftMoveTutor2_11:
# 471 "data/scripts/move_tutors.pory"
	goto BattleFrontier_Lounge7_EventScript_ExitTutorMoveSelect
	goto BattleFrontier_Lounge7_EventScript_LeftMoveTutor2_1


BattleFrontier_Lounge7_EventScript_RightMoveTutor::
# 477 "data/scripts/move_tutors.pory"
	lock
# 478 "data/scripts/move_tutors.pory"
	faceplayer
# 479 "data/scripts/move_tutors.pory"
	setvar VAR_TEMP_FRONTIER_TUTOR_ID, 1
# 480 "data/scripts/move_tutors.pory"
	goto_if_set FLAG_MET_FRONTIER_SWIMMER_MOVE_TUTOR, BattleFrontier_Lounge7_EventScript_RightMoveTutor_2
# 484 "data/scripts/move_tutors.pory"
	msgbox BattleFrontier_Lounge7_Text_RightTutorIntro, MSGBOX_DEFAULT
# 485 "data/scripts/move_tutors.pory"
	setflag FLAG_MET_FRONTIER_SWIMMER_MOVE_TUTOR
BattleFrontier_Lounge7_EventScript_RightMoveTutor_1:
# 487 "data/scripts/move_tutors.pory"
	goto BattleFrontier_Lounge7_EventScript_RightMoveTutor2
	return

BattleFrontier_Lounge7_EventScript_RightMoveTutor_2:
# 481 "data/scripts/move_tutors.pory"
	msgbox BattleFrontier_Lounge7_Text_RightTutorWelcomeBack, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge7_EventScript_RightMoveTutor_1


BattleFrontier_Lounge7_EventScript_RightMoveTutor2::
# 491 "data/scripts/move_tutors.pory"
	msgbox BattleFrontier_Lounge7_Text_TeachWhichMove, MSGBOX_DEFAULT
# 492 "data/scripts/move_tutors.pory"
	special ShowBattlePointsWindow
# 493 "data/scripts/move_tutors.pory"
	dynmultichoice 16, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, BattleFrontier_Lounge7_EventScript_RightMoveTutor2_Text_0, BattleFrontier_Lounge7_EventScript_RightMoveTutor2_Text_1, BattleFrontier_Lounge7_EventScript_RightMoveTutor2_Text_2, BattleFrontier_Lounge7_EventScript_RightMoveTutor2_Text_3, BattleFrontier_Lounge7_EventScript_RightMoveTutor2_Text_4, BattleFrontier_Lounge7_EventScript_RightMoveTutor2_Text_5
# 494 "data/scripts/move_tutors.pory"
	switch VAR_RESULT
# 495 "data/scripts/move_tutors.pory"
	case 0, BattleFrontier_Lounge7_EventScript_RightMoveTutor2_3
# 497 "data/scripts/move_tutors.pory"
	case 1, BattleFrontier_Lounge7_EventScript_RightMoveTutor2_4
# 499 "data/scripts/move_tutors.pory"
	case 2, BattleFrontier_Lounge7_EventScript_RightMoveTutor2_5
# 501 "data/scripts/move_tutors.pory"
	case 3, BattleFrontier_Lounge7_EventScript_RightMoveTutor2_6
# 503 "data/scripts/move_tutors.pory"
	case 4, BattleFrontier_Lounge7_EventScript_RightMoveTutor2_7
# 505 "data/scripts/move_tutors.pory"
	case 5, BattleFrontier_Lounge7_EventScript_RightMoveTutor2_8
# 507 "data/scripts/move_tutors.pory"
	case 127, BattleFrontier_Lounge7_EventScript_RightMoveTutor2_9
BattleFrontier_Lounge7_EventScript_RightMoveTutor2_1:
# 510 "data/scripts/move_tutors.pory"
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
	return

BattleFrontier_Lounge7_EventScript_RightMoveTutor2_3:
# 496 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_TAIL_GLOW
	goto BattleFrontier_Lounge7_EventScript_RightMoveTutor2_1

BattleFrontier_Lounge7_EventScript_RightMoveTutor2_4:
# 498 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_SACRED_FIRE
	goto BattleFrontier_Lounge7_EventScript_RightMoveTutor2_1

BattleFrontier_Lounge7_EventScript_RightMoveTutor2_5:
# 500 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_SHADOW_FORCE
	goto BattleFrontier_Lounge7_EventScript_RightMoveTutor2_1

BattleFrontier_Lounge7_EventScript_RightMoveTutor2_6:
# 502 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_DIAMOND_STORM
	goto BattleFrontier_Lounge7_EventScript_RightMoveTutor2_1

BattleFrontier_Lounge7_EventScript_RightMoveTutor2_7:
# 504 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_BEHEMOTH_BLADE
	goto BattleFrontier_Lounge7_EventScript_RightMoveTutor2_1

BattleFrontier_Lounge7_EventScript_RightMoveTutor2_8:
# 506 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_BEHEMOTH_BASH
	goto BattleFrontier_Lounge7_EventScript_RightMoveTutor2_1

BattleFrontier_Lounge7_EventScript_RightMoveTutor2_9:
# 508 "data/scripts/move_tutors.pory"
	goto BattleFrontier_Lounge7_EventScript_ExitTutorMoveSelect
	goto BattleFrontier_Lounge7_EventScript_RightMoveTutor2_1


BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection::
# 514 "data/scripts/move_tutors.pory"
	special BufferBattleFrontierTutorMoveName
# 515 "data/scripts/move_tutors.pory"
	msgbox BattleFrontier_Lounge7_Text_MoveWillBe4BattlePoints, MSGBOX_YESNO
# 516 "data/scripts/move_tutors.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection_2
BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection_1:
# 524 "data/scripts/move_tutors.pory"
	specialvar VAR_TEMP_1, GetFrontierBattlePoints
# 525 "data/scripts/move_tutors.pory"
	compare VAR_TEMP_1, 3
	goto_if_ge BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection_5
BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection_4:
# 528 "data/scripts/move_tutors.pory"
	msgbox BattleFrontier_Lounge7_Text_HaventGotEnoughPoints, MSGBOX_DEFAULT
# 529 "data/scripts/move_tutors.pory"
	special CloseBattlePointsWindow
# 530 "data/scripts/move_tutors.pory"
	release
	return

BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection_2:
# 517 "data/scripts/move_tutors.pory"
	compare VAR_TEMP_FRONTIER_TUTOR_ID, 0
	goto_if_eq BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection_7
# 521 "data/scripts/move_tutors.pory"
	goto BattleFrontier_Lounge7_EventScript_RightMoveTutor2
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection_1

BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection_5:
# 526 "data/scripts/move_tutors.pory"
	goto BattleFrontier_Lounge7_EventScript_TeachTutorMove
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection_4

BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection_7:
# 518 "data/scripts/move_tutors.pory"
	goto BattleFrontier_Lounge7_EventScript_LeftMoveTutor2
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection_1


BattleFrontier_Lounge7_EventScript_TeachTutorMove::
# 534 "data/scripts/move_tutors.pory"
	msgbox BattleFrontier_Lounge7_Text_TeachMoveToWhichMon, MSGBOX_DEFAULT
# 535 "data/scripts/move_tutors.pory"
	special CloseBattlePointsWindow
# 536 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 537 "data/scripts/move_tutors.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq BattleFrontier_Lounge7_EventScript_TeachTutorMove_2
BattleFrontier_Lounge7_EventScript_TeachTutorMove_1:
# 540 "data/scripts/move_tutors.pory"
	setvar VAR_0x8004, 3
# 541 "data/scripts/move_tutors.pory"
	msgbox BattleFrontier_Lounge7_Text_IllTakeBattlePoints, MSGBOX_DEFAULT
# 542 "data/scripts/move_tutors.pory"
	special TakeFrontierBattlePoints
# 543 "data/scripts/move_tutors.pory"
	release
	return

BattleFrontier_Lounge7_EventScript_TeachTutorMove_2:
# 538 "data/scripts/move_tutors.pory"
	goto BattleFrontier_Lounge7_EventScript_ExitTutorMoveSelect
	goto BattleFrontier_Lounge7_EventScript_TeachTutorMove_1


BattleFrontier_Lounge7_EventScript_ExitTutorMoveSelect::
# 547 "data/scripts/move_tutors.pory"
	special CloseBattlePointsWindow
# 548 "data/scripts/move_tutors.pory"
	msgbox BattleFrontier_Lounge7_Text_YouDontWantTo, MSGBOX_DEFAULT
# 549 "data/scripts/move_tutors.pory"
	release
	return


MauveIslandWest_EventScript_Exp1MoveTutor::
# 554 "data/scripts/move_tutors.pory"
	lock
# 555 "data/scripts/move_tutors.pory"
	faceplayer
# 556 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_Exp1MoveTeach, MSGBOX_YESNO
# 557 "data/scripts/move_tutors.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MauveIslandWest_EventScript_Exp1MoveTutor_2
MauveIslandWest_EventScript_Exp1MoveTutor_1:
# 560 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_WhichMoveToTeach, MSGBOX_DEFAULT
# 561 "data/scripts/move_tutors.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, MauveIslandWest_EventScript_Exp1MoveTutor_Text_0, MauveIslandWest_EventScript_Exp1MoveTutor_Text_1, MauveIslandWest_EventScript_Exp1MoveTutor_Text_2, MauveIslandWest_EventScript_Exp1MoveTutor_Text_3
# 562 "data/scripts/move_tutors.pory"
	switch VAR_RESULT
# 563 "data/scripts/move_tutors.pory"
	case 0, MauveIslandWest_EventScript_Exp1MoveTutor_6
# 565 "data/scripts/move_tutors.pory"
	case 1, MauveIslandWest_EventScript_Exp1MoveTutor_7
# 567 "data/scripts/move_tutors.pory"
	case 2, MauveIslandWest_EventScript_Exp1MoveTutor_8
# 569 "data/scripts/move_tutors.pory"
	case 3, MauveIslandWest_EventScript_Exp1MoveTutor_9
# 571 "data/scripts/move_tutors.pory"
	case 127, MauveIslandWest_EventScript_Exp1MoveTutor_10
MauveIslandWest_EventScript_Exp1MoveTutor_4:
# 574 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_Exp1MoveWhichMon, MSGBOX_DEFAULT
# 575 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 576 "data/scripts/move_tutors.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MauveIslandWest_EventScript_Exp1MoveTutor_12
MauveIslandWest_EventScript_Exp1MoveTutor_11:
# 579 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_Exp1MoveTaught, MSGBOX_DEFAULT
# 580 "data/scripts/move_tutors.pory"
	release
	return

MauveIslandWest_EventScript_Exp1MoveTutor_2:
# 558 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_Exp1MoveDeclined
	goto MauveIslandWest_EventScript_Exp1MoveTutor_1

MauveIslandWest_EventScript_Exp1MoveTutor_6:
# 564 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_BODY_PRESS
	goto MauveIslandWest_EventScript_Exp1MoveTutor_4

MauveIslandWest_EventScript_Exp1MoveTutor_7:
# 566 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_SPIKES
	goto MauveIslandWest_EventScript_Exp1MoveTutor_4

MauveIslandWest_EventScript_Exp1MoveTutor_8:
# 568 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_TOXIC_SPIKES
	goto MauveIslandWest_EventScript_Exp1MoveTutor_4

MauveIslandWest_EventScript_Exp1MoveTutor_9:
# 570 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_CONFUSE_RAY
	goto MauveIslandWest_EventScript_Exp1MoveTutor_4

MauveIslandWest_EventScript_Exp1MoveTutor_10:
# 572 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_CombatMoveDeclined
	goto MauveIslandWest_EventScript_Exp1MoveTutor_4

MauveIslandWest_EventScript_Exp1MoveTutor_12:
# 577 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_Exp1MoveDeclined
	goto MauveIslandWest_EventScript_Exp1MoveTutor_11


MoveTutor_EventScript_Exp1MoveDeclined::
# 584 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_Exp1MoveDeclined, MSGBOX_DEFAULT
# 585 "data/scripts/move_tutors.pory"
	release
	return


MoveTutor_EventScript_OpenPartyMenu::
# 591 "data/scripts/move_tutors.pory"
	chooseboxmon SELECT_PC_MON_MOVE_TUTOR
# 592 "data/scripts/move_tutors.pory"
	waitstate
# 593 "data/scripts/move_tutors.pory"
	lock
# 594 "data/scripts/move_tutors.pory"
	faceplayer
# 595 "data/scripts/move_tutors.pory"
	release
	return


MoveTutor_AfterChooseBoxMon::
# 599 "data/scripts/move_tutors.pory"
	waitstate
# 600 "data/scripts/move_tutors.pory"
	special CanTeachMoveBoxMon
# 601 "data/scripts/move_tutors.pory"
	waitstate
	return


MauvilleCity_EventScript_TricksTutor_Text_0:
# 36 "data/scripts/move_tutors.pory"
	.string "Trick$"

MauvilleCity_EventScript_TricksTutor_Text_1:
# 36 "data/scripts/move_tutors.pory"
	.string "Switcheroo$"

LilycoveCity_EventScript_CombatMoveTutor_Text_0:
# 183 "data/scripts/move_tutors.pory"
	.string "Ice Punch$"

LilycoveCity_EventScript_CombatMoveTutor_Text_1:
# 183 "data/scripts/move_tutors.pory"
	.string "Thunder Punch$"

LilycoveCity_EventScript_CombatMoveTutor_Text_2:
# 183 "data/scripts/move_tutors.pory"
	.string "Fire Punch$"

LilycoveCity_EventScript_CombatMoveTutor_Text_3:
# 183 "data/scripts/move_tutors.pory"
	.string "Mega Punch$"

LilycoveCity_EventScript_CombatMoveTutor_Text_4:
# 183 "data/scripts/move_tutors.pory"
	.string "Mega Kick$"

LilycoveCity_EventScript_CombatMoveTutor_Text_5:
# 183 "data/scripts/move_tutors.pory"
	.string "Rock Slide$"

MossdeepCity_EventScript_PledgeMoveTutor_Text_0:
# 223 "data/scripts/move_tutors.pory"
	.string "Grass Pledge$"

MossdeepCity_EventScript_PledgeMoveTutor_Text_1:
# 223 "data/scripts/move_tutors.pory"
	.string "Fire Pledge$"

MossdeepCity_EventScript_PledgeMoveTutor_Text_2:
# 223 "data/scripts/move_tutors.pory"
	.string "Water Pledge$"

PacifidlogTown_PokemonCenter_1F_EventScript_RecoilMoveTutor_Text_0:
# 280 "data/scripts/move_tutors.pory"
	.string "Double-Edge$"

PacifidlogTown_PokemonCenter_1F_EventScript_RecoilMoveTutor_Text_1:
# 280 "data/scripts/move_tutors.pory"
	.string "Wood Hammer$"

PacifidlogTown_PokemonCenter_1F_EventScript_RecoilMoveTutor_Text_2:
# 280 "data/scripts/move_tutors.pory"
	.string "Flare Blitz$"

PacifidlogTown_PokemonCenter_1F_EventScript_RecoilMoveTutor_Text_3:
# 280 "data/scripts/move_tutors.pory"
	.string "Wave Crash$"

PacifidlogTown_PokemonCenter_1F_EventScript_RecoilMoveTutor_Text_4:
# 280 "data/scripts/move_tutors.pory"
	.string "Brave Bird$"

PacifidlogTown_PokemonCenter_1F_EventScript_RecoilMoveTutor_Text_5:
# 280 "data/scripts/move_tutors.pory"
	.string "Wild Charge$"

EverGrandeCity_PokemonCenter_1F_EventScript_MoveTutor_Text_0:
# 320 "data/scripts/move_tutors.pory"
	.string "Temper Flare$"

EverGrandeCity_PokemonCenter_1F_EventScript_MoveTutor_Text_1:
# 320 "data/scripts/move_tutors.pory"
	.string "Grassy Glide$"

EverGrandeCity_PokemonCenter_1F_EventScript_MoveTutor_Text_2:
# 320 "data/scripts/move_tutors.pory"
	.string "Supercell Slam$"

EverGrandeCity_PokemonCenter_1F_EventScript_MoveTutor_Text_3:
# 320 "data/scripts/move_tutors.pory"
	.string "Coaching$"

EverGrandeCity_PokemonCenter_1F_EventScript_MoveTutor_Text_4:
# 320 "data/scripts/move_tutors.pory"
	.string "Upper Hand$"

EverGrandeCity_PokemonCenter_1F_EventScript_MoveTutor_Text_5:
# 320 "data/scripts/move_tutors.pory"
	.string "Psychic Noise$"

EverGrandeCity_PokemonCenter_1F_EventScript_MoveTutor_Text_6:
# 320 "data/scripts/move_tutors.pory"
	.string "Triple Axel$"

EverGrandeCity_PokemonCenter_1F_EventScript_MoveTutor_Text_7:
# 320 "data/scripts/move_tutors.pory"
	.string "Skitter Smack$"

EverGrandeCity_PokemonCenter_1F_EventScript_MoveTutor_Text_8:
# 320 "data/scripts/move_tutors.pory"
	.string "Dragon Cheer$"

EverGrandeCity_PokemonCenter_1F_EventScript_MoveTutor_Text_9:
# 320 "data/scripts/move_tutors.pory"
	.string "Lash Out$"

EverGrandeCity_PokemonCenter_1F_EventScript_MoveTutor_Text_10:
# 320 "data/scripts/move_tutors.pory"
	.string "Steel Beam$"

EverGrandeCity_PokemonCenter_1F_EventScript_MoveTutor_Text_11:
# 320 "data/scripts/move_tutors.pory"
	.string "Alluring Voice$"

EverGrandeCity_PokemonLeague_1F_EventScript_MoveTutor_Text_0:
# 367 "data/scripts/move_tutors.pory"
	.string "Frenzy Plant$"

EverGrandeCity_PokemonLeague_1F_EventScript_MoveTutor_Text_1:
# 367 "data/scripts/move_tutors.pory"
	.string "Blast Burn$"

EverGrandeCity_PokemonLeague_1F_EventScript_MoveTutor_Text_2:
# 367 "data/scripts/move_tutors.pory"
	.string "Hydro Cannon$"

EverGrandeCity_PokemonLeague_1F_EventScript_MoveTutor_Text_3:
# 367 "data/scripts/move_tutors.pory"
	.string "Rock Wrecker$"

EverGrandeCity_PokemonLeague_1F_EventScript_MoveTutor_Text_4:
# 367 "data/scripts/move_tutors.pory"
	.string "Roar of Time$"

BattleFrontier_Lounge4_EventScript_MoveTutor_Text_0:
# 405 "data/scripts/move_tutors.pory"
	.string "Springtide Storm$"

BattleFrontier_Lounge4_EventScript_MoveTutor_Text_1:
# 405 "data/scripts/move_tutors.pory"
	.string "Bleakwind Storm$"

BattleFrontier_Lounge4_EventScript_MoveTutor_Text_2:
# 405 "data/scripts/move_tutors.pory"
	.string "Wildbolt Storm$"

BattleFrontier_Lounge4_EventScript_MoveTutor_Text_3:
# 405 "data/scripts/move_tutors.pory"
	.string "Sandsear Storm$"

BattleFrontier_Lounge4_EventScript_MoveTutor_Text_4:
# 405 "data/scripts/move_tutors.pory"
	.string "Meteor Beam$"

BattleFrontier_Lounge7_EventScript_LeftMoveTutor2_Text_0:
# 452 "data/scripts/move_tutors.pory"
	.string "Aeroblast$"

BattleFrontier_Lounge7_EventScript_LeftMoveTutor2_Text_1:
# 452 "data/scripts/move_tutors.pory"
	.string "Doom Desire$"

BattleFrontier_Lounge7_EventScript_LeftMoveTutor2_Text_2:
# 452 "data/scripts/move_tutors.pory"
	.string "Psycho Boost$"

BattleFrontier_Lounge7_EventScript_LeftMoveTutor2_Text_3:
# 452 "data/scripts/move_tutors.pory"
	.string "Glaciate$"

BattleFrontier_Lounge7_EventScript_LeftMoveTutor2_Text_4:
# 452 "data/scripts/move_tutors.pory"
	.string "Steam Eruption$"

BattleFrontier_Lounge7_EventScript_LeftMoveTutor2_Text_5:
# 452 "data/scripts/move_tutors.pory"
	.string "Fleur Cannon$"

BattleFrontier_Lounge7_EventScript_LeftMoveTutor2_Text_6:
# 452 "data/scripts/move_tutors.pory"
	.string "Malignant Chain$"

BattleFrontier_Lounge7_EventScript_LeftMoveTutor2_Text_7:
# 452 "data/scripts/move_tutors.pory"
	.string "Fiery Wrath$"

BattleFrontier_Lounge7_EventScript_RightMoveTutor2_Text_0:
# 493 "data/scripts/move_tutors.pory"
	.string "Tail Glow$"

BattleFrontier_Lounge7_EventScript_RightMoveTutor2_Text_1:
# 493 "data/scripts/move_tutors.pory"
	.string "Sacred Fire$"

BattleFrontier_Lounge7_EventScript_RightMoveTutor2_Text_2:
# 493 "data/scripts/move_tutors.pory"
	.string "Shadow Force$"

BattleFrontier_Lounge7_EventScript_RightMoveTutor2_Text_3:
# 493 "data/scripts/move_tutors.pory"
	.string "Diamond Storm$"

BattleFrontier_Lounge7_EventScript_RightMoveTutor2_Text_4:
# 493 "data/scripts/move_tutors.pory"
	.string "Behemoth Blade$"

BattleFrontier_Lounge7_EventScript_RightMoveTutor2_Text_5:
# 493 "data/scripts/move_tutors.pory"
	.string "Behemoth Bash$"

MauveIslandWest_EventScript_Exp1MoveTutor_Text_0:
# 561 "data/scripts/move_tutors.pory"
	.string "Body Press$"

MauveIslandWest_EventScript_Exp1MoveTutor_Text_1:
# 561 "data/scripts/move_tutors.pory"
	.string "Spikes$"

MauveIslandWest_EventScript_Exp1MoveTutor_Text_2:
# 561 "data/scripts/move_tutors.pory"
	.string "Toxic Spikes$"

MauveIslandWest_EventScript_Exp1MoveTutor_Text_3:
# 561 "data/scripts/move_tutors.pory"
	.string "Confuse Ray$"
