Harper_Battle02::
# 14 "data/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 1
	goto_if_eq Harper_Battle02_1
	return

Harper_Battle02_1:
# 15 "data/rival_battles.pory"
	lock
# 16 "data/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 17 "data/rival_battles.pory"
	addobject 4
# 18 "data/rival_battles.pory"
	playse SE_EXIT
# 19 "data/rival_battles.pory"
	waitse
# 20 "data/rival_battles.pory"
	applymovement 4, Common_Movement_WalkUp4
# 21 "data/rival_battles.pory"
	waitmovement 0
# 22 "data/rival_battles.pory"
	applymovement 4, Common_Movement_WalkRight4
# 23 "data/rival_battles.pory"
	waitmovement 0
# 24 "data/rival_battles.pory"
	call GetRivalForNameBox
# 25 "data/rival_battles.pory"
	msgbox Battle02_HarperText_PreBattle, MSGBOX_DEFAULT
# 26 "data/rival_battles.pory"
	call GetRivalMusic
# 27 "data/rival_battles.pory"
	trainerbattle_no_intro TRAINER_HARPER_2, Battle02_HarperText_BattleVictory
# 28 "data/rival_battles.pory"
	call GetRivalForNameBox
# 29 "data/rival_battles.pory"
	msgbox Battle02_HarperText_PostBattle
# 30 "data/rival_battles.pory"
	closemessage
# 31 "data/rival_battles.pory"
	applymovement LOCALID_PLAYER, Harper_PlayerMoves
# 32 "data/rival_battles.pory"
	waitmovement 0
# 33 "data/rival_battles.pory"
	applymovement 4, Common_Movement_WalkRight9
# 34 "data/rival_battles.pory"
	waitmovement 0
# 35 "data/rival_battles.pory"
	removeobject 4
# 36 "data/rival_battles.pory"
	fadedefaultbgm
# 37 "data/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 1
# 38 "data/rival_battles.pory"
	release
	return


# 42 "data/rival_battles.pory"
Harper_PlayerMoves:
# 43 "data/rival_battles.pory"
	face_up
# 44 "data/rival_battles.pory"
	lock_facing_direction
# 45 "data/rival_battles.pory"
	walk_down
# 46 "data/rival_battles.pory"
	unlock_facing_direction
	step_end

Harper_Battle03::
# 50 "data/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 1
	goto_if_eq Harper_Battle03_1
	return

Harper_Battle03_1:
# 51 "data/rival_battles.pory"
	lock
# 52 "data/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 53 "data/rival_battles.pory"
	addobject 15
# 54 "data/rival_battles.pory"
	applymovement 15, Common_Movement_WalkUp3
# 55 "data/rival_battles.pory"
	waitmovement 0
# 56 "data/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceDown
# 57 "data/rival_battles.pory"
	waitmovement 0
# 58 "data/rival_battles.pory"
	delay 40
# 59 "data/rival_battles.pory"
	applymovement 15, Common_Movement_WalkUp2
# 60 "data/rival_battles.pory"
	waitmovement 0
# 61 "data/rival_battles.pory"
	call GetRivalForNameBox
# 62 "data/rival_battles.pory"
	msgbox Battle03_HarperText_PreBattle, MSGBOX_DEFAULT
# 63 "data/rival_battles.pory"
	call GetRivalMusic
# 64 "data/rival_battles.pory"
	trainerbattle_no_intro TRAINER_HARPER_3, Battle03_HarperText_BattleVictory
# 65 "data/rival_battles.pory"
	call GetRivalForNameBox
# 66 "data/rival_battles.pory"
	msgbox Battle03_HarperText_PostBattle
# 67 "data/rival_battles.pory"
	closemessage
# 68 "data/rival_battles.pory"
	applymovement 15, Common_Movement_WalkDown5
# 69 "data/rival_battles.pory"
	waitmovement 0
# 70 "data/rival_battles.pory"
	removeobject 15
# 71 "data/rival_battles.pory"
	fadedefaultbgm
# 72 "data/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 2
# 73 "data/rival_battles.pory"
	release
	return


Harper_Battle04::
# 78 "data/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 1
	goto_if_eq Harper_Battle04_1
	return

Harper_Battle04_1:
# 79 "data/rival_battles.pory"
	lock
# 80 "data/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 81 "data/rival_battles.pory"
	addobject 20
# 82 "data/rival_battles.pory"
	applymovement 20, Common_Movement_WalkUp6
# 83 "data/rival_battles.pory"
	waitmovement 0
# 84 "data/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceLeft
# 85 "data/rival_battles.pory"
	applymovement 20, Common_Movement_WalkRight4
# 86 "data/rival_battles.pory"
	waitmovement 0
# 87 "data/rival_battles.pory"
	call GetRivalForNameBox
# 88 "data/rival_battles.pory"
	msgbox Battle04_HarperText_PreBattle, MSGBOX_DEFAULT
# 89 "data/rival_battles.pory"
	call GetRivalMusic
# 90 "data/rival_battles.pory"
	trainerbattle_no_intro TRAINER_HARPER_4, Battle04_HarperText_BattleVictory
# 91 "data/rival_battles.pory"
	call GetRivalForNameBox
# 92 "data/rival_battles.pory"
	msgbox Battle04_HarperText_PostBattle
# 93 "data/rival_battles.pory"
	closemessage
# 94 "data/rival_battles.pory"
	applymovement 20, Common_Movement_WalkLeft7
# 95 "data/rival_battles.pory"
	waitmovement 0
# 96 "data/rival_battles.pory"
	removeobject 20
# 97 "data/rival_battles.pory"
	fadedefaultbgm
# 98 "data/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 3
# 99 "data/rival_battles.pory"
	release
	return


Sakura_Battle02::
# 110 "data/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 4
	goto_if_eq Sakura_Battle02_1
	return

Sakura_Battle02_1:
# 111 "data/rival_battles.pory"
	lock
# 112 "data/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 113 "data/rival_battles.pory"
	addobject 3
# 114 "data/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceDown
# 115 "data/rival_battles.pory"
	waitmovement 0
# 116 "data/rival_battles.pory"
	playse SE_PIN
# 117 "data/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 118 "data/rival_battles.pory"
	waitmovement 0
# 119 "data/rival_battles.pory"
	delay 60
# 120 "data/rival_battles.pory"
	applymovement 3, Common_Movement_WalkUp4
# 121 "data/rival_battles.pory"
	waitmovement 0
# 122 "data/rival_battles.pory"
	playse SE_LEDGE
# 123 "data/rival_battles.pory"
	applymovement 3, Common_Movement_JumpUp
# 124 "data/rival_battles.pory"
	waitmovement 0
# 125 "data/rival_battles.pory"
	playse SE_M_CUT
# 126 "data/rival_battles.pory"
	waitse
# 127 "data/rival_battles.pory"
	call GetRivalForNameBox
# 128 "data/rival_battles.pory"
	msgbox Battle02_SakuraText_PreBattle, MSGBOX_DEFAULT
# 129 "data/rival_battles.pory"
	call GetRivalMusic
# 130 "data/rival_battles.pory"
	trainerbattle_no_intro TRAINER_SAKURA_2, Battle02_SakuraText_BattleVictory
# 131 "data/rival_battles.pory"
	call GetRivalForNameBox
# 132 "data/rival_battles.pory"
	msgbox Battle02_SakuraText_PostBattle
# 133 "data/rival_battles.pory"
	closemessage
# 134 "data/rival_battles.pory"
	applymovement 3, Common_Movement_WalkDown5
# 135 "data/rival_battles.pory"
	waitmovement 0
# 136 "data/rival_battles.pory"
	removeobject 3
# 137 "data/rival_battles.pory"
	fadedefaultbgm
# 138 "data/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 1
# 139 "data/rival_battles.pory"
	release
	return


Sakura_Battle03::
# 144 "data/rival_battles.pory"
	lock
# 145 "data/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 146 "data/rival_battles.pory"
	call GetRivalForNameBox
# 147 "data/rival_battles.pory"
	msgbox Battle03_SakuraText_PreBattle, MSGBOX_DEFAULT
# 148 "data/rival_battles.pory"
	call GetRivalMusic
# 149 "data/rival_battles.pory"
	trainerbattle_no_intro TRAINER_SAKURA_3, Battle03_SakuraText_BattleVictory
# 150 "data/rival_battles.pory"
	call GetRivalForNameBox
# 151 "data/rival_battles.pory"
	msgbox Battle03_SakuraText_PostBattle
# 152 "data/rival_battles.pory"
	closemessage
# 153 "data/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 154 "data/rival_battles.pory"
	compare VAR_TEMP_1, 12
	goto_if_eq Sakura_Battle03_2
Sakura_Battle03_1:
# 158 "data/rival_battles.pory"
	applymovement 8, Common_Movement_WalkDown
# 159 "data/rival_battles.pory"
	waitmovement 0
# 160 "data/rival_battles.pory"
	playse SE_LEDGE
# 161 "data/rival_battles.pory"
	applymovement 8, Common_Movement_JumpDown2
# 162 "data/rival_battles.pory"
	waitmovement 0
# 163 "data/rival_battles.pory"
	applymovement 8, Common_Movement_WalkDown4
# 164 "data/rival_battles.pory"
	waitmovement 0
# 165 "data/rival_battles.pory"
	removeobject 8
# 166 "data/rival_battles.pory"
	setflag FLAG_TEMP_2
# 167 "data/rival_battles.pory"
	fadedefaultbgm
# 168 "data/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 2
# 169 "data/rival_battles.pory"
	delay 30
# 170 "data/rival_battles.pory"
	playse SE_EFFECTIVE
# 171 "data/rival_battles.pory"
	setmetatile 13, 11, 0x208, FALSE
# 172 "data/rival_battles.pory"
	special DrawWholeMapView
# 173 "data/rival_battles.pory"
	delay 30
# 174 "data/rival_battles.pory"
	release
	return

Sakura_Battle03_2:
# 155 "data/rival_battles.pory"
	applymovement 8, Common_Movement_WalkRight
# 156 "data/rival_battles.pory"
	waitmovement 0
	goto Sakura_Battle03_1


Redd_Battle02::
# 185 "data/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 3
	goto_if_eq Redd_Battle02_1
	return

Redd_Battle02_1:
# 186 "data/rival_battles.pory"
	lock
# 187 "data/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 188 "data/rival_battles.pory"
	call GetRivalForNameBox
# 189 "data/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 190 "data/rival_battles.pory"
	compare VAR_TEMP_1, 58
	goto_if_eq Redd_Battle02_4
# 205 "data/rival_battles.pory"
	applymovement 40, Common_Movement_FaceUp
# 206 "data/rival_battles.pory"
	waitmovement 0
# 207 "data/rival_battles.pory"
	playse SE_PIN
# 208 "data/rival_battles.pory"
	applymovement 40, Common_Movement_ExclamationMark
# 209 "data/rival_battles.pory"
	waitmovement 0
# 210 "data/rival_battles.pory"
	delay 60
# 211 "data/rival_battles.pory"
	compare VAR_TEMP_1, 52
	goto_if_eq Redd_Battle02_12
# 216 "data/rival_battles.pory"
	applymovement 40, Common_Movement_WalkUp2
# 217 "data/rival_battles.pory"
	waitmovement 0
Redd_Battle02_11:
# 219 "data/rival_battles.pory"
	applymovement 40, Common_Movement_WalkRight
# 220 "data/rival_battles.pory"
	waitmovement 0
# 221 "data/rival_battles.pory"
	msgbox Battle02_ReddText_PreBattleAlt, MSGBOX_DEFAULT
Redd_Battle02_3:
# 223 "data/rival_battles.pory"
	call GetRivalMusic
# 224 "data/rival_battles.pory"
	trainerbattle_no_intro TRAINER_REDD_2, Battle02_ReddText_BattleVictory
# 225 "data/rival_battles.pory"
	call GetRivalForNameBox
# 226 "data/rival_battles.pory"
	msgbox Battle02_ReddText_PostBattle
# 227 "data/rival_battles.pory"
	closemessage
# 228 "data/rival_battles.pory"
	applymovement 40, Common_Movement_WalkUp6
# 229 "data/rival_battles.pory"
	waitmovement 0
# 230 "data/rival_battles.pory"
	removeobject 40
# 231 "data/rival_battles.pory"
	fadedefaultbgm
# 232 "data/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 1
# 233 "data/rival_battles.pory"
	setflag FLAG_TEMP_2
# 234 "data/rival_battles.pory"
	release
	return

Redd_Battle02_4:
# 191 "data/rival_battles.pory"
	switch VAR_TEMP_0
# 192 "data/rival_battles.pory"
	case 17, Redd_Battle02_9
# 195 "data/rival_battles.pory"
	case 19, Redd_Battle02_10
Redd_Battle02_7:
# 200 "data/rival_battles.pory"
	applymovement 40, Common_Movement_WalkDown2
# 201 "data/rival_battles.pory"
	waitmovement 0
# 202 "data/rival_battles.pory"
	msgbox Battle02_ReddText_PreBattle, MSGBOX_DEFAULT
	goto Redd_Battle02_3

Redd_Battle02_9:
# 193 "data/rival_battles.pory"
	applymovement 40, Common_Movement_WalkLeft
# 194 "data/rival_battles.pory"
	waitmovement 0
	goto Redd_Battle02_7

Redd_Battle02_10:
# 196 "data/rival_battles.pory"
	applymovement 40, Common_Movement_WalkRight
# 197 "data/rival_battles.pory"
	waitmovement 0
	goto Redd_Battle02_7

Redd_Battle02_12:
# 212 "data/rival_battles.pory"
	applymovement 40, Common_Movement_WalkUp3
# 213 "data/rival_battles.pory"
	waitmovement 0
	goto Redd_Battle02_11


Redd_Battle03::
# 239 "data/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 3
	goto_if_eq Redd_Battle03_1
	return

Redd_Battle03_1:
# 240 "data/rival_battles.pory"
	lock
# 241 "data/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 242 "data/rival_battles.pory"
	call GetRivalForNameBox
# 243 "data/rival_battles.pory"
	addobject 5
# 244 "data/rival_battles.pory"
	playse SE_EXIT
# 245 "data/rival_battles.pory"
	waitse
# 246 "data/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 247 "data/rival_battles.pory"
	compare VAR_TEMP_1, 7
	goto_if_eq Redd_Battle03_4
# 253 "data/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceRight
# 254 "data/rival_battles.pory"
	applymovement 5, Common_Movement_WalkDown3
# 255 "data/rival_battles.pory"
	waitmovement 0
Redd_Battle03_3:
# 257 "data/rival_battles.pory"
	applymovement 5, Common_Movement_WalkLeft3
# 258 "data/rival_battles.pory"
	waitmovement 0
# 259 "data/rival_battles.pory"
	compare VAR_TEMP_1, 7
	goto_if_eq Redd_Battle03_8
# 265 "data/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceUp
# 266 "data/rival_battles.pory"
	applymovement 5, Common_Movement_WalkInPlaceDown
# 267 "data/rival_battles.pory"
	waitmovement 0
Redd_Battle03_7:
# 269 "data/rival_battles.pory"
	waitmovement 0
# 270 "data/rival_battles.pory"
	msgbox Battle03_ReddText_PreBattle, MSGBOX_DEFAULT
# 271 "data/rival_battles.pory"
	call GetRivalMusic
# 272 "data/rival_battles.pory"
	trainerbattle_no_intro TRAINER_REDD_3, Battle03_ReddText_BattleVictory
# 273 "data/rival_battles.pory"
	call GetRivalForNameBox
# 274 "data/rival_battles.pory"
	msgbox Battle03_ReddText_PostBattle
# 275 "data/rival_battles.pory"
	closemessage
# 276 "data/rival_battles.pory"
	applymovement 5, Common_Movement_WalkLeft4
# 277 "data/rival_battles.pory"
	waitmovement 0
# 278 "data/rival_battles.pory"
	compare VAR_TEMP_1, 7
	goto_if_eq Redd_Battle03_12
# 283 "data/rival_battles.pory"
	applymovement 5, Common_Movement_WalkDown
# 284 "data/rival_battles.pory"
	waitmovement 0
Redd_Battle03_11:
# 286 "data/rival_battles.pory"
	removeobject 5
# 287 "data/rival_battles.pory"
	playse SE_EXIT
# 288 "data/rival_battles.pory"
	waitse
# 289 "data/rival_battles.pory"
	fadedefaultbgm
# 290 "data/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 2
# 291 "data/rival_battles.pory"
	release
	return

Redd_Battle03_4:
# 248 "data/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceRight
# 249 "data/rival_battles.pory"
	applymovement 5, Common_Movement_WalkDown4
# 250 "data/rival_battles.pory"
	waitmovement 0
	goto Redd_Battle03_3

Redd_Battle03_8:
# 260 "data/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceDown
# 261 "data/rival_battles.pory"
	applymovement 5, Common_Movement_WalkInPlaceUp
# 262 "data/rival_battles.pory"
	waitmovement 0
	goto Redd_Battle03_7

Redd_Battle03_12:
# 279 "data/rival_battles.pory"
	applymovement 5, Common_Movement_WalkInPlaceDown
# 280 "data/rival_battles.pory"
	waitmovement 0
	goto Redd_Battle03_11


Redd_Battle04::
# 296 "data/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 3
	goto_if_eq Redd_Battle04_2
	return

Redd_Battle04_1:
# 297 "data/rival_battles.pory"
	lock
# 298 "data/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 299 "data/rival_battles.pory"
	call GetRivalForNameBox
# 300 "data/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 301 "data/rival_battles.pory"
	compare VAR_TEMP_1, 5
	goto_if_eq Redd_Battle04_6
# 312 "data/rival_battles.pory"
	faceplayer
Redd_Battle04_5:
# 314 "data/rival_battles.pory"
	msgbox Battle04_ReddText_PreBattle, MSGBOX_DEFAULT
# 315 "data/rival_battles.pory"
	call GetRivalMusic
# 316 "data/rival_battles.pory"
	trainerbattle_no_intro TRAINER_REDD_4, Battle04_ReddText_BattleVictory
# 317 "data/rival_battles.pory"
	call GetRivalForNameBox
# 318 "data/rival_battles.pory"
	msgbox Battle04_ReddText_PostBattle1
# 319 "data/rival_battles.pory"
	setvar VAR_0x8004, 1
# 320 "data/rival_battles.pory"
	specialvar VAR_RESULT, ScriptGetPokedexInfo
# 321 "data/rival_battles.pory"
	compare VAR_0x8006, 50
	goto_if_ge Redd_Battle04_10
# 325 "data/rival_battles.pory"
	msgbox Battle04_ReddText_PostBattle2a
Redd_Battle04_9:
# 327 "data/rival_battles.pory"
	msgbox Battle04_ReddText_PostBattle3
# 328 "data/rival_battles.pory"
	closemessage
# 329 "data/rival_battles.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 330 "data/rival_battles.pory"
	removeobject 10
# 331 "data/rival_battles.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 332 "data/rival_battles.pory"
	fadedefaultbgm
# 333 "data/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 3
# 334 "data/rival_battles.pory"
	setflag FLAG_TEMP_1
# 335 "data/rival_battles.pory"
	release
	return

Redd_Battle04_2:
# 296 "data/rival_battles.pory"
	goto_if_set FLAG_BADGE07_GET, Redd_Battle04_1
	return

Redd_Battle04_6:
# 302 "data/rival_battles.pory"
	applymovement 10, Common_Movement_ExclamationMark
# 303 "data/rival_battles.pory"
	playse SE_PIN
# 304 "data/rival_battles.pory"
	delay 60
# 305 "data/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceRight
# 306 "data/rival_battles.pory"
	compare VAR_TEMP_0, 13
	goto_if_eq Redd_Battle04_14
Redd_Battle04_13:
# 309 "data/rival_battles.pory"
	waitmovement 0
	goto Redd_Battle04_5

Redd_Battle04_10:
# 322 "data/rival_battles.pory"
	msgbox Battle04_ReddText_PostBattle2b
	goto Redd_Battle04_9

Redd_Battle04_14:
# 307 "data/rival_battles.pory"
	applymovement 10, Common_Movement_WalkLeft
	goto Redd_Battle04_13


Baron_Battle02::
# 347 "data/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 0
	goto_if_eq Baron_Battle02_1
	return

Baron_Battle02_1:
# 348 "data/rival_battles.pory"
	lock
# 349 "data/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 350 "data/rival_battles.pory"
	call GetRivalForNameBox
# 351 "data/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 352 "data/rival_battles.pory"
	compare VAR_TEMP_1, 9
	goto_if_eq Baron_Battle02_4
# 361 "data/rival_battles.pory"
	faceplayer
Baron_Battle02_3:
# 363 "data/rival_battles.pory"
	msgbox Battle02_BaronText_PreBattle, MSGBOX_DEFAULT
# 364 "data/rival_battles.pory"
	call GetRivalMusic
# 365 "data/rival_battles.pory"
	trainerbattle_no_intro TRAINER_BARON_2, Battle02_BaronText_BattleVictory
# 366 "data/rival_battles.pory"
	call GetRivalForNameBox
# 367 "data/rival_battles.pory"
	msgbox Battle02_BaronText_PostBattle
# 368 "data/rival_battles.pory"
	closemessage
# 369 "data/rival_battles.pory"
	fadedefaultbgm
# 370 "data/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 1
# 371 "data/rival_battles.pory"
	setflag FLAG_TEMP_2
# 372 "data/rival_battles.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 373 "data/rival_battles.pory"
	removeobject 7
# 374 "data/rival_battles.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 375 "data/rival_battles.pory"
	release
	return

Baron_Battle02_4:
# 353 "data/rival_battles.pory"
	applymovement 7, Common_Movement_WalkInPlaceUp
# 354 "data/rival_battles.pory"
	waitmovement 0
# 355 "data/rival_battles.pory"
	delay 50
# 356 "data/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceDown
# 357 "data/rival_battles.pory"
	applymovement 7, Common_Movement_WalkUp
# 358 "data/rival_battles.pory"
	waitmovement 0
	goto Baron_Battle02_3


Baron_Battle03::
# 380 "data/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 0
	goto_if_eq Baron_Battle03_2
	return

Baron_Battle03_1:
# 381 "data/rival_battles.pory"
	lock
# 382 "data/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 383 "data/rival_battles.pory"
	call GetRivalForNameBox
# 384 "data/rival_battles.pory"
	addobject 14
# 385 "data/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 386 "data/rival_battles.pory"
	compare VAR_TEMP_1, 8
	goto_if_eq Baron_Battle03_6
# 389 "data/rival_battles.pory"
	compare VAR_TEMP_1, 9
	goto_if_eq Baron_Battle03_7
# 392 "data/rival_battles.pory"
	compare VAR_TEMP_1, 10
	goto_if_eq Baron_Battle03_8
# 395 "data/rival_battles.pory"
	compare VAR_TEMP_1, 11
	goto_if_eq Baron_Battle03_9
Baron_Battle03_5:
# 400 "data/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceLeft
# 401 "data/rival_battles.pory"
	applymovement 14, Common_Movement_WalkRight7
# 402 "data/rival_battles.pory"
	waitmovement 0
# 403 "data/rival_battles.pory"
	msgbox Battle03_BaronText_PreBattle, MSGBOX_DEFAULT
# 404 "data/rival_battles.pory"
	call GetRivalMusic
# 405 "data/rival_battles.pory"
	trainerbattle_no_intro TRAINER_BARON_3, Battle03_BaronText_BattleVictory
# 406 "data/rival_battles.pory"
	call GetRivalForNameBox
# 407 "data/rival_battles.pory"
	msgbox Battle03_BaronText_PostBattle
# 408 "data/rival_battles.pory"
	closemessage
# 409 "data/rival_battles.pory"
	fadedefaultbgm
# 410 "data/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 2
# 411 "data/rival_battles.pory"
	applymovement 14, Common_Movement_WalkLeft7
# 412 "data/rival_battles.pory"
	waitmovement 0
# 413 "data/rival_battles.pory"
	removeobject 14
# 414 "data/rival_battles.pory"
	release
	return

Baron_Battle03_2:
# 380 "data/rival_battles.pory"
	goto_if_set FLAG_BADGE05_GET, Baron_Battle03_1
	return

Baron_Battle03_6:
# 387 "data/rival_battles.pory"
	setobjectxy 14, 30, 8
	goto Baron_Battle03_5

Baron_Battle03_7:
# 390 "data/rival_battles.pory"
	setobjectxy 14, 30, 9
	goto Baron_Battle03_5

Baron_Battle03_8:
# 393 "data/rival_battles.pory"
	setobjectxy 14, 30, 10
	goto Baron_Battle03_5

Baron_Battle03_9:
# 396 "data/rival_battles.pory"
	setobjectxy 14, 30, 10
# 397 "data/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
# 398 "data/rival_battles.pory"
	waitmovement 0
	goto Baron_Battle03_5


Baron_Battle04::
# 419 "data/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 0
	goto_if_eq Baron_Battle04_2
	return

Baron_Battle04_1:
# 420 "data/rival_battles.pory"
	lock
# 421 "data/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 422 "data/rival_battles.pory"
	call GetRivalForNameBox
# 423 "data/rival_battles.pory"
	addobject 27
# 424 "data/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 425 "data/rival_battles.pory"
	compare VAR_TEMP_0, 55
	goto_if_eq Baron_Battle04_6
# 430 "data/rival_battles.pory"
	applymovement 27, Common_Movement_WalkLeft8
# 431 "data/rival_battles.pory"
	waitmovement 0
Baron_Battle04_5:
# 433 "data/rival_battles.pory"
	applymovement 27, Common_Movement_WalkInPlaceUp
# 434 "data/rival_battles.pory"
	waitmovement 0
# 435 "data/rival_battles.pory"
	msgbox Battle04_BaronText_PreBattle, MSGBOX_DEFAULT
# 436 "data/rival_battles.pory"
	call GetRivalMusic
# 437 "data/rival_battles.pory"
	trainerbattle_no_intro TRAINER_BARON_4, Battle04_BaronText_BattleVictory
# 438 "data/rival_battles.pory"
	call GetRivalForNameBox
# 439 "data/rival_battles.pory"
	msgbox Battle04_BaronText_PostBattle
# 440 "data/rival_battles.pory"
	closemessage
# 441 "data/rival_battles.pory"
	fadedefaultbgm
# 442 "data/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 3
# 443 "data/rival_battles.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 444 "data/rival_battles.pory"
	removeobject 27
# 445 "data/rival_battles.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 446 "data/rival_battles.pory"
	release
	return

Baron_Battle04_2:
# 419 "data/rival_battles.pory"
	goto_if_set FLAG_MET_TEAM_AQUA_HARBOR, Baron_Battle04_1
	return

Baron_Battle04_6:
# 426 "data/rival_battles.pory"
	applymovement 27, Common_Movement_WalkLeft9
# 427 "data/rival_battles.pory"
	waitmovement 0
	goto Baron_Battle04_5


Jakson_Battle02::
# 458 "data/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 2
	goto_if_eq Jakson_Battle02_1
	return

Jakson_Battle02_1:
# 459 "data/rival_battles.pory"
	lock
# 460 "data/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 461 "data/rival_battles.pory"
	delay 30
# 462 "data/rival_battles.pory"
	call GetRivalForNameBox
# 463 "data/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 464 "data/rival_battles.pory"
	compare VAR_TEMP_0, 5
	goto_if_eq Jakson_Battle02_4
Jakson_Battle02_3:
# 486 "data/rival_battles.pory"
	msgbox Battle02_JaksonText_PreBattle, MSGBOX_DEFAULT
# 487 "data/rival_battles.pory"
	call GetRivalMusic
# 488 "data/rival_battles.pory"
	trainerbattle_no_intro TRAINER_JAKSON_2, Battle02_JaksonText_BattleVictory
# 489 "data/rival_battles.pory"
	call GetRivalForNameBox
# 490 "data/rival_battles.pory"
	msgbox Battle02_JaksonText_PostBattle
# 491 "data/rival_battles.pory"
	closemessage
# 492 "data/rival_battles.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 493 "data/rival_battles.pory"
	removeobject 7
# 494 "data/rival_battles.pory"
	removeobject 6
# 495 "data/rival_battles.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 496 "data/rival_battles.pory"
	fadedefaultbgm
# 497 "data/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 1
# 498 "data/rival_battles.pory"
	setflag FLAG_TEMP_2
# 499 "data/rival_battles.pory"
	release
	return

Jakson_Battle02_4:
# 465 "data/rival_battles.pory"
	switch VAR_TEMP_1
# 466 "data/rival_battles.pory"
	case 9, Jakson_Battle02_8
# 469 "data/rival_battles.pory"
	case 11, Jakson_Battle02_9
# 472 "data/rival_battles.pory"
	case 12, Jakson_Battle02_10
# 475 "data/rival_battles.pory"
	case 13, Jakson_Battle02_11
# 478 "data/rival_battles.pory"
	case 14, Jakson_Battle02_12
Jakson_Battle02_6:
# 483 "data/rival_battles.pory"
	applymovement 7, Common_Movement_WalkRight2
# 484 "data/rival_battles.pory"
	waitmovement 0
	goto Jakson_Battle02_3

Jakson_Battle02_8:
# 467 "data/rival_battles.pory"
	applymovement 7, Common_Movement_WalkUp
# 468 "data/rival_battles.pory"
	waitmovement 0
	goto Jakson_Battle02_6

Jakson_Battle02_9:
# 470 "data/rival_battles.pory"
	applymovement 7, Common_Movement_WalkDown
# 471 "data/rival_battles.pory"
	waitmovement 0
	goto Jakson_Battle02_6

Jakson_Battle02_10:
# 473 "data/rival_battles.pory"
	applymovement 7, Common_Movement_WalkDown2
# 474 "data/rival_battles.pory"
	waitmovement 0
	goto Jakson_Battle02_6

Jakson_Battle02_11:
# 476 "data/rival_battles.pory"
	applymovement 7, Common_Movement_WalkDown3
# 477 "data/rival_battles.pory"
	waitmovement 0
	goto Jakson_Battle02_6

Jakson_Battle02_12:
# 479 "data/rival_battles.pory"
	applymovement 7, Common_Movement_WalkDown4
# 480 "data/rival_battles.pory"
	waitmovement 0
	goto Jakson_Battle02_6


Jakson_Battle02_Block::
# 504 "data/rival_battles.pory"
	lock
# 505 "data/rival_battles.pory"
	faceplayer
# 506 "data/rival_battles.pory"
	msgbox Jakson_Battle02_Block_Text_0
# 507 "data/rival_battles.pory"
	playmoncry SPECIES_MURKROW, CRY_MODE_NORMAL
# 508 "data/rival_battles.pory"
	waitmoncry
# 509 "data/rival_battles.pory"
	release
	return


Jakson_Battle03::
# 513 "data/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 2
	goto_if_eq Jakson_Battle03_1
	return

Jakson_Battle03_1:
# 514 "data/rival_battles.pory"
	lock
# 515 "data/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 516 "data/rival_battles.pory"
	call GetRivalForNameBox
# 517 "data/rival_battles.pory"
	addobject 48
# 518 "data/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 519 "data/rival_battles.pory"
	compare VAR_TEMP_0, 31
	goto_if_eq Jakson_Battle03_4
Jakson_Battle03_3:
# 522 "data/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceDown
# 523 "data/rival_battles.pory"
	applymovement 48, Common_Movement_WalkUp5
# 524 "data/rival_battles.pory"
	waitmovement 0
# 525 "data/rival_battles.pory"
	msgbox Battle03_JaksonText_PreBattle, MSGBOX_DEFAULT
# 526 "data/rival_battles.pory"
	call GetRivalMusic
# 527 "data/rival_battles.pory"
	trainerbattle_no_intro TRAINER_JAKSON_3, Battle03_JaksonText_BattleVictory
# 528 "data/rival_battles.pory"
	call GetRivalForNameBox
# 529 "data/rival_battles.pory"
	msgbox Battle03_JaksonText_PostBattle
# 530 "data/rival_battles.pory"
	closemessage
# 531 "data/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 2
# 532 "data/rival_battles.pory"
	compare VAR_TEMP_0, 31
	goto_if_eq Jakson_Battle03_7
# 537 "data/rival_battles.pory"
	applymovement 48, Common_Movement_WalkRight
# 538 "data/rival_battles.pory"
	waitmovement 0
Jakson_Battle03_6:
# 540 "data/rival_battles.pory"
	applymovement 48, Common_Movement_WalkUp7
# 541 "data/rival_battles.pory"
	waitmovement 0
# 542 "data/rival_battles.pory"
	removeobject 48
# 543 "data/rival_battles.pory"
	fadedefaultbgm
# 544 "data/rival_battles.pory"
	release
	return

Jakson_Battle03_4:
# 520 "data/rival_battles.pory"
	setobjectxy 48, 31, 103
	goto Jakson_Battle03_3

Jakson_Battle03_7:
# 533 "data/rival_battles.pory"
	applymovement 48, Common_Movement_WalkLeft
# 534 "data/rival_battles.pory"
	waitmovement 0
	goto Jakson_Battle03_6


Jakson_Battle02_Block_Text_0:
# 506 "data/rival_battles.pory"
	.string "The Murkrow sees you trying to sneak\naround and actively blocks your\lefforts.$"
