IllusoryGrotto_B4F_1R_MapScripts::
# 7 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, IllusoryGrotto_B4F_1R_MapScripts_MAP_SCRIPT_ON_LOAD
# 13 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, IllusoryGrotto_B4F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 35 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, IllusoryGrotto_B4F_1R_MapScripts_MAP_SCRIPT_ON_RESUME
# 41 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, IllusoryGrotto_B4F_1R_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

IllusoryGrotto_B4F_1R_MapScripts_MAP_SCRIPT_ON_LOAD:
# 8 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	goto_if_set FLAG_EXP_1_ILLUSORY_GROTTO_B4F_1R_ROCK, IllusoryGrotto_B4F_1R_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

IllusoryGrotto_B4F_1R_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 9 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	setmetatile 13, 12, 0x011, FALSE
# 10 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	setmetatile 13, 14, 0x023, TRUE
	return

IllusoryGrotto_B4F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 14 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	setflag FLAG_TEMP_1
# 15 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	setflag FLAG_TEMP_2
# 16 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	setflag FLAG_TEMP_3
# 17 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	goto_if_set FLAG_EXP_1_ILLUSORY_GROTTO_B4F_1R_ROCK, IllusoryGrotto_B4F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
IllusoryGrotto_B4F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 20 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 20
	goto_if_eq IllusoryGrotto_B4F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
IllusoryGrotto_B4F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 23 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 50
	goto_if_eq IllusoryGrotto_B4F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
IllusoryGrotto_B4F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 29 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 51
	goto_if_eq IllusoryGrotto_B4F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION_11
IllusoryGrotto_B4F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 33 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	setrespawn HEAL_LOCATION_ILLUSORY_GROTTO_LOWER
	return

IllusoryGrotto_B4F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 18 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	setvar VAR_TEMP_3, 1
	goto IllusoryGrotto_B4F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

IllusoryGrotto_B4F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 21 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	setflashlevel 8
	goto IllusoryGrotto_B4F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

IllusoryGrotto_B4F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 24 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	clearflag FLAG_TEMP_1
# 25 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	clearflag FLAG_TEMP_2
# 26 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	clearflag FLAG_TEMP_3
# 27 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	savebgm MUS_PL_GIRATINA_APPEARS_1
	goto IllusoryGrotto_B4F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION_7

IllusoryGrotto_B4F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION_11:
# 30 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	clearflag FLAG_TEMP_3
# 31 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	setobjectxyperm 6, 25, 6
	goto IllusoryGrotto_B4F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION_10

IllusoryGrotto_B4F_1R_MapScripts_MAP_SCRIPT_ON_RESUME:
# 36 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, IllusoryGrotto_B4F_1R_MapScripts_MAP_SCRIPT_ON_RESUME_1
	return

IllusoryGrotto_B4F_1R_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 37 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	removeobject 9
# 38 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	removeobject 10
	return

IllusoryGrotto_B4F_1R_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 42 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	map_script_2 VAR_EMERALBODY_RIVAL_STATE, 20, IllusoryGrotto_B4F_1R_Scene01_OnFrame
	.2byte 0


IllusoryGrotto_B4F_1R_Rock::
# 47 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	goto_if_unset FLAG_EXP_1_ILLUSORY_GROTTO_B4F_1R_ROCK, IllusoryGrotto_B4F_1R_Rock_2
IllusoryGrotto_B4F_1R_Rock_1:
# 62 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	release
	return

IllusoryGrotto_B4F_1R_Rock_2:
# 48 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	call IllusoryGrottoMovableRock_Exp1
# 49 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	setmetatile 13, 12, 0x011, FALSE
# 50 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	setmetatile 13, 13, 0x023, TRUE
# 51 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	special DrawWholeMapView
# 52 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	delay 10
# 53 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	setmetatile 13, 13, 0x019, TRUE
# 54 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	setmetatile 13, 14, 0x023, TRUE
# 55 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	special DrawWholeMapView
# 56 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	playse SE_M_STRENGTH
# 57 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	delay 10
# 58 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	setflag FLAG_EXP_1_ILLUSORY_GROTTO_B4F_1R_ROCK
# 59 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	setvar VAR_TEMP_3, 1
# 60 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	removeobject 2
	goto IllusoryGrotto_B4F_1R_Rock_1


IllusoryGrotto_B4F_1R_Monster::
# 66 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	call IllusoryGrotto_MonsterCommon1_Exp1
# 67 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	setmetatile 13, 14, 0x025, TRUE
# 68 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	special DrawWholeMapView
# 69 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	delay 10
# 70 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	setmetatile 13, 14, 0x026, TRUE
# 71 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	special DrawWholeMapView
# 72 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	delay 10
# 73 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	setmetatile 13, 14, 0x027, TRUE
# 74 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	call IllusoryGrotto_MonsterCommon2_Exp1
# 75 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 76 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	compare VAR_TEMP_1, 15
	goto_if_eq IllusoryGrotto_B4F_1R_Monster_2
# 80 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkFastDown4
IllusoryGrotto_B4F_1R_Monster_1:
# 82 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	waitmovement 0
# 83 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_UnlockFacingDirection
# 84 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	waitmovement 0
# 85 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	setmetatile 13, 14, 0x01D, TRUE
# 86 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	special DrawWholeMapView
# 87 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	release
	return

IllusoryGrotto_B4F_1R_Monster_2:
# 77 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkFastDown5
	goto IllusoryGrotto_B4F_1R_Monster_1

