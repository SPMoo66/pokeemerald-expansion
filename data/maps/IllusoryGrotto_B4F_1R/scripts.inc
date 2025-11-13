IllusoryGrotto_B4F_1R_MapScripts::
# 2 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, IllusoryGrotto_B4F_1R_MapScripts_MAP_SCRIPT_ON_LOAD
# 8 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, IllusoryGrotto_B4F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 16 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, IllusoryGrotto_B4F_1R_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

IllusoryGrotto_B4F_1R_MapScripts_MAP_SCRIPT_ON_LOAD:
# 3 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	goto_if_set FLAG_EXP_1_ILLUSORY_GROTTO_B4F_1R_ROCK, IllusoryGrotto_B4F_1R_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

IllusoryGrotto_B4F_1R_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 4 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	setmetatile 13, 12, 0x011, FALSE
# 5 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	setmetatile 13, 14, 0x023, TRUE
	return

IllusoryGrotto_B4F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 9 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	goto_if_set FLAG_EXP_1_ILLUSORY_GROTTO_B4F_1R_ROCK, IllusoryGrotto_B4F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
IllusoryGrotto_B4F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 12 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 20
	goto_if_eq IllusoryGrotto_B4F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
	return

IllusoryGrotto_B4F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 10 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	setvar VAR_TEMP_3, 1
	goto IllusoryGrotto_B4F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

IllusoryGrotto_B4F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 13 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	setflashlevel 8
	return

IllusoryGrotto_B4F_1R_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 17 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	map_script_2 VAR_EMERALBODY_RIVAL_STATE, 20, IllusoryGrotto_B4F_1R_Scene01_OnFrame
	.2byte 0


IllusoryGrotto_B4F_1R_Rock::
# 22 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	goto_if_unset FLAG_EXP_1_ILLUSORY_GROTTO_B4F_1R_ROCK, IllusoryGrotto_B4F_1R_Rock_2
IllusoryGrotto_B4F_1R_Rock_1:
# 36 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	release
	return

IllusoryGrotto_B4F_1R_Rock_2:
# 23 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	call IllusoryGrottoMovableRock_Exp1
# 24 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	setmetatile 13, 12, 0x011, FALSE
# 25 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	setmetatile 13, 13, 0x023, TRUE
# 26 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	special DrawWholeMapView
# 27 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	delay 10
# 28 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	setmetatile 13, 13, 0x019, TRUE
# 29 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	setmetatile 13, 14, 0x023, TRUE
# 30 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	special DrawWholeMapView
# 31 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	playse SE_M_STRENGTH
# 32 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	delay 10
# 33 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	setflag FLAG_EXP_1_ILLUSORY_GROTTO_B4F_1R_ROCK
# 34 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	setvar VAR_TEMP_3, 1
	goto IllusoryGrotto_B4F_1R_Rock_1


IllusoryGrotto_B4F_1R_Monster::
# 40 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	call IllusoryGrotto_MonsterCommon1_Exp1
# 41 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	setmetatile 13, 14, 0x025, TRUE
# 42 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	special DrawWholeMapView
# 43 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	delay 10
# 44 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	setmetatile 13, 14, 0x026, TRUE
# 45 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	special DrawWholeMapView
# 46 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	delay 10
# 47 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	setmetatile 13, 14, 0x027, TRUE
# 48 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	call IllusoryGrotto_MonsterCommon2_Exp1
# 49 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 50 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	compare VAR_TEMP_1, 15
	goto_if_eq IllusoryGrotto_B4F_1R_Monster_2
# 54 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkFastDown4
IllusoryGrotto_B4F_1R_Monster_1:
# 56 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	waitmovement 0
# 57 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_UnlockFacingDirection
# 58 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	waitmovement 0
# 59 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	setmetatile 13, 14, 0x01D, TRUE
# 60 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	special DrawWholeMapView
# 61 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	release
	return

IllusoryGrotto_B4F_1R_Monster_2:
# 51 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkFastDown5
	goto IllusoryGrotto_B4F_1R_Monster_1

