SubmergedCave_1F_1R_MapScripts::
# 2 "data/maps/SubmergedCave_1F_1R/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SubmergedCave_1F_1R_MapScripts_MAP_SCRIPT_ON_LOAD
# 9 "data/maps/SubmergedCave_1F_1R/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SubmergedCave_1F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 12 "data/maps/SubmergedCave_1F_1R/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SubmergedCave_1F_1R_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

SubmergedCave_1F_1R_MapScripts_MAP_SCRIPT_ON_LOAD:
# 3 "data/maps/SubmergedCave_1F_1R/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 26
	goto_if_lt SubmergedCave_1F_1R_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

SubmergedCave_1F_1R_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 4 "data/maps/SubmergedCave_1F_1R/scripts.pory"
	setflag FLAG_DONT_START_MUSIC_ON_WARP
# 5 "data/maps/SubmergedCave_1F_1R/scripts.pory"
	setflag FLAG_SYS_SPAWN_INVISIBLE
# 6 "data/maps/SubmergedCave_1F_1R/scripts.pory"
	setflag FLAG_SYS_DO_NOT_FADE_IN_ON_ENTER
	return

SubmergedCave_1F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 10 "data/maps/SubmergedCave_1F_1R/scripts.pory"
	setflag FLAG_LANDMARK_SUBMERGED_CAVE
	return

SubmergedCave_1F_1R_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 13 "data/maps/SubmergedCave_1F_1R/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, SubmergedCave_1F_1R_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

SubmergedCave_1F_1R_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 14 "data/maps/SubmergedCave_1F_1R/scripts.pory"
	setvar VAR_TEMP_0, 1
# 15 "data/maps/SubmergedCave_1F_1R/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 26
	goto_if_lt SubmergedCave_1F_1R_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_1
	return

SubmergedCave_1F_1R_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_1:
# 16 "data/maps/SubmergedCave_1F_1R/scripts.pory"
	clearflag FLAG_DONT_START_MUSIC_ON_WARP
# 17 "data/maps/SubmergedCave_1F_1R/scripts.pory"
	clearflag FLAG_SYS_SPAWN_INVISIBLE
# 18 "data/maps/SubmergedCave_1F_1R/scripts.pory"
	clearflag FLAG_SYS_DO_NOT_FADE_IN_ON_ENTER
# 19 "data/maps/SubmergedCave_1F_1R/scripts.pory"
	delay 40
# 20 "data/maps/SubmergedCave_1F_1R/scripts.pory"
	goto_if_unset FLAG_TEMP_1, SubmergedCave_1F_1R_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_3
	return

SubmergedCave_1F_1R_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_3:
# 21 "data/maps/SubmergedCave_1F_1R/scripts.pory"
	msgbox Text_TooDarkLetsTurnBack, MSGBOX_AUTOCLOSE
# 22 "data/maps/SubmergedCave_1F_1R/scripts.pory"
	setflag FLAG_TEMP_1
# 23 "data/maps/SubmergedCave_1F_1R/scripts.pory"
	warp MAP_FAR_OFF_SEA_WEST_2_UNDERWATER_2, 0
# 24 "data/maps/SubmergedCave_1F_1R/scripts.pory"
	waitstate
	return


SubmergedCave_1F_1R_EventScript_Max::
# 32 "data/maps/SubmergedCave_1F_1R/scripts.pory"
	trainerbattle_single TRAINER_MAX, SubmergedCave_1F_1R_EventScript_Max_Text_0, SubmergedCave_1F_1R_EventScript_Max_Text_1
# 33 "data/maps/SubmergedCave_1F_1R/scripts.pory"
	msgbox SubmergedCave_1F_1R_EventScript_Max_Text_2, MSGBOX_AUTOCLOSE
	return


SubmergedCave_1F_1R_EventScript_Willow::
# 37 "data/maps/SubmergedCave_1F_1R/scripts.pory"
	trainerbattle_single TRAINER_WILLOW, SubmergedCave_1F_1R_EventScript_Willow_Text_0, SubmergedCave_1F_1R_EventScript_Willow_Text_1
# 38 "data/maps/SubmergedCave_1F_1R/scripts.pory"
	msgbox SubmergedCave_1F_1R_EventScript_Willow_Text_2, MSGBOX_AUTOCLOSE
	return


SubmergedCave_1F_1R_EventScript_Max_Text_0:
# 32 "data/maps/SubmergedCave_1F_1R/scripts.pory"
	.string "I'm down here to collect everything\nrare!$"

SubmergedCave_1F_1R_EventScript_Max_Text_1:
# 32 "data/maps/SubmergedCave_1F_1R/scripts.pory"
	.string "Oh, no!$"

SubmergedCave_1F_1R_EventScript_Max_Text_2:
# 33 "data/maps/SubmergedCave_1F_1R/scripts.pory"
	.string "I'm already beaten down, and I only\nmade it to the entrance…$"

SubmergedCave_1F_1R_EventScript_Willow_Text_0:
# 37 "data/maps/SubmergedCave_1F_1R/scripts.pory"
	.string "What a dark cave!\nThank goodness I brought my flashlight!$"

SubmergedCave_1F_1R_EventScript_Willow_Text_1:
# 37 "data/maps/SubmergedCave_1F_1R/scripts.pory"
	.string "Wait, I think my flashlight just\nflickered!$"

SubmergedCave_1F_1R_EventScript_Willow_Text_2:
# 38 "data/maps/SubmergedCave_1F_1R/scripts.pory"
	.string "Hey, do you have any extra batteries?\pMy partner must have the others we\nbrought…$"
