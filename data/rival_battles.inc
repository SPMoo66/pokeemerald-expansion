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
# 111 "data/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 4
	goto_if_eq Sakura_Battle02_1
	return

Sakura_Battle02_1:
# 112 "data/rival_battles.pory"
	lock
# 113 "data/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 114 "data/rival_battles.pory"
	addobject 3
# 115 "data/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceDown
# 116 "data/rival_battles.pory"
	waitmovement 0
# 117 "data/rival_battles.pory"
	playse SE_PIN
# 118 "data/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 119 "data/rival_battles.pory"
	waitmovement 0
# 120 "data/rival_battles.pory"
	delay 60
# 121 "data/rival_battles.pory"
	applymovement 3, Common_Movement_WalkUp4
# 122 "data/rival_battles.pory"
	waitmovement 0
# 123 "data/rival_battles.pory"
	playse SE_LEDGE
# 124 "data/rival_battles.pory"
	applymovement 3, Common_Movement_JumpUp
# 125 "data/rival_battles.pory"
	waitmovement 0
# 126 "data/rival_battles.pory"
	playse SE_M_CUT
# 127 "data/rival_battles.pory"
	waitse
# 128 "data/rival_battles.pory"
	call GetRivalForNameBox
# 129 "data/rival_battles.pory"
	msgbox Battle02_SakuraText_PreBattle, MSGBOX_DEFAULT
# 130 "data/rival_battles.pory"
	call GetRivalMusic
# 131 "data/rival_battles.pory"
	trainerbattle_no_intro TRAINER_SAKURA_2, Battle02_SakuraText_BattleVictory
# 132 "data/rival_battles.pory"
	call GetRivalForNameBox
# 133 "data/rival_battles.pory"
	msgbox Battle02_SakuraText_PostBattle
# 134 "data/rival_battles.pory"
	closemessage
# 135 "data/rival_battles.pory"
	applymovement 3, Common_Movement_WalkDown5
# 136 "data/rival_battles.pory"
	waitmovement 0
# 137 "data/rival_battles.pory"
	removeobject 3
# 138 "data/rival_battles.pory"
	fadedefaultbgm
# 139 "data/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 1
# 140 "data/rival_battles.pory"
	release
	return


Sakura_Battle03::
# 145 "data/rival_battles.pory"
	lock
# 146 "data/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 147 "data/rival_battles.pory"
	call GetRivalForNameBox
# 148 "data/rival_battles.pory"
	msgbox Battle03_SakuraText_PreBattle, MSGBOX_DEFAULT
# 149 "data/rival_battles.pory"
	call GetRivalMusic
# 150 "data/rival_battles.pory"
	trainerbattle_no_intro TRAINER_SAKURA_3, Battle03_SakuraText_BattleVictory
# 151 "data/rival_battles.pory"
	call GetRivalForNameBox
# 152 "data/rival_battles.pory"
	msgbox Battle03_SakuraText_PostBattle
# 153 "data/rival_battles.pory"
	closemessage
# 154 "data/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 155 "data/rival_battles.pory"
	compare VAR_TEMP_1, 12
	goto_if_eq Sakura_Battle03_2
Sakura_Battle03_1:
# 159 "data/rival_battles.pory"
	applymovement 8, Common_Movement_WalkDown
# 160 "data/rival_battles.pory"
	waitmovement 0
# 161 "data/rival_battles.pory"
	playse SE_LEDGE
# 162 "data/rival_battles.pory"
	applymovement 8, Common_Movement_JumpDown2
# 163 "data/rival_battles.pory"
	waitmovement 0
# 164 "data/rival_battles.pory"
	applymovement 8, Common_Movement_WalkDown4
# 165 "data/rival_battles.pory"
	waitmovement 0
# 166 "data/rival_battles.pory"
	removeobject 8
# 167 "data/rival_battles.pory"
	setflag FLAG_TEMP_2
# 168 "data/rival_battles.pory"
	fadedefaultbgm
# 169 "data/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 2
# 170 "data/rival_battles.pory"
	delay 30
# 171 "data/rival_battles.pory"
	playse SE_EFFECTIVE
# 172 "data/rival_battles.pory"
	setmetatile 13, 11, 0x208, FALSE
# 173 "data/rival_battles.pory"
	special DrawWholeMapView
# 174 "data/rival_battles.pory"
	delay 30
# 175 "data/rival_battles.pory"
	release
	return

Sakura_Battle03_2:
# 156 "data/rival_battles.pory"
	applymovement 8, Common_Movement_WalkRight
# 157 "data/rival_battles.pory"
	waitmovement 0
	goto Sakura_Battle03_1


Sakura_Battle04::
# 179 "data/rival_battles.pory"
	lock
# 180 "data/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 181 "data/rival_battles.pory"
	call GetRivalForNameBox
# 182 "data/rival_battles.pory"
	msgbox Battle04_SakuraText_PreBattle, MSGBOX_DEFAULT
# 183 "data/rival_battles.pory"
	call GetRivalMusic
# 184 "data/rival_battles.pory"
	trainerbattle_no_intro TRAINER_SAKURA_4, Battle04_SakuraText_BattleVictory
# 185 "data/rival_battles.pory"
	call GetRivalForNameBox
# 186 "data/rival_battles.pory"
	msgbox Battle04_SakuraText_PostBattle
# 187 "data/rival_battles.pory"
	closemessage
# 188 "data/rival_battles.pory"
	setfieldeffectargument 0, 1
# 189 "data/rival_battles.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 190 "data/rival_battles.pory"
	delay 15
# 191 "data/rival_battles.pory"
	removeobject 1
# 192 "data/rival_battles.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 193 "data/rival_battles.pory"
	setflag FLAG_TEMP_1
# 194 "data/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 3
# 195 "data/rival_battles.pory"
	release
	return


Redd_Battle02::
# 206 "data/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 3
	goto_if_eq Redd_Battle02_1
	return

Redd_Battle02_1:
# 207 "data/rival_battles.pory"
	lock
# 208 "data/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 209 "data/rival_battles.pory"
	call GetRivalForNameBox
# 210 "data/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 211 "data/rival_battles.pory"
	compare VAR_TEMP_1, 58
	goto_if_eq Redd_Battle02_4
# 226 "data/rival_battles.pory"
	applymovement 40, Common_Movement_FaceUp
# 227 "data/rival_battles.pory"
	waitmovement 0
# 228 "data/rival_battles.pory"
	playse SE_PIN
# 229 "data/rival_battles.pory"
	applymovement 40, Common_Movement_ExclamationMark
# 230 "data/rival_battles.pory"
	waitmovement 0
# 231 "data/rival_battles.pory"
	delay 60
# 232 "data/rival_battles.pory"
	compare VAR_TEMP_1, 52
	goto_if_eq Redd_Battle02_12
# 237 "data/rival_battles.pory"
	applymovement 40, Common_Movement_WalkUp2
# 238 "data/rival_battles.pory"
	waitmovement 0
Redd_Battle02_11:
# 240 "data/rival_battles.pory"
	applymovement 40, Common_Movement_WalkRight
# 241 "data/rival_battles.pory"
	waitmovement 0
# 242 "data/rival_battles.pory"
	msgbox Battle02_ReddText_PreBattleAlt, MSGBOX_DEFAULT
Redd_Battle02_3:
# 244 "data/rival_battles.pory"
	call GetRivalMusic
# 245 "data/rival_battles.pory"
	trainerbattle_no_intro TRAINER_REDD_2, Battle02_ReddText_BattleVictory
# 246 "data/rival_battles.pory"
	call GetRivalForNameBox
# 247 "data/rival_battles.pory"
	msgbox Battle02_ReddText_PostBattle
# 248 "data/rival_battles.pory"
	closemessage
# 249 "data/rival_battles.pory"
	applymovement 40, Common_Movement_WalkUp6
# 250 "data/rival_battles.pory"
	waitmovement 0
# 251 "data/rival_battles.pory"
	removeobject 40
# 252 "data/rival_battles.pory"
	fadedefaultbgm
# 253 "data/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 1
# 254 "data/rival_battles.pory"
	setflag FLAG_TEMP_2
# 255 "data/rival_battles.pory"
	release
	return

Redd_Battle02_4:
# 212 "data/rival_battles.pory"
	switch VAR_TEMP_0
# 213 "data/rival_battles.pory"
	case 17, Redd_Battle02_9
# 216 "data/rival_battles.pory"
	case 19, Redd_Battle02_10
Redd_Battle02_7:
# 221 "data/rival_battles.pory"
	applymovement 40, Common_Movement_WalkDown2
# 222 "data/rival_battles.pory"
	waitmovement 0
# 223 "data/rival_battles.pory"
	msgbox Battle02_ReddText_PreBattle, MSGBOX_DEFAULT
	goto Redd_Battle02_3

Redd_Battle02_9:
# 214 "data/rival_battles.pory"
	applymovement 40, Common_Movement_WalkLeft
# 215 "data/rival_battles.pory"
	waitmovement 0
	goto Redd_Battle02_7

Redd_Battle02_10:
# 217 "data/rival_battles.pory"
	applymovement 40, Common_Movement_WalkRight
# 218 "data/rival_battles.pory"
	waitmovement 0
	goto Redd_Battle02_7

Redd_Battle02_12:
# 233 "data/rival_battles.pory"
	applymovement 40, Common_Movement_WalkUp3
# 234 "data/rival_battles.pory"
	waitmovement 0
	goto Redd_Battle02_11


Redd_Battle03::
# 260 "data/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 3
	goto_if_eq Redd_Battle03_1
	return

Redd_Battle03_1:
# 261 "data/rival_battles.pory"
	lock
# 262 "data/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 263 "data/rival_battles.pory"
	call GetRivalForNameBox
# 264 "data/rival_battles.pory"
	addobject 5
# 265 "data/rival_battles.pory"
	playse SE_EXIT
# 266 "data/rival_battles.pory"
	waitse
# 267 "data/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 268 "data/rival_battles.pory"
	compare VAR_TEMP_1, 7
	goto_if_eq Redd_Battle03_4
# 274 "data/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceRight
# 275 "data/rival_battles.pory"
	applymovement 5, Common_Movement_WalkDown3
# 276 "data/rival_battles.pory"
	waitmovement 0
Redd_Battle03_3:
# 278 "data/rival_battles.pory"
	applymovement 5, Common_Movement_WalkLeft3
# 279 "data/rival_battles.pory"
	waitmovement 0
# 280 "data/rival_battles.pory"
	compare VAR_TEMP_1, 7
	goto_if_eq Redd_Battle03_8
# 286 "data/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceUp
# 287 "data/rival_battles.pory"
	applymovement 5, Common_Movement_WalkInPlaceDown
# 288 "data/rival_battles.pory"
	waitmovement 0
Redd_Battle03_7:
# 290 "data/rival_battles.pory"
	waitmovement 0
# 291 "data/rival_battles.pory"
	msgbox Battle03_ReddText_PreBattle, MSGBOX_DEFAULT
# 292 "data/rival_battles.pory"
	call GetRivalMusic
# 293 "data/rival_battles.pory"
	trainerbattle_no_intro TRAINER_REDD_3, Battle03_ReddText_BattleVictory
# 294 "data/rival_battles.pory"
	call GetRivalForNameBox
# 295 "data/rival_battles.pory"
	msgbox Battle03_ReddText_PostBattle
# 296 "data/rival_battles.pory"
	closemessage
# 297 "data/rival_battles.pory"
	applymovement 5, Common_Movement_WalkLeft4
# 298 "data/rival_battles.pory"
	waitmovement 0
# 299 "data/rival_battles.pory"
	compare VAR_TEMP_1, 7
	goto_if_eq Redd_Battle03_12
# 304 "data/rival_battles.pory"
	applymovement 5, Common_Movement_WalkDown
# 305 "data/rival_battles.pory"
	waitmovement 0
Redd_Battle03_11:
# 307 "data/rival_battles.pory"
	removeobject 5
# 308 "data/rival_battles.pory"
	playse SE_EXIT
# 309 "data/rival_battles.pory"
	waitse
# 310 "data/rival_battles.pory"
	fadedefaultbgm
# 311 "data/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 2
# 312 "data/rival_battles.pory"
	release
	return

Redd_Battle03_4:
# 269 "data/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceRight
# 270 "data/rival_battles.pory"
	applymovement 5, Common_Movement_WalkDown4
# 271 "data/rival_battles.pory"
	waitmovement 0
	goto Redd_Battle03_3

Redd_Battle03_8:
# 281 "data/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceDown
# 282 "data/rival_battles.pory"
	applymovement 5, Common_Movement_WalkInPlaceUp
# 283 "data/rival_battles.pory"
	waitmovement 0
	goto Redd_Battle03_7

Redd_Battle03_12:
# 300 "data/rival_battles.pory"
	applymovement 5, Common_Movement_WalkInPlaceDown
# 301 "data/rival_battles.pory"
	waitmovement 0
	goto Redd_Battle03_11


Redd_Battle04::
# 317 "data/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 3
	goto_if_eq Redd_Battle04_2
	return

Redd_Battle04_1:
# 318 "data/rival_battles.pory"
	lock
# 319 "data/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 320 "data/rival_battles.pory"
	call GetRivalForNameBox
# 321 "data/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 322 "data/rival_battles.pory"
	compare VAR_TEMP_1, 5
	goto_if_eq Redd_Battle04_6
# 333 "data/rival_battles.pory"
	faceplayer
Redd_Battle04_5:
# 335 "data/rival_battles.pory"
	msgbox Battle04_ReddText_PreBattle, MSGBOX_DEFAULT
# 336 "data/rival_battles.pory"
	call GetRivalMusic
# 337 "data/rival_battles.pory"
	trainerbattle_no_intro TRAINER_REDD_4, Battle04_ReddText_BattleVictory
# 338 "data/rival_battles.pory"
	call GetRivalForNameBox
# 339 "data/rival_battles.pory"
	msgbox Battle04_ReddText_PostBattle1
# 340 "data/rival_battles.pory"
	setvar VAR_0x8004, 1
# 341 "data/rival_battles.pory"
	specialvar VAR_RESULT, ScriptGetPokedexInfo
# 342 "data/rival_battles.pory"
	compare VAR_0x8006, 75
	goto_if_ge Redd_Battle04_10
# 346 "data/rival_battles.pory"
	msgbox Battle04_ReddText_PostBattle2a
Redd_Battle04_9:
# 348 "data/rival_battles.pory"
	msgbox Battle04_ReddText_PostBattle3
# 349 "data/rival_battles.pory"
	closemessage
# 350 "data/rival_battles.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 351 "data/rival_battles.pory"
	removeobject 10
# 352 "data/rival_battles.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 353 "data/rival_battles.pory"
	fadedefaultbgm
# 354 "data/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 3
# 355 "data/rival_battles.pory"
	setflag FLAG_TEMP_1
# 356 "data/rival_battles.pory"
	release
	return

Redd_Battle04_2:
# 317 "data/rival_battles.pory"
	goto_if_set FLAG_BADGE07_GET, Redd_Battle04_1
	return

Redd_Battle04_6:
# 323 "data/rival_battles.pory"
	applymovement 10, Common_Movement_ExclamationMark
# 324 "data/rival_battles.pory"
	playse SE_PIN
# 325 "data/rival_battles.pory"
	delay 60
# 326 "data/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceRight
# 327 "data/rival_battles.pory"
	compare VAR_TEMP_0, 13
	goto_if_eq Redd_Battle04_14
Redd_Battle04_13:
# 330 "data/rival_battles.pory"
	waitmovement 0
	goto Redd_Battle04_5

Redd_Battle04_10:
# 343 "data/rival_battles.pory"
	msgbox Battle04_ReddText_PostBattle2b
	goto Redd_Battle04_9

Redd_Battle04_14:
# 328 "data/rival_battles.pory"
	applymovement 10, Common_Movement_WalkLeft
	goto Redd_Battle04_13


Baron_Battle02::
# 368 "data/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 0
	goto_if_eq Baron_Battle02_1
	return

Baron_Battle02_1:
# 369 "data/rival_battles.pory"
	lock
# 370 "data/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 371 "data/rival_battles.pory"
	call GetRivalForNameBox
# 372 "data/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 373 "data/rival_battles.pory"
	compare VAR_TEMP_1, 9
	goto_if_eq Baron_Battle02_4
# 382 "data/rival_battles.pory"
	faceplayer
Baron_Battle02_3:
# 384 "data/rival_battles.pory"
	msgbox Battle02_BaronText_PreBattle, MSGBOX_DEFAULT
# 385 "data/rival_battles.pory"
	call GetRivalMusic
# 386 "data/rival_battles.pory"
	trainerbattle_no_intro TRAINER_BARON_2, Battle02_BaronText_BattleVictory
# 387 "data/rival_battles.pory"
	call GetRivalForNameBox
# 388 "data/rival_battles.pory"
	msgbox Battle02_BaronText_PostBattle
# 389 "data/rival_battles.pory"
	closemessage
# 390 "data/rival_battles.pory"
	fadedefaultbgm
# 391 "data/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 1
# 392 "data/rival_battles.pory"
	setflag FLAG_TEMP_2
# 393 "data/rival_battles.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 394 "data/rival_battles.pory"
	removeobject 7
# 395 "data/rival_battles.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 396 "data/rival_battles.pory"
	release
	return

Baron_Battle02_4:
# 374 "data/rival_battles.pory"
	applymovement 7, Common_Movement_WalkInPlaceUp
# 375 "data/rival_battles.pory"
	waitmovement 0
# 376 "data/rival_battles.pory"
	delay 50
# 377 "data/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceDown
# 378 "data/rival_battles.pory"
	applymovement 7, Common_Movement_WalkUp
# 379 "data/rival_battles.pory"
	waitmovement 0
	goto Baron_Battle02_3


Baron_Battle03::
# 401 "data/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 0
	goto_if_eq Baron_Battle03_2
	return

Baron_Battle03_1:
# 402 "data/rival_battles.pory"
	lock
# 403 "data/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 404 "data/rival_battles.pory"
	call GetRivalForNameBox
# 405 "data/rival_battles.pory"
	addobject 14
# 406 "data/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 407 "data/rival_battles.pory"
	compare VAR_TEMP_1, 8
	goto_if_eq Baron_Battle03_6
# 410 "data/rival_battles.pory"
	compare VAR_TEMP_1, 9
	goto_if_eq Baron_Battle03_7
# 413 "data/rival_battles.pory"
	compare VAR_TEMP_1, 10
	goto_if_eq Baron_Battle03_8
# 416 "data/rival_battles.pory"
	compare VAR_TEMP_1, 11
	goto_if_eq Baron_Battle03_9
Baron_Battle03_5:
# 421 "data/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceLeft
# 422 "data/rival_battles.pory"
	applymovement 14, Common_Movement_WalkRight7
# 423 "data/rival_battles.pory"
	waitmovement 0
# 424 "data/rival_battles.pory"
	msgbox Battle03_BaronText_PreBattle, MSGBOX_DEFAULT
# 425 "data/rival_battles.pory"
	call GetRivalMusic
# 426 "data/rival_battles.pory"
	trainerbattle_no_intro TRAINER_BARON_3, Battle03_BaronText_BattleVictory
# 427 "data/rival_battles.pory"
	call GetRivalForNameBox
# 428 "data/rival_battles.pory"
	msgbox Battle03_BaronText_PostBattle
# 429 "data/rival_battles.pory"
	closemessage
# 430 "data/rival_battles.pory"
	fadedefaultbgm
# 431 "data/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 2
# 432 "data/rival_battles.pory"
	applymovement 14, Common_Movement_WalkLeft7
# 433 "data/rival_battles.pory"
	waitmovement 0
# 434 "data/rival_battles.pory"
	removeobject 14
# 435 "data/rival_battles.pory"
	release
	return

Baron_Battle03_2:
# 401 "data/rival_battles.pory"
	goto_if_set FLAG_BADGE05_GET, Baron_Battle03_1
	return

Baron_Battle03_6:
# 408 "data/rival_battles.pory"
	setobjectxy 14, 30, 8
	goto Baron_Battle03_5

Baron_Battle03_7:
# 411 "data/rival_battles.pory"
	setobjectxy 14, 30, 9
	goto Baron_Battle03_5

Baron_Battle03_8:
# 414 "data/rival_battles.pory"
	setobjectxy 14, 30, 10
	goto Baron_Battle03_5

Baron_Battle03_9:
# 417 "data/rival_battles.pory"
	setobjectxy 14, 30, 10
# 418 "data/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
# 419 "data/rival_battles.pory"
	waitmovement 0
	goto Baron_Battle03_5


Baron_Battle04::
# 440 "data/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 0
	goto_if_eq Baron_Battle04_2
	return

Baron_Battle04_1:
# 441 "data/rival_battles.pory"
	lock
# 442 "data/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 443 "data/rival_battles.pory"
	call GetRivalForNameBox
# 444 "data/rival_battles.pory"
	addobject 27
# 445 "data/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 446 "data/rival_battles.pory"
	compare VAR_TEMP_0, 55
	goto_if_eq Baron_Battle04_6
# 451 "data/rival_battles.pory"
	applymovement 27, Common_Movement_WalkLeft8
# 452 "data/rival_battles.pory"
	waitmovement 0
Baron_Battle04_5:
# 454 "data/rival_battles.pory"
	applymovement 27, Common_Movement_WalkInPlaceUp
# 455 "data/rival_battles.pory"
	waitmovement 0
# 456 "data/rival_battles.pory"
	msgbox Battle04_BaronText_PreBattle, MSGBOX_DEFAULT
# 457 "data/rival_battles.pory"
	call GetRivalMusic
# 458 "data/rival_battles.pory"
	trainerbattle_no_intro TRAINER_BARON_4, Battle04_BaronText_BattleVictory
# 459 "data/rival_battles.pory"
	call GetRivalForNameBox
# 460 "data/rival_battles.pory"
	msgbox Battle04_BaronText_PostBattle
# 461 "data/rival_battles.pory"
	closemessage
# 462 "data/rival_battles.pory"
	fadedefaultbgm
# 463 "data/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 3
# 464 "data/rival_battles.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 465 "data/rival_battles.pory"
	removeobject 27
# 466 "data/rival_battles.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 467 "data/rival_battles.pory"
	release
	return

Baron_Battle04_2:
# 440 "data/rival_battles.pory"
	goto_if_set FLAG_MET_TEAM_AQUA_HARBOR, Baron_Battle04_1
	return

Baron_Battle04_6:
# 447 "data/rival_battles.pory"
	applymovement 27, Common_Movement_WalkLeft9
# 448 "data/rival_battles.pory"
	waitmovement 0
	goto Baron_Battle04_5


Jakson_Battle02::
# 480 "data/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 2
	goto_if_eq Jakson_Battle02_1
	return

Jakson_Battle02_1:
# 481 "data/rival_battles.pory"
	lock
# 482 "data/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 483 "data/rival_battles.pory"
	delay 30
# 484 "data/rival_battles.pory"
	call GetRivalForNameBox
# 485 "data/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 486 "data/rival_battles.pory"
	compare VAR_TEMP_0, 5
	goto_if_eq Jakson_Battle02_4
Jakson_Battle02_3:
# 508 "data/rival_battles.pory"
	msgbox Battle02_JaksonText_PreBattle, MSGBOX_DEFAULT
# 509 "data/rival_battles.pory"
	call GetRivalMusic
# 510 "data/rival_battles.pory"
	trainerbattle_no_intro TRAINER_JAKSON_2, Battle02_JaksonText_BattleVictory
# 511 "data/rival_battles.pory"
	call GetRivalForNameBox
# 512 "data/rival_battles.pory"
	msgbox Battle02_JaksonText_PostBattle
# 513 "data/rival_battles.pory"
	closemessage
# 514 "data/rival_battles.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 515 "data/rival_battles.pory"
	removeobject 7
# 516 "data/rival_battles.pory"
	removeobject 6
# 517 "data/rival_battles.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 518 "data/rival_battles.pory"
	fadedefaultbgm
# 519 "data/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 1
# 520 "data/rival_battles.pory"
	setflag FLAG_TEMP_2
# 521 "data/rival_battles.pory"
	release
	return

Jakson_Battle02_4:
# 487 "data/rival_battles.pory"
	switch VAR_TEMP_1
# 488 "data/rival_battles.pory"
	case 9, Jakson_Battle02_8
# 491 "data/rival_battles.pory"
	case 11, Jakson_Battle02_9
# 494 "data/rival_battles.pory"
	case 12, Jakson_Battle02_10
# 497 "data/rival_battles.pory"
	case 13, Jakson_Battle02_11
# 500 "data/rival_battles.pory"
	case 14, Jakson_Battle02_12
Jakson_Battle02_6:
# 505 "data/rival_battles.pory"
	applymovement 7, Common_Movement_WalkRight2
# 506 "data/rival_battles.pory"
	waitmovement 0
	goto Jakson_Battle02_3

Jakson_Battle02_8:
# 489 "data/rival_battles.pory"
	applymovement 7, Common_Movement_WalkUp
# 490 "data/rival_battles.pory"
	waitmovement 0
	goto Jakson_Battle02_6

Jakson_Battle02_9:
# 492 "data/rival_battles.pory"
	applymovement 7, Common_Movement_WalkDown
# 493 "data/rival_battles.pory"
	waitmovement 0
	goto Jakson_Battle02_6

Jakson_Battle02_10:
# 495 "data/rival_battles.pory"
	applymovement 7, Common_Movement_WalkDown2
# 496 "data/rival_battles.pory"
	waitmovement 0
	goto Jakson_Battle02_6

Jakson_Battle02_11:
# 498 "data/rival_battles.pory"
	applymovement 7, Common_Movement_WalkDown3
# 499 "data/rival_battles.pory"
	waitmovement 0
	goto Jakson_Battle02_6

Jakson_Battle02_12:
# 501 "data/rival_battles.pory"
	applymovement 7, Common_Movement_WalkDown4
# 502 "data/rival_battles.pory"
	waitmovement 0
	goto Jakson_Battle02_6


Jakson_Battle02_Block::
# 526 "data/rival_battles.pory"
	lock
# 527 "data/rival_battles.pory"
	faceplayer
# 528 "data/rival_battles.pory"
	msgbox Jakson_Battle02_Block_Text_0
# 529 "data/rival_battles.pory"
	playmoncry SPECIES_MURKROW, CRY_MODE_NORMAL
# 530 "data/rival_battles.pory"
	waitmoncry
# 531 "data/rival_battles.pory"
	release
	return


Jakson_Battle03::
# 535 "data/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 2
	goto_if_eq Jakson_Battle03_1
	return

Jakson_Battle03_1:
# 536 "data/rival_battles.pory"
	lock
# 537 "data/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 538 "data/rival_battles.pory"
	call GetRivalForNameBox
# 539 "data/rival_battles.pory"
	addobject 48
# 540 "data/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 541 "data/rival_battles.pory"
	compare VAR_TEMP_0, 31
	goto_if_eq Jakson_Battle03_4
Jakson_Battle03_3:
# 544 "data/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceDown
# 545 "data/rival_battles.pory"
	applymovement 48, Common_Movement_WalkUp5
# 546 "data/rival_battles.pory"
	waitmovement 0
# 547 "data/rival_battles.pory"
	msgbox Battle03_JaksonText_PreBattle, MSGBOX_DEFAULT
# 548 "data/rival_battles.pory"
	call GetRivalMusic
# 549 "data/rival_battles.pory"
	trainerbattle_no_intro TRAINER_JAKSON_3, Battle03_JaksonText_BattleVictory
# 550 "data/rival_battles.pory"
	call GetRivalForNameBox
# 551 "data/rival_battles.pory"
	msgbox Battle03_JaksonText_PostBattle
# 552 "data/rival_battles.pory"
	closemessage
# 553 "data/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 2
# 554 "data/rival_battles.pory"
	compare VAR_TEMP_0, 31
	goto_if_eq Jakson_Battle03_7
# 559 "data/rival_battles.pory"
	applymovement 48, Common_Movement_WalkRight
# 560 "data/rival_battles.pory"
	waitmovement 0
Jakson_Battle03_6:
# 562 "data/rival_battles.pory"
	applymovement 48, Common_Movement_WalkUp7
# 563 "data/rival_battles.pory"
	waitmovement 0
# 564 "data/rival_battles.pory"
	removeobject 48
# 565 "data/rival_battles.pory"
	fadedefaultbgm
# 566 "data/rival_battles.pory"
	release
	return

Jakson_Battle03_4:
# 542 "data/rival_battles.pory"
	setobjectxy 48, 31, 103
	goto Jakson_Battle03_3

Jakson_Battle03_7:
# 555 "data/rival_battles.pory"
	applymovement 48, Common_Movement_WalkLeft
# 556 "data/rival_battles.pory"
	waitmovement 0
	goto Jakson_Battle03_6


Jakson_Battle04::
# 571 "data/rival_battles.pory"
	lock
# 572 "data/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 573 "data/rival_battles.pory"
	call GetRivalForNameBox
# 574 "data/rival_battles.pory"
	delay 30
# 575 "data/rival_battles.pory"
	applymovement 4, Common_Movement_WalkDown2
# 576 "data/rival_battles.pory"
	waitmovement 0
# 577 "data/rival_battles.pory"
	msgbox Battle04_JaksonText_PreBattle, MSGBOX_DEFAULT
# 578 "data/rival_battles.pory"
	call GetRivalMusic
# 579 "data/rival_battles.pory"
	trainerbattle_no_intro TRAINER_JAKSON_4, Battle04_JaksonText_BattleVictory
# 580 "data/rival_battles.pory"
	call GetRivalForNameBox
# 581 "data/rival_battles.pory"
	msgbox Battle04_JaksonText_PostBattle
# 582 "data/rival_battles.pory"
	closemessage
# 583 "data/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 3
# 584 "data/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight
# 585 "data/rival_battles.pory"
	waitmovement 0
# 586 "data/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceLeft
# 587 "data/rival_battles.pory"
	applymovement 4, Common_Movement_WalkDown
# 588 "data/rival_battles.pory"
	waitmovement 0
# 589 "data/rival_battles.pory"
	delay 10
# 590 "data/rival_battles.pory"
	removeobject 4
# 591 "data/rival_battles.pory"
	playse SE_EXIT
# 592 "data/rival_battles.pory"
	waitse
# 593 "data/rival_battles.pory"
	release
	return


Jakson_Battle02_Block_Text_0:
# 528 "data/rival_battles.pory"
	.string "The Murkrow sees you trying to sneak\naround and actively blocks your\lefforts.$"
