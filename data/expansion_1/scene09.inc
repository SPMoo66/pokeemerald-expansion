Expansion1_Rival_Scene09::
# 19 "data/expansion_1/scene09.pory"
	setvar VAR_TEMP_3, 1
# 20 "data/expansion_1/scene09.pory"
	checktrainerflag TRAINER_WILD_POKEMON_BV_2
	goto_if 0, Expansion1_Rival_Scene09_2
Expansion1_Rival_Scene09_1:
# 33 "data/expansion_1/scene09.pory"
	removeobject 1
# 34 "data/expansion_1/scene09.pory"
	delay 20
# 35 "data/expansion_1/scene09.pory"
	addobject 2
# 36 "data/expansion_1/scene09.pory"
	playse SE_EXIT
# 37 "data/expansion_1/scene09.pory"
	waitse
# 38 "data/expansion_1/scene09.pory"
	delay 20
# 39 "data/expansion_1/scene09.pory"
	playse SE_PIN
# 40 "data/expansion_1/scene09.pory"
	applymovement 2, Common_Movement_DoubleExclamationMark
# 41 "data/expansion_1/scene09.pory"
	delay 60
# 42 "data/expansion_1/scene09.pory"
	setobjectsubpriority 2, MAP_BYGONE_VAULT_TREASURE_ROOM, 0
# 43 "data/expansion_1/scene09.pory"
	setobjectsubpriority LOCALID_PLAYER, MAP_BYGONE_VAULT_TREASURE_ROOM, 1
# 44 "data/expansion_1/scene09.pory"
	speakername CommonText_Sakura
# 45 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09_Text_0, MSGBOX_AUTOCLOSE
# 46 "data/expansion_1/scene09.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 47 "data/expansion_1/scene09.pory"
	applymovement 2, Common_Movement_WalkUpFast
# 48 "data/expansion_1/scene09.pory"
	waitmovement 0
# 49 "data/expansion_1/scene09.pory"
	playse SE_LEDGE
# 50 "data/expansion_1/scene09.pory"
	applymovement 2, Common_Movement_JumpUp2
# 51 "data/expansion_1/scene09.pory"
	waitmovement 0
# 52 "data/expansion_1/scene09.pory"
	resetobjectsubpriority 2, MAP_BYGONE_VAULT_TREASURE_ROOM
# 53 "data/expansion_1/scene09.pory"
	resetobjectsubpriority LOCALID_PLAYER, MAP_BYGONE_VAULT_TREASURE_ROOM
# 54 "data/expansion_1/scene09.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 55 "data/expansion_1/scene09.pory"
	applymovement 2, Common_Movement_WalkUpFast
# 56 "data/expansion_1/scene09.pory"
	waitmovement 0
# 57 "data/expansion_1/scene09.pory"
	speakername CommonText_Sakura
# 58 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09_Text_1, MSGBOX_AUTOCLOSE
# 59 "data/expansion_1/scene09.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterLeft
# 60 "data/expansion_1/scene09.pory"
	waitmovement 0
# 61 "data/expansion_1/scene09.pory"
	delay 50
# 62 "data/expansion_1/scene09.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterRight
# 63 "data/expansion_1/scene09.pory"
	waitmovement 0
# 64 "data/expansion_1/scene09.pory"
	delay 50
# 65 "data/expansion_1/scene09.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterUp
# 66 "data/expansion_1/scene09.pory"
	waitmovement 0
# 67 "data/expansion_1/scene09.pory"
	delay 20
# 68 "data/expansion_1/scene09.pory"
	playbgm MUS_DP_SLOTS_WIN, FALSE
# 69 "data/expansion_1/scene09.pory"
	speakername CommonText_Sakura
# 70 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09_Text_2, MSGBOX_AUTOCLOSE
# 73 "data/expansion_1/scene09.pory"
	applymovement 2, Common_Movement_WalkRightFast
# 74 "data/expansion_1/scene09.pory"
	waitmovement 0
# 75 "data/expansion_1/scene09.pory"
	playse SE_LEDGE
# 76 "data/expansion_1/scene09.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
# 77 "data/expansion_1/scene09.pory"
	applymovement 2, Common_Movement_JumpRight2
# 78 "data/expansion_1/scene09.pory"
	waitmovement 0
# 79 "data/expansion_1/scene09.pory"
	playse SE_EXIT
# 80 "data/expansion_1/scene09.pory"
	addobject 3
# 81 "data/expansion_1/scene09.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 82 "data/expansion_1/scene09.pory"
	waitmovement 0
# 83 "data/expansion_1/scene09.pory"
	delay 20
# 84 "data/expansion_1/scene09.pory"
	applymovement 2, Common_Movement_WalkRightFast
# 85 "data/expansion_1/scene09.pory"
	waitmovement 0
# 86 "data/expansion_1/scene09.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterUp
# 87 "data/expansion_1/scene09.pory"
	waitmovement 0
# 88 "data/expansion_1/scene09.pory"
	playse SE_RG_HELP_OPEN
# 89 "data/expansion_1/scene09.pory"
	applymovement 2, Common_Movement_MusicNote
# 90 "data/expansion_1/scene09.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 91 "data/expansion_1/scene09.pory"
	applymovement 3, Common_Movement_WalkLeft
# 92 "data/expansion_1/scene09.pory"
	waitmovement 0
# 93 "data/expansion_1/scene09.pory"
	playse SE_EXIT
# 94 "data/expansion_1/scene09.pory"
	addobject 4
# 95 "data/expansion_1/scene09.pory"
	applymovement LOCALID_PLAYER, Common_Movement_LockFacingDirection
# 96 "data/expansion_1/scene09.pory"
	applymovement 3, Common_Movement_WalkUp2
# 97 "data/expansion_1/scene09.pory"
	waitmovement 0
# 98 "data/expansion_1/scene09.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp2
# 99 "data/expansion_1/scene09.pory"
	applymovement 2, Common_Movement_WalkRightFast
# 100 "data/expansion_1/scene09.pory"
	applymovement 4, Common_Movement_WalkUp2
# 101 "data/expansion_1/scene09.pory"
	waitmovement 0
# 102 "data/expansion_1/scene09.pory"
	playse SE_EXIT
# 103 "data/expansion_1/scene09.pory"
	addobject 5
# 104 "data/expansion_1/scene09.pory"
	applymovement 3, Common_Movement_WalkInPlaceFasterLeft
# 105 "data/expansion_1/scene09.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterDown
# 106 "data/expansion_1/scene09.pory"
	applymovement 4, Common_Movement_WalkUp
# 107 "data/expansion_1/scene09.pory"
	waitmovement 0
# 108 "data/expansion_1/scene09.pory"
	applymovement 4, Common_Movement_WalkRight
# 109 "data/expansion_1/scene09.pory"
	waitmovement 0
# 110 "data/expansion_1/scene09.pory"
	playse SE_RG_HELP_OPEN
# 111 "data/expansion_1/scene09.pory"
	applymovement 2, Common_Movement_MusicNote
# 112 "data/expansion_1/scene09.pory"
	applymovement 5, Common_Movement_WalkUp2
# 113 "data/expansion_1/scene09.pory"
	waitmovement 0
# 114 "data/expansion_1/scene09.pory"
	playse SE_EXIT
# 115 "data/expansion_1/scene09.pory"
	addobject 6
# 116 "data/expansion_1/scene09.pory"
	applymovement 5, Common_Movement_WalkUp2
# 117 "data/expansion_1/scene09.pory"
	waitmovement 0
# 118 "data/expansion_1/scene09.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterUp
# 119 "data/expansion_1/scene09.pory"
	applymovement 5, Common_Movement_WalkLeft
# 120 "data/expansion_1/scene09.pory"
	applymovement 6, Common_Movement_WalkUp2
# 121 "data/expansion_1/scene09.pory"
	waitmovement 0
# 122 "data/expansion_1/scene09.pory"
	playse SE_PIN
# 123 "data/expansion_1/scene09.pory"
	applymovement LOCALID_PLAYER, Common_Movement_UnlockFacingDirection
# 124 "data/expansion_1/scene09.pory"
	applymovement 2, Common_Movement_DoubleExclamationMark
# 125 "data/expansion_1/scene09.pory"
	applymovement 6, Common_Movement_WalkUp2
# 126 "data/expansion_1/scene09.pory"
	waitmovement 0
# 127 "data/expansion_1/scene09.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 128 "data/expansion_1/scene09.pory"
	applymovement 6, Common_Movement_WalkRight
# 129 "data/expansion_1/scene09.pory"
	waitmovement 0
# 130 "data/expansion_1/scene09.pory"
	speakername CommonText_Sakura
# 131 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09_Text_3, MSGBOX_AUTOCLOSE
# 132 "data/expansion_1/scene09.pory"
	applymovement 2, Common_Movement_WalkUpFast
# 133 "data/expansion_1/scene09.pory"
	waitmovement 0
# 134 "data/expansion_1/scene09.pory"
	playse SE_LEDGE
# 135 "data/expansion_1/scene09.pory"
	applymovement 5, Common_Movement_WalkUp
# 136 "data/expansion_1/scene09.pory"
	applymovement 2, Common_Movement_JumpUp2
# 137 "data/expansion_1/scene09.pory"
	applymovement 6, Common_Movement_WalkUp2
# 138 "data/expansion_1/scene09.pory"
	waitmovement 0
# 139 "data/expansion_1/scene09.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 140 "data/expansion_1/scene09.pory"
	applymovement 2, Common_Movement_WalkLeftFast2
# 141 "data/expansion_1/scene09.pory"
	waitmovement 0
# 142 "data/expansion_1/scene09.pory"
	applymovement 2, Common_Movement_WalkUpFast
# 143 "data/expansion_1/scene09.pory"
	waitmovement 0
# 144 "data/expansion_1/scene09.pory"
	applymovement 2, Common_Movement_WalkLeftFast3
# 145 "data/expansion_1/scene09.pory"
	waitmovement 0
# 146 "data/expansion_1/scene09.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterUp
# 147 "data/expansion_1/scene09.pory"
	call GetBaronsName
# 148 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09_Text_4
# 149 "data/expansion_1/scene09.pory"
	speakername CommonText_Harper
# 150 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09_Text_5, MSGBOX_AUTOCLOSE
# 151 "data/expansion_1/scene09.pory"
	delay 10
# 152 "data/expansion_1/scene09.pory"
	playse SE_LEDGE
# 153 "data/expansion_1/scene09.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterRight
# 154 "data/expansion_1/scene09.pory"
	applymovement 3, Common_Movement_WalkUp
# 155 "data/expansion_1/scene09.pory"
	applymovement 2, Common_Movement_JumpUp
# 156 "data/expansion_1/scene09.pory"
	waitmovement 0
# 157 "data/expansion_1/scene09.pory"
	call GetBaronsName
# 158 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09_Text_6, MSGBOX_AUTOCLOSE
# 159 "data/expansion_1/scene09.pory"
	applymovement 4, Common_Movement_WalkInPlaceFasterUp
# 160 "data/expansion_1/scene09.pory"
	waitmovement 0
# 161 "data/expansion_1/scene09.pory"
	special SpawnCameraObject
# 162 "data/expansion_1/scene09.pory"
	speakername CommonText_Sakura
# 163 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09_Text_7, MSGBOX_AUTOCLOSE
# 165 "data/expansion_1/scene09.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterUp
# 166 "data/expansion_1/scene09.pory"
	applymovement LOCALID_CAMERA, Common_Movement_WalkUp
# 167 "data/expansion_1/scene09.pory"
	waitmovement 0
# 168 "data/expansion_1/scene09.pory"
	fadeoutbgm 0
# 169 "data/expansion_1/scene09.pory"
	speakername CommonText_Sakura
# 170 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09_Text_8, MSGBOX_AUTOCLOSE
# 171 "data/expansion_1/scene09.pory"
	playse SE_THUNDER
# 172 "data/expansion_1/scene09.pory"
	applymovement 2, Common_Movement_XMark
# 173 "data/expansion_1/scene09.pory"
	delay 60
# 174 "data/expansion_1/scene09.pory"
	speakername CommonText_Sakura
# 175 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09_Text_9
# 178 "data/expansion_1/scene09.pory"
	speakername CommonText_Jakson
# 179 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09_Text_10, MSGBOX_AUTOCLOSE
# 180 "data/expansion_1/scene09.pory"
	applymovement LOCALID_CAMERA, Common_Movement_WalkDown
# 181 "data/expansion_1/scene09.pory"
	waitmovement 0
# 182 "data/expansion_1/scene09.pory"
	call GetBaronsName
# 183 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09_Text_11, MSGBOX_AUTOCLOSE
# 185 "data/expansion_1/scene09.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterDown
# 186 "data/expansion_1/scene09.pory"
	waitmovement 0
# 187 "data/expansion_1/scene09.pory"
	speakername CommonText_Redd
# 188 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09_Text_12
# 189 "data/expansion_1/scene09.pory"
	speakername CommonText_Harper
# 190 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09_Text_13, MSGBOX_AUTOCLOSE
# 199 "data/expansion_1/scene09.pory"
	playbgm MUS_DP_POKE_RADAR, FALSE
# 200 "data/expansion_1/scene09.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterLeft
# 201 "data/expansion_1/scene09.pory"
	applymovement 5, Common_Movement_WalkUp
# 202 "data/expansion_1/scene09.pory"
	applymovement 4, Common_Movement_WalkUp
# 203 "data/expansion_1/scene09.pory"
	waitmovement 0
# 204 "data/expansion_1/scene09.pory"
	applymovement 5, Common_Movement_WalkInPlaceFasterRight
# 205 "data/expansion_1/scene09.pory"
	applymovement 3, Common_Movement_WalkUp
# 206 "data/expansion_1/scene09.pory"
	waitmovement 0
# 207 "data/expansion_1/scene09.pory"
	delay 80
# 208 "data/expansion_1/scene09.pory"
	playse SE_SWITCH
# 209 "data/expansion_1/scene09.pory"
	setmetatile 8, 5, 0x2A7, TRUE
# 210 "data/expansion_1/scene09.pory"
	special DrawWholeMapView
# 211 "data/expansion_1/scene09.pory"
	delay 80
# 212 "data/expansion_1/scene09.pory"
	applymovement LOCALID_PLAYER, Common_Movement_Thinking
# 213 "data/expansion_1/scene09.pory"
	delay 60
# 214 "data/expansion_1/scene09.pory"
	applymovement 3, Common_Movement_Thinking
# 215 "data/expansion_1/scene09.pory"
	applymovement 5, Common_Movement_Thinking
# 216 "data/expansion_1/scene09.pory"
	applymovement 6, Common_Movement_Thinking
# 217 "data/expansion_1/scene09.pory"
	applymovement 4, Common_Movement_Thinking
# 218 "data/expansion_1/scene09.pory"
	delay 20
# 219 "data/expansion_1/scene09.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterDown
# 220 "data/expansion_1/scene09.pory"
	waitmovement 0
# 221 "data/expansion_1/scene09.pory"
	delay 30
# 222 "data/expansion_1/scene09.pory"
	playse SE_LEDGE
# 223 "data/expansion_1/scene09.pory"
	applymovement 2, Common_Movement_JumpDown
# 224 "data/expansion_1/scene09.pory"
	waitmovement 0
# 225 "data/expansion_1/scene09.pory"
	speakername CommonText_Sakura
# 226 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09_Text_14
# 228 "data/expansion_1/scene09.pory"
	speakername CommonText_Redd
# 229 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09_Text_15, MSGBOX_AUTOCLOSE
# 230 "data/expansion_1/scene09.pory"
	playse SE_PIN
# 231 "data/expansion_1/scene09.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 232 "data/expansion_1/scene09.pory"
	delay 20
# 233 "data/expansion_1/scene09.pory"
	call GetBaronsName
# 234 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09_Text_16
# 236 "data/expansion_1/scene09.pory"
	speakername CommonText_Jakson
# 237 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09_Text_17, MSGBOX_AUTOCLOSE
# 239 "data/expansion_1/scene09.pory"
	applymovement 4, Common_Movement_ShakeHorizontal
# 240 "data/expansion_1/scene09.pory"
	waitmovement 0
# 241 "data/expansion_1/scene09.pory"
	speakername CommonText_Harper
# 242 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09_Text_18, MSGBOX_AUTOCLOSE
# 243 "data/expansion_1/scene09.pory"
	delay 20
# 244 "data/expansion_1/scene09.pory"
	setvar VAR_0x8004, 2
# 245 "data/expansion_1/scene09.pory"
	setvar VAR_0x8005, 6
# 246 "data/expansion_1/scene09.pory"
	setvar VAR_0x8006, 30
# 247 "data/expansion_1/scene09.pory"
	setvar VAR_0x8007, 3
# 248 "data/expansion_1/scene09.pory"
	playse SE_PIN
# 249 "data/expansion_1/scene09.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 250 "data/expansion_1/scene09.pory"
	applymovement 5, Common_Movement_ExclamationMark
# 251 "data/expansion_1/scene09.pory"
	applymovement 6, Common_Movement_ExclamationMark
# 252 "data/expansion_1/scene09.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 253 "data/expansion_1/scene09.pory"
	special ShakeCamera
# 254 "data/expansion_1/scene09.pory"
	waitstate
# 255 "data/expansion_1/scene09.pory"
	delay 40
# 256 "data/expansion_1/scene09.pory"
	speakername CommonText_Redd
# 257 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09_Text_19, MSGBOX_AUTOCLOSE
# 258 "data/expansion_1/scene09.pory"
	applymovement 4, Common_Movement_ShakeHorizontal
# 259 "data/expansion_1/scene09.pory"
	waitmovement 0
# 260 "data/expansion_1/scene09.pory"
	speakername CommonText_Harper
# 261 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09_Text_20, MSGBOX_AUTOCLOSE
# 262 "data/expansion_1/scene09.pory"
	applymovement 5, Common_Movement_WalkInPlaceFasterUp
# 263 "data/expansion_1/scene09.pory"
	waitmovement 0
# 264 "data/expansion_1/scene09.pory"
	speakername CommonText_Jakson
# 265 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09_Text_21, MSGBOX_AUTOCLOSE
# 266 "data/expansion_1/scene09.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterUp
# 267 "data/expansion_1/scene09.pory"
	waitmovement 0
# 268 "data/expansion_1/scene09.pory"
	delay 50
# 269 "data/expansion_1/scene09.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterRight
# 270 "data/expansion_1/scene09.pory"
	waitmovement 0
# 271 "data/expansion_1/scene09.pory"
	delay 50
# 272 "data/expansion_1/scene09.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterLeft
# 273 "data/expansion_1/scene09.pory"
	waitmovement 0
# 274 "data/expansion_1/scene09.pory"
	delay 50
# 275 "data/expansion_1/scene09.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterDown
# 276 "data/expansion_1/scene09.pory"
	waitmovement 0
# 277 "data/expansion_1/scene09.pory"
	speakername CommonText_Sakura
# 278 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09_Text_22
# 282 "data/expansion_1/scene09.pory"
	speakername CommonText_Harper
# 283 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09_Text_23
# 286 "data/expansion_1/scene09.pory"
	call GetBaronsName
# 287 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09_Text_24, MSGBOX_AUTOCLOSE
# 288 "data/expansion_1/scene09.pory"
	setobjectxyperm 7, 7, 0
# 289 "data/expansion_1/scene09.pory"
	setobjectxyperm 8, 9, 0
# 290 "data/expansion_1/scene09.pory"
	setobjectxyperm 9, 7, 0
# 291 "data/expansion_1/scene09.pory"
	setobjectxyperm 10, 8, 0
# 292 "data/expansion_1/scene09.pory"
	addobject 7
# 293 "data/expansion_1/scene09.pory"
	addobject 8
# 294 "data/expansion_1/scene09.pory"
	addobject 9
# 295 "data/expansion_1/scene09.pory"
	addobject 10
# 296 "data/expansion_1/scene09.pory"
	playse SE_FALL
# 297 "data/expansion_1/scene09.pory"
	applymovement 8, Common_Movement_SlideDown6
# 298 "data/expansion_1/scene09.pory"
	applymovement 9, Common_Movement_SlideDown6
# 299 "data/expansion_1/scene09.pory"
	applymovement 10, Common_Movement_SlideDown7
# 300 "data/expansion_1/scene09.pory"
	waitmovement 0
# 301 "data/expansion_1/scene09.pory"
	applymovement 7, Common_Movement_SlideDown3
# 302 "data/expansion_1/scene09.pory"
	waitmovement 0
# 303 "data/expansion_1/scene09.pory"
	playse SE_BIKE_HOP
# 304 "data/expansion_1/scene09.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterDown
# 305 "data/expansion_1/scene09.pory"
	applymovement 5, Common_Movement_WalkInPlaceFasterDown
# 306 "data/expansion_1/scene09.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 307 "data/expansion_1/scene09.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterLeft
# 308 "data/expansion_1/scene09.pory"
	applymovement 7, Common_Movement_JumpInPlaceDown
# 309 "data/expansion_1/scene09.pory"
	waitmovement 0
# 310 "data/expansion_1/scene09.pory"
	playse SE_PIN
# 311 "data/expansion_1/scene09.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 312 "data/expansion_1/scene09.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 313 "data/expansion_1/scene09.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 314 "data/expansion_1/scene09.pory"
	applymovement 4, Common_Movement_ExclamationMark
# 315 "data/expansion_1/scene09.pory"
	applymovement 5, Common_Movement_ExclamationMark
# 316 "data/expansion_1/scene09.pory"
	applymovement 6, Common_Movement_ExclamationMark
# 317 "data/expansion_1/scene09.pory"
	delay 60
# 319 "data/expansion_1/scene09.pory"
	setstartingstatus STARTING_STATUS_SHARP_STEEL_PLAYER
# 320 "data/expansion_1/scene09.pory"
	setstartingstatus STARTING_STATUS_RAINBOW_OPPONENT
# 321 "data/expansion_1/scene09.pory"
	setflag FLAG_NO_CATCHING
# 322 "data/expansion_1/scene09.pory"
	setflag FLAG_NO_RUNNING
# 323 "data/expansion_1/scene09.pory"
	setflag FLAG_SMART_WILD_AI
# 324 "data/expansion_1/scene09.pory"
	setflag FLAG_SYS_SET_BATTLE_BGM
# 325 "data/expansion_1/scene09.pory"
	setvar VAR_BATTLE_BGM, MUS_VS_MEW
# 326 "data/expansion_1/scene09.pory"
	setflag FLAG_SEMI_TEMP_1
# 327 "data/expansion_1/scene09.pory"
	setwilddoubleflag
# 328 "data/expansion_1/scene09.pory"
	createmon 1, 0, SPECIES_MISSINGNO_YELLOW_BOSS, 80, ITEM_NONE, BALL_POKE, NATURE_HARDY, 0, MON_GENDER_RANDOM, 72, 72, 72, 72, 72, 72, 0, 0, 0, 0, 0, 0, MOVE_SKY_ATTACK, MOVE_SPARKLING_ARIA, MOVE_TRI_ATTACK, MOVE_SPIKY_SHIELD
# 329 "data/expansion_1/scene09.pory"
	dowildbattle
# 330 "data/expansion_1/scene09.pory"
	clearflag FLAG_NO_CATCHING
# 331 "data/expansion_1/scene09.pory"
	clearflag FLAG_NO_RUNNING
# 332 "data/expansion_1/scene09.pory"
	clearflag FLAG_SMART_WILD_AI
# 333 "data/expansion_1/scene09.pory"
	clearflag FLAG_SYS_SET_BATTLE_BGM
# 334 "data/expansion_1/scene09.pory"
	clearflag FLAG_SEMI_TEMP_1
# 336 "data/expansion_1/scene09.pory"
	applymovement 6, Common_Movement_Thinking
# 337 "data/expansion_1/scene09.pory"
	delay 40
# 338 "data/expansion_1/scene09.pory"
	speakername CommonText_Redd
# 339 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09_Text_25, MSGBOX_AUTOCLOSE
# 340 "data/expansion_1/scene09.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 341 "data/expansion_1/scene09.pory"
	waitmovement 0
# 342 "data/expansion_1/scene09.pory"
	speakername CommonText_Harper
# 343 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09_Text_26, MSGBOX_AUTOCLOSE
# 344 "data/expansion_1/scene09.pory"
	applymovement 5, Common_Movement_SweatDrop
# 345 "data/expansion_1/scene09.pory"
	playse SE_M_METRONOME
# 346 "data/expansion_1/scene09.pory"
	delay 40
# 347 "data/expansion_1/scene09.pory"
	speakername CommonText_Jakson
# 348 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09_Text_27, MSGBOX_AUTOCLOSE
# 349 "data/expansion_1/scene09.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterDown
# 350 "data/expansion_1/scene09.pory"
	waitmovement 0
# 351 "data/expansion_1/scene09.pory"
	call GetBaronsName
# 352 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09_Text_28, MSGBOX_AUTOCLOSE
# 354 "data/expansion_1/scene09.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 355 "data/expansion_1/scene09.pory"
	waitmovement 0
# 356 "data/expansion_1/scene09.pory"
	speakername CommonText_Harper
# 357 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09_Text_29, MSGBOX_AUTOCLOSE
# 360 "data/expansion_1/scene09.pory"
	playse SE_LEDGE
# 361 "data/expansion_1/scene09.pory"
	applymovement 5, Common_Movement_WalkInPlaceFasterRight
# 362 "data/expansion_1/scene09.pory"
	applymovement 2, Common_Movement_JumpDown
# 363 "data/expansion_1/scene09.pory"
	waitmovement 0
# 364 "data/expansion_1/scene09.pory"
	speakername CommonText_Jakson
# 365 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09_Text_30
# 367 "data/expansion_1/scene09.pory"
	call GetBaronsName
# 368 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09_Text_31, MSGBOX_AUTOCLOSE
# 370 "data/expansion_1/scene09.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 371 "data/expansion_1/scene09.pory"
	setflag FLAG_SCENE09_TRANSITION
# 372 "data/expansion_1/scene09.pory"
	warpcontinuescript MAP_MAUVE_ISLAND_WEST, 9, 9, Expansion1_Rival_Scene09b
	return

Expansion1_Rival_Scene09_2:
# 21 "data/expansion_1/scene09.pory"
	lock
# 22 "data/expansion_1/scene09.pory"
	setflag FLAG_WILD_OPPONENT
# 23 "data/expansion_1/scene09.pory"
	setflag FLAG_SYS_SET_BATTLE_BGM
# 24 "data/expansion_1/scene09.pory"
	setvar VAR_BATTLE_BGM, MUS_XD_VS_CIPHER_PEON
# 25 "data/expansion_1/scene09.pory"
	playmoncry SPECIES_LUCARIO, CRY_MODE_ENCOUNTER
# 26 "data/expansion_1/scene09.pory"
	waitmoncry
# 27 "data/expansion_1/scene09.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 28 "data/expansion_1/scene09.pory"
	msgbox Exp1_WildPokemonTrainerText_Intro, MSGBOX_DEFAULT
# 29 "data/expansion_1/scene09.pory"
	trainerbattle_no_intro TRAINER_WILD_POKEMON_BV_2, Exp1_WildPokemonTrainerText_Defeat
# 30 "data/expansion_1/scene09.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 31 "data/expansion_1/scene09.pory"
	clearflag FLAG_WILD_OPPONENT
	goto Expansion1_Rival_Scene09_1


Expansion1_Rival_Scene09b::
# 376 "data/expansion_1/scene09.pory"
	setobjectxyperm 5, 8, 11
# 377 "data/expansion_1/scene09.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_UP
# 378 "data/expansion_1/scene09.pory"
	setobjectxyperm 4, 6, 10
# 379 "data/expansion_1/scene09.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_RIGHT
# 380 "data/expansion_1/scene09.pory"
	setobjectxyperm 6, 7, 9
# 381 "data/expansion_1/scene09.pory"
	setobjectxyperm 7, 10, 10
# 382 "data/expansion_1/scene09.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_LEFT
# 383 "data/expansion_1/scene09.pory"
	setobjectxyperm 8, 8, 7
# 384 "data/expansion_1/scene09.pory"
	addobject 6
# 385 "data/expansion_1/scene09.pory"
	addobject 7
# 386 "data/expansion_1/scene09.pory"
	addobject 8
# 387 "data/expansion_1/scene09.pory"
	addobject 5
# 388 "data/expansion_1/scene09.pory"
	addobject 4
# 389 "data/expansion_1/scene09.pory"
	fadescreen FADE_FROM_BLACK
# 390 "data/expansion_1/scene09.pory"
	clearflag FLAG_SCENE09_TRANSITION
# 391 "data/expansion_1/scene09.pory"
	special SpawnCameraObject
# 392 "data/expansion_1/scene09.pory"
	applymovement LOCALID_CAMERA, Common_Movement_WalkDiagSW
# 393 "data/expansion_1/scene09.pory"
	waitmovement 0
# 394 "data/expansion_1/scene09.pory"
	call GetBaronsName
# 395 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09b_Text_0, MSGBOX_AUTOCLOSE
# 396 "data/expansion_1/scene09.pory"
	applymovement 4, Common_Movement_Thinking
# 397 "data/expansion_1/scene09.pory"
	delay 40
# 398 "data/expansion_1/scene09.pory"
	speakername CommonText_Redd
# 399 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09b_Text_1, MSGBOX_AUTOCLOSE
# 403 "data/expansion_1/scene09.pory"
	applymovement 5, Common_Movement_WalkInPlaceFasterLeft
# 404 "data/expansion_1/scene09.pory"
	waitmovement 0
# 405 "data/expansion_1/scene09.pory"
	speakername CommonText_Jakson
# 406 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09b_Text_2, MSGBOX_AUTOCLOSE
# 408 "data/expansion_1/scene09.pory"
	applymovement 7, Common_Movement_WalkInPlaceFasterRight
# 409 "data/expansion_1/scene09.pory"
	applymovement 5, Common_Movement_WalkInPlaceFasterUp
# 410 "data/expansion_1/scene09.pory"
	speakername CommonText_Jakson
# 411 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09b_Text_3
# 412 "data/expansion_1/scene09.pory"
	call GetBaronsName
# 413 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09b_Text_4
# 414 "data/expansion_1/scene09.pory"
	speakername CommonText_Sakura
# 415 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09b_Text_5, MSGBOX_AUTOCLOSE
# 417 "data/expansion_1/scene09.pory"
	applymovement 5, Common_Movement_SweatDrop
# 418 "data/expansion_1/scene09.pory"
	playse SE_M_METRONOME
# 419 "data/expansion_1/scene09.pory"
	delay 40
# 420 "data/expansion_1/scene09.pory"
	speakername CommonText_Jakson
# 421 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09b_Text_6
# 425 "data/expansion_1/scene09.pory"
	speakername CommonText_Redd
# 426 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09b_Text_7, MSGBOX_AUTOCLOSE
# 430 "data/expansion_1/scene09.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterRight
# 431 "data/expansion_1/scene09.pory"
	waitmovement 0
# 432 "data/expansion_1/scene09.pory"
	delay 30
# 433 "data/expansion_1/scene09.pory"
	applymovement 6, Common_Movement_QuestionMark
# 434 "data/expansion_1/scene09.pory"
	delay 40
# 435 "data/expansion_1/scene09.pory"
	call GetBaronsName
# 436 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09b_Text_8, MSGBOX_AUTOCLOSE
# 437 "data/expansion_1/scene09.pory"
	applymovement 5, Common_Movement_WalkInPlaceFasterRight
# 438 "data/expansion_1/scene09.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 439 "data/expansion_1/scene09.pory"
	waitmovement 0
# 440 "data/expansion_1/scene09.pory"
	speakername CommonText_Harper
# 441 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09_Text_7, MSGBOX_AUTOCLOSE
# 443 "data/expansion_1/scene09.pory"
	applymovement 7, Common_Movement_WalkInPlaceFasterLeft
# 444 "data/expansion_1/scene09.pory"
	waitmovement 0
# 445 "data/expansion_1/scene09.pory"
	speakername CommonText_Harper
# 446 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09b_Text_9, MSGBOX_AUTOCLOSE
# 451 "data/expansion_1/scene09.pory"
	applymovement 5, Common_Movement_WalkInPlaceFasterUp
# 452 "data/expansion_1/scene09.pory"
	waitmovement 0
# 453 "data/expansion_1/scene09.pory"
	speakername CommonText_Jakson
# 454 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09b_Text_10
# 457 "data/expansion_1/scene09.pory"
	speakername CommonText_Harper
# 458 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09b_Text_11, MSGBOX_AUTOCLOSE
# 461 "data/expansion_1/scene09.pory"
	applymovement 5, Common_Movement_WalkInPlaceFasterRight
# 462 "data/expansion_1/scene09.pory"
	waitmovement 0
# 463 "data/expansion_1/scene09.pory"
	speakername CommonText_Harper
# 464 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09b_Text_12, MSGBOX_AUTOCLOSE
# 466 "data/expansion_1/scene09.pory"
	applymovement 8, Common_Movement_MusicNote
# 467 "data/expansion_1/scene09.pory"
	playse SE_RG_HELP_OPEN
# 468 "data/expansion_1/scene09.pory"
	delay 60
# 469 "data/expansion_1/scene09.pory"
	speakername CommonText_Sakura
# 470 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09b_Text_13, MSGBOX_AUTOCLOSE
# 472 "data/expansion_1/scene09.pory"
	delay 40
# 473 "data/expansion_1/scene09.pory"
	speakername CommonText_Harper
# 474 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09b_Text_14, MSGBOX_AUTOCLOSE
# 479 "data/expansion_1/scene09.pory"
	applymovement 5, Common_Movement_WalkRight
# 480 "data/expansion_1/scene09.pory"
	waitmovement 0
# 481 "data/expansion_1/scene09.pory"
	delay 20
# 482 "data/expansion_1/scene09.pory"
	speakername CommonText_Jakson
# 483 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09b_Text_15, MSGBOX_AUTOCLOSE
# 485 "data/expansion_1/scene09.pory"
	applymovement 6, Common_Movement_QuestionMark
# 486 "data/expansion_1/scene09.pory"
	delay 40
# 487 "data/expansion_1/scene09.pory"
	call GetBaronsName
# 488 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09b_Text_16, MSGBOX_AUTOCLOSE
# 490 "data/expansion_1/scene09.pory"
	applymovement 5, Common_Movement_WalkInPlaceFasterLeft
# 491 "data/expansion_1/scene09.pory"
	waitmovement 0
# 492 "data/expansion_1/scene09.pory"
	speakername CommonText_Jakson
# 493 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09b_Text_17
# 494 "data/expansion_1/scene09.pory"
	speakername CommonText_Redd
# 495 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09b_Text_18, MSGBOX_AUTOCLOSE
# 497 "data/expansion_1/scene09.pory"
	applymovement 5, Common_Movement_WalkInPlaceFasterRight
# 498 "data/expansion_1/scene09.pory"
	waitmovement 0
# 499 "data/expansion_1/scene09.pory"
	speakername CommonText_Harper
# 500 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09b_Text_19, MSGBOX_AUTOCLOSE
# 504 "data/expansion_1/scene09.pory"
	applymovement 5, Common_Movement_Thinking
# 505 "data/expansion_1/scene09.pory"
	delay 60
# 506 "data/expansion_1/scene09.pory"
	speakername CommonText_Jakson
# 507 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09b_Text_20, MSGBOX_AUTOCLOSE
# 509 "data/expansion_1/scene09.pory"
	playse SE_PIN
# 510 "data/expansion_1/scene09.pory"
	applymovement 5, Common_Movement_ExclamationMark
# 511 "data/expansion_1/scene09.pory"
	delay 20
# 512 "data/expansion_1/scene09.pory"
	applymovement 5, Common_Movement_WalkInPlaceFasterUp
# 513 "data/expansion_1/scene09.pory"
	waitmovement 0
# 514 "data/expansion_1/scene09.pory"
	speakername CommonText_Jakson
# 515 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09b_Text_21, MSGBOX_AUTOCLOSE
# 518 "data/expansion_1/scene09.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 519 "data/expansion_1/scene09.pory"
	waitmovement 0
# 520 "data/expansion_1/scene09.pory"
	speakername CommonText_Harper
# 521 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09b_Text_22, MSGBOX_AUTOCLOSE
# 525 "data/expansion_1/scene09.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterDown
# 526 "data/expansion_1/scene09.pory"
	waitmovement 0
# 527 "data/expansion_1/scene09.pory"
	speakername CommonText_Jakson
# 528 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09b_Text_23
# 531 "data/expansion_1/scene09.pory"
	applymovement 6, Common_Movement_QuestionMark
# 532 "data/expansion_1/scene09.pory"
	applymovement 4, Common_Movement_WalkInPlaceFasterUp
# 533 "data/expansion_1/scene09.pory"
	waitmovement 0
# 534 "data/expansion_1/scene09.pory"
	speakername CommonText_Harper
# 535 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09b_Text_24
# 536 "data/expansion_1/scene09.pory"
	applymovement 4, Common_Movement_SweatDrop
# 537 "data/expansion_1/scene09.pory"
	playse SE_M_METRONOME
# 538 "data/expansion_1/scene09.pory"
	speakername CommonText_Jakson
# 539 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09b_Text_25
# 544 "data/expansion_1/scene09.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterRight
# 545 "data/expansion_1/scene09.pory"
	applymovement 4, Common_Movement_WalkInPlaceFasterRight
# 546 "data/expansion_1/scene09.pory"
	waitmovement 0
# 547 "data/expansion_1/scene09.pory"
	speakername CommonText_Harper
# 548 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09b_Text_26
# 549 "data/expansion_1/scene09.pory"
	call GetBaronsName
# 550 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09b_Text_27
# 551 "data/expansion_1/scene09.pory"
	speakername CommonText_Harper
# 552 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09b_Text_28
# 556 "data/expansion_1/scene09.pory"
	speakername CommonText_Redd
# 557 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09b_Text_29
# 558 "data/expansion_1/scene09.pory"
	speakername CommonText_Jakson
# 559 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09b_Text_30
# 561 "data/expansion_1/scene09.pory"
	speakername CommonText_Harper
# 562 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09b_Text_31, MSGBOX_AUTOCLOSE
# 565 "data/expansion_1/scene09.pory"
	applymovement 8, Common_Movement_Smile
# 566 "data/expansion_1/scene09.pory"
	playse SE_M_MORNING_SUN
# 567 "data/expansion_1/scene09.pory"
	delay 40
# 568 "data/expansion_1/scene09.pory"
	speakername CommonText_Sakura
# 569 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09b_Text_32
# 572 "data/expansion_1/scene09.pory"
	speakername CommonText_Jakson
# 573 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09b_Text_33, MSGBOX_AUTOCLOSE
# 574 "data/expansion_1/scene09.pory"
	applymovement 5, Common_Movement_WalkInPlaceFasterRight
# 575 "data/expansion_1/scene09.pory"
	waitmovement 0
# 576 "data/expansion_1/scene09.pory"
	speakername CommonText_Jakson
# 577 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09b_Text_34
# 578 "data/expansion_1/scene09.pory"
	speakername CommonText_Harper
# 579 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09b_Text_35, MSGBOX_AUTOCLOSE
# 584 "data/expansion_1/scene09.pory"
	playse SE_LEDGE
# 585 "data/expansion_1/scene09.pory"
	applymovement 8, Common_Movement_JumpInPlaceDown
# 586 "data/expansion_1/scene09.pory"
	waitmovement 0
# 587 "data/expansion_1/scene09.pory"
	applymovement 5, Common_Movement_WalkInPlaceFasterUp
# 588 "data/expansion_1/scene09.pory"
	applymovement 6, Common_Movement_Smile
# 589 "data/expansion_1/scene09.pory"
	playse SE_M_MORNING_SUN
# 590 "data/expansion_1/scene09.pory"
	delay 40
# 591 "data/expansion_1/scene09.pory"
	applymovement 8, Common_Movement_WalkLeft4
# 592 "data/expansion_1/scene09.pory"
	waitmovement 0
# 593 "data/expansion_1/scene09.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterLeft
# 594 "data/expansion_1/scene09.pory"
	applymovement 4, Common_Movement_WalkInPlaceFasterUp
# 595 "data/expansion_1/scene09.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 596 "data/expansion_1/scene09.pory"
	applymovement 8, Common_Movement_WalkUp
# 597 "data/expansion_1/scene09.pory"
	waitmovement 0
# 598 "data/expansion_1/scene09.pory"
	applymovement 8, Common_Movement_WalkLeft
# 599 "data/expansion_1/scene09.pory"
	waitmovement 0
# 600 "data/expansion_1/scene09.pory"
	playse SE_LEDGE
# 601 "data/expansion_1/scene09.pory"
	applymovement 8, Common_Movement_JumpLeft2
# 602 "data/expansion_1/scene09.pory"
	waitmovement 0
# 603 "data/expansion_1/scene09.pory"
	playse SE_LEDGE
# 604 "data/expansion_1/scene09.pory"
	applymovement 8, Common_Movement_JumpLeft2
# 605 "data/expansion_1/scene09.pory"
	waitmovement 0
# 606 "data/expansion_1/scene09.pory"
	applymovement 7, Common_Movement_SweatDrop
# 608 "data/expansion_1/scene09.pory"
	setvar VAR_EMERALBODY_RIVAL_STATE, 45
# 609 "data/expansion_1/scene09.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 610 "data/expansion_1/scene09.pory"
	warpcontinuescript MAP_MAUVE_CAMP, 16, 16, Expansion1_Rival_Scene02e
	return


Expansion1_Rival_Scene09_Text_0:
# 45 "data/expansion_1/scene09.pory"
	.string "Ah…?!$"

Expansion1_Rival_Scene09_Text_1:
# 58 "data/expansion_1/scene09.pory"
	.string "Is that… {PAUSE 100}Is THAT what I think it is?!$"

Expansion1_Rival_Scene09_Text_2:
# 70 "data/expansion_1/scene09.pory"
	.string "TREASURE!!!\p"
	.string "Oh Jakson, you know just what makes\n"
	.string "a girl's heart swoon{EMOJI_TILDE}{UNK_SPACER}$"

Expansion1_Rival_Scene09_Text_3:
# 131 "data/expansion_1/scene09.pory"
	.string "Give momma a crown befitting a queen{EMOJI_TILDE}{UNK_SPACER}$"

Expansion1_Rival_Scene09_Text_4:
# 148 "data/expansion_1/scene09.pory"
	.string "A real bona fide treasure room?$"

Expansion1_Rival_Scene09_Text_5:
# 150 "data/expansion_1/scene09.pory"
	.string "Digital treasure…$"

Expansion1_Rival_Scene09_Text_6:
# 158 "data/expansion_1/scene09.pory"
	.string "Even then… {PAUSE 100}Doesn't it look… {PAUSE 100}a bit…?$"

Expansion1_Rival_Scene09_Text_7:
# 163 "data/expansion_1/scene09.pory"
	.string "… {PAUSE 30}… {PAUSE 30}…{PAUSE 30}\n"
	.string "… {PAUSE 30}… {PAUSE 30}…$"

Expansion1_Rival_Scene09_Text_8:
# 170 "data/expansion_1/scene09.pory"
	.string "…{PAUSE 60}it's all… {PAUSE 100}fake…?!$"

Expansion1_Rival_Scene09_Text_9:
# 175 "data/expansion_1/scene09.pory"
	.string "How dare they! {PAUSE 60}They model all of this\n"
	.string "loot but won't allow me to splash around\l"
	.string "in it!$"

Expansion1_Rival_Scene09_Text_10:
# 179 "data/expansion_1/scene09.pory"
	.string "Ah… {PAUSE 100}well that's… {PAUSE 100}unfortunate?$"

Expansion1_Rival_Scene09_Text_11:
# 183 "data/expansion_1/scene09.pory"
	.string "I thought it looked a bit off…{PAUSE 100}\n"
	.string "even for this strange VR world…$"

Expansion1_Rival_Scene09_Text_12:
# 188 "data/expansion_1/scene09.pory"
	.string "Any luck on your end, {PLAYER}?$"

Expansion1_Rival_Scene09_Text_13:
# 190 "data/expansion_1/scene09.pory"
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
# 226 "data/expansion_1/scene09.pory"
	.string "Ain't that a picture that's worth a\n"
	.string "thousand words?$"

Expansion1_Rival_Scene09_Text_15:
# 229 "data/expansion_1/scene09.pory"
	.string "Damn.$"

Expansion1_Rival_Scene09_Text_16:
# 234 "data/expansion_1/scene09.pory"
	.string "Ah! Was there anything inside?{PAUSE 60}\n"
	.string "I can't see from back here…$"

Expansion1_Rival_Scene09_Text_17:
# 237 "data/expansion_1/scene09.pory"
	.string "Really? The chest at the end of the\n"
	.string "big dungeon had nothing in it?$"

Expansion1_Rival_Scene09_Text_18:
# 242 "data/expansion_1/scene09.pory"
	.string "This… {PAUSE 100}stupid mod!$"

Expansion1_Rival_Scene09_Text_19:
# 257 "data/expansion_1/scene09.pory"
	.string "Woah, what was that?$"

Expansion1_Rival_Scene09_Text_20:
# 261 "data/expansion_1/scene09.pory"
	.string "This… {PAUSE 100}STUPID MOD!$"

Expansion1_Rival_Scene09_Text_21:
# 265 "data/expansion_1/scene09.pory"
	.string "You good down there, Sakura?$"

Expansion1_Rival_Scene09_Text_22:
# 278 "data/expansion_1/scene09.pory"
	.string "All seems good…\p"
	.string "No changes to report.\p"
	.string "I can confirm the treasure is just\n"
	.string "as useless as it was a minute ago.$"

Expansion1_Rival_Scene09_Text_23:
# 283 "data/expansion_1/scene09.pory"
	.string "Is the mod just unfinished?! They\n"
	.string "didn't even give us “loot”! It's a\l"
	.string "treasure room. That's the whole point!$"

Expansion1_Rival_Scene09_Text_24:
# 287 "data/expansion_1/scene09.pory"
	.string "Could it have been just-$"

Expansion1_Rival_Scene09_Text_25:
# 339 "data/expansion_1/scene09.pory"
	.string "Well, uh… {PAUSE 100}huh.$"

Expansion1_Rival_Scene09_Text_26:
# 343 "data/expansion_1/scene09.pory"
	.string "{EMOJI_BIGWHEEL}Sigh{EMOJI_BIGWHEEL}…$"

Expansion1_Rival_Scene09_Text_27:
# 348 "data/expansion_1/scene09.pory"
	.string "Yeah, something's not right here.$"

Expansion1_Rival_Scene09_Text_28:
# 352 "data/expansion_1/scene09.pory"
	.string "Just when we thought we were on the\n"
	.string "right track…$"

Expansion1_Rival_Scene09_Text_29:
# 357 "data/expansion_1/scene09.pory"
	.string "It's almost like… {PAUSE 100}something was\n"
	.string "supposed to spawn there, but that\l"
	.string "wasn't it.$"

Expansion1_Rival_Scene09_Text_30:
# 365 "data/expansion_1/scene09.pory"
	.string "Alright, gang, we should get out of here\n"
	.string "and figure out what we need to do next.$"

Expansion1_Rival_Scene09_Text_31:
# 368 "data/expansion_1/scene09.pory"
	.string "That seems smart. The way back\n"
	.string "should be the same as the way in.$"

Expansion1_Rival_Scene09b_Text_0:
# 395 "data/expansion_1/scene09.pory"
	.string "And… {PAUSE 100}safe.$"

Expansion1_Rival_Scene09b_Text_1:
# 399 "data/expansion_1/scene09.pory"
	.string "Hey, I was thinking as we headed out…\p"
	.string "Do you think… {PAUSE 100}maybe that thing that\n"
	.string "attacked us at the start was the\l"
	.string "monster?$"

Expansion1_Rival_Scene09b_Text_2:
# 406 "data/expansion_1/scene09.pory"
	.string "You mean back in the treasure room?\n"
	.string "When we got that glitched spawn?$"

Expansion1_Rival_Scene09b_Text_3:
# 411 "data/expansion_1/scene09.pory"
	.string "It… {PAUSE 100}wouldn't surprise me.$"

Expansion1_Rival_Scene09b_Text_4:
# 413 "data/expansion_1/scene09.pory"
	.string "So, we're stuck then?$"

Expansion1_Rival_Scene09b_Text_5:
# 415 "data/expansion_1/scene09.pory"
	.string "A sequence break to end all sequence\n"
	.string "breaks.$"

Expansion1_Rival_Scene09b_Text_6:
# 421 "data/expansion_1/scene09.pory"
	.string "Agh, I'm sorry guys. It looks like this\n"
	.string "one just isn't going to work out. If you\l"
	.string "want, we can all log off and I can try to\l"
	.string "find- {PAUSE 30}well, make something different.$"

Expansion1_Rival_Scene09b_Text_7:
# 426 "data/expansion_1/scene09.pory"
	.string "If you think that's the best option,\n"
	.string "then maybe it's all we can do. If the\l"
	.string "game master can't fix it then who would\l"
	.string "I be to second guess him?$"

Expansion1_Rival_Scene09b_Text_8:
# 436 "data/expansion_1/scene09.pory"
	.string "Harper…{PAUSE 100}? What are you up to?$"

Expansion1_Rival_Scene09b_Text_9:
# 446 "data/expansion_1/scene09.pory"
	.string "Oh? {PAUSE 30}Oh yeah… {PAUSE 100}Did you notice there's\n"
	.string "a debug menu available?\p"
	.string "Not for the game, but for the mod.\n"
	.string "It was just left in the game if you\l"
	.string "press enough buttons in the menu.$"

Expansion1_Rival_Scene09b_Text_10:
# 454 "data/expansion_1/scene09.pory"
	.string "Ah…{PAUSE 100}\n"
	.string "Hah… {PAUSE 60}hahaha…\p"
	.string "Was that… {PAUSE 100}Did I leave that there?$"

Expansion1_Rival_Scene09b_Text_11:
# 458 "data/expansion_1/scene09.pory"
	.string "I don't know. But given the state of\n"
	.string "this mod, I wouldn't be surprised if\l"
	.string "it was the creators who did it.$"

Expansion1_Rival_Scene09b_Text_12:
# 464 "data/expansion_1/scene09.pory"
	.string "The important part is that it gives\n"
	.string "a bit of behind the scenes context.$"

Expansion1_Rival_Scene09b_Text_13:
# 470 "data/expansion_1/scene09.pory"
	.string "Oh, Harper-sensei, do spill {PAUSE 30}ALL {PAUSE 60}the\n"
	.string "beans{EMOJI_TILDE}{UNK_SPACER}$"

Expansion1_Rival_Scene09b_Text_14:
# 474 "data/expansion_1/scene09.pory"
	.string "Uh… {PAUSE 100}well, it almost seems like a flag\n"
	.string "that was meant for later, around this\l"
	.string "point actually, was tripped really early\l"
	.string "on.\p"
	.string "See here? Right in this menu.$"

Expansion1_Rival_Scene09b_Text_15:
# 483 "data/expansion_1/scene09.pory"
	.string "That's the switch menu. It lets you\n"
	.string "control the state of logic flags.$"

Expansion1_Rival_Scene09b_Text_16:
# 488 "data/expansion_1/scene09.pory"
	.string "Is this related to all the\n"
	.string "“progression” stuff?$"

Expansion1_Rival_Scene09b_Text_17:
# 493 "data/expansion_1/scene09.pory"
	.string "I mean, yeah… {PAUSE 100}but…$"

Expansion1_Rival_Scene09b_Text_18:
# 495 "data/expansion_1/scene09.pory"
	.string "Like… {PAUSE 100}is one of them connected to the\n"
	.string "monster attacking us at the start?$"

Expansion1_Rival_Scene09b_Text_19:
# 500 "data/expansion_1/scene09.pory"
	.string "Yeah, actually, exactly like that.\n"
	.string "There's one labeled “monster moved”.\p"
	.string "Or maybe the more practical way to\n"
	.string "phrase it would be “moving”.$"

Expansion1_Rival_Scene09b_Text_20:
# 507 "data/expansion_1/scene09.pory"
	.string "Moving… {PAUSE 100}Moving somewhere…{PAUSE 60}\n"
	.string "…{PAUSE 60}somewhere like…$"

Expansion1_Rival_Scene09b_Text_21:
# 515 "data/expansion_1/scene09.pory"
	.string "{PLAYER}, didn't you mention some sort\n"
	.string "of monster stalking you in the dungeon\l"
	.string "you spawned in at?$"

Expansion1_Rival_Scene09b_Text_22:
# 521 "data/expansion_1/scene09.pory"
	.string "Good idea. {PAUSE 30}In fact…{PAUSE 60}\n"
	.string "… {PAUSE 30}… {PAUSE 30}…\l"
	.string "Jakson, these “switches” can be\l"
	.string "associated with a map, right?$"

Expansion1_Rival_Scene09b_Text_23:
# 528 "data/expansion_1/scene09.pory"
	.string "Yeah, it's like a local switch for that\n"
	.string "map. Simplifies some of the management\l"
	.string "on the development end.$"

Expansion1_Rival_Scene09b_Text_24:
# 535 "data/expansion_1/scene09.pory"
	.string "So these {PAUSE 30}Map IDs…{PAUSE 60}?$"

Expansion1_Rival_Scene09b_Text_25:
# 539 "data/expansion_1/scene09.pory"
	.string "I mean, they're nameless numbers, so…{PAUSE 60}\n"
	.string "… {PAUSE 30}… {PAUSE 30}…\l"
	.string "Actually, one of them has some other\l"
	.string "map switches flipped. That matches up\l"
	.string "too well with what {PLAYER} did.$"

Expansion1_Rival_Scene09b_Text_26:
# 548 "data/expansion_1/scene09.pory"
	.string "Now, if I were to just…$"

Expansion1_Rival_Scene09b_Text_27:
# 550 "data/expansion_1/scene09.pory"
	.string "Wait, do you think you could fix it?$"

Expansion1_Rival_Scene09b_Text_28:
# 552 "data/expansion_1/scene09.pory"
	.string "… {PAUSE 30}… {PAUSE 30}…\p"
	.string "There, I think that'll do it. {PAUSE 60}I hope.\p"
	.string "I reset the switches in that area,\n"
	.string "bar the monster moving one.$"

Expansion1_Rival_Scene09b_Text_29:
# 557 "data/expansion_1/scene09.pory"
	.string "So, what? That means we go…$"

Expansion1_Rival_Scene09b_Text_30:
# 559 "data/expansion_1/scene09.pory"
	.string "Yeah. To the dungeon that {PLAYER}\n"
	.string "spawned in.$"

Expansion1_Rival_Scene09b_Text_31:
# 562 "data/expansion_1/scene09.pory"
	.string "If we weren't supposed to be there\n"
	.string "yet… {PAUSE 100}Well we've got a shot at the\l"
	.string "endgame now.$"

Expansion1_Rival_Scene09b_Text_32:
# 569 "data/expansion_1/scene09.pory"
	.string "The ‘Illusory Grotto’, was it?\n"
	.string "Time to see what this place is like\l"
	.string "for myself{EMOJI_TILDE}{UNK_SPACER}$"

Expansion1_Rival_Scene09b_Text_33:
# 573 "data/expansion_1/scene09.pory"
	.string "Alright, team. {PAUSE 30}Let's head-$"

Expansion1_Rival_Scene09b_Text_34:
# 577 "data/expansion_1/scene09.pory"
	.string "Well, actually. {PAUSE 60}Harper, {PAUSE 30}if you would.$"

Expansion1_Rival_Scene09b_Text_35:
# 579 "data/expansion_1/scene09.pory"
	.string "All that work and you're foisting\n"
	.string "this responsibility onto me, too?\p"
	.string "Heh. Very well.\n"
	.string "Not really my style, but…\p"
	.string "‘Let's head out, {PAUSE 30}team!’$"
