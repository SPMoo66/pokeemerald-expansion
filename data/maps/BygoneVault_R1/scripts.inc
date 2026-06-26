BygoneVault_R1_MapScripts::
# 2 "data/maps/BygoneVault_R1/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BygoneVault_R1_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

BygoneVault_R1_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/BygoneVault_R1/scripts.pory"
	setflag FLAG_TEMP_1
# 4 "data/maps/BygoneVault_R1/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 42
	goto_if_eq BygoneVault_R1_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

BygoneVault_R1_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 5 "data/maps/BygoneVault_R1/scripts.pory"
	clearflag FLAG_TEMP_1
	return

