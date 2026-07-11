IllusoryGrotto_1F_1R_MapScripts::
# 2 "data/maps/IllusoryGrotto_1F_1R/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, IllusoryGrotto_1F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

IllusoryGrotto_1F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/IllusoryGrotto_1F_1R/scripts.pory"
	setrespawn HEAL_LOCATION_ILLUSORY_GROTTO_UPPER
# 4 "data/maps/IllusoryGrotto_1F_1R/scripts.pory"
	setflag FLAG_TEMP_1
# 5 "data/maps/IllusoryGrotto_1F_1R/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 45
	goto_if_eq IllusoryGrotto_1F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

IllusoryGrotto_1F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 6 "data/maps/IllusoryGrotto_1F_1R/scripts.pory"
	clearflag FLAG_TEMP_1
	return

