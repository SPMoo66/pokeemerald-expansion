IllusoryGrottoExterior_MapScripts::
# 4 "data/maps/IllusoryGrottoExterior/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, IllusoryGrottoExterior_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

IllusoryGrottoExterior_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 5 "data/maps/IllusoryGrottoExterior/scripts.pory"
	setrespawn HEAL_LOCATION_ILLUSORY_GROTTO_UPPER
# 6 "data/maps/IllusoryGrottoExterior/scripts.pory"
	setflag FLAG_TEMP_1
# 7 "data/maps/IllusoryGrottoExterior/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 45
	goto_if_eq IllusoryGrottoExterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

IllusoryGrottoExterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 8 "data/maps/IllusoryGrottoExterior/scripts.pory"
	clearflag FLAG_TEMP_1
	return


EventScript_MoveToEndlessFarOffSea::
# 14 "data/maps/IllusoryGrottoExterior/scripts.pory"
	lock
# 15 "data/maps/IllusoryGrottoExterior/scripts.pory"
	warp MAP_FAR_OFF_SEA_ENDLESS, 12, 2
# 16 "data/maps/IllusoryGrottoExterior/scripts.pory"
	waitstate
	return


EventScript_EndEndlessFarOffSea::
# 20 "data/maps/IllusoryGrottoExterior/scripts.pory"
	lock
# 21 "data/maps/IllusoryGrottoExterior/scripts.pory"
	msgbox EventScript_EndEndlessFarOffSea_Text_0, MSGBOX_AUTOCLOSE
# 22 "data/maps/IllusoryGrottoExterior/scripts.pory"
	setvar VAR_EMERALBODY_RIVAL_STATE, 22
# 23 "data/maps/IllusoryGrottoExterior/scripts.pory"
	warp MAP_FAR_OFF_SEA_WEST_2, 5, 5
# 24 "data/maps/IllusoryGrottoExterior/scripts.pory"
	waitstate
	return


EventScript_EndEndlessFarOffSea_Text_0:
# 21 "data/maps/IllusoryGrottoExterior/scripts.pory"
	.string "Hello$"
