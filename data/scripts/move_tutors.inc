# 1 "data/scripts/move_tutors.pory"

# 2 "data/scripts/move_tutors.pory"
MoveTutor_EventScript_OpenPartyMenu::
# 3 "data/scripts/move_tutors.pory"
	special ChooseMonForMoveTutor
# 4 "data/scripts/move_tutors.pory"
	waitstate
# 5 "data/scripts/move_tutors.pory"
	lock
# 6 "data/scripts/move_tutors.pory"
	faceplayer
# 7 "data/scripts/move_tutors.pory"
	return
# 8 "data/scripts/move_tutors.pory"

# 9 "data/scripts/move_tutors.pory"
MoveTutor_EventScript_CanOnlyBeLearnedOnce::
# 10 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_ThisMoveCanOnlyBeLearnedOnce, MSGBOX_YESNO
# 11 "data/scripts/move_tutors.pory"
	return

SlateportCity_PokemonFanClub_EventScript_SwaggerTutor::
# 15 "data/scripts/move_tutors.pory"
	lock
# 16 "data/scripts/move_tutors.pory"
	faceplayer
# 17 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_SwaggerTeach, MSGBOX_YESNO
# 18 "data/scripts/move_tutors.pory"
	compare VAR_RESULT, NO
	goto_if_eq SlateportCity_PokemonFanClub_EventScript_SwaggerTutor_2
SlateportCity_PokemonFanClub_EventScript_SwaggerTutor_1:
# 21 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_SwaggerWhichMon, MSGBOX_DEFAULT
# 22 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_SWAGGER
# 23 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 24 "data/scripts/move_tutors.pory"
	compare VAR_RESULT, NO
	goto_if_eq SlateportCity_PokemonFanClub_EventScript_SwaggerTutor_5
SlateportCity_PokemonFanClub_EventScript_SwaggerTutor_4:
# 27 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_SwaggerTaught, MSGBOX_DEFAULT
# 28 "data/scripts/move_tutors.pory"
	release
	return

SlateportCity_PokemonFanClub_EventScript_SwaggerTutor_2:
# 19 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_SwaggerDeclined
	goto SlateportCity_PokemonFanClub_EventScript_SwaggerTutor_1

SlateportCity_PokemonFanClub_EventScript_SwaggerTutor_5:
# 25 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_SwaggerDeclined
	goto SlateportCity_PokemonFanClub_EventScript_SwaggerTutor_4


MoveTutor_EventScript_SwaggerDeclined::
# 32 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_SwaggerDeclined, MSGBOX_DEFAULT
# 33 "data/scripts/move_tutors.pory"
	release
	return


MauvilleCity_EventScript_TricksTutor::
# 38 "data/scripts/move_tutors.pory"
	lock
# 39 "data/scripts/move_tutors.pory"
	faceplayer
# 40 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_TricksTeach, MSGBOX_YESNO
# 41 "data/scripts/move_tutors.pory"
	compare VAR_RESULT, NO
	goto_if_eq MauvilleCity_EventScript_TricksTutor_2
MauvilleCity_EventScript_TricksTutor_1:
# 44 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_WhichMoveToTeach, MSGBOX_DEFAULT
# 45 "data/scripts/move_tutors.pory"
	dynmultichoice 0, 5, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, MauvilleCity_EventScript_TricksTutor_Text_0, MauvilleCity_EventScript_TricksTutor_Text_1
# 46 "data/scripts/move_tutors.pory"
	switch VAR_RESULT
# 47 "data/scripts/move_tutors.pory"
	case 0, MauvilleCity_EventScript_TricksTutor_6
# 49 "data/scripts/move_tutors.pory"
	case 1, MauvilleCity_EventScript_TricksTutor_7
# 51 "data/scripts/move_tutors.pory"
	case 127, MauvilleCity_EventScript_TricksTutor_8
MauvilleCity_EventScript_TricksTutor_4:
# 54 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_TricksWhichMon, MSGBOX_DEFAULT
# 55 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 56 "data/scripts/move_tutors.pory"
	compare VAR_RESULT, NO
	goto_if_eq MauvilleCity_EventScript_TricksTutor_10
MauvilleCity_EventScript_TricksTutor_9:
# 59 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_TricksTaught, MSGBOX_DEFAULT
# 60 "data/scripts/move_tutors.pory"
	release
	return

MauvilleCity_EventScript_TricksTutor_2:
# 42 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_TricksDeclined
	goto MauvilleCity_EventScript_TricksTutor_1

MauvilleCity_EventScript_TricksTutor_6:
# 48 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_TRICK
	goto MauvilleCity_EventScript_TricksTutor_4

MauvilleCity_EventScript_TricksTutor_7:
# 50 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_SWITCHEROO
	goto MauvilleCity_EventScript_TricksTutor_4

MauvilleCity_EventScript_TricksTutor_8:
# 52 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_TricksDeclined
	goto MauvilleCity_EventScript_TricksTutor_4

MauvilleCity_EventScript_TricksTutor_10:
# 57 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_TricksDeclined
	goto MauvilleCity_EventScript_TricksTutor_9


MoveTutor_EventScript_TricksDeclined::
# 64 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_TricksDeclined, MSGBOX_DEFAULT
# 65 "data/scripts/move_tutors.pory"
	release
	return


VerdanturfTown_PokemonCenter_1F_EventScript_IcyWindTutor::
# 70 "data/scripts/move_tutors.pory"
	lock
# 71 "data/scripts/move_tutors.pory"
	faceplayer
# 72 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_IcyWindTeach, MSGBOX_YESNO
# 73 "data/scripts/move_tutors.pory"
	compare VAR_RESULT, NO
	goto_if_eq VerdanturfTown_PokemonCenter_1F_EventScript_IcyWindTutor_2
VerdanturfTown_PokemonCenter_1F_EventScript_IcyWindTutor_1:
# 76 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_IcyWindWhichMon, MSGBOX_DEFAULT
# 77 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_ICY_WIND
# 78 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 79 "data/scripts/move_tutors.pory"
	compare VAR_RESULT, NO
	goto_if_eq VerdanturfTown_PokemonCenter_1F_EventScript_IcyWindTutor_5
VerdanturfTown_PokemonCenter_1F_EventScript_IcyWindTutor_4:
# 82 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_IcyWindTaught, MSGBOX_DEFAULT
# 83 "data/scripts/move_tutors.pory"
	release
	return

VerdanturfTown_PokemonCenter_1F_EventScript_IcyWindTutor_2:
# 74 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_IcyWindDeclined
	goto VerdanturfTown_PokemonCenter_1F_EventScript_IcyWindTutor_1

VerdanturfTown_PokemonCenter_1F_EventScript_IcyWindTutor_5:
# 80 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_IcyWindDeclined
	goto VerdanturfTown_PokemonCenter_1F_EventScript_IcyWindTutor_4


MoveTutor_EventScript_IcyWindDeclined::
# 87 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_IcyWindDeclined, MSGBOX_DEFAULT
# 88 "data/scripts/move_tutors.pory"
	release
	return


FallarborTown_Mart_EventScript_SignalBeamTutor::
# 93 "data/scripts/move_tutors.pory"
	lock
# 94 "data/scripts/move_tutors.pory"
	faceplayer
# 95 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_SignalBeamTeach, MSGBOX_YESNO
# 96 "data/scripts/move_tutors.pory"
	compare VAR_RESULT, NO
	goto_if_eq FallarborTown_Mart_EventScript_SignalBeamTutor_2
FallarborTown_Mart_EventScript_SignalBeamTutor_1:
# 99 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_SignalBeamWhichMon, MSGBOX_DEFAULT
# 100 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_SIGNAL_BEAM
# 101 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 102 "data/scripts/move_tutors.pory"
	compare VAR_RESULT, NO
	goto_if_eq FallarborTown_Mart_EventScript_SignalBeamTutor_5
FallarborTown_Mart_EventScript_SignalBeamTutor_4:
# 105 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_SignalBeamTaught, MSGBOX_DEFAULT
# 106 "data/scripts/move_tutors.pory"
	release
	return

FallarborTown_Mart_EventScript_SignalBeamTutor_2:
# 97 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_SignalBeamDeclined
	goto FallarborTown_Mart_EventScript_SignalBeamTutor_1

FallarborTown_Mart_EventScript_SignalBeamTutor_5:
# 103 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_SignalBeamDeclined
	goto FallarborTown_Mart_EventScript_SignalBeamTutor_4


MoveTutor_EventScript_SignalBeamDeclined::
# 110 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_SignalBeamDeclined, MSGBOX_DEFAULT
# 111 "data/scripts/move_tutors.pory"
	release
	return


LavaridgeTown_House_EventScript_SleepTalkTutor::
# 116 "data/scripts/move_tutors.pory"
	lock
# 117 "data/scripts/move_tutors.pory"
	faceplayer
# 118 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_SleepTalkTeach, MSGBOX_YESNO
# 119 "data/scripts/move_tutors.pory"
	compare VAR_RESULT, NO
	goto_if_eq LavaridgeTown_House_EventScript_SleepTalkTutor_2
LavaridgeTown_House_EventScript_SleepTalkTutor_1:
# 122 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_SleepTalkWhichMon, MSGBOX_DEFAULT
# 123 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_SLEEP_TALK
# 124 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 125 "data/scripts/move_tutors.pory"
	compare VAR_RESULT, NO
	goto_if_eq LavaridgeTown_House_EventScript_SleepTalkTutor_5
LavaridgeTown_House_EventScript_SleepTalkTutor_4:
# 128 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_SleepTalkTaught, MSGBOX_DEFAULT
# 129 "data/scripts/move_tutors.pory"
	release
	return

LavaridgeTown_House_EventScript_SleepTalkTutor_2:
# 120 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_SleepTalkDeclined
	goto LavaridgeTown_House_EventScript_SleepTalkTutor_1

LavaridgeTown_House_EventScript_SleepTalkTutor_5:
# 126 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_SleepTalkDeclined
	goto LavaridgeTown_House_EventScript_SleepTalkTutor_4


MoveTutor_EventScript_SleepTalkDeclined::
# 133 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_SleepTalkDeclined, MSGBOX_DEFAULT
# 134 "data/scripts/move_tutors.pory"
	release
	return


FortreeCity_House2_EventScript_BodySlamTutor::
# 139 "data/scripts/move_tutors.pory"
	lock
# 140 "data/scripts/move_tutors.pory"
	faceplayer
# 141 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_BodySlamTeach, MSGBOX_YESNO
# 142 "data/scripts/move_tutors.pory"
	compare VAR_RESULT, NO
	goto_if_eq FortreeCity_House2_EventScript_BodySlamTutor_2
FortreeCity_House2_EventScript_BodySlamTutor_1:
# 145 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_BodySlamWhichMon, MSGBOX_DEFAULT
# 146 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_SLEEP_TALK
# 147 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 148 "data/scripts/move_tutors.pory"
	compare VAR_RESULT, NO
	goto_if_eq FortreeCity_House2_EventScript_BodySlamTutor_5
FortreeCity_House2_EventScript_BodySlamTutor_4:
# 151 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_BodySlamTaught, MSGBOX_DEFAULT
# 152 "data/scripts/move_tutors.pory"
	release
	return

FortreeCity_House2_EventScript_BodySlamTutor_2:
# 143 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_BodySlamDeclined
	goto FortreeCity_House2_EventScript_BodySlamTutor_1

FortreeCity_House2_EventScript_BodySlamTutor_5:
# 149 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_BodySlamDeclined
	goto FortreeCity_House2_EventScript_BodySlamTutor_4


MoveTutor_EventScript_BodySlamDeclined::
# 156 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_BodySlamDeclined, MSGBOX_DEFAULT
# 157 "data/scripts/move_tutors.pory"
	release
	return


LilycoveCity_DepartmentStoreRooftop_EventScript_HyperVoiceTutor::
# 162 "data/scripts/move_tutors.pory"
	lock
# 163 "data/scripts/move_tutors.pory"
	faceplayer
# 164 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_HyperVoiceTeach, MSGBOX_YESNO
# 165 "data/scripts/move_tutors.pory"
	compare VAR_RESULT, NO
	goto_if_eq LilycoveCity_DepartmentStoreRooftop_EventScript_HyperVoiceTutor_2
LilycoveCity_DepartmentStoreRooftop_EventScript_HyperVoiceTutor_1:
# 168 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_HyperVoiceWhichMon, MSGBOX_DEFAULT
# 169 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_HYPER_VOICE
# 170 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 171 "data/scripts/move_tutors.pory"
	compare VAR_RESULT, NO
	goto_if_eq LilycoveCity_DepartmentStoreRooftop_EventScript_HyperVoiceTutor_5
LilycoveCity_DepartmentStoreRooftop_EventScript_HyperVoiceTutor_4:
# 174 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_HyperVoiceTaught, MSGBOX_DEFAULT
# 175 "data/scripts/move_tutors.pory"
	release
	return

LilycoveCity_DepartmentStoreRooftop_EventScript_HyperVoiceTutor_2:
# 166 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_HyperVoiceDeclined
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_HyperVoiceTutor_1

LilycoveCity_DepartmentStoreRooftop_EventScript_HyperVoiceTutor_5:
# 172 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_HyperVoiceDeclined
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_HyperVoiceTutor_4


MoveTutor_EventScript_HyperVoiceDeclined::
# 179 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_HyperVoiceDeclined, MSGBOX_DEFAULT
# 180 "data/scripts/move_tutors.pory"
	release
	return


LilycoveCity_EventScript_CombatMoveTutor::
# 185 "data/scripts/move_tutors.pory"
	lock
# 186 "data/scripts/move_tutors.pory"
	faceplayer
# 187 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_CombatMoveTeach, MSGBOX_YESNO
# 188 "data/scripts/move_tutors.pory"
	compare VAR_RESULT, NO
	goto_if_eq LilycoveCity_EventScript_CombatMoveTutor_2
LilycoveCity_EventScript_CombatMoveTutor_1:
# 191 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_WhichMoveToTeach, MSGBOX_DEFAULT
# 192 "data/scripts/move_tutors.pory"
	dynmultichoice 0, 5, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, LilycoveCity_EventScript_CombatMoveTutor_Text_0, LilycoveCity_EventScript_CombatMoveTutor_Text_1, LilycoveCity_EventScript_CombatMoveTutor_Text_2, LilycoveCity_EventScript_CombatMoveTutor_Text_3, LilycoveCity_EventScript_CombatMoveTutor_Text_4, LilycoveCity_EventScript_CombatMoveTutor_Text_5
# 193 "data/scripts/move_tutors.pory"
	switch VAR_RESULT
# 194 "data/scripts/move_tutors.pory"
	case 0, LilycoveCity_EventScript_CombatMoveTutor_6
# 196 "data/scripts/move_tutors.pory"
	case 1, LilycoveCity_EventScript_CombatMoveTutor_7
# 198 "data/scripts/move_tutors.pory"
	case 2, LilycoveCity_EventScript_CombatMoveTutor_8
# 200 "data/scripts/move_tutors.pory"
	case 3, LilycoveCity_EventScript_CombatMoveTutor_9
# 202 "data/scripts/move_tutors.pory"
	case 4, LilycoveCity_EventScript_CombatMoveTutor_10
# 204 "data/scripts/move_tutors.pory"
	case 5, LilycoveCity_EventScript_CombatMoveTutor_11
# 206 "data/scripts/move_tutors.pory"
	case 127, LilycoveCity_EventScript_CombatMoveTutor_12
LilycoveCity_EventScript_CombatMoveTutor_4:
# 209 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_CombatMoveWhichMon, MSGBOX_DEFAULT
# 210 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 211 "data/scripts/move_tutors.pory"
	compare VAR_RESULT, NO
	goto_if_eq LilycoveCity_EventScript_CombatMoveTutor_14
LilycoveCity_EventScript_CombatMoveTutor_13:
# 214 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_CombatMoveTaught, MSGBOX_DEFAULT
# 215 "data/scripts/move_tutors.pory"
	release
	return

LilycoveCity_EventScript_CombatMoveTutor_2:
# 189 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_CombatMoveDeclined
	goto LilycoveCity_EventScript_CombatMoveTutor_1

LilycoveCity_EventScript_CombatMoveTutor_6:
# 195 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_ICE_PUNCH
	goto LilycoveCity_EventScript_CombatMoveTutor_4

LilycoveCity_EventScript_CombatMoveTutor_7:
# 197 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_THUNDER_PUNCH
	goto LilycoveCity_EventScript_CombatMoveTutor_4

LilycoveCity_EventScript_CombatMoveTutor_8:
# 199 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_FIRE_PUNCH
	goto LilycoveCity_EventScript_CombatMoveTutor_4

LilycoveCity_EventScript_CombatMoveTutor_9:
# 201 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_MEGA_PUNCH
	goto LilycoveCity_EventScript_CombatMoveTutor_4

LilycoveCity_EventScript_CombatMoveTutor_10:
# 203 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_MEGA_KICK
	goto LilycoveCity_EventScript_CombatMoveTutor_4

LilycoveCity_EventScript_CombatMoveTutor_11:
# 205 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_ROCK_SLIDE
	goto LilycoveCity_EventScript_CombatMoveTutor_4

LilycoveCity_EventScript_CombatMoveTutor_12:
# 207 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_CombatMoveDeclined
	goto LilycoveCity_EventScript_CombatMoveTutor_4

LilycoveCity_EventScript_CombatMoveTutor_14:
# 212 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_CombatMoveDeclined
	goto LilycoveCity_EventScript_CombatMoveTutor_13


MoveTutor_EventScript_CombatMoveDeclined::
# 219 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_CombatMoveDeclined, MSGBOX_DEFAULT
# 220 "data/scripts/move_tutors.pory"
	release
	return


MossdeepCity_EventScript_PledgeMoveTutor::
# 225 "data/scripts/move_tutors.pory"
	lock
# 226 "data/scripts/move_tutors.pory"
	faceplayer
# 227 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_PledgeMoveTeach, MSGBOX_YESNO
# 228 "data/scripts/move_tutors.pory"
	compare VAR_RESULT, NO
	goto_if_eq MossdeepCity_EventScript_PledgeMoveTutor_2
MossdeepCity_EventScript_PledgeMoveTutor_1:
# 231 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_WhichMoveToTeach, MSGBOX_DEFAULT
# 232 "data/scripts/move_tutors.pory"
	dynmultichoice 0, 5, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, MossdeepCity_EventScript_PledgeMoveTutor_Text_0, MossdeepCity_EventScript_PledgeMoveTutor_Text_1, MossdeepCity_EventScript_PledgeMoveTutor_Text_2
# 233 "data/scripts/move_tutors.pory"
	switch VAR_RESULT
# 234 "data/scripts/move_tutors.pory"
	case 0, MossdeepCity_EventScript_PledgeMoveTutor_6
# 236 "data/scripts/move_tutors.pory"
	case 1, MossdeepCity_EventScript_PledgeMoveTutor_7
# 238 "data/scripts/move_tutors.pory"
	case 2, MossdeepCity_EventScript_PledgeMoveTutor_8
# 240 "data/scripts/move_tutors.pory"
	case 127, MossdeepCity_EventScript_PledgeMoveTutor_9
MossdeepCity_EventScript_PledgeMoveTutor_4:
# 243 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_PledgeMoveWhichMon, MSGBOX_DEFAULT
# 244 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 245 "data/scripts/move_tutors.pory"
	compare VAR_RESULT, NO
	goto_if_eq MossdeepCity_EventScript_PledgeMoveTutor_11
MossdeepCity_EventScript_PledgeMoveTutor_10:
# 248 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_PledgeMoveTaught, MSGBOX_DEFAULT
# 249 "data/scripts/move_tutors.pory"
	release
	return

MossdeepCity_EventScript_PledgeMoveTutor_2:
# 229 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_PledgeMoveDeclined
	goto MossdeepCity_EventScript_PledgeMoveTutor_1

MossdeepCity_EventScript_PledgeMoveTutor_6:
# 235 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_GRASS_PLEDGE
	goto MossdeepCity_EventScript_PledgeMoveTutor_4

MossdeepCity_EventScript_PledgeMoveTutor_7:
# 237 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_FIRE_PLEDGE
	goto MossdeepCity_EventScript_PledgeMoveTutor_4

MossdeepCity_EventScript_PledgeMoveTutor_8:
# 239 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_WATER_PLEDGE
	goto MossdeepCity_EventScript_PledgeMoveTutor_4

MossdeepCity_EventScript_PledgeMoveTutor_9:
# 241 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_PledgeMoveDeclined
	goto MossdeepCity_EventScript_PledgeMoveTutor_4

MossdeepCity_EventScript_PledgeMoveTutor_11:
# 246 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_PledgeMoveDeclined
	goto MossdeepCity_EventScript_PledgeMoveTutor_10


MoveTutor_EventScript_PledgeMoveDeclined::
# 253 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_PledgeMoveDeclined, MSGBOX_DEFAULT
# 254 "data/scripts/move_tutors.pory"
	release
	return


SootopolisCity_PokemonCenter_1F_EventScript_DynamicPunchTutor::
# 259 "data/scripts/move_tutors.pory"
	lock
# 260 "data/scripts/move_tutors.pory"
	faceplayer
# 261 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_DynamicPunchTeach, MSGBOX_YESNO
# 262 "data/scripts/move_tutors.pory"
	compare VAR_RESULT, NO
	goto_if_eq SootopolisCity_PokemonCenter_1F_EventScript_DynamicPunchTutor_2
SootopolisCity_PokemonCenter_1F_EventScript_DynamicPunchTutor_1:
# 265 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_DynamicPunchWhichMon, MSGBOX_DEFAULT
# 266 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_DYNAMIC_PUNCH
# 267 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 268 "data/scripts/move_tutors.pory"
	compare VAR_RESULT, NO
	goto_if_eq SootopolisCity_PokemonCenter_1F_EventScript_DynamicPunchTutor_5
SootopolisCity_PokemonCenter_1F_EventScript_DynamicPunchTutor_4:
# 271 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_DynamicPunchTaught, MSGBOX_DEFAULT
# 272 "data/scripts/move_tutors.pory"
	release
	return

SootopolisCity_PokemonCenter_1F_EventScript_DynamicPunchTutor_2:
# 263 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_DynamicPunchDeclined
	goto SootopolisCity_PokemonCenter_1F_EventScript_DynamicPunchTutor_1

SootopolisCity_PokemonCenter_1F_EventScript_DynamicPunchTutor_5:
# 269 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_DynamicPunchDeclined
	goto SootopolisCity_PokemonCenter_1F_EventScript_DynamicPunchTutor_4


MoveTutor_EventScript_DynamicPunchDeclined::
# 276 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_DynamicPunchDeclined, MSGBOX_DEFAULT
# 277 "data/scripts/move_tutors.pory"
	release
	return


PacifidlogTown_PokemonCenter_1F_EventScript_RecoilMoveTutor::
# 282 "data/scripts/move_tutors.pory"
	lock
# 283 "data/scripts/move_tutors.pory"
	faceplayer
# 284 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_RecoilMoveTeach, MSGBOX_YESNO
# 285 "data/scripts/move_tutors.pory"
	compare VAR_RESULT, NO
	goto_if_eq PacifidlogTown_PokemonCenter_1F_EventScript_RecoilMoveTutor_2
PacifidlogTown_PokemonCenter_1F_EventScript_RecoilMoveTutor_1:
# 288 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_WhichMoveToTeach, MSGBOX_DEFAULT
# 289 "data/scripts/move_tutors.pory"
	dynmultichoice 0, 5, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, PacifidlogTown_PokemonCenter_1F_EventScript_RecoilMoveTutor_Text_0, PacifidlogTown_PokemonCenter_1F_EventScript_RecoilMoveTutor_Text_1, PacifidlogTown_PokemonCenter_1F_EventScript_RecoilMoveTutor_Text_2, PacifidlogTown_PokemonCenter_1F_EventScript_RecoilMoveTutor_Text_3, PacifidlogTown_PokemonCenter_1F_EventScript_RecoilMoveTutor_Text_4, PacifidlogTown_PokemonCenter_1F_EventScript_RecoilMoveTutor_Text_5
# 290 "data/scripts/move_tutors.pory"
	switch VAR_RESULT
# 291 "data/scripts/move_tutors.pory"
	case 0, PacifidlogTown_PokemonCenter_1F_EventScript_RecoilMoveTutor_6
# 293 "data/scripts/move_tutors.pory"
	case 1, PacifidlogTown_PokemonCenter_1F_EventScript_RecoilMoveTutor_7
# 295 "data/scripts/move_tutors.pory"
	case 2, PacifidlogTown_PokemonCenter_1F_EventScript_RecoilMoveTutor_8
# 297 "data/scripts/move_tutors.pory"
	case 3, PacifidlogTown_PokemonCenter_1F_EventScript_RecoilMoveTutor_9
# 299 "data/scripts/move_tutors.pory"
	case 4, PacifidlogTown_PokemonCenter_1F_EventScript_RecoilMoveTutor_10
# 301 "data/scripts/move_tutors.pory"
	case 5, PacifidlogTown_PokemonCenter_1F_EventScript_RecoilMoveTutor_11
# 303 "data/scripts/move_tutors.pory"
	case 127, PacifidlogTown_PokemonCenter_1F_EventScript_RecoilMoveTutor_12
PacifidlogTown_PokemonCenter_1F_EventScript_RecoilMoveTutor_4:
# 306 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_RecoilMoveWhichMon, MSGBOX_DEFAULT
# 307 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 308 "data/scripts/move_tutors.pory"
	compare VAR_RESULT, NO
	goto_if_eq PacifidlogTown_PokemonCenter_1F_EventScript_RecoilMoveTutor_14
PacifidlogTown_PokemonCenter_1F_EventScript_RecoilMoveTutor_13:
# 311 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_RecoilMoveTaught, MSGBOX_DEFAULT
# 312 "data/scripts/move_tutors.pory"
	release
	return

PacifidlogTown_PokemonCenter_1F_EventScript_RecoilMoveTutor_2:
# 286 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_RecoilMoveDeclined
	goto PacifidlogTown_PokemonCenter_1F_EventScript_RecoilMoveTutor_1

PacifidlogTown_PokemonCenter_1F_EventScript_RecoilMoveTutor_6:
# 292 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_DOUBLE_EDGE
	goto PacifidlogTown_PokemonCenter_1F_EventScript_RecoilMoveTutor_4

PacifidlogTown_PokemonCenter_1F_EventScript_RecoilMoveTutor_7:
# 294 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_WOOD_HAMMER
	goto PacifidlogTown_PokemonCenter_1F_EventScript_RecoilMoveTutor_4

PacifidlogTown_PokemonCenter_1F_EventScript_RecoilMoveTutor_8:
# 296 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_FLARE_BLITZ
	goto PacifidlogTown_PokemonCenter_1F_EventScript_RecoilMoveTutor_4

PacifidlogTown_PokemonCenter_1F_EventScript_RecoilMoveTutor_9:
# 298 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_WAVE_CRASH
	goto PacifidlogTown_PokemonCenter_1F_EventScript_RecoilMoveTutor_4

PacifidlogTown_PokemonCenter_1F_EventScript_RecoilMoveTutor_10:
# 300 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_BRAVE_BIRD
	goto PacifidlogTown_PokemonCenter_1F_EventScript_RecoilMoveTutor_4

PacifidlogTown_PokemonCenter_1F_EventScript_RecoilMoveTutor_11:
# 302 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_WILD_CHARGE
	goto PacifidlogTown_PokemonCenter_1F_EventScript_RecoilMoveTutor_4

PacifidlogTown_PokemonCenter_1F_EventScript_RecoilMoveTutor_12:
# 304 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_RecoilMoveDeclined
	goto PacifidlogTown_PokemonCenter_1F_EventScript_RecoilMoveTutor_4

PacifidlogTown_PokemonCenter_1F_EventScript_RecoilMoveTutor_14:
# 309 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_RecoilMoveDeclined
	goto PacifidlogTown_PokemonCenter_1F_EventScript_RecoilMoveTutor_13


MoveTutor_EventScript_RecoilMoveDeclined::
# 316 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_RecoilMoveDeclined, MSGBOX_DEFAULT
# 317 "data/scripts/move_tutors.pory"
	release
	return


MauvilleCity_EventScript_TricksTutor_Text_0:
# 45 "data/scripts/move_tutors.pory"
	.string "Trick$"

MauvilleCity_EventScript_TricksTutor_Text_1:
# 45 "data/scripts/move_tutors.pory"
	.string "Switcheroo$"

LilycoveCity_EventScript_CombatMoveTutor_Text_0:
# 192 "data/scripts/move_tutors.pory"
	.string "Ice Punch$"

LilycoveCity_EventScript_CombatMoveTutor_Text_1:
# 192 "data/scripts/move_tutors.pory"
	.string "Thunder Punch$"

LilycoveCity_EventScript_CombatMoveTutor_Text_2:
# 192 "data/scripts/move_tutors.pory"
	.string "Fire Punch$"

LilycoveCity_EventScript_CombatMoveTutor_Text_3:
# 192 "data/scripts/move_tutors.pory"
	.string "Mega Punch$"

LilycoveCity_EventScript_CombatMoveTutor_Text_4:
# 192 "data/scripts/move_tutors.pory"
	.string "Mega Kick$"

LilycoveCity_EventScript_CombatMoveTutor_Text_5:
# 192 "data/scripts/move_tutors.pory"
	.string "Rock Slide$"

MossdeepCity_EventScript_PledgeMoveTutor_Text_0:
# 232 "data/scripts/move_tutors.pory"
	.string "Grass Pledge$"

MossdeepCity_EventScript_PledgeMoveTutor_Text_1:
# 232 "data/scripts/move_tutors.pory"
	.string "Fire Pledge$"

MossdeepCity_EventScript_PledgeMoveTutor_Text_2:
# 232 "data/scripts/move_tutors.pory"
	.string "Water Pledge$"

PacifidlogTown_PokemonCenter_1F_EventScript_RecoilMoveTutor_Text_0:
# 289 "data/scripts/move_tutors.pory"
	.string "Double-Edge$"

PacifidlogTown_PokemonCenter_1F_EventScript_RecoilMoveTutor_Text_1:
# 289 "data/scripts/move_tutors.pory"
	.string "Wood Hammer$"

PacifidlogTown_PokemonCenter_1F_EventScript_RecoilMoveTutor_Text_2:
# 289 "data/scripts/move_tutors.pory"
	.string "Flare Blitz$"

PacifidlogTown_PokemonCenter_1F_EventScript_RecoilMoveTutor_Text_3:
# 289 "data/scripts/move_tutors.pory"
	.string "Wave Crash$"

PacifidlogTown_PokemonCenter_1F_EventScript_RecoilMoveTutor_Text_4:
# 289 "data/scripts/move_tutors.pory"
	.string "Brave Bird$"

PacifidlogTown_PokemonCenter_1F_EventScript_RecoilMoveTutor_Text_5:
# 289 "data/scripts/move_tutors.pory"
	.string "Wild Charge$"
