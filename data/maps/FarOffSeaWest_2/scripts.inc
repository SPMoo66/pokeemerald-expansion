FarOffSeaWest_2_MapScripts::
# 2 "data/maps/FarOffSeaWest_2/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FarOffSeaWest_2_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

FarOffSeaWest_2_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/FarOffSeaWest_2/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 23
	goto_if_lt FarOffSeaWest_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

FarOffSeaWest_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 4 "data/maps/FarOffSeaWest_2/scripts.pory"
	setflag FLAG_TEMP_6
	return


FarOffSeaWest_2_EventScript_Della::
# 10 "data/maps/FarOffSeaWest_2/scripts.pory"
	trainerbattle_single TRAINER_DELLA, FarOffSeaWest_2_EventScript_Della_Text_0, FarOffSeaWest_2_EventScript_Della_Text_1
# 11 "data/maps/FarOffSeaWest_2/scripts.pory"
	msgbox FarOffSeaWest_2_EventScript_Della_Text_2, MSGBOX_AUTOCLOSE
	return


FarOffSeaWest_2_EventScript_Dario::
# 15 "data/maps/FarOffSeaWest_2/scripts.pory"
	trainerbattle_single TRAINER_DARIO, FarOffSeaWest_2_EventScript_Dario_Text_0, FarOffSeaWest_2_EventScript_Dario_Text_1
# 16 "data/maps/FarOffSeaWest_2/scripts.pory"
	msgbox FarOffSeaWest_2_EventScript_Dario_Text_2, MSGBOX_AUTOCLOSE
	return


FarOffSeaWest_2_EventScript_SwimmerM::
# 20 "data/maps/FarOffSeaWest_2/scripts.pory"
	msgbox FarOffSeaWest_2_EventScript_SwimmerM_Text_0, MSGBOX_NPC
	return


FarOffSeaWest_2_EventScript_Della_Text_0:
# 10 "data/maps/FarOffSeaWest_2/scripts.pory"
	.string "I'm lost, but I'm still ready to battle!$"

FarOffSeaWest_2_EventScript_Della_Text_1:
# 10 "data/maps/FarOffSeaWest_2/scripts.pory"
	.string "Phooey!$"

FarOffSeaWest_2_EventScript_Della_Text_2:
# 11 "data/maps/FarOffSeaWest_2/scripts.pory"
	.string "Hey, do you have any idea where we are?$"

FarOffSeaWest_2_EventScript_Dario_Text_0:
# 15 "data/maps/FarOffSeaWest_2/scripts.pory"
	.string "I've been waiting for you!$"

FarOffSeaWest_2_EventScript_Dario_Text_1:
# 15 "data/maps/FarOffSeaWest_2/scripts.pory"
	.string "Agh!$"

FarOffSeaWest_2_EventScript_Dario_Text_2:
# 16 "data/maps/FarOffSeaWest_2/scripts.pory"
	.string "This was the perfect place to ambush\nsomeone, no?$"

FarOffSeaWest_2_EventScript_SwimmerM_Text_0:
# 20 "data/maps/FarOffSeaWest_2/scripts.pory"
	.string "There are different Pokémon hiding\nin this grass than in the water!$"
