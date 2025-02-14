# 1 "data/scripts/move_tutors.pory"

# 2 "data/scripts/move_tutors.pory"
PacifidlogTown_PokemonCenter_1F_EventScript_ExplosionTutor::
# 3 "data/scripts/move_tutors.pory"
	lock
# 4 "data/scripts/move_tutors.pory"
	faceplayer
# 5 "data/scripts/move_tutors.pory"
	goto_if_set FLAG_MOVE_TUTOR_TAUGHT_EXPLOSION, MoveTutor_EventScript_ExplosionTaught
# 6 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_ExplosionTeach, MSGBOX_YESNO
# 7 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_ExplosionDeclined
# 8 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_CanOnlyBeLearnedOnce
# 9 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_ExplosionDeclined
# 10 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_ExplosionWhichMon, MSGBOX_DEFAULT
# 11 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_EXPLOSION
# 12 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 13 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, 0, MoveTutor_EventScript_ExplosionDeclined
# 14 "data/scripts/move_tutors.pory"
	setflag FLAG_MOVE_TUTOR_TAUGHT_EXPLOSION
# 15 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_ExplosionTaught
# 16 "data/scripts/move_tutors.pory"
	end
# 17 "data/scripts/move_tutors.pory"

# 18 "data/scripts/move_tutors.pory"
MoveTutor_EventScript_ExplosionDeclined::
# 19 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_ExplosionDeclined, MSGBOX_DEFAULT
# 20 "data/scripts/move_tutors.pory"
	release
# 21 "data/scripts/move_tutors.pory"
	end
# 22 "data/scripts/move_tutors.pory"

# 23 "data/scripts/move_tutors.pory"
MoveTutor_EventScript_ExplosionTaught::
# 24 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_ExplosionTaught, MSGBOX_DEFAULT
# 25 "data/scripts/move_tutors.pory"
	release
# 26 "data/scripts/move_tutors.pory"
	end
# 27 "data/scripts/move_tutors.pory"

# 28 "data/scripts/move_tutors.pory"
MoveTutor_EventScript_OpenPartyMenu::
# 29 "data/scripts/move_tutors.pory"
	special ChooseMonForMoveTutor
# 30 "data/scripts/move_tutors.pory"
	waitstate
# 31 "data/scripts/move_tutors.pory"
	lock
# 32 "data/scripts/move_tutors.pory"
	faceplayer
# 33 "data/scripts/move_tutors.pory"
	return
# 34 "data/scripts/move_tutors.pory"

# 35 "data/scripts/move_tutors.pory"
MoveTutor_EventScript_CanOnlyBeLearnedOnce::
# 36 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_ThisMoveCanOnlyBeLearnedOnce, MSGBOX_YESNO
# 37 "data/scripts/move_tutors.pory"
	return

SlateportCity_PokemonFanClub_EventScript_SwaggerTutor::
# 41 "data/scripts/move_tutors.pory"
	lock
# 42 "data/scripts/move_tutors.pory"
	faceplayer
# 43 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_SwaggerTeach, MSGBOX_YESNO
# 44 "data/scripts/move_tutors.pory"
	compare VAR_RESULT, NO
	goto_if_eq SlateportCity_PokemonFanClub_EventScript_SwaggerTutor_2
SlateportCity_PokemonFanClub_EventScript_SwaggerTutor_1:
# 47 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_SwaggerWhichMon, MSGBOX_DEFAULT
# 48 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_SWAGGER
# 49 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 50 "data/scripts/move_tutors.pory"
	compare VAR_RESULT, NO
	goto_if_eq SlateportCity_PokemonFanClub_EventScript_SwaggerTutor_5
SlateportCity_PokemonFanClub_EventScript_SwaggerTutor_4:
# 53 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_SwaggerTaught, MSGBOX_DEFAULT
# 54 "data/scripts/move_tutors.pory"
	release
	return

SlateportCity_PokemonFanClub_EventScript_SwaggerTutor_2:
# 45 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_SwaggerDeclined
	goto SlateportCity_PokemonFanClub_EventScript_SwaggerTutor_1

SlateportCity_PokemonFanClub_EventScript_SwaggerTutor_5:
# 51 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_SwaggerDeclined
	goto SlateportCity_PokemonFanClub_EventScript_SwaggerTutor_4


MoveTutor_EventScript_SwaggerDeclined::
# 58 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_SwaggerDeclined, MSGBOX_DEFAULT
# 59 "data/scripts/move_tutors.pory"
	release
	return


MauvilleCity_EventScript_TricksTutor::
# 64 "data/scripts/move_tutors.pory"
	lock
# 65 "data/scripts/move_tutors.pory"
	faceplayer
# 66 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_TricksTeach, MSGBOX_YESNO
# 67 "data/scripts/move_tutors.pory"
	compare VAR_RESULT, NO
	goto_if_eq MauvilleCity_EventScript_TricksTutor_2
MauvilleCity_EventScript_TricksTutor_1:
# 70 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_WhichMoveToTeach, MSGBOX_DEFAULT
# 71 "data/scripts/move_tutors.pory"
	dynmultichoice 0, 5, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, MauvilleCity_EventScript_TricksTutor_Text_0, MauvilleCity_EventScript_TricksTutor_Text_1
# 72 "data/scripts/move_tutors.pory"
	switch VAR_RESULT
# 73 "data/scripts/move_tutors.pory"
	case 0, MauvilleCity_EventScript_TricksTutor_6
# 75 "data/scripts/move_tutors.pory"
	case 1, MauvilleCity_EventScript_TricksTutor_7
# 77 "data/scripts/move_tutors.pory"
	case 127, MauvilleCity_EventScript_TricksTutor_8
MauvilleCity_EventScript_TricksTutor_4:
# 80 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_TricksWhichMon, MSGBOX_DEFAULT
# 81 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 82 "data/scripts/move_tutors.pory"
	compare VAR_RESULT, NO
	goto_if_eq MauvilleCity_EventScript_TricksTutor_10
MauvilleCity_EventScript_TricksTutor_9:
# 85 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_TricksTaught, MSGBOX_DEFAULT
# 86 "data/scripts/move_tutors.pory"
	release
	return

MauvilleCity_EventScript_TricksTutor_2:
# 68 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_TricksDeclined
	goto MauvilleCity_EventScript_TricksTutor_1

MauvilleCity_EventScript_TricksTutor_6:
# 74 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_TRICK
	goto MauvilleCity_EventScript_TricksTutor_4

MauvilleCity_EventScript_TricksTutor_7:
# 76 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_SWITCHEROO
	goto MauvilleCity_EventScript_TricksTutor_4

MauvilleCity_EventScript_TricksTutor_8:
# 78 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_TricksDeclined
	goto MauvilleCity_EventScript_TricksTutor_4

MauvilleCity_EventScript_TricksTutor_10:
# 83 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_TricksDeclined
	goto MauvilleCity_EventScript_TricksTutor_9


MoveTutor_EventScript_TricksDeclined::
# 90 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_TricksDeclined, MSGBOX_DEFAULT
# 91 "data/scripts/move_tutors.pory"
	release
	return


VerdanturfTown_PokemonCenter_1F_EventScript_IcyWindTutor::
# 96 "data/scripts/move_tutors.pory"
	lock
# 97 "data/scripts/move_tutors.pory"
	faceplayer
# 98 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_IcyWindTeach, MSGBOX_YESNO
# 99 "data/scripts/move_tutors.pory"
	compare VAR_RESULT, NO
	goto_if_eq VerdanturfTown_PokemonCenter_1F_EventScript_IcyWindTutor_2
VerdanturfTown_PokemonCenter_1F_EventScript_IcyWindTutor_1:
# 102 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_IcyWindWhichMon, MSGBOX_DEFAULT
# 103 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_ICY_WIND
# 104 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 105 "data/scripts/move_tutors.pory"
	compare VAR_RESULT, NO
	goto_if_eq VerdanturfTown_PokemonCenter_1F_EventScript_IcyWindTutor_5
VerdanturfTown_PokemonCenter_1F_EventScript_IcyWindTutor_4:
# 108 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_IcyWindTaught, MSGBOX_DEFAULT
# 109 "data/scripts/move_tutors.pory"
	release
	return

VerdanturfTown_PokemonCenter_1F_EventScript_IcyWindTutor_2:
# 100 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_IcyWindDeclined
	goto VerdanturfTown_PokemonCenter_1F_EventScript_IcyWindTutor_1

VerdanturfTown_PokemonCenter_1F_EventScript_IcyWindTutor_5:
# 106 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_IcyWindDeclined
	goto VerdanturfTown_PokemonCenter_1F_EventScript_IcyWindTutor_4


MoveTutor_EventScript_IcyWindDeclined::
# 113 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_IcyWindDeclined, MSGBOX_DEFAULT
# 114 "data/scripts/move_tutors.pory"
	release
	return


FallarborTown_Mart_EventScript_SignalBeamTutor::
# 119 "data/scripts/move_tutors.pory"
	lock
# 120 "data/scripts/move_tutors.pory"
	faceplayer
# 121 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_SignalBeamTeach, MSGBOX_YESNO
# 122 "data/scripts/move_tutors.pory"
	compare VAR_RESULT, NO
	goto_if_eq FallarborTown_Mart_EventScript_SignalBeamTutor_2
FallarborTown_Mart_EventScript_SignalBeamTutor_1:
# 125 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_SignalBeamWhichMon, MSGBOX_DEFAULT
# 126 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_SIGNAL_BEAM
# 127 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 128 "data/scripts/move_tutors.pory"
	compare VAR_RESULT, NO
	goto_if_eq FallarborTown_Mart_EventScript_SignalBeamTutor_5
FallarborTown_Mart_EventScript_SignalBeamTutor_4:
# 131 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_SignalBeamTaught, MSGBOX_DEFAULT
# 132 "data/scripts/move_tutors.pory"
	release
	return

FallarborTown_Mart_EventScript_SignalBeamTutor_2:
# 123 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_SignalBeamDeclined
	goto FallarborTown_Mart_EventScript_SignalBeamTutor_1

FallarborTown_Mart_EventScript_SignalBeamTutor_5:
# 129 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_SignalBeamDeclined
	goto FallarborTown_Mart_EventScript_SignalBeamTutor_4


MoveTutor_EventScript_SignalBeamDeclined::
# 136 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_SignalBeamDeclined, MSGBOX_DEFAULT
# 137 "data/scripts/move_tutors.pory"
	release
	return


LavaridgeTown_House_EventScript_SleepTalkTutor::
# 142 "data/scripts/move_tutors.pory"
	lock
# 143 "data/scripts/move_tutors.pory"
	faceplayer
# 144 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_SleepTalkTeach, MSGBOX_YESNO
# 145 "data/scripts/move_tutors.pory"
	compare VAR_RESULT, NO
	goto_if_eq LavaridgeTown_House_EventScript_SleepTalkTutor_2
LavaridgeTown_House_EventScript_SleepTalkTutor_1:
# 148 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_SleepTalkWhichMon, MSGBOX_DEFAULT
# 149 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_SLEEP_TALK
# 150 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 151 "data/scripts/move_tutors.pory"
	compare VAR_RESULT, NO
	goto_if_eq LavaridgeTown_House_EventScript_SleepTalkTutor_5
LavaridgeTown_House_EventScript_SleepTalkTutor_4:
# 154 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_SleepTalkTaught, MSGBOX_DEFAULT
# 155 "data/scripts/move_tutors.pory"
	release
	return

LavaridgeTown_House_EventScript_SleepTalkTutor_2:
# 146 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_SleepTalkDeclined
	goto LavaridgeTown_House_EventScript_SleepTalkTutor_1

LavaridgeTown_House_EventScript_SleepTalkTutor_5:
# 152 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_SleepTalkDeclined
	goto LavaridgeTown_House_EventScript_SleepTalkTutor_4


MoveTutor_EventScript_SleepTalkDeclined::
# 159 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_SleepTalkDeclined, MSGBOX_DEFAULT
# 160 "data/scripts/move_tutors.pory"
	release
	return


FortreeCity_House2_EventScript_BodySlamTutor::
# 165 "data/scripts/move_tutors.pory"
	lock
# 166 "data/scripts/move_tutors.pory"
	faceplayer
# 167 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_BodySlamTeach, MSGBOX_YESNO
# 168 "data/scripts/move_tutors.pory"
	compare VAR_RESULT, NO
	goto_if_eq FortreeCity_House2_EventScript_BodySlamTutor_2
FortreeCity_House2_EventScript_BodySlamTutor_1:
# 171 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_BodySlamWhichMon, MSGBOX_DEFAULT
# 172 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_SLEEP_TALK
# 173 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 174 "data/scripts/move_tutors.pory"
	compare VAR_RESULT, NO
	goto_if_eq FortreeCity_House2_EventScript_BodySlamTutor_5
FortreeCity_House2_EventScript_BodySlamTutor_4:
# 177 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_BodySlamTaught, MSGBOX_DEFAULT
# 178 "data/scripts/move_tutors.pory"
	release
	return

FortreeCity_House2_EventScript_BodySlamTutor_2:
# 169 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_BodySlamDeclined
	goto FortreeCity_House2_EventScript_BodySlamTutor_1

FortreeCity_House2_EventScript_BodySlamTutor_5:
# 175 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_BodySlamDeclined
	goto FortreeCity_House2_EventScript_BodySlamTutor_4


MoveTutor_EventScript_BodySlamDeclined::
# 182 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_BodySlamDeclined, MSGBOX_DEFAULT
# 183 "data/scripts/move_tutors.pory"
	release
	return


LilycoveCity_DepartmentStoreRooftop_EventScript_HyperVoiceTutor::
# 188 "data/scripts/move_tutors.pory"
	lock
# 189 "data/scripts/move_tutors.pory"
	faceplayer
# 190 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_HyperVoiceTeach, MSGBOX_YESNO
# 191 "data/scripts/move_tutors.pory"
	compare VAR_RESULT, NO
	goto_if_eq LilycoveCity_DepartmentStoreRooftop_EventScript_HyperVoiceTutor_2
LilycoveCity_DepartmentStoreRooftop_EventScript_HyperVoiceTutor_1:
# 194 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_HyperVoiceWhichMon, MSGBOX_DEFAULT
# 195 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_HYPER_VOICE
# 196 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 197 "data/scripts/move_tutors.pory"
	compare VAR_RESULT, NO
	goto_if_eq LilycoveCity_DepartmentStoreRooftop_EventScript_HyperVoiceTutor_5
LilycoveCity_DepartmentStoreRooftop_EventScript_HyperVoiceTutor_4:
# 200 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_HyperVoiceTaught, MSGBOX_DEFAULT
# 201 "data/scripts/move_tutors.pory"
	release
	return

LilycoveCity_DepartmentStoreRooftop_EventScript_HyperVoiceTutor_2:
# 192 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_HyperVoiceDeclined
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_HyperVoiceTutor_1

LilycoveCity_DepartmentStoreRooftop_EventScript_HyperVoiceTutor_5:
# 198 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_HyperVoiceDeclined
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_HyperVoiceTutor_4


MoveTutor_EventScript_HyperVoiceDeclined::
# 205 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_HyperVoiceDeclined, MSGBOX_DEFAULT
# 206 "data/scripts/move_tutors.pory"
	release
	return


LilycoveCity_EventScript_CombatMoveTutor::
# 211 "data/scripts/move_tutors.pory"
	lock
# 212 "data/scripts/move_tutors.pory"
	faceplayer
# 213 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_CombatMoveTeach, MSGBOX_YESNO
# 214 "data/scripts/move_tutors.pory"
	compare VAR_RESULT, NO
	goto_if_eq LilycoveCity_EventScript_CombatMoveTutor_2
LilycoveCity_EventScript_CombatMoveTutor_1:
# 217 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_WhichMoveToTeach, MSGBOX_DEFAULT
# 218 "data/scripts/move_tutors.pory"
	dynmultichoice 0, 5, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, LilycoveCity_EventScript_CombatMoveTutor_Text_0, LilycoveCity_EventScript_CombatMoveTutor_Text_1, LilycoveCity_EventScript_CombatMoveTutor_Text_2, LilycoveCity_EventScript_CombatMoveTutor_Text_3, LilycoveCity_EventScript_CombatMoveTutor_Text_4, LilycoveCity_EventScript_CombatMoveTutor_Text_5
# 219 "data/scripts/move_tutors.pory"
	switch VAR_RESULT
# 220 "data/scripts/move_tutors.pory"
	case 0, LilycoveCity_EventScript_CombatMoveTutor_6
# 222 "data/scripts/move_tutors.pory"
	case 1, LilycoveCity_EventScript_CombatMoveTutor_7
# 224 "data/scripts/move_tutors.pory"
	case 2, LilycoveCity_EventScript_CombatMoveTutor_8
# 226 "data/scripts/move_tutors.pory"
	case 3, LilycoveCity_EventScript_CombatMoveTutor_9
# 228 "data/scripts/move_tutors.pory"
	case 4, LilycoveCity_EventScript_CombatMoveTutor_10
# 230 "data/scripts/move_tutors.pory"
	case 5, LilycoveCity_EventScript_CombatMoveTutor_11
# 232 "data/scripts/move_tutors.pory"
	case 127, LilycoveCity_EventScript_CombatMoveTutor_12
LilycoveCity_EventScript_CombatMoveTutor_4:
# 235 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_CombatMoveWhichMon, MSGBOX_DEFAULT
# 236 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 237 "data/scripts/move_tutors.pory"
	compare VAR_RESULT, NO
	goto_if_eq LilycoveCity_EventScript_CombatMoveTutor_14
LilycoveCity_EventScript_CombatMoveTutor_13:
# 240 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_CombatMoveTaught, MSGBOX_DEFAULT
# 241 "data/scripts/move_tutors.pory"
	release
	return

LilycoveCity_EventScript_CombatMoveTutor_2:
# 215 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_CombatMoveDeclined
	goto LilycoveCity_EventScript_CombatMoveTutor_1

LilycoveCity_EventScript_CombatMoveTutor_6:
# 221 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_ICE_PUNCH
	goto LilycoveCity_EventScript_CombatMoveTutor_4

LilycoveCity_EventScript_CombatMoveTutor_7:
# 223 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_THUNDER_PUNCH
	goto LilycoveCity_EventScript_CombatMoveTutor_4

LilycoveCity_EventScript_CombatMoveTutor_8:
# 225 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_FIRE_PUNCH
	goto LilycoveCity_EventScript_CombatMoveTutor_4

LilycoveCity_EventScript_CombatMoveTutor_9:
# 227 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_MEGA_PUNCH
	goto LilycoveCity_EventScript_CombatMoveTutor_4

LilycoveCity_EventScript_CombatMoveTutor_10:
# 229 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_MEGA_KICK
	goto LilycoveCity_EventScript_CombatMoveTutor_4

LilycoveCity_EventScript_CombatMoveTutor_11:
# 231 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_ROCK_SLIDE
	goto LilycoveCity_EventScript_CombatMoveTutor_4

LilycoveCity_EventScript_CombatMoveTutor_12:
# 233 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_CombatMoveDeclined
	goto LilycoveCity_EventScript_CombatMoveTutor_4

LilycoveCity_EventScript_CombatMoveTutor_14:
# 238 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_CombatMoveDeclined
	goto LilycoveCity_EventScript_CombatMoveTutor_13


MoveTutor_EventScript_CombatMoveDeclined::
# 245 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_CombatMoveDeclined, MSGBOX_DEFAULT
# 246 "data/scripts/move_tutors.pory"
	release
	return


MossdeepCity_EventScript_PledgeMoveTutor::
# 251 "data/scripts/move_tutors.pory"
	lock
# 252 "data/scripts/move_tutors.pory"
	faceplayer
# 253 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_PledgeMoveTeach, MSGBOX_YESNO
# 254 "data/scripts/move_tutors.pory"
	compare VAR_RESULT, NO
	goto_if_eq MossdeepCity_EventScript_PledgeMoveTutor_2
MossdeepCity_EventScript_PledgeMoveTutor_1:
# 257 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_WhichMoveToTeach, MSGBOX_DEFAULT
# 258 "data/scripts/move_tutors.pory"
	dynmultichoice 0, 5, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, MossdeepCity_EventScript_PledgeMoveTutor_Text_0, MossdeepCity_EventScript_PledgeMoveTutor_Text_1, MossdeepCity_EventScript_PledgeMoveTutor_Text_2
# 259 "data/scripts/move_tutors.pory"
	switch VAR_RESULT
# 260 "data/scripts/move_tutors.pory"
	case 0, MossdeepCity_EventScript_PledgeMoveTutor_6
# 262 "data/scripts/move_tutors.pory"
	case 1, MossdeepCity_EventScript_PledgeMoveTutor_7
# 264 "data/scripts/move_tutors.pory"
	case 2, MossdeepCity_EventScript_PledgeMoveTutor_8
# 266 "data/scripts/move_tutors.pory"
	case 127, MossdeepCity_EventScript_PledgeMoveTutor_9
MossdeepCity_EventScript_PledgeMoveTutor_4:
# 269 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_PledgeMoveWhichMon, MSGBOX_DEFAULT
# 270 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 271 "data/scripts/move_tutors.pory"
	compare VAR_RESULT, NO
	goto_if_eq MossdeepCity_EventScript_PledgeMoveTutor_11
MossdeepCity_EventScript_PledgeMoveTutor_10:
# 274 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_PledgeMoveTaught, MSGBOX_DEFAULT
# 275 "data/scripts/move_tutors.pory"
	release
	return

MossdeepCity_EventScript_PledgeMoveTutor_2:
# 255 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_PledgeMoveDeclined
	goto MossdeepCity_EventScript_PledgeMoveTutor_1

MossdeepCity_EventScript_PledgeMoveTutor_6:
# 261 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_GRASS_PLEDGE
	goto MossdeepCity_EventScript_PledgeMoveTutor_4

MossdeepCity_EventScript_PledgeMoveTutor_7:
# 263 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_FIRE_PLEDGE
	goto MossdeepCity_EventScript_PledgeMoveTutor_4

MossdeepCity_EventScript_PledgeMoveTutor_8:
# 265 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_WATER_PLEDGE
	goto MossdeepCity_EventScript_PledgeMoveTutor_4

MossdeepCity_EventScript_PledgeMoveTutor_9:
# 267 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_PledgeMoveDeclined
	goto MossdeepCity_EventScript_PledgeMoveTutor_4

MossdeepCity_EventScript_PledgeMoveTutor_11:
# 272 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_PledgeMoveDeclined
	goto MossdeepCity_EventScript_PledgeMoveTutor_10


MoveTutor_EventScript_PledgeMoveDeclined::
# 279 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_PledgeMoveDeclined, MSGBOX_DEFAULT
# 280 "data/scripts/move_tutors.pory"
	release
	return


SootopolisCity_PokemonCenter_1F_EventScript_DynamicPunchTutor::
# 285 "data/scripts/move_tutors.pory"
	lock
# 286 "data/scripts/move_tutors.pory"
	faceplayer
# 287 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_DynamicPunchTeach, MSGBOX_YESNO
# 288 "data/scripts/move_tutors.pory"
	compare VAR_RESULT, NO
	goto_if_eq SootopolisCity_PokemonCenter_1F_EventScript_DynamicPunchTutor_2
SootopolisCity_PokemonCenter_1F_EventScript_DynamicPunchTutor_1:
# 291 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_DynamicPunchWhichMon, MSGBOX_DEFAULT
# 292 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_DYNAMIC_PUNCH
# 293 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 294 "data/scripts/move_tutors.pory"
	compare VAR_RESULT, NO
	goto_if_eq SootopolisCity_PokemonCenter_1F_EventScript_DynamicPunchTutor_5
SootopolisCity_PokemonCenter_1F_EventScript_DynamicPunchTutor_4:
# 297 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_DynamicPunchTaught, MSGBOX_DEFAULT
# 298 "data/scripts/move_tutors.pory"
	release
	return

SootopolisCity_PokemonCenter_1F_EventScript_DynamicPunchTutor_2:
# 289 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_DynamicPunchDeclined
	goto SootopolisCity_PokemonCenter_1F_EventScript_DynamicPunchTutor_1

SootopolisCity_PokemonCenter_1F_EventScript_DynamicPunchTutor_5:
# 295 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_DynamicPunchDeclined
	goto SootopolisCity_PokemonCenter_1F_EventScript_DynamicPunchTutor_4


MoveTutor_EventScript_DynamicPunchDeclined::
# 302 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_DynamicPunchDeclined, MSGBOX_DEFAULT
# 303 "data/scripts/move_tutors.pory"
	release
	return


MauvilleCity_EventScript_TricksTutor_Text_0:
# 71 "data/scripts/move_tutors.pory"
	.string "Trick$"

MauvilleCity_EventScript_TricksTutor_Text_1:
# 71 "data/scripts/move_tutors.pory"
	.string "Switcheroo$"

LilycoveCity_EventScript_CombatMoveTutor_Text_0:
# 218 "data/scripts/move_tutors.pory"
	.string "Ice Punch$"

LilycoveCity_EventScript_CombatMoveTutor_Text_1:
# 218 "data/scripts/move_tutors.pory"
	.string "Thunder Punch$"

LilycoveCity_EventScript_CombatMoveTutor_Text_2:
# 218 "data/scripts/move_tutors.pory"
	.string "Fire Punch$"

LilycoveCity_EventScript_CombatMoveTutor_Text_3:
# 218 "data/scripts/move_tutors.pory"
	.string "Mega Punch$"

LilycoveCity_EventScript_CombatMoveTutor_Text_4:
# 218 "data/scripts/move_tutors.pory"
	.string "Mega Kick$"

LilycoveCity_EventScript_CombatMoveTutor_Text_5:
# 218 "data/scripts/move_tutors.pory"
	.string "Rock Slide$"

MossdeepCity_EventScript_PledgeMoveTutor_Text_0:
# 258 "data/scripts/move_tutors.pory"
	.string "Grass Pledge$"

MossdeepCity_EventScript_PledgeMoveTutor_Text_1:
# 258 "data/scripts/move_tutors.pory"
	.string "Fire Pledge$"

MossdeepCity_EventScript_PledgeMoveTutor_Text_2:
# 258 "data/scripts/move_tutors.pory"
	.string "Water Pledge$"
