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
	lock
# 12 "data/maps/SkyPillar_Entrance/scripts.pory"
	addobject 1
# 13 "data/maps/SkyPillar_Entrance/scripts.pory"
	setobjectxy 1, 6, 16
# 14 "data/maps/SkyPillar_Entrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 15 "data/maps/SkyPillar_Entrance/scripts.pory"
	applymovement 1, Common_Movement_FaceUp
# 16 "data/maps/SkyPillar_Entrance/scripts.pory"
	checkplayergender
# 17 "data/maps/SkyPillar_Entrance/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq SkyPillar_Rival_Battle_2
# 21 "data/maps/SkyPillar_Entrance/scripts.pory"
	call Route119_EventScript_PlayBrendanMusic
SkyPillar_Rival_Battle_1:
# 23 "data/maps/SkyPillar_Entrance/scripts.pory"
	playse SE_EXIT
# 24 "data/maps/SkyPillar_Entrance/scripts.pory"
	delay 30
# 25 "data/maps/SkyPillar_Entrance/scripts.pory"
	applymovement 1, Common_Movement_WalkUp3
# 26 "data/maps/SkyPillar_Entrance/scripts.pory"
	waitmovement 0
# 27 "data/maps/SkyPillar_Entrance/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq SkyPillar_Rival_Battle_6
# 56 "data/maps/SkyPillar_Entrance/scripts.pory"
	speakername CommonText_Brendan
# 57 "data/maps/SkyPillar_Entrance/scripts.pory"
	msgbox SkyPillar_Rival_Battle_Text_4
# 63 "data/maps/SkyPillar_Entrance/scripts.pory"
	switch VAR_STARTER_MON
# 64 "data/maps/SkyPillar_Entrance/scripts.pory"
	case 0, SkyPillar_Rival_Battle_16
# 66 "data/maps/SkyPillar_Entrance/scripts.pory"
	case 1, SkyPillar_Rival_Battle_17
# 68 "data/maps/SkyPillar_Entrance/scripts.pory"
	case 2, SkyPillar_Rival_Battle_18
SkyPillar_Rival_Battle_14:
# 71 "data/maps/SkyPillar_Entrance/scripts.pory"
	speakername CommonText_Brendan
# 72 "data/maps/SkyPillar_Entrance/scripts.pory"
	msgbox SkyPillar_Rival_Battle_Text_5
SkyPillar_Rival_Battle_5:
# 77 "data/maps/SkyPillar_Entrance/scripts.pory"
	closemessage
# 78 "data/maps/SkyPillar_Entrance/scripts.pory"
	applymovement 1, Common_Movement_WalkDown3
# 79 "data/maps/SkyPillar_Entrance/scripts.pory"
	waitmovement 0
# 80 "data/maps/SkyPillar_Entrance/scripts.pory"
	removeobject 1
# 81 "data/maps/SkyPillar_Entrance/scripts.pory"
	playse SE_EXIT
# 82 "data/maps/SkyPillar_Entrance/scripts.pory"
	fadedefaultbgm
# 83 "data/maps/SkyPillar_Entrance/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_SKY_PILLAR
# 84 "data/maps/SkyPillar_Entrance/scripts.pory"
	delay 30
# 85 "data/maps/SkyPillar_Entrance/scripts.pory"
	release
	return

SkyPillar_Rival_Battle_2:
# 18 "data/maps/SkyPillar_Entrance/scripts.pory"
	call Route119_EventScript_PlayMayMusic
	goto SkyPillar_Rival_Battle_1

SkyPillar_Rival_Battle_6:
# 28 "data/maps/SkyPillar_Entrance/scripts.pory"
	speakername CommonText_May
# 29 "data/maps/SkyPillar_Entrance/scripts.pory"
	msgbox SkyPillar_Rival_Battle_Text_0
# 31 "data/maps/SkyPillar_Entrance/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 32 "data/maps/SkyPillar_Entrance/scripts.pory"
	waitmovement 0
# 33 "data/maps/SkyPillar_Entrance/scripts.pory"
	msgbox SkyPillar_Rival_Battle_Text_1
# 34 "data/maps/SkyPillar_Entrance/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceUp
# 35 "data/maps/SkyPillar_Entrance/scripts.pory"
	waitmovement 0
# 36 "data/maps/SkyPillar_Entrance/scripts.pory"
	msgbox SkyPillar_Rival_Battle_Text_2
# 41 "data/maps/SkyPillar_Entrance/scripts.pory"
	switch VAR_STARTER_MON
# 42 "data/maps/SkyPillar_Entrance/scripts.pory"
	case 0, SkyPillar_Rival_Battle_11
# 44 "data/maps/SkyPillar_Entrance/scripts.pory"
	case 1, SkyPillar_Rival_Battle_12
# 46 "data/maps/SkyPillar_Entrance/scripts.pory"
	case 2, SkyPillar_Rival_Battle_13
SkyPillar_Rival_Battle_9:
# 49 "data/maps/SkyPillar_Entrance/scripts.pory"
	speakername CommonText_May
# 50 "data/maps/SkyPillar_Entrance/scripts.pory"
	msgbox SkyPillar_Rival_Battle_Text_3
	goto SkyPillar_Rival_Battle_5

SkyPillar_Rival_Battle_11:
# 43 "data/maps/SkyPillar_Entrance/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_SKY_PILLAR_TREECKO, SkyPillar_Text_MayDefeat
	goto SkyPillar_Rival_Battle_9

SkyPillar_Rival_Battle_12:
# 45 "data/maps/SkyPillar_Entrance/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_SKY_PILLAR_TORCHIC, SkyPillar_Text_MayDefeat
	goto SkyPillar_Rival_Battle_9

SkyPillar_Rival_Battle_13:
# 47 "data/maps/SkyPillar_Entrance/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_SKY_PILLAR_MUDKIP, SkyPillar_Text_MayDefeat
	goto SkyPillar_Rival_Battle_9

SkyPillar_Rival_Battle_16:
# 65 "data/maps/SkyPillar_Entrance/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_SKY_PILLAR_TREECKO, SkyPillar_Text_BrendanDefeat
	goto SkyPillar_Rival_Battle_14

SkyPillar_Rival_Battle_17:
# 67 "data/maps/SkyPillar_Entrance/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_SKY_PILLAR_TORCHIC, SkyPillar_Text_BrendanDefeat
	goto SkyPillar_Rival_Battle_14

SkyPillar_Rival_Battle_18:
# 69 "data/maps/SkyPillar_Entrance/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_SKY_PILLAR_MUDKIP, SkyPillar_Text_BrendanDefeat
	goto SkyPillar_Rival_Battle_14


SkyPillar_Rival_Battle_Text_0:
# 29 "data/maps/SkyPillar_Entrance/scripts.pory"
	.string "{PLAYER}!\n"
	.string "This is really bad, isn't it?$"

SkyPillar_Rival_Battle_Text_1:
# 33 "data/maps/SkyPillar_Entrance/scripts.pory"
	.string "I had asked my dad, and he said that\n"
	.string "this kind of thing was just to\l"
	.string "dangerous for kids to be involved in.$"

SkyPillar_Rival_Battle_Text_2:
# 36 "data/maps/SkyPillar_Entrance/scripts.pory"
	.string "But you're here, aren't you {PLAYER}?\p"
	.string "Can you really handle this on your own?\p"
	.string "That's why I'm here.\n"
	.string "I need to know.\p"
	.string "Show me how strong your Pokémon really\n"
	.string "are!$"

SkyPillar_Rival_Battle_Text_3:
# 50 "data/maps/SkyPillar_Entrance/scripts.pory"
	.string "I think I already knew it, but I couldn't\n"
	.string "bring myself to believe it all.\p"
	.string "{PLAYER}, you're the only one I know\n"
	.string "who can stop those monsters.\p"
	.string "Just please, please be safe.\p"
	.string "I'll go do what I can in the meantime.$"

SkyPillar_Rival_Battle_Text_4:
# 57 "data/maps/SkyPillar_Entrance/scripts.pory"
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
# 72 "data/maps/SkyPillar_Entrance/scripts.pory"
	.string "Every time we battle, {PLAYER}, you\n"
	.string "show me just how strong you really are.\p"
	.string "Alright, I believe in you.\n"
	.string "If there's anyone who can put an end to\l"
	.string "this mess, it's you.\p"
	.string "I guess I need to work even harder in\n"
	.string "order to stand next to you.$"

SkyPillar_Text_MayDefeat::
# 88 "data/maps/SkyPillar_Entrance/scripts.pory"
	.string "So that's how it is…$"

SkyPillar_Text_BrendanDefeat::
# 92 "data/maps/SkyPillar_Entrance/scripts.pory"
	.string "I guess I knew it all along…$"
