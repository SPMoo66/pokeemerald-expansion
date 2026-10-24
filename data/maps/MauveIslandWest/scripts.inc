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
	compare VAR_EMERALBODY_RIVAL_STATE, 24
	goto_if_ge MauveIslandWest_EventScript_HeadbuttTree_2
# 85 "data/maps/MauveIslandWest/scripts.pory"
	msgbox Text_HeadbuttTree, MSGBOX_AUTOCLOSE
# 86 "data/maps/MauveIslandWest/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 87 "data/maps/MauveIslandWest/scripts.pory"
	waitmovement 0
# 88 "data/maps/MauveIslandWest/scripts.pory"
	msgbox MauveIslandWest_EventScript_HeadbuttTree_Text_1, MSGBOX_DEFAULT
MauveIslandWest_EventScript_HeadbuttTree_1:
# 91 "data/maps/MauveIslandWest/scripts.pory"
	closemessage
	return

MauveIslandWest_EventScript_HeadbuttTree_2:
# 56 "data/maps/MauveIslandWest/scripts.pory"
	msgbox Text_HeadbuttTree, MSGBOX_YESNO
# 57 "data/maps/MauveIslandWest/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne MauveIslandWest_EventScript_HeadbuttTree_5
	goto MauveIslandWest_EventScript_HeadbuttTree_1

MauveIslandWest_EventScript_HeadbuttTree_5:
# 58 "data/maps/MauveIslandWest/scripts.pory"
	msgbox MauveIslandWest_EventScript_HeadbuttTree_Text_0
# 59 "data/maps/MauveIslandWest/scripts.pory"
	closemessage
# 60 "data/maps/MauveIslandWest/scripts.pory"
	applymovement LOCALID_PLAYER, Movement_PlayerHeadbutt
# 61 "data/maps/MauveIslandWest/scripts.pory"
	waitmovement 0
# 62 "data/maps/MauveIslandWest/scripts.pory"
	playse SE_SUPER_EFFECTIVE
# 63 "data/maps/MauveIslandWest/scripts.pory"
	setvar VAR_0x8004, 1
# 64 "data/maps/MauveIslandWest/scripts.pory"
	setvar VAR_0x8005, 1
# 65 "data/maps/MauveIslandWest/scripts.pory"
	setvar VAR_0x8006, 6
# 66 "data/maps/MauveIslandWest/scripts.pory"
	setvar VAR_0x8007, 2
# 67 "data/maps/MauveIslandWest/scripts.pory"
	special ShakeCamera
# 68 "data/maps/MauveIslandWest/scripts.pory"
	waitstate
# 69 "data/maps/MauveIslandWest/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 70 "data/maps/MauveIslandWest/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 51
	goto_if_ge MauveIslandWest_EventScript_HeadbuttTree_9
MauveIslandWest_EventScript_HeadbuttTree_8:
# 76 "data/maps/MauveIslandWest/scripts.pory"
	setflag FLAG_SYS_SPAWN_INVISIBLE
# 77 "data/maps/MauveIslandWest/scripts.pory"
	setflag FLAG_MAUVE_CAMP_HEADBUTT_SCENE
# 78 "data/maps/MauveIslandWest/scripts.pory"
	delay 40
# 79 "data/maps/MauveIslandWest/scripts.pory"
	warpsilent MAP_MAUVE_CAMP, 23, 10
# 80 "data/maps/MauveIslandWest/scripts.pory"
	waitstate
	goto MauveIslandWest_EventScript_HeadbuttTree_1

MauveIslandWest_EventScript_HeadbuttTree_7:
# 71 "data/maps/MauveIslandWest/scripts.pory"
	setflag FLAG_DONT_START_MUSIC_ON_WARP
# 72 "data/maps/MauveIslandWest/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 73 "data/maps/MauveIslandWest/scripts.pory"
	warpcontinuescript MAP_MAUVE_ISLAND_WEST, 30, 5, MauveIslandWest_EventScript_Unknown
	goto MauveIslandWest_EventScript_HeadbuttTree_1

MauveIslandWest_EventScript_HeadbuttTree_9:
# 70 "data/maps/MauveIslandWest/scripts.pory"
	checktrainerflag TRAINER_UNKNOWN
	goto_if 0, MauveIslandWest_EventScript_HeadbuttTree_7
	goto MauveIslandWest_EventScript_HeadbuttTree_8


# 99 "data/maps/MauveIslandWest/scripts.pory"
Movement_PlayerHeadbutt:
# 100 "data/maps/MauveIslandWest/scripts.pory"
	lock_facing_direction
# 101 "data/maps/MauveIslandWest/scripts.pory"
	walk_down
# 101 "data/maps/MauveIslandWest/scripts.pory"
	walk_down
# 101 "data/maps/MauveIslandWest/scripts.pory"
	walk_down
# 102 "data/maps/MauveIslandWest/scripts.pory"
	delay_16
# 102 "data/maps/MauveIslandWest/scripts.pory"
	delay_16
# 102 "data/maps/MauveIslandWest/scripts.pory"
	delay_16
# 103 "data/maps/MauveIslandWest/scripts.pory"
	walk_in_place_fast_up
# 103 "data/maps/MauveIslandWest/scripts.pory"
	walk_in_place_fast_up
# 103 "data/maps/MauveIslandWest/scripts.pory"
	walk_in_place_fast_up
# 103 "data/maps/MauveIslandWest/scripts.pory"
	walk_in_place_fast_up
# 104 "data/maps/MauveIslandWest/scripts.pory"
	walk_faster_up
# 104 "data/maps/MauveIslandWest/scripts.pory"
	walk_faster_up
# 104 "data/maps/MauveIslandWest/scripts.pory"
	walk_faster_up
	step_end

TrainerTipsOceanGrass::
# 108 "data/maps/MauveIslandWest/scripts.pory"
	msgbox TrainerTipsOceanGrass_Text_0, MSGBOX_SIGN
	return


MauveIslandWest_EventScript_Unknown::
# 112 "data/maps/MauveIslandWest/scripts.pory"
	clearflag FLAG_DONT_START_MUSIC_ON_WARP
# 113 "data/maps/MauveIslandWest/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 114 "data/maps/MauveIslandWest/scripts.pory"
	delay 80
# 115 "data/maps/MauveIslandWest/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 3
# 116 "data/maps/MauveIslandWest/scripts.pory"
	delay 20
# 117 "data/maps/MauveIslandWest/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_QuestionMark
# 118 "data/maps/MauveIslandWest/scripts.pory"
	delay 60
# 119 "data/maps/MauveIslandWest/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceUp
# 120 "data/maps/MauveIslandWest/scripts.pory"
	waitmovement 0
# 121 "data/maps/MauveIslandWest/scripts.pory"
	delay 10
# 122 "data/maps/MauveIslandWest/scripts.pory"
	speakername CommonText_Q
# 123 "data/maps/MauveIslandWest/scripts.pory"
	msgbox MauveIslandWest_EventScript_Unknown_Text_0
# 124 "data/maps/MauveIslandWest/scripts.pory"
	closemessage
# 125 "data/maps/MauveIslandWest/scripts.pory"
	delay 10
# 126 "data/maps/MauveIslandWest/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_Talking
# 127 "data/maps/MauveIslandWest/scripts.pory"
	delay 60
# 128 "data/maps/MauveIslandWest/scripts.pory"
	speakername CommonText_Q
# 129 "data/maps/MauveIslandWest/scripts.pory"
	msgbox MauveIslandWest_EventScript_Unknown_Text_0
# 130 "data/maps/MauveIslandWest/scripts.pory"
	closemessage
# 131 "data/maps/MauveIslandWest/scripts.pory"
	playbgm MUS_HG_VIRIDIAN_FOREST, FALSE
# 132 "data/maps/MauveIslandWest/scripts.pory"
	delay 20
# 133 "data/maps/MauveIslandWest/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 134 "data/maps/MauveIslandWest/scripts.pory"
	playse SE_PIN
# 135 "data/maps/MauveIslandWest/scripts.pory"
	delay 40
# 136 "data/maps/MauveIslandWest/scripts.pory"
	setflag FLAG_DONT_TRANSITION_BATTLE_MUSIC
# 137 "data/maps/MauveIslandWest/scripts.pory"
	setflag FLAG_SUPERBOSS_TRAINER
# 138 "data/maps/MauveIslandWest/scripts.pory"
	setflag FLAG_IGNORE_LEVEL_SYNC
# 139 "data/maps/MauveIslandWest/scripts.pory"
	trainerbattle_no_intro TRAINER_UNKNOWN, MauveIslandWest_EventScript_Unknown_Text_1
# 140 "data/maps/MauveIslandWest/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_BATTLE_MUSIC
# 141 "data/maps/MauveIslandWest/scripts.pory"
	clearflag FLAG_SUPERBOSS_TRAINER
# 142 "data/maps/MauveIslandWest/scripts.pory"
	clearflag FLAG_IGNORE_LEVEL_SYNC
# 143 "data/maps/MauveIslandWest/scripts.pory"
	mosaicmorph 10, OBJ_EVENT_GFX_NONE
# 144 "data/maps/MauveIslandWest/scripts.pory"
	delay 80
# 145 "data/maps/MauveIslandWest/scripts.pory"
	removeobject IG_BOSS
# 146 "data/maps/MauveIslandWest/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_SweatDrop
# 147 "data/maps/MauveIslandWest/scripts.pory"
	playse SE_M_METRONOME
# 148 "data/maps/MauveIslandWest/scripts.pory"
	delay 40
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
# 58 "data/maps/MauveIslandWest/scripts.pory"
	.string "{PLAYER} used Headbutt!$"

MauveIslandWest_EventScript_HeadbuttTree_Text_1:
# 88 "data/maps/MauveIslandWest/scripts.pory"
	.string "Wait, is that Jakson's voice?\n"
	.string "Better check it out first!$"

TrainerTipsOceanGrass_Text_0:
# 108 "data/maps/MauveIslandWest/scripts.pory"
	.string "Trainer Tips\pGrassy areas in the ocean are home\nto different pools of Pokémon than\lthe open oceans.$"

MauveIslandWest_EventScript_Unknown_Text_0:
# 123 "data/maps/MauveIslandWest/scripts.pory"
	.string "{PAUSE 100}…$"

MauveIslandWest_EventScript_Unknown_Text_1:
# 139 "data/maps/MauveIslandWest/scripts.pory"
	.string "…{PAUSE 60} …{PAUSE 60} …$"

Text_HeadbuttTree::
# 94 "data/maps/MauveIslandWest/scripts.pory"
	.string "A Pokémon could be in this tree.\n"
	.string "Want to Headbutt it?$"
