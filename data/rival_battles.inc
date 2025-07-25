Harper_Battle02::
# 13 "data/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 1
	goto_if_eq Harper_Battle02_1
	return

Harper_Battle02_1:
# 14 "data/rival_battles.pory"
	lock
# 15 "data/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 16 "data/rival_battles.pory"
	addobject 4
# 17 "data/rival_battles.pory"
	playse SE_EXIT
# 18 "data/rival_battles.pory"
	waitse
# 19 "data/rival_battles.pory"
	applymovement 4, Common_Movement_WalkUp4
# 20 "data/rival_battles.pory"
	waitmovement 0
# 21 "data/rival_battles.pory"
	applymovement 4, Common_Movement_WalkRight4
# 22 "data/rival_battles.pory"
	waitmovement 0
# 23 "data/rival_battles.pory"
	call GetRivalForNameBox
# 24 "data/rival_battles.pory"
	msgbox Battle02_HarperText_PreBattle, MSGBOX_DEFAULT
# 25 "data/rival_battles.pory"
	call GetRivalMusic
# 26 "data/rival_battles.pory"
	trainerbattle_no_intro TRAINER_HARPER_2, Battle02_HarperText_BattleVictory
# 27 "data/rival_battles.pory"
	call GetRivalForNameBox
# 28 "data/rival_battles.pory"
	msgbox Battle02_HarperText_PostBattle
# 29 "data/rival_battles.pory"
	closemessage
# 30 "data/rival_battles.pory"
	applymovement LOCALID_PLAYER, Harper_PlayerMoves
# 31 "data/rival_battles.pory"
	waitmovement 0
# 32 "data/rival_battles.pory"
	applymovement 4, Common_Movement_WalkRight9
# 33 "data/rival_battles.pory"
	waitmovement 0
# 34 "data/rival_battles.pory"
	removeobject 4
# 35 "data/rival_battles.pory"
	fadedefaultbgm
# 36 "data/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 1
# 37 "data/rival_battles.pory"
	release
	return


# 41 "data/rival_battles.pory"
Harper_PlayerMoves:
# 42 "data/rival_battles.pory"
	face_up
# 43 "data/rival_battles.pory"
	lock_facing_direction
# 44 "data/rival_battles.pory"
	walk_down
# 45 "data/rival_battles.pory"
	unlock_facing_direction
	step_end

Harper_Battle03::
# 49 "data/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 1
	goto_if_eq Harper_Battle03_1
	return

Harper_Battle03_1:
# 50 "data/rival_battles.pory"
	lock
# 51 "data/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 52 "data/rival_battles.pory"
	addobject 15
# 53 "data/rival_battles.pory"
	applymovement 15, Common_Movement_WalkUp3
# 54 "data/rival_battles.pory"
	waitmovement 0
# 55 "data/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceDown
# 56 "data/rival_battles.pory"
	waitmovement 0
# 57 "data/rival_battles.pory"
	delay 40
# 58 "data/rival_battles.pory"
	applymovement 15, Common_Movement_WalkUp2
# 59 "data/rival_battles.pory"
	waitmovement 0
# 60 "data/rival_battles.pory"
	call GetRivalForNameBox
# 61 "data/rival_battles.pory"
	msgbox Battle03_HarperText_PreBattle, MSGBOX_DEFAULT
# 62 "data/rival_battles.pory"
	call GetRivalMusic
# 63 "data/rival_battles.pory"
	trainerbattle_no_intro TRAINER_HARPER_3, Battle03_HarperText_BattleVictory
# 64 "data/rival_battles.pory"
	call GetRivalForNameBox
# 65 "data/rival_battles.pory"
	msgbox Battle03_HarperText_PostBattle
# 66 "data/rival_battles.pory"
	closemessage
# 67 "data/rival_battles.pory"
	applymovement 15, Common_Movement_WalkDown5
# 68 "data/rival_battles.pory"
	waitmovement 0
# 69 "data/rival_battles.pory"
	removeobject 15
# 70 "data/rival_battles.pory"
	fadedefaultbgm
# 71 "data/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 2
# 72 "data/rival_battles.pory"
	release
	return


Sakura_Battle02::
# 83 "data/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 4
	goto_if_eq Sakura_Battle02_1
	return

Sakura_Battle02_1:
# 84 "data/rival_battles.pory"
	lock
# 85 "data/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 86 "data/rival_battles.pory"
	addobject 3
# 87 "data/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceDown
# 88 "data/rival_battles.pory"
	waitmovement 0
# 89 "data/rival_battles.pory"
	playse SE_PIN
# 90 "data/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 91 "data/rival_battles.pory"
	waitmovement 0
# 92 "data/rival_battles.pory"
	delay 60
# 93 "data/rival_battles.pory"
	applymovement 3, Common_Movement_WalkUp4
# 94 "data/rival_battles.pory"
	waitmovement 0
# 95 "data/rival_battles.pory"
	playse SE_LEDGE
# 96 "data/rival_battles.pory"
	applymovement 3, Common_Movement_JumpUp
# 97 "data/rival_battles.pory"
	waitmovement 0
# 98 "data/rival_battles.pory"
	playse SE_M_CUT
# 99 "data/rival_battles.pory"
	waitse
# 100 "data/rival_battles.pory"
	call GetRivalForNameBox
# 101 "data/rival_battles.pory"
	msgbox Battle02_SakuraText_PreBattle, MSGBOX_DEFAULT
# 102 "data/rival_battles.pory"
	call GetRivalMusic
# 103 "data/rival_battles.pory"
	trainerbattle_no_intro TRAINER_SAKURA_2, Battle02_SakuraText_BattleVictory
# 104 "data/rival_battles.pory"
	call GetRivalForNameBox
# 105 "data/rival_battles.pory"
	msgbox Battle02_SakuraText_PostBattle
# 106 "data/rival_battles.pory"
	closemessage
# 107 "data/rival_battles.pory"
	applymovement 3, Common_Movement_WalkDown5
# 108 "data/rival_battles.pory"
	waitmovement 0
# 109 "data/rival_battles.pory"
	removeobject 3
# 110 "data/rival_battles.pory"
	fadedefaultbgm
# 111 "data/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 1
# 112 "data/rival_battles.pory"
	release
	return


Sakura_Battle03::
# 117 "data/rival_battles.pory"
	lock
# 118 "data/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 119 "data/rival_battles.pory"
	call GetRivalForNameBox
# 120 "data/rival_battles.pory"
	msgbox Battle03_SakuraText_PreBattle, MSGBOX_DEFAULT
# 121 "data/rival_battles.pory"
	call GetRivalMusic
# 122 "data/rival_battles.pory"
	trainerbattle_no_intro TRAINER_SAKURA_3, Battle03_SakuraText_BattleVictory
# 123 "data/rival_battles.pory"
	call GetRivalForNameBox
# 124 "data/rival_battles.pory"
	msgbox Battle03_SakuraText_PostBattle
# 125 "data/rival_battles.pory"
	closemessage
# 126 "data/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 127 "data/rival_battles.pory"
	compare VAR_TEMP_1, 12
	goto_if_eq Sakura_Battle03_2
Sakura_Battle03_1:
# 131 "data/rival_battles.pory"
	applymovement 8, Common_Movement_WalkDown
# 132 "data/rival_battles.pory"
	waitmovement 0
# 133 "data/rival_battles.pory"
	playse SE_LEDGE
# 134 "data/rival_battles.pory"
	applymovement 8, Common_Movement_JumpDown2
# 135 "data/rival_battles.pory"
	waitmovement 0
# 136 "data/rival_battles.pory"
	applymovement 8, Common_Movement_WalkDown4
# 137 "data/rival_battles.pory"
	waitmovement 0
# 138 "data/rival_battles.pory"
	removeobject 8
# 139 "data/rival_battles.pory"
	setflag FLAG_TEMP_2
# 140 "data/rival_battles.pory"
	fadedefaultbgm
# 141 "data/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 2
# 142 "data/rival_battles.pory"
	delay 30
# 143 "data/rival_battles.pory"
	playse SE_EFFECTIVE
# 144 "data/rival_battles.pory"
	setmetatile 13, 11, 0x208, FALSE
# 145 "data/rival_battles.pory"
	special DrawWholeMapView
# 146 "data/rival_battles.pory"
	delay 30
# 147 "data/rival_battles.pory"
	release
	return

Sakura_Battle03_2:
# 128 "data/rival_battles.pory"
	applymovement 8, Common_Movement_WalkRight
# 129 "data/rival_battles.pory"
	waitmovement 0
	goto Sakura_Battle03_1


Redd_Battle02::
# 157 "data/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 3
	goto_if_eq Redd_Battle02_1
	return

Redd_Battle02_1:
# 158 "data/rival_battles.pory"
	lock
# 159 "data/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 160 "data/rival_battles.pory"
	call GetRivalForNameBox
# 161 "data/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 162 "data/rival_battles.pory"
	compare VAR_TEMP_1, 58
	goto_if_eq Redd_Battle02_4
# 177 "data/rival_battles.pory"
	applymovement 40, Common_Movement_FaceUp
# 178 "data/rival_battles.pory"
	waitmovement 0
# 179 "data/rival_battles.pory"
	playse SE_PIN
# 180 "data/rival_battles.pory"
	applymovement 40, Common_Movement_ExclamationMark
# 181 "data/rival_battles.pory"
	waitmovement 0
# 182 "data/rival_battles.pory"
	delay 60
# 183 "data/rival_battles.pory"
	compare VAR_TEMP_1, 52
	goto_if_eq Redd_Battle02_12
# 188 "data/rival_battles.pory"
	applymovement 40, Common_Movement_WalkUp2
# 189 "data/rival_battles.pory"
	waitmovement 0
Redd_Battle02_11:
# 191 "data/rival_battles.pory"
	applymovement 40, Common_Movement_WalkRight
# 192 "data/rival_battles.pory"
	waitmovement 0
# 193 "data/rival_battles.pory"
	msgbox Battle02_ReddText_PreBattleAlt, MSGBOX_DEFAULT
Redd_Battle02_3:
# 195 "data/rival_battles.pory"
	call GetRivalMusic
# 196 "data/rival_battles.pory"
	trainerbattle_no_intro TRAINER_REDD_2, Battle02_ReddText_BattleVictory
# 197 "data/rival_battles.pory"
	call GetRivalForNameBox
# 198 "data/rival_battles.pory"
	msgbox Battle02_ReddText_PostBattle
# 199 "data/rival_battles.pory"
	closemessage
# 200 "data/rival_battles.pory"
	applymovement 40, Common_Movement_WalkUp6
# 201 "data/rival_battles.pory"
	waitmovement 0
# 202 "data/rival_battles.pory"
	removeobject 40
# 203 "data/rival_battles.pory"
	fadedefaultbgm
# 204 "data/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 1
# 205 "data/rival_battles.pory"
	setflag FLAG_TEMP_2
# 206 "data/rival_battles.pory"
	release
	return

Redd_Battle02_4:
# 163 "data/rival_battles.pory"
	switch VAR_TEMP_0
# 164 "data/rival_battles.pory"
	case 17, Redd_Battle02_9
# 167 "data/rival_battles.pory"
	case 19, Redd_Battle02_10
Redd_Battle02_7:
# 172 "data/rival_battles.pory"
	applymovement 40, Common_Movement_WalkDown2
# 173 "data/rival_battles.pory"
	waitmovement 0
# 174 "data/rival_battles.pory"
	msgbox Battle02_ReddText_PreBattle, MSGBOX_DEFAULT
	goto Redd_Battle02_3

Redd_Battle02_9:
# 165 "data/rival_battles.pory"
	applymovement 40, Common_Movement_WalkLeft
# 166 "data/rival_battles.pory"
	waitmovement 0
	goto Redd_Battle02_7

Redd_Battle02_10:
# 168 "data/rival_battles.pory"
	applymovement 40, Common_Movement_WalkRight
# 169 "data/rival_battles.pory"
	waitmovement 0
	goto Redd_Battle02_7

Redd_Battle02_12:
# 184 "data/rival_battles.pory"
	applymovement 40, Common_Movement_WalkUp3
# 185 "data/rival_battles.pory"
	waitmovement 0
	goto Redd_Battle02_11


Redd_Battle03::
# 211 "data/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 3
	goto_if_eq Redd_Battle03_1
	return

Redd_Battle03_1:
# 212 "data/rival_battles.pory"
	lock
# 213 "data/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 214 "data/rival_battles.pory"
	call GetRivalForNameBox
# 215 "data/rival_battles.pory"
	addobject 5
# 216 "data/rival_battles.pory"
	playse SE_EXIT
# 217 "data/rival_battles.pory"
	waitse
# 218 "data/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 219 "data/rival_battles.pory"
	compare VAR_TEMP_1, 7
	goto_if_eq Redd_Battle03_4
# 225 "data/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceRight
# 226 "data/rival_battles.pory"
	applymovement 5, Common_Movement_WalkDown3
# 227 "data/rival_battles.pory"
	waitmovement 0
Redd_Battle03_3:
# 229 "data/rival_battles.pory"
	applymovement 5, Common_Movement_WalkLeft3
# 230 "data/rival_battles.pory"
	waitmovement 0
# 231 "data/rival_battles.pory"
	compare VAR_TEMP_1, 7
	goto_if_eq Redd_Battle03_8
# 237 "data/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceUp
# 238 "data/rival_battles.pory"
	applymovement 5, Common_Movement_WalkInPlaceDown
# 239 "data/rival_battles.pory"
	waitmovement 0
Redd_Battle03_7:
# 241 "data/rival_battles.pory"
	waitmovement 0
# 242 "data/rival_battles.pory"
	msgbox Battle03_ReddText_PreBattle, MSGBOX_DEFAULT
# 243 "data/rival_battles.pory"
	call GetRivalMusic
# 244 "data/rival_battles.pory"
	trainerbattle_no_intro TRAINER_REDD_3, Battle03_ReddText_BattleVictory
# 245 "data/rival_battles.pory"
	call GetRivalForNameBox
# 246 "data/rival_battles.pory"
	msgbox Battle03_ReddText_PostBattle
# 247 "data/rival_battles.pory"
	closemessage
# 248 "data/rival_battles.pory"
	applymovement 5, Common_Movement_WalkLeft4
# 249 "data/rival_battles.pory"
	waitmovement 0
# 250 "data/rival_battles.pory"
	compare VAR_TEMP_1, 7
	goto_if_eq Redd_Battle03_12
# 255 "data/rival_battles.pory"
	applymovement 5, Common_Movement_WalkDown
# 256 "data/rival_battles.pory"
	waitmovement 0
Redd_Battle03_11:
# 258 "data/rival_battles.pory"
	removeobject 5
# 259 "data/rival_battles.pory"
	playse SE_EXIT
# 260 "data/rival_battles.pory"
	waitse
# 261 "data/rival_battles.pory"
	fadedefaultbgm
# 262 "data/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 2
# 263 "data/rival_battles.pory"
	release
	return

Redd_Battle03_4:
# 220 "data/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceRight
# 221 "data/rival_battles.pory"
	applymovement 5, Common_Movement_WalkDown4
# 222 "data/rival_battles.pory"
	waitmovement 0
	goto Redd_Battle03_3

Redd_Battle03_8:
# 232 "data/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceDown
# 233 "data/rival_battles.pory"
	applymovement 5, Common_Movement_WalkInPlaceUp
# 234 "data/rival_battles.pory"
	waitmovement 0
	goto Redd_Battle03_7

Redd_Battle03_12:
# 251 "data/rival_battles.pory"
	applymovement 5, Common_Movement_WalkInPlaceDown
# 252 "data/rival_battles.pory"
	waitmovement 0
	goto Redd_Battle03_11


Baron_Battle02::
# 273 "data/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 0
	goto_if_eq Baron_Battle02_1
	return

Baron_Battle02_1:
# 274 "data/rival_battles.pory"
	lock
# 275 "data/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 276 "data/rival_battles.pory"
	call GetRivalForNameBox
# 277 "data/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 278 "data/rival_battles.pory"
	compare VAR_TEMP_1, 9
	goto_if_eq Baron_Battle02_4
# 287 "data/rival_battles.pory"
	faceplayer
Baron_Battle02_3:
# 289 "data/rival_battles.pory"
	msgbox Battle02_BaronText_PreBattle, MSGBOX_DEFAULT
# 290 "data/rival_battles.pory"
	call GetRivalMusic
# 291 "data/rival_battles.pory"
	trainerbattle_no_intro TRAINER_BARON_2, Battle02_BaronText_BattleVictory
# 292 "data/rival_battles.pory"
	call GetRivalForNameBox
# 293 "data/rival_battles.pory"
	msgbox Battle02_BaronText_PostBattle
# 294 "data/rival_battles.pory"
	closemessage
# 295 "data/rival_battles.pory"
	fadedefaultbgm
# 296 "data/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 1
# 297 "data/rival_battles.pory"
	setflag FLAG_TEMP_2
# 298 "data/rival_battles.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 299 "data/rival_battles.pory"
	removeobject 7
# 300 "data/rival_battles.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 301 "data/rival_battles.pory"
	release
	return

Baron_Battle02_4:
# 279 "data/rival_battles.pory"
	applymovement 7, Common_Movement_WalkInPlaceUp
# 280 "data/rival_battles.pory"
	waitmovement 0
# 281 "data/rival_battles.pory"
	delay 50
# 282 "data/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceDown
# 283 "data/rival_battles.pory"
	applymovement 7, Common_Movement_WalkUp
# 284 "data/rival_battles.pory"
	waitmovement 0
	goto Baron_Battle02_3


Jakson_Battle02::
# 313 "data/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 2
	goto_if_eq Jakson_Battle02_1
	return

Jakson_Battle02_1:
# 314 "data/rival_battles.pory"
	lock
# 315 "data/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 316 "data/rival_battles.pory"
	delay 30
# 317 "data/rival_battles.pory"
	call GetRivalForNameBox
# 318 "data/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 319 "data/rival_battles.pory"
	compare VAR_TEMP_0, 5
	goto_if_eq Jakson_Battle02_4
Jakson_Battle02_3:
# 341 "data/rival_battles.pory"
	msgbox Battle02_JaksonText_PreBattle, MSGBOX_DEFAULT
# 342 "data/rival_battles.pory"
	call GetRivalMusic
# 343 "data/rival_battles.pory"
	trainerbattle_no_intro TRAINER_JAKSON_2, Battle02_JaksonText_BattleVictory
# 344 "data/rival_battles.pory"
	call GetRivalForNameBox
# 345 "data/rival_battles.pory"
	msgbox Battle02_JaksonText_PostBattle
# 346 "data/rival_battles.pory"
	closemessage
# 347 "data/rival_battles.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 348 "data/rival_battles.pory"
	removeobject 7
# 349 "data/rival_battles.pory"
	removeobject 6
# 350 "data/rival_battles.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 351 "data/rival_battles.pory"
	fadedefaultbgm
# 352 "data/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 1
# 353 "data/rival_battles.pory"
	setflag FLAG_TEMP_2
# 354 "data/rival_battles.pory"
	release
	return

Jakson_Battle02_4:
# 320 "data/rival_battles.pory"
	switch VAR_TEMP_1
# 321 "data/rival_battles.pory"
	case 9, Jakson_Battle02_8
# 324 "data/rival_battles.pory"
	case 11, Jakson_Battle02_9
# 327 "data/rival_battles.pory"
	case 12, Jakson_Battle02_10
# 330 "data/rival_battles.pory"
	case 13, Jakson_Battle02_11
# 333 "data/rival_battles.pory"
	case 14, Jakson_Battle02_12
Jakson_Battle02_6:
# 338 "data/rival_battles.pory"
	applymovement 7, Common_Movement_WalkRight2
# 339 "data/rival_battles.pory"
	waitmovement 0
	goto Jakson_Battle02_3

Jakson_Battle02_8:
# 322 "data/rival_battles.pory"
	applymovement 7, Common_Movement_WalkUp
# 323 "data/rival_battles.pory"
	waitmovement 0
	goto Jakson_Battle02_6

Jakson_Battle02_9:
# 325 "data/rival_battles.pory"
	applymovement 7, Common_Movement_WalkDown
# 326 "data/rival_battles.pory"
	waitmovement 0
	goto Jakson_Battle02_6

Jakson_Battle02_10:
# 328 "data/rival_battles.pory"
	applymovement 7, Common_Movement_WalkDown2
# 329 "data/rival_battles.pory"
	waitmovement 0
	goto Jakson_Battle02_6

Jakson_Battle02_11:
# 331 "data/rival_battles.pory"
	applymovement 7, Common_Movement_WalkDown3
# 332 "data/rival_battles.pory"
	waitmovement 0
	goto Jakson_Battle02_6

Jakson_Battle02_12:
# 334 "data/rival_battles.pory"
	applymovement 7, Common_Movement_WalkDown4
# 335 "data/rival_battles.pory"
	waitmovement 0
	goto Jakson_Battle02_6


Jakson_Battle02_Block::
# 359 "data/rival_battles.pory"
	lock
# 360 "data/rival_battles.pory"
	faceplayer
# 361 "data/rival_battles.pory"
	msgbox Jakson_Battle02_Block_Text_0
# 362 "data/rival_battles.pory"
	playmoncry SPECIES_MURKROW, CRY_MODE_NORMAL
# 363 "data/rival_battles.pory"
	waitmoncry
# 364 "data/rival_battles.pory"
	release
	return


Jakson_Battle03::
# 368 "data/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 2
	goto_if_eq Jakson_Battle03_1
	return

Jakson_Battle03_1:
# 369 "data/rival_battles.pory"
	lock
# 370 "data/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 371 "data/rival_battles.pory"
	call GetRivalForNameBox
# 372 "data/rival_battles.pory"
	addobject 48
# 373 "data/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 374 "data/rival_battles.pory"
	compare VAR_TEMP_0, 31
	goto_if_eq Jakson_Battle03_4
Jakson_Battle03_3:
# 377 "data/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceDown
# 378 "data/rival_battles.pory"
	applymovement 48, Common_Movement_WalkUp5
# 379 "data/rival_battles.pory"
	waitmovement 0
# 380 "data/rival_battles.pory"
	msgbox Battle03_JaksonText_PreBattle, MSGBOX_DEFAULT
# 381 "data/rival_battles.pory"
	call GetRivalMusic
# 382 "data/rival_battles.pory"
	trainerbattle_no_intro TRAINER_JAKSON_3, Battle03_JaksonText_BattleVictory
# 383 "data/rival_battles.pory"
	call GetRivalForNameBox
# 384 "data/rival_battles.pory"
	msgbox Battle03_JaksonText_PostBattle
# 385 "data/rival_battles.pory"
	closemessage
# 386 "data/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 2
# 387 "data/rival_battles.pory"
	compare VAR_TEMP_0, 31
	goto_if_eq Jakson_Battle03_7
# 392 "data/rival_battles.pory"
	applymovement 48, Common_Movement_WalkRight
# 393 "data/rival_battles.pory"
	waitmovement 0
Jakson_Battle03_6:
# 395 "data/rival_battles.pory"
	applymovement 48, Common_Movement_WalkUp7
# 396 "data/rival_battles.pory"
	waitmovement 0
# 397 "data/rival_battles.pory"
	removeobject 48
# 398 "data/rival_battles.pory"
	fadedefaultbgm
# 399 "data/rival_battles.pory"
	release
	return

Jakson_Battle03_4:
# 375 "data/rival_battles.pory"
	setobjectxy 48, 31, 103
	goto Jakson_Battle03_3

Jakson_Battle03_7:
# 388 "data/rival_battles.pory"
	applymovement 48, Common_Movement_WalkLeft
# 389 "data/rival_battles.pory"
	waitmovement 0
	goto Jakson_Battle03_6


Jakson_Battle02_Block_Text_0:
# 361 "data/rival_battles.pory"
	.string "The Murkrow sees you trying to sneak\naround and actively blocks your\lefforts.$"
