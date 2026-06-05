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
	setobjectxyperm 6, 20, 12
# 27 "data/expansion_1/scene05.pory"
	setobjectxyperm 7, 21, 13
# 28 "data/expansion_1/scene05.pory"
	setobjectxyperm 8, 23, 11
# 29 "data/expansion_1/scene05.pory"
	setobjectxyperm 10, 22, 12
# 30 "data/expansion_1/scene05.pory"
	setobjectxyperm 11, 11, 12
# 32 "data/expansion_1/scene05.pory"
	setobjectmovementtype 10, MOVEMENT_TYPE_FACE_LEFT
# 33 "data/expansion_1/scene05.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_FACE_UP
# 34 "data/expansion_1/scene05.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_UP
# 36 "data/expansion_1/scene05.pory"
	addobject 11
# 37 "data/expansion_1/scene05.pory"
	fadescreen FADE_FROM_BLACK
# 38 "data/expansion_1/scene05.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight7
# 39 "data/expansion_1/scene05.pory"
	waitmovement 0
# 40 "data/expansion_1/scene05.pory"
	delay 20
# 41 "data/expansion_1/scene05.pory"
	applymovement 11, Common_Movement_WalkInPlaceFasterLeft
# 42 "data/expansion_1/scene05.pory"
	waitmovement 0
# 43 "data/expansion_1/scene05.pory"
	delay 30
# 44 "data/expansion_1/scene05.pory"
	applymovement 11, Common_Movement_WalkRight
# 45 "data/expansion_1/scene05.pory"
	waitmovement 0
# 46 "data/expansion_1/scene05.pory"
	applymovement 11, Common_Movement_WalkRight5
# 47 "data/expansion_1/scene05.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight7
# 48 "data/expansion_1/scene05.pory"
	waitmovement 0
# 49 "data/expansion_1/scene05.pory"
	delay 20
# 50 "data/expansion_1/scene05.pory"
	special SpawnCameraObject
# 51 "data/expansion_1/scene05.pory"
	applymovement LOCALID_CAMERA, Common_Movement_WalkRight3
# 52 "data/expansion_1/scene05.pory"
	waitmovement 0
# 53 "data/expansion_1/scene05.pory"
	delay 20
# 54 "data/expansion_1/scene05.pory"
	speakername CommonText_Harper
# 55 "data/expansion_1/scene05.pory"
	msgbox Expansion1_Rival_Scene05_Text_0, MSGBOX_AUTOCLOSE
# 56 "data/expansion_1/scene05.pory"
	delay 20
# 57 "data/expansion_1/scene05.pory"
	applymovement 6, Common_Movement_QuestionMark
# 58 "data/expansion_1/scene05.pory"
	delay 30
# 59 "data/expansion_1/scene05.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterLeft
# 60 "data/expansion_1/scene05.pory"
	waitmovement 0
# 61 "data/expansion_1/scene05.pory"
	speakername CommonText_Jakson
# 62 "data/expansion_1/scene05.pory"
	msgbox Expansion1_Rival_Scene05_Text_1, MSGBOX_AUTOCLOSE
# 63 "data/expansion_1/scene05.pory"
	playse SE_PIN
# 64 "data/expansion_1/scene05.pory"
	applymovement 7, Common_Movement_WalkInPlaceFasterLeft
# 65 "data/expansion_1/scene05.pory"
	applymovement 6, Common_Movement_ExclamationMark
# 66 "data/expansion_1/scene05.pory"
	delay 30
# 67 "data/expansion_1/scene05.pory"
	speakername CommonText_Jakson
# 68 "data/expansion_1/scene05.pory"
	msgbox Expansion1_Rival_Scene05_Text_2, MSGBOX_AUTOCLOSE
# 69 "data/expansion_1/scene05.pory"
	applymovement 8, Common_Movement_WalkInPlaceLeft
# 70 "data/expansion_1/scene05.pory"
	applymovement 7, Common_Movement_Smile
# 71 "data/expansion_1/scene05.pory"
	playse SE_M_MORNING_SUN
# 72 "data/expansion_1/scene05.pory"
	delay 40
# 73 "data/expansion_1/scene05.pory"
	speakername CommonText_Baron
# 74 "data/expansion_1/scene05.pory"
	msgbox Expansion1_Rival_Scene05_Text_3, MSGBOX_AUTOCLOSE
# 75 "data/expansion_1/scene05.pory"
	delay 40
# 76 "data/expansion_1/scene05.pory"
	speakername CommonText_Harper
# 77 "data/expansion_1/scene05.pory"
	msgbox Expansion1_Rival_Scene05_Text_0, MSGBOX_AUTOCLOSE
# 78 "data/expansion_1/scene05.pory"
	delay 20
# 79 "data/expansion_1/scene05.pory"
	speakername CommonText_Jakson
# 80 "data/expansion_1/scene05.pory"
	msgbox Expansion1_Rival_Scene05_Text_4, MSGBOX_AUTOCLOSE
# 81 "data/expansion_1/scene05.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 82 "data/expansion_1/scene05.pory"
	playse SE_M_MEGA_KICK
# 83 "data/expansion_1/scene05.pory"
	waitse
# 84 "data/expansion_1/scene05.pory"
	playse SE_M_CUT
# 85 "data/expansion_1/scene05.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkFastRight
# 86 "data/expansion_1/scene05.pory"
	delay 20
# 87 "data/expansion_1/scene05.pory"
	removeobject 11
# 88 "data/expansion_1/scene05.pory"
	setobjectxyperm 11, 19, 12
# 89 "data/expansion_1/scene05.pory"
	addobject 11
# 90 "data/expansion_1/scene05.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 91 "data/expansion_1/scene05.pory"
	msgbox Expansion1_Rival_Scene05_Text_5, MSGBOX_AUTOCLOSE
# 95 "data/expansion_1/scene05.pory"
	speakername CommonText_Jakson
# 96 "data/expansion_1/scene05.pory"
	msgbox Expansion1_Rival_Scene05_Text_6, MSGBOX_AUTOCLOSE
# 97 "data/expansion_1/scene05.pory"
	speakername CommonText_Harper
# 98 "data/expansion_1/scene05.pory"
	msgbox Expansion1_Rival_Scene05_Text_7
# 100 "data/expansion_1/scene05.pory"
	speakername CommonText_Jakson
# 101 "data/expansion_1/scene05.pory"
	msgbox Expansion1_Rival_Scene05_Text_8
# 102 "data/expansion_1/scene05.pory"
	speakername CommonText_Harper
# 103 "data/expansion_1/scene05.pory"
	msgbox Expansion1_Rival_Scene05_Text_9, MSGBOX_AUTOCLOSE
# 104 "data/expansion_1/scene05.pory"
	applymovement 10, Common_Movement_QuestionMark
# 105 "data/expansion_1/scene05.pory"
	delay 30
# 106 "data/expansion_1/scene05.pory"
	speakername CommonText_Redd
# 107 "data/expansion_1/scene05.pory"
	msgbox Expansion1_Rival_Scene05_Text_10, MSGBOX_AUTOCLOSE
# 108 "data/expansion_1/scene05.pory"
	playse SE_LEDGE
# 109 "data/expansion_1/scene05.pory"
	applymovement 11, Common_Movement_JumpInPlaceRight
# 110 "data/expansion_1/scene05.pory"
	waitmovement 0
# 111 "data/expansion_1/scene05.pory"
	speakername CommonText_Harper
# 112 "data/expansion_1/scene05.pory"
	msgbox Expansion1_Rival_Scene05_Text_11
# 113 "data/expansion_1/scene05.pory"
	speakername CommonText_Jakson
# 114 "data/expansion_1/scene05.pory"
	msgbox Expansion1_Rival_Scene05_Text_12, MSGBOX_AUTOCLOSE
# 115 "data/expansion_1/scene05.pory"
	applymovement 11, Common_Movement_XMark
# 116 "data/expansion_1/scene05.pory"
	playse SE_THUNDER
# 117 "data/expansion_1/scene05.pory"
	delay 80
# 118 "data/expansion_1/scene05.pory"
	applymovement 7, Common_Movement_WalkInPlaceFasterUp
# 119 "data/expansion_1/scene05.pory"
	waitmovement 0
# 120 "data/expansion_1/scene05.pory"
	applymovement 7, Common_Movement_QuestionMark
# 121 "data/expansion_1/scene05.pory"
	delay 30
# 122 "data/expansion_1/scene05.pory"
	speakername CommonText_Baron
# 123 "data/expansion_1/scene05.pory"
	msgbox Expansion1_Rival_Scene05_Text_13
# 124 "data/expansion_1/scene05.pory"
	speakername CommonText_Jakson
# 125 "data/expansion_1/scene05.pory"
	msgbox Expansion1_Rival_Scene05_Text_14, MSGBOX_AUTOCLOSE
# 127 "data/expansion_1/scene05.pory"
	applymovement 7, Common_Movement_WalkInPlaceFasterLeft
# 128 "data/expansion_1/scene05.pory"
	applymovement 11, Common_Movement_XMark
# 129 "data/expansion_1/scene05.pory"
	playse SE_THUNDER
# 130 "data/expansion_1/scene05.pory"
	delay 40
# 131 "data/expansion_1/scene05.pory"
	applymovement 8, Common_Movement_WalkInPlaceDown
# 132 "data/expansion_1/scene05.pory"
	delay 40
# 133 "data/expansion_1/scene05.pory"
	speakername CommonText_Jakson
# 134 "data/expansion_1/scene05.pory"
	msgbox Expansion1_Rival_Scene05_Text_15, MSGBOX_AUTOCLOSE
# 136 "data/expansion_1/scene05.pory"
	speakername CommonText_Redd
# 137 "data/expansion_1/scene05.pory"
	msgbox Expansion1_Rival_Scene05_Text_16
# 139 "data/expansion_1/scene05.pory"
	speakername CommonText_Harper
# 140 "data/expansion_1/scene05.pory"
	msgbox Expansion1_Rival_Scene05_Text_17
# 141 "data/expansion_1/scene05.pory"
	speakername CommonText_Sakura
# 142 "data/expansion_1/scene05.pory"
	msgbox Expansion1_Rival_Scene05_Text_18, MSGBOX_AUTOCLOSE
# 143 "data/expansion_1/scene05.pory"
	applymovement 8, Common_Movement_Thinking
# 144 "data/expansion_1/scene05.pory"
	delay 60
# 145 "data/expansion_1/scene05.pory"
	applymovement 8, Common_Movement_WalkInPlaceFasterLeft
# 146 "data/expansion_1/scene05.pory"
	speakername CommonText_Sakura
# 147 "data/expansion_1/scene05.pory"
	msgbox Expansion1_Rival_Scene05_Text_19, MSGBOX_AUTOCLOSE
# 151 "data/expansion_1/scene05.pory"
	applymovement 11, Common_Movement_Thinking
# 152 "data/expansion_1/scene05.pory"
	delay 60
# 153 "data/expansion_1/scene05.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 154 "data/expansion_1/scene05.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 155 "data/expansion_1/scene05.pory"
	msgbox Expansion1_Rival_Scene05_Text_20, MSGBOX_AUTOCLOSE
# 156 "data/expansion_1/scene05.pory"
	applymovement 6, Common_Movement_SweatDrop
# 157 "data/expansion_1/scene05.pory"
	playse SE_M_METRONOME
# 158 "data/expansion_1/scene05.pory"
	delay 40
# 159 "data/expansion_1/scene05.pory"
	speakername CommonText_Baron
# 160 "data/expansion_1/scene05.pory"
	msgbox Expansion1_Rival_Scene05_Text_21
# 162 "data/expansion_1/scene05.pory"
	speakername CommonText_Sakura
# 163 "data/expansion_1/scene05.pory"
	msgbox Expansion1_Rival_Scene05_Text_22
# 164 "data/expansion_1/scene05.pory"
	speakername CommonText_Harper
# 165 "data/expansion_1/scene05.pory"
	msgbox Expansion1_Rival_Scene05_Text_23
# 168 "data/expansion_1/scene05.pory"
	speakername CommonText_Redd
# 169 "data/expansion_1/scene05.pory"
	msgbox Expansion1_Rival_Scene05_Text_24, MSGBOX_AUTOCLOSE
# 171 "data/expansion_1/scene05.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 172 "data/expansion_1/scene05.pory"
	warpcontinuescript MAP_MAUVE_CAMP, 21, 15, Expansion1_Rival_Scene05b
	return


Expansion1_Rival_Scene05b::
# 176 "data/expansion_1/scene05.pory"
	turnobject LOCALID_PLAYER, DIR_WEST
# 177 "data/expansion_1/scene05.pory"
	setobjectxyperm 6, 20, 13
# 178 "data/expansion_1/scene05.pory"
	setobjectxyperm 7, 19, 15
# 179 "data/expansion_1/scene05.pory"
	setobjectxyperm 8, 21, 14
# 180 "data/expansion_1/scene05.pory"
	setobjectxyperm 10, 19, 14
# 181 "data/expansion_1/scene05.pory"
	setobjectxyperm 11, 20, 16
# 182 "data/expansion_1/scene05.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_DOWN
# 183 "data/expansion_1/scene05.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_RIGHT
# 185 "data/expansion_1/scene05.pory"
	setobjectmovementtype 10, MOVEMENT_TYPE_FACE_RIGHT
# 186 "data/expansion_1/scene05.pory"
	setobjectmovementtype 11, MOVEMENT_TYPE_FACE_UP
# 187 "data/expansion_1/scene05.pory"
	addobject 6
# 188 "data/expansion_1/scene05.pory"
	addobject 7
# 189 "data/expansion_1/scene05.pory"
	addobject 8
# 190 "data/expansion_1/scene05.pory"
	addobject 10
# 191 "data/expansion_1/scene05.pory"
	addobject 11
# 192 "data/expansion_1/scene05.pory"
	fadescreen FADE_FROM_BLACK
# 193 "data/expansion_1/scene05.pory"
	applymovement 6, Common_Movement_Talking
# 194 "data/expansion_1/scene05.pory"
	delay 80
# 195 "data/expansion_1/scene05.pory"
	speakername CommonText_Jakson
# 196 "data/expansion_1/scene05.pory"
	msgbox Expansion1_Rival_Scene05b_Text_0, MSGBOX_AUTOCLOSE
# 198 "data/expansion_1/scene05.pory"
	applymovement 11, Common_Movement_Thinking
# 199 "data/expansion_1/scene05.pory"
	delay 60
# 200 "data/expansion_1/scene05.pory"
	speakername CommonText_Harper
# 201 "data/expansion_1/scene05.pory"
	msgbox Expansion1_Rival_Scene05b_Text_1
# 203 "data/expansion_1/scene05.pory"
	speakername CommonText_Redd
# 204 "data/expansion_1/scene05.pory"
	msgbox Expansion1_Rival_Scene05b_Text_2
# 205 "data/expansion_1/scene05.pory"
	speakername CommonText_Harper
# 206 "data/expansion_1/scene05.pory"
	msgbox Expansion1_Rival_Scene05b_Text_3
# 208 "data/expansion_1/scene05.pory"
	speakername CommonText_Baron
# 209 "data/expansion_1/scene05.pory"
	msgbox Expansion1_Rival_Scene05b_Text_4
# 211 "data/expansion_1/scene05.pory"
	speakername CommonText_Jakson
# 212 "data/expansion_1/scene05.pory"
	msgbox Expansion1_Rival_Scene05b_Text_5
# 214 "data/expansion_1/scene05.pory"
	speakername CommonText_Harper
# 215 "data/expansion_1/scene05.pory"
	msgbox Expansion1_Rival_Scene05b_Text_6
# 217 "data/expansion_1/scene05.pory"
	speakername CommonText_Sakura
# 218 "data/expansion_1/scene05.pory"
	msgbox Expansion1_Rival_Scene05b_Text_7
# 222 "data/expansion_1/scene05.pory"
	speakername CommonText_Redd
# 223 "data/expansion_1/scene05.pory"
	msgbox Expansion1_Rival_Scene05b_Text_8
# 225 "data/expansion_1/scene05.pory"
	speakername CommonText_Jakson
# 226 "data/expansion_1/scene05.pory"
	msgbox Expansion1_Rival_Scene05b_Text_9, MSGBOX_AUTOCLOSE
# 236 "data/expansion_1/scene05.pory"
	applymovement 8, Common_Movement_MusicNote
# 237 "data/expansion_1/scene05.pory"
	playse SE_RG_HELP_OPEN
# 238 "data/expansion_1/scene05.pory"
	delay 40
# 239 "data/expansion_1/scene05.pory"
	speakername CommonText_Sakura
# 240 "data/expansion_1/scene05.pory"
	msgbox Expansion1_Rival_Scene05b_Text_10
# 242 "data/expansion_1/scene05.pory"
	speakername CommonText_Baron
# 243 "data/expansion_1/scene05.pory"
	msgbox Expansion1_Rival_Scene05b_Text_11
# 244 "data/expansion_1/scene05.pory"
	speakername CommonText_Sakura
# 245 "data/expansion_1/scene05.pory"
	msgbox Expansion1_Rival_Scene05b_Text_12
# 248 "data/expansion_1/scene05.pory"
	speakername CommonText_Harper
# 249 "data/expansion_1/scene05.pory"
	msgbox Expansion1_Rival_Scene05b_Text_13
# 250 "data/expansion_1/scene05.pory"
	speakername CommonText_Sakura
# 251 "data/expansion_1/scene05.pory"
	msgbox Expansion1_Rival_Scene05b_Text_14
# 254 "data/expansion_1/scene05.pory"
	speakername CommonText_Baron
# 255 "data/expansion_1/scene05.pory"
	msgbox Expansion1_Rival_Scene05b_Text_15, MSGBOX_AUTOCLOSE
# 256 "data/expansion_1/scene05.pory"
	applymovement 8, Common_Movement_Smile
# 257 "data/expansion_1/scene05.pory"
	playse SE_M_MORNING_SUN
# 258 "data/expansion_1/scene05.pory"
	delay 40
# 259 "data/expansion_1/scene05.pory"
	speakername CommonText_Sakura
# 260 "data/expansion_1/scene05.pory"
	msgbox Expansion1_Rival_Scene05b_Text_16, MSGBOX_AUTOCLOSE
# 261 "data/expansion_1/scene05.pory"
	speakername CommonText_Redd
# 262 "data/expansion_1/scene05.pory"
	msgbox Expansion1_Rival_Scene05b_Text_17
# 265 "data/expansion_1/scene05.pory"
	speakername CommonText_Jakson
# 266 "data/expansion_1/scene05.pory"
	msgbox Expansion1_Rival_Scene05b_Text_18
# 269 "data/expansion_1/scene05.pory"
	speakername CommonText_Sakura
# 270 "data/expansion_1/scene05.pory"
	msgbox Expansion1_Rival_Scene05b_Text_19
# 272 "data/expansion_1/scene05.pory"
	speakername CommonText_Redd
# 273 "data/expansion_1/scene05.pory"
	msgbox Expansion1_Rival_Scene05b_Text_20
# 275 "data/expansion_1/scene05.pory"
	speakername CommonText_Jakson
# 276 "data/expansion_1/scene05.pory"
	msgbox Expansion1_Rival_Scene05b_Text_21
# 279 "data/expansion_1/scene05.pory"
	speakername CommonText_Redd
# 280 "data/expansion_1/scene05.pory"
	msgbox Expansion1_Rival_Scene05b_Text_22
# 281 "data/expansion_1/scene05.pory"
	speakername CommonText_Harper
# 282 "data/expansion_1/scene05.pory"
	msgbox Expansion1_Rival_Scene05b_Text_23, MSGBOX_AUTOCLOSE
# 284 "data/expansion_1/scene05.pory"
	setvar VAR_EMERALBODY_RIVAL_STATE, 32
# 285 "data/expansion_1/scene05.pory"
	savebgm MUS_DP_CREDITS
# 286 "data/expansion_1/scene05.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 287 "data/expansion_1/scene05.pory"
	warpcontinuescript MAP_MAUVE_CAMP, 16, 16, Expansion1_Rival_Scene02e
	return


Expansion1_Rival_Scene05_Text_0:
# 55 "data/expansion_1/scene05.pory"
	.string "Jakson.$"

Expansion1_Rival_Scene05_Text_1:
# 62 "data/expansion_1/scene05.pory"
	.string "Hm…?$"

Expansion1_Rival_Scene05_Text_2:
# 68 "data/expansion_1/scene05.pory"
	.string "Harper! It's good to see you safe.$"

Expansion1_Rival_Scene05_Text_3:
# 74 "data/expansion_1/scene05.pory"
	.string "What a relief.$"

Expansion1_Rival_Scene05_Text_4:
# 80 "data/expansion_1/scene05.pory"
	.string "Y- Yes?$"

Expansion1_Rival_Scene05_Text_5:
# 91 "data/expansion_1/scene05.pory"
	.string "Harper moves swiftly, beyond what one\n"
	.string "may even think possible in the engine.\p"
	.string "Her fingers pinch. Hard.\n"
	.string "And Jakson's ear is in her grasp.$"

Expansion1_Rival_Scene05_Text_6:
# 96 "data/expansion_1/scene05.pory"
	.string "O- O- OW!!!$"

Expansion1_Rival_Scene05_Text_7:
# 98 "data/expansion_1/scene05.pory"
	.string "Do I need to treat you like a child?!\n"
	.string "I was in there for hours!$"

Expansion1_Rival_Scene05_Text_8:
# 101 "data/expansion_1/scene05.pory"
	.string "W- We were working on it!$"

Expansion1_Rival_Scene05_Text_9:
# 103 "data/expansion_1/scene05.pory"
	.string "You didn't reply to my messages!$"

Expansion1_Rival_Scene05_Text_10:
# 107 "data/expansion_1/scene05.pory"
	.string "Messages?$"

Expansion1_Rival_Scene05_Text_11:
# 112 "data/expansion_1/scene05.pory"
	.string "In ENCORE!!!$"

Expansion1_Rival_Scene05_Text_12:
# 114 "data/expansion_1/scene05.pory"
	.string "…shit.$"

Expansion1_Rival_Scene05_Text_13:
# 123 "data/expansion_1/scene05.pory"
	.string "ENCORE?$"

Expansion1_Rival_Scene05_Text_14:
# 125 "data/expansion_1/scene05.pory"
	.string "I… have… notifications turned off\n"
	.string "in that app when I play.$"

Expansion1_Rival_Scene05_Text_15:
# 134 "data/expansion_1/scene05.pory"
	.string "O- O- OW!!! We all play together,\n"
	.string "we don't need a messaging app!$"

Expansion1_Rival_Scene05_Text_16:
# 137 "data/expansion_1/scene05.pory"
	.string "I'm guessing she'd disagree right\n"
	.string "about now…$"

Expansion1_Rival_Scene05_Text_17:
# 140 "data/expansion_1/scene05.pory"
	.string "Ya think?!$"

Expansion1_Rival_Scene05_Text_18:
# 142 "data/expansion_1/scene05.pory"
	.string "Hmm…$"

Expansion1_Rival_Scene05_Text_19:
# 147 "data/expansion_1/scene05.pory"
	.string "Hey, Harper.\p"
	.string "If you were that distressed, why not\n"
	.string "just log-off? We'd have gotten the\l"
	.string "log-off notification in-game.$"

Expansion1_Rival_Scene05_Text_20:
# 155 "data/expansion_1/scene05.pory"
	.string "Harper's grip releases.$"

Expansion1_Rival_Scene05_Text_21:
# 160 "data/expansion_1/scene05.pory"
	.string "People can forget things in the heat\n"
	.string "of the moment…$"

Expansion1_Rival_Scene05_Text_22:
# 163 "data/expansion_1/scene05.pory"
	.string "Ain't that the truth?$"

Expansion1_Rival_Scene05_Text_23:
# 165 "data/expansion_1/scene05.pory"
	.string "… … …\n"
	.string "… … …\l"
	.string "Okay, what's the situation?$"

Expansion1_Rival_Scene05_Text_24:
# 169 "data/expansion_1/scene05.pory"
	.string "So quick to move on!$"

Expansion1_Rival_Scene05b_Text_0:
# 196 "data/expansion_1/scene05.pory"
	.string "…and that's my running theory. Mods\n"
	.string "aren't playing nice with each other.$"

Expansion1_Rival_Scene05b_Text_1:
# 201 "data/expansion_1/scene05.pory"
	.string "I was looking up some mods the other\n"
	.string "day and I did notice all sorts.$"

Expansion1_Rival_Scene05b_Text_2:
# 204 "data/expansion_1/scene05.pory"
	.string "Pokémon is popular.$"

Expansion1_Rival_Scene05b_Text_3:
# 206 "data/expansion_1/scene05.pory"
	.string "Yeah, and there were a bunch of boss\n"
	.string "creatures mods, too.$"

Expansion1_Rival_Scene05b_Text_4:
# 209 "data/expansion_1/scene05.pory"
	.string "You think that's what we saw when\n"
	.string "we were on the boat?$"

Expansion1_Rival_Scene05b_Text_5:
# 212 "data/expansion_1/scene05.pory"
	.string "It'd fit, maybe? Not like anything else\n"
	.string "has been outright broken since then.$"

Expansion1_Rival_Scene05b_Text_6:
# 215 "data/expansion_1/scene05.pory"
	.string "Hmm… what else did I see on those\n"
	.string "forums…?$"

Expansion1_Rival_Scene05b_Text_7:
# 218 "data/expansion_1/scene05.pory"
	.string "Well, we'll find out if it even matters\n"
	.string "if we keep moving forwards.\p"
	.string "And your very own Sakura has some\n"
	.string "good news on that front{EMOJI_TILDE}{UNK_SPACER}$"

Expansion1_Rival_Scene05b_Text_8:
# 223 "data/expansion_1/scene05.pory"
	.string "You found a way to move the Pokémon\n"
	.string "blockade down South?$"

Expansion1_Rival_Scene05b_Text_9:
# 226 "data/expansion_1/scene05.pory"
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
# 240 "data/expansion_1/scene05.pory"
	.string "Which means my explosive discovery\n"
	.string "is all the more useful!$"

Expansion1_Rival_Scene05b_Text_11:
# 243 "data/expansion_1/scene05.pory"
	.string "Explosive?$"

Expansion1_Rival_Scene05b_Text_12:
# 245 "data/expansion_1/scene05.pory"
	.string "Yep yep! So we just need to blow some\n"
	.string "shit up at a cave entrance, and then\l"
	.string "we can swoop in to save Harper!$"

Expansion1_Rival_Scene05b_Text_13:
# 249 "data/expansion_1/scene05.pory"
	.string "…I'm right here.$"

Expansion1_Rival_Scene05b_Text_14:
# 251 "data/expansion_1/scene05.pory"
	.string "Ah. Right. Need to refactor the pitch.\p"
	.string "We can… blow things up.\n"
	.string "Boom.$"

Expansion1_Rival_Scene05b_Text_15:
# 255 "data/expansion_1/scene05.pory"
	.string "How… eloquent.$"

Expansion1_Rival_Scene05b_Text_16:
# 260 "data/expansion_1/scene05.pory"
	.string "I know, right?$"

Expansion1_Rival_Scene05b_Text_17:
# 262 "data/expansion_1/scene05.pory"
	.string "Knowing Pokémon, it probably is a place\n"
	.string "we need to go. Maybe rock smash? You\l"
	.string "said it was at a cave entrance?$"

Expansion1_Rival_Scene05b_Text_18:
# 266 "data/expansion_1/scene05.pory"
	.string "Would post game content be designed\n"
	.string "to block the player with rock smash?\l"
	.string "This is the flash situation again.$"

Expansion1_Rival_Scene05b_Text_19:
# 270 "data/expansion_1/scene05.pory"
	.string "Boom?\n"
	.string "Boom.$"

Expansion1_Rival_Scene05b_Text_20:
# 273 "data/expansion_1/scene05.pory"
	.string "The one other place we haven't been\n"
	.string "is the ship. Maybe…$"

Expansion1_Rival_Scene05b_Text_21:
# 276 "data/expansion_1/scene05.pory"
	.string "Yeah, we'll probably find some explosive\n"
	.string "key item in the ship.\p"
	.string "Or… shipwreck, I guess.$"

Expansion1_Rival_Scene05b_Text_22:
# 280 "data/expansion_1/scene05.pory"
	.string "Sounds like a plan to me!$"

Expansion1_Rival_Scene05b_Text_23:
# 282 "data/expansion_1/scene05.pory"
	.string "Hell yeah it does.$"
