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
	speakername CommonText_Jakson
# 427 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town06_JaksonText, MSGBOX_NPC
	return


Baron_Town06::
# 431 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Baron
# 432 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town06_BaronText, MSGBOX_NPC
	return


Sakura_Town07::
# 438 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Sakura
# 439 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town07_SakuraText, MSGBOX_NPC
	return


Harper_Town07::
# 443 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Harper
# 444 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town07_HarperText, MSGBOX_NPC
	return


Redd_Town07::
# 448 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Redd
# 449 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town07_ReddText, MSGBOX_NPC
	return


Jakson_Town07::
# 453 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Jakson
# 454 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town07_JaksonText, MSGBOX_NPC
	return


Baron_Town07::
# 458 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Baron
# 459 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town07_BaronText, MSGBOX_NPC
	return


Sakura_Town08::
# 465 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Sakura
# 466 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town08_SakuraText, MSGBOX_NPC
	return


Harper_Town08::
# 470 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Harper
# 471 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town08_HarperText, MSGBOX_NPC
	return


Redd_Town08::
# 475 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Redd
# 476 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town08_ReddText, MSGBOX_NPC
	return


Jakson_Town08::
# 480 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Jakson
# 481 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town08_JaksonText, MSGBOX_NPC
	return


Baron_Town08::
# 485 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Baron
# 486 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town08_BaronText, MSGBOX_NPC
	return


Sakura_Town09::
# 492 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Sakura
# 493 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town09_SakuraText, MSGBOX_NPC
	return


Harper_Town09::
# 497 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Harper
# 498 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town09_HarperText, MSGBOX_NPC
	return


Redd_Town09::
# 502 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Redd
# 503 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town09_ReddText, MSGBOX_NPC
	return


Jakson_Town09::
# 507 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Jakson
# 508 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town09_JaksonText, MSGBOX_NPC
	return


Baron_Town09::
# 512 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Baron
# 513 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town09_BaronText, MSGBOX_NPC
	return


Sakura_Town10::
# 519 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Sakura
# 520 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town10_SakuraText, MSGBOX_NPC
	return


Harper_Town10::
# 524 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Harper
# 525 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town10_HarperText, MSGBOX_NPC
	return


Redd_Town10::
# 529 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Redd
# 530 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town10_ReddText, MSGBOX_NPC
	return


Jakson_Town10::
# 534 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Jakson
# 535 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town10_JaksonText, MSGBOX_NPC
	return


Baron_Town10::
# 539 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Baron
# 540 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town10_BaronText, MSGBOX_NPC
	return


Sakura_Town11::
# 546 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Sakura
# 547 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town11_SakuraText, MSGBOX_NPC
	return


Harper_Town11::
# 551 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Harper
# 552 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town11_HarperText, MSGBOX_NPC
	return


Redd_Town11::
# 556 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Redd
# 557 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town11_ReddText, MSGBOX_NPC
	return


Jakson_Town11::
# 561 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Jakson
# 562 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town11_JaksonText, MSGBOX_NPC
	return


Baron_Town11::
# 566 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Baron
# 567 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town11_BaronText, MSGBOX_NPC
	return


Sakura_Town12::
# 573 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Sakura
# 574 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town12_SakuraText, MSGBOX_NPC
	return


Harper_Town12::
# 578 "data/emeralbody_rivals/rival_scripts.pory"
	lock
# 579 "data/emeralbody_rivals/rival_scripts.pory"
	faceplayer
# 580 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Harper
# 581 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town12_HarperTextQ, MSGBOX_YESNO
# 582 "data/emeralbody_rivals/rival_scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Harper_Town12_2
# 586 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town12_HarperTextNo, MSGBOX_NPC
Harper_Town12_1:
# 588 "data/emeralbody_rivals/rival_scripts.pory"
	release
	return

Harper_Town12_2:
# 583 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town12_HarperTextYes, MSGBOX_NPC
	goto Harper_Town12_1


Redd_Town12::
# 592 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Redd
# 593 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town12_ReddText, MSGBOX_NPC
	return


Jakson_Town12::
# 597 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Jakson
# 598 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town12_JaksonText, MSGBOX_NPC
	return


Baron_Town12::
# 602 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Baron
# 603 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town12_BaronText, MSGBOX_NPC
	return


Sakura_Town13::
# 609 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Sakura
# 610 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town13_SakuraText, MSGBOX_NPC
	return


Harper_Town13::
# 614 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Harper
# 615 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town13_HarperText, MSGBOX_NPC
	return


Redd_Town13::
# 619 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Redd
# 620 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town13_ReddText, MSGBOX_NPC
	return


Jakson_Town13::
# 624 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Jakson
# 625 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town13_JaksonText, MSGBOX_NPC
# 626 "data/emeralbody_rivals/rival_scripts.pory"
	closemessage
# 627 "data/emeralbody_rivals/rival_scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 628 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Jakson
# 629 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town13_JaksonTextAfter, MSGBOX_NPC
	return


Baron_Town13::
# 633 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Baron
# 634 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town13_BaronText, MSGBOX_NPC
	return


Sakura_Town14::
# 640 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Sakura
# 641 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town14_SakuraText, MSGBOX_NPC
	return


Harper_Town14::
# 645 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Harper
# 646 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town14_HarperText, MSGBOX_NPC
	return


Redd_Town14::
# 650 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Redd
# 651 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town14_ReddText, MSGBOX_NPC
	return


Jakson_Town14::
# 655 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Jakson
# 656 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town14_JaksonText, MSGBOX_NPC
	return


Baron_Town14::
# 660 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Baron
# 661 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town14_BaronText, MSGBOX_NPC
	return


Sakura_Town15::
# 667 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Sakura
# 668 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town15_SakuraText, MSGBOX_NPC
	return


Harper_Town15::
# 672 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Harper
# 673 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town15_HarperText, MSGBOX_NPC
	return


Redd_Town15::
# 677 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Redd
# 678 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town15_ReddText, MSGBOX_NPC
	return


Jakson_Town15::
# 682 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Jakson
# 683 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town15_JaksonText, MSGBOX_NPC
	return


Baron_Town15::
# 687 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Baron
# 688 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town15_BaronText, MSGBOX_NPC
	return


Sakura_Town16::
# 694 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Sakura
# 695 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town16_SakuraText, MSGBOX_NPC
	return


Harper_Town16::
# 699 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Harper
# 700 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town16_HarperText, MSGBOX_NPC
	return


Redd_Town16::
# 704 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Redd
# 705 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town16_ReddText, MSGBOX_NPC
	return


Jakson_Town16::
# 709 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Jakson
# 710 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town16_JaksonText, MSGBOX_NPC
	return


Baron_Town16::
# 714 "data/emeralbody_rivals/rival_scripts.pory"
	call GetBaronsName
# 715 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town16_BaronText, MSGBOX_NPC
	return


Sakura_Town18::
# 721 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Sakura
# 722 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town18_SakuraText, MSGBOX_NPC
	return


Harper_Town18::
# 726 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Harper
# 727 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town18_HarperText, MSGBOX_NPC
	return


Redd_Town18::
# 731 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Redd
# 732 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town18_ReddText, MSGBOX_NPC
	return


Jakson_Town18::
# 736 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Jakson
# 737 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town18_JaksonText, MSGBOX_NPC
	return


Baron_Town18::
# 741 "data/emeralbody_rivals/rival_scripts.pory"
	call GetBaronsName
# 742 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town18_BaronText, MSGBOX_NPC
	return


Baron_Town01_Text_0:
# 110 "data/emeralbody_rivals/rival_scripts.pory"
	.string "Left foot… Right foot…\nLeft foot… Right foot…$"

Rival_Scene03_Text_0:
# 322 "data/emeralbody_rivals/rival_scripts.pory"
	.string "You exchanged PokéNav info with your\n"
	.string "friends.$"
