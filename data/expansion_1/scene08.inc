Expansion1_Rival_Scene08::
# 10 "data/expansion_1/scene08.pory"
	fadescreen FADE_FROM_BLACK
# 11 "data/expansion_1/scene08.pory"
	clearflag FLAG_SYS_SPAWN_INVISIBLE
# 13 "data/expansion_1/scene08.pory"
	applymovement 12, Common_Movement_Thinking
# 14 "data/expansion_1/scene08.pory"
	delay 60
# 15 "data/expansion_1/scene08.pory"
	speakername CommonText_Jakson
# 16 "data/expansion_1/scene08.pory"
	msgbox Expansion1_Rival_Scene08_Text_0, MSGBOX_AUTOCLOSE
# 21 "data/expansion_1/scene08.pory"
	applymovement 9, Common_Movement_WalkInPlaceFasterRight
# 22 "data/expansion_1/scene08.pory"
	waitmovement 0
# 23 "data/expansion_1/scene08.pory"
	speakername CommonText_Sakura
# 24 "data/expansion_1/scene08.pory"
	msgbox Expansion1_Rival_Scene08_Text_1
# 26 "data/expansion_1/scene08.pory"
	speakername CommonText_Jakson
# 27 "data/expansion_1/scene08.pory"
	msgbox Expansion1_Rival_Scene08_Text_2, MSGBOX_AUTOCLOSE
# 28 "data/expansion_1/scene08.pory"
	applymovement 9, Common_Movement_Smile
# 29 "data/expansion_1/scene08.pory"
	playse SE_M_MORNING_SUN
# 30 "data/expansion_1/scene08.pory"
	delay 40
# 31 "data/expansion_1/scene08.pory"
	applymovement 9, Common_Movement_WalkInPlaceFasterDown
# 32 "data/expansion_1/scene08.pory"
	waitmovement 0
# 33 "data/expansion_1/scene08.pory"
	delay 20
# 35 "data/expansion_1/scene08.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown4
# 36 "data/expansion_1/scene08.pory"
	waitmovement 0
# 37 "data/expansion_1/scene08.pory"
	delay 20
# 38 "data/expansion_1/scene08.pory"
	applymovement 14, Common_Movement_WalkInPlaceFasterRight
# 39 "data/expansion_1/scene08.pory"
	waitmovement 0
# 40 "data/expansion_1/scene08.pory"
	delay 20
# 41 "data/expansion_1/scene08.pory"
	applymovement 14, Common_Movement_WalkInPlaceFasterUp
# 42 "data/expansion_1/scene08.pory"
	waitmovement 0
# 43 "data/expansion_1/scene08.pory"
	delay 20
# 44 "data/expansion_1/scene08.pory"
	applymovement 14, Common_Movement_WalkInPlaceFasterRight
# 45 "data/expansion_1/scene08.pory"
	waitmovement 0
# 46 "data/expansion_1/scene08.pory"
	delay 20
# 47 "data/expansion_1/scene08.pory"
	call GetBaronsName
# 48 "data/expansion_1/scene08.pory"
	msgbox Expansion1_Rival_Scene08_Text_3, MSGBOX_AUTOCLOSE
# 50 "data/expansion_1/scene08.pory"
	applymovement 15, Common_Movement_WalkInPlaceFasterLeft
# 51 "data/expansion_1/scene08.pory"
	waitmovement 0
# 52 "data/expansion_1/scene08.pory"
	playse SE_SWITCH
# 53 "data/expansion_1/scene08.pory"
	addobject 17
# 54 "data/expansion_1/scene08.pory"
	speakername CommonText_Harper
# 55 "data/expansion_1/scene08.pory"
	msgbox Expansion1_Rival_Scene08_Text_4, MSGBOX_AUTOCLOSE
# 58 "data/expansion_1/scene08.pory"
	applymovement 15, Common_Movement_WalkInPlaceFasterUp
# 59 "data/expansion_1/scene08.pory"
	waitmovement 0
# 60 "data/expansion_1/scene08.pory"
	applymovement 12, Common_Movement_WalkRight
# 61 "data/expansion_1/scene08.pory"
	waitmovement 0
# 62 "data/expansion_1/scene08.pory"
	applymovement 12, Common_Movement_WalkDown
# 63 "data/expansion_1/scene08.pory"
	waitmovement 0
# 64 "data/expansion_1/scene08.pory"
	applymovement 14, Common_Movement_WalkInPlaceFasterUp
# 65 "data/expansion_1/scene08.pory"
	waitmovement 0
# 66 "data/expansion_1/scene08.pory"
	delay 20
# 67 "data/expansion_1/scene08.pory"
	applymovement 14, Common_Movement_Thinking
# 68 "data/expansion_1/scene08.pory"
	applymovement 12, Common_Movement_WalkInPlaceFasterRight
# 69 "data/expansion_1/scene08.pory"
	delay 60
# 70 "data/expansion_1/scene08.pory"
	call GetBaronsName
# 71 "data/expansion_1/scene08.pory"
	msgbox Expansion1_Rival_Scene08_Text_5, MSGBOX_AUTOCLOSE
# 72 "data/expansion_1/scene08.pory"
	applymovement 16, Common_Movement_WalkInPlaceFasterDown
# 73 "data/expansion_1/scene08.pory"
	applymovement 12, Common_Movement_WalkInPlaceFasterLeft
# 74 "data/expansion_1/scene08.pory"
	waitmovement 0
# 75 "data/expansion_1/scene08.pory"
	speakername CommonText_Harper
# 76 "data/expansion_1/scene08.pory"
	msgbox Expansion1_Rival_Scene08_Text_6, MSGBOX_AUTOCLOSE
# 79 "data/expansion_1/scene08.pory"
	applymovement 12, Common_Movement_SweatDrop
# 80 "data/expansion_1/scene08.pory"
	applymovement 13, Common_Movement_WalkInPlaceFasterDown
# 81 "data/expansion_1/scene08.pory"
	waitmovement 0
# 82 "data/expansion_1/scene08.pory"
	speakername CommonText_Redd
# 83 "data/expansion_1/scene08.pory"
	msgbox Expansion1_Rival_Scene08_Text_7, MSGBOX_AUTOCLOSE
# 84 "data/expansion_1/scene08.pory"
	applymovement 13, Common_Movement_WalkInPlaceFasterUp
# 85 "data/expansion_1/scene08.pory"
	applymovement 12, Common_Movement_WalkUp
# 86 "data/expansion_1/scene08.pory"
	waitmovement 0
# 87 "data/expansion_1/scene08.pory"
	applymovement 12, Common_Movement_WalkLeft
# 88 "data/expansion_1/scene08.pory"
	waitmovement 0
# 89 "data/expansion_1/scene08.pory"
	applymovement 13, Common_Movement_Thinking
# 90 "data/expansion_1/scene08.pory"
	delay 60
# 91 "data/expansion_1/scene08.pory"
	speakername CommonText_Redd
# 92 "data/expansion_1/scene08.pory"
	msgbox Expansion1_Rival_Scene08_Text_8, MSGBOX_AUTOCLOSE
# 94 "data/expansion_1/scene08.pory"
	applymovement 14, Common_Movement_ExclamationMark
# 95 "data/expansion_1/scene08.pory"
	playse SE_PIN
# 96 "data/expansion_1/scene08.pory"
	delay 40
# 97 "data/expansion_1/scene08.pory"
	applymovement 14, Common_Movement_WalkInPlaceFasterRight
# 98 "data/expansion_1/scene08.pory"
	waitmovement 0
# 99 "data/expansion_1/scene08.pory"
	call GetBaronsName
# 100 "data/expansion_1/scene08.pory"
	msgbox Expansion1_Rival_Scene08_Text_9
# 102 "data/expansion_1/scene08.pory"
	speakername CommonText_Sakura
# 103 "data/expansion_1/scene08.pory"
	msgbox Expansion1_Rival_Scene08_Text_10, MSGBOX_AUTOCLOSE
# 105 "data/expansion_1/scene08.pory"
	applymovement 16, Common_Movement_ExclamationMark
# 106 "data/expansion_1/scene08.pory"
	playse SE_PIN
# 107 "data/expansion_1/scene08.pory"
	delay 10
# 108 "data/expansion_1/scene08.pory"
	playse SE_PIN
# 109 "data/expansion_1/scene08.pory"
	applymovement 14, Common_Movement_ExclamationMark
# 110 "data/expansion_1/scene08.pory"
	applymovement 16, Common_Movement_WalkInPlaceFasterUp
# 111 "data/expansion_1/scene08.pory"
	waitmovement 0
# 112 "data/expansion_1/scene08.pory"
	applymovement 14, Common_Movement_WalkInPlaceFasterUp
# 113 "data/expansion_1/scene08.pory"
	waitmovement 0
# 114 "data/expansion_1/scene08.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp3
# 115 "data/expansion_1/scene08.pory"
	waitmovement 0
# 117 "data/expansion_1/scene08.pory"
	applymovement 12, Common_Movement_ExclamationMark
# 118 "data/expansion_1/scene08.pory"
	playse SE_PIN
# 119 "data/expansion_1/scene08.pory"
	applymovement 9, Common_Movement_WalkFastRight2
# 120 "data/expansion_1/scene08.pory"
	waitmovement 0
# 121 "data/expansion_1/scene08.pory"
	applymovement 9, Common_Movement_WalkFastUp
# 122 "data/expansion_1/scene08.pory"
	waitmovement 0
# 123 "data/expansion_1/scene08.pory"
	applymovement 12, Common_Movement_WalkInPlaceFasterUp
# 124 "data/expansion_1/scene08.pory"
	applymovement 9, Common_Movement_WalkFastRight3
# 125 "data/expansion_1/scene08.pory"
	waitmovement 0
# 126 "data/expansion_1/scene08.pory"
	speakername CommonText_Jakson
# 127 "data/expansion_1/scene08.pory"
	msgbox Expansion1_Rival_Scene08_Text_11, MSGBOX_AUTOCLOSE
# 129 "data/expansion_1/scene08.pory"
	applymovement 9, Common_Movement_WalkInPlaceFasterDown
# 130 "data/expansion_1/scene08.pory"
	waitmovement 0
# 131 "data/expansion_1/scene08.pory"
	speakername CommonText_Sakura
# 132 "data/expansion_1/scene08.pory"
	msgbox Expansion1_Rival_Scene08_Text_12, MSGBOX_AUTOCLOSE
# 133 "data/expansion_1/scene08.pory"
	playse SE_LEDGE
# 134 "data/expansion_1/scene08.pory"
	applymovement 9, Common_Movement_JumpRight2
# 135 "data/expansion_1/scene08.pory"
	waitmovement 0
# 136 "data/expansion_1/scene08.pory"
	playse SE_LEDGE
# 137 "data/expansion_1/scene08.pory"
	applymovement 12, Common_Movement_WalkInPlaceFasterLeft
# 138 "data/expansion_1/scene08.pory"
	applymovement 9, Common_Movement_JumpRight2
# 139 "data/expansion_1/scene08.pory"
	waitmovement 0
# 140 "data/expansion_1/scene08.pory"
	playse SE_PUDDLE
# 141 "data/expansion_1/scene08.pory"
	applymovement 12, Common_Movement_LockFacingDirection
# 142 "data/expansion_1/scene08.pory"
	waitmovement 0
# 143 "data/expansion_1/scene08.pory"
	applymovement 12, Common_Movement_WalkRightSlow
# 144 "data/expansion_1/scene08.pory"
	waitmovement 0
# 145 "data/expansion_1/scene08.pory"
	removeobject 17
# 146 "data/expansion_1/scene08.pory"
	setmetatile 55, 4, 0x0221, TRUE
# 147 "data/expansion_1/scene08.pory"
	setmetatile 54, 5, 0x0228, TRUE
# 148 "data/expansion_1/scene08.pory"
	setmetatile 55, 5, 0x0229, FALSE
# 149 "data/expansion_1/scene08.pory"
	setmetatile 56, 5, 0x022A, TRUE
# 150 "data/expansion_1/scene08.pory"
	setvar VAR_0x8004, 4
# 151 "data/expansion_1/scene08.pory"
	setvar VAR_0x8005, 5
# 152 "data/expansion_1/scene08.pory"
	setvar VAR_0x8006, 12
# 153 "data/expansion_1/scene08.pory"
	setvar VAR_0x8007, 3
# 154 "data/expansion_1/scene08.pory"
	special ShakeCamera
# 155 "data/expansion_1/scene08.pory"
	waitstate
# 156 "data/expansion_1/scene08.pory"
	special DrawWholeMapView
# 158 "data/expansion_1/scene08.pory"
	applymovement 12, Common_Movement_SlideRight3
# 159 "data/expansion_1/scene08.pory"
	waitmovement 0
# 160 "data/expansion_1/scene08.pory"
	playse SE_PUDDLE
# 162 "data/expansion_1/scene08.pory"
	fadescreenswapbuffers FADE_TO_WHITE
# 163 "data/expansion_1/scene08.pory"
	removeobject 12
# 164 "data/expansion_1/scene08.pory"
	removeobject 9
# 165 "data/expansion_1/scene08.pory"
	playse SE_M_EARTHQUAKE
# 166 "data/expansion_1/scene08.pory"
	waitse
# 167 "data/expansion_1/scene08.pory"
	fadescreenswapbuffers FADE_FROM_WHITE
# 169 "data/expansion_1/scene08.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown3
# 170 "data/expansion_1/scene08.pory"
	waitmovement 0
# 171 "data/expansion_1/scene08.pory"
	delay 20
# 172 "data/expansion_1/scene08.pory"
	applymovement 13, Common_Movement_Thinking
# 173 "data/expansion_1/scene08.pory"
	applymovement 14, Common_Movement_Thinking
# 174 "data/expansion_1/scene08.pory"
	applymovement 15, Common_Movement_Thinking
# 175 "data/expansion_1/scene08.pory"
	applymovement 16, Common_Movement_Thinking
# 176 "data/expansion_1/scene08.pory"
	delay 80
# 177 "data/expansion_1/scene08.pory"
	speakername CommonText_Redd
# 178 "data/expansion_1/scene08.pory"
	msgbox Expansion1_Rival_Scene08_Text_13
# 182 "data/expansion_1/scene08.pory"
	call GetBaronsName
# 183 "data/expansion_1/scene08.pory"
	msgbox Expansion1_Rival_Scene08_Text_14
# 184 "data/expansion_1/scene08.pory"
	speakername CommonText_Harper
# 185 "data/expansion_1/scene08.pory"
	msgbox Expansion1_Rival_Scene08_Text_15, MSGBOX_AUTOCLOSE
# 186 "data/expansion_1/scene08.pory"
	call GetBaronsName
# 187 "data/expansion_1/scene08.pory"
	playse SE_PIN
# 188 "data/expansion_1/scene08.pory"
	applymovement 14, Common_Movement_ExclamationMark
# 189 "data/expansion_1/scene08.pory"
	delay 40
# 190 "data/expansion_1/scene08.pory"
	applymovement 14, Common_Movement_WalkInPlaceFasterUp
# 191 "data/expansion_1/scene08.pory"
	waitmovement 0
# 192 "data/expansion_1/scene08.pory"
	msgbox Expansion1_Rival_Scene08_Text_16
# 193 "data/expansion_1/scene08.pory"
	speakername CommonText_Jakson
# 194 "data/expansion_1/scene08.pory"
	msgbox Expansion1_Rival_Scene08_Text_17, MSGBOX_AUTOCLOSE
# 195 "data/expansion_1/scene08.pory"
	applymovement 13, Common_Movement_ExclamationMark
# 196 "data/expansion_1/scene08.pory"
	applymovement 14, Common_Movement_ExclamationMark
# 197 "data/expansion_1/scene08.pory"
	applymovement 15, Common_Movement_ExclamationMark
# 198 "data/expansion_1/scene08.pory"
	applymovement 16, Common_Movement_ExclamationMark
# 199 "data/expansion_1/scene08.pory"
	playse SE_PIN
# 200 "data/expansion_1/scene08.pory"
	delay 60
# 201 "data/expansion_1/scene08.pory"
	setobjectxyperm 9, 50, 8
# 202 "data/expansion_1/scene08.pory"
	setobjectmovementtype 9, MOVEMENT_TYPE_FACE_UP
# 203 "data/expansion_1/scene08.pory"
	addobject 9
# 204 "data/expansion_1/scene08.pory"
	playse SE_LEDGE
# 205 "data/expansion_1/scene08.pory"
	applymovement 9, Common_Movement_JumpUp2
# 206 "data/expansion_1/scene08.pory"
	waitmovement 0
# 207 "data/expansion_1/scene08.pory"
	applymovement 13, Common_Movement_WalkInPlaceFasterLeft
# 208 "data/expansion_1/scene08.pory"
	applymovement 14, Common_Movement_WalkInPlaceFasterLeft
# 209 "data/expansion_1/scene08.pory"
	applymovement 15, Common_Movement_WalkInPlaceFasterLeft
# 210 "data/expansion_1/scene08.pory"
	applymovement 16, Common_Movement_WalkInPlaceFasterLeft
# 211 "data/expansion_1/scene08.pory"
	waitmovement 0
# 212 "data/expansion_1/scene08.pory"
	applymovement 9, Common_Movement_WalkInPlaceFasterRight
# 213 "data/expansion_1/scene08.pory"
	waitmovement 0
# 214 "data/expansion_1/scene08.pory"
	delay 30
# 215 "data/expansion_1/scene08.pory"
	setobjectxyperm 12, 62, 6
# 216 "data/expansion_1/scene08.pory"
	setobjectmovementtype 12, MOVEMENT_TYPE_FACE_LEFT
# 217 "data/expansion_1/scene08.pory"
	addobject 12
# 218 "data/expansion_1/scene08.pory"
	playse SE_LEDGE
# 219 "data/expansion_1/scene08.pory"
	applymovement 12, Common_Movement_JumpLeft
# 220 "data/expansion_1/scene08.pory"
	waitmovement 0
# 221 "data/expansion_1/scene08.pory"
	delay 40
# 222 "data/expansion_1/scene08.pory"
	applymovement 13, Common_Movement_WalkInPlaceFasterRight
# 223 "data/expansion_1/scene08.pory"
	applymovement 14, Common_Movement_WalkInPlaceFasterRight
# 224 "data/expansion_1/scene08.pory"
	applymovement 15, Common_Movement_WalkInPlaceFasterRight
# 225 "data/expansion_1/scene08.pory"
	applymovement 16, Common_Movement_WalkInPlaceFasterRight
# 226 "data/expansion_1/scene08.pory"
	applymovement 12, Common_Movement_WalkQuarterLeft
# 227 "data/expansion_1/scene08.pory"
	waitmovement 0
# 228 "data/expansion_1/scene08.pory"
	delay 20
# 229 "data/expansion_1/scene08.pory"
	applymovement 12, Common_Movement_WalkQuarterLeft
# 230 "data/expansion_1/scene08.pory"
	waitmovement 0
# 231 "data/expansion_1/scene08.pory"
	delay 20
# 232 "data/expansion_1/scene08.pory"
	applymovement 12, Common_Movement_WalkQuarterLeft
# 233 "data/expansion_1/scene08.pory"
	waitmovement 0
# 234 "data/expansion_1/scene08.pory"
	delay 20
# 235 "data/expansion_1/scene08.pory"
	applymovement 12, Common_Movement_WalkQuarterLeft
# 236 "data/expansion_1/scene08.pory"
	waitmovement 0
# 237 "data/expansion_1/scene08.pory"
	delay 20
# 238 "data/expansion_1/scene08.pory"
	speakername CommonText_Jakson
# 239 "data/expansion_1/scene08.pory"
	msgbox Expansion1_Rival_Scene08_Text_18, MSGBOX_AUTOCLOSE
# 243 "data/expansion_1/scene08.pory"
	applymovement 14, Common_Movement_Smile
# 244 "data/expansion_1/scene08.pory"
	playse SE_M_MORNING_SUN
# 245 "data/expansion_1/scene08.pory"
	delay 80
# 246 "data/expansion_1/scene08.pory"
	playse SE_LEDGE
# 247 "data/expansion_1/scene08.pory"
	applymovement 9, Common_Movement_JumpUp2
# 248 "data/expansion_1/scene08.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp2
# 249 "data/expansion_1/scene08.pory"
	waitmovement 0
# 250 "data/expansion_1/scene08.pory"
	playse SE_LEDGE
# 251 "data/expansion_1/scene08.pory"
	applymovement 9, Common_Movement_JumpUp
# 252 "data/expansion_1/scene08.pory"
	waitmovement 0
# 253 "data/expansion_1/scene08.pory"
	applymovement 9, Common_Movement_WalkInPlaceFasterRight
# 254 "data/expansion_1/scene08.pory"
	waitmovement 0
# 255 "data/expansion_1/scene08.pory"
	speakername CommonText_Sakura
# 256 "data/expansion_1/scene08.pory"
	msgbox Expansion1_Rival_Scene08_Text_19, MSGBOX_AUTOCLOSE
# 257 "data/expansion_1/scene08.pory"
	playse SE_THUNDER
# 258 "data/expansion_1/scene08.pory"
	applymovement 14, Common_Movement_WalkInPlaceFasterUp
# 259 "data/expansion_1/scene08.pory"
	applymovement 15, Common_Movement_WalkInPlaceFasterUp
# 260 "data/expansion_1/scene08.pory"
	applymovement 12, Common_Movement_XMark
# 261 "data/expansion_1/scene08.pory"
	applymovement 9, Common_Movement_WalkRight5
# 262 "data/expansion_1/scene08.pory"
	waitmovement 0
# 263 "data/expansion_1/scene08.pory"
	playse SE_LEDGE
# 264 "data/expansion_1/scene08.pory"
	applymovement 13, Common_Movement_WalkInPlaceFasterUp
# 265 "data/expansion_1/scene08.pory"
	applymovement 9, Common_Movement_JumpDown2
# 266 "data/expansion_1/scene08.pory"
	waitmovement 0
# 267 "data/expansion_1/scene08.pory"
	removeobject 9
# 268 "data/expansion_1/scene08.pory"
	playse SE_EXIT
# 269 "data/expansion_1/scene08.pory"
	applymovement 16, Common_Movement_WalkInPlaceFasterUp
# 270 "data/expansion_1/scene08.pory"
	waitmovement 0
# 271 "data/expansion_1/scene08.pory"
	delay 30
# 272 "data/expansion_1/scene08.pory"
	applymovement 16, Common_Movement_SweatDrop
# 273 "data/expansion_1/scene08.pory"
	playse SE_M_METRONOME
# 274 "data/expansion_1/scene08.pory"
	delay 40
# 275 "data/expansion_1/scene08.pory"
	fadescreen FADE_TO_BLACK
	return


Expansion1_Rival_Scene08_Text_0:
# 16 "data/expansion_1/scene08.pory"
	.string "This is it?\p"
	.string "It certainly does look the part of\n"
	.string "a progression blocker, but…\p"
	.string "I guess anything could be the case\n"
	.string "with a mod I plucked from online.$"

Expansion1_Rival_Scene08_Text_1:
# 24 "data/expansion_1/scene08.pory"
	.string "Haha{EMOJI_TILDE} Don't worry, I'm an expert\n"
	.string "at these things.$"

Expansion1_Rival_Scene08_Text_2:
# 27 "data/expansion_1/scene08.pory"
	.string "What, a demolitions expert?$"

Expansion1_Rival_Scene08_Text_3:
# 48 "data/expansion_1/scene08.pory"
	.string "A- Are you all sure that this is safe?\n"
	.string "It won't… like… break the game, right?$"

Expansion1_Rival_Scene08_Text_4:
# 55 "data/expansion_1/scene08.pory"
	.string "They added it as a key item. If their\n"
	.string "coding is worth its salt, then it'll\l"
	.string "either not work or work perfectly.$"

Expansion1_Rival_Scene08_Text_5:
# 71 "data/expansion_1/scene08.pory"
	.string "Mmm…$"

Expansion1_Rival_Scene08_Text_6:
# 76 "data/expansion_1/scene08.pory"
	.string "And it won't damage us. The game itself\n"
	.string "isn't equipped to do that. Like when we\l"
	.string "fell multiple stories out on Mt. Pyre.$"

Expansion1_Rival_Scene08_Text_7:
# 83 "data/expansion_1/scene08.pory"
	.string "That's right. I'm sure we'll be fine.$"

Expansion1_Rival_Scene08_Text_8:
# 92 "data/expansion_1/scene08.pory"
	.string "…unless they hooked the code into\n"
	.string "the VR system instead of the game…$"

Expansion1_Rival_Scene08_Text_9:
# 100 "data/expansion_1/scene08.pory"
	.string "W- Wait! Yeah, did anyone test for\n"
	.string "that? What if-$"

Expansion1_Rival_Scene08_Text_10:
# 103 "data/expansion_1/scene08.pory"
	.string "FIRE IN THE HOLE!$"

Expansion1_Rival_Scene08_Text_11:
# 127 "data/expansion_1/scene08.pory"
	.string "Wait! Wait, you've already lit it?!\n"
	.string "Sakura!$"

Expansion1_Rival_Scene08_Text_12:
# 132 "data/expansion_1/scene08.pory"
	.string "Wildcard, baby!$"

Expansion1_Rival_Scene08_Text_13:
# 178 "data/expansion_1/scene08.pory"
	.string "… … …\n"
	.string "… … …\l"
	.string "Well, the entryway is open now.\l"
	.string "It worked.$"

Expansion1_Rival_Scene08_Text_14:
# 183 "data/expansion_1/scene08.pory"
	.string "But what about…?$"

Expansion1_Rival_Scene08_Text_15:
# 185 "data/expansion_1/scene08.pory"
	.string "Alright, time to finish out this mess.$"

Expansion1_Rival_Scene08_Text_16:
# 192 "data/expansion_1/scene08.pory"
	.string "W- What about Jakson and Sakura?!$"

Expansion1_Rival_Scene08_Text_17:
# 194 "data/expansion_1/scene08.pory"
	.string "{EMOJI_BIGWHEEL}Glug glug{EMOJI_BIGWHEEL} …!$"

Expansion1_Rival_Scene08_Text_18:
# 239 "data/expansion_1/scene08.pory"
	.string "{EMOJI_BIGWHEEL}GASP{EMOJI_BIGWHEEL}!!!\p"
	.string "You were… {EMOJI_BIGWHEEL}Pant{EMOJI_BIGWHEEL}… supposed to warn\n"
	.string "everyone… {EMOJI_BIGWHEEL}Pant{EMOJI_BIGWHEEL}… first!!!\l"
	.string "Sakura!$"

Expansion1_Rival_Scene08_Text_19:
# 256 "data/expansion_1/scene08.pory"
	.string "Last one in's a rotten egg!$"
