FarOffSeaWest_2_Underwater_1_MapScripts::
	.byte 0


BlanchedDepthsBlocker::
# 4 "data/maps/FarOffSeaWest_2_Underwater_1/scripts.pory"
	msgbox BlanchedDepthsBlocker_Text_0
# 5 "data/maps/FarOffSeaWest_2_Underwater_1/scripts.pory"
	closemessage
# 6 "data/maps/FarOffSeaWest_2_Underwater_1/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 7 "data/maps/FarOffSeaWest_2_Underwater_1/scripts.pory"
	waitmovement 0
# 8 "data/maps/FarOffSeaWest_2_Underwater_1/scripts.pory"
	release
	return


BlanchedDepthsBlocker_Text_0:
# 4 "data/maps/FarOffSeaWest_2_Underwater_1/scripts.pory"
	.string "Dad's advice…\n"
	.string "{PLAYER}, you should go find your\l"
	.string "friends first!$"
