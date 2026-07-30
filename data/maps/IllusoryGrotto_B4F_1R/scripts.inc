IllusoryGrotto_B4F_1R_MapScripts::
# 7 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, IllusoryGrotto_B4F_1R_MapScripts_MAP_SCRIPT_ON_LOAD
# 21 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, IllusoryGrotto_B4F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 43 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, IllusoryGrotto_B4F_1R_MapScripts_MAP_SCRIPT_ON_RESUME
# 49 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, IllusoryGrotto_B4F_1R_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

IllusoryGrotto_B4F_1R_MapScripts_MAP_SCRIPT_ON_LOAD:
# 8 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	goto_if_set FLAG_EXP_1_ILLUSORY_GROTTO_B4F_1R_ROCK, IllusoryGrotto_B4F_1R_MapScripts_MAP_SCRIPT_ON_LOAD_2
IllusoryGrotto_B4F_1R_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 12 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 51
	goto_if_ge IllusoryGrotto_B4F_1R_MapScripts_MAP_SCRIPT_ON_LOAD_4
	return

IllusoryGrotto_B4F_1R_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 9 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	setmetatile 13, 12, 0x011, FALSE
# 10 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	setmetatile 13, 14, 0x023, TRUE
	goto IllusoryGrotto_B4F_1R_MapScripts_MAP_SCRIPT_ON_LOAD_1

IllusoryGrotto_B4F_1R_MapScripts_MAP_SCRIPT_ON_LOAD_4:
# 13 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	setmetatile 12, 13, 0x022, TRUE
# 14 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	setmetatile 13, 13, 0x02B, TRUE
# 15 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	setmetatile 14, 13, 0x02C, TRUE
# 16 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	setmetatile 12, 14, 0x032, TRUE
# 17 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	setmetatile 13, 14, 0x033, FALSE
# 18 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	setmetatile 14, 14, 0x034, TRUE
	return

IllusoryGrotto_B4F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 22 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	setflag FLAG_TEMP_1
# 23 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	setflag FLAG_TEMP_2
# 24 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	setflag FLAG_TEMP_3
# 25 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	goto_if_set FLAG_EXP_1_ILLUSORY_GROTTO_B4F_1R_ROCK, IllusoryGrotto_B4F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
IllusoryGrotto_B4F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 28 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 20
	goto_if_eq IllusoryGrotto_B4F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
IllusoryGrotto_B4F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 31 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 50
	goto_if_eq IllusoryGrotto_B4F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
IllusoryGrotto_B4F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 37 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 51
	goto_if_eq IllusoryGrotto_B4F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION_11
IllusoryGrotto_B4F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 41 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	setrespawn HEAL_LOCATION_ILLUSORY_GROTTO_LOWER
	return

IllusoryGrotto_B4F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 26 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	setvar VAR_TEMP_3, 1
	goto IllusoryGrotto_B4F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

IllusoryGrotto_B4F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 29 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	setflashlevel 8
	goto IllusoryGrotto_B4F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

IllusoryGrotto_B4F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 32 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	clearflag FLAG_TEMP_1
# 33 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	clearflag FLAG_TEMP_2
# 34 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	clearflag FLAG_TEMP_3
# 35 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	savebgm MUS_PL_GIRATINA_APPEARS_1
	goto IllusoryGrotto_B4F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION_7

IllusoryGrotto_B4F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION_11:
# 38 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	clearflag FLAG_TEMP_3
# 39 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	setobjectxyperm 6, 25, 6
	goto IllusoryGrotto_B4F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION_10

IllusoryGrotto_B4F_1R_MapScripts_MAP_SCRIPT_ON_RESUME:
# 44 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, IllusoryGrotto_B4F_1R_MapScripts_MAP_SCRIPT_ON_RESUME_1
	return

IllusoryGrotto_B4F_1R_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 45 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	removeobject 9
# 46 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	removeobject 10
	return

IllusoryGrotto_B4F_1R_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 50 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	map_script_2 VAR_EMERALBODY_RIVAL_STATE, 20, IllusoryGrotto_B4F_1R_Scene01_OnFrame
	.2byte 0


IllusoryGrotto_B4F_1R_Rock::
# 55 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	goto_if_unset FLAG_EXP_1_ILLUSORY_GROTTO_B4F_1R_ROCK, IllusoryGrotto_B4F_1R_Rock_2
IllusoryGrotto_B4F_1R_Rock_1:
# 70 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	release
	return

IllusoryGrotto_B4F_1R_Rock_2:
# 56 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	call IllusoryGrottoMovableRock_Exp1
# 57 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	setmetatile 13, 12, 0x011, FALSE
# 58 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	setmetatile 13, 13, 0x023, TRUE
# 59 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	special DrawWholeMapView
# 60 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	delay 10
# 61 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	setmetatile 13, 13, 0x019, TRUE
# 62 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	setmetatile 13, 14, 0x023, TRUE
# 63 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	special DrawWholeMapView
# 64 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	playse SE_M_STRENGTH
# 65 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	delay 10
# 66 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	setflag FLAG_EXP_1_ILLUSORY_GROTTO_B4F_1R_ROCK
# 67 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	setvar VAR_TEMP_3, 1
# 68 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	removeobject 2
	goto IllusoryGrotto_B4F_1R_Rock_1


IllusoryGrotto_B4F_1R_Monster::
# 74 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	call IllusoryGrotto_MonsterCommon1_Exp1
# 75 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	setmetatile 13, 14, 0x025, TRUE
# 76 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	special DrawWholeMapView
# 77 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	delay 10
# 78 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	setmetatile 13, 14, 0x026, TRUE
# 79 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	special DrawWholeMapView
# 80 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	delay 10
# 81 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	setmetatile 13, 14, 0x027, TRUE
# 82 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	call IllusoryGrotto_MonsterCommon2_Exp1
# 83 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 84 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	compare VAR_TEMP_1, 15
	goto_if_eq IllusoryGrotto_B4F_1R_Monster_2
# 88 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkFastDown4
IllusoryGrotto_B4F_1R_Monster_1:
# 90 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	waitmovement 0
# 91 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_UnlockFacingDirection
# 92 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	waitmovement 0
# 93 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	setmetatile 13, 14, 0x01D, TRUE
# 94 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	special DrawWholeMapView
# 95 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	release
	return

IllusoryGrotto_B4F_1R_Monster_2:
# 85 "data/maps/IllusoryGrotto_B4F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkFastDown5
	goto IllusoryGrotto_B4F_1R_Monster_1

