Rival_Scene01::
# 25 "data/emeralbody_rivals/rival_scripts.pory"
	compare VAR_BIRCH_LAB_STATE, 3
	goto_if_eq Rival_Scene01_2
Rival_Scene01_1:
# 66 "data/emeralbody_rivals/rival_scripts.pory"
	release
	return

Rival_Scene01_2:
# 26 "data/emeralbody_rivals/rival_scripts.pory"
	lock
# 27 "data/emeralbody_rivals/rival_scripts.pory"
	call Common_EventScript_PlayEmRivalBgm
# 28 "data/emeralbody_rivals/rival_scripts.pory"
	playse SE_PIN
# 29 "data/emeralbody_rivals/rival_scripts.pory"
	applymovement RIVAL_LITTLEROOT, Rival_Scene01_Move1
# 30 "data/emeralbody_rivals/rival_scripts.pory"
	waitmovement 0
# 31 "data/emeralbody_rivals/rival_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 32 "data/emeralbody_rivals/rival_scripts.pory"
	switch VAR_TEMP_1
# 33 "data/emeralbody_rivals/rival_scripts.pory"
	case 17, Rival_Scene01_6
# 38 "data/emeralbody_rivals/rival_scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceRight
# 39 "data/emeralbody_rivals/rival_scripts.pory"
	waitmovement 0
Rival_Scene01_4:
# 41 "data/emeralbody_rivals/rival_scripts.pory"
	call GetRivalForNameBox
# 42 "data/emeralbody_rivals/rival_scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_eq Rival_Scene01_9
Rival_Scene01_8:
# 45 "data/emeralbody_rivals/rival_scripts.pory"
	switch VAR_TEMP_A
# 46 "data/emeralbody_rivals/rival_scripts.pory"
	case 1, Rival_Scene01_13
# 48 "data/emeralbody_rivals/rival_scripts.pory"
	case 2, Rival_Scene01_14
# 50 "data/emeralbody_rivals/rival_scripts.pory"
	case 3, Rival_Scene01_15
# 52 "data/emeralbody_rivals/rival_scripts.pory"
	case 4, Rival_Scene01_16
# 55 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Scene01_BaronText
Rival_Scene01_11:
# 57 "data/emeralbody_rivals/rival_scripts.pory"
	closemessage
# 58 "data/emeralbody_rivals/rival_scripts.pory"
	setvar VAR_EMERALBODY_RIVAL_STATE, 1
# 59 "data/emeralbody_rivals/rival_scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 60 "data/emeralbody_rivals/rival_scripts.pory"
	fadedefaultbgm
# 61 "data/emeralbody_rivals/rival_scripts.pory"
	removeobject RIVAL_LITTLEROOT
# 62 "data/emeralbody_rivals/rival_scripts.pory"
	clearflag FLAG_TEMP_1
# 63 "data/emeralbody_rivals/rival_scripts.pory"
	addobject BARON_LITTLEROOT
# 64 "data/emeralbody_rivals/rival_scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
	goto Rival_Scene01_1

Rival_Scene01_6:
# 34 "data/emeralbody_rivals/rival_scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceDown
# 35 "data/emeralbody_rivals/rival_scripts.pory"
	applymovement RIVAL_LITTLEROOT, Common_Movement_WalkInPlaceUp
# 36 "data/emeralbody_rivals/rival_scripts.pory"
	waitmovement 0
	goto Rival_Scene01_4

Rival_Scene01_9:
# 43 "data/emeralbody_rivals/rival_scripts.pory"
	copyvar VAR_TEMP_A, VAR_EMERALBODY_RIVAL
	goto Rival_Scene01_8

Rival_Scene01_13:
# 47 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Scene01_HarperText
	goto Rival_Scene01_11

Rival_Scene01_14:
# 49 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Scene01_JaksonText
	goto Rival_Scene01_11

Rival_Scene01_15:
# 51 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Scene01_ReddText
	goto Rival_Scene01_11

Rival_Scene01_16:
# 53 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Scene01_SakuraText
	goto Rival_Scene01_11


# 69 "data/emeralbody_rivals/rival_scripts.pory"
Rival_Scene01_Move1:
# 70 "data/emeralbody_rivals/rival_scripts.pory"
	emote_exclamation_mark
# 71 "data/emeralbody_rivals/rival_scripts.pory"
	delay_16
# 71 "data/emeralbody_rivals/rival_scripts.pory"
	delay_16
# 71 "data/emeralbody_rivals/rival_scripts.pory"
	delay_16
# 71 "data/emeralbody_rivals/rival_scripts.pory"
	delay_16
# 72 "data/emeralbody_rivals/rival_scripts.pory"
	walk_left
# 72 "data/emeralbody_rivals/rival_scripts.pory"
	walk_left
	step_end

# 75 "data/emeralbody_rivals/rival_scripts.pory"
Rival_Scene01_Move2:
# 76 "data/emeralbody_rivals/rival_scripts.pory"
	walk_fast_down
# 76 "data/emeralbody_rivals/rival_scripts.pory"
	walk_fast_down
# 76 "data/emeralbody_rivals/rival_scripts.pory"
	walk_fast_down
# 76 "data/emeralbody_rivals/rival_scripts.pory"
	walk_fast_down
# 76 "data/emeralbody_rivals/rival_scripts.pory"
	walk_fast_down
# 76 "data/emeralbody_rivals/rival_scripts.pory"
	walk_fast_down
# 76 "data/emeralbody_rivals/rival_scripts.pory"
	walk_fast_down
	step_end

Sakura_Town01::
# 82 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Sakura
# 83 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town01_SakuraText, MSGBOX_NPC
	return


Jakson_Town01::
# 87 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Jakson
# 88 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town01_JaksonText, MSGBOX_NPC
	return


Redd_Town01::
# 92 "data/emeralbody_rivals/rival_scripts.pory"
	lock
# 93 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Redd
# 94 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town01_ReddText
# 95 "data/emeralbody_rivals/rival_scripts.pory"
	release
	return


Harper_Town01::
# 99 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Harper
# 100 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town01_HarperText, MSGBOX_NPC
	return


Baron_Town01::
# 104 "data/emeralbody_rivals/rival_scripts.pory"
	lock
# 105 "data/emeralbody_rivals/rival_scripts.pory"
	applymovement BARON_LITTLEROOT, Baron_Town01_Move
# 106 "data/emeralbody_rivals/rival_scripts.pory"
	waitmovement 0
# 107 "data/emeralbody_rivals/rival_scripts.pory"
	applymovement BARON_LITTLEROOT, Baron_Town01_Move
# 108 "data/emeralbody_rivals/rival_scripts.pory"
	waitmovement 0
# 109 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Baron
# 110 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Baron_Town01_Text_0
# 111 "data/emeralbody_rivals/rival_scripts.pory"
	closemessage
# 112 "data/emeralbody_rivals/rival_scripts.pory"
	faceplayer
# 113 "data/emeralbody_rivals/rival_scripts.pory"
	playse SE_PIN
# 114 "data/emeralbody_rivals/rival_scripts.pory"
	applymovement BARON_LITTLEROOT, Common_Movement_ExclamationMark
# 115 "data/emeralbody_rivals/rival_scripts.pory"
	waitmovement 0
# 116 "data/emeralbody_rivals/rival_scripts.pory"
	delay 60
# 117 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Baron
# 118 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town01_BaronText
# 119 "data/emeralbody_rivals/rival_scripts.pory"
	applymovement BARON_LITTLEROOT, Common_Movement_FaceLeft
# 120 "data/emeralbody_rivals/rival_scripts.pory"
	waitmovement 0
# 121 "data/emeralbody_rivals/rival_scripts.pory"
	release
	return


# 124 "data/emeralbody_rivals/rival_scripts.pory"
Baron_Town01_Move:
# 125 "data/emeralbody_rivals/rival_scripts.pory"
	walk_in_place_left
# 126 "data/emeralbody_rivals/rival_scripts.pory"
	delay_16
	step_end

Rival_Scene02::
# 132 "data/emeralbody_rivals/rival_scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 1
	goto_if_eq Rival_Scene02_2
Rival_Scene02_1:
# 203 "data/emeralbody_rivals/rival_scripts.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 204 "data/emeralbody_rivals/rival_scripts.pory"
	release
	return

Rival_Scene02_2:
# 133 "data/emeralbody_rivals/rival_scripts.pory"
	lock
# 134 "data/emeralbody_rivals/rival_scripts.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 135 "data/emeralbody_rivals/rival_scripts.pory"
	call Common_EventScript_PlayEmRivalBgm
# 136 "data/emeralbody_rivals/rival_scripts.pory"
	playse SE_PIN
# 137 "data/emeralbody_rivals/rival_scripts.pory"
	applymovement RIVAL_PETALBURG, Common_Movement_ExclamationMark
# 138 "data/emeralbody_rivals/rival_scripts.pory"
	waitmovement 0
# 139 "data/emeralbody_rivals/rival_scripts.pory"
	delay 60
# 140 "data/emeralbody_rivals/rival_scripts.pory"
	applymovement RIVAL_PETALBURG, Common_Movement_WalkRight2
# 141 "data/emeralbody_rivals/rival_scripts.pory"
	waitmovement 0
# 142 "data/emeralbody_rivals/rival_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 143 "data/emeralbody_rivals/rival_scripts.pory"
	switch VAR_TEMP_1
# 144 "data/emeralbody_rivals/rival_scripts.pory"
	case 16, Rival_Scene02_6
# 147 "data/emeralbody_rivals/rival_scripts.pory"
	case 17, Rival_Scene02_7
# 150 "data/emeralbody_rivals/rival_scripts.pory"
	case 19, Rival_Scene02_8
Rival_Scene02_4:
# 155 "data/emeralbody_rivals/rival_scripts.pory"
	applymovement RIVAL_PETALBURG, Common_Movement_WalkRight2
# 156 "data/emeralbody_rivals/rival_scripts.pory"
	waitmovement 0
# 157 "data/emeralbody_rivals/rival_scripts.pory"
	call GetRivalForNameBox
# 158 "data/emeralbody_rivals/rival_scripts.pory"
	call GetRivalMusic
# 159 "data/emeralbody_rivals/rival_scripts.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 160 "data/emeralbody_rivals/rival_scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_eq Rival_Scene02_10
Rival_Scene02_9:
# 163 "data/emeralbody_rivals/rival_scripts.pory"
	switch VAR_TEMP_A
# 164 "data/emeralbody_rivals/rival_scripts.pory"
	case 1, Rival_Scene02_14
# 169 "data/emeralbody_rivals/rival_scripts.pory"
	case 2, Rival_Scene02_15
# 174 "data/emeralbody_rivals/rival_scripts.pory"
	case 3, Rival_Scene02_16
# 179 "data/emeralbody_rivals/rival_scripts.pory"
	case 4, Rival_Scene02_17
# 185 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Scene02_BaronText_PreBattle
# 186 "data/emeralbody_rivals/rival_scripts.pory"
	trainerbattle_no_intro TRAINER_BARON_1, Scene02_BaronText_BattleVictory
# 187 "data/emeralbody_rivals/rival_scripts.pory"
	call GetRivalForNameBox
# 188 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Scene02_BaronText_PostBattle
Rival_Scene02_12:
# 190 "data/emeralbody_rivals/rival_scripts.pory"
	closemessage
# 191 "data/emeralbody_rivals/rival_scripts.pory"
	setvar VAR_EMERALBODY_RIVAL_STATE, 2
# 192 "data/emeralbody_rivals/rival_scripts.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 193 "data/emeralbody_rivals/rival_scripts.pory"
	clearflag FLAG_TEMP_2
# 194 "data/emeralbody_rivals/rival_scripts.pory"
	fadedefaultbgm
# 195 "data/emeralbody_rivals/rival_scripts.pory"
	compare VAR_TEMP_1, 16
	goto_if_eq Rival_Scene02_20
Rival_Scene02_19:
# 199 "data/emeralbody_rivals/rival_scripts.pory"
	applymovement RIVAL_PETALBURG, Common_Movement_WalkLeft7
# 200 "data/emeralbody_rivals/rival_scripts.pory"
	waitmovement 0
# 201 "data/emeralbody_rivals/rival_scripts.pory"
	removeobject RIVAL_PETALBURG
	goto Rival_Scene02_1

Rival_Scene02_6:
# 145 "data/emeralbody_rivals/rival_scripts.pory"
	applymovement RIVAL_PETALBURG, Common_Movement_WalkUp2
# 146 "data/emeralbody_rivals/rival_scripts.pory"
	waitmovement 0
	goto Rival_Scene02_4

Rival_Scene02_7:
# 148 "data/emeralbody_rivals/rival_scripts.pory"
	applymovement RIVAL_PETALBURG, Common_Movement_WalkUp
# 149 "data/emeralbody_rivals/rival_scripts.pory"
	waitmovement 0
	goto Rival_Scene02_4

Rival_Scene02_8:
# 151 "data/emeralbody_rivals/rival_scripts.pory"
	applymovement RIVAL_PETALBURG, Common_Movement_WalkDown
# 152 "data/emeralbody_rivals/rival_scripts.pory"
	waitmovement 0
	goto Rival_Scene02_4

Rival_Scene02_10:
# 161 "data/emeralbody_rivals/rival_scripts.pory"
	copyvar VAR_TEMP_A, VAR_EMERALBODY_RIVAL
	goto Rival_Scene02_9

Rival_Scene02_14:
# 165 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Scene02_HarperText_PreBattle
# 166 "data/emeralbody_rivals/rival_scripts.pory"
	trainerbattle_no_intro TRAINER_HARPER_1, Scene02_HarperText_BattleVictory
# 167 "data/emeralbody_rivals/rival_scripts.pory"
	call GetRivalForNameBox
# 168 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Scene02_HarperText_PostBattle
	goto Rival_Scene02_12

Rival_Scene02_15:
# 170 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Scene02_JaksonText_PreBattle
# 171 "data/emeralbody_rivals/rival_scripts.pory"
	trainerbattle_no_intro TRAINER_JAKSON_1, Scene02_JaksonText_BattleVictory
# 172 "data/emeralbody_rivals/rival_scripts.pory"
	call GetRivalForNameBox
# 173 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Scene02_JaksonText_PostBattle
	goto Rival_Scene02_12

Rival_Scene02_16:
# 175 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Scene02_ReddText_PreBattle
# 176 "data/emeralbody_rivals/rival_scripts.pory"
	trainerbattle_no_intro TRAINER_REDD_1, Scene02_ReddText_BattleVictory
# 177 "data/emeralbody_rivals/rival_scripts.pory"
	call GetRivalForNameBox
# 178 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Scene02_ReddText_PostBattle
	goto Rival_Scene02_12

Rival_Scene02_17:
# 180 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Scene02_SakuraText_PreBattle
# 181 "data/emeralbody_rivals/rival_scripts.pory"
	trainerbattle_no_intro TRAINER_SAKURA_1, Scene02_SakuraText_BattleVictory
# 182 "data/emeralbody_rivals/rival_scripts.pory"
	call GetRivalForNameBox
# 183 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Scene02_SakuraText_PostBattle
	goto Rival_Scene02_12

Rival_Scene02_20:
# 196 "data/emeralbody_rivals/rival_scripts.pory"
	applymovement RIVAL_PETALBURG, Common_Movement_WalkDown
# 197 "data/emeralbody_rivals/rival_scripts.pory"
	waitmovement 0
	goto Rival_Scene02_19


Sakura_Town02::
# 210 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Sakura
# 211 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town02_SakuraText, MSGBOX_NPC
	return


Harper_Town02::
# 215 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Harper
# 216 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town02_HarperText, MSGBOX_NPC
	return


Redd_Town02::
# 220 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Redd
# 221 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town02_ReddText, MSGBOX_NPC
	return


Baron_Town02::
# 225 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Baron
# 226 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town02_BaronText, MSGBOX_NPC
	return


Jakson_Town02::
# 230 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Jakson
# 231 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town02_JaksonText, MSGBOX_NPC
	return


Sakura_Town03::
# 237 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Sakura
# 238 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town03_SakuraText, MSGBOX_NPC
	return


Harper_Town03::
# 242 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Harper
# 243 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town03_HarperText, MSGBOX_NPC
	return


Redd_Town03::
# 247 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Redd
# 248 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town03_ReddText, MSGBOX_NPC
	return


Jakson_Town03::
# 252 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Jakson
# 253 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town03_JaksonText, MSGBOX_NPC
	return


Baron_Town03::
# 257 "data/emeralbody_rivals/rival_scripts.pory"
	lock
# 258 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Baron
# 259 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town03_BaronText1
# 260 "data/emeralbody_rivals/rival_scripts.pory"
	faceplayer
# 261 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town03_BaronText2
# 262 "data/emeralbody_rivals/rival_scripts.pory"
	release
	return


Rival_Scene03::
# 268 "data/emeralbody_rivals/rival_scripts.pory"
	delay 100
# 269 "data/emeralbody_rivals/rival_scripts.pory"
	call Common_EventScript_PlayEmRivalBgm
# 270 "data/emeralbody_rivals/rival_scripts.pory"
	addobject RIVAL_RUSTBORO
# 271 "data/emeralbody_rivals/rival_scripts.pory"
	setobjectxy RIVAL_RUSTBORO, 20, 15
# 272 "data/emeralbody_rivals/rival_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 273 "data/emeralbody_rivals/rival_scripts.pory"
	switch VAR_TEMP_1
# 274 "data/emeralbody_rivals/rival_scripts.pory"
	case 21, Rival_Scene03_3
# 278 "data/emeralbody_rivals/rival_scripts.pory"
	applymovement RIVAL_RUSTBORO, Common_Movement_WalkDown7
# 279 "data/emeralbody_rivals/rival_scripts.pory"
	waitmovement 0
Rival_Scene03_1:
# 281 "data/emeralbody_rivals/rival_scripts.pory"
	applymovement RIVAL_RUSTBORO, Common_Movement_WalkLeft2
# 282 "data/emeralbody_rivals/rival_scripts.pory"
	waitmovement 0
# 283 "data/emeralbody_rivals/rival_scripts.pory"
	call GetRivalForNameBox
# 284 "data/emeralbody_rivals/rival_scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_eq Rival_Scene03_6
Rival_Scene03_5:
# 287 "data/emeralbody_rivals/rival_scripts.pory"
	switch VAR_TEMP_A
# 288 "data/emeralbody_rivals/rival_scripts.pory"
	case 1, Rival_Scene03_10
# 290 "data/emeralbody_rivals/rival_scripts.pory"
	case 2, Rival_Scene03_11
# 292 "data/emeralbody_rivals/rival_scripts.pory"
	case 3, Rival_Scene03_12
# 294 "data/emeralbody_rivals/rival_scripts.pory"
	case 4, Rival_Scene03_13
# 297 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Scene03_BaronText
Rival_Scene03_8:
# 299 "data/emeralbody_rivals/rival_scripts.pory"
	closemessage
# 300 "data/emeralbody_rivals/rival_scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 301 "data/emeralbody_rivals/rival_scripts.pory"
	setobjectxy LOCALID_PLAYER, 11, 19
# 302 "data/emeralbody_rivals/rival_scripts.pory"
	setvar VAR_0x8004, 11
# 303 "data/emeralbody_rivals/rival_scripts.pory"
	setvar VAR_0x8005, 19
# 304 "data/emeralbody_rivals/rival_scripts.pory"
	special TeleportCamera
# 305 "data/emeralbody_rivals/rival_scripts.pory"
	addobject REDD_RUSTBORO
# 306 "data/emeralbody_rivals/rival_scripts.pory"
	addobject SAKURA_RUSTBORO
# 307 "data/emeralbody_rivals/rival_scripts.pory"
	addobject BARON_RUSTBORO
# 308 "data/emeralbody_rivals/rival_scripts.pory"
	addobject HARPER_RUSTBORO
# 309 "data/emeralbody_rivals/rival_scripts.pory"
	addobject JAKSON_RUSTBORO
# 310 "data/emeralbody_rivals/rival_scripts.pory"
	applymovement SAKURA_RUSTBORO, Common_Movement_FaceDown
# 311 "data/emeralbody_rivals/rival_scripts.pory"
	applymovement REDD_RUSTBORO, Common_Movement_FaceRight
# 312 "data/emeralbody_rivals/rival_scripts.pory"
	applymovement HARPER_RUSTBORO, Common_Movement_FaceLeft
# 313 "data/emeralbody_rivals/rival_scripts.pory"
	applymovement JAKSON_RUSTBORO, Common_Movement_FaceUp
# 314 "data/emeralbody_rivals/rival_scripts.pory"
	setobjectxy REDD_RUSTBORO, 10, 18
# 315 "data/emeralbody_rivals/rival_scripts.pory"
	setobjectxy SAKURA_RUSTBORO, 11, 17
# 316 "data/emeralbody_rivals/rival_scripts.pory"
	setobjectxy BARON_RUSTBORO, 12, 17
# 317 "data/emeralbody_rivals/rival_scripts.pory"
	setobjectxy HARPER_RUSTBORO, 13, 18
# 318 "data/emeralbody_rivals/rival_scripts.pory"
	setobjectxy JAKSON_RUSTBORO, 12, 19
# 319 "data/emeralbody_rivals/rival_scripts.pory"
	setobjectxy RIVAL_RUSTBORO, 0, 6
# 320 "data/emeralbody_rivals/rival_scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 321 "data/emeralbody_rivals/rival_scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 322 "data/emeralbody_rivals/rival_scripts.pory"
	message Rival_Scene03_Text_0
# 323 "data/emeralbody_rivals/rival_scripts.pory"
	applymovement JAKSON_RUSTBORO, Common_Movement_WalkInPlaceLeft
# 324 "data/emeralbody_rivals/rival_scripts.pory"
	waitmovement 0
# 325 "data/emeralbody_rivals/rival_scripts.pory"
	delay 30
# 326 "data/emeralbody_rivals/rival_scripts.pory"
	applymovement JAKSON_RUSTBORO, Common_Movement_WalkInPlaceUp
# 327 "data/emeralbody_rivals/rival_scripts.pory"
	applymovement HARPER_RUSTBORO, Common_Movement_WalkInPlaceDown
# 328 "data/emeralbody_rivals/rival_scripts.pory"
	waitmovement 0
# 329 "data/emeralbody_rivals/rival_scripts.pory"
	delay 40
# 330 "data/emeralbody_rivals/rival_scripts.pory"
	applymovement BARON_RUSTBORO, Common_Movement_WalkInPlaceLeft
# 331 "data/emeralbody_rivals/rival_scripts.pory"
	applymovement SAKURA_RUSTBORO, Common_Movement_WalkInPlaceRight
# 332 "data/emeralbody_rivals/rival_scripts.pory"
	waitmovement 0
# 333 "data/emeralbody_rivals/rival_scripts.pory"
	delay 30
# 334 "data/emeralbody_rivals/rival_scripts.pory"
	applymovement REDD_RUSTBORO, Common_Movement_WalkInPlaceDown
# 335 "data/emeralbody_rivals/rival_scripts.pory"
	waitmovement 0
# 336 "data/emeralbody_rivals/rival_scripts.pory"
	delay 50
# 337 "data/emeralbody_rivals/rival_scripts.pory"
	closemessage
# 338 "data/emeralbody_rivals/rival_scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 339 "data/emeralbody_rivals/rival_scripts.pory"
	removeobject REDD_RUSTBORO
# 340 "data/emeralbody_rivals/rival_scripts.pory"
	removeobject SAKURA_RUSTBORO
# 341 "data/emeralbody_rivals/rival_scripts.pory"
	removeobject BARON_RUSTBORO
# 342 "data/emeralbody_rivals/rival_scripts.pory"
	removeobject HARPER_RUSTBORO
# 343 "data/emeralbody_rivals/rival_scripts.pory"
	removeobject JAKSON_RUSTBORO
# 344 "data/emeralbody_rivals/rival_scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 345 "data/emeralbody_rivals/rival_scripts.pory"
	fadedefaultbgm
# 346 "data/emeralbody_rivals/rival_scripts.pory"
	special RemoveCameraObject
# 347 "data/emeralbody_rivals/rival_scripts.pory"
	setflag FLAG_ENABLE_EMIB_RIVAL_MATCH_CALL
# 348 "data/emeralbody_rivals/rival_scripts.pory"
	release
	return

Rival_Scene03_3:
# 275 "data/emeralbody_rivals/rival_scripts.pory"
	applymovement RIVAL_RUSTBORO, Common_Movement_WalkDown6
# 276 "data/emeralbody_rivals/rival_scripts.pory"
	waitmovement 0
	goto Rival_Scene03_1

Rival_Scene03_6:
# 285 "data/emeralbody_rivals/rival_scripts.pory"
	copyvar VAR_TEMP_A, VAR_EMERALBODY_RIVAL
	goto Rival_Scene03_5

Rival_Scene03_10:
# 289 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Scene03_HarperText
	goto Rival_Scene03_8

Rival_Scene03_11:
# 291 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Scene03_JaksonText
	goto Rival_Scene03_8

Rival_Scene03_12:
# 293 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Scene03_ReddText
	goto Rival_Scene03_8

Rival_Scene03_13:
# 295 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Scene03_SakuraText
	goto Rival_Scene03_8


Sakura_Town04::
# 354 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Sakura
# 355 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town04_SakuraText, MSGBOX_NPC
	return


Harper_Town04::
# 359 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Harper
# 360 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town04_HarperText, MSGBOX_NPC
	return


Redd_Town04::
# 364 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Redd
# 365 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town04_ReddText, MSGBOX_NPC
	return


Jakson_Town04::
# 369 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Jakson
# 370 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town04_JaksonText, MSGBOX_NPC
	return


Baron_Town04::
# 374 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Baron
# 375 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town04_BaronText, MSGBOX_NPC
	return


Sakura_Town05::
# 381 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Sakura
# 382 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town05_SakuraText, MSGBOX_NPC
	return


Harper_Town05::
# 386 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Harper
# 387 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town05_HarperText, MSGBOX_NPC
	return


Redd_Town05::
# 391 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Redd
# 392 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town05_ReddText, MSGBOX_NPC
	return


Jakson_Town05::
# 396 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Jakson
# 397 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town05_JaksonText, MSGBOX_NPC
	return


Baron_Town05::
# 401 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Baron
# 402 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town05_BaronText, MSGBOX_NPC
	return


Sakura_Town06::
# 408 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Sakura
# 409 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town06_SakuraText, MSGBOX_NPC
	return


Harper_Town06::
# 413 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Harper
# 414 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town06_HarperText, MSGBOX_NPC
	return


Redd_Town06::
# 418 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Redd
# 419 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town06_ReddText1, MSGBOX_NPC
# 420 "data/emeralbody_rivals/rival_scripts.pory"
	applymovement 5, Common_Movement_QuestionMark
# 421 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Redd
# 422 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town06_ReddText2, MSGBOX_NPC
	return


Jakson_Town06::
# 426 "data/emeralbody_rivals/rival_scripts.pory"
	goto_if_unset FLAG_RECEIVED_TUNING_FORK, Jakson_Town06_1
# 430 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Jakson
# 431 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town06_JaksonText, MSGBOX_NPC
	return

Jakson_Town06_1:
# 427 "data/emeralbody_rivals/rival_scripts.pory"
	call EventScript_JaksonGivesTuningFork
	return


Baron_Town06::
# 436 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Baron
# 437 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town06_BaronText, MSGBOX_NPC
	return


Sakura_Town07::
# 443 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Sakura
# 444 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town07_SakuraText, MSGBOX_NPC
	return


Harper_Town07::
# 448 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Harper
# 449 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town07_HarperText, MSGBOX_NPC
	return


Redd_Town07::
# 453 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Redd
# 454 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town07_ReddText, MSGBOX_NPC
	return


Jakson_Town07::
# 458 "data/emeralbody_rivals/rival_scripts.pory"
	goto_if_unset FLAG_RECEIVED_TUNING_FORK, Jakson_Town07_1
# 462 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Jakson
# 463 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town07_JaksonText, MSGBOX_NPC
	return

Jakson_Town07_1:
# 459 "data/emeralbody_rivals/rival_scripts.pory"
	call EventScript_JaksonGivesTuningFork
	return


Baron_Town07::
# 468 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Baron
# 469 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town07_BaronText, MSGBOX_NPC
	return


Sakura_Town08::
# 475 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Sakura
# 476 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town08_SakuraText, MSGBOX_NPC
	return


Harper_Town08::
# 480 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Harper
# 481 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town08_HarperText, MSGBOX_NPC
	return


Redd_Town08::
# 485 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Redd
# 486 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town08_ReddText, MSGBOX_NPC
	return


Jakson_Town08::
# 490 "data/emeralbody_rivals/rival_scripts.pory"
	goto_if_unset FLAG_RECEIVED_TUNING_FORK, Jakson_Town08_1
# 494 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Jakson
# 495 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town08_JaksonText, MSGBOX_NPC
	return

Jakson_Town08_1:
# 491 "data/emeralbody_rivals/rival_scripts.pory"
	call EventScript_JaksonGivesTuningFork
	return


Baron_Town08::
# 500 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Baron
# 501 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town08_BaronText, MSGBOX_NPC
	return


Sakura_Town09::
# 507 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Sakura
# 508 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town09_SakuraText, MSGBOX_NPC
	return


Harper_Town09::
# 512 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Harper
# 513 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town09_HarperText, MSGBOX_NPC
	return


Redd_Town09::
# 517 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Redd
# 518 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town09_ReddText, MSGBOX_NPC
	return


Jakson_Town09::
# 522 "data/emeralbody_rivals/rival_scripts.pory"
	goto_if_unset FLAG_RECEIVED_TUNING_FORK, Jakson_Town09_1
# 526 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Jakson
# 527 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town09_JaksonText, MSGBOX_NPC
	return

Jakson_Town09_1:
# 523 "data/emeralbody_rivals/rival_scripts.pory"
	call EventScript_JaksonGivesTuningFork
	return


Baron_Town09::
# 532 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Baron
# 533 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town09_BaronText, MSGBOX_NPC
	return


Sakura_Town10::
# 539 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Sakura
# 540 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town10_SakuraText, MSGBOX_NPC
	return


Harper_Town10::
# 544 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Harper
# 545 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town10_HarperText, MSGBOX_NPC
	return


Redd_Town10::
# 549 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Redd
# 550 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town10_ReddText, MSGBOX_NPC
	return


Jakson_Town10::
# 554 "data/emeralbody_rivals/rival_scripts.pory"
	goto_if_unset FLAG_RECEIVED_TUNING_FORK, Jakson_Town10_1
# 558 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Jakson
# 559 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town10_JaksonText, MSGBOX_NPC
	return

Jakson_Town10_1:
# 555 "data/emeralbody_rivals/rival_scripts.pory"
	call EventScript_JaksonGivesTuningFork
	return


Baron_Town10::
# 564 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Baron
# 565 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town10_BaronText, MSGBOX_NPC
	return


Sakura_Town11::
# 571 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Sakura
# 572 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town11_SakuraText, MSGBOX_NPC
	return


Harper_Town11::
# 576 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Harper
# 577 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town11_HarperText, MSGBOX_NPC
	return


Redd_Town11::
# 581 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Redd
# 582 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town11_ReddText, MSGBOX_NPC
	return


Jakson_Town11::
# 586 "data/emeralbody_rivals/rival_scripts.pory"
	goto_if_unset FLAG_RECEIVED_TUNING_FORK, Jakson_Town11_1
# 590 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Jakson
# 591 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town11_JaksonText, MSGBOX_NPC
	return

Jakson_Town11_1:
# 587 "data/emeralbody_rivals/rival_scripts.pory"
	call EventScript_JaksonGivesTuningFork
	return


Baron_Town11::
# 596 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Baron
# 597 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town11_BaronText, MSGBOX_NPC
	return


Sakura_Town12::
# 603 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Sakura
# 604 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town12_SakuraText, MSGBOX_NPC
	return


Harper_Town12::
# 608 "data/emeralbody_rivals/rival_scripts.pory"
	lock
# 609 "data/emeralbody_rivals/rival_scripts.pory"
	faceplayer
# 610 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Harper
# 611 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town12_HarperTextQ, MSGBOX_YESNO
# 612 "data/emeralbody_rivals/rival_scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Harper_Town12_2
# 616 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town12_HarperTextNo, MSGBOX_NPC
Harper_Town12_1:
# 618 "data/emeralbody_rivals/rival_scripts.pory"
	release
	return

Harper_Town12_2:
# 613 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town12_HarperTextYes, MSGBOX_NPC
	goto Harper_Town12_1


Redd_Town12::
# 622 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Redd
# 623 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town12_ReddText, MSGBOX_NPC
	return


Jakson_Town12::
# 627 "data/emeralbody_rivals/rival_scripts.pory"
	goto_if_unset FLAG_RECEIVED_TUNING_FORK, Jakson_Town12_1
# 631 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Jakson
# 632 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town12_JaksonText, MSGBOX_NPC
	return

Jakson_Town12_1:
# 628 "data/emeralbody_rivals/rival_scripts.pory"
	call EventScript_JaksonGivesTuningFork
	return


Baron_Town12::
# 637 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Baron
# 638 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town12_BaronText, MSGBOX_NPC
	return


Sakura_Town13::
# 644 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Sakura
# 645 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town13_SakuraText, MSGBOX_NPC
	return


Harper_Town13::
# 649 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Harper
# 650 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town13_HarperText, MSGBOX_NPC
	return


Redd_Town13::
# 654 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Redd
# 655 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town13_ReddText, MSGBOX_NPC
	return


Jakson_Town13::
# 659 "data/emeralbody_rivals/rival_scripts.pory"
	goto_if_unset FLAG_RECEIVED_TUNING_FORK, Jakson_Town13_1
# 663 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Jakson
# 664 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town13_JaksonText, MSGBOX_NPC
# 665 "data/emeralbody_rivals/rival_scripts.pory"
	closemessage
# 666 "data/emeralbody_rivals/rival_scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 667 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Jakson
# 668 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town13_JaksonTextAfter, MSGBOX_NPC
	return

Jakson_Town13_1:
# 660 "data/emeralbody_rivals/rival_scripts.pory"
	call EventScript_JaksonGivesTuningFork
	return


Baron_Town13::
# 673 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Baron
# 674 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town13_BaronText, MSGBOX_NPC
	return


Sakura_Town14::
# 680 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Sakura
# 681 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town14_SakuraText, MSGBOX_NPC
	return


Harper_Town14::
# 685 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Harper
# 686 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town14_HarperText, MSGBOX_NPC
	return


Redd_Town14::
# 690 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Redd
# 691 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town14_ReddText, MSGBOX_NPC
	return


Jakson_Town14::
# 695 "data/emeralbody_rivals/rival_scripts.pory"
	goto_if_unset FLAG_RECEIVED_TUNING_FORK, Jakson_Town14_1
# 699 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Jakson
# 700 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town14_JaksonText, MSGBOX_NPC
	return

Jakson_Town14_1:
# 696 "data/emeralbody_rivals/rival_scripts.pory"
	call EventScript_JaksonGivesTuningFork
	return


Baron_Town14::
# 705 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Baron
# 706 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town14_BaronText, MSGBOX_NPC
	return


Sakura_Town15::
# 712 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Sakura
# 713 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town15_SakuraText, MSGBOX_NPC
	return


Harper_Town15::
# 717 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Harper
# 718 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town15_HarperText, MSGBOX_NPC
	return


Redd_Town15::
# 722 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Redd
# 723 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town15_ReddText, MSGBOX_NPC
	return


Jakson_Town15::
# 727 "data/emeralbody_rivals/rival_scripts.pory"
	goto_if_unset FLAG_RECEIVED_TUNING_FORK, Jakson_Town15_1
# 731 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Jakson
# 732 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town15_JaksonText, MSGBOX_NPC
	return

Jakson_Town15_1:
# 728 "data/emeralbody_rivals/rival_scripts.pory"
	call EventScript_JaksonGivesTuningFork
	return


Baron_Town15::
# 737 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Baron
# 738 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town15_BaronText, MSGBOX_NPC
	return


Sakura_Town16::
# 744 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Sakura
# 745 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town16_SakuraText, MSGBOX_NPC
	return


Harper_Town16::
# 749 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Harper
# 750 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town16_HarperText, MSGBOX_NPC
	return


Redd_Town16::
# 754 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Redd
# 755 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town16_ReddText, MSGBOX_NPC
	return


Jakson_Town16::
# 759 "data/emeralbody_rivals/rival_scripts.pory"
	goto_if_unset FLAG_RECEIVED_TUNING_FORK, Jakson_Town16_1
# 763 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Jakson
# 764 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town16_JaksonText, MSGBOX_NPC
	return

Jakson_Town16_1:
# 760 "data/emeralbody_rivals/rival_scripts.pory"
	call EventScript_JaksonGivesTuningFork
	return


Baron_Town16::
# 769 "data/emeralbody_rivals/rival_scripts.pory"
	call GetBaronsName
# 770 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town16_BaronText, MSGBOX_NPC
	return


Sakura_Town18::
# 776 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Sakura
# 777 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town18_SakuraText, MSGBOX_NPC
	return


Harper_Town18::
# 781 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Harper
# 782 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town18_HarperText, MSGBOX_NPC
	return


Redd_Town18::
# 786 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Redd
# 787 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town18_ReddText, MSGBOX_NPC
	return


Jakson_Town18::
# 791 "data/emeralbody_rivals/rival_scripts.pory"
	goto_if_unset FLAG_RECEIVED_TUNING_FORK, Jakson_Town18_1
# 795 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Jakson
# 796 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town18_JaksonText, MSGBOX_NPC
	return

Jakson_Town18_1:
# 792 "data/emeralbody_rivals/rival_scripts.pory"
	call EventScript_JaksonGivesTuningFork
	return


Baron_Town18::
# 801 "data/emeralbody_rivals/rival_scripts.pory"
	call GetBaronsName
# 802 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town18_BaronText, MSGBOX_NPC
	return


Trigger_JaksonGivesTuningFork::
# 806 "data/emeralbody_rivals/rival_scripts.pory"
	goto_if_unset FLAG_RECEIVED_TUNING_FORK, Trigger_JaksonGivesTuningFork_2
Trigger_JaksonGivesTuningFork_1:
# 830 "data/emeralbody_rivals/rival_scripts.pory"
	setvar VAR_TEMP_0, 1
# 831 "data/emeralbody_rivals/rival_scripts.pory"
	release
	return

Trigger_JaksonGivesTuningFork_2:
# 807 "data/emeralbody_rivals/rival_scripts.pory"
	getobjectfacingdirection LOCALID_PLAYER, VAR_TEMP_1
# 808 "data/emeralbody_rivals/rival_scripts.pory"
	compare VAR_TEMP_1, DIR_NORTH
	goto_if_eq Trigger_JaksonGivesTuningFork_4
	goto Trigger_JaksonGivesTuningFork_1

Trigger_JaksonGivesTuningFork_4:
# 809 "data/emeralbody_rivals/rival_scripts.pory"
	addobject JAKSON_MAUVILLE
# 810 "data/emeralbody_rivals/rival_scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 811 "data/emeralbody_rivals/rival_scripts.pory"
	switch VAR_TEMP_1
# 812 "data/emeralbody_rivals/rival_scripts.pory"
	case 26, Trigger_JaksonGivesTuningFork_8
# 814 "data/emeralbody_rivals/rival_scripts.pory"
	case 27, Trigger_JaksonGivesTuningFork_9
# 816 "data/emeralbody_rivals/rival_scripts.pory"
	case 29, Trigger_JaksonGivesTuningFork_10
# 818 "data/emeralbody_rivals/rival_scripts.pory"
	case 30, Trigger_JaksonGivesTuningFork_11
Trigger_JaksonGivesTuningFork_6:
# 822 "data/emeralbody_rivals/rival_scripts.pory"
	applymovement JAKSON_MAUVILLE, Common_Movement_WalkDown5
# 823 "data/emeralbody_rivals/rival_scripts.pory"
	waitmovement 0
# 824 "data/emeralbody_rivals/rival_scripts.pory"
	call EventScript_JaksonGivesTuningFork
# 825 "data/emeralbody_rivals/rival_scripts.pory"
	applymovement JAKSON_MAUVILLE, Common_Movement_WalkUp5
# 826 "data/emeralbody_rivals/rival_scripts.pory"
	waitmovement 0
# 827 "data/emeralbody_rivals/rival_scripts.pory"
	removeobject JAKSON_MAUVILLE
	goto Trigger_JaksonGivesTuningFork_1

Trigger_JaksonGivesTuningFork_8:
# 813 "data/emeralbody_rivals/rival_scripts.pory"
	setobjectxy JAKSON_MAUVILLE, 26, 8
	goto Trigger_JaksonGivesTuningFork_6

Trigger_JaksonGivesTuningFork_9:
# 815 "data/emeralbody_rivals/rival_scripts.pory"
	setobjectxy JAKSON_MAUVILLE, 27, 8
	goto Trigger_JaksonGivesTuningFork_6

Trigger_JaksonGivesTuningFork_10:
# 817 "data/emeralbody_rivals/rival_scripts.pory"
	setobjectxy JAKSON_MAUVILLE, 29, 8
	goto Trigger_JaksonGivesTuningFork_6

Trigger_JaksonGivesTuningFork_11:
# 819 "data/emeralbody_rivals/rival_scripts.pory"
	setobjectxy JAKSON_MAUVILLE, 30, 8
	goto Trigger_JaksonGivesTuningFork_6


EventScript_JaksonGivesTuningFork::
# 835 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Jakson
# 836 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox EventScript_JaksonGivesTuningFork_Text_0
# 844 "data/emeralbody_rivals/rival_scripts.pory"
	closemessage
# 845 "data/emeralbody_rivals/rival_scripts.pory"
	giveitem ITEM_TUNING_FORK
# 846 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Jakson
# 847 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox EventScript_JaksonGivesTuningFork_Text_1
# 855 "data/emeralbody_rivals/rival_scripts.pory"
	closemessage
# 856 "data/emeralbody_rivals/rival_scripts.pory"
	call EventScript_TuningForkRetroactiveUpdates
# 857 "data/emeralbody_rivals/rival_scripts.pory"
	setflag FLAG_RECEIVED_TUNING_FORK
	return


EventScript_TuningForkRetroactiveUpdates::
# 861 "data/emeralbody_rivals/rival_scripts.pory"
	goto_if_set FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY, EventScript_TuningForkRetroactiveUpdates_2
EventScript_TuningForkRetroactiveUpdates_1:
# 864 "data/emeralbody_rivals/rival_scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, EventScript_TuningForkRetroactiveUpdates_5
EventScript_TuningForkRetroactiveUpdates_4:
# 867 "data/emeralbody_rivals/rival_scripts.pory"
	compare VAR_SKY_PILLAR_STATE, 2
	goto_if_ge EventScript_TuningForkRetroactiveUpdates_8
EventScript_TuningForkRetroactiveUpdates_7:
# 870 "data/emeralbody_rivals/rival_scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 21
	goto_if_ge EventScript_TuningForkRetroactiveUpdates_11
EventScript_TuningForkRetroactiveUpdates_10:
# 873 "data/emeralbody_rivals/rival_scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 51
	goto_if_ge EventScript_TuningForkRetroactiveUpdates_14
EventScript_TuningForkRetroactiveUpdates_13:
# 876 "data/emeralbody_rivals/rival_scripts.pory"
	checktrainerflag TRAINER_WILD_POKEMON_IG_1
	goto_if 1, EventScript_TuningForkRetroactiveUpdates_16
	return

EventScript_TuningForkRetroactiveUpdates_2:
# 862 "data/emeralbody_rivals/rival_scripts.pory"
	checkifmusicunlocked 0, 1
	goto EventScript_TuningForkRetroactiveUpdates_1

EventScript_TuningForkRetroactiveUpdates_5:
# 865 "data/emeralbody_rivals/rival_scripts.pory"
	checkifmusicunlocked 1, 1
	goto EventScript_TuningForkRetroactiveUpdates_4

EventScript_TuningForkRetroactiveUpdates_8:
# 868 "data/emeralbody_rivals/rival_scripts.pory"
	checkifmusicunlocked 2, 1
	goto EventScript_TuningForkRetroactiveUpdates_7

EventScript_TuningForkRetroactiveUpdates_11:
# 871 "data/emeralbody_rivals/rival_scripts.pory"
	checkifmusicunlocked 3, 1
	goto EventScript_TuningForkRetroactiveUpdates_10

EventScript_TuningForkRetroactiveUpdates_14:
# 874 "data/emeralbody_rivals/rival_scripts.pory"
	checkifmusicunlocked 4, 1
	goto EventScript_TuningForkRetroactiveUpdates_13

EventScript_TuningForkRetroactiveUpdates_16:
# 877 "data/emeralbody_rivals/rival_scripts.pory"
	checkifmusicunlocked 6, 1
	return


Baron_Town01_Text_0:
# 110 "data/emeralbody_rivals/rival_scripts.pory"
	.string "Left foot… Right foot…\nLeft foot… Right foot…$"

Rival_Scene03_Text_0:
# 322 "data/emeralbody_rivals/rival_scripts.pory"
	.string "You exchanged PokéNav info with your\n"
	.string "friends.$"

EventScript_JaksonGivesTuningFork_Text_0:
# 836 "data/emeralbody_rivals/rival_scripts.pory"
	.string "Oh, hey, {PLAYER}.\n"
	.string "I was just looking for you.\p"
	.string "I just finished developing a new item.\n"
	.string "I've handed it out to all of the others\l"
	.string "already, so you were the last one on my\l"
	.string "list.\p"
	.string "This'll let you pick the music that you'd\n"
	.string "like to hear in battle more directly.$"

EventScript_JaksonGivesTuningFork_Text_1:
# 847 "data/emeralbody_rivals/rival_scripts.pory"
	.string "It's a key item, so just use it from your\n"
	.string "bag and follow the menu that comes up.\p"
	.string "Oh! And more music will unlock as you\n"
	.string "play through the game.\p"
	.string "Of course, you can just ignore it if you\n"
	.string "like the default battle music.\p"
	.string "I hope you all like it.\n"
	.string "Take care, {PLAYER}!$"
