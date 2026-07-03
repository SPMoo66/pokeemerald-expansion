BygoneVault_2_MapScripts::
# 2 "data/maps/BygoneVault_2/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, BygoneVault_2_MapScripts_MAP_SCRIPT_ON_LOAD
# 19 "data/maps/BygoneVault_2/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BygoneVault_2_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 41 "data/maps/BygoneVault_2/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BygoneVault_2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

BygoneVault_2_MapScripts_MAP_SCRIPT_ON_LOAD:
# 3 "data/maps/BygoneVault_2/scripts.pory"
	goto_if_set FLAG_EXP_1_BYGONE_VAULT_LEFT_SWITCH_2, BygoneVault_2_MapScripts_MAP_SCRIPT_ON_LOAD_2
BygoneVault_2_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 6 "data/maps/BygoneVault_2/scripts.pory"
	goto_if_set FLAG_EXP_1_BYGONE_VAULT_RIGHT_SWITCH_2, BygoneVault_2_MapScripts_MAP_SCRIPT_ON_LOAD_5
BygoneVault_2_MapScripts_MAP_SCRIPT_ON_LOAD_4:
# 9 "data/maps/BygoneVault_2/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 44
	goto_if_ge BygoneVault_2_MapScripts_MAP_SCRIPT_ON_LOAD_7
	return

BygoneVault_2_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 4 "data/maps/BygoneVault_2/scripts.pory"
	setmetatile 1, 7, 0x0C6, TRUE
	goto BygoneVault_2_MapScripts_MAP_SCRIPT_ON_LOAD_1

BygoneVault_2_MapScripts_MAP_SCRIPT_ON_LOAD_5:
# 7 "data/maps/BygoneVault_2/scripts.pory"
	setmetatile 9, 7, 0x0C6, TRUE
	goto BygoneVault_2_MapScripts_MAP_SCRIPT_ON_LOAD_4

BygoneVault_2_MapScripts_MAP_SCRIPT_ON_LOAD_7:
# 11 "data/maps/BygoneVault_2/scripts.pory"
	setmetatile 5, 1, 0x0DD, FALSE
# 13 "data/maps/BygoneVault_2/scripts.pory"
	setmetatile 3, 4, 0x0D2, TRUE
# 14 "data/maps/BygoneVault_2/scripts.pory"
	setmetatile 4, 4, 0x0D3, TRUE
# 15 "data/maps/BygoneVault_2/scripts.pory"
	setmetatile 6, 4, 0x0D2, TRUE
# 16 "data/maps/BygoneVault_2/scripts.pory"
	setmetatile 7, 4, 0x0D3, TRUE
	return

BygoneVault_2_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 20 "data/maps/BygoneVault_2/scripts.pory"
	setflag FLAG_TEMP_1
# 21 "data/maps/BygoneVault_2/scripts.pory"
	setflag FLAG_TEMP_2
# 22 "data/maps/BygoneVault_2/scripts.pory"
	setflag FLAG_TEMP_3
# 23 "data/maps/BygoneVault_2/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 43
	goto_if_ne BygoneVault_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
BygoneVault_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 26 "data/maps/BygoneVault_2/scripts.pory"
	goto_if_set FLAG_EXP_1_BYGONE_VAULT_LEFT_SWITCH_2, BygoneVault_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
BygoneVault_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 29 "data/maps/BygoneVault_2/scripts.pory"
	goto_if_set FLAG_EXP_1_BYGONE_VAULT_RIGHT_SWITCH_2, BygoneVault_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
BygoneVault_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 32 "data/maps/BygoneVault_2/scripts.pory"
	goto_if_set FLAG_EXP_1_BYGONE_VAULT_LEFT_SWITCH_2, BygoneVault_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_13
BygoneVault_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 36 "data/maps/BygoneVault_2/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 44
	goto_if_ge BygoneVault_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_17
	return

BygoneVault_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 24 "data/maps/BygoneVault_2/scripts.pory"
	setflag FLAG_TEMP_4
	goto BygoneVault_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

BygoneVault_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 27 "data/maps/BygoneVault_2/scripts.pory"
	clearflag FLAG_TEMP_1
	goto BygoneVault_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

BygoneVault_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 30 "data/maps/BygoneVault_2/scripts.pory"
	clearflag FLAG_TEMP_2
	goto BygoneVault_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_7

BygoneVault_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_11:
# 33 "data/maps/BygoneVault_2/scripts.pory"
	setvar VAR_TEMP_2, 1
# 34 "data/maps/BygoneVault_2/scripts.pory"
	clearflag FLAG_TEMP_3
	goto BygoneVault_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_10

BygoneVault_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_12:
# 32 "data/maps/BygoneVault_2/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 44
	goto_if_lt BygoneVault_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_11
	goto BygoneVault_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_10

BygoneVault_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_13:
# 32 "data/maps/BygoneVault_2/scripts.pory"
	goto_if_set FLAG_EXP_1_BYGONE_VAULT_RIGHT_SWITCH_2, BygoneVault_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_12
	goto BygoneVault_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_10

BygoneVault_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_17:
# 37 "data/maps/BygoneVault_2/scripts.pory"
	clearflag FLAG_TEMP_3
# 38 "data/maps/BygoneVault_2/scripts.pory"
	setflag FLAG_TEMP_5
	return

BygoneVault_2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 42 "data/maps/BygoneVault_2/scripts.pory"
	map_script_2 VAR_TEMP_2, 1, BygoneVault_2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

BygoneVault_2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 43 "data/maps/BygoneVault_2/scripts.pory"
	setvar VAR_TEMP_2, 0
# 44 "data/maps/BygoneVault_2/scripts.pory"
	special SpawnCameraObject
# 45 "data/maps/BygoneVault_2/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 46 "data/maps/BygoneVault_2/scripts.pory"
	switch VAR_TEMP_0
# 47 "data/maps/BygoneVault_2/scripts.pory"
	case 1, BygoneVault_2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_3
# 52 "data/maps/BygoneVault_2/scripts.pory"
	applymovement LOCALID_CAMERA, Common_Movement_WalkLeft3
# 53 "data/maps/BygoneVault_2/scripts.pory"
	waitmovement 0
# 54 "data/maps/BygoneVault_2/scripts.pory"
	applymovement LOCALID_CAMERA, Common_Movement_WalkDiagNW
BygoneVault_2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_1:
# 56 "data/maps/BygoneVault_2/scripts.pory"
	waitmovement 0
# 57 "data/maps/BygoneVault_2/scripts.pory"
	playse SE_DOWNPOUR
# 58 "data/maps/BygoneVault_2/scripts.pory"
	delay 30
# 59 "data/maps/BygoneVault_2/scripts.pory"
	playse SE_DOWNPOUR_STOP
# 60 "data/maps/BygoneVault_2/scripts.pory"
	waitse
# 61 "data/maps/BygoneVault_2/scripts.pory"
	setmetatile 3, 4, 0x0D2, TRUE
# 62 "data/maps/BygoneVault_2/scripts.pory"
	setmetatile 4, 4, 0x0D3, TRUE
# 63 "data/maps/BygoneVault_2/scripts.pory"
	setmetatile 6, 4, 0x0D2, TRUE
# 64 "data/maps/BygoneVault_2/scripts.pory"
	setmetatile 7, 4, 0x0D3, TRUE
# 65 "data/maps/BygoneVault_2/scripts.pory"
	special DrawWholeMapView
# 66 "data/maps/BygoneVault_2/scripts.pory"
	delay 70
# 67 "data/maps/BygoneVault_2/scripts.pory"
	setvar VAR_0x8004, 1
# 68 "data/maps/BygoneVault_2/scripts.pory"
	setvar VAR_0x8005, 1
# 69 "data/maps/BygoneVault_2/scripts.pory"
	setvar VAR_0x8006, 12
# 70 "data/maps/BygoneVault_2/scripts.pory"
	setvar VAR_0x8007, 2
# 71 "data/maps/BygoneVault_2/scripts.pory"
	special ShakeCamera
# 72 "data/maps/BygoneVault_2/scripts.pory"
	waitstate
# 73 "data/maps/BygoneVault_2/scripts.pory"
	setmetatile 5, 1, 0x0DD, FALSE
# 74 "data/maps/BygoneVault_2/scripts.pory"
	special DrawWholeMapView
# 75 "data/maps/BygoneVault_2/scripts.pory"
	delay 10
# 76 "data/maps/BygoneVault_2/scripts.pory"
	playfanfare MUS_DP_TV_END
# 77 "data/maps/BygoneVault_2/scripts.pory"
	waitfanfare
# 78 "data/maps/BygoneVault_2/scripts.pory"
	switch VAR_TEMP_0
# 79 "data/maps/BygoneVault_2/scripts.pory"
	case 1, BygoneVault_2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_7
# 84 "data/maps/BygoneVault_2/scripts.pory"
	applymovement LOCALID_CAMERA, Common_Movement_WalkDiagSE
# 85 "data/maps/BygoneVault_2/scripts.pory"
	waitmovement 0
# 86 "data/maps/BygoneVault_2/scripts.pory"
	applymovement LOCALID_CAMERA, Common_Movement_WalkRight3
BygoneVault_2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_5:
# 88 "data/maps/BygoneVault_2/scripts.pory"
	waitmovement 0
# 89 "data/maps/BygoneVault_2/scripts.pory"
	special RemoveCameraObject
# 90 "data/maps/BygoneVault_2/scripts.pory"
	setflag FLAG_TEMP_5
# 91 "data/maps/BygoneVault_2/scripts.pory"
	setvar VAR_EMERALBODY_RIVAL_STATE, 44
# 92 "data/maps/BygoneVault_2/scripts.pory"
	removeobject 13
	return

BygoneVault_2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_3:
# 48 "data/maps/BygoneVault_2/scripts.pory"
	applymovement LOCALID_CAMERA, Common_Movement_WalkRight3
# 49 "data/maps/BygoneVault_2/scripts.pory"
	waitmovement 0
# 50 "data/maps/BygoneVault_2/scripts.pory"
	applymovement LOCALID_CAMERA, Common_Movement_WalkDiagNE
	goto BygoneVault_2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_1

BygoneVault_2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_7:
# 80 "data/maps/BygoneVault_2/scripts.pory"
	applymovement LOCALID_CAMERA, Common_Movement_WalkDiagSW
# 81 "data/maps/BygoneVault_2/scripts.pory"
	waitmovement 0
# 82 "data/maps/BygoneVault_2/scripts.pory"
	applymovement LOCALID_CAMERA, Common_Movement_WalkLeft3
	goto BygoneVault_2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_5


BygoneVault_2_Sign::
# 98 "data/maps/BygoneVault_2/scripts.pory"
	msgbox BygoneVault_2_Sign_Text_0, MSGBOX_SIGN
	return


BygoneVault_2_Sign_Text_0:
# 98 "data/maps/BygoneVault_2/scripts.pory"
	.string "The drought persisted\n"
	.string "Our prayers went unanswered\l"
	.string "Calamity reigned$"
