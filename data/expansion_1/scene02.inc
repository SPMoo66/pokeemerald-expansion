Expansion1_Rival_Scene02_Setup::
# 14 "data/expansion_1/scene02.pory"
	lock
# 15 "data/expansion_1/scene02.pory"
	setvar VAR_EMERALBODY_RIVAL_STATE, 23
# 16 "data/expansion_1/scene02.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 17 "data/expansion_1/scene02.pory"
	setflag FLAG_MAUVE_CAMP_REMOVE_CAMP_TILES
# 18 "data/expansion_1/scene02.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 19 "data/expansion_1/scene02.pory"
	warpcontinuescript MAP_MAUVE_CAMP, 0, 13, Expansion1_Rival_Scene02
	return


Expansion1_Rival_Scene02::
# 23 "data/expansion_1/scene02.pory"
	setflag FLAG_TEMP_2
# 24 "data/expansion_1/scene02.pory"
	setflag FLAG_TEMP_6
# 25 "data/expansion_1/scene02.pory"
	setobjectxyperm 6, 10, 13
# 26 "data/expansion_1/scene02.pory"
	setobjectxyperm 7, 21, 19
# 27 "data/expansion_1/scene02.pory"
	setobjectxyperm 8, 19, 19
# 28 "data/expansion_1/scene02.pory"
	turnobject LOCALID_PLAYER, DIR_EAST
# 29 "data/expansion_1/scene02.pory"
	removeobject 10
# 30 "data/expansion_1/scene02.pory"
	fadescreen FADE_FROM_BLACK
# 31 "data/expansion_1/scene02.pory"
	delay 20
# 32 "data/expansion_1/scene02.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRightSlow4
# 33 "data/expansion_1/scene02.pory"
	waitmovement 0
# 34 "data/expansion_1/scene02.pory"
	delay 20
# 35 "data/expansion_1/scene02.pory"
	applymovement LOCALID_PLAYER, Common_Movement_Talking
# 36 "data/expansion_1/scene02.pory"
	delay 40
# 37 "data/expansion_1/scene02.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterLeft
# 38 "data/expansion_1/scene02.pory"
	waitmovement 0
# 39 "data/expansion_1/scene02.pory"
	playse SE_PIN
# 40 "data/expansion_1/scene02.pory"
	applymovement 6, Common_Movement_ExclamationMark
# 41 "data/expansion_1/scene02.pory"
	delay 40
# 42 "data/expansion_1/scene02.pory"
	speakername CommonText_Jakson
# 43 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02_Text_0, MSGBOX_AUTOCLOSE
# 44 "data/expansion_1/scene02.pory"
	applymovement 6, Common_Movement_WalkLeft2
# 45 "data/expansion_1/scene02.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight3
# 46 "data/expansion_1/scene02.pory"
	waitmovement 0
# 47 "data/expansion_1/scene02.pory"
	speakername CommonText_Jakson
# 48 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02_Text_1, MSGBOX_AUTOCLOSE
# 51 "data/expansion_1/scene02.pory"
	applymovement 6, Common_Movement_WalkRight11
# 52 "data/expansion_1/scene02.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight11
# 53 "data/expansion_1/scene02.pory"
	waitmovement 0
# 54 "data/expansion_1/scene02.pory"
	applymovement 6, Common_Movement_WalkDown
# 55 "data/expansion_1/scene02.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight
# 56 "data/expansion_1/scene02.pory"
	waitmovement 0
# 57 "data/expansion_1/scene02.pory"
	applymovement 6, Common_Movement_WalkDown
# 58 "data/expansion_1/scene02.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 59 "data/expansion_1/scene02.pory"
	waitmovement 0
# 60 "data/expansion_1/scene02.pory"
	applymovement 6, Common_Movement_WalkRight
# 61 "data/expansion_1/scene02.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 62 "data/expansion_1/scene02.pory"
	waitmovement 0
# 63 "data/expansion_1/scene02.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterDown
# 64 "data/expansion_1/scene02.pory"
	waitmovement 0
# 65 "data/expansion_1/scene02.pory"
	delay 10
# 66 "data/expansion_1/scene02.pory"
	special SpawnCameraObject
# 67 "data/expansion_1/scene02.pory"
	applymovement LOCALID_CAMERA, Common_Movement_WalkDownSlow3
# 68 "data/expansion_1/scene02.pory"
	waitmovement 0
# 69 "data/expansion_1/scene02.pory"
	fadeoutbgm 0
# 70 "data/expansion_1/scene02.pory"
	speakername CommonText_Sakura
# 71 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02_Text_2, MSGBOX_AUTOCLOSE
# 74 "data/expansion_1/scene02.pory"
	applymovement 8, Common_Movement_ShakeHorizontal
# 75 "data/expansion_1/scene02.pory"
	waitmovement 0
# 76 "data/expansion_1/scene02.pory"
	speakername CommonText_Sakura
# 77 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02_Text_3, MSGBOX_AUTOCLOSE
# 78 "data/expansion_1/scene02.pory"
	applymovement 8, Common_Movement_ShakeHorizontal
# 79 "data/expansion_1/scene02.pory"
	waitmovement 0
# 80 "data/expansion_1/scene02.pory"
	delay 10
# 81 "data/expansion_1/scene02.pory"
	applymovement 7, Common_Movement_Thinking
# 82 "data/expansion_1/scene02.pory"
	delay 70
# 83 "data/expansion_1/scene02.pory"
	applymovement 7, Common_Movement_SweatDrop
# 84 "data/expansion_1/scene02.pory"
	speakername CommonText_Jakson
# 85 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02_Text_4, MSGBOX_AUTOCLOSE
# 89 "data/expansion_1/scene02.pory"
	fadeinbgm 0
# 90 "data/expansion_1/scene02.pory"
	applymovement 7, Common_Movement_WalkInPlaceFasterUp
# 91 "data/expansion_1/scene02.pory"
	waitmovement 0
# 92 "data/expansion_1/scene02.pory"
	delay 20
# 93 "data/expansion_1/scene02.pory"
	call GetBaronsName
# 94 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02_Text_5, MSGBOX_AUTOCLOSE
# 97 "data/expansion_1/scene02.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 98 "data/expansion_1/scene02.pory"
	warpcontinuescript MAP_MAUVE_CAMP, 20, 17, Expansion1_Rival_Scene02b
	return


Expansion1_Rival_Scene02b::
# 102 "data/expansion_1/scene02.pory"
	removeobject 1
# 103 "data/expansion_1/scene02.pory"
	removeobject 2
# 104 "data/expansion_1/scene02.pory"
	removeobject 5
# 105 "data/expansion_1/scene02.pory"
	removeobject 10
# 106 "data/expansion_1/scene02.pory"
	setobjectxyperm 6, 19, 18
# 107 "data/expansion_1/scene02.pory"
	setobjectxyperm 7, 21, 18
# 108 "data/expansion_1/scene02.pory"
	setobjectxyperm 8, 20, 19
# 109 "data/expansion_1/scene02.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_RIGHT
# 110 "data/expansion_1/scene02.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_LEFT
# 111 "data/expansion_1/scene02.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_FACE_UP
# 112 "data/expansion_1/scene02.pory"
	addobject 6
# 113 "data/expansion_1/scene02.pory"
	addobject 7
# 114 "data/expansion_1/scene02.pory"
	addobject 8
# 116 "data/expansion_1/scene02.pory"
	fadescreen FADE_FROM_BLACK
# 117 "data/expansion_1/scene02.pory"
	special SpawnCameraObject
# 118 "data/expansion_1/scene02.pory"
	applymovement LOCALID_CAMERA, Common_Movement_WalkDown2
# 119 "data/expansion_1/scene02.pory"
	waitmovement 0
# 121 "data/expansion_1/scene02.pory"
	speakername CommonText_Jakson
# 122 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02b_Text_0
# 123 "data/expansion_1/scene02.pory"
	speakername CommonText_Sakura
# 124 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02b_Text_1
# 125 "data/expansion_1/scene02.pory"
	call GetBaronsName
# 126 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02b_Text_2
# 127 "data/expansion_1/scene02.pory"
	speakername CommonText_Jakson
# 128 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02b_Text_3, MSGBOX_AUTOCLOSE
# 129 "data/expansion_1/scene02.pory"
	playse SE_PIN
# 130 "data/expansion_1/scene02.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 131 "data/expansion_1/scene02.pory"
	delay 40
# 132 "data/expansion_1/scene02.pory"
	call GetBaronsName
# 133 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02b_Text_4
# 136 "data/expansion_1/scene02.pory"
	speakername CommonText_Jakson
# 137 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02b_Text_5
# 138 "data/expansion_1/scene02.pory"
	speakername CommonText_Sakura
# 139 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02b_Text_6, MSGBOX_AUTOCLOSE
# 141 "data/expansion_1/scene02.pory"
	applymovement 7, Common_Movement_WalkInPlaceFasterLeft
# 142 "data/expansion_1/scene02.pory"
	waitmovement 0
# 143 "data/expansion_1/scene02.pory"
	call GetBaronsName
# 144 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02b_Text_7
# 146 "data/expansion_1/scene02.pory"
	applymovement 6, Common_Movement_SweatDrop
# 147 "data/expansion_1/scene02.pory"
	playse SE_M_METRONOME
# 148 "data/expansion_1/scene02.pory"
	delay 40
# 149 "data/expansion_1/scene02.pory"
	speakername CommonText_Jakson
# 150 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02b_Text_8
# 154 "data/expansion_1/scene02.pory"
	speakername CommonText_Sakura
# 155 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02b_Text_9
# 156 "data/expansion_1/scene02.pory"
	speakername CommonText_Jakson
# 157 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02b_Text_10
# 158 "data/expansion_1/scene02.pory"
	applymovement 8, Common_Movement_MusicNote
# 159 "data/expansion_1/scene02.pory"
	playse SE_RG_HELP_OPEN
# 160 "data/expansion_1/scene02.pory"
	delay 40
# 161 "data/expansion_1/scene02.pory"
	speakername CommonText_Sakura
# 162 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02b_Text_11
# 163 "data/expansion_1/scene02.pory"
	call GetBaronsName
# 164 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02b_Text_12
# 165 "data/expansion_1/scene02.pory"
	speakername CommonText_Sakura
# 166 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02b_Text_13
# 167 "data/expansion_1/scene02.pory"
	speakername CommonText_Jakson
# 168 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02b_Text_14, MSGBOX_AUTOCLOSE
# 170 "data/expansion_1/scene02.pory"
	applymovement LOCALID_PLAYER, Common_Movement_Smile
# 171 "data/expansion_1/scene02.pory"
	playse SE_M_MORNING_SUN
# 172 "data/expansion_1/scene02.pory"
	delay 40
# 173 "data/expansion_1/scene02.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight2
# 174 "data/expansion_1/scene02.pory"
	waitmovement 0
# 175 "data/expansion_1/scene02.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown6
# 176 "data/expansion_1/scene02.pory"
	delay 20
# 177 "data/expansion_1/scene02.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 178 "data/expansion_1/scene02.pory"
	setflag FLAG_SYS_SPAWN_INVISIBLE
# 179 "data/expansion_1/scene02.pory"
	warpcontinuescript MAP_MAUVE_ISLAND_SOUTH, 17, 23, Expansion1_Rival_Scene02c
	return


Expansion1_Rival_Scene02c::
# 183 "data/expansion_1/scene02.pory"
	fadescreen FADE_FROM_BLACK
# 184 "data/expansion_1/scene02.pory"
	addobject 6
# 185 "data/expansion_1/scene02.pory"
	applymovement 6, Common_Movement_WalkDown4
# 186 "data/expansion_1/scene02.pory"
	waitmovement 0
# 187 "data/expansion_1/scene02.pory"
	applymovement 6, Common_Movement_Talking
# 188 "data/expansion_1/scene02.pory"
	delay 40
# 189 "data/expansion_1/scene02.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterUp
# 190 "data/expansion_1/scene02.pory"
	waitmovement 0
# 191 "data/expansion_1/scene02.pory"
	delay 10
# 192 "data/expansion_1/scene02.pory"
	speakername CommonText_Redd
# 193 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02c_Text_0, MSGBOX_AUTOCLOSE
# 194 "data/expansion_1/scene02.pory"
	applymovement 6, Common_Movement_WalkDown
# 195 "data/expansion_1/scene02.pory"
	waitmovement 0
# 196 "data/expansion_1/scene02.pory"
	speakername CommonText_Redd
# 197 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02c_Text_1, MSGBOX_AUTOCLOSE
# 200 "data/expansion_1/scene02.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterDown
# 201 "data/expansion_1/scene02.pory"
	waitmovement 0
# 202 "data/expansion_1/scene02.pory"
	delay 20
# 203 "data/expansion_1/scene02.pory"
	speakername CommonText_Redd
# 204 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02c_Text_2
# 205 "data/expansion_1/scene02.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterRight
# 206 "data/expansion_1/scene02.pory"
	waitmovement 0
# 207 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02c_Text_3, MSGBOX_AUTOCLOSE
# 208 "data/expansion_1/scene02.pory"
	delay 20
# 209 "data/expansion_1/scene02.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterLeft
# 210 "data/expansion_1/scene02.pory"
	waitmovement 0
# 211 "data/expansion_1/scene02.pory"
	delay 30
# 212 "data/expansion_1/scene02.pory"
	speakername CommonText_Redd
# 213 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02c_Text_4, MSGBOX_AUTOCLOSE
# 216 "data/expansion_1/scene02.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterUp
# 217 "data/expansion_1/scene02.pory"
	waitmovement 0
# 218 "data/expansion_1/scene02.pory"
	delay 10
# 219 "data/expansion_1/scene02.pory"
	applymovement 2, Common_Movement_Thinking
# 220 "data/expansion_1/scene02.pory"
	delay 60
# 221 "data/expansion_1/scene02.pory"
	speakername CommonText_Redd
# 222 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02c_Text_5, MSGBOX_AUTOCLOSE
# 223 "data/expansion_1/scene02.pory"
	applymovement 6, Common_Movement_WalkRight
# 224 "data/expansion_1/scene02.pory"
	applymovement 2, Common_Movement_WalkUp
# 225 "data/expansion_1/scene02.pory"
	waitmovement 0
# 226 "data/expansion_1/scene02.pory"
	applymovement 6, Common_Movement_WalkUp5
# 227 "data/expansion_1/scene02.pory"
	applymovement 2, Common_Movement_WalkUp5
# 228 "data/expansion_1/scene02.pory"
	delay 20
# 229 "data/expansion_1/scene02.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 230 "data/expansion_1/scene02.pory"
	setflag FLAG_SYS_SPAWN_INVISIBLE
# 231 "data/expansion_1/scene02.pory"
	clearflag FLAG_MAUVE_CAMP_REMOVE_CAMP_TILES
# 232 "data/expansion_1/scene02.pory"
	warpcontinuescript MAP_MAUVE_CAMP, 23, 12, Expansion1_Rival_Scene02d
	return


Expansion1_Rival_Scene02d::
# 236 "data/expansion_1/scene02.pory"
	removeobject 1
# 237 "data/expansion_1/scene02.pory"
	removeobject 3
# 238 "data/expansion_1/scene02.pory"
	removeobject 5
# 239 "data/expansion_1/scene02.pory"
	setobjectxyperm 6, 23, 11
# 240 "data/expansion_1/scene02.pory"
	setobjectxyperm 7, 22, 12
# 241 "data/expansion_1/scene02.pory"
	setobjectxyperm 8, 24, 12
# 242 "data/expansion_1/scene02.pory"
	setobjectxyperm 10, 22, 19
# 243 "data/expansion_1/scene02.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_DOWN
# 244 "data/expansion_1/scene02.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_RIGHT
# 245 "data/expansion_1/scene02.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_FACE_LEFT
# 246 "data/expansion_1/scene02.pory"
	addobject 6
# 247 "data/expansion_1/scene02.pory"
	addobject 7
# 248 "data/expansion_1/scene02.pory"
	addobject 8
# 249 "data/expansion_1/scene02.pory"
	addobject 9
# 250 "data/expansion_1/scene02.pory"
	addobject 10
# 251 "data/expansion_1/scene02.pory"
	fadescreen FADE_FROM_BLACK
# 252 "data/expansion_1/scene02.pory"
	applymovement 9, Common_Movement_WalkUp4
# 253 "data/expansion_1/scene02.pory"
	applymovement 10, Common_Movement_WalkUp4
# 254 "data/expansion_1/scene02.pory"
	waitmovement 0
# 255 "data/expansion_1/scene02.pory"
	applymovement 7, Common_Movement_WalkInPlaceFasterDown
# 256 "data/expansion_1/scene02.pory"
	applymovement 9, Common_Movement_WalkRight
# 257 "data/expansion_1/scene02.pory"
	applymovement 10, Common_Movement_WalkUp
# 258 "data/expansion_1/scene02.pory"
	waitmovement 0
# 259 "data/expansion_1/scene02.pory"
	applymovement 8, Common_Movement_WalkInPlaceFasterDown
# 260 "data/expansion_1/scene02.pory"
	applymovement 9, Common_Movement_WalkUp
# 261 "data/expansion_1/scene02.pory"
	applymovement 10, Common_Movement_WalkUp
# 262 "data/expansion_1/scene02.pory"
	waitmovement 0
# 263 "data/expansion_1/scene02.pory"
	applymovement 7, Common_Movement_LockFacingDirection
# 264 "data/expansion_1/scene02.pory"
	waitmovement 0
# 265 "data/expansion_1/scene02.pory"
	applymovement 7, Common_Movement_WalkUp
# 266 "data/expansion_1/scene02.pory"
	waitmovement 0
# 267 "data/expansion_1/scene02.pory"
	applymovement 8, Common_Movement_WalkInPlaceFasterLeft
# 268 "data/expansion_1/scene02.pory"
	waitmovement 0
# 269 "data/expansion_1/scene02.pory"
	speakername CommonText_Jakson
# 270 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02d_Text_0
# 271 "data/expansion_1/scene02.pory"
	call GetBaronsName
# 272 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02d_Text_1
# 273 "data/expansion_1/scene02.pory"
	speakername CommonText_Sakura
# 274 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02d_Text_2, MSGBOX_AUTOCLOSE
# 275 "data/expansion_1/scene02.pory"
	delay 10
# 276 "data/expansion_1/scene02.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterLeft
# 277 "data/expansion_1/scene02.pory"
	waitmovement 0
# 278 "data/expansion_1/scene02.pory"
	delay 30
# 279 "data/expansion_1/scene02.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterRight
# 280 "data/expansion_1/scene02.pory"
	waitmovement 0
# 281 "data/expansion_1/scene02.pory"
	delay 30
# 282 "data/expansion_1/scene02.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterDown
# 283 "data/expansion_1/scene02.pory"
	waitmovement 0
# 284 "data/expansion_1/scene02.pory"
	speakername CommonText_Jakson
# 285 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02d_Text_3
# 286 "data/expansion_1/scene02.pory"
	speakername CommonText_Redd
# 287 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02d_Text_4, MSGBOX_AUTOCLOSE
# 289 "data/expansion_1/scene02.pory"
	applymovement 6, Common_Movement_Thinking
# 290 "data/expansion_1/scene02.pory"
	delay 40
# 291 "data/expansion_1/scene02.pory"
	speakername CommonText_Jakson
# 292 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02d_Text_5
# 293 "data/expansion_1/scene02.pory"
	speakername CommonText_Redd
# 294 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02d_Text_6
# 295 "data/expansion_1/scene02.pory"
	speakername CommonText_Jakson
# 296 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02d_Text_7
# 297 "data/expansion_1/scene02.pory"
	speakername CommonText_Redd
# 298 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02d_Text_8, MSGBOX_AUTOCLOSE
# 299 "data/expansion_1/scene02.pory"
	applymovement 6, Common_Movement_SweatDrop
# 300 "data/expansion_1/scene02.pory"
	playse SE_M_METRONOME
# 301 "data/expansion_1/scene02.pory"
	delay 40
# 302 "data/expansion_1/scene02.pory"
	speakername CommonText_Jakson
# 303 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02d_Text_9, MSGBOX_AUTOCLOSE
# 304 "data/expansion_1/scene02.pory"
	applymovement 10, Common_Movement_SweatDrop
# 305 "data/expansion_1/scene02.pory"
	applymovement 8, Common_Movement_SweatDrop
# 306 "data/expansion_1/scene02.pory"
	applymovement 9, Common_Movement_SweatDrop
# 307 "data/expansion_1/scene02.pory"
	playse SE_M_METRONOME
# 308 "data/expansion_1/scene02.pory"
	delay 40
# 309 "data/expansion_1/scene02.pory"
	speakername CommonText_Redd
# 310 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02d_Text_10
# 311 "data/expansion_1/scene02.pory"
	call GetBaronsName
# 312 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02d_Text_11, MSGBOX_AUTOCLOSE
# 313 "data/expansion_1/scene02.pory"
	applymovement 6, Common_Movement_Thinking
# 314 "data/expansion_1/scene02.pory"
	delay 40
# 315 "data/expansion_1/scene02.pory"
	speakername CommonText_Jakson
# 316 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02d_Text_12
# 317 "data/expansion_1/scene02.pory"
	speakername CommonText_Sakura
# 318 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02d_Text_13
# 320 "data/expansion_1/scene02.pory"
	speakername CommonText_Jakson
# 321 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02d_Text_14
# 322 "data/expansion_1/scene02.pory"
	speakername CommonText_Redd
# 323 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02d_Text_15
# 324 "data/expansion_1/scene02.pory"
	speakername CommonText_Jakson
# 325 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02d_Text_16, MSGBOX_AUTOCLOSE
# 326 "data/expansion_1/scene02.pory"
	playse SE_PIN
# 327 "data/expansion_1/scene02.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 328 "data/expansion_1/scene02.pory"
	delay 40
# 329 "data/expansion_1/scene02.pory"
	call GetBaronsName
# 330 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02d_Text_17
# 331 "data/expansion_1/scene02.pory"
	speakername CommonText_Jakson
# 332 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02d_Text_18
# 333 "data/expansion_1/scene02.pory"
	speakername CommonText_Sakura
# 334 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02d_Text_19
# 335 "data/expansion_1/scene02.pory"
	call GetBaronsName
# 336 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02d_Text_20
# 337 "data/expansion_1/scene02.pory"
	speakername CommonText_Redd
# 338 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02d_Text_21
# 339 "data/expansion_1/scene02.pory"
	call GetBaronsName
# 340 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02d_Text_22, MSGBOX_AUTOCLOSE
# 341 "data/expansion_1/scene02.pory"
	applymovement 10, Common_Movement_SweatDrop
# 342 "data/expansion_1/scene02.pory"
	playse SE_M_METRONOME
# 343 "data/expansion_1/scene02.pory"
	delay 40
# 344 "data/expansion_1/scene02.pory"
	speakername CommonText_Redd
# 345 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02d_Text_23
# 346 "data/expansion_1/scene02.pory"
	speakername CommonText_Jakson
# 347 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02d_Text_24
# 349 "data/expansion_1/scene02.pory"
	speakername CommonText_Sakura
# 350 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02d_Text_25, MSGBOX_AUTOCLOSE
# 353 "data/expansion_1/scene02.pory"
	setvar VAR_EMERALBODY_RIVAL_STATE, 24
# 354 "data/expansion_1/scene02.pory"
	savebgm MUS_DP_CREDITS
# 355 "data/expansion_1/scene02.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 356 "data/expansion_1/scene02.pory"
	warpcontinuescript MAP_MAUVE_CAMP, 16, 16, Expansion1_Rival_Scene02e
	return


Expansion1_Rival_Scene02e::
# 360 "data/expansion_1/scene02.pory"
	fadescreen FADE_FROM_BLACK
# 361 "data/expansion_1/scene02.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 362 "data/expansion_1/scene02.pory"
	setrespawn HEAL_LOCATION_MAUVE_CAMP
# 363 "data/expansion_1/scene02.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 31
	goto_if_lt Expansion1_Rival_Scene02e_2
Expansion1_Rival_Scene02e_1:
# 367 "data/expansion_1/scene02.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 51
	goto_if_eq Expansion1_Rival_Scene02e_4
	return

Expansion1_Rival_Scene02e_2:
# 364 "data/expansion_1/scene02.pory"
	delay 20
# 365 "data/expansion_1/scene02.pory"
	helpwindow HELP_EXPANSION_1_BOAT_EXPLANATION
	goto Expansion1_Rival_Scene02e_1

Expansion1_Rival_Scene02e_4:
# 368 "data/expansion_1/scene02.pory"
	delay 20
# 369 "data/expansion_1/scene02.pory"
	msgbox Expansion1_Rival_Scene02e_Text_0
# 370 "data/expansion_1/scene02.pory"
	giveitem ITEM_BIG_NUGGET, 2
# 371 "data/expansion_1/scene02.pory"
	giveitem ITEM_BOTTLE_CAP, 1
# 372 "data/expansion_1/scene02.pory"
	buffernumberstring STR_VAR_1, 8
# 373 "data/expansion_1/scene02.pory"
	setvar VAR_0x8004, 8
# 374 "data/expansion_1/scene02.pory"
	special GiveFrontierBattlePoints
# 375 "data/expansion_1/scene02.pory"
	msgbox PlayerObtainedXBattlePoints, MSGBOX_GETPOINTS
# 376 "data/expansion_1/scene02.pory"
	closemessage
	return


Expansion1_Rival_Scene02_Text_0:
# 43 "data/expansion_1/scene02.pory"
	.string "Oh, {PLAYER}, it's you. Thank goodness.$"

Expansion1_Rival_Scene02_Text_1:
# 48 "data/expansion_1/scene02.pory"
	.string "Sorry, but it seems like something's\ngone horribly wrong.\p"
	.string "I'd say we should exchange info,\nbut I {PAUSE 30}JUST {PAUSE 60}heard Sakura's voice.\p"
	.string "She's around here somewhere, so we\nshould probably find her first.$"

Expansion1_Rival_Scene02_Text_2:
# 71 "data/expansion_1/scene02.pory"
	.string "You maniac!\p"
	.string "You blew it up!\p"
	.string "Agh, {PAUSE 60}damn you!$"

Expansion1_Rival_Scene02_Text_3:
# 77 "data/expansion_1/scene02.pory"
	.string "God {PAUSE 60}damn {PAUSE 30}you {PAUSE 30}all {PAUSE 30}to {PAUSE 30}hell!$"

Expansion1_Rival_Scene02_Text_4:
# 85 "data/expansion_1/scene02.pory"
	.string "… {PAUSE 30}… {PAUSE 30}…{PAUSE 30}\n"
	.string "… {PAUSE 30}… {PAUSE 30}…\l"
	.string "… {PAUSE 30}… {PAUSE 30}…\l"
	.string "Ah, {PAUSE 30}well there's Baron too.$"

Expansion1_Rival_Scene02_Text_5:
# 94 "data/expansion_1/scene02.pory"
	.string "Oh, hey guys. It's good to see\nsomeone sa-\l"
	.string "I mean…\p"
	.string "Well, it's good to be together again!$"

Expansion1_Rival_Scene02b_Text_0:
# 122 "data/expansion_1/scene02.pory"
	.string "You good now, Sakura?$"

Expansion1_Rival_Scene02b_Text_1:
# 124 "data/expansion_1/scene02.pory"
	.string "What? Yeah, I'm always good.\nYou just can't pass up a chance like\lthat{EMOJI_TILDE}{UNK_SPACER}$"

Expansion1_Rival_Scene02b_Text_2:
# 126 "data/expansion_1/scene02.pory"
	.string "That was Planet of the Apes, right?$"

Expansion1_Rival_Scene02b_Text_3:
# 128 "data/expansion_1/scene02.pory"
	.string "You've seen it, Baron? I remember when\nwe had to get you to see The Godfather\lback when.$"

Expansion1_Rival_Scene02b_Text_4:
# 133 "data/expansion_1/scene02.pory"
	.string "O- {PAUSE 30}Oh!\p"
	.string "W- {PAUSE 30}Well, my mother always puts on old\nmovies. I… {PAUSE 100}guess I've been paying more\lattention to them.\p"
	.string "Since… {PAUSE 100}whenever that was, at least.$"

Expansion1_Rival_Scene02b_Text_5:
# 137 "data/expansion_1/scene02.pory"
	.string "That's cool.$"

Expansion1_Rival_Scene02b_Text_6:
# 139 "data/expansion_1/scene02.pory"
	.string "Anyways, Son of Jaks… {PAUSE 100}What kind of\ncontent pack did you grab this from\lin the first place?\p"
	.string "That wasn't exactly a ‘whimsical\nadventure’ themed event.$"

Expansion1_Rival_Scene02b_Text_7:
# 144 "data/expansion_1/scene02.pory"
	.string "Y-Yes! That was very scary…\p"
	.string "…{PAUSE 100}especially in this 2DVR type setting.$"

Expansion1_Rival_Scene02b_Text_8:
# 150 "data/expansion_1/scene02.pory"
	.string "I didn't see anything about horror, so\nI'm pretty sure something's gone wrong.\p"
	.string "Maybe… {PAUSE 100}some mods are conflicting?\nIntersecting with each other?\p"
	.string "Either way, setting it back up and\ntesting for all that would be a lengthy\lprocess.\p"
	.string "I don't even know if it breaks\nprogression, so maybe we should try\lto just push forward?$"

Expansion1_Rival_Scene02b_Text_9:
# 155 "data/expansion_1/scene02.pory"
	.string "Battle of the mods, eh?$"

Expansion1_Rival_Scene02b_Text_10:
# 157 "data/expansion_1/scene02.pory"
	.string "I still can't say that for sure.$"

Expansion1_Rival_Scene02b_Text_11:
# 162 "data/expansion_1/scene02.pory"
	.string "Hey, I'm agreeing with you. Let's push\nforward. This {PAUSE 30}sounds {PAUSE 30}interesting{EMOJI_TILDE}{UNK_SPACER}$"

Expansion1_Rival_Scene02b_Text_12:
# 164 "data/expansion_1/scene02.pory"
	.string "Oh! We should tell Redd, too!$"

Expansion1_Rival_Scene02b_Text_13:
# 166 "data/expansion_1/scene02.pory"
	.string "Definitely. He just walked down along\nthe shoreline to check it out.$"

Expansion1_Rival_Scene02b_Text_14:
# 168 "data/expansion_1/scene02.pory"
	.string "{PLAYER}, do you mind walking down\nto go find him?\p"
	.string "I'll stay here with Baron and Sakura\nand see if we can set up a home base\lof sorts.$"

Expansion1_Rival_Scene02c_Text_0:
# 193 "data/expansion_1/scene02.pory"
	.string "Oh, {PLAYER}!$"

Expansion1_Rival_Scene02c_Text_1:
# 197 "data/expansion_1/scene02.pory"
	.string "You met with the other two already,\nright?\p"
	.string "And Jakson's with you, too?\nPerfect, he can fix this mess.\p"
	.string "But no Harper, huh?$"

Expansion1_Rival_Scene02c_Text_2:
# 204 "data/expansion_1/scene02.pory"
	.string "I hope she's safe out there.$"

Expansion1_Rival_Scene02c_Text_3:
# 207 "data/expansion_1/scene02.pory"
	.string "I was trying to see what was South\nof that cape up there…$"

Expansion1_Rival_Scene02c_Text_4:
# 213 "data/expansion_1/scene02.pory"
	.string "I'm pretty sure that's supposed\nto be our ship, right?\p"
	.string "It {PAUSE 30}doesn't {PAUSE 60}exactly look like it can\nget us home like that.\p"
	.string "And I don't think this virtual body\nof mine can carry a boat from land\lto water.$"

Expansion1_Rival_Scene02c_Text_5:
# 222 "data/expansion_1/scene02.pory"
	.string "Hmm… {PAUSE 100}well, let's just report back\nto the others.$"

Expansion1_Rival_Scene02d_Text_0:
# 270 "data/expansion_1/scene02.pory"
	.string "Welcome back.$"

Expansion1_Rival_Scene02d_Text_1:
# 272 "data/expansion_1/scene02.pory"
	.string "We managed to set up a camp, somehow.$"

Expansion1_Rival_Scene02d_Text_2:
# 274 "data/expansion_1/scene02.pory"
	.string "Everyone knows you just have to\nstart clicking around until the game\ladvances!$"

Expansion1_Rival_Scene02d_Text_3:
# 285 "data/expansion_1/scene02.pory"
	.string "Oh… {PAUSE 100}No sign of Harper from your side,\nhuh? Damn…$"

Expansion1_Rival_Scene02d_Text_4:
# 287 "data/expansion_1/scene02.pory"
	.string "There was a wrecked boat out there,\nprobably ours, but we couldn't reach it.\p"
	.string "There's a group of Pokémon blocking\nus from getting further.$"

Expansion1_Rival_Scene02d_Text_5:
# 292 "data/expansion_1/scene02.pory"
	.string "That must be some sort of story blocker.$"

Expansion1_Rival_Scene02d_Text_6:
# 294 "data/expansion_1/scene02.pory"
	.string "One where we have access to whatever\nflag progresses it…?$"

Expansion1_Rival_Scene02d_Text_7:
# 296 "data/expansion_1/scene02.pory"
	.string "Well…$"

Expansion1_Rival_Scene02d_Text_8:
# 298 "data/expansion_1/scene02.pory"
	.string "Okay, how about your debug menu?$"

Expansion1_Rival_Scene02d_Text_9:
# 303 "data/expansion_1/scene02.pory"
	.string "…{PAUSE 100}I forgot to turn it on.$"

Expansion1_Rival_Scene02d_Text_10:
# 310 "data/expansion_1/scene02.pory"
	.string "Then… {PAUSE 100}I guess we're betting that\nshe's not stuck over there.$"

Expansion1_Rival_Scene02d_Text_11:
# 312 "data/expansion_1/scene02.pory"
	.string "I… {PAUSE 100}I hope she's safe…$"

Expansion1_Rival_Scene02d_Text_12:
# 316 "data/expansion_1/scene02.pory"
	.string "Hmm…$"

Expansion1_Rival_Scene02d_Text_13:
# 318 "data/expansion_1/scene02.pory"
	.string "What are you all clammed up for?\p"
	.string "We've got a job to do. Operation\n‘Save the Harpy’ is ready to start!$"

Expansion1_Rival_Scene02d_Text_14:
# 321 "data/expansion_1/scene02.pory"
	.string "Right. Any idea where she could be?$"

Expansion1_Rival_Scene02d_Text_15:
# 323 "data/expansion_1/scene02.pory"
	.string "I found a dark cave deep underwater\nthat I couldn't get through.\lAlmost like I needed Flash again.$"

Expansion1_Rival_Scene02d_Text_16:
# 325 "data/expansion_1/scene02.pory"
	.string "Would a post-game dungeon be designed\naround HM Flash through?$"

Expansion1_Rival_Scene02d_Text_17:
# 330 "data/expansion_1/scene02.pory"
	.string "O- {PAUSE 30}Oh! One of the sailors here was\nsaying something about a “Light”.$"

Expansion1_Rival_Scene02d_Text_18:
# 332 "data/expansion_1/scene02.pory"
	.string "As good a lead as any.$"

Expansion1_Rival_Scene02d_Text_19:
# 334 "data/expansion_1/scene02.pory"
	.string "If Harper's lacking the unique key item,\nno way she'd get through the darkness.$"

Expansion1_Rival_Scene02d_Text_20:
# 336 "data/expansion_1/scene02.pory"
	.string "That sounds like it'd be frightening\nfor her…$"

Expansion1_Rival_Scene02d_Text_21:
# 338 "data/expansion_1/scene02.pory"
	.string "Good thing she doesn't have to eat.$"

Expansion1_Rival_Scene02d_Text_22:
# 340 "data/expansion_1/scene02.pory"
	.string "Uh…$"

Expansion1_Rival_Scene02d_Text_23:
# 345 "data/expansion_1/scene02.pory"
	.string "D- {PAUSE 30}Don't worry. We'll get her out of\nthere.$"

Expansion1_Rival_Scene02d_Text_24:
# 347 "data/expansion_1/scene02.pory"
	.string "Absolutely.\nAlright, let's split up.\p"
	.string "We shouldn't count on her being stuck\nin that dark cave, but we've got to look\lthere too.$"

Expansion1_Rival_Scene02d_Text_25:
# 350 "data/expansion_1/scene02.pory"
	.string "Move out, team!\p"
	.string "Operation… {PAUSE 100}START-O!!!$"

Expansion1_Rival_Scene02e_Text_0:
# 369 "data/expansion_1/scene02.pory"
	.string "Obtained Jakson's “reward”!$"
