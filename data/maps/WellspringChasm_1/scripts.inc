WellspringChasm_1_MapScripts::
# 2 "data/maps/WellspringChasm_1/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, WellspringChasm_1_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

WellspringChasm_1_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/WellspringChasm_1/scripts.pory"
	setflag FLAG_LANDMARK_WELLSPRING_CHASM
	return

