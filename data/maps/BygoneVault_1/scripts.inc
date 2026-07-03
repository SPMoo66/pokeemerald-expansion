BygoneVault_1_MapScripts::
# 2 "data/maps/BygoneVault_1/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, BygoneVault_1_MapScripts_MAP_SCRIPT_ON_LOAD
# 19 "data/maps/BygoneVault_1/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BygoneVault_1_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 44 "data/maps/BygoneVault_1/scripts.pory"
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
	compare VAR_EMERALBODY_RIVAL_STATE, 43
	goto_if_ge BygoneVault_1_MapScripts_MAP_SCRIPT_ON_LOAD_7
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
	compare VAR_EMERALBODY_RIVAL_STATE, 43
	goto_if_ge BygoneVault_1_MapScripts_MAP_SCRIPT_ON_TRANSITION_15
BygoneVault_1_MapScripts_MAP_SCRIPT_ON_TRANSITION_14:
# 40 "data/maps/BygoneVault_1/scripts.pory"
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
	compare VAR_EMERALBODY_RIVAL_STATE, 43
	goto_if_lt BygoneVault_1_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
	goto BygoneVault_1_MapScripts_MAP_SCRIPT_ON_TRANSITION_7

BygoneVault_1_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 32 "data/maps/BygoneVault_1/scripts.pory"
	goto_if_set FLAG_EXP_1_BYGONE_VAULT_RIGHT_SWITCH, BygoneVault_1_MapScripts_MAP_SCRIPT_ON_TRANSITION_9
	goto BygoneVault_1_MapScripts_MAP_SCRIPT_ON_TRANSITION_7

BygoneVault_1_MapScripts_MAP_SCRIPT_ON_TRANSITION_15:
# 37 "data/maps/BygoneVault_1/scripts.pory"
	clearflag FLAG_TEMP_3
# 38 "data/maps/BygoneVault_1/scripts.pory"
	setflag FLAG_TEMP_5
	goto BygoneVault_1_MapScripts_MAP_SCRIPT_ON_TRANSITION_14

BygoneVault_1_MapScripts_MAP_SCRIPT_ON_TRANSITION_17:
# 41 "data/maps/BygoneVault_1/scripts.pory"
	clearflag FLAG_TEMP_4
	return

BygoneVault_1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 45 "data/maps/BygoneVault_1/scripts.pory"
	map_script_2 VAR_TEMP_2, 1, BygoneVault_1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

BygoneVault_1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 46 "data/maps/BygoneVault_1/scripts.pory"
	setvar VAR_TEMP_2, 0
# 47 "data/maps/BygoneVault_1/scripts.pory"
	special SpawnCameraObject
# 48 "data/maps/BygoneVault_1/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 49 "data/maps/BygoneVault_1/scripts.pory"
	switch VAR_TEMP_0
# 50 "data/maps/BygoneVault_1/scripts.pory"
	case 1, BygoneVault_1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_3
# 55 "data/maps/BygoneVault_1/scripts.pory"
	applymovement LOCALID_CAMERA, Common_Movement_WalkLeft4
# 56 "data/maps/BygoneVault_1/scripts.pory"
	waitmovement 0
# 57 "data/maps/BygoneVault_1/scripts.pory"
	applymovement LOCALID_CAMERA, Common_Movement_WalkDiagNW3
BygoneVault_1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_1:
# 59 "data/maps/BygoneVault_1/scripts.pory"
	waitmovement 0
# 60 "data/maps/BygoneVault_1/scripts.pory"
	playse SE_DOWNPOUR
# 61 "data/maps/BygoneVault_1/scripts.pory"
	delay 30
# 62 "data/maps/BygoneVault_1/scripts.pory"
	playse SE_DOWNPOUR_STOP
# 63 "data/maps/BygoneVault_1/scripts.pory"
	waitse
# 64 "data/maps/BygoneVault_1/scripts.pory"
	setmetatile 5, 4, 0x0D2, TRUE
# 65 "data/maps/BygoneVault_1/scripts.pory"
	setmetatile 6, 4, 0x0D3, TRUE
# 66 "data/maps/BygoneVault_1/scripts.pory"
	setmetatile 10, 4, 0x0D2, TRUE
# 67 "data/maps/BygoneVault_1/scripts.pory"
	setmetatile 11, 4, 0x0D3, TRUE
# 68 "data/maps/BygoneVault_1/scripts.pory"
	special DrawWholeMapView
# 69 "data/maps/BygoneVault_1/scripts.pory"
	delay 70
# 70 "data/maps/BygoneVault_1/scripts.pory"
	setvar VAR_0x8004, 1
# 71 "data/maps/BygoneVault_1/scripts.pory"
	setvar VAR_0x8005, 1
# 72 "data/maps/BygoneVault_1/scripts.pory"
	setvar VAR_0x8006, 12
# 73 "data/maps/BygoneVault_1/scripts.pory"
	setvar VAR_0x8007, 2
# 74 "data/maps/BygoneVault_1/scripts.pory"
	special ShakeCamera
# 75 "data/maps/BygoneVault_1/scripts.pory"
	waitstate
# 76 "data/maps/BygoneVault_1/scripts.pory"
	setmetatile 8, 1, 0x0DD, FALSE
# 77 "data/maps/BygoneVault_1/scripts.pory"
	special DrawWholeMapView
# 78 "data/maps/BygoneVault_1/scripts.pory"
	delay 10
# 79 "data/maps/BygoneVault_1/scripts.pory"
	playfanfare MUS_DP_TV_END
# 80 "data/maps/BygoneVault_1/scripts.pory"
	waitfanfare
# 81 "data/maps/BygoneVault_1/scripts.pory"
	switch VAR_TEMP_0
# 82 "data/maps/BygoneVault_1/scripts.pory"
	case 1, BygoneVault_1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_7
# 87 "data/maps/BygoneVault_1/scripts.pory"
	applymovement LOCALID_CAMERA, Common_Movement_WalkDiagSE3
# 88 "data/maps/BygoneVault_1/scripts.pory"
	waitmovement 0
# 89 "data/maps/BygoneVault_1/scripts.pory"
	applymovement LOCALID_CAMERA, Common_Movement_WalkRight4
BygoneVault_1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_5:
# 91 "data/maps/BygoneVault_1/scripts.pory"
	waitmovement 0
# 92 "data/maps/BygoneVault_1/scripts.pory"
	special RemoveCameraObject
# 93 "data/maps/BygoneVault_1/scripts.pory"
	setflag FLAG_TEMP_5
# 94 "data/maps/BygoneVault_1/scripts.pory"
	setvar VAR_EMERALBODY_RIVAL_STATE, 43
# 95 "data/maps/BygoneVault_1/scripts.pory"
	removeobject 5
	return

BygoneVault_1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_3:
# 51 "data/maps/BygoneVault_1/scripts.pory"
	applymovement LOCALID_CAMERA, Common_Movement_WalkRight4
# 52 "data/maps/BygoneVault_1/scripts.pory"
	waitmovement 0
# 53 "data/maps/BygoneVault_1/scripts.pory"
	applymovement LOCALID_CAMERA, Common_Movement_WalkDiagNE3
	goto BygoneVault_1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_1

BygoneVault_1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_7:
# 83 "data/maps/BygoneVault_1/scripts.pory"
	applymovement LOCALID_CAMERA, Common_Movement_WalkDiagSW3
# 84 "data/maps/BygoneVault_1/scripts.pory"
	waitmovement 0
# 85 "data/maps/BygoneVault_1/scripts.pory"
	applymovement LOCALID_CAMERA, Common_Movement_WalkLeft4
	goto BygoneVault_1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_5


BygoneVault_FullBowl::
# 101 "data/maps/BygoneVault_1/scripts.pory"
	msgbox BygoneVault_FullBowl_Text_0, MSGBOX_AUTOCLOSE
	return


BygoneVault_DoorShut::
# 105 "data/maps/BygoneVault_1/scripts.pory"
	msgbox BygoneVault_DoorShut_Text_0, MSGBOX_AUTOCLOSE
	return


BygoneVault_1_Sign::
# 109 "data/maps/BygoneVault_1/scripts.pory"
	msgbox BygoneVault_1_Sign_Text_0, MSGBOX_SIGN
	return


Script_RedrawBygoneVault1Map::
# 124 "data/maps/BygoneVault_1/scripts.pory"
	goto_if_unset FLAG_TEMP_6, Script_RedrawBygoneVault1Map_2
	return

Script_RedrawBygoneVault1Map_1:
# 125 "data/maps/BygoneVault_1/scripts.pory"
	setmetatile 8, 1, 0x0DD, FALSE
# 126 "data/maps/BygoneVault_1/scripts.pory"
	special DrawWholeMapView
# 127 "data/maps/BygoneVault_1/scripts.pory"
	setflag FLAG_TEMP_6
	return

Script_RedrawBygoneVault1Map_2:
# 124 "data/maps/BygoneVault_1/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 43
	goto_if_ge Script_RedrawBygoneVault1Map_1
	return


BygoneVault_FullBowl_Text_0:
# 101 "data/maps/BygoneVault_1/scripts.pory"
	.string "The bowl has filled with water.$"

BygoneVault_DoorShut_Text_0:
# 105 "data/maps/BygoneVault_1/scripts.pory"
	.string "The door is firmly sealed shut.$"

BygoneVault_1_Sign_Text_0:
# 109 "data/maps/BygoneVault_1/scripts.pory"
	.string "And as they foretold\n"
	.string "The doors were sealed firmly shut\l"
	.string "'Til the drought had passed$"
