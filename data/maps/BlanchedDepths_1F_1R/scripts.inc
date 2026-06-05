BlanchedDepths_1F_1R_MapScripts::
# 2 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BlanchedDepths_1F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 11 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, BlanchedDepths_1F_1R_MapScripts_MAP_SCRIPT_ON_RESUME
# 14 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, BlanchedDepths_1F_1R_MapScripts_MAP_SCRIPT_ON_LOAD
# 20 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BlanchedDepths_1F_1R_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

BlanchedDepths_1F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	setflag FLAG_TEMP_1
# 4 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	setflag FLAG_LANDMARK_BLANCHED_DEPTHS
# 5 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 24
	goto_if_ge BlanchedDepths_1F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

BlanchedDepths_1F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 6 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 30
	goto_if_lt BlanchedDepths_1F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
	return

BlanchedDepths_1F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
# 7 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	clearflag FLAG_TEMP_1
	return

BlanchedDepths_1F_1R_MapScripts_MAP_SCRIPT_ON_RESUME:
# 12 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	setdivewarp MAP_FAR_OFF_SEA_WEST_2_UNDERWATER_1_BLANCHED_DEPTHS_ENTRANCE, 4, 3
	return

BlanchedDepths_1F_1R_MapScripts_MAP_SCRIPT_ON_LOAD:
# 15 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 18
	goto_if_eq BlanchedDepths_1F_1R_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

BlanchedDepths_1F_1R_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 16 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	setflag FLAG_SYS_SPAWN_INVISIBLE
# 17 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	setflag FLAG_SYS_DO_NOT_FADE_IN_ON_ENTER
	return

BlanchedDepths_1F_1R_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 21 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	map_script_2 VAR_EMERALBODY_RIVAL_STATE, 24, BlanchedDepths_1F_1R_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

BlanchedDepths_1F_1R_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 22 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	clearflag FLAG_SYS_SPAWN_INVISIBLE
# 23 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	clearflag FLAG_SYS_DO_NOT_FADE_IN_ON_ENTER
# 24 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	setvar VAR_0x8004, 28
# 25 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	setvar VAR_0x8005, 19
# 26 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	special TeleportCamera
# 27 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 28 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_SetVisible
# 29 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	applymovement LOCALID_CAMERA, BlanchedDepths_1F_1R_IntroCameraMovements
# 30 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	waitmovement 0
# 31 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	special RemoveCameraObject
# 32 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	setvar VAR_EMERALBODY_RIVAL_STATE, 25
	return


# 37 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
BlanchedDepths_1F_1R_IntroCameraMovements:
# 38 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	walk_diag_northwest
# 38 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	walk_diag_northwest
# 38 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	walk_diag_northwest
# 38 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	walk_diag_northwest
# 38 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	walk_diag_northwest
# 38 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	walk_diag_northwest
# 38 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	walk_diag_northwest
# 38 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	walk_diag_northwest
# 39 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	walk_left
# 39 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	walk_left
# 39 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	walk_left
# 39 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	walk_left
# 39 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	walk_left
# 39 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	walk_left
# 39 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	walk_left
# 40 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	walk_diag_southwest
# 40 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	walk_diag_southwest
# 40 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	walk_diag_southwest
# 40 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	walk_diag_southwest
# 40 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	walk_diag_southwest
# 40 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	walk_diag_southwest
# 40 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	walk_diag_southwest
# 40 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	walk_diag_southwest
	step_end

BlanchedDepths_1F_1R_EventScript_DefeatedAquaGrunt::
# 44 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	faceplayer
# 45 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	goto_if_unset FLAG_TEMP_2, BlanchedDepths_1F_1R_EventScript_DefeatedAquaGrunt_1
# 50 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	msgbox BlanchedDepths_1F_1R_EventScript_DefeatedAquaGrunt_Text_1, MSGBOX_AUTOCLOSE
	return

BlanchedDepths_1F_1R_EventScript_DefeatedAquaGrunt_1:
# 46 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	setflag FLAG_TEMP_2
# 47 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	msgbox BlanchedDepths_1F_1R_EventScript_DefeatedAquaGrunt_Text_0, MSGBOX_AUTOCLOSE
	return


BlanchedDepths_1F_1R_EventScript_AquaGrunt1::
# 55 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_BLANCHED_DEPTHS_1, BlanchedDepths_1F_1R_EventScript_AquaGrunt1_Text_0, BlanchedDepths_1F_1R_EventScript_AquaGrunt1_Text_1
# 56 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	msgbox BlanchedDepths_1F_1R_EventScript_AquaGrunt1_Text_2, MSGBOX_AUTOCLOSE
	return


BlanchedDepths_1F_1R_EventScript_AquaGrunt2::
# 60 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_BLANCHED_DEPTHS_2, BlanchedDepths_1F_1R_EventScript_AquaGrunt2_Text_0, BlanchedDepths_1F_1R_EventScript_AquaGrunt2_Text_1
# 61 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	msgbox BlanchedDepths_1F_1R_EventScript_AquaGrunt2_Text_2, MSGBOX_AUTOCLOSE
	return


BlanchedDepths_1F_1R_EventScript_DefeatedAquaGrunt_Text_0:
# 47 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	.string "Ack, another kid?!\pNo!\nLeave me alone!\pMuh- my Pokémon are already all fainted!$"

BlanchedDepths_1F_1R_EventScript_DefeatedAquaGrunt_Text_1:
# 50 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	.string "Look… just leave me alone… please?$"

BlanchedDepths_1F_1R_EventScript_AquaGrunt1_Text_0:
# 55 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	.string "Wait, I know you!$"

BlanchedDepths_1F_1R_EventScript_AquaGrunt1_Text_1:
# 55 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	.string "I would've beaten you if I'd been\nprepared!$"

BlanchedDepths_1F_1R_EventScript_AquaGrunt1_Text_2:
# 56 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	.string "Hey kid, tell me. Where are we?$"

BlanchedDepths_1F_1R_EventScript_AquaGrunt2_Text_0:
# 60 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	.string "Ack, get back!$"

BlanchedDepths_1F_1R_EventScript_AquaGrunt2_Text_1:
# 60 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	.string "First, the submarine gasses out,\nthen I was next!$"

BlanchedDepths_1F_1R_EventScript_AquaGrunt2_Text_2:
# 61 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	.string "I'll tell you if you let me go.\pWe came out here in the old sub on the\nhunt for a treasure the boss heard\labout, but we ran out of fuel near\lthis cave.$"
