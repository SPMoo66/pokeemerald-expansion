BlanchedDepths_1F_1R_MapScripts::
# 2 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, BlanchedDepths_1F_1R_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

BlanchedDepths_1F_1R_MapScripts_MAP_SCRIPT_ON_RESUME:
# 3 "data/maps/BlanchedDepths_1F_1R/scripts.pory"
	setdivewarp MAP_FAR_OFF_SEA_WEST_2_UNDERWATER_1_BLANCHED_DEPTHS_ENTRANCE, 4, 3
	return

