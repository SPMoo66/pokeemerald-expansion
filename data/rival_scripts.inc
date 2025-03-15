Rival_Scene01::
# 14 "data/rival_scripts.pory"
	compare VAR_BIRCH_LAB_STATE, 3
	goto_if_eq Rival_Scene01_2
Rival_Scene01_1:
# 51 "data/rival_scripts.pory"
	release
	return

Rival_Scene01_2:
# 15 "data/rival_scripts.pory"
	lock
# 16 "data/rival_scripts.pory"
	call Common_EventScript_PlayEmRivalBgm
# 17 "data/rival_scripts.pory"
	playse SE_PIN
# 18 "data/rival_scripts.pory"
	applymovement RIVAL_LITTLEROOT, Rival_Scene01_Move1
# 19 "data/rival_scripts.pory"
	waitmovement 0
# 20 "data/rival_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 21 "data/rival_scripts.pory"
	switch VAR_TEMP_1
# 22 "data/rival_scripts.pory"
	case 17, Rival_Scene01_6
Rival_Scene01_4:
# 27 "data/rival_scripts.pory"
	call GetRivalForNameBox
# 28 "data/rival_scripts.pory"
	switch VAR_EMERALBODY_RIVAL
# 29 "data/rival_scripts.pory"
	case 1, Rival_Scene01_9
# 31 "data/rival_scripts.pory"
	case 2, Rival_Scene01_10
# 33 "data/rival_scripts.pory"
	case 3, Rival_Scene01_11
# 35 "data/rival_scripts.pory"
	case 4, Rival_Scene01_12
# 38 "data/rival_scripts.pory"
	msgbox Scene01_BaronText
Rival_Scene01_7:
# 40 "data/rival_scripts.pory"
	closemessage
# 41 "data/rival_scripts.pory"
	setvar VAR_EMERALBODY_RIVAL_STATE, 1
# 42 "data/rival_scripts.pory"
	fadescreen FADE_TO_BLACK
# 43 "data/rival_scripts.pory"
	fadedefaultbgm
# 44 "data/rival_scripts.pory"
	applymovement RIVAL_LITTLEROOT, Rival_Scene01_Move2
# 45 "data/rival_scripts.pory"
	waitmovement 0
# 46 "data/rival_scripts.pory"
	removeobject RIVAL_LITTLEROOT
# 47 "data/rival_scripts.pory"
	clearflag FLAG_TEMP_1
# 48 "data/rival_scripts.pory"
	addobject BARON_LITTLEROOT
# 49 "data/rival_scripts.pory"
	fadescreen FADE_FROM_BLACK
	goto Rival_Scene01_1

Rival_Scene01_6:
# 23 "data/rival_scripts.pory"
	applymovement RIVAL_LITTLEROOT, Common_Movement_FaceUp
# 24 "data/rival_scripts.pory"
	waitmovement 0
	goto Rival_Scene01_4

Rival_Scene01_9:
# 30 "data/rival_scripts.pory"
	msgbox Scene01_HarperText
	goto Rival_Scene01_7

Rival_Scene01_10:
# 32 "data/rival_scripts.pory"
	msgbox Scene01_JaksonText
	goto Rival_Scene01_7

Rival_Scene01_11:
# 34 "data/rival_scripts.pory"
	msgbox Scene01_ReddText
	goto Rival_Scene01_7

Rival_Scene01_12:
# 36 "data/rival_scripts.pory"
	msgbox Scene01_SakuraText
	goto Rival_Scene01_7


# 54 "data/rival_scripts.pory"
Rival_Scene01_Move1:
# 55 "data/rival_scripts.pory"
	emote_exclamation_mark
# 56 "data/rival_scripts.pory"
	delay_16
# 56 "data/rival_scripts.pory"
	delay_16
# 56 "data/rival_scripts.pory"
	delay_16
# 56 "data/rival_scripts.pory"
	delay_16
# 57 "data/rival_scripts.pory"
	walk_left
# 57 "data/rival_scripts.pory"
	walk_left
	step_end

# 60 "data/rival_scripts.pory"
Rival_Scene01_Move2:
# 61 "data/rival_scripts.pory"
	walk_fast_down
# 61 "data/rival_scripts.pory"
	walk_fast_down
# 61 "data/rival_scripts.pory"
	walk_fast_down
# 61 "data/rival_scripts.pory"
	walk_fast_down
# 61 "data/rival_scripts.pory"
	walk_fast_down
# 61 "data/rival_scripts.pory"
	walk_fast_down
# 61 "data/rival_scripts.pory"
	walk_fast_down
	step_end

Sakura_Town01::
# 67 "data/rival_scripts.pory"
	speakername CommonText_Sakura
# 68 "data/rival_scripts.pory"
	msgbox Town01_SakuraText, MSGBOX_NPC
	return


Jakson_Town01::
# 72 "data/rival_scripts.pory"
	speakername CommonText_Jakson
# 73 "data/rival_scripts.pory"
	msgbox Town01_JaksonText, MSGBOX_NPC
	return


Redd_Town01::
# 77 "data/rival_scripts.pory"
	lock
# 78 "data/rival_scripts.pory"
	speakername CommonText_Redd
# 79 "data/rival_scripts.pory"
	msgbox Town01_ReddText
# 80 "data/rival_scripts.pory"
	release
	return


Harper_Town01::
# 84 "data/rival_scripts.pory"
	speakername CommonText_Harper
# 85 "data/rival_scripts.pory"
	msgbox Town01_HarperText, MSGBOX_NPC
	return


Baron_Town01::
# 89 "data/rival_scripts.pory"
	lock
# 90 "data/rival_scripts.pory"
	applymovement BARON_LITTLEROOT, Baron_Town01_Move
# 91 "data/rival_scripts.pory"
	waitmovement 0
# 92 "data/rival_scripts.pory"
	applymovement BARON_LITTLEROOT, Baron_Town01_Move
# 93 "data/rival_scripts.pory"
	waitmovement 0
# 94 "data/rival_scripts.pory"
	speakername CommonText_Baron
# 95 "data/rival_scripts.pory"
	msgbox Baron_Town01_Text_0
# 96 "data/rival_scripts.pory"
	closemessage
# 97 "data/rival_scripts.pory"
	faceplayer
# 98 "data/rival_scripts.pory"
	playse SE_PIN
# 99 "data/rival_scripts.pory"
	applymovement BARON_LITTLEROOT, Common_Movement_ExclamationMark
# 100 "data/rival_scripts.pory"
	waitmovement 0
# 101 "data/rival_scripts.pory"
	delay 60
# 102 "data/rival_scripts.pory"
	speakername CommonText_Baron
# 103 "data/rival_scripts.pory"
	msgbox Town01_BaronText
# 104 "data/rival_scripts.pory"
	applymovement BARON_LITTLEROOT, Common_Movement_FaceLeft
# 105 "data/rival_scripts.pory"
	waitmovement 0
# 106 "data/rival_scripts.pory"
	release
	return


# 109 "data/rival_scripts.pory"
Baron_Town01_Move:
# 110 "data/rival_scripts.pory"
	walk_in_place_left
# 111 "data/rival_scripts.pory"
	delay_16
	step_end

Rival_Scene02::
# 117 "data/rival_scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 1
	goto_if_eq Rival_Scene02_2
Rival_Scene02_1:
# 182 "data/rival_scripts.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 183 "data/rival_scripts.pory"
	release
	return

Rival_Scene02_2:
# 118 "data/rival_scripts.pory"
	lock
# 119 "data/rival_scripts.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 120 "data/rival_scripts.pory"
	call Common_EventScript_PlayEmRivalBgm
# 121 "data/rival_scripts.pory"
	playse SE_PIN
# 122 "data/rival_scripts.pory"
	applymovement RIVAL_PETALBURG, Common_Movement_ExclamationMark
# 123 "data/rival_scripts.pory"
	waitmovement 0
# 124 "data/rival_scripts.pory"
	delay 60
# 125 "data/rival_scripts.pory"
	applymovement RIVAL_PETALBURG, Common_Movement_WalkRight2
# 126 "data/rival_scripts.pory"
	waitmovement 0
# 127 "data/rival_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 128 "data/rival_scripts.pory"
	switch VAR_TEMP_1
# 129 "data/rival_scripts.pory"
	case 16, Rival_Scene02_6
# 132 "data/rival_scripts.pory"
	case 17, Rival_Scene02_7
# 135 "data/rival_scripts.pory"
	case 19, Rival_Scene02_8
Rival_Scene02_4:
# 140 "data/rival_scripts.pory"
	applymovement RIVAL_PETALBURG, Common_Movement_WalkRight2
# 141 "data/rival_scripts.pory"
	waitmovement 0
# 142 "data/rival_scripts.pory"
	call GetRivalForNameBox
# 143 "data/rival_scripts.pory"
	switch VAR_EMERALBODY_RIVAL
# 144 "data/rival_scripts.pory"
	case 1, Rival_Scene02_11
# 149 "data/rival_scripts.pory"
	case 2, Rival_Scene02_12
# 154 "data/rival_scripts.pory"
	case 3, Rival_Scene02_13
# 159 "data/rival_scripts.pory"
	case 4, Rival_Scene02_14
# 165 "data/rival_scripts.pory"
	msgbox Scene02_BaronText_PreBattle
# 166 "data/rival_scripts.pory"
	trainerbattle_no_intro TRAINER_BARON_1, Scene02_BaronText_BattleVictory
# 167 "data/rival_scripts.pory"
	call GetRivalForNameBox
# 168 "data/rival_scripts.pory"
	msgbox Scene02_BaronText_PostBattle
Rival_Scene02_9:
# 170 "data/rival_scripts.pory"
	closemessage
# 171 "data/rival_scripts.pory"
	setvar VAR_EMERALBODY_RIVAL_STATE, 2
# 172 "data/rival_scripts.pory"
	clearflag FLAG_TEMP_2
# 173 "data/rival_scripts.pory"
	fadedefaultbgm
# 174 "data/rival_scripts.pory"
	compare VAR_TEMP_1, 16
	goto_if_eq Rival_Scene02_17
Rival_Scene02_16:
# 178 "data/rival_scripts.pory"
	applymovement RIVAL_PETALBURG, Common_Movement_WalkLeft7
# 179 "data/rival_scripts.pory"
	waitmovement 0
# 180 "data/rival_scripts.pory"
	removeobject RIVAL_PETALBURG
	goto Rival_Scene02_1

Rival_Scene02_6:
# 130 "data/rival_scripts.pory"
	applymovement RIVAL_PETALBURG, Common_Movement_WalkUp2
# 131 "data/rival_scripts.pory"
	waitmovement 0
	goto Rival_Scene02_4

Rival_Scene02_7:
# 133 "data/rival_scripts.pory"
	applymovement RIVAL_PETALBURG, Common_Movement_WalkUp
# 134 "data/rival_scripts.pory"
	waitmovement 0
	goto Rival_Scene02_4

Rival_Scene02_8:
# 136 "data/rival_scripts.pory"
	applymovement RIVAL_PETALBURG, Common_Movement_WalkDown
# 137 "data/rival_scripts.pory"
	waitmovement 0
	goto Rival_Scene02_4

Rival_Scene02_11:
# 145 "data/rival_scripts.pory"
	msgbox Scene02_HarperText_PreBattle
# 146 "data/rival_scripts.pory"
	trainerbattle_no_intro TRAINER_HARPER_1, Scene02_HarperText_BattleVictory
# 147 "data/rival_scripts.pory"
	call GetRivalForNameBox
# 148 "data/rival_scripts.pory"
	msgbox Scene02_HarperText_PostBattle
	goto Rival_Scene02_9

Rival_Scene02_12:
# 150 "data/rival_scripts.pory"
	msgbox Scene02_JaksonText_PreBattle
# 151 "data/rival_scripts.pory"
	trainerbattle_no_intro TRAINER_JAKSON_1, Scene02_JaksonText_BattleVictory
# 152 "data/rival_scripts.pory"
	call GetRivalForNameBox
# 153 "data/rival_scripts.pory"
	msgbox Scene02_JaksonText_PostBattle
	goto Rival_Scene02_9

Rival_Scene02_13:
# 155 "data/rival_scripts.pory"
	msgbox Scene02_ReddText_PreBattle
# 156 "data/rival_scripts.pory"
	trainerbattle_no_intro TRAINER_REDD_1, Scene02_ReddText_BattleVictory
# 157 "data/rival_scripts.pory"
	call GetRivalForNameBox
# 158 "data/rival_scripts.pory"
	msgbox Scene02_ReddText_PostBattle
	goto Rival_Scene02_9

Rival_Scene02_14:
# 160 "data/rival_scripts.pory"
	msgbox Scene02_SakuraText_PreBattle
# 161 "data/rival_scripts.pory"
	trainerbattle_no_intro TRAINER_SAKURA_1, Scene02_SakuraText_BattleVictory
# 162 "data/rival_scripts.pory"
	call GetRivalForNameBox
# 163 "data/rival_scripts.pory"
	msgbox Scene02_SakuraText_PostBattle
	goto Rival_Scene02_9

Rival_Scene02_17:
# 175 "data/rival_scripts.pory"
	applymovement RIVAL_PETALBURG, Common_Movement_WalkDown
# 176 "data/rival_scripts.pory"
	waitmovement 0
	goto Rival_Scene02_16


Sakura_Town02::
# 189 "data/rival_scripts.pory"
	speakername CommonText_Sakura
# 190 "data/rival_scripts.pory"
	msgbox Town02_SakuraText, MSGBOX_NPC
	return


Harper_Town02::
# 194 "data/rival_scripts.pory"
	speakername CommonText_Harper
# 195 "data/rival_scripts.pory"
	msgbox Town02_HarperText, MSGBOX_NPC
	return


Redd_Town02::
# 199 "data/rival_scripts.pory"
	speakername CommonText_Redd
# 200 "data/rival_scripts.pory"
	msgbox Town02_ReddText, MSGBOX_NPC
	return


Baron_Town02::
# 204 "data/rival_scripts.pory"
	speakername CommonText_Baron
# 205 "data/rival_scripts.pory"
	msgbox Town02_BaronText, MSGBOX_NPC
	return


Jakson_Town02::
# 209 "data/rival_scripts.pory"
	speakername CommonText_Jakson
# 210 "data/rival_scripts.pory"
	msgbox Town02_JaksonText, MSGBOX_NPC
	return


Sakura_Town03::
# 216 "data/rival_scripts.pory"
	speakername CommonText_Sakura
# 217 "data/rival_scripts.pory"
	msgbox Town03_SakuraText, MSGBOX_NPC
	return


Harper_Town03::
# 221 "data/rival_scripts.pory"
	speakername CommonText_Harper
# 222 "data/rival_scripts.pory"
	msgbox Town03_HarperText, MSGBOX_NPC
	return


Redd_Town03::
# 226 "data/rival_scripts.pory"
	speakername CommonText_Redd
# 227 "data/rival_scripts.pory"
	msgbox Town03_ReddText, MSGBOX_NPC
	return


Jakson_Town03::
# 231 "data/rival_scripts.pory"
	speakername CommonText_Jakson
# 232 "data/rival_scripts.pory"
	msgbox Town03_JaksonText, MSGBOX_NPC
	return


Baron_Town03::
# 236 "data/rival_scripts.pory"
	lock
# 237 "data/rival_scripts.pory"
	speakername CommonText_Baron
# 238 "data/rival_scripts.pory"
	msgbox Town03_BaronText1
# 239 "data/rival_scripts.pory"
	faceplayer
# 240 "data/rival_scripts.pory"
	msgbox Town03_BaronText2
# 241 "data/rival_scripts.pory"
	release
	return


Rival_Scene03::
# 247 "data/rival_scripts.pory"
	delay 100
# 248 "data/rival_scripts.pory"
	call Common_EventScript_PlayEmRivalBgm
# 249 "data/rival_scripts.pory"
	addobject RIVAL_RUSTBORO
# 250 "data/rival_scripts.pory"
	setobjectxy RIVAL_RUSTBORO, 20, 15
# 251 "data/rival_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 252 "data/rival_scripts.pory"
	switch VAR_TEMP_1
# 253 "data/rival_scripts.pory"
	case 21, Rival_Scene03_3
# 257 "data/rival_scripts.pory"
	applymovement RIVAL_RUSTBORO, Common_Movement_WalkDown7
# 258 "data/rival_scripts.pory"
	waitmovement 0
Rival_Scene03_1:
# 260 "data/rival_scripts.pory"
	applymovement RIVAL_RUSTBORO, Common_Movement_WalkLeft2
# 261 "data/rival_scripts.pory"
	waitmovement 0
# 262 "data/rival_scripts.pory"
	call GetRivalForNameBox
# 263 "data/rival_scripts.pory"
	switch VAR_EMERALBODY_RIVAL
# 264 "data/rival_scripts.pory"
	case 1, Rival_Scene03_7
# 266 "data/rival_scripts.pory"
	case 2, Rival_Scene03_8
# 268 "data/rival_scripts.pory"
	case 3, Rival_Scene03_9
# 270 "data/rival_scripts.pory"
	case 4, Rival_Scene03_10
# 273 "data/rival_scripts.pory"
	msgbox Scene03_BaronText
Rival_Scene03_5:
# 275 "data/rival_scripts.pory"
	closemessage
# 276 "data/rival_scripts.pory"
	fadescreen FADE_TO_BLACK
# 277 "data/rival_scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 11, 19
# 278 "data/rival_scripts.pory"
	setvar VAR_0x8004, 11
# 279 "data/rival_scripts.pory"
	setvar VAR_0x8005, 19
# 280 "data/rival_scripts.pory"
	special TeleportCamera
# 281 "data/rival_scripts.pory"
	addobject REDD_RUSTBORO
# 282 "data/rival_scripts.pory"
	addobject SAKURA_RUSTBORO
# 283 "data/rival_scripts.pory"
	addobject BARON_RUSTBORO
# 284 "data/rival_scripts.pory"
	addobject HARPER_RUSTBORO
# 285 "data/rival_scripts.pory"
	addobject JAKSON_RUSTBORO
# 286 "data/rival_scripts.pory"
	applymovement SAKURA_RUSTBORO, Common_Movement_FaceDown
# 287 "data/rival_scripts.pory"
	applymovement REDD_RUSTBORO, Common_Movement_FaceRight
# 288 "data/rival_scripts.pory"
	applymovement HARPER_RUSTBORO, Common_Movement_FaceLeft
# 289 "data/rival_scripts.pory"
	applymovement JAKSON_RUSTBORO, Common_Movement_FaceUp
# 290 "data/rival_scripts.pory"
	setobjectxy REDD_RUSTBORO, 10, 18
# 291 "data/rival_scripts.pory"
	setobjectxy SAKURA_RUSTBORO, 11, 17
# 292 "data/rival_scripts.pory"
	setobjectxy BARON_RUSTBORO, 12, 17
# 293 "data/rival_scripts.pory"
	setobjectxy HARPER_RUSTBORO, 13, 18
# 294 "data/rival_scripts.pory"
	setobjectxy JAKSON_RUSTBORO, 12, 19
# 295 "data/rival_scripts.pory"
	setobjectxy RIVAL_RUSTBORO, 0, 6
# 296 "data/rival_scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 297 "data/rival_scripts.pory"
	fadescreen FADE_FROM_BLACK
# 298 "data/rival_scripts.pory"
	message Rival_Scene03_Text_0
# 299 "data/rival_scripts.pory"
	applymovement JAKSON_RUSTBORO, Common_Movement_WalkInPlaceLeft
# 300 "data/rival_scripts.pory"
	waitmovement 0
# 301 "data/rival_scripts.pory"
	delay 30
# 302 "data/rival_scripts.pory"
	applymovement JAKSON_RUSTBORO, Common_Movement_WalkInPlaceUp
# 303 "data/rival_scripts.pory"
	applymovement HARPER_RUSTBORO, Common_Movement_WalkInPlaceDown
# 304 "data/rival_scripts.pory"
	waitmovement 0
# 305 "data/rival_scripts.pory"
	delay 40
# 306 "data/rival_scripts.pory"
	applymovement BARON_RUSTBORO, Common_Movement_WalkInPlaceLeft
# 307 "data/rival_scripts.pory"
	applymovement SAKURA_RUSTBORO, Common_Movement_WalkInPlaceRight
# 308 "data/rival_scripts.pory"
	waitmovement 0
# 309 "data/rival_scripts.pory"
	delay 30
# 310 "data/rival_scripts.pory"
	applymovement REDD_RUSTBORO, Common_Movement_WalkInPlaceDown
# 311 "data/rival_scripts.pory"
	waitmovement 0
# 312 "data/rival_scripts.pory"
	delay 50
# 313 "data/rival_scripts.pory"
	closemessage
# 314 "data/rival_scripts.pory"
	fadescreen FADE_TO_BLACK
# 315 "data/rival_scripts.pory"
	removeobject REDD_RUSTBORO
# 316 "data/rival_scripts.pory"
	removeobject SAKURA_RUSTBORO
# 317 "data/rival_scripts.pory"
	removeobject BARON_RUSTBORO
# 318 "data/rival_scripts.pory"
	removeobject HARPER_RUSTBORO
# 319 "data/rival_scripts.pory"
	removeobject JAKSON_RUSTBORO
# 320 "data/rival_scripts.pory"
	fadescreen FADE_FROM_BLACK
# 321 "data/rival_scripts.pory"
	fadedefaultbgm
# 322 "data/rival_scripts.pory"
	setflag FLAG_ENABLE_EMIB_RIVAL_MATCH_CALL
# 323 "data/rival_scripts.pory"
	release
	return

Rival_Scene03_3:
# 254 "data/rival_scripts.pory"
	applymovement RIVAL_RUSTBORO, Common_Movement_WalkDown6
# 255 "data/rival_scripts.pory"
	waitmovement 0
	goto Rival_Scene03_1

Rival_Scene03_7:
# 265 "data/rival_scripts.pory"
	msgbox Scene03_HarperText
	goto Rival_Scene03_5

Rival_Scene03_8:
# 267 "data/rival_scripts.pory"
	msgbox Scene03_JaksonText
	goto Rival_Scene03_5

Rival_Scene03_9:
# 269 "data/rival_scripts.pory"
	msgbox Scene03_ReddText
	goto Rival_Scene03_5

Rival_Scene03_10:
# 271 "data/rival_scripts.pory"
	msgbox Scene03_SakuraText
	goto Rival_Scene03_5


Baron_Town01_Text_0:
# 95 "data/rival_scripts.pory"
	.string "Left foot… Right foot…\nLeft foot… Right foot…$"

Rival_Scene03_Text_0:
# 298 "data/rival_scripts.pory"
	.string "You exchanged PokéNav info with your\n"
	.string "friends.$"
