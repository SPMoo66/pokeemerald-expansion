Expansion1_Rival_Scene05_Setup::
# 11 "data/expansion_1/scene05.pory"
	lock
# 12 "data/expansion_1/scene05.pory"
	setvar VAR_EMERALBODY_RIVAL_STATE, 32
# 13 "data/expansion_1/scene05.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 14 "data/expansion_1/scene05.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 15 "data/expansion_1/scene05.pory"
	warpcontinuescript MAP_MAUVE_CAMP, 2, 13, Expansion1_Rival_Scene05
	return


Expansion1_Rival_Scene05::
# 19 "data/expansion_1/scene05.pory"
	setflag FLAG_TEMP_2
# 20 "data/expansion_1/scene05.pory"
	setflag FLAG_TEMP_6
# 21 "data/expansion_1/scene05.pory"
	turnobject LOCALID_PLAYER, DIR_EAST
# 22 "data/expansion_1/scene05.pory"
	setobjectxyperm 6, 20, 12
# 23 "data/expansion_1/scene05.pory"
	setobjectxyperm 7, 21, 13
# 24 "data/expansion_1/scene05.pory"
	setobjectxyperm 8, 23, 11
# 25 "data/expansion_1/scene05.pory"
	setobjectxyperm 10, 22, 12
# 26 "data/expansion_1/scene05.pory"
	setobjectxyperm 11, 11, 12
# 28 "data/expansion_1/scene05.pory"
	setobjectmovementtype 10, MOVEMENT_TYPE_FACE_LEFT
# 29 "data/expansion_1/scene05.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_FACE_UP
# 30 "data/expansion_1/scene05.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_UP
# 32 "data/expansion_1/scene05.pory"
	addobject 11
# 33 "data/expansion_1/scene05.pory"
	fadescreen FADE_FROM_BLACK
# 34 "data/expansion_1/scene05.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight7
# 35 "data/expansion_1/scene05.pory"
	waitmovement 0
# 36 "data/expansion_1/scene05.pory"
	delay 20
# 37 "data/expansion_1/scene05.pory"
	applymovement 11, Common_Movement_WalkInPlaceFasterLeft
# 38 "data/expansion_1/scene05.pory"
	waitmovement 0
# 39 "data/expansion_1/scene05.pory"
	delay 30
# 40 "data/expansion_1/scene05.pory"
	applymovement 11, Common_Movement_WalkRight
# 41 "data/expansion_1/scene05.pory"
	waitmovement 0
# 42 "data/expansion_1/scene05.pory"
	applymovement 11, Common_Movement_WalkRight5
# 43 "data/expansion_1/scene05.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight7
# 44 "data/expansion_1/scene05.pory"
	waitmovement 0
# 45 "data/expansion_1/scene05.pory"
	delay 20
# 46 "data/expansion_1/scene05.pory"
	special SpawnCameraObject
# 47 "data/expansion_1/scene05.pory"
	applymovement LOCALID_CAMERA, Common_Movement_WalkRight3
# 48 "data/expansion_1/scene05.pory"
	waitmovement 0
# 49 "data/expansion_1/scene05.pory"
	delay 20
# 50 "data/expansion_1/scene05.pory"
	speakername CommonText_Harper
# 51 "data/expansion_1/scene05.pory"
	msgbox Expansion1_Rival_Scene05_Text_0, MSGBOX_AUTOCLOSE
# 52 "data/expansion_1/scene05.pory"
	delay 20
# 53 "data/expansion_1/scene05.pory"
	applymovement 6, Common_Movement_QuestionMark
# 54 "data/expansion_1/scene05.pory"
	delay 30
# 55 "data/expansion_1/scene05.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterLeft
# 56 "data/expansion_1/scene05.pory"
	waitmovement 0
# 57 "data/expansion_1/scene05.pory"
	speakername CommonText_Jakson
# 58 "data/expansion_1/scene05.pory"
	msgbox Expansion1_Rival_Scene05_Text_1, MSGBOX_AUTOCLOSE
# 59 "data/expansion_1/scene05.pory"
	playse SE_PIN
# 60 "data/expansion_1/scene05.pory"
	applymovement 7, Common_Movement_WalkInPlaceFasterLeft
# 61 "data/expansion_1/scene05.pory"
	applymovement 6, Common_Movement_ExclamationMark
# 62 "data/expansion_1/scene05.pory"
	delay 30
# 63 "data/expansion_1/scene05.pory"
	speakername CommonText_Jakson
# 64 "data/expansion_1/scene05.pory"
	msgbox Expansion1_Rival_Scene05_Text_2, MSGBOX_AUTOCLOSE
# 65 "data/expansion_1/scene05.pory"
	applymovement 8, Common_Movement_WalkInPlaceLeft
# 66 "data/expansion_1/scene05.pory"
	applymovement 7, Common_Movement_Smile
# 67 "data/expansion_1/scene05.pory"
	playse SE_M_MORNING_SUN
# 68 "data/expansion_1/scene05.pory"
	delay 40
# 69 "data/expansion_1/scene05.pory"
	speakername CommonText_Baron
# 70 "data/expansion_1/scene05.pory"
	msgbox Expansion1_Rival_Scene05_Text_3, MSGBOX_AUTOCLOSE
# 71 "data/expansion_1/scene05.pory"
	delay 40
# 72 "data/expansion_1/scene05.pory"
	speakername CommonText_Harper
# 73 "data/expansion_1/scene05.pory"
	msgbox Expansion1_Rival_Scene05_Text_0, MSGBOX_AUTOCLOSE
# 74 "data/expansion_1/scene05.pory"
	delay 20
# 75 "data/expansion_1/scene05.pory"
	speakername CommonText_Jakson
# 76 "data/expansion_1/scene05.pory"
	msgbox Expansion1_Rival_Scene05_Text_4, MSGBOX_AUTOCLOSE
# 77 "data/expansion_1/scene05.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 78 "data/expansion_1/scene05.pory"
	playse SE_M_MEGA_KICK
# 79 "data/expansion_1/scene05.pory"
	waitse
# 80 "data/expansion_1/scene05.pory"
	playse SE_M_CUT
# 81 "data/expansion_1/scene05.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkFastRight
# 82 "data/expansion_1/scene05.pory"
	delay 20
# 83 "data/expansion_1/scene05.pory"
	removeobject 11
# 84 "data/expansion_1/scene05.pory"
	setobjectxyperm 11, 19, 12
# 85 "data/expansion_1/scene05.pory"
	addobject 11
# 86 "data/expansion_1/scene05.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 87 "data/expansion_1/scene05.pory"
	msgbox Expansion1_Rival_Scene05_Text_5, MSGBOX_AUTOCLOSE
# 91 "data/expansion_1/scene05.pory"
	speakername CommonText_Jakson
# 92 "data/expansion_1/scene05.pory"
	msgbox Expansion1_Rival_Scene05_Text_6, MSGBOX_AUTOCLOSE
# 93 "data/expansion_1/scene05.pory"
	speakername CommonText_Harper
# 94 "data/expansion_1/scene05.pory"
	msgbox Expansion1_Rival_Scene05_Text_7
# 96 "data/expansion_1/scene05.pory"
	speakername CommonText_Jakson
# 97 "data/expansion_1/scene05.pory"
	msgbox Expansion1_Rival_Scene05_Text_8
# 98 "data/expansion_1/scene05.pory"
	speakername CommonText_Harper
# 99 "data/expansion_1/scene05.pory"
	msgbox Expansion1_Rival_Scene05_Text_9, MSGBOX_AUTOCLOSE
# 100 "data/expansion_1/scene05.pory"
	applymovement 10, Common_Movement_QuestionMark
# 101 "data/expansion_1/scene05.pory"
	delay 30
# 102 "data/expansion_1/scene05.pory"
	speakername CommonText_Redd
# 103 "data/expansion_1/scene05.pory"
	msgbox Expansion1_Rival_Scene05_Text_10, MSGBOX_AUTOCLOSE
# 104 "data/expansion_1/scene05.pory"
	playse SE_LEDGE
# 105 "data/expansion_1/scene05.pory"
	applymovement 11, Common_Movement_JumpInPlaceRight
# 106 "data/expansion_1/scene05.pory"
	waitmovement 0
# 107 "data/expansion_1/scene05.pory"
	speakername CommonText_Harper
# 108 "data/expansion_1/scene05.pory"
	msgbox Expansion1_Rival_Scene05_Text_11
# 109 "data/expansion_1/scene05.pory"
	speakername CommonText_Jakson
# 110 "data/expansion_1/scene05.pory"
	msgbox Expansion1_Rival_Scene05_Text_12, MSGBOX_AUTOCLOSE
# 111 "data/expansion_1/scene05.pory"
	applymovement 11, Common_Movement_XMark
# 112 "data/expansion_1/scene05.pory"
	playse SE_THUNDER
# 113 "data/expansion_1/scene05.pory"
	delay 80
# 114 "data/expansion_1/scene05.pory"
	applymovement 7, Common_Movement_WalkInPlaceFasterUp
# 115 "data/expansion_1/scene05.pory"
	waitmovement 0
# 116 "data/expansion_1/scene05.pory"
	applymovement 7, Common_Movement_QuestionMark
# 117 "data/expansion_1/scene05.pory"
	delay 30
# 118 "data/expansion_1/scene05.pory"
	speakername CommonText_Baron
# 119 "data/expansion_1/scene05.pory"
	msgbox Expansion1_Rival_Scene05_Text_13
# 120 "data/expansion_1/scene05.pory"
	speakername CommonText_Jakson
# 121 "data/expansion_1/scene05.pory"
	msgbox Expansion1_Rival_Scene05_Text_14, MSGBOX_AUTOCLOSE
# 123 "data/expansion_1/scene05.pory"
	applymovement 7, Common_Movement_WalkInPlaceFasterLeft
# 124 "data/expansion_1/scene05.pory"
	applymovement 11, Common_Movement_XMark
# 125 "data/expansion_1/scene05.pory"
	playse SE_THUNDER
# 126 "data/expansion_1/scene05.pory"
	delay 40
# 127 "data/expansion_1/scene05.pory"
	applymovement 8, Common_Movement_WalkInPlaceDown
# 128 "data/expansion_1/scene05.pory"
	delay 40
# 129 "data/expansion_1/scene05.pory"
	speakername CommonText_Jakson
# 130 "data/expansion_1/scene05.pory"
	msgbox Expansion1_Rival_Scene05_Text_15, MSGBOX_AUTOCLOSE
# 132 "data/expansion_1/scene05.pory"
	speakername CommonText_Redd
# 133 "data/expansion_1/scene05.pory"
	msgbox Expansion1_Rival_Scene05_Text_16
# 135 "data/expansion_1/scene05.pory"
	speakername CommonText_Harper
# 136 "data/expansion_1/scene05.pory"
	msgbox Expansion1_Rival_Scene05_Text_17
# 137 "data/expansion_1/scene05.pory"
	speakername CommonText_Sakura
# 138 "data/expansion_1/scene05.pory"
	msgbox Expansion1_Rival_Scene05_Text_18, MSGBOX_AUTOCLOSE
# 139 "data/expansion_1/scene05.pory"
	applymovement 8, Common_Movement_Thinking
# 140 "data/expansion_1/scene05.pory"
	delay 60
# 141 "data/expansion_1/scene05.pory"
	applymovement 8, Common_Movement_WalkInPlaceFasterLeft
# 142 "data/expansion_1/scene05.pory"
	speakername CommonText_Sakura
# 143 "data/expansion_1/scene05.pory"
	msgbox Expansion1_Rival_Scene05_Text_19, MSGBOX_AUTOCLOSE
# 147 "data/expansion_1/scene05.pory"
	applymovement 11, Common_Movement_Thinking
# 148 "data/expansion_1/scene05.pory"
	delay 60
# 149 "data/expansion_1/scene05.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 150 "data/expansion_1/scene05.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 151 "data/expansion_1/scene05.pory"
	msgbox Expansion1_Rival_Scene05_Text_20, MSGBOX_AUTOCLOSE
# 152 "data/expansion_1/scene05.pory"
	applymovement 6, Common_Movement_SweatDrop
# 153 "data/expansion_1/scene05.pory"
	playse SE_M_METRONOME
# 154 "data/expansion_1/scene05.pory"
	delay 40
# 155 "data/expansion_1/scene05.pory"
	speakername CommonText_Baron
# 156 "data/expansion_1/scene05.pory"
	msgbox Expansion1_Rival_Scene05_Text_21
# 158 "data/expansion_1/scene05.pory"
	speakername CommonText_Sakura
# 159 "data/expansion_1/scene05.pory"
	msgbox Expansion1_Rival_Scene05_Text_22
# 160 "data/expansion_1/scene05.pory"
	speakername CommonText_Harper
# 161 "data/expansion_1/scene05.pory"
	msgbox Expansion1_Rival_Scene05_Text_23
# 164 "data/expansion_1/scene05.pory"
	speakername CommonText_Redd
# 165 "data/expansion_1/scene05.pory"
	msgbox Expansion1_Rival_Scene05_Text_24, MSGBOX_AUTOCLOSE
# 167 "data/expansion_1/scene05.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 168 "data/expansion_1/scene05.pory"
	warpcontinuescript MAP_MAUVE_CAMP, 21, 15, Expansion1_Rival_Scene05b
	return


Expansion1_Rival_Scene05b::
# 172 "data/expansion_1/scene05.pory"
	turnobject LOCALID_PLAYER, DIR_WEST
# 173 "data/expansion_1/scene05.pory"
	setobjectxyperm 6, 20, 13
# 174 "data/expansion_1/scene05.pory"
	setobjectxyperm 7, 19, 15
# 175 "data/expansion_1/scene05.pory"
	setobjectxyperm 8, 21, 14
# 176 "data/expansion_1/scene05.pory"
	setobjectxyperm 10, 19, 14
# 177 "data/expansion_1/scene05.pory"
	setobjectxyperm 11, 20, 16
# 178 "data/expansion_1/scene05.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_DOWN
# 179 "data/expansion_1/scene05.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_RIGHT
# 181 "data/expansion_1/scene05.pory"
	setobjectmovementtype 10, MOVEMENT_TYPE_FACE_RIGHT
# 182 "data/expansion_1/scene05.pory"
	setobjectmovementtype 11, MOVEMENT_TYPE_FACE_UP
# 183 "data/expansion_1/scene05.pory"
	addobject 6
# 184 "data/expansion_1/scene05.pory"
	addobject 7
# 185 "data/expansion_1/scene05.pory"
	addobject 8
# 186 "data/expansion_1/scene05.pory"
	addobject 10
# 187 "data/expansion_1/scene05.pory"
	addobject 11
# 188 "data/expansion_1/scene05.pory"
	fadescreen FADE_FROM_BLACK
# 189 "data/expansion_1/scene05.pory"
	applymovement 6, Common_Movement_Talking
# 190 "data/expansion_1/scene05.pory"
	delay 80
# 191 "data/expansion_1/scene05.pory"
	speakername CommonText_Jakson
# 192 "data/expansion_1/scene05.pory"
	msgbox Expansion1_Rival_Scene05b_Text_0, MSGBOX_AUTOCLOSE
# 194 "data/expansion_1/scene05.pory"
	applymovement 11, Common_Movement_Thinking
# 195 "data/expansion_1/scene05.pory"
	delay 60
# 196 "data/expansion_1/scene05.pory"
	speakername CommonText_Harper
# 197 "data/expansion_1/scene05.pory"
	msgbox Expansion1_Rival_Scene05b_Text_1
# 199 "data/expansion_1/scene05.pory"
	speakername CommonText_Redd
# 200 "data/expansion_1/scene05.pory"
	msgbox Expansion1_Rival_Scene05b_Text_2
# 201 "data/expansion_1/scene05.pory"
	speakername CommonText_Harper
# 202 "data/expansion_1/scene05.pory"
	msgbox Expansion1_Rival_Scene05b_Text_3
# 204 "data/expansion_1/scene05.pory"
	speakername CommonText_Baron
# 205 "data/expansion_1/scene05.pory"
	msgbox Expansion1_Rival_Scene05b_Text_4
# 207 "data/expansion_1/scene05.pory"
	speakername CommonText_Jakson
# 208 "data/expansion_1/scene05.pory"
	msgbox Expansion1_Rival_Scene05b_Text_5
# 210 "data/expansion_1/scene05.pory"
	speakername CommonText_Harper
# 211 "data/expansion_1/scene05.pory"
	msgbox Expansion1_Rival_Scene05b_Text_6
# 213 "data/expansion_1/scene05.pory"
	speakername CommonText_Sakura
# 214 "data/expansion_1/scene05.pory"
	msgbox Expansion1_Rival_Scene05b_Text_7
# 218 "data/expansion_1/scene05.pory"
	speakername CommonText_Redd
# 219 "data/expansion_1/scene05.pory"
	msgbox Expansion1_Rival_Scene05b_Text_8
# 221 "data/expansion_1/scene05.pory"
	speakername CommonText_Jakson
# 222 "data/expansion_1/scene05.pory"
	msgbox Expansion1_Rival_Scene05b_Text_9, MSGBOX_AUTOCLOSE
# 232 "data/expansion_1/scene05.pory"
	applymovement 8, Common_Movement_MusicNote
# 233 "data/expansion_1/scene05.pory"
	playse SE_RG_HELP_OPEN
# 234 "data/expansion_1/scene05.pory"
	delay 40
# 235 "data/expansion_1/scene05.pory"
	speakername CommonText_Sakura
# 236 "data/expansion_1/scene05.pory"
	msgbox Expansion1_Rival_Scene05b_Text_10
# 238 "data/expansion_1/scene05.pory"
	speakername CommonText_Baron
# 239 "data/expansion_1/scene05.pory"
	msgbox Expansion1_Rival_Scene05b_Text_11
# 240 "data/expansion_1/scene05.pory"
	speakername CommonText_Sakura
# 241 "data/expansion_1/scene05.pory"
	msgbox Expansion1_Rival_Scene05b_Text_12
# 244 "data/expansion_1/scene05.pory"
	speakername CommonText_Harper
# 245 "data/expansion_1/scene05.pory"
	msgbox Expansion1_Rival_Scene05b_Text_13
# 246 "data/expansion_1/scene05.pory"
	speakername CommonText_Sakura
# 247 "data/expansion_1/scene05.pory"
	msgbox Expansion1_Rival_Scene05b_Text_14
# 250 "data/expansion_1/scene05.pory"
	speakername CommonText_Baron
# 251 "data/expansion_1/scene05.pory"
	msgbox Expansion1_Rival_Scene05b_Text_15, MSGBOX_AUTOCLOSE
# 252 "data/expansion_1/scene05.pory"
	applymovement 8, Common_Movement_Smile
# 253 "data/expansion_1/scene05.pory"
	playse SE_M_MORNING_SUN
# 254 "data/expansion_1/scene05.pory"
	delay 40
# 255 "data/expansion_1/scene05.pory"
	speakername CommonText_Sakura
# 256 "data/expansion_1/scene05.pory"
	msgbox Expansion1_Rival_Scene05b_Text_16, MSGBOX_AUTOCLOSE
# 257 "data/expansion_1/scene05.pory"
	speakername CommonText_Redd
# 258 "data/expansion_1/scene05.pory"
	msgbox Expansion1_Rival_Scene05b_Text_17
# 261 "data/expansion_1/scene05.pory"
	speakername CommonText_Jakson
# 262 "data/expansion_1/scene05.pory"
	msgbox Expansion1_Rival_Scene05b_Text_18
# 265 "data/expansion_1/scene05.pory"
	speakername CommonText_Sakura
# 266 "data/expansion_1/scene05.pory"
	msgbox Expansion1_Rival_Scene05b_Text_19
# 268 "data/expansion_1/scene05.pory"
	speakername CommonText_Redd
# 269 "data/expansion_1/scene05.pory"
	msgbox Expansion1_Rival_Scene05b_Text_20
# 271 "data/expansion_1/scene05.pory"
	speakername CommonText_Jakson
# 272 "data/expansion_1/scene05.pory"
	msgbox Expansion1_Rival_Scene05b_Text_21
# 275 "data/expansion_1/scene05.pory"
	speakername CommonText_Redd
# 276 "data/expansion_1/scene05.pory"
	msgbox Expansion1_Rival_Scene05b_Text_22
# 277 "data/expansion_1/scene05.pory"
	speakername CommonText_Harper
# 278 "data/expansion_1/scene05.pory"
	msgbox Expansion1_Rival_Scene05b_Text_23, MSGBOX_AUTOCLOSE
# 280 "data/expansion_1/scene05.pory"
	setvar VAR_EMERALBODY_RIVAL_STATE, 33
# 281 "data/expansion_1/scene05.pory"
	savebgm MUS_DP_CREDITS
# 282 "data/expansion_1/scene05.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 283 "data/expansion_1/scene05.pory"
	warpcontinuescript MAP_MAUVE_CAMP, 16, 16, Expansion1_Rival_Scene02e
	return


Expansion1_Rival_Scene05_Text_0:
# 51 "data/expansion_1/scene05.pory"
	.string "Jakson.$"

Expansion1_Rival_Scene05_Text_1:
# 58 "data/expansion_1/scene05.pory"
	.string "Hm…?$"

Expansion1_Rival_Scene05_Text_2:
# 64 "data/expansion_1/scene05.pory"
	.string "Harper! It's good to see you safe.$"

Expansion1_Rival_Scene05_Text_3:
# 70 "data/expansion_1/scene05.pory"
	.string "What a relief.$"

Expansion1_Rival_Scene05_Text_4:
# 76 "data/expansion_1/scene05.pory"
	.string "Y- Yes?$"

Expansion1_Rival_Scene05_Text_5:
# 87 "data/expansion_1/scene05.pory"
	.string "Harper moves swiftly, beyond what one\n"
	.string "may even think possible in the engine.\p"
	.string "Her fingers pinch. Hard.\n"
	.string "And Jakson's ear is in her grasp.$"

Expansion1_Rival_Scene05_Text_6:
# 92 "data/expansion_1/scene05.pory"
	.string "O- O- OW!!!$"

Expansion1_Rival_Scene05_Text_7:
# 94 "data/expansion_1/scene05.pory"
	.string "Do I need to treat you like a child?!\n"
	.string "I was in there for hours!$"

Expansion1_Rival_Scene05_Text_8:
# 97 "data/expansion_1/scene05.pory"
	.string "W- We were working on it!$"

Expansion1_Rival_Scene05_Text_9:
# 99 "data/expansion_1/scene05.pory"
	.string "You didn't reply to my messages!$"

Expansion1_Rival_Scene05_Text_10:
# 103 "data/expansion_1/scene05.pory"
	.string "Messages?$"

Expansion1_Rival_Scene05_Text_11:
# 108 "data/expansion_1/scene05.pory"
	.string "In ENCORE!!!$"

Expansion1_Rival_Scene05_Text_12:
# 110 "data/expansion_1/scene05.pory"
	.string "…shit.$"

Expansion1_Rival_Scene05_Text_13:
# 119 "data/expansion_1/scene05.pory"
	.string "ENCORE?$"

Expansion1_Rival_Scene05_Text_14:
# 121 "data/expansion_1/scene05.pory"
	.string "I… have… notifications turned off\n"
	.string "in that app when I play.$"

Expansion1_Rival_Scene05_Text_15:
# 130 "data/expansion_1/scene05.pory"
	.string "O- O- OW!!! We all play together,\n"
	.string "we don't need a messaging app!$"

Expansion1_Rival_Scene05_Text_16:
# 133 "data/expansion_1/scene05.pory"
	.string "I'm guessing she'd disagree right\n"
	.string "about now…$"

Expansion1_Rival_Scene05_Text_17:
# 136 "data/expansion_1/scene05.pory"
	.string "Ya think?!$"

Expansion1_Rival_Scene05_Text_18:
# 138 "data/expansion_1/scene05.pory"
	.string "Hmm…$"

Expansion1_Rival_Scene05_Text_19:
# 143 "data/expansion_1/scene05.pory"
	.string "Hey, Harper.\p"
	.string "If you were that distressed, why not\n"
	.string "just log-off? We'd have gotten the\l"
	.string "log-off notification in-game.$"

Expansion1_Rival_Scene05_Text_20:
# 151 "data/expansion_1/scene05.pory"
	.string "Harper's grip releases.$"

Expansion1_Rival_Scene05_Text_21:
# 156 "data/expansion_1/scene05.pory"
	.string "People can forget things in the heat\n"
	.string "of the moment…$"

Expansion1_Rival_Scene05_Text_22:
# 159 "data/expansion_1/scene05.pory"
	.string "Ain't that the truth?$"

Expansion1_Rival_Scene05_Text_23:
# 161 "data/expansion_1/scene05.pory"
	.string "… … …\n"
	.string "… … …\l"
	.string "Okay, what's the situation?$"

Expansion1_Rival_Scene05_Text_24:
# 165 "data/expansion_1/scene05.pory"
	.string "So quick to move on!$"

Expansion1_Rival_Scene05b_Text_0:
# 192 "data/expansion_1/scene05.pory"
	.string "…and that's my running theory. Mods\n"
	.string "aren't playing nice with each other.$"

Expansion1_Rival_Scene05b_Text_1:
# 197 "data/expansion_1/scene05.pory"
	.string "I was looking up some mods the other\n"
	.string "day and I did notice all sorts.$"

Expansion1_Rival_Scene05b_Text_2:
# 200 "data/expansion_1/scene05.pory"
	.string "Pokémon is popular.$"

Expansion1_Rival_Scene05b_Text_3:
# 202 "data/expansion_1/scene05.pory"
	.string "Yeah, and there were a bunch of boss\n"
	.string "creatures mods, too.$"

Expansion1_Rival_Scene05b_Text_4:
# 205 "data/expansion_1/scene05.pory"
	.string "You think that's what we saw when\n"
	.string "we were on the boat?$"

Expansion1_Rival_Scene05b_Text_5:
# 208 "data/expansion_1/scene05.pory"
	.string "It'd fit, maybe? Not like anything else\n"
	.string "has been outright broken since then.$"

Expansion1_Rival_Scene05b_Text_6:
# 211 "data/expansion_1/scene05.pory"
	.string "Hmm… what else did I see on those\n"
	.string "forums…?$"

Expansion1_Rival_Scene05b_Text_7:
# 214 "data/expansion_1/scene05.pory"
	.string "Well, we'll find out if it even matters\n"
	.string "if we keep moving forwards.\p"
	.string "And your very own Sakura has some\n"
	.string "good news on that front{EMOJI_TILDE}{UNK_SPACER}$"

Expansion1_Rival_Scene05b_Text_8:
# 219 "data/expansion_1/scene05.pory"
	.string "You found a way to move the Pokémon\n"
	.string "blockade down South?$"

Expansion1_Rival_Scene05b_Text_9:
# 222 "data/expansion_1/scene05.pory"
	.string "Yes, I did figure that out shortly\n"
	.string "before this. That's what I was about\l"
	.string "to announce before Harper returned\l"
	.string "to us.\p"
	.string "It was just as silly a solution as you\n"
	.string "can imagine, but I won't bore you all\l"
	.string "with the details of it…\p"
	.string "Actually, from what I can tell of the\n"
	.string "lore notes around there, the ship\l"
	.string "is actually the starting zone.$"

Expansion1_Rival_Scene05b_Text_10:
# 236 "data/expansion_1/scene05.pory"
	.string "Which means my explosive discovery\n"
	.string "is all the more useful!$"

Expansion1_Rival_Scene05b_Text_11:
# 239 "data/expansion_1/scene05.pory"
	.string "Explosive?$"

Expansion1_Rival_Scene05b_Text_12:
# 241 "data/expansion_1/scene05.pory"
	.string "Yep yep! So we just need to blow some\n"
	.string "shit up at a cave entrance, and then\l"
	.string "we can swoop in to save Harper!$"

Expansion1_Rival_Scene05b_Text_13:
# 245 "data/expansion_1/scene05.pory"
	.string "…I'm right here.$"

Expansion1_Rival_Scene05b_Text_14:
# 247 "data/expansion_1/scene05.pory"
	.string "Ah. Right. Need to refactor the pitch.\p"
	.string "We can… blow things up.\n"
	.string "Boom.$"

Expansion1_Rival_Scene05b_Text_15:
# 251 "data/expansion_1/scene05.pory"
	.string "How… eloquent.$"

Expansion1_Rival_Scene05b_Text_16:
# 256 "data/expansion_1/scene05.pory"
	.string "I know, right?$"

Expansion1_Rival_Scene05b_Text_17:
# 258 "data/expansion_1/scene05.pory"
	.string "Knowing Pokémon, it probably is a place\n"
	.string "we need to go. Maybe rock smash? You\l"
	.string "said it was at a cave entrance?$"

Expansion1_Rival_Scene05b_Text_18:
# 262 "data/expansion_1/scene05.pory"
	.string "Would post game content be designed\n"
	.string "to block the player with rock smash?\l"
	.string "This is the flash situation again.$"

Expansion1_Rival_Scene05b_Text_19:
# 266 "data/expansion_1/scene05.pory"
	.string "Boom?\n"
	.string "Boom.$"

Expansion1_Rival_Scene05b_Text_20:
# 269 "data/expansion_1/scene05.pory"
	.string "The one other place we haven't been\n"
	.string "is the ship. Maybe…$"

Expansion1_Rival_Scene05b_Text_21:
# 272 "data/expansion_1/scene05.pory"
	.string "Yeah, we'll probably find some explosive\n"
	.string "key item in the ship.\p"
	.string "Or… shipwreck, I guess.$"

Expansion1_Rival_Scene05b_Text_22:
# 276 "data/expansion_1/scene05.pory"
	.string "Sounds like a plan to me!$"

Expansion1_Rival_Scene05b_Text_23:
# 278 "data/expansion_1/scene05.pory"
	.string "Hell yeah it does.$"
