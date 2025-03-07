RocketRefuge_B2F_MapScripts::
# 4 "data/maps/RocketRefuge_B2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RocketRefuge_B2F_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 9 "data/maps/RocketRefuge_B2F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, RocketRefuge_B2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

RocketRefuge_B2F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 5 "data/maps/RocketRefuge_B2F/scripts.pory"
	compare VAR_LOOKER_ROCKET, 12
	goto_if_gt RocketRefuge_B2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

RocketRefuge_B2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 6 "data/maps/RocketRefuge_B2F/scripts.pory"
	setflag FLAG_TEMP_1
	return

RocketRefuge_B2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 10 "data/maps/RocketRefuge_B2F/scripts.pory"
	map_script_2 VAR_LOOKER_ROCKET, 12, RocketRefuge_B2F_Looker
	.2byte 0

