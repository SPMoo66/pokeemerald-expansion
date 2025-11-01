SubmergedCave_2F_1R_MapScripts::
	.byte 0


SubmergedCave_2F_1R_CommonEnterNonAnimDoor::
# 4 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	lock
# 5 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_SetInvisible
# 6 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	playse SE_EXIT
# 7 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	delay 20
# 8 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkUp
# 9 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
# 10 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_SetInvisible
# 11 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	playse SE_EXIT
# 12 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	delay 20
# 13 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	special SpawnCameraObject
	return


SubmergedCave_2F_1R_CommonEnterNonAnimDoorWest::
# 17 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	lock
# 18 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_SetInvisible
# 19 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	playse SE_EXIT
# 20 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	delay 20
# 21 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkLeft
# 22 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
# 23 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_SetInvisible
# 24 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	playse SE_EXIT
# 25 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	delay 20
# 26 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	special SpawnCameraObject
	return


SubmergedCave_2F_1R_CommonEnterNonAnimDoorEast::
# 30 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	lock
# 31 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_SetInvisible
# 32 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	playse SE_EXIT
# 33 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	delay 20
# 34 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkRight
# 35 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
# 36 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_SetInvisible
# 37 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	playse SE_EXIT
# 38 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	delay 20
# 39 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	special SpawnCameraObject
	return


SubmergedCave_2F_1R_CommonExitNonAnimDoor::
# 43 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 44 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_FaceDown
# 45 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
# 46 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_SetVisible
# 47 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
# 48 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 49 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
# 50 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_SetVisible
# 51 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
	return


SubmergedCave_2F_1R_CommonExitNonAnimDoorWest::
# 55 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 56 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_FaceRight
# 57 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
# 58 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_SetVisible
# 59 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
# 60 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight
# 61 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
# 62 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_SetVisible
# 63 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
	return


SubmergedCave_2F_1R_CommonExitNonAnimDoorEast::
# 67 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 68 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_FaceLeft
# 69 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
# 70 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_SetVisible
# 71 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
# 72 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkLeft
# 73 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
# 74 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_SetVisible
# 75 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
	return


SubmergedCave_2F_1R_Warp1To2::
# 80 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	call SubmergedCave_2F_1R_CommonEnterNonAnimDoor
# 81 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement LOCALID_CAMERA, SubmergedCave_2F_1R_Movement1To2
# 82 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
# 83 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	special RemoveCameraObject
# 84 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	setobjectxy LOCALID_PLAYER, 0, 12
# 85 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	setobjectxy OBJ_EVENT_ID_NPC_FOLLOWER, 0, 12
# 86 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	call SubmergedCave_2F_1R_CommonExitNonAnimDoorWest
# 87 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	release
	return


SubmergedCave_2F_1R_Warp2To1::
# 91 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	call SubmergedCave_2F_1R_CommonEnterNonAnimDoorWest
# 92 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement LOCALID_CAMERA, SubmergedCave_2F_1R_Movement2To1
# 93 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
# 94 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	special RemoveCameraObject
# 95 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	setobjectxy LOCALID_PLAYER, 35, 15
# 96 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	setobjectxy OBJ_EVENT_ID_NPC_FOLLOWER, 35, 15
# 97 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	call SubmergedCave_2F_1R_CommonExitNonAnimDoor
# 98 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	release
	return


# 101 "data/maps/SubmergedCave_2F_1R/scripts.pory"
SubmergedCave_2F_1R_Movement1To2:
# 102 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_diag_northwest
# 102 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_diag_northwest
# 102 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_diag_northwest
# 103 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 103 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 103 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 103 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 103 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 103 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 103 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 103 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 103 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 103 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 103 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 103 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 103 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 103 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 103 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 103 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 103 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 103 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 103 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 103 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 103 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 103 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 103 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 103 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 103 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 103 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 103 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 103 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 103 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 103 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 103 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 103 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
	step_end

# 106 "data/maps/SubmergedCave_2F_1R/scripts.pory"
SubmergedCave_2F_1R_Movement2To1:
# 107 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 107 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 107 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 107 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 107 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 107 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 107 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 107 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 107 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 107 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 107 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 107 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 107 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 107 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 107 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 107 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 107 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 107 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 107 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 107 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 107 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 107 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 107 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 107 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 107 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 107 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 107 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 107 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 107 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 107 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 107 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 107 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 108 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_diag_southeast
# 108 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_diag_southeast
# 108 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_diag_southeast
	step_end
