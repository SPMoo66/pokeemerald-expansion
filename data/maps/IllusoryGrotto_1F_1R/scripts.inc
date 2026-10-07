IllusoryGrotto_1F_1R_MapScripts::
# 2 "data/maps/IllusoryGrotto_1F_1R/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, IllusoryGrotto_1F_1R_MapScripts_MAP_SCRIPT_ON_LOAD
# 7 "data/maps/IllusoryGrotto_1F_1R/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, IllusoryGrotto_1F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

IllusoryGrotto_1F_1R_MapScripts_MAP_SCRIPT_ON_LOAD:
# 3 "data/maps/IllusoryGrotto_1F_1R/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 51
	goto_if_ge IllusoryGrotto_1F_1R_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

IllusoryGrotto_1F_1R_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 4 "data/maps/IllusoryGrotto_1F_1R/scripts.pory"
	setmetatile 19, 0, 0x01D, TRUE
	return

IllusoryGrotto_1F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 8 "data/maps/IllusoryGrotto_1F_1R/scripts.pory"
	setrespawn HEAL_LOCATION_ILLUSORY_GROTTO_UPPER
# 9 "data/maps/IllusoryGrotto_1F_1R/scripts.pory"
	setflag FLAG_TEMP_1
# 10 "data/maps/IllusoryGrotto_1F_1R/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 45
	goto_if_eq IllusoryGrotto_1F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

IllusoryGrotto_1F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 11 "data/maps/IllusoryGrotto_1F_1R/scripts.pory"
	clearflag FLAG_TEMP_1
	return

