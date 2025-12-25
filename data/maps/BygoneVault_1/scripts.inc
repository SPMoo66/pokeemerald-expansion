BygoneVault_1_MapScripts::
# 2 "data/maps/BygoneVault_1/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, BygoneVault_1_MapScripts_MAP_SCRIPT_ON_LOAD
# 19 "data/maps/BygoneVault_1/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BygoneVault_1_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 37 "data/maps/BygoneVault_1/scripts.pory"
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
	setflag FLAG_TEMP_1
# 21 "data/maps/BygoneVault_1/scripts.pory"
	setflag FLAG_TEMP_2
# 22 "data/maps/BygoneVault_1/scripts.pory"
	setflag FLAG_TEMP_3
# 23 "data/maps/BygoneVault_1/scripts.pory"
	goto_if_set FLAG_EXP_1_BYGONE_VAULT_LEFT_SWITCH, BygoneVault_1_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
BygoneVault_1_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 26 "data/maps/BygoneVault_1/scripts.pory"
	goto_if_set FLAG_EXP_1_BYGONE_VAULT_RIGHT_SWITCH, BygoneVault_1_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
BygoneVault_1_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 29 "data/maps/BygoneVault_1/scripts.pory"
	goto_if_set FLAG_EXP_1_BYGONE_VAULT_LEFT_SWITCH, BygoneVault_1_MapScripts_MAP_SCRIPT_ON_TRANSITION_10
BygoneVault_1_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 33 "data/maps/BygoneVault_1/scripts.pory"
	goto_if_set FLAG_EXP_1_BYGONE_VAULT_MAIN_DOOR_OPEN, BygoneVault_1_MapScripts_MAP_SCRIPT_ON_TRANSITION_14
	return

BygoneVault_1_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 24 "data/maps/BygoneVault_1/scripts.pory"
	clearflag FLAG_TEMP_1
	goto BygoneVault_1_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

BygoneVault_1_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 27 "data/maps/BygoneVault_1/scripts.pory"
	clearflag FLAG_TEMP_2
	goto BygoneVault_1_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

BygoneVault_1_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 30 "data/maps/BygoneVault_1/scripts.pory"
	setvar VAR_TEMP_2, 1
# 31 "data/maps/BygoneVault_1/scripts.pory"
	clearflag FLAG_TEMP_3
	goto BygoneVault_1_MapScripts_MAP_SCRIPT_ON_TRANSITION_7

BygoneVault_1_MapScripts_MAP_SCRIPT_ON_TRANSITION_9:
# 29 "data/maps/BygoneVault_1/scripts.pory"
	goto_if_unset FLAG_EXP_1_BYGONE_VAULT_MAIN_DOOR_OPEN, BygoneVault_1_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
	goto BygoneVault_1_MapScripts_MAP_SCRIPT_ON_TRANSITION_7

BygoneVault_1_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 29 "data/maps/BygoneVault_1/scripts.pory"
	goto_if_set FLAG_EXP_1_BYGONE_VAULT_RIGHT_SWITCH, BygoneVault_1_MapScripts_MAP_SCRIPT_ON_TRANSITION_9
	goto BygoneVault_1_MapScripts_MAP_SCRIPT_ON_TRANSITION_7

BygoneVault_1_MapScripts_MAP_SCRIPT_ON_TRANSITION_14:
# 34 "data/maps/BygoneVault_1/scripts.pory"
	clearflag FLAG_TEMP_3
	return

BygoneVault_1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 38 "data/maps/BygoneVault_1/scripts.pory"
	map_script_2 VAR_TEMP_2, 1, BygoneVault_1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

BygoneVault_1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 39 "data/maps/BygoneVault_1/scripts.pory"
	setvar VAR_TEMP_2, 0
# 40 "data/maps/BygoneVault_1/scripts.pory"
	special SpawnCameraObject
# 41 "data/maps/BygoneVault_1/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 42 "data/maps/BygoneVault_1/scripts.pory"
	switch VAR_TEMP_0
# 43 "data/maps/BygoneVault_1/scripts.pory"
	case 1, BygoneVault_1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_3
# 48 "data/maps/BygoneVault_1/scripts.pory"
	applymovement LOCALID_CAMERA, Common_Movement_WalkLeft4
# 49 "data/maps/BygoneVault_1/scripts.pory"
	waitmovement 0
# 50 "data/maps/BygoneVault_1/scripts.pory"
	applymovement LOCALID_CAMERA, Common_Movement_WalkDiagNW3
BygoneVault_1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_1:
# 52 "data/maps/BygoneVault_1/scripts.pory"
	waitmovement 0
# 53 "data/maps/BygoneVault_1/scripts.pory"
	playse SE_DOWNPOUR
# 54 "data/maps/BygoneVault_1/scripts.pory"
	delay 30
# 55 "data/maps/BygoneVault_1/scripts.pory"
	playse SE_DOWNPOUR_STOP
# 56 "data/maps/BygoneVault_1/scripts.pory"
	waitse
# 57 "data/maps/BygoneVault_1/scripts.pory"
	setmetatile 5, 4, 0x0D2, TRUE
# 58 "data/maps/BygoneVault_1/scripts.pory"
	setmetatile 6, 4, 0x0D3, TRUE
# 59 "data/maps/BygoneVault_1/scripts.pory"
	setmetatile 10, 4, 0x0D2, TRUE
# 60 "data/maps/BygoneVault_1/scripts.pory"
	setmetatile 11, 4, 0x0D3, TRUE
# 61 "data/maps/BygoneVault_1/scripts.pory"
	special DrawWholeMapView
# 62 "data/maps/BygoneVault_1/scripts.pory"
	delay 70
# 63 "data/maps/BygoneVault_1/scripts.pory"
	setvar VAR_0x8004, 1
# 64 "data/maps/BygoneVault_1/scripts.pory"
	setvar VAR_0x8005, 1
# 65 "data/maps/BygoneVault_1/scripts.pory"
	setvar VAR_0x8006, 12
# 66 "data/maps/BygoneVault_1/scripts.pory"
	setvar VAR_0x8007, 2
# 67 "data/maps/BygoneVault_1/scripts.pory"
	special ShakeCamera
# 68 "data/maps/BygoneVault_1/scripts.pory"
	waitstate
# 69 "data/maps/BygoneVault_1/scripts.pory"
	setmetatile 8, 1, 0x0DD, FALSE
# 70 "data/maps/BygoneVault_1/scripts.pory"
	special DrawWholeMapView
# 71 "data/maps/BygoneVault_1/scripts.pory"
	delay 10
# 72 "data/maps/BygoneVault_1/scripts.pory"
	playfanfare MUS_DP_TV_END
# 73 "data/maps/BygoneVault_1/scripts.pory"
	waitfanfare
# 74 "data/maps/BygoneVault_1/scripts.pory"
	switch VAR_TEMP_0
# 75 "data/maps/BygoneVault_1/scripts.pory"
	case 1, BygoneVault_1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_7
# 80 "data/maps/BygoneVault_1/scripts.pory"
	applymovement LOCALID_CAMERA, Common_Movement_WalkDiagSE3
# 81 "data/maps/BygoneVault_1/scripts.pory"
	waitmovement 0
# 82 "data/maps/BygoneVault_1/scripts.pory"
	applymovement LOCALID_CAMERA, Common_Movement_WalkRight4
BygoneVault_1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_5:
# 84 "data/maps/BygoneVault_1/scripts.pory"
	waitmovement 0
# 85 "data/maps/BygoneVault_1/scripts.pory"
	special RemoveCameraObject
# 86 "data/maps/BygoneVault_1/scripts.pory"
	setflag FLAG_EXP_1_BYGONE_VAULT_MAIN_DOOR_OPEN
# 87 "data/maps/BygoneVault_1/scripts.pory"
	removeobject 5
	return

BygoneVault_1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_3:
# 44 "data/maps/BygoneVault_1/scripts.pory"
	applymovement LOCALID_CAMERA, Common_Movement_WalkRight4
# 45 "data/maps/BygoneVault_1/scripts.pory"
	waitmovement 0
# 46 "data/maps/BygoneVault_1/scripts.pory"
	applymovement LOCALID_CAMERA, Common_Movement_WalkDiagNE3
	goto BygoneVault_1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_1

BygoneVault_1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_7:
# 76 "data/maps/BygoneVault_1/scripts.pory"
	applymovement LOCALID_CAMERA, Common_Movement_WalkDiagSW3
# 77 "data/maps/BygoneVault_1/scripts.pory"
	waitmovement 0
# 78 "data/maps/BygoneVault_1/scripts.pory"
	applymovement LOCALID_CAMERA, Common_Movement_WalkLeft4
	goto BygoneVault_1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_5


BygoneVault_FullBowl::
# 93 "data/maps/BygoneVault_1/scripts.pory"
	msgbox BygoneVault_FullBowl_Text_0, MSGBOX_AUTOCLOSE
	return


BygoneVault_DoorShut::
# 97 "data/maps/BygoneVault_1/scripts.pory"
	msgbox BygoneVault_DoorShut_Text_0, MSGBOX_AUTOCLOSE
	return


CreatePokemonSprite::
# 101 "data/maps/BygoneVault_1/scripts.pory"
	msgbox CreatePokemonSprite_Text_0, MSGBOX_AUTOCLOSE
# 102 "data/maps/BygoneVault_1/scripts.pory"
	setflag FLAG_BLOCK_PLAYER_ACTIONS
# 103 "data/maps/BygoneVault_1/scripts.pory"
	setflag FLAG_PLAY_AS_FIRST_MON_IN_PARTY
# 104 "data/maps/BygoneVault_1/scripts.pory"
	setflag FLAG_SEMI_PERM_HIDE_FOLLOWER
# 105 "data/maps/BygoneVault_1/scripts.pory"
	warpsilent MAP_BYGONE_VAULT_1, 8, 11
	return


Script_RedrawBygoneVault1Map::
# 109 "data/maps/BygoneVault_1/scripts.pory"
	goto_if_unset FLAG_TEMP_6, Script_RedrawBygoneVault1Map_2
	return

Script_RedrawBygoneVault1Map_1:
# 110 "data/maps/BygoneVault_1/scripts.pory"
	setmetatile 8, 1, 0x0DD, FALSE
# 111 "data/maps/BygoneVault_1/scripts.pory"
	special DrawWholeMapView
# 112 "data/maps/BygoneVault_1/scripts.pory"
	setflag FLAG_TEMP_6
	return

Script_RedrawBygoneVault1Map_2:
# 109 "data/maps/BygoneVault_1/scripts.pory"
	goto_if_set FLAG_EXP_1_BYGONE_VAULT_MAIN_DOOR_OPEN, Script_RedrawBygoneVault1Map_1
	return


BygoneVault_FullBowl_Text_0:
# 93 "data/maps/BygoneVault_1/scripts.pory"
	.string "The bowl has filled with water.$"

BygoneVault_DoorShut_Text_0:
# 97 "data/maps/BygoneVault_1/scripts.pory"
	.string "The door is firmly sealed shut.$"

CreatePokemonSprite_Text_0:
# 101 "data/maps/BygoneVault_1/scripts.pory"
	.string "You are now a Pokemon.$"
