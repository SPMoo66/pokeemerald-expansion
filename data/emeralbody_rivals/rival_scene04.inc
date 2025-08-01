Rival_Scene04_SetRivalPositions::
# 8 "data/emeralbody_rivals/rival_scene04.pory"
	clearflag FLAG_TEMP_1
# 9 "data/emeralbody_rivals/rival_scene04.pory"
	addobject 8
# 10 "data/emeralbody_rivals/rival_scene04.pory"
	addobject 9
# 11 "data/emeralbody_rivals/rival_scene04.pory"
	addobject 10
# 12 "data/emeralbody_rivals/rival_scene04.pory"
	addobject 11
# 13 "data/emeralbody_rivals/rival_scene04.pory"
	addobject 12
# 14 "data/emeralbody_rivals/rival_scene04.pory"
	setobjectxyperm 8, 10, 6
# 15 "data/emeralbody_rivals/rival_scene04.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_FACE_DOWN
# 16 "data/emeralbody_rivals/rival_scene04.pory"
	setobjectxyperm 9, 8, 7
# 17 "data/emeralbody_rivals/rival_scene04.pory"
	setobjectmovementtype 9, MOVEMENT_TYPE_FACE_RIGHT
# 18 "data/emeralbody_rivals/rival_scene04.pory"
	setobjectxyperm 10, 9, 6
# 19 "data/emeralbody_rivals/rival_scene04.pory"
	setobjectmovementtype 10, MOVEMENT_TYPE_FACE_DOWN
# 20 "data/emeralbody_rivals/rival_scene04.pory"
	setobjectxyperm 11, 10, 8
# 21 "data/emeralbody_rivals/rival_scene04.pory"
	setobjectmovementtype 11, MOVEMENT_TYPE_FACE_UP
# 22 "data/emeralbody_rivals/rival_scene04.pory"
	setobjectxyperm 12, 11, 7
# 23 "data/emeralbody_rivals/rival_scene04.pory"
	setobjectmovementtype 12, MOVEMENT_TYPE_FACE_LEFT
# 24 "data/emeralbody_rivals/rival_scene04.pory"
	savebgm MUS_HG_SAFARI_ZONE_GATE
	return


Rival_Scene04::
# 29 "data/emeralbody_rivals/rival_scene04.pory"
	lock
# 30 "data/emeralbody_rivals/rival_scene04.pory"
	delay 30
# 31 "data/emeralbody_rivals/rival_scene04.pory"
	applymovement 11, Common_Movement_WalkInPlaceDown
# 32 "data/emeralbody_rivals/rival_scene04.pory"
	waitmovement 0
# 33 "data/emeralbody_rivals/rival_scene04.pory"
	delay 10
# 34 "data/emeralbody_rivals/rival_scene04.pory"
	playse SE_PIN
# 35 "data/emeralbody_rivals/rival_scene04.pory"
	applymovement 11, Common_Movement_ExclamationMark
# 36 "data/emeralbody_rivals/rival_scene04.pory"
	delay 20
# 37 "data/emeralbody_rivals/rival_scene04.pory"
	playse SE_LEDGE
# 38 "data/emeralbody_rivals/rival_scene04.pory"
	applymovement 11, Common_Movement_JumpInPlaceDown
# 39 "data/emeralbody_rivals/rival_scene04.pory"
	waitmovement 0
# 40 "data/emeralbody_rivals/rival_scene04.pory"
	speakername CommonText_Sakura
# 41 "data/emeralbody_rivals/rival_scene04.pory"
	msgbox Rival_Scene04_Text_0
# 42 "data/emeralbody_rivals/rival_scene04.pory"
	closemessage
# 43 "data/emeralbody_rivals/rival_scene04.pory"
	applymovement 9, Common_Movement_WalkInPlaceDown
# 44 "data/emeralbody_rivals/rival_scene04.pory"
	waitmovement 0
# 45 "data/emeralbody_rivals/rival_scene04.pory"
	delay 20
# 46 "data/emeralbody_rivals/rival_scene04.pory"
	applymovement 12, Common_Movement_WalkInPlaceDown
# 47 "data/emeralbody_rivals/rival_scene04.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp3
# 48 "data/emeralbody_rivals/rival_scene04.pory"
	waitmovement 0
# 49 "data/emeralbody_rivals/rival_scene04.pory"
	applymovement 11, Common_Movement_WalkInPlaceLeft
# 50 "data/emeralbody_rivals/rival_scene04.pory"
	waitmovement 0
# 51 "data/emeralbody_rivals/rival_scene04.pory"
	speakername CommonText_Jakson
# 52 "data/emeralbody_rivals/rival_scene04.pory"
	msgbox Rival_Scene04_Text_1
# 53 "data/emeralbody_rivals/rival_scene04.pory"
	applymovement 9, Common_Movement_WalkInPlaceRight
# 54 "data/emeralbody_rivals/rival_scene04.pory"
	speakername CommonText_Sakura
# 55 "data/emeralbody_rivals/rival_scene04.pory"
	msgbox Rival_Scene04_Text_2
# 56 "data/emeralbody_rivals/rival_scene04.pory"
	applymovement 12, Common_Movement_WalkInPlaceRight
# 57 "data/emeralbody_rivals/rival_scene04.pory"
	waitmovement 0
# 58 "data/emeralbody_rivals/rival_scene04.pory"
	applymovement 11, Common_Movement_WalkInPlaceUp
# 59 "data/emeralbody_rivals/rival_scene04.pory"
	speakername CommonText_Baron
# 60 "data/emeralbody_rivals/rival_scene04.pory"
	msgbox Rival_Scene04_Text_3
# 61 "data/emeralbody_rivals/rival_scene04.pory"
	applymovement 8, Common_Movement_WalkInPlaceRight
# 62 "data/emeralbody_rivals/rival_scene04.pory"
	speakername CommonText_Jakson
# 63 "data/emeralbody_rivals/rival_scene04.pory"
	msgbox Rival_Scene04_Text_4
# 64 "data/emeralbody_rivals/rival_scene04.pory"
	applymovement 10, Common_Movement_WalkInPlaceRight
# 65 "data/emeralbody_rivals/rival_scene04.pory"
	applymovement 12, Common_Movement_WalkInPlaceLeft
# 66 "data/emeralbody_rivals/rival_scene04.pory"
	waitmovement 0
# 67 "data/emeralbody_rivals/rival_scene04.pory"
	applymovement 8, Common_Movement_WalkInPlaceLeft
# 68 "data/emeralbody_rivals/rival_scene04.pory"
	speakername CommonText_Redd
# 69 "data/emeralbody_rivals/rival_scene04.pory"
	msgbox Rival_Scene04_Text_5
# 70 "data/emeralbody_rivals/rival_scene04.pory"
	speakername CommonText_Harper
# 71 "data/emeralbody_rivals/rival_scene04.pory"
	msgbox Rival_Scene04_Text_6
# 72 "data/emeralbody_rivals/rival_scene04.pory"
	applymovement 10, Common_Movement_WalkInPlaceDown
# 73 "data/emeralbody_rivals/rival_scene04.pory"
	applymovement 8, Common_Movement_WalkInPlaceDown
# 74 "data/emeralbody_rivals/rival_scene04.pory"
	waitmovement 0
# 75 "data/emeralbody_rivals/rival_scene04.pory"
	applymovement 11, Common_Movement_WalkInPlaceDown
# 76 "data/emeralbody_rivals/rival_scene04.pory"
	speakername CommonText_Sakura
# 77 "data/emeralbody_rivals/rival_scene04.pory"
	msgbox Rival_Scene04_Text_7
# 78 "data/emeralbody_rivals/rival_scene04.pory"
	speakername CommonText_Redd
# 79 "data/emeralbody_rivals/rival_scene04.pory"
	msgbox Rival_Scene04_Text_8
# 80 "data/emeralbody_rivals/rival_scene04.pory"
	applymovement 11, Common_Movement_WalkInPlaceUp
# 81 "data/emeralbody_rivals/rival_scene04.pory"
	waitmovement 0
# 82 "data/emeralbody_rivals/rival_scene04.pory"
	speakername CommonText_Baron
# 83 "data/emeralbody_rivals/rival_scene04.pory"
	msgbox Rival_Scene04_Text_9
# 84 "data/emeralbody_rivals/rival_scene04.pory"
	speakername CommonText_Harper
# 85 "data/emeralbody_rivals/rival_scene04.pory"
	msgbox Rival_Scene04_Text_10
# 86 "data/emeralbody_rivals/rival_scene04.pory"
	speakername CommonText_Baron
# 87 "data/emeralbody_rivals/rival_scene04.pory"
	msgbox Rival_Scene04_Text_11
# 88 "data/emeralbody_rivals/rival_scene04.pory"
	playse SE_LEDGE
# 89 "data/emeralbody_rivals/rival_scene04.pory"
	applymovement 10, Common_Movement_JumpInPlaceDown
# 90 "data/emeralbody_rivals/rival_scene04.pory"
	waitmovement 0
# 91 "data/emeralbody_rivals/rival_scene04.pory"
	speakername CommonText_Redd
# 92 "data/emeralbody_rivals/rival_scene04.pory"
	msgbox Rival_Scene04_Text_12
# 93 "data/emeralbody_rivals/rival_scene04.pory"
	speakername CommonText_Sakura
# 94 "data/emeralbody_rivals/rival_scene04.pory"
	msgbox Rival_Scene04_Text_13
# 95 "data/emeralbody_rivals/rival_scene04.pory"
	speakername CommonText_Harper
# 96 "data/emeralbody_rivals/rival_scene04.pory"
	msgbox Rival_Scene04_Text_14
# 97 "data/emeralbody_rivals/rival_scene04.pory"
	speakername CommonText_Jakson
# 98 "data/emeralbody_rivals/rival_scene04.pory"
	msgbox Rival_Scene04_Text_15
# 99 "data/emeralbody_rivals/rival_scene04.pory"
	closemessage
# 100 "data/emeralbody_rivals/rival_scene04.pory"
	fadedefaultbgm
# 101 "data/emeralbody_rivals/rival_scene04.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 102 "data/emeralbody_rivals/rival_scene04.pory"
	call Rival_Scene04_ResetRivalPositions
# 103 "data/emeralbody_rivals/rival_scene04.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 104 "data/emeralbody_rivals/rival_scene04.pory"
	setvar VAR_EMERALBODY_RIVAL_STATE, 16
# 105 "data/emeralbody_rivals/rival_scene04.pory"
	release
	return


Rival_Scene04_ResetRivalPositions::
# 110 "data/emeralbody_rivals/rival_scene04.pory"
	removeobject 8
# 111 "data/emeralbody_rivals/rival_scene04.pory"
	removeobject 9
# 112 "data/emeralbody_rivals/rival_scene04.pory"
	removeobject 10
# 113 "data/emeralbody_rivals/rival_scene04.pory"
	removeobject 11
# 114 "data/emeralbody_rivals/rival_scene04.pory"
	removeobject 12
# 115 "data/emeralbody_rivals/rival_scene04.pory"
	setobjectxyperm 8, 4, 4
# 116 "data/emeralbody_rivals/rival_scene04.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_FACE_UP
# 117 "data/emeralbody_rivals/rival_scene04.pory"
	setobjectxyperm 9, 5, 11
# 118 "data/emeralbody_rivals/rival_scene04.pory"
	setobjectmovementtype 9, MOVEMENT_TYPE_FACE_LEFT
# 119 "data/emeralbody_rivals/rival_scene04.pory"
	setobjectxyperm 10, 3, 9
# 120 "data/emeralbody_rivals/rival_scene04.pory"
	setobjectmovementtype 10, MOVEMENT_TYPE_FACE_DOWN
# 121 "data/emeralbody_rivals/rival_scene04.pory"
	setobjectxyperm 11, 5, 10
# 122 "data/emeralbody_rivals/rival_scene04.pory"
	setobjectmovementtype 11, MOVEMENT_TYPE_FACE_LEFT
# 123 "data/emeralbody_rivals/rival_scene04.pory"
	setobjectxyperm 12, 15, 4
# 124 "data/emeralbody_rivals/rival_scene04.pory"
	setobjectmovementtype 12, MOVEMENT_TYPE_FACE_UP
# 125 "data/emeralbody_rivals/rival_scene04.pory"
	addobject 8
# 126 "data/emeralbody_rivals/rival_scene04.pory"
	addobject 9
# 127 "data/emeralbody_rivals/rival_scene04.pory"
	addobject 10
# 128 "data/emeralbody_rivals/rival_scene04.pory"
	addobject 11
# 129 "data/emeralbody_rivals/rival_scene04.pory"
	addobject 12
	return


Rival_Scene04_Text_0:
# 41 "data/emeralbody_rivals/rival_scene04.pory"
	.string "{PLAYER}! Heyyy!$"

Rival_Scene04_Text_1:
# 52 "data/emeralbody_rivals/rival_scene04.pory"
	.string "Oh good, you were the last one,\n{PLAYER}.$"

Rival_Scene04_Text_2:
# 55 "data/emeralbody_rivals/rival_scene04.pory"
	.string "Yeah, even Baron was here before you!$"

Rival_Scene04_Text_3:
# 60 "data/emeralbody_rivals/rival_scene04.pory"
	.string "W- Well… I'm not as slow as I was\nbefore…$"

Rival_Scene04_Text_4:
# 63 "data/emeralbody_rivals/rival_scene04.pory"
	.string "That's true. You, Redd, and Harper have\nimproved a lot.$"

Rival_Scene04_Text_5:
# 69 "data/emeralbody_rivals/rival_scene04.pory"
	.string "Hey now. I was good from the start.\nPlus, I wasn't about to be left behind\lby the likes of all you.$"

Rival_Scene04_Text_6:
# 71 "data/emeralbody_rivals/rival_scene04.pory"
	.string "Doesn't that mean you started towards\nthe back if you could be “left behind”?$"

Rival_Scene04_Text_7:
# 77 "data/emeralbody_rivals/rival_scene04.pory"
	.string "Maybe he did! I wouldn't know. I never\nbothered to look back, heheh{EMOJI_TILDE}{UNK_SPACER}$"

Rival_Scene04_Text_8:
# 79 "data/emeralbody_rivals/rival_scene04.pory"
	.string "W- What are you implying?$"

Rival_Scene04_Text_9:
# 83 "data/emeralbody_rivals/rival_scene04.pory"
	.string "It's quite the bundle of personality\nwe've got here, haha.$"

Rival_Scene04_Text_10:
# 85 "data/emeralbody_rivals/rival_scene04.pory"
	.string "Well, for my part, I don't think I'd have\ngotten this far or improved this much\lif I was all on my own.$"

Rival_Scene04_Text_11:
# 87 "data/emeralbody_rivals/rival_scene04.pory"
	.string "I think I'm in the same position.\nI'll have to thank you all later.$"

Rival_Scene04_Text_12:
# 92 "data/emeralbody_rivals/rival_scene04.pory"
	.string "Emphasis on “later”! First things first.\nWe're all going to crush the Pokémon\lLeague in six fell swoops, me being 1st!$"

Rival_Scene04_Text_13:
# 94 "data/emeralbody_rivals/rival_scene04.pory"
	.string "Oh, narrow-minded Redd. You can't be\nfirst if I've already completed it{EMOJI_TILDE}{UNK_SPACER}$"

Rival_Scene04_Text_14:
# 96 "data/emeralbody_rivals/rival_scene04.pory"
	.string "You definitely just got here like\nthe rest of us…$"

Rival_Scene04_Text_15:
# 98 "data/emeralbody_rivals/rival_scene04.pory"
	.string "Easy now, everyone. Let's all prep, then\nwe can start.$"
