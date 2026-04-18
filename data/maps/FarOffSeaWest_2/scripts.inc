FarOffSeaWest_2_MapScripts::
	.byte 0


FarOffSeaWest_2_EventScript_Della::
# 4 "data/maps/FarOffSeaWest_2/scripts.pory"
	trainerbattle_single TRAINER_SAWYER_1, FarOffSeaWest_2_EventScript_Della_Text_0, FarOffSeaWest_2_EventScript_Della_Text_1
# 5 "data/maps/FarOffSeaWest_2/scripts.pory"
	msgbox FarOffSeaWest_2_EventScript_Della_Text_2, MSGBOX_AUTOCLOSE
	return


FarOffSeaWest_2_EventScript_Dario::
# 9 "data/maps/FarOffSeaWest_2/scripts.pory"
	trainerbattle_single TRAINER_SAWYER_1, FarOffSeaWest_2_EventScript_Dario_Text_0, FarOffSeaWest_2_EventScript_Dario_Text_1
# 10 "data/maps/FarOffSeaWest_2/scripts.pory"
	msgbox FarOffSeaWest_2_EventScript_Dario_Text_2, MSGBOX_AUTOCLOSE
	return


FarOffSeaWest_2_EventScript_SwimmerM::
# 14 "data/maps/FarOffSeaWest_2/scripts.pory"
	msgbox FarOffSeaWest_2_EventScript_SwimmerM_Text_0, MSGBOX_NPC
	return


FarOffSeaWest_2_EventScript_Della_Text_0:
# 4 "data/maps/FarOffSeaWest_2/scripts.pory"
	.string "I'm lost, but I'm still ready to battle!$"

FarOffSeaWest_2_EventScript_Della_Text_1:
# 4 "data/maps/FarOffSeaWest_2/scripts.pory"
	.string "Phooey!$"

FarOffSeaWest_2_EventScript_Della_Text_2:
# 5 "data/maps/FarOffSeaWest_2/scripts.pory"
	.string "Hey, do you have any idea where we are?$"

FarOffSeaWest_2_EventScript_Dario_Text_0:
# 9 "data/maps/FarOffSeaWest_2/scripts.pory"
	.string "I've been waiting for you!$"

FarOffSeaWest_2_EventScript_Dario_Text_1:
# 9 "data/maps/FarOffSeaWest_2/scripts.pory"
	.string "Agh!$"

FarOffSeaWest_2_EventScript_Dario_Text_2:
# 10 "data/maps/FarOffSeaWest_2/scripts.pory"
	.string "This was the perfect place to ambush\nsomeone, no?$"

FarOffSeaWest_2_EventScript_SwimmerM_Text_0:
# 14 "data/maps/FarOffSeaWest_2/scripts.pory"
	.string "There are different Pokémon hiding\nin this grass than in the water!$"
