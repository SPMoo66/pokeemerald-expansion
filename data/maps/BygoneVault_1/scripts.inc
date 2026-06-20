BygoneVault_1_MapScripts::
# 2 "data/maps/BygoneVault_1/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, BygoneVault_1_MapScripts_MAP_SCRIPT_ON_LOAD
# 19 "data/maps/BygoneVault_1/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BygoneVault_1_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 43 "data/maps/BygoneVault_1/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BygoneVault_1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

BygoneVault_1_MapScripts_MAP_SCRIPT_ON_LOAD:
# 3 "data/maps/BygoneVault_1/scripts.pory"
	goto_if_set FLAG_EXP_1_BYGONE_VAULT_LEFT_SWITCH, BygoneVault_1_MapScripts_MAP_SCRIPT_ON_LOAD_2
BygoneVault_1_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 6 "data/maps/BygoneVault_1/scripts.pory"
	goto_if_set FLAG_EXP_1_BYGONE_VAULT_RIGHT_SWITCH, BygoneVault_1_MapScripts_MAP_SCRIPT_ON_LOAD_5
BygoneVault_1_MapScripts_MAP_SCRIPT_ON_LOAD_4:
# 9 "data/maps/BygoneVault_1/scripts.pory"
	goto_if_set FLAG_EXP_1_BYGONE_VAULT_MAIN_DOOR_OPEN, BygoneVault_1_MapScripts_MAP_SCRIPT_ON_LOAD_7
	return

BygoneVault_1_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 4 "data/maps/BygoneVault_1/scripts.pory"
	setmetatile 3, 8, 0x0C6, TRUE
	goto BygoneVault_1_MapScripts_MAP_SCRIPT_ON_LOAD_1

BygoneVault_1_MapScripts_MAP_SCRIPT_ON_LOAD_5:
# 7 "data/maps/BygoneVault_1/scripts.pory"
	setmetatile 13, 8, 0x0C6, TRUE
	goto BygoneVault_1_MapScripts_MAP_SCRIPT_ON_LOAD_4

BygoneVault_1_MapScripts_MAP_SCRIPT_ON_LOAD_7:
# 11 "data/maps/BygoneVault_1/scripts.pory"
	setmetatile 8, 1, 0x0DD, FALSE
# 13 "data/maps/BygoneVault_1/scripts.pory"
	setmetatile 5, 4, 0x0D2, TRUE
# 14 "data/maps/BygoneVault_1/scripts.pory"
	setmetatile 6, 4, 0x0D3, TRUE
# 15 "data/maps/BygoneVault_1/scripts.pory"
	setmetatile 10, 4, 0x0D2, TRUE
# 16 "data/maps/BygoneVault_1/scripts.pory"
	setmetatile 11, 4, 0x0D3, TRUE
	return

BygoneVault_1_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 20 "data/maps/BygoneVault_1/scripts.pory"
	setflag FLAG_LANDMARK_BYGONE_VAULT
# 21 "data/maps/BygoneVault_1/scripts.pory"
	setflag FLAG_TEMP_1
# 22 "data/maps/BygoneVault_1/scripts.pory"
	setflag FLAG_TEMP_2
# 23 "data/maps/BygoneVault_1/scripts.pory"
	setflag FLAG_TEMP_3
# 24 "data/maps/BygoneVault_1/scripts.pory"
	setflag FLAG_TEMP_4
# 25 "data/maps/BygoneVault_1/scripts.pory"
	call GetPlayerGfxNormal
# 26 "data/maps/BygoneVault_1/scripts.pory"
	goto_if_set FLAG_EXP_1_BYGONE_VAULT_LEFT_SWITCH, BygoneVault_1_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
BygoneVault_1_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 29 "data/maps/BygoneVault_1/scripts.pory"
	goto_if_set FLAG_EXP_1_BYGONE_VAULT_RIGHT_SWITCH, BygoneVault_1_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
BygoneVault_1_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 32 "data/maps/BygoneVault_1/scripts.pory"
	goto_if_set FLAG_EXP_1_BYGONE_VAULT_LEFT_SWITCH, BygoneVault_1_MapScripts_MAP_SCRIPT_ON_TRANSITION_10
BygoneVault_1_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 36 "data/maps/BygoneVault_1/scripts.pory"
	goto_if_set FLAG_EXP_1_BYGONE_VAULT_MAIN_DOOR_OPEN, BygoneVault_1_MapScripts_MAP_SCRIPT_ON_TRANSITION_15
BygoneVault_1_MapScripts_MAP_SCRIPT_ON_TRANSITION_14:
# 39 "data/maps/BygoneVault_1/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 42
	goto_if_eq BygoneVault_1_MapScripts_MAP_SCRIPT_ON_TRANSITION_17
	return

BygoneVault_1_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 27 "data/maps/BygoneVault_1/scripts.pory"
	clearflag FLAG_TEMP_1
	goto BygoneVault_1_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

BygoneVault_1_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 30 "data/maps/BygoneVault_1/scripts.pory"
	clearflag FLAG_TEMP_2
	goto BygoneVault_1_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

BygoneVault_1_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 33 "data/maps/BygoneVault_1/scripts.pory"
	setvar VAR_TEMP_2, 1
# 34 "data/maps/BygoneVault_1/scripts.pory"
	clearflag FLAG_TEMP_3
	goto BygoneVault_1_MapScripts_MAP_SCRIPT_ON_TRANSITION_7

BygoneVault_1_MapScripts_MAP_SCRIPT_ON_TRANSITION_9:
# 32 "data/maps/BygoneVault_1/scripts.pory"
	goto_if_unset FLAG_EXP_1_BYGONE_VAULT_MAIN_DOOR_OPEN, BygoneVault_1_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
	goto BygoneVault_1_MapScripts_MAP_SCRIPT_ON_TRANSITION_7

BygoneVault_1_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 32 "data/maps/BygoneVault_1/scripts.pory"
	goto_if_set FLAG_EXP_1_BYGONE_VAULT_RIGHT_SWITCH, BygoneVault_1_MapScripts_MAP_SCRIPT_ON_TRANSITION_9
	goto BygoneVault_1_MapScripts_MAP_SCRIPT_ON_TRANSITION_7

BygoneVault_1_MapScripts_MAP_SCRIPT_ON_TRANSITION_15:
# 37 "data/maps/BygoneVault_1/scripts.pory"
	clearflag FLAG_TEMP_3
	goto BygoneVault_1_MapScripts_MAP_SCRIPT_ON_TRANSITION_14

BygoneVault_1_MapScripts_MAP_SCRIPT_ON_TRANSITION_17:
# 40 "data/maps/BygoneVault_1/scripts.pory"
	clearflag FLAG_TEMP_4
	return

BygoneVault_1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 44 "data/maps/BygoneVault_1/scripts.pory"
	map_script_2 VAR_TEMP_2, 1, BygoneVault_1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

BygoneVault_1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 45 "data/maps/BygoneVault_1/scripts.pory"
	setvar VAR_TEMP_2, 0
# 46 "data/maps/BygoneVault_1/scripts.pory"
	special SpawnCameraObject
# 47 "data/maps/BygoneVault_1/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 48 "data/maps/BygoneVault_1/scripts.pory"
	switch VAR_TEMP_0
# 49 "data/maps/BygoneVault_1/scripts.pory"
	case 1, BygoneVault_1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_3
# 54 "data/maps/BygoneVault_1/scripts.pory"
	applymovement LOCALID_CAMERA, Common_Movement_WalkLeft4
# 55 "data/maps/BygoneVault_1/scripts.pory"
	waitmovement 0
# 56 "data/maps/BygoneVault_1/scripts.pory"
	applymovement LOCALID_CAMERA, Common_Movement_WalkDiagNW3
BygoneVault_1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_1:
# 58 "data/maps/BygoneVault_1/scripts.pory"
	waitmovement 0
# 59 "data/maps/BygoneVault_1/scripts.pory"
	playse SE_DOWNPOUR
# 60 "data/maps/BygoneVault_1/scripts.pory"
	delay 30
# 61 "data/maps/BygoneVault_1/scripts.pory"
	playse SE_DOWNPOUR_STOP
# 62 "data/maps/BygoneVault_1/scripts.pory"
	waitse
# 63 "data/maps/BygoneVault_1/scripts.pory"
	setmetatile 5, 4, 0x0D2, TRUE
# 64 "data/maps/BygoneVault_1/scripts.pory"
	setmetatile 6, 4, 0x0D3, TRUE
# 65 "data/maps/BygoneVault_1/scripts.pory"
	setmetatile 10, 4, 0x0D2, TRUE
# 66 "data/maps/BygoneVault_1/scripts.pory"
	setmetatile 11, 4, 0x0D3, TRUE
# 67 "data/maps/BygoneVault_1/scripts.pory"
	special DrawWholeMapView
# 68 "data/maps/BygoneVault_1/scripts.pory"
	delay 70
# 69 "data/maps/BygoneVault_1/scripts.pory"
	setvar VAR_0x8004, 1
# 70 "data/maps/BygoneVault_1/scripts.pory"
	setvar VAR_0x8005, 1
# 71 "data/maps/BygoneVault_1/scripts.pory"
	setvar VAR_0x8006, 12
# 72 "data/maps/BygoneVault_1/scripts.pory"
	setvar VAR_0x8007, 2
# 73 "data/maps/BygoneVault_1/scripts.pory"
	special ShakeCamera
# 74 "data/maps/BygoneVault_1/scripts.pory"
	waitstate
# 75 "data/maps/BygoneVault_1/scripts.pory"
	setmetatile 8, 1, 0x0DD, FALSE
# 76 "data/maps/BygoneVault_1/scripts.pory"
	special DrawWholeMapView
# 77 "data/maps/BygoneVault_1/scripts.pory"
	delay 10
# 78 "data/maps/BygoneVault_1/scripts.pory"
	playfanfare MUS_DP_TV_END
# 79 "data/maps/BygoneVault_1/scripts.pory"
	waitfanfare
# 80 "data/maps/BygoneVault_1/scripts.pory"
	switch VAR_TEMP_0
# 81 "data/maps/BygoneVault_1/scripts.pory"
	case 1, BygoneVault_1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_7
# 86 "data/maps/BygoneVault_1/scripts.pory"
	applymovement LOCALID_CAMERA, Common_Movement_WalkDiagSE3
# 87 "data/maps/BygoneVault_1/scripts.pory"
	waitmovement 0
# 88 "data/maps/BygoneVault_1/scripts.pory"
	applymovement LOCALID_CAMERA, Common_Movement_WalkRight4
BygoneVault_1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_5:
# 90 "data/maps/BygoneVault_1/scripts.pory"
	waitmovement 0
# 91 "data/maps/BygoneVault_1/scripts.pory"
	special RemoveCameraObject
# 92 "data/maps/BygoneVault_1/scripts.pory"
	setflag FLAG_EXP_1_BYGONE_VAULT_MAIN_DOOR_OPEN
# 93 "data/maps/BygoneVault_1/scripts.pory"
	removeobject 5
	return

BygoneVault_1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_3:
# 50 "data/maps/BygoneVault_1/scripts.pory"
	applymovement LOCALID_CAMERA, Common_Movement_WalkRight4
# 51 "data/maps/BygoneVault_1/scripts.pory"
	waitmovement 0
# 52 "data/maps/BygoneVault_1/scripts.pory"
	applymovement LOCALID_CAMERA, Common_Movement_WalkDiagNE3
	goto BygoneVault_1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_1

BygoneVault_1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_7:
# 82 "data/maps/BygoneVault_1/scripts.pory"
	applymovement LOCALID_CAMERA, Common_Movement_WalkDiagSW3
# 83 "data/maps/BygoneVault_1/scripts.pory"
	waitmovement 0
# 84 "data/maps/BygoneVault_1/scripts.pory"
	applymovement LOCALID_CAMERA, Common_Movement_WalkLeft4
	goto BygoneVault_1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_5


BygoneVault_FullBowl::
# 99 "data/maps/BygoneVault_1/scripts.pory"
	msgbox BygoneVault_FullBowl_Text_0, MSGBOX_AUTOCLOSE
	return


BygoneVault_DoorShut::
# 103 "data/maps/BygoneVault_1/scripts.pory"
	msgbox BygoneVault_DoorShut_Text_0, MSGBOX_AUTOCLOSE
	return


BygoneVault_1_Sign::
# 107 "data/maps/BygoneVault_1/scripts.pory"
	msgbox BygoneVault_1_Sign_Text_0, MSGBOX_SIGN
	return


Script_RedrawBygoneVault1Map::
# 122 "data/maps/BygoneVault_1/scripts.pory"
	goto_if_unset FLAG_TEMP_6, Script_RedrawBygoneVault1Map_2
	return

Script_RedrawBygoneVault1Map_1:
# 123 "data/maps/BygoneVault_1/scripts.pory"
	setmetatile 8, 1, 0x0DD, FALSE
# 124 "data/maps/BygoneVault_1/scripts.pory"
	special DrawWholeMapView
# 125 "data/maps/BygoneVault_1/scripts.pory"
	setflag FLAG_TEMP_6
	return

Script_RedrawBygoneVault1Map_2:
# 122 "data/maps/BygoneVault_1/scripts.pory"
	goto_if_set FLAG_EXP_1_BYGONE_VAULT_MAIN_DOOR_OPEN, Script_RedrawBygoneVault1Map_1
	return


BygoneVault_FullBowl_Text_0:
# 99 "data/maps/BygoneVault_1/scripts.pory"
	.string "The bowl has filled with water.$"

BygoneVault_DoorShut_Text_0:
# 103 "data/maps/BygoneVault_1/scripts.pory"
	.string "The door is firmly sealed shut.$"

BygoneVault_1_Sign_Text_0:
# 107 "data/maps/BygoneVault_1/scripts.pory"
	.string "And as they foretold\n"
	.string "The doors were sealed firmly shut\l"
	.string "'Til the drought had passed$"
