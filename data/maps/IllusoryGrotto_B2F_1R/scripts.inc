IllusoryGrotto_B2F_1R_MapScripts::
# 2 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, IllusoryGrotto_B2F_1R_MapScripts_MAP_SCRIPT_ON_LOAD
# 11 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, IllusoryGrotto_B2F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

IllusoryGrotto_B2F_1R_MapScripts_MAP_SCRIPT_ON_LOAD:
# 3 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	goto_if_set FLAG_EXP_1_ILLUSORY_GROTTO_B2F_1R_ROCK_IN_PLACE, IllusoryGrotto_B2F_1R_MapScripts_MAP_SCRIPT_ON_LOAD_2
IllusoryGrotto_B2F_1R_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 6 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	goto_if_set FLAG_EXP_1_ILLUSORY_GROTTO_B2F_1R_ROCK, IllusoryGrotto_B2F_1R_MapScripts_MAP_SCRIPT_ON_LOAD_4
	return

IllusoryGrotto_B2F_1R_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 4 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	setmetatile 18, 5, 0x01C, TRUE
	goto IllusoryGrotto_B2F_1R_MapScripts_MAP_SCRIPT_ON_LOAD_1

IllusoryGrotto_B2F_1R_MapScripts_MAP_SCRIPT_ON_LOAD_4:
# 7 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	setmetatile 18, 5, 0x011, FALSE
# 8 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	setmetatile 18, 7, 0x053, TRUE
	return

IllusoryGrotto_B2F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 12 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	goto_if_set FLAG_EXP_1_ILLUSORY_GROTTO_B2F_1R_ROCK, IllusoryGrotto_B2F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

IllusoryGrotto_B2F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 13 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	setvar VAR_TEMP_3, 1
	return


IllusoryGrotto_B2F_1R_Rock::
# 19 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	goto_if_set FLAG_EXP_1_ILLUSORY_GROTTO_B2F_1R_ROCK_IN_PLACE, IllusoryGrotto_B2F_1R_Rock_3
IllusoryGrotto_B2F_1R_Rock_1:
# 33 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	release
	return

IllusoryGrotto_B2F_1R_Rock_2:
# 20 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	call IllusoryGrottoMovableRock_Exp1
# 21 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	setmetatile 18, 5, 0x011, FALSE
# 22 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	setmetatile 18, 6, 0x023, TRUE
# 23 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	special DrawWholeMapView
# 24 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	delay 10
# 25 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	setmetatile 18, 6, 0x019, TRUE
# 26 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	setmetatile 18, 7, 0x053, TRUE
# 27 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	special DrawWholeMapView
# 28 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	playse SE_M_STRENGTH
# 29 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	delay 10
# 30 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	setflag FLAG_EXP_1_ILLUSORY_GROTTO_B2F_1R_ROCK
# 31 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	setvar VAR_TEMP_3, 1
	goto IllusoryGrotto_B2F_1R_Rock_1

IllusoryGrotto_B2F_1R_Rock_3:
# 19 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	goto_if_unset FLAG_EXP_1_ILLUSORY_GROTTO_B2F_1R_ROCK, IllusoryGrotto_B2F_1R_Rock_2
	goto IllusoryGrotto_B2F_1R_Rock_1


IllusoryGrotto_B2F_1R_Monster::
# 37 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	call IllusoryGrotto_MonsterCommon1_Exp1
# 38 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	setmetatile 18, 7, 0x04D, TRUE
# 39 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	special DrawWholeMapView
# 40 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	delay 10
# 41 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	setmetatile 18, 7, 0x04E, TRUE
# 42 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	special DrawWholeMapView
# 43 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	delay 10
# 44 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	setmetatile 18, 7, 0x04F, TRUE
# 45 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	call IllusoryGrotto_MonsterCommon2_Exp1
# 46 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 47 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	compare VAR_TEMP_1, 8
	goto_if_eq IllusoryGrotto_B2F_1R_Monster_2
# 51 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkFastDown2
IllusoryGrotto_B2F_1R_Monster_1:
# 53 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	waitmovement 0
# 54 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_UnlockFacingDirection
# 55 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	waitmovement 0
# 56 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	setmetatile 18, 7, 0x04E, TRUE
# 57 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	special DrawWholeMapView
# 58 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	delay 10
# 59 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	setmetatile 18, 7, 0x04D, TRUE
# 60 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	special DrawWholeMapView
# 61 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	delay 10
# 62 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	setmetatile 18, 7, 0x04C, TRUE
# 63 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	special DrawWholeMapView
# 64 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	release
	return

IllusoryGrotto_B2F_1R_Monster_2:
# 48 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkFastDown3
	goto IllusoryGrotto_B2F_1R_Monster_1

