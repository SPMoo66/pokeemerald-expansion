MauveIslandSouth_MapScripts::
# 2 "data/maps/MauveIslandSouth/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MauveIslandSouth_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

MauveIslandSouth_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/MauveIslandSouth/scripts.pory"
	setflag FLAG_TEMP_1
# 4 "data/maps/MauveIslandSouth/scripts.pory"
	call GetPlayerGfxNormal
# 5 "data/maps/MauveIslandSouth/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 23
	goto_if_eq MauveIslandSouth_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
MauveIslandSouth_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 9 "data/maps/MauveIslandSouth/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 33
	goto_if_ge MauveIslandSouth_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
	return

MauveIslandSouth_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 6 "data/maps/MauveIslandSouth/scripts.pory"
	savebgm MUS_DP_SUNYSHORE_DAY
# 7 "data/maps/MauveIslandSouth/scripts.pory"
	clearflag FLAG_TEMP_1
	goto MauveIslandSouth_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

MauveIslandSouth_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 10 "data/maps/MauveIslandSouth/scripts.pory"
	clearflag FLAG_TEMP_1
# 11 "data/maps/MauveIslandSouth/scripts.pory"
	setobjectxyperm MAUVEISLANDSOUTH_REDD, 29, 24
# 12 "data/maps/MauveIslandSouth/scripts.pory"
	setobjectmovementtype MAUVEISLANDSOUTH_REDD, MOVEMENT_TYPE_WANDER_AROUND
	return

MauveIslandSouth_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 9 "data/maps/MauveIslandSouth/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 39
	goto_if_le MauveIslandSouth_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
	return

