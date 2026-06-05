Expansion1_Rival_Scene05_Setup::
# 14 "data/expansion_1/scene05.pory"
	lock
# 15 "data/expansion_1/scene05.pory"
	setvar VAR_EMERALBODY_RIVAL_STATE, 31
# 16 "data/expansion_1/scene05.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 17 "data/expansion_1/scene05.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 18 "data/expansion_1/scene05.pory"
	warpcontinuescript MAP_MAUVE_CAMP, 2, 13, Expansion1_Rival_Scene05
	return


Expansion1_Rival_Scene05::
# 23 "data/expansion_1/scene05.pory"
	setflag FLAG_TEMP_2
# 24 "data/expansion_1/scene05.pory"
	setflag FLAG_TEMP_6
# 25 "data/expansion_1/scene05.pory"
	turnobject LOCALID_PLAYER, DIR_EAST
# 26 "data/expansion_1/scene05.pory"
	removeobject 6
# 27 "data/expansion_1/scene05.pory"
	setobjectxyperm 6, 20, 12
# 28 "data/expansion_1/scene05.pory"
	setobjectxyperm 7, 21, 13
# 29 "data/expansion_1/scene05.pory"
	setobjectxyperm 10, 22, 12
# 30 "data/expansion_1/scene05.pory"
	setobjectmovementtype 10, MOVEMENT_TYPE_FACE_LEFT
# 31 "data/expansion_1/scene05.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_UP
# 32 "data/expansion_1/scene05.pory"
	fadescreen FADE_FROM_BLACK
# 33 "data/expansion_1/scene05.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight7
# 34 "data/expansion_1/scene05.pory"
	waitmovement 0
# 35 "data/expansion_1/scene05.pory"
	delay 20
# 36 "data/expansion_1/scene05.pory"
	applymovement 11, Common_Movement_WalkInPlaceFasterLeft
# 37 "data/expansion_1/scene05.pory"
	waitmovement 0
# 38 "data/expansion_1/scene05.pory"
	delay 30
# 39 "data/expansion_1/scene05.pory"
	applymovement 11, Common_Movement_WalkRight
# 40 "data/expansion_1/scene05.pory"
	waitmovement 0
# 41 "data/expansion_1/scene05.pory"
	applymovement 11, Common_Movement_WalkRight5
# 42 "data/expansion_1/scene05.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight7
# 43 "data/expansion_1/scene05.pory"
	waitmovement 0
# 44 "data/expansion_1/scene05.pory"
	delay 20
# 45 "data/expansion_1/scene05.pory"
	speakername CommonText_Harper
# 46 "data/expansion_1/scene05.pory"
	msgbox Expansion1_Rival_Scene05_Text_0, MSGBOX_AUTOCLOSE
# 47 "data/expansion_1/scene05.pory"
	delay 20
# 48 "data/expansion_1/scene05.pory"
	playse SE_PIN
# 49 "data/expansion_1/scene05.pory"
	applymovement 6, Common_Movement_ExclamationMark
# 50 "data/expansion_1/scene05.pory"
	delay 40
# 51 "data/expansion_1/scene05.pory"
	speakername CommonText_Jakson
# 52 "data/expansion_1/scene05.pory"
	msgbox Expansion1_Rival_Scene05_Text_1, MSGBOX_AUTOCLOSE
# 53 "data/expansion_1/scene05.pory"
	applymovement 6, Common_Movement_WalkLeft2
# 54 "data/expansion_1/scene05.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight3
# 55 "data/expansion_1/scene05.pory"
	waitmovement 0
# 56 "data/expansion_1/scene05.pory"
	speakername CommonText_Jakson
# 57 "data/expansion_1/scene05.pory"
	msgbox Expansion1_Rival_Scene05_Text_2, MSGBOX_AUTOCLOSE
# 60 "data/expansion_1/scene05.pory"
	applymovement 6, Common_Movement_WalkRight11
# 61 "data/expansion_1/scene05.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight11
# 62 "data/expansion_1/scene05.pory"
	waitmovement 0
# 63 "data/expansion_1/scene05.pory"
	applymovement 6, Common_Movement_WalkDown
# 64 "data/expansion_1/scene05.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight
# 65 "data/expansion_1/scene05.pory"
	waitmovement 0
# 66 "data/expansion_1/scene05.pory"
	applymovement 6, Common_Movement_WalkDown
# 67 "data/expansion_1/scene05.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 68 "data/expansion_1/scene05.pory"
	waitmovement 0
# 69 "data/expansion_1/scene05.pory"
	applymovement 6, Common_Movement_WalkRight
# 70 "data/expansion_1/scene05.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 71 "data/expansion_1/scene05.pory"
	waitmovement 0
# 72 "data/expansion_1/scene05.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterDown
# 73 "data/expansion_1/scene05.pory"
	waitmovement 0
# 74 "data/expansion_1/scene05.pory"
	delay 10
# 75 "data/expansion_1/scene05.pory"
	special SpawnCameraObject
# 76 "data/expansion_1/scene05.pory"
	applymovement LOCALID_CAMERA, Common_Movement_WalkDownSlow3
# 77 "data/expansion_1/scene05.pory"
	waitmovement 0
# 78 "data/expansion_1/scene05.pory"
	fadeoutbgm 0
# 79 "data/expansion_1/scene05.pory"
	speakername CommonText_Sakura
# 80 "data/expansion_1/scene05.pory"
	msgbox Expansion1_Rival_Scene05_Text_3, MSGBOX_AUTOCLOSE
# 83 "data/expansion_1/scene05.pory"
	applymovement 8, Common_Movement_ShakeHorizontal
# 84 "data/expansion_1/scene05.pory"
	waitmovement 0
# 85 "data/expansion_1/scene05.pory"
	speakername CommonText_Sakura
# 86 "data/expansion_1/scene05.pory"
	msgbox Expansion1_Rival_Scene05_Text_4, MSGBOX_AUTOCLOSE
# 87 "data/expansion_1/scene05.pory"
	applymovement 8, Common_Movement_ShakeHorizontal
# 88 "data/expansion_1/scene05.pory"
	waitmovement 0
# 89 "data/expansion_1/scene05.pory"
	delay 10
# 90 "data/expansion_1/scene05.pory"
	applymovement 7, Common_Movement_Thinking
# 91 "data/expansion_1/scene05.pory"
	delay 70
# 92 "data/expansion_1/scene05.pory"
	applymovement 7, Common_Movement_SweatDrop
# 93 "data/expansion_1/scene05.pory"
	speakername CommonText_Jakson
# 94 "data/expansion_1/scene05.pory"
	msgbox Expansion1_Rival_Scene05_Text_5, MSGBOX_AUTOCLOSE
# 98 "data/expansion_1/scene05.pory"
	fadeinbgm 0
# 99 "data/expansion_1/scene05.pory"
	applymovement 7, Common_Movement_WalkInPlaceFasterUp
# 100 "data/expansion_1/scene05.pory"
	waitmovement 0
# 101 "data/expansion_1/scene05.pory"
	delay 20
# 102 "data/expansion_1/scene05.pory"
	speakername CommonText_Baron
# 103 "data/expansion_1/scene05.pory"
	msgbox Expansion1_Rival_Scene05_Text_6, MSGBOX_AUTOCLOSE
# 106 "data/expansion_1/scene05.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 107 "data/expansion_1/scene05.pory"
	warpcontinuescript MAP_MAUVE_CAMP, 20, 17, Expansion1_Rival_Scene02b
	return


Expansion1_Rival_Scene05_Text_0:
# 46 "data/expansion_1/scene05.pory"
	.string "Jakson.$"

Expansion1_Rival_Scene05_Text_1:
# 52 "data/expansion_1/scene05.pory"
	.string "Oh, {PLAYER}, it's you. Thank goodness.$"

Expansion1_Rival_Scene05_Text_2:
# 57 "data/expansion_1/scene05.pory"
	.string "Sorry, but it seems like something's\ngone horribly wrong.\p"
	.string "I'd say we should exchange info,\nbut I JUST heard Sakura's voice.\p"
	.string "She's around here somewhere, so we\nshould probably find her first.$"

Expansion1_Rival_Scene05_Text_3:
# 80 "data/expansion_1/scene05.pory"
	.string "You maniac!\p"
	.string "You blew it up!\p"
	.string "Agh, damn you!$"

Expansion1_Rival_Scene05_Text_4:
# 86 "data/expansion_1/scene05.pory"
	.string "God damn you all to hell!$"

Expansion1_Rival_Scene05_Text_5:
# 94 "data/expansion_1/scene05.pory"
	.string "… … …\n"
	.string "… … …\l"
	.string "… … …\l"
	.string "Ah, well there's Baron too.$"

Expansion1_Rival_Scene05_Text_6:
# 103 "data/expansion_1/scene05.pory"
	.string "Oh, hey guys. It's good to see\nsomeone sa-\l"
	.string "I mean…\p"
	.string "Well, it's good to be together again!$"
