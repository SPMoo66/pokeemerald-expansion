MauveIslandSouth_MapScripts::
# 2 "data/maps/MauveIslandSouth/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MauveIslandSouth_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

MauveIslandSouth_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/MauveIslandSouth/scripts.pory"
	call GetPlayerGfxNormal
# 4 "data/maps/MauveIslandSouth/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 23
	goto_if_eq MauveIslandSouth_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

MauveIslandSouth_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 5 "data/maps/MauveIslandSouth/scripts.pory"
	savebgm MUS_DP_SUNYSHORE_DAY
	return

