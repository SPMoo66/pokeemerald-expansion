Rival_Scene01::
# 24 "data/rival_scripts.pory"
	compare VAR_BIRCH_LAB_STATE, 3
	goto_if_eq Rival_Scene01_2
Rival_Scene01_1:
# 59 "data/rival_scripts.pory"
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
Rival_Scene01_4:
# 37 "data/rival_scripts.pory"
	call GetRivalForNameBox
# 38 "data/rival_scripts.pory"
	switch VAR_EMERALBODY_RIVAL
# 39 "data/rival_scripts.pory"
	case 1, Rival_Scene01_9
# 41 "data/rival_scripts.pory"
	case 2, Rival_Scene01_10
# 43 "data/rival_scripts.pory"
	case 3, Rival_Scene01_11
# 45 "data/rival_scripts.pory"
	case 4, Rival_Scene01_12
# 48 "data/rival_scripts.pory"
	msgbox Scene01_BaronText
Rival_Scene01_7:
# 50 "data/rival_scripts.pory"
	closemessage
# 51 "data/rival_scripts.pory"
	setvar VAR_EMERALBODY_RIVAL_STATE, 1
# 52 "data/rival_scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 53 "data/rival_scripts.pory"
	fadedefaultbgm
# 54 "data/rival_scripts.pory"
	removeobject RIVAL_LITTLEROOT
# 55 "data/rival_scripts.pory"
	clearflag FLAG_TEMP_1
# 56 "data/rival_scripts.pory"
	addobject BARON_LITTLEROOT
# 57 "data/rival_scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
	goto Rival_Scene01_1

Rival_Scene01_6:
# 33 "data/rival_scripts.pory"
	applymovement RIVAL_LITTLEROOT, Common_Movement_FaceUp
# 34 "data/rival_scripts.pory"
	waitmovement 0
	goto Rival_Scene01_4

Rival_Scene01_9:
# 40 "data/rival_scripts.pory"
	msgbox Scene01_HarperText
	goto Rival_Scene01_7

Rival_Scene01_10:
# 42 "data/rival_scripts.pory"
	msgbox Scene01_JaksonText
	goto Rival_Scene01_7

Rival_Scene01_11:
# 44 "data/rival_scripts.pory"
	msgbox Scene01_ReddText
	goto Rival_Scene01_7

Rival_Scene01_12:
# 46 "data/rival_scripts.pory"
	msgbox Scene01_SakuraText
	goto Rival_Scene01_7


# 62 "data/rival_scripts.pory"
Rival_Scene01_Move1:
# 63 "data/rival_scripts.pory"
	emote_exclamation_mark
# 64 "data/rival_scripts.pory"
	delay_16
# 64 "data/rival_scripts.pory"
	delay_16
# 64 "data/rival_scripts.pory"
	delay_16
# 64 "data/rival_scripts.pory"
	delay_16
# 65 "data/rival_scripts.pory"
	walk_left
# 65 "data/rival_scripts.pory"
	walk_left
	step_end

# 68 "data/rival_scripts.pory"
Rival_Scene01_Move2:
# 69 "data/rival_scripts.pory"
	walk_fast_down
# 69 "data/rival_scripts.pory"
	walk_fast_down
# 69 "data/rival_scripts.pory"
	walk_fast_down
# 69 "data/rival_scripts.pory"
	walk_fast_down
# 69 "data/rival_scripts.pory"
	walk_fast_down
# 69 "data/rival_scripts.pory"
	walk_fast_down
# 69 "data/rival_scripts.pory"
	walk_fast_down
	step_end

Sakura_Town01::
# 75 "data/rival_scripts.pory"
	speakername CommonText_Sakura
# 76 "data/rival_scripts.pory"
	msgbox Town01_SakuraText, MSGBOX_NPC
	return


Jakson_Town01::
# 80 "data/rival_scripts.pory"
	speakername CommonText_Jakson
# 81 "data/rival_scripts.pory"
	msgbox Town01_JaksonText, MSGBOX_NPC
	return


Redd_Town01::
# 85 "data/rival_scripts.pory"
	lock
# 86 "data/rival_scripts.pory"
	speakername CommonText_Redd
# 87 "data/rival_scripts.pory"
	msgbox Town01_ReddText
# 88 "data/rival_scripts.pory"
	release
	return


Harper_Town01::
# 92 "data/rival_scripts.pory"
	speakername CommonText_Harper
# 93 "data/rival_scripts.pory"
	msgbox Town01_HarperText, MSGBOX_NPC
	return


Baron_Town01::
# 97 "data/rival_scripts.pory"
	lock
# 98 "data/rival_scripts.pory"
	applymovement BARON_LITTLEROOT, Baron_Town01_Move
# 99 "data/rival_scripts.pory"
	waitmovement 0
# 100 "data/rival_scripts.pory"
	applymovement BARON_LITTLEROOT, Baron_Town01_Move
# 101 "data/rival_scripts.pory"
	waitmovement 0
# 102 "data/rival_scripts.pory"
	speakername CommonText_Baron
# 103 "data/rival_scripts.pory"
	msgbox Baron_Town01_Text_0
# 104 "data/rival_scripts.pory"
	closemessage
# 105 "data/rival_scripts.pory"
	faceplayer
# 106 "data/rival_scripts.pory"
	playse SE_PIN
# 107 "data/rival_scripts.pory"
	applymovement BARON_LITTLEROOT, Common_Movement_ExclamationMark
# 108 "data/rival_scripts.pory"
	waitmovement 0
# 109 "data/rival_scripts.pory"
	delay 60
# 110 "data/rival_scripts.pory"
	speakername CommonText_Baron
# 111 "data/rival_scripts.pory"
	msgbox Town01_BaronText
# 112 "data/rival_scripts.pory"
	applymovement BARON_LITTLEROOT, Common_Movement_FaceLeft
# 113 "data/rival_scripts.pory"
	waitmovement 0
# 114 "data/rival_scripts.pory"
	release
	return


# 117 "data/rival_scripts.pory"
Baron_Town01_Move:
# 118 "data/rival_scripts.pory"
	walk_in_place_left
# 119 "data/rival_scripts.pory"
	delay_16
	step_end

Rival_Scene02::
# 125 "data/rival_scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 1
	goto_if_eq Rival_Scene02_2
Rival_Scene02_1:
# 191 "data/rival_scripts.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 192 "data/rival_scripts.pory"
	release
	return

Rival_Scene02_2:
# 126 "data/rival_scripts.pory"
	lock
# 127 "data/rival_scripts.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 128 "data/rival_scripts.pory"
	call Common_EventScript_PlayEmRivalBgm
# 129 "data/rival_scripts.pory"
	playse SE_PIN
# 130 "data/rival_scripts.pory"
	applymovement RIVAL_PETALBURG, Common_Movement_ExclamationMark
# 131 "data/rival_scripts.pory"
	waitmovement 0
# 132 "data/rival_scripts.pory"
	delay 60
# 133 "data/rival_scripts.pory"
	applymovement RIVAL_PETALBURG, Common_Movement_WalkRight2
# 134 "data/rival_scripts.pory"
	waitmovement 0
# 135 "data/rival_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 136 "data/rival_scripts.pory"
	switch VAR_TEMP_1
# 137 "data/rival_scripts.pory"
	case 16, Rival_Scene02_6
# 140 "data/rival_scripts.pory"
	case 17, Rival_Scene02_7
# 143 "data/rival_scripts.pory"
	case 19, Rival_Scene02_8
Rival_Scene02_4:
# 148 "data/rival_scripts.pory"
	applymovement RIVAL_PETALBURG, Common_Movement_WalkRight2
# 149 "data/rival_scripts.pory"
	waitmovement 0
# 150 "data/rival_scripts.pory"
	call GetRivalForNameBox
# 151 "data/rival_scripts.pory"
	call GetRivalMusic
# 152 "data/rival_scripts.pory"
	switch VAR_EMERALBODY_RIVAL
# 153 "data/rival_scripts.pory"
	case 1, Rival_Scene02_11
# 158 "data/rival_scripts.pory"
	case 2, Rival_Scene02_12
# 163 "data/rival_scripts.pory"
	case 3, Rival_Scene02_13
# 168 "data/rival_scripts.pory"
	case 4, Rival_Scene02_14
# 174 "data/rival_scripts.pory"
	msgbox Scene02_BaronText_PreBattle
# 175 "data/rival_scripts.pory"
	trainerbattle_no_intro TRAINER_BARON_1, Scene02_BaronText_BattleVictory
# 176 "data/rival_scripts.pory"
	call GetRivalForNameBox
# 177 "data/rival_scripts.pory"
	msgbox Scene02_BaronText_PostBattle
Rival_Scene02_9:
# 179 "data/rival_scripts.pory"
	closemessage
# 180 "data/rival_scripts.pory"
	setvar VAR_EMERALBODY_RIVAL_STATE, 2
# 181 "data/rival_scripts.pory"
	clearflag FLAG_TEMP_2
# 182 "data/rival_scripts.pory"
	fadedefaultbgm
# 183 "data/rival_scripts.pory"
	compare VAR_TEMP_1, 16
	goto_if_eq Rival_Scene02_17
Rival_Scene02_16:
# 187 "data/rival_scripts.pory"
	applymovement RIVAL_PETALBURG, Common_Movement_WalkLeft7
# 188 "data/rival_scripts.pory"
	waitmovement 0
# 189 "data/rival_scripts.pory"
	removeobject RIVAL_PETALBURG
	goto Rival_Scene02_1

Rival_Scene02_6:
# 138 "data/rival_scripts.pory"
	applymovement RIVAL_PETALBURG, Common_Movement_WalkUp2
# 139 "data/rival_scripts.pory"
	waitmovement 0
	goto Rival_Scene02_4

Rival_Scene02_7:
# 141 "data/rival_scripts.pory"
	applymovement RIVAL_PETALBURG, Common_Movement_WalkUp
# 142 "data/rival_scripts.pory"
	waitmovement 0
	goto Rival_Scene02_4

Rival_Scene02_8:
# 144 "data/rival_scripts.pory"
	applymovement RIVAL_PETALBURG, Common_Movement_WalkDown
# 145 "data/rival_scripts.pory"
	waitmovement 0
	goto Rival_Scene02_4

Rival_Scene02_11:
# 154 "data/rival_scripts.pory"
	msgbox Scene02_HarperText_PreBattle
# 155 "data/rival_scripts.pory"
	trainerbattle_no_intro TRAINER_HARPER_1, Scene02_HarperText_BattleVictory
# 156 "data/rival_scripts.pory"
	call GetRivalForNameBox
# 157 "data/rival_scripts.pory"
	msgbox Scene02_HarperText_PostBattle
	goto Rival_Scene02_9

Rival_Scene02_12:
# 159 "data/rival_scripts.pory"
	msgbox Scene02_JaksonText_PreBattle
# 160 "data/rival_scripts.pory"
	trainerbattle_no_intro TRAINER_JAKSON_1, Scene02_JaksonText_BattleVictory
# 161 "data/rival_scripts.pory"
	call GetRivalForNameBox
# 162 "data/rival_scripts.pory"
	msgbox Scene02_JaksonText_PostBattle
	goto Rival_Scene02_9

Rival_Scene02_13:
# 164 "data/rival_scripts.pory"
	msgbox Scene02_ReddText_PreBattle
# 165 "data/rival_scripts.pory"
	trainerbattle_no_intro TRAINER_REDD_1, Scene02_ReddText_BattleVictory
# 166 "data/rival_scripts.pory"
	call GetRivalForNameBox
# 167 "data/rival_scripts.pory"
	msgbox Scene02_ReddText_PostBattle
	goto Rival_Scene02_9

Rival_Scene02_14:
# 169 "data/rival_scripts.pory"
	msgbox Scene02_SakuraText_PreBattle
# 170 "data/rival_scripts.pory"
	trainerbattle_no_intro TRAINER_SAKURA_1, Scene02_SakuraText_BattleVictory
# 171 "data/rival_scripts.pory"
	call GetRivalForNameBox
# 172 "data/rival_scripts.pory"
	msgbox Scene02_SakuraText_PostBattle
	goto Rival_Scene02_9

Rival_Scene02_17:
# 184 "data/rival_scripts.pory"
	applymovement RIVAL_PETALBURG, Common_Movement_WalkDown
# 185 "data/rival_scripts.pory"
	waitmovement 0
	goto Rival_Scene02_16


Sakura_Town02::
# 198 "data/rival_scripts.pory"
	speakername CommonText_Sakura
# 199 "data/rival_scripts.pory"
	msgbox Town02_SakuraText, MSGBOX_NPC
	return


Harper_Town02::
# 203 "data/rival_scripts.pory"
	speakername CommonText_Harper
# 204 "data/rival_scripts.pory"
	msgbox Town02_HarperText, MSGBOX_NPC
	return


Redd_Town02::
# 208 "data/rival_scripts.pory"
	speakername CommonText_Redd
# 209 "data/rival_scripts.pory"
	msgbox Town02_ReddText, MSGBOX_NPC
	return


Baron_Town02::
# 213 "data/rival_scripts.pory"
	speakername CommonText_Baron
# 214 "data/rival_scripts.pory"
	msgbox Town02_BaronText, MSGBOX_NPC
	return


Jakson_Town02::
# 218 "data/rival_scripts.pory"
	speakername CommonText_Jakson
# 219 "data/rival_scripts.pory"
	msgbox Town02_JaksonText, MSGBOX_NPC
	return


Sakura_Town03::
# 225 "data/rival_scripts.pory"
	speakername CommonText_Sakura
# 226 "data/rival_scripts.pory"
	msgbox Town03_SakuraText, MSGBOX_NPC
	return


Harper_Town03::
# 230 "data/rival_scripts.pory"
	speakername CommonText_Harper
# 231 "data/rival_scripts.pory"
	msgbox Town03_HarperText, MSGBOX_NPC
	return


Redd_Town03::
# 235 "data/rival_scripts.pory"
	speakername CommonText_Redd
# 236 "data/rival_scripts.pory"
	msgbox Town03_ReddText, MSGBOX_NPC
	return


Jakson_Town03::
# 240 "data/rival_scripts.pory"
	speakername CommonText_Jakson
# 241 "data/rival_scripts.pory"
	msgbox Town03_JaksonText, MSGBOX_NPC
	return


Baron_Town03::
# 245 "data/rival_scripts.pory"
	lock
# 246 "data/rival_scripts.pory"
	speakername CommonText_Baron
# 247 "data/rival_scripts.pory"
	msgbox Town03_BaronText1
# 248 "data/rival_scripts.pory"
	faceplayer
# 249 "data/rival_scripts.pory"
	msgbox Town03_BaronText2
# 250 "data/rival_scripts.pory"
	release
	return


Rival_Scene03::
# 256 "data/rival_scripts.pory"
	delay 100
# 257 "data/rival_scripts.pory"
	call Common_EventScript_PlayEmRivalBgm
# 258 "data/rival_scripts.pory"
	addobject RIVAL_RUSTBORO
# 259 "data/rival_scripts.pory"
	setobjectxy RIVAL_RUSTBORO, 20, 15
# 260 "data/rival_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 261 "data/rival_scripts.pory"
	switch VAR_TEMP_1
# 262 "data/rival_scripts.pory"
	case 21, Rival_Scene03_3
# 266 "data/rival_scripts.pory"
	applymovement RIVAL_RUSTBORO, Common_Movement_WalkDown7
# 267 "data/rival_scripts.pory"
	waitmovement 0
Rival_Scene03_1:
# 269 "data/rival_scripts.pory"
	applymovement RIVAL_RUSTBORO, Common_Movement_WalkLeft2
# 270 "data/rival_scripts.pory"
	waitmovement 0
# 271 "data/rival_scripts.pory"
	call GetRivalForNameBox
# 272 "data/rival_scripts.pory"
	switch VAR_EMERALBODY_RIVAL
# 273 "data/rival_scripts.pory"
	case 1, Rival_Scene03_7
# 275 "data/rival_scripts.pory"
	case 2, Rival_Scene03_8
# 277 "data/rival_scripts.pory"
	case 3, Rival_Scene03_9
# 279 "data/rival_scripts.pory"
	case 4, Rival_Scene03_10
# 282 "data/rival_scripts.pory"
	msgbox Scene03_BaronText
Rival_Scene03_5:
# 284 "data/rival_scripts.pory"
	closemessage
# 285 "data/rival_scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 286 "data/rival_scripts.pory"
	setobjectxy LOCALID_PLAYER, 11, 19
# 287 "data/rival_scripts.pory"
	setvar VAR_0x8004, 11
# 288 "data/rival_scripts.pory"
	setvar VAR_0x8005, 19
# 289 "data/rival_scripts.pory"
	special TeleportCamera
# 290 "data/rival_scripts.pory"
	addobject REDD_RUSTBORO
# 291 "data/rival_scripts.pory"
	addobject SAKURA_RUSTBORO
# 292 "data/rival_scripts.pory"
	addobject BARON_RUSTBORO
# 293 "data/rival_scripts.pory"
	addobject HARPER_RUSTBORO
# 294 "data/rival_scripts.pory"
	addobject JAKSON_RUSTBORO
# 295 "data/rival_scripts.pory"
	applymovement SAKURA_RUSTBORO, Common_Movement_FaceDown
# 296 "data/rival_scripts.pory"
	applymovement REDD_RUSTBORO, Common_Movement_FaceRight
# 297 "data/rival_scripts.pory"
	applymovement HARPER_RUSTBORO, Common_Movement_FaceLeft
# 298 "data/rival_scripts.pory"
	applymovement JAKSON_RUSTBORO, Common_Movement_FaceUp
# 299 "data/rival_scripts.pory"
	setobjectxy REDD_RUSTBORO, 10, 18
# 300 "data/rival_scripts.pory"
	setobjectxy SAKURA_RUSTBORO, 11, 17
# 301 "data/rival_scripts.pory"
	setobjectxy BARON_RUSTBORO, 12, 17
# 302 "data/rival_scripts.pory"
	setobjectxy HARPER_RUSTBORO, 13, 18
# 303 "data/rival_scripts.pory"
	setobjectxy JAKSON_RUSTBORO, 12, 19
# 304 "data/rival_scripts.pory"
	setobjectxy RIVAL_RUSTBORO, 0, 6
# 305 "data/rival_scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 306 "data/rival_scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 307 "data/rival_scripts.pory"
	message Rival_Scene03_Text_0
# 308 "data/rival_scripts.pory"
	applymovement JAKSON_RUSTBORO, Common_Movement_WalkInPlaceLeft
# 309 "data/rival_scripts.pory"
	waitmovement 0
# 310 "data/rival_scripts.pory"
	delay 30
# 311 "data/rival_scripts.pory"
	applymovement JAKSON_RUSTBORO, Common_Movement_WalkInPlaceUp
# 312 "data/rival_scripts.pory"
	applymovement HARPER_RUSTBORO, Common_Movement_WalkInPlaceDown
# 313 "data/rival_scripts.pory"
	waitmovement 0
# 314 "data/rival_scripts.pory"
	delay 40
# 315 "data/rival_scripts.pory"
	applymovement BARON_RUSTBORO, Common_Movement_WalkInPlaceLeft
# 316 "data/rival_scripts.pory"
	applymovement SAKURA_RUSTBORO, Common_Movement_WalkInPlaceRight
# 317 "data/rival_scripts.pory"
	waitmovement 0
# 318 "data/rival_scripts.pory"
	delay 30
# 319 "data/rival_scripts.pory"
	applymovement REDD_RUSTBORO, Common_Movement_WalkInPlaceDown
# 320 "data/rival_scripts.pory"
	waitmovement 0
# 321 "data/rival_scripts.pory"
	delay 50
# 322 "data/rival_scripts.pory"
	closemessage
# 323 "data/rival_scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 324 "data/rival_scripts.pory"
	removeobject REDD_RUSTBORO
# 325 "data/rival_scripts.pory"
	removeobject SAKURA_RUSTBORO
# 326 "data/rival_scripts.pory"
	removeobject BARON_RUSTBORO
# 327 "data/rival_scripts.pory"
	removeobject HARPER_RUSTBORO
# 328 "data/rival_scripts.pory"
	removeobject JAKSON_RUSTBORO
# 329 "data/rival_scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 330 "data/rival_scripts.pory"
	fadedefaultbgm
# 331 "data/rival_scripts.pory"
	setflag FLAG_ENABLE_EMIB_RIVAL_MATCH_CALL
# 332 "data/rival_scripts.pory"
	release
	return

Rival_Scene03_3:
# 263 "data/rival_scripts.pory"
	applymovement RIVAL_RUSTBORO, Common_Movement_WalkDown6
# 264 "data/rival_scripts.pory"
	waitmovement 0
	goto Rival_Scene03_1

Rival_Scene03_7:
# 274 "data/rival_scripts.pory"
	msgbox Scene03_HarperText
	goto Rival_Scene03_5

Rival_Scene03_8:
# 276 "data/rival_scripts.pory"
	msgbox Scene03_JaksonText
	goto Rival_Scene03_5

Rival_Scene03_9:
# 278 "data/rival_scripts.pory"
	msgbox Scene03_ReddText
	goto Rival_Scene03_5

Rival_Scene03_10:
# 280 "data/rival_scripts.pory"
	msgbox Scene03_SakuraText
	goto Rival_Scene03_5


Sakura_Town04::
# 338 "data/rival_scripts.pory"
	speakername CommonText_Sakura
# 339 "data/rival_scripts.pory"
	msgbox Town04_SakuraText, MSGBOX_NPC
	return


Harper_Town04::
# 343 "data/rival_scripts.pory"
	speakername CommonText_Harper
# 344 "data/rival_scripts.pory"
	msgbox Town04_HarperText, MSGBOX_NPC
	return


Redd_Town04::
# 348 "data/rival_scripts.pory"
	speakername CommonText_Redd
# 349 "data/rival_scripts.pory"
	msgbox Town04_ReddText, MSGBOX_NPC
	return


Jakson_Town04::
# 353 "data/rival_scripts.pory"
	speakername CommonText_Jakson
# 354 "data/rival_scripts.pory"
	msgbox Town04_JaksonText, MSGBOX_NPC
	return


Baron_Town04::
# 358 "data/rival_scripts.pory"
	speakername CommonText_Baron
# 359 "data/rival_scripts.pory"
	msgbox Town04_BaronText, MSGBOX_NPC
	return


Sakura_Town05::
# 365 "data/rival_scripts.pory"
	speakername CommonText_Sakura
# 366 "data/rival_scripts.pory"
	msgbox Town05_SakuraText, MSGBOX_NPC
	return


Harper_Town05::
# 370 "data/rival_scripts.pory"
	speakername CommonText_Harper
# 371 "data/rival_scripts.pory"
	msgbox Town05_HarperText, MSGBOX_NPC
	return


Redd_Town05::
# 375 "data/rival_scripts.pory"
	speakername CommonText_Redd
# 376 "data/rival_scripts.pory"
	msgbox Town05_ReddText, MSGBOX_NPC
	return


Jakson_Town05::
# 380 "data/rival_scripts.pory"
	speakername CommonText_Jakson
# 381 "data/rival_scripts.pory"
	msgbox Town05_JaksonText, MSGBOX_NPC
	return


Baron_Town05::
# 385 "data/rival_scripts.pory"
	speakername CommonText_Baron
# 386 "data/rival_scripts.pory"
	msgbox Town05_BaronText, MSGBOX_NPC
	return


Sakura_Town06::
# 392 "data/rival_scripts.pory"
	speakername CommonText_Sakura
# 393 "data/rival_scripts.pory"
	msgbox Town06_SakuraText, MSGBOX_NPC
	return


Harper_Town06::
# 397 "data/rival_scripts.pory"
	speakername CommonText_Harper
# 398 "data/rival_scripts.pory"
	msgbox Town06_HarperText, MSGBOX_NPC
	return


Redd_Town06::
# 402 "data/rival_scripts.pory"
	speakername CommonText_Redd
# 403 "data/rival_scripts.pory"
	msgbox Town06_ReddText1, MSGBOX_NPC
# 404 "data/rival_scripts.pory"
	applymovement 5, Common_Movement_QuestionMark
# 405 "data/rival_scripts.pory"
	speakername CommonText_Redd
# 406 "data/rival_scripts.pory"
	msgbox Town06_ReddText2, MSGBOX_NPC
	return


Jakson_Town06::
# 410 "data/rival_scripts.pory"
	speakername CommonText_Jakson
# 411 "data/rival_scripts.pory"
	msgbox Town06_JaksonText, MSGBOX_NPC
	return


Baron_Town06::
# 415 "data/rival_scripts.pory"
	speakername CommonText_Baron
# 416 "data/rival_scripts.pory"
	msgbox Town06_BaronText, MSGBOX_NPC
	return


Sakura_Town07::
# 422 "data/rival_scripts.pory"
	speakername CommonText_Sakura
# 423 "data/rival_scripts.pory"
	msgbox Town07_SakuraText, MSGBOX_NPC
	return


Harper_Town07::
# 427 "data/rival_scripts.pory"
	speakername CommonText_Harper
# 428 "data/rival_scripts.pory"
	msgbox Town07_HarperText, MSGBOX_NPC
	return


Redd_Town07::
# 432 "data/rival_scripts.pory"
	speakername CommonText_Redd
# 433 "data/rival_scripts.pory"
	msgbox Town07_ReddText, MSGBOX_NPC
	return


Jakson_Town07::
# 437 "data/rival_scripts.pory"
	speakername CommonText_Jakson
# 438 "data/rival_scripts.pory"
	msgbox Town07_JaksonText, MSGBOX_NPC
	return


Baron_Town07::
# 442 "data/rival_scripts.pory"
	speakername CommonText_Baron
# 443 "data/rival_scripts.pory"
	msgbox Town07_BaronText, MSGBOX_NPC
	return


Sakura_Town08::
# 449 "data/rival_scripts.pory"
	speakername CommonText_Sakura
# 450 "data/rival_scripts.pory"
	msgbox Town08_SakuraText, MSGBOX_NPC
	return


Harper_Town08::
# 454 "data/rival_scripts.pory"
	speakername CommonText_Harper
# 455 "data/rival_scripts.pory"
	msgbox Town08_HarperText, MSGBOX_NPC
	return


Redd_Town08::
# 459 "data/rival_scripts.pory"
	speakername CommonText_Redd
# 460 "data/rival_scripts.pory"
	msgbox Town08_ReddText, MSGBOX_NPC
	return


Jakson_Town08::
# 464 "data/rival_scripts.pory"
	speakername CommonText_Jakson
# 465 "data/rival_scripts.pory"
	msgbox Town08_JaksonText, MSGBOX_NPC
	return


Baron_Town08::
# 469 "data/rival_scripts.pory"
	speakername CommonText_Baron
# 470 "data/rival_scripts.pory"
	msgbox Town08_BaronText, MSGBOX_NPC
	return


Sakura_Town09::
# 476 "data/rival_scripts.pory"
	speakername CommonText_Sakura
# 477 "data/rival_scripts.pory"
	msgbox Town09_SakuraText, MSGBOX_NPC
	return


Harper_Town09::
# 481 "data/rival_scripts.pory"
	speakername CommonText_Harper
# 482 "data/rival_scripts.pory"
	msgbox Town09_HarperText, MSGBOX_NPC
	return


Redd_Town09::
# 486 "data/rival_scripts.pory"
	speakername CommonText_Redd
# 487 "data/rival_scripts.pory"
	msgbox Town09_ReddText, MSGBOX_NPC
	return


Jakson_Town09::
# 491 "data/rival_scripts.pory"
	speakername CommonText_Jakson
# 492 "data/rival_scripts.pory"
	msgbox Town09_JaksonText, MSGBOX_NPC
	return


Baron_Town09::
# 496 "data/rival_scripts.pory"
	speakername CommonText_Baron
# 497 "data/rival_scripts.pory"
	msgbox Town09_BaronText, MSGBOX_NPC
	return


Sakura_Town10::
# 503 "data/rival_scripts.pory"
	speakername CommonText_Sakura
# 504 "data/rival_scripts.pory"
	msgbox Town10_SakuraText, MSGBOX_NPC
	return


Harper_Town10::
# 508 "data/rival_scripts.pory"
	speakername CommonText_Harper
# 509 "data/rival_scripts.pory"
	msgbox Town10_HarperText, MSGBOX_NPC
	return


Redd_Town10::
# 513 "data/rival_scripts.pory"
	speakername CommonText_Redd
# 514 "data/rival_scripts.pory"
	msgbox Town10_ReddText, MSGBOX_NPC
	return


Jakson_Town10::
# 518 "data/rival_scripts.pory"
	speakername CommonText_Jakson
# 519 "data/rival_scripts.pory"
	msgbox Town10_JaksonText, MSGBOX_NPC
	return


Baron_Town10::
# 523 "data/rival_scripts.pory"
	speakername CommonText_Baron
# 524 "data/rival_scripts.pory"
	msgbox Town10_BaronText, MSGBOX_NPC
	return


Sakura_Town11::
# 530 "data/rival_scripts.pory"
	speakername CommonText_Sakura
# 531 "data/rival_scripts.pory"
	msgbox Town11_SakuraText, MSGBOX_NPC
	return


Harper_Town11::
# 535 "data/rival_scripts.pory"
	speakername CommonText_Harper
# 536 "data/rival_scripts.pory"
	msgbox Town11_HarperText, MSGBOX_NPC
	return


Redd_Town11::
# 540 "data/rival_scripts.pory"
	speakername CommonText_Redd
# 541 "data/rival_scripts.pory"
	msgbox Town11_ReddText, MSGBOX_NPC
	return


Jakson_Town11::
# 545 "data/rival_scripts.pory"
	speakername CommonText_Jakson
# 546 "data/rival_scripts.pory"
	msgbox Town11_JaksonText, MSGBOX_NPC
	return


Baron_Town11::
# 550 "data/rival_scripts.pory"
	speakername CommonText_Baron
# 551 "data/rival_scripts.pory"
	msgbox Town11_BaronText, MSGBOX_NPC
	return


Sakura_Town12::
# 557 "data/rival_scripts.pory"
	speakername CommonText_Sakura
# 558 "data/rival_scripts.pory"
	msgbox Town12_SakuraText, MSGBOX_NPC
	return


Harper_Town12::
# 562 "data/rival_scripts.pory"
	lock
# 563 "data/rival_scripts.pory"
	faceplayer
# 564 "data/rival_scripts.pory"
	speakername CommonText_Harper
# 565 "data/rival_scripts.pory"
	msgbox Town12_HarperTextQ, MSGBOX_YESNO
# 566 "data/rival_scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Harper_Town12_2
# 570 "data/rival_scripts.pory"
	msgbox Town12_HarperTextNo, MSGBOX_NPC
Harper_Town12_1:
# 572 "data/rival_scripts.pory"
	release
	return

Harper_Town12_2:
# 567 "data/rival_scripts.pory"
	msgbox Town12_HarperTextYes, MSGBOX_NPC
	goto Harper_Town12_1


Redd_Town12::
# 576 "data/rival_scripts.pory"
	speakername CommonText_Redd
# 577 "data/rival_scripts.pory"
	msgbox Town12_ReddText, MSGBOX_NPC
	return


Jakson_Town12::
# 581 "data/rival_scripts.pory"
	speakername CommonText_Jakson
# 582 "data/rival_scripts.pory"
	msgbox Town12_JaksonText, MSGBOX_NPC
	return


Baron_Town12::
# 586 "data/rival_scripts.pory"
	speakername CommonText_Baron
# 587 "data/rival_scripts.pory"
	msgbox Town12_BaronText, MSGBOX_NPC
	return


Sakura_Town13::
# 593 "data/rival_scripts.pory"
	speakername CommonText_Sakura
# 594 "data/rival_scripts.pory"
	msgbox Town13_SakuraText, MSGBOX_NPC
	return


Harper_Town13::
# 598 "data/rival_scripts.pory"
	speakername CommonText_Harper
# 599 "data/rival_scripts.pory"
	msgbox Town13_HarperText, MSGBOX_NPC
	return


Redd_Town13::
# 603 "data/rival_scripts.pory"
	speakername CommonText_Redd
# 604 "data/rival_scripts.pory"
	msgbox Town13_ReddText, MSGBOX_NPC
	return


Jakson_Town13::
# 608 "data/rival_scripts.pory"
	speakername CommonText_Jakson
# 609 "data/rival_scripts.pory"
	msgbox Town13_JaksonText, MSGBOX_NPC
# 610 "data/rival_scripts.pory"
	closemessage
# 611 "data/rival_scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 612 "data/rival_scripts.pory"
	speakername CommonText_Jakson
# 613 "data/rival_scripts.pory"
	msgbox Town13_JaksonTextAfter, MSGBOX_NPC
	return


Baron_Town13::
# 617 "data/rival_scripts.pory"
	speakername CommonText_Baron
# 618 "data/rival_scripts.pory"
	msgbox Town13_BaronText, MSGBOX_NPC
	return


Sakura_Town14::
# 624 "data/rival_scripts.pory"
	speakername CommonText_Sakura
# 625 "data/rival_scripts.pory"
	msgbox Town14_SakuraText, MSGBOX_NPC
	return


Harper_Town14::
# 629 "data/rival_scripts.pory"
	speakername CommonText_Harper
# 630 "data/rival_scripts.pory"
	msgbox Town14_HarperText, MSGBOX_NPC
	return


Redd_Town14::
# 634 "data/rival_scripts.pory"
	speakername CommonText_Redd
# 635 "data/rival_scripts.pory"
	msgbox Town14_ReddText, MSGBOX_NPC
	return


Jakson_Town14::
# 639 "data/rival_scripts.pory"
	speakername CommonText_Jakson
# 640 "data/rival_scripts.pory"
	msgbox Town14_JaksonText, MSGBOX_NPC
	return


Baron_Town14::
# 644 "data/rival_scripts.pory"
	speakername CommonText_Baron
# 645 "data/rival_scripts.pory"
	msgbox Town14_BaronText, MSGBOX_NPC
	return


Baron_Town01_Text_0:
# 103 "data/rival_scripts.pory"
	.string "Left foot… Right foot…\nLeft foot… Right foot…$"

Rival_Scene03_Text_0:
# 307 "data/rival_scripts.pory"
	.string "You exchanged PokéNav info with your\n"
	.string "friends.$"
