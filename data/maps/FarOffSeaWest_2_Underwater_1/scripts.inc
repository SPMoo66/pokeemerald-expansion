FarOffSeaWest_2_Underwater_1_MapScripts::
	.byte 0


BlanchedDepthsBlocker::
# 4 "data/maps/FarOffSeaWest_2_Underwater_1/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 24
	goto_if_lt BlanchedDepthsBlocker_1
# 12 "data/maps/FarOffSeaWest_2_Underwater_1/scripts.pory"
	setvar VAR_TEMP_0, 1
	return

BlanchedDepthsBlocker_1:
# 5 "data/maps/FarOffSeaWest_2_Underwater_1/scripts.pory"
	msgbox BlanchedDepthsBlocker_Text_0
# 6 "data/maps/FarOffSeaWest_2_Underwater_1/scripts.pory"
	closemessage
# 7 "data/maps/FarOffSeaWest_2_Underwater_1/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 8 "data/maps/FarOffSeaWest_2_Underwater_1/scripts.pory"
	waitmovement 0
# 9 "data/maps/FarOffSeaWest_2_Underwater_1/scripts.pory"
	release
	return


BlanchedDepthsBlocker_Text_0:
# 5 "data/maps/FarOffSeaWest_2_Underwater_1/scripts.pory"
	.string "Dad's advice…\n"
	.string "{PLAYER}, you should go find your\l"
	.string "friends first!$"
