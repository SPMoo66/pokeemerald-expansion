Expansion1_Rival_Scene09::
# 13 "data/expansion_1/scene09.pory"
	setvar VAR_TEMP_3, 1
# 14 "data/expansion_1/scene09.pory"
	checktrainerflag TRAINER_WILD_POKEMON_BV_2
	goto_if 0, Expansion1_Rival_Scene09_2
Expansion1_Rival_Scene09_1:
# 27 "data/expansion_1/scene09.pory"
	removeobject 1
# 28 "data/expansion_1/scene09.pory"
	delay 20
# 29 "data/expansion_1/scene09.pory"
	addobject 2
# 30 "data/expansion_1/scene09.pory"
	playse SE_EXIT
# 31 "data/expansion_1/scene09.pory"
	waitse
# 32 "data/expansion_1/scene09.pory"
	delay 20
# 33 "data/expansion_1/scene09.pory"
	playse SE_PIN
# 34 "data/expansion_1/scene09.pory"
	applymovement 2, Common_Movement_DoubleExclamationMark
# 35 "data/expansion_1/scene09.pory"
	delay 60
# 36 "data/expansion_1/scene09.pory"
	setobjectsubpriority 2, MAP_BYGONE_VAULT_TREASURE_ROOM, 0
# 37 "data/expansion_1/scene09.pory"
	setobjectsubpriority LOCALID_PLAYER, MAP_BYGONE_VAULT_TREASURE_ROOM, 1
# 38 "data/expansion_1/scene09.pory"
	speakername CommonText_Sakura
# 39 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09_Text_0, MSGBOX_AUTOCLOSE
# 40 "data/expansion_1/scene09.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 41 "data/expansion_1/scene09.pory"
	applymovement 2, Common_Movement_WalkUpFast
# 42 "data/expansion_1/scene09.pory"
	waitmovement 0
# 43 "data/expansion_1/scene09.pory"
	playse SE_LEDGE
# 44 "data/expansion_1/scene09.pory"
	applymovement 2, Common_Movement_JumpUp2
# 45 "data/expansion_1/scene09.pory"
	waitmovement 0
# 46 "data/expansion_1/scene09.pory"
	resetobjectsubpriority 2, MAP_BYGONE_VAULT_TREASURE_ROOM
# 47 "data/expansion_1/scene09.pory"
	resetobjectsubpriority LOCALID_PLAYER, MAP_BYGONE_VAULT_TREASURE_ROOM
# 48 "data/expansion_1/scene09.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 49 "data/expansion_1/scene09.pory"
	applymovement 2, Common_Movement_WalkUpFast
# 50 "data/expansion_1/scene09.pory"
	waitmovement 0
# 51 "data/expansion_1/scene09.pory"
	speakername CommonText_Sakura
# 52 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09_Text_1, MSGBOX_AUTOCLOSE
# 53 "data/expansion_1/scene09.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterLeft
# 54 "data/expansion_1/scene09.pory"
	waitmovement 0
# 55 "data/expansion_1/scene09.pory"
	delay 50
# 56 "data/expansion_1/scene09.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterRight
# 57 "data/expansion_1/scene09.pory"
	waitmovement 0
# 58 "data/expansion_1/scene09.pory"
	delay 50
# 59 "data/expansion_1/scene09.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterUp
# 60 "data/expansion_1/scene09.pory"
	waitmovement 0
# 61 "data/expansion_1/scene09.pory"
	delay 20
# 62 "data/expansion_1/scene09.pory"
	playbgm MUS_DP_SLOTS_WIN, FALSE
# 63 "data/expansion_1/scene09.pory"
	speakername CommonText_Sakura
# 64 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09_Text_2, MSGBOX_AUTOCLOSE
# 67 "data/expansion_1/scene09.pory"
	applymovement 2, Common_Movement_WalkRightFast
# 68 "data/expansion_1/scene09.pory"
	waitmovement 0
# 69 "data/expansion_1/scene09.pory"
	playse SE_LEDGE
# 70 "data/expansion_1/scene09.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
# 71 "data/expansion_1/scene09.pory"
	applymovement 2, Common_Movement_JumpRight2
# 72 "data/expansion_1/scene09.pory"
	waitmovement 0
# 73 "data/expansion_1/scene09.pory"
	playse SE_EXIT
# 74 "data/expansion_1/scene09.pory"
	addobject 3
# 75 "data/expansion_1/scene09.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 76 "data/expansion_1/scene09.pory"
	waitmovement 0
# 77 "data/expansion_1/scene09.pory"
	delay 20
# 78 "data/expansion_1/scene09.pory"
	applymovement 2, Common_Movement_WalkRightFast
# 79 "data/expansion_1/scene09.pory"
	waitmovement 0
# 80 "data/expansion_1/scene09.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterUp
# 81 "data/expansion_1/scene09.pory"
	waitmovement 0
# 82 "data/expansion_1/scene09.pory"
	playse SE_RG_HELP_OPEN
# 83 "data/expansion_1/scene09.pory"
	applymovement 2, Common_Movement_MusicNote
# 84 "data/expansion_1/scene09.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 85 "data/expansion_1/scene09.pory"
	applymovement 3, Common_Movement_WalkLeft
# 86 "data/expansion_1/scene09.pory"
	waitmovement 0
# 87 "data/expansion_1/scene09.pory"
	playse SE_EXIT
# 88 "data/expansion_1/scene09.pory"
	addobject 4
# 89 "data/expansion_1/scene09.pory"
	applymovement LOCALID_PLAYER, Common_Movement_LockFacingDirection
# 90 "data/expansion_1/scene09.pory"
	applymovement 3, Common_Movement_WalkUp2
# 91 "data/expansion_1/scene09.pory"
	waitmovement 0
# 92 "data/expansion_1/scene09.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp2
# 93 "data/expansion_1/scene09.pory"
	applymovement 2, Common_Movement_WalkRightFast
# 94 "data/expansion_1/scene09.pory"
	applymovement 4, Common_Movement_WalkUp2
# 95 "data/expansion_1/scene09.pory"
	waitmovement 0
# 96 "data/expansion_1/scene09.pory"
	playse SE_EXIT
# 97 "data/expansion_1/scene09.pory"
	addobject 5
# 98 "data/expansion_1/scene09.pory"
	applymovement 3, Common_Movement_WalkInPlaceFasterLeft
# 99 "data/expansion_1/scene09.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterDown
# 100 "data/expansion_1/scene09.pory"
	applymovement 4, Common_Movement_WalkUp
# 101 "data/expansion_1/scene09.pory"
	waitmovement 0
# 102 "data/expansion_1/scene09.pory"
	applymovement 4, Common_Movement_WalkRight
# 103 "data/expansion_1/scene09.pory"
	waitmovement 0
# 104 "data/expansion_1/scene09.pory"
	playse SE_RG_HELP_OPEN
# 105 "data/expansion_1/scene09.pory"
	applymovement 2, Common_Movement_MusicNote
# 106 "data/expansion_1/scene09.pory"
	applymovement 5, Common_Movement_WalkUp2
# 107 "data/expansion_1/scene09.pory"
	waitmovement 0
# 108 "data/expansion_1/scene09.pory"
	playse SE_EXIT
# 109 "data/expansion_1/scene09.pory"
	addobject 6
# 110 "data/expansion_1/scene09.pory"
	applymovement 5, Common_Movement_WalkUp2
# 111 "data/expansion_1/scene09.pory"
	waitmovement 0
# 112 "data/expansion_1/scene09.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterUp
# 113 "data/expansion_1/scene09.pory"
	applymovement 5, Common_Movement_WalkLeft
# 114 "data/expansion_1/scene09.pory"
	applymovement 6, Common_Movement_WalkUp2
# 115 "data/expansion_1/scene09.pory"
	waitmovement 0
# 116 "data/expansion_1/scene09.pory"
	playse SE_PIN
# 117 "data/expansion_1/scene09.pory"
	applymovement LOCALID_PLAYER, Common_Movement_UnlockFacingDirection
# 118 "data/expansion_1/scene09.pory"
	applymovement 2, Common_Movement_DoubleExclamationMark
# 119 "data/expansion_1/scene09.pory"
	applymovement 6, Common_Movement_WalkUp2
# 120 "data/expansion_1/scene09.pory"
	waitmovement 0
# 121 "data/expansion_1/scene09.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 122 "data/expansion_1/scene09.pory"
	applymovement 6, Common_Movement_WalkRight
# 123 "data/expansion_1/scene09.pory"
	waitmovement 0
# 124 "data/expansion_1/scene09.pory"
	speakername CommonText_Sakura
# 125 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09_Text_3, MSGBOX_AUTOCLOSE
# 126 "data/expansion_1/scene09.pory"
	applymovement 2, Common_Movement_WalkUpFast
# 127 "data/expansion_1/scene09.pory"
	waitmovement 0
# 128 "data/expansion_1/scene09.pory"
	playse SE_LEDGE
# 129 "data/expansion_1/scene09.pory"
	applymovement 5, Common_Movement_WalkUp
# 130 "data/expansion_1/scene09.pory"
	applymovement 2, Common_Movement_JumpUp2
# 131 "data/expansion_1/scene09.pory"
	applymovement 6, Common_Movement_WalkUp2
# 132 "data/expansion_1/scene09.pory"
	waitmovement 0
# 133 "data/expansion_1/scene09.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 134 "data/expansion_1/scene09.pory"
	applymovement 2, Common_Movement_WalkLeftFast2
# 135 "data/expansion_1/scene09.pory"
	waitmovement 0
# 136 "data/expansion_1/scene09.pory"
	applymovement 2, Common_Movement_WalkUpFast
# 137 "data/expansion_1/scene09.pory"
	waitmovement 0
# 138 "data/expansion_1/scene09.pory"
	applymovement 2, Common_Movement_WalkLeftFast3
# 139 "data/expansion_1/scene09.pory"
	waitmovement 0
# 140 "data/expansion_1/scene09.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterUp
# 141 "data/expansion_1/scene09.pory"
	speakername CommonText_Baron
# 142 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09_Text_4
# 143 "data/expansion_1/scene09.pory"
	speakername CommonText_Harper
# 144 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09_Text_5, MSGBOX_AUTOCLOSE
# 145 "data/expansion_1/scene09.pory"
	delay 10
# 146 "data/expansion_1/scene09.pory"
	playse SE_LEDGE
# 147 "data/expansion_1/scene09.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterRight
# 148 "data/expansion_1/scene09.pory"
	applymovement 3, Common_Movement_WalkUp
# 149 "data/expansion_1/scene09.pory"
	applymovement 2, Common_Movement_JumpUp
# 150 "data/expansion_1/scene09.pory"
	waitmovement 0
# 151 "data/expansion_1/scene09.pory"
	speakername CommonText_Baron
# 152 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09_Text_6, MSGBOX_AUTOCLOSE
# 153 "data/expansion_1/scene09.pory"
	applymovement 4, Common_Movement_WalkInPlaceFasterUp
# 154 "data/expansion_1/scene09.pory"
	waitmovement 0
# 155 "data/expansion_1/scene09.pory"
	special SpawnCameraObject
# 156 "data/expansion_1/scene09.pory"
	speakername CommonText_Sakura
# 157 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09_Text_7, MSGBOX_AUTOCLOSE
# 159 "data/expansion_1/scene09.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterUp
# 160 "data/expansion_1/scene09.pory"
	applymovement LOCALID_CAMERA, Common_Movement_WalkUp
# 161 "data/expansion_1/scene09.pory"
	waitmovement 0
# 162 "data/expansion_1/scene09.pory"
	fadeoutbgm 0
# 163 "data/expansion_1/scene09.pory"
	speakername CommonText_Sakura
# 164 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09_Text_8, MSGBOX_AUTOCLOSE
# 165 "data/expansion_1/scene09.pory"
	playse SE_THUNDER
# 166 "data/expansion_1/scene09.pory"
	applymovement 2, Common_Movement_XMark
# 167 "data/expansion_1/scene09.pory"
	delay 60
# 168 "data/expansion_1/scene09.pory"
	speakername CommonText_Sakura
# 169 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09_Text_9
# 172 "data/expansion_1/scene09.pory"
	speakername CommonText_Jakson
# 173 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09_Text_10, MSGBOX_AUTOCLOSE
# 174 "data/expansion_1/scene09.pory"
	applymovement LOCALID_CAMERA, Common_Movement_WalkDown
# 175 "data/expansion_1/scene09.pory"
	waitmovement 0
# 176 "data/expansion_1/scene09.pory"
	speakername CommonText_Baron
# 177 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09_Text_11, MSGBOX_AUTOCLOSE
# 179 "data/expansion_1/scene09.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterDown
# 180 "data/expansion_1/scene09.pory"
	waitmovement 0
# 181 "data/expansion_1/scene09.pory"
	speakername CommonText_Redd
# 182 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09_Text_12
# 183 "data/expansion_1/scene09.pory"
	speakername CommonText_Harper
# 184 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09_Text_13, MSGBOX_AUTOCLOSE
# 193 "data/expansion_1/scene09.pory"
	playbgm MUS_DP_POKE_RADAR, FALSE
# 194 "data/expansion_1/scene09.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterLeft
# 195 "data/expansion_1/scene09.pory"
	applymovement 5, Common_Movement_WalkUp
# 196 "data/expansion_1/scene09.pory"
	applymovement 4, Common_Movement_WalkUp
# 197 "data/expansion_1/scene09.pory"
	waitmovement 0
# 198 "data/expansion_1/scene09.pory"
	applymovement 5, Common_Movement_WalkInPlaceFasterRight
# 199 "data/expansion_1/scene09.pory"
	applymovement 3, Common_Movement_WalkUp
# 200 "data/expansion_1/scene09.pory"
	waitmovement 0
# 201 "data/expansion_1/scene09.pory"
	delay 80
# 202 "data/expansion_1/scene09.pory"
	playse SE_SWITCH
# 203 "data/expansion_1/scene09.pory"
	setmetatile 8, 5, 0x2A7, TRUE
# 204 "data/expansion_1/scene09.pory"
	special DrawWholeMapView
# 205 "data/expansion_1/scene09.pory"
	delay 80
# 206 "data/expansion_1/scene09.pory"
	applymovement LOCALID_PLAYER, Common_Movement_Thinking
# 207 "data/expansion_1/scene09.pory"
	delay 60
# 208 "data/expansion_1/scene09.pory"
	applymovement 3, Common_Movement_Thinking
# 209 "data/expansion_1/scene09.pory"
	applymovement 5, Common_Movement_Thinking
# 210 "data/expansion_1/scene09.pory"
	applymovement 6, Common_Movement_Thinking
# 211 "data/expansion_1/scene09.pory"
	applymovement 4, Common_Movement_Thinking
# 212 "data/expansion_1/scene09.pory"
	delay 20
# 213 "data/expansion_1/scene09.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterDown
# 214 "data/expansion_1/scene09.pory"
	waitmovement 0
# 215 "data/expansion_1/scene09.pory"
	delay 30
# 216 "data/expansion_1/scene09.pory"
	playse SE_LEDGE
# 217 "data/expansion_1/scene09.pory"
	applymovement 2, Common_Movement_JumpDown
# 218 "data/expansion_1/scene09.pory"
	waitmovement 0
# 219 "data/expansion_1/scene09.pory"
	speakername CommonText_Sakura
# 220 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09_Text_14
# 222 "data/expansion_1/scene09.pory"
	speakername CommonText_Redd
# 223 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09_Text_15, MSGBOX_AUTOCLOSE
# 224 "data/expansion_1/scene09.pory"
	playse SE_PIN
# 225 "data/expansion_1/scene09.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 226 "data/expansion_1/scene09.pory"
	delay 20
# 227 "data/expansion_1/scene09.pory"
	speakername CommonText_Baron
# 228 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09_Text_16
# 230 "data/expansion_1/scene09.pory"
	speakername CommonText_Jakson
# 231 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09_Text_17, MSGBOX_AUTOCLOSE
# 233 "data/expansion_1/scene09.pory"
	applymovement 4, Common_Movement_ShakeHorizontal
# 234 "data/expansion_1/scene09.pory"
	waitmovement 0
# 235 "data/expansion_1/scene09.pory"
	speakername CommonText_Harper
# 236 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09_Text_18, MSGBOX_AUTOCLOSE
# 237 "data/expansion_1/scene09.pory"
	delay 20
# 238 "data/expansion_1/scene09.pory"
	setvar VAR_0x8004, 2
# 239 "data/expansion_1/scene09.pory"
	setvar VAR_0x8005, 6
# 240 "data/expansion_1/scene09.pory"
	setvar VAR_0x8006, 30
# 241 "data/expansion_1/scene09.pory"
	setvar VAR_0x8007, 3
# 242 "data/expansion_1/scene09.pory"
	playse SE_PIN
# 243 "data/expansion_1/scene09.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 244 "data/expansion_1/scene09.pory"
	applymovement 5, Common_Movement_ExclamationMark
# 245 "data/expansion_1/scene09.pory"
	applymovement 6, Common_Movement_ExclamationMark
# 246 "data/expansion_1/scene09.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 247 "data/expansion_1/scene09.pory"
	special ShakeCamera
# 248 "data/expansion_1/scene09.pory"
	waitstate
# 249 "data/expansion_1/scene09.pory"
	delay 40
# 250 "data/expansion_1/scene09.pory"
	speakername CommonText_Redd
# 251 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09_Text_19, MSGBOX_AUTOCLOSE
# 252 "data/expansion_1/scene09.pory"
	applymovement 4, Common_Movement_ShakeHorizontal
# 253 "data/expansion_1/scene09.pory"
	waitmovement 0
# 254 "data/expansion_1/scene09.pory"
	speakername CommonText_Harper
# 255 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09_Text_20, MSGBOX_AUTOCLOSE
# 256 "data/expansion_1/scene09.pory"
	applymovement 5, Common_Movement_WalkInPlaceFasterUp
# 257 "data/expansion_1/scene09.pory"
	waitmovement 0
# 258 "data/expansion_1/scene09.pory"
	speakername CommonText_Jakson
# 259 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09_Text_21, MSGBOX_AUTOCLOSE
# 260 "data/expansion_1/scene09.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterUp
# 261 "data/expansion_1/scene09.pory"
	waitmovement 0
# 262 "data/expansion_1/scene09.pory"
	delay 50
# 263 "data/expansion_1/scene09.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterRight
# 264 "data/expansion_1/scene09.pory"
	waitmovement 0
# 265 "data/expansion_1/scene09.pory"
	delay 50
# 266 "data/expansion_1/scene09.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterLeft
# 267 "data/expansion_1/scene09.pory"
	waitmovement 0
# 268 "data/expansion_1/scene09.pory"
	delay 50
# 269 "data/expansion_1/scene09.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterDown
# 270 "data/expansion_1/scene09.pory"
	waitmovement 0
# 271 "data/expansion_1/scene09.pory"
	speakername CommonText_Sakura
# 272 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09_Text_22
# 276 "data/expansion_1/scene09.pory"
	speakername CommonText_Harper
# 277 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09_Text_23
# 280 "data/expansion_1/scene09.pory"
	speakername CommonText_Baron
# 281 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09_Text_24, MSGBOX_AUTOCLOSE
# 282 "data/expansion_1/scene09.pory"
	setobjectxyperm 7, 7, 0
# 283 "data/expansion_1/scene09.pory"
	setobjectxyperm 8, 9, 0
# 284 "data/expansion_1/scene09.pory"
	setobjectxyperm 9, 7, 0
# 285 "data/expansion_1/scene09.pory"
	setobjectxyperm 10, 8, 0
# 286 "data/expansion_1/scene09.pory"
	addobject 7
# 287 "data/expansion_1/scene09.pory"
	addobject 8
# 288 "data/expansion_1/scene09.pory"
	addobject 9
# 289 "data/expansion_1/scene09.pory"
	addobject 10
# 290 "data/expansion_1/scene09.pory"
	playse SE_FALL
# 291 "data/expansion_1/scene09.pory"
	applymovement 8, Common_Movement_SlideDown6
# 292 "data/expansion_1/scene09.pory"
	applymovement 9, Common_Movement_SlideDown6
# 293 "data/expansion_1/scene09.pory"
	applymovement 10, Common_Movement_SlideDown7
# 294 "data/expansion_1/scene09.pory"
	waitmovement 0
# 295 "data/expansion_1/scene09.pory"
	applymovement 7, Common_Movement_SlideDown3
# 296 "data/expansion_1/scene09.pory"
	waitmovement 0
# 297 "data/expansion_1/scene09.pory"
	playse SE_BIKE_HOP
# 298 "data/expansion_1/scene09.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterDown
# 299 "data/expansion_1/scene09.pory"
	applymovement 5, Common_Movement_WalkInPlaceFasterDown
# 300 "data/expansion_1/scene09.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 301 "data/expansion_1/scene09.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterLeft
# 302 "data/expansion_1/scene09.pory"
	applymovement 7, Common_Movement_JumpInPlaceDown
# 303 "data/expansion_1/scene09.pory"
	waitmovement 0
# 304 "data/expansion_1/scene09.pory"
	playse SE_PIN
# 305 "data/expansion_1/scene09.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 306 "data/expansion_1/scene09.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 307 "data/expansion_1/scene09.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 308 "data/expansion_1/scene09.pory"
	applymovement 4, Common_Movement_ExclamationMark
# 309 "data/expansion_1/scene09.pory"
	applymovement 5, Common_Movement_ExclamationMark
# 310 "data/expansion_1/scene09.pory"
	applymovement 6, Common_Movement_ExclamationMark
# 311 "data/expansion_1/scene09.pory"
	delay 60
# 313 "data/expansion_1/scene09.pory"
	setstartingstatus STARTING_STATUS_SHARP_STEEL_PLAYER
# 314 "data/expansion_1/scene09.pory"
	setstartingstatus STARTING_STATUS_RAINBOW_OPPONENT
# 315 "data/expansion_1/scene09.pory"
	setflag FLAG_NO_CATCHING
# 316 "data/expansion_1/scene09.pory"
	setflag FLAG_NO_RUNNING
# 317 "data/expansion_1/scene09.pory"
	setflag FLAG_SMART_WILD_AI
# 318 "data/expansion_1/scene09.pory"
	setflag FLAG_SYS_SET_BATTLE_BGM
# 319 "data/expansion_1/scene09.pory"
	setvar VAR_BATTLE_BGM, MUS_VS_MEW
# 320 "data/expansion_1/scene09.pory"
	setflag FLAG_SEMI_TEMP_1
# 321 "data/expansion_1/scene09.pory"
	setwilddoubleflag
# 322 "data/expansion_1/scene09.pory"
	createmon 1, 0, SPECIES_MISSINGNO_YELLOW_BOSS, 80, ITEM_NONE, BALL_POKE, NATURE_HARDY, 0, MON_GENDER_RANDOM, 72, 72, 72, 72, 72, 72, 0, 0, 0, 0, 0, 0, MOVE_SKY_ATTACK, MOVE_SPARKLING_ARIA, MOVE_TRI_ATTACK, MOVE_SPIKY_SHIELD
# 323 "data/expansion_1/scene09.pory"
	dowildbattle
# 324 "data/expansion_1/scene09.pory"
	clearflag FLAG_NO_CATCHING
# 325 "data/expansion_1/scene09.pory"
	clearflag FLAG_NO_RUNNING
# 326 "data/expansion_1/scene09.pory"
	clearflag FLAG_SMART_WILD_AI
# 327 "data/expansion_1/scene09.pory"
	clearflag FLAG_SYS_SET_BATTLE_BGM
# 328 "data/expansion_1/scene09.pory"
	clearflag FLAG_SEMI_TEMP_1
# 330 "data/expansion_1/scene09.pory"
	applymovement 6, Common_Movement_Thinking
# 331 "data/expansion_1/scene09.pory"
	delay 40
# 332 "data/expansion_1/scene09.pory"
	speakername CommonText_Redd
# 333 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09_Text_25, MSGBOX_AUTOCLOSE
# 334 "data/expansion_1/scene09.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 335 "data/expansion_1/scene09.pory"
	waitmovement 0
# 336 "data/expansion_1/scene09.pory"
	speakername CommonText_Harper
# 337 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09_Text_26, MSGBOX_AUTOCLOSE
# 338 "data/expansion_1/scene09.pory"
	applymovement 5, Common_Movement_SweatDrop
# 339 "data/expansion_1/scene09.pory"
	playse SE_M_METRONOME
# 340 "data/expansion_1/scene09.pory"
	delay 40
# 341 "data/expansion_1/scene09.pory"
	speakername CommonText_Jakson
# 342 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09_Text_27, MSGBOX_AUTOCLOSE
# 343 "data/expansion_1/scene09.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterDown
# 344 "data/expansion_1/scene09.pory"
	waitmovement 0
# 345 "data/expansion_1/scene09.pory"
	speakername CommonText_Baron
# 346 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09_Text_28, MSGBOX_AUTOCLOSE
# 348 "data/expansion_1/scene09.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 349 "data/expansion_1/scene09.pory"
	waitmovement 0
# 350 "data/expansion_1/scene09.pory"
	speakername CommonText_Harper
# 351 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09_Text_29, MSGBOX_AUTOCLOSE
# 354 "data/expansion_1/scene09.pory"
	playse SE_LEDGE
# 355 "data/expansion_1/scene09.pory"
	applymovement 5, Common_Movement_WalkInPlaceFasterRight
# 356 "data/expansion_1/scene09.pory"
	applymovement 2, Common_Movement_JumpDown
# 357 "data/expansion_1/scene09.pory"
	waitmovement 0
# 358 "data/expansion_1/scene09.pory"
	speakername CommonText_Jakson
# 359 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09_Text_30
# 361 "data/expansion_1/scene09.pory"
	speakername CommonText_Baron
# 362 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09_Text_31, MSGBOX_AUTOCLOSE
	return

Expansion1_Rival_Scene09_2:
# 15 "data/expansion_1/scene09.pory"
	lock
# 16 "data/expansion_1/scene09.pory"
	setflag FLAG_WILD_OPPONENT
# 17 "data/expansion_1/scene09.pory"
	setflag FLAG_SYS_SET_BATTLE_BGM
# 18 "data/expansion_1/scene09.pory"
	setvar VAR_BATTLE_BGM, MUS_XD_VS_CIPHER_PEON
# 19 "data/expansion_1/scene09.pory"
	playmoncry SPECIES_LUCARIO, CRY_MODE_ENCOUNTER
# 20 "data/expansion_1/scene09.pory"
	waitmoncry
# 21 "data/expansion_1/scene09.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 22 "data/expansion_1/scene09.pory"
	msgbox Exp1_WildPokemonTrainerText_Intro, MSGBOX_DEFAULT
# 23 "data/expansion_1/scene09.pory"
	trainerbattle_no_intro TRAINER_WILD_POKEMON_BV_2, Exp1_WildPokemonTrainerText_Defeat
# 24 "data/expansion_1/scene09.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 25 "data/expansion_1/scene09.pory"
	clearflag FLAG_WILD_OPPONENT
	goto Expansion1_Rival_Scene09_1


Expansion1_Rival_Scene09_Text_0:
# 39 "data/expansion_1/scene09.pory"
	.string "Ah…?!$"

Expansion1_Rival_Scene09_Text_1:
# 52 "data/expansion_1/scene09.pory"
	.string "Is that… {PAUSE 100}Is THAT what I think it is?!$"

Expansion1_Rival_Scene09_Text_2:
# 64 "data/expansion_1/scene09.pory"
	.string "TREASURE!!!\p"
	.string "Oh Jakson, you know just what makes\n"
	.string "a girl's heart swoon{EMOJI_TILDE}{UNK_SPACER}$"

Expansion1_Rival_Scene09_Text_3:
# 125 "data/expansion_1/scene09.pory"
	.string "Give momma a crown befitting a queen{EMOJI_TILDE}{UNK_SPACER}$"

Expansion1_Rival_Scene09_Text_4:
# 142 "data/expansion_1/scene09.pory"
	.string "A real bona fide treasure room?$"

Expansion1_Rival_Scene09_Text_5:
# 144 "data/expansion_1/scene09.pory"
	.string "Digital treasure…$"

Expansion1_Rival_Scene09_Text_6:
# 152 "data/expansion_1/scene09.pory"
	.string "Even then… {PAUSE 100}Doesn't it look… {PAUSE 100}a bit…?$"

Expansion1_Rival_Scene09_Text_7:
# 157 "data/expansion_1/scene09.pory"
	.string "… {PAUSE 30}… {PAUSE 30}…{PAUSE 30}\n"
	.string "… {PAUSE 30}… {PAUSE 30}…$"

Expansion1_Rival_Scene09_Text_8:
# 164 "data/expansion_1/scene09.pory"
	.string "…{PAUSE 60}it's all… {PAUSE 100}fake…?!$"

Expansion1_Rival_Scene09_Text_9:
# 169 "data/expansion_1/scene09.pory"
	.string "How dare they! {PAUSE 60}They model all of this\n"
	.string "loot but won't allow me to splash around\l"
	.string "in it!$"

Expansion1_Rival_Scene09_Text_10:
# 173 "data/expansion_1/scene09.pory"
	.string "Ah… {PAUSE 100}well that's… {PAUSE 100}unfortunate?$"

Expansion1_Rival_Scene09_Text_11:
# 177 "data/expansion_1/scene09.pory"
	.string "I thought it looked a bit off…{PAUSE 100}\n"
	.string "even for this strange VR world…$"

Expansion1_Rival_Scene09_Text_12:
# 182 "data/expansion_1/scene09.pory"
	.string "Any luck on your end, {PLAYER}?$"

Expansion1_Rival_Scene09_Text_13:
# 184 "data/expansion_1/scene09.pory"
	.string "Yeah, give the chest a try at least.\n"
	.string "It's the one thing that's front and\l"
	.string "center.\p"
	.string "If the mod designers are remotely\n"
	.string "worth their salt, at least…\l"
	.string "It's Game Design 101 to draw attention\l"
	.string "to what actually matters.\p"
	.string "Look, it's even got the yellow paint on\n"
	.string "it.$"

Expansion1_Rival_Scene09_Text_14:
# 220 "data/expansion_1/scene09.pory"
	.string "Ain't that a picture that's worth a\n"
	.string "thousand words?$"

Expansion1_Rival_Scene09_Text_15:
# 223 "data/expansion_1/scene09.pory"
	.string "Damn.$"

Expansion1_Rival_Scene09_Text_16:
# 228 "data/expansion_1/scene09.pory"
	.string "Ah! Was there anything inside?{PAUSE 60}\n"
	.string "I can't see from back here…$"

Expansion1_Rival_Scene09_Text_17:
# 231 "data/expansion_1/scene09.pory"
	.string "Really? The chest at the end of the\n"
	.string "big dungeon had nothing in it?$"

Expansion1_Rival_Scene09_Text_18:
# 236 "data/expansion_1/scene09.pory"
	.string "This… {PAUSE 100}stupid mod!$"

Expansion1_Rival_Scene09_Text_19:
# 251 "data/expansion_1/scene09.pory"
	.string "Woah, what was that?$"

Expansion1_Rival_Scene09_Text_20:
# 255 "data/expansion_1/scene09.pory"
	.string "This… {PAUSE 100}STUPID MOD!$"

Expansion1_Rival_Scene09_Text_21:
# 259 "data/expansion_1/scene09.pory"
	.string "You good down there, Sakura?$"

Expansion1_Rival_Scene09_Text_22:
# 272 "data/expansion_1/scene09.pory"
	.string "All seems good…\p"
	.string "No changes to report.\p"
	.string "I can confirm the treasure is just\n"
	.string "as useless as it was a minute ago.$"

Expansion1_Rival_Scene09_Text_23:
# 277 "data/expansion_1/scene09.pory"
	.string "Is the mod just unfinished?! They\n"
	.string "didn't even give us “loot”! It's a\l"
	.string "treasure room. That's the whole point!$"

Expansion1_Rival_Scene09_Text_24:
# 281 "data/expansion_1/scene09.pory"
	.string "Could it have been just-$"

Expansion1_Rival_Scene09_Text_25:
# 333 "data/expansion_1/scene09.pory"
	.string "Well, uh… {PAUSE 100}huh.$"

Expansion1_Rival_Scene09_Text_26:
# 337 "data/expansion_1/scene09.pory"
	.string "{EMOJI_BIGWHEEL}Sigh{EMOJI_BIGWHEEL}…$"

Expansion1_Rival_Scene09_Text_27:
# 342 "data/expansion_1/scene09.pory"
	.string "Yeah, something's not right here.$"

Expansion1_Rival_Scene09_Text_28:
# 346 "data/expansion_1/scene09.pory"
	.string "Just when we thought we were on the\n"
	.string "right track…$"

Expansion1_Rival_Scene09_Text_29:
# 351 "data/expansion_1/scene09.pory"
	.string "It's almost like… {PAUSE 100}something was\n"
	.string "supposed to spawn there, but that\l"
	.string "wasn't it.$"

Expansion1_Rival_Scene09_Text_30:
# 359 "data/expansion_1/scene09.pory"
	.string "Alright, gang, we should get out of here\n"
	.string "and figure out what we need to do next.$"

Expansion1_Rival_Scene09_Text_31:
# 362 "data/expansion_1/scene09.pory"
	.string "That seems smart. The way back\n"
	.string "should be the same as the way in.$"
