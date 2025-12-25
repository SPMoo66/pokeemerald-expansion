BygoneVault_2_MapScripts::
# 2 "data/maps/BygoneVault_2/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, BygoneVault_2_MapScripts_MAP_SCRIPT_ON_LOAD
# 19 "data/maps/BygoneVault_2/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BygoneVault_2_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 37 "data/maps/BygoneVault_2/scripts.pory"
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
	goto_if_set FLAG_EXP_1_BYGONE_VAULT_MAIN_DOOR_2_OPEN, BygoneVault_2_MapScripts_MAP_SCRIPT_ON_LOAD_7
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
	goto_if_set FLAG_EXP_1_BYGONE_VAULT_LEFT_SWITCH_2, BygoneVault_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
BygoneVault_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 26 "data/maps/BygoneVault_2/scripts.pory"
	goto_if_set FLAG_EXP_1_BYGONE_VAULT_RIGHT_SWITCH_2, BygoneVault_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
BygoneVault_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 29 "data/maps/BygoneVault_2/scripts.pory"
	goto_if_set FLAG_EXP_1_BYGONE_VAULT_LEFT_SWITCH_2, BygoneVault_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_10
BygoneVault_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 32 "data/maps/BygoneVault_2/scripts.pory"
	goto_if_set FLAG_EXP_1_BYGONE_VAULT_MAIN_DOOR_2_OPEN, BygoneVault_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_14
	return

BygoneVault_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 24 "data/maps/BygoneVault_2/scripts.pory"
	clearflag FLAG_TEMP_1
	goto BygoneVault_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

BygoneVault_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 27 "data/maps/BygoneVault_2/scripts.pory"
	clearflag FLAG_TEMP_2
	goto BygoneVault_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

BygoneVault_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 30 "data/maps/BygoneVault_2/scripts.pory"
	setvar VAR_TEMP_2, 1
	goto BygoneVault_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_7

BygoneVault_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_9:
# 29 "data/maps/BygoneVault_2/scripts.pory"
	goto_if_unset FLAG_EXP_1_BYGONE_VAULT_MAIN_DOOR_2_OPEN, BygoneVault_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
	goto BygoneVault_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_7

BygoneVault_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 29 "data/maps/BygoneVault_2/scripts.pory"
	goto_if_set FLAG_EXP_1_BYGONE_VAULT_RIGHT_SWITCH_2, BygoneVault_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_9
	goto BygoneVault_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_7

BygoneVault_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_14:
# 33 "data/maps/BygoneVault_2/scripts.pory"
	clearflag FLAG_TEMP_3
# 34 "data/maps/BygoneVault_2/scripts.pory"
	setflag FLAG_TEMP_4
	return

BygoneVault_2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 38 "data/maps/BygoneVault_2/scripts.pory"
	map_script_2 VAR_TEMP_2, 1, BygoneVault_2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

BygoneVault_2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 39 "data/maps/BygoneVault_2/scripts.pory"
	setvar VAR_TEMP_2, 0
# 40 "data/maps/BygoneVault_2/scripts.pory"
	special SpawnCameraObject
# 41 "data/maps/BygoneVault_2/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 42 "data/maps/BygoneVault_2/scripts.pory"
	switch VAR_TEMP_0
# 43 "data/maps/BygoneVault_2/scripts.pory"
	case 1, BygoneVault_2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_3
# 48 "data/maps/BygoneVault_2/scripts.pory"
	applymovement LOCALID_CAMERA, Common_Movement_WalkLeft3
# 49 "data/maps/BygoneVault_2/scripts.pory"
	waitmovement 0
# 50 "data/maps/BygoneVault_2/scripts.pory"
	applymovement LOCALID_CAMERA, Common_Movement_WalkDiagNW
BygoneVault_2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_1:
# 52 "data/maps/BygoneVault_2/scripts.pory"
	waitmovement 0
# 53 "data/maps/BygoneVault_2/scripts.pory"
	playse SE_DOWNPOUR
# 54 "data/maps/BygoneVault_2/scripts.pory"
	delay 30
# 55 "data/maps/BygoneVault_2/scripts.pory"
	playse SE_DOWNPOUR_STOP
# 56 "data/maps/BygoneVault_2/scripts.pory"
	waitse
# 57 "data/maps/BygoneVault_2/scripts.pory"
	setmetatile 3, 4, 0x0D2, TRUE
# 58 "data/maps/BygoneVault_2/scripts.pory"
	setmetatile 4, 4, 0x0D3, TRUE
# 59 "data/maps/BygoneVault_2/scripts.pory"
	setmetatile 6, 4, 0x0D2, TRUE
# 60 "data/maps/BygoneVault_2/scripts.pory"
	setmetatile 7, 4, 0x0D3, TRUE
# 61 "data/maps/BygoneVault_2/scripts.pory"
	special DrawWholeMapView
# 62 "data/maps/BygoneVault_2/scripts.pory"
	delay 70
# 63 "data/maps/BygoneVault_2/scripts.pory"
	setvar VAR_0x8004, 1
# 64 "data/maps/BygoneVault_2/scripts.pory"
	setvar VAR_0x8005, 1
# 65 "data/maps/BygoneVault_2/scripts.pory"
	setvar VAR_0x8006, 12
# 66 "data/maps/BygoneVault_2/scripts.pory"
	setvar VAR_0x8007, 2
# 67 "data/maps/BygoneVault_2/scripts.pory"
	special ShakeCamera
# 68 "data/maps/BygoneVault_2/scripts.pory"
	waitstate
# 69 "data/maps/BygoneVault_2/scripts.pory"
	setmetatile 5, 1, 0x0DD, FALSE
# 70 "data/maps/BygoneVault_2/scripts.pory"
	special DrawWholeMapView
# 71 "data/maps/BygoneVault_2/scripts.pory"
	delay 10
# 72 "data/maps/BygoneVault_2/scripts.pory"
	playfanfare MUS_DP_TV_END
# 73 "data/maps/BygoneVault_2/scripts.pory"
	waitfanfare
# 74 "data/maps/BygoneVault_2/scripts.pory"
	switch VAR_TEMP_0
# 75 "data/maps/BygoneVault_2/scripts.pory"
	case 1, BygoneVault_2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_7
# 80 "data/maps/BygoneVault_2/scripts.pory"
	applymovement LOCALID_CAMERA, Common_Movement_WalkDiagSE
# 81 "data/maps/BygoneVault_2/scripts.pory"
	waitmovement 0
# 82 "data/maps/BygoneVault_2/scripts.pory"
	applymovement LOCALID_CAMERA, Common_Movement_WalkRight3
BygoneVault_2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_5:
# 84 "data/maps/BygoneVault_2/scripts.pory"
	waitmovement 0
# 85 "data/maps/BygoneVault_2/scripts.pory"
	special RemoveCameraObject
# 86 "data/maps/BygoneVault_2/scripts.pory"
	setflag FLAG_EXP_1_BYGONE_VAULT_MAIN_DOOR_2_OPEN
	return

BygoneVault_2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_3:
# 44 "data/maps/BygoneVault_2/scripts.pory"
	applymovement LOCALID_CAMERA, Common_Movement_WalkRight3
# 45 "data/maps/BygoneVault_2/scripts.pory"
	waitmovement 0
# 46 "data/maps/BygoneVault_2/scripts.pory"
	applymovement LOCALID_CAMERA, Common_Movement_WalkDiagNE
	goto BygoneVault_2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_1

BygoneVault_2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_7:
# 76 "data/maps/BygoneVault_2/scripts.pory"
	applymovement LOCALID_CAMERA, Common_Movement_WalkDiagSW
# 77 "data/maps/BygoneVault_2/scripts.pory"
	waitmovement 0
# 78 "data/maps/BygoneVault_2/scripts.pory"
	applymovement LOCALID_CAMERA, Common_Movement_WalkLeft3
	goto BygoneVault_2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_5

