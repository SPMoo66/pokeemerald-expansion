SubmergedCave_1F_1R_MapScripts::
# 2 "data/maps/SubmergedCave_1F_1R/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SubmergedCave_1F_1R_MapScripts_MAP_SCRIPT_ON_LOAD
# 9 "data/maps/SubmergedCave_1F_1R/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SubmergedCave_1F_1R_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

SubmergedCave_1F_1R_MapScripts_MAP_SCRIPT_ON_LOAD:
# 3 "data/maps/SubmergedCave_1F_1R/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 18
	goto_if_eq SubmergedCave_1F_1R_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

SubmergedCave_1F_1R_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 4 "data/maps/SubmergedCave_1F_1R/scripts.pory"
	setflag FLAG_DONT_START_MUSIC_ON_WARP
# 5 "data/maps/SubmergedCave_1F_1R/scripts.pory"
	setflag FLAG_SYS_SPAWN_INVISIBLE
# 6 "data/maps/SubmergedCave_1F_1R/scripts.pory"
	setflag FLAG_SYS_DO_NOT_FADE_IN_ON_ENTER
	return

SubmergedCave_1F_1R_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 10 "data/maps/SubmergedCave_1F_1R/scripts.pory"
	map_script_2 VAR_EMERALBODY_RIVAL_STATE, 18, SubmergedCave_1F_1R_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

SubmergedCave_1F_1R_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 11 "data/maps/SubmergedCave_1F_1R/scripts.pory"
	clearflag FLAG_DONT_START_MUSIC_ON_WARP
# 12 "data/maps/SubmergedCave_1F_1R/scripts.pory"
	clearflag FLAG_SYS_SPAWN_INVISIBLE
# 13 "data/maps/SubmergedCave_1F_1R/scripts.pory"
	clearflag FLAG_SYS_DO_NOT_FADE_IN_ON_ENTER
# 14 "data/maps/SubmergedCave_1F_1R/scripts.pory"
	delay 40
# 15 "data/maps/SubmergedCave_1F_1R/scripts.pory"
	goto_if_unset FLAG_TEMP_1, SubmergedCave_1F_1R_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_1
	return

SubmergedCave_1F_1R_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_1:
# 16 "data/maps/SubmergedCave_1F_1R/scripts.pory"
	msgbox Text_TooDarkLetsTurnBack, MSGBOX_AUTOCLOSE
# 17 "data/maps/SubmergedCave_1F_1R/scripts.pory"
	setflag FLAG_TEMP_1
# 18 "data/maps/SubmergedCave_1F_1R/scripts.pory"
	warp MAP_FAR_OFF_SEA_WEST_2_UNDERWATER_2, 0
	return

