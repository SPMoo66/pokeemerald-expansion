IllusoryGrotto_B4F_1R_MapScripts::
# 4 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, IllusoryGrotto_B4F_1R_MapScripts_MAP_SCRIPT_ON_LOAD
# 10 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, IllusoryGrotto_B4F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 19 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, IllusoryGrotto_B4F_1R_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

IllusoryGrotto_B4F_1R_MapScripts_MAP_SCRIPT_ON_LOAD:
# 5 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	goto_if_set FLAG_EXP_1_ILLUSORY_GROTTO_B4F_1R_ROCK, IllusoryGrotto_B4F_1R_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

IllusoryGrotto_B4F_1R_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 6 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	setmetatile 13, 12, 0x011, FALSE
# 7 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	setmetatile 13, 14, 0x023, TRUE
	return

IllusoryGrotto_B4F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 11 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	goto_if_set FLAG_EXP_1_ILLUSORY_GROTTO_B4F_1R_ROCK, IllusoryGrotto_B4F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
IllusoryGrotto_B4F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 14 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 20
	goto_if_eq IllusoryGrotto_B4F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
IllusoryGrotto_B4F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 17 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	setrespawn HEAL_LOCATION_ILLUSORY_GROTTO_LOWER
	return

IllusoryGrotto_B4F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 12 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	setvar VAR_TEMP_3, 1
	goto IllusoryGrotto_B4F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

IllusoryGrotto_B4F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 15 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	setflashlevel 8
	goto IllusoryGrotto_B4F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

IllusoryGrotto_B4F_1R_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 20 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	map_script_2 VAR_EMERALBODY_RIVAL_STATE, 20, IllusoryGrotto_B4F_1R_Scene01_OnFrame
	.2byte 0


IllusoryGrotto_B4F_1R_Rock::
# 25 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	goto_if_unset FLAG_EXP_1_ILLUSORY_GROTTO_B4F_1R_ROCK, IllusoryGrotto_B4F_1R_Rock_2
IllusoryGrotto_B4F_1R_Rock_1:
# 40 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	release
	return

IllusoryGrotto_B4F_1R_Rock_2:
# 26 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	call IllusoryGrottoMovableRock_Exp1
# 27 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	setmetatile 13, 12, 0x011, FALSE
# 28 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	setmetatile 13, 13, 0x023, TRUE
# 29 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	special DrawWholeMapView
# 30 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	delay 10
# 31 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	setmetatile 13, 13, 0x019, TRUE
# 32 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	setmetatile 13, 14, 0x023, TRUE
# 33 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	special DrawWholeMapView
# 34 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	playse SE_M_STRENGTH
# 35 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	delay 10
# 36 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	setflag FLAG_EXP_1_ILLUSORY_GROTTO_B4F_1R_ROCK
# 37 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	setvar VAR_TEMP_3, 1
# 38 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	removeobject 2
	goto IllusoryGrotto_B4F_1R_Rock_1


IllusoryGrotto_B4F_1R_Monster::
# 44 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	call IllusoryGrotto_MonsterCommon1_Exp1
# 45 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	setmetatile 13, 14, 0x025, TRUE
# 46 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	special DrawWholeMapView
# 47 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	delay 10
# 48 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	setmetatile 13, 14, 0x026, TRUE
# 49 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	special DrawWholeMapView
# 50 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	delay 10
# 51 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	setmetatile 13, 14, 0x027, TRUE
# 52 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	call IllusoryGrotto_MonsterCommon2_Exp1
# 53 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 54 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	compare VAR_TEMP_1, 15
	goto_if_eq IllusoryGrotto_B4F_1R_Monster_2
# 58 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkFastDown4
IllusoryGrotto_B4F_1R_Monster_1:
# 60 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	waitmovement 0
# 61 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_UnlockFacingDirection
# 62 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	waitmovement 0
# 63 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	setmetatile 13, 14, 0x01D, TRUE
# 64 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	special DrawWholeMapView
# 65 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	release
	return

IllusoryGrotto_B4F_1R_Monster_2:
# 55 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkFastDown5
	goto IllusoryGrotto_B4F_1R_Monster_1

