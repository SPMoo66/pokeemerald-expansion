IllusoryGrotto_B2F_1R_MapScripts::
# 4 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, IllusoryGrotto_B2F_1R_MapScripts_MAP_SCRIPT_ON_LOAD
# 13 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, IllusoryGrotto_B2F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

IllusoryGrotto_B2F_1R_MapScripts_MAP_SCRIPT_ON_LOAD:
# 5 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	goto_if_set FLAG_EXP_1_ILLUSORY_GROTTO_B2F_1R_ROCK_IN_PLACE, IllusoryGrotto_B2F_1R_MapScripts_MAP_SCRIPT_ON_LOAD_2
IllusoryGrotto_B2F_1R_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 8 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	goto_if_set FLAG_EXP_1_ILLUSORY_GROTTO_B2F_1R_ROCK, IllusoryGrotto_B2F_1R_MapScripts_MAP_SCRIPT_ON_LOAD_4
	return

IllusoryGrotto_B2F_1R_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 6 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	setmetatile 18, 6, 0x01C, TRUE
	goto IllusoryGrotto_B2F_1R_MapScripts_MAP_SCRIPT_ON_LOAD_1

IllusoryGrotto_B2F_1R_MapScripts_MAP_SCRIPT_ON_LOAD_4:
# 9 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	setmetatile 18, 6, 0x011, FALSE
# 10 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	setmetatile 18, 8, 0x053, TRUE
	return

IllusoryGrotto_B2F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 14 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	setflag FLAG_TEMP_3
# 15 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	goto_if_set FLAG_EXP_1_ILLUSORY_GROTTO_B2F_1R_ROCK_IN_PLACE, IllusoryGrotto_B2F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
IllusoryGrotto_B2F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 18 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	goto_if_set FLAG_EXP_1_ILLUSORY_GROTTO_B2F_1R_ROCK, IllusoryGrotto_B2F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION_6
	return

IllusoryGrotto_B2F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 16 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	clearflag FLAG_TEMP_3
	goto IllusoryGrotto_B2F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

IllusoryGrotto_B2F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
# 15 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	goto_if_unset FLAG_EXP_1_ILLUSORY_GROTTO_B2F_1R_ROCK, IllusoryGrotto_B2F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
	goto IllusoryGrotto_B2F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

IllusoryGrotto_B2F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION_6:
# 19 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	setvar VAR_TEMP_3, 1
	return


IllusoryGrotto_B2F_1R_Rock::
# 25 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	goto_if_set FLAG_EXP_1_ILLUSORY_GROTTO_B2F_1R_ROCK_IN_PLACE, IllusoryGrotto_B2F_1R_Rock_3
IllusoryGrotto_B2F_1R_Rock_1:
# 41 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	release
	return

IllusoryGrotto_B2F_1R_Rock_2:
# 26 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	call IllusoryGrottoMovableRock_Exp1
# 27 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	setmetatile 18, 6, 0x011, FALSE
# 28 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	setmetatile 18, 7, 0x023, TRUE
# 29 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	special DrawWholeMapView
# 30 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	delay 10
# 31 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	setmetatile 18, 7, 0x019, TRUE
# 32 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	setmetatile 18, 8, 0x053, TRUE
# 33 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	special DrawWholeMapView
# 34 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	playse SE_M_STRENGTH
# 35 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	delay 10
# 36 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	setflag FLAG_EXP_1_ILLUSORY_GROTTO_B2F_1R_ROCK
# 37 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	setvar VAR_TEMP_3, 1
# 38 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	setflag FLAG_TEMP_3
# 39 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	removeobject 1
	goto IllusoryGrotto_B2F_1R_Rock_1

IllusoryGrotto_B2F_1R_Rock_3:
# 25 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	goto_if_unset FLAG_EXP_1_ILLUSORY_GROTTO_B2F_1R_ROCK, IllusoryGrotto_B2F_1R_Rock_2
	goto IllusoryGrotto_B2F_1R_Rock_1


IllusoryGrotto_B2F_1R_Monster::
# 45 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	call IllusoryGrotto_MonsterCommon1_Exp1
# 46 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	setmetatile 18, 8, 0x04D, TRUE
# 47 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	special DrawWholeMapView
# 48 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	delay 10
# 49 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	setmetatile 18, 8, 0x04E, TRUE
# 50 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	special DrawWholeMapView
# 51 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	delay 10
# 52 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	setmetatile 18, 8, 0x04F, TRUE
# 53 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	call IllusoryGrotto_MonsterCommon2_Exp1
# 54 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 55 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	compare VAR_TEMP_1, 8
	goto_if_eq IllusoryGrotto_B2F_1R_Monster_2
# 59 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkFastDown2
IllusoryGrotto_B2F_1R_Monster_1:
# 61 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	waitmovement 0
# 62 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_UnlockFacingDirection
# 63 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	waitmovement 0
# 64 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	setmetatile 18, 8, 0x04E, TRUE
# 65 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	special DrawWholeMapView
# 66 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	delay 10
# 67 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	setmetatile 18, 8, 0x04D, TRUE
# 68 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	special DrawWholeMapView
# 69 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	delay 10
# 70 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	setmetatile 18, 8, 0x04C, TRUE
# 71 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	special DrawWholeMapView
# 72 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	release
	return

IllusoryGrotto_B2F_1R_Monster_2:
# 56 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkFastDown3
	goto IllusoryGrotto_B2F_1R_Monster_1

