Rival_Scene01::
# 25 "data/emeralbody_rivals/rival_scripts.pory"
	compare VAR_BIRCH_LAB_STATE, 3
	goto_if_eq Rival_Scene01_2
Rival_Scene01_1:
# 63 "data/emeralbody_rivals/rival_scripts.pory"
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
	switch VAR_EMERALBODY_RIVAL
# 43 "data/emeralbody_rivals/rival_scripts.pory"
	case 1, Rival_Scene01_10
# 45 "data/emeralbody_rivals/rival_scripts.pory"
	case 2, Rival_Scene01_11
# 47 "data/emeralbody_rivals/rival_scripts.pory"
	case 3, Rival_Scene01_12
# 49 "data/emeralbody_rivals/rival_scripts.pory"
	case 4, Rival_Scene01_13
# 52 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Scene01_BaronText
Rival_Scene01_8:
# 54 "data/emeralbody_rivals/rival_scripts.pory"
	closemessage
# 55 "data/emeralbody_rivals/rival_scripts.pory"
	setvar VAR_EMERALBODY_RIVAL_STATE, 1
# 56 "data/emeralbody_rivals/rival_scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 57 "data/emeralbody_rivals/rival_scripts.pory"
	fadedefaultbgm
# 58 "data/emeralbody_rivals/rival_scripts.pory"
	removeobject RIVAL_LITTLEROOT
# 59 "data/emeralbody_rivals/rival_scripts.pory"
	clearflag FLAG_TEMP_1
# 60 "data/emeralbody_rivals/rival_scripts.pory"
	addobject BARON_LITTLEROOT
# 61 "data/emeralbody_rivals/rival_scripts.pory"
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

Rival_Scene01_10:
# 44 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Scene01_HarperText
	goto Rival_Scene01_8

Rival_Scene01_11:
# 46 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Scene01_JaksonText
	goto Rival_Scene01_8

Rival_Scene01_12:
# 48 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Scene01_ReddText
	goto Rival_Scene01_8

Rival_Scene01_13:
# 50 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Scene01_SakuraText
	goto Rival_Scene01_8


# 66 "data/emeralbody_rivals/rival_scripts.pory"
Rival_Scene01_Move1:
# 67 "data/emeralbody_rivals/rival_scripts.pory"
	emote_exclamation_mark
# 68 "data/emeralbody_rivals/rival_scripts.pory"
	delay_16
# 68 "data/emeralbody_rivals/rival_scripts.pory"
	delay_16
# 68 "data/emeralbody_rivals/rival_scripts.pory"
	delay_16
# 68 "data/emeralbody_rivals/rival_scripts.pory"
	delay_16
# 69 "data/emeralbody_rivals/rival_scripts.pory"
	walk_left
# 69 "data/emeralbody_rivals/rival_scripts.pory"
	walk_left
	step_end

# 72 "data/emeralbody_rivals/rival_scripts.pory"
Rival_Scene01_Move2:
# 73 "data/emeralbody_rivals/rival_scripts.pory"
	walk_fast_down
# 73 "data/emeralbody_rivals/rival_scripts.pory"
	walk_fast_down
# 73 "data/emeralbody_rivals/rival_scripts.pory"
	walk_fast_down
# 73 "data/emeralbody_rivals/rival_scripts.pory"
	walk_fast_down
# 73 "data/emeralbody_rivals/rival_scripts.pory"
	walk_fast_down
# 73 "data/emeralbody_rivals/rival_scripts.pory"
	walk_fast_down
# 73 "data/emeralbody_rivals/rival_scripts.pory"
	walk_fast_down
	step_end

Sakura_Town01::
# 79 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Sakura
# 80 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town01_SakuraText, MSGBOX_NPC
	return


Jakson_Town01::
# 84 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Jakson
# 85 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town01_JaksonText, MSGBOX_NPC
	return


Redd_Town01::
# 89 "data/emeralbody_rivals/rival_scripts.pory"
	lock
# 90 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Redd
# 91 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town01_ReddText
# 92 "data/emeralbody_rivals/rival_scripts.pory"
	release
	return


Harper_Town01::
# 96 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Harper
# 97 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town01_HarperText, MSGBOX_NPC
	return


Baron_Town01::
# 101 "data/emeralbody_rivals/rival_scripts.pory"
	lock
# 102 "data/emeralbody_rivals/rival_scripts.pory"
	applymovement BARON_LITTLEROOT, Baron_Town01_Move
# 103 "data/emeralbody_rivals/rival_scripts.pory"
	waitmovement 0
# 104 "data/emeralbody_rivals/rival_scripts.pory"
	applymovement BARON_LITTLEROOT, Baron_Town01_Move
# 105 "data/emeralbody_rivals/rival_scripts.pory"
	waitmovement 0
# 106 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Baron
# 107 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Baron_Town01_Text_0
# 108 "data/emeralbody_rivals/rival_scripts.pory"
	closemessage
# 109 "data/emeralbody_rivals/rival_scripts.pory"
	faceplayer
# 110 "data/emeralbody_rivals/rival_scripts.pory"
	playse SE_PIN
# 111 "data/emeralbody_rivals/rival_scripts.pory"
	applymovement BARON_LITTLEROOT, Common_Movement_ExclamationMark
# 112 "data/emeralbody_rivals/rival_scripts.pory"
	waitmovement 0
# 113 "data/emeralbody_rivals/rival_scripts.pory"
	delay 60
# 114 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Baron
# 115 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town01_BaronText
# 116 "data/emeralbody_rivals/rival_scripts.pory"
	applymovement BARON_LITTLEROOT, Common_Movement_FaceLeft
# 117 "data/emeralbody_rivals/rival_scripts.pory"
	waitmovement 0
# 118 "data/emeralbody_rivals/rival_scripts.pory"
	release
	return


# 121 "data/emeralbody_rivals/rival_scripts.pory"
Baron_Town01_Move:
# 122 "data/emeralbody_rivals/rival_scripts.pory"
	walk_in_place_left
# 123 "data/emeralbody_rivals/rival_scripts.pory"
	delay_16
	step_end

Rival_Scene02::
# 129 "data/emeralbody_rivals/rival_scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 1
	goto_if_eq Rival_Scene02_2
Rival_Scene02_1:
# 197 "data/emeralbody_rivals/rival_scripts.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 198 "data/emeralbody_rivals/rival_scripts.pory"
	release
	return

Rival_Scene02_2:
# 130 "data/emeralbody_rivals/rival_scripts.pory"
	lock
# 131 "data/emeralbody_rivals/rival_scripts.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 132 "data/emeralbody_rivals/rival_scripts.pory"
	call Common_EventScript_PlayEmRivalBgm
# 133 "data/emeralbody_rivals/rival_scripts.pory"
	playse SE_PIN
# 134 "data/emeralbody_rivals/rival_scripts.pory"
	applymovement RIVAL_PETALBURG, Common_Movement_ExclamationMark
# 135 "data/emeralbody_rivals/rival_scripts.pory"
	waitmovement 0
# 136 "data/emeralbody_rivals/rival_scripts.pory"
	delay 60
# 137 "data/emeralbody_rivals/rival_scripts.pory"
	applymovement RIVAL_PETALBURG, Common_Movement_WalkRight2
# 138 "data/emeralbody_rivals/rival_scripts.pory"
	waitmovement 0
# 139 "data/emeralbody_rivals/rival_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 140 "data/emeralbody_rivals/rival_scripts.pory"
	switch VAR_TEMP_1
# 141 "data/emeralbody_rivals/rival_scripts.pory"
	case 16, Rival_Scene02_6
# 144 "data/emeralbody_rivals/rival_scripts.pory"
	case 17, Rival_Scene02_7
# 147 "data/emeralbody_rivals/rival_scripts.pory"
	case 19, Rival_Scene02_8
Rival_Scene02_4:
# 152 "data/emeralbody_rivals/rival_scripts.pory"
	applymovement RIVAL_PETALBURG, Common_Movement_WalkRight2
# 153 "data/emeralbody_rivals/rival_scripts.pory"
	waitmovement 0
# 154 "data/emeralbody_rivals/rival_scripts.pory"
	call GetRivalForNameBox
# 155 "data/emeralbody_rivals/rival_scripts.pory"
	call GetRivalMusic
# 156 "data/emeralbody_rivals/rival_scripts.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 157 "data/emeralbody_rivals/rival_scripts.pory"
	switch VAR_EMERALBODY_RIVAL
# 158 "data/emeralbody_rivals/rival_scripts.pory"
	case 1, Rival_Scene02_11
# 163 "data/emeralbody_rivals/rival_scripts.pory"
	case 2, Rival_Scene02_12
# 168 "data/emeralbody_rivals/rival_scripts.pory"
	case 3, Rival_Scene02_13
# 173 "data/emeralbody_rivals/rival_scripts.pory"
	case 4, Rival_Scene02_14
# 179 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Scene02_BaronText_PreBattle
# 180 "data/emeralbody_rivals/rival_scripts.pory"
	trainerbattle_no_intro TRAINER_BARON_1, Scene02_BaronText_BattleVictory
# 181 "data/emeralbody_rivals/rival_scripts.pory"
	call GetRivalForNameBox
# 182 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Scene02_BaronText_PostBattle
Rival_Scene02_9:
# 184 "data/emeralbody_rivals/rival_scripts.pory"
	closemessage
# 185 "data/emeralbody_rivals/rival_scripts.pory"
	setvar VAR_EMERALBODY_RIVAL_STATE, 2
# 186 "data/emeralbody_rivals/rival_scripts.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 187 "data/emeralbody_rivals/rival_scripts.pory"
	clearflag FLAG_TEMP_2
# 188 "data/emeralbody_rivals/rival_scripts.pory"
	fadedefaultbgm
# 189 "data/emeralbody_rivals/rival_scripts.pory"
	compare VAR_TEMP_1, 16
	goto_if_eq Rival_Scene02_17
Rival_Scene02_16:
# 193 "data/emeralbody_rivals/rival_scripts.pory"
	applymovement RIVAL_PETALBURG, Common_Movement_WalkLeft7
# 194 "data/emeralbody_rivals/rival_scripts.pory"
	waitmovement 0
# 195 "data/emeralbody_rivals/rival_scripts.pory"
	removeobject RIVAL_PETALBURG
	goto Rival_Scene02_1

Rival_Scene02_6:
# 142 "data/emeralbody_rivals/rival_scripts.pory"
	applymovement RIVAL_PETALBURG, Common_Movement_WalkUp2
# 143 "data/emeralbody_rivals/rival_scripts.pory"
	waitmovement 0
	goto Rival_Scene02_4

Rival_Scene02_7:
# 145 "data/emeralbody_rivals/rival_scripts.pory"
	applymovement RIVAL_PETALBURG, Common_Movement_WalkUp
# 146 "data/emeralbody_rivals/rival_scripts.pory"
	waitmovement 0
	goto Rival_Scene02_4

Rival_Scene02_8:
# 148 "data/emeralbody_rivals/rival_scripts.pory"
	applymovement RIVAL_PETALBURG, Common_Movement_WalkDown
# 149 "data/emeralbody_rivals/rival_scripts.pory"
	waitmovement 0
	goto Rival_Scene02_4

Rival_Scene02_11:
# 159 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Scene02_HarperText_PreBattle
# 160 "data/emeralbody_rivals/rival_scripts.pory"
	trainerbattle_no_intro TRAINER_HARPER_1, Scene02_HarperText_BattleVictory
# 161 "data/emeralbody_rivals/rival_scripts.pory"
	call GetRivalForNameBox
# 162 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Scene02_HarperText_PostBattle
	goto Rival_Scene02_9

Rival_Scene02_12:
# 164 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Scene02_JaksonText_PreBattle
# 165 "data/emeralbody_rivals/rival_scripts.pory"
	trainerbattle_no_intro TRAINER_JAKSON_1, Scene02_JaksonText_BattleVictory
# 166 "data/emeralbody_rivals/rival_scripts.pory"
	call GetRivalForNameBox
# 167 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Scene02_JaksonText_PostBattle
	goto Rival_Scene02_9

Rival_Scene02_13:
# 169 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Scene02_ReddText_PreBattle
# 170 "data/emeralbody_rivals/rival_scripts.pory"
	trainerbattle_no_intro TRAINER_REDD_1, Scene02_ReddText_BattleVictory
# 171 "data/emeralbody_rivals/rival_scripts.pory"
	call GetRivalForNameBox
# 172 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Scene02_ReddText_PostBattle
	goto Rival_Scene02_9

Rival_Scene02_14:
# 174 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Scene02_SakuraText_PreBattle
# 175 "data/emeralbody_rivals/rival_scripts.pory"
	trainerbattle_no_intro TRAINER_SAKURA_1, Scene02_SakuraText_BattleVictory
# 176 "data/emeralbody_rivals/rival_scripts.pory"
	call GetRivalForNameBox
# 177 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Scene02_SakuraText_PostBattle
	goto Rival_Scene02_9

Rival_Scene02_17:
# 190 "data/emeralbody_rivals/rival_scripts.pory"
	applymovement RIVAL_PETALBURG, Common_Movement_WalkDown
# 191 "data/emeralbody_rivals/rival_scripts.pory"
	waitmovement 0
	goto Rival_Scene02_16


Sakura_Town02::
# 204 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Sakura
# 205 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town02_SakuraText, MSGBOX_NPC
	return


Harper_Town02::
# 209 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Harper
# 210 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town02_HarperText, MSGBOX_NPC
	return


Redd_Town02::
# 214 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Redd
# 215 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town02_ReddText, MSGBOX_NPC
	return


Baron_Town02::
# 219 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Baron
# 220 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town02_BaronText, MSGBOX_NPC
	return


Jakson_Town02::
# 224 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Jakson
# 225 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town02_JaksonText, MSGBOX_NPC
	return


Sakura_Town03::
# 231 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Sakura
# 232 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town03_SakuraText, MSGBOX_NPC
	return


Harper_Town03::
# 236 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Harper
# 237 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town03_HarperText, MSGBOX_NPC
	return


Redd_Town03::
# 241 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Redd
# 242 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town03_ReddText, MSGBOX_NPC
	return


Jakson_Town03::
# 246 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Jakson
# 247 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town03_JaksonText, MSGBOX_NPC
	return


Baron_Town03::
# 251 "data/emeralbody_rivals/rival_scripts.pory"
	lock
# 252 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Baron
# 253 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town03_BaronText1
# 254 "data/emeralbody_rivals/rival_scripts.pory"
	faceplayer
# 255 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town03_BaronText2
# 256 "data/emeralbody_rivals/rival_scripts.pory"
	release
	return


Rival_Scene03::
# 262 "data/emeralbody_rivals/rival_scripts.pory"
	delay 100
# 263 "data/emeralbody_rivals/rival_scripts.pory"
	call Common_EventScript_PlayEmRivalBgm
# 264 "data/emeralbody_rivals/rival_scripts.pory"
	addobject RIVAL_RUSTBORO
# 265 "data/emeralbody_rivals/rival_scripts.pory"
	setobjectxy RIVAL_RUSTBORO, 20, 15
# 266 "data/emeralbody_rivals/rival_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 267 "data/emeralbody_rivals/rival_scripts.pory"
	switch VAR_TEMP_1
# 268 "data/emeralbody_rivals/rival_scripts.pory"
	case 21, Rival_Scene03_3
# 272 "data/emeralbody_rivals/rival_scripts.pory"
	applymovement RIVAL_RUSTBORO, Common_Movement_WalkDown7
# 273 "data/emeralbody_rivals/rival_scripts.pory"
	waitmovement 0
Rival_Scene03_1:
# 275 "data/emeralbody_rivals/rival_scripts.pory"
	applymovement RIVAL_RUSTBORO, Common_Movement_WalkLeft2
# 276 "data/emeralbody_rivals/rival_scripts.pory"
	waitmovement 0
# 277 "data/emeralbody_rivals/rival_scripts.pory"
	call GetRivalForNameBox
# 278 "data/emeralbody_rivals/rival_scripts.pory"
	switch VAR_EMERALBODY_RIVAL
# 279 "data/emeralbody_rivals/rival_scripts.pory"
	case 1, Rival_Scene03_7
# 281 "data/emeralbody_rivals/rival_scripts.pory"
	case 2, Rival_Scene03_8
# 283 "data/emeralbody_rivals/rival_scripts.pory"
	case 3, Rival_Scene03_9
# 285 "data/emeralbody_rivals/rival_scripts.pory"
	case 4, Rival_Scene03_10
# 288 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Scene03_BaronText
Rival_Scene03_5:
# 290 "data/emeralbody_rivals/rival_scripts.pory"
	closemessage
# 291 "data/emeralbody_rivals/rival_scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 292 "data/emeralbody_rivals/rival_scripts.pory"
	setobjectxy LOCALID_PLAYER, 11, 19
# 293 "data/emeralbody_rivals/rival_scripts.pory"
	setvar VAR_0x8004, 11
# 294 "data/emeralbody_rivals/rival_scripts.pory"
	setvar VAR_0x8005, 19
# 295 "data/emeralbody_rivals/rival_scripts.pory"
	special TeleportCamera
# 296 "data/emeralbody_rivals/rival_scripts.pory"
	addobject REDD_RUSTBORO
# 297 "data/emeralbody_rivals/rival_scripts.pory"
	addobject SAKURA_RUSTBORO
# 298 "data/emeralbody_rivals/rival_scripts.pory"
	addobject BARON_RUSTBORO
# 299 "data/emeralbody_rivals/rival_scripts.pory"
	addobject HARPER_RUSTBORO
# 300 "data/emeralbody_rivals/rival_scripts.pory"
	addobject JAKSON_RUSTBORO
# 301 "data/emeralbody_rivals/rival_scripts.pory"
	applymovement SAKURA_RUSTBORO, Common_Movement_FaceDown
# 302 "data/emeralbody_rivals/rival_scripts.pory"
	applymovement REDD_RUSTBORO, Common_Movement_FaceRight
# 303 "data/emeralbody_rivals/rival_scripts.pory"
	applymovement HARPER_RUSTBORO, Common_Movement_FaceLeft
# 304 "data/emeralbody_rivals/rival_scripts.pory"
	applymovement JAKSON_RUSTBORO, Common_Movement_FaceUp
# 305 "data/emeralbody_rivals/rival_scripts.pory"
	setobjectxy REDD_RUSTBORO, 10, 18
# 306 "data/emeralbody_rivals/rival_scripts.pory"
	setobjectxy SAKURA_RUSTBORO, 11, 17
# 307 "data/emeralbody_rivals/rival_scripts.pory"
	setobjectxy BARON_RUSTBORO, 12, 17
# 308 "data/emeralbody_rivals/rival_scripts.pory"
	setobjectxy HARPER_RUSTBORO, 13, 18
# 309 "data/emeralbody_rivals/rival_scripts.pory"
	setobjectxy JAKSON_RUSTBORO, 12, 19
# 310 "data/emeralbody_rivals/rival_scripts.pory"
	setobjectxy RIVAL_RUSTBORO, 0, 6
# 311 "data/emeralbody_rivals/rival_scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 312 "data/emeralbody_rivals/rival_scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 313 "data/emeralbody_rivals/rival_scripts.pory"
	message Rival_Scene03_Text_0
# 314 "data/emeralbody_rivals/rival_scripts.pory"
	applymovement JAKSON_RUSTBORO, Common_Movement_WalkInPlaceLeft
# 315 "data/emeralbody_rivals/rival_scripts.pory"
	waitmovement 0
# 316 "data/emeralbody_rivals/rival_scripts.pory"
	delay 30
# 317 "data/emeralbody_rivals/rival_scripts.pory"
	applymovement JAKSON_RUSTBORO, Common_Movement_WalkInPlaceUp
# 318 "data/emeralbody_rivals/rival_scripts.pory"
	applymovement HARPER_RUSTBORO, Common_Movement_WalkInPlaceDown
# 319 "data/emeralbody_rivals/rival_scripts.pory"
	waitmovement 0
# 320 "data/emeralbody_rivals/rival_scripts.pory"
	delay 40
# 321 "data/emeralbody_rivals/rival_scripts.pory"
	applymovement BARON_RUSTBORO, Common_Movement_WalkInPlaceLeft
# 322 "data/emeralbody_rivals/rival_scripts.pory"
	applymovement SAKURA_RUSTBORO, Common_Movement_WalkInPlaceRight
# 323 "data/emeralbody_rivals/rival_scripts.pory"
	waitmovement 0
# 324 "data/emeralbody_rivals/rival_scripts.pory"
	delay 30
# 325 "data/emeralbody_rivals/rival_scripts.pory"
	applymovement REDD_RUSTBORO, Common_Movement_WalkInPlaceDown
# 326 "data/emeralbody_rivals/rival_scripts.pory"
	waitmovement 0
# 327 "data/emeralbody_rivals/rival_scripts.pory"
	delay 50
# 328 "data/emeralbody_rivals/rival_scripts.pory"
	closemessage
# 329 "data/emeralbody_rivals/rival_scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 330 "data/emeralbody_rivals/rival_scripts.pory"
	removeobject REDD_RUSTBORO
# 331 "data/emeralbody_rivals/rival_scripts.pory"
	removeobject SAKURA_RUSTBORO
# 332 "data/emeralbody_rivals/rival_scripts.pory"
	removeobject BARON_RUSTBORO
# 333 "data/emeralbody_rivals/rival_scripts.pory"
	removeobject HARPER_RUSTBORO
# 334 "data/emeralbody_rivals/rival_scripts.pory"
	removeobject JAKSON_RUSTBORO
# 335 "data/emeralbody_rivals/rival_scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 336 "data/emeralbody_rivals/rival_scripts.pory"
	fadedefaultbgm
# 337 "data/emeralbody_rivals/rival_scripts.pory"
	setflag FLAG_ENABLE_EMIB_RIVAL_MATCH_CALL
# 338 "data/emeralbody_rivals/rival_scripts.pory"
	release
	return

Rival_Scene03_3:
# 269 "data/emeralbody_rivals/rival_scripts.pory"
	applymovement RIVAL_RUSTBORO, Common_Movement_WalkDown6
# 270 "data/emeralbody_rivals/rival_scripts.pory"
	waitmovement 0
	goto Rival_Scene03_1

Rival_Scene03_7:
# 280 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Scene03_HarperText
	goto Rival_Scene03_5

Rival_Scene03_8:
# 282 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Scene03_JaksonText
	goto Rival_Scene03_5

Rival_Scene03_9:
# 284 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Scene03_ReddText
	goto Rival_Scene03_5

Rival_Scene03_10:
# 286 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Scene03_SakuraText
	goto Rival_Scene03_5


Sakura_Town04::
# 344 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Sakura
# 345 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town04_SakuraText, MSGBOX_NPC
	return


Harper_Town04::
# 349 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Harper
# 350 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town04_HarperText, MSGBOX_NPC
	return


Redd_Town04::
# 354 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Redd
# 355 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town04_ReddText, MSGBOX_NPC
	return


Jakson_Town04::
# 359 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Jakson
# 360 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town04_JaksonText, MSGBOX_NPC
	return


Baron_Town04::
# 364 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Baron
# 365 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town04_BaronText, MSGBOX_NPC
	return


Sakura_Town05::
# 371 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Sakura
# 372 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town05_SakuraText, MSGBOX_NPC
	return


Harper_Town05::
# 376 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Harper
# 377 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town05_HarperText, MSGBOX_NPC
	return


Redd_Town05::
# 381 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Redd
# 382 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town05_ReddText, MSGBOX_NPC
	return


Jakson_Town05::
# 386 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Jakson
# 387 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town05_JaksonText, MSGBOX_NPC
	return


Baron_Town05::
# 391 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Baron
# 392 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town05_BaronText, MSGBOX_NPC
	return


Sakura_Town06::
# 398 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Sakura
# 399 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town06_SakuraText, MSGBOX_NPC
	return


Harper_Town06::
# 403 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Harper
# 404 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town06_HarperText, MSGBOX_NPC
	return


Redd_Town06::
# 408 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Redd
# 409 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town06_ReddText1, MSGBOX_NPC
# 410 "data/emeralbody_rivals/rival_scripts.pory"
	applymovement 5, Common_Movement_QuestionMark
# 411 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Redd
# 412 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town06_ReddText2, MSGBOX_NPC
	return


Jakson_Town06::
# 416 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Jakson
# 417 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town06_JaksonText, MSGBOX_NPC
	return


Baron_Town06::
# 421 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Baron
# 422 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town06_BaronText, MSGBOX_NPC
	return


Sakura_Town07::
# 428 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Sakura
# 429 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town07_SakuraText, MSGBOX_NPC
	return


Harper_Town07::
# 433 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Harper
# 434 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town07_HarperText, MSGBOX_NPC
	return


Redd_Town07::
# 438 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Redd
# 439 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town07_ReddText, MSGBOX_NPC
	return


Jakson_Town07::
# 443 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Jakson
# 444 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town07_JaksonText, MSGBOX_NPC
	return


Baron_Town07::
# 448 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Baron
# 449 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town07_BaronText, MSGBOX_NPC
	return


Sakura_Town08::
# 455 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Sakura
# 456 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town08_SakuraText, MSGBOX_NPC
	return


Harper_Town08::
# 460 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Harper
# 461 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town08_HarperText, MSGBOX_NPC
	return


Redd_Town08::
# 465 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Redd
# 466 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town08_ReddText, MSGBOX_NPC
	return


Jakson_Town08::
# 470 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Jakson
# 471 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town08_JaksonText, MSGBOX_NPC
	return


Baron_Town08::
# 475 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Baron
# 476 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town08_BaronText, MSGBOX_NPC
	return


Sakura_Town09::
# 482 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Sakura
# 483 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town09_SakuraText, MSGBOX_NPC
	return


Harper_Town09::
# 487 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Harper
# 488 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town09_HarperText, MSGBOX_NPC
	return


Redd_Town09::
# 492 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Redd
# 493 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town09_ReddText, MSGBOX_NPC
	return


Jakson_Town09::
# 497 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Jakson
# 498 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town09_JaksonText, MSGBOX_NPC
	return


Baron_Town09::
# 502 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Baron
# 503 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town09_BaronText, MSGBOX_NPC
	return


Sakura_Town10::
# 509 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Sakura
# 510 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town10_SakuraText, MSGBOX_NPC
	return


Harper_Town10::
# 514 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Harper
# 515 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town10_HarperText, MSGBOX_NPC
	return


Redd_Town10::
# 519 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Redd
# 520 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town10_ReddText, MSGBOX_NPC
	return


Jakson_Town10::
# 524 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Jakson
# 525 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town10_JaksonText, MSGBOX_NPC
	return


Baron_Town10::
# 529 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Baron
# 530 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town10_BaronText, MSGBOX_NPC
	return


Sakura_Town11::
# 536 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Sakura
# 537 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town11_SakuraText, MSGBOX_NPC
	return


Harper_Town11::
# 541 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Harper
# 542 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town11_HarperText, MSGBOX_NPC
	return


Redd_Town11::
# 546 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Redd
# 547 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town11_ReddText, MSGBOX_NPC
	return


Jakson_Town11::
# 551 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Jakson
# 552 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town11_JaksonText, MSGBOX_NPC
	return


Baron_Town11::
# 556 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Baron
# 557 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town11_BaronText, MSGBOX_NPC
	return


Sakura_Town12::
# 563 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Sakura
# 564 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town12_SakuraText, MSGBOX_NPC
	return


Harper_Town12::
# 568 "data/emeralbody_rivals/rival_scripts.pory"
	lock
# 569 "data/emeralbody_rivals/rival_scripts.pory"
	faceplayer
# 570 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Harper
# 571 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town12_HarperTextQ, MSGBOX_YESNO
# 572 "data/emeralbody_rivals/rival_scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Harper_Town12_2
# 576 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town12_HarperTextNo, MSGBOX_NPC
Harper_Town12_1:
# 578 "data/emeralbody_rivals/rival_scripts.pory"
	release
	return

Harper_Town12_2:
# 573 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town12_HarperTextYes, MSGBOX_NPC
	goto Harper_Town12_1


Redd_Town12::
# 582 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Redd
# 583 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town12_ReddText, MSGBOX_NPC
	return


Jakson_Town12::
# 587 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Jakson
# 588 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town12_JaksonText, MSGBOX_NPC
	return


Baron_Town12::
# 592 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Baron
# 593 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town12_BaronText, MSGBOX_NPC
	return


Sakura_Town13::
# 599 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Sakura
# 600 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town13_SakuraText, MSGBOX_NPC
	return


Harper_Town13::
# 604 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Harper
# 605 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town13_HarperText, MSGBOX_NPC
	return


Redd_Town13::
# 609 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Redd
# 610 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town13_ReddText, MSGBOX_NPC
	return


Jakson_Town13::
# 614 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Jakson
# 615 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town13_JaksonText, MSGBOX_NPC
# 616 "data/emeralbody_rivals/rival_scripts.pory"
	closemessage
# 617 "data/emeralbody_rivals/rival_scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 618 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Jakson
# 619 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town13_JaksonTextAfter, MSGBOX_NPC
	return


Baron_Town13::
# 623 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Baron
# 624 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town13_BaronText, MSGBOX_NPC
	return


Sakura_Town14::
# 630 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Sakura
# 631 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town14_SakuraText, MSGBOX_NPC
	return


Harper_Town14::
# 635 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Harper
# 636 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town14_HarperText, MSGBOX_NPC
	return


Redd_Town14::
# 640 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Redd
# 641 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town14_ReddText, MSGBOX_NPC
	return


Jakson_Town14::
# 645 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Jakson
# 646 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town14_JaksonText, MSGBOX_NPC
	return


Baron_Town14::
# 650 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Baron
# 651 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town14_BaronText, MSGBOX_NPC
	return


Sakura_Town15::
# 657 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Sakura
# 658 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town15_SakuraText, MSGBOX_NPC
	return


Harper_Town15::
# 662 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Harper
# 663 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town15_HarperText, MSGBOX_NPC
	return


Redd_Town15::
# 667 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Redd
# 668 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town15_ReddText, MSGBOX_NPC
	return


Jakson_Town15::
# 672 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Jakson
# 673 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town15_JaksonText, MSGBOX_NPC
	return


Baron_Town15::
# 677 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Baron
# 678 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town15_BaronText, MSGBOX_NPC
	return


Sakura_Town16::
# 684 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Sakura
# 685 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town16_SakuraText, MSGBOX_NPC
	return


Harper_Town16::
# 689 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Harper
# 690 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town16_HarperText, MSGBOX_NPC
	return


Redd_Town16::
# 694 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Redd
# 695 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town16_ReddText, MSGBOX_NPC
	return


Jakson_Town16::
# 699 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Jakson
# 700 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town16_JaksonText, MSGBOX_NPC
	return


Baron_Town16::
# 704 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Baron
# 705 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town16_BaronText, MSGBOX_NPC
	return


Sakura_Town18::
# 711 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Sakura
# 712 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town18_SakuraText, MSGBOX_NPC
	return


Harper_Town18::
# 716 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Harper
# 717 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town18_HarperText, MSGBOX_NPC
	return


Redd_Town18::
# 721 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Redd
# 722 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town18_ReddText, MSGBOX_NPC
	return


Jakson_Town18::
# 726 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Jakson
# 727 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town18_JaksonText, MSGBOX_NPC
	return


Baron_Town18::
# 731 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Baron
# 732 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town18_BaronText, MSGBOX_NPC
	return


Baron_Town01_Text_0:
# 107 "data/emeralbody_rivals/rival_scripts.pory"
	.string "Left foot… Right foot…\nLeft foot… Right foot…$"

Rival_Scene03_Text_0:
# 313 "data/emeralbody_rivals/rival_scripts.pory"
	.string "You exchanged PokéNav info with your\n"
	.string "friends.$"
