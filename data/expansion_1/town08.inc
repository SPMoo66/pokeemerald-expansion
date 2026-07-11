Sakura_Exp1_Town08::
# 8 "data/expansion_1/town08.pory"
	playbgm MUS_HG_ENCOUNTER_GIRL_1, FALSE
# 9 "data/expansion_1/town08.pory"
	faceplayer
# 10 "data/expansion_1/town08.pory"
	speakername CommonText_Sakura
# 11 "data/expansion_1/town08.pory"
	msgbox Sakura_Exp1_Town08_Text_0, MSGBOX_AUTOCLOSE
# 25 "data/expansion_1/town08.pory"
	applymovement 2, Common_Movement_WalkUp
# 26 "data/expansion_1/town08.pory"
	waitmovement 0
# 27 "data/expansion_1/town08.pory"
	playse SE_EXIT
# 28 "data/expansion_1/town08.pory"
	removeobject 2
# 29 "data/expansion_1/town08.pory"
	setvar VAR_EMERALBODY_RIVAL_STATE, 46
# 30 "data/expansion_1/town08.pory"
	fadedefaultbgm
	return


Redd_Exp1_Town08::
# 34 "data/expansion_1/town08.pory"
	addobject 2
# 35 "data/expansion_1/town08.pory"
	playbgm MUS_HG_ETHAN, FALSE
# 36 "data/expansion_1/town08.pory"
	speakername CommonText_Redd
# 37 "data/expansion_1/town08.pory"
	msgbox Redd_Exp1_Town08_Text_0, MSGBOX_AUTOCLOSE
# 38 "data/expansion_1/town08.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceUp
# 39 "data/expansion_1/town08.pory"
	applymovement 2, Common_Movement_WalkDiagSW
# 40 "data/expansion_1/town08.pory"
	waitmovement 0
# 41 "data/expansion_1/town08.pory"
	applymovement 2, Common_Movement_WalkLeft2
# 42 "data/expansion_1/town08.pory"
	waitmovement 0
# 43 "data/expansion_1/town08.pory"
	applymovement 2, Common_Movement_WalkDown4
# 44 "data/expansion_1/town08.pory"
	waitmovement 0
# 45 "data/expansion_1/town08.pory"
	speakername CommonText_Redd
# 46 "data/expansion_1/town08.pory"
	msgbox Redd_Exp1_Town08_Text_1, MSGBOX_AUTOCLOSE
# 59 "data/expansion_1/town08.pory"
	turnobject LOCALID_PLAYER, DIR_WEST
# 60 "data/expansion_1/town08.pory"
	applymovement LOCALID_PLAYER, Common_Movement_LockFacingDirection
# 61 "data/expansion_1/town08.pory"
	waitmovement 0
# 62 "data/expansion_1/town08.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight
# 63 "data/expansion_1/town08.pory"
	waitmovement 0
# 64 "data/expansion_1/town08.pory"
	applymovement LOCALID_PLAYER, Common_Movement_UnlockFacingDirection
# 65 "data/expansion_1/town08.pory"
	applymovement 2, Common_Movement_WalkDown3
# 66 "data/expansion_1/town08.pory"
	waitmovement 0
# 67 "data/expansion_1/town08.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceDown
# 68 "data/expansion_1/town08.pory"
	applymovement 2, Common_Movement_WalkRight6
# 69 "data/expansion_1/town08.pory"
	waitmovement 0
# 70 "data/expansion_1/town08.pory"
	applymovement 2, Common_Movement_WalkUp2
# 71 "data/expansion_1/town08.pory"
	waitmovement 0
# 72 "data/expansion_1/town08.pory"
	playse SE_EXIT
# 73 "data/expansion_1/town08.pory"
	removeobject 2
# 74 "data/expansion_1/town08.pory"
	setvar VAR_EMERALBODY_RIVAL_STATE, 47
# 75 "data/expansion_1/town08.pory"
	fadedefaultbgm
	return


Baron_Exp1_Town08::
# 79 "data/expansion_1/town08.pory"
	playbgm MUS_PL_B_HALL, FALSE
# 80 "data/expansion_1/town08.pory"
	addobject 4
# 81 "data/expansion_1/town08.pory"
	playse SE_EXIT
# 82 "data/expansion_1/town08.pory"
	delay 30
# 83 "data/expansion_1/town08.pory"
	applymovement 4, Common_Movement_WalkDown
# 84 "data/expansion_1/town08.pory"
	waitmovement 0
# 85 "data/expansion_1/town08.pory"
	call GetBaronsName
# 86 "data/expansion_1/town08.pory"
	msgbox Baron_Exp1_Town08_Text_0, MSGBOX_AUTOCLOSE
# 87 "data/expansion_1/town08.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceUp
# 88 "data/expansion_1/town08.pory"
	applymovement 4, Common_Movement_WalkDown
# 89 "data/expansion_1/town08.pory"
	waitmovement 0
# 90 "data/expansion_1/town08.pory"
	applymovement 4, Common_Movement_WalkRight3
# 91 "data/expansion_1/town08.pory"
	waitmovement 0
# 92 "data/expansion_1/town08.pory"
	applymovement LOCALID_PLAYER, Common_Movement_LockFacingDirection
# 93 "data/expansion_1/town08.pory"
	applymovement 4, Common_Movement_WalkDown
# 94 "data/expansion_1/town08.pory"
	waitmovement 0
# 96 "data/expansion_1/town08.pory"
	call GetBaronsName
# 97 "data/expansion_1/town08.pory"
	msgbox Baron_Exp1_Town08_Text_1, MSGBOX_AUTOCLOSE
# 106 "data/expansion_1/town08.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 107 "data/expansion_1/town08.pory"
	waitmovement 0
# 108 "data/expansion_1/town08.pory"
	applymovement LOCALID_PLAYER, Common_Movement_UnlockFacingDirection
# 109 "data/expansion_1/town08.pory"
	applymovement 4, Common_Movement_WalkDown
# 110 "data/expansion_1/town08.pory"
	waitmovement 0
# 111 "data/expansion_1/town08.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceRight
# 112 "data/expansion_1/town08.pory"
	applymovement 4, Common_Movement_WalkRight3
# 113 "data/expansion_1/town08.pory"
	waitmovement 0
# 114 "data/expansion_1/town08.pory"
	applymovement 4, Common_Movement_WalkDiagSE
# 115 "data/expansion_1/town08.pory"
	waitmovement 0
# 116 "data/expansion_1/town08.pory"
	applymovement 4, Common_Movement_WalkRight4
# 117 "data/expansion_1/town08.pory"
	waitmovement 0
# 118 "data/expansion_1/town08.pory"
	removeobject 4
# 119 "data/expansion_1/town08.pory"
	setvar VAR_EMERALBODY_RIVAL_STATE, 48
# 120 "data/expansion_1/town08.pory"
	fadedefaultbgm
	return


Jakson_Exp1_Town08::
# 124 "data/expansion_1/town08.pory"
	playbgm MUS_HG_EUSINE, FALSE
# 125 "data/expansion_1/town08.pory"
	addobject 3
# 126 "data/expansion_1/town08.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceUp
# 127 "data/expansion_1/town08.pory"
	applymovement 3, Common_Movement_WalkDown3
# 128 "data/expansion_1/town08.pory"
	waitmovement 0
# 129 "data/expansion_1/town08.pory"
	speakername CommonText_Jakson
# 130 "data/expansion_1/town08.pory"
	msgbox Jakson_Exp1_Town08_Text_0, MSGBOX_AUTOCLOSE
# 131 "data/expansion_1/town08.pory"
	applymovement 3, Common_Movement_WalkDown2
# 132 "data/expansion_1/town08.pory"
	waitmovement 0
# 133 "data/expansion_1/town08.pory"
	speakername CommonText_Jakson
# 134 "data/expansion_1/town08.pory"
	msgbox Jakson_Exp1_Town08_Text_1, MSGBOX_AUTOCLOSE
# 147 "data/expansion_1/town08.pory"
	turnobject LOCALID_PLAYER, DIR_WEST
# 148 "data/expansion_1/town08.pory"
	applymovement LOCALID_PLAYER, Common_Movement_LockFacingDirection
# 149 "data/expansion_1/town08.pory"
	waitmovement 0
# 150 "data/expansion_1/town08.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight
# 151 "data/expansion_1/town08.pory"
	waitmovement 0
# 152 "data/expansion_1/town08.pory"
	applymovement 3, Common_Movement_WalkDown3
# 153 "data/expansion_1/town08.pory"
	waitmovement 0
# 154 "data/expansion_1/town08.pory"
	applymovement 3, Common_Movement_WalkLeft8
# 155 "data/expansion_1/town08.pory"
	waitmovement 0
# 156 "data/expansion_1/town08.pory"
	removeobject 3
# 157 "data/expansion_1/town08.pory"
	setvar VAR_EMERALBODY_RIVAL_STATE, 49
# 158 "data/expansion_1/town08.pory"
	fadedefaultbgm
	return


Harper_Exp1_Town08::
# 162 "data/expansion_1/town08.pory"
	playbgm MUS_DP_DAWN, FALSE
# 163 "data/expansion_1/town08.pory"
	faceplayer
# 164 "data/expansion_1/town08.pory"
	speakername CommonText_Harper
# 165 "data/expansion_1/town08.pory"
	msgbox Harper_Exp1_Town08_Text_0, MSGBOX_AUTOCLOSE
# 181 "data/expansion_1/town08.pory"
	applymovement 3, Common_Movement_WalkUp
# 182 "data/expansion_1/town08.pory"
	waitmovement 0
# 183 "data/expansion_1/town08.pory"
	playse SE_EXIT
# 184 "data/expansion_1/town08.pory"
	removeobject 3
# 185 "data/expansion_1/town08.pory"
	setvar VAR_EMERALBODY_RIVAL_STATE, 50
# 186 "data/expansion_1/town08.pory"
	fadedefaultbgm
	return


Sakura_Exp1_Town08_Text_0:
# 11 "data/expansion_1/town08.pory"
	.string "{PLAYER}!\p"
	.string "Come on, hurry up already!\p"
	.string "Let's tag team the monster. You take\n"
	.string "one end and I'll take the other!\p"
	.string "They won't know what hit them when we\n"
	.string "use our sure-hit, double penetration\l"
	.string "assault!\p"
	.string "…What's that look? Aren't you also\n"
	.string "disappointed in the lack of treasure?\p"
	.string "Wailing on a final boss sounds like a\n"
	.string "perfect way to make up for it{EMOJI_TILDE}\p"
	.string "I'm gonna run ahead, but don't you take\n"
	.string "too long! You'll miss the heated rivalry\l"
	.string "see its conclusion!$"

Redd_Exp1_Town08_Text_0:
# 37 "data/expansion_1/town08.pory"
	.string "Yo, wait up!$"

Redd_Exp1_Town08_Text_1:
# 46 "data/expansion_1/town08.pory"
	.string "Oh, thank goodness it's you, {PLAYER}.\p"
	.string "I appreciate that they're already\n"
	.string "done, but… sometimes I wonder if I\l"
	.string "get lost more easily when the puzzles\l"
	.string "are already done.\p"
	.string "{EMOJI_BIGWHEEL}Sigh{EMOJI_BIGWHEEL}… ‘Too much water’? What kind of\n"
	.string "damn sadist thought that adding more\l"
	.string "was a good idea!\p"
	.string "I feel like I'm channeling some of\n"
	.string "Harper's rage right now.\p"
	.string "Hah…\p"
	.string "Alright, let's see what kind of finale\n"
	.string "they have in store for us.$"

Baron_Exp1_Town08_Text_0:
# 86 "data/expansion_1/town08.pory"
	.string "W-wait, {PLAYER}!$"

Baron_Exp1_Town08_Text_1:
# 97 "data/expansion_1/town08.pory"
	.string "Hah… hah…\p"
	.string "I was trying to train my Pokémon up to\n"
	.string "the very end.\p"
	.string "I don't know how much help I'll be able\n"
	.string "to be, but I won't weigh you all down!\p"
	.string "The others are on ahead, right?\p"
	.string "I don't want to be the last one there!\p"
	.string "Don't be too long, {PLAYER}!$"

Jakson_Exp1_Town08_Text_0:
# 130 "data/expansion_1/town08.pory"
	.string "Hold on, {PLAYER}!$"

Jakson_Exp1_Town08_Text_1:
# 134 "data/expansion_1/town08.pory"
	.string "Have you seen any of the others?\p"
	.string "Yeah? Just not Harper?\p"
	.string "Well… odds are that she'll be ahead of\n"
	.string "us here.\p"
	.string "Good. You know, I do appreciate her\n"
	.string "stepping up and helping out with my\l"
	.string "failings.\p"
	.string "If she doesn't mind, maybe I could get\n"
	.string "some of her input for next time around.\p"
	.string "Haha, don't you worry about it.\p"
	.string "Keep your mind on whatever challenge\n"
	.string "lays ahead of us.\p"
	.string "Let's get a move on.$"

Harper_Exp1_Town08_Text_0:
# 165 "data/expansion_1/town08.pory"
	.string "Ooh, took you long enough, {PLAYER}.\p"
	.string "Yeah, everyone's already in there\n"
	.string "waiting for you now.\p"
	.string "This boss was the thing hunting you\n"
	.string "down from the start, right? Any tips?\p"
	.string "“Don't get hit”? What a sage you are,\n"
	.string "haha…\p"
	.string "Happy we still have our sense of humor\n"
	.string "at this point in at all.\p"
	.string "…though… you know…\p"
	.string "I'm glad I've been sticking around with\n"
	.string "you all. This has been fun.\p"
	.string "But it's not like there's any need for\n"
	.string "sappy stuff.\p"
	.string "Come on, let's get in there and take\n"
	.string "this thing down.$"
