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


SubmergedCave_2F_1R_EventScript_Zaden::
# 28 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	trainerbattle_single TRAINER_ZADEN, SubmergedCave_2F_1R_EventScript_Zaden_Text_0, SubmergedCave_2F_1R_EventScript_Zaden_Text_1
# 29 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	msgbox SubmergedCave_2F_1R_EventScript_Zaden_Text_2, MSGBOX_AUTOCLOSE
	return


SubmergedCave_2F_1R_EventScript_Corvin::
# 33 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	trainerbattle_single TRAINER_CORVIN, SubmergedCave_2F_1R_EventScript_Corvin_Text_0, SubmergedCave_2F_1R_EventScript_Corvin_Text_1
# 34 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	msgbox SubmergedCave_2F_1R_EventScript_Corvin_Text_2, MSGBOX_AUTOCLOSE
	return


SubmergedCave_2F_1R_EventScript_Sable::
# 38 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	trainerbattle_single TRAINER_SABLE, SubmergedCave_2F_1R_EventScript_Sable_Text_0, SubmergedCave_2F_1R_EventScript_Sable_Text_1
# 39 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	msgbox SubmergedCave_2F_1R_EventScript_Sable_Text_2, MSGBOX_AUTOCLOSE
	return


SubmergedCave_2F_1R_EventScript_Renzo::
# 43 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	trainerbattle_single TRAINER_RENZO, SubmergedCave_2F_1R_EventScript_Renzo_Text_0, SubmergedCave_2F_1R_EventScript_Renzo_Text_1
# 44 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	msgbox SubmergedCave_2F_1R_EventScript_Renzo_Text_2, MSGBOX_AUTOCLOSE
	return


SubmergedCave_2F_1R_EventScript_Theo::
# 48 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	trainerbattle_single TRAINER_THEO, SubmergedCave_2F_1R_EventScript_Theo_Text_0, SubmergedCave_2F_1R_EventScript_Theo_Text_1
# 49 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	msgbox SubmergedCave_2F_1R_EventScript_Theo_Text_2, MSGBOX_AUTOCLOSE
	return


SubmergedCave_2F_1R_CommonEnterNonAnimDoor::
# 53 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	lock
# 54 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_SetInvisible
# 55 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	playse SE_EXIT
# 56 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	delay 20
# 57 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	goto_if_set FLAG_SYS_HIDE_FOLLOWERS, SubmergedCave_2F_1R_CommonEnterNonAnimDoor_2
SubmergedCave_2F_1R_CommonEnterNonAnimDoor_1:
# 64 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	special SpawnCameraObject
	return

SubmergedCave_2F_1R_CommonEnterNonAnimDoor_2:
# 58 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkUp
# 59 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
# 60 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_SetInvisible
# 61 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	playse SE_EXIT
# 62 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	delay 20
	goto SubmergedCave_2F_1R_CommonEnterNonAnimDoor_1


SubmergedCave_2F_1R_CommonEnterNonAnimDoorWest::
# 68 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	lock
# 69 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_SetInvisible
# 70 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	playse SE_EXIT
# 71 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	delay 20
# 72 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	goto_if_set FLAG_SYS_HIDE_FOLLOWERS, SubmergedCave_2F_1R_CommonEnterNonAnimDoorWest_2
SubmergedCave_2F_1R_CommonEnterNonAnimDoorWest_1:
# 79 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	special SpawnCameraObject
	return

SubmergedCave_2F_1R_CommonEnterNonAnimDoorWest_2:
# 73 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkLeft
# 74 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
# 75 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_SetInvisible
# 76 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	playse SE_EXIT
# 77 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	delay 20
	goto SubmergedCave_2F_1R_CommonEnterNonAnimDoorWest_1


SubmergedCave_2F_1R_CommonEnterNonAnimDoorEast::
# 83 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	lock
# 84 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_SetInvisible
# 85 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	playse SE_EXIT
# 86 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	delay 20
# 87 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	goto_if_set FLAG_SYS_HIDE_FOLLOWERS, SubmergedCave_2F_1R_CommonEnterNonAnimDoorEast_2
SubmergedCave_2F_1R_CommonEnterNonAnimDoorEast_1:
# 94 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	special SpawnCameraObject
	return

SubmergedCave_2F_1R_CommonEnterNonAnimDoorEast_2:
# 88 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkRight
# 89 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
# 90 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_SetInvisible
# 91 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	playse SE_EXIT
# 92 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	delay 20
	goto SubmergedCave_2F_1R_CommonEnterNonAnimDoorEast_1


SubmergedCave_2F_1R_CommonExitNonAnimDoor::
# 98 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 99 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_FaceDown
# 100 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
# 101 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_SetVisible
# 102 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
# 103 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 104 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
# 105 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_SetVisible
# 106 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
	return


SubmergedCave_2F_1R_CommonExitNonAnimDoorWest::
# 110 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 111 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_FaceRight
# 112 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
# 113 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_SetVisible
# 114 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
# 115 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight
# 116 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
# 117 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_SetVisible
# 118 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
	return


SubmergedCave_2F_1R_CommonExitNonAnimDoorEast::
# 122 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 123 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_FaceLeft
# 124 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
# 125 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_SetVisible
# 126 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
# 127 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkLeft
# 128 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
# 129 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_SetVisible
# 130 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
	return


SubmergedCave_2F_1R_Warp1To2::
# 135 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	call SubmergedCave_2F_1R_CommonEnterNonAnimDoor
# 136 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	hidefollower
# 137 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement LOCALID_CAMERA, SubmergedCave_2F_1R_Movement1To2
# 138 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
# 139 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	special RemoveCameraObject
# 140 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	setobjectxy LOCALID_PLAYER, 0, 12
# 141 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	setobjectxy OBJ_EVENT_ID_NPC_FOLLOWER, 0, 12
# 142 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	call SubmergedCave_2F_1R_CommonExitNonAnimDoorWest
# 143 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	release
	return


SubmergedCave_2F_1R_Warp2To1::
# 147 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	call SubmergedCave_2F_1R_CommonEnterNonAnimDoorWest
# 148 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement LOCALID_CAMERA, SubmergedCave_2F_1R_Movement2To1
# 149 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
# 150 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	special RemoveCameraObject
# 151 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	setobjectxy LOCALID_PLAYER, 35, 15
# 152 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	setobjectxy OBJ_EVENT_ID_NPC_FOLLOWER, 35, 15
# 153 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	call SubmergedCave_2F_1R_CommonExitNonAnimDoor
# 154 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	release
	return


# 157 "data/maps/SubmergedCave_2F_1R/scripts.pory"
SubmergedCave_2F_1R_Movement1To2:
# 158 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northwest
# 158 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northwest
# 158 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northwest
# 159 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 159 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 159 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 159 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 159 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 159 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 159 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 159 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 159 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 159 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 159 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 159 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 159 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 159 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 159 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 159 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 159 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 159 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 159 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 159 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 159 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 159 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 159 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 159 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 159 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 159 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 159 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 159 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 159 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 159 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 159 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 159 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
	step_end

# 162 "data/maps/SubmergedCave_2F_1R/scripts.pory"
SubmergedCave_2F_1R_Movement2To1:
# 163 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 163 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 163 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 163 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 163 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 163 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 163 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 163 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 163 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 163 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 163 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 163 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 163 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 163 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 163 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 163 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 163 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 163 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 163 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 163 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 163 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 163 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 163 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 163 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 163 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 163 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 163 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 163 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 163 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 163 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 163 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 163 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 164 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southeast
# 164 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southeast
# 164 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southeast
	step_end

SubmergedCave_2F_1R_Warp2To3::
# 168 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	call SubmergedCave_2F_1R_CommonEnterNonAnimDoorWest
# 169 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement LOCALID_CAMERA, SubmergedCave_2F_1R_Movement2To3
# 170 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
# 171 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	special RemoveCameraObject
# 172 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	setobjectxy LOCALID_PLAYER, 41, 10
# 173 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	setobjectxy OBJ_EVENT_ID_NPC_FOLLOWER, 41, 10
# 174 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	call SubmergedCave_2F_1R_CommonExitNonAnimDoorEast
# 175 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	release
	return


SubmergedCave_2F_1R_Warp3To2::
# 179 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	call SubmergedCave_2F_1R_CommonEnterNonAnimDoorEast
# 180 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	hidefollower
# 181 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement LOCALID_CAMERA, SubmergedCave_2F_1R_Movement3To2
# 182 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
# 183 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	special RemoveCameraObject
# 184 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	setobjectxy LOCALID_PLAYER, 11, 21
# 185 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	setobjectxy OBJ_EVENT_ID_NPC_FOLLOWER, 11, 21
# 186 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	call SubmergedCave_2F_1R_CommonExitNonAnimDoorWest
# 187 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	release
	return


# 190 "data/maps/SubmergedCave_2F_1R/scripts.pory"
SubmergedCave_2F_1R_Movement2To3:
# 191 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 191 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 191 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 191 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 191 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 191 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 191 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 191 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 191 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 191 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 191 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 191 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 191 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 191 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 191 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 191 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 191 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 191 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 191 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 192 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northeast
# 192 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northeast
# 192 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northeast
# 192 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northeast
# 192 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northeast
# 192 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northeast
# 192 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northeast
# 192 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northeast
# 192 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northeast
# 192 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northeast
# 192 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northeast
	step_end

# 195 "data/maps/SubmergedCave_2F_1R/scripts.pory"
SubmergedCave_2F_1R_Movement3To2:
# 196 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southwest
# 196 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southwest
# 196 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southwest
# 196 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southwest
# 196 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southwest
# 196 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southwest
# 196 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southwest
# 196 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southwest
# 196 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southwest
# 196 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southwest
# 196 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southwest
# 197 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 197 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 197 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 197 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 197 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 197 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 197 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 197 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 197 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 197 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 197 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 197 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 197 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 197 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 197 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 197 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 197 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 197 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 197 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
	step_end

SubmergedCave_2F_1R_Warp3To4::
# 201 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	call SubmergedCave_2F_1R_CommonEnterNonAnimDoorWest
# 202 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement LOCALID_CAMERA, SubmergedCave_2F_1R_Movement3To4
# 203 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
# 204 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	special RemoveCameraObject
# 205 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	setobjectxy LOCALID_PLAYER, 40, 20
# 206 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	setobjectxy OBJ_EVENT_ID_NPC_FOLLOWER, 40, 20
# 207 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	call SubmergedCave_2F_1R_CommonExitNonAnimDoorEast
# 208 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	release
	return


SubmergedCave_2F_1R_Warp4To3::
# 212 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	call SubmergedCave_2F_1R_CommonEnterNonAnimDoorEast
# 213 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	hidefollower
# 214 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement LOCALID_CAMERA, SubmergedCave_2F_1R_Movement4To3
# 215 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
# 216 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	special RemoveCameraObject
# 217 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	setobjectxy LOCALID_PLAYER, 20, 17
# 218 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	setobjectxy OBJ_EVENT_ID_NPC_FOLLOWER, 20, 17
# 219 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	call SubmergedCave_2F_1R_CommonExitNonAnimDoorWest
# 220 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	release
	return


# 223 "data/maps/SubmergedCave_2F_1R/scripts.pory"
SubmergedCave_2F_1R_Movement3To4:
# 224 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 224 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 224 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 224 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 224 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 224 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 224 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 224 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 224 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 224 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 224 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 224 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 224 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 224 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 224 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 224 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 224 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 225 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southeast
# 225 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southeast
# 225 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southeast
	step_end

# 228 "data/maps/SubmergedCave_2F_1R/scripts.pory"
SubmergedCave_2F_1R_Movement4To3:
# 229 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northwest
# 229 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northwest
# 229 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northwest
# 230 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 230 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 230 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 230 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 230 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 230 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 230 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 230 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 230 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 230 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 230 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 230 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 230 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 230 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 230 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 230 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 230 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
	step_end

SubmergedCave_2F_1R_Warp4To5::
# 234 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	call SubmergedCave_2F_1R_CommonEnterNonAnimDoor
# 235 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	hidefollower
# 236 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement LOCALID_CAMERA, SubmergedCave_2F_1R_Movement4To5
# 237 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
# 238 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	special RemoveCameraObject
# 239 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	setobjectxy LOCALID_PLAYER, 24, 4
# 240 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	setobjectxy OBJ_EVENT_ID_NPC_FOLLOWER, 24, 4
# 241 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	call SubmergedCave_2F_1R_CommonExitNonAnimDoorEast
# 242 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	release
	return


SubmergedCave_2F_1R_Warp5To4::
# 246 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	call SubmergedCave_2F_1R_CommonEnterNonAnimDoorEast
# 247 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	hidefollower
# 248 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement LOCALID_CAMERA, SubmergedCave_2F_1R_Movement5To4
# 249 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
# 250 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	special RemoveCameraObject
# 251 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	setobjectxy LOCALID_PLAYER, 15, 13
# 252 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	setobjectxy OBJ_EVENT_ID_NPC_FOLLOWER, 15, 13
# 253 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	call SubmergedCave_2F_1R_CommonExitNonAnimDoor
# 254 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	release
	return


# 257 "data/maps/SubmergedCave_2F_1R/scripts.pory"
SubmergedCave_2F_1R_Movement4To5:
# 258 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northeast
# 258 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northeast
# 258 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northeast
# 258 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northeast
# 258 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northeast
# 258 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northeast
# 258 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northeast
# 258 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northeast
# 258 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northeast
	step_end

# 261 "data/maps/SubmergedCave_2F_1R/scripts.pory"
SubmergedCave_2F_1R_Movement5To4:
# 262 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southwest
# 262 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southwest
# 262 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southwest
# 262 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southwest
# 262 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southwest
# 262 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southwest
# 262 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southwest
# 262 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southwest
# 262 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southwest
	step_end

SubmergedCave_2F_1R_EventScript_Zaden_Text_0:
# 28 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	.string "Two of you, huh?\pI can take this challenge!$"

SubmergedCave_2F_1R_EventScript_Zaden_Text_1:
# 28 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	.string "Well… uh… of course I'd lose in this\nsituation…$"

SubmergedCave_2F_1R_EventScript_Zaden_Text_2:
# 29 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	.string "I guess I should have stuck to just\none opponent.$"

SubmergedCave_2F_1R_EventScript_Corvin_Text_0:
# 33 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	.string "Join me for an oceanic battle!$"

SubmergedCave_2F_1R_EventScript_Corvin_Text_1:
# 33 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	.string "I concede!$"

SubmergedCave_2F_1R_EventScript_Corvin_Text_2:
# 34 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	.string "Even the bottom of the ocean is no\nmatch for a true sailor!$"

SubmergedCave_2F_1R_EventScript_Sable_Text_0:
# 38 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	.string "Help me test out a new strategy with\nthis new species!$"

SubmergedCave_2F_1R_EventScript_Sable_Text_1:
# 38 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	.string "I see…$"

SubmergedCave_2F_1R_EventScript_Sable_Text_2:
# 39 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	.string "These new Pokémon open up so many\nnew strategies for us.$"

SubmergedCave_2F_1R_EventScript_Renzo_Text_0:
# 43 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	.string "I'm still looking for a new catch,\nbut I'll test out my team on you!$"

SubmergedCave_2F_1R_EventScript_Renzo_Text_1:
# 43 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	.string "Oh, I definitely need a new addition\nto compete!$"

SubmergedCave_2F_1R_EventScript_Renzo_Text_2:
# 44 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	.string "Do you think I could cast my line out\nof the exit and catch something?$"

SubmergedCave_2F_1R_EventScript_Theo_Text_0:
# 48 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	.string "A battle would give me an excellent break from my research.$"

SubmergedCave_2F_1R_EventScript_Theo_Text_1:
# 48 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	.string "Time to get back to work!$"

SubmergedCave_2F_1R_EventScript_Theo_Text_2:
# 49 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	.string "I believe the crystals on the surface\nmay be related to those down here.$"
