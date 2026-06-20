SS_Tidal_Dungeon_1F_1R_Room1_Dynamite::
# 13 "data/expansion_1/scene07.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkRight
# 14 "data/expansion_1/scene07.pory"
	waitmovement 0
# 15 "data/expansion_1/scene07.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkInPlaceFasterUp
# 16 "data/expansion_1/scene07.pory"
	waitmovement 0
# 17 "data/expansion_1/scene07.pory"
	speakername CommonText_Harper
# 18 "data/expansion_1/scene07.pory"
	msgbox SS_Tidal_Dungeon_1F_1R_Room1_Dynamite_Text_0, MSGBOX_AUTOCLOSE
# 23 "data/expansion_1/scene07.pory"
	fadescreen FADE_TO_BLACK
# 24 "data/expansion_1/scene07.pory"
	removeobject 2
# 25 "data/expansion_1/scene07.pory"
	playfanfare MUS_DP_OBTAIN_KEY_ITEM
# 26 "data/expansion_1/scene07.pory"
	message SS_Tidal_Dungeon_1F_1R_Room1_Dynamite_Text_1
# 27 "data/expansion_1/scene07.pory"
	waitfanfare
# 28 "data/expansion_1/scene07.pory"
	closemessage
# 29 "data/expansion_1/scene07.pory"
	addobject 3
# 30 "data/expansion_1/scene07.pory"
	fadescreen FADE_FROM_BLACK
# 31 "data/expansion_1/scene07.pory"
	delay 30
# 32 "data/expansion_1/scene07.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkInPlaceFasterLeft
# 33 "data/expansion_1/scene07.pory"
	waitmovement 0
# 34 "data/expansion_1/scene07.pory"
	speakername CommonText_Harper
# 35 "data/expansion_1/scene07.pory"
	msgbox SS_Tidal_Dungeon_1F_1R_Room1_Dynamite_Text_2, MSGBOX_AUTOCLOSE
# 41 "data/expansion_1/scene07.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 42 "data/expansion_1/scene07.pory"
	waitmovement 0
# 43 "data/expansion_1/scene07.pory"
	delay 20
# 44 "data/expansion_1/scene07.pory"
	speakername CommonText_Harper
# 45 "data/expansion_1/scene07.pory"
	msgbox SS_Tidal_Dungeon_1F_1R_Room1_Dynamite_Text_3, MSGBOX_AUTOCLOSE
# 49 "data/expansion_1/scene07.pory"
	fadenewbgm MUS_HG_LUGIA_APPEARS
# 50 "data/expansion_1/scene07.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 51 "data/expansion_1/scene07.pory"
	waitmovement 0
# 52 "data/expansion_1/scene07.pory"
	delay 40
# 53 "data/expansion_1/scene07.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkInPlaceFasterDown
# 54 "data/expansion_1/scene07.pory"
	waitmovement 0
# 55 "data/expansion_1/scene07.pory"
	delay 60
# 56 "data/expansion_1/scene07.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkInPlaceFasterLeft
# 57 "data/expansion_1/scene07.pory"
	waitmovement 0
# 58 "data/expansion_1/scene07.pory"
	delay 60
# 59 "data/expansion_1/scene07.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 60 "data/expansion_1/scene07.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkInPlaceFasterUp
# 61 "data/expansion_1/scene07.pory"
	waitmovement 0
# 62 "data/expansion_1/scene07.pory"
	speakername CommonText_Harper
# 63 "data/expansion_1/scene07.pory"
	msgbox SS_Tidal_Dungeon_1F_1R_Room1_Dynamite_Text_4, MSGBOX_AUTOCLOSE
# 65 "data/expansion_1/scene07.pory"
	applymovement 3, Common_Movement_ShakeHorizontal
# 66 "data/expansion_1/scene07.pory"
	waitmovement 0
# 67 "data/expansion_1/scene07.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 68 "data/expansion_1/scene07.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_ExclamationMark
# 69 "data/expansion_1/scene07.pory"
	playse SE_PIN
# 70 "data/expansion_1/scene07.pory"
	delay 60
# 72 "data/expansion_1/scene07.pory"
	setflag FLAG_NO_CATCHING
# 73 "data/expansion_1/scene07.pory"
	setflag FLAG_NO_RUNNING
# 74 "data/expansion_1/scene07.pory"
	setflag FLAG_SMART_WILD_AI
# 75 "data/expansion_1/scene07.pory"
	settotemboost B_POSITION_OPPONENT_LEFT, 0, 3, 0, 0, 3
# 76 "data/expansion_1/scene07.pory"
	setwilddoubleflag
# 77 "data/expansion_1/scene07.pory"
	createmon 1, 0, SPECIES_REGIAGUA, 85, ITEM_NONE, BALL_POKE, NATURE_HARDY, 0, MON_GENDER_RANDOM, 72, 72, 72, 72, 72, 72, 0, 0, 0, 0, 0, 0, MOVE_ORIGIN_PULSE, MOVE_TEETER_DANCE, MOVE_SURF, MOVE_WOOD_HAMMER
# 78 "data/expansion_1/scene07.pory"
	dowildbattle
# 79 "data/expansion_1/scene07.pory"
	clearflag FLAG_NO_CATCHING
# 80 "data/expansion_1/scene07.pory"
	clearflag FLAG_NO_RUNNING
# 81 "data/expansion_1/scene07.pory"
	clearflag FLAG_SMART_WILD_AI
# 83 "data/expansion_1/scene07.pory"
	speakername CommonText_Harper
# 84 "data/expansion_1/scene07.pory"
	msgbox SS_Tidal_Dungeon_1F_1R_Room1_Dynamite_Text_5, MSGBOX_AUTOCLOSE
# 96 "data/expansion_1/scene07.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_SweatDrop
# 97 "data/expansion_1/scene07.pory"
	playse SE_M_METRONOME
# 98 "data/expansion_1/scene07.pory"
	delay 40
# 99 "data/expansion_1/scene07.pory"
	speakername CommonText_Harper
# 100 "data/expansion_1/scene07.pory"
	msgbox SS_Tidal_Dungeon_1F_1R_Room1_Dynamite_Text_6, MSGBOX_AUTOCLOSE
# 104 "data/expansion_1/scene07.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkLeft
# 105 "data/expansion_1/scene07.pory"
	waitmovement 0
# 106 "data/expansion_1/scene07.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkInPlaceFasterUp
# 107 "data/expansion_1/scene07.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 108 "data/expansion_1/scene07.pory"
	waitmovement 0
# 109 "data/expansion_1/scene07.pory"
	delay 10
# 110 "data/expansion_1/scene07.pory"
	playfanfare MUS_TOO_BAD
# 111 "data/expansion_1/scene07.pory"
	message SS_Tidal_Dungeon_1F_1R_Room1_Dynamite_Text_7
# 113 "data/expansion_1/scene07.pory"
	waitfanfare
# 114 "data/expansion_1/scene07.pory"
	closemessage
# 115 "data/expansion_1/scene07.pory"
	speakername CommonText_Harper
# 116 "data/expansion_1/scene07.pory"
	msgbox SS_Tidal_Dungeon_1F_1R_Room1_Dynamite_Text_8, MSGBOX_AUTOCLOSE
# 121 "data/expansion_1/scene07.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 122 "data/expansion_1/scene07.pory"
	setvar VAR_EMERALBODY_RIVAL_STATE, 39
# 123 "data/expansion_1/scene07.pory"
	fadescreen FADE_TO_BLACK
# 124 "data/expansion_1/scene07.pory"
	destroyfollowernpc
# 125 "data/expansion_1/scene07.pory"
	warpcontinuescript MAP_MAUVE_CAMP, 27, 13, Expansion1_Rival_Scene07b
	return


Expansion1_Rival_Scene07b::
# 129 "data/expansion_1/scene07.pory"
	turnobject LOCALID_PLAYER, DIR_WEST
# 130 "data/expansion_1/scene07.pory"
	setobjectxyperm 6, 27, 12
# 131 "data/expansion_1/scene07.pory"
	setobjectxyperm 7, 26, 14
# 132 "data/expansion_1/scene07.pory"
	setobjectxyperm 8, 25, 12
# 133 "data/expansion_1/scene07.pory"
	setobjectxyperm 10, 26, 11
# 134 "data/expansion_1/scene07.pory"
	setobjectxyperm 11, 25, 13
# 135 "data/expansion_1/scene07.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_LEFT
# 136 "data/expansion_1/scene07.pory"
	setobjectmovementtype 10, MOVEMENT_TYPE_FACE_DOWN
# 137 "data/expansion_1/scene07.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_FACE_RIGHT
# 138 "data/expansion_1/scene07.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_UP
# 139 "data/expansion_1/scene07.pory"
	setobjectmovementtype 11, MOVEMENT_TYPE_FACE_RIGHT
# 140 "data/expansion_1/scene07.pory"
	addobject 6
# 141 "data/expansion_1/scene07.pory"
	addobject 10
# 142 "data/expansion_1/scene07.pory"
	addobject 8
# 143 "data/expansion_1/scene07.pory"
	addobject 7
# 144 "data/expansion_1/scene07.pory"
	addobject 11
# 145 "data/expansion_1/scene07.pory"
	fadescreen FADE_FROM_BLACK
# 147 "data/expansion_1/scene07.pory"
	applymovement 10, Common_Movement_MusicNote
# 148 "data/expansion_1/scene07.pory"
	playse SE_RG_HELP_OPEN
# 149 "data/expansion_1/scene07.pory"
	delay 40
# 150 "data/expansion_1/scene07.pory"
	speakername CommonText_Redd
# 151 "data/expansion_1/scene07.pory"
	msgbox Expansion1_Rival_Scene07b_Text_0, MSGBOX_AUTOCLOSE
# 154 "data/expansion_1/scene07.pory"
	applymovement 8, Common_Movement_WalkInPlaceFasterDown
# 155 "data/expansion_1/scene07.pory"
	waitmovement 0
# 156 "data/expansion_1/scene07.pory"
	speakername CommonText_Sakura
# 157 "data/expansion_1/scene07.pory"
	msgbox Expansion1_Rival_Scene07b_Text_1
# 158 "data/expansion_1/scene07.pory"
	speakername CommonText_Harper
# 159 "data/expansion_1/scene07.pory"
	msgbox Expansion1_Rival_Scene07b_Text_2, MSGBOX_AUTOCLOSE
# 160 "data/expansion_1/scene07.pory"
	applymovement 8, Common_Movement_WalkInPlaceFasterRight
# 161 "data/expansion_1/scene07.pory"
	waitmovement 0
# 162 "data/expansion_1/scene07.pory"
	speakername CommonText_Sakura
# 163 "data/expansion_1/scene07.pory"
	msgbox Expansion1_Rival_Scene07b_Text_3, MSGBOX_AUTOCLOSE
# 165 "data/expansion_1/scene07.pory"
	applymovement 8, Common_Movement_ShakeHorizontal
# 166 "data/expansion_1/scene07.pory"
	waitmovement 0
# 167 "data/expansion_1/scene07.pory"
	speakername CommonText_Jakson
# 168 "data/expansion_1/scene07.pory"
	msgbox Expansion1_Rival_Scene07b_Text_4
# 169 "data/expansion_1/scene07.pory"
	speakername CommonText_Harper
# 170 "data/expansion_1/scene07.pory"
	msgbox Expansion1_Rival_Scene07b_Text_5
# 172 "data/expansion_1/scene07.pory"
	speakername CommonText_Jakson
# 173 "data/expansion_1/scene07.pory"
	msgbox Expansion1_Rival_Scene07b_Text_6, MSGBOX_AUTOCLOSE
# 177 "data/expansion_1/scene07.pory"
	applymovement 7, Common_Movement_Thinking
# 178 "data/expansion_1/scene07.pory"
	delay 60
# 179 "data/expansion_1/scene07.pory"
	call GetBaronsName
# 180 "data/expansion_1/scene07.pory"
	msgbox Expansion1_Rival_Scene07b_Text_7
# 182 "data/expansion_1/scene07.pory"
	speakername CommonText_Jakson
# 183 "data/expansion_1/scene07.pory"
	msgbox Expansion1_Rival_Scene07b_Text_8
# 184 "data/expansion_1/scene07.pory"
	speakername CommonText_Harper
# 185 "data/expansion_1/scene07.pory"
	msgbox Expansion1_Rival_Scene07b_Text_9
# 190 "data/expansion_1/scene07.pory"
	call GetBaronsName
# 191 "data/expansion_1/scene07.pory"
	msgbox Expansion1_Rival_Scene07b_Text_10
# 193 "data/expansion_1/scene07.pory"
	speakername CommonText_Harper
# 194 "data/expansion_1/scene07.pory"
	msgbox Expansion1_Rival_Scene07b_Text_11, MSGBOX_AUTOCLOSE
# 197 "data/expansion_1/scene07.pory"
	applymovement 10, Common_Movement_MusicNote
# 198 "data/expansion_1/scene07.pory"
	playse SE_RG_HELP_OPEN
# 199 "data/expansion_1/scene07.pory"
	delay 40
# 200 "data/expansion_1/scene07.pory"
	speakername CommonText_Redd
# 201 "data/expansion_1/scene07.pory"
	msgbox Expansion1_Rival_Scene07b_Text_12
# 202 "data/expansion_1/scene07.pory"
	speakername CommonText_Sakura
# 203 "data/expansion_1/scene07.pory"
	msgbox Expansion1_Rival_Scene07b_Text_13
# 207 "data/expansion_1/scene07.pory"
	speakername CommonText_Jakson
# 208 "data/expansion_1/scene07.pory"
	msgbox Expansion1_Rival_Scene07b_Text_14
# 209 "data/expansion_1/scene07.pory"
	speakername CommonText_Sakura
# 210 "data/expansion_1/scene07.pory"
	msgbox Expansion1_Rival_Scene07b_Text_15, MSGBOX_AUTOCLOSE
# 212 "data/expansion_1/scene07.pory"
	playse SE_LEDGE
# 213 "data/expansion_1/scene07.pory"
	applymovement 8, Common_Movement_JumpInPlaceRight
# 214 "data/expansion_1/scene07.pory"
	waitmovement 0
# 215 "data/expansion_1/scene07.pory"
	delay 20
# 216 "data/expansion_1/scene07.pory"
	applymovement 10, Common_Movement_WalkInPlaceLeft
# 217 "data/expansion_1/scene07.pory"
	applymovement 8, Common_Movement_WalkLeft6
# 218 "data/expansion_1/scene07.pory"
	waitmovement 0
# 219 "data/expansion_1/scene07.pory"
	applymovement 11, Common_Movement_WalkInPlaceLeft
# 220 "data/expansion_1/scene07.pory"
	applymovement 10, Common_Movement_SweatDrop
# 221 "data/expansion_1/scene07.pory"
	setvar VAR_EMERALBODY_RIVAL_STATE, 40
# 222 "data/expansion_1/scene07.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 223 "data/expansion_1/scene07.pory"
	warpcontinuescript MAP_MAUVE_CAMP, 16, 16, Expansion1_Rival_Scene02e
	return


SS_Tidal_Dungeon_1F_1R_Room1_Dynamite_Text_0:
# 18 "data/expansion_1/scene07.pory"
	.string "Well, sure as shit, there it is.\p"
	.string "Some genuine dynamite… yee haw?\p"
	.string "Sorry, I'm already thinking of what\n"
	.string "horrible line Sakura's going to throw\l"
	.string "when she pulls the plunger on this.$"

SS_Tidal_Dungeon_1F_1R_Room1_Dynamite_Text_1:
# 26 "data/expansion_1/scene07.pory"
	.string "{PLAYER} obtained dynamite!$"

SS_Tidal_Dungeon_1F_1R_Room1_Dynamite_Text_2:
# 35 "data/expansion_1/scene07.pory"
	.string "And look at that sucker. Probably came\n"
	.string "here on vacation, and now we've\l"
	.string "sequence broken this thing so bad that\l"
	.string "he's trapped in his cabin for eternity.\p"
	.string "You know… Isn't his sprite a bit\n"
	.string "familiar looking?\p$"

SS_Tidal_Dungeon_1F_1R_Room1_Dynamite_Text_3:
# 45 "data/expansion_1/scene07.pory"
	.string "Eh, let's just grab this and-\p"
	.string "… … …\n"
	.string "… … …\l"
	.string "Did you hear that?$"

SS_Tidal_Dungeon_1F_1R_Room1_Dynamite_Text_4:
# 63 "data/expansion_1/scene07.pory"
	.string "Was that fishbowl… always in that\n"
	.string "position?$"

SS_Tidal_Dungeon_1F_1R_Room1_Dynamite_Text_5:
# 84 "data/expansion_1/scene07.pory"
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
# 100 "data/expansion_1/scene07.pory"
	.string "Maybe we're back on the right track\n"
	.string "then.\l"
	.string "Or back on track at all, at least.\p"
	.string "Anyway, I'll be taking that-$"

SS_Tidal_Dungeon_1F_1R_Room1_Dynamite_Text_7:
# 111 "data/expansion_1/scene07.pory"
	.string "Harper took the dynamite from\n"
	.string "{PLAYER}…$"

SS_Tidal_Dungeon_1F_1R_Room1_Dynamite_Text_8:
# 116 "data/expansion_1/scene07.pory"
	.string "So let's hurry back to the others.\p"
	.string "If the whole VR system here actually\n"
	.string "let us see the twinkle in a person's\l"
	.string "eyes…\p"
	.string "Well, it'd be a sight to behold.$"

Expansion1_Rival_Scene07b_Text_0:
# 151 "data/expansion_1/scene07.pory"
	.string "Well, hot damn. You two really had that\n"
	.string "handled after all.\p"
	.string "I was all ready to jump in and help.$"

Expansion1_Rival_Scene07b_Text_1:
# 157 "data/expansion_1/scene07.pory"
	.string "So… you got it?$"

Expansion1_Rival_Scene07b_Text_2:
# 159 "data/expansion_1/scene07.pory"
	.string "Yup, despite the locals' misgivings.$"

Expansion1_Rival_Scene07b_Text_3:
# 163 "data/expansion_1/scene07.pory"
	.string "Ooh baby, let's see what this explosion\n"
	.string "looks like!$"

Expansion1_Rival_Scene07b_Text_4:
# 168 "data/expansion_1/scene07.pory"
	.string "Phew, I'm glad my intuition was right.$"

Expansion1_Rival_Scene07b_Text_5:
# 170 "data/expansion_1/scene07.pory"
	.string "Yes, Jakson. Your sense of game design\n"
	.string "isn't completely gone.$"

Expansion1_Rival_Scene07b_Text_6:
# 173 "data/expansion_1/scene07.pory"
	.string "I was betting on the idea that the\n"
	.string "ship was a place the party returns to.\p"
	.string "But yeah, with it wrecked that wasn't\n"
	.string "a sure thing.$"

Expansion1_Rival_Scene07b_Text_7:
# 180 "data/expansion_1/scene07.pory"
	.string "It didn't look wrecked on the inside,\n"
	.string "though…?$"

Expansion1_Rival_Scene07b_Text_8:
# 183 "data/expansion_1/scene07.pory"
	.string "More weird mod interactions?$"

Expansion1_Rival_Scene07b_Text_9:
# 185 "data/expansion_1/scene07.pory"
	.string "If anything, I'm glad you weren't\n"
	.string "responsible for that unoriginal\l"
	.string "dungeon.\p"
	.string "But yes, we've retrieved your dynamite.\n"
	.string "Praise be.$"

Expansion1_Rival_Scene07b_Text_10:
# 191 "data/expansion_1/scene07.pory"
	.string "So this is how we… as Sakura said…\n"
	.string "go “boom”?$"

Expansion1_Rival_Scene07b_Text_11:
# 194 "data/expansion_1/scene07.pory"
	.string "Can't imagine another use for an\n"
	.string "explosives key item other than a\l"
	.string "progression event. So that's my bet.$"

Expansion1_Rival_Scene07b_Text_12:
# 201 "data/expansion_1/scene07.pory"
	.string "As they say, when in Rome, blow it up.$"

Expansion1_Rival_Scene07b_Text_13:
# 203 "data/expansion_1/scene07.pory"
	.string "Completely, 100% accurate and wisdom\n"
	.string "we should be following this moment.\p"
	.string "Meaning… hand it over!\n"
	.string "I'm ready to blow this joint{EMOJI_TILDE}{UNK_SPACER}$"

Expansion1_Rival_Scene07b_Text_14:
# 208 "data/expansion_1/scene07.pory"
	.string "You said it's to the west, Sakura?$"

Expansion1_Rival_Scene07b_Text_15:
# 210 "data/expansion_1/scene07.pory"
	.string "Yeah! Right out in the water to the\n"
	.string "west. Hurry up, everyone!$"
