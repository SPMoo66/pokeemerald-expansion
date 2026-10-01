FarOffSeaWest_2_Underwater_1_BlanchedDepths_Entrance_MapScripts::
# 2 "data/maps/FarOffSeaWest_2_Underwater_1_BlanchedDepths_Entrance/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, FarOffSeaWest_2_Underwater_1_BlanchedDepths_Entrance_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

FarOffSeaWest_2_Underwater_1_BlanchedDepths_Entrance_MapScripts_MAP_SCRIPT_ON_RESUME:
# 3 "data/maps/FarOffSeaWest_2_Underwater_1_BlanchedDepths_Entrance/scripts.pory"
	setdivewarp MAP_BLANCHED_DEPTHS_1F_1R, 5, 19
	return


FarOffSeaWest_2_Underwater_1_BlanchedDepths_Entrance_EventScript_Submarine::
# 8 "data/maps/FarOffSeaWest_2_Underwater_1_BlanchedDepths_Entrance/scripts.pory"
	msgbox FarOffSeaWest_2_Underwater_1_BlanchedDepths_Entrance_EventScript_Submarine_Text_0, MSGBOX_SIGN
	return


FarOffSeaWest_2_Underwater_1_BlanchedDepths_Entrance_EventScript_Submarine_Text_0:
# 8 "data/maps/FarOffSeaWest_2_Underwater_1_BlanchedDepths_Entrance/scripts.pory"
	.string "This familiar submarine has seen better\ndays.\p… … …\pAt least it didn't decompress!$"
