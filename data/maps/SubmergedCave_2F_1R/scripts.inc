SubmergedCave_2F_1R_MapScripts::
# 2 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SubmergedCave_2F_1R_MapScripts_MAP_SCRIPT_ON_LOAD
# 9 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SubmergedCave_2F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 12 "data/maps/SubmergedCave_2F_1R/scripts.pory"
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

SubmergedCave_2F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 10 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	setflag FLAG_LANDMARK_SUBMERGED_CAVE
	return

SubmergedCave_2F_1R_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 13 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	map_script_2 VAR_EMERALBODY_RIVAL_STATE, 18, SubmergedCave_2F_1R_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

SubmergedCave_2F_1R_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 14 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	clearflag FLAG_DONT_START_MUSIC_ON_WARP
# 15 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	clearflag FLAG_SYS_SPAWN_INVISIBLE
# 16 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	clearflag FLAG_SYS_DO_NOT_FADE_IN_ON_ENTER
# 17 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	delay 40
# 18 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	goto_if_unset FLAG_TEMP_1, SubmergedCave_2F_1R_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_1
	return

SubmergedCave_2F_1R_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_1:
# 19 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	msgbox Text_TooDarkLetsTurnBack, MSGBOX_AUTOCLOSE
# 20 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	setflag FLAG_TEMP_1
# 21 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	warp MAP_FAR_OFF_SEA_WEST_2_UNDERWATER_2, 1
	return


SubmergedCave_2F_1R_CommonEnterNonAnimDoor::
# 28 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	lock
# 29 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_SetInvisible
# 30 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	playse SE_EXIT
# 31 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	delay 20
# 32 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	goto_if_set FLAG_SYS_HIDE_FOLLOWERS, SubmergedCave_2F_1R_CommonEnterNonAnimDoor_2
SubmergedCave_2F_1R_CommonEnterNonAnimDoor_1:
# 39 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	special SpawnCameraObject
	return

SubmergedCave_2F_1R_CommonEnterNonAnimDoor_2:
# 33 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkUp
# 34 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
# 35 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_SetInvisible
# 36 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	playse SE_EXIT
# 37 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	delay 20
	goto SubmergedCave_2F_1R_CommonEnterNonAnimDoor_1


SubmergedCave_2F_1R_CommonEnterNonAnimDoorWest::
# 43 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	lock
# 44 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_SetInvisible
# 45 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	playse SE_EXIT
# 46 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	delay 20
# 47 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	goto_if_set FLAG_SYS_HIDE_FOLLOWERS, SubmergedCave_2F_1R_CommonEnterNonAnimDoorWest_2
SubmergedCave_2F_1R_CommonEnterNonAnimDoorWest_1:
# 54 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	special SpawnCameraObject
	return

SubmergedCave_2F_1R_CommonEnterNonAnimDoorWest_2:
# 48 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkLeft
# 49 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
# 50 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_SetInvisible
# 51 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	playse SE_EXIT
# 52 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	delay 20
	goto SubmergedCave_2F_1R_CommonEnterNonAnimDoorWest_1


SubmergedCave_2F_1R_CommonEnterNonAnimDoorEast::
# 58 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	lock
# 59 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_SetInvisible
# 60 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	playse SE_EXIT
# 61 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	delay 20
# 62 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	goto_if_set FLAG_SYS_HIDE_FOLLOWERS, SubmergedCave_2F_1R_CommonEnterNonAnimDoorEast_2
SubmergedCave_2F_1R_CommonEnterNonAnimDoorEast_1:
# 69 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	special SpawnCameraObject
	return

SubmergedCave_2F_1R_CommonEnterNonAnimDoorEast_2:
# 63 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkRight
# 64 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
# 65 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_SetInvisible
# 66 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	playse SE_EXIT
# 67 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	delay 20
	goto SubmergedCave_2F_1R_CommonEnterNonAnimDoorEast_1


SubmergedCave_2F_1R_CommonExitNonAnimDoor::
# 73 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 74 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_FaceDown
# 75 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
# 76 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_SetVisible
# 77 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
# 78 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 79 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
# 80 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_SetVisible
# 81 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
	return


SubmergedCave_2F_1R_CommonExitNonAnimDoorWest::
# 85 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 86 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_FaceRight
# 87 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
# 88 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_SetVisible
# 89 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
# 90 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight
# 91 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
# 92 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_SetVisible
# 93 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
	return


SubmergedCave_2F_1R_CommonExitNonAnimDoorEast::
# 97 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 98 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_FaceLeft
# 99 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
# 100 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_SetVisible
# 101 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
# 102 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkLeft
# 103 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
# 104 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_SetVisible
# 105 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
	return


SubmergedCave_2F_1R_Warp1To2::
# 110 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	call SubmergedCave_2F_1R_CommonEnterNonAnimDoor
# 111 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement LOCALID_CAMERA, SubmergedCave_2F_1R_Movement1To2
# 112 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
# 113 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	special RemoveCameraObject
# 114 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	setobjectxy LOCALID_PLAYER, 0, 12
# 115 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	setobjectxy OBJ_EVENT_ID_NPC_FOLLOWER, 0, 12
# 116 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	call SubmergedCave_2F_1R_CommonExitNonAnimDoorWest
# 117 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	release
	return


SubmergedCave_2F_1R_Warp2To1::
# 121 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	call SubmergedCave_2F_1R_CommonEnterNonAnimDoorWest
# 122 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement LOCALID_CAMERA, SubmergedCave_2F_1R_Movement2To1
# 123 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
# 124 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	special RemoveCameraObject
# 125 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	setobjectxy LOCALID_PLAYER, 35, 15
# 126 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	setobjectxy OBJ_EVENT_ID_NPC_FOLLOWER, 35, 15
# 127 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	call SubmergedCave_2F_1R_CommonExitNonAnimDoor
# 128 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	release
	return


# 131 "data/maps/SubmergedCave_2F_1R/scripts.pory"
SubmergedCave_2F_1R_Movement1To2:
# 132 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northwest
# 132 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northwest
# 132 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northwest
# 133 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 133 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 133 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 133 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 133 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 133 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 133 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 133 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 133 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 133 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 133 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 133 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 133 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 133 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 133 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 133 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 133 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 133 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 133 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 133 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 133 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 133 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 133 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 133 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 133 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 133 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 133 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 133 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 133 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 133 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 133 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 133 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
	step_end

# 136 "data/maps/SubmergedCave_2F_1R/scripts.pory"
SubmergedCave_2F_1R_Movement2To1:
# 137 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 137 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 137 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 137 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 137 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 137 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 137 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 137 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 137 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 137 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 137 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 137 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 137 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 137 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 137 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 137 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 137 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 137 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 137 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 137 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 137 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 137 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 137 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 137 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 137 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 137 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 137 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 137 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 137 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 137 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 137 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 137 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 138 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southeast
# 138 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southeast
# 138 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southeast
	step_end

SubmergedCave_2F_1R_Warp2To3::
# 142 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	call SubmergedCave_2F_1R_CommonEnterNonAnimDoorWest
# 143 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement LOCALID_CAMERA, SubmergedCave_2F_1R_Movement2To3
# 144 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
# 145 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	special RemoveCameraObject
# 146 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	setobjectxy LOCALID_PLAYER, 41, 10
# 147 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	setobjectxy OBJ_EVENT_ID_NPC_FOLLOWER, 41, 10
# 148 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	call SubmergedCave_2F_1R_CommonExitNonAnimDoorEast
# 149 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	release
	return


SubmergedCave_2F_1R_Warp3To2::
# 153 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	call SubmergedCave_2F_1R_CommonEnterNonAnimDoorEast
# 154 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement LOCALID_CAMERA, SubmergedCave_2F_1R_Movement3To2
# 155 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
# 156 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	special RemoveCameraObject
# 157 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	setobjectxy LOCALID_PLAYER, 11, 21
# 158 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	setobjectxy OBJ_EVENT_ID_NPC_FOLLOWER, 11, 21
# 159 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	call SubmergedCave_2F_1R_CommonExitNonAnimDoorWest
# 160 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	release
	return


# 163 "data/maps/SubmergedCave_2F_1R/scripts.pory"
SubmergedCave_2F_1R_Movement2To3:
# 164 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 164 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 164 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 164 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 164 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 164 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 164 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 164 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 164 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 164 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 164 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 164 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 164 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 164 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 164 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 164 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 164 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 164 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 164 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 165 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northeast
# 165 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northeast
# 165 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northeast
# 165 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northeast
# 165 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northeast
# 165 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northeast
# 165 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northeast
# 165 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northeast
# 165 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northeast
# 165 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northeast
# 165 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northeast
	step_end

# 168 "data/maps/SubmergedCave_2F_1R/scripts.pory"
SubmergedCave_2F_1R_Movement3To2:
# 169 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southwest
# 169 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southwest
# 169 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southwest
# 169 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southwest
# 169 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southwest
# 169 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southwest
# 169 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southwest
# 169 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southwest
# 169 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southwest
# 169 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southwest
# 169 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southwest
# 170 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 170 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 170 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 170 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 170 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 170 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 170 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 170 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 170 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 170 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 170 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 170 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 170 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 170 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 170 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 170 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 170 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 170 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 170 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
	step_end

SubmergedCave_2F_1R_Warp3To4::
# 174 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	call SubmergedCave_2F_1R_CommonEnterNonAnimDoorWest
# 175 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement LOCALID_CAMERA, SubmergedCave_2F_1R_Movement3To4
# 176 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
# 177 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	special RemoveCameraObject
# 178 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	setobjectxy LOCALID_PLAYER, 40, 20
# 179 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	setobjectxy OBJ_EVENT_ID_NPC_FOLLOWER, 40, 20
# 180 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	call SubmergedCave_2F_1R_CommonExitNonAnimDoorEast
# 181 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	release
	return


SubmergedCave_2F_1R_Warp4To3::
# 185 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	call SubmergedCave_2F_1R_CommonEnterNonAnimDoorEast
# 186 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement LOCALID_CAMERA, SubmergedCave_2F_1R_Movement4To3
# 187 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
# 188 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	special RemoveCameraObject
# 189 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	setobjectxy LOCALID_PLAYER, 20, 17
# 190 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	setobjectxy OBJ_EVENT_ID_NPC_FOLLOWER, 20, 17
# 191 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	call SubmergedCave_2F_1R_CommonExitNonAnimDoorWest
# 192 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	release
	return


# 195 "data/maps/SubmergedCave_2F_1R/scripts.pory"
SubmergedCave_2F_1R_Movement3To4:
# 196 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 196 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 196 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 196 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 196 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 196 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 196 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 196 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 196 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 196 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 196 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 196 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 196 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 196 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 196 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 196 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 196 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 197 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southeast
# 197 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southeast
# 197 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southeast
	step_end

# 200 "data/maps/SubmergedCave_2F_1R/scripts.pory"
SubmergedCave_2F_1R_Movement4To3:
# 201 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northwest
# 201 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northwest
# 201 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northwest
# 202 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 202 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 202 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 202 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 202 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 202 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 202 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 202 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 202 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 202 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 202 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 202 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 202 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 202 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 202 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 202 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 202 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
	step_end

SubmergedCave_2F_1R_Warp4To5::
# 206 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	call SubmergedCave_2F_1R_CommonEnterNonAnimDoor
# 207 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement LOCALID_CAMERA, SubmergedCave_2F_1R_Movement4To5
# 208 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
# 209 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	special RemoveCameraObject
# 210 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	setobjectxy LOCALID_PLAYER, 24, 4
# 211 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	setobjectxy OBJ_EVENT_ID_NPC_FOLLOWER, 24, 4
# 212 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	call SubmergedCave_2F_1R_CommonExitNonAnimDoorEast
# 213 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	release
	return


SubmergedCave_2F_1R_Warp5To4::
# 217 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	call SubmergedCave_2F_1R_CommonEnterNonAnimDoorEast
# 218 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement LOCALID_CAMERA, SubmergedCave_2F_1R_Movement5To4
# 219 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
# 220 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	special RemoveCameraObject
# 221 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	setobjectxy LOCALID_PLAYER, 15, 13
# 222 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	setobjectxy OBJ_EVENT_ID_NPC_FOLLOWER, 15, 13
# 223 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	call SubmergedCave_2F_1R_CommonExitNonAnimDoor
# 224 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	release
	return


# 227 "data/maps/SubmergedCave_2F_1R/scripts.pory"
SubmergedCave_2F_1R_Movement4To5:
# 228 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northeast
# 228 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northeast
# 228 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northeast
# 228 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northeast
# 228 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northeast
# 228 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northeast
# 228 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northeast
# 228 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northeast
# 228 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northeast
	step_end

# 231 "data/maps/SubmergedCave_2F_1R/scripts.pory"
SubmergedCave_2F_1R_Movement5To4:
# 232 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southwest
# 232 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southwest
# 232 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southwest
# 232 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southwest
# 232 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southwest
# 232 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southwest
# 232 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southwest
# 232 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southwest
# 232 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southwest
	step_end
