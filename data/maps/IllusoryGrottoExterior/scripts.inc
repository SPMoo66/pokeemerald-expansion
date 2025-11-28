IllusoryGrottoExterior_MapScripts::
	.byte 0


EventScript_MoveToEndlessFarOffSea::
# 4 "data/maps/IllusoryGrottoExterior/scripts.pory"
	lock
# 5 "data/maps/IllusoryGrottoExterior/scripts.pory"
	warp MAP_FAR_OFF_SEA_ENDLESS, 12, 2
# 6 "data/maps/IllusoryGrottoExterior/scripts.pory"
	waitstate
	return


EventScript_EndEndlessFarOffSea::
# 10 "data/maps/IllusoryGrottoExterior/scripts.pory"
	lock
# 11 "data/maps/IllusoryGrottoExterior/scripts.pory"
	msgbox EventScript_EndEndlessFarOffSea_Text_0, MSGBOX_AUTOCLOSE
# 12 "data/maps/IllusoryGrottoExterior/scripts.pory"
	setvar VAR_EMERALBODY_RIVAL_STATE, 22
# 13 "data/maps/IllusoryGrottoExterior/scripts.pory"
	warp MAP_FAR_OFF_SEA_WEST_2, 5, 5
# 14 "data/maps/IllusoryGrottoExterior/scripts.pory"
	waitstate
	return


EventScript_EndEndlessFarOffSea_Text_0:
# 11 "data/maps/IllusoryGrottoExterior/scripts.pory"
	.string "Hello$"
