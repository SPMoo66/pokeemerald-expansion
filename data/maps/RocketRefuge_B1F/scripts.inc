RocketRefuge_B1F_MapScripts::
# 4 "data/maps/RocketRefuge_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RocketRefuge_B1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 7 "data/maps/RocketRefuge_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, RocketRefuge_B1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

RocketRefuge_B1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 5 "data/maps/RocketRefuge_B1F/scripts.pory"
	setflag FLAG_TEMP_1
	return

RocketRefuge_B1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 8 "data/maps/RocketRefuge_B1F/scripts.pory"
	map_script_2 VAR_LOOKER_ROCKET, 11, RocketRefuge_B1F_Looker
	.2byte 0

