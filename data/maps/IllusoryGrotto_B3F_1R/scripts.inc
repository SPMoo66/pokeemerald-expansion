IllusoryGrotto_B3F_1R_MapScripts::
# 4 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, IllusoryGrotto_B3F_1R_MapScripts_MAP_SCRIPT_ON_LOAD
# 10 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, IllusoryGrotto_B3F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

IllusoryGrotto_B3F_1R_MapScripts_MAP_SCRIPT_ON_LOAD:
# 5 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	goto_if_set FLAG_EXP_1_ILLUSORY_GROTTO_B3F_1R_ROCK, IllusoryGrotto_B3F_1R_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

IllusoryGrotto_B3F_1R_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 6 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	setmetatile 17, 16, 0x011, FALSE
# 7 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	setmetatile 17, 18, 0x023, TRUE
	return

IllusoryGrotto_B3F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 11 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	goto_if_set FLAG_EXP_1_ILLUSORY_GROTTO_B3F_1R_ROCK, IllusoryGrotto_B3F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

IllusoryGrotto_B3F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 12 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	setvar VAR_TEMP_3, 1
	return


IllusoryGrotto_B3F_1R_Rock::
# 18 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	goto_if_unset FLAG_EXP_1_ILLUSORY_GROTTO_B3F_1R_ROCK, IllusoryGrotto_B3F_1R_Rock_2
IllusoryGrotto_B3F_1R_Rock_1:
# 33 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	release
	return

IllusoryGrotto_B3F_1R_Rock_2:
# 19 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	call IllusoryGrottoMovableRock_Exp1
# 20 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	setmetatile 17, 16, 0x011, FALSE
# 21 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	setmetatile 17, 17, 0x023, TRUE
# 22 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	special DrawWholeMapView
# 23 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	delay 10
# 24 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	setmetatile 17, 17, 0x019, TRUE
# 25 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	setmetatile 17, 18, 0x023, TRUE
# 26 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	special DrawWholeMapView
# 27 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	playse SE_M_STRENGTH
# 28 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	delay 10
# 29 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	setflag FLAG_EXP_1_ILLUSORY_GROTTO_B3F_1R_ROCK
# 30 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	setvar VAR_TEMP_3, 1
# 31 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	removeobject 1
	goto IllusoryGrotto_B3F_1R_Rock_1


IllusoryGrotto_B3F_1R_Monster1::
# 37 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	call IllusoryGrotto_MonsterCommon1_Exp1
# 38 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	setmetatile 17, 18, 0x025, TRUE
# 39 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	special DrawWholeMapView
# 40 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	delay 10
# 41 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	setmetatile 17, 18, 0x026, TRUE
# 42 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	special DrawWholeMapView
# 43 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	delay 10
# 44 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	setmetatile 17, 18, 0x027, TRUE
# 45 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	call IllusoryGrotto_MonsterCommon2_Exp1
# 46 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkFastDown4
# 47 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	waitmovement 0
# 48 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_UnlockFacingDirection
# 49 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	waitmovement 0
# 50 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	setmetatile 17, 18, 0x026, TRUE
# 51 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	special DrawWholeMapView
# 52 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	delay 10
# 53 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	setmetatile 17, 18, 0x025, TRUE
# 54 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	special DrawWholeMapView
# 55 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	delay 10
# 56 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	setmetatile 17, 18, 0x01D, TRUE
# 57 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	special DrawWholeMapView
# 58 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	release
	return


IllusoryGrotto_B3F_1R_Monster2::
# 62 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	call IllusoryGrotto_MonsterCommon1_Exp1
# 63 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	setmetatile 12, 12, 0x025, TRUE
# 64 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	special DrawWholeMapView
# 65 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	delay 10
# 66 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	setmetatile 12, 12, 0x026, TRUE
# 67 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	special DrawWholeMapView
# 68 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	delay 10
# 69 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	setmetatile 12, 12, 0x027, TRUE
# 70 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	call IllusoryGrotto_MonsterCommon2_Exp1
# 71 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkFastDown2
# 72 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	waitmovement 0
# 73 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_UnlockFacingDirection
# 74 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	waitmovement 0
# 75 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	setmetatile 12, 12, 0x026, TRUE
# 76 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	special DrawWholeMapView
# 77 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	delay 10
# 78 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	setmetatile 12, 12, 0x025, TRUE
# 79 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	special DrawWholeMapView
# 80 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	delay 10
# 81 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	setmetatile 12, 12, 0x01D, TRUE
# 82 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	special DrawWholeMapView
# 83 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	release
	return


IllusoryGrotto_B3F_1R_Monster3::
# 87 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	call IllusoryGrotto_MonsterCommon1_Exp1
# 88 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	setmetatile 6, 20, 0x025, TRUE
# 89 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	special DrawWholeMapView
# 90 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	delay 10
# 91 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	setmetatile 6, 20, 0x026, TRUE
# 92 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	special DrawWholeMapView
# 93 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	delay 10
# 94 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	setmetatile 6, 20, 0x027, TRUE
# 95 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	call IllusoryGrotto_MonsterCommon2_Exp1
# 96 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkFastDown
# 97 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	waitmovement 0
# 98 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_UnlockFacingDirection
# 99 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	waitmovement 0
# 100 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	setmetatile 6, 20, 0x026, TRUE
# 101 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	special DrawWholeMapView
# 102 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	delay 10
# 103 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	setmetatile 6, 20, 0x025, TRUE
# 104 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	special DrawWholeMapView
# 105 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	delay 10
# 106 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	setmetatile 6, 20, 0x01D, TRUE
# 107 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	special DrawWholeMapView
# 108 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	release
	return

