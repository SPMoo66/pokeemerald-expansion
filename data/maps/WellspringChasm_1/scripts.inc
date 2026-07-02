WellspringChasm_1_MapScripts::
# 2 "data/maps/WellspringChasm_1/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, WellspringChasm_1_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

WellspringChasm_1_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/WellspringChasm_1/scripts.pory"
	setflag FLAG_LANDMARK_WELLSPRING_CHASM
	return


WellspringChasm_1_EventScript_Sailor::
# 8 "data/maps/WellspringChasm_1/scripts.pory"
	msgbox WellspringChasm_1_EventScript_Sailor_Text_0, MSGBOX_NPC
	return


WellspringChasm_1_EventScript_Sailor_Text_0:
# 8 "data/maps/WellspringChasm_1/scripts.pory"
	.string "I heard a huge roar from deeper in!\pProbably one of the trainers letting\nloose…?\lAh, let's hope it was only that.$"
