Expansion1_Rival_Scene02_Setup::
# 10 "data/expansion_1/scene02.pory"
	lock
# 11 "data/expansion_1/scene02.pory"
	setvar VAR_EMERALBODY_RIVAL_STATE, 23
# 12 "data/expansion_1/scene02.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 13 "data/expansion_1/scene02.pory"
	fadeoutbgm 0
# 14 "data/expansion_1/scene02.pory"
	fadescreen FADE_TO_BLACK
# 15 "data/expansion_1/scene02.pory"
	warpcontinuescript MAP_MAUVE_CAMP, 0, 13, Expansion1_Rival_Scene02
	return


Expansion1_Rival_Scene02::
# 19 "data/expansion_1/scene02.pory"
	setflag FLAG_TEMP_2
# 20 "data/expansion_1/scene02.pory"
	setflag FLAG_TEMP_6
# 21 "data/expansion_1/scene02.pory"
	playbgm MUS_DP_SUNYSHORE_DAY, FALSE
# 22 "data/expansion_1/scene02.pory"
	turnobject LOCALID_PLAYER, DIR_EAST
# 23 "data/expansion_1/scene02.pory"
	fadescreen FADE_FROM_BLACK
# 24 "data/expansion_1/scene02.pory"
	delay 20
# 25 "data/expansion_1/scene02.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRightSlow4
# 26 "data/expansion_1/scene02.pory"
	waitmovement 0
# 27 "data/expansion_1/scene02.pory"
	delay 20
# 28 "data/expansion_1/scene02.pory"
	applymovement LOCALID_PLAYER, Common_Movement_Talking
# 29 "data/expansion_1/scene02.pory"
	delay 40
# 30 "data/expansion_1/scene02.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterLeft
# 31 "data/expansion_1/scene02.pory"
	waitmovement 0
# 32 "data/expansion_1/scene02.pory"
	playse SE_PIN
# 33 "data/expansion_1/scene02.pory"
	applymovement 6, Common_Movement_ExclamationMark
# 34 "data/expansion_1/scene02.pory"
	delay 40
# 35 "data/expansion_1/scene02.pory"
	speakername CommonText_Jakson
# 36 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02_Text_0, MSGBOX_AUTOCLOSE
# 37 "data/expansion_1/scene02.pory"
	applymovement 6, Common_Movement_WalkLeft2
# 38 "data/expansion_1/scene02.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight3
# 39 "data/expansion_1/scene02.pory"
	waitmovement 0
# 40 "data/expansion_1/scene02.pory"
	speakername CommonText_Jakson
# 41 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02_Text_1, MSGBOX_AUTOCLOSE
# 44 "data/expansion_1/scene02.pory"
	applymovement 6, Common_Movement_WalkRight11
# 45 "data/expansion_1/scene02.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight11
# 46 "data/expansion_1/scene02.pory"
	waitmovement 0
# 47 "data/expansion_1/scene02.pory"
	applymovement 6, Common_Movement_WalkDown
# 48 "data/expansion_1/scene02.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight
# 49 "data/expansion_1/scene02.pory"
	waitmovement 0
# 50 "data/expansion_1/scene02.pory"
	applymovement 6, Common_Movement_WalkDown
# 51 "data/expansion_1/scene02.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 52 "data/expansion_1/scene02.pory"
	waitmovement 0
# 53 "data/expansion_1/scene02.pory"
	applymovement 6, Common_Movement_WalkRight
# 54 "data/expansion_1/scene02.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 55 "data/expansion_1/scene02.pory"
	waitmovement 0
# 56 "data/expansion_1/scene02.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterDown
# 57 "data/expansion_1/scene02.pory"
	waitmovement 0
# 58 "data/expansion_1/scene02.pory"
	delay 10
# 59 "data/expansion_1/scene02.pory"
	special SpawnCameraObject
# 60 "data/expansion_1/scene02.pory"
	applymovement LOCALID_CAMERA, Common_Movement_WalkDownSlow3
# 61 "data/expansion_1/scene02.pory"
	waitmovement 0
# 62 "data/expansion_1/scene02.pory"
	fadeoutbgm 0
# 63 "data/expansion_1/scene02.pory"
	speakername CommonText_Sakura
# 64 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02_Text_2, MSGBOX_AUTOCLOSE
# 67 "data/expansion_1/scene02.pory"
	applymovement 8, Common_Movement_ShakeHorizontal
# 68 "data/expansion_1/scene02.pory"
	waitmovement 0
# 69 "data/expansion_1/scene02.pory"
	speakername CommonText_Sakura
# 70 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02_Text_3, MSGBOX_AUTOCLOSE
# 71 "data/expansion_1/scene02.pory"
	applymovement 8, Common_Movement_ShakeHorizontal
# 72 "data/expansion_1/scene02.pory"
	waitmovement 0
# 73 "data/expansion_1/scene02.pory"
	delay 20
# 74 "data/expansion_1/scene02.pory"
	applymovement 7, Common_Movement_Smile
# 75 "data/expansion_1/scene02.pory"
	delay 30
# 76 "data/expansion_1/scene02.pory"
	speakername CommonText_Jakson
# 77 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02_Text_4, MSGBOX_AUTOCLOSE
# 81 "data/expansion_1/scene02.pory"
	fadeinbgm 0
# 82 "data/expansion_1/scene02.pory"
	applymovement 7, Common_Movement_WalkInPlaceFasterUp
# 83 "data/expansion_1/scene02.pory"
	waitmovement 0
# 84 "data/expansion_1/scene02.pory"
	delay 20
# 85 "data/expansion_1/scene02.pory"
	speakername CommonText_Baron
# 86 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02_Text_5, MSGBOX_AUTOCLOSE
# 93 "data/expansion_1/scene02.pory"
	speakername CommonText_Jakson
# 94 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02_Text_6, MSGBOX_AUTOCLOSE
# 95 "data/expansion_1/scene02.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight3
# 96 "data/expansion_1/scene02.pory"
	waitmovement 0
	return


Expansion1_Rival_Scene02_Text_0:
# 36 "data/expansion_1/scene02.pory"
	.string "Oh, {PLAYER}, it's you. Thank goodness.$"

Expansion1_Rival_Scene02_Text_1:
# 41 "data/expansion_1/scene02.pory"
	.string "Sorry, but it seems like something's\ngone horribly wrong.\p"
	.string "I'd say we should exchange info,\nbut I JUST heard Sakura's voice.\p"
	.string "She's around here somewhere, so we\nshould probably find her first.$"

Expansion1_Rival_Scene02_Text_2:
# 64 "data/expansion_1/scene02.pory"
	.string "You maniac!\p"
	.string "You blew it up!\p"
	.string "Agh, damn you!$"

Expansion1_Rival_Scene02_Text_3:
# 70 "data/expansion_1/scene02.pory"
	.string "God damn you all to hell!$"

Expansion1_Rival_Scene02_Text_4:
# 77 "data/expansion_1/scene02.pory"
	.string "… … …\n"
	.string "… … …\l"
	.string "… … …\l"
	.string "Ah, well there's Baron too.$"

Expansion1_Rival_Scene02_Text_5:
# 86 "data/expansion_1/scene02.pory"
	.string "Oh, hey guys. It's good to see\nsomeone sa-\l"
	.string "I mean…\p"
	.string "Well, it's good to be together again!$"

Expansion1_Rival_Scene02_Text_6:
# 94 "data/expansion_1/scene02.pory"
	.string "Oh, {PLAYER}?\nOver here.$"
