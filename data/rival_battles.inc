Harper_Battle02::
# 12 "data/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 1
	goto_if_eq Harper_Battle02_1
	return

Harper_Battle02_1:
# 13 "data/rival_battles.pory"
	lock
# 14 "data/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 15 "data/rival_battles.pory"
	addobject 4
# 16 "data/rival_battles.pory"
	playse SE_EXIT
# 17 "data/rival_battles.pory"
	waitse
# 18 "data/rival_battles.pory"
	applymovement 4, Common_Movement_WalkUp4
# 19 "data/rival_battles.pory"
	waitmovement 0
# 20 "data/rival_battles.pory"
	applymovement 4, Common_Movement_WalkRight4
# 21 "data/rival_battles.pory"
	waitmovement 0
# 22 "data/rival_battles.pory"
	call GetRivalForNameBox
# 23 "data/rival_battles.pory"
	msgbox Battle02_HarperText_PreBattle, MSGBOX_DEFAULT
# 24 "data/rival_battles.pory"
	call GetRivalMusic
# 25 "data/rival_battles.pory"
	trainerbattle_no_intro TRAINER_HARPER_2, Battle02_HarperText_BattleVictory
# 26 "data/rival_battles.pory"
	call GetRivalForNameBox
# 27 "data/rival_battles.pory"
	msgbox Battle02_HarperText_PostBattle
# 28 "data/rival_battles.pory"
	closemessage
# 29 "data/rival_battles.pory"
	applymovement LOCALID_PLAYER, Harper_PlayerMoves
# 30 "data/rival_battles.pory"
	waitmovement 0
# 31 "data/rival_battles.pory"
	applymovement 4, Common_Movement_WalkRight9
# 32 "data/rival_battles.pory"
	waitmovement 0
# 33 "data/rival_battles.pory"
	removeobject 4
# 34 "data/rival_battles.pory"
	fadedefaultbgm
# 35 "data/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 1
# 36 "data/rival_battles.pory"
	release
	return


# 40 "data/rival_battles.pory"
Harper_PlayerMoves:
# 41 "data/rival_battles.pory"
	face_up
# 42 "data/rival_battles.pory"
	lock_facing_direction
# 43 "data/rival_battles.pory"
	walk_down
# 44 "data/rival_battles.pory"
	unlock_facing_direction
	step_end

Sakura_Battle02::
# 54 "data/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 4
	goto_if_eq Sakura_Battle02_1
	return

Sakura_Battle02_1:
# 55 "data/rival_battles.pory"
	lock
# 56 "data/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 57 "data/rival_battles.pory"
	addobject 3
# 58 "data/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceDown
# 59 "data/rival_battles.pory"
	waitmovement 0
# 60 "data/rival_battles.pory"
	playse SE_PIN
# 61 "data/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 62 "data/rival_battles.pory"
	waitmovement 0
# 63 "data/rival_battles.pory"
	delay 60
# 64 "data/rival_battles.pory"
	applymovement 3, Common_Movement_WalkUp4
# 65 "data/rival_battles.pory"
	waitmovement 0
# 66 "data/rival_battles.pory"
	playse SE_LEDGE
# 67 "data/rival_battles.pory"
	applymovement 3, Common_Movement_JumpUp
# 68 "data/rival_battles.pory"
	waitmovement 0
# 69 "data/rival_battles.pory"
	playse SE_M_CUT
# 70 "data/rival_battles.pory"
	waitse
# 71 "data/rival_battles.pory"
	call GetRivalForNameBox
# 72 "data/rival_battles.pory"
	msgbox Battle02_SakuraText_PreBattle, MSGBOX_DEFAULT
# 73 "data/rival_battles.pory"
	call GetRivalMusic
# 74 "data/rival_battles.pory"
	trainerbattle_no_intro TRAINER_SAKURA_2, Battle02_SakuraText_BattleVictory
# 75 "data/rival_battles.pory"
	call GetRivalForNameBox
# 76 "data/rival_battles.pory"
	msgbox Battle02_SakuraText_PostBattle
# 77 "data/rival_battles.pory"
	closemessage
# 78 "data/rival_battles.pory"
	applymovement 3, Common_Movement_WalkDown5
# 79 "data/rival_battles.pory"
	waitmovement 0
# 80 "data/rival_battles.pory"
	removeobject 3
# 81 "data/rival_battles.pory"
	fadedefaultbgm
# 82 "data/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 1
# 83 "data/rival_battles.pory"
	release
	return


Sakura_Battle03::
# 88 "data/rival_battles.pory"
	lock
# 89 "data/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 90 "data/rival_battles.pory"
	call GetRivalForNameBox
# 91 "data/rival_battles.pory"
	msgbox Battle03_SakuraText_PreBattle, MSGBOX_DEFAULT
# 92 "data/rival_battles.pory"
	call GetRivalMusic
# 93 "data/rival_battles.pory"
	trainerbattle_no_intro TRAINER_SAKURA_3, Battle03_SakuraText_BattleVictory
# 94 "data/rival_battles.pory"
	call GetRivalForNameBox
# 95 "data/rival_battles.pory"
	msgbox Battle03_SakuraText_PostBattle
# 96 "data/rival_battles.pory"
	closemessage
# 97 "data/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 98 "data/rival_battles.pory"
	compare VAR_TEMP_1, 12
	goto_if_eq Sakura_Battle03_2
Sakura_Battle03_1:
# 102 "data/rival_battles.pory"
	applymovement 8, Common_Movement_WalkDown
# 103 "data/rival_battles.pory"
	waitmovement 0
# 104 "data/rival_battles.pory"
	playse SE_LEDGE
# 105 "data/rival_battles.pory"
	applymovement 8, Common_Movement_JumpDown2
# 106 "data/rival_battles.pory"
	waitmovement 0
# 107 "data/rival_battles.pory"
	applymovement 8, Common_Movement_WalkDown4
# 108 "data/rival_battles.pory"
	waitmovement 0
# 109 "data/rival_battles.pory"
	removeobject 8
# 110 "data/rival_battles.pory"
	setflag FLAG_TEMP_2
# 111 "data/rival_battles.pory"
	fadedefaultbgm
# 112 "data/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 2
# 113 "data/rival_battles.pory"
	delay 30
# 114 "data/rival_battles.pory"
	playse SE_EFFECTIVE
# 115 "data/rival_battles.pory"
	setmetatile 13, 11, 0x208, FALSE
# 116 "data/rival_battles.pory"
	special DrawWholeMapView
# 117 "data/rival_battles.pory"
	delay 30
# 118 "data/rival_battles.pory"
	release
	return

Sakura_Battle03_2:
# 99 "data/rival_battles.pory"
	applymovement 8, Common_Movement_WalkRight
# 100 "data/rival_battles.pory"
	waitmovement 0
	goto Sakura_Battle03_1


Redd_Battle02::
# 128 "data/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 3
	goto_if_eq Redd_Battle02_1
	return

Redd_Battle02_1:
# 129 "data/rival_battles.pory"
	lock
# 130 "data/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 131 "data/rival_battles.pory"
	call GetRivalForNameBox
# 132 "data/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 133 "data/rival_battles.pory"
	compare VAR_TEMP_1, 58
	goto_if_eq Redd_Battle02_4
# 148 "data/rival_battles.pory"
	applymovement 40, Common_Movement_FaceUp
# 149 "data/rival_battles.pory"
	waitmovement 0
# 150 "data/rival_battles.pory"
	playse SE_PIN
# 151 "data/rival_battles.pory"
	applymovement 40, Common_Movement_ExclamationMark
# 152 "data/rival_battles.pory"
	waitmovement 0
# 153 "data/rival_battles.pory"
	delay 60
# 154 "data/rival_battles.pory"
	compare VAR_TEMP_1, 52
	goto_if_eq Redd_Battle02_12
# 159 "data/rival_battles.pory"
	applymovement 40, Common_Movement_WalkUp2
# 160 "data/rival_battles.pory"
	waitmovement 0
Redd_Battle02_11:
# 162 "data/rival_battles.pory"
	applymovement 40, Common_Movement_WalkRight
# 163 "data/rival_battles.pory"
	waitmovement 0
# 164 "data/rival_battles.pory"
	msgbox Battle02_ReddText_PreBattleAlt, MSGBOX_DEFAULT
Redd_Battle02_3:
# 166 "data/rival_battles.pory"
	call GetRivalMusic
# 167 "data/rival_battles.pory"
	trainerbattle_no_intro TRAINER_REDD_2, Battle02_ReddText_BattleVictory
# 168 "data/rival_battles.pory"
	call GetRivalForNameBox
# 169 "data/rival_battles.pory"
	msgbox Battle02_ReddText_PostBattle
# 170 "data/rival_battles.pory"
	closemessage
# 171 "data/rival_battles.pory"
	applymovement 40, Common_Movement_WalkUp6
# 172 "data/rival_battles.pory"
	waitmovement 0
# 173 "data/rival_battles.pory"
	removeobject 40
# 174 "data/rival_battles.pory"
	fadedefaultbgm
# 175 "data/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 1
# 176 "data/rival_battles.pory"
	setflag FLAG_TEMP_2
# 177 "data/rival_battles.pory"
	release
	return

Redd_Battle02_4:
# 134 "data/rival_battles.pory"
	switch VAR_TEMP_0
# 135 "data/rival_battles.pory"
	case 17, Redd_Battle02_9
# 138 "data/rival_battles.pory"
	case 19, Redd_Battle02_10
Redd_Battle02_7:
# 143 "data/rival_battles.pory"
	applymovement 40, Common_Movement_WalkDown2
# 144 "data/rival_battles.pory"
	waitmovement 0
# 145 "data/rival_battles.pory"
	msgbox Battle02_ReddText_PreBattle, MSGBOX_DEFAULT
	goto Redd_Battle02_3

Redd_Battle02_9:
# 136 "data/rival_battles.pory"
	applymovement 40, Common_Movement_WalkLeft
# 137 "data/rival_battles.pory"
	waitmovement 0
	goto Redd_Battle02_7

Redd_Battle02_10:
# 139 "data/rival_battles.pory"
	applymovement 40, Common_Movement_WalkRight
# 140 "data/rival_battles.pory"
	waitmovement 0
	goto Redd_Battle02_7

Redd_Battle02_12:
# 155 "data/rival_battles.pory"
	applymovement 40, Common_Movement_WalkUp3
# 156 "data/rival_battles.pory"
	waitmovement 0
	goto Redd_Battle02_11


Redd_Battle03::
# 182 "data/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 3
	goto_if_eq Redd_Battle03_1
	return

Redd_Battle03_1:
# 183 "data/rival_battles.pory"
	lock
# 184 "data/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 185 "data/rival_battles.pory"
	call GetRivalForNameBox
# 186 "data/rival_battles.pory"
	addobject 5
# 187 "data/rival_battles.pory"
	playse SE_EXIT
# 188 "data/rival_battles.pory"
	waitse
# 189 "data/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 190 "data/rival_battles.pory"
	compare VAR_TEMP_1, 7
	goto_if_eq Redd_Battle03_4
# 196 "data/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceRight
# 197 "data/rival_battles.pory"
	applymovement 5, Common_Movement_WalkDown3
# 198 "data/rival_battles.pory"
	waitmovement 0
Redd_Battle03_3:
# 200 "data/rival_battles.pory"
	applymovement 5, Common_Movement_WalkLeft3
# 201 "data/rival_battles.pory"
	waitmovement 0
# 202 "data/rival_battles.pory"
	compare VAR_TEMP_1, 7
	goto_if_eq Redd_Battle03_8
# 208 "data/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceUp
# 209 "data/rival_battles.pory"
	applymovement 5, Common_Movement_WalkInPlaceDown
# 210 "data/rival_battles.pory"
	waitmovement 0
Redd_Battle03_7:
# 212 "data/rival_battles.pory"
	waitmovement 0
# 213 "data/rival_battles.pory"
	msgbox Battle03_ReddText_PreBattle, MSGBOX_DEFAULT
# 214 "data/rival_battles.pory"
	call GetRivalMusic
# 215 "data/rival_battles.pory"
	trainerbattle_no_intro TRAINER_REDD_3, Battle03_ReddText_BattleVictory
# 216 "data/rival_battles.pory"
	call GetRivalForNameBox
# 217 "data/rival_battles.pory"
	msgbox Battle03_ReddText_PostBattle
# 218 "data/rival_battles.pory"
	closemessage
# 219 "data/rival_battles.pory"
	applymovement 5, Common_Movement_WalkLeft4
# 220 "data/rival_battles.pory"
	waitmovement 0
# 221 "data/rival_battles.pory"
	compare VAR_TEMP_1, 7
	goto_if_eq Redd_Battle03_12
# 226 "data/rival_battles.pory"
	applymovement 5, Common_Movement_WalkDown
# 227 "data/rival_battles.pory"
	waitmovement 0
Redd_Battle03_11:
# 229 "data/rival_battles.pory"
	removeobject 5
# 230 "data/rival_battles.pory"
	playse SE_EXIT
# 231 "data/rival_battles.pory"
	waitse
# 232 "data/rival_battles.pory"
	fadedefaultbgm
# 233 "data/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 2
# 234 "data/rival_battles.pory"
	release
	return

Redd_Battle03_4:
# 191 "data/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceRight
# 192 "data/rival_battles.pory"
	applymovement 5, Common_Movement_WalkDown4
# 193 "data/rival_battles.pory"
	waitmovement 0
	goto Redd_Battle03_3

Redd_Battle03_8:
# 203 "data/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceDown
# 204 "data/rival_battles.pory"
	applymovement 5, Common_Movement_WalkInPlaceUp
# 205 "data/rival_battles.pory"
	waitmovement 0
	goto Redd_Battle03_7

Redd_Battle03_12:
# 222 "data/rival_battles.pory"
	applymovement 5, Common_Movement_WalkInPlaceDown
# 223 "data/rival_battles.pory"
	waitmovement 0
	goto Redd_Battle03_11


Baron_Battle02::
# 244 "data/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 0
	goto_if_eq Baron_Battle02_1
	return

Baron_Battle02_1:
# 245 "data/rival_battles.pory"
	lock
# 246 "data/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 247 "data/rival_battles.pory"
	call GetRivalForNameBox
# 248 "data/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 249 "data/rival_battles.pory"
	compare VAR_TEMP_1, 9
	goto_if_eq Baron_Battle02_4
# 258 "data/rival_battles.pory"
	faceplayer
Baron_Battle02_3:
# 260 "data/rival_battles.pory"
	msgbox Battle02_BaronText_PreBattle, MSGBOX_DEFAULT
# 261 "data/rival_battles.pory"
	call GetRivalMusic
# 262 "data/rival_battles.pory"
	trainerbattle_no_intro TRAINER_BARON_2, Battle02_BaronText_BattleVictory
# 263 "data/rival_battles.pory"
	call GetRivalForNameBox
# 264 "data/rival_battles.pory"
	msgbox Battle02_BaronText_PostBattle
# 265 "data/rival_battles.pory"
	closemessage
# 266 "data/rival_battles.pory"
	fadedefaultbgm
# 267 "data/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 1
# 268 "data/rival_battles.pory"
	setflag FLAG_TEMP_2
# 269 "data/rival_battles.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 270 "data/rival_battles.pory"
	removeobject 7
# 271 "data/rival_battles.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 272 "data/rival_battles.pory"
	release
	return

Baron_Battle02_4:
# 250 "data/rival_battles.pory"
	applymovement 7, Common_Movement_WalkInPlaceUp
# 251 "data/rival_battles.pory"
	waitmovement 0
# 252 "data/rival_battles.pory"
	delay 50
# 253 "data/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceDown
# 254 "data/rival_battles.pory"
	applymovement 7, Common_Movement_WalkUp
# 255 "data/rival_battles.pory"
	waitmovement 0
	goto Baron_Battle02_3


Jakson_Battle02::
# 284 "data/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 2
	goto_if_eq Jakson_Battle02_1
	return

Jakson_Battle02_1:
# 285 "data/rival_battles.pory"
	lock
# 286 "data/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 287 "data/rival_battles.pory"
	delay 30
# 288 "data/rival_battles.pory"
	call GetRivalForNameBox
# 289 "data/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 290 "data/rival_battles.pory"
	compare VAR_TEMP_0, 5
	goto_if_eq Jakson_Battle02_4
Jakson_Battle02_3:
# 312 "data/rival_battles.pory"
	msgbox Battle02_JaksonText_PreBattle, MSGBOX_DEFAULT
# 313 "data/rival_battles.pory"
	call GetRivalMusic
# 314 "data/rival_battles.pory"
	trainerbattle_no_intro TRAINER_JAKSON_2, Battle02_JaksonText_BattleVictory
# 315 "data/rival_battles.pory"
	call GetRivalForNameBox
# 316 "data/rival_battles.pory"
	msgbox Battle02_JaksonText_PostBattle
# 317 "data/rival_battles.pory"
	closemessage
# 318 "data/rival_battles.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 319 "data/rival_battles.pory"
	removeobject 7
# 320 "data/rival_battles.pory"
	removeobject 6
# 321 "data/rival_battles.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 322 "data/rival_battles.pory"
	fadedefaultbgm
# 323 "data/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 1
# 324 "data/rival_battles.pory"
	setflag FLAG_TEMP_2
# 325 "data/rival_battles.pory"
	release
	return

Jakson_Battle02_4:
# 291 "data/rival_battles.pory"
	switch VAR_TEMP_1
# 292 "data/rival_battles.pory"
	case 9, Jakson_Battle02_8
# 295 "data/rival_battles.pory"
	case 11, Jakson_Battle02_9
# 298 "data/rival_battles.pory"
	case 12, Jakson_Battle02_10
# 301 "data/rival_battles.pory"
	case 13, Jakson_Battle02_11
# 304 "data/rival_battles.pory"
	case 14, Jakson_Battle02_12
Jakson_Battle02_6:
# 309 "data/rival_battles.pory"
	applymovement 7, Common_Movement_WalkRight2
# 310 "data/rival_battles.pory"
	waitmovement 0
	goto Jakson_Battle02_3

Jakson_Battle02_8:
# 293 "data/rival_battles.pory"
	applymovement 7, Common_Movement_WalkUp
# 294 "data/rival_battles.pory"
	waitmovement 0
	goto Jakson_Battle02_6

Jakson_Battle02_9:
# 296 "data/rival_battles.pory"
	applymovement 7, Common_Movement_WalkDown
# 297 "data/rival_battles.pory"
	waitmovement 0
	goto Jakson_Battle02_6

Jakson_Battle02_10:
# 299 "data/rival_battles.pory"
	applymovement 7, Common_Movement_WalkDown2
# 300 "data/rival_battles.pory"
	waitmovement 0
	goto Jakson_Battle02_6

Jakson_Battle02_11:
# 302 "data/rival_battles.pory"
	applymovement 7, Common_Movement_WalkDown3
# 303 "data/rival_battles.pory"
	waitmovement 0
	goto Jakson_Battle02_6

Jakson_Battle02_12:
# 305 "data/rival_battles.pory"
	applymovement 7, Common_Movement_WalkDown4
# 306 "data/rival_battles.pory"
	waitmovement 0
	goto Jakson_Battle02_6


Jakson_Battle02_Block::
# 330 "data/rival_battles.pory"
	lock
# 331 "data/rival_battles.pory"
	faceplayer
# 332 "data/rival_battles.pory"
	msgbox Jakson_Battle02_Block_Text_0
# 333 "data/rival_battles.pory"
	playmoncry SPECIES_MURKROW, CRY_MODE_NORMAL
# 334 "data/rival_battles.pory"
	waitmoncry
# 335 "data/rival_battles.pory"
	release
	return


Jakson_Battle03::
# 339 "data/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 2
	goto_if_eq Jakson_Battle03_1
	return

Jakson_Battle03_1:
# 340 "data/rival_battles.pory"
	lock
# 341 "data/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 342 "data/rival_battles.pory"
	call GetRivalForNameBox
# 343 "data/rival_battles.pory"
	addobject 48
# 344 "data/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 345 "data/rival_battles.pory"
	compare VAR_TEMP_0, 31
	goto_if_eq Jakson_Battle03_4
Jakson_Battle03_3:
# 348 "data/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceDown
# 349 "data/rival_battles.pory"
	applymovement 48, Common_Movement_WalkUp5
# 350 "data/rival_battles.pory"
	waitmovement 0
# 351 "data/rival_battles.pory"
	msgbox Battle03_JaksonText_PreBattle, MSGBOX_DEFAULT
# 352 "data/rival_battles.pory"
	call GetRivalMusic
# 353 "data/rival_battles.pory"
	trainerbattle_no_intro TRAINER_JAKSON_3, Battle03_JaksonText_BattleVictory
# 354 "data/rival_battles.pory"
	call GetRivalForNameBox
# 355 "data/rival_battles.pory"
	msgbox Battle03_JaksonText_PostBattle
# 356 "data/rival_battles.pory"
	closemessage
# 357 "data/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 2
# 358 "data/rival_battles.pory"
	compare VAR_TEMP_0, 31
	goto_if_eq Jakson_Battle03_7
# 363 "data/rival_battles.pory"
	applymovement 48, Common_Movement_WalkRight
# 364 "data/rival_battles.pory"
	waitmovement 0
Jakson_Battle03_6:
# 366 "data/rival_battles.pory"
	applymovement 48, Common_Movement_WalkUp7
# 367 "data/rival_battles.pory"
	waitmovement 0
# 368 "data/rival_battles.pory"
	removeobject 48
# 369 "data/rival_battles.pory"
	fadedefaultbgm
# 370 "data/rival_battles.pory"
	release
	return

Jakson_Battle03_4:
# 346 "data/rival_battles.pory"
	setobjectxy 48, 31, 103
	goto Jakson_Battle03_3

Jakson_Battle03_7:
# 359 "data/rival_battles.pory"
	applymovement 48, Common_Movement_WalkLeft
# 360 "data/rival_battles.pory"
	waitmovement 0
	goto Jakson_Battle03_6


Jakson_Battle02_Block_Text_0:
# 332 "data/rival_battles.pory"
	.string "The Murkrow sees you trying to sneak\naround and actively blocks your\lefforts.$"
