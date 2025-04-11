RustboroCity_EventScript_Looker::
# 2 "data/looker.pory"
	lock
# 3 "data/looker.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 4 "data/looker.pory"
	addobject LOOKER_RUSTBORO
# 5 "data/looker.pory"
	setobjectxy LOOKER_RUSTBORO, 21, 15
# 6 "data/looker.pory"
	special SpawnCameraObject
# 7 "data/looker.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkRight2
# 8 "data/looker.pory"
	waitmovement 0
# 9 "data/looker.pory"
	playbgm MUS_PL_LOOKER, FALSE
# 10 "data/looker.pory"
	applymovement LOOKER_RUSTBORO, RustboroCity_LookerMove
# 11 "data/looker.pory"
	waitmovement 0
# 12 "data/looker.pory"
	removeobject LOOKER_RUSTBORO
# 13 "data/looker.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 8
# 14 "data/looker.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkLeft2
# 15 "data/looker.pory"
	waitmovement 0
# 16 "data/looker.pory"
	special RemoveCameraObject
# 17 "data/looker.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 18 "data/looker.pory"
	fadedefaultbgm
# 19 "data/looker.pory"
	goto Rival_Scene03
	return


# 22 "data/looker.pory"
RustboroCity_LookerMove:
# 23 "data/looker.pory"
	walk_down
# 23 "data/looker.pory"
	walk_down
# 23 "data/looker.pory"
	walk_down
# 23 "data/looker.pory"
	walk_down
# 24 "data/looker.pory"
	delay_16
# 24 "data/looker.pory"
	delay_16
# 25 "data/looker.pory"
	walk_in_place_faster_up
# 26 "data/looker.pory"
	delay_16
# 26 "data/looker.pory"
	delay_16
# 26 "data/looker.pory"
	delay_16
# 26 "data/looker.pory"
	delay_16
# 27 "data/looker.pory"
	walk_down
# 27 "data/looker.pory"
	walk_down
# 28 "data/looker.pory"
	delay_16
# 29 "data/looker.pory"
	walk_in_place_right
# 30 "data/looker.pory"
	delay_16
# 30 "data/looker.pory"
	delay_16
# 30 "data/looker.pory"
	delay_16
# 30 "data/looker.pory"
	delay_16
# 31 "data/looker.pory"
	walk_down
# 31 "data/looker.pory"
	walk_down
# 32 "data/looker.pory"
	delay_16
# 32 "data/looker.pory"
	delay_16
# 33 "data/looker.pory"
	walk_faster_up
# 33 "data/looker.pory"
	walk_faster_up
# 33 "data/looker.pory"
	walk_faster_up
# 33 "data/looker.pory"
	walk_faster_up
# 34 "data/looker.pory"
	delay_16
# 34 "data/looker.pory"
	delay_16
# 34 "data/looker.pory"
	delay_16
# 34 "data/looker.pory"
	delay_16
# 35 "data/looker.pory"
	lock_facing_direction
# 36 "data/looker.pory"
	walk_slow_down
# 36 "data/looker.pory"
	walk_slow_down
# 36 "data/looker.pory"
	walk_slow_down
# 37 "data/looker.pory"
	delay_16
# 38 "data/looker.pory"
	unlock_facing_direction
# 39 "data/looker.pory"
	walk_faster_down
# 39 "data/looker.pory"
	walk_faster_down
# 39 "data/looker.pory"
	walk_faster_down
# 39 "data/looker.pory"
	walk_faster_down
# 39 "data/looker.pory"
	walk_faster_down
# 39 "data/looker.pory"
	walk_faster_down
# 39 "data/looker.pory"
	walk_faster_down
	step_end

SlateportCity_EventScript_Looker::
# 43 "data/looker.pory"
	lock
# 44 "data/looker.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 45 "data/looker.pory"
	addobject LOOKER_SLATEPORT
# 46 "data/looker.pory"
	setobjectxy LOOKER_SLATEPORT, VAR_TEMP_0, 16
# 47 "data/looker.pory"
	playbgm MUS_PL_LOOKER, FALSE
# 48 "data/looker.pory"
	applymovement LOOKER_SLATEPORT, SlateportCity_LookerMove1
# 49 "data/looker.pory"
	waitmovement 0
# 50 "data/looker.pory"
	playse SE_SUPER_EFFECTIVE
# 51 "data/looker.pory"
	applymovement LOOKER_SLATEPORT, SlateportCity_LookerMove2
# 52 "data/looker.pory"
	waitmovement 0
# 53 "data/looker.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 54 "data/looker.pory"
	waitmovement 0
# 55 "data/looker.pory"
	speakername CommonText_Q
# 56 "data/looker.pory"
	msgbox SlateportCity_EventScript_Looker_Text_0
# 59 "data/looker.pory"
	playse SE_PIN
# 60 "data/looker.pory"
	applymovement LOOKER_SLATEPORT, Common_Movement_ExclamationMark
# 61 "data/looker.pory"
	waitmovement 0
# 62 "data/looker.pory"
	delay 50
# 63 "data/looker.pory"
	msgbox SlateportCity_EventScript_Looker_Text_1
# 65 "data/looker.pory"
	applymovement LOOKER_SLATEPORT, Common_Movement_WalkInPlaceFasterDown
# 66 "data/looker.pory"
	waitmovement 0
# 67 "data/looker.pory"
	msgbox SlateportCity_EventScript_Looker_Text_2
# 69 "data/looker.pory"
	closemessage
# 70 "data/looker.pory"
	delay 30
# 71 "data/looker.pory"
	applymovement LOOKER_SLATEPORT, Common_Movement_WalkInPlaceFasterUp
# 72 "data/looker.pory"
	waitmovement 0
# 73 "data/looker.pory"
	speakername CommonText_Looker
# 74 "data/looker.pory"
	msgbox SlateportCity_EventScript_Looker_Text_3
# 84 "data/looker.pory"
	closemessage
# 85 "data/looker.pory"
	compare VAR_TEMP_0, 19
	goto_if_eq SlateportCity_EventScript_Looker_2
# 89 "data/looker.pory"
	applymovement LOOKER_SLATEPORT, Common_Movement_WalkRight
SlateportCity_EventScript_Looker_1:
# 91 "data/looker.pory"
	waitmovement 0
# 92 "data/looker.pory"
	applymovement LOOKER_SLATEPORT, Common_Movement_WalkUp7
# 93 "data/looker.pory"
	waitmovement 0
# 94 "data/looker.pory"
	removeobject LOOKER_SLATEPORT
# 95 "data/looker.pory"
	setvar VAR_SLATEPORT_CITY_STATE, 1
# 96 "data/looker.pory"
	fadedefaultbgm
# 97 "data/looker.pory"
	release
	return

SlateportCity_EventScript_Looker_2:
# 86 "data/looker.pory"
	applymovement LOOKER_SLATEPORT, Common_Movement_WalkLeft
	goto SlateportCity_EventScript_Looker_1


# 100 "data/looker.pory"
SlateportCity_LookerMove1:
# 101 "data/looker.pory"
	walk_faster_up
# 101 "data/looker.pory"
	walk_faster_up
# 101 "data/looker.pory"
	walk_faster_up
# 101 "data/looker.pory"
	walk_faster_up
# 101 "data/looker.pory"
	walk_faster_up
# 101 "data/looker.pory"
	walk_faster_up
	step_end

# 104 "data/looker.pory"
SlateportCity_LookerMove2:
# 105 "data/looker.pory"
	lock_facing_direction
# 106 "data/looker.pory"
	walk_slow_down
# 107 "data/looker.pory"
	unlock_facing_direction
# 108 "data/looker.pory"
	delay_16
# 108 "data/looker.pory"
	delay_16
	step_end

Route115_EventScript_Looker::
# 112 "data/looker.pory"
	lock
# 113 "data/looker.pory"
	playbgm MUS_DP_LAKE_EVENT, FALSE
# 114 "data/looker.pory"
	pokenavcall Route115_Text_Looker_Call
# 115 "data/looker.pory"
	waitmessage
# 116 "data/looker.pory"
	delay 30
# 117 "data/looker.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 118 "data/looker.pory"
	bufferstring STR_VAR_2, CommonText_Looker
# 119 "data/looker.pory"
	msgbox Text_RegisteredInPokenav_OneInput, MSGBOX_DEFAULT
# 120 "data/looker.pory"
	waitfanfare
# 121 "data/looker.pory"
	closemessage
# 122 "data/looker.pory"
	delay 30
# 123 "data/looker.pory"
	setflag FLAG_ENABLE_LOOKER_MATCH_CALL
# 124 "data/looker.pory"
	setvar VAR_LOOKER_ROCKET, 1
# 125 "data/looker.pory"
	fadedefaultbgm
# 126 "data/looker.pory"
	release
	return


RustboroCity_EventScript_Looker_2::
# 145 "data/looker.pory"
	lock
# 146 "data/looker.pory"
	playbgm MUS_PL_LOOKER, FALSE
# 147 "data/looker.pory"
	pokenavcall RustboroCity_Text_Looker_Call
# 148 "data/looker.pory"
	waitmessage
# 149 "data/looker.pory"
	closemessage
# 150 "data/looker.pory"
	setvar VAR_LOOKER_ROCKET, 8
# 151 "data/looker.pory"
	fadedefaultbgm
# 152 "data/looker.pory"
	release
	return


FortreeCity_EventScript_Looker::
# 178 "data/looker.pory"
	lock
# 179 "data/looker.pory"
	faceplayer
# 180 "data/looker.pory"
	speakername CommonText_Looker
# 181 "data/looker.pory"
	msgbox FortreeCity_EventScript_Looker_Text_0
# 185 "data/looker.pory"
	release
	return


SootopolisCity_EventScript_Looker::
# 189 "data/looker.pory"
	lock
# 190 "data/looker.pory"
	playbgm MUS_PL_LOOKER, FALSE
# 191 "data/looker.pory"
	pokenavcall SootopolisCity_Text_Looker_Call
# 192 "data/looker.pory"
	waitmessage
# 193 "data/looker.pory"
	closemessage
# 194 "data/looker.pory"
	setvar VAR_LOOKER_ROCKET, 9
# 195 "data/looker.pory"
	fadedefaultbgm
# 196 "data/looker.pory"
	release
	return


TrainerHill_Looker1::
# 212 "data/looker.pory"
	lock
# 213 "data/looker.pory"
	speakername CommonText_Looker
# 214 "data/looker.pory"
	msgbox TrainerHill_Looker1_Text_0
# 216 "data/looker.pory"
	closemessage
# 217 "data/looker.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 218 "data/looker.pory"
	waitmovement 0
# 219 "data/looker.pory"
	applymovement LOOKER_TRAINERHILL, Common_Movement_WalkLeft
# 220 "data/looker.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 221 "data/looker.pory"
	waitmovement 0
# 222 "data/looker.pory"
	applymovement LOOKER_TRAINERHILL, Common_Movement_WalkLeft6
# 223 "data/looker.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft6
# 224 "data/looker.pory"
	waitmovement 0
# 225 "data/looker.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 226 "data/looker.pory"
	applymovement LOOKER_TRAINERHILL, Common_Movement_WalkUp
# 227 "data/looker.pory"
	waitmovement 0
# 228 "data/looker.pory"
	applymovement LOOKER_TRAINERHILL, Common_Movement_WalkLeft
# 229 "data/looker.pory"
	waitmovement 0
# 230 "data/looker.pory"
	applymovement LOOKER_TRAINERHILL, Common_Movement_WalkInPlaceDown
# 231 "data/looker.pory"
	waitmovement 0
# 232 "data/looker.pory"
	speakername CommonText_Looker
# 233 "data/looker.pory"
	msgbox TrainerHill_Looker1_Text_1
# 239 "data/looker.pory"
	closemessage
# 240 "data/looker.pory"
	setvar VAR_LOOKER_ROCKET, 10
# 241 "data/looker.pory"
	release
	return


TrainerHill_SetLooker::
# 245 "data/looker.pory"
	compare VAR_LOOKER_ROCKET, 11
	goto_if_le TrainerHill_SetLooker_4
TrainerHill_SetLooker_3:
# 250 "data/looker.pory"
	compare VAR_LOOKER_ROCKET, 9
	goto_if_eq TrainerHill_SetLooker_2
	return

TrainerHill_SetLooker_1:
# 246 "data/looker.pory"
	clearflag FLAG_TEMP_1
# 247 "data/looker.pory"
	addobject LOOKER_TRAINERHILL
# 248 "data/looker.pory"
	setobjectxyperm LOOKER_TRAINERHILL, 1, 13
	return

TrainerHill_SetLooker_2:
# 251 "data/looker.pory"
	clearflag FLAG_TEMP_1
	return

TrainerHill_SetLooker_4:
# 245 "data/looker.pory"
	compare VAR_LOOKER_ROCKET, 10
	goto_if_ge TrainerHill_SetLooker_1
	goto TrainerHill_SetLooker_3


TrainerHill_LookerSwitch::
# 257 "data/looker.pory"
	compare VAR_LOOKER_ROCKET, 10
	goto_if_eq TrainerHill_LookerSwitch_1
	return

TrainerHill_LookerSwitch_1:
# 258 "data/looker.pory"
	lock
# 259 "data/looker.pory"
	playse SE_SWITCH
# 260 "data/looker.pory"
	delay 20
# 261 "data/looker.pory"
	playse SE_UNLOCK
# 262 "data/looker.pory"
	call TrainerHill_SetRocketRefuge
# 263 "data/looker.pory"
	delay 30
# 264 "data/looker.pory"
	playse SE_PIN
# 265 "data/looker.pory"
	applymovement LOOKER_TRAINERHILL, Common_Movement_ExclamationMark
# 266 "data/looker.pory"
	waitmovement 0
# 267 "data/looker.pory"
	delay 50
# 268 "data/looker.pory"
	speakername CommonText_Looker
# 269 "data/looker.pory"
	msgbox TrainerHill_LookerSwitch_Text_0
# 271 "data/looker.pory"
	msgbox TrainerHill_Text_LookerGoIn, MSGBOX_DEFAULT
# 272 "data/looker.pory"
	setvar VAR_LOOKER_ROCKET, 11
# 273 "data/looker.pory"
	release
	return


TrainerHill_SetRocketRefuge::
# 278 "data/looker.pory"
	setmetatile 0, 14, 0x3D0, TRUE
# 279 "data/looker.pory"
	setmetatile 1, 14, 0x3D1, TRUE
# 280 "data/looker.pory"
	setmetatile 2, 14, 0x3D2, FALSE
# 281 "data/looker.pory"
	setmetatile 0, 15, 0x3D8, TRUE
# 282 "data/looker.pory"
	setmetatile 1, 15, 0x3D9, TRUE
# 283 "data/looker.pory"
	setmetatile 2, 15, 0x3DA, FALSE
# 284 "data/looker.pory"
	setmetatile 0, 16, 0x3E0, TRUE
# 285 "data/looker.pory"
	setmetatile 1, 16, 0x3E1, TRUE
# 286 "data/looker.pory"
	setmetatile 2, 16, 0x3E2, FALSE
# 287 "data/looker.pory"
	special DrawWholeMapView
	return


TrainerHill_LookerTalk::
# 292 "data/looker.pory"
	compare VAR_LOOKER_ROCKET, 10
	goto_if_eq TrainerHill_LookerTalk_2
TrainerHill_LookerTalk_1:
# 295 "data/looker.pory"
	compare VAR_LOOKER_ROCKET, 11
	goto_if_eq TrainerHill_LookerTalk_4
	return

TrainerHill_LookerTalk_2:
# 293 "data/looker.pory"
	goto TrainerHill_Looker2
	goto TrainerHill_LookerTalk_1

TrainerHill_LookerTalk_4:
# 296 "data/looker.pory"
	goto TrainerHill_Looker3
	return


TrainerHill_Looker2::
# 302 "data/looker.pory"
	lock
# 303 "data/looker.pory"
	faceplayer
# 304 "data/looker.pory"
	speakername CommonText_Looker
# 305 "data/looker.pory"
	msgbox TrainerHill_Looker2_Text_0
# 307 "data/looker.pory"
	closemessage
# 308 "data/looker.pory"
	applymovement LOOKER_TRAINERHILL, Common_Movement_WalkInPlaceDown
# 309 "data/looker.pory"
	waitmovement 0
# 310 "data/looker.pory"
	release
	return


TrainerHill_Looker3::
# 314 "data/looker.pory"
	lock
# 315 "data/looker.pory"
	faceplayer
# 316 "data/looker.pory"
	speakername CommonText_Looker
# 317 "data/looker.pory"
	msgbox TrainerHill_Text_LookerGoIn, MSGBOX_DEFAULT
# 318 "data/looker.pory"
	release
	return


RocketRefuge_B1F_Looker::
# 329 "data/looker.pory"
	lock
# 330 "data/looker.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 331 "data/looker.pory"
	waitmovement 0
# 332 "data/looker.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 333 "data/looker.pory"
	waitmovement 0
# 334 "data/looker.pory"
	delay 10
# 335 "data/looker.pory"
	playse SE_EXIT
# 336 "data/looker.pory"
	addobject 8
# 337 "data/looker.pory"
	applymovement 8, Common_Movement_FaceRight
# 338 "data/looker.pory"
	waitmovement 0
# 339 "data/looker.pory"
	setobjectxy 8, 2, 2
# 340 "data/looker.pory"
	speakername CommonText_Looker
# 341 "data/looker.pory"
	msgbox RocketRefuge_B1F_Looker_Text_0
# 342 "data/looker.pory"
	closemessage
# 343 "data/looker.pory"
	applymovement 8, Common_Movement_WalkInPlaceDown
# 344 "data/looker.pory"
	waitmovement 0
# 345 "data/looker.pory"
	delay 30
# 346 "data/looker.pory"
	applymovement 8, Common_Movement_WalkInPlaceLeft
# 347 "data/looker.pory"
	waitmovement 0
# 348 "data/looker.pory"
	delay 30
# 349 "data/looker.pory"
	applymovement 8, Common_Movement_WalkInPlaceRight
# 350 "data/looker.pory"
	waitmovement 0
# 351 "data/looker.pory"
	speakername CommonText_Looker
# 352 "data/looker.pory"
	msgbox RocketRefuge_B1F_Looker_Text_1
# 356 "data/looker.pory"
	closemessage
# 357 "data/looker.pory"
	applymovement 8, Common_Movement_WalkInPlaceDown
# 358 "data/looker.pory"
	waitmovement 0
# 359 "data/looker.pory"
	playbgm MUS_PL_LOOKER, FALSE
# 360 "data/looker.pory"
	delay 40
# 361 "data/looker.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 362 "data/looker.pory"
	applymovement 8, Common_Movement_WalkFastDown6
# 363 "data/looker.pory"
	waitmovement 0
# 364 "data/looker.pory"
	speakername CommonText_Looker
# 365 "data/looker.pory"
	playse SE_M_RAZOR_WIND2
# 366 "data/looker.pory"
	delay 6
# 367 "data/looker.pory"
	playse SE_M_RAZOR_WIND2
# 368 "data/looker.pory"
	delay 6
# 369 "data/looker.pory"
	playse SE_M_RAZOR_WIND2
# 370 "data/looker.pory"
	delay 6
# 371 "data/looker.pory"
	playse SE_M_RAZOR_WIND2
# 372 "data/looker.pory"
	delay 6
# 373 "data/looker.pory"
	playse SE_M_RAZOR_WIND2
# 374 "data/looker.pory"
	delay 6
# 375 "data/looker.pory"
	playse SE_M_RAZOR_WIND2
# 376 "data/looker.pory"
	delay 6
# 377 "data/looker.pory"
	playse SE_M_RAZOR_WIND2
# 378 "data/looker.pory"
	msgbox RocketRefuge_B1F_Looker_Text_2
# 379 "data/looker.pory"
	closemessage
# 380 "data/looker.pory"
	fadedefaultbgm
# 381 "data/looker.pory"
	delay 20
# 382 "data/looker.pory"
	removeobject 8
# 383 "data/looker.pory"
	setvar VAR_LOOKER_ROCKET, 12
# 384 "data/looker.pory"
	release
	return


RocketRefuge_B2F_Looker::
# 391 "data/looker.pory"
	lock
# 392 "data/looker.pory"
	playbgm MUS_DP_ENCOUNTER_GALACTIC, FALSE
# 393 "data/looker.pory"
	applymovement 6, Common_Movement_ExclamationMark
# 394 "data/looker.pory"
	waitmovement 0
# 395 "data/looker.pory"
	delay 60
# 396 "data/looker.pory"
	applymovement 6, Common_Movement_WalkLeft4
# 397 "data/looker.pory"
	waitmovement 0
# 398 "data/looker.pory"
	speakername CommonText_Q
# 399 "data/looker.pory"
	msgbox RocketRefuge_B2F_Looker_Text_0
# 404 "data/looker.pory"
	playbgm MUS_PL_LOOKER, FALSE
# 405 "data/looker.pory"
	speakername CommonText_Looker
# 406 "data/looker.pory"
	msgbox RocketRefuge_B2F_Looker_Text_1
# 409 "data/looker.pory"
	msgbox RocketRefuge_B2F_LookerText, MSGBOX_DEFAULT
# 410 "data/looker.pory"
	closemessage
# 411 "data/looker.pory"
	fadedefaultbgm
# 412 "data/looker.pory"
	setvar VAR_LOOKER_ROCKET, 13
# 413 "data/looker.pory"
	release
	return


RocketRefuge_B2F_LookerTalk::
# 417 "data/looker.pory"
	lock
# 418 "data/looker.pory"
	faceplayer
# 419 "data/looker.pory"
	speakername CommonText_Looker
# 420 "data/looker.pory"
	msgbox RocketRefuge_B2F_LookerText, MSGBOX_DEFAULT
# 421 "data/looker.pory"
	release
	return


RocketRefuge_B3F_Giovanni::
# 434 "data/looker.pory"
	faceplayer
# 435 "data/looker.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 436 "data/looker.pory"
	speakername CommonText_Giovanni
# 437 "data/looker.pory"
	trainerbattle_single TRAINER_GIOVANNI_REFUGE, RocketRefuge_B3F_Giovanni_Text_0, RocketRefuge_B3F_Giovanni_Text_1, RocketRefuge_B3F_Looker, NO_MUSIC
	return


RocketRefuge_B3F_Looker::
# 441 "data/looker.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 442 "data/looker.pory"
	speakername CommonText_Giovanni
# 443 "data/looker.pory"
	msgbox RocketRefuge_B3F_Looker_Text_0
# 448 "data/looker.pory"
	closemessage
# 449 "data/looker.pory"
	fadescreen FADE_TO_BLACK
# 450 "data/looker.pory"
	removeobject 3
# 451 "data/looker.pory"
	playse SE_EXIT
# 452 "data/looker.pory"
	delay 30
# 453 "data/looker.pory"
	fadescreen FADE_FROM_BLACK
# 454 "data/looker.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 455 "data/looker.pory"
	setvar VAR_OBJ_GFX_ID_A, OBJ_EVENT_GFX_ROCKET_M
# 456 "data/looker.pory"
	addobject 4
# 457 "data/looker.pory"
	setobjectxy 4, 13, 13
# 458 "data/looker.pory"
	playbgm MUS_HG_ENCOUNTER_ROCKET, FALSE
# 459 "data/looker.pory"
	speakername CommonText_Q
# 460 "data/looker.pory"
	msgbox RocketRefuge_B3F_Looker_Text_1
# 461 "data/looker.pory"
	closemessage
# 462 "data/looker.pory"
	applymovement 4, Common_Movement_WalkUp3
# 463 "data/looker.pory"
	waitmovement 0
# 464 "data/looker.pory"
	applymovement 4, Common_Movement_WalkLeft3
# 465 "data/looker.pory"
	waitmovement 0
# 466 "data/looker.pory"
	compare VAR_TEMP_0, 12
	goto_if_eq RocketRefuge_B3F_Looker_2
# 472 "data/looker.pory"
	compare VAR_TEMP_0, 13
	goto_if_eq RocketRefuge_B3F_Looker_3
# 487 "data/looker.pory"
	applymovement 4, Common_Movement_WalkUp3
# 488 "data/looker.pory"
	waitmovement 0
# 489 "data/looker.pory"
	applymovement 4, Common_Movement_WalkRight4
# 490 "data/looker.pory"
	waitmovement 0
# 491 "data/looker.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 492 "data/looker.pory"
	applymovement 4, Common_Movement_WalkInPlaceUp
RocketRefuge_B3F_Looker_1:
# 494 "data/looker.pory"
	waitmovement 0
# 495 "data/looker.pory"
	speakername CommonText_Q
# 496 "data/looker.pory"
	msgbox RocketRefuge_B3F_Looker_Text_2
# 499 "data/looker.pory"
	closemessage
# 500 "data/looker.pory"
	compare VAR_TEMP_0, 14
	goto_if_ne RocketRefuge_B3F_Looker_8
RocketRefuge_B3F_Looker_7:
# 504 "data/looker.pory"
	applymovement 4, Common_Movement_FaceLeft
# 505 "data/looker.pory"
	waitmovement 0
# 506 "data/looker.pory"
	applymovement 4, Common_Movement_FaceDown
# 507 "data/looker.pory"
	waitmovement 0
# 508 "data/looker.pory"
	applymovement 4, Common_Movement_FaceRight
# 509 "data/looker.pory"
	waitmovement 0
# 510 "data/looker.pory"
	compare VAR_TEMP_0, 14
	goto_if_eq RocketRefuge_B3F_Looker_14
RocketRefuge_B3F_Looker_13:
# 514 "data/looker.pory"
	removeobject 4
# 515 "data/looker.pory"
	setvar VAR_OBJ_GFX_ID_A, OBJ_EVENT_GFX_LOOKER
# 516 "data/looker.pory"
	addobject 4
# 517 "data/looker.pory"
	compare VAR_TEMP_0, 14
	goto_if_eq RocketRefuge_B3F_Looker_17
# 521 "data/looker.pory"
	applymovement 4, Common_Movement_FaceRight
RocketRefuge_B3F_Looker_16:
# 523 "data/looker.pory"
	compare VAR_TEMP_0, 12
	goto_if_eq RocketRefuge_B3F_Looker_21
# 526 "data/looker.pory"
	compare VAR_TEMP_0, 13
	goto_if_eq RocketRefuge_B3F_Looker_22
# 535 "data/looker.pory"
	setobjectxy 4, 14, 7
RocketRefuge_B3F_Looker_20:
# 537 "data/looker.pory"
	playbgm MUS_PL_LOOKER, FALSE
# 538 "data/looker.pory"
	speakername CommonText_Looker
# 539 "data/looker.pory"
	msgbox RocketRefuge_B3F_Looker_Text_3
# 547 "data/looker.pory"
	closemessage
# 548 "data/looker.pory"
	giveitem ITEM_STELLAR_TERA_SHARD, 3
# 549 "data/looker.pory"
	giveitem ITEM_BOTTLE_CAP, 1
# 550 "data/looker.pory"
	speakername CommonText_Looker
# 551 "data/looker.pory"
	msgbox RocketRefuge_B3F_Looker_Text_4
# 553 "data/looker.pory"
	closemessage
# 554 "data/looker.pory"
	pokevialincreasesize
# 555 "data/looker.pory"
	msgbox Text_PokevialSizeIncrease, MSGBOX_DEFAULT
# 556 "data/looker.pory"
	playfanfare MUS_OBTAIN_ITEM
# 557 "data/looker.pory"
	waitfanfare
# 558 "data/looker.pory"
	closemessage
# 559 "data/looker.pory"
	speakername CommonText_Looker
# 560 "data/looker.pory"
	msgbox RocketRefuge_B3F_Looker_Text_5
# 565 "data/looker.pory"
	closemessage
# 566 "data/looker.pory"
	fadescreen FADE_TO_BLACK
# 567 "data/looker.pory"
	removeobject 4
# 568 "data/looker.pory"
	playse SE_EXIT
# 569 "data/looker.pory"
	delay 30
# 570 "data/looker.pory"
	fadescreen FADE_FROM_BLACK
# 571 "data/looker.pory"
	setvar VAR_LOOKER_ROCKET, 14
# 572 "data/looker.pory"
	setflag FLAG_HIDE_ROCKETS_IN_REFUGE
# 573 "data/looker.pory"
	fadedefaultbgm
# 574 "data/looker.pory"
	release
	return

RocketRefuge_B3F_Looker_2:
# 467 "data/looker.pory"
	applymovement 4, Common_Movement_WalkUp4
# 468 "data/looker.pory"
	waitmovement 0
# 469 "data/looker.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 470 "data/looker.pory"
	applymovement 4, Common_Movement_WalkRight
	goto RocketRefuge_B3F_Looker_1

RocketRefuge_B3F_Looker_3:
# 473 "data/looker.pory"
	compare VAR_TEMP_1, 5
	goto_if_eq RocketRefuge_B3F_Looker_10
# 480 "data/looker.pory"
	applymovement 4, Common_Movement_WalkUp3
# 481 "data/looker.pory"
	waitmovement 0
# 482 "data/looker.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 483 "data/looker.pory"
	applymovement 4, Common_Movement_WalkRight2
	goto RocketRefuge_B3F_Looker_1

RocketRefuge_B3F_Looker_8:
# 501 "data/looker.pory"
	applymovement 4, Common_Movement_FaceUp
# 502 "data/looker.pory"
	waitmovement 0
	goto RocketRefuge_B3F_Looker_7

RocketRefuge_B3F_Looker_10:
# 474 "data/looker.pory"
	applymovement 4, Common_Movement_WalkUp5
# 475 "data/looker.pory"
	waitmovement 0
# 476 "data/looker.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 477 "data/looker.pory"
	applymovement 4, Common_Movement_WalkRight2
	goto RocketRefuge_B3F_Looker_1

RocketRefuge_B3F_Looker_14:
# 511 "data/looker.pory"
	applymovement 4, Common_Movement_FaceUp
# 512 "data/looker.pory"
	waitmovement 0
	goto RocketRefuge_B3F_Looker_13

RocketRefuge_B3F_Looker_17:
# 518 "data/looker.pory"
	applymovement 4, Common_Movement_FaceUp
	goto RocketRefuge_B3F_Looker_16

RocketRefuge_B3F_Looker_21:
# 524 "data/looker.pory"
	setobjectxy 4, 11, 6
	goto RocketRefuge_B3F_Looker_20

RocketRefuge_B3F_Looker_22:
# 527 "data/looker.pory"
	compare VAR_TEMP_1, 5
	goto_if_eq RocketRefuge_B3F_Looker_26
# 531 "data/looker.pory"
	setobjectxy 4, 12, 7
	goto RocketRefuge_B3F_Looker_20

RocketRefuge_B3F_Looker_26:
# 528 "data/looker.pory"
	setobjectxy 4, 12, 5
	goto RocketRefuge_B3F_Looker_20


SlateportCity_EventScript_Looker_Text_0:
# 56 "data/looker.pory"
	.string "Ah!\n"
	.string "My greatest apologies. It seems as\l"
	.string "though running through the City\l"
	.string "without paying any mind was a poor\l"
	.string "choice.\p"
	.string "I am-$"

SlateportCity_EventScript_Looker_Text_1:
# 63 "data/looker.pory"
	.string "No!\n"
	.string "Is it possible that you have already\l"
	.string "suspected that I am a part of the\l"
	.string "International Police?$"

SlateportCity_EventScript_Looker_Text_2:
# 67 "data/looker.pory"
	.string "No, this is very bad, for an agent such\n"
	.string "as myself to have his cover blown so\l"
	.string "quickly…\p"
	.string "How could I ever show my face again at\n"
	.string "headquarters?!$"

SlateportCity_EventScript_Looker_Text_3:
# 74 "data/looker.pory"
	.string "Very well, you may refer to me as\n"
	.string "Looker!\p"
	.string "My name? A codename, yes.\n"
	.string "An elite agent such as myself must keep\l"
	.string "many secrets.\p"
	.string "I am here in Hoenn to root out enemy\n"
	.string "agents of the world!\p"
	.string "Team Aqua?\n"
	.string "Team Magma?\l"
	.string "I know none of the sort!\p"
	.string "No, I am on the tail of other evildoers\n"
	.string "that spread chaos through the world.\p"
	.string "If you come across any such persons, be\n"
	.string "sure to make me aware!\p"
	.string "Farewell, then!$"

FortreeCity_EventScript_Looker_Text_0:
# 181 "data/looker.pory"
	.string "Greetings, {PLAYER}.\p"
	.string "I am still on the hunt for Team Rocket,\n"
	.string "but I will inform you immediately should\l"
	.string "I get a lead on them.$"

TrainerHill_Looker1_Text_0:
# 214 "data/looker.pory"
	.string "It is good that you are here.\p"
	.string "Follow me. We cannot squander any time.$"

TrainerHill_Looker1_Text_1:
# 233 "data/looker.pory"
	.string "Feast your eyes on this!\p"
	.string "… … …\n"
	.string "No, this is not just a bollard, but one\l"
	.string "with a secret switch hidden on it!\p"
	.string "Go ahead, press the switch and see for\n"
	.string "yourself!$"

TrainerHill_LookerSwitch_Text_0:
# 269 "data/looker.pory"
	.string "Yes!\n"
	.string "Just as I suspected!$"

TrainerHill_Looker2_Text_0:
# 305 "data/looker.pory"
	.string "What are you waiting for?\p"
	.string "Go ahead and press the switch.$"

RocketRefuge_B1F_Looker_Text_0:
# 341 "data/looker.pory"
	.string "Yes. Here we are.$"

RocketRefuge_B1F_Looker_Text_1:
# 352 "data/looker.pory"
	.string "Now. I will go on ahead, clearing a path\n"
	.string "for us both.\p"
	.string "Follow after me, but do be careful.\p"
	.string "I will attempt to retrieve a disguise, so\n"
	.string "you may not recognize me when we next\l"
	.string "meet.\p"
	.string "That is one of my strengths, after all.$"

RocketRefuge_B1F_Looker_Text_2:
# 378 "data/looker.pory"
	.string "Ahhhh!$"

RocketRefuge_B2F_Looker_Text_0:
# 399 "data/looker.pory"
	.string "Ah!\n"
	.string "Here you finally are.\p"
	.string "I've been waiting for your return.\p"
	.string "I managed to find this uniform, but\n"
	.string "it doesn't seem quite right…\p"
	.string "Wait, do you not recognize me,\n"
	.string "{PLAYER}?$"

RocketRefuge_B2F_Looker_Text_1:
# 406 "data/looker.pory"
	.string "It is I, Looker, of course!\p"
	.string "From the look on your face, it seems\n"
	.string "that I was able to fool you at least.\p"
	.string "Once I do find the correct uniform,\n"
	.string "I will easily be able to fool the many\l"
	.string "grunts in this hideaway.$"

RocketRefuge_B3F_Giovanni_Text_0:
# 437 "data/looker.pory"
	.string "So this is what it's come to.\pAll of my men, put down like dogs before\nme.\pAwfully weak, I must think… but no,\nany failures lie at my feet alone.\pNo, I cannot allow the great Team\nRocket's operations in Hoenn to be\lput to an end by a mere child!$"

RocketRefuge_B3F_Giovanni_Text_1:
# 437 "data/looker.pory"
	.string "What is it about this region that makes\nexpansion so difficult?$"

RocketRefuge_B3F_Looker_Text_0:
# 443 "data/looker.pory"
	.string "… … … … …\p"
	.string "My anger is burning ever so strongly\n"
	.string "right now, but my eyes remain on our\l"
	.string "ultimate goal.\p"
	.string "{PLAYER}, you have made it clear that\n"
	.string "Team Rocket has no right to operate\l"
	.string "within Hoenn at our current strength.\p"
	.string "For now we will abscond, but know\n"
	.string "that all Pokémon in this very region\l"
	.string "will belong to us some day.\p"
	.string "Team Rocket's operations will continue,\n"
	.string "but may us never meet again!$"

RocketRefuge_B3F_Looker_Text_1:
# 460 "data/looker.pory"
	.string "{PLAYER}!$"

RocketRefuge_B3F_Looker_Text_2:
# 496 "data/looker.pory"
	.string "Giovanni, have you defeated him\n"
	.string "already?\p"
	.string "Oh, my apologies.\n"
	.string "I did end up finding the correct\l"
	.string "disguise. No further need for it, I\l"
	.string "presume?$"

RocketRefuge_B3F_Looker_Text_3:
# 539 "data/looker.pory"
	.string "It is I, Looker, of course!\p"
	.string "Giovanni has already escaped you,\n"
	.string "I presume.\p"
	.string "Despair not!\p"
	.string "This time, I did call for backup.\n"
	.string "It is likely that the police\l"
	.string "already have our villain in tow.\p"
	.string "Though I would relish the chance\n"
	.string "to bring him to custody myself…\p"
	.string "Regardless, you have done a great\n"
	.string "deed on your own!\l"
	.string "Truly, I and the police at large owe\l"
	.string "you a great deal for your help.\p"
	.string "I had relayed your actions to my\n"
	.string "superiors in advance, and though I was\l"
	.string "chided for relying on someone so young,\l"
	.string "I have been given something that I can\l"
	.string "grant you as reward.\p"
	.string "Please, take these, {PLAYER}.$"

RocketRefuge_B3F_Looker_Text_4:
# 551 "data/looker.pory"
	.string "And you have a Pokévial, yes?\p"
	.string "Allow me to increase its maximum\n"
	.string "capacity for you.$"

RocketRefuge_B3F_Looker_Text_5:
# 560 "data/looker.pory"
	.string "That may seem like a great reward to\n"
	.string "you, but the help you have given us is\l"
	.string "invaluable.\p"
	.string "Now, hopefully Mr. Rocket remains in\n"
	.string "our custody.\p"
	.string "But if he does not, I know who I can\n"
	.string "rely on in Hoenn.\p"
	.string "If you ever do need assistance, you\n"
	.string "have my number which you can contact.\p"
	.string "For now, goodbye {PLAYER}!$"

Route115_Text_Looker_Call::
# 129 "data/looker.pory"
	.string "… … … … … Beep!\p"
	.string "Looker: {PLAYER}!\p"
	.string "Quickly, I am in dire need of your\n"
	.string "help!\l"
	.string "I have managed to track down our\l"
	.string "adversaries at last!\p"
	.string "Come to Devoncorp in Rustboro as\n"
	.string "soon as you are able.\l"
	.string "The enemy, they've already\l"
	.string "launched an attack!\p"
	.string "… … … … … Click!$"

RustboroCity_Text_Looker_Call::
# 155 "data/looker.pory"
	.string "… … … … … Beep!\p"
	.string "Looker: {PLAYER}!\p"
	.string "You are safe, yes?\p"
	.string "It seems that in my haste,\n"
	.string "focusing on the safety of\l"
	.string "civilians while escorting our\l"
	.string "villainous boss to the police,\l"
	.string "he gave me the slip!\p"
	.string "You have not seen him, no?\p"
	.string "… … … … …\n"
	.string "No? That is unfortunate.\p"
	.string "Continue on your journey then.\n"
	.string "I will begin the manhunt for our\l"
	.string "escapee.\p"
	.string "Your job will be to stay safe, and\n"
	.string "if you sight him, contact me\l"
	.string "immediately.\p"
	.string "Stay safe, {PLAYER}!\p"
	.string "… … … … … Click!$"

SootopolisCity_Text_Looker_Call::
# 199 "data/looker.pory"
	.string "… … … … … Beep!\p"
	.string "Looker: I have discerned the\n"
	.string "current location of Team Rocket!\p"
	.string "{PLAYER}, please join me at\n"
	.string "Trainer Hill on Route 111!\p"
	.string "There is the location at which we\n"
	.string "will make our stand against Team\l"
	.string "Rocket!$"

TrainerHill_Text_LookerGoIn::
# 321 "data/looker.pory"
	.string "Go on inside.\n"
	.string "I will be right behind you.$"

RocketRefuge_B2F_LookerText::
# 424 "data/looker.pory"
	.string "Anyway, go on ahead.\n"
	.string "I will return to you once I am able.\p"
	.string "This uniform would be a dead giveaway.$"
