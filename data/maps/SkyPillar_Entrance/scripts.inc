SkyPillar_Entrance_MapScripts::
# 4 "data/maps/SkyPillar_Entrance/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SkyPillar_Entrance_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

SkyPillar_Entrance_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 5 "data/maps/SkyPillar_Entrance/scripts.pory"
	setflag FLAG_LANDMARK_SKY_PILLAR
# 6 "data/maps/SkyPillar_Entrance/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
	return


SkyPillar_Rival_Battle::
# 11 "data/maps/SkyPillar_Entrance/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 3
	goto_if_eq SkyPillar_Rival_Battle_2
SkyPillar_Rival_Battle_1:
# 89 "data/maps/SkyPillar_Entrance/scripts.pory"
	release
	return

SkyPillar_Rival_Battle_2:
# 12 "data/maps/SkyPillar_Entrance/scripts.pory"
	lock
# 13 "data/maps/SkyPillar_Entrance/scripts.pory"
	addobject 1
# 14 "data/maps/SkyPillar_Entrance/scripts.pory"
	setobjectxy 1, 6, 16
# 15 "data/maps/SkyPillar_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceDown
# 16 "data/maps/SkyPillar_Entrance/scripts.pory"
	applymovement 1, Common_Movement_FaceUp
# 17 "data/maps/SkyPillar_Entrance/scripts.pory"
	checkplayergender
# 18 "data/maps/SkyPillar_Entrance/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq SkyPillar_Rival_Battle_5
# 22 "data/maps/SkyPillar_Entrance/scripts.pory"
	call Route119_EventScript_PlayBrendanMusic
SkyPillar_Rival_Battle_4:
# 24 "data/maps/SkyPillar_Entrance/scripts.pory"
	playse SE_EXIT
# 25 "data/maps/SkyPillar_Entrance/scripts.pory"
	delay 30
# 26 "data/maps/SkyPillar_Entrance/scripts.pory"
	applymovement 1, Common_Movement_WalkUp3
# 27 "data/maps/SkyPillar_Entrance/scripts.pory"
	waitmovement 0
# 28 "data/maps/SkyPillar_Entrance/scripts.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 29 "data/maps/SkyPillar_Entrance/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq SkyPillar_Rival_Battle_9
# 58 "data/maps/SkyPillar_Entrance/scripts.pory"
	speakername CommonText_Brendan
# 59 "data/maps/SkyPillar_Entrance/scripts.pory"
	msgbox SkyPillar_Rival_Battle_Text_4
# 65 "data/maps/SkyPillar_Entrance/scripts.pory"
	switch VAR_STARTER_MON
# 66 "data/maps/SkyPillar_Entrance/scripts.pory"
	case 0, SkyPillar_Rival_Battle_19
# 68 "data/maps/SkyPillar_Entrance/scripts.pory"
	case 1, SkyPillar_Rival_Battle_20
# 70 "data/maps/SkyPillar_Entrance/scripts.pory"
	case 2, SkyPillar_Rival_Battle_21
SkyPillar_Rival_Battle_17:
# 73 "data/maps/SkyPillar_Entrance/scripts.pory"
	speakername CommonText_Brendan
# 74 "data/maps/SkyPillar_Entrance/scripts.pory"
	msgbox SkyPillar_Rival_Battle_Text_5
SkyPillar_Rival_Battle_8:
# 79 "data/maps/SkyPillar_Entrance/scripts.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 80 "data/maps/SkyPillar_Entrance/scripts.pory"
	closemessage
# 81 "data/maps/SkyPillar_Entrance/scripts.pory"
	applymovement 1, Common_Movement_WalkDown3
# 82 "data/maps/SkyPillar_Entrance/scripts.pory"
	waitmovement 0
# 83 "data/maps/SkyPillar_Entrance/scripts.pory"
	removeobject 1
# 84 "data/maps/SkyPillar_Entrance/scripts.pory"
	playse SE_EXIT
# 85 "data/maps/SkyPillar_Entrance/scripts.pory"
	fadedefaultbgm
# 86 "data/maps/SkyPillar_Entrance/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_SKY_PILLAR
# 87 "data/maps/SkyPillar_Entrance/scripts.pory"
	delay 30
	goto SkyPillar_Rival_Battle_1

SkyPillar_Rival_Battle_5:
# 19 "data/maps/SkyPillar_Entrance/scripts.pory"
	call Route119_EventScript_PlayMayMusic
	goto SkyPillar_Rival_Battle_4

SkyPillar_Rival_Battle_9:
# 30 "data/maps/SkyPillar_Entrance/scripts.pory"
	speakername CommonText_May
# 31 "data/maps/SkyPillar_Entrance/scripts.pory"
	msgbox SkyPillar_Rival_Battle_Text_0
# 33 "data/maps/SkyPillar_Entrance/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 34 "data/maps/SkyPillar_Entrance/scripts.pory"
	waitmovement 0
# 35 "data/maps/SkyPillar_Entrance/scripts.pory"
	msgbox SkyPillar_Rival_Battle_Text_1
# 36 "data/maps/SkyPillar_Entrance/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceUp
# 37 "data/maps/SkyPillar_Entrance/scripts.pory"
	waitmovement 0
# 38 "data/maps/SkyPillar_Entrance/scripts.pory"
	msgbox SkyPillar_Rival_Battle_Text_2
# 43 "data/maps/SkyPillar_Entrance/scripts.pory"
	switch VAR_STARTER_MON
# 44 "data/maps/SkyPillar_Entrance/scripts.pory"
	case 0, SkyPillar_Rival_Battle_14
# 46 "data/maps/SkyPillar_Entrance/scripts.pory"
	case 1, SkyPillar_Rival_Battle_15
# 48 "data/maps/SkyPillar_Entrance/scripts.pory"
	case 2, SkyPillar_Rival_Battle_16
SkyPillar_Rival_Battle_12:
# 51 "data/maps/SkyPillar_Entrance/scripts.pory"
	speakername CommonText_May
# 52 "data/maps/SkyPillar_Entrance/scripts.pory"
	msgbox SkyPillar_Rival_Battle_Text_3
	goto SkyPillar_Rival_Battle_8

SkyPillar_Rival_Battle_14:
# 45 "data/maps/SkyPillar_Entrance/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_SKY_PILLAR_TREECKO, SkyPillar_Text_MayDefeat
	goto SkyPillar_Rival_Battle_12

SkyPillar_Rival_Battle_15:
# 47 "data/maps/SkyPillar_Entrance/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_SKY_PILLAR_TORCHIC, SkyPillar_Text_MayDefeat
	goto SkyPillar_Rival_Battle_12

SkyPillar_Rival_Battle_16:
# 49 "data/maps/SkyPillar_Entrance/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_SKY_PILLAR_MUDKIP, SkyPillar_Text_MayDefeat
	goto SkyPillar_Rival_Battle_12

SkyPillar_Rival_Battle_19:
# 67 "data/maps/SkyPillar_Entrance/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_SKY_PILLAR_TREECKO, SkyPillar_Text_BrendanDefeat
	goto SkyPillar_Rival_Battle_17

SkyPillar_Rival_Battle_20:
# 69 "data/maps/SkyPillar_Entrance/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_SKY_PILLAR_TORCHIC, SkyPillar_Text_BrendanDefeat
	goto SkyPillar_Rival_Battle_17

SkyPillar_Rival_Battle_21:
# 71 "data/maps/SkyPillar_Entrance/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_SKY_PILLAR_MUDKIP, SkyPillar_Text_BrendanDefeat
	goto SkyPillar_Rival_Battle_17


SkyPillar_Rival_Battle_Text_0:
# 31 "data/maps/SkyPillar_Entrance/scripts.pory"
	.string "{PLAYER}!\n"
	.string "This is really bad, isn't it?$"

SkyPillar_Rival_Battle_Text_1:
# 35 "data/maps/SkyPillar_Entrance/scripts.pory"
	.string "I had asked my dad, and he said that\n"
	.string "this kind of thing was just to\l"
	.string "dangerous for kids to be involved in.$"

SkyPillar_Rival_Battle_Text_2:
# 38 "data/maps/SkyPillar_Entrance/scripts.pory"
	.string "But you're here, aren't you {PLAYER}?\p"
	.string "Can you really handle this on your own?\p"
	.string "That's why I'm here.\n"
	.string "I need to know.\p"
	.string "Show me how strong your Pokémon really\n"
	.string "are!$"

SkyPillar_Rival_Battle_Text_3:
# 52 "data/maps/SkyPillar_Entrance/scripts.pory"
	.string "I think I already knew it, but I couldn't\n"
	.string "bring myself to believe it all.\p"
	.string "{PLAYER}, you're the only one I know\n"
	.string "who can stop those monsters.\p"
	.string "Just please, please be safe.\p"
	.string "I'll go do what I can in the meantime.$"

SkyPillar_Rival_Battle_Text_4:
# 59 "data/maps/SkyPillar_Entrance/scripts.pory"
	.string "Hey, {PLAYER}!\p"
	.string "It's bad out there, right?\p"
	.string "I wish I could be the one up there\n"
	.string "helping put an end to this…\p"
	.string "But that's what you're about to go do,\n"
	.string "I'm sure.\p"
	.string "Battle me now, {PLAYER}!\p"
	.string "Show me why you're the one who has to\n"
	.string "do this!$"

SkyPillar_Rival_Battle_Text_5:
# 74 "data/maps/SkyPillar_Entrance/scripts.pory"
	.string "Every time we battle, {PLAYER}, you\n"
	.string "show me just how strong you really are.\p"
	.string "Alright, I believe in you.\n"
	.string "If there's anyone who can put an end to\l"
	.string "this mess, it's you.\p"
	.string "I guess I need to work even harder in\n"
	.string "order to stand next to you.$"

SkyPillar_Text_MayDefeat::
# 92 "data/maps/SkyPillar_Entrance/scripts.pory"
	.string "So that's how it is…$"

SkyPillar_Text_BrendanDefeat::
# 96 "data/maps/SkyPillar_Entrance/scripts.pory"
	.string "I guess I knew it all along…$"
