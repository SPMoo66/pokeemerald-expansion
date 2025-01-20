Rival_Scene01::
# 12 "data/rival_scripts.pory"
	compare VAR_BIRCH_LAB_STATE, 3
	goto_if_eq Rival_Scene01_2
Rival_Scene01_1:
# 49 "data/rival_scripts.pory"
	release
	return

Rival_Scene01_2:
# 13 "data/rival_scripts.pory"
	lock
# 14 "data/rival_scripts.pory"
	call Common_EventScript_PlayEmRivalBgm
# 15 "data/rival_scripts.pory"
	playse SE_PIN
# 16 "data/rival_scripts.pory"
	applymovement RIVAL_LITTLEROOT, Rival_Scene01_Move1
# 17 "data/rival_scripts.pory"
	waitmovement 0
# 18 "data/rival_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 19 "data/rival_scripts.pory"
	switch VAR_TEMP_1
# 20 "data/rival_scripts.pory"
	case 17, Rival_Scene01_6
Rival_Scene01_4:
# 25 "data/rival_scripts.pory"
	call GetRivalForNameBox
# 26 "data/rival_scripts.pory"
	switch VAR_EMERALBODY_RIVAL
# 27 "data/rival_scripts.pory"
	case 1, Rival_Scene01_9
# 29 "data/rival_scripts.pory"
	case 2, Rival_Scene01_10
# 31 "data/rival_scripts.pory"
	case 3, Rival_Scene01_11
# 33 "data/rival_scripts.pory"
	case 4, Rival_Scene01_12
# 36 "data/rival_scripts.pory"
	msgbox Scene01_BaronText
Rival_Scene01_7:
# 38 "data/rival_scripts.pory"
	closemessage
# 39 "data/rival_scripts.pory"
	setvar VAR_EMERALBODY_RIVAL_STATE, 1
# 40 "data/rival_scripts.pory"
	fadescreen FADE_TO_BLACK
# 41 "data/rival_scripts.pory"
	fadedefaultbgm
# 42 "data/rival_scripts.pory"
	applymovement RIVAL_LITTLEROOT, Rival_Scene01_Move2
# 43 "data/rival_scripts.pory"
	waitmovement 0
# 44 "data/rival_scripts.pory"
	removeobject RIVAL_LITTLEROOT
# 45 "data/rival_scripts.pory"
	clearflag FLAG_TEMP_1
# 46 "data/rival_scripts.pory"
	addobject BARON_LITTLEROOT
# 47 "data/rival_scripts.pory"
	fadescreen FADE_FROM_BLACK
	goto Rival_Scene01_1

Rival_Scene01_6:
# 21 "data/rival_scripts.pory"
	applymovement RIVAL_LITTLEROOT, Common_Movement_FaceUp
# 22 "data/rival_scripts.pory"
	waitmovement 0
	goto Rival_Scene01_4

Rival_Scene01_9:
# 28 "data/rival_scripts.pory"
	msgbox Scene01_HarperText
	goto Rival_Scene01_7

Rival_Scene01_10:
# 30 "data/rival_scripts.pory"
	msgbox Scene01_JaksonText
	goto Rival_Scene01_7

Rival_Scene01_11:
# 32 "data/rival_scripts.pory"
	msgbox Scene01_ReddText
	goto Rival_Scene01_7

Rival_Scene01_12:
# 34 "data/rival_scripts.pory"
	msgbox Scene01_SakuraText
	goto Rival_Scene01_7


# 52 "data/rival_scripts.pory"
Rival_Scene01_Move1:
# 53 "data/rival_scripts.pory"
	emote_exclamation_mark
# 54 "data/rival_scripts.pory"
	delay_16
# 54 "data/rival_scripts.pory"
	delay_16
# 54 "data/rival_scripts.pory"
	delay_16
# 54 "data/rival_scripts.pory"
	delay_16
# 55 "data/rival_scripts.pory"
	walk_left
# 55 "data/rival_scripts.pory"
	walk_left
	step_end

# 58 "data/rival_scripts.pory"
Rival_Scene01_Move2:
# 59 "data/rival_scripts.pory"
	walk_fast_down
# 59 "data/rival_scripts.pory"
	walk_fast_down
# 59 "data/rival_scripts.pory"
	walk_fast_down
# 59 "data/rival_scripts.pory"
	walk_fast_down
# 59 "data/rival_scripts.pory"
	walk_fast_down
# 59 "data/rival_scripts.pory"
	walk_fast_down
# 59 "data/rival_scripts.pory"
	walk_fast_down
	step_end

Sakura_Town01::
# 65 "data/rival_scripts.pory"
	speakername CommonText_Sakura
# 66 "data/rival_scripts.pory"
	msgbox Town01_SakuraText, MSGBOX_NPC
	return


Jakson_Town01::
# 70 "data/rival_scripts.pory"
	speakername CommonText_Jakson
# 71 "data/rival_scripts.pory"
	msgbox Town01_JaksonText, MSGBOX_NPC
	return


Redd_Town01::
# 75 "data/rival_scripts.pory"
	lock
# 76 "data/rival_scripts.pory"
	speakername CommonText_Redd
# 77 "data/rival_scripts.pory"
	msgbox Town01_ReddText
# 78 "data/rival_scripts.pory"
	release
	return


Harper_Town01::
# 82 "data/rival_scripts.pory"
	speakername CommonText_Harper
# 83 "data/rival_scripts.pory"
	msgbox Town01_HarperText, MSGBOX_NPC
	return


Baron_Town01::
# 87 "data/rival_scripts.pory"
	lock
# 88 "data/rival_scripts.pory"
	applymovement BARON_LITTLEROOT, Baron_Town01_Move
# 89 "data/rival_scripts.pory"
	waitmovement 0
# 90 "data/rival_scripts.pory"
	applymovement BARON_LITTLEROOT, Baron_Town01_Move
# 91 "data/rival_scripts.pory"
	waitmovement 0
# 92 "data/rival_scripts.pory"
	speakername CommonText_Baron
# 93 "data/rival_scripts.pory"
	msgbox Baron_Town01_Text_0
# 94 "data/rival_scripts.pory"
	closemessage
# 95 "data/rival_scripts.pory"
	faceplayer
# 96 "data/rival_scripts.pory"
	playse SE_PIN
# 97 "data/rival_scripts.pory"
	applymovement BARON_LITTLEROOT, Common_Movement_ExclamationMark
# 98 "data/rival_scripts.pory"
	waitmovement 0
# 99 "data/rival_scripts.pory"
	delay 60
# 100 "data/rival_scripts.pory"
	speakername CommonText_Baron
# 101 "data/rival_scripts.pory"
	msgbox Town01_BaronText
# 102 "data/rival_scripts.pory"
	applymovement BARON_LITTLEROOT, Common_Movement_FaceLeft
# 103 "data/rival_scripts.pory"
	waitmovement 0
# 104 "data/rival_scripts.pory"
	release
	return


# 107 "data/rival_scripts.pory"
Baron_Town01_Move:
# 108 "data/rival_scripts.pory"
	walk_in_place_left
# 109 "data/rival_scripts.pory"
	delay_16
	step_end

Rival_Scene02::
# 115 "data/rival_scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 1
	goto_if_eq Rival_Scene02_2
Rival_Scene02_1:
# 179 "data/rival_scripts.pory"
	release
	return

Rival_Scene02_2:
# 116 "data/rival_scripts.pory"
	lock
# 117 "data/rival_scripts.pory"
	call Common_EventScript_PlayEmRivalBgm
# 118 "data/rival_scripts.pory"
	playse SE_PIN
# 119 "data/rival_scripts.pory"
	applymovement RIVAL_PETALBURG, Common_Movement_ExclamationMark
# 120 "data/rival_scripts.pory"
	waitmovement 0
# 121 "data/rival_scripts.pory"
	delay 60
# 122 "data/rival_scripts.pory"
	applymovement RIVAL_PETALBURG, Common_Movement_WalkRight2
# 123 "data/rival_scripts.pory"
	waitmovement 0
# 124 "data/rival_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 125 "data/rival_scripts.pory"
	switch VAR_TEMP_1
# 126 "data/rival_scripts.pory"
	case 16, Rival_Scene02_6
# 129 "data/rival_scripts.pory"
	case 17, Rival_Scene02_7
# 132 "data/rival_scripts.pory"
	case 19, Rival_Scene02_8
Rival_Scene02_4:
# 137 "data/rival_scripts.pory"
	applymovement RIVAL_PETALBURG, Common_Movement_WalkRight2
# 138 "data/rival_scripts.pory"
	waitmovement 0
# 139 "data/rival_scripts.pory"
	call GetRivalForNameBox
# 140 "data/rival_scripts.pory"
	switch VAR_EMERALBODY_RIVAL
# 141 "data/rival_scripts.pory"
	case 1, Rival_Scene02_11
# 146 "data/rival_scripts.pory"
	case 2, Rival_Scene02_12
# 151 "data/rival_scripts.pory"
	case 3, Rival_Scene02_13
# 156 "data/rival_scripts.pory"
	case 4, Rival_Scene02_14
# 162 "data/rival_scripts.pory"
	msgbox Scene02_BaronText_PreBattle
# 163 "data/rival_scripts.pory"
	trainerbattle_no_intro TRAINER_BARON_1, Scene02_BaronText_BattleVictory
# 164 "data/rival_scripts.pory"
	call GetRivalForNameBox
# 165 "data/rival_scripts.pory"
	msgbox Scene02_BaronText_PostBattle
Rival_Scene02_9:
# 167 "data/rival_scripts.pory"
	closemessage
# 168 "data/rival_scripts.pory"
	setvar VAR_EMERALBODY_RIVAL_STATE, 2
# 169 "data/rival_scripts.pory"
	clearflag FLAG_TEMP_2
# 170 "data/rival_scripts.pory"
	fadedefaultbgm
# 171 "data/rival_scripts.pory"
	compare VAR_TEMP_1, 16
	goto_if_eq Rival_Scene02_17
Rival_Scene02_16:
# 175 "data/rival_scripts.pory"
	applymovement RIVAL_PETALBURG, Common_Movement_WalkLeft7
# 176 "data/rival_scripts.pory"
	waitmovement 0
# 177 "data/rival_scripts.pory"
	removeobject RIVAL_PETALBURG
	goto Rival_Scene02_1

Rival_Scene02_6:
# 127 "data/rival_scripts.pory"
	applymovement RIVAL_PETALBURG, Common_Movement_WalkUp2
# 128 "data/rival_scripts.pory"
	waitmovement 0
	goto Rival_Scene02_4

Rival_Scene02_7:
# 130 "data/rival_scripts.pory"
	applymovement RIVAL_PETALBURG, Common_Movement_WalkUp
# 131 "data/rival_scripts.pory"
	waitmovement 0
	goto Rival_Scene02_4

Rival_Scene02_8:
# 133 "data/rival_scripts.pory"
	applymovement RIVAL_PETALBURG, Common_Movement_WalkDown
# 134 "data/rival_scripts.pory"
	waitmovement 0
	goto Rival_Scene02_4

Rival_Scene02_11:
# 142 "data/rival_scripts.pory"
	msgbox Scene02_HarperText_PreBattle
# 143 "data/rival_scripts.pory"
	trainerbattle_no_intro TRAINER_HARPER_1, Scene02_HarperText_BattleVictory
# 144 "data/rival_scripts.pory"
	call GetRivalForNameBox
# 145 "data/rival_scripts.pory"
	msgbox Scene02_HarperText_PostBattle
	goto Rival_Scene02_9

Rival_Scene02_12:
# 147 "data/rival_scripts.pory"
	msgbox Scene02_JaksonText_PreBattle
# 148 "data/rival_scripts.pory"
	trainerbattle_no_intro TRAINER_JAKSON_1, Scene02_JaksonText_BattleVictory
# 149 "data/rival_scripts.pory"
	call GetRivalForNameBox
# 150 "data/rival_scripts.pory"
	msgbox Scene02_JaksonText_PostBattle
	goto Rival_Scene02_9

Rival_Scene02_13:
# 152 "data/rival_scripts.pory"
	msgbox Scene02_ReddText_PreBattle
# 153 "data/rival_scripts.pory"
	trainerbattle_no_intro TRAINER_REDD_1, Scene02_ReddText_BattleVictory
# 154 "data/rival_scripts.pory"
	call GetRivalForNameBox
# 155 "data/rival_scripts.pory"
	msgbox Scene02_ReddText_PostBattle
	goto Rival_Scene02_9

Rival_Scene02_14:
# 157 "data/rival_scripts.pory"
	msgbox Scene02_SakuraText_PreBattle
# 158 "data/rival_scripts.pory"
	trainerbattle_no_intro TRAINER_SAKURA_1, Scene02_SakuraText_BattleVictory
# 159 "data/rival_scripts.pory"
	call GetRivalForNameBox
# 160 "data/rival_scripts.pory"
	msgbox Scene02_SakuraText_PostBattle
	goto Rival_Scene02_9

Rival_Scene02_17:
# 172 "data/rival_scripts.pory"
	applymovement RIVAL_PETALBURG, Common_Movement_WalkDown
# 173 "data/rival_scripts.pory"
	waitmovement 0
	goto Rival_Scene02_16


Sakura_Town02::
# 185 "data/rival_scripts.pory"
	speakername CommonText_Sakura
# 186 "data/rival_scripts.pory"
	msgbox Town02_SakuraText, MSGBOX_NPC
	return


Harper_Town02::
# 190 "data/rival_scripts.pory"
	speakername CommonText_Harper
# 191 "data/rival_scripts.pory"
	msgbox Town02_HarperText, MSGBOX_NPC
	return


Redd_Town02::
# 195 "data/rival_scripts.pory"
	speakername CommonText_Redd
# 196 "data/rival_scripts.pory"
	msgbox Town02_ReddText, MSGBOX_NPC
	return


Baron_Town02::
# 200 "data/rival_scripts.pory"
	speakername CommonText_Baron
# 201 "data/rival_scripts.pory"
	msgbox Town02_BaronText, MSGBOX_NPC
	return


Jakson_Town02::
# 205 "data/rival_scripts.pory"
	speakername CommonText_Jakson
# 206 "data/rival_scripts.pory"
	msgbox Town02_JaksonText, MSGBOX_NPC
	return


Sakura_Town03::
# 212 "data/rival_scripts.pory"
	speakername CommonText_Sakura
# 213 "data/rival_scripts.pory"
	msgbox Town03_SakuraText, MSGBOX_NPC
	return


Harper_Town03::
# 217 "data/rival_scripts.pory"
	speakername CommonText_Harper
# 218 "data/rival_scripts.pory"
	msgbox Town03_HarperText, MSGBOX_NPC
	return


Redd_Town03::
# 222 "data/rival_scripts.pory"
	speakername CommonText_Redd
# 223 "data/rival_scripts.pory"
	msgbox Town03_ReddText, MSGBOX_NPC
	return


Jakson_Town03::
# 227 "data/rival_scripts.pory"
	speakername CommonText_Jakson
# 228 "data/rival_scripts.pory"
	msgbox Town03_JaksonText, MSGBOX_NPC
	return


Baron_Town03::
# 232 "data/rival_scripts.pory"
	lock
# 233 "data/rival_scripts.pory"
	speakername CommonText_Baron
# 234 "data/rival_scripts.pory"
	msgbox Town03_BaronText1
# 235 "data/rival_scripts.pory"
	faceplayer
# 236 "data/rival_scripts.pory"
	msgbox Town03_BaronText2
# 237 "data/rival_scripts.pory"
	release
	return


Rival_Scene03::
# 243 "data/rival_scripts.pory"
	delay 100
# 244 "data/rival_scripts.pory"
	call Common_EventScript_PlayEmRivalBgm
# 245 "data/rival_scripts.pory"
	addobject RIVAL_RUSTBORO
# 246 "data/rival_scripts.pory"
	setobjectxy RIVAL_RUSTBORO, 20, 15
# 247 "data/rival_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 248 "data/rival_scripts.pory"
	switch VAR_TEMP_1
# 249 "data/rival_scripts.pory"
	case 21, Rival_Scene03_3
# 253 "data/rival_scripts.pory"
	applymovement RIVAL_RUSTBORO, Common_Movement_WalkDown7
# 254 "data/rival_scripts.pory"
	waitmovement 0
Rival_Scene03_1:
# 256 "data/rival_scripts.pory"
	applymovement RIVAL_RUSTBORO, Common_Movement_WalkLeft2
# 257 "data/rival_scripts.pory"
	waitmovement 0
# 258 "data/rival_scripts.pory"
	call GetRivalForNameBox
# 259 "data/rival_scripts.pory"
	switch VAR_EMERALBODY_RIVAL
# 260 "data/rival_scripts.pory"
	case 1, Rival_Scene03_7
# 262 "data/rival_scripts.pory"
	case 2, Rival_Scene03_8
# 264 "data/rival_scripts.pory"
	case 3, Rival_Scene03_9
# 266 "data/rival_scripts.pory"
	case 4, Rival_Scene03_10
# 269 "data/rival_scripts.pory"
	msgbox Scene03_BaronText
Rival_Scene03_5:
# 271 "data/rival_scripts.pory"
	closemessage
# 272 "data/rival_scripts.pory"
	fadescreen FADE_TO_BLACK
# 273 "data/rival_scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 11, 19
# 274 "data/rival_scripts.pory"
	setvar VAR_0x8004, 11
# 275 "data/rival_scripts.pory"
	setvar VAR_0x8005, 19
# 276 "data/rival_scripts.pory"
	special TeleportCamera
# 277 "data/rival_scripts.pory"
	addobject REDD_RUSTBORO
# 278 "data/rival_scripts.pory"
	addobject SAKURA_RUSTBORO
# 279 "data/rival_scripts.pory"
	addobject BARON_RUSTBORO
# 280 "data/rival_scripts.pory"
	addobject HARPER_RUSTBORO
# 281 "data/rival_scripts.pory"
	addobject JAKSON_RUSTBORO
# 282 "data/rival_scripts.pory"
	applymovement SAKURA_RUSTBORO, Common_Movement_FaceDown
# 283 "data/rival_scripts.pory"
	applymovement REDD_RUSTBORO, Common_Movement_FaceRight
# 284 "data/rival_scripts.pory"
	applymovement HARPER_RUSTBORO, Common_Movement_FaceLeft
# 285 "data/rival_scripts.pory"
	applymovement JAKSON_RUSTBORO, Common_Movement_FaceUp
# 286 "data/rival_scripts.pory"
	setobjectxy REDD_RUSTBORO, 10, 18
# 287 "data/rival_scripts.pory"
	setobjectxy SAKURA_RUSTBORO, 11, 17
# 288 "data/rival_scripts.pory"
	setobjectxy BARON_RUSTBORO, 12, 17
# 289 "data/rival_scripts.pory"
	setobjectxy HARPER_RUSTBORO, 13, 18
# 290 "data/rival_scripts.pory"
	setobjectxy JAKSON_RUSTBORO, 12, 19
# 291 "data/rival_scripts.pory"
	setobjectxy RIVAL_RUSTBORO, 0, 6
# 292 "data/rival_scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 293 "data/rival_scripts.pory"
	fadescreen FADE_FROM_BLACK
# 294 "data/rival_scripts.pory"
	message Rival_Scene03_Text_0
# 295 "data/rival_scripts.pory"
	applymovement JAKSON_RUSTBORO, Common_Movement_WalkInPlaceLeft
# 296 "data/rival_scripts.pory"
	waitmovement 0
# 297 "data/rival_scripts.pory"
	delay 30
# 298 "data/rival_scripts.pory"
	applymovement JAKSON_RUSTBORO, Common_Movement_WalkInPlaceUp
# 299 "data/rival_scripts.pory"
	applymovement HARPER_RUSTBORO, Common_Movement_WalkInPlaceDown
# 300 "data/rival_scripts.pory"
	waitmovement 0
# 301 "data/rival_scripts.pory"
	delay 40
# 302 "data/rival_scripts.pory"
	applymovement BARON_RUSTBORO, Common_Movement_WalkInPlaceLeft
# 303 "data/rival_scripts.pory"
	applymovement SAKURA_RUSTBORO, Common_Movement_WalkInPlaceRight
# 304 "data/rival_scripts.pory"
	waitmovement 0
# 305 "data/rival_scripts.pory"
	delay 30
# 306 "data/rival_scripts.pory"
	applymovement REDD_RUSTBORO, Common_Movement_WalkInPlaceDown
# 307 "data/rival_scripts.pory"
	waitmovement 0
# 308 "data/rival_scripts.pory"
	delay 50
# 309 "data/rival_scripts.pory"
	closemessage
# 310 "data/rival_scripts.pory"
	fadescreen FADE_TO_BLACK
# 311 "data/rival_scripts.pory"
	removeobject REDD_RUSTBORO
# 312 "data/rival_scripts.pory"
	removeobject SAKURA_RUSTBORO
# 313 "data/rival_scripts.pory"
	removeobject BARON_RUSTBORO
# 314 "data/rival_scripts.pory"
	removeobject HARPER_RUSTBORO
# 315 "data/rival_scripts.pory"
	removeobject JAKSON_RUSTBORO
# 316 "data/rival_scripts.pory"
	fadescreen FADE_FROM_BLACK
# 317 "data/rival_scripts.pory"
	fadedefaultbgm
# 318 "data/rival_scripts.pory"
	setflag FLAG_ENABLE_EMIB_RIVAL_MATCH_CALL
# 319 "data/rival_scripts.pory"
	release
	return

Rival_Scene03_3:
# 250 "data/rival_scripts.pory"
	applymovement RIVAL_RUSTBORO, Common_Movement_WalkDown6
# 251 "data/rival_scripts.pory"
	waitmovement 0
	goto Rival_Scene03_1

Rival_Scene03_7:
# 261 "data/rival_scripts.pory"
	msgbox Scene03_HarperText
	goto Rival_Scene03_5

Rival_Scene03_8:
# 263 "data/rival_scripts.pory"
	msgbox Scene03_JaksonText
	goto Rival_Scene03_5

Rival_Scene03_9:
# 265 "data/rival_scripts.pory"
	msgbox Scene03_ReddText
	goto Rival_Scene03_5

Rival_Scene03_10:
# 267 "data/rival_scripts.pory"
	msgbox Scene03_SakuraText
	goto Rival_Scene03_5


Baron_Town01_Text_0:
# 93 "data/rival_scripts.pory"
	.string "Left foot… Right foot…\nLeft foot… Right foot…$"

Rival_Scene03_Text_0:
# 294 "data/rival_scripts.pory"
	.string "You exchanged PokéNav info with your\n"
	.string "friends.$"
