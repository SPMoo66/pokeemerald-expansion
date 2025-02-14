# 1 "data/scripts/move_tutors.pory"

# 2 "data/scripts/move_tutors.pory"
SootopolisCity_PokemonCenter_1F_EventScript_DoubleEdgeTutor::
# 3 "data/scripts/move_tutors.pory"
	lock
# 4 "data/scripts/move_tutors.pory"
	faceplayer
# 5 "data/scripts/move_tutors.pory"
	goto_if_set FLAG_MOVE_TUTOR_TAUGHT_DOUBLE_EDGE, MoveTutor_EventScript_DoubleEdgeTaught
# 6 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_DoubleEdgeTeach, MSGBOX_YESNO
# 7 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_DoubleEdgeDeclined
# 8 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_CanOnlyBeLearnedOnce
# 9 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_DoubleEdgeDeclined
# 10 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_DoubleEdgeWhichMon, MSGBOX_DEFAULT
# 11 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_DOUBLE_EDGE
# 12 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 13 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, 0, MoveTutor_EventScript_DoubleEdgeDeclined
# 14 "data/scripts/move_tutors.pory"
	setflag FLAG_MOVE_TUTOR_TAUGHT_DOUBLE_EDGE
# 15 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_DoubleEdgeTaught
# 16 "data/scripts/move_tutors.pory"
	end
# 17 "data/scripts/move_tutors.pory"

# 18 "data/scripts/move_tutors.pory"
MoveTutor_EventScript_DoubleEdgeDeclined::
# 19 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_DoubleEdgeDeclined, MSGBOX_DEFAULT
# 20 "data/scripts/move_tutors.pory"
	release
# 21 "data/scripts/move_tutors.pory"
	end
# 22 "data/scripts/move_tutors.pory"

# 23 "data/scripts/move_tutors.pory"
MoveTutor_EventScript_DoubleEdgeTaught::
# 24 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_DoubleEdgeTaught, MSGBOX_DEFAULT
# 25 "data/scripts/move_tutors.pory"
	release
# 26 "data/scripts/move_tutors.pory"
	end
# 27 "data/scripts/move_tutors.pory"

# 28 "data/scripts/move_tutors.pory"
PacifidlogTown_PokemonCenter_1F_EventScript_ExplosionTutor::
# 29 "data/scripts/move_tutors.pory"
	lock
# 30 "data/scripts/move_tutors.pory"
	faceplayer
# 31 "data/scripts/move_tutors.pory"
	goto_if_set FLAG_MOVE_TUTOR_TAUGHT_EXPLOSION, MoveTutor_EventScript_ExplosionTaught
# 32 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_ExplosionTeach, MSGBOX_YESNO
# 33 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_ExplosionDeclined
# 34 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_CanOnlyBeLearnedOnce
# 35 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_ExplosionDeclined
# 36 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_ExplosionWhichMon, MSGBOX_DEFAULT
# 37 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_EXPLOSION
# 38 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 39 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, 0, MoveTutor_EventScript_ExplosionDeclined
# 40 "data/scripts/move_tutors.pory"
	setflag FLAG_MOVE_TUTOR_TAUGHT_EXPLOSION
# 41 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_ExplosionTaught
# 42 "data/scripts/move_tutors.pory"
	end
# 43 "data/scripts/move_tutors.pory"

# 44 "data/scripts/move_tutors.pory"
MoveTutor_EventScript_ExplosionDeclined::
# 45 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_ExplosionDeclined, MSGBOX_DEFAULT
# 46 "data/scripts/move_tutors.pory"
	release
# 47 "data/scripts/move_tutors.pory"
	end
# 48 "data/scripts/move_tutors.pory"

# 49 "data/scripts/move_tutors.pory"
MoveTutor_EventScript_ExplosionTaught::
# 50 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_ExplosionTaught, MSGBOX_DEFAULT
# 51 "data/scripts/move_tutors.pory"
	release
# 52 "data/scripts/move_tutors.pory"
	end
# 53 "data/scripts/move_tutors.pory"

# 54 "data/scripts/move_tutors.pory"
MoveTutor_EventScript_OpenPartyMenu::
# 55 "data/scripts/move_tutors.pory"
	special ChooseMonForMoveTutor
# 56 "data/scripts/move_tutors.pory"
	waitstate
# 57 "data/scripts/move_tutors.pory"
	lock
# 58 "data/scripts/move_tutors.pory"
	faceplayer
# 59 "data/scripts/move_tutors.pory"
	return
# 60 "data/scripts/move_tutors.pory"

# 61 "data/scripts/move_tutors.pory"
MoveTutor_EventScript_CanOnlyBeLearnedOnce::
# 62 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_ThisMoveCanOnlyBeLearnedOnce, MSGBOX_YESNO
# 63 "data/scripts/move_tutors.pory"
	return

SlateportCity_PokemonFanClub_EventScript_SwaggerTutor::
# 67 "data/scripts/move_tutors.pory"
	lock
# 68 "data/scripts/move_tutors.pory"
	faceplayer
# 69 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_SwaggerTeach, MSGBOX_YESNO
# 70 "data/scripts/move_tutors.pory"
	compare VAR_RESULT, NO
	goto_if_eq SlateportCity_PokemonFanClub_EventScript_SwaggerTutor_2
SlateportCity_PokemonFanClub_EventScript_SwaggerTutor_1:
# 73 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_SwaggerWhichMon, MSGBOX_DEFAULT
# 74 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_SWAGGER
# 75 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 76 "data/scripts/move_tutors.pory"
	compare VAR_RESULT, NO
	goto_if_eq SlateportCity_PokemonFanClub_EventScript_SwaggerTutor_5
SlateportCity_PokemonFanClub_EventScript_SwaggerTutor_4:
# 79 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_SwaggerTaught, MSGBOX_DEFAULT
# 80 "data/scripts/move_tutors.pory"
	release
	return

SlateportCity_PokemonFanClub_EventScript_SwaggerTutor_2:
# 71 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_SwaggerDeclined
	goto SlateportCity_PokemonFanClub_EventScript_SwaggerTutor_1

SlateportCity_PokemonFanClub_EventScript_SwaggerTutor_5:
# 77 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_SwaggerDeclined
	goto SlateportCity_PokemonFanClub_EventScript_SwaggerTutor_4


MoveTutor_EventScript_SwaggerDeclined::
# 84 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_SwaggerDeclined, MSGBOX_DEFAULT
# 85 "data/scripts/move_tutors.pory"
	release
	return


MauvilleCity_EventScript_TricksTutor::
# 90 "data/scripts/move_tutors.pory"
	lock
# 91 "data/scripts/move_tutors.pory"
	faceplayer
# 92 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_TricksTeach, MSGBOX_YESNO
# 93 "data/scripts/move_tutors.pory"
	compare VAR_RESULT, NO
	goto_if_eq MauvilleCity_EventScript_TricksTutor_2
MauvilleCity_EventScript_TricksTutor_1:
# 96 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_WhichMoveToTeach, MSGBOX_DEFAULT
# 97 "data/scripts/move_tutors.pory"
	dynmultichoice 0, 5, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, MauvilleCity_EventScript_TricksTutor_Text_0, MauvilleCity_EventScript_TricksTutor_Text_1
# 98 "data/scripts/move_tutors.pory"
	switch VAR_RESULT
# 99 "data/scripts/move_tutors.pory"
	case 0, MauvilleCity_EventScript_TricksTutor_6
# 101 "data/scripts/move_tutors.pory"
	case 1, MauvilleCity_EventScript_TricksTutor_7
# 103 "data/scripts/move_tutors.pory"
	case 127, MauvilleCity_EventScript_TricksTutor_8
MauvilleCity_EventScript_TricksTutor_4:
# 106 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_TricksWhichMon, MSGBOX_DEFAULT
# 107 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 108 "data/scripts/move_tutors.pory"
	compare VAR_RESULT, NO
	goto_if_eq MauvilleCity_EventScript_TricksTutor_10
MauvilleCity_EventScript_TricksTutor_9:
# 111 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_TricksTaught, MSGBOX_DEFAULT
# 112 "data/scripts/move_tutors.pory"
	release
	return

MauvilleCity_EventScript_TricksTutor_2:
# 94 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_TricksDeclined
	goto MauvilleCity_EventScript_TricksTutor_1

MauvilleCity_EventScript_TricksTutor_6:
# 100 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_TRICK
	goto MauvilleCity_EventScript_TricksTutor_4

MauvilleCity_EventScript_TricksTutor_7:
# 102 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_SWITCHEROO
	goto MauvilleCity_EventScript_TricksTutor_4

MauvilleCity_EventScript_TricksTutor_8:
# 104 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_TricksDeclined
	goto MauvilleCity_EventScript_TricksTutor_4

MauvilleCity_EventScript_TricksTutor_10:
# 109 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_TricksDeclined
	goto MauvilleCity_EventScript_TricksTutor_9


MoveTutor_EventScript_TricksDeclined::
# 116 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_TricksDeclined, MSGBOX_DEFAULT
# 117 "data/scripts/move_tutors.pory"
	release
	return


VerdanturfTown_PokemonCenter_1F_EventScript_IcyWindTutor::
# 122 "data/scripts/move_tutors.pory"
	lock
# 123 "data/scripts/move_tutors.pory"
	faceplayer
# 124 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_IcyWindTeach, MSGBOX_YESNO
# 125 "data/scripts/move_tutors.pory"
	compare VAR_RESULT, NO
	goto_if_eq VerdanturfTown_PokemonCenter_1F_EventScript_IcyWindTutor_2
VerdanturfTown_PokemonCenter_1F_EventScript_IcyWindTutor_1:
# 128 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_IcyWindWhichMon, MSGBOX_DEFAULT
# 129 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_ICY_WIND
# 130 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 131 "data/scripts/move_tutors.pory"
	compare VAR_RESULT, NO
	goto_if_eq VerdanturfTown_PokemonCenter_1F_EventScript_IcyWindTutor_5
VerdanturfTown_PokemonCenter_1F_EventScript_IcyWindTutor_4:
# 134 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_IcyWindTaught, MSGBOX_DEFAULT
# 135 "data/scripts/move_tutors.pory"
	release
	return

VerdanturfTown_PokemonCenter_1F_EventScript_IcyWindTutor_2:
# 126 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_IcyWindDeclined
	goto VerdanturfTown_PokemonCenter_1F_EventScript_IcyWindTutor_1

VerdanturfTown_PokemonCenter_1F_EventScript_IcyWindTutor_5:
# 132 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_IcyWindDeclined
	goto VerdanturfTown_PokemonCenter_1F_EventScript_IcyWindTutor_4


MoveTutor_EventScript_IcyWindDeclined::
# 139 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_IcyWindDeclined, MSGBOX_DEFAULT
# 140 "data/scripts/move_tutors.pory"
	release
	return


FallarborTown_Mart_EventScript_SignalBeamTutor::
# 145 "data/scripts/move_tutors.pory"
	lock
# 146 "data/scripts/move_tutors.pory"
	faceplayer
# 147 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_SignalBeamTeach, MSGBOX_YESNO
# 148 "data/scripts/move_tutors.pory"
	compare VAR_RESULT, NO
	goto_if_eq FallarborTown_Mart_EventScript_SignalBeamTutor_2
FallarborTown_Mart_EventScript_SignalBeamTutor_1:
# 151 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_SignalBeamWhichMon, MSGBOX_DEFAULT
# 152 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_SIGNAL_BEAM
# 153 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 154 "data/scripts/move_tutors.pory"
	compare VAR_RESULT, NO
	goto_if_eq FallarborTown_Mart_EventScript_SignalBeamTutor_5
FallarborTown_Mart_EventScript_SignalBeamTutor_4:
# 157 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_SignalBeamTaught, MSGBOX_DEFAULT
# 158 "data/scripts/move_tutors.pory"
	release
	return

FallarborTown_Mart_EventScript_SignalBeamTutor_2:
# 149 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_SignalBeamDeclined
	goto FallarborTown_Mart_EventScript_SignalBeamTutor_1

FallarborTown_Mart_EventScript_SignalBeamTutor_5:
# 155 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_SignalBeamDeclined
	goto FallarborTown_Mart_EventScript_SignalBeamTutor_4


MoveTutor_EventScript_SignalBeamDeclined::
# 162 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_SignalBeamDeclined, MSGBOX_DEFAULT
# 163 "data/scripts/move_tutors.pory"
	release
	return


LavaridgeTown_House_EventScript_SleepTalkTutor::
# 168 "data/scripts/move_tutors.pory"
	lock
# 169 "data/scripts/move_tutors.pory"
	faceplayer
# 170 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_SleepTalkTeach, MSGBOX_YESNO
# 171 "data/scripts/move_tutors.pory"
	compare VAR_RESULT, NO
	goto_if_eq LavaridgeTown_House_EventScript_SleepTalkTutor_2
LavaridgeTown_House_EventScript_SleepTalkTutor_1:
# 174 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_SleepTalkWhichMon, MSGBOX_DEFAULT
# 175 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_SLEEP_TALK
# 176 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 177 "data/scripts/move_tutors.pory"
	compare VAR_RESULT, NO
	goto_if_eq LavaridgeTown_House_EventScript_SleepTalkTutor_5
LavaridgeTown_House_EventScript_SleepTalkTutor_4:
# 180 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_SleepTalkTaught, MSGBOX_DEFAULT
# 181 "data/scripts/move_tutors.pory"
	release
	return

LavaridgeTown_House_EventScript_SleepTalkTutor_2:
# 172 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_SleepTalkDeclined
	goto LavaridgeTown_House_EventScript_SleepTalkTutor_1

LavaridgeTown_House_EventScript_SleepTalkTutor_5:
# 178 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_SleepTalkDeclined
	goto LavaridgeTown_House_EventScript_SleepTalkTutor_4


MoveTutor_EventScript_SleepTalkDeclined::
# 185 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_SleepTalkDeclined, MSGBOX_DEFAULT
# 186 "data/scripts/move_tutors.pory"
	release
	return


FortreeCity_House2_EventScript_BodySlamTutor::
# 191 "data/scripts/move_tutors.pory"
	lock
# 192 "data/scripts/move_tutors.pory"
	faceplayer
# 193 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_BodySlamTeach, MSGBOX_YESNO
# 194 "data/scripts/move_tutors.pory"
	compare VAR_RESULT, NO
	goto_if_eq FortreeCity_House2_EventScript_BodySlamTutor_2
FortreeCity_House2_EventScript_BodySlamTutor_1:
# 197 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_BodySlamWhichMon, MSGBOX_DEFAULT
# 198 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_SLEEP_TALK
# 199 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 200 "data/scripts/move_tutors.pory"
	compare VAR_RESULT, NO
	goto_if_eq FortreeCity_House2_EventScript_BodySlamTutor_5
FortreeCity_House2_EventScript_BodySlamTutor_4:
# 203 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_BodySlamTaught, MSGBOX_DEFAULT
# 204 "data/scripts/move_tutors.pory"
	release
	return

FortreeCity_House2_EventScript_BodySlamTutor_2:
# 195 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_BodySlamDeclined
	goto FortreeCity_House2_EventScript_BodySlamTutor_1

FortreeCity_House2_EventScript_BodySlamTutor_5:
# 201 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_BodySlamDeclined
	goto FortreeCity_House2_EventScript_BodySlamTutor_4


MoveTutor_EventScript_BodySlamDeclined::
# 208 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_BodySlamDeclined, MSGBOX_DEFAULT
# 209 "data/scripts/move_tutors.pory"
	release
	return


LilycoveCity_DepartmentStoreRooftop_EventScript_HyperVoiceTutor::
# 214 "data/scripts/move_tutors.pory"
	lock
# 215 "data/scripts/move_tutors.pory"
	faceplayer
# 216 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_HyperVoiceTeach, MSGBOX_YESNO
# 217 "data/scripts/move_tutors.pory"
	compare VAR_RESULT, NO
	goto_if_eq LilycoveCity_DepartmentStoreRooftop_EventScript_HyperVoiceTutor_2
LilycoveCity_DepartmentStoreRooftop_EventScript_HyperVoiceTutor_1:
# 220 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_HyperVoiceWhichMon, MSGBOX_DEFAULT
# 221 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_HYPER_VOICE
# 222 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 223 "data/scripts/move_tutors.pory"
	compare VAR_RESULT, NO
	goto_if_eq LilycoveCity_DepartmentStoreRooftop_EventScript_HyperVoiceTutor_5
LilycoveCity_DepartmentStoreRooftop_EventScript_HyperVoiceTutor_4:
# 226 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_HyperVoiceTaught, MSGBOX_DEFAULT
# 227 "data/scripts/move_tutors.pory"
	release
	return

LilycoveCity_DepartmentStoreRooftop_EventScript_HyperVoiceTutor_2:
# 218 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_HyperVoiceDeclined
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_HyperVoiceTutor_1

LilycoveCity_DepartmentStoreRooftop_EventScript_HyperVoiceTutor_5:
# 224 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_HyperVoiceDeclined
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_HyperVoiceTutor_4


MoveTutor_EventScript_HyperVoiceDeclined::
# 231 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_HyperVoiceDeclined, MSGBOX_DEFAULT
# 232 "data/scripts/move_tutors.pory"
	release
	return


LilycoveCity_EventScript_CombatMoveTutor::
# 237 "data/scripts/move_tutors.pory"
	lock
# 238 "data/scripts/move_tutors.pory"
	faceplayer
# 239 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_CombatMoveTeach, MSGBOX_YESNO
# 240 "data/scripts/move_tutors.pory"
	compare VAR_RESULT, NO
	goto_if_eq LilycoveCity_EventScript_CombatMoveTutor_2
LilycoveCity_EventScript_CombatMoveTutor_1:
# 243 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_WhichMoveToTeach, MSGBOX_DEFAULT
# 244 "data/scripts/move_tutors.pory"
	dynmultichoice 0, 5, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, LilycoveCity_EventScript_CombatMoveTutor_Text_0, LilycoveCity_EventScript_CombatMoveTutor_Text_1, LilycoveCity_EventScript_CombatMoveTutor_Text_2, LilycoveCity_EventScript_CombatMoveTutor_Text_3, LilycoveCity_EventScript_CombatMoveTutor_Text_4, LilycoveCity_EventScript_CombatMoveTutor_Text_5
# 245 "data/scripts/move_tutors.pory"
	switch VAR_RESULT
# 246 "data/scripts/move_tutors.pory"
	case 0, LilycoveCity_EventScript_CombatMoveTutor_6
# 248 "data/scripts/move_tutors.pory"
	case 1, LilycoveCity_EventScript_CombatMoveTutor_7
# 250 "data/scripts/move_tutors.pory"
	case 2, LilycoveCity_EventScript_CombatMoveTutor_8
# 252 "data/scripts/move_tutors.pory"
	case 3, LilycoveCity_EventScript_CombatMoveTutor_9
# 254 "data/scripts/move_tutors.pory"
	case 4, LilycoveCity_EventScript_CombatMoveTutor_10
# 256 "data/scripts/move_tutors.pory"
	case 5, LilycoveCity_EventScript_CombatMoveTutor_11
# 258 "data/scripts/move_tutors.pory"
	case 127, LilycoveCity_EventScript_CombatMoveTutor_12
LilycoveCity_EventScript_CombatMoveTutor_4:
# 261 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_CombatMoveWhichMon, MSGBOX_DEFAULT
# 262 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 263 "data/scripts/move_tutors.pory"
	compare VAR_RESULT, NO
	goto_if_eq LilycoveCity_EventScript_CombatMoveTutor_14
LilycoveCity_EventScript_CombatMoveTutor_13:
# 266 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_CombatMoveTaught, MSGBOX_DEFAULT
# 267 "data/scripts/move_tutors.pory"
	release
	return

LilycoveCity_EventScript_CombatMoveTutor_2:
# 241 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_CombatMoveDeclined
	goto LilycoveCity_EventScript_CombatMoveTutor_1

LilycoveCity_EventScript_CombatMoveTutor_6:
# 247 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_ICE_PUNCH
	goto LilycoveCity_EventScript_CombatMoveTutor_4

LilycoveCity_EventScript_CombatMoveTutor_7:
# 249 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_THUNDER_PUNCH
	goto LilycoveCity_EventScript_CombatMoveTutor_4

LilycoveCity_EventScript_CombatMoveTutor_8:
# 251 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_FIRE_PUNCH
	goto LilycoveCity_EventScript_CombatMoveTutor_4

LilycoveCity_EventScript_CombatMoveTutor_9:
# 253 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_MEGA_PUNCH
	goto LilycoveCity_EventScript_CombatMoveTutor_4

LilycoveCity_EventScript_CombatMoveTutor_10:
# 255 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_MEGA_KICK
	goto LilycoveCity_EventScript_CombatMoveTutor_4

LilycoveCity_EventScript_CombatMoveTutor_11:
# 257 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_ROCK_SLIDE
	goto LilycoveCity_EventScript_CombatMoveTutor_4

LilycoveCity_EventScript_CombatMoveTutor_12:
# 259 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_CombatMoveDeclined
	goto LilycoveCity_EventScript_CombatMoveTutor_4

LilycoveCity_EventScript_CombatMoveTutor_14:
# 264 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_CombatMoveDeclined
	goto LilycoveCity_EventScript_CombatMoveTutor_13


MoveTutor_EventScript_CombatMoveDeclined::
# 271 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_CombatMoveDeclined, MSGBOX_DEFAULT
# 272 "data/scripts/move_tutors.pory"
	release
	return


MauvilleCity_EventScript_TricksTutor_Text_0:
# 97 "data/scripts/move_tutors.pory"
	.string "Trick$"

MauvilleCity_EventScript_TricksTutor_Text_1:
# 97 "data/scripts/move_tutors.pory"
	.string "Switcheroo$"

LilycoveCity_EventScript_CombatMoveTutor_Text_0:
# 244 "data/scripts/move_tutors.pory"
	.string "Ice Punch$"

LilycoveCity_EventScript_CombatMoveTutor_Text_1:
# 244 "data/scripts/move_tutors.pory"
	.string "Thunder Punch$"

LilycoveCity_EventScript_CombatMoveTutor_Text_2:
# 244 "data/scripts/move_tutors.pory"
	.string "Fire Punch$"

LilycoveCity_EventScript_CombatMoveTutor_Text_3:
# 244 "data/scripts/move_tutors.pory"
	.string "Mega Punch$"

LilycoveCity_EventScript_CombatMoveTutor_Text_4:
# 244 "data/scripts/move_tutors.pory"
	.string "Mega Kick$"

LilycoveCity_EventScript_CombatMoveTutor_Text_5:
# 244 "data/scripts/move_tutors.pory"
	.string "Rock Slide$"
