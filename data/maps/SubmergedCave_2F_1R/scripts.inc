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
	compare VAR_EMERALBODY_RIVAL_STATE, 26
	goto_if_lt SubmergedCave_2F_1R_MapScripts_MAP_SCRIPT_ON_LOAD_1
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
	map_script_2 VAR_TEMP_0, 0, SubmergedCave_2F_1R_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

SubmergedCave_2F_1R_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 14 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	setvar VAR_TEMP_0, 1
# 15 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 26
	goto_if_lt SubmergedCave_2F_1R_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_1
	return

SubmergedCave_2F_1R_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_1:
# 16 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	clearflag FLAG_DONT_START_MUSIC_ON_WARP
# 17 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	clearflag FLAG_SYS_SPAWN_INVISIBLE
# 18 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	clearflag FLAG_SYS_DO_NOT_FADE_IN_ON_ENTER
# 19 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	delay 40
# 20 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	goto_if_unset FLAG_TEMP_1, SubmergedCave_2F_1R_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_3
	return

SubmergedCave_2F_1R_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_3:
# 21 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	msgbox Text_TooDarkLetsTurnBack, MSGBOX_AUTOCLOSE
# 22 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	setflag FLAG_TEMP_1
# 23 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	warp MAP_FAR_OFF_SEA_WEST_2_UNDERWATER_2, 1
	return


SubmergedCave_2F_1R_EventScript_Zaden::
# 31 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	trainerbattle_single TRAINER_ZADEN, SubmergedCave_2F_1R_EventScript_Zaden_Text_0, SubmergedCave_2F_1R_EventScript_Zaden_Text_1
# 32 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	msgbox SubmergedCave_2F_1R_EventScript_Zaden_Text_2, MSGBOX_AUTOCLOSE
	return


SubmergedCave_2F_1R_EventScript_Corvin::
# 36 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	trainerbattle_single TRAINER_CORVIN, SubmergedCave_2F_1R_EventScript_Corvin_Text_0, SubmergedCave_2F_1R_EventScript_Corvin_Text_1
# 37 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	msgbox SubmergedCave_2F_1R_EventScript_Corvin_Text_2, MSGBOX_AUTOCLOSE
	return


SubmergedCave_2F_1R_EventScript_Sable::
# 41 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	trainerbattle_single TRAINER_SABLE, SubmergedCave_2F_1R_EventScript_Sable_Text_0, SubmergedCave_2F_1R_EventScript_Sable_Text_1
# 42 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	msgbox SubmergedCave_2F_1R_EventScript_Sable_Text_2, MSGBOX_AUTOCLOSE
	return


SubmergedCave_2F_1R_EventScript_Renzo::
# 46 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	trainerbattle_single TRAINER_RENZO, SubmergedCave_2F_1R_EventScript_Renzo_Text_0, SubmergedCave_2F_1R_EventScript_Renzo_Text_1
# 47 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	msgbox SubmergedCave_2F_1R_EventScript_Renzo_Text_2, MSGBOX_AUTOCLOSE
	return


SubmergedCave_2F_1R_EventScript_Theo::
# 51 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	trainerbattle_single TRAINER_THEO, SubmergedCave_2F_1R_EventScript_Theo_Text_0, SubmergedCave_2F_1R_EventScript_Theo_Text_1
# 52 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	msgbox SubmergedCave_2F_1R_EventScript_Theo_Text_2, MSGBOX_AUTOCLOSE
	return


SubmergedCave_2F_1R_CommonEnterNonAnimDoor::
# 56 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	lock
# 57 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_SetInvisible
# 58 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	playse SE_EXIT
# 59 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	delay 20
# 60 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	goto_if_set FLAG_SYS_HIDE_FOLLOWERS, SubmergedCave_2F_1R_CommonEnterNonAnimDoor_2
SubmergedCave_2F_1R_CommonEnterNonAnimDoor_1:
# 67 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	special SpawnCameraObject
	return

SubmergedCave_2F_1R_CommonEnterNonAnimDoor_2:
# 61 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkUp
# 62 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
# 63 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_SetInvisible
# 64 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	playse SE_EXIT
# 65 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	delay 20
	goto SubmergedCave_2F_1R_CommonEnterNonAnimDoor_1


SubmergedCave_2F_1R_CommonEnterNonAnimDoorWest::
# 71 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	lock
# 72 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_SetInvisible
# 73 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	playse SE_EXIT
# 74 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	delay 20
# 75 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	goto_if_set FLAG_SYS_HIDE_FOLLOWERS, SubmergedCave_2F_1R_CommonEnterNonAnimDoorWest_2
SubmergedCave_2F_1R_CommonEnterNonAnimDoorWest_1:
# 82 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	special SpawnCameraObject
	return

SubmergedCave_2F_1R_CommonEnterNonAnimDoorWest_2:
# 76 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkLeft
# 77 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
# 78 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_SetInvisible
# 79 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	playse SE_EXIT
# 80 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	delay 20
	goto SubmergedCave_2F_1R_CommonEnterNonAnimDoorWest_1


SubmergedCave_2F_1R_CommonEnterNonAnimDoorEast::
# 86 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	lock
# 87 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_SetInvisible
# 88 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	playse SE_EXIT
# 89 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	delay 20
# 90 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	goto_if_set FLAG_SYS_HIDE_FOLLOWERS, SubmergedCave_2F_1R_CommonEnterNonAnimDoorEast_2
SubmergedCave_2F_1R_CommonEnterNonAnimDoorEast_1:
# 97 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	special SpawnCameraObject
	return

SubmergedCave_2F_1R_CommonEnterNonAnimDoorEast_2:
# 91 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkRight
# 92 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
# 93 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_SetInvisible
# 94 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	playse SE_EXIT
# 95 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	delay 20
	goto SubmergedCave_2F_1R_CommonEnterNonAnimDoorEast_1


SubmergedCave_2F_1R_CommonExitNonAnimDoor::
# 101 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 102 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_FaceDown
# 103 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
# 104 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_SetVisible
# 105 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
# 106 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 107 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
# 108 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_SetVisible
# 109 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
	return


SubmergedCave_2F_1R_CommonExitNonAnimDoorWest::
# 113 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 114 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_FaceRight
# 115 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
# 116 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_SetVisible
# 117 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
# 118 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight
# 119 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
# 120 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_SetVisible
# 121 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
	return


SubmergedCave_2F_1R_CommonExitNonAnimDoorEast::
# 125 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 126 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_FaceLeft
# 127 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
# 128 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_SetVisible
# 129 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
# 130 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkLeft
# 131 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
# 132 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_SetVisible
# 133 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
	return


SubmergedCave_2F_1R_Warp1To2::
# 138 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	call SubmergedCave_2F_1R_CommonEnterNonAnimDoor
# 139 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	hidefollower
# 140 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement LOCALID_CAMERA, SubmergedCave_2F_1R_Movement1To2
# 141 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
# 142 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	special RemoveCameraObject
# 143 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	setobjectxy LOCALID_PLAYER, 0, 12
# 144 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	setobjectxy OBJ_EVENT_ID_NPC_FOLLOWER, 0, 12
# 145 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	call SubmergedCave_2F_1R_CommonExitNonAnimDoorWest
# 146 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	release
	return


SubmergedCave_2F_1R_Warp2To1::
# 150 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	call SubmergedCave_2F_1R_CommonEnterNonAnimDoorWest
# 151 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement LOCALID_CAMERA, SubmergedCave_2F_1R_Movement2To1
# 152 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
# 153 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	special RemoveCameraObject
# 154 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	setobjectxy LOCALID_PLAYER, 35, 15
# 155 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	setobjectxy OBJ_EVENT_ID_NPC_FOLLOWER, 35, 15
# 156 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	call SubmergedCave_2F_1R_CommonExitNonAnimDoor
# 157 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	release
	return


# 160 "data/maps/SubmergedCave_2F_1R/scripts.pory"
SubmergedCave_2F_1R_Movement1To2:
# 161 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northwest
# 161 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northwest
# 161 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northwest
# 162 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 162 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 162 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 162 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 162 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 162 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 162 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 162 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 162 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 162 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 162 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 162 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 162 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 162 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 162 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 162 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 162 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 162 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 162 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 162 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 162 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 162 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 162 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 162 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 162 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 162 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 162 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 162 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 162 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 162 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 162 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 162 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
	step_end

# 165 "data/maps/SubmergedCave_2F_1R/scripts.pory"
SubmergedCave_2F_1R_Movement2To1:
# 166 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 166 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 166 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 166 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 166 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 166 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 166 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 166 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 166 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 166 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 166 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 166 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 166 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 166 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 166 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 166 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 166 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 166 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 166 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 166 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 166 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 166 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 166 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 166 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 166 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 166 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 166 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 166 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 166 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 166 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 166 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 166 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 167 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southeast
# 167 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southeast
# 167 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southeast
	step_end

SubmergedCave_2F_1R_Warp2To3::
# 171 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	call SubmergedCave_2F_1R_CommonEnterNonAnimDoorWest
# 172 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement LOCALID_CAMERA, SubmergedCave_2F_1R_Movement2To3
# 173 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
# 174 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	special RemoveCameraObject
# 175 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	setobjectxy LOCALID_PLAYER, 41, 10
# 176 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	setobjectxy OBJ_EVENT_ID_NPC_FOLLOWER, 41, 10
# 177 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	call SubmergedCave_2F_1R_CommonExitNonAnimDoorEast
# 178 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	release
	return


SubmergedCave_2F_1R_Warp3To2::
# 182 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	call SubmergedCave_2F_1R_CommonEnterNonAnimDoorEast
# 183 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	hidefollower
# 184 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement LOCALID_CAMERA, SubmergedCave_2F_1R_Movement3To2
# 185 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
# 186 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	special RemoveCameraObject
# 187 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	setobjectxy LOCALID_PLAYER, 11, 21
# 188 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	setobjectxy OBJ_EVENT_ID_NPC_FOLLOWER, 11, 21
# 189 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	call SubmergedCave_2F_1R_CommonExitNonAnimDoorWest
# 190 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	release
	return


# 193 "data/maps/SubmergedCave_2F_1R/scripts.pory"
SubmergedCave_2F_1R_Movement2To3:
# 194 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 194 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 194 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 194 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 194 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 194 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 194 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 194 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 194 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 194 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 194 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 194 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 194 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 194 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 194 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 194 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 194 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 194 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 194 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 195 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northeast
# 195 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northeast
# 195 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northeast
# 195 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northeast
# 195 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northeast
# 195 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northeast
# 195 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northeast
# 195 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northeast
# 195 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northeast
# 195 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northeast
# 195 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northeast
	step_end

# 198 "data/maps/SubmergedCave_2F_1R/scripts.pory"
SubmergedCave_2F_1R_Movement3To2:
# 199 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southwest
# 199 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southwest
# 199 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southwest
# 199 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southwest
# 199 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southwest
# 199 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southwest
# 199 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southwest
# 199 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southwest
# 199 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southwest
# 199 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southwest
# 199 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southwest
# 200 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 200 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 200 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 200 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 200 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 200 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 200 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 200 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 200 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 200 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 200 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 200 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 200 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 200 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 200 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 200 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 200 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 200 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 200 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
	step_end

SubmergedCave_2F_1R_Warp3To4::
# 204 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	call SubmergedCave_2F_1R_CommonEnterNonAnimDoorWest
# 205 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement LOCALID_CAMERA, SubmergedCave_2F_1R_Movement3To4
# 206 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
# 207 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	special RemoveCameraObject
# 208 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	setobjectxy LOCALID_PLAYER, 40, 20
# 209 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	setobjectxy OBJ_EVENT_ID_NPC_FOLLOWER, 40, 20
# 210 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	call SubmergedCave_2F_1R_CommonExitNonAnimDoorEast
# 211 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	release
	return


SubmergedCave_2F_1R_Warp4To3::
# 215 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	call SubmergedCave_2F_1R_CommonEnterNonAnimDoorEast
# 216 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	hidefollower
# 217 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement LOCALID_CAMERA, SubmergedCave_2F_1R_Movement4To3
# 218 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
# 219 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	special RemoveCameraObject
# 220 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	setobjectxy LOCALID_PLAYER, 20, 17
# 221 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	setobjectxy OBJ_EVENT_ID_NPC_FOLLOWER, 20, 17
# 222 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	call SubmergedCave_2F_1R_CommonExitNonAnimDoorWest
# 223 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	release
	return


# 226 "data/maps/SubmergedCave_2F_1R/scripts.pory"
SubmergedCave_2F_1R_Movement3To4:
# 227 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 227 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 227 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 227 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 227 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 227 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 227 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 227 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 227 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 227 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 227 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 227 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 227 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 227 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 227 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 227 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 227 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_right
# 228 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southeast
# 228 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southeast
# 228 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southeast
	step_end

# 231 "data/maps/SubmergedCave_2F_1R/scripts.pory"
SubmergedCave_2F_1R_Movement4To3:
# 232 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northwest
# 232 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northwest
# 232 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northwest
# 233 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 233 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 233 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 233 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 233 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 233 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 233 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 233 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 233 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 233 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 233 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 233 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 233 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 233 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 233 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 233 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
# 233 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_faster_left
	step_end

SubmergedCave_2F_1R_Warp4To5::
# 237 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	call SubmergedCave_2F_1R_CommonEnterNonAnimDoor
# 238 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	hidefollower
# 239 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement LOCALID_CAMERA, SubmergedCave_2F_1R_Movement4To5
# 240 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
# 241 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	special RemoveCameraObject
# 242 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	setobjectxy LOCALID_PLAYER, 24, 4
# 243 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	setobjectxy OBJ_EVENT_ID_NPC_FOLLOWER, 24, 4
# 244 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	call SubmergedCave_2F_1R_CommonExitNonAnimDoorEast
# 245 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	release
	return


SubmergedCave_2F_1R_Warp5To4::
# 249 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	call SubmergedCave_2F_1R_CommonEnterNonAnimDoorEast
# 250 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	hidefollower
# 251 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	applymovement LOCALID_CAMERA, SubmergedCave_2F_1R_Movement5To4
# 252 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	waitmovement 0
# 253 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	special RemoveCameraObject
# 254 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	setobjectxy LOCALID_PLAYER, 15, 13
# 255 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	setobjectxy OBJ_EVENT_ID_NPC_FOLLOWER, 15, 13
# 256 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	call SubmergedCave_2F_1R_CommonExitNonAnimDoor
# 257 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	release
	return


# 260 "data/maps/SubmergedCave_2F_1R/scripts.pory"
SubmergedCave_2F_1R_Movement4To5:
# 261 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northeast
# 261 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northeast
# 261 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northeast
# 261 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northeast
# 261 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northeast
# 261 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northeast
# 261 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northeast
# 261 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northeast
# 261 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_northeast
	step_end

# 264 "data/maps/SubmergedCave_2F_1R/scripts.pory"
SubmergedCave_2F_1R_Movement5To4:
# 265 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southwest
# 265 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southwest
# 265 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southwest
# 265 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southwest
# 265 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southwest
# 265 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southwest
# 265 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southwest
# 265 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southwest
# 265 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	walk_fast_diag_southwest
	step_end

SubmergedCave_2F_1R_EventScript_Zaden_Text_0:
# 31 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	.string "Two of you, huh?\pI can take this challenge!$"

SubmergedCave_2F_1R_EventScript_Zaden_Text_1:
# 31 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	.string "Well… uh… of course I'd lose in this\nsituation…$"

SubmergedCave_2F_1R_EventScript_Zaden_Text_2:
# 32 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	.string "I guess I should have stuck to just\none opponent.$"

SubmergedCave_2F_1R_EventScript_Corvin_Text_0:
# 36 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	.string "Join me for an oceanic battle!$"

SubmergedCave_2F_1R_EventScript_Corvin_Text_1:
# 36 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	.string "I concede!$"

SubmergedCave_2F_1R_EventScript_Corvin_Text_2:
# 37 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	.string "Even the bottom of the ocean is no\nmatch for a true sailor!$"

SubmergedCave_2F_1R_EventScript_Sable_Text_0:
# 41 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	.string "Help me test out a new strategy with\nthis new species!$"

SubmergedCave_2F_1R_EventScript_Sable_Text_1:
# 41 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	.string "I see…$"

SubmergedCave_2F_1R_EventScript_Sable_Text_2:
# 42 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	.string "These new Pokémon open up so many\nnew strategies for us.$"

SubmergedCave_2F_1R_EventScript_Renzo_Text_0:
# 46 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	.string "I'm still looking for a new catch,\nbut I'll test out my team on you!$"

SubmergedCave_2F_1R_EventScript_Renzo_Text_1:
# 46 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	.string "Oh, I definitely need a new addition\nto compete!$"

SubmergedCave_2F_1R_EventScript_Renzo_Text_2:
# 47 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	.string "Do you think I could cast my line out\nof the exit and catch something?$"

SubmergedCave_2F_1R_EventScript_Theo_Text_0:
# 51 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	.string "A battle would give me an excellent break from my research.$"

SubmergedCave_2F_1R_EventScript_Theo_Text_1:
# 51 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	.string "Time to get back to work!$"

SubmergedCave_2F_1R_EventScript_Theo_Text_2:
# 52 "data/maps/SubmergedCave_2F_1R/scripts.pory"
	.string "I believe the crystals on the surface\nmay be related to those down here.$"
