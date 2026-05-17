MauveIslandWest_MapScripts::
	.byte 0


MauveIslandWest_EventScript_Leo::
# 4 "data/maps/MauveIslandWest/scripts.pory"
	trainerbattle_single TRAINER_LEO, MauveIslandWest_EventScript_Leo_Text_0, MauveIslandWest_EventScript_Leo_Text_1
# 5 "data/maps/MauveIslandWest/scripts.pory"
	msgbox MauveIslandWest_EventScript_Leo_Text_2, MSGBOX_AUTOCLOSE
	return


MauveIslandWest_EventScript_Eryk::
# 9 "data/maps/MauveIslandWest/scripts.pory"
	trainerbattle_single TRAINER_ERYK, MauveIslandWest_EventScript_Eryk_Text_0, MauveIslandWest_EventScript_Eryk_Text_1
# 10 "data/maps/MauveIslandWest/scripts.pory"
	msgbox MauveIslandWest_EventScript_Eryk_Text_2, MSGBOX_AUTOCLOSE
	return


MauveIslandWest_EventScript_HeadbuttTree::
# 14 "data/maps/MauveIslandWest/scripts.pory"
	msgbox MauveIslandWest_EventScript_HeadbuttTree_Text_0, MSGBOX_YESNO
# 15 "data/maps/MauveIslandWest/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne MauveIslandWest_EventScript_HeadbuttTree_2
MauveIslandWest_EventScript_HeadbuttTree_1:
# 33 "data/maps/MauveIslandWest/scripts.pory"
	closemessage
	return

MauveIslandWest_EventScript_HeadbuttTree_2:
# 16 "data/maps/MauveIslandWest/scripts.pory"
	msgbox MauveIslandWest_EventScript_HeadbuttTree_Text_1
# 17 "data/maps/MauveIslandWest/scripts.pory"
	closemessage
# 18 "data/maps/MauveIslandWest/scripts.pory"
	applymovement LOCALID_PLAYER, Movement_PlayerHeadbutt
# 19 "data/maps/MauveIslandWest/scripts.pory"
	waitmovement 0
# 20 "data/maps/MauveIslandWest/scripts.pory"
	playse SE_SUPER_EFFECTIVE
# 21 "data/maps/MauveIslandWest/scripts.pory"
	setvar VAR_0x8004, 1
# 22 "data/maps/MauveIslandWest/scripts.pory"
	setvar VAR_0x8005, 1
# 23 "data/maps/MauveIslandWest/scripts.pory"
	setvar VAR_0x8006, 6
# 24 "data/maps/MauveIslandWest/scripts.pory"
	setvar VAR_0x8007, 2
# 25 "data/maps/MauveIslandWest/scripts.pory"
	special ShakeCamera
# 26 "data/maps/MauveIslandWest/scripts.pory"
	waitstate
# 27 "data/maps/MauveIslandWest/scripts.pory"
	setflag FLAG_SYS_SPAWN_INVISIBLE
# 28 "data/maps/MauveIslandWest/scripts.pory"
	setflag FLAG_MAUVE_CAMP_HEADBUTT_SCENE
# 29 "data/maps/MauveIslandWest/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 30 "data/maps/MauveIslandWest/scripts.pory"
	delay 40
# 31 "data/maps/MauveIslandWest/scripts.pory"
	warpsilent MAP_MAUVE_CAMP, 23, 10
	goto MauveIslandWest_EventScript_HeadbuttTree_1


# 36 "data/maps/MauveIslandWest/scripts.pory"
Movement_PlayerHeadbutt:
# 37 "data/maps/MauveIslandWest/scripts.pory"
	lock_facing_direction
# 38 "data/maps/MauveIslandWest/scripts.pory"
	walk_down
# 38 "data/maps/MauveIslandWest/scripts.pory"
	walk_down
# 38 "data/maps/MauveIslandWest/scripts.pory"
	walk_down
# 39 "data/maps/MauveIslandWest/scripts.pory"
	delay_16
# 39 "data/maps/MauveIslandWest/scripts.pory"
	delay_16
# 39 "data/maps/MauveIslandWest/scripts.pory"
	delay_16
# 40 "data/maps/MauveIslandWest/scripts.pory"
	walk_in_place_fast_up
# 40 "data/maps/MauveIslandWest/scripts.pory"
	walk_in_place_fast_up
# 40 "data/maps/MauveIslandWest/scripts.pory"
	walk_in_place_fast_up
# 40 "data/maps/MauveIslandWest/scripts.pory"
	walk_in_place_fast_up
# 41 "data/maps/MauveIslandWest/scripts.pory"
	walk_faster_up
# 41 "data/maps/MauveIslandWest/scripts.pory"
	walk_faster_up
# 41 "data/maps/MauveIslandWest/scripts.pory"
	walk_faster_up
	step_end

MauveIslandWest_EventScript_Leo_Text_0:
# 4 "data/maps/MauveIslandWest/scripts.pory"
	.string "I came here to train for my next\ntriathlon!\pI'll use you to train my Pokémon too!$"

MauveIslandWest_EventScript_Leo_Text_1:
# 4 "data/maps/MauveIslandWest/scripts.pory"
	.string "All I have left is myself!$"

MauveIslandWest_EventScript_Leo_Text_2:
# 5 "data/maps/MauveIslandWest/scripts.pory"
	.string "It seems like I was too focused on\ntraining my own body.$"

MauveIslandWest_EventScript_Eryk_Text_0:
# 9 "data/maps/MauveIslandWest/scripts.pory"
	.string "New lands, new Pokémon! Help me get\nready to catch some with a battle!$"

MauveIslandWest_EventScript_Eryk_Text_1:
# 9 "data/maps/MauveIslandWest/scripts.pory"
	.string "Blast!$"

MauveIslandWest_EventScript_Eryk_Text_2:
# 10 "data/maps/MauveIslandWest/scripts.pory"
	.string "I need to hurry up and catch something\ngood!$"

MauveIslandWest_EventScript_HeadbuttTree_Text_0:
# 14 "data/maps/MauveIslandWest/scripts.pory"
	.string "A Pokémon could be in this tree.\nWant to Headbutt it?$"

MauveIslandWest_EventScript_HeadbuttTree_Text_1:
# 16 "data/maps/MauveIslandWest/scripts.pory"
	.string "{PLAYER} used Headbutt!$"
