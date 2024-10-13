ScorchedSlab_MapScripts::
# 2 "data/maps/ScorchedSlab/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ScorchedSlab_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 5 "data/maps/ScorchedSlab/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, ScorchedSlab_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

ScorchedSlab_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/ScorchedSlab/scripts.pory"
	setflag FLAG_LANDMARK_SCORCHED_SLAB
	return

ScorchedSlab_MapScripts_MAP_SCRIPT_ON_LOAD:
# 6 "data/maps/ScorchedSlab/scripts.pory"
	compare VAR_SKY_PILLAR_STATE, 2
	goto_if_ge ScorchedSlab_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

ScorchedSlab_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 7 "data/maps/ScorchedSlab/scripts.pory"
	setmetatile 8, 2, METATILE_Cave_DiamondFloor, FALSE
# 8 "data/maps/ScorchedSlab/scripts.pory"
	setmetatile 8, 3, METATILE_Cave_DiamondFloor, FALSE
# 9 "data/maps/ScorchedSlab/scripts.pory"
	setmetatile 9, 4, METATILE_Cave_DiamondFloor, FALSE
	return

