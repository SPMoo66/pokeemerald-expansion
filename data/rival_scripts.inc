Rival_Scene01::
# 23 "data/rival_scripts.pory"
	compare VAR_BIRCH_LAB_STATE, 3
	goto_if_eq Rival_Scene01_2
Rival_Scene01_1:
# 58 "data/rival_scripts.pory"
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
	fadescreenswapbuffers FADE_TO_BLACK
# 52 "data/rival_scripts.pory"
	fadedefaultbgm
# 53 "data/rival_scripts.pory"
	removeobject RIVAL_LITTLEROOT
# 54 "data/rival_scripts.pory"
	clearflag FLAG_TEMP_1
# 55 "data/rival_scripts.pory"
	addobject BARON_LITTLEROOT
# 56 "data/rival_scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
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


# 61 "data/rival_scripts.pory"
Rival_Scene01_Move1:
# 62 "data/rival_scripts.pory"
	emote_exclamation_mark
# 63 "data/rival_scripts.pory"
	delay_16
# 63 "data/rival_scripts.pory"
	delay_16
# 63 "data/rival_scripts.pory"
	delay_16
# 63 "data/rival_scripts.pory"
	delay_16
# 64 "data/rival_scripts.pory"
	walk_left
# 64 "data/rival_scripts.pory"
	walk_left
	step_end

# 67 "data/rival_scripts.pory"
Rival_Scene01_Move2:
# 68 "data/rival_scripts.pory"
	walk_fast_down
# 68 "data/rival_scripts.pory"
	walk_fast_down
# 68 "data/rival_scripts.pory"
	walk_fast_down
# 68 "data/rival_scripts.pory"
	walk_fast_down
# 68 "data/rival_scripts.pory"
	walk_fast_down
# 68 "data/rival_scripts.pory"
	walk_fast_down
# 68 "data/rival_scripts.pory"
	walk_fast_down
	step_end

Sakura_Town01::
# 74 "data/rival_scripts.pory"
	speakername CommonText_Sakura
# 75 "data/rival_scripts.pory"
	msgbox Town01_SakuraText, MSGBOX_NPC
	return


Jakson_Town01::
# 79 "data/rival_scripts.pory"
	speakername CommonText_Jakson
# 80 "data/rival_scripts.pory"
	msgbox Town01_JaksonText, MSGBOX_NPC
	return


Redd_Town01::
# 84 "data/rival_scripts.pory"
	lock
# 85 "data/rival_scripts.pory"
	speakername CommonText_Redd
# 86 "data/rival_scripts.pory"
	msgbox Town01_ReddText
# 87 "data/rival_scripts.pory"
	release
	return


Harper_Town01::
# 91 "data/rival_scripts.pory"
	speakername CommonText_Harper
# 92 "data/rival_scripts.pory"
	msgbox Town01_HarperText, MSGBOX_NPC
	return


Baron_Town01::
# 96 "data/rival_scripts.pory"
	lock
# 97 "data/rival_scripts.pory"
	applymovement BARON_LITTLEROOT, Baron_Town01_Move
# 98 "data/rival_scripts.pory"
	waitmovement 0
# 99 "data/rival_scripts.pory"
	applymovement BARON_LITTLEROOT, Baron_Town01_Move
# 100 "data/rival_scripts.pory"
	waitmovement 0
# 101 "data/rival_scripts.pory"
	speakername CommonText_Baron
# 102 "data/rival_scripts.pory"
	msgbox Baron_Town01_Text_0
# 103 "data/rival_scripts.pory"
	closemessage
# 104 "data/rival_scripts.pory"
	faceplayer
# 105 "data/rival_scripts.pory"
	playse SE_PIN
# 106 "data/rival_scripts.pory"
	applymovement BARON_LITTLEROOT, Common_Movement_ExclamationMark
# 107 "data/rival_scripts.pory"
	waitmovement 0
# 108 "data/rival_scripts.pory"
	delay 60
# 109 "data/rival_scripts.pory"
	speakername CommonText_Baron
# 110 "data/rival_scripts.pory"
	msgbox Town01_BaronText
# 111 "data/rival_scripts.pory"
	applymovement BARON_LITTLEROOT, Common_Movement_FaceLeft
# 112 "data/rival_scripts.pory"
	waitmovement 0
# 113 "data/rival_scripts.pory"
	release
	return


# 116 "data/rival_scripts.pory"
Baron_Town01_Move:
# 117 "data/rival_scripts.pory"
	walk_in_place_left
# 118 "data/rival_scripts.pory"
	delay_16
	step_end

Rival_Scene02::
# 124 "data/rival_scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 1
	goto_if_eq Rival_Scene02_2
Rival_Scene02_1:
# 190 "data/rival_scripts.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 191 "data/rival_scripts.pory"
	release
	return

Rival_Scene02_2:
# 125 "data/rival_scripts.pory"
	lock
# 126 "data/rival_scripts.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 127 "data/rival_scripts.pory"
	call Common_EventScript_PlayEmRivalBgm
# 128 "data/rival_scripts.pory"
	playse SE_PIN
# 129 "data/rival_scripts.pory"
	applymovement RIVAL_PETALBURG, Common_Movement_ExclamationMark
# 130 "data/rival_scripts.pory"
	waitmovement 0
# 131 "data/rival_scripts.pory"
	delay 60
# 132 "data/rival_scripts.pory"
	applymovement RIVAL_PETALBURG, Common_Movement_WalkRight2
# 133 "data/rival_scripts.pory"
	waitmovement 0
# 134 "data/rival_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 135 "data/rival_scripts.pory"
	switch VAR_TEMP_1
# 136 "data/rival_scripts.pory"
	case 16, Rival_Scene02_6
# 139 "data/rival_scripts.pory"
	case 17, Rival_Scene02_7
# 142 "data/rival_scripts.pory"
	case 19, Rival_Scene02_8
Rival_Scene02_4:
# 147 "data/rival_scripts.pory"
	applymovement RIVAL_PETALBURG, Common_Movement_WalkRight2
# 148 "data/rival_scripts.pory"
	waitmovement 0
# 149 "data/rival_scripts.pory"
	call GetRivalForNameBox
# 150 "data/rival_scripts.pory"
	call GetRivalMusic
# 151 "data/rival_scripts.pory"
	switch VAR_EMERALBODY_RIVAL
# 152 "data/rival_scripts.pory"
	case 1, Rival_Scene02_11
# 157 "data/rival_scripts.pory"
	case 2, Rival_Scene02_12
# 162 "data/rival_scripts.pory"
	case 3, Rival_Scene02_13
# 167 "data/rival_scripts.pory"
	case 4, Rival_Scene02_14
# 173 "data/rival_scripts.pory"
	msgbox Scene02_BaronText_PreBattle
# 174 "data/rival_scripts.pory"
	trainerbattle_no_intro TRAINER_BARON_1, Scene02_BaronText_BattleVictory
# 175 "data/rival_scripts.pory"
	call GetRivalForNameBox
# 176 "data/rival_scripts.pory"
	msgbox Scene02_BaronText_PostBattle
Rival_Scene02_9:
# 178 "data/rival_scripts.pory"
	closemessage
# 179 "data/rival_scripts.pory"
	setvar VAR_EMERALBODY_RIVAL_STATE, 2
# 180 "data/rival_scripts.pory"
	clearflag FLAG_TEMP_2
# 181 "data/rival_scripts.pory"
	fadedefaultbgm
# 182 "data/rival_scripts.pory"
	compare VAR_TEMP_1, 16
	goto_if_eq Rival_Scene02_17
Rival_Scene02_16:
# 186 "data/rival_scripts.pory"
	applymovement RIVAL_PETALBURG, Common_Movement_WalkLeft7
# 187 "data/rival_scripts.pory"
	waitmovement 0
# 188 "data/rival_scripts.pory"
	removeobject RIVAL_PETALBURG
	goto Rival_Scene02_1

Rival_Scene02_6:
# 137 "data/rival_scripts.pory"
	applymovement RIVAL_PETALBURG, Common_Movement_WalkUp2
# 138 "data/rival_scripts.pory"
	waitmovement 0
	goto Rival_Scene02_4

Rival_Scene02_7:
# 140 "data/rival_scripts.pory"
	applymovement RIVAL_PETALBURG, Common_Movement_WalkUp
# 141 "data/rival_scripts.pory"
	waitmovement 0
	goto Rival_Scene02_4

Rival_Scene02_8:
# 143 "data/rival_scripts.pory"
	applymovement RIVAL_PETALBURG, Common_Movement_WalkDown
# 144 "data/rival_scripts.pory"
	waitmovement 0
	goto Rival_Scene02_4

Rival_Scene02_11:
# 153 "data/rival_scripts.pory"
	msgbox Scene02_HarperText_PreBattle
# 154 "data/rival_scripts.pory"
	trainerbattle_no_intro TRAINER_HARPER_1, Scene02_HarperText_BattleVictory
# 155 "data/rival_scripts.pory"
	call GetRivalForNameBox
# 156 "data/rival_scripts.pory"
	msgbox Scene02_HarperText_PostBattle
	goto Rival_Scene02_9

Rival_Scene02_12:
# 158 "data/rival_scripts.pory"
	msgbox Scene02_JaksonText_PreBattle
# 159 "data/rival_scripts.pory"
	trainerbattle_no_intro TRAINER_JAKSON_1, Scene02_JaksonText_BattleVictory
# 160 "data/rival_scripts.pory"
	call GetRivalForNameBox
# 161 "data/rival_scripts.pory"
	msgbox Scene02_JaksonText_PostBattle
	goto Rival_Scene02_9

Rival_Scene02_13:
# 163 "data/rival_scripts.pory"
	msgbox Scene02_ReddText_PreBattle
# 164 "data/rival_scripts.pory"
	trainerbattle_no_intro TRAINER_REDD_1, Scene02_ReddText_BattleVictory
# 165 "data/rival_scripts.pory"
	call GetRivalForNameBox
# 166 "data/rival_scripts.pory"
	msgbox Scene02_ReddText_PostBattle
	goto Rival_Scene02_9

Rival_Scene02_14:
# 168 "data/rival_scripts.pory"
	msgbox Scene02_SakuraText_PreBattle
# 169 "data/rival_scripts.pory"
	trainerbattle_no_intro TRAINER_SAKURA_1, Scene02_SakuraText_BattleVictory
# 170 "data/rival_scripts.pory"
	call GetRivalForNameBox
# 171 "data/rival_scripts.pory"
	msgbox Scene02_SakuraText_PostBattle
	goto Rival_Scene02_9

Rival_Scene02_17:
# 183 "data/rival_scripts.pory"
	applymovement RIVAL_PETALBURG, Common_Movement_WalkDown
# 184 "data/rival_scripts.pory"
	waitmovement 0
	goto Rival_Scene02_16


Sakura_Town02::
# 197 "data/rival_scripts.pory"
	speakername CommonText_Sakura
# 198 "data/rival_scripts.pory"
	msgbox Town02_SakuraText, MSGBOX_NPC
	return


Harper_Town02::
# 202 "data/rival_scripts.pory"
	speakername CommonText_Harper
# 203 "data/rival_scripts.pory"
	msgbox Town02_HarperText, MSGBOX_NPC
	return


Redd_Town02::
# 207 "data/rival_scripts.pory"
	speakername CommonText_Redd
# 208 "data/rival_scripts.pory"
	msgbox Town02_ReddText, MSGBOX_NPC
	return


Baron_Town02::
# 212 "data/rival_scripts.pory"
	speakername CommonText_Baron
# 213 "data/rival_scripts.pory"
	msgbox Town02_BaronText, MSGBOX_NPC
	return


Jakson_Town02::
# 217 "data/rival_scripts.pory"
	speakername CommonText_Jakson
# 218 "data/rival_scripts.pory"
	msgbox Town02_JaksonText, MSGBOX_NPC
	return


Sakura_Town03::
# 224 "data/rival_scripts.pory"
	speakername CommonText_Sakura
# 225 "data/rival_scripts.pory"
	msgbox Town03_SakuraText, MSGBOX_NPC
	return


Harper_Town03::
# 229 "data/rival_scripts.pory"
	speakername CommonText_Harper
# 230 "data/rival_scripts.pory"
	msgbox Town03_HarperText, MSGBOX_NPC
	return


Redd_Town03::
# 234 "data/rival_scripts.pory"
	speakername CommonText_Redd
# 235 "data/rival_scripts.pory"
	msgbox Town03_ReddText, MSGBOX_NPC
	return


Jakson_Town03::
# 239 "data/rival_scripts.pory"
	speakername CommonText_Jakson
# 240 "data/rival_scripts.pory"
	msgbox Town03_JaksonText, MSGBOX_NPC
	return


Baron_Town03::
# 244 "data/rival_scripts.pory"
	lock
# 245 "data/rival_scripts.pory"
	speakername CommonText_Baron
# 246 "data/rival_scripts.pory"
	msgbox Town03_BaronText1
# 247 "data/rival_scripts.pory"
	faceplayer
# 248 "data/rival_scripts.pory"
	msgbox Town03_BaronText2
# 249 "data/rival_scripts.pory"
	release
	return


Rival_Scene03::
# 255 "data/rival_scripts.pory"
	delay 100
# 256 "data/rival_scripts.pory"
	call Common_EventScript_PlayEmRivalBgm
# 257 "data/rival_scripts.pory"
	addobject RIVAL_RUSTBORO
# 258 "data/rival_scripts.pory"
	setobjectxy RIVAL_RUSTBORO, 20, 15
# 259 "data/rival_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 260 "data/rival_scripts.pory"
	switch VAR_TEMP_1
# 261 "data/rival_scripts.pory"
	case 21, Rival_Scene03_3
# 265 "data/rival_scripts.pory"
	applymovement RIVAL_RUSTBORO, Common_Movement_WalkDown7
# 266 "data/rival_scripts.pory"
	waitmovement 0
Rival_Scene03_1:
# 268 "data/rival_scripts.pory"
	applymovement RIVAL_RUSTBORO, Common_Movement_WalkLeft2
# 269 "data/rival_scripts.pory"
	waitmovement 0
# 270 "data/rival_scripts.pory"
	call GetRivalForNameBox
# 271 "data/rival_scripts.pory"
	switch VAR_EMERALBODY_RIVAL
# 272 "data/rival_scripts.pory"
	case 1, Rival_Scene03_7
# 274 "data/rival_scripts.pory"
	case 2, Rival_Scene03_8
# 276 "data/rival_scripts.pory"
	case 3, Rival_Scene03_9
# 278 "data/rival_scripts.pory"
	case 4, Rival_Scene03_10
# 281 "data/rival_scripts.pory"
	msgbox Scene03_BaronText
Rival_Scene03_5:
# 283 "data/rival_scripts.pory"
	closemessage
# 284 "data/rival_scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 285 "data/rival_scripts.pory"
	setobjectxy LOCALID_PLAYER, 11, 19
# 286 "data/rival_scripts.pory"
	setvar VAR_0x8004, 11
# 287 "data/rival_scripts.pory"
	setvar VAR_0x8005, 19
# 288 "data/rival_scripts.pory"
	special TeleportCamera
# 289 "data/rival_scripts.pory"
	addobject REDD_RUSTBORO
# 290 "data/rival_scripts.pory"
	addobject SAKURA_RUSTBORO
# 291 "data/rival_scripts.pory"
	addobject BARON_RUSTBORO
# 292 "data/rival_scripts.pory"
	addobject HARPER_RUSTBORO
# 293 "data/rival_scripts.pory"
	addobject JAKSON_RUSTBORO
# 294 "data/rival_scripts.pory"
	applymovement SAKURA_RUSTBORO, Common_Movement_FaceDown
# 295 "data/rival_scripts.pory"
	applymovement REDD_RUSTBORO, Common_Movement_FaceRight
# 296 "data/rival_scripts.pory"
	applymovement HARPER_RUSTBORO, Common_Movement_FaceLeft
# 297 "data/rival_scripts.pory"
	applymovement JAKSON_RUSTBORO, Common_Movement_FaceUp
# 298 "data/rival_scripts.pory"
	setobjectxy REDD_RUSTBORO, 10, 18
# 299 "data/rival_scripts.pory"
	setobjectxy SAKURA_RUSTBORO, 11, 17
# 300 "data/rival_scripts.pory"
	setobjectxy BARON_RUSTBORO, 12, 17
# 301 "data/rival_scripts.pory"
	setobjectxy HARPER_RUSTBORO, 13, 18
# 302 "data/rival_scripts.pory"
	setobjectxy JAKSON_RUSTBORO, 12, 19
# 303 "data/rival_scripts.pory"
	setobjectxy RIVAL_RUSTBORO, 0, 6
# 304 "data/rival_scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 305 "data/rival_scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 306 "data/rival_scripts.pory"
	message Rival_Scene03_Text_0
# 307 "data/rival_scripts.pory"
	applymovement JAKSON_RUSTBORO, Common_Movement_WalkInPlaceLeft
# 308 "data/rival_scripts.pory"
	waitmovement 0
# 309 "data/rival_scripts.pory"
	delay 30
# 310 "data/rival_scripts.pory"
	applymovement JAKSON_RUSTBORO, Common_Movement_WalkInPlaceUp
# 311 "data/rival_scripts.pory"
	applymovement HARPER_RUSTBORO, Common_Movement_WalkInPlaceDown
# 312 "data/rival_scripts.pory"
	waitmovement 0
# 313 "data/rival_scripts.pory"
	delay 40
# 314 "data/rival_scripts.pory"
	applymovement BARON_RUSTBORO, Common_Movement_WalkInPlaceLeft
# 315 "data/rival_scripts.pory"
	applymovement SAKURA_RUSTBORO, Common_Movement_WalkInPlaceRight
# 316 "data/rival_scripts.pory"
	waitmovement 0
# 317 "data/rival_scripts.pory"
	delay 30
# 318 "data/rival_scripts.pory"
	applymovement REDD_RUSTBORO, Common_Movement_WalkInPlaceDown
# 319 "data/rival_scripts.pory"
	waitmovement 0
# 320 "data/rival_scripts.pory"
	delay 50
# 321 "data/rival_scripts.pory"
	closemessage
# 322 "data/rival_scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 323 "data/rival_scripts.pory"
	removeobject REDD_RUSTBORO
# 324 "data/rival_scripts.pory"
	removeobject SAKURA_RUSTBORO
# 325 "data/rival_scripts.pory"
	removeobject BARON_RUSTBORO
# 326 "data/rival_scripts.pory"
	removeobject HARPER_RUSTBORO
# 327 "data/rival_scripts.pory"
	removeobject JAKSON_RUSTBORO
# 328 "data/rival_scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 329 "data/rival_scripts.pory"
	fadedefaultbgm
# 330 "data/rival_scripts.pory"
	setflag FLAG_ENABLE_EMIB_RIVAL_MATCH_CALL
# 331 "data/rival_scripts.pory"
	release
	return

Rival_Scene03_3:
# 262 "data/rival_scripts.pory"
	applymovement RIVAL_RUSTBORO, Common_Movement_WalkDown6
# 263 "data/rival_scripts.pory"
	waitmovement 0
	goto Rival_Scene03_1

Rival_Scene03_7:
# 273 "data/rival_scripts.pory"
	msgbox Scene03_HarperText
	goto Rival_Scene03_5

Rival_Scene03_8:
# 275 "data/rival_scripts.pory"
	msgbox Scene03_JaksonText
	goto Rival_Scene03_5

Rival_Scene03_9:
# 277 "data/rival_scripts.pory"
	msgbox Scene03_ReddText
	goto Rival_Scene03_5

Rival_Scene03_10:
# 279 "data/rival_scripts.pory"
	msgbox Scene03_SakuraText
	goto Rival_Scene03_5


Sakura_Town04::
# 337 "data/rival_scripts.pory"
	speakername CommonText_Sakura
# 338 "data/rival_scripts.pory"
	msgbox Town04_SakuraText, MSGBOX_NPC
	return


Harper_Town04::
# 342 "data/rival_scripts.pory"
	speakername CommonText_Harper
# 343 "data/rival_scripts.pory"
	msgbox Town04_HarperText, MSGBOX_NPC
	return


Redd_Town04::
# 347 "data/rival_scripts.pory"
	speakername CommonText_Redd
# 348 "data/rival_scripts.pory"
	msgbox Town04_ReddText, MSGBOX_NPC
	return


Jakson_Town04::
# 352 "data/rival_scripts.pory"
	speakername CommonText_Jakson
# 353 "data/rival_scripts.pory"
	msgbox Town04_JaksonText, MSGBOX_NPC
	return


Baron_Town04::
# 357 "data/rival_scripts.pory"
	speakername CommonText_Baron
# 358 "data/rival_scripts.pory"
	msgbox Town04_BaronText, MSGBOX_NPC
	return


Sakura_Town05::
# 364 "data/rival_scripts.pory"
	speakername CommonText_Sakura
# 365 "data/rival_scripts.pory"
	msgbox Town05_SakuraText, MSGBOX_NPC
	return


Harper_Town05::
# 369 "data/rival_scripts.pory"
	speakername CommonText_Harper
# 370 "data/rival_scripts.pory"
	msgbox Town05_HarperText, MSGBOX_NPC
	return


Redd_Town05::
# 374 "data/rival_scripts.pory"
	speakername CommonText_Redd
# 375 "data/rival_scripts.pory"
	msgbox Town05_ReddText, MSGBOX_NPC
	return


Jakson_Town05::
# 379 "data/rival_scripts.pory"
	speakername CommonText_Jakson
# 380 "data/rival_scripts.pory"
	msgbox Town05_JaksonText, MSGBOX_NPC
	return


Baron_Town05::
# 384 "data/rival_scripts.pory"
	speakername CommonText_Baron
# 385 "data/rival_scripts.pory"
	msgbox Town05_BaronText, MSGBOX_NPC
	return


Sakura_Town06::
# 391 "data/rival_scripts.pory"
	speakername CommonText_Sakura
# 392 "data/rival_scripts.pory"
	msgbox Town06_SakuraText, MSGBOX_NPC
	return


Harper_Town06::
# 396 "data/rival_scripts.pory"
	speakername CommonText_Harper
# 397 "data/rival_scripts.pory"
	msgbox Town06_HarperText, MSGBOX_NPC
	return


Redd_Town06::
# 401 "data/rival_scripts.pory"
	speakername CommonText_Redd
# 402 "data/rival_scripts.pory"
	msgbox Town06_ReddText1, MSGBOX_NPC
# 403 "data/rival_scripts.pory"
	applymovement 5, Common_Movement_QuestionMark
# 404 "data/rival_scripts.pory"
	speakername CommonText_Redd
# 405 "data/rival_scripts.pory"
	msgbox Town06_ReddText2, MSGBOX_NPC
	return


Jakson_Town06::
# 409 "data/rival_scripts.pory"
	speakername CommonText_Jakson
# 410 "data/rival_scripts.pory"
	msgbox Town06_JaksonText, MSGBOX_NPC
	return


Baron_Town06::
# 414 "data/rival_scripts.pory"
	speakername CommonText_Baron
# 415 "data/rival_scripts.pory"
	msgbox Town06_BaronText, MSGBOX_NPC
	return


Sakura_Town07::
# 421 "data/rival_scripts.pory"
	speakername CommonText_Sakura
# 422 "data/rival_scripts.pory"
	msgbox Town07_SakuraText, MSGBOX_NPC
	return


Harper_Town07::
# 426 "data/rival_scripts.pory"
	speakername CommonText_Harper
# 427 "data/rival_scripts.pory"
	msgbox Town07_HarperText, MSGBOX_NPC
	return


Redd_Town07::
# 431 "data/rival_scripts.pory"
	speakername CommonText_Redd
# 432 "data/rival_scripts.pory"
	msgbox Town07_ReddText, MSGBOX_NPC
	return


Jakson_Town07::
# 436 "data/rival_scripts.pory"
	speakername CommonText_Jakson
# 437 "data/rival_scripts.pory"
	msgbox Town07_JaksonText, MSGBOX_NPC
	return


Baron_Town07::
# 441 "data/rival_scripts.pory"
	speakername CommonText_Baron
# 442 "data/rival_scripts.pory"
	msgbox Town07_BaronText, MSGBOX_NPC
	return


Sakura_Town08::
# 448 "data/rival_scripts.pory"
	speakername CommonText_Sakura
# 449 "data/rival_scripts.pory"
	msgbox Town08_SakuraText, MSGBOX_NPC
	return


Harper_Town08::
# 453 "data/rival_scripts.pory"
	speakername CommonText_Harper
# 454 "data/rival_scripts.pory"
	msgbox Town08_HarperText, MSGBOX_NPC
	return


Redd_Town08::
# 458 "data/rival_scripts.pory"
	speakername CommonText_Redd
# 459 "data/rival_scripts.pory"
	msgbox Town08_ReddText, MSGBOX_NPC
	return


Jakson_Town08::
# 463 "data/rival_scripts.pory"
	speakername CommonText_Jakson
# 464 "data/rival_scripts.pory"
	msgbox Town08_JaksonText, MSGBOX_NPC
	return


Baron_Town08::
# 468 "data/rival_scripts.pory"
	speakername CommonText_Baron
# 469 "data/rival_scripts.pory"
	msgbox Town08_BaronText, MSGBOX_NPC
	return


Sakura_Town09::
# 475 "data/rival_scripts.pory"
	speakername CommonText_Sakura
# 476 "data/rival_scripts.pory"
	msgbox Town09_SakuraText, MSGBOX_NPC
	return


Harper_Town09::
# 480 "data/rival_scripts.pory"
	speakername CommonText_Harper
# 481 "data/rival_scripts.pory"
	msgbox Town09_HarperText, MSGBOX_NPC
	return


Redd_Town09::
# 485 "data/rival_scripts.pory"
	speakername CommonText_Redd
# 486 "data/rival_scripts.pory"
	msgbox Town09_ReddText, MSGBOX_NPC
	return


Jakson_Town09::
# 490 "data/rival_scripts.pory"
	speakername CommonText_Jakson
# 491 "data/rival_scripts.pory"
	msgbox Town09_JaksonText, MSGBOX_NPC
	return


Baron_Town09::
# 495 "data/rival_scripts.pory"
	speakername CommonText_Baron
# 496 "data/rival_scripts.pory"
	msgbox Town09_BaronText, MSGBOX_NPC
	return


Sakura_Town10::
# 502 "data/rival_scripts.pory"
	speakername CommonText_Sakura
# 503 "data/rival_scripts.pory"
	msgbox Town10_SakuraText, MSGBOX_NPC
	return


Harper_Town10::
# 507 "data/rival_scripts.pory"
	speakername CommonText_Harper
# 508 "data/rival_scripts.pory"
	msgbox Town10_HarperText, MSGBOX_NPC
	return


Redd_Town10::
# 512 "data/rival_scripts.pory"
	speakername CommonText_Redd
# 513 "data/rival_scripts.pory"
	msgbox Town10_ReddText, MSGBOX_NPC
	return


Jakson_Town10::
# 517 "data/rival_scripts.pory"
	speakername CommonText_Jakson
# 518 "data/rival_scripts.pory"
	msgbox Town10_JaksonText, MSGBOX_NPC
	return


Baron_Town10::
# 522 "data/rival_scripts.pory"
	speakername CommonText_Baron
# 523 "data/rival_scripts.pory"
	msgbox Town10_BaronText, MSGBOX_NPC
	return


Sakura_Town11::
# 529 "data/rival_scripts.pory"
	speakername CommonText_Sakura
# 530 "data/rival_scripts.pory"
	msgbox Town11_SakuraText, MSGBOX_NPC
	return


Harper_Town11::
# 534 "data/rival_scripts.pory"
	speakername CommonText_Harper
# 535 "data/rival_scripts.pory"
	msgbox Town11_HarperText, MSGBOX_NPC
	return


Redd_Town11::
# 539 "data/rival_scripts.pory"
	speakername CommonText_Redd
# 540 "data/rival_scripts.pory"
	msgbox Town11_ReddText, MSGBOX_NPC
	return


Jakson_Town11::
# 544 "data/rival_scripts.pory"
	speakername CommonText_Jakson
# 545 "data/rival_scripts.pory"
	msgbox Town11_JaksonText, MSGBOX_NPC
	return


Baron_Town11::
# 549 "data/rival_scripts.pory"
	speakername CommonText_Baron
# 550 "data/rival_scripts.pory"
	msgbox Town11_BaronText, MSGBOX_NPC
	return


Sakura_Town12::
# 556 "data/rival_scripts.pory"
	speakername CommonText_Sakura
# 557 "data/rival_scripts.pory"
	msgbox Town12_SakuraText, MSGBOX_NPC
	return


Harper_Town12::
# 561 "data/rival_scripts.pory"
	lock
# 562 "data/rival_scripts.pory"
	faceplayer
# 563 "data/rival_scripts.pory"
	speakername CommonText_Harper
# 564 "data/rival_scripts.pory"
	msgbox Town12_HarperTextQ, MSGBOX_YESNO
# 565 "data/rival_scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Harper_Town12_2
# 569 "data/rival_scripts.pory"
	msgbox Town12_HarperTextNo, MSGBOX_NPC
Harper_Town12_1:
# 571 "data/rival_scripts.pory"
	release
	return

Harper_Town12_2:
# 566 "data/rival_scripts.pory"
	msgbox Town12_HarperTextYes, MSGBOX_NPC
	goto Harper_Town12_1


Redd_Town12::
# 575 "data/rival_scripts.pory"
	speakername CommonText_Redd
# 576 "data/rival_scripts.pory"
	msgbox Town12_ReddText, MSGBOX_NPC
	return


Jakson_Town12::
# 580 "data/rival_scripts.pory"
	speakername CommonText_Jakson
# 581 "data/rival_scripts.pory"
	msgbox Town12_JaksonText, MSGBOX_NPC
	return


Baron_Town12::
# 585 "data/rival_scripts.pory"
	speakername CommonText_Baron
# 586 "data/rival_scripts.pory"
	msgbox Town12_BaronText, MSGBOX_NPC
	return


Baron_Town01_Text_0:
# 102 "data/rival_scripts.pory"
	.string "Left foot… Right foot…\nLeft foot… Right foot…$"

Rival_Scene03_Text_0:
# 306 "data/rival_scripts.pory"
	.string "You exchanged PokéNav info with your\n"
	.string "friends.$"
