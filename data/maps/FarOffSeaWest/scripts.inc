FarOffSeaWest_MapScripts::
# 4 "data/maps/FarOffSeaWest/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, FarOffSeaWest_MapScripts_MAP_SCRIPT_ON_LOAD
# 29 "data/maps/FarOffSeaWest/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FarOffSeaWest_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

FarOffSeaWest_MapScripts_MAP_SCRIPT_ON_LOAD:
# 5 "data/maps/FarOffSeaWest/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 41
	goto_if_ne FarOffSeaWest_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

FarOffSeaWest_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 6 "data/maps/FarOffSeaWest/scripts.pory"
	setmetatile 54, 8, 0x07E, FALSE
# 7 "data/maps/FarOffSeaWest/scripts.pory"
	setmetatile 55, 8, 0x07E, FALSE
# 8 "data/maps/FarOffSeaWest/scripts.pory"
	setmetatile 56, 8, 0x07E, FALSE
# 9 "data/maps/FarOffSeaWest/scripts.pory"
	setmetatile 57, 8, 0x205, FALSE
# 10 "data/maps/FarOffSeaWest/scripts.pory"
	setmetatile 54, 9, 0x07E, FALSE
# 11 "data/maps/FarOffSeaWest/scripts.pory"
	setmetatile 55, 9, 0x07E, FALSE
# 12 "data/maps/FarOffSeaWest/scripts.pory"
	setmetatile 56, 9, 0x07E, FALSE
# 13 "data/maps/FarOffSeaWest/scripts.pory"
	setmetatile 57, 9, 0x07E, FALSE
# 14 "data/maps/FarOffSeaWest/scripts.pory"
	setmetatile 53, 10, 0x07E, FALSE
# 15 "data/maps/FarOffSeaWest/scripts.pory"
	setmetatile 54, 10, 0x07E, FALSE
# 16 "data/maps/FarOffSeaWest/scripts.pory"
	setmetatile 55, 10, 0x07E, FALSE
# 17 "data/maps/FarOffSeaWest/scripts.pory"
	setmetatile 56, 10, 0x07E, FALSE
# 18 "data/maps/FarOffSeaWest/scripts.pory"
	setmetatile 57, 10, 0x07E, FALSE
# 19 "data/maps/FarOffSeaWest/scripts.pory"
	setmetatile 53, 11, 0x07E, FALSE
# 20 "data/maps/FarOffSeaWest/scripts.pory"
	setmetatile 54, 11, 0x07E, FALSE
# 21 "data/maps/FarOffSeaWest/scripts.pory"
	setmetatile 55, 11, 0x07E, FALSE
# 22 "data/maps/FarOffSeaWest/scripts.pory"
	setmetatile 56, 11, 0x07E, FALSE
# 23 "data/maps/FarOffSeaWest/scripts.pory"
	setmetatile 53, 12, 0x07E, FALSE
# 24 "data/maps/FarOffSeaWest/scripts.pory"
	setmetatile 54, 12, 0x07E, FALSE
# 25 "data/maps/FarOffSeaWest/scripts.pory"
	setmetatile 55, 12, 0x07E, FALSE
# 26 "data/maps/FarOffSeaWest/scripts.pory"
	setmetatile 56, 12, 0x07E, FALSE
	return

FarOffSeaWest_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 30 "data/maps/FarOffSeaWest/scripts.pory"
	setflag FLAG_TEMP_1
# 31 "data/maps/FarOffSeaWest/scripts.pory"
	setflag FLAG_TEMP_2
# 32 "data/maps/FarOffSeaWest/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 23
	goto_if_lt FarOffSeaWest_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
FarOffSeaWest_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 35 "data/maps/FarOffSeaWest/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 24
	goto_if_ge FarOffSeaWest_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
FarOffSeaWest_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 40 "data/maps/FarOffSeaWest/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 40
	goto_if_eq FarOffSeaWest_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
FarOffSeaWest_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 43 "data/maps/FarOffSeaWest/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 41
	goto_if_eq FarOffSeaWest_MapScripts_MAP_SCRIPT_ON_TRANSITION_12
	return

FarOffSeaWest_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 33 "data/maps/FarOffSeaWest/scripts.pory"
	setflag FLAG_TEMP_6
	goto FarOffSeaWest_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

FarOffSeaWest_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 36 "data/maps/FarOffSeaWest/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 31
	goto_if_lt FarOffSeaWest_MapScripts_MAP_SCRIPT_ON_TRANSITION_10
	goto FarOffSeaWest_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

FarOffSeaWest_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 41 "data/maps/FarOffSeaWest/scripts.pory"
	clearflag FLAG_TEMP_1
	goto FarOffSeaWest_MapScripts_MAP_SCRIPT_ON_TRANSITION_7

FarOffSeaWest_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 37 "data/maps/FarOffSeaWest/scripts.pory"
	clearflag FLAG_TEMP_1
	goto FarOffSeaWest_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

FarOffSeaWest_MapScripts_MAP_SCRIPT_ON_TRANSITION_12:
# 44 "data/maps/FarOffSeaWest/scripts.pory"
	clearflag FLAG_TEMP_1
# 45 "data/maps/FarOffSeaWest/scripts.pory"
	clearflag FLAG_TEMP_2
# 46 "data/maps/FarOffSeaWest/scripts.pory"
	setobjectxyperm 9, 55, 3
# 47 "data/maps/FarOffSeaWest/scripts.pory"
	setobjectmovementtype 9, MOVEMENT_TYPE_FACE_DOWN
	return


FarOffSeaWest_Sakura_1::
# 53 "data/maps/FarOffSeaWest/scripts.pory"
	turnobject 9, DIR_SOUTH
# 54 "data/maps/FarOffSeaWest/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 40
	goto_if_eq FarOffSeaWest_Sakura_1_2
FarOffSeaWest_Sakura_1_1:
# 57 "data/maps/FarOffSeaWest/scripts.pory"
	goto Sakura_Exp1_Town02
	return

FarOffSeaWest_Sakura_1_2:
# 55 "data/maps/FarOffSeaWest/scripts.pory"
	goto Sakura_Exp1_Town04
	goto FarOffSeaWest_Sakura_1_1


FarOffSeaWest_Sakura_2::
# 61 "data/maps/FarOffSeaWest/scripts.pory"
	turnobject 9, DIR_EAST
# 62 "data/maps/FarOffSeaWest/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 40
	goto_if_eq FarOffSeaWest_Sakura_2_2
FarOffSeaWest_Sakura_2_1:
# 65 "data/maps/FarOffSeaWest/scripts.pory"
	goto Sakura_Exp1_Town02
	return

FarOffSeaWest_Sakura_2_2:
# 63 "data/maps/FarOffSeaWest/scripts.pory"
	goto Sakura_Exp1_Town04
	goto FarOffSeaWest_Sakura_2_1


FarOffSeaWest_EventScript_Selina::
# 70 "data/maps/FarOffSeaWest/scripts.pory"
	trainerbattle_single TRAINER_SELINA, FarOffSeaWest_EventScript_Selina_Text_0, FarOffSeaWest_EventScript_Selina_Text_1
# 71 "data/maps/FarOffSeaWest/scripts.pory"
	msgbox FarOffSeaWest_EventScript_Selina_Text_2, MSGBOX_AUTOCLOSE
	return


FarOffSeaWest_EventScript_Cody::
# 75 "data/maps/FarOffSeaWest/scripts.pory"
	trainerbattle_single TRAINER_CODY, FarOffSeaWest_EventScript_Cody_Text_0, FarOffSeaWest_EventScript_Cody_Text_1
# 76 "data/maps/FarOffSeaWest/scripts.pory"
	msgbox FarOffSeaWest_EventScript_Cody_Text_2, MSGBOX_AUTOCLOSE
	return


FarOffSeaWest_EventScript_Darren::
# 80 "data/maps/FarOffSeaWest/scripts.pory"
	trainerbattle_single TRAINER_DARREN, FarOffSeaWest_EventScript_Darren_Text_0, FarOffSeaWest_EventScript_Darren_Text_1
# 81 "data/maps/FarOffSeaWest/scripts.pory"
	msgbox FarOffSeaWest_EventScript_Darren_Text_2, MSGBOX_AUTOCLOSE
	return


FarOffSeaWest_EventScript_Jakob::
# 85 "data/maps/FarOffSeaWest/scripts.pory"
	trainerbattle_single TRAINER_JAKOB, FarOffSeaWest_EventScript_Jakob_Text_0, FarOffSeaWest_EventScript_Jakob_Text_1
# 86 "data/maps/FarOffSeaWest/scripts.pory"
	msgbox FarOffSeaWest_EventScript_Jakob_Text_2, MSGBOX_AUTOCLOSE
	return


FarOffSeaWest_EventScript_Milo::
# 90 "data/maps/FarOffSeaWest/scripts.pory"
	trainerbattle_single TRAINER_MILO, FarOffSeaWest_EventScript_Milo_Text_0, FarOffSeaWest_EventScript_Milo_Text_1
# 91 "data/maps/FarOffSeaWest/scripts.pory"
	msgbox FarOffSeaWest_EventScript_Milo_Text_2, MSGBOX_AUTOCLOSE
	return


FarOffSeaWest_EventScript_Mira::
# 95 "data/maps/FarOffSeaWest/scripts.pory"
	trainerbattle_single TRAINER_MIRA, FarOffSeaWest_EventScript_Mira_Text_0, FarOffSeaWest_EventScript_Mira_Text_1
# 96 "data/maps/FarOffSeaWest/scripts.pory"
	msgbox FarOffSeaWest_EventScript_Mira_Text_2, MSGBOX_AUTOCLOSE
	return


FarOffSeaWest_EventScript_Selina_Text_0:
# 70 "data/maps/FarOffSeaWest/scripts.pory"
	.string "These beautiful waters are the perfect\nbackdrop for a battle!$"

FarOffSeaWest_EventScript_Selina_Text_1:
# 70 "data/maps/FarOffSeaWest/scripts.pory"
	.string "Aww…$"

FarOffSeaWest_EventScript_Selina_Text_2:
# 71 "data/maps/FarOffSeaWest/scripts.pory"
	.string "At least our battle looked pretty!$"

FarOffSeaWest_EventScript_Cody_Text_0:
# 75 "data/maps/FarOffSeaWest/scripts.pory"
	.string "Let's cook up a great battle!$"

FarOffSeaWest_EventScript_Cody_Text_1:
# 75 "data/maps/FarOffSeaWest/scripts.pory"
	.string "I'm burned!$"

FarOffSeaWest_EventScript_Cody_Text_2:
# 76 "data/maps/FarOffSeaWest/scripts.pory"
	.string "These beaches are the perfect\nbackdrop for a barbecue.$"

FarOffSeaWest_EventScript_Darren_Text_0:
# 80 "data/maps/FarOffSeaWest/scripts.pory"
	.string "Ahoy, trainer!$"

FarOffSeaWest_EventScript_Darren_Text_1:
# 80 "data/maps/FarOffSeaWest/scripts.pory"
	.string "You've drowned me!$"

FarOffSeaWest_EventScript_Darren_Text_2:
# 81 "data/maps/FarOffSeaWest/scripts.pory"
	.string "Enjoy your visit!$"

FarOffSeaWest_EventScript_Jakob_Text_0:
# 85 "data/maps/FarOffSeaWest/scripts.pory"
	.string "Stop! It's time to battle!$"

FarOffSeaWest_EventScript_Jakob_Text_1:
# 85 "data/maps/FarOffSeaWest/scripts.pory"
	.string "I'm going down!$"

FarOffSeaWest_EventScript_Jakob_Text_2:
# 86 "data/maps/FarOffSeaWest/scripts.pory"
	.string "It's a struggle to stay afloat and\nbattle at the same time.$"

FarOffSeaWest_EventScript_Milo_Text_0:
# 90 "data/maps/FarOffSeaWest/scripts.pory"
	.string "Go, Pokémon! Use Dive!$"

FarOffSeaWest_EventScript_Milo_Text_1:
# 90 "data/maps/FarOffSeaWest/scripts.pory"
	.string "We've been sent to a watery grave!$"

FarOffSeaWest_EventScript_Milo_Text_2:
# 91 "data/maps/FarOffSeaWest/scripts.pory"
	.string "Phew! I could barely hold my breath\nlong enough to cross over here!$"

FarOffSeaWest_EventScript_Mira_Text_0:
# 95 "data/maps/FarOffSeaWest/scripts.pory"
	.string "If I win, let me on your Pokémon!$"

FarOffSeaWest_EventScript_Mira_Text_1:
# 95 "data/maps/FarOffSeaWest/scripts.pory"
	.string "Aww, I'm tired…$"

FarOffSeaWest_EventScript_Mira_Text_2:
# 96 "data/maps/FarOffSeaWest/scripts.pory"
	.string "I sure hope there's a sandbar to rest\nat up ahead.$"
