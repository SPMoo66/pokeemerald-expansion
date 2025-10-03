IllusoryGrotto_B3F_1R_MapScripts::
# 2 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, IllusoryGrotto_B3F_1R_MapScripts_MAP_SCRIPT_ON_LOAD
# 8 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, IllusoryGrotto_B3F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

IllusoryGrotto_B3F_1R_MapScripts_MAP_SCRIPT_ON_LOAD:
# 3 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	goto_if_set FLAG_EXP_1_ILLUSORY_GROTTO_B3F_1R_ROCK, IllusoryGrotto_B3F_1R_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

IllusoryGrotto_B3F_1R_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 4 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	setmetatile 17, 16, 0x011, FALSE
# 5 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	setmetatile 17, 18, 0x023, TRUE
	return

IllusoryGrotto_B3F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 9 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	goto_if_set FLAG_EXP_1_ILLUSORY_GROTTO_B3F_1R_ROCK, IllusoryGrotto_B3F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

IllusoryGrotto_B3F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 10 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	setvar VAR_TEMP_3, 1
	return


IllusoryGrotto_B3F_1R_Rock::
# 16 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	goto_if_unset FLAG_EXP_1_ILLUSORY_GROTTO_B3F_1R_ROCK, IllusoryGrotto_B3F_1R_Rock_2
IllusoryGrotto_B3F_1R_Rock_1:
# 30 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	release
	return

IllusoryGrotto_B3F_1R_Rock_2:
# 17 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	call IllusoryGrottoMovableRock_Exp1
# 18 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	setmetatile 17, 16, 0x011, FALSE
# 19 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	setmetatile 17, 17, 0x023, TRUE
# 20 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	special DrawWholeMapView
# 21 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	delay 10
# 22 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	setmetatile 17, 17, 0x019, TRUE
# 23 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	setmetatile 17, 18, 0x023, TRUE
# 24 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	special DrawWholeMapView
# 25 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	playse SE_M_STRENGTH
# 26 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	delay 10
# 27 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	setflag FLAG_EXP_1_ILLUSORY_GROTTO_B3F_1R_ROCK
# 28 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	setvar VAR_TEMP_3, 1
	goto IllusoryGrotto_B3F_1R_Rock_1


IllusoryGrotto_B3F_1R_Monster1::
# 34 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	call IllusoryGrotto_MonsterCommon1_Exp1
# 35 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	setmetatile 17, 18, 0x025, TRUE
# 36 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	special DrawWholeMapView
# 37 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	delay 10
# 38 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	setmetatile 17, 18, 0x026, TRUE
# 39 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	special DrawWholeMapView
# 40 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	delay 10
# 41 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	setmetatile 17, 18, 0x027, TRUE
# 42 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	call IllusoryGrotto_MonsterCommon2_Exp1
# 43 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkFastDown4
# 44 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	waitmovement 0
# 45 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_UnlockFacingDirection
# 46 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	waitmovement 0
# 47 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	setmetatile 17, 18, 0x026, TRUE
# 48 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	special DrawWholeMapView
# 49 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	delay 10
# 50 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	setmetatile 17, 18, 0x025, TRUE
# 51 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	special DrawWholeMapView
# 52 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	delay 10
# 53 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	setmetatile 17, 18, 0x01D, TRUE
# 54 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	special DrawWholeMapView
# 55 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	release
	return


IllusoryGrotto_B3F_1R_Monster2::
# 59 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	call IllusoryGrotto_MonsterCommon1_Exp1
# 60 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	setmetatile 12, 12, 0x025, TRUE
# 61 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	special DrawWholeMapView
# 62 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	delay 10
# 63 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	setmetatile 12, 12, 0x026, TRUE
# 64 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	special DrawWholeMapView
# 65 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	delay 10
# 66 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	setmetatile 12, 12, 0x027, TRUE
# 67 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	call IllusoryGrotto_MonsterCommon2_Exp1
# 68 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkFastDown2
# 69 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	waitmovement 0
# 70 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_UnlockFacingDirection
# 71 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	waitmovement 0
# 72 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	setmetatile 12, 12, 0x026, TRUE
# 73 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	special DrawWholeMapView
# 74 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	delay 10
# 75 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	setmetatile 12, 12, 0x025, TRUE
# 76 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	special DrawWholeMapView
# 77 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	delay 10
# 78 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	setmetatile 12, 12, 0x01D, TRUE
# 79 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	special DrawWholeMapView
# 80 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	release
	return


IllusoryGrotto_B3F_1R_Monster3::
# 84 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	call IllusoryGrotto_MonsterCommon1_Exp1
# 85 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	setmetatile 6, 20, 0x025, TRUE
# 86 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	special DrawWholeMapView
# 87 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	delay 10
# 88 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	setmetatile 6, 20, 0x026, TRUE
# 89 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	special DrawWholeMapView
# 90 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	delay 10
# 91 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	setmetatile 6, 20, 0x027, TRUE
# 92 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	call IllusoryGrotto_MonsterCommon2_Exp1
# 93 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkFastDown
# 94 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	waitmovement 0
# 95 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_UnlockFacingDirection
# 96 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	waitmovement 0
# 97 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	setmetatile 6, 20, 0x026, TRUE
# 98 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	special DrawWholeMapView
# 99 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	delay 10
# 100 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	setmetatile 6, 20, 0x025, TRUE
# 101 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	special DrawWholeMapView
# 102 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	delay 10
# 103 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	setmetatile 6, 20, 0x01D, TRUE
# 104 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	special DrawWholeMapView
# 105 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	release
	return

