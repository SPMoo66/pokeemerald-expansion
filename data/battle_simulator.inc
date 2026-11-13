Motel_BattleSimulator_Intro::
# 2 "data/battle_simulator.pory"
	special SpawnCameraObject
# 3 "data/battle_simulator.pory"
	applymovement LOCALID_CAMERA, Common_Movement_WalkUp3
# 4 "data/battle_simulator.pory"
	waitmovement 0
# 5 "data/battle_simulator.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 6 "data/battle_simulator.pory"
	waitmovement 0
# 7 "data/battle_simulator.pory"
	msgbox Motel_BattleSimulator_Intro_Text_0, MSGBOX_DEFAULT
# 8 "data/battle_simulator.pory"
	closemessage
# 9 "data/battle_simulator.pory"
	delay 10
# 10 "data/battle_simulator.pory"
	applymovement LOCALID_PLAYER, Common_Movement_Smile
# 11 "data/battle_simulator.pory"
	playse SE_M_MORNING_SUN
# 12 "data/battle_simulator.pory"
	delay 60
# 13 "data/battle_simulator.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp3
# 14 "data/battle_simulator.pory"
	waitmovement 0
# 15 "data/battle_simulator.pory"
	special RemoveCameraObject
# 16 "data/battle_simulator.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp2
# 17 "data/battle_simulator.pory"
	waitmovement 0
# 18 "data/battle_simulator.pory"
	applymovement 1, Common_Movement_WalkInPlaceLeft
# 19 "data/battle_simulator.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight4
# 20 "data/battle_simulator.pory"
	waitmovement 0
# 21 "data/battle_simulator.pory"
	msgbox Motel_BattleSimulator_Intro_Text_1, MSGBOX_DEFAULT
# 22 "data/battle_simulator.pory"
	closemessage
# 23 "data/battle_simulator.pory"
	applymovement 1, Common_Movement_WalkInPlaceUp
# 24 "data/battle_simulator.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceUp
# 25 "data/battle_simulator.pory"
	waitmovement 0
# 26 "data/battle_simulator.pory"
	msgbox Motel_BattleSimulator_Intro_Text_2, MSGBOX_DEFAULT
# 27 "data/battle_simulator.pory"
	closemessage
# 28 "data/battle_simulator.pory"
	applymovement 1, Common_Movement_WalkInPlaceLeft
# 29 "data/battle_simulator.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceRight
# 30 "data/battle_simulator.pory"
	waitmovement 0
# 31 "data/battle_simulator.pory"
	msgbox Motel_BattleSimulator_Intro_Text_3, MSGBOX_DEFAULT
# 32 "data/battle_simulator.pory"
	closemessage
# 33 "data/battle_simulator.pory"
	applymovement 1, Common_Movement_WalkInPlaceUp
# 34 "data/battle_simulator.pory"
	waitmovement 0
# 35 "data/battle_simulator.pory"
	setflag FLAG_INTRODUCED_BATTLESIM
# 36 "data/battle_simulator.pory"
	setvar VAR_TEMP_5, 0
	return


Motel_BattleSimulator::
# 40 "data/battle_simulator.pory"
	msgbox Motel_BattleSimulator_Text_0, MSGBOX_DEFAULT
# 42 "data/battle_simulator.pory"
	dynmultichoice 0, 6, FALSE, 3, 0, DYN_MULTICHOICE_CB_NONE, gText_Yes, gText_Info, gText_No
# 43 "data/battle_simulator.pory"
	compare VAR_RESULT, 0
	goto_if_eq Motel_BattleSimulator_2
# 51 "data/battle_simulator.pory"
	compare VAR_RESULT, 1
	goto_if_eq Motel_BattleSimulator_3
Motel_BattleSimulator_1:
# 54 "data/battle_simulator.pory"
	clearflag FLAG_NO_MONEY_LOSS_ON_DEFEAT
# 55 "data/battle_simulator.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 56 "data/battle_simulator.pory"
	closemessage
	return

Motel_BattleSimulator_2:
# 44 "data/battle_simulator.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 51
	goto_if_lt Motel_BattleSimulator_6
# 48 "data/battle_simulator.pory"
	call Gamecube_ChooseDisc
	goto Motel_BattleSimulator_1

Motel_BattleSimulator_3:
# 52 "data/battle_simulator.pory"
	call Gamecube_Info
	goto Motel_BattleSimulator_1

Motel_BattleSimulator_6:
# 45 "data/battle_simulator.pory"
	call CynthiasChallenge_Main
	goto Motel_BattleSimulator_1


Gamecube_ChooseDisc::
# 60 "data/battle_simulator.pory"
	msgbox Gamecube_ChooseDisc_Text_0, MSGBOX_DEFAULT
# 61 "data/battle_simulator.pory"
	dynmultipush Gamecube_ChooseDisc_Text_1, 0
# 62 "data/battle_simulator.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 51
	goto_if_ge Gamecube_ChooseDisc_2
Gamecube_ChooseDisc_1:
# 65 "data/battle_simulator.pory"
	dynmultistack 0, 6, FALSE, 3, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 66 "data/battle_simulator.pory"
	closemessage
# 67 "data/battle_simulator.pory"
	switch VAR_RESULT
# 68 "data/battle_simulator.pory"
	case 0, Gamecube_ChooseDisc_5
# 70 "data/battle_simulator.pory"
	case 1, Gamecube_ChooseDisc_6
	return

Gamecube_ChooseDisc_2:
# 63 "data/battle_simulator.pory"
	dynmultipush Gamecube_ChooseDisc_Text_2, 1
	goto Gamecube_ChooseDisc_1

Gamecube_ChooseDisc_5:
# 69 "data/battle_simulator.pory"
	call CynthiasChallenge_Main
	return

Gamecube_ChooseDisc_6:
# 71 "data/battle_simulator.pory"
	call AWaltzWithWally_Main
	return


CynthiasChallenge_Main::
# 78 "data/battle_simulator.pory"
	setflag FLAG_NO_MONEY_LOSS_ON_DEFEAT
# 79 "data/battle_simulator.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 80 "data/battle_simulator.pory"
	setvar VAR_0x8000, MUGSHOT_CYNTHIAS_CHALLENGE
# 81 "data/battle_simulator.pory"
	callnative DrawMugshot
# 82 "data/battle_simulator.pory"
	msgbox CynthiasChallenge_Main_Text_0
# 84 "data/battle_simulator.pory"
	goto_if_unset FLAG_BATTLESIM_DISC_1_1, CynthiasChallenge_Main_2
# 88 "data/battle_simulator.pory"
	dynmultipush CynthiasChallenge_Main_Text_2, 0
CynthiasChallenge_Main_1:
# 90 "data/battle_simulator.pory"
	goto_if_unset FLAG_BATTLESIM_DISC_1_2, CynthiasChallenge_Main_6
# 94 "data/battle_simulator.pory"
	dynmultipush CynthiasChallenge_Main_Text_4, 1
CynthiasChallenge_Main_5:
# 96 "data/battle_simulator.pory"
	goto_if_set FLAG_BATTLESIM_DISC_1_1, CynthiasChallenge_Main_11
CynthiasChallenge_Main_9:
# 104 "data/battle_simulator.pory"
	dynmultistack 0, 6, FALSE, 3, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 105 "data/battle_simulator.pory"
	callnative ClearMugshot
# 106 "data/battle_simulator.pory"
	switch VAR_RESULT
# 107 "data/battle_simulator.pory"
	case 0, CynthiasChallenge_Main_15
# 111 "data/battle_simulator.pory"
	case 1, CynthiasChallenge_Main_16
# 115 "data/battle_simulator.pory"
	case 2, CynthiasChallenge_Main_17
	return

CynthiasChallenge_Main_2:
# 85 "data/battle_simulator.pory"
	dynmultipush CynthiasChallenge_Main_Text_1, 0
	goto CynthiasChallenge_Main_1

CynthiasChallenge_Main_6:
# 91 "data/battle_simulator.pory"
	dynmultipush CynthiasChallenge_Main_Text_3, 1
	goto CynthiasChallenge_Main_5

CynthiasChallenge_Main_10:
# 97 "data/battle_simulator.pory"
	goto_if_unset FLAG_BATTLESIM_DISC_1_3, CynthiasChallenge_Main_19
# 101 "data/battle_simulator.pory"
	dynmultipush CynthiasChallenge_Main_Text_6, 2
	goto CynthiasChallenge_Main_9

CynthiasChallenge_Main_11:
# 96 "data/battle_simulator.pory"
	goto_if_set FLAG_BATTLESIM_DISC_1_2, CynthiasChallenge_Main_10
	goto CynthiasChallenge_Main_9

CynthiasChallenge_Main_15:
# 108 "data/battle_simulator.pory"
	fadeoutbgm 0
# 109 "data/battle_simulator.pory"
	fadescreen FADE_TO_BLACK
# 110 "data/battle_simulator.pory"
	warpcontinuescript MAP_LILYCOVE_CITY_BATTLE_SIMULATOR, 1, 2, CynthiasChallenge_Series1
	return

CynthiasChallenge_Main_16:
# 112 "data/battle_simulator.pory"
	fadeoutbgm 0
# 113 "data/battle_simulator.pory"
	fadescreen FADE_TO_BLACK
# 114 "data/battle_simulator.pory"
	warpcontinuescript MAP_LILYCOVE_CITY_BATTLE_SIMULATOR, 1, 2, CynthiasChallenge_Series2
	return

CynthiasChallenge_Main_17:
# 116 "data/battle_simulator.pory"
	fadeoutbgm 0
# 117 "data/battle_simulator.pory"
	fadescreen FADE_TO_BLACK
# 118 "data/battle_simulator.pory"
	warpcontinuescript MAP_LILYCOVE_CITY_BATTLE_SIMULATOR, 1, 2, CynthiasChallenge_Series3
	return

CynthiasChallenge_Main_19:
# 98 "data/battle_simulator.pory"
	dynmultipush CynthiasChallenge_Main_Text_5, 2
	goto CynthiasChallenge_Main_9


Gamecube_Info::
# 126 "data/battle_simulator.pory"
	msgbox Gamecube_Info_Text_0
# 132 "data/battle_simulator.pory"
	goto Motel_BattleSimulator
	return


Motel_BattleSimulator_FirstTrainer::
# 146 "data/battle_simulator.pory"
	fadescreen FADE_FROM_BLACK
# 147 "data/battle_simulator.pory"
	delay 20
# 148 "data/battle_simulator.pory"
	special HealPlayerParty
# 149 "data/battle_simulator.pory"
	speakername Text_System
# 150 "data/battle_simulator.pory"
	msgbox Motel_BattleSimulator_FirstTrainer_Text_0, MSGBOX_AUTOCLOSE
	return


Motel_BattleSimulator_SecondTrainer::
# 154 "data/battle_simulator.pory"
	special HealPlayerParty
# 155 "data/battle_simulator.pory"
	speakername Text_System
# 156 "data/battle_simulator.pory"
	msgbox Motel_BattleSimulator_SecondTrainer_Text_0, MSGBOX_AUTOCLOSE
	return


Motel_BattleSimulator_ThirdTrainer::
# 160 "data/battle_simulator.pory"
	special HealPlayerParty
# 161 "data/battle_simulator.pory"
	speakername Text_System
# 162 "data/battle_simulator.pory"
	msgbox Motel_BattleSimulator_ThirdTrainer_Text_0, MSGBOX_AUTOCLOSE
	return


Motel_BattleSimulator_FourthTrainer::
# 166 "data/battle_simulator.pory"
	special HealPlayerParty
# 167 "data/battle_simulator.pory"
	speakername Text_System
# 168 "data/battle_simulator.pory"
	msgbox Motel_BattleSimulator_FourthTrainer_Text_0, MSGBOX_AUTOCLOSE
	return


Motel_BattleSimulator_FinalTrainer::
# 172 "data/battle_simulator.pory"
	special HealPlayerParty
# 173 "data/battle_simulator.pory"
	speakername Text_System
# 174 "data/battle_simulator.pory"
	msgbox Motel_BattleSimulator_FinalTrainer_Text_0, MSGBOX_AUTOCLOSE
	return


Motel_BattleSimulator_Congratulations::
# 178 "data/battle_simulator.pory"
	special HealPlayerParty
# 179 "data/battle_simulator.pory"
	speakername Text_System
# 180 "data/battle_simulator.pory"
	msgbox Gamecube_Text_Congratulations, MSGBOX_AUTOCLOSE
	return


Motel_BattleSimulator_ExitSimulation::
# 184 "data/battle_simulator.pory"
	speakername Text_System
# 185 "data/battle_simulator.pory"
	msgbox Gamecube_Text_ExitingSim, MSGBOX_AUTOCLOSE
# 186 "data/battle_simulator.pory"
	warp MAP_LILYCOVE_CITY_COVE_LILY_MOTEL_1F, 9, 2
# 187 "data/battle_simulator.pory"
	waitstate
	return


CynthiasChallenge_Series1::
# 192 "data/battle_simulator.pory"
	call Motel_BattleSimulator_FirstTrainer
# 193 "data/battle_simulator.pory"
	trainerbattle_no_intro TRAINER_SIMULATOR_ROARK, CynthiasChallenge_Series1_Text_0
# 194 "data/battle_simulator.pory"
	call Motel_BattleSimulator_SecondTrainer
# 195 "data/battle_simulator.pory"
	trainerbattle_no_intro TRAINER_SIMULATOR_GARDENIA, CynthiasChallenge_Series1_Text_1
# 196 "data/battle_simulator.pory"
	call Motel_BattleSimulator_ThirdTrainer
# 197 "data/battle_simulator.pory"
	trainerbattle_no_intro TRAINER_SIMULATOR_MAYLENE, CynthiasChallenge_Series1_Text_2
# 198 "data/battle_simulator.pory"
	call Motel_BattleSimulator_FinalTrainer
# 199 "data/battle_simulator.pory"
	trainerbattle_no_intro TRAINER_SIMULATOR_WAKE, CynthiasChallenge_Series1_Text_3
# 200 "data/battle_simulator.pory"
	call Motel_BattleSimulator_Congratulations
# 201 "data/battle_simulator.pory"
	goto_if_unset FLAG_BATTLESIM_DISC_1_1, CynthiasChallenge_Series1_2
# 207 "data/battle_simulator.pory"
	giveitem ITEM_BALM_MUSHROOM, 1
CynthiasChallenge_Series1_1:
# 209 "data/battle_simulator.pory"
	goto Motel_BattleSimulator_ExitSimulation
	return

CynthiasChallenge_Series1_2:
# 202 "data/battle_simulator.pory"
	giveitem ITEM_STELLAR_TERA_SHARD, 2
# 203 "data/battle_simulator.pory"
	giveitem ITEM_EXP_CANDY_L, 2
# 204 "data/battle_simulator.pory"
	setflag FLAG_BATTLESIM_DISC_1_1
	goto CynthiasChallenge_Series1_1


CynthiasChallenge_Series2::
# 213 "data/battle_simulator.pory"
	call Motel_BattleSimulator_FirstTrainer
# 214 "data/battle_simulator.pory"
	trainerbattle_no_intro TRAINER_SIMULATOR_FANTINA, CynthiasChallenge_Series2_Text_0
# 215 "data/battle_simulator.pory"
	call Motel_BattleSimulator_SecondTrainer
# 216 "data/battle_simulator.pory"
	trainerbattle_no_intro TRAINER_SIMULATOR_BYRON, CynthiasChallenge_Series2_Text_1
# 217 "data/battle_simulator.pory"
	call Motel_BattleSimulator_ThirdTrainer
# 218 "data/battle_simulator.pory"
	trainerbattle_no_intro TRAINER_SIMULATOR_CANDICE, CynthiasChallenge_Series2_Text_2
# 219 "data/battle_simulator.pory"
	call Motel_BattleSimulator_FinalTrainer
# 220 "data/battle_simulator.pory"
	trainerbattle_no_intro TRAINER_SIMULATOR_VOLKNER, CynthiasChallenge_Series2_Text_3
# 221 "data/battle_simulator.pory"
	call Motel_BattleSimulator_Congratulations
# 222 "data/battle_simulator.pory"
	goto_if_unset FLAG_BATTLESIM_DISC_1_2, CynthiasChallenge_Series2_2
# 228 "data/battle_simulator.pory"
	giveitem ITEM_BALM_MUSHROOM, 1
CynthiasChallenge_Series2_1:
# 230 "data/battle_simulator.pory"
	goto Motel_BattleSimulator_ExitSimulation
	return

CynthiasChallenge_Series2_2:
# 223 "data/battle_simulator.pory"
	giveitem ITEM_STELLAR_TERA_SHARD, 2
# 224 "data/battle_simulator.pory"
	giveitem ITEM_EXP_CANDY_L, 2
# 225 "data/battle_simulator.pory"
	setflag FLAG_BATTLESIM_DISC_1_2
	goto CynthiasChallenge_Series2_1


CynthiasChallenge_Series3::
# 234 "data/battle_simulator.pory"
	call Motel_BattleSimulator_FirstTrainer
# 235 "data/battle_simulator.pory"
	trainerbattle_no_intro TRAINER_SIMULATOR_AARON, CynthiasChallenge_Series3_Text_0
# 236 "data/battle_simulator.pory"
	call Motel_BattleSimulator_SecondTrainer
# 237 "data/battle_simulator.pory"
	trainerbattle_no_intro TRAINER_SIMULATOR_BERTHA, CynthiasChallenge_Series3_Text_1
# 238 "data/battle_simulator.pory"
	call Motel_BattleSimulator_ThirdTrainer
# 239 "data/battle_simulator.pory"
	trainerbattle_no_intro TRAINER_SIMULATOR_FLINT, CynthiasChallenge_Series3_Text_2
# 240 "data/battle_simulator.pory"
	call Motel_BattleSimulator_FourthTrainer
# 241 "data/battle_simulator.pory"
	trainerbattle_no_intro TRAINER_SIMULATOR_LUCIAN, CynthiasChallenge_Series3_Text_3
# 242 "data/battle_simulator.pory"
	call Motel_BattleSimulator_FinalTrainer
# 243 "data/battle_simulator.pory"
	trainerbattle_no_intro TRAINER_SIMULATOR_CYNTHIA, CynthiasChallenge_Series3_Text_4
# 244 "data/battle_simulator.pory"
	call Motel_BattleSimulator_Congratulations
# 245 "data/battle_simulator.pory"
	goto_if_unset FLAG_BATTLESIM_DISC_1_3, CynthiasChallenge_Series3_2
# 255 "data/battle_simulator.pory"
	giveitem ITEM_PEARL_STRING, 1
CynthiasChallenge_Series3_1:
# 257 "data/battle_simulator.pory"
	goto Motel_BattleSimulator_ExitSimulation
	return

CynthiasChallenge_Series3_2:
# 246 "data/battle_simulator.pory"
	giveitem ITEM_SHINY_LURE, 1
# 247 "data/battle_simulator.pory"
	giveitem ITEM_EXP_CANDY_XL, 2
# 248 "data/battle_simulator.pory"
	buffernumberstring STR_VAR_1, 5
# 249 "data/battle_simulator.pory"
	setvar VAR_0x8004, 5
# 250 "data/battle_simulator.pory"
	special GiveFrontierBattlePoints
# 251 "data/battle_simulator.pory"
	msgbox PlayerObtainedXBattlePoints, MSGBOX_GETPOINTS
# 252 "data/battle_simulator.pory"
	setflag FLAG_BATTLESIM_DISC_1_3
	goto CynthiasChallenge_Series3_1


AWaltzWithWally_Main::
# 262 "data/battle_simulator.pory"
	setflag FLAG_NO_MONEY_LOSS_ON_DEFEAT
# 263 "data/battle_simulator.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 264 "data/battle_simulator.pory"
	setvar VAR_0x8000, MUGSHOT_A_WALTZ_WITH_WALLY
# 265 "data/battle_simulator.pory"
	callnative DrawMugshot
# 266 "data/battle_simulator.pory"
	msgbox AWaltzWithWally_Main_Text_0
# 268 "data/battle_simulator.pory"
	goto_if_unset FLAG_BATTLESIM_DISC_2_1, AWaltzWithWally_Main_2
# 272 "data/battle_simulator.pory"
	dynmultipush AWaltzWithWally_Main_Text_2, 0
AWaltzWithWally_Main_1:
# 274 "data/battle_simulator.pory"
	goto_if_unset FLAG_BATTLESIM_DISC_2_2, AWaltzWithWally_Main_6
# 278 "data/battle_simulator.pory"
	dynmultipush AWaltzWithWally_Main_Text_4, 0
AWaltzWithWally_Main_5:
# 280 "data/battle_simulator.pory"
	dynmultistack 0, 6, FALSE, 3, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 281 "data/battle_simulator.pory"
	callnative ClearMugshot
# 282 "data/battle_simulator.pory"
	switch VAR_RESULT
# 283 "data/battle_simulator.pory"
	case 0, AWaltzWithWally_Main_10
# 287 "data/battle_simulator.pory"
	case 1, AWaltzWithWally_Main_11
	return

AWaltzWithWally_Main_2:
# 269 "data/battle_simulator.pory"
	dynmultipush AWaltzWithWally_Main_Text_1, 0
	goto AWaltzWithWally_Main_1

AWaltzWithWally_Main_6:
# 275 "data/battle_simulator.pory"
	dynmultipush AWaltzWithWally_Main_Text_3, 0
	goto AWaltzWithWally_Main_5

AWaltzWithWally_Main_10:
# 284 "data/battle_simulator.pory"
	fadeoutbgm 0
# 285 "data/battle_simulator.pory"
	fadescreen FADE_TO_BLACK
# 286 "data/battle_simulator.pory"
	warpcontinuescript MAP_LILYCOVE_CITY_BATTLE_SIMULATOR, 1, 2, AWaltzWithWally_Series1
	return

AWaltzWithWally_Main_11:
# 288 "data/battle_simulator.pory"
	fadeoutbgm 0
# 289 "data/battle_simulator.pory"
	fadescreen FADE_TO_BLACK
# 290 "data/battle_simulator.pory"
	warpcontinuescript MAP_LILYCOVE_CITY_BATTLE_SIMULATOR, 1, 2, AWaltzWithWally_Series2
	return


AWaltzWithWally_Series1::
# 298 "data/battle_simulator.pory"
	fadescreen FADE_FROM_BLACK
# 299 "data/battle_simulator.pory"
	delay 20
# 300 "data/battle_simulator.pory"
	call Motel_BattleSimulator_FinalTrainer
# 301 "data/battle_simulator.pory"
	multi_2_vs_2 TRAINER_SIMULATOR_ROXANNE, RustboroCity_Gym_Text_RoxanneRematchDefeat, TRAINER_SIMULATOR_WATTSON, MauvilleCity_Gym_Text_WattsonRematchDefeat, PARTNER_WALLY_SIMULATOR
# 302 "data/battle_simulator.pory"
	compare VAR_RESULT, B_OUTCOME_LOST
	goto_if_eq AWaltzWithWally_Series1_2
# 302 "data/battle_simulator.pory"
	compare VAR_RESULT, B_OUTCOME_FORFEITED
	goto_if_eq AWaltzWithWally_Series1_2
AWaltzWithWally_Series1_1:
# 306 "data/battle_simulator.pory"
	call Motel_BattleSimulator_Congratulations
# 307 "data/battle_simulator.pory"
	goto_if_unset FLAG_BATTLESIM_DISC_2_1, AWaltzWithWally_Series1_7
# 317 "data/battle_simulator.pory"
	giveitem ITEM_BALM_MUSHROOM, 1
AWaltzWithWally_Series1_6:
# 319 "data/battle_simulator.pory"
	goto Motel_BattleSimulator_ExitSimulation
	return

AWaltzWithWally_Series1_2:
# 303 "data/battle_simulator.pory"
	fadescreen FADE_TO_BLACK
# 304 "data/battle_simulator.pory"
	special SetCB2WhiteOut
	goto AWaltzWithWally_Series1_1

AWaltzWithWally_Series1_7:
# 308 "data/battle_simulator.pory"
	giveitem ITEM_STELLAR_TERA_SHARD, 2
# 309 "data/battle_simulator.pory"
	giveitem ITEM_EXP_CANDY_L, 2
# 310 "data/battle_simulator.pory"
	buffernumberstring STR_VAR_1, 3
# 311 "data/battle_simulator.pory"
	setvar VAR_0x8004, 3
# 312 "data/battle_simulator.pory"
	special GiveFrontierBattlePoints
# 313 "data/battle_simulator.pory"
	msgbox PlayerObtainedXBattlePoints, MSGBOX_GETPOINTS
# 314 "data/battle_simulator.pory"
	setflag FLAG_BATTLESIM_DISC_2_1
	goto AWaltzWithWally_Series1_6


AWaltzWithWally_Series2::
# 323 "data/battle_simulator.pory"
	fadescreen FADE_FROM_BLACK
# 324 "data/battle_simulator.pory"
	delay 20
# 325 "data/battle_simulator.pory"
	call Motel_BattleSimulator_FinalTrainer
# 326 "data/battle_simulator.pory"
	multi_2_vs_2 TRAINER_SIMULATOR_BRAWLY, RustboroCity_Gym_Text_RoxanneRematchDefeat, TRAINER_SIMULATOR_FLANNERY, MauvilleCity_Gym_Text_WattsonRematchDefeat, PARTNER_WALLY_SIMULATOR
# 327 "data/battle_simulator.pory"
	compare VAR_RESULT, B_OUTCOME_LOST
	goto_if_eq AWaltzWithWally_Series2_2
# 327 "data/battle_simulator.pory"
	compare VAR_RESULT, B_OUTCOME_FORFEITED
	goto_if_eq AWaltzWithWally_Series2_2
AWaltzWithWally_Series2_1:
# 331 "data/battle_simulator.pory"
	call Motel_BattleSimulator_Congratulations
# 332 "data/battle_simulator.pory"
	goto_if_unset FLAG_BATTLESIM_DISC_2_2, AWaltzWithWally_Series2_7
# 342 "data/battle_simulator.pory"
	giveitem ITEM_BALM_MUSHROOM, 1
AWaltzWithWally_Series2_6:
# 344 "data/battle_simulator.pory"
	goto Motel_BattleSimulator_ExitSimulation
	return

AWaltzWithWally_Series2_2:
# 328 "data/battle_simulator.pory"
	fadescreen FADE_TO_BLACK
# 329 "data/battle_simulator.pory"
	special SetCB2WhiteOut
	goto AWaltzWithWally_Series2_1

AWaltzWithWally_Series2_7:
# 333 "data/battle_simulator.pory"
	giveitem ITEM_STELLAR_TERA_SHARD, 2
# 334 "data/battle_simulator.pory"
	giveitem ITEM_EXP_CANDY_L, 2
# 335 "data/battle_simulator.pory"
	buffernumberstring STR_VAR_1, 3
# 336 "data/battle_simulator.pory"
	setvar VAR_0x8004, 3
# 337 "data/battle_simulator.pory"
	special GiveFrontierBattlePoints
# 338 "data/battle_simulator.pory"
	msgbox PlayerObtainedXBattlePoints, MSGBOX_GETPOINTS
# 339 "data/battle_simulator.pory"
	setflag FLAG_BATTLESIM_DISC_2_2
	goto AWaltzWithWally_Series2_6


Motel_BattleSimulator_Intro_Text_0:
# 7 "data/battle_simulator.pory"
	.string "Oh, hey!\nAre you {PLAYER}?$"

Motel_BattleSimulator_Intro_Text_1:
# 21 "data/battle_simulator.pory"
	.string "The group that checked in this morning\nleft this thing here for someone named\l{PLAYER}. That must be you then.$"

Motel_BattleSimulator_Intro_Text_2:
# 26 "data/battle_simulator.pory"
	.string "They said it's a battle simulator.\pComes with its own instructions and\neverything!\pI'd love to use that sort of thing,\nbut we've got no Pokémon here.$"

Motel_BattleSimulator_Intro_Text_3:
# 31 "data/battle_simulator.pory"
	.string "Feel free to use it whenever you're\nhere…\pJust try not to interrupt my TV time!$"

Motel_BattleSimulator_Text_0:
# 40 "data/battle_simulator.pory"
	.string "It's a battle simulator!\n"
	.string "Want to use it?$"

Gamecube_ChooseDisc_Text_0:
# 60 "data/battle_simulator.pory"
	.string "Which disc will you insert?$"

Gamecube_ChooseDisc_Text_1:
# 61 "data/battle_simulator.pory"
	.string "Cynthia's Challenge (70)$"

Gamecube_ChooseDisc_Text_2:
# 63 "data/battle_simulator.pory"
	.string "A Waltz with Wally (80)$"

CynthiasChallenge_Main_Text_0:
# 82 "data/battle_simulator.pory"
	.string "Welcome to Cynthia's Challenge!\n"
	.string "Please select a battle series.$"

CynthiasChallenge_Main_Text_1:
# 85 "data/battle_simulator.pory"
	.string "Gym Leaders Part 1$"

CynthiasChallenge_Main_Text_2:
# 88 "data/battle_simulator.pory"
	.string "Gym Leaders Part 1 - Complete!$"

CynthiasChallenge_Main_Text_3:
# 91 "data/battle_simulator.pory"
	.string "Gym Leaders Part 2$"

CynthiasChallenge_Main_Text_4:
# 94 "data/battle_simulator.pory"
	.string "Gym Leaders Part 2 - Complete!$"

CynthiasChallenge_Main_Text_5:
# 98 "data/battle_simulator.pory"
	.string "Sinnoh League$"

CynthiasChallenge_Main_Text_6:
# 101 "data/battle_simulator.pory"
	.string "Sinnoh League - Complete!$"

Gamecube_Info_Text_0:
# 126 "data/battle_simulator.pory"
	.string "In the battle simulator you will use\n"
	.string "your own party to face a series of\l"
	.string "consecutive battles.\p"
	.string "After each battle your party will be\n"
	.string "healed, but you will have no opportunity\l"
	.string "to reorganize it.\p"
	.string "A reward will be given for the\n"
	.string "completion of each series in a disc.\p"
	.string "Money will not be lost if you are\n"
	.string "defeated within the battle simulator.\p"
	.string "Some discs will require a series to be\n"
	.string "completed before more within it are\l"
	.string "unlocked.\p"
	.string "Find more discs out in the world to be\n"
	.string "faced with more battles and further\l"
	.string "rewards!$"

Motel_BattleSimulator_FirstTrainer_Text_0:
# 150 "data/battle_simulator.pory"
	.string "First trainer.\nInitializing…\l… … …$"

Motel_BattleSimulator_SecondTrainer_Text_0:
# 156 "data/battle_simulator.pory"
	.string "Second trainer.\nInitializing…\l… … …$"

Motel_BattleSimulator_ThirdTrainer_Text_0:
# 162 "data/battle_simulator.pory"
	.string "Third trainer.\nInitializing…\l… … …$"

Motel_BattleSimulator_FourthTrainer_Text_0:
# 168 "data/battle_simulator.pory"
	.string "Fourth trainer.\nInitializing…\l… … …$"

Motel_BattleSimulator_FinalTrainer_Text_0:
# 174 "data/battle_simulator.pory"
	.string "Final trainer.\nInitializing…\l… … …$"

CynthiasChallenge_Series1_Text_0:
# 193 "data/battle_simulator.pory"
	.string "W-what? That can't be!\nMy buffed-up Pokémon!$"

CynthiasChallenge_Series1_Text_1:
# 195 "data/battle_simulator.pory"
	.string "Amazing!\nYou're very good, aren't you?$"

CynthiasChallenge_Series1_Text_2:
# 197 "data/battle_simulator.pory"
	.string "I shall admit defeat…\nYou are much too strong.$"

CynthiasChallenge_Series1_Text_3:
# 199 "data/battle_simulator.pory"
	.string "Hunwah! It's gone and ended!\nHow will I say this… I want more!\lI wanted to battle a lot more!$"

CynthiasChallenge_Series2_Text_0:
# 214 "data/battle_simulator.pory"
	.string "You are so fantastically strong.\nI know now why I have lost.$"

CynthiasChallenge_Series2_Text_1:
# 216 "data/battle_simulator.pory"
	.string "Hmm! My sturdy Pokémon, defeated!$"

CynthiasChallenge_Series2_Text_2:
# 218 "data/battle_simulator.pory"
	.string "I must say, I'm warmed up to you!\nI might even admire you a little.$"

CynthiasChallenge_Series2_Text_3:
# 220 "data/battle_simulator.pory"
	.string "You've got me beat…\nYour desire and the noble way your\lPokémon battled for you…\lI even felt thrilled during our match.\lThat was a very good battle.$"

CynthiasChallenge_Series3_Text_0:
# 235 "data/battle_simulator.pory"
	.string "I will now concede defeat. But I think\nyou came to see how great Bug-type\lPokémon can be. Battling is a deep and\lcomplex affair…$"

CynthiasChallenge_Series3_Text_1:
# 237 "data/battle_simulator.pory"
	.string "Well! Dear child, I must say, that was\nmost impressive. Your Pokémon believed\lin you and did their best to earn you\lthe win.$"

CynthiasChallenge_Series3_Text_2:
# 239 "data/battle_simulator.pory"
	.string "…! I wasn't expecting this! I wasn't\nlooking down on you… But I didn't think\lfor one second that I'd lose!$"

CynthiasChallenge_Series3_Text_3:
# 241 "data/battle_simulator.pory"
	.string "I see… You getting past the three\nbefore me was no fluke. Your power\lis real.$"

CynthiasChallenge_Series3_Text_4:
# 243 "data/battle_simulator.pory"
	.string "…Just a few moments ago, you were the\nmost powerful challenger. And just now,\lyou became the most powerful of all the\lTrainers.$"

AWaltzWithWally_Main_Text_0:
# 266 "data/battle_simulator.pory"
	.string "Welcome to A Waltz with Wally!\n"
	.string "Please select a battle series.$"

AWaltzWithWally_Main_Text_1:
# 269 "data/battle_simulator.pory"
	.string "Part 1$"

AWaltzWithWally_Main_Text_2:
# 272 "data/battle_simulator.pory"
	.string "Part 1 - Complete!$"

AWaltzWithWally_Main_Text_3:
# 275 "data/battle_simulator.pory"
	.string "Part 2$"

AWaltzWithWally_Main_Text_4:
# 278 "data/battle_simulator.pory"
	.string "Part 2 - Complete!$"

Gamecube_Text_Congratulations::
# 135 "data/battle_simulator.pory"
	.string "Congratulations. You have completed\n"
	.string "the current series of battles.$"

Gamecube_Text_ExitingSim::
# 140 "data/battle_simulator.pory"
	.string "Closing simulation…\n"
	.string "Don't turn off the power…$"
