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
	goto_if_eq IllusoryGrottoExterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
IllusoryGrottoExterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 10 "data/maps/IllusoryGrottoExterior/scripts.pory"
	clearflag FLAG_CANT_USE_ESCAPE_ROPE
	return

IllusoryGrottoExterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 8 "data/maps/IllusoryGrottoExterior/scripts.pory"
	clearflag FLAG_TEMP_1
	goto IllusoryGrottoExterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_1


EventScript_MoveToEndlessFarOffSea::
# 15 "data/maps/IllusoryGrottoExterior/scripts.pory"
	lock
# 16 "data/maps/IllusoryGrottoExterior/scripts.pory"
	warp MAP_FAR_OFF_SEA_ENDLESS, 12, 2
# 17 "data/maps/IllusoryGrottoExterior/scripts.pory"
	waitstate
	return


EventScript_EndEndlessFarOffSea::
# 21 "data/maps/IllusoryGrottoExterior/scripts.pory"
	lock
# 22 "data/maps/IllusoryGrottoExterior/scripts.pory"
	msgbox EventScript_EndEndlessFarOffSea_Text_0, MSGBOX_AUTOCLOSE
# 23 "data/maps/IllusoryGrottoExterior/scripts.pory"
	setvar VAR_EMERALBODY_RIVAL_STATE, 22
# 24 "data/maps/IllusoryGrottoExterior/scripts.pory"
	warp MAP_FAR_OFF_SEA_WEST_2, 5, 5
# 25 "data/maps/IllusoryGrottoExterior/scripts.pory"
	waitstate
	return


EventScript_EndEndlessFarOffSea_Text_0:
# 22 "data/maps/IllusoryGrottoExterior/scripts.pory"
	.string "Hello$"
