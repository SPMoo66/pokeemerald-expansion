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
	delay 20
# 31 "data/emeralbody_rivals/rival_scene04.pory"
	special SpawnCameraObject
# 32 "data/emeralbody_rivals/rival_scene04.pory"
	applymovement LOCALID_CAMERA, Common_Movement_WalkUpSlow
# 33 "data/emeralbody_rivals/rival_scene04.pory"
	delay 10
# 34 "data/emeralbody_rivals/rival_scene04.pory"
	applymovement 11, Common_Movement_WalkInPlaceDown
# 35 "data/emeralbody_rivals/rival_scene04.pory"
	waitmovement 0
# 36 "data/emeralbody_rivals/rival_scene04.pory"
	delay 10
# 37 "data/emeralbody_rivals/rival_scene04.pory"
	playse SE_PIN
# 38 "data/emeralbody_rivals/rival_scene04.pory"
	applymovement 11, Common_Movement_ExclamationMark
# 39 "data/emeralbody_rivals/rival_scene04.pory"
	delay 20
# 40 "data/emeralbody_rivals/rival_scene04.pory"
	playse SE_LEDGE
# 41 "data/emeralbody_rivals/rival_scene04.pory"
	applymovement 11, Common_Movement_JumpInPlaceDown
# 42 "data/emeralbody_rivals/rival_scene04.pory"
	waitmovement 0
# 43 "data/emeralbody_rivals/rival_scene04.pory"
	speakername CommonText_Sakura
# 44 "data/emeralbody_rivals/rival_scene04.pory"
	msgbox Rival_Scene04_Text_0
# 45 "data/emeralbody_rivals/rival_scene04.pory"
	closemessage
# 46 "data/emeralbody_rivals/rival_scene04.pory"
	applymovement 9, Common_Movement_WalkInPlaceDown
# 47 "data/emeralbody_rivals/rival_scene04.pory"
	waitmovement 0
# 48 "data/emeralbody_rivals/rival_scene04.pory"
	delay 20
# 49 "data/emeralbody_rivals/rival_scene04.pory"
	applymovement 12, Common_Movement_WalkInPlaceDown
# 50 "data/emeralbody_rivals/rival_scene04.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp3
# 51 "data/emeralbody_rivals/rival_scene04.pory"
	applymovement LOCALID_CAMERA, Common_Movement_WalkUpSlow2
# 52 "data/emeralbody_rivals/rival_scene04.pory"
	waitmovement 0
# 53 "data/emeralbody_rivals/rival_scene04.pory"
	special RemoveCameraObject
# 54 "data/emeralbody_rivals/rival_scene04.pory"
	applymovement 11, Common_Movement_WalkInPlaceLeft
# 55 "data/emeralbody_rivals/rival_scene04.pory"
	waitmovement 0
# 56 "data/emeralbody_rivals/rival_scene04.pory"
	speakername CommonText_Jakson
# 57 "data/emeralbody_rivals/rival_scene04.pory"
	msgbox Rival_Scene04_Text_1
# 58 "data/emeralbody_rivals/rival_scene04.pory"
	applymovement 9, Common_Movement_WalkInPlaceRight
# 59 "data/emeralbody_rivals/rival_scene04.pory"
	speakername CommonText_Sakura
# 60 "data/emeralbody_rivals/rival_scene04.pory"
	msgbox Rival_Scene04_Text_2
# 61 "data/emeralbody_rivals/rival_scene04.pory"
	applymovement 12, Common_Movement_WalkInPlaceRight
# 62 "data/emeralbody_rivals/rival_scene04.pory"
	waitmovement 0
# 63 "data/emeralbody_rivals/rival_scene04.pory"
	applymovement 11, Common_Movement_WalkInPlaceUp
# 64 "data/emeralbody_rivals/rival_scene04.pory"
	speakername CommonText_Baron
# 65 "data/emeralbody_rivals/rival_scene04.pory"
	msgbox Rival_Scene04_Text_3
# 66 "data/emeralbody_rivals/rival_scene04.pory"
	applymovement 8, Common_Movement_WalkInPlaceRight
# 67 "data/emeralbody_rivals/rival_scene04.pory"
	speakername CommonText_Jakson
# 68 "data/emeralbody_rivals/rival_scene04.pory"
	msgbox Rival_Scene04_Text_4
# 69 "data/emeralbody_rivals/rival_scene04.pory"
	applymovement 10, Common_Movement_WalkInPlaceRight
# 70 "data/emeralbody_rivals/rival_scene04.pory"
	applymovement 12, Common_Movement_WalkInPlaceLeft
# 71 "data/emeralbody_rivals/rival_scene04.pory"
	waitmovement 0
# 72 "data/emeralbody_rivals/rival_scene04.pory"
	applymovement 8, Common_Movement_WalkInPlaceLeft
# 73 "data/emeralbody_rivals/rival_scene04.pory"
	speakername CommonText_Redd
# 74 "data/emeralbody_rivals/rival_scene04.pory"
	msgbox Rival_Scene04_Text_5
# 75 "data/emeralbody_rivals/rival_scene04.pory"
	speakername CommonText_Harper
# 76 "data/emeralbody_rivals/rival_scene04.pory"
	msgbox Rival_Scene04_Text_6
# 77 "data/emeralbody_rivals/rival_scene04.pory"
	applymovement 10, Common_Movement_WalkInPlaceDown
# 78 "data/emeralbody_rivals/rival_scene04.pory"
	applymovement 8, Common_Movement_WalkInPlaceDown
# 79 "data/emeralbody_rivals/rival_scene04.pory"
	waitmovement 0
# 80 "data/emeralbody_rivals/rival_scene04.pory"
	applymovement 11, Common_Movement_WalkInPlaceDown
# 81 "data/emeralbody_rivals/rival_scene04.pory"
	speakername CommonText_Sakura
# 82 "data/emeralbody_rivals/rival_scene04.pory"
	msgbox Rival_Scene04_Text_7
# 83 "data/emeralbody_rivals/rival_scene04.pory"
	speakername CommonText_Redd
# 84 "data/emeralbody_rivals/rival_scene04.pory"
	msgbox Rival_Scene04_Text_8
# 85 "data/emeralbody_rivals/rival_scene04.pory"
	applymovement 11, Common_Movement_WalkInPlaceUp
# 86 "data/emeralbody_rivals/rival_scene04.pory"
	waitmovement 0
# 87 "data/emeralbody_rivals/rival_scene04.pory"
	speakername CommonText_Baron
# 88 "data/emeralbody_rivals/rival_scene04.pory"
	msgbox Rival_Scene04_Text_9
# 89 "data/emeralbody_rivals/rival_scene04.pory"
	speakername CommonText_Harper
# 90 "data/emeralbody_rivals/rival_scene04.pory"
	msgbox Rival_Scene04_Text_10
# 91 "data/emeralbody_rivals/rival_scene04.pory"
	speakername CommonText_Baron
# 92 "data/emeralbody_rivals/rival_scene04.pory"
	msgbox Rival_Scene04_Text_11
# 93 "data/emeralbody_rivals/rival_scene04.pory"
	playse SE_LEDGE
# 94 "data/emeralbody_rivals/rival_scene04.pory"
	applymovement 10, Common_Movement_JumpInPlaceDown
# 95 "data/emeralbody_rivals/rival_scene04.pory"
	waitmovement 0
# 96 "data/emeralbody_rivals/rival_scene04.pory"
	speakername CommonText_Redd
# 97 "data/emeralbody_rivals/rival_scene04.pory"
	msgbox Rival_Scene04_Text_12
# 98 "data/emeralbody_rivals/rival_scene04.pory"
	speakername CommonText_Sakura
# 99 "data/emeralbody_rivals/rival_scene04.pory"
	msgbox Rival_Scene04_Text_13
# 100 "data/emeralbody_rivals/rival_scene04.pory"
	speakername CommonText_Harper
# 101 "data/emeralbody_rivals/rival_scene04.pory"
	msgbox Rival_Scene04_Text_14
# 102 "data/emeralbody_rivals/rival_scene04.pory"
	speakername CommonText_Jakson
# 103 "data/emeralbody_rivals/rival_scene04.pory"
	msgbox Rival_Scene04_Text_15
# 104 "data/emeralbody_rivals/rival_scene04.pory"
	closemessage
# 105 "data/emeralbody_rivals/rival_scene04.pory"
	setvar VAR_EMERALBODY_RIVAL_STATE, 16
# 106 "data/emeralbody_rivals/rival_scene04.pory"
	fadedefaultbgm
# 107 "data/emeralbody_rivals/rival_scene04.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 108 "data/emeralbody_rivals/rival_scene04.pory"
	warpsilent MAP_EVER_GRANDE_CITY_POKEMON_LEAGUE_1F, 9, 8
# 109 "data/emeralbody_rivals/rival_scene04.pory"
	release
	return


Rival_Scene04_Text_0:
# 44 "data/emeralbody_rivals/rival_scene04.pory"
	.string "{PLAYER}! Heyyy!$"

Rival_Scene04_Text_1:
# 57 "data/emeralbody_rivals/rival_scene04.pory"
	.string "Oh good, you were the last one,\n{PLAYER}.$"

Rival_Scene04_Text_2:
# 60 "data/emeralbody_rivals/rival_scene04.pory"
	.string "Yeah, even Baron was here before you!$"

Rival_Scene04_Text_3:
# 65 "data/emeralbody_rivals/rival_scene04.pory"
	.string "W- Well… I'm not as slow as I was\nbefore…$"

Rival_Scene04_Text_4:
# 68 "data/emeralbody_rivals/rival_scene04.pory"
	.string "That's true. You, Redd, and Harper have\nimproved a lot.$"

Rival_Scene04_Text_5:
# 74 "data/emeralbody_rivals/rival_scene04.pory"
	.string "Hey now. I was good from the start.\nPlus, I wasn't about to be left behind\lby the likes of all you.$"

Rival_Scene04_Text_6:
# 76 "data/emeralbody_rivals/rival_scene04.pory"
	.string "Doesn't that mean you started towards\nthe back if you could be “left behind”?$"

Rival_Scene04_Text_7:
# 82 "data/emeralbody_rivals/rival_scene04.pory"
	.string "Maybe he did! I wouldn't know. I never\nbothered to look back, heheh{EMOJI_TILDE}{UNK_SPACER}$"

Rival_Scene04_Text_8:
# 84 "data/emeralbody_rivals/rival_scene04.pory"
	.string "W- What are you implying?$"

Rival_Scene04_Text_9:
# 88 "data/emeralbody_rivals/rival_scene04.pory"
	.string "It's quite the bundle of personality\nwe've got here, haha.$"

Rival_Scene04_Text_10:
# 90 "data/emeralbody_rivals/rival_scene04.pory"
	.string "Well, for my part, I don't think I'd have\ngotten this far or improved this much\lif I was all on my own.$"

Rival_Scene04_Text_11:
# 92 "data/emeralbody_rivals/rival_scene04.pory"
	.string "I think I'm in the same position.\nI'll have to thank you all later.$"

Rival_Scene04_Text_12:
# 97 "data/emeralbody_rivals/rival_scene04.pory"
	.string "Emphasis on “later”! First things first.\nWe're all going to crush the Pokémon\lLeague in six fell swoops, me being 1st!$"

Rival_Scene04_Text_13:
# 99 "data/emeralbody_rivals/rival_scene04.pory"
	.string "Oh, narrow-minded Redd. You can't be\nfirst if I've already completed it{EMOJI_TILDE}{UNK_SPACER}$"

Rival_Scene04_Text_14:
# 101 "data/emeralbody_rivals/rival_scene04.pory"
	.string "You definitely just got here like\nthe rest of us…$"

Rival_Scene04_Text_15:
# 103 "data/emeralbody_rivals/rival_scene04.pory"
	.string "Easy now, everyone. Let's all prep, then\nwe can start.$"
