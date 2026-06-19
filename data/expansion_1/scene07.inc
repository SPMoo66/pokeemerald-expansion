SS_Tidal_Dungeon_1F_1R_Room1_Dynamite::
# 13 "data/expansion_1/scene07.pory"
	addobject 4
# 14 "data/expansion_1/scene07.pory"
	destroyfollowernpc
# 15 "data/expansion_1/scene07.pory"
	applymovement 4, Common_Movement_WalkRight
# 16 "data/expansion_1/scene07.pory"
	waitmovement 0
# 17 "data/expansion_1/scene07.pory"
	applymovement 4, Common_Movement_WalkInPlaceFasterUp
# 18 "data/expansion_1/scene07.pory"
	waitmovement 0
# 19 "data/expansion_1/scene07.pory"
	speakername CommonText_Harper
# 20 "data/expansion_1/scene07.pory"
	msgbox SS_Tidal_Dungeon_1F_1R_Room1_Dynamite_Text_0, MSGBOX_AUTOCLOSE
# 25 "data/expansion_1/scene07.pory"
	fadescreen FADE_TO_BLACK
# 26 "data/expansion_1/scene07.pory"
	removeobject 2
# 27 "data/expansion_1/scene07.pory"
	playfanfare MUS_DP_OBTAIN_KEY_ITEM
# 28 "data/expansion_1/scene07.pory"
	message SS_Tidal_Dungeon_1F_1R_Room1_Dynamite_Text_1
# 29 "data/expansion_1/scene07.pory"
	waitfanfare
# 30 "data/expansion_1/scene07.pory"
	closemessage
# 31 "data/expansion_1/scene07.pory"
	addobject 3
# 32 "data/expansion_1/scene07.pory"
	fadescreen FADE_FROM_BLACK
# 33 "data/expansion_1/scene07.pory"
	delay 30
# 34 "data/expansion_1/scene07.pory"
	applymovement 4, Common_Movement_WalkInPlaceFasterLeft
# 35 "data/expansion_1/scene07.pory"
	waitmovement 0
# 36 "data/expansion_1/scene07.pory"
	speakername CommonText_Harper
# 37 "data/expansion_1/scene07.pory"
	msgbox SS_Tidal_Dungeon_1F_1R_Room1_Dynamite_Text_2, MSGBOX_AUTOCLOSE
# 47 "data/expansion_1/scene07.pory"
	fadenewbgm MUS_HG_LUGIA_APPEARS
# 48 "data/expansion_1/scene07.pory"
	applymovement 4, Common_Movement_WalkInPlaceFasterDown
# 49 "data/expansion_1/scene07.pory"
	waitmovement 0
# 50 "data/expansion_1/scene07.pory"
	delay 60
# 51 "data/expansion_1/scene07.pory"
	applymovement 4, Common_Movement_WalkInPlaceFasterLeft
# 52 "data/expansion_1/scene07.pory"
	waitmovement 0
# 53 "data/expansion_1/scene07.pory"
	delay 60
# 54 "data/expansion_1/scene07.pory"
	applymovement 4, Common_Movement_WalkInPlaceFasterUp
# 55 "data/expansion_1/scene07.pory"
	waitmovement 0
# 56 "data/expansion_1/scene07.pory"
	speakername CommonText_Harper
# 57 "data/expansion_1/scene07.pory"
	msgbox SS_Tidal_Dungeon_1F_1R_Room1_Dynamite_Text_3, MSGBOX_AUTOCLOSE
# 59 "data/expansion_1/scene07.pory"
	applymovement 3, Common_Movement_ShakeHorizontal
# 60 "data/expansion_1/scene07.pory"
	waitmovement 0
# 62 "data/expansion_1/scene07.pory"
	msgbox SS_Tidal_Dungeon_1F_1R_Room1_Dynamite_Text_4, MSGBOX_AUTOCLOSE
# 63 "data/expansion_1/scene07.pory"
	delay 40
# 65 "data/expansion_1/scene07.pory"
	speakername CommonText_Harper
# 66 "data/expansion_1/scene07.pory"
	msgbox SS_Tidal_Dungeon_1F_1R_Room1_Dynamite_Text_5, MSGBOX_AUTOCLOSE
# 78 "data/expansion_1/scene07.pory"
	applymovement 4, Common_Movement_SweatDrop
# 79 "data/expansion_1/scene07.pory"
	playse SE_M_METRONOME
# 80 "data/expansion_1/scene07.pory"
	delay 40
# 81 "data/expansion_1/scene07.pory"
	speakername CommonText_Harper
# 82 "data/expansion_1/scene07.pory"
	msgbox SS_Tidal_Dungeon_1F_1R_Room1_Dynamite_Text_6, MSGBOX_AUTOCLOSE
# 86 "data/expansion_1/scene07.pory"
	applymovement 4, Common_Movement_WalkLeft
# 87 "data/expansion_1/scene07.pory"
	waitmovement 0
# 88 "data/expansion_1/scene07.pory"
	applymovement 4, Common_Movement_WalkInPlaceFasterUp
# 89 "data/expansion_1/scene07.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 90 "data/expansion_1/scene07.pory"
	waitmovement 0
# 91 "data/expansion_1/scene07.pory"
	delay 10
# 92 "data/expansion_1/scene07.pory"
	playfanfare MUS_TOO_BAD
# 93 "data/expansion_1/scene07.pory"
	message SS_Tidal_Dungeon_1F_1R_Room1_Dynamite_Text_7
# 95 "data/expansion_1/scene07.pory"
	waitfanfare
# 96 "data/expansion_1/scene07.pory"
	closemessage
# 97 "data/expansion_1/scene07.pory"
	speakername CommonText_Harper
# 98 "data/expansion_1/scene07.pory"
	msgbox SS_Tidal_Dungeon_1F_1R_Room1_Dynamite_Text_8, MSGBOX_AUTOCLOSE
# 103 "data/expansion_1/scene07.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 104 "data/expansion_1/scene07.pory"
	setvar VAR_EMERALBODY_RIVAL_STATE, 39
# 105 "data/expansion_1/scene07.pory"
	fadescreen FADE_TO_BLACK
# 106 "data/expansion_1/scene07.pory"
	warpcontinuescript MAP_MAUVE_CAMP, 27, 13, Expansion1_Rival_Scene07b
	return


Expansion1_Rival_Scene07b::
# 110 "data/expansion_1/scene07.pory"
	turnobject LOCALID_PLAYER, DIR_WEST
# 111 "data/expansion_1/scene07.pory"
	setobjectxyperm 6, 27, 12
# 112 "data/expansion_1/scene07.pory"
	setobjectxyperm 7, 26, 14
# 113 "data/expansion_1/scene07.pory"
	setobjectxyperm 8, 25, 12
# 114 "data/expansion_1/scene07.pory"
	setobjectxyperm 10, 26, 11
# 115 "data/expansion_1/scene07.pory"
	setobjectxyperm 11, 25, 13
# 116 "data/expansion_1/scene07.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_LEFT
# 117 "data/expansion_1/scene07.pory"
	setobjectmovementtype 10, MOVEMENT_TYPE_FACE_DOWN
# 118 "data/expansion_1/scene07.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_FACE_RIGHT
# 119 "data/expansion_1/scene07.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_UP
# 120 "data/expansion_1/scene07.pory"
	setobjectmovementtype 11, MOVEMENT_TYPE_FACE_RIGHT
# 121 "data/expansion_1/scene07.pory"
	addobject 6
# 122 "data/expansion_1/scene07.pory"
	addobject 10
# 123 "data/expansion_1/scene07.pory"
	addobject 8
# 124 "data/expansion_1/scene07.pory"
	addobject 7
# 125 "data/expansion_1/scene07.pory"
	addobject 11
# 126 "data/expansion_1/scene07.pory"
	fadescreen FADE_FROM_BLACK
# 128 "data/expansion_1/scene07.pory"
	applymovement 10, Common_Movement_MusicNote
# 129 "data/expansion_1/scene07.pory"
	playse SE_RG_HELP_OPEN
# 130 "data/expansion_1/scene07.pory"
	delay 40
# 131 "data/expansion_1/scene07.pory"
	speakername CommonText_Redd
# 132 "data/expansion_1/scene07.pory"
	msgbox Expansion1_Rival_Scene07b_Text_0, MSGBOX_AUTOCLOSE
# 135 "data/expansion_1/scene07.pory"
	applymovement 8, Common_Movement_WalkInPlaceFasterDown
# 136 "data/expansion_1/scene07.pory"
	waitmovement 0
# 137 "data/expansion_1/scene07.pory"
	speakername CommonText_Sakura
# 138 "data/expansion_1/scene07.pory"
	msgbox Expansion1_Rival_Scene07b_Text_1
# 139 "data/expansion_1/scene07.pory"
	speakername CommonText_Harper
# 140 "data/expansion_1/scene07.pory"
	msgbox Expansion1_Rival_Scene07b_Text_2, MSGBOX_AUTOCLOSE
# 141 "data/expansion_1/scene07.pory"
	applymovement 8, Common_Movement_WalkInPlaceFasterRight
# 142 "data/expansion_1/scene07.pory"
	waitmovement 0
# 143 "data/expansion_1/scene07.pory"
	speakername CommonText_Sakura
# 144 "data/expansion_1/scene07.pory"
	msgbox Expansion1_Rival_Scene07b_Text_3, MSGBOX_AUTOCLOSE
# 146 "data/expansion_1/scene07.pory"
	applymovement 8, Common_Movement_ShakeHorizontal
# 147 "data/expansion_1/scene07.pory"
	waitmovement 0
# 148 "data/expansion_1/scene07.pory"
	speakername CommonText_Jakson
# 149 "data/expansion_1/scene07.pory"
	msgbox Expansion1_Rival_Scene07b_Text_4
# 150 "data/expansion_1/scene07.pory"
	speakername CommonText_Harper
# 151 "data/expansion_1/scene07.pory"
	msgbox Expansion1_Rival_Scene07b_Text_5
# 153 "data/expansion_1/scene07.pory"
	speakername CommonText_Jakson
# 154 "data/expansion_1/scene07.pory"
	msgbox Expansion1_Rival_Scene07b_Text_6, MSGBOX_AUTOCLOSE
# 158 "data/expansion_1/scene07.pory"
	applymovement 7, Common_Movement_Thinking
# 159 "data/expansion_1/scene07.pory"
	delay 60
# 160 "data/expansion_1/scene07.pory"
	call GetBaronsName
# 161 "data/expansion_1/scene07.pory"
	msgbox Expansion1_Rival_Scene07b_Text_7
# 163 "data/expansion_1/scene07.pory"
	speakername CommonText_Jakson
# 164 "data/expansion_1/scene07.pory"
	msgbox Expansion1_Rival_Scene07b_Text_8
# 165 "data/expansion_1/scene07.pory"
	speakername CommonText_Harper
# 166 "data/expansion_1/scene07.pory"
	msgbox Expansion1_Rival_Scene07b_Text_9
# 171 "data/expansion_1/scene07.pory"
	call GetBaronsName
# 172 "data/expansion_1/scene07.pory"
	msgbox Expansion1_Rival_Scene07b_Text_10
# 174 "data/expansion_1/scene07.pory"
	speakername CommonText_Harper
# 175 "data/expansion_1/scene07.pory"
	msgbox Expansion1_Rival_Scene07b_Text_11, MSGBOX_AUTOCLOSE
# 178 "data/expansion_1/scene07.pory"
	applymovement 10, Common_Movement_MusicNote
# 179 "data/expansion_1/scene07.pory"
	playse SE_RG_HELP_OPEN
# 180 "data/expansion_1/scene07.pory"
	delay 40
# 181 "data/expansion_1/scene07.pory"
	speakername CommonText_Redd
# 182 "data/expansion_1/scene07.pory"
	msgbox Expansion1_Rival_Scene07b_Text_12
# 183 "data/expansion_1/scene07.pory"
	speakername CommonText_Sakura
# 184 "data/expansion_1/scene07.pory"
	msgbox Expansion1_Rival_Scene07b_Text_13
# 188 "data/expansion_1/scene07.pory"
	speakername CommonText_Jakson
# 189 "data/expansion_1/scene07.pory"
	msgbox Expansion1_Rival_Scene07b_Text_14
# 190 "data/expansion_1/scene07.pory"
	speakername CommonText_Sakura
# 191 "data/expansion_1/scene07.pory"
	msgbox Expansion1_Rival_Scene07b_Text_15, MSGBOX_AUTOCLOSE
# 193 "data/expansion_1/scene07.pory"
	playse SE_LEDGE
# 194 "data/expansion_1/scene07.pory"
	applymovement 8, Common_Movement_JumpInPlaceRight
# 195 "data/expansion_1/scene07.pory"
	waitmovement 0
# 196 "data/expansion_1/scene07.pory"
	delay 20
# 197 "data/expansion_1/scene07.pory"
	applymovement 10, Common_Movement_WalkInPlaceLeft
# 198 "data/expansion_1/scene07.pory"
	applymovement 8, Common_Movement_WalkLeft6
# 199 "data/expansion_1/scene07.pory"
	waitmovement 0
# 200 "data/expansion_1/scene07.pory"
	applymovement 11, Common_Movement_WalkInPlaceLeft
# 201 "data/expansion_1/scene07.pory"
	applymovement 10, Common_Movement_SweatDrop
# 202 "data/expansion_1/scene07.pory"
	setvar VAR_EMERALBODY_RIVAL_STATE, 40
# 203 "data/expansion_1/scene07.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 204 "data/expansion_1/scene07.pory"
	warpcontinuescript MAP_MAUVE_CAMP, 16, 16, Expansion1_Rival_Scene02e
	return


SS_Tidal_Dungeon_1F_1R_Room1_Dynamite_Text_0:
# 20 "data/expansion_1/scene07.pory"
	.string "Well, sure as shit, there it is.\p"
	.string "Some genuine dynamite… yee haw?\p"
	.string "Sorry, I'm already thinking of what\n"
	.string "horrible line Sakura's going to throw\l"
	.string "when she pulls the plunger on this.$"

SS_Tidal_Dungeon_1F_1R_Room1_Dynamite_Text_1:
# 28 "data/expansion_1/scene07.pory"
	.string "{PLAYER} obtained dynamite!$"

SS_Tidal_Dungeon_1F_1R_Room1_Dynamite_Text_2:
# 37 "data/expansion_1/scene07.pory"
	.string "And look at that sucker. Probably came\n"
	.string "here on vacation, and now we've\l"
	.string "sequence broken this thing so bad that\l"
	.string "he's trapped in his cabin for eternity.\p"
	.string "You know… Isn't his sprite a bit\n"
	.string "familiar looking?\p"
	.string "Eh, let's just grab this and-\p"
	.string "… … …\n"
	.string "… … …\l"
	.string "Did you hear that?$"

SS_Tidal_Dungeon_1F_1R_Room1_Dynamite_Text_3:
# 57 "data/expansion_1/scene07.pory"
	.string "Was that fishbowl… always in that\n"
	.string "position?$"

SS_Tidal_Dungeon_1F_1R_Room1_Dynamite_Text_4:
# 62 "data/expansion_1/scene07.pory"
	.string "there's a battle here$"

SS_Tidal_Dungeon_1F_1R_Room1_Dynamite_Text_5:
# 66 "data/expansion_1/scene07.pory"
	.string "Motherfu-\n"
	.string "… … …\l"
	.string "So we're getting mimics or something\l"
	.string "now?\p"
	.string "They'll make anything into a 'mon these\n"
	.string "days, won't they? At least the design\l"
	.string "was interesting.\p"
	.string "Maybe it was supposed to be the guard\n"
	.string "of the dynamite?\p"
	.string "Or is that another mystery whose\n"
	.string "answer is lost to the annals of\l"
	.string "sequence breaks?$"

SS_Tidal_Dungeon_1F_1R_Room1_Dynamite_Text_6:
# 82 "data/expansion_1/scene07.pory"
	.string "Maybe we're back on the right track\n"
	.string "then.\l"
	.string "Or back on track at all, at least.\p"
	.string "Anyway, I'll be taking that-$"

SS_Tidal_Dungeon_1F_1R_Room1_Dynamite_Text_7:
# 93 "data/expansion_1/scene07.pory"
	.string "Harper took the dynamite from\n"
	.string "{PLAYER}…$"

SS_Tidal_Dungeon_1F_1R_Room1_Dynamite_Text_8:
# 98 "data/expansion_1/scene07.pory"
	.string "So let's hurry back to the others.\p"
	.string "If the whole VR system here actually\n"
	.string "let us see the twinkle in a person's\l"
	.string "eyes…\p"
	.string "Well, it'd be a sight to behold.$"

Expansion1_Rival_Scene07b_Text_0:
# 132 "data/expansion_1/scene07.pory"
	.string "Well, hot damn. You two really had that\n"
	.string "handled after all.\p"
	.string "I was all ready to jump in and help.$"

Expansion1_Rival_Scene07b_Text_1:
# 138 "data/expansion_1/scene07.pory"
	.string "So… you got it?$"

Expansion1_Rival_Scene07b_Text_2:
# 140 "data/expansion_1/scene07.pory"
	.string "Yup, despite the locals' misgivings.$"

Expansion1_Rival_Scene07b_Text_3:
# 144 "data/expansion_1/scene07.pory"
	.string "Ooh baby, let's see what this explosion\n"
	.string "looks like!$"

Expansion1_Rival_Scene07b_Text_4:
# 149 "data/expansion_1/scene07.pory"
	.string "Phew, I'm glad my intuition was right.$"

Expansion1_Rival_Scene07b_Text_5:
# 151 "data/expansion_1/scene07.pory"
	.string "Yes, Jakson. Your sense of game design\n"
	.string "isn't completely gone.$"

Expansion1_Rival_Scene07b_Text_6:
# 154 "data/expansion_1/scene07.pory"
	.string "I was betting on the idea that the\n"
	.string "ship was a place the party returns to.\p"
	.string "But yeah, with it wrecked that wasn't\n"
	.string "a sure thing.$"

Expansion1_Rival_Scene07b_Text_7:
# 161 "data/expansion_1/scene07.pory"
	.string "It didn't look wrecked on the inside,\n"
	.string "though…?$"

Expansion1_Rival_Scene07b_Text_8:
# 164 "data/expansion_1/scene07.pory"
	.string "More weird mod interactions?$"

Expansion1_Rival_Scene07b_Text_9:
# 166 "data/expansion_1/scene07.pory"
	.string "If anything, I'm glad you weren't\n"
	.string "responsible for that unoriginal\l"
	.string "dungeon.\p"
	.string "But yes, we've retrieved your dynamite.\n"
	.string "Praise be.$"

Expansion1_Rival_Scene07b_Text_10:
# 172 "data/expansion_1/scene07.pory"
	.string "So this is how we… as Sakura said…\n"
	.string "go “boom”?$"

Expansion1_Rival_Scene07b_Text_11:
# 175 "data/expansion_1/scene07.pory"
	.string "Can't imagine another use for an\n"
	.string "explosives key item other than a\l"
	.string "progression event. So that's my bet.$"

Expansion1_Rival_Scene07b_Text_12:
# 182 "data/expansion_1/scene07.pory"
	.string "As they say, when in Rome, blow it up.$"

Expansion1_Rival_Scene07b_Text_13:
# 184 "data/expansion_1/scene07.pory"
	.string "Completely, 100% accurate and wisdom\n"
	.string "we should be following this moment.\p"
	.string "Meaning… hand it over!\n"
	.string "I'm ready to blow this joint{EMOJI_TILDE}{UNK_SPACER}$"

Expansion1_Rival_Scene07b_Text_14:
# 189 "data/expansion_1/scene07.pory"
	.string "You said it's to the west, Sakura?$"

Expansion1_Rival_Scene07b_Text_15:
# 191 "data/expansion_1/scene07.pory"
	.string "Yeah! Right out in the water to the\n"
	.string "west. Hurry up, everyone!$"
