BlanchedDepths_1F_1R_MapScripts::
# 2 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BlanchedDepths_1F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 5 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, BlanchedDepths_1F_1R_MapScripts_MAP_SCRIPT_ON_RESUME
# 8 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, BlanchedDepths_1F_1R_MapScripts_MAP_SCRIPT_ON_LOAD
# 14 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BlanchedDepths_1F_1R_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

BlanchedDepths_1F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	setflag FLAG_LANDMARK_BLANCHED_DEPTHS
	return

BlanchedDepths_1F_1R_MapScripts_MAP_SCRIPT_ON_RESUME:
# 6 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	setdivewarp MAP_FAR_OFF_SEA_WEST_2_UNDERWATER_1_BLANCHED_DEPTHS_ENTRANCE, 4, 3
	return

BlanchedDepths_1F_1R_MapScripts_MAP_SCRIPT_ON_LOAD:
# 9 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 18
	goto_if_eq BlanchedDepths_1F_1R_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

BlanchedDepths_1F_1R_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 10 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	setflag FLAG_SYS_SPAWN_INVISIBLE
# 11 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	setflag FLAG_SYS_DO_NOT_FADE_IN_ON_ENTER
	return

BlanchedDepths_1F_1R_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 15 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	map_script_2 VAR_EMERALBODY_RIVAL_STATE, 18, BlanchedDepths_1F_1R_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

BlanchedDepths_1F_1R_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 16 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	clearflag FLAG_SYS_SPAWN_INVISIBLE
# 17 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	clearflag FLAG_SYS_DO_NOT_FADE_IN_ON_ENTER
# 18 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	setvar VAR_0x8004, 28
# 19 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	setvar VAR_0x8005, 19
# 20 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	special TeleportCamera
# 21 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 22 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_SetVisible
# 23 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	applymovement LOCALID_CAMERA, BlanchedDepths_1F_1R_IntroCameraMovements
# 24 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	waitmovement 0
# 25 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	special RemoveCameraObject
# 26 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	setvar VAR_EMERALBODY_RIVAL_STATE, 19
	return


# 31 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
BlanchedDepths_1F_1R_IntroCameraMovements:
# 32 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	walk_diag_northwest
# 32 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	walk_diag_northwest
# 32 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	walk_diag_northwest
# 32 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	walk_diag_northwest
# 32 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	walk_diag_northwest
# 32 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	walk_diag_northwest
# 32 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	walk_diag_northwest
# 32 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	walk_diag_northwest
# 33 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	walk_left
# 33 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	walk_left
# 33 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	walk_left
# 33 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	walk_left
# 33 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	walk_left
# 33 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	walk_left
# 33 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	walk_left
# 34 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	walk_diag_southwest
# 34 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	walk_diag_southwest
# 34 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	walk_diag_southwest
# 34 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	walk_diag_southwest
# 34 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	walk_diag_southwest
# 34 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	walk_diag_southwest
# 34 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	walk_diag_southwest
# 34 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	walk_diag_southwest
	step_end

BlanchedDepths_1F_1R_EventScript_DefeatedAquaGrunt::
# 38 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	faceplayer
# 39 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	goto_if_unset FLAG_TEMP_1, BlanchedDepths_1F_1R_EventScript_DefeatedAquaGrunt_1
# 44 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	msgbox BlanchedDepths_1F_1R_EventScript_DefeatedAquaGrunt_Text_1, MSGBOX_AUTOCLOSE
	return

BlanchedDepths_1F_1R_EventScript_DefeatedAquaGrunt_1:
# 40 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	setflag FLAG_TEMP_1
# 41 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	msgbox BlanchedDepths_1F_1R_EventScript_DefeatedAquaGrunt_Text_0, MSGBOX_AUTOCLOSE
	return


BlanchedDepths_1F_1R_EventScript_AquaGrunt1::
# 49 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_BLANCHED_DEPTHS_1, BlanchedDepths_1F_1R_EventScript_AquaGrunt1_Text_0, BlanchedDepths_1F_1R_EventScript_AquaGrunt1_Text_1
# 50 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	msgbox BlanchedDepths_1F_1R_EventScript_AquaGrunt1_Text_2, MSGBOX_AUTOCLOSE
	return


BlanchedDepths_1F_1R_EventScript_AquaGrunt2::
# 54 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_BLANCHED_DEPTHS_2, BlanchedDepths_1F_1R_EventScript_AquaGrunt2_Text_0, BlanchedDepths_1F_1R_EventScript_AquaGrunt2_Text_1
# 55 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	msgbox BlanchedDepths_1F_1R_EventScript_AquaGrunt2_Text_2, MSGBOX_AUTOCLOSE
	return


BlanchedDepths_1F_1R_EventScript_DefeatedAquaGrunt_Text_0:
# 41 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	.string "Ack, another kid?!\pNo!\nLeave me alone!\pMuh- my Pokémon are already all fainted!$"

BlanchedDepths_1F_1R_EventScript_DefeatedAquaGrunt_Text_1:
# 44 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	.string "Look… just leave me alone… please?$"

BlanchedDepths_1F_1R_EventScript_AquaGrunt1_Text_0:
# 49 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	.string "Wait, I know you!$"

BlanchedDepths_1F_1R_EventScript_AquaGrunt1_Text_1:
# 49 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	.string "I would've beaten you if I'd been\nprepared!$"

BlanchedDepths_1F_1R_EventScript_AquaGrunt1_Text_2:
# 50 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	.string "Hey kid, tell me. Where are we?$"

BlanchedDepths_1F_1R_EventScript_AquaGrunt2_Text_0:
# 54 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	.string "Ack, get back!$"

BlanchedDepths_1F_1R_EventScript_AquaGrunt2_Text_1:
# 54 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	.string "First, the submarine gasses out,\nthen I was next!$"

BlanchedDepths_1F_1R_EventScript_AquaGrunt2_Text_2:
# 55 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	.string "I'll tell you if you let me go.\pWe came out here in the old sub on the\nhunt for a treasure the boss heard\labout, but we ran out of fuel near\lthis cave.$"
