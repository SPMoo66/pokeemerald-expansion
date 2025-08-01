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
# 184 "data/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 3
	goto_if_eq Redd_Battle02_1
	return

Redd_Battle02_1:
# 185 "data/rival_battles.pory"
	lock
# 186 "data/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 187 "data/rival_battles.pory"
	call GetRivalForNameBox
# 188 "data/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 189 "data/rival_battles.pory"
	compare VAR_TEMP_1, 58
	goto_if_eq Redd_Battle02_4
# 204 "data/rival_battles.pory"
	applymovement 40, Common_Movement_FaceUp
# 205 "data/rival_battles.pory"
	waitmovement 0
# 206 "data/rival_battles.pory"
	playse SE_PIN
# 207 "data/rival_battles.pory"
	applymovement 40, Common_Movement_ExclamationMark
# 208 "data/rival_battles.pory"
	waitmovement 0
# 209 "data/rival_battles.pory"
	delay 60
# 210 "data/rival_battles.pory"
	compare VAR_TEMP_1, 52
	goto_if_eq Redd_Battle02_12
# 215 "data/rival_battles.pory"
	applymovement 40, Common_Movement_WalkUp2
# 216 "data/rival_battles.pory"
	waitmovement 0
Redd_Battle02_11:
# 218 "data/rival_battles.pory"
	applymovement 40, Common_Movement_WalkRight
# 219 "data/rival_battles.pory"
	waitmovement 0
# 220 "data/rival_battles.pory"
	msgbox Battle02_ReddText_PreBattleAlt, MSGBOX_DEFAULT
Redd_Battle02_3:
# 222 "data/rival_battles.pory"
	call GetRivalMusic
# 223 "data/rival_battles.pory"
	trainerbattle_no_intro TRAINER_REDD_2, Battle02_ReddText_BattleVictory
# 224 "data/rival_battles.pory"
	call GetRivalForNameBox
# 225 "data/rival_battles.pory"
	msgbox Battle02_ReddText_PostBattle
# 226 "data/rival_battles.pory"
	closemessage
# 227 "data/rival_battles.pory"
	applymovement 40, Common_Movement_WalkUp6
# 228 "data/rival_battles.pory"
	waitmovement 0
# 229 "data/rival_battles.pory"
	removeobject 40
# 230 "data/rival_battles.pory"
	fadedefaultbgm
# 231 "data/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 1
# 232 "data/rival_battles.pory"
	setflag FLAG_TEMP_2
# 233 "data/rival_battles.pory"
	release
	return

Redd_Battle02_4:
# 190 "data/rival_battles.pory"
	switch VAR_TEMP_0
# 191 "data/rival_battles.pory"
	case 17, Redd_Battle02_9
# 194 "data/rival_battles.pory"
	case 19, Redd_Battle02_10
Redd_Battle02_7:
# 199 "data/rival_battles.pory"
	applymovement 40, Common_Movement_WalkDown2
# 200 "data/rival_battles.pory"
	waitmovement 0
# 201 "data/rival_battles.pory"
	msgbox Battle02_ReddText_PreBattle, MSGBOX_DEFAULT
	goto Redd_Battle02_3

Redd_Battle02_9:
# 192 "data/rival_battles.pory"
	applymovement 40, Common_Movement_WalkLeft
# 193 "data/rival_battles.pory"
	waitmovement 0
	goto Redd_Battle02_7

Redd_Battle02_10:
# 195 "data/rival_battles.pory"
	applymovement 40, Common_Movement_WalkRight
# 196 "data/rival_battles.pory"
	waitmovement 0
	goto Redd_Battle02_7

Redd_Battle02_12:
# 211 "data/rival_battles.pory"
	applymovement 40, Common_Movement_WalkUp3
# 212 "data/rival_battles.pory"
	waitmovement 0
	goto Redd_Battle02_11


Redd_Battle03::
# 238 "data/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 3
	goto_if_eq Redd_Battle03_1
	return

Redd_Battle03_1:
# 239 "data/rival_battles.pory"
	lock
# 240 "data/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 241 "data/rival_battles.pory"
	call GetRivalForNameBox
# 242 "data/rival_battles.pory"
	addobject 5
# 243 "data/rival_battles.pory"
	playse SE_EXIT
# 244 "data/rival_battles.pory"
	waitse
# 245 "data/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 246 "data/rival_battles.pory"
	compare VAR_TEMP_1, 7
	goto_if_eq Redd_Battle03_4
# 252 "data/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceRight
# 253 "data/rival_battles.pory"
	applymovement 5, Common_Movement_WalkDown3
# 254 "data/rival_battles.pory"
	waitmovement 0
Redd_Battle03_3:
# 256 "data/rival_battles.pory"
	applymovement 5, Common_Movement_WalkLeft3
# 257 "data/rival_battles.pory"
	waitmovement 0
# 258 "data/rival_battles.pory"
	compare VAR_TEMP_1, 7
	goto_if_eq Redd_Battle03_8
# 264 "data/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceUp
# 265 "data/rival_battles.pory"
	applymovement 5, Common_Movement_WalkInPlaceDown
# 266 "data/rival_battles.pory"
	waitmovement 0
Redd_Battle03_7:
# 268 "data/rival_battles.pory"
	waitmovement 0
# 269 "data/rival_battles.pory"
	msgbox Battle03_ReddText_PreBattle, MSGBOX_DEFAULT
# 270 "data/rival_battles.pory"
	call GetRivalMusic
# 271 "data/rival_battles.pory"
	trainerbattle_no_intro TRAINER_REDD_3, Battle03_ReddText_BattleVictory
# 272 "data/rival_battles.pory"
	call GetRivalForNameBox
# 273 "data/rival_battles.pory"
	msgbox Battle03_ReddText_PostBattle
# 274 "data/rival_battles.pory"
	closemessage
# 275 "data/rival_battles.pory"
	applymovement 5, Common_Movement_WalkLeft4
# 276 "data/rival_battles.pory"
	waitmovement 0
# 277 "data/rival_battles.pory"
	compare VAR_TEMP_1, 7
	goto_if_eq Redd_Battle03_12
# 282 "data/rival_battles.pory"
	applymovement 5, Common_Movement_WalkDown
# 283 "data/rival_battles.pory"
	waitmovement 0
Redd_Battle03_11:
# 285 "data/rival_battles.pory"
	removeobject 5
# 286 "data/rival_battles.pory"
	playse SE_EXIT
# 287 "data/rival_battles.pory"
	waitse
# 288 "data/rival_battles.pory"
	fadedefaultbgm
# 289 "data/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 2
# 290 "data/rival_battles.pory"
	release
	return

Redd_Battle03_4:
# 247 "data/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceRight
# 248 "data/rival_battles.pory"
	applymovement 5, Common_Movement_WalkDown4
# 249 "data/rival_battles.pory"
	waitmovement 0
	goto Redd_Battle03_3

Redd_Battle03_8:
# 259 "data/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceDown
# 260 "data/rival_battles.pory"
	applymovement 5, Common_Movement_WalkInPlaceUp
# 261 "data/rival_battles.pory"
	waitmovement 0
	goto Redd_Battle03_7

Redd_Battle03_12:
# 278 "data/rival_battles.pory"
	applymovement 5, Common_Movement_WalkInPlaceDown
# 279 "data/rival_battles.pory"
	waitmovement 0
	goto Redd_Battle03_11


Baron_Battle02::
# 302 "data/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 0
	goto_if_eq Baron_Battle02_1
	return

Baron_Battle02_1:
# 303 "data/rival_battles.pory"
	lock
# 304 "data/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 305 "data/rival_battles.pory"
	call GetRivalForNameBox
# 306 "data/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 307 "data/rival_battles.pory"
	compare VAR_TEMP_1, 9
	goto_if_eq Baron_Battle02_4
# 316 "data/rival_battles.pory"
	faceplayer
Baron_Battle02_3:
# 318 "data/rival_battles.pory"
	msgbox Battle02_BaronText_PreBattle, MSGBOX_DEFAULT
# 319 "data/rival_battles.pory"
	call GetRivalMusic
# 320 "data/rival_battles.pory"
	trainerbattle_no_intro TRAINER_BARON_2, Battle02_BaronText_BattleVictory
# 321 "data/rival_battles.pory"
	call GetRivalForNameBox
# 322 "data/rival_battles.pory"
	msgbox Battle02_BaronText_PostBattle
# 323 "data/rival_battles.pory"
	closemessage
# 324 "data/rival_battles.pory"
	fadedefaultbgm
# 325 "data/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 1
# 326 "data/rival_battles.pory"
	setflag FLAG_TEMP_2
# 327 "data/rival_battles.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 328 "data/rival_battles.pory"
	removeobject 7
# 329 "data/rival_battles.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 330 "data/rival_battles.pory"
	release
	return

Baron_Battle02_4:
# 308 "data/rival_battles.pory"
	applymovement 7, Common_Movement_WalkInPlaceUp
# 309 "data/rival_battles.pory"
	waitmovement 0
# 310 "data/rival_battles.pory"
	delay 50
# 311 "data/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceDown
# 312 "data/rival_battles.pory"
	applymovement 7, Common_Movement_WalkUp
# 313 "data/rival_battles.pory"
	waitmovement 0
	goto Baron_Battle02_3


Baron_Battle03::
# 335 "data/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 0
	goto_if_eq Baron_Battle03_2
	return

Baron_Battle03_1:
# 336 "data/rival_battles.pory"
	lock
# 337 "data/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 338 "data/rival_battles.pory"
	call GetRivalForNameBox
# 339 "data/rival_battles.pory"
	addobject 14
# 340 "data/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 341 "data/rival_battles.pory"
	compare VAR_TEMP_1, 8
	goto_if_eq Baron_Battle03_6
# 344 "data/rival_battles.pory"
	compare VAR_TEMP_1, 9
	goto_if_eq Baron_Battle03_7
# 347 "data/rival_battles.pory"
	compare VAR_TEMP_1, 10
	goto_if_eq Baron_Battle03_8
# 350 "data/rival_battles.pory"
	compare VAR_TEMP_1, 11
	goto_if_eq Baron_Battle03_9
Baron_Battle03_5:
# 355 "data/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceLeft
# 356 "data/rival_battles.pory"
	applymovement 14, Common_Movement_WalkRight7
# 357 "data/rival_battles.pory"
	waitmovement 0
# 358 "data/rival_battles.pory"
	msgbox Battle03_BaronText_PreBattle, MSGBOX_DEFAULT
# 359 "data/rival_battles.pory"
	call GetRivalMusic
# 360 "data/rival_battles.pory"
	trainerbattle_no_intro TRAINER_BARON_3, Battle03_BaronText_BattleVictory
# 361 "data/rival_battles.pory"
	call GetRivalForNameBox
# 362 "data/rival_battles.pory"
	msgbox Battle03_BaronText_PostBattle
# 363 "data/rival_battles.pory"
	closemessage
# 364 "data/rival_battles.pory"
	fadedefaultbgm
# 365 "data/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 2
# 366 "data/rival_battles.pory"
	applymovement 14, Common_Movement_WalkLeft7
# 367 "data/rival_battles.pory"
	waitmovement 0
# 368 "data/rival_battles.pory"
	removeobject 14
# 369 "data/rival_battles.pory"
	release
	return

Baron_Battle03_2:
# 335 "data/rival_battles.pory"
	goto_if_set FLAG_BADGE05_GET, Baron_Battle03_1
	return

Baron_Battle03_6:
# 342 "data/rival_battles.pory"
	setobjectxy 14, 30, 8
	goto Baron_Battle03_5

Baron_Battle03_7:
# 345 "data/rival_battles.pory"
	setobjectxy 14, 30, 9
	goto Baron_Battle03_5

Baron_Battle03_8:
# 348 "data/rival_battles.pory"
	setobjectxy 14, 30, 10
	goto Baron_Battle03_5

Baron_Battle03_9:
# 351 "data/rival_battles.pory"
	setobjectxy 14, 30, 10
# 352 "data/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
# 353 "data/rival_battles.pory"
	waitmovement 0
	goto Baron_Battle03_5


Baron_Battle04::
# 374 "data/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 0
	goto_if_eq Baron_Battle04_2
	return

Baron_Battle04_1:
# 375 "data/rival_battles.pory"
	lock
# 376 "data/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 377 "data/rival_battles.pory"
	call GetRivalForNameBox
# 378 "data/rival_battles.pory"
	addobject 27
# 379 "data/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 380 "data/rival_battles.pory"
	compare VAR_TEMP_0, 55
	goto_if_eq Baron_Battle04_6
# 385 "data/rival_battles.pory"
	applymovement 27, Common_Movement_WalkLeft8
# 386 "data/rival_battles.pory"
	waitmovement 0
Baron_Battle04_5:
# 388 "data/rival_battles.pory"
	applymovement 27, Common_Movement_WalkInPlaceUp
# 389 "data/rival_battles.pory"
	waitmovement 0
# 390 "data/rival_battles.pory"
	msgbox Battle04_BaronText_PreBattle, MSGBOX_DEFAULT
# 391 "data/rival_battles.pory"
	call GetRivalMusic
# 392 "data/rival_battles.pory"
	trainerbattle_no_intro TRAINER_BARON_4, Battle04_BaronText_BattleVictory
# 393 "data/rival_battles.pory"
	call GetRivalForNameBox
# 394 "data/rival_battles.pory"
	msgbox Battle04_BaronText_PostBattle
# 395 "data/rival_battles.pory"
	closemessage
# 396 "data/rival_battles.pory"
	fadedefaultbgm
# 397 "data/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 3
# 398 "data/rival_battles.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 399 "data/rival_battles.pory"
	removeobject 27
# 400 "data/rival_battles.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 401 "data/rival_battles.pory"
	release
	return

Baron_Battle04_2:
# 374 "data/rival_battles.pory"
	goto_if_set FLAG_MET_TEAM_AQUA_HARBOR, Baron_Battle04_1
	return

Baron_Battle04_6:
# 381 "data/rival_battles.pory"
	applymovement 27, Common_Movement_WalkLeft9
# 382 "data/rival_battles.pory"
	waitmovement 0
	goto Baron_Battle04_5


Jakson_Battle02::
# 413 "data/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 2
	goto_if_eq Jakson_Battle02_1
	return

Jakson_Battle02_1:
# 414 "data/rival_battles.pory"
	lock
# 415 "data/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 416 "data/rival_battles.pory"
	delay 30
# 417 "data/rival_battles.pory"
	call GetRivalForNameBox
# 418 "data/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 419 "data/rival_battles.pory"
	compare VAR_TEMP_0, 5
	goto_if_eq Jakson_Battle02_4
Jakson_Battle02_3:
# 441 "data/rival_battles.pory"
	msgbox Battle02_JaksonText_PreBattle, MSGBOX_DEFAULT
# 442 "data/rival_battles.pory"
	call GetRivalMusic
# 443 "data/rival_battles.pory"
	trainerbattle_no_intro TRAINER_JAKSON_2, Battle02_JaksonText_BattleVictory
# 444 "data/rival_battles.pory"
	call GetRivalForNameBox
# 445 "data/rival_battles.pory"
	msgbox Battle02_JaksonText_PostBattle
# 446 "data/rival_battles.pory"
	closemessage
# 447 "data/rival_battles.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 448 "data/rival_battles.pory"
	removeobject 7
# 449 "data/rival_battles.pory"
	removeobject 6
# 450 "data/rival_battles.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 451 "data/rival_battles.pory"
	fadedefaultbgm
# 452 "data/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 1
# 453 "data/rival_battles.pory"
	setflag FLAG_TEMP_2
# 454 "data/rival_battles.pory"
	release
	return

Jakson_Battle02_4:
# 420 "data/rival_battles.pory"
	switch VAR_TEMP_1
# 421 "data/rival_battles.pory"
	case 9, Jakson_Battle02_8
# 424 "data/rival_battles.pory"
	case 11, Jakson_Battle02_9
# 427 "data/rival_battles.pory"
	case 12, Jakson_Battle02_10
# 430 "data/rival_battles.pory"
	case 13, Jakson_Battle02_11
# 433 "data/rival_battles.pory"
	case 14, Jakson_Battle02_12
Jakson_Battle02_6:
# 438 "data/rival_battles.pory"
	applymovement 7, Common_Movement_WalkRight2
# 439 "data/rival_battles.pory"
	waitmovement 0
	goto Jakson_Battle02_3

Jakson_Battle02_8:
# 422 "data/rival_battles.pory"
	applymovement 7, Common_Movement_WalkUp
# 423 "data/rival_battles.pory"
	waitmovement 0
	goto Jakson_Battle02_6

Jakson_Battle02_9:
# 425 "data/rival_battles.pory"
	applymovement 7, Common_Movement_WalkDown
# 426 "data/rival_battles.pory"
	waitmovement 0
	goto Jakson_Battle02_6

Jakson_Battle02_10:
# 428 "data/rival_battles.pory"
	applymovement 7, Common_Movement_WalkDown2
# 429 "data/rival_battles.pory"
	waitmovement 0
	goto Jakson_Battle02_6

Jakson_Battle02_11:
# 431 "data/rival_battles.pory"
	applymovement 7, Common_Movement_WalkDown3
# 432 "data/rival_battles.pory"
	waitmovement 0
	goto Jakson_Battle02_6

Jakson_Battle02_12:
# 434 "data/rival_battles.pory"
	applymovement 7, Common_Movement_WalkDown4
# 435 "data/rival_battles.pory"
	waitmovement 0
	goto Jakson_Battle02_6


Jakson_Battle02_Block::
# 459 "data/rival_battles.pory"
	lock
# 460 "data/rival_battles.pory"
	faceplayer
# 461 "data/rival_battles.pory"
	msgbox Jakson_Battle02_Block_Text_0
# 462 "data/rival_battles.pory"
	playmoncry SPECIES_MURKROW, CRY_MODE_NORMAL
# 463 "data/rival_battles.pory"
	waitmoncry
# 464 "data/rival_battles.pory"
	release
	return


Jakson_Battle03::
# 468 "data/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 2
	goto_if_eq Jakson_Battle03_1
	return

Jakson_Battle03_1:
# 469 "data/rival_battles.pory"
	lock
# 470 "data/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 471 "data/rival_battles.pory"
	call GetRivalForNameBox
# 472 "data/rival_battles.pory"
	addobject 48
# 473 "data/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 474 "data/rival_battles.pory"
	compare VAR_TEMP_0, 31
	goto_if_eq Jakson_Battle03_4
Jakson_Battle03_3:
# 477 "data/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceDown
# 478 "data/rival_battles.pory"
	applymovement 48, Common_Movement_WalkUp5
# 479 "data/rival_battles.pory"
	waitmovement 0
# 480 "data/rival_battles.pory"
	msgbox Battle03_JaksonText_PreBattle, MSGBOX_DEFAULT
# 481 "data/rival_battles.pory"
	call GetRivalMusic
# 482 "data/rival_battles.pory"
	trainerbattle_no_intro TRAINER_JAKSON_3, Battle03_JaksonText_BattleVictory
# 483 "data/rival_battles.pory"
	call GetRivalForNameBox
# 484 "data/rival_battles.pory"
	msgbox Battle03_JaksonText_PostBattle
# 485 "data/rival_battles.pory"
	closemessage
# 486 "data/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 2
# 487 "data/rival_battles.pory"
	compare VAR_TEMP_0, 31
	goto_if_eq Jakson_Battle03_7
# 492 "data/rival_battles.pory"
	applymovement 48, Common_Movement_WalkRight
# 493 "data/rival_battles.pory"
	waitmovement 0
Jakson_Battle03_6:
# 495 "data/rival_battles.pory"
	applymovement 48, Common_Movement_WalkUp7
# 496 "data/rival_battles.pory"
	waitmovement 0
# 497 "data/rival_battles.pory"
	removeobject 48
# 498 "data/rival_battles.pory"
	fadedefaultbgm
# 499 "data/rival_battles.pory"
	release
	return

Jakson_Battle03_4:
# 475 "data/rival_battles.pory"
	setobjectxy 48, 31, 103
	goto Jakson_Battle03_3

Jakson_Battle03_7:
# 488 "data/rival_battles.pory"
	applymovement 48, Common_Movement_WalkLeft
# 489 "data/rival_battles.pory"
	waitmovement 0
	goto Jakson_Battle03_6


Jakson_Battle02_Block_Text_0:
# 461 "data/rival_battles.pory"
	.string "The Murkrow sees you trying to sneak\naround and actively blocks your\lefforts.$"
