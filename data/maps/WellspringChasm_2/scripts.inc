WellspringChasm_2_MapScripts::
	.byte 0


WellspringChasm_2_EventScript_PortalTeleport::
# 4 "data/maps/WellspringChasm_2/scripts.pory"
	warp MAP_TEMPORAL_SPIRE, 0
# 5 "data/maps/WellspringChasm_2/scripts.pory"
	waitstate
	return

