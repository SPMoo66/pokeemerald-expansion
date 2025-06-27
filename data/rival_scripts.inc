Rival_Scene01::
# 23 "data/rival_scripts.pory"
	compare VAR_BIRCH_LAB_STATE, 3
	goto_if_eq Rival_Scene01_2
Rival_Scene01_1:
# 60 "data/rival_scripts.pory"
	release
	return

Rival_Scene01_2:
# 24 "data/rival_scripts.pory"
	lock
# 25 "data/rival_scripts.pory"
	call Common_EventScript_PlayEmRivalBgm
# 26 "data/rival_scripts.pory"
	playse SE_PIN
# 27 "data/rival_scripts.pory"
	applymovement RIVAL_LITTLEROOT, Rival_Scene01_Move1
# 28 "data/rival_scripts.pory"
	waitmovement 0
# 29 "data/rival_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 30 "data/rival_scripts.pory"
	switch VAR_TEMP_1
# 31 "data/rival_scripts.pory"
	case 17, Rival_Scene01_6
Rival_Scene01_4:
# 36 "data/rival_scripts.pory"
	call GetRivalForNameBox
# 37 "data/rival_scripts.pory"
	switch VAR_EMERALBODY_RIVAL
# 38 "data/rival_scripts.pory"
	case 1, Rival_Scene01_9
# 40 "data/rival_scripts.pory"
	case 2, Rival_Scene01_10
# 42 "data/rival_scripts.pory"
	case 3, Rival_Scene01_11
# 44 "data/rival_scripts.pory"
	case 4, Rival_Scene01_12
# 47 "data/rival_scripts.pory"
	msgbox Scene01_BaronText
Rival_Scene01_7:
# 49 "data/rival_scripts.pory"
	closemessage
# 50 "data/rival_scripts.pory"
	setvar VAR_EMERALBODY_RIVAL_STATE, 1
# 51 "data/rival_scripts.pory"
	fadescreen FADE_TO_BLACK
# 52 "data/rival_scripts.pory"
	fadedefaultbgm
# 53 "data/rival_scripts.pory"
	applymovement RIVAL_LITTLEROOT, Rival_Scene01_Move2
# 54 "data/rival_scripts.pory"
	waitmovement 0
# 55 "data/rival_scripts.pory"
	removeobject RIVAL_LITTLEROOT
# 56 "data/rival_scripts.pory"
	clearflag FLAG_TEMP_1
# 57 "data/rival_scripts.pory"
	addobject BARON_LITTLEROOT
# 58 "data/rival_scripts.pory"
	fadescreen FADE_FROM_BLACK
	goto Rival_Scene01_1

Rival_Scene01_6:
# 32 "data/rival_scripts.pory"
	applymovement RIVAL_LITTLEROOT, Common_Movement_FaceUp
# 33 "data/rival_scripts.pory"
	waitmovement 0
	goto Rival_Scene01_4

Rival_Scene01_9:
# 39 "data/rival_scripts.pory"
	msgbox Scene01_HarperText
	goto Rival_Scene01_7

Rival_Scene01_10:
# 41 "data/rival_scripts.pory"
	msgbox Scene01_JaksonText
	goto Rival_Scene01_7

Rival_Scene01_11:
# 43 "data/rival_scripts.pory"
	msgbox Scene01_ReddText
	goto Rival_Scene01_7

Rival_Scene01_12:
# 45 "data/rival_scripts.pory"
	msgbox Scene01_SakuraText
	goto Rival_Scene01_7


# 63 "data/rival_scripts.pory"
Rival_Scene01_Move1:
# 64 "data/rival_scripts.pory"
	emote_exclamation_mark
# 65 "data/rival_scripts.pory"
	delay_16
# 65 "data/rival_scripts.pory"
	delay_16
# 65 "data/rival_scripts.pory"
	delay_16
# 65 "data/rival_scripts.pory"
	delay_16
# 66 "data/rival_scripts.pory"
	walk_left
# 66 "data/rival_scripts.pory"
	walk_left
	step_end

# 69 "data/rival_scripts.pory"
Rival_Scene01_Move2:
# 70 "data/rival_scripts.pory"
	walk_fast_down
# 70 "data/rival_scripts.pory"
	walk_fast_down
# 70 "data/rival_scripts.pory"
	walk_fast_down
# 70 "data/rival_scripts.pory"
	walk_fast_down
# 70 "data/rival_scripts.pory"
	walk_fast_down
# 70 "data/rival_scripts.pory"
	walk_fast_down
# 70 "data/rival_scripts.pory"
	walk_fast_down
	step_end

Sakura_Town01::
# 76 "data/rival_scripts.pory"
	speakername CommonText_Sakura
# 77 "data/rival_scripts.pory"
	msgbox Town01_SakuraText, MSGBOX_NPC
	return


Jakson_Town01::
# 81 "data/rival_scripts.pory"
	speakername CommonText_Jakson
# 82 "data/rival_scripts.pory"
	msgbox Town01_JaksonText, MSGBOX_NPC
	return


Redd_Town01::
# 86 "data/rival_scripts.pory"
	lock
# 87 "data/rival_scripts.pory"
	speakername CommonText_Redd
# 88 "data/rival_scripts.pory"
	msgbox Town01_ReddText
# 89 "data/rival_scripts.pory"
	release
	return


Harper_Town01::
# 93 "data/rival_scripts.pory"
	speakername CommonText_Harper
# 94 "data/rival_scripts.pory"
	msgbox Town01_HarperText, MSGBOX_NPC
	return


Baron_Town01::
# 98 "data/rival_scripts.pory"
	lock
# 99 "data/rival_scripts.pory"
	applymovement BARON_LITTLEROOT, Baron_Town01_Move
# 100 "data/rival_scripts.pory"
	waitmovement 0
# 101 "data/rival_scripts.pory"
	applymovement BARON_LITTLEROOT, Baron_Town01_Move
# 102 "data/rival_scripts.pory"
	waitmovement 0
# 103 "data/rival_scripts.pory"
	speakername CommonText_Baron
# 104 "data/rival_scripts.pory"
	msgbox Baron_Town01_Text_0
# 105 "data/rival_scripts.pory"
	closemessage
# 106 "data/rival_scripts.pory"
	faceplayer
# 107 "data/rival_scripts.pory"
	playse SE_PIN
# 108 "data/rival_scripts.pory"
	applymovement BARON_LITTLEROOT, Common_Movement_ExclamationMark
# 109 "data/rival_scripts.pory"
	waitmovement 0
# 110 "data/rival_scripts.pory"
	delay 60
# 111 "data/rival_scripts.pory"
	speakername CommonText_Baron
# 112 "data/rival_scripts.pory"
	msgbox Town01_BaronText
# 113 "data/rival_scripts.pory"
	applymovement BARON_LITTLEROOT, Common_Movement_FaceLeft
# 114 "data/rival_scripts.pory"
	waitmovement 0
# 115 "data/rival_scripts.pory"
	release
	return


# 118 "data/rival_scripts.pory"
Baron_Town01_Move:
# 119 "data/rival_scripts.pory"
	walk_in_place_left
# 120 "data/rival_scripts.pory"
	delay_16
	step_end

Rival_Scene02::
# 126 "data/rival_scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 1
	goto_if_eq Rival_Scene02_2
Rival_Scene02_1:
# 192 "data/rival_scripts.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 193 "data/rival_scripts.pory"
	release
	return

Rival_Scene02_2:
# 127 "data/rival_scripts.pory"
	lock
# 128 "data/rival_scripts.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 129 "data/rival_scripts.pory"
	call Common_EventScript_PlayEmRivalBgm
# 130 "data/rival_scripts.pory"
	playse SE_PIN
# 131 "data/rival_scripts.pory"
	applymovement RIVAL_PETALBURG, Common_Movement_ExclamationMark
# 132 "data/rival_scripts.pory"
	waitmovement 0
# 133 "data/rival_scripts.pory"
	delay 60
# 134 "data/rival_scripts.pory"
	applymovement RIVAL_PETALBURG, Common_Movement_WalkRight2
# 135 "data/rival_scripts.pory"
	waitmovement 0
# 136 "data/rival_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 137 "data/rival_scripts.pory"
	switch VAR_TEMP_1
# 138 "data/rival_scripts.pory"
	case 16, Rival_Scene02_6
# 141 "data/rival_scripts.pory"
	case 17, Rival_Scene02_7
# 144 "data/rival_scripts.pory"
	case 19, Rival_Scene02_8
Rival_Scene02_4:
# 149 "data/rival_scripts.pory"
	applymovement RIVAL_PETALBURG, Common_Movement_WalkRight2
# 150 "data/rival_scripts.pory"
	waitmovement 0
# 151 "data/rival_scripts.pory"
	call GetRivalForNameBox
# 152 "data/rival_scripts.pory"
	call GetRivalMusic
# 153 "data/rival_scripts.pory"
	switch VAR_EMERALBODY_RIVAL
# 154 "data/rival_scripts.pory"
	case 1, Rival_Scene02_11
# 159 "data/rival_scripts.pory"
	case 2, Rival_Scene02_12
# 164 "data/rival_scripts.pory"
	case 3, Rival_Scene02_13
# 169 "data/rival_scripts.pory"
	case 4, Rival_Scene02_14
# 175 "data/rival_scripts.pory"
	msgbox Scene02_BaronText_PreBattle
# 176 "data/rival_scripts.pory"
	trainerbattle_no_intro TRAINER_BARON_1, Scene02_BaronText_BattleVictory
# 177 "data/rival_scripts.pory"
	call GetRivalForNameBox
# 178 "data/rival_scripts.pory"
	msgbox Scene02_BaronText_PostBattle
Rival_Scene02_9:
# 180 "data/rival_scripts.pory"
	closemessage
# 181 "data/rival_scripts.pory"
	setvar VAR_EMERALBODY_RIVAL_STATE, 2
# 182 "data/rival_scripts.pory"
	clearflag FLAG_TEMP_2
# 183 "data/rival_scripts.pory"
	fadedefaultbgm
# 184 "data/rival_scripts.pory"
	compare VAR_TEMP_1, 16
	goto_if_eq Rival_Scene02_17
Rival_Scene02_16:
# 188 "data/rival_scripts.pory"
	applymovement RIVAL_PETALBURG, Common_Movement_WalkLeft7
# 189 "data/rival_scripts.pory"
	waitmovement 0
# 190 "data/rival_scripts.pory"
	removeobject RIVAL_PETALBURG
	goto Rival_Scene02_1

Rival_Scene02_6:
# 139 "data/rival_scripts.pory"
	applymovement RIVAL_PETALBURG, Common_Movement_WalkUp2
# 140 "data/rival_scripts.pory"
	waitmovement 0
	goto Rival_Scene02_4

Rival_Scene02_7:
# 142 "data/rival_scripts.pory"
	applymovement RIVAL_PETALBURG, Common_Movement_WalkUp
# 143 "data/rival_scripts.pory"
	waitmovement 0
	goto Rival_Scene02_4

Rival_Scene02_8:
# 145 "data/rival_scripts.pory"
	applymovement RIVAL_PETALBURG, Common_Movement_WalkDown
# 146 "data/rival_scripts.pory"
	waitmovement 0
	goto Rival_Scene02_4

Rival_Scene02_11:
# 155 "data/rival_scripts.pory"
	msgbox Scene02_HarperText_PreBattle
# 156 "data/rival_scripts.pory"
	trainerbattle_no_intro TRAINER_HARPER_1, Scene02_HarperText_BattleVictory
# 157 "data/rival_scripts.pory"
	call GetRivalForNameBox
# 158 "data/rival_scripts.pory"
	msgbox Scene02_HarperText_PostBattle
	goto Rival_Scene02_9

Rival_Scene02_12:
# 160 "data/rival_scripts.pory"
	msgbox Scene02_JaksonText_PreBattle
# 161 "data/rival_scripts.pory"
	trainerbattle_no_intro TRAINER_JAKSON_1, Scene02_JaksonText_BattleVictory
# 162 "data/rival_scripts.pory"
	call GetRivalForNameBox
# 163 "data/rival_scripts.pory"
	msgbox Scene02_JaksonText_PostBattle
	goto Rival_Scene02_9

Rival_Scene02_13:
# 165 "data/rival_scripts.pory"
	msgbox Scene02_ReddText_PreBattle
# 166 "data/rival_scripts.pory"
	trainerbattle_no_intro TRAINER_REDD_1, Scene02_ReddText_BattleVictory
# 167 "data/rival_scripts.pory"
	call GetRivalForNameBox
# 168 "data/rival_scripts.pory"
	msgbox Scene02_ReddText_PostBattle
	goto Rival_Scene02_9

Rival_Scene02_14:
# 170 "data/rival_scripts.pory"
	msgbox Scene02_SakuraText_PreBattle
# 171 "data/rival_scripts.pory"
	trainerbattle_no_intro TRAINER_SAKURA_1, Scene02_SakuraText_BattleVictory
# 172 "data/rival_scripts.pory"
	call GetRivalForNameBox
# 173 "data/rival_scripts.pory"
	msgbox Scene02_SakuraText_PostBattle
	goto Rival_Scene02_9

Rival_Scene02_17:
# 185 "data/rival_scripts.pory"
	applymovement RIVAL_PETALBURG, Common_Movement_WalkDown
# 186 "data/rival_scripts.pory"
	waitmovement 0
	goto Rival_Scene02_16


Sakura_Town02::
# 199 "data/rival_scripts.pory"
	speakername CommonText_Sakura
# 200 "data/rival_scripts.pory"
	msgbox Town02_SakuraText, MSGBOX_NPC
	return


Harper_Town02::
# 204 "data/rival_scripts.pory"
	speakername CommonText_Harper
# 205 "data/rival_scripts.pory"
	msgbox Town02_HarperText, MSGBOX_NPC
	return


Redd_Town02::
# 209 "data/rival_scripts.pory"
	speakername CommonText_Redd
# 210 "data/rival_scripts.pory"
	msgbox Town02_ReddText, MSGBOX_NPC
	return


Baron_Town02::
# 214 "data/rival_scripts.pory"
	speakername CommonText_Baron
# 215 "data/rival_scripts.pory"
	msgbox Town02_BaronText, MSGBOX_NPC
	return


Jakson_Town02::
# 219 "data/rival_scripts.pory"
	speakername CommonText_Jakson
# 220 "data/rival_scripts.pory"
	msgbox Town02_JaksonText, MSGBOX_NPC
	return


Sakura_Town03::
# 226 "data/rival_scripts.pory"
	speakername CommonText_Sakura
# 227 "data/rival_scripts.pory"
	msgbox Town03_SakuraText, MSGBOX_NPC
	return


Harper_Town03::
# 231 "data/rival_scripts.pory"
	speakername CommonText_Harper
# 232 "data/rival_scripts.pory"
	msgbox Town03_HarperText, MSGBOX_NPC
	return


Redd_Town03::
# 236 "data/rival_scripts.pory"
	speakername CommonText_Redd
# 237 "data/rival_scripts.pory"
	msgbox Town03_ReddText, MSGBOX_NPC
	return


Jakson_Town03::
# 241 "data/rival_scripts.pory"
	speakername CommonText_Jakson
# 242 "data/rival_scripts.pory"
	msgbox Town03_JaksonText, MSGBOX_NPC
	return


Baron_Town03::
# 246 "data/rival_scripts.pory"
	lock
# 247 "data/rival_scripts.pory"
	speakername CommonText_Baron
# 248 "data/rival_scripts.pory"
	msgbox Town03_BaronText1
# 249 "data/rival_scripts.pory"
	faceplayer
# 250 "data/rival_scripts.pory"
	msgbox Town03_BaronText2
# 251 "data/rival_scripts.pory"
	release
	return


Rival_Scene03::
# 257 "data/rival_scripts.pory"
	delay 100
# 258 "data/rival_scripts.pory"
	call Common_EventScript_PlayEmRivalBgm
# 259 "data/rival_scripts.pory"
	addobject RIVAL_RUSTBORO
# 260 "data/rival_scripts.pory"
	setobjectxy RIVAL_RUSTBORO, 20, 15
# 261 "data/rival_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 262 "data/rival_scripts.pory"
	switch VAR_TEMP_1
# 263 "data/rival_scripts.pory"
	case 21, Rival_Scene03_3
# 267 "data/rival_scripts.pory"
	applymovement RIVAL_RUSTBORO, Common_Movement_WalkDown7
# 268 "data/rival_scripts.pory"
	waitmovement 0
Rival_Scene03_1:
# 270 "data/rival_scripts.pory"
	applymovement RIVAL_RUSTBORO, Common_Movement_WalkLeft2
# 271 "data/rival_scripts.pory"
	waitmovement 0
# 272 "data/rival_scripts.pory"
	call GetRivalForNameBox
# 273 "data/rival_scripts.pory"
	switch VAR_EMERALBODY_RIVAL
# 274 "data/rival_scripts.pory"
	case 1, Rival_Scene03_7
# 276 "data/rival_scripts.pory"
	case 2, Rival_Scene03_8
# 278 "data/rival_scripts.pory"
	case 3, Rival_Scene03_9
# 280 "data/rival_scripts.pory"
	case 4, Rival_Scene03_10
# 283 "data/rival_scripts.pory"
	msgbox Scene03_BaronText
Rival_Scene03_5:
# 285 "data/rival_scripts.pory"
	closemessage
# 286 "data/rival_scripts.pory"
	fadescreen FADE_TO_BLACK
# 287 "data/rival_scripts.pory"
	setobjectxy LOCALID_PLAYER, 11, 19
# 288 "data/rival_scripts.pory"
	setvar VAR_0x8004, 11
# 289 "data/rival_scripts.pory"
	setvar VAR_0x8005, 19
# 290 "data/rival_scripts.pory"
	special TeleportCamera
# 291 "data/rival_scripts.pory"
	addobject REDD_RUSTBORO
# 292 "data/rival_scripts.pory"
	addobject SAKURA_RUSTBORO
# 293 "data/rival_scripts.pory"
	addobject BARON_RUSTBORO
# 294 "data/rival_scripts.pory"
	addobject HARPER_RUSTBORO
# 295 "data/rival_scripts.pory"
	addobject JAKSON_RUSTBORO
# 296 "data/rival_scripts.pory"
	applymovement SAKURA_RUSTBORO, Common_Movement_FaceDown
# 297 "data/rival_scripts.pory"
	applymovement REDD_RUSTBORO, Common_Movement_FaceRight
# 298 "data/rival_scripts.pory"
	applymovement HARPER_RUSTBORO, Common_Movement_FaceLeft
# 299 "data/rival_scripts.pory"
	applymovement JAKSON_RUSTBORO, Common_Movement_FaceUp
# 300 "data/rival_scripts.pory"
	setobjectxy REDD_RUSTBORO, 10, 18
# 301 "data/rival_scripts.pory"
	setobjectxy SAKURA_RUSTBORO, 11, 17
# 302 "data/rival_scripts.pory"
	setobjectxy BARON_RUSTBORO, 12, 17
# 303 "data/rival_scripts.pory"
	setobjectxy HARPER_RUSTBORO, 13, 18
# 304 "data/rival_scripts.pory"
	setobjectxy JAKSON_RUSTBORO, 12, 19
# 305 "data/rival_scripts.pory"
	setobjectxy RIVAL_RUSTBORO, 0, 6
# 306 "data/rival_scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 307 "data/rival_scripts.pory"
	fadescreen FADE_FROM_BLACK
# 308 "data/rival_scripts.pory"
	message Rival_Scene03_Text_0
# 309 "data/rival_scripts.pory"
	applymovement JAKSON_RUSTBORO, Common_Movement_WalkInPlaceLeft
# 310 "data/rival_scripts.pory"
	waitmovement 0
# 311 "data/rival_scripts.pory"
	delay 30
# 312 "data/rival_scripts.pory"
	applymovement JAKSON_RUSTBORO, Common_Movement_WalkInPlaceUp
# 313 "data/rival_scripts.pory"
	applymovement HARPER_RUSTBORO, Common_Movement_WalkInPlaceDown
# 314 "data/rival_scripts.pory"
	waitmovement 0
# 315 "data/rival_scripts.pory"
	delay 40
# 316 "data/rival_scripts.pory"
	applymovement BARON_RUSTBORO, Common_Movement_WalkInPlaceLeft
# 317 "data/rival_scripts.pory"
	applymovement SAKURA_RUSTBORO, Common_Movement_WalkInPlaceRight
# 318 "data/rival_scripts.pory"
	waitmovement 0
# 319 "data/rival_scripts.pory"
	delay 30
# 320 "data/rival_scripts.pory"
	applymovement REDD_RUSTBORO, Common_Movement_WalkInPlaceDown
# 321 "data/rival_scripts.pory"
	waitmovement 0
# 322 "data/rival_scripts.pory"
	delay 50
# 323 "data/rival_scripts.pory"
	closemessage
# 324 "data/rival_scripts.pory"
	fadescreen FADE_TO_BLACK
# 325 "data/rival_scripts.pory"
	removeobject REDD_RUSTBORO
# 326 "data/rival_scripts.pory"
	removeobject SAKURA_RUSTBORO
# 327 "data/rival_scripts.pory"
	removeobject BARON_RUSTBORO
# 328 "data/rival_scripts.pory"
	removeobject HARPER_RUSTBORO
# 329 "data/rival_scripts.pory"
	removeobject JAKSON_RUSTBORO
# 330 "data/rival_scripts.pory"
	fadescreen FADE_FROM_BLACK
# 331 "data/rival_scripts.pory"
	fadedefaultbgm
# 332 "data/rival_scripts.pory"
	setflag FLAG_ENABLE_EMIB_RIVAL_MATCH_CALL
# 333 "data/rival_scripts.pory"
	release
	return

Rival_Scene03_3:
# 264 "data/rival_scripts.pory"
	applymovement RIVAL_RUSTBORO, Common_Movement_WalkDown6
# 265 "data/rival_scripts.pory"
	waitmovement 0
	goto Rival_Scene03_1

Rival_Scene03_7:
# 275 "data/rival_scripts.pory"
	msgbox Scene03_HarperText
	goto Rival_Scene03_5

Rival_Scene03_8:
# 277 "data/rival_scripts.pory"
	msgbox Scene03_JaksonText
	goto Rival_Scene03_5

Rival_Scene03_9:
# 279 "data/rival_scripts.pory"
	msgbox Scene03_ReddText
	goto Rival_Scene03_5

Rival_Scene03_10:
# 281 "data/rival_scripts.pory"
	msgbox Scene03_SakuraText
	goto Rival_Scene03_5


Sakura_Town04::
# 339 "data/rival_scripts.pory"
	speakername CommonText_Sakura
# 340 "data/rival_scripts.pory"
	msgbox Town04_SakuraText, MSGBOX_NPC
	return


Harper_Town04::
# 344 "data/rival_scripts.pory"
	speakername CommonText_Harper
# 345 "data/rival_scripts.pory"
	msgbox Town04_HarperText, MSGBOX_NPC
	return


Redd_Town04::
# 349 "data/rival_scripts.pory"
	speakername CommonText_Redd
# 350 "data/rival_scripts.pory"
	msgbox Town04_ReddText, MSGBOX_NPC
	return


Jakson_Town04::
# 354 "data/rival_scripts.pory"
	speakername CommonText_Jakson
# 355 "data/rival_scripts.pory"
	msgbox Town04_JaksonText, MSGBOX_NPC
	return


Baron_Town04::
# 359 "data/rival_scripts.pory"
	speakername CommonText_Baron
# 360 "data/rival_scripts.pory"
	msgbox Town04_BaronText, MSGBOX_NPC
	return


Sakura_Town05::
# 366 "data/rival_scripts.pory"
	speakername CommonText_Sakura
# 367 "data/rival_scripts.pory"
	msgbox Town05_SakuraText, MSGBOX_NPC
	return


Harper_Town05::
# 371 "data/rival_scripts.pory"
	speakername CommonText_Harper
# 372 "data/rival_scripts.pory"
	msgbox Town05_HarperText, MSGBOX_NPC
	return


Redd_Town05::
# 376 "data/rival_scripts.pory"
	speakername CommonText_Redd
# 377 "data/rival_scripts.pory"
	msgbox Town05_ReddText, MSGBOX_NPC
	return


Jakson_Town05::
# 381 "data/rival_scripts.pory"
	speakername CommonText_Jakson
# 382 "data/rival_scripts.pory"
	msgbox Town05_JaksonText, MSGBOX_NPC
	return


Baron_Town05::
# 386 "data/rival_scripts.pory"
	speakername CommonText_Baron
# 387 "data/rival_scripts.pory"
	msgbox Town05_BaronText, MSGBOX_NPC
	return


Sakura_Town06::
# 393 "data/rival_scripts.pory"
	speakername CommonText_Sakura
# 394 "data/rival_scripts.pory"
	msgbox Town06_SakuraText, MSGBOX_NPC
	return


Harper_Town06::
# 398 "data/rival_scripts.pory"
	speakername CommonText_Harper
# 399 "data/rival_scripts.pory"
	msgbox Town06_HarperText, MSGBOX_NPC
	return


Redd_Town06::
# 403 "data/rival_scripts.pory"
	speakername CommonText_Redd
# 404 "data/rival_scripts.pory"
	msgbox Town06_ReddText1, MSGBOX_NPC
# 405 "data/rival_scripts.pory"
	applymovement 5, Common_Movement_QuestionMark
# 406 "data/rival_scripts.pory"
	speakername CommonText_Redd
# 407 "data/rival_scripts.pory"
	msgbox Town06_ReddText2, MSGBOX_NPC
	return


Jakson_Town06::
# 411 "data/rival_scripts.pory"
	speakername CommonText_Jakson
# 412 "data/rival_scripts.pory"
	msgbox Town06_JaksonText, MSGBOX_NPC
	return


Baron_Town06::
# 416 "data/rival_scripts.pory"
	speakername CommonText_Baron
# 417 "data/rival_scripts.pory"
	msgbox Town06_BaronText, MSGBOX_NPC
	return


Sakura_Town07::
# 423 "data/rival_scripts.pory"
	speakername CommonText_Sakura
# 424 "data/rival_scripts.pory"
	msgbox Town07_SakuraText, MSGBOX_NPC
	return


Harper_Town07::
# 428 "data/rival_scripts.pory"
	speakername CommonText_Harper
# 429 "data/rival_scripts.pory"
	msgbox Town07_HarperText, MSGBOX_NPC
	return


Redd_Town07::
# 433 "data/rival_scripts.pory"
	speakername CommonText_Redd
# 434 "data/rival_scripts.pory"
	msgbox Town07_ReddText, MSGBOX_NPC
	return


Jakson_Town07::
# 438 "data/rival_scripts.pory"
	speakername CommonText_Jakson
# 439 "data/rival_scripts.pory"
	msgbox Town07_JaksonText, MSGBOX_NPC
	return


Baron_Town07::
# 443 "data/rival_scripts.pory"
	speakername CommonText_Baron
# 444 "data/rival_scripts.pory"
	msgbox Town07_BaronText, MSGBOX_NPC
	return


Sakura_Town08::
# 450 "data/rival_scripts.pory"
	speakername CommonText_Sakura
# 451 "data/rival_scripts.pory"
	msgbox Town08_SakuraText, MSGBOX_NPC
	return


Harper_Town08::
# 455 "data/rival_scripts.pory"
	speakername CommonText_Harper
# 456 "data/rival_scripts.pory"
	msgbox Town08_HarperText, MSGBOX_NPC
	return


Redd_Town08::
# 460 "data/rival_scripts.pory"
	speakername CommonText_Redd
# 461 "data/rival_scripts.pory"
	msgbox Town08_ReddText, MSGBOX_NPC
	return


Jakson_Town08::
# 465 "data/rival_scripts.pory"
	speakername CommonText_Jakson
# 466 "data/rival_scripts.pory"
	msgbox Town08_JaksonText, MSGBOX_NPC
	return


Baron_Town08::
# 470 "data/rival_scripts.pory"
	speakername CommonText_Baron
# 471 "data/rival_scripts.pory"
	msgbox Town08_BaronText, MSGBOX_NPC
	return


Sakura_Town09::
# 477 "data/rival_scripts.pory"
	speakername CommonText_Sakura
# 478 "data/rival_scripts.pory"
	msgbox Town09_SakuraText, MSGBOX_NPC
	return


Harper_Town09::
# 482 "data/rival_scripts.pory"
	speakername CommonText_Harper
# 483 "data/rival_scripts.pory"
	msgbox Town09_HarperText, MSGBOX_NPC
	return


Redd_Town09::
# 487 "data/rival_scripts.pory"
	speakername CommonText_Redd
# 488 "data/rival_scripts.pory"
	msgbox Town09_ReddText, MSGBOX_NPC
	return


Jakson_Town09::
# 492 "data/rival_scripts.pory"
	speakername CommonText_Jakson
# 493 "data/rival_scripts.pory"
	msgbox Town09_JaksonText, MSGBOX_NPC
	return


Baron_Town09::
# 497 "data/rival_scripts.pory"
	speakername CommonText_Baron
# 498 "data/rival_scripts.pory"
	msgbox Town09_BaronText, MSGBOX_NPC
	return


Sakura_Town10::
# 504 "data/rival_scripts.pory"
	speakername CommonText_Sakura
# 505 "data/rival_scripts.pory"
	msgbox Town10_SakuraText, MSGBOX_NPC
	return


Harper_Town10::
# 509 "data/rival_scripts.pory"
	speakername CommonText_Harper
# 510 "data/rival_scripts.pory"
	msgbox Town10_HarperText, MSGBOX_NPC
	return


Redd_Town10::
# 514 "data/rival_scripts.pory"
	speakername CommonText_Redd
# 515 "data/rival_scripts.pory"
	msgbox Town10_ReddText, MSGBOX_NPC
	return


Jakson_Town10::
# 519 "data/rival_scripts.pory"
	speakername CommonText_Jakson
# 520 "data/rival_scripts.pory"
	msgbox Town10_JaksonText, MSGBOX_NPC
	return


Baron_Town10::
# 524 "data/rival_scripts.pory"
	speakername CommonText_Baron
# 525 "data/rival_scripts.pory"
	msgbox Town10_BaronText, MSGBOX_NPC
	return


Baron_Town01_Text_0:
# 104 "data/rival_scripts.pory"
	.string "Left foot… Right foot…\nLeft foot… Right foot…$"

Rival_Scene03_Text_0:
# 308 "data/rival_scripts.pory"
	.string "You exchanged PokéNav info with your\n"
	.string "friends.$"
