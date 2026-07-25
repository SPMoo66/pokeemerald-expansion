FarOffSeaWest_2_Underwater_2_MapScripts::
# 2 "data/maps/FarOffSeaWest_2_Underwater_2/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, FarOffSeaWest_2_Underwater_2_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

FarOffSeaWest_2_Underwater_2_MapScripts_MAP_SCRIPT_ON_LOAD:
# 3 "data/maps/FarOffSeaWest_2_Underwater_2/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 31
	goto_if_lt FarOffSeaWest_2_Underwater_2_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

FarOffSeaWest_2_Underwater_2_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 4 "data/maps/FarOffSeaWest_2_Underwater_2/scripts.pory"
	setmetatile 71, 24, 0x0B5, TRUE
	return

