MauveIslandWest_MapScripts::
# 2 "data/maps/MauveIslandWest/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MauveIslandWest_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

MauveIslandWest_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/MauveIslandWest/scripts.pory"
	setflag FLAG_TEMP_1
# 4 "data/maps/MauveIslandWest/scripts.pory"
	setflag FLAG_TEMP_2
# 5 "data/maps/MauveIslandWest/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 23
	goto_if_lt MauveIslandWest_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
MauveIslandWest_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 8 "data/maps/MauveIslandWest/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 24
	goto_if_ge MauveIslandWest_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
MauveIslandWest_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 13 "data/maps/MauveIslandWest/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 40
	goto_if_eq MauveIslandWest_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
	return

MauveIslandWest_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 6 "data/maps/MauveIslandWest/scripts.pory"
	setflag FLAG_TEMP_6
	goto MauveIslandWest_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

MauveIslandWest_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 9 "data/maps/MauveIslandWest/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 31
	goto_if_lt MauveIslandWest_MapScripts_MAP_SCRIPT_ON_TRANSITION_9
	goto MauveIslandWest_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

MauveIslandWest_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 14 "data/maps/MauveIslandWest/scripts.pory"
	clearflag FLAG_TEMP_2
	return

MauveIslandWest_MapScripts_MAP_SCRIPT_ON_TRANSITION_9:
# 10 "data/maps/MauveIslandWest/scripts.pory"
	clearflag FLAG_TEMP_1
	goto MauveIslandWest_MapScripts_MAP_SCRIPT_ON_TRANSITION_4


MauveIslandWest_Redd::
# 20 "data/maps/MauveIslandWest/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 31
	goto_if_lt MauveIslandWest_Redd_1
	return

MauveIslandWest_Redd_1:
# 21 "data/maps/MauveIslandWest/scripts.pory"
	goto Redd_Exp1_Town02
	return


MauveIslandWest_EventScript_Leo::
# 26 "data/maps/MauveIslandWest/scripts.pory"
	trainerbattle_single TRAINER_LEO, MauveIslandWest_EventScript_Leo_Text_0, MauveIslandWest_EventScript_Leo_Text_1
# 27 "data/maps/MauveIslandWest/scripts.pory"
	msgbox MauveIslandWest_EventScript_Leo_Text_2, MSGBOX_AUTOCLOSE
	return


MauveIslandWest_EventScript_Eryk::
# 31 "data/maps/MauveIslandWest/scripts.pory"
	trainerbattle_single TRAINER_ERYK, MauveIslandWest_EventScript_Eryk_Text_0, MauveIslandWest_EventScript_Eryk_Text_1
# 32 "data/maps/MauveIslandWest/scripts.pory"
	msgbox MauveIslandWest_EventScript_Eryk_Text_2, MSGBOX_AUTOCLOSE
	return


MauveIslandWest_EventScript_HeadbuttTree::
# 36 "data/maps/MauveIslandWest/scripts.pory"
	msgbox MauveIslandWest_EventScript_HeadbuttTree_Text_0, MSGBOX_YESNO
# 37 "data/maps/MauveIslandWest/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne MauveIslandWest_EventScript_HeadbuttTree_2
MauveIslandWest_EventScript_HeadbuttTree_1:
# 56 "data/maps/MauveIslandWest/scripts.pory"
	closemessage
	return

MauveIslandWest_EventScript_HeadbuttTree_2:
# 38 "data/maps/MauveIslandWest/scripts.pory"
	msgbox MauveIslandWest_EventScript_HeadbuttTree_Text_1
# 39 "data/maps/MauveIslandWest/scripts.pory"
	closemessage
# 40 "data/maps/MauveIslandWest/scripts.pory"
	applymovement LOCALID_PLAYER, Movement_PlayerHeadbutt
# 41 "data/maps/MauveIslandWest/scripts.pory"
	waitmovement 0
# 42 "data/maps/MauveIslandWest/scripts.pory"
	playse SE_SUPER_EFFECTIVE
# 43 "data/maps/MauveIslandWest/scripts.pory"
	setvar VAR_0x8004, 1
# 44 "data/maps/MauveIslandWest/scripts.pory"
	setvar VAR_0x8005, 1
# 45 "data/maps/MauveIslandWest/scripts.pory"
	setvar VAR_0x8006, 6
# 46 "data/maps/MauveIslandWest/scripts.pory"
	setvar VAR_0x8007, 2
# 47 "data/maps/MauveIslandWest/scripts.pory"
	special ShakeCamera
# 48 "data/maps/MauveIslandWest/scripts.pory"
	waitstate
# 49 "data/maps/MauveIslandWest/scripts.pory"
	setflag FLAG_SYS_SPAWN_INVISIBLE
# 50 "data/maps/MauveIslandWest/scripts.pory"
	setflag FLAG_MAUVE_CAMP_HEADBUTT_SCENE
# 51 "data/maps/MauveIslandWest/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 52 "data/maps/MauveIslandWest/scripts.pory"
	delay 40
# 53 "data/maps/MauveIslandWest/scripts.pory"
	warpsilent MAP_MAUVE_CAMP, 23, 10
# 54 "data/maps/MauveIslandWest/scripts.pory"
	waitstate
	goto MauveIslandWest_EventScript_HeadbuttTree_1


# 59 "data/maps/MauveIslandWest/scripts.pory"
Movement_PlayerHeadbutt:
# 60 "data/maps/MauveIslandWest/scripts.pory"
	lock_facing_direction
# 61 "data/maps/MauveIslandWest/scripts.pory"
	walk_down
# 61 "data/maps/MauveIslandWest/scripts.pory"
	walk_down
# 61 "data/maps/MauveIslandWest/scripts.pory"
	walk_down
# 62 "data/maps/MauveIslandWest/scripts.pory"
	delay_16
# 62 "data/maps/MauveIslandWest/scripts.pory"
	delay_16
# 62 "data/maps/MauveIslandWest/scripts.pory"
	delay_16
# 63 "data/maps/MauveIslandWest/scripts.pory"
	walk_in_place_fast_up
# 63 "data/maps/MauveIslandWest/scripts.pory"
	walk_in_place_fast_up
# 63 "data/maps/MauveIslandWest/scripts.pory"
	walk_in_place_fast_up
# 63 "data/maps/MauveIslandWest/scripts.pory"
	walk_in_place_fast_up
# 64 "data/maps/MauveIslandWest/scripts.pory"
	walk_faster_up
# 64 "data/maps/MauveIslandWest/scripts.pory"
	walk_faster_up
# 64 "data/maps/MauveIslandWest/scripts.pory"
	walk_faster_up
	step_end

TrainerTipsOceanGrass::
# 68 "data/maps/MauveIslandWest/scripts.pory"
	msgbox TrainerTipsOceanGrass_Text_0, MSGBOX_SIGN
	return


MauveIslandWest_EventScript_Leo_Text_0:
# 26 "data/maps/MauveIslandWest/scripts.pory"
	.string "I came here to train for my next\ntriathlon!\pI'll use you to train my Pokémon too!$"

MauveIslandWest_EventScript_Leo_Text_1:
# 26 "data/maps/MauveIslandWest/scripts.pory"
	.string "All I have left is myself!$"

MauveIslandWest_EventScript_Leo_Text_2:
# 27 "data/maps/MauveIslandWest/scripts.pory"
	.string "It seems like I was too focused on\ntraining my own body.$"

MauveIslandWest_EventScript_Eryk_Text_0:
# 31 "data/maps/MauveIslandWest/scripts.pory"
	.string "New lands, new Pokémon! Help me get\nready to catch some with a battle!$"

MauveIslandWest_EventScript_Eryk_Text_1:
# 31 "data/maps/MauveIslandWest/scripts.pory"
	.string "Blast!$"

MauveIslandWest_EventScript_Eryk_Text_2:
# 32 "data/maps/MauveIslandWest/scripts.pory"
	.string "I need to hurry up and catch something\ngood!$"

MauveIslandWest_EventScript_HeadbuttTree_Text_0:
# 36 "data/maps/MauveIslandWest/scripts.pory"
	.string "A Pokémon could be in this tree.\nWant to Headbutt it?$"

MauveIslandWest_EventScript_HeadbuttTree_Text_1:
# 38 "data/maps/MauveIslandWest/scripts.pory"
	.string "{PLAYER} used Headbutt!$"

TrainerTipsOceanGrass_Text_0:
# 68 "data/maps/MauveIslandWest/scripts.pory"
	.string "Trainer Tips\pGrassy areas in the ocean are home\nto different pools of Pokémon than\lthe open oceans.$"
