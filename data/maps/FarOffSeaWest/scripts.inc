FarOffSeaWest_MapScripts::
# 2 "data/maps/FarOffSeaWest/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, FarOffSeaWest_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

FarOffSeaWest_MapScripts_MAP_SCRIPT_ON_LOAD:
# 3 "data/maps/FarOffSeaWest/scripts.pory"
	goto_if_unset FLAG_SHOW_FAR_OFF_SEA_WEST_BOATS, FarOffSeaWest_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

FarOffSeaWest_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 4 "data/maps/FarOffSeaWest/scripts.pory"
	setmetatile 54, 8, 0x07E, FALSE
# 5 "data/maps/FarOffSeaWest/scripts.pory"
	setmetatile 55, 8, 0x07E, FALSE
# 6 "data/maps/FarOffSeaWest/scripts.pory"
	setmetatile 56, 8, 0x07E, FALSE
# 7 "data/maps/FarOffSeaWest/scripts.pory"
	setmetatile 57, 8, 0x205, FALSE
# 8 "data/maps/FarOffSeaWest/scripts.pory"
	setmetatile 54, 9, 0x07E, FALSE
# 9 "data/maps/FarOffSeaWest/scripts.pory"
	setmetatile 55, 9, 0x07E, FALSE
# 10 "data/maps/FarOffSeaWest/scripts.pory"
	setmetatile 56, 9, 0x07E, FALSE
# 11 "data/maps/FarOffSeaWest/scripts.pory"
	setmetatile 57, 9, 0x07E, FALSE
# 12 "data/maps/FarOffSeaWest/scripts.pory"
	setmetatile 53, 10, 0x07E, FALSE
# 13 "data/maps/FarOffSeaWest/scripts.pory"
	setmetatile 54, 10, 0x07E, FALSE
# 14 "data/maps/FarOffSeaWest/scripts.pory"
	setmetatile 55, 10, 0x07E, FALSE
# 15 "data/maps/FarOffSeaWest/scripts.pory"
	setmetatile 56, 10, 0x07E, FALSE
# 16 "data/maps/FarOffSeaWest/scripts.pory"
	setmetatile 57, 10, 0x07E, FALSE
# 17 "data/maps/FarOffSeaWest/scripts.pory"
	setmetatile 53, 11, 0x07E, FALSE
# 18 "data/maps/FarOffSeaWest/scripts.pory"
	setmetatile 54, 11, 0x07E, FALSE
# 19 "data/maps/FarOffSeaWest/scripts.pory"
	setmetatile 55, 11, 0x07E, FALSE
# 20 "data/maps/FarOffSeaWest/scripts.pory"
	setmetatile 56, 11, 0x07E, FALSE
# 21 "data/maps/FarOffSeaWest/scripts.pory"
	setmetatile 53, 12, 0x07E, FALSE
# 22 "data/maps/FarOffSeaWest/scripts.pory"
	setmetatile 54, 12, 0x07E, FALSE
# 23 "data/maps/FarOffSeaWest/scripts.pory"
	setmetatile 55, 12, 0x07E, FALSE
# 24 "data/maps/FarOffSeaWest/scripts.pory"
	setmetatile 56, 12, 0x07E, FALSE
	return


FarOffSeaWest_EventScript_Selina::
# 30 "data/maps/FarOffSeaWest/scripts.pory"
	trainerbattle_single TRAINER_SELINA, FarOffSeaWest_EventScript_Selina_Text_0, FarOffSeaWest_EventScript_Selina_Text_1
# 31 "data/maps/FarOffSeaWest/scripts.pory"
	msgbox FarOffSeaWest_EventScript_Selina_Text_2, MSGBOX_AUTOCLOSE
	return


FarOffSeaWest_EventScript_Cody::
# 35 "data/maps/FarOffSeaWest/scripts.pory"
	trainerbattle_single TRAINER_CODY, FarOffSeaWest_EventScript_Cody_Text_0, FarOffSeaWest_EventScript_Cody_Text_1
# 36 "data/maps/FarOffSeaWest/scripts.pory"
	msgbox FarOffSeaWest_EventScript_Cody_Text_2, MSGBOX_AUTOCLOSE
	return


FarOffSeaWest_EventScript_Darren::
# 40 "data/maps/FarOffSeaWest/scripts.pory"
	trainerbattle_single TRAINER_DARREN, FarOffSeaWest_EventScript_Darren_Text_0, FarOffSeaWest_EventScript_Darren_Text_1
# 41 "data/maps/FarOffSeaWest/scripts.pory"
	msgbox FarOffSeaWest_EventScript_Darren_Text_2, MSGBOX_AUTOCLOSE
	return


FarOffSeaWest_EventScript_Jakob::
# 45 "data/maps/FarOffSeaWest/scripts.pory"
	trainerbattle_single TRAINER_JAKOB, FarOffSeaWest_EventScript_Jakob_Text_0, FarOffSeaWest_EventScript_Jakob_Text_1
# 46 "data/maps/FarOffSeaWest/scripts.pory"
	msgbox FarOffSeaWest_EventScript_Jakob_Text_2, MSGBOX_AUTOCLOSE
	return


FarOffSeaWest_EventScript_Milo::
# 50 "data/maps/FarOffSeaWest/scripts.pory"
	trainerbattle_single TRAINER_MILO, FarOffSeaWest_EventScript_Milo_Text_0, FarOffSeaWest_EventScript_Milo_Text_1
# 51 "data/maps/FarOffSeaWest/scripts.pory"
	msgbox FarOffSeaWest_EventScript_Milo_Text_2, MSGBOX_AUTOCLOSE
	return


FarOffSeaWest_EventScript_Mira::
# 55 "data/maps/FarOffSeaWest/scripts.pory"
	trainerbattle_single TRAINER_MIRA, FarOffSeaWest_EventScript_Mira_Text_0, FarOffSeaWest_EventScript_Mira_Text_1
# 56 "data/maps/FarOffSeaWest/scripts.pory"
	msgbox FarOffSeaWest_EventScript_Mira_Text_2, MSGBOX_AUTOCLOSE
	return


FarOffSeaWest_EventScript_Selina_Text_0:
# 30 "data/maps/FarOffSeaWest/scripts.pory"
	.string "These beautiful waters are the perfect\nbackdrop for a battle!$"

FarOffSeaWest_EventScript_Selina_Text_1:
# 30 "data/maps/FarOffSeaWest/scripts.pory"
	.string "Aww…$"

FarOffSeaWest_EventScript_Selina_Text_2:
# 31 "data/maps/FarOffSeaWest/scripts.pory"
	.string "At least our battle looked pretty!$"

FarOffSeaWest_EventScript_Cody_Text_0:
# 35 "data/maps/FarOffSeaWest/scripts.pory"
	.string "Let's cook up a great battle!$"

FarOffSeaWest_EventScript_Cody_Text_1:
# 35 "data/maps/FarOffSeaWest/scripts.pory"
	.string "I'm burned!$"

FarOffSeaWest_EventScript_Cody_Text_2:
# 36 "data/maps/FarOffSeaWest/scripts.pory"
	.string "These beaches are the perfect\nbackdrop for a barbecue.$"

FarOffSeaWest_EventScript_Darren_Text_0:
# 40 "data/maps/FarOffSeaWest/scripts.pory"
	.string "Ahoy, trainer!$"

FarOffSeaWest_EventScript_Darren_Text_1:
# 40 "data/maps/FarOffSeaWest/scripts.pory"
	.string "You've drowned me!$"

FarOffSeaWest_EventScript_Darren_Text_2:
# 41 "data/maps/FarOffSeaWest/scripts.pory"
	.string "Enjoy your visit!$"

FarOffSeaWest_EventScript_Jakob_Text_0:
# 45 "data/maps/FarOffSeaWest/scripts.pory"
	.string "Stop! It's time to battle!$"

FarOffSeaWest_EventScript_Jakob_Text_1:
# 45 "data/maps/FarOffSeaWest/scripts.pory"
	.string "I'm going down!$"

FarOffSeaWest_EventScript_Jakob_Text_2:
# 46 "data/maps/FarOffSeaWest/scripts.pory"
	.string "It's a struggle to stay afloat and\nbattle at the same time.$"

FarOffSeaWest_EventScript_Milo_Text_0:
# 50 "data/maps/FarOffSeaWest/scripts.pory"
	.string "Go, Pokémon! Use Dive!$"

FarOffSeaWest_EventScript_Milo_Text_1:
# 50 "data/maps/FarOffSeaWest/scripts.pory"
	.string "We've been sent to a watery grave!$"

FarOffSeaWest_EventScript_Milo_Text_2:
# 51 "data/maps/FarOffSeaWest/scripts.pory"
	.string "Phew! I could barely hold my breath\nlong enough to cross over here!$"

FarOffSeaWest_EventScript_Mira_Text_0:
# 55 "data/maps/FarOffSeaWest/scripts.pory"
	.string "If I win, let me on your Pokémon!$"

FarOffSeaWest_EventScript_Mira_Text_1:
# 55 "data/maps/FarOffSeaWest/scripts.pory"
	.string "Aww, I'm tired…$"

FarOffSeaWest_EventScript_Mira_Text_2:
# 56 "data/maps/FarOffSeaWest/scripts.pory"
	.string "I sure hope there's a sandbar to rest\nat up ahead.$"
