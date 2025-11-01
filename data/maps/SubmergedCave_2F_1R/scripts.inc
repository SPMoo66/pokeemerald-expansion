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
	goto_if_set FLAG_SYS_HIDE_FOLLOWERS, SubmergedCave_2F_1R_CommonEnterNonAnimDoor_2
SubmergedCave_2F_1R_CommonEnterNonAnimDoor_1:
# 15 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	special SpawnCameraObject
	return

SubmergedCave_2F_1R_CommonEnterNonAnimDoor_2:
# 9 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkUp
# 10 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
# 11 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_SetInvisible
# 12 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	playse SE_EXIT
# 13 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	delay 20
	goto SubmergedCave_2F_1R_CommonEnterNonAnimDoor_1


SubmergedCave_2F_1R_CommonEnterNonAnimDoorWest::
# 19 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	lock
# 20 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_SetInvisible
# 21 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	playse SE_EXIT
# 22 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	delay 20
# 23 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	goto_if_set FLAG_SYS_HIDE_FOLLOWERS, SubmergedCave_2F_1R_CommonEnterNonAnimDoorWest_2
SubmergedCave_2F_1R_CommonEnterNonAnimDoorWest_1:
# 30 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	special SpawnCameraObject
	return

SubmergedCave_2F_1R_CommonEnterNonAnimDoorWest_2:
# 24 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkLeft
# 25 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
# 26 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_SetInvisible
# 27 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	playse SE_EXIT
# 28 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	delay 20
	goto SubmergedCave_2F_1R_CommonEnterNonAnimDoorWest_1


SubmergedCave_2F_1R_CommonEnterNonAnimDoorEast::
# 34 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	lock
# 35 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_SetInvisible
# 36 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	playse SE_EXIT
# 37 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	delay 20
# 38 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	goto_if_set FLAG_SYS_HIDE_FOLLOWERS, SubmergedCave_2F_1R_CommonEnterNonAnimDoorEast_2
SubmergedCave_2F_1R_CommonEnterNonAnimDoorEast_1:
# 45 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	special SpawnCameraObject
	return

SubmergedCave_2F_1R_CommonEnterNonAnimDoorEast_2:
# 39 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkRight
# 40 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
# 41 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_SetInvisible
# 42 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	playse SE_EXIT
# 43 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	delay 20
	goto SubmergedCave_2F_1R_CommonEnterNonAnimDoorEast_1


SubmergedCave_2F_1R_CommonExitNonAnimDoor::
# 49 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 50 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_FaceDown
# 51 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
# 52 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_SetVisible
# 53 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
# 54 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 55 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
# 56 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_SetVisible
# 57 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
	return


SubmergedCave_2F_1R_CommonExitNonAnimDoorWest::
# 61 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 62 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_FaceRight
# 63 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
# 64 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_SetVisible
# 65 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
# 66 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight
# 67 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
# 68 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_SetVisible
# 69 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
	return


SubmergedCave_2F_1R_CommonExitNonAnimDoorEast::
# 73 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 74 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_FaceLeft
# 75 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
# 76 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_SetVisible
# 77 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
# 78 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkLeft
# 79 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
# 80 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_SetVisible
# 81 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
	return


SubmergedCave_2F_1R_Warp1To2::
# 86 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	call SubmergedCave_2F_1R_CommonEnterNonAnimDoor
# 87 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement LOCALID_CAMERA, SubmergedCave_2F_1R_Movement1To2
# 88 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
# 89 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	special RemoveCameraObject
# 90 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	setobjectxy LOCALID_PLAYER, 0, 12
# 91 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	setobjectxy OBJ_EVENT_ID_NPC_FOLLOWER, 0, 12
# 92 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	call SubmergedCave_2F_1R_CommonExitNonAnimDoorWest
# 93 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	release
	return


SubmergedCave_2F_1R_Warp2To1::
# 97 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	call SubmergedCave_2F_1R_CommonEnterNonAnimDoorWest
# 98 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement LOCALID_CAMERA, SubmergedCave_2F_1R_Movement2To1
# 99 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
# 100 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	special RemoveCameraObject
# 101 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	setobjectxy LOCALID_PLAYER, 35, 15
# 102 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	setobjectxy OBJ_EVENT_ID_NPC_FOLLOWER, 35, 15
# 103 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	call SubmergedCave_2F_1R_CommonExitNonAnimDoor
# 104 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	release
	return


# 107 "data/maps/SubmergedCave_2F_1R/scripts.pory"
SubmergedCave_2F_1R_Movement1To2:
# 108 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northwest
# 108 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northwest
# 108 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northwest
# 109 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 109 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 109 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 109 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 109 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 109 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 109 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 109 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 109 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 109 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 109 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 109 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 109 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 109 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 109 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 109 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 109 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 109 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 109 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 109 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 109 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 109 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 109 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 109 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 109 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 109 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 109 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 109 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 109 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 109 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 109 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 109 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
	step_end

# 112 "data/maps/SubmergedCave_2F_1R/scripts.pory"
SubmergedCave_2F_1R_Movement2To1:
# 113 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 113 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 113 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 113 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 113 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 113 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 113 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 113 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 113 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 113 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 113 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 113 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 113 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 113 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 113 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 113 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 113 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 113 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 113 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 113 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 113 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 113 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 113 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 113 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 113 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 113 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 113 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 113 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 113 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 113 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 113 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 113 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 114 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southeast
# 114 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southeast
# 114 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southeast
	step_end

SubmergedCave_2F_1R_Warp2To3::
# 118 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	call SubmergedCave_2F_1R_CommonEnterNonAnimDoorWest
# 119 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement LOCALID_CAMERA, SubmergedCave_2F_1R_Movement2To3
# 120 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
# 121 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	special RemoveCameraObject
# 122 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	setobjectxy LOCALID_PLAYER, 41, 10
# 123 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	setobjectxy OBJ_EVENT_ID_NPC_FOLLOWER, 41, 10
# 124 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	call SubmergedCave_2F_1R_CommonExitNonAnimDoorEast
# 125 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	release
	return


SubmergedCave_2F_1R_Warp3To2::
# 129 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	call SubmergedCave_2F_1R_CommonEnterNonAnimDoorEast
# 130 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement LOCALID_CAMERA, SubmergedCave_2F_1R_Movement3To2
# 131 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
# 132 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	special RemoveCameraObject
# 133 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	setobjectxy LOCALID_PLAYER, 11, 21
# 134 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	setobjectxy OBJ_EVENT_ID_NPC_FOLLOWER, 11, 21
# 135 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	call SubmergedCave_2F_1R_CommonExitNonAnimDoorWest
# 136 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	release
	return


# 139 "data/maps/SubmergedCave_2F_1R/scripts.pory"
SubmergedCave_2F_1R_Movement2To3:
# 140 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 140 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 140 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 140 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 140 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 140 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 140 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 140 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 140 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 140 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 140 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 140 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 140 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 140 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 140 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 140 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 140 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 140 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 140 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 141 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northeast
# 141 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northeast
# 141 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northeast
# 141 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northeast
# 141 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northeast
# 141 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northeast
# 141 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northeast
# 141 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northeast
# 141 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northeast
# 141 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northeast
# 141 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northeast
	step_end

# 144 "data/maps/SubmergedCave_2F_1R/scripts.pory"
SubmergedCave_2F_1R_Movement3To2:
# 145 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southwest
# 145 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southwest
# 145 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southwest
# 145 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southwest
# 145 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southwest
# 145 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southwest
# 145 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southwest
# 145 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southwest
# 145 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southwest
# 145 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southwest
# 145 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southwest
# 146 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 146 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 146 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 146 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 146 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 146 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 146 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 146 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 146 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 146 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 146 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 146 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 146 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 146 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 146 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 146 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 146 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 146 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 146 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
	step_end

SubmergedCave_2F_1R_Warp3To4::
# 150 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	call SubmergedCave_2F_1R_CommonEnterNonAnimDoorWest
# 151 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement LOCALID_CAMERA, SubmergedCave_2F_1R_Movement3To4
# 152 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
# 153 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	special RemoveCameraObject
# 154 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	setobjectxy LOCALID_PLAYER, 40, 20
# 155 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	setobjectxy OBJ_EVENT_ID_NPC_FOLLOWER, 40, 20
# 156 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	call SubmergedCave_2F_1R_CommonExitNonAnimDoorEast
# 157 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	release
	return


SubmergedCave_2F_1R_Warp4To3::
# 161 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	call SubmergedCave_2F_1R_CommonEnterNonAnimDoorEast
# 162 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement LOCALID_CAMERA, SubmergedCave_2F_1R_Movement4To3
# 163 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
# 164 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	special RemoveCameraObject
# 165 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	setobjectxy LOCALID_PLAYER, 20, 17
# 166 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	setobjectxy OBJ_EVENT_ID_NPC_FOLLOWER, 20, 17
# 167 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	call SubmergedCave_2F_1R_CommonExitNonAnimDoorWest
# 168 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	release
	return


# 171 "data/maps/SubmergedCave_2F_1R/scripts.pory"
SubmergedCave_2F_1R_Movement3To4:
# 172 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 172 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 172 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 172 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 172 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 172 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 172 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 172 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 172 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 172 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 172 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 172 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 172 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 172 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 172 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 172 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 172 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 173 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southeast
# 173 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southeast
# 173 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southeast
	step_end

# 176 "data/maps/SubmergedCave_2F_1R/scripts.pory"
SubmergedCave_2F_1R_Movement4To3:
# 177 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northwest
# 177 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northwest
# 177 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northwest
# 178 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 178 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 178 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 178 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 178 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 178 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 178 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 178 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 178 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 178 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 178 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 178 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 178 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 178 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 178 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 178 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 178 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
	step_end

SubmergedCave_2F_1R_Warp4To5::
# 182 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	call SubmergedCave_2F_1R_CommonEnterNonAnimDoor
# 183 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement LOCALID_CAMERA, SubmergedCave_2F_1R_Movement4To5
# 184 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
# 185 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	special RemoveCameraObject
# 186 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	setobjectxy LOCALID_PLAYER, 24, 4
# 187 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	setobjectxy OBJ_EVENT_ID_NPC_FOLLOWER, 24, 4
# 188 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	call SubmergedCave_2F_1R_CommonExitNonAnimDoorEast
# 189 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	release
	return


SubmergedCave_2F_1R_Warp5To4::
# 193 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	call SubmergedCave_2F_1R_CommonEnterNonAnimDoorEast
# 194 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement LOCALID_CAMERA, SubmergedCave_2F_1R_Movement5To4
# 195 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
# 196 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	special RemoveCameraObject
# 197 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	setobjectxy LOCALID_PLAYER, 15, 13
# 198 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	setobjectxy OBJ_EVENT_ID_NPC_FOLLOWER, 15, 13
# 199 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	call SubmergedCave_2F_1R_CommonExitNonAnimDoor
# 200 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	release
	return


# 203 "data/maps/SubmergedCave_2F_1R/scripts.pory"
SubmergedCave_2F_1R_Movement4To5:
# 204 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northeast
# 204 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northeast
# 204 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northeast
# 204 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northeast
# 204 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northeast
# 204 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northeast
# 204 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northeast
# 204 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northeast
# 204 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northeast
	step_end

# 207 "data/maps/SubmergedCave_2F_1R/scripts.pory"
SubmergedCave_2F_1R_Movement5To4:
# 208 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southwest
# 208 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southwest
# 208 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southwest
# 208 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southwest
# 208 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southwest
# 208 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southwest
# 208 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southwest
# 208 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southwest
# 208 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southwest
	step_end
