Underwater_SubmergedCavern_MapScripts::
# 2 "data/maps/Underwater_SubmergedCavern/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Underwater_SubmergedCavern_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Underwater_SubmergedCavern_MapScripts_MAP_SCRIPT_ON_RESUME:
# 3 "data/maps/Underwater_SubmergedCavern/scripts.pory"
	setdivewarp MAP_SUBMERGED_CAVERN, 12, 14
	return

