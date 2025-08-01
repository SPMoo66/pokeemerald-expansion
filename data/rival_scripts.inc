Rival_Scene01::
# 24 "data/rival_scripts.pory"
	compare VAR_BIRCH_LAB_STATE, 3
	goto_if_eq Rival_Scene01_2
Rival_Scene01_1:
# 62 "data/rival_scripts.pory"
	release
	return

Rival_Scene01_2:
# 25 "data/rival_scripts.pory"
	lock
# 26 "data/rival_scripts.pory"
	call Common_EventScript_PlayEmRivalBgm
# 27 "data/rival_scripts.pory"
	playse SE_PIN
# 28 "data/rival_scripts.pory"
	applymovement RIVAL_LITTLEROOT, Rival_Scene01_Move1
# 29 "data/rival_scripts.pory"
	waitmovement 0
# 30 "data/rival_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 31 "data/rival_scripts.pory"
	switch VAR_TEMP_1
# 32 "data/rival_scripts.pory"
	case 17, Rival_Scene01_6
# 37 "data/rival_scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceRight
# 38 "data/rival_scripts.pory"
	waitmovement 0
Rival_Scene01_4:
# 40 "data/rival_scripts.pory"
	call GetRivalForNameBox
# 41 "data/rival_scripts.pory"
	switch VAR_EMERALBODY_RIVAL
# 42 "data/rival_scripts.pory"
	case 1, Rival_Scene01_10
# 44 "data/rival_scripts.pory"
	case 2, Rival_Scene01_11
# 46 "data/rival_scripts.pory"
	case 3, Rival_Scene01_12
# 48 "data/rival_scripts.pory"
	case 4, Rival_Scene01_13
# 51 "data/rival_scripts.pory"
	msgbox Scene01_BaronText
Rival_Scene01_8:
# 53 "data/rival_scripts.pory"
	closemessage
# 54 "data/rival_scripts.pory"
	setvar VAR_EMERALBODY_RIVAL_STATE, 1
# 55 "data/rival_scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 56 "data/rival_scripts.pory"
	fadedefaultbgm
# 57 "data/rival_scripts.pory"
	removeobject RIVAL_LITTLEROOT
# 58 "data/rival_scripts.pory"
	clearflag FLAG_TEMP_1
# 59 "data/rival_scripts.pory"
	addobject BARON_LITTLEROOT
# 60 "data/rival_scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
	goto Rival_Scene01_1

Rival_Scene01_6:
# 33 "data/rival_scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceDown
# 34 "data/rival_scripts.pory"
	applymovement RIVAL_LITTLEROOT, Common_Movement_WalkInPlaceUp
# 35 "data/rival_scripts.pory"
	waitmovement 0
	goto Rival_Scene01_4

Rival_Scene01_10:
# 43 "data/rival_scripts.pory"
	msgbox Scene01_HarperText
	goto Rival_Scene01_8

Rival_Scene01_11:
# 45 "data/rival_scripts.pory"
	msgbox Scene01_JaksonText
	goto Rival_Scene01_8

Rival_Scene01_12:
# 47 "data/rival_scripts.pory"
	msgbox Scene01_ReddText
	goto Rival_Scene01_8

Rival_Scene01_13:
# 49 "data/rival_scripts.pory"
	msgbox Scene01_SakuraText
	goto Rival_Scene01_8


# 65 "data/rival_scripts.pory"
Rival_Scene01_Move1:
# 66 "data/rival_scripts.pory"
	emote_exclamation_mark
# 67 "data/rival_scripts.pory"
	delay_16
# 67 "data/rival_scripts.pory"
	delay_16
# 67 "data/rival_scripts.pory"
	delay_16
# 67 "data/rival_scripts.pory"
	delay_16
# 68 "data/rival_scripts.pory"
	walk_left
# 68 "data/rival_scripts.pory"
	walk_left
	step_end

# 71 "data/rival_scripts.pory"
Rival_Scene01_Move2:
# 72 "data/rival_scripts.pory"
	walk_fast_down
# 72 "data/rival_scripts.pory"
	walk_fast_down
# 72 "data/rival_scripts.pory"
	walk_fast_down
# 72 "data/rival_scripts.pory"
	walk_fast_down
# 72 "data/rival_scripts.pory"
	walk_fast_down
# 72 "data/rival_scripts.pory"
	walk_fast_down
# 72 "data/rival_scripts.pory"
	walk_fast_down
	step_end

Sakura_Town01::
# 78 "data/rival_scripts.pory"
	speakername CommonText_Sakura
# 79 "data/rival_scripts.pory"
	msgbox Town01_SakuraText, MSGBOX_NPC
	return


Jakson_Town01::
# 83 "data/rival_scripts.pory"
	speakername CommonText_Jakson
# 84 "data/rival_scripts.pory"
	msgbox Town01_JaksonText, MSGBOX_NPC
	return


Redd_Town01::
# 88 "data/rival_scripts.pory"
	lock
# 89 "data/rival_scripts.pory"
	speakername CommonText_Redd
# 90 "data/rival_scripts.pory"
	msgbox Town01_ReddText
# 91 "data/rival_scripts.pory"
	release
	return


Harper_Town01::
# 95 "data/rival_scripts.pory"
	speakername CommonText_Harper
# 96 "data/rival_scripts.pory"
	msgbox Town01_HarperText, MSGBOX_NPC
	return


Baron_Town01::
# 100 "data/rival_scripts.pory"
	lock
# 101 "data/rival_scripts.pory"
	applymovement BARON_LITTLEROOT, Baron_Town01_Move
# 102 "data/rival_scripts.pory"
	waitmovement 0
# 103 "data/rival_scripts.pory"
	applymovement BARON_LITTLEROOT, Baron_Town01_Move
# 104 "data/rival_scripts.pory"
	waitmovement 0
# 105 "data/rival_scripts.pory"
	speakername CommonText_Baron
# 106 "data/rival_scripts.pory"
	msgbox Baron_Town01_Text_0
# 107 "data/rival_scripts.pory"
	closemessage
# 108 "data/rival_scripts.pory"
	faceplayer
# 109 "data/rival_scripts.pory"
	playse SE_PIN
# 110 "data/rival_scripts.pory"
	applymovement BARON_LITTLEROOT, Common_Movement_ExclamationMark
# 111 "data/rival_scripts.pory"
	waitmovement 0
# 112 "data/rival_scripts.pory"
	delay 60
# 113 "data/rival_scripts.pory"
	speakername CommonText_Baron
# 114 "data/rival_scripts.pory"
	msgbox Town01_BaronText
# 115 "data/rival_scripts.pory"
	applymovement BARON_LITTLEROOT, Common_Movement_FaceLeft
# 116 "data/rival_scripts.pory"
	waitmovement 0
# 117 "data/rival_scripts.pory"
	release
	return


# 120 "data/rival_scripts.pory"
Baron_Town01_Move:
# 121 "data/rival_scripts.pory"
	walk_in_place_left
# 122 "data/rival_scripts.pory"
	delay_16
	step_end

Rival_Scene02::
# 128 "data/rival_scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 1
	goto_if_eq Rival_Scene02_2
Rival_Scene02_1:
# 194 "data/rival_scripts.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 195 "data/rival_scripts.pory"
	release
	return

Rival_Scene02_2:
# 129 "data/rival_scripts.pory"
	lock
# 130 "data/rival_scripts.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 131 "data/rival_scripts.pory"
	call Common_EventScript_PlayEmRivalBgm
# 132 "data/rival_scripts.pory"
	playse SE_PIN
# 133 "data/rival_scripts.pory"
	applymovement RIVAL_PETALBURG, Common_Movement_ExclamationMark
# 134 "data/rival_scripts.pory"
	waitmovement 0
# 135 "data/rival_scripts.pory"
	delay 60
# 136 "data/rival_scripts.pory"
	applymovement RIVAL_PETALBURG, Common_Movement_WalkRight2
# 137 "data/rival_scripts.pory"
	waitmovement 0
# 138 "data/rival_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 139 "data/rival_scripts.pory"
	switch VAR_TEMP_1
# 140 "data/rival_scripts.pory"
	case 16, Rival_Scene02_6
# 143 "data/rival_scripts.pory"
	case 17, Rival_Scene02_7
# 146 "data/rival_scripts.pory"
	case 19, Rival_Scene02_8
Rival_Scene02_4:
# 151 "data/rival_scripts.pory"
	applymovement RIVAL_PETALBURG, Common_Movement_WalkRight2
# 152 "data/rival_scripts.pory"
	waitmovement 0
# 153 "data/rival_scripts.pory"
	call GetRivalForNameBox
# 154 "data/rival_scripts.pory"
	call GetRivalMusic
# 155 "data/rival_scripts.pory"
	switch VAR_EMERALBODY_RIVAL
# 156 "data/rival_scripts.pory"
	case 1, Rival_Scene02_11
# 161 "data/rival_scripts.pory"
	case 2, Rival_Scene02_12
# 166 "data/rival_scripts.pory"
	case 3, Rival_Scene02_13
# 171 "data/rival_scripts.pory"
	case 4, Rival_Scene02_14
# 177 "data/rival_scripts.pory"
	msgbox Scene02_BaronText_PreBattle
# 178 "data/rival_scripts.pory"
	trainerbattle_no_intro TRAINER_BARON_1, Scene02_BaronText_BattleVictory
# 179 "data/rival_scripts.pory"
	call GetRivalForNameBox
# 180 "data/rival_scripts.pory"
	msgbox Scene02_BaronText_PostBattle
Rival_Scene02_9:
# 182 "data/rival_scripts.pory"
	closemessage
# 183 "data/rival_scripts.pory"
	setvar VAR_EMERALBODY_RIVAL_STATE, 2
# 184 "data/rival_scripts.pory"
	clearflag FLAG_TEMP_2
# 185 "data/rival_scripts.pory"
	fadedefaultbgm
# 186 "data/rival_scripts.pory"
	compare VAR_TEMP_1, 16
	goto_if_eq Rival_Scene02_17
Rival_Scene02_16:
# 190 "data/rival_scripts.pory"
	applymovement RIVAL_PETALBURG, Common_Movement_WalkLeft7
# 191 "data/rival_scripts.pory"
	waitmovement 0
# 192 "data/rival_scripts.pory"
	removeobject RIVAL_PETALBURG
	goto Rival_Scene02_1

Rival_Scene02_6:
# 141 "data/rival_scripts.pory"
	applymovement RIVAL_PETALBURG, Common_Movement_WalkUp2
# 142 "data/rival_scripts.pory"
	waitmovement 0
	goto Rival_Scene02_4

Rival_Scene02_7:
# 144 "data/rival_scripts.pory"
	applymovement RIVAL_PETALBURG, Common_Movement_WalkUp
# 145 "data/rival_scripts.pory"
	waitmovement 0
	goto Rival_Scene02_4

Rival_Scene02_8:
# 147 "data/rival_scripts.pory"
	applymovement RIVAL_PETALBURG, Common_Movement_WalkDown
# 148 "data/rival_scripts.pory"
	waitmovement 0
	goto Rival_Scene02_4

Rival_Scene02_11:
# 157 "data/rival_scripts.pory"
	msgbox Scene02_HarperText_PreBattle
# 158 "data/rival_scripts.pory"
	trainerbattle_no_intro TRAINER_HARPER_1, Scene02_HarperText_BattleVictory
# 159 "data/rival_scripts.pory"
	call GetRivalForNameBox
# 160 "data/rival_scripts.pory"
	msgbox Scene02_HarperText_PostBattle
	goto Rival_Scene02_9

Rival_Scene02_12:
# 162 "data/rival_scripts.pory"
	msgbox Scene02_JaksonText_PreBattle
# 163 "data/rival_scripts.pory"
	trainerbattle_no_intro TRAINER_JAKSON_1, Scene02_JaksonText_BattleVictory
# 164 "data/rival_scripts.pory"
	call GetRivalForNameBox
# 165 "data/rival_scripts.pory"
	msgbox Scene02_JaksonText_PostBattle
	goto Rival_Scene02_9

Rival_Scene02_13:
# 167 "data/rival_scripts.pory"
	msgbox Scene02_ReddText_PreBattle
# 168 "data/rival_scripts.pory"
	trainerbattle_no_intro TRAINER_REDD_1, Scene02_ReddText_BattleVictory
# 169 "data/rival_scripts.pory"
	call GetRivalForNameBox
# 170 "data/rival_scripts.pory"
	msgbox Scene02_ReddText_PostBattle
	goto Rival_Scene02_9

Rival_Scene02_14:
# 172 "data/rival_scripts.pory"
	msgbox Scene02_SakuraText_PreBattle
# 173 "data/rival_scripts.pory"
	trainerbattle_no_intro TRAINER_SAKURA_1, Scene02_SakuraText_BattleVictory
# 174 "data/rival_scripts.pory"
	call GetRivalForNameBox
# 175 "data/rival_scripts.pory"
	msgbox Scene02_SakuraText_PostBattle
	goto Rival_Scene02_9

Rival_Scene02_17:
# 187 "data/rival_scripts.pory"
	applymovement RIVAL_PETALBURG, Common_Movement_WalkDown
# 188 "data/rival_scripts.pory"
	waitmovement 0
	goto Rival_Scene02_16


Sakura_Town02::
# 201 "data/rival_scripts.pory"
	speakername CommonText_Sakura
# 202 "data/rival_scripts.pory"
	msgbox Town02_SakuraText, MSGBOX_NPC
	return


Harper_Town02::
# 206 "data/rival_scripts.pory"
	speakername CommonText_Harper
# 207 "data/rival_scripts.pory"
	msgbox Town02_HarperText, MSGBOX_NPC
	return


Redd_Town02::
# 211 "data/rival_scripts.pory"
	speakername CommonText_Redd
# 212 "data/rival_scripts.pory"
	msgbox Town02_ReddText, MSGBOX_NPC
	return


Baron_Town02::
# 216 "data/rival_scripts.pory"
	speakername CommonText_Baron
# 217 "data/rival_scripts.pory"
	msgbox Town02_BaronText, MSGBOX_NPC
	return


Jakson_Town02::
# 221 "data/rival_scripts.pory"
	speakername CommonText_Jakson
# 222 "data/rival_scripts.pory"
	msgbox Town02_JaksonText, MSGBOX_NPC
	return


Sakura_Town03::
# 228 "data/rival_scripts.pory"
	speakername CommonText_Sakura
# 229 "data/rival_scripts.pory"
	msgbox Town03_SakuraText, MSGBOX_NPC
	return


Harper_Town03::
# 233 "data/rival_scripts.pory"
	speakername CommonText_Harper
# 234 "data/rival_scripts.pory"
	msgbox Town03_HarperText, MSGBOX_NPC
	return


Redd_Town03::
# 238 "data/rival_scripts.pory"
	speakername CommonText_Redd
# 239 "data/rival_scripts.pory"
	msgbox Town03_ReddText, MSGBOX_NPC
	return


Jakson_Town03::
# 243 "data/rival_scripts.pory"
	speakername CommonText_Jakson
# 244 "data/rival_scripts.pory"
	msgbox Town03_JaksonText, MSGBOX_NPC
	return


Baron_Town03::
# 248 "data/rival_scripts.pory"
	lock
# 249 "data/rival_scripts.pory"
	speakername CommonText_Baron
# 250 "data/rival_scripts.pory"
	msgbox Town03_BaronText1
# 251 "data/rival_scripts.pory"
	faceplayer
# 252 "data/rival_scripts.pory"
	msgbox Town03_BaronText2
# 253 "data/rival_scripts.pory"
	release
	return


Rival_Scene03::
# 259 "data/rival_scripts.pory"
	delay 100
# 260 "data/rival_scripts.pory"
	call Common_EventScript_PlayEmRivalBgm
# 261 "data/rival_scripts.pory"
	addobject RIVAL_RUSTBORO
# 262 "data/rival_scripts.pory"
	setobjectxy RIVAL_RUSTBORO, 20, 15
# 263 "data/rival_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 264 "data/rival_scripts.pory"
	switch VAR_TEMP_1
# 265 "data/rival_scripts.pory"
	case 21, Rival_Scene03_3
# 269 "data/rival_scripts.pory"
	applymovement RIVAL_RUSTBORO, Common_Movement_WalkDown7
# 270 "data/rival_scripts.pory"
	waitmovement 0
Rival_Scene03_1:
# 272 "data/rival_scripts.pory"
	applymovement RIVAL_RUSTBORO, Common_Movement_WalkLeft2
# 273 "data/rival_scripts.pory"
	waitmovement 0
# 274 "data/rival_scripts.pory"
	call GetRivalForNameBox
# 275 "data/rival_scripts.pory"
	switch VAR_EMERALBODY_RIVAL
# 276 "data/rival_scripts.pory"
	case 1, Rival_Scene03_7
# 278 "data/rival_scripts.pory"
	case 2, Rival_Scene03_8
# 280 "data/rival_scripts.pory"
	case 3, Rival_Scene03_9
# 282 "data/rival_scripts.pory"
	case 4, Rival_Scene03_10
# 285 "data/rival_scripts.pory"
	msgbox Scene03_BaronText
Rival_Scene03_5:
# 287 "data/rival_scripts.pory"
	closemessage
# 288 "data/rival_scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 289 "data/rival_scripts.pory"
	setobjectxy LOCALID_PLAYER, 11, 19
# 290 "data/rival_scripts.pory"
	setvar VAR_0x8004, 11
# 291 "data/rival_scripts.pory"
	setvar VAR_0x8005, 19
# 292 "data/rival_scripts.pory"
	special TeleportCamera
# 293 "data/rival_scripts.pory"
	addobject REDD_RUSTBORO
# 294 "data/rival_scripts.pory"
	addobject SAKURA_RUSTBORO
# 295 "data/rival_scripts.pory"
	addobject BARON_RUSTBORO
# 296 "data/rival_scripts.pory"
	addobject HARPER_RUSTBORO
# 297 "data/rival_scripts.pory"
	addobject JAKSON_RUSTBORO
# 298 "data/rival_scripts.pory"
	applymovement SAKURA_RUSTBORO, Common_Movement_FaceDown
# 299 "data/rival_scripts.pory"
	applymovement REDD_RUSTBORO, Common_Movement_FaceRight
# 300 "data/rival_scripts.pory"
	applymovement HARPER_RUSTBORO, Common_Movement_FaceLeft
# 301 "data/rival_scripts.pory"
	applymovement JAKSON_RUSTBORO, Common_Movement_FaceUp
# 302 "data/rival_scripts.pory"
	setobjectxy REDD_RUSTBORO, 10, 18
# 303 "data/rival_scripts.pory"
	setobjectxy SAKURA_RUSTBORO, 11, 17
# 304 "data/rival_scripts.pory"
	setobjectxy BARON_RUSTBORO, 12, 17
# 305 "data/rival_scripts.pory"
	setobjectxy HARPER_RUSTBORO, 13, 18
# 306 "data/rival_scripts.pory"
	setobjectxy JAKSON_RUSTBORO, 12, 19
# 307 "data/rival_scripts.pory"
	setobjectxy RIVAL_RUSTBORO, 0, 6
# 308 "data/rival_scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 309 "data/rival_scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 310 "data/rival_scripts.pory"
	message Rival_Scene03_Text_0
# 311 "data/rival_scripts.pory"
	applymovement JAKSON_RUSTBORO, Common_Movement_WalkInPlaceLeft
# 312 "data/rival_scripts.pory"
	waitmovement 0
# 313 "data/rival_scripts.pory"
	delay 30
# 314 "data/rival_scripts.pory"
	applymovement JAKSON_RUSTBORO, Common_Movement_WalkInPlaceUp
# 315 "data/rival_scripts.pory"
	applymovement HARPER_RUSTBORO, Common_Movement_WalkInPlaceDown
# 316 "data/rival_scripts.pory"
	waitmovement 0
# 317 "data/rival_scripts.pory"
	delay 40
# 318 "data/rival_scripts.pory"
	applymovement BARON_RUSTBORO, Common_Movement_WalkInPlaceLeft
# 319 "data/rival_scripts.pory"
	applymovement SAKURA_RUSTBORO, Common_Movement_WalkInPlaceRight
# 320 "data/rival_scripts.pory"
	waitmovement 0
# 321 "data/rival_scripts.pory"
	delay 30
# 322 "data/rival_scripts.pory"
	applymovement REDD_RUSTBORO, Common_Movement_WalkInPlaceDown
# 323 "data/rival_scripts.pory"
	waitmovement 0
# 324 "data/rival_scripts.pory"
	delay 50
# 325 "data/rival_scripts.pory"
	closemessage
# 326 "data/rival_scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 327 "data/rival_scripts.pory"
	removeobject REDD_RUSTBORO
# 328 "data/rival_scripts.pory"
	removeobject SAKURA_RUSTBORO
# 329 "data/rival_scripts.pory"
	removeobject BARON_RUSTBORO
# 330 "data/rival_scripts.pory"
	removeobject HARPER_RUSTBORO
# 331 "data/rival_scripts.pory"
	removeobject JAKSON_RUSTBORO
# 332 "data/rival_scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 333 "data/rival_scripts.pory"
	fadedefaultbgm
# 334 "data/rival_scripts.pory"
	setflag FLAG_ENABLE_EMIB_RIVAL_MATCH_CALL
# 335 "data/rival_scripts.pory"
	release
	return

Rival_Scene03_3:
# 266 "data/rival_scripts.pory"
	applymovement RIVAL_RUSTBORO, Common_Movement_WalkDown6
# 267 "data/rival_scripts.pory"
	waitmovement 0
	goto Rival_Scene03_1

Rival_Scene03_7:
# 277 "data/rival_scripts.pory"
	msgbox Scene03_HarperText
	goto Rival_Scene03_5

Rival_Scene03_8:
# 279 "data/rival_scripts.pory"
	msgbox Scene03_JaksonText
	goto Rival_Scene03_5

Rival_Scene03_9:
# 281 "data/rival_scripts.pory"
	msgbox Scene03_ReddText
	goto Rival_Scene03_5

Rival_Scene03_10:
# 283 "data/rival_scripts.pory"
	msgbox Scene03_SakuraText
	goto Rival_Scene03_5


Sakura_Town04::
# 341 "data/rival_scripts.pory"
	speakername CommonText_Sakura
# 342 "data/rival_scripts.pory"
	msgbox Town04_SakuraText, MSGBOX_NPC
	return


Harper_Town04::
# 346 "data/rival_scripts.pory"
	speakername CommonText_Harper
# 347 "data/rival_scripts.pory"
	msgbox Town04_HarperText, MSGBOX_NPC
	return


Redd_Town04::
# 351 "data/rival_scripts.pory"
	speakername CommonText_Redd
# 352 "data/rival_scripts.pory"
	msgbox Town04_ReddText, MSGBOX_NPC
	return


Jakson_Town04::
# 356 "data/rival_scripts.pory"
	speakername CommonText_Jakson
# 357 "data/rival_scripts.pory"
	msgbox Town04_JaksonText, MSGBOX_NPC
	return


Baron_Town04::
# 361 "data/rival_scripts.pory"
	speakername CommonText_Baron
# 362 "data/rival_scripts.pory"
	msgbox Town04_BaronText, MSGBOX_NPC
	return


Sakura_Town05::
# 368 "data/rival_scripts.pory"
	speakername CommonText_Sakura
# 369 "data/rival_scripts.pory"
	msgbox Town05_SakuraText, MSGBOX_NPC
	return


Harper_Town05::
# 373 "data/rival_scripts.pory"
	speakername CommonText_Harper
# 374 "data/rival_scripts.pory"
	msgbox Town05_HarperText, MSGBOX_NPC
	return


Redd_Town05::
# 378 "data/rival_scripts.pory"
	speakername CommonText_Redd
# 379 "data/rival_scripts.pory"
	msgbox Town05_ReddText, MSGBOX_NPC
	return


Jakson_Town05::
# 383 "data/rival_scripts.pory"
	speakername CommonText_Jakson
# 384 "data/rival_scripts.pory"
	msgbox Town05_JaksonText, MSGBOX_NPC
	return


Baron_Town05::
# 388 "data/rival_scripts.pory"
	speakername CommonText_Baron
# 389 "data/rival_scripts.pory"
	msgbox Town05_BaronText, MSGBOX_NPC
	return


Sakura_Town06::
# 395 "data/rival_scripts.pory"
	speakername CommonText_Sakura
# 396 "data/rival_scripts.pory"
	msgbox Town06_SakuraText, MSGBOX_NPC
	return


Harper_Town06::
# 400 "data/rival_scripts.pory"
	speakername CommonText_Harper
# 401 "data/rival_scripts.pory"
	msgbox Town06_HarperText, MSGBOX_NPC
	return


Redd_Town06::
# 405 "data/rival_scripts.pory"
	speakername CommonText_Redd
# 406 "data/rival_scripts.pory"
	msgbox Town06_ReddText1, MSGBOX_NPC
# 407 "data/rival_scripts.pory"
	applymovement 5, Common_Movement_QuestionMark
# 408 "data/rival_scripts.pory"
	speakername CommonText_Redd
# 409 "data/rival_scripts.pory"
	msgbox Town06_ReddText2, MSGBOX_NPC
	return


Jakson_Town06::
# 413 "data/rival_scripts.pory"
	speakername CommonText_Jakson
# 414 "data/rival_scripts.pory"
	msgbox Town06_JaksonText, MSGBOX_NPC
	return


Baron_Town06::
# 418 "data/rival_scripts.pory"
	speakername CommonText_Baron
# 419 "data/rival_scripts.pory"
	msgbox Town06_BaronText, MSGBOX_NPC
	return


Sakura_Town07::
# 425 "data/rival_scripts.pory"
	speakername CommonText_Sakura
# 426 "data/rival_scripts.pory"
	msgbox Town07_SakuraText, MSGBOX_NPC
	return


Harper_Town07::
# 430 "data/rival_scripts.pory"
	speakername CommonText_Harper
# 431 "data/rival_scripts.pory"
	msgbox Town07_HarperText, MSGBOX_NPC
	return


Redd_Town07::
# 435 "data/rival_scripts.pory"
	speakername CommonText_Redd
# 436 "data/rival_scripts.pory"
	msgbox Town07_ReddText, MSGBOX_NPC
	return


Jakson_Town07::
# 440 "data/rival_scripts.pory"
	speakername CommonText_Jakson
# 441 "data/rival_scripts.pory"
	msgbox Town07_JaksonText, MSGBOX_NPC
	return


Baron_Town07::
# 445 "data/rival_scripts.pory"
	speakername CommonText_Baron
# 446 "data/rival_scripts.pory"
	msgbox Town07_BaronText, MSGBOX_NPC
	return


Sakura_Town08::
# 452 "data/rival_scripts.pory"
	speakername CommonText_Sakura
# 453 "data/rival_scripts.pory"
	msgbox Town08_SakuraText, MSGBOX_NPC
	return


Harper_Town08::
# 457 "data/rival_scripts.pory"
	speakername CommonText_Harper
# 458 "data/rival_scripts.pory"
	msgbox Town08_HarperText, MSGBOX_NPC
	return


Redd_Town08::
# 462 "data/rival_scripts.pory"
	speakername CommonText_Redd
# 463 "data/rival_scripts.pory"
	msgbox Town08_ReddText, MSGBOX_NPC
	return


Jakson_Town08::
# 467 "data/rival_scripts.pory"
	speakername CommonText_Jakson
# 468 "data/rival_scripts.pory"
	msgbox Town08_JaksonText, MSGBOX_NPC
	return


Baron_Town08::
# 472 "data/rival_scripts.pory"
	speakername CommonText_Baron
# 473 "data/rival_scripts.pory"
	msgbox Town08_BaronText, MSGBOX_NPC
	return


Sakura_Town09::
# 479 "data/rival_scripts.pory"
	speakername CommonText_Sakura
# 480 "data/rival_scripts.pory"
	msgbox Town09_SakuraText, MSGBOX_NPC
	return


Harper_Town09::
# 484 "data/rival_scripts.pory"
	speakername CommonText_Harper
# 485 "data/rival_scripts.pory"
	msgbox Town09_HarperText, MSGBOX_NPC
	return


Redd_Town09::
# 489 "data/rival_scripts.pory"
	speakername CommonText_Redd
# 490 "data/rival_scripts.pory"
	msgbox Town09_ReddText, MSGBOX_NPC
	return


Jakson_Town09::
# 494 "data/rival_scripts.pory"
	speakername CommonText_Jakson
# 495 "data/rival_scripts.pory"
	msgbox Town09_JaksonText, MSGBOX_NPC
	return


Baron_Town09::
# 499 "data/rival_scripts.pory"
	speakername CommonText_Baron
# 500 "data/rival_scripts.pory"
	msgbox Town09_BaronText, MSGBOX_NPC
	return


Sakura_Town10::
# 506 "data/rival_scripts.pory"
	speakername CommonText_Sakura
# 507 "data/rival_scripts.pory"
	msgbox Town10_SakuraText, MSGBOX_NPC
	return


Harper_Town10::
# 511 "data/rival_scripts.pory"
	speakername CommonText_Harper
# 512 "data/rival_scripts.pory"
	msgbox Town10_HarperText, MSGBOX_NPC
	return


Redd_Town10::
# 516 "data/rival_scripts.pory"
	speakername CommonText_Redd
# 517 "data/rival_scripts.pory"
	msgbox Town10_ReddText, MSGBOX_NPC
	return


Jakson_Town10::
# 521 "data/rival_scripts.pory"
	speakername CommonText_Jakson
# 522 "data/rival_scripts.pory"
	msgbox Town10_JaksonText, MSGBOX_NPC
	return


Baron_Town10::
# 526 "data/rival_scripts.pory"
	speakername CommonText_Baron
# 527 "data/rival_scripts.pory"
	msgbox Town10_BaronText, MSGBOX_NPC
	return


Sakura_Town11::
# 533 "data/rival_scripts.pory"
	speakername CommonText_Sakura
# 534 "data/rival_scripts.pory"
	msgbox Town11_SakuraText, MSGBOX_NPC
	return


Harper_Town11::
# 538 "data/rival_scripts.pory"
	speakername CommonText_Harper
# 539 "data/rival_scripts.pory"
	msgbox Town11_HarperText, MSGBOX_NPC
	return


Redd_Town11::
# 543 "data/rival_scripts.pory"
	speakername CommonText_Redd
# 544 "data/rival_scripts.pory"
	msgbox Town11_ReddText, MSGBOX_NPC
	return


Jakson_Town11::
# 548 "data/rival_scripts.pory"
	speakername CommonText_Jakson
# 549 "data/rival_scripts.pory"
	msgbox Town11_JaksonText, MSGBOX_NPC
	return


Baron_Town11::
# 553 "data/rival_scripts.pory"
	speakername CommonText_Baron
# 554 "data/rival_scripts.pory"
	msgbox Town11_BaronText, MSGBOX_NPC
	return


Sakura_Town12::
# 560 "data/rival_scripts.pory"
	speakername CommonText_Sakura
# 561 "data/rival_scripts.pory"
	msgbox Town12_SakuraText, MSGBOX_NPC
	return


Harper_Town12::
# 565 "data/rival_scripts.pory"
	lock
# 566 "data/rival_scripts.pory"
	faceplayer
# 567 "data/rival_scripts.pory"
	speakername CommonText_Harper
# 568 "data/rival_scripts.pory"
	msgbox Town12_HarperTextQ, MSGBOX_YESNO
# 569 "data/rival_scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Harper_Town12_2
# 573 "data/rival_scripts.pory"
	msgbox Town12_HarperTextNo, MSGBOX_NPC
Harper_Town12_1:
# 575 "data/rival_scripts.pory"
	release
	return

Harper_Town12_2:
# 570 "data/rival_scripts.pory"
	msgbox Town12_HarperTextYes, MSGBOX_NPC
	goto Harper_Town12_1


Redd_Town12::
# 579 "data/rival_scripts.pory"
	speakername CommonText_Redd
# 580 "data/rival_scripts.pory"
	msgbox Town12_ReddText, MSGBOX_NPC
	return


Jakson_Town12::
# 584 "data/rival_scripts.pory"
	speakername CommonText_Jakson
# 585 "data/rival_scripts.pory"
	msgbox Town12_JaksonText, MSGBOX_NPC
	return


Baron_Town12::
# 589 "data/rival_scripts.pory"
	speakername CommonText_Baron
# 590 "data/rival_scripts.pory"
	msgbox Town12_BaronText, MSGBOX_NPC
	return


Sakura_Town13::
# 596 "data/rival_scripts.pory"
	speakername CommonText_Sakura
# 597 "data/rival_scripts.pory"
	msgbox Town13_SakuraText, MSGBOX_NPC
	return


Harper_Town13::
# 601 "data/rival_scripts.pory"
	speakername CommonText_Harper
# 602 "data/rival_scripts.pory"
	msgbox Town13_HarperText, MSGBOX_NPC
	return


Redd_Town13::
# 606 "data/rival_scripts.pory"
	speakername CommonText_Redd
# 607 "data/rival_scripts.pory"
	msgbox Town13_ReddText, MSGBOX_NPC
	return


Jakson_Town13::
# 611 "data/rival_scripts.pory"
	speakername CommonText_Jakson
# 612 "data/rival_scripts.pory"
	msgbox Town13_JaksonText, MSGBOX_NPC
# 613 "data/rival_scripts.pory"
	closemessage
# 614 "data/rival_scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 615 "data/rival_scripts.pory"
	speakername CommonText_Jakson
# 616 "data/rival_scripts.pory"
	msgbox Town13_JaksonTextAfter, MSGBOX_NPC
	return


Baron_Town13::
# 620 "data/rival_scripts.pory"
	speakername CommonText_Baron
# 621 "data/rival_scripts.pory"
	msgbox Town13_BaronText, MSGBOX_NPC
	return


Sakura_Town14::
# 627 "data/rival_scripts.pory"
	speakername CommonText_Sakura
# 628 "data/rival_scripts.pory"
	msgbox Town14_SakuraText, MSGBOX_NPC
	return


Harper_Town14::
# 632 "data/rival_scripts.pory"
	speakername CommonText_Harper
# 633 "data/rival_scripts.pory"
	msgbox Town14_HarperText, MSGBOX_NPC
	return


Redd_Town14::
# 637 "data/rival_scripts.pory"
	speakername CommonText_Redd
# 638 "data/rival_scripts.pory"
	msgbox Town14_ReddText, MSGBOX_NPC
	return


Jakson_Town14::
# 642 "data/rival_scripts.pory"
	speakername CommonText_Jakson
# 643 "data/rival_scripts.pory"
	msgbox Town14_JaksonText, MSGBOX_NPC
	return


Baron_Town14::
# 647 "data/rival_scripts.pory"
	speakername CommonText_Baron
# 648 "data/rival_scripts.pory"
	msgbox Town14_BaronText, MSGBOX_NPC
	return


Sakura_Town15::
# 654 "data/rival_scripts.pory"
	speakername CommonText_Sakura
# 655 "data/rival_scripts.pory"
	msgbox Town15_SakuraText, MSGBOX_NPC
	return


Harper_Town15::
# 659 "data/rival_scripts.pory"
	speakername CommonText_Harper
# 660 "data/rival_scripts.pory"
	msgbox Town15_HarperText, MSGBOX_NPC
	return


Redd_Town15::
# 664 "data/rival_scripts.pory"
	speakername CommonText_Redd
# 665 "data/rival_scripts.pory"
	msgbox Town15_ReddText, MSGBOX_NPC
	return


Jakson_Town15::
# 669 "data/rival_scripts.pory"
	speakername CommonText_Jakson
# 670 "data/rival_scripts.pory"
	msgbox Town15_JaksonText, MSGBOX_NPC
	return


Baron_Town15::
# 674 "data/rival_scripts.pory"
	speakername CommonText_Baron
# 675 "data/rival_scripts.pory"
	msgbox Town15_BaronText, MSGBOX_NPC
	return


Baron_Town01_Text_0:
# 106 "data/rival_scripts.pory"
	.string "Left foot… Right foot…\nLeft foot… Right foot…$"

Rival_Scene03_Text_0:
# 310 "data/rival_scripts.pory"
	.string "You exchanged PokéNav info with your\n"
	.string "friends.$"
