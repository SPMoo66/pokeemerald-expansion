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
# 195 "data/emeralbody_rivals/rival_scripts.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 196 "data/emeralbody_rivals/rival_scripts.pory"
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
	switch VAR_EMERALBODY_RIVAL
# 157 "data/emeralbody_rivals/rival_scripts.pory"
	case 1, Rival_Scene02_11
# 162 "data/emeralbody_rivals/rival_scripts.pory"
	case 2, Rival_Scene02_12
# 167 "data/emeralbody_rivals/rival_scripts.pory"
	case 3, Rival_Scene02_13
# 172 "data/emeralbody_rivals/rival_scripts.pory"
	case 4, Rival_Scene02_14
# 178 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Scene02_BaronText_PreBattle
# 179 "data/emeralbody_rivals/rival_scripts.pory"
	trainerbattle_no_intro TRAINER_BARON_1, Scene02_BaronText_BattleVictory
# 180 "data/emeralbody_rivals/rival_scripts.pory"
	call GetRivalForNameBox
# 181 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Scene02_BaronText_PostBattle
Rival_Scene02_9:
# 183 "data/emeralbody_rivals/rival_scripts.pory"
	closemessage
# 184 "data/emeralbody_rivals/rival_scripts.pory"
	setvar VAR_EMERALBODY_RIVAL_STATE, 2
# 185 "data/emeralbody_rivals/rival_scripts.pory"
	clearflag FLAG_TEMP_2
# 186 "data/emeralbody_rivals/rival_scripts.pory"
	fadedefaultbgm
# 187 "data/emeralbody_rivals/rival_scripts.pory"
	compare VAR_TEMP_1, 16
	goto_if_eq Rival_Scene02_17
Rival_Scene02_16:
# 191 "data/emeralbody_rivals/rival_scripts.pory"
	applymovement RIVAL_PETALBURG, Common_Movement_WalkLeft7
# 192 "data/emeralbody_rivals/rival_scripts.pory"
	waitmovement 0
# 193 "data/emeralbody_rivals/rival_scripts.pory"
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
# 158 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Scene02_HarperText_PreBattle
# 159 "data/emeralbody_rivals/rival_scripts.pory"
	trainerbattle_no_intro TRAINER_HARPER_1, Scene02_HarperText_BattleVictory
# 160 "data/emeralbody_rivals/rival_scripts.pory"
	call GetRivalForNameBox
# 161 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Scene02_HarperText_PostBattle
	goto Rival_Scene02_9

Rival_Scene02_12:
# 163 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Scene02_JaksonText_PreBattle
# 164 "data/emeralbody_rivals/rival_scripts.pory"
	trainerbattle_no_intro TRAINER_JAKSON_1, Scene02_JaksonText_BattleVictory
# 165 "data/emeralbody_rivals/rival_scripts.pory"
	call GetRivalForNameBox
# 166 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Scene02_JaksonText_PostBattle
	goto Rival_Scene02_9

Rival_Scene02_13:
# 168 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Scene02_ReddText_PreBattle
# 169 "data/emeralbody_rivals/rival_scripts.pory"
	trainerbattle_no_intro TRAINER_REDD_1, Scene02_ReddText_BattleVictory
# 170 "data/emeralbody_rivals/rival_scripts.pory"
	call GetRivalForNameBox
# 171 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Scene02_ReddText_PostBattle
	goto Rival_Scene02_9

Rival_Scene02_14:
# 173 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Scene02_SakuraText_PreBattle
# 174 "data/emeralbody_rivals/rival_scripts.pory"
	trainerbattle_no_intro TRAINER_SAKURA_1, Scene02_SakuraText_BattleVictory
# 175 "data/emeralbody_rivals/rival_scripts.pory"
	call GetRivalForNameBox
# 176 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Scene02_SakuraText_PostBattle
	goto Rival_Scene02_9

Rival_Scene02_17:
# 188 "data/emeralbody_rivals/rival_scripts.pory"
	applymovement RIVAL_PETALBURG, Common_Movement_WalkDown
# 189 "data/emeralbody_rivals/rival_scripts.pory"
	waitmovement 0
	goto Rival_Scene02_16


Sakura_Town02::
# 202 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Sakura
# 203 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town02_SakuraText, MSGBOX_NPC
	return


Harper_Town02::
# 207 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Harper
# 208 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town02_HarperText, MSGBOX_NPC
	return


Redd_Town02::
# 212 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Redd
# 213 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town02_ReddText, MSGBOX_NPC
	return


Baron_Town02::
# 217 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Baron
# 218 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town02_BaronText, MSGBOX_NPC
	return


Jakson_Town02::
# 222 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Jakson
# 223 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town02_JaksonText, MSGBOX_NPC
	return


Sakura_Town03::
# 229 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Sakura
# 230 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town03_SakuraText, MSGBOX_NPC
	return


Harper_Town03::
# 234 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Harper
# 235 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town03_HarperText, MSGBOX_NPC
	return


Redd_Town03::
# 239 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Redd
# 240 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town03_ReddText, MSGBOX_NPC
	return


Jakson_Town03::
# 244 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Jakson
# 245 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town03_JaksonText, MSGBOX_NPC
	return


Baron_Town03::
# 249 "data/emeralbody_rivals/rival_scripts.pory"
	lock
# 250 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Baron
# 251 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town03_BaronText1
# 252 "data/emeralbody_rivals/rival_scripts.pory"
	faceplayer
# 253 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town03_BaronText2
# 254 "data/emeralbody_rivals/rival_scripts.pory"
	release
	return


Rival_Scene03::
# 260 "data/emeralbody_rivals/rival_scripts.pory"
	delay 100
# 261 "data/emeralbody_rivals/rival_scripts.pory"
	call Common_EventScript_PlayEmRivalBgm
# 262 "data/emeralbody_rivals/rival_scripts.pory"
	addobject RIVAL_RUSTBORO
# 263 "data/emeralbody_rivals/rival_scripts.pory"
	setobjectxy RIVAL_RUSTBORO, 20, 15
# 264 "data/emeralbody_rivals/rival_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 265 "data/emeralbody_rivals/rival_scripts.pory"
	switch VAR_TEMP_1
# 266 "data/emeralbody_rivals/rival_scripts.pory"
	case 21, Rival_Scene03_3
# 270 "data/emeralbody_rivals/rival_scripts.pory"
	applymovement RIVAL_RUSTBORO, Common_Movement_WalkDown7
# 271 "data/emeralbody_rivals/rival_scripts.pory"
	waitmovement 0
Rival_Scene03_1:
# 273 "data/emeralbody_rivals/rival_scripts.pory"
	applymovement RIVAL_RUSTBORO, Common_Movement_WalkLeft2
# 274 "data/emeralbody_rivals/rival_scripts.pory"
	waitmovement 0
# 275 "data/emeralbody_rivals/rival_scripts.pory"
	call GetRivalForNameBox
# 276 "data/emeralbody_rivals/rival_scripts.pory"
	switch VAR_EMERALBODY_RIVAL
# 277 "data/emeralbody_rivals/rival_scripts.pory"
	case 1, Rival_Scene03_7
# 279 "data/emeralbody_rivals/rival_scripts.pory"
	case 2, Rival_Scene03_8
# 281 "data/emeralbody_rivals/rival_scripts.pory"
	case 3, Rival_Scene03_9
# 283 "data/emeralbody_rivals/rival_scripts.pory"
	case 4, Rival_Scene03_10
# 286 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Scene03_BaronText
Rival_Scene03_5:
# 288 "data/emeralbody_rivals/rival_scripts.pory"
	closemessage
# 289 "data/emeralbody_rivals/rival_scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 290 "data/emeralbody_rivals/rival_scripts.pory"
	setobjectxy LOCALID_PLAYER, 11, 19
# 291 "data/emeralbody_rivals/rival_scripts.pory"
	setvar VAR_0x8004, 11
# 292 "data/emeralbody_rivals/rival_scripts.pory"
	setvar VAR_0x8005, 19
# 293 "data/emeralbody_rivals/rival_scripts.pory"
	special TeleportCamera
# 294 "data/emeralbody_rivals/rival_scripts.pory"
	addobject REDD_RUSTBORO
# 295 "data/emeralbody_rivals/rival_scripts.pory"
	addobject SAKURA_RUSTBORO
# 296 "data/emeralbody_rivals/rival_scripts.pory"
	addobject BARON_RUSTBORO
# 297 "data/emeralbody_rivals/rival_scripts.pory"
	addobject HARPER_RUSTBORO
# 298 "data/emeralbody_rivals/rival_scripts.pory"
	addobject JAKSON_RUSTBORO
# 299 "data/emeralbody_rivals/rival_scripts.pory"
	applymovement SAKURA_RUSTBORO, Common_Movement_FaceDown
# 300 "data/emeralbody_rivals/rival_scripts.pory"
	applymovement REDD_RUSTBORO, Common_Movement_FaceRight
# 301 "data/emeralbody_rivals/rival_scripts.pory"
	applymovement HARPER_RUSTBORO, Common_Movement_FaceLeft
# 302 "data/emeralbody_rivals/rival_scripts.pory"
	applymovement JAKSON_RUSTBORO, Common_Movement_FaceUp
# 303 "data/emeralbody_rivals/rival_scripts.pory"
	setobjectxy REDD_RUSTBORO, 10, 18
# 304 "data/emeralbody_rivals/rival_scripts.pory"
	setobjectxy SAKURA_RUSTBORO, 11, 17
# 305 "data/emeralbody_rivals/rival_scripts.pory"
	setobjectxy BARON_RUSTBORO, 12, 17
# 306 "data/emeralbody_rivals/rival_scripts.pory"
	setobjectxy HARPER_RUSTBORO, 13, 18
# 307 "data/emeralbody_rivals/rival_scripts.pory"
	setobjectxy JAKSON_RUSTBORO, 12, 19
# 308 "data/emeralbody_rivals/rival_scripts.pory"
	setobjectxy RIVAL_RUSTBORO, 0, 6
# 309 "data/emeralbody_rivals/rival_scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 310 "data/emeralbody_rivals/rival_scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 311 "data/emeralbody_rivals/rival_scripts.pory"
	message Rival_Scene03_Text_0
# 312 "data/emeralbody_rivals/rival_scripts.pory"
	applymovement JAKSON_RUSTBORO, Common_Movement_WalkInPlaceLeft
# 313 "data/emeralbody_rivals/rival_scripts.pory"
	waitmovement 0
# 314 "data/emeralbody_rivals/rival_scripts.pory"
	delay 30
# 315 "data/emeralbody_rivals/rival_scripts.pory"
	applymovement JAKSON_RUSTBORO, Common_Movement_WalkInPlaceUp
# 316 "data/emeralbody_rivals/rival_scripts.pory"
	applymovement HARPER_RUSTBORO, Common_Movement_WalkInPlaceDown
# 317 "data/emeralbody_rivals/rival_scripts.pory"
	waitmovement 0
# 318 "data/emeralbody_rivals/rival_scripts.pory"
	delay 40
# 319 "data/emeralbody_rivals/rival_scripts.pory"
	applymovement BARON_RUSTBORO, Common_Movement_WalkInPlaceLeft
# 320 "data/emeralbody_rivals/rival_scripts.pory"
	applymovement SAKURA_RUSTBORO, Common_Movement_WalkInPlaceRight
# 321 "data/emeralbody_rivals/rival_scripts.pory"
	waitmovement 0
# 322 "data/emeralbody_rivals/rival_scripts.pory"
	delay 30
# 323 "data/emeralbody_rivals/rival_scripts.pory"
	applymovement REDD_RUSTBORO, Common_Movement_WalkInPlaceDown
# 324 "data/emeralbody_rivals/rival_scripts.pory"
	waitmovement 0
# 325 "data/emeralbody_rivals/rival_scripts.pory"
	delay 50
# 326 "data/emeralbody_rivals/rival_scripts.pory"
	closemessage
# 327 "data/emeralbody_rivals/rival_scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 328 "data/emeralbody_rivals/rival_scripts.pory"
	removeobject REDD_RUSTBORO
# 329 "data/emeralbody_rivals/rival_scripts.pory"
	removeobject SAKURA_RUSTBORO
# 330 "data/emeralbody_rivals/rival_scripts.pory"
	removeobject BARON_RUSTBORO
# 331 "data/emeralbody_rivals/rival_scripts.pory"
	removeobject HARPER_RUSTBORO
# 332 "data/emeralbody_rivals/rival_scripts.pory"
	removeobject JAKSON_RUSTBORO
# 333 "data/emeralbody_rivals/rival_scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 334 "data/emeralbody_rivals/rival_scripts.pory"
	fadedefaultbgm
# 335 "data/emeralbody_rivals/rival_scripts.pory"
	setflag FLAG_ENABLE_EMIB_RIVAL_MATCH_CALL
# 336 "data/emeralbody_rivals/rival_scripts.pory"
	release
	return

Rival_Scene03_3:
# 267 "data/emeralbody_rivals/rival_scripts.pory"
	applymovement RIVAL_RUSTBORO, Common_Movement_WalkDown6
# 268 "data/emeralbody_rivals/rival_scripts.pory"
	waitmovement 0
	goto Rival_Scene03_1

Rival_Scene03_7:
# 278 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Scene03_HarperText
	goto Rival_Scene03_5

Rival_Scene03_8:
# 280 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Scene03_JaksonText
	goto Rival_Scene03_5

Rival_Scene03_9:
# 282 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Scene03_ReddText
	goto Rival_Scene03_5

Rival_Scene03_10:
# 284 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Scene03_SakuraText
	goto Rival_Scene03_5


Sakura_Town04::
# 342 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Sakura
# 343 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town04_SakuraText, MSGBOX_NPC
	return


Harper_Town04::
# 347 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Harper
# 348 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town04_HarperText, MSGBOX_NPC
	return


Redd_Town04::
# 352 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Redd
# 353 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town04_ReddText, MSGBOX_NPC
	return


Jakson_Town04::
# 357 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Jakson
# 358 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town04_JaksonText, MSGBOX_NPC
	return


Baron_Town04::
# 362 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Baron
# 363 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town04_BaronText, MSGBOX_NPC
	return


Sakura_Town05::
# 369 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Sakura
# 370 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town05_SakuraText, MSGBOX_NPC
	return


Harper_Town05::
# 374 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Harper
# 375 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town05_HarperText, MSGBOX_NPC
	return


Redd_Town05::
# 379 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Redd
# 380 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town05_ReddText, MSGBOX_NPC
	return


Jakson_Town05::
# 384 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Jakson
# 385 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town05_JaksonText, MSGBOX_NPC
	return


Baron_Town05::
# 389 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Baron
# 390 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town05_BaronText, MSGBOX_NPC
	return


Sakura_Town06::
# 396 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Sakura
# 397 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town06_SakuraText, MSGBOX_NPC
	return


Harper_Town06::
# 401 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Harper
# 402 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town06_HarperText, MSGBOX_NPC
	return


Redd_Town06::
# 406 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Redd
# 407 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town06_ReddText1, MSGBOX_NPC
# 408 "data/emeralbody_rivals/rival_scripts.pory"
	applymovement 5, Common_Movement_QuestionMark
# 409 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Redd
# 410 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town06_ReddText2, MSGBOX_NPC
	return


Jakson_Town06::
# 414 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Jakson
# 415 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town06_JaksonText, MSGBOX_NPC
	return


Baron_Town06::
# 419 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Baron
# 420 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town06_BaronText, MSGBOX_NPC
	return


Sakura_Town07::
# 426 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Sakura
# 427 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town07_SakuraText, MSGBOX_NPC
	return


Harper_Town07::
# 431 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Harper
# 432 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town07_HarperText, MSGBOX_NPC
	return


Redd_Town07::
# 436 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Redd
# 437 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town07_ReddText, MSGBOX_NPC
	return


Jakson_Town07::
# 441 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Jakson
# 442 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town07_JaksonText, MSGBOX_NPC
	return


Baron_Town07::
# 446 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Baron
# 447 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town07_BaronText, MSGBOX_NPC
	return


Sakura_Town08::
# 453 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Sakura
# 454 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town08_SakuraText, MSGBOX_NPC
	return


Harper_Town08::
# 458 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Harper
# 459 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town08_HarperText, MSGBOX_NPC
	return


Redd_Town08::
# 463 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Redd
# 464 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town08_ReddText, MSGBOX_NPC
	return


Jakson_Town08::
# 468 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Jakson
# 469 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town08_JaksonText, MSGBOX_NPC
	return


Baron_Town08::
# 473 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Baron
# 474 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town08_BaronText, MSGBOX_NPC
	return


Sakura_Town09::
# 480 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Sakura
# 481 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town09_SakuraText, MSGBOX_NPC
	return


Harper_Town09::
# 485 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Harper
# 486 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town09_HarperText, MSGBOX_NPC
	return


Redd_Town09::
# 490 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Redd
# 491 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town09_ReddText, MSGBOX_NPC
	return


Jakson_Town09::
# 495 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Jakson
# 496 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town09_JaksonText, MSGBOX_NPC
	return


Baron_Town09::
# 500 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Baron
# 501 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town09_BaronText, MSGBOX_NPC
	return


Sakura_Town10::
# 507 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Sakura
# 508 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town10_SakuraText, MSGBOX_NPC
	return


Harper_Town10::
# 512 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Harper
# 513 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town10_HarperText, MSGBOX_NPC
	return


Redd_Town10::
# 517 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Redd
# 518 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town10_ReddText, MSGBOX_NPC
	return


Jakson_Town10::
# 522 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Jakson
# 523 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town10_JaksonText, MSGBOX_NPC
	return


Baron_Town10::
# 527 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Baron
# 528 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town10_BaronText, MSGBOX_NPC
	return


Sakura_Town11::
# 534 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Sakura
# 535 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town11_SakuraText, MSGBOX_NPC
	return


Harper_Town11::
# 539 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Harper
# 540 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town11_HarperText, MSGBOX_NPC
	return


Redd_Town11::
# 544 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Redd
# 545 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town11_ReddText, MSGBOX_NPC
	return


Jakson_Town11::
# 549 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Jakson
# 550 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town11_JaksonText, MSGBOX_NPC
	return


Baron_Town11::
# 554 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Baron
# 555 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town11_BaronText, MSGBOX_NPC
	return


Sakura_Town12::
# 561 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Sakura
# 562 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town12_SakuraText, MSGBOX_NPC
	return


Harper_Town12::
# 566 "data/emeralbody_rivals/rival_scripts.pory"
	lock
# 567 "data/emeralbody_rivals/rival_scripts.pory"
	faceplayer
# 568 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Harper
# 569 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town12_HarperTextQ, MSGBOX_YESNO
# 570 "data/emeralbody_rivals/rival_scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Harper_Town12_2
# 574 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town12_HarperTextNo, MSGBOX_NPC
Harper_Town12_1:
# 576 "data/emeralbody_rivals/rival_scripts.pory"
	release
	return

Harper_Town12_2:
# 571 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town12_HarperTextYes, MSGBOX_NPC
	goto Harper_Town12_1


Redd_Town12::
# 580 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Redd
# 581 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town12_ReddText, MSGBOX_NPC
	return


Jakson_Town12::
# 585 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Jakson
# 586 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town12_JaksonText, MSGBOX_NPC
	return


Baron_Town12::
# 590 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Baron
# 591 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town12_BaronText, MSGBOX_NPC
	return


Sakura_Town13::
# 597 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Sakura
# 598 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town13_SakuraText, MSGBOX_NPC
	return


Harper_Town13::
# 602 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Harper
# 603 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town13_HarperText, MSGBOX_NPC
	return


Redd_Town13::
# 607 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Redd
# 608 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town13_ReddText, MSGBOX_NPC
	return


Jakson_Town13::
# 612 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Jakson
# 613 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town13_JaksonText, MSGBOX_NPC
# 614 "data/emeralbody_rivals/rival_scripts.pory"
	closemessage
# 615 "data/emeralbody_rivals/rival_scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 616 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Jakson
# 617 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town13_JaksonTextAfter, MSGBOX_NPC
	return


Baron_Town13::
# 621 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Baron
# 622 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town13_BaronText, MSGBOX_NPC
	return


Sakura_Town14::
# 628 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Sakura
# 629 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town14_SakuraText, MSGBOX_NPC
	return


Harper_Town14::
# 633 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Harper
# 634 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town14_HarperText, MSGBOX_NPC
	return


Redd_Town14::
# 638 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Redd
# 639 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town14_ReddText, MSGBOX_NPC
	return


Jakson_Town14::
# 643 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Jakson
# 644 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town14_JaksonText, MSGBOX_NPC
	return


Baron_Town14::
# 648 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Baron
# 649 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town14_BaronText, MSGBOX_NPC
	return


Sakura_Town15::
# 655 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Sakura
# 656 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town15_SakuraText, MSGBOX_NPC
	return


Harper_Town15::
# 660 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Harper
# 661 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town15_HarperText, MSGBOX_NPC
	return


Redd_Town15::
# 665 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Redd
# 666 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town15_ReddText, MSGBOX_NPC
	return


Jakson_Town15::
# 670 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Jakson
# 671 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town15_JaksonText, MSGBOX_NPC
	return


Baron_Town15::
# 675 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Baron
# 676 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town15_BaronText, MSGBOX_NPC
	return


Sakura_Town16::
# 682 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Sakura
# 683 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town16_SakuraText, MSGBOX_NPC
	return


Harper_Town16::
# 687 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Harper
# 688 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town16_HarperText, MSGBOX_NPC
	return


Redd_Town16::
# 692 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Redd
# 693 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town16_ReddText, MSGBOX_NPC
	return


Jakson_Town16::
# 697 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Jakson
# 698 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town16_JaksonText, MSGBOX_NPC
	return


Baron_Town16::
# 702 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Baron
# 703 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town16_BaronText, MSGBOX_NPC
	return


Sakura_Town18::
# 709 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Sakura
# 710 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town18_SakuraText, MSGBOX_NPC
	return


Harper_Town18::
# 714 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Harper
# 715 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town18_HarperText, MSGBOX_NPC
	return


Redd_Town18::
# 719 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Redd
# 720 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town18_ReddText, MSGBOX_NPC
	return


Jakson_Town18::
# 724 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Jakson
# 725 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town18_JaksonText, MSGBOX_NPC
	return


Baron_Town18::
# 729 "data/emeralbody_rivals/rival_scripts.pory"
	speakername CommonText_Baron
# 730 "data/emeralbody_rivals/rival_scripts.pory"
	msgbox Town18_BaronText, MSGBOX_NPC
	return


Baron_Town01_Text_0:
# 107 "data/emeralbody_rivals/rival_scripts.pory"
	.string "Left foot… Right foot…\nLeft foot… Right foot…$"

Rival_Scene03_Text_0:
# 311 "data/emeralbody_rivals/rival_scripts.pory"
	.string "You exchanged PokéNav info with your\n"
	.string "friends.$"
