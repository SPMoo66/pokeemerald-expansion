IllusoryGrottoExterior_MapScripts::
# 2 "data/maps/IllusoryGrottoExterior/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, IllusoryGrottoExterior_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

IllusoryGrottoExterior_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/IllusoryGrottoExterior/scripts.pory"
	setrespawn HEAL_LOCATION_ILLUSORY_GROTTO_UPPER
	return


EventScript_MoveToEndlessFarOffSea::
# 8 "data/maps/IllusoryGrottoExterior/scripts.pory"
	lock
# 9 "data/maps/IllusoryGrottoExterior/scripts.pory"
	warp MAP_FAR_OFF_SEA_ENDLESS, 12, 2
# 10 "data/maps/IllusoryGrottoExterior/scripts.pory"
	waitstate
	return


EventScript_EndEndlessFarOffSea::
# 14 "data/maps/IllusoryGrottoExterior/scripts.pory"
	lock
# 15 "data/maps/IllusoryGrottoExterior/scripts.pory"
	msgbox EventScript_EndEndlessFarOffSea_Text_0, MSGBOX_AUTOCLOSE
# 16 "data/maps/IllusoryGrottoExterior/scripts.pory"
	setvar VAR_EMERALBODY_RIVAL_STATE, 22
# 17 "data/maps/IllusoryGrottoExterior/scripts.pory"
	warp MAP_FAR_OFF_SEA_WEST_2, 5, 5
# 18 "data/maps/IllusoryGrottoExterior/scripts.pory"
	waitstate
	return


EventScript_EndEndlessFarOffSea_Text_0:
# 15 "data/maps/IllusoryGrottoExterior/scripts.pory"
	.string "Hello$"
