MauveIslandWest_MapScripts::
# 2 "data/maps/MauveIslandWest/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MauveIslandWest_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

MauveIslandWest_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/MauveIslandWest/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 23
	goto_if_lt MauveIslandWest_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

MauveIslandWest_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 4 "data/maps/MauveIslandWest/scripts.pory"
	setflag FLAG_TEMP_6
	return


MauveIslandWest_EventScript_Leo::
# 10 "data/maps/MauveIslandWest/scripts.pory"
	trainerbattle_single TRAINER_LEO, MauveIslandWest_EventScript_Leo_Text_0, MauveIslandWest_EventScript_Leo_Text_1
# 11 "data/maps/MauveIslandWest/scripts.pory"
	msgbox MauveIslandWest_EventScript_Leo_Text_2, MSGBOX_AUTOCLOSE
	return


MauveIslandWest_EventScript_Eryk::
# 15 "data/maps/MauveIslandWest/scripts.pory"
	trainerbattle_single TRAINER_ERYK, MauveIslandWest_EventScript_Eryk_Text_0, MauveIslandWest_EventScript_Eryk_Text_1
# 16 "data/maps/MauveIslandWest/scripts.pory"
	msgbox MauveIslandWest_EventScript_Eryk_Text_2, MSGBOX_AUTOCLOSE
	return


MauveIslandWest_EventScript_HeadbuttTree::
# 20 "data/maps/MauveIslandWest/scripts.pory"
	msgbox MauveIslandWest_EventScript_HeadbuttTree_Text_0, MSGBOX_YESNO
# 21 "data/maps/MauveIslandWest/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne MauveIslandWest_EventScript_HeadbuttTree_2
MauveIslandWest_EventScript_HeadbuttTree_1:
# 39 "data/maps/MauveIslandWest/scripts.pory"
	closemessage
	return

MauveIslandWest_EventScript_HeadbuttTree_2:
# 22 "data/maps/MauveIslandWest/scripts.pory"
	msgbox MauveIslandWest_EventScript_HeadbuttTree_Text_1
# 23 "data/maps/MauveIslandWest/scripts.pory"
	closemessage
# 24 "data/maps/MauveIslandWest/scripts.pory"
	applymovement LOCALID_PLAYER, Movement_PlayerHeadbutt
# 25 "data/maps/MauveIslandWest/scripts.pory"
	waitmovement 0
# 26 "data/maps/MauveIslandWest/scripts.pory"
	playse SE_SUPER_EFFECTIVE
# 27 "data/maps/MauveIslandWest/scripts.pory"
	setvar VAR_0x8004, 1
# 28 "data/maps/MauveIslandWest/scripts.pory"
	setvar VAR_0x8005, 1
# 29 "data/maps/MauveIslandWest/scripts.pory"
	setvar VAR_0x8006, 6
# 30 "data/maps/MauveIslandWest/scripts.pory"
	setvar VAR_0x8007, 2
# 31 "data/maps/MauveIslandWest/scripts.pory"
	special ShakeCamera
# 32 "data/maps/MauveIslandWest/scripts.pory"
	waitstate
# 33 "data/maps/MauveIslandWest/scripts.pory"
	setflag FLAG_SYS_SPAWN_INVISIBLE
# 34 "data/maps/MauveIslandWest/scripts.pory"
	setflag FLAG_MAUVE_CAMP_HEADBUTT_SCENE
# 35 "data/maps/MauveIslandWest/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 36 "data/maps/MauveIslandWest/scripts.pory"
	delay 40
# 37 "data/maps/MauveIslandWest/scripts.pory"
	warpsilent MAP_MAUVE_CAMP, 23, 10
	goto MauveIslandWest_EventScript_HeadbuttTree_1


# 42 "data/maps/MauveIslandWest/scripts.pory"
Movement_PlayerHeadbutt:
# 43 "data/maps/MauveIslandWest/scripts.pory"
	lock_facing_direction
# 44 "data/maps/MauveIslandWest/scripts.pory"
	walk_down
# 44 "data/maps/MauveIslandWest/scripts.pory"
	walk_down
# 44 "data/maps/MauveIslandWest/scripts.pory"
	walk_down
# 45 "data/maps/MauveIslandWest/scripts.pory"
	delay_16
# 45 "data/maps/MauveIslandWest/scripts.pory"
	delay_16
# 45 "data/maps/MauveIslandWest/scripts.pory"
	delay_16
# 46 "data/maps/MauveIslandWest/scripts.pory"
	walk_in_place_fast_up
# 46 "data/maps/MauveIslandWest/scripts.pory"
	walk_in_place_fast_up
# 46 "data/maps/MauveIslandWest/scripts.pory"
	walk_in_place_fast_up
# 46 "data/maps/MauveIslandWest/scripts.pory"
	walk_in_place_fast_up
# 47 "data/maps/MauveIslandWest/scripts.pory"
	walk_faster_up
# 47 "data/maps/MauveIslandWest/scripts.pory"
	walk_faster_up
# 47 "data/maps/MauveIslandWest/scripts.pory"
	walk_faster_up
	step_end

TrainerTipsOceanGrass::
# 51 "data/maps/MauveIslandWest/scripts.pory"
	msgbox TrainerTipsOceanGrass_Text_0, MSGBOX_SIGN
	return


MauveIslandWest_EventScript_Leo_Text_0:
# 10 "data/maps/MauveIslandWest/scripts.pory"
	.string "I came here to train for my next\ntriathlon!\pI'll use you to train my Pokémon too!$"

MauveIslandWest_EventScript_Leo_Text_1:
# 10 "data/maps/MauveIslandWest/scripts.pory"
	.string "All I have left is myself!$"

MauveIslandWest_EventScript_Leo_Text_2:
# 11 "data/maps/MauveIslandWest/scripts.pory"
	.string "It seems like I was too focused on\ntraining my own body.$"

MauveIslandWest_EventScript_Eryk_Text_0:
# 15 "data/maps/MauveIslandWest/scripts.pory"
	.string "New lands, new Pokémon! Help me get\nready to catch some with a battle!$"

MauveIslandWest_EventScript_Eryk_Text_1:
# 15 "data/maps/MauveIslandWest/scripts.pory"
	.string "Blast!$"

MauveIslandWest_EventScript_Eryk_Text_2:
# 16 "data/maps/MauveIslandWest/scripts.pory"
	.string "I need to hurry up and catch something\ngood!$"

MauveIslandWest_EventScript_HeadbuttTree_Text_0:
# 20 "data/maps/MauveIslandWest/scripts.pory"
	.string "A Pokémon could be in this tree.\nWant to Headbutt it?$"

MauveIslandWest_EventScript_HeadbuttTree_Text_1:
# 22 "data/maps/MauveIslandWest/scripts.pory"
	.string "{PLAYER} used Headbutt!$"

TrainerTipsOceanGrass_Text_0:
# 51 "data/maps/MauveIslandWest/scripts.pory"
	.string "Trainer Tips\pGrassy areas in the ocean are home\nto different pools of Pokémon than\lthe open oceans.$"
