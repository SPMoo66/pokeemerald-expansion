MauveHollow_1_MapScripts::
# 2 "data/maps/MauveHollow_1/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MauveHollow_1_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

MauveHollow_1_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/MauveHollow_1/scripts.pory"
	setflag FLAG_LANDMARK_MAUVE_HOLLOW
	return


MauveHollow_1_EventScript_Humphrey::
# 8 "data/maps/MauveHollow_1/scripts.pory"
	trainerbattle_single TRAINER_HUMPHREY, MauveHollow_1_EventScript_Humphrey_Text_0, MauveHollow_1_EventScript_Humphrey_Text_1
# 9 "data/maps/MauveHollow_1/scripts.pory"
	msgbox MauveHollow_1_EventScript_Humphrey_Text_2, MSGBOX_AUTOCLOSE
	return


MauveHollow_1_EventScript_Fred::
# 13 "data/maps/MauveHollow_1/scripts.pory"
	trainerbattle_single TRAINER_FRED, MauveHollow_1_EventScript_Fred_Text_0, MauveHollow_1_EventScript_Fred_Text_1
# 14 "data/maps/MauveHollow_1/scripts.pory"
	msgbox MauveHollow_1_EventScript_Fred_Text_2, MSGBOX_AUTOCLOSE
	return


MauveHollow_1_EventScript_Dio::
# 18 "data/maps/MauveHollow_1/scripts.pory"
	trainerbattle_single TRAINER_DIO, MauveHollow_1_EventScript_Dio_Text_0, MauveHollow_1_EventScript_Dio_Text_1
# 19 "data/maps/MauveHollow_1/scripts.pory"
	msgbox MauveHollow_1_EventScript_Dio_Text_2, MSGBOX_AUTOCLOSE
	return


MauveHollow_1_EventScript_Humphrey_Text_0:
# 8 "data/maps/MauveHollow_1/scripts.pory"
	.string "The change in color is fascinating, no?$"

MauveHollow_1_EventScript_Humphrey_Text_1:
# 8 "data/maps/MauveHollow_1/scripts.pory"
	.string "Perhaps the Pokémon are more\nfascinating!$"

MauveHollow_1_EventScript_Humphrey_Text_2:
# 9 "data/maps/MauveHollow_1/scripts.pory"
	.string "How incredible it is to find stones of a\ndifferent color than the namesake of\lthe island?$"

MauveHollow_1_EventScript_Fred_Text_0:
# 13 "data/maps/MauveHollow_1/scripts.pory"
	.string "This looks like a great place to try to\ncamp!$"

MauveHollow_1_EventScript_Fred_Text_1:
# 13 "data/maps/MauveHollow_1/scripts.pory"
	.string "Maybe I need to find some new Pokémon\nhere first…$"

MauveHollow_1_EventScript_Fred_Text_2:
# 14 "data/maps/MauveHollow_1/scripts.pory"
	.string "Sleeping here would be a test of\ncourage!$"

MauveHollow_1_EventScript_Dio_Text_0:
# 18 "data/maps/MauveHollow_1/scripts.pory"
	.string "I have been training here since\narriving.$"

MauveHollow_1_EventScript_Dio_Text_1:
# 18 "data/maps/MauveHollow_1/scripts.pory"
	.string "What strength!$"

MauveHollow_1_EventScript_Dio_Text_2:
# 19 "data/maps/MauveHollow_1/scripts.pory"
	.string "You've shown me that I need to\nredouble my efforts in training.$"
