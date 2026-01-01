SubmergedCave_2F_1R_MapScripts::
# 2 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SubmergedCave_2F_1R_MapScripts_MAP_SCRIPT_ON_LOAD
# 9 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SubmergedCave_2F_1R_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

SubmergedCave_2F_1R_MapScripts_MAP_SCRIPT_ON_LOAD:
# 3 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 18
	goto_if_eq SubmergedCave_2F_1R_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

SubmergedCave_2F_1R_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 4 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	setflag FLAG_DONT_START_MUSIC_ON_WARP
# 5 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	setflag FLAG_SYS_SPAWN_INVISIBLE
# 6 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	setflag FLAG_SYS_DO_NOT_FADE_IN_ON_ENTER
	return

SubmergedCave_2F_1R_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 10 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	map_script_2 VAR_EMERALBODY_RIVAL_STATE, 18, SubmergedCave_2F_1R_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

SubmergedCave_2F_1R_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 11 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	clearflag FLAG_DONT_START_MUSIC_ON_WARP
# 12 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	clearflag FLAG_SYS_SPAWN_INVISIBLE
# 13 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	clearflag FLAG_SYS_DO_NOT_FADE_IN_ON_ENTER
# 14 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	delay 40
# 15 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	goto_if_unset FLAG_TEMP_1, SubmergedCave_2F_1R_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_1
	return

SubmergedCave_2F_1R_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_1:
# 16 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	msgbox Text_TooDarkLetsTurnBack, MSGBOX_AUTOCLOSE
# 17 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	setflag FLAG_TEMP_1
# 18 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	warp MAP_FAR_OFF_SEA_WEST_2_UNDERWATER_2, 1
	return


SubmergedCave_2F_1R_CommonEnterNonAnimDoor::
# 25 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	lock
# 26 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_SetInvisible
# 27 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	playse SE_EXIT
# 28 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	delay 20
# 29 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	goto_if_set FLAG_SYS_HIDE_FOLLOWERS, SubmergedCave_2F_1R_CommonEnterNonAnimDoor_2
SubmergedCave_2F_1R_CommonEnterNonAnimDoor_1:
# 36 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	special SpawnCameraObject
	return

SubmergedCave_2F_1R_CommonEnterNonAnimDoor_2:
# 30 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkUp
# 31 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
# 32 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_SetInvisible
# 33 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	playse SE_EXIT
# 34 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	delay 20
	goto SubmergedCave_2F_1R_CommonEnterNonAnimDoor_1


SubmergedCave_2F_1R_CommonEnterNonAnimDoorWest::
# 40 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	lock
# 41 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_SetInvisible
# 42 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	playse SE_EXIT
# 43 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	delay 20
# 44 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	goto_if_set FLAG_SYS_HIDE_FOLLOWERS, SubmergedCave_2F_1R_CommonEnterNonAnimDoorWest_2
SubmergedCave_2F_1R_CommonEnterNonAnimDoorWest_1:
# 51 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	special SpawnCameraObject
	return

SubmergedCave_2F_1R_CommonEnterNonAnimDoorWest_2:
# 45 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkLeft
# 46 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
# 47 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_SetInvisible
# 48 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	playse SE_EXIT
# 49 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	delay 20
	goto SubmergedCave_2F_1R_CommonEnterNonAnimDoorWest_1


SubmergedCave_2F_1R_CommonEnterNonAnimDoorEast::
# 55 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	lock
# 56 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_SetInvisible
# 57 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	playse SE_EXIT
# 58 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	delay 20
# 59 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	goto_if_set FLAG_SYS_HIDE_FOLLOWERS, SubmergedCave_2F_1R_CommonEnterNonAnimDoorEast_2
SubmergedCave_2F_1R_CommonEnterNonAnimDoorEast_1:
# 66 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	special SpawnCameraObject
	return

SubmergedCave_2F_1R_CommonEnterNonAnimDoorEast_2:
# 60 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkRight
# 61 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
# 62 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_SetInvisible
# 63 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	playse SE_EXIT
# 64 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	delay 20
	goto SubmergedCave_2F_1R_CommonEnterNonAnimDoorEast_1


SubmergedCave_2F_1R_CommonExitNonAnimDoor::
# 70 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 71 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_FaceDown
# 72 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
# 73 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_SetVisible
# 74 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
# 75 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 76 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
# 77 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_SetVisible
# 78 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
	return


SubmergedCave_2F_1R_CommonExitNonAnimDoorWest::
# 82 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 83 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_FaceRight
# 84 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
# 85 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_SetVisible
# 86 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
# 87 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight
# 88 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
# 89 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_SetVisible
# 90 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
	return


SubmergedCave_2F_1R_CommonExitNonAnimDoorEast::
# 94 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 95 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_FaceLeft
# 96 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
# 97 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_SetVisible
# 98 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
# 99 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkLeft
# 100 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
# 101 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_SetVisible
# 102 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
	return


SubmergedCave_2F_1R_Warp1To2::
# 107 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	call SubmergedCave_2F_1R_CommonEnterNonAnimDoor
# 108 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement LOCALID_CAMERA, SubmergedCave_2F_1R_Movement1To2
# 109 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
# 110 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	special RemoveCameraObject
# 111 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	setobjectxy LOCALID_PLAYER, 0, 12
# 112 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	setobjectxy OBJ_EVENT_ID_NPC_FOLLOWER, 0, 12
# 113 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	call SubmergedCave_2F_1R_CommonExitNonAnimDoorWest
# 114 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	release
	return


SubmergedCave_2F_1R_Warp2To1::
# 118 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	call SubmergedCave_2F_1R_CommonEnterNonAnimDoorWest
# 119 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement LOCALID_CAMERA, SubmergedCave_2F_1R_Movement2To1
# 120 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
# 121 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	special RemoveCameraObject
# 122 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	setobjectxy LOCALID_PLAYER, 35, 15
# 123 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	setobjectxy OBJ_EVENT_ID_NPC_FOLLOWER, 35, 15
# 124 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	call SubmergedCave_2F_1R_CommonExitNonAnimDoor
# 125 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	release
	return


# 128 "data/maps/SubmergedCave_2F_1R/scripts.pory"
SubmergedCave_2F_1R_Movement1To2:
# 129 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northwest
# 129 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northwest
# 129 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northwest
# 130 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 130 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 130 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 130 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 130 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 130 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 130 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 130 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 130 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 130 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 130 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 130 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 130 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 130 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 130 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 130 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 130 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 130 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 130 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 130 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 130 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 130 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 130 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 130 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 130 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 130 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 130 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 130 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 130 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 130 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 130 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 130 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
	step_end

# 133 "data/maps/SubmergedCave_2F_1R/scripts.pory"
SubmergedCave_2F_1R_Movement2To1:
# 134 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 134 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 134 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 134 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 134 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 134 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 134 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 134 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 134 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 134 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 134 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 134 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 134 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 134 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 134 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 134 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 134 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 134 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 134 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 134 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 134 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 134 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 134 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 134 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 134 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 134 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 134 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 134 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 134 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 134 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 134 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 134 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 135 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southeast
# 135 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southeast
# 135 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southeast
	step_end

SubmergedCave_2F_1R_Warp2To3::
# 139 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	call SubmergedCave_2F_1R_CommonEnterNonAnimDoorWest
# 140 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement LOCALID_CAMERA, SubmergedCave_2F_1R_Movement2To3
# 141 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
# 142 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	special RemoveCameraObject
# 143 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	setobjectxy LOCALID_PLAYER, 41, 10
# 144 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	setobjectxy OBJ_EVENT_ID_NPC_FOLLOWER, 41, 10
# 145 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	call SubmergedCave_2F_1R_CommonExitNonAnimDoorEast
# 146 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	release
	return


SubmergedCave_2F_1R_Warp3To2::
# 150 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	call SubmergedCave_2F_1R_CommonEnterNonAnimDoorEast
# 151 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement LOCALID_CAMERA, SubmergedCave_2F_1R_Movement3To2
# 152 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
# 153 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	special RemoveCameraObject
# 154 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	setobjectxy LOCALID_PLAYER, 11, 21
# 155 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	setobjectxy OBJ_EVENT_ID_NPC_FOLLOWER, 11, 21
# 156 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	call SubmergedCave_2F_1R_CommonExitNonAnimDoorWest
# 157 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	release
	return


# 160 "data/maps/SubmergedCave_2F_1R/scripts.pory"
SubmergedCave_2F_1R_Movement2To3:
# 161 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 161 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 161 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 161 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 161 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 161 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 161 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 161 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 161 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 161 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 161 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 161 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 161 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 161 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 161 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 161 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 161 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 161 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 161 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 162 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northeast
# 162 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northeast
# 162 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northeast
# 162 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northeast
# 162 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northeast
# 162 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northeast
# 162 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northeast
# 162 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northeast
# 162 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northeast
# 162 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northeast
# 162 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northeast
	step_end

# 165 "data/maps/SubmergedCave_2F_1R/scripts.pory"
SubmergedCave_2F_1R_Movement3To2:
# 166 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southwest
# 166 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southwest
# 166 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southwest
# 166 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southwest
# 166 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southwest
# 166 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southwest
# 166 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southwest
# 166 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southwest
# 166 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southwest
# 166 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southwest
# 166 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southwest
# 167 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 167 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 167 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 167 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 167 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 167 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 167 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 167 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 167 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 167 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 167 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 167 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 167 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 167 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 167 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 167 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 167 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 167 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 167 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
	step_end

SubmergedCave_2F_1R_Warp3To4::
# 171 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	call SubmergedCave_2F_1R_CommonEnterNonAnimDoorWest
# 172 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement LOCALID_CAMERA, SubmergedCave_2F_1R_Movement3To4
# 173 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
# 174 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	special RemoveCameraObject
# 175 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	setobjectxy LOCALID_PLAYER, 40, 20
# 176 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	setobjectxy OBJ_EVENT_ID_NPC_FOLLOWER, 40, 20
# 177 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	call SubmergedCave_2F_1R_CommonExitNonAnimDoorEast
# 178 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	release
	return


SubmergedCave_2F_1R_Warp4To3::
# 182 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	call SubmergedCave_2F_1R_CommonEnterNonAnimDoorEast
# 183 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement LOCALID_CAMERA, SubmergedCave_2F_1R_Movement4To3
# 184 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
# 185 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	special RemoveCameraObject
# 186 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	setobjectxy LOCALID_PLAYER, 20, 17
# 187 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	setobjectxy OBJ_EVENT_ID_NPC_FOLLOWER, 20, 17
# 188 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	call SubmergedCave_2F_1R_CommonExitNonAnimDoorWest
# 189 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	release
	return


# 192 "data/maps/SubmergedCave_2F_1R/scripts.pory"
SubmergedCave_2F_1R_Movement3To4:
# 193 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 193 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 193 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 193 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 193 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 193 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 193 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 193 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 193 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 193 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 193 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 193 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 193 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 193 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 193 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 193 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 193 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 194 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southeast
# 194 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southeast
# 194 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southeast
	step_end

# 197 "data/maps/SubmergedCave_2F_1R/scripts.pory"
SubmergedCave_2F_1R_Movement4To3:
# 198 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northwest
# 198 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northwest
# 198 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northwest
# 199 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 199 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 199 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 199 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 199 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 199 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 199 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 199 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 199 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 199 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 199 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 199 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 199 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 199 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 199 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 199 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 199 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
	step_end

SubmergedCave_2F_1R_Warp4To5::
# 203 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	call SubmergedCave_2F_1R_CommonEnterNonAnimDoor
# 204 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement LOCALID_CAMERA, SubmergedCave_2F_1R_Movement4To5
# 205 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
# 206 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	special RemoveCameraObject
# 207 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	setobjectxy LOCALID_PLAYER, 24, 4
# 208 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	setobjectxy OBJ_EVENT_ID_NPC_FOLLOWER, 24, 4
# 209 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	call SubmergedCave_2F_1R_CommonExitNonAnimDoorEast
# 210 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	release
	return


SubmergedCave_2F_1R_Warp5To4::
# 214 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	call SubmergedCave_2F_1R_CommonEnterNonAnimDoorEast
# 215 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement LOCALID_CAMERA, SubmergedCave_2F_1R_Movement5To4
# 216 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
# 217 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	special RemoveCameraObject
# 218 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	setobjectxy LOCALID_PLAYER, 15, 13
# 219 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	setobjectxy OBJ_EVENT_ID_NPC_FOLLOWER, 15, 13
# 220 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	call SubmergedCave_2F_1R_CommonExitNonAnimDoor
# 221 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	release
	return


# 224 "data/maps/SubmergedCave_2F_1R/scripts.pory"
SubmergedCave_2F_1R_Movement4To5:
# 225 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northeast
# 225 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northeast
# 225 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northeast
# 225 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northeast
# 225 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northeast
# 225 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northeast
# 225 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northeast
# 225 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northeast
# 225 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northeast
	step_end

# 228 "data/maps/SubmergedCave_2F_1R/scripts.pory"
SubmergedCave_2F_1R_Movement5To4:
# 229 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southwest
# 229 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southwest
# 229 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southwest
# 229 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southwest
# 229 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southwest
# 229 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southwest
# 229 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southwest
# 229 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southwest
# 229 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southwest
	step_end
