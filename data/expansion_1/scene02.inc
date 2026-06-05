Expansion1_Rival_Scene02_Setup::
# 14 "data/expansion_1/scene02.pory"
	lock
# 15 "data/expansion_1/scene02.pory"
	setvar VAR_EMERALBODY_RIVAL_STATE, 23
# 16 "data/expansion_1/scene02.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 17 "data/expansion_1/scene02.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 18 "data/expansion_1/scene02.pory"
	warpcontinuescript MAP_MAUVE_CAMP, 0, 13, Expansion1_Rival_Scene02
	return


Expansion1_Rival_Scene02::
# 22 "data/expansion_1/scene02.pory"
	setflag FLAG_TEMP_2
# 23 "data/expansion_1/scene02.pory"
	setflag FLAG_TEMP_6
# 24 "data/expansion_1/scene02.pory"
	setobjectxyperm 6, 10, 13
# 25 "data/expansion_1/scene02.pory"
	setobjectxyperm 7, 21, 19
# 26 "data/expansion_1/scene02.pory"
	setobjectxyperm 8, 19, 19
# 27 "data/expansion_1/scene02.pory"
	turnobject LOCALID_PLAYER, DIR_EAST
# 28 "data/expansion_1/scene02.pory"
	removeobject 10
# 29 "data/expansion_1/scene02.pory"
	fadescreen FADE_FROM_BLACK
# 30 "data/expansion_1/scene02.pory"
	delay 20
# 31 "data/expansion_1/scene02.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRightSlow4
# 32 "data/expansion_1/scene02.pory"
	waitmovement 0
# 33 "data/expansion_1/scene02.pory"
	delay 20
# 34 "data/expansion_1/scene02.pory"
	applymovement LOCALID_PLAYER, Common_Movement_Talking
# 35 "data/expansion_1/scene02.pory"
	delay 40
# 36 "data/expansion_1/scene02.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterLeft
# 37 "data/expansion_1/scene02.pory"
	waitmovement 0
# 38 "data/expansion_1/scene02.pory"
	playse SE_PIN
# 39 "data/expansion_1/scene02.pory"
	applymovement 6, Common_Movement_ExclamationMark
# 40 "data/expansion_1/scene02.pory"
	delay 40
# 41 "data/expansion_1/scene02.pory"
	speakername CommonText_Jakson
# 42 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02_Text_0, MSGBOX_AUTOCLOSE
# 43 "data/expansion_1/scene02.pory"
	applymovement 6, Common_Movement_WalkLeft2
# 44 "data/expansion_1/scene02.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight3
# 45 "data/expansion_1/scene02.pory"
	waitmovement 0
# 46 "data/expansion_1/scene02.pory"
	speakername CommonText_Jakson
# 47 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02_Text_1, MSGBOX_AUTOCLOSE
# 50 "data/expansion_1/scene02.pory"
	applymovement 6, Common_Movement_WalkRight11
# 51 "data/expansion_1/scene02.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight11
# 52 "data/expansion_1/scene02.pory"
	waitmovement 0
# 53 "data/expansion_1/scene02.pory"
	applymovement 6, Common_Movement_WalkDown
# 54 "data/expansion_1/scene02.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight
# 55 "data/expansion_1/scene02.pory"
	waitmovement 0
# 56 "data/expansion_1/scene02.pory"
	applymovement 6, Common_Movement_WalkDown
# 57 "data/expansion_1/scene02.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 58 "data/expansion_1/scene02.pory"
	waitmovement 0
# 59 "data/expansion_1/scene02.pory"
	applymovement 6, Common_Movement_WalkRight
# 60 "data/expansion_1/scene02.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 61 "data/expansion_1/scene02.pory"
	waitmovement 0
# 62 "data/expansion_1/scene02.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterDown
# 63 "data/expansion_1/scene02.pory"
	waitmovement 0
# 64 "data/expansion_1/scene02.pory"
	delay 10
# 65 "data/expansion_1/scene02.pory"
	special SpawnCameraObject
# 66 "data/expansion_1/scene02.pory"
	applymovement LOCALID_CAMERA, Common_Movement_WalkDownSlow3
# 67 "data/expansion_1/scene02.pory"
	waitmovement 0
# 68 "data/expansion_1/scene02.pory"
	fadeoutbgm 0
# 69 "data/expansion_1/scene02.pory"
	speakername CommonText_Sakura
# 70 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02_Text_2, MSGBOX_AUTOCLOSE
# 73 "data/expansion_1/scene02.pory"
	applymovement 8, Common_Movement_ShakeHorizontal
# 74 "data/expansion_1/scene02.pory"
	waitmovement 0
# 75 "data/expansion_1/scene02.pory"
	speakername CommonText_Sakura
# 76 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02_Text_3, MSGBOX_AUTOCLOSE
# 77 "data/expansion_1/scene02.pory"
	applymovement 8, Common_Movement_ShakeHorizontal
# 78 "data/expansion_1/scene02.pory"
	waitmovement 0
# 79 "data/expansion_1/scene02.pory"
	delay 10
# 80 "data/expansion_1/scene02.pory"
	applymovement 7, Common_Movement_Thinking
# 81 "data/expansion_1/scene02.pory"
	delay 70
# 82 "data/expansion_1/scene02.pory"
	applymovement 7, Common_Movement_SweatDrop
# 83 "data/expansion_1/scene02.pory"
	speakername CommonText_Jakson
# 84 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02_Text_4, MSGBOX_AUTOCLOSE
# 88 "data/expansion_1/scene02.pory"
	fadeinbgm 0
# 89 "data/expansion_1/scene02.pory"
	applymovement 7, Common_Movement_WalkInPlaceFasterUp
# 90 "data/expansion_1/scene02.pory"
	waitmovement 0
# 91 "data/expansion_1/scene02.pory"
	delay 20
# 92 "data/expansion_1/scene02.pory"
	speakername CommonText_Baron
# 93 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02_Text_5, MSGBOX_AUTOCLOSE
# 96 "data/expansion_1/scene02.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 97 "data/expansion_1/scene02.pory"
	warpcontinuescript MAP_MAUVE_CAMP, 20, 17, Expansion1_Rival_Scene02b
	return


Expansion1_Rival_Scene02b::
# 101 "data/expansion_1/scene02.pory"
	removeobject 1
# 102 "data/expansion_1/scene02.pory"
	removeobject 2
# 103 "data/expansion_1/scene02.pory"
	removeobject 5
# 104 "data/expansion_1/scene02.pory"
	removeobject 10
# 105 "data/expansion_1/scene02.pory"
	setobjectxyperm 6, 19, 18
# 106 "data/expansion_1/scene02.pory"
	setobjectxyperm 7, 21, 18
# 107 "data/expansion_1/scene02.pory"
	setobjectxyperm 8, 20, 19
# 108 "data/expansion_1/scene02.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_RIGHT
# 109 "data/expansion_1/scene02.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_LEFT
# 110 "data/expansion_1/scene02.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_FACE_UP
# 111 "data/expansion_1/scene02.pory"
	addobject 6
# 112 "data/expansion_1/scene02.pory"
	addobject 7
# 113 "data/expansion_1/scene02.pory"
	addobject 8
# 115 "data/expansion_1/scene02.pory"
	fadescreen FADE_FROM_BLACK
# 116 "data/expansion_1/scene02.pory"
	special SpawnCameraObject
# 117 "data/expansion_1/scene02.pory"
	applymovement LOCALID_CAMERA, Common_Movement_WalkDown2
# 118 "data/expansion_1/scene02.pory"
	waitmovement 0
# 120 "data/expansion_1/scene02.pory"
	speakername CommonText_Jakson
# 121 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02b_Text_0
# 122 "data/expansion_1/scene02.pory"
	speakername CommonText_Sakura
# 123 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02b_Text_1
# 124 "data/expansion_1/scene02.pory"
	speakername CommonText_Baron
# 125 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02b_Text_2
# 126 "data/expansion_1/scene02.pory"
	speakername CommonText_Jakson
# 127 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02b_Text_3, MSGBOX_AUTOCLOSE
# 128 "data/expansion_1/scene02.pory"
	playse SE_PIN
# 129 "data/expansion_1/scene02.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 130 "data/expansion_1/scene02.pory"
	delay 40
# 131 "data/expansion_1/scene02.pory"
	speakername CommonText_Baron
# 132 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02b_Text_4
# 135 "data/expansion_1/scene02.pory"
	speakername CommonText_Jakson
# 136 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02b_Text_5
# 137 "data/expansion_1/scene02.pory"
	speakername CommonText_Sakura
# 138 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02b_Text_6, MSGBOX_AUTOCLOSE
# 140 "data/expansion_1/scene02.pory"
	applymovement 7, Common_Movement_WalkInPlaceFasterLeft
# 141 "data/expansion_1/scene02.pory"
	waitmovement 0
# 142 "data/expansion_1/scene02.pory"
	speakername CommonText_Baron
# 143 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02b_Text_7
# 145 "data/expansion_1/scene02.pory"
	applymovement 6, Common_Movement_SweatDrop
# 146 "data/expansion_1/scene02.pory"
	playse SE_M_METRONOME
# 147 "data/expansion_1/scene02.pory"
	delay 40
# 148 "data/expansion_1/scene02.pory"
	speakername CommonText_Jakson
# 149 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02b_Text_8
# 153 "data/expansion_1/scene02.pory"
	speakername CommonText_Sakura
# 154 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02b_Text_9
# 155 "data/expansion_1/scene02.pory"
	speakername CommonText_Jakson
# 156 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02b_Text_10
# 157 "data/expansion_1/scene02.pory"
	applymovement 8, Common_Movement_MusicNote
# 158 "data/expansion_1/scene02.pory"
	playse SE_RG_HELP_OPEN
# 159 "data/expansion_1/scene02.pory"
	delay 40
# 160 "data/expansion_1/scene02.pory"
	speakername CommonText_Sakura
# 161 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02b_Text_11
# 162 "data/expansion_1/scene02.pory"
	speakername CommonText_Baron
# 163 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02b_Text_12
# 164 "data/expansion_1/scene02.pory"
	speakername CommonText_Sakura
# 165 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02b_Text_13
# 166 "data/expansion_1/scene02.pory"
	speakername CommonText_Jakson
# 167 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02b_Text_14, MSGBOX_AUTOCLOSE
# 169 "data/expansion_1/scene02.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight2
# 170 "data/expansion_1/scene02.pory"
	waitmovement 0
# 171 "data/expansion_1/scene02.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown6
# 172 "data/expansion_1/scene02.pory"
	delay 20
# 173 "data/expansion_1/scene02.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 174 "data/expansion_1/scene02.pory"
	setflag FLAG_SYS_SPAWN_INVISIBLE
# 175 "data/expansion_1/scene02.pory"
	warpcontinuescript MAP_MAUVE_ISLAND_SOUTH, 17, 23, Expansion1_Rival_Scene02c
	return


Expansion1_Rival_Scene02c::
# 179 "data/expansion_1/scene02.pory"
	fadescreen FADE_FROM_BLACK
# 180 "data/expansion_1/scene02.pory"
	addobject 6
# 181 "data/expansion_1/scene02.pory"
	applymovement 6, Common_Movement_WalkDown4
# 182 "data/expansion_1/scene02.pory"
	waitmovement 0
# 183 "data/expansion_1/scene02.pory"
	applymovement 6, Common_Movement_Talking
# 184 "data/expansion_1/scene02.pory"
	delay 40
# 185 "data/expansion_1/scene02.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterUp
# 186 "data/expansion_1/scene02.pory"
	waitmovement 0
# 187 "data/expansion_1/scene02.pory"
	delay 10
# 188 "data/expansion_1/scene02.pory"
	speakername CommonText_Redd
# 189 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02c_Text_0, MSGBOX_AUTOCLOSE
# 190 "data/expansion_1/scene02.pory"
	applymovement 6, Common_Movement_WalkDown
# 191 "data/expansion_1/scene02.pory"
	waitmovement 0
# 192 "data/expansion_1/scene02.pory"
	speakername CommonText_Redd
# 193 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02c_Text_1, MSGBOX_AUTOCLOSE
# 196 "data/expansion_1/scene02.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterDown
# 197 "data/expansion_1/scene02.pory"
	waitmovement 0
# 198 "data/expansion_1/scene02.pory"
	delay 20
# 199 "data/expansion_1/scene02.pory"
	speakername CommonText_Redd
# 200 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02c_Text_2
# 201 "data/expansion_1/scene02.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterRight
# 202 "data/expansion_1/scene02.pory"
	waitmovement 0
# 203 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02c_Text_3, MSGBOX_AUTOCLOSE
# 204 "data/expansion_1/scene02.pory"
	delay 20
# 205 "data/expansion_1/scene02.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterLeft
# 206 "data/expansion_1/scene02.pory"
	waitmovement 0
# 207 "data/expansion_1/scene02.pory"
	delay 30
# 208 "data/expansion_1/scene02.pory"
	speakername CommonText_Redd
# 209 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02c_Text_4, MSGBOX_AUTOCLOSE
# 212 "data/expansion_1/scene02.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterUp
# 213 "data/expansion_1/scene02.pory"
	waitmovement 0
# 214 "data/expansion_1/scene02.pory"
	delay 10
# 215 "data/expansion_1/scene02.pory"
	applymovement 2, Common_Movement_Thinking
# 216 "data/expansion_1/scene02.pory"
	delay 60
# 217 "data/expansion_1/scene02.pory"
	speakername CommonText_Redd
# 218 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02c_Text_5, MSGBOX_AUTOCLOSE
# 219 "data/expansion_1/scene02.pory"
	applymovement 6, Common_Movement_WalkRight
# 220 "data/expansion_1/scene02.pory"
	applymovement 2, Common_Movement_WalkUp
# 221 "data/expansion_1/scene02.pory"
	waitmovement 0
# 222 "data/expansion_1/scene02.pory"
	applymovement 6, Common_Movement_WalkUp5
# 223 "data/expansion_1/scene02.pory"
	applymovement 2, Common_Movement_WalkUp5
# 224 "data/expansion_1/scene02.pory"
	delay 20
# 225 "data/expansion_1/scene02.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 226 "data/expansion_1/scene02.pory"
	setflag FLAG_SYS_SPAWN_INVISIBLE
# 227 "data/expansion_1/scene02.pory"
	warpcontinuescript MAP_MAUVE_CAMP, 23, 12, Expansion1_Rival_Scene02d
	return


Expansion1_Rival_Scene02d::
# 231 "data/expansion_1/scene02.pory"
	removeobject 1
# 232 "data/expansion_1/scene02.pory"
	removeobject 3
# 233 "data/expansion_1/scene02.pory"
	removeobject 5
# 234 "data/expansion_1/scene02.pory"
	setobjectxyperm 6, 23, 11
# 235 "data/expansion_1/scene02.pory"
	setobjectxyperm 7, 22, 12
# 236 "data/expansion_1/scene02.pory"
	setobjectxyperm 8, 24, 12
# 237 "data/expansion_1/scene02.pory"
	setobjectxyperm 10, 22, 19
# 238 "data/expansion_1/scene02.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_DOWN
# 239 "data/expansion_1/scene02.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_RIGHT
# 240 "data/expansion_1/scene02.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_FACE_LEFT
# 241 "data/expansion_1/scene02.pory"
	addobject 6
# 242 "data/expansion_1/scene02.pory"
	addobject 7
# 243 "data/expansion_1/scene02.pory"
	addobject 8
# 244 "data/expansion_1/scene02.pory"
	addobject 9
# 245 "data/expansion_1/scene02.pory"
	addobject 10
# 246 "data/expansion_1/scene02.pory"
	fadescreen FADE_FROM_BLACK
# 247 "data/expansion_1/scene02.pory"
	applymovement 9, Common_Movement_WalkUp4
# 248 "data/expansion_1/scene02.pory"
	applymovement 10, Common_Movement_WalkUp4
# 249 "data/expansion_1/scene02.pory"
	waitmovement 0
# 250 "data/expansion_1/scene02.pory"
	applymovement 7, Common_Movement_WalkInPlaceFasterDown
# 251 "data/expansion_1/scene02.pory"
	applymovement 9, Common_Movement_WalkRight
# 252 "data/expansion_1/scene02.pory"
	applymovement 10, Common_Movement_WalkUp
# 253 "data/expansion_1/scene02.pory"
	waitmovement 0
# 254 "data/expansion_1/scene02.pory"
	applymovement 8, Common_Movement_WalkInPlaceFasterDown
# 255 "data/expansion_1/scene02.pory"
	applymovement 9, Common_Movement_WalkUp
# 256 "data/expansion_1/scene02.pory"
	applymovement 10, Common_Movement_WalkUp
# 257 "data/expansion_1/scene02.pory"
	waitmovement 0
# 258 "data/expansion_1/scene02.pory"
	applymovement 7, Common_Movement_LockFacingDirection
# 259 "data/expansion_1/scene02.pory"
	waitmovement 0
# 260 "data/expansion_1/scene02.pory"
	applymovement 7, Common_Movement_WalkUp
# 261 "data/expansion_1/scene02.pory"
	waitmovement 0
# 262 "data/expansion_1/scene02.pory"
	applymovement 8, Common_Movement_WalkInPlaceFasterLeft
# 263 "data/expansion_1/scene02.pory"
	waitmovement 0
# 264 "data/expansion_1/scene02.pory"
	speakername CommonText_Jakson
# 265 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02d_Text_0
# 266 "data/expansion_1/scene02.pory"
	speakername CommonText_Baron
# 267 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02d_Text_1
# 268 "data/expansion_1/scene02.pory"
	speakername CommonText_Sakura
# 269 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02d_Text_2, MSGBOX_AUTOCLOSE
# 270 "data/expansion_1/scene02.pory"
	delay 10
# 271 "data/expansion_1/scene02.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterLeft
# 272 "data/expansion_1/scene02.pory"
	waitmovement 0
# 273 "data/expansion_1/scene02.pory"
	delay 30
# 274 "data/expansion_1/scene02.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterRight
# 275 "data/expansion_1/scene02.pory"
	waitmovement 0
# 276 "data/expansion_1/scene02.pory"
	delay 30
# 277 "data/expansion_1/scene02.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterDown
# 278 "data/expansion_1/scene02.pory"
	waitmovement 0
# 279 "data/expansion_1/scene02.pory"
	speakername CommonText_Jakson
# 280 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02d_Text_3
# 281 "data/expansion_1/scene02.pory"
	speakername CommonText_Redd
# 282 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02d_Text_4, MSGBOX_AUTOCLOSE
# 284 "data/expansion_1/scene02.pory"
	applymovement 6, Common_Movement_Thinking
# 285 "data/expansion_1/scene02.pory"
	delay 40
# 286 "data/expansion_1/scene02.pory"
	speakername CommonText_Jakson
# 287 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02d_Text_5
# 288 "data/expansion_1/scene02.pory"
	speakername CommonText_Redd
# 289 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02d_Text_6
# 290 "data/expansion_1/scene02.pory"
	speakername CommonText_Jakson
# 291 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02d_Text_7
# 292 "data/expansion_1/scene02.pory"
	speakername CommonText_Redd
# 293 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02d_Text_8, MSGBOX_AUTOCLOSE
# 294 "data/expansion_1/scene02.pory"
	applymovement 6, Common_Movement_SweatDrop
# 295 "data/expansion_1/scene02.pory"
	playse SE_M_METRONOME
# 296 "data/expansion_1/scene02.pory"
	delay 40
# 297 "data/expansion_1/scene02.pory"
	speakername CommonText_Jakson
# 298 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02d_Text_9, MSGBOX_AUTOCLOSE
# 299 "data/expansion_1/scene02.pory"
	applymovement 10, Common_Movement_SweatDrop
# 300 "data/expansion_1/scene02.pory"
	applymovement 8, Common_Movement_SweatDrop
# 301 "data/expansion_1/scene02.pory"
	applymovement 9, Common_Movement_SweatDrop
# 302 "data/expansion_1/scene02.pory"
	playse SE_M_METRONOME
# 303 "data/expansion_1/scene02.pory"
	delay 40
# 304 "data/expansion_1/scene02.pory"
	speakername CommonText_Redd
# 305 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02d_Text_10
# 306 "data/expansion_1/scene02.pory"
	speakername CommonText_Baron
# 307 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02d_Text_11, MSGBOX_AUTOCLOSE
# 308 "data/expansion_1/scene02.pory"
	applymovement 6, Common_Movement_Thinking
# 309 "data/expansion_1/scene02.pory"
	delay 40
# 310 "data/expansion_1/scene02.pory"
	speakername CommonText_Jakson
# 311 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02d_Text_12
# 312 "data/expansion_1/scene02.pory"
	speakername CommonText_Sakura
# 313 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02d_Text_13
# 315 "data/expansion_1/scene02.pory"
	speakername CommonText_Jakson
# 316 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02d_Text_14
# 317 "data/expansion_1/scene02.pory"
	speakername CommonText_Redd
# 318 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02d_Text_15
# 319 "data/expansion_1/scene02.pory"
	speakername CommonText_Jakson
# 320 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02d_Text_16, MSGBOX_AUTOCLOSE
# 321 "data/expansion_1/scene02.pory"
	playse SE_PIN
# 322 "data/expansion_1/scene02.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 323 "data/expansion_1/scene02.pory"
	delay 40
# 324 "data/expansion_1/scene02.pory"
	speakername CommonText_Baron
# 325 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02d_Text_17
# 326 "data/expansion_1/scene02.pory"
	speakername CommonText_Jakson
# 327 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02d_Text_18
# 328 "data/expansion_1/scene02.pory"
	speakername CommonText_Sakura
# 329 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02d_Text_19
# 330 "data/expansion_1/scene02.pory"
	speakername CommonText_Baron
# 331 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02d_Text_20
# 332 "data/expansion_1/scene02.pory"
	speakername CommonText_Redd
# 333 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02d_Text_21
# 334 "data/expansion_1/scene02.pory"
	speakername CommonText_Baron
# 335 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02d_Text_22, MSGBOX_AUTOCLOSE
# 336 "data/expansion_1/scene02.pory"
	applymovement 10, Common_Movement_SweatDrop
# 337 "data/expansion_1/scene02.pory"
	playse SE_M_METRONOME
# 338 "data/expansion_1/scene02.pory"
	delay 40
# 339 "data/expansion_1/scene02.pory"
	speakername CommonText_Redd
# 340 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02d_Text_23
# 341 "data/expansion_1/scene02.pory"
	speakername CommonText_Jakson
# 342 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02d_Text_24
# 344 "data/expansion_1/scene02.pory"
	speakername CommonText_Sakura
# 345 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02d_Text_25, MSGBOX_AUTOCLOSE
# 348 "data/expansion_1/scene02.pory"
	setvar VAR_EMERALBODY_RIVAL_STATE, 24
# 349 "data/expansion_1/scene02.pory"
	savebgm MUS_DP_CREDITS
# 350 "data/expansion_1/scene02.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 351 "data/expansion_1/scene02.pory"
	warpcontinuescript MAP_MAUVE_CAMP, 16, 16, Expansion1_Rival_Scene02e
	return


Expansion1_Rival_Scene02e::
# 355 "data/expansion_1/scene02.pory"
	fadescreen FADE_FROM_BLACK
# 356 "data/expansion_1/scene02.pory"
	delay 10
# 357 "data/expansion_1/scene02.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 358 "data/expansion_1/scene02.pory"
	helpwindow HELP_EXPANSION_1_BOAT_EXPLANATION
	return


Expansion1_Rival_Scene02_Text_0:
# 42 "data/expansion_1/scene02.pory"
	.string "Oh, {PLAYER}, it's you. Thank goodness.$"

Expansion1_Rival_Scene02_Text_1:
# 47 "data/expansion_1/scene02.pory"
	.string "Sorry, but it seems like something's\ngone horribly wrong.\p"
	.string "I'd say we should exchange info,\nbut I JUST heard Sakura's voice.\p"
	.string "She's around here somewhere, so we\nshould probably find her first.$"

Expansion1_Rival_Scene02_Text_2:
# 70 "data/expansion_1/scene02.pory"
	.string "You maniac!\p"
	.string "You blew it up!\p"
	.string "Agh, damn you!$"

Expansion1_Rival_Scene02_Text_3:
# 76 "data/expansion_1/scene02.pory"
	.string "God damn you all to hell!$"

Expansion1_Rival_Scene02_Text_4:
# 84 "data/expansion_1/scene02.pory"
	.string "… … …\n"
	.string "… … …\l"
	.string "… … …\l"
	.string "Ah, well there's Baron too.$"

Expansion1_Rival_Scene02_Text_5:
# 93 "data/expansion_1/scene02.pory"
	.string "Oh, hey guys. It's good to see\nsomeone sa-\l"
	.string "I mean…\p"
	.string "Well, it's good to be together again!$"

Expansion1_Rival_Scene02b_Text_0:
# 121 "data/expansion_1/scene02.pory"
	.string "You good now, Sakura?$"

Expansion1_Rival_Scene02b_Text_1:
# 123 "data/expansion_1/scene02.pory"
	.string "What? Yeah, I'm always good.\nYou just can't pass up a chance like\lthat{EMOJI_TILDE}{UNK_SPACER}$"

Expansion1_Rival_Scene02b_Text_2:
# 125 "data/expansion_1/scene02.pory"
	.string "That was Planet of the Apes, right?$"

Expansion1_Rival_Scene02b_Text_3:
# 127 "data/expansion_1/scene02.pory"
	.string "You've seen it, Baron? I remember when\nwe had to get you to see The Godfather\lback when.$"

Expansion1_Rival_Scene02b_Text_4:
# 132 "data/expansion_1/scene02.pory"
	.string "O- Oh!\p"
	.string "W- Well, my mother always puts on old\nmovies. I… guess I've been paying more\lattention to them.\p"
	.string "Since… whenever that was, at least.$"

Expansion1_Rival_Scene02b_Text_5:
# 136 "data/expansion_1/scene02.pory"
	.string "That's cool.$"

Expansion1_Rival_Scene02b_Text_6:
# 138 "data/expansion_1/scene02.pory"
	.string "Anyways, Son of Jaks… What kind of\ncontent pack did you grab this from\lin the first place?\p"
	.string "That wasn't exactly a ‘whimsical\nadventure’ themed event.$"

Expansion1_Rival_Scene02b_Text_7:
# 143 "data/expansion_1/scene02.pory"
	.string "Y-Yes! That was very scary…\p"
	.string "…especially in this 2DVR type setting.$"

Expansion1_Rival_Scene02b_Text_8:
# 149 "data/expansion_1/scene02.pory"
	.string "I didn't see anything about horror, so\nI'm pretty sure something's gone wrong.\p"
	.string "Maybe… some mods are conflicting?\nIntersecting with each other?\p"
	.string "Either way, setting it back up and\ntesting for all that would be a lengthy\lprocess.\p"
	.string "I don't even know if it breaks\nprogression, so maybe we should try\lto just push forward?$"

Expansion1_Rival_Scene02b_Text_9:
# 154 "data/expansion_1/scene02.pory"
	.string "Battle of the mods, eh?$"

Expansion1_Rival_Scene02b_Text_10:
# 156 "data/expansion_1/scene02.pory"
	.string "I still can't say that for sure.$"

Expansion1_Rival_Scene02b_Text_11:
# 161 "data/expansion_1/scene02.pory"
	.string "Hey, I'm agreeing with you. Let's push\nforward. This sounds interesting{EMOJI_TILDE}{UNK_SPACER}$"

Expansion1_Rival_Scene02b_Text_12:
# 163 "data/expansion_1/scene02.pory"
	.string "Oh! We should tell Redd, too!$"

Expansion1_Rival_Scene02b_Text_13:
# 165 "data/expansion_1/scene02.pory"
	.string "Definitely. He just walked down along\nthe shoreline to check it out.$"

Expansion1_Rival_Scene02b_Text_14:
# 167 "data/expansion_1/scene02.pory"
	.string "{PLAYER}, do you mind walking down\nto go find him?\p"
	.string "I'll stay here with Baron and Sakura\nand see if we can set up a home base\lof sorts.$"

Expansion1_Rival_Scene02c_Text_0:
# 189 "data/expansion_1/scene02.pory"
	.string "Oh, {PLAYER}!$"

Expansion1_Rival_Scene02c_Text_1:
# 193 "data/expansion_1/scene02.pory"
	.string "You met with the other two already,\nright?\p"
	.string "And Jakson's with you, too?\nPerfect, he can fix this mess.\p"
	.string "But no Harper, huh?$"

Expansion1_Rival_Scene02c_Text_2:
# 200 "data/expansion_1/scene02.pory"
	.string "I hope she's safe out there.$"

Expansion1_Rival_Scene02c_Text_3:
# 203 "data/expansion_1/scene02.pory"
	.string "I was trying to see what was South\nof that cape up there…$"

Expansion1_Rival_Scene02c_Text_4:
# 209 "data/expansion_1/scene02.pory"
	.string "I'm pretty sure that's supposed\nto be our ship, right?\p"
	.string "It doesn't exactly look like it can\nget us home like that.\p"
	.string "And I don't think this virtual body\nof mine can carry a boat from land\lto water.$"

Expansion1_Rival_Scene02c_Text_5:
# 218 "data/expansion_1/scene02.pory"
	.string "Hmm… well, let's just report back\nto the others.$"

Expansion1_Rival_Scene02d_Text_0:
# 265 "data/expansion_1/scene02.pory"
	.string "Welcome back.$"

Expansion1_Rival_Scene02d_Text_1:
# 267 "data/expansion_1/scene02.pory"
	.string "We managed to set up a camp, somehow.$"

Expansion1_Rival_Scene02d_Text_2:
# 269 "data/expansion_1/scene02.pory"
	.string "Everyone knows you just have to\nstart clicking around until the game\ladvances!$"

Expansion1_Rival_Scene02d_Text_3:
# 280 "data/expansion_1/scene02.pory"
	.string "Oh… No sign of Harper from your side,\nhuh? Damn…$"

Expansion1_Rival_Scene02d_Text_4:
# 282 "data/expansion_1/scene02.pory"
	.string "There was a wrecked boat out there,\nprobably ours, but we couldn't reach it.\p"
	.string "There's a group of Pokémon blocking\nus from getting further.$"

Expansion1_Rival_Scene02d_Text_5:
# 287 "data/expansion_1/scene02.pory"
	.string "That must be some sort of story blocker.$"

Expansion1_Rival_Scene02d_Text_6:
# 289 "data/expansion_1/scene02.pory"
	.string "One where we have access to whatever\nflag progresses it…?$"

Expansion1_Rival_Scene02d_Text_7:
# 291 "data/expansion_1/scene02.pory"
	.string "Well…$"

Expansion1_Rival_Scene02d_Text_8:
# 293 "data/expansion_1/scene02.pory"
	.string "Okay, how about your debug menu?$"

Expansion1_Rival_Scene02d_Text_9:
# 298 "data/expansion_1/scene02.pory"
	.string "…I forgot to turn it on.$"

Expansion1_Rival_Scene02d_Text_10:
# 305 "data/expansion_1/scene02.pory"
	.string "Then… I guess we're betting that\nshe's not stuck over there.$"

Expansion1_Rival_Scene02d_Text_11:
# 307 "data/expansion_1/scene02.pory"
	.string "I… I hope she's safe…$"

Expansion1_Rival_Scene02d_Text_12:
# 311 "data/expansion_1/scene02.pory"
	.string "Hmm…$"

Expansion1_Rival_Scene02d_Text_13:
# 313 "data/expansion_1/scene02.pory"
	.string "What are you all clammed up for?\p"
	.string "We've got a job to do. Operation\n‘Save the Harpy’ is ready to start!$"

Expansion1_Rival_Scene02d_Text_14:
# 316 "data/expansion_1/scene02.pory"
	.string "Right. Any idea where she could be?$"

Expansion1_Rival_Scene02d_Text_15:
# 318 "data/expansion_1/scene02.pory"
	.string "I found a dark cave deep underwater\nthat I couldn't get through.\lAlmost like I needed Flash again.$"

Expansion1_Rival_Scene02d_Text_16:
# 320 "data/expansion_1/scene02.pory"
	.string "Would a post-game dungeon be designed\naround HM Flash through?$"

Expansion1_Rival_Scene02d_Text_17:
# 325 "data/expansion_1/scene02.pory"
	.string "O-Oh! One of the sailors here was\nsaying something about a “Light”.$"

Expansion1_Rival_Scene02d_Text_18:
# 327 "data/expansion_1/scene02.pory"
	.string "As good a lead as any.$"

Expansion1_Rival_Scene02d_Text_19:
# 329 "data/expansion_1/scene02.pory"
	.string "If Harper's lacking the unique key item,\nno way she'd get through the darkness.$"

Expansion1_Rival_Scene02d_Text_20:
# 331 "data/expansion_1/scene02.pory"
	.string "That sounds like it'd be fightening\nfor her…$"

Expansion1_Rival_Scene02d_Text_21:
# 333 "data/expansion_1/scene02.pory"
	.string "Good thing she doesn't have to eat.$"

Expansion1_Rival_Scene02d_Text_22:
# 335 "data/expansion_1/scene02.pory"
	.string "Uh…$"

Expansion1_Rival_Scene02d_Text_23:
# 340 "data/expansion_1/scene02.pory"
	.string "D- Don't worry. We'll get her out of\nthere.$"

Expansion1_Rival_Scene02d_Text_24:
# 342 "data/expansion_1/scene02.pory"
	.string "Absolutely.\nAlright, let's split up.\p"
	.string "We shouldn't count on her being stuck\nin that dark cave, but we've got to look\lthere too.$"

Expansion1_Rival_Scene02d_Text_25:
# 345 "data/expansion_1/scene02.pory"
	.string "Move out, team!\p"
	.string "Operation… START-O!!!$"
