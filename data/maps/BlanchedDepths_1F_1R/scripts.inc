BlanchedDepths_1F_1R_MapScripts::
# 2 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, BlanchedDepths_1F_1R_MapScripts_MAP_SCRIPT_ON_RESUME
# 5 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, BlanchedDepths_1F_1R_MapScripts_MAP_SCRIPT_ON_LOAD
# 11 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BlanchedDepths_1F_1R_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

BlanchedDepths_1F_1R_MapScripts_MAP_SCRIPT_ON_RESUME:
# 3 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	setdivewarp MAP_FAR_OFF_SEA_WEST_2_UNDERWATER_1_BLANCHED_DEPTHS_ENTRANCE, 4, 3
	return

BlanchedDepths_1F_1R_MapScripts_MAP_SCRIPT_ON_LOAD:
# 6 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 18
	goto_if_eq BlanchedDepths_1F_1R_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

BlanchedDepths_1F_1R_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 7 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	setflag FLAG_SYS_SPAWN_INVISIBLE
# 8 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	setflag FLAG_SYS_DO_NOT_FADE_IN_ON_ENTER
	return

BlanchedDepths_1F_1R_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 12 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	map_script_2 VAR_EMERALBODY_RIVAL_STATE, 18, BlanchedDepths_1F_1R_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

BlanchedDepths_1F_1R_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 13 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	clearflag FLAG_SYS_SPAWN_INVISIBLE
# 14 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	clearflag FLAG_SYS_DO_NOT_FADE_IN_ON_ENTER
# 15 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	setvar VAR_0x8004, 28
# 16 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	setvar VAR_0x8005, 19
# 17 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	special TeleportCamera
# 18 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 19 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_SetVisible
# 20 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	applymovement LOCALID_CAMERA, BlanchedDepths_1F_1R_IntroCameraMovements
# 21 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	waitmovement 0
# 22 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	special RemoveCameraObject
# 23 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	setvar VAR_EMERALBODY_RIVAL_STATE, 19
	return


# 28 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
BlanchedDepths_1F_1R_IntroCameraMovements:
# 29 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	walk_diag_northwest
# 29 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	walk_diag_northwest
# 29 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	walk_diag_northwest
# 29 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	walk_diag_northwest
# 29 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	walk_diag_northwest
# 29 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	walk_diag_northwest
# 29 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	walk_diag_northwest
# 29 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	walk_diag_northwest
# 30 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	walk_left
# 30 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	walk_left
# 30 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	walk_left
# 30 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	walk_left
# 30 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	walk_left
# 30 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	walk_left
# 30 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	walk_left
# 31 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	walk_diag_southwest
# 31 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	walk_diag_southwest
# 31 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	walk_diag_southwest
# 31 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	walk_diag_southwest
# 31 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	walk_diag_southwest
# 31 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	walk_diag_southwest
# 31 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	walk_diag_southwest
# 31 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	walk_diag_southwest
	step_end
