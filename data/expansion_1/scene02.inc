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
	turnobject LOCALID_PLAYER, DIR_EAST
# 25 "data/expansion_1/scene02.pory"
	removeobject 10
# 26 "data/expansion_1/scene02.pory"
	fadescreen FADE_FROM_BLACK
# 27 "data/expansion_1/scene02.pory"
	delay 20
# 28 "data/expansion_1/scene02.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRightSlow4
# 29 "data/expansion_1/scene02.pory"
	waitmovement 0
# 30 "data/expansion_1/scene02.pory"
	delay 20
# 31 "data/expansion_1/scene02.pory"
	applymovement LOCALID_PLAYER, Common_Movement_Talking
# 32 "data/expansion_1/scene02.pory"
	delay 40
# 33 "data/expansion_1/scene02.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterLeft
# 34 "data/expansion_1/scene02.pory"
	waitmovement 0
# 35 "data/expansion_1/scene02.pory"
	playse SE_PIN
# 36 "data/expansion_1/scene02.pory"
	applymovement 6, Common_Movement_ExclamationMark
# 37 "data/expansion_1/scene02.pory"
	delay 40
# 38 "data/expansion_1/scene02.pory"
	speakername CommonText_Jakson
# 39 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02_Text_0, MSGBOX_AUTOCLOSE
# 40 "data/expansion_1/scene02.pory"
	applymovement 6, Common_Movement_WalkLeft2
# 41 "data/expansion_1/scene02.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight3
# 42 "data/expansion_1/scene02.pory"
	waitmovement 0
# 43 "data/expansion_1/scene02.pory"
	speakername CommonText_Jakson
# 44 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02_Text_1, MSGBOX_AUTOCLOSE
# 47 "data/expansion_1/scene02.pory"
	applymovement 6, Common_Movement_WalkRight11
# 48 "data/expansion_1/scene02.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight11
# 49 "data/expansion_1/scene02.pory"
	waitmovement 0
# 50 "data/expansion_1/scene02.pory"
	applymovement 6, Common_Movement_WalkDown
# 51 "data/expansion_1/scene02.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight
# 52 "data/expansion_1/scene02.pory"
	waitmovement 0
# 53 "data/expansion_1/scene02.pory"
	applymovement 6, Common_Movement_WalkDown
# 54 "data/expansion_1/scene02.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 55 "data/expansion_1/scene02.pory"
	waitmovement 0
# 56 "data/expansion_1/scene02.pory"
	applymovement 6, Common_Movement_WalkRight
# 57 "data/expansion_1/scene02.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 58 "data/expansion_1/scene02.pory"
	waitmovement 0
# 59 "data/expansion_1/scene02.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterDown
# 60 "data/expansion_1/scene02.pory"
	waitmovement 0
# 61 "data/expansion_1/scene02.pory"
	delay 10
# 62 "data/expansion_1/scene02.pory"
	special SpawnCameraObject
# 63 "data/expansion_1/scene02.pory"
	applymovement LOCALID_CAMERA, Common_Movement_WalkDownSlow3
# 64 "data/expansion_1/scene02.pory"
	waitmovement 0
# 65 "data/expansion_1/scene02.pory"
	fadeoutbgm 0
# 66 "data/expansion_1/scene02.pory"
	speakername CommonText_Sakura
# 67 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02_Text_2, MSGBOX_AUTOCLOSE
# 70 "data/expansion_1/scene02.pory"
	applymovement 8, Common_Movement_ShakeHorizontal
# 71 "data/expansion_1/scene02.pory"
	waitmovement 0
# 72 "data/expansion_1/scene02.pory"
	speakername CommonText_Sakura
# 73 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02_Text_3, MSGBOX_AUTOCLOSE
# 74 "data/expansion_1/scene02.pory"
	applymovement 8, Common_Movement_ShakeHorizontal
# 75 "data/expansion_1/scene02.pory"
	waitmovement 0
# 76 "data/expansion_1/scene02.pory"
	delay 10
# 77 "data/expansion_1/scene02.pory"
	applymovement 7, Common_Movement_Thinking
# 78 "data/expansion_1/scene02.pory"
	delay 70
# 79 "data/expansion_1/scene02.pory"
	applymovement 7, Common_Movement_SweatDrop
# 80 "data/expansion_1/scene02.pory"
	speakername CommonText_Jakson
# 81 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02_Text_4, MSGBOX_AUTOCLOSE
# 85 "data/expansion_1/scene02.pory"
	fadeinbgm 0
# 86 "data/expansion_1/scene02.pory"
	applymovement 7, Common_Movement_WalkInPlaceFasterUp
# 87 "data/expansion_1/scene02.pory"
	waitmovement 0
# 88 "data/expansion_1/scene02.pory"
	delay 20
# 89 "data/expansion_1/scene02.pory"
	speakername CommonText_Baron
# 90 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02_Text_5, MSGBOX_AUTOCLOSE
# 93 "data/expansion_1/scene02.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 94 "data/expansion_1/scene02.pory"
	warpcontinuescript MAP_MAUVE_CAMP, 20, 17, Expansion1_Rival_Scene02b
	return


Expansion1_Rival_Scene02b::
# 98 "data/expansion_1/scene02.pory"
	removeobject 1
# 99 "data/expansion_1/scene02.pory"
	removeobject 2
# 100 "data/expansion_1/scene02.pory"
	removeobject 5
# 101 "data/expansion_1/scene02.pory"
	removeobject 10
# 102 "data/expansion_1/scene02.pory"
	setobjectxyperm 6, 19, 18
# 103 "data/expansion_1/scene02.pory"
	setobjectxy 7, 21, 18
# 104 "data/expansion_1/scene02.pory"
	setobjectxy 8, 20, 19
# 105 "data/expansion_1/scene02.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_RIGHT
# 106 "data/expansion_1/scene02.pory"
	turnobject 7, DIR_WEST
# 107 "data/expansion_1/scene02.pory"
	turnobject 8, DIR_NORTH
# 108 "data/expansion_1/scene02.pory"
	addobject 6
# 110 "data/expansion_1/scene02.pory"
	fadescreen FADE_FROM_BLACK
# 111 "data/expansion_1/scene02.pory"
	special SpawnCameraObject
# 112 "data/expansion_1/scene02.pory"
	applymovement LOCALID_CAMERA, Common_Movement_WalkDown2
# 113 "data/expansion_1/scene02.pory"
	waitmovement 0
# 115 "data/expansion_1/scene02.pory"
	speakername CommonText_Jakson
# 116 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02b_Text_0
# 117 "data/expansion_1/scene02.pory"
	speakername CommonText_Sakura
# 118 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02b_Text_1
# 119 "data/expansion_1/scene02.pory"
	speakername CommonText_Baron
# 120 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02b_Text_2
# 121 "data/expansion_1/scene02.pory"
	speakername CommonText_Jakson
# 122 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02b_Text_3, MSGBOX_AUTOCLOSE
# 123 "data/expansion_1/scene02.pory"
	playse SE_PIN
# 124 "data/expansion_1/scene02.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 125 "data/expansion_1/scene02.pory"
	delay 40
# 126 "data/expansion_1/scene02.pory"
	speakername CommonText_Baron
# 127 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02b_Text_4
# 130 "data/expansion_1/scene02.pory"
	speakername CommonText_Jakson
# 131 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02b_Text_5
# 132 "data/expansion_1/scene02.pory"
	speakername CommonText_Sakura
# 133 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02b_Text_6, MSGBOX_AUTOCLOSE
# 135 "data/expansion_1/scene02.pory"
	applymovement 7, Common_Movement_WalkInPlaceFasterLeft
# 136 "data/expansion_1/scene02.pory"
	waitmovement 0
# 137 "data/expansion_1/scene02.pory"
	speakername CommonText_Baron
# 138 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02b_Text_7
# 140 "data/expansion_1/scene02.pory"
	applymovement 6, Common_Movement_SweatDrop
# 141 "data/expansion_1/scene02.pory"
	playse SE_M_METRONOME
# 142 "data/expansion_1/scene02.pory"
	delay 40
# 143 "data/expansion_1/scene02.pory"
	speakername CommonText_Jakson
# 144 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02b_Text_8
# 148 "data/expansion_1/scene02.pory"
	speakername CommonText_Sakura
# 149 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02b_Text_9
# 150 "data/expansion_1/scene02.pory"
	speakername CommonText_Jakson
# 151 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02b_Text_10
# 152 "data/expansion_1/scene02.pory"
	applymovement 8, Common_Movement_MusicNote
# 153 "data/expansion_1/scene02.pory"
	playse SE_RG_HELP_OPEN
# 154 "data/expansion_1/scene02.pory"
	delay 40
# 155 "data/expansion_1/scene02.pory"
	speakername CommonText_Sakura
# 156 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02b_Text_11
# 157 "data/expansion_1/scene02.pory"
	speakername CommonText_Baron
# 158 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02b_Text_12
# 159 "data/expansion_1/scene02.pory"
	speakername CommonText_Sakura
# 160 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02b_Text_13
# 161 "data/expansion_1/scene02.pory"
	speakername CommonText_Jakson
# 162 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02b_Text_14, MSGBOX_AUTOCLOSE
# 164 "data/expansion_1/scene02.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight2
# 165 "data/expansion_1/scene02.pory"
	waitmovement 0
# 166 "data/expansion_1/scene02.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown6
# 167 "data/expansion_1/scene02.pory"
	delay 20
# 168 "data/expansion_1/scene02.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 169 "data/expansion_1/scene02.pory"
	setflag FLAG_SYS_SPAWN_INVISIBLE
# 170 "data/expansion_1/scene02.pory"
	warpcontinuescript MAP_MAUVE_ISLAND_SOUTH, 17, 23, Expansion1_Rival_Scene02c
	return


Expansion1_Rival_Scene02c::
# 174 "data/expansion_1/scene02.pory"
	fadescreen FADE_FROM_BLACK
# 175 "data/expansion_1/scene02.pory"
	addobject 6
# 176 "data/expansion_1/scene02.pory"
	applymovement 6, Common_Movement_WalkDown4
# 177 "data/expansion_1/scene02.pory"
	waitmovement 0
# 178 "data/expansion_1/scene02.pory"
	applymovement 6, Common_Movement_Talking
# 179 "data/expansion_1/scene02.pory"
	delay 40
# 180 "data/expansion_1/scene02.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterUp
# 181 "data/expansion_1/scene02.pory"
	waitmovement 0
# 182 "data/expansion_1/scene02.pory"
	delay 10
# 183 "data/expansion_1/scene02.pory"
	speakername CommonText_Redd
# 184 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02c_Text_0, MSGBOX_AUTOCLOSE
# 185 "data/expansion_1/scene02.pory"
	applymovement 6, Common_Movement_WalkDown
# 186 "data/expansion_1/scene02.pory"
	waitmovement 0
# 187 "data/expansion_1/scene02.pory"
	speakername CommonText_Redd
# 188 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02c_Text_1, MSGBOX_AUTOCLOSE
# 191 "data/expansion_1/scene02.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterDown
# 192 "data/expansion_1/scene02.pory"
	waitmovement 0
# 193 "data/expansion_1/scene02.pory"
	delay 20
# 194 "data/expansion_1/scene02.pory"
	speakername CommonText_Redd
# 195 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02c_Text_2
# 196 "data/expansion_1/scene02.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterRight
# 197 "data/expansion_1/scene02.pory"
	waitmovement 0
# 198 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02c_Text_3, MSGBOX_AUTOCLOSE
# 199 "data/expansion_1/scene02.pory"
	delay 20
# 200 "data/expansion_1/scene02.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterLeft
# 201 "data/expansion_1/scene02.pory"
	waitmovement 0
# 202 "data/expansion_1/scene02.pory"
	delay 30
# 203 "data/expansion_1/scene02.pory"
	speakername CommonText_Redd
# 204 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02c_Text_4, MSGBOX_AUTOCLOSE
# 207 "data/expansion_1/scene02.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterUp
# 208 "data/expansion_1/scene02.pory"
	waitmovement 0
# 209 "data/expansion_1/scene02.pory"
	delay 10
# 210 "data/expansion_1/scene02.pory"
	applymovement 2, Common_Movement_Thinking
# 211 "data/expansion_1/scene02.pory"
	delay 60
# 212 "data/expansion_1/scene02.pory"
	speakername CommonText_Redd
# 213 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02c_Text_5, MSGBOX_AUTOCLOSE
# 214 "data/expansion_1/scene02.pory"
	applymovement 6, Common_Movement_WalkRight
# 215 "data/expansion_1/scene02.pory"
	applymovement 2, Common_Movement_WalkUp
# 216 "data/expansion_1/scene02.pory"
	waitmovement 0
# 217 "data/expansion_1/scene02.pory"
	applymovement 6, Common_Movement_WalkUp5
# 218 "data/expansion_1/scene02.pory"
	applymovement 2, Common_Movement_WalkUp5
# 219 "data/expansion_1/scene02.pory"
	delay 20
# 220 "data/expansion_1/scene02.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 221 "data/expansion_1/scene02.pory"
	setflag FLAG_SYS_SPAWN_INVISIBLE
# 222 "data/expansion_1/scene02.pory"
	warpcontinuescript MAP_MAUVE_CAMP, 23, 12, Expansion1_Rival_Scene02d
	return


Expansion1_Rival_Scene02d::
# 226 "data/expansion_1/scene02.pory"
	removeobject 1
# 227 "data/expansion_1/scene02.pory"
	removeobject 3
# 228 "data/expansion_1/scene02.pory"
	removeobject 5
# 229 "data/expansion_1/scene02.pory"
	setobjectxyperm 6, 23, 11
# 230 "data/expansion_1/scene02.pory"
	setobjectxy 7, 22, 12
# 231 "data/expansion_1/scene02.pory"
	setobjectxy 8, 24, 12
# 232 "data/expansion_1/scene02.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_DOWN
# 233 "data/expansion_1/scene02.pory"
	turnobject 7, DIR_EAST
# 234 "data/expansion_1/scene02.pory"
	turnobject 8, DIR_WEST
# 235 "data/expansion_1/scene02.pory"
	addobject 6
# 236 "data/expansion_1/scene02.pory"
	addobject 7
# 237 "data/expansion_1/scene02.pory"
	addobject 8
# 238 "data/expansion_1/scene02.pory"
	addobject 9
# 239 "data/expansion_1/scene02.pory"
	addobject 10
# 240 "data/expansion_1/scene02.pory"
	fadescreen FADE_FROM_BLACK
# 241 "data/expansion_1/scene02.pory"
	applymovement 9, Common_Movement_WalkUp4
# 242 "data/expansion_1/scene02.pory"
	applymovement 10, Common_Movement_WalkUp4
# 243 "data/expansion_1/scene02.pory"
	waitmovement 0
# 244 "data/expansion_1/scene02.pory"
	applymovement 7, Common_Movement_WalkInPlaceFasterDown
# 245 "data/expansion_1/scene02.pory"
	applymovement 9, Common_Movement_WalkRight
# 246 "data/expansion_1/scene02.pory"
	applymovement 10, Common_Movement_WalkUp
# 247 "data/expansion_1/scene02.pory"
	waitmovement 0
# 248 "data/expansion_1/scene02.pory"
	applymovement 8, Common_Movement_WalkInPlaceFasterDown
# 249 "data/expansion_1/scene02.pory"
	applymovement 9, Common_Movement_WalkUp
# 250 "data/expansion_1/scene02.pory"
	applymovement 10, Common_Movement_WalkUp
# 251 "data/expansion_1/scene02.pory"
	waitmovement 0
# 252 "data/expansion_1/scene02.pory"
	applymovement 7, Common_Movement_LockFacingDirection
# 253 "data/expansion_1/scene02.pory"
	waitmovement 0
# 254 "data/expansion_1/scene02.pory"
	applymovement 7, Common_Movement_WalkUp
# 255 "data/expansion_1/scene02.pory"
	waitmovement 0
# 256 "data/expansion_1/scene02.pory"
	applymovement 8, Common_Movement_WalkInPlaceFasterLeft
# 257 "data/expansion_1/scene02.pory"
	waitmovement 0
# 258 "data/expansion_1/scene02.pory"
	speakername CommonText_Jakson
# 259 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02d_Text_0
# 260 "data/expansion_1/scene02.pory"
	speakername CommonText_Baron
# 261 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02d_Text_1
# 262 "data/expansion_1/scene02.pory"
	speakername CommonText_Sakura
# 263 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02d_Text_2, MSGBOX_AUTOCLOSE
# 264 "data/expansion_1/scene02.pory"
	delay 10
# 265 "data/expansion_1/scene02.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterLeft
# 266 "data/expansion_1/scene02.pory"
	waitmovement 0
# 267 "data/expansion_1/scene02.pory"
	delay 30
# 268 "data/expansion_1/scene02.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterRight
# 269 "data/expansion_1/scene02.pory"
	waitmovement 0
# 270 "data/expansion_1/scene02.pory"
	delay 30
# 271 "data/expansion_1/scene02.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterDown
# 272 "data/expansion_1/scene02.pory"
	waitmovement 0
# 273 "data/expansion_1/scene02.pory"
	speakername CommonText_Jakson
# 274 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02d_Text_3
# 275 "data/expansion_1/scene02.pory"
	speakername CommonText_Redd
# 276 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02d_Text_4, MSGBOX_AUTOCLOSE
# 278 "data/expansion_1/scene02.pory"
	applymovement 6, Common_Movement_Thinking
# 279 "data/expansion_1/scene02.pory"
	delay 40
# 280 "data/expansion_1/scene02.pory"
	speakername CommonText_Jakson
# 281 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02d_Text_5
# 282 "data/expansion_1/scene02.pory"
	speakername CommonText_Redd
# 283 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02d_Text_6
# 284 "data/expansion_1/scene02.pory"
	speakername CommonText_Jakson
# 285 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02d_Text_7
# 286 "data/expansion_1/scene02.pory"
	speakername CommonText_Redd
# 287 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02d_Text_8, MSGBOX_AUTOCLOSE
# 288 "data/expansion_1/scene02.pory"
	applymovement 6, Common_Movement_SweatDrop
# 289 "data/expansion_1/scene02.pory"
	playse SE_M_METRONOME
# 290 "data/expansion_1/scene02.pory"
	delay 40
# 291 "data/expansion_1/scene02.pory"
	speakername CommonText_Jakson
# 292 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02d_Text_9, MSGBOX_AUTOCLOSE
# 293 "data/expansion_1/scene02.pory"
	applymovement 10, Common_Movement_SweatDrop
# 294 "data/expansion_1/scene02.pory"
	applymovement 8, Common_Movement_SweatDrop
# 295 "data/expansion_1/scene02.pory"
	applymovement 9, Common_Movement_SweatDrop
# 296 "data/expansion_1/scene02.pory"
	playse SE_M_METRONOME
# 297 "data/expansion_1/scene02.pory"
	delay 40
# 298 "data/expansion_1/scene02.pory"
	speakername CommonText_Redd
# 299 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02d_Text_10
# 300 "data/expansion_1/scene02.pory"
	speakername CommonText_Baron
# 301 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02d_Text_11, MSGBOX_AUTOCLOSE
# 302 "data/expansion_1/scene02.pory"
	applymovement 6, Common_Movement_Thinking
# 303 "data/expansion_1/scene02.pory"
	delay 40
# 304 "data/expansion_1/scene02.pory"
	speakername CommonText_Jakson
# 305 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02d_Text_12
# 306 "data/expansion_1/scene02.pory"
	speakername CommonText_Sakura
# 307 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02d_Text_13
# 309 "data/expansion_1/scene02.pory"
	speakername CommonText_Jakson
# 310 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02d_Text_14
# 311 "data/expansion_1/scene02.pory"
	speakername CommonText_Redd
# 312 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02d_Text_15
# 313 "data/expansion_1/scene02.pory"
	speakername CommonText_Jakson
# 314 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02d_Text_16, MSGBOX_AUTOCLOSE
# 315 "data/expansion_1/scene02.pory"
	playse SE_PIN
# 316 "data/expansion_1/scene02.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 317 "data/expansion_1/scene02.pory"
	delay 40
# 318 "data/expansion_1/scene02.pory"
	speakername CommonText_Baron
# 319 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02d_Text_17
# 320 "data/expansion_1/scene02.pory"
	speakername CommonText_Jakson
# 321 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02d_Text_18
# 322 "data/expansion_1/scene02.pory"
	speakername CommonText_Sakura
# 323 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02d_Text_19
# 324 "data/expansion_1/scene02.pory"
	speakername CommonText_Baron
# 325 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02d_Text_20
# 326 "data/expansion_1/scene02.pory"
	speakername CommonText_Redd
# 327 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02d_Text_21
# 328 "data/expansion_1/scene02.pory"
	speakername CommonText_Baron
# 329 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02d_Text_22, MSGBOX_AUTOCLOSE
# 330 "data/expansion_1/scene02.pory"
	applymovement 10, Common_Movement_SweatDrop
# 331 "data/expansion_1/scene02.pory"
	playse SE_M_METRONOME
# 332 "data/expansion_1/scene02.pory"
	delay 40
# 333 "data/expansion_1/scene02.pory"
	speakername CommonText_Redd
# 334 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02d_Text_23
# 335 "data/expansion_1/scene02.pory"
	speakername CommonText_Jakson
# 336 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02d_Text_24
# 338 "data/expansion_1/scene02.pory"
	speakername CommonText_Sakura
# 339 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02d_Text_25, MSGBOX_AUTOCLOSE
# 342 "data/expansion_1/scene02.pory"
	setvar VAR_EMERALBODY_RIVAL_STATE, 24
# 343 "data/expansion_1/scene02.pory"
	savebgm MUS_DP_CREDITS
# 344 "data/expansion_1/scene02.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 345 "data/expansion_1/scene02.pory"
	warpcontinuescript MAP_MAUVE_CAMP, 16, 16, Expansion1_Rival_Scene02e
	return


Expansion1_Rival_Scene02e::
# 349 "data/expansion_1/scene02.pory"
	fadescreen FADE_FROM_BLACK
# 350 "data/expansion_1/scene02.pory"
	delay 10
# 351 "data/expansion_1/scene02.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 352 "data/expansion_1/scene02.pory"
	helpwindow HELP_EXPANSION_1_BOAT_EXPLANATION
	return


Expansion1_Rival_Scene02_Text_0:
# 39 "data/expansion_1/scene02.pory"
	.string "Oh, {PLAYER}, it's you. Thank goodness.$"

Expansion1_Rival_Scene02_Text_1:
# 44 "data/expansion_1/scene02.pory"
	.string "Sorry, but it seems like something's\ngone horribly wrong.\p"
	.string "I'd say we should exchange info,\nbut I JUST heard Sakura's voice.\p"
	.string "She's around here somewhere, so we\nshould probably find her first.$"

Expansion1_Rival_Scene02_Text_2:
# 67 "data/expansion_1/scene02.pory"
	.string "You maniac!\p"
	.string "You blew it up!\p"
	.string "Agh, damn you!$"

Expansion1_Rival_Scene02_Text_3:
# 73 "data/expansion_1/scene02.pory"
	.string "God damn you all to hell!$"

Expansion1_Rival_Scene02_Text_4:
# 81 "data/expansion_1/scene02.pory"
	.string "… … …\n"
	.string "… … …\l"
	.string "… … …\l"
	.string "Ah, well there's Baron too.$"

Expansion1_Rival_Scene02_Text_5:
# 90 "data/expansion_1/scene02.pory"
	.string "Oh, hey guys. It's good to see\nsomeone sa-\l"
	.string "I mean…\p"
	.string "Well, it's good to be together again!$"

Expansion1_Rival_Scene02b_Text_0:
# 116 "data/expansion_1/scene02.pory"
	.string "You good now, Sakura?$"

Expansion1_Rival_Scene02b_Text_1:
# 118 "data/expansion_1/scene02.pory"
	.string "What? Yeah, I'm always good.\nYou just can't pass up a chance like\lthat{EMOJI_TILDE}{UNK_SPACER}$"

Expansion1_Rival_Scene02b_Text_2:
# 120 "data/expansion_1/scene02.pory"
	.string "That was Planet of the Apes, right?$"

Expansion1_Rival_Scene02b_Text_3:
# 122 "data/expansion_1/scene02.pory"
	.string "You've seen it, Baron? I remember when\nwe had to get you to see The Godfather\lback when.$"

Expansion1_Rival_Scene02b_Text_4:
# 127 "data/expansion_1/scene02.pory"
	.string "O- Oh!\p"
	.string "W- Well, my mother always puts on old\nmovies. I… guess I've been paying more\lattention to them.\p"
	.string "Since… whenever that was, at least.$"

Expansion1_Rival_Scene02b_Text_5:
# 131 "data/expansion_1/scene02.pory"
	.string "That's cool.$"

Expansion1_Rival_Scene02b_Text_6:
# 133 "data/expansion_1/scene02.pory"
	.string "Anyways, Son of Jaks… What kind of\ncontent pack did you grab this from\lin the first place?\p"
	.string "That wasn't exactly a ‘whimsical\nadventure’ themed event.$"

Expansion1_Rival_Scene02b_Text_7:
# 138 "data/expansion_1/scene02.pory"
	.string "Y-Yes! That was very scary…\p"
	.string "…especially in this 2DVR type setting.$"

Expansion1_Rival_Scene02b_Text_8:
# 144 "data/expansion_1/scene02.pory"
	.string "I didn't see anything about horror, so\nI'm pretty sure something's gone wrong.\p"
	.string "Maybe… some mods are conflicting?\nIntersecting with each other?\p"
	.string "Either way, setting it back up and\ntesting for all that would be a lengthy\lprocess.\p"
	.string "I don't even know if it breaks\nprogression, so maybe we should try\lto just push forward?$"

Expansion1_Rival_Scene02b_Text_9:
# 149 "data/expansion_1/scene02.pory"
	.string "Battle of the mods, eh?$"

Expansion1_Rival_Scene02b_Text_10:
# 151 "data/expansion_1/scene02.pory"
	.string "I still can't say that for sure.$"

Expansion1_Rival_Scene02b_Text_11:
# 156 "data/expansion_1/scene02.pory"
	.string "Hey, I'm agreeing with you. Let's push\nforward. This sounds interesting{EMOJI_TILDE}{UNK_SPACER}$"

Expansion1_Rival_Scene02b_Text_12:
# 158 "data/expansion_1/scene02.pory"
	.string "Oh! We should tell Redd, too!$"

Expansion1_Rival_Scene02b_Text_13:
# 160 "data/expansion_1/scene02.pory"
	.string "Definitely. He just walked down along\nthe shoreline to check it out.$"

Expansion1_Rival_Scene02b_Text_14:
# 162 "data/expansion_1/scene02.pory"
	.string "{PLAYER}, do you mind walking down\nto go find him?\p"
	.string "I'll stay here with Baron and Sakura\nand see if we can set up a home base\lof sorts.$"

Expansion1_Rival_Scene02c_Text_0:
# 184 "data/expansion_1/scene02.pory"
	.string "Oh, {PLAYER}!$"

Expansion1_Rival_Scene02c_Text_1:
# 188 "data/expansion_1/scene02.pory"
	.string "You met with the other two already,\nright?\p"
	.string "And Jakson's with you, too?\nPerfect, he can fix this mess.\p"
	.string "But no Harper, huh?$"

Expansion1_Rival_Scene02c_Text_2:
# 195 "data/expansion_1/scene02.pory"
	.string "I hope she's safe out there.$"

Expansion1_Rival_Scene02c_Text_3:
# 198 "data/expansion_1/scene02.pory"
	.string "I was trying to see what was South\nof that cape up there…$"

Expansion1_Rival_Scene02c_Text_4:
# 204 "data/expansion_1/scene02.pory"
	.string "I'm pretty sure that's supposed\nto be our ship, right?\p"
	.string "It doesn't exactly look like it can\nget us home like that.\p"
	.string "And I don't think this virtual body\nof mine can carry a boat from land\lto water.$"

Expansion1_Rival_Scene02c_Text_5:
# 213 "data/expansion_1/scene02.pory"
	.string "Hmm… well, let's just report back\nto the others.$"

Expansion1_Rival_Scene02d_Text_0:
# 259 "data/expansion_1/scene02.pory"
	.string "Welcome back.$"

Expansion1_Rival_Scene02d_Text_1:
# 261 "data/expansion_1/scene02.pory"
	.string "We managed to set up a camp, somehow.$"

Expansion1_Rival_Scene02d_Text_2:
# 263 "data/expansion_1/scene02.pory"
	.string "Everyone knows you just have to\nstart clicking around until the game\ladvances!$"

Expansion1_Rival_Scene02d_Text_3:
# 274 "data/expansion_1/scene02.pory"
	.string "Oh… No sign of Harper from your side,\nhuh? Damn…$"

Expansion1_Rival_Scene02d_Text_4:
# 276 "data/expansion_1/scene02.pory"
	.string "There was a wrecked boat out there,\nprobably ours, but we couldn't reach it.\p"
	.string "There's a group of Pokémon blocking\nus from getting further.$"

Expansion1_Rival_Scene02d_Text_5:
# 281 "data/expansion_1/scene02.pory"
	.string "That must be some sort of story blocker.$"

Expansion1_Rival_Scene02d_Text_6:
# 283 "data/expansion_1/scene02.pory"
	.string "One where we have access to whatever\nflag progresses it…?$"

Expansion1_Rival_Scene02d_Text_7:
# 285 "data/expansion_1/scene02.pory"
	.string "Well…$"

Expansion1_Rival_Scene02d_Text_8:
# 287 "data/expansion_1/scene02.pory"
	.string "Okay, how about your debug menu?$"

Expansion1_Rival_Scene02d_Text_9:
# 292 "data/expansion_1/scene02.pory"
	.string "…I forgot to turn it on.$"

Expansion1_Rival_Scene02d_Text_10:
# 299 "data/expansion_1/scene02.pory"
	.string "Then… I guess we're betting that\nshe's not stuck over there.$"

Expansion1_Rival_Scene02d_Text_11:
# 301 "data/expansion_1/scene02.pory"
	.string "I… I hope she's safe…$"

Expansion1_Rival_Scene02d_Text_12:
# 305 "data/expansion_1/scene02.pory"
	.string "Hmm…$"

Expansion1_Rival_Scene02d_Text_13:
# 307 "data/expansion_1/scene02.pory"
	.string "What are you all clammed up for?\p"
	.string "We've got a job to do. Operation\n‘Save the Harpy’ is ready to start!$"

Expansion1_Rival_Scene02d_Text_14:
# 310 "data/expansion_1/scene02.pory"
	.string "Right. Any idea where she could be?$"

Expansion1_Rival_Scene02d_Text_15:
# 312 "data/expansion_1/scene02.pory"
	.string "I found a dark cave deep underwater\nthat I couldn't get through.\lAlmost like I needed Flash again.$"

Expansion1_Rival_Scene02d_Text_16:
# 314 "data/expansion_1/scene02.pory"
	.string "Would a post-game dungeon be designed\naround HM Flash through?$"

Expansion1_Rival_Scene02d_Text_17:
# 319 "data/expansion_1/scene02.pory"
	.string "O-Oh! One of the sailors here was\nsaying something about a “Light”.$"

Expansion1_Rival_Scene02d_Text_18:
# 321 "data/expansion_1/scene02.pory"
	.string "As good a lead as any.$"

Expansion1_Rival_Scene02d_Text_19:
# 323 "data/expansion_1/scene02.pory"
	.string "If Harper's lacking the unique key item,\nno way she'd get through the darkness.$"

Expansion1_Rival_Scene02d_Text_20:
# 325 "data/expansion_1/scene02.pory"
	.string "That sounds like it'd be fightening\nfor her…$"

Expansion1_Rival_Scene02d_Text_21:
# 327 "data/expansion_1/scene02.pory"
	.string "Good thing she doesn't have to eat.$"

Expansion1_Rival_Scene02d_Text_22:
# 329 "data/expansion_1/scene02.pory"
	.string "Uh…$"

Expansion1_Rival_Scene02d_Text_23:
# 334 "data/expansion_1/scene02.pory"
	.string "D- Don't worry. We'll get her out of\nthere.$"

Expansion1_Rival_Scene02d_Text_24:
# 336 "data/expansion_1/scene02.pory"
	.string "Absolutely.\nAlright, let's split up.\p"
	.string "We shouldn't count on her being stuck\nin that dark cave, but we've got to look\lthere too.$"

Expansion1_Rival_Scene02d_Text_25:
# 339 "data/expansion_1/scene02.pory"
	.string "Move out, team!\p"
	.string "Operation… START-O!!!$"
