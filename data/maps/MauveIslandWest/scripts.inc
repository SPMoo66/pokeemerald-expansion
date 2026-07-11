MauveIslandWest_MapScripts::
# 5 "data/maps/MauveIslandWest/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MauveIslandWest_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

MauveIslandWest_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 6 "data/maps/MauveIslandWest/scripts.pory"
	setflag FLAG_TEMP_1
# 7 "data/maps/MauveIslandWest/scripts.pory"
	setflag FLAG_TEMP_2
# 8 "data/maps/MauveIslandWest/scripts.pory"
	setflag FLAG_TEMP_3
# 9 "data/maps/MauveIslandWest/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 23
	goto_if_lt MauveIslandWest_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
MauveIslandWest_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 12 "data/maps/MauveIslandWest/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 24
	goto_if_ge MauveIslandWest_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
MauveIslandWest_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 17 "data/maps/MauveIslandWest/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 40
	goto_if_eq MauveIslandWest_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
MauveIslandWest_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 20 "data/maps/MauveIslandWest/scripts.pory"
	goto_if_set FLAG_SCENE09_TRANSITION, MauveIslandWest_MapScripts_MAP_SCRIPT_ON_TRANSITION_13
MauveIslandWest_MapScripts_MAP_SCRIPT_ON_TRANSITION_12:
# 23 "data/maps/MauveIslandWest/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 45
	goto_if_eq MauveIslandWest_MapScripts_MAP_SCRIPT_ON_TRANSITION_15
	return

MauveIslandWest_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 10 "data/maps/MauveIslandWest/scripts.pory"
	setflag FLAG_TEMP_6
	goto MauveIslandWest_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

MauveIslandWest_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 13 "data/maps/MauveIslandWest/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 31
	goto_if_lt MauveIslandWest_MapScripts_MAP_SCRIPT_ON_TRANSITION_10
	goto MauveIslandWest_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

MauveIslandWest_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 18 "data/maps/MauveIslandWest/scripts.pory"
	clearflag FLAG_TEMP_2
	goto MauveIslandWest_MapScripts_MAP_SCRIPT_ON_TRANSITION_7

MauveIslandWest_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 14 "data/maps/MauveIslandWest/scripts.pory"
	clearflag FLAG_TEMP_1
	goto MauveIslandWest_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

MauveIslandWest_MapScripts_MAP_SCRIPT_ON_TRANSITION_13:
# 21 "data/maps/MauveIslandWest/scripts.pory"
	savebgm MUS_HG_VIRIDIAN_FOREST
	goto MauveIslandWest_MapScripts_MAP_SCRIPT_ON_TRANSITION_12

MauveIslandWest_MapScripts_MAP_SCRIPT_ON_TRANSITION_15:
# 24 "data/maps/MauveIslandWest/scripts.pory"
	clearflag FLAG_TEMP_1
# 25 "data/maps/MauveIslandWest/scripts.pory"
	clearflag FLAG_TEMP_3
# 26 "data/maps/MauveIslandWest/scripts.pory"
	setobjectxyperm 4, 17, 10
# 27 "data/maps/MauveIslandWest/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_DOWN_AND_RIGHT
# 28 "data/maps/MauveIslandWest/scripts.pory"
	setobjectxyperm 6, 16, 21
# 29 "data/maps/MauveIslandWest/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_WANDER_UP_AND_DOWN
# 30 "data/maps/MauveIslandWest/scripts.pory"
	addobject 6
	return


MauveIslandWest_Redd::
# 36 "data/maps/MauveIslandWest/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 31
	goto_if_lt MauveIslandWest_Redd_2
MauveIslandWest_Redd_1:
# 39 "data/maps/MauveIslandWest/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 45
	goto_if_eq MauveIslandWest_Redd_4
	return

MauveIslandWest_Redd_2:
# 37 "data/maps/MauveIslandWest/scripts.pory"
	goto Redd_Exp1_Town02
	goto MauveIslandWest_Redd_1

MauveIslandWest_Redd_4:
# 40 "data/maps/MauveIslandWest/scripts.pory"
	goto Redd_Exp1_Town07
	return


MauveIslandWest_EventScript_Leo::
# 45 "data/maps/MauveIslandWest/scripts.pory"
	trainerbattle_single TRAINER_LEO, MauveIslandWest_EventScript_Leo_Text_0, MauveIslandWest_EventScript_Leo_Text_1
# 46 "data/maps/MauveIslandWest/scripts.pory"
	msgbox MauveIslandWest_EventScript_Leo_Text_2, MSGBOX_AUTOCLOSE
	return


MauveIslandWest_EventScript_Eryk::
# 50 "data/maps/MauveIslandWest/scripts.pory"
	trainerbattle_single TRAINER_ERYK, MauveIslandWest_EventScript_Eryk_Text_0, MauveIslandWest_EventScript_Eryk_Text_1
# 51 "data/maps/MauveIslandWest/scripts.pory"
	msgbox MauveIslandWest_EventScript_Eryk_Text_2, MSGBOX_AUTOCLOSE
	return


MauveIslandWest_EventScript_HeadbuttTree::
# 55 "data/maps/MauveIslandWest/scripts.pory"
	msgbox MauveIslandWest_EventScript_HeadbuttTree_Text_0, MSGBOX_YESNO
# 56 "data/maps/MauveIslandWest/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne MauveIslandWest_EventScript_HeadbuttTree_2
MauveIslandWest_EventScript_HeadbuttTree_1:
# 75 "data/maps/MauveIslandWest/scripts.pory"
	closemessage
	return

MauveIslandWest_EventScript_HeadbuttTree_2:
# 57 "data/maps/MauveIslandWest/scripts.pory"
	msgbox MauveIslandWest_EventScript_HeadbuttTree_Text_1
# 58 "data/maps/MauveIslandWest/scripts.pory"
	closemessage
# 59 "data/maps/MauveIslandWest/scripts.pory"
	applymovement LOCALID_PLAYER, Movement_PlayerHeadbutt
# 60 "data/maps/MauveIslandWest/scripts.pory"
	waitmovement 0
# 61 "data/maps/MauveIslandWest/scripts.pory"
	playse SE_SUPER_EFFECTIVE
# 62 "data/maps/MauveIslandWest/scripts.pory"
	setvar VAR_0x8004, 1
# 63 "data/maps/MauveIslandWest/scripts.pory"
	setvar VAR_0x8005, 1
# 64 "data/maps/MauveIslandWest/scripts.pory"
	setvar VAR_0x8006, 6
# 65 "data/maps/MauveIslandWest/scripts.pory"
	setvar VAR_0x8007, 2
# 66 "data/maps/MauveIslandWest/scripts.pory"
	special ShakeCamera
# 67 "data/maps/MauveIslandWest/scripts.pory"
	waitstate
# 68 "data/maps/MauveIslandWest/scripts.pory"
	setflag FLAG_SYS_SPAWN_INVISIBLE
# 69 "data/maps/MauveIslandWest/scripts.pory"
	setflag FLAG_MAUVE_CAMP_HEADBUTT_SCENE
# 70 "data/maps/MauveIslandWest/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 71 "data/maps/MauveIslandWest/scripts.pory"
	delay 40
# 72 "data/maps/MauveIslandWest/scripts.pory"
	warpsilent MAP_MAUVE_CAMP, 23, 10
# 73 "data/maps/MauveIslandWest/scripts.pory"
	waitstate
	goto MauveIslandWest_EventScript_HeadbuttTree_1


# 78 "data/maps/MauveIslandWest/scripts.pory"
Movement_PlayerHeadbutt:
# 79 "data/maps/MauveIslandWest/scripts.pory"
	lock_facing_direction
# 80 "data/maps/MauveIslandWest/scripts.pory"
	walk_down
# 80 "data/maps/MauveIslandWest/scripts.pory"
	walk_down
# 80 "data/maps/MauveIslandWest/scripts.pory"
	walk_down
# 81 "data/maps/MauveIslandWest/scripts.pory"
	delay_16
# 81 "data/maps/MauveIslandWest/scripts.pory"
	delay_16
# 81 "data/maps/MauveIslandWest/scripts.pory"
	delay_16
# 82 "data/maps/MauveIslandWest/scripts.pory"
	walk_in_place_fast_up
# 82 "data/maps/MauveIslandWest/scripts.pory"
	walk_in_place_fast_up
# 82 "data/maps/MauveIslandWest/scripts.pory"
	walk_in_place_fast_up
# 82 "data/maps/MauveIslandWest/scripts.pory"
	walk_in_place_fast_up
# 83 "data/maps/MauveIslandWest/scripts.pory"
	walk_faster_up
# 83 "data/maps/MauveIslandWest/scripts.pory"
	walk_faster_up
# 83 "data/maps/MauveIslandWest/scripts.pory"
	walk_faster_up
	step_end

TrainerTipsOceanGrass::
# 87 "data/maps/MauveIslandWest/scripts.pory"
	msgbox TrainerTipsOceanGrass_Text_0, MSGBOX_SIGN
	return


MauveIslandWest_EventScript_Leo_Text_0:
# 45 "data/maps/MauveIslandWest/scripts.pory"
	.string "I came here to train for my next\ntriathlon!\pI'll use you to train my Pokémon too!$"

MauveIslandWest_EventScript_Leo_Text_1:
# 45 "data/maps/MauveIslandWest/scripts.pory"
	.string "All I have left is myself!$"

MauveIslandWest_EventScript_Leo_Text_2:
# 46 "data/maps/MauveIslandWest/scripts.pory"
	.string "It seems like I was too focused on\ntraining my own body.$"

MauveIslandWest_EventScript_Eryk_Text_0:
# 50 "data/maps/MauveIslandWest/scripts.pory"
	.string "New lands, new Pokémon! Help me get\nready to catch some with a battle!$"

MauveIslandWest_EventScript_Eryk_Text_1:
# 50 "data/maps/MauveIslandWest/scripts.pory"
	.string "Blast!$"

MauveIslandWest_EventScript_Eryk_Text_2:
# 51 "data/maps/MauveIslandWest/scripts.pory"
	.string "I need to hurry up and catch something\ngood!$"

MauveIslandWest_EventScript_HeadbuttTree_Text_0:
# 55 "data/maps/MauveIslandWest/scripts.pory"
	.string "A Pokémon could be in this tree.\nWant to Headbutt it?$"

MauveIslandWest_EventScript_HeadbuttTree_Text_1:
# 57 "data/maps/MauveIslandWest/scripts.pory"
	.string "{PLAYER} used Headbutt!$"

TrainerTipsOceanGrass_Text_0:
# 87 "data/maps/MauveIslandWest/scripts.pory"
	.string "Trainer Tips\pGrassy areas in the ocean are home\nto different pools of Pokémon than\lthe open oceans.$"
