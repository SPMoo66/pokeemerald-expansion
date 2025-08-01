Harper_Battle02::
# 14 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 1
	goto_if_eq Harper_Battle02_1
	return

Harper_Battle02_1:
# 15 "data/emeralbody_rivals/rival_battles.pory"
	lock
# 16 "data/emeralbody_rivals/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 17 "data/emeralbody_rivals/rival_battles.pory"
	addobject 4
# 18 "data/emeralbody_rivals/rival_battles.pory"
	playse SE_EXIT
# 19 "data/emeralbody_rivals/rival_battles.pory"
	waitse
# 20 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 4, Common_Movement_WalkUp4
# 21 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 22 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 4, Common_Movement_WalkRight4
# 23 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 24 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 25 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle02_HarperText_PreBattle, MSGBOX_DEFAULT
# 26 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalMusic
# 27 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_HARPER_2, Battle02_HarperText_BattleVictory
# 28 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 29 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle02_HarperText_PostBattle
# 30 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 31 "data/emeralbody_rivals/rival_battles.pory"
	applymovement LOCALID_PLAYER, Harper_PlayerMoves
# 32 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 33 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 4, Common_Movement_WalkRight9
# 34 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 35 "data/emeralbody_rivals/rival_battles.pory"
	removeobject 4
# 36 "data/emeralbody_rivals/rival_battles.pory"
	fadedefaultbgm
# 37 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 1
# 38 "data/emeralbody_rivals/rival_battles.pory"
	release
	return


# 42 "data/emeralbody_rivals/rival_battles.pory"
Harper_PlayerMoves:
# 43 "data/emeralbody_rivals/rival_battles.pory"
	face_up
# 44 "data/emeralbody_rivals/rival_battles.pory"
	lock_facing_direction
# 45 "data/emeralbody_rivals/rival_battles.pory"
	walk_down
# 46 "data/emeralbody_rivals/rival_battles.pory"
	unlock_facing_direction
	step_end

Harper_Battle03::
# 50 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 1
	goto_if_eq Harper_Battle03_1
	return

Harper_Battle03_1:
# 51 "data/emeralbody_rivals/rival_battles.pory"
	lock
# 52 "data/emeralbody_rivals/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 53 "data/emeralbody_rivals/rival_battles.pory"
	addobject 15
# 54 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 15, Common_Movement_WalkUp3
# 55 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 56 "data/emeralbody_rivals/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceDown
# 57 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 58 "data/emeralbody_rivals/rival_battles.pory"
	delay 40
# 59 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 15, Common_Movement_WalkUp2
# 60 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 61 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 62 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle03_HarperText_PreBattle, MSGBOX_DEFAULT
# 63 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalMusic
# 64 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_HARPER_3, Battle03_HarperText_BattleVictory
# 65 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 66 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle03_HarperText_PostBattle
# 67 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 68 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 15, Common_Movement_WalkDown5
# 69 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 70 "data/emeralbody_rivals/rival_battles.pory"
	removeobject 15
# 71 "data/emeralbody_rivals/rival_battles.pory"
	fadedefaultbgm
# 72 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 2
# 73 "data/emeralbody_rivals/rival_battles.pory"
	release
	return


Harper_Battle04::
# 78 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 1
	goto_if_eq Harper_Battle04_1
	return

Harper_Battle04_1:
# 79 "data/emeralbody_rivals/rival_battles.pory"
	lock
# 80 "data/emeralbody_rivals/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 81 "data/emeralbody_rivals/rival_battles.pory"
	addobject 20
# 82 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 20, Common_Movement_WalkUp6
# 83 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 84 "data/emeralbody_rivals/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceLeft
# 85 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 20, Common_Movement_WalkRight4
# 86 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 87 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 88 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle04_HarperText_PreBattle, MSGBOX_DEFAULT
# 89 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalMusic
# 90 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_HARPER_4, Battle04_HarperText_BattleVictory
# 91 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 92 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle04_HarperText_PostBattle
# 93 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 94 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 20, Common_Movement_WalkLeft7
# 95 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 96 "data/emeralbody_rivals/rival_battles.pory"
	removeobject 20
# 97 "data/emeralbody_rivals/rival_battles.pory"
	fadedefaultbgm
# 98 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 3
# 99 "data/emeralbody_rivals/rival_battles.pory"
	release
	return


Sakura_Battle02::
# 111 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 4
	goto_if_eq Sakura_Battle02_1
	return

Sakura_Battle02_1:
# 112 "data/emeralbody_rivals/rival_battles.pory"
	lock
# 113 "data/emeralbody_rivals/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 114 "data/emeralbody_rivals/rival_battles.pory"
	addobject 3
# 115 "data/emeralbody_rivals/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceDown
# 116 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 117 "data/emeralbody_rivals/rival_battles.pory"
	playse SE_PIN
# 118 "data/emeralbody_rivals/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 119 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 120 "data/emeralbody_rivals/rival_battles.pory"
	delay 60
# 121 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 3, Common_Movement_WalkUp4
# 122 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 123 "data/emeralbody_rivals/rival_battles.pory"
	playse SE_LEDGE
# 124 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 3, Common_Movement_JumpUp
# 125 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 126 "data/emeralbody_rivals/rival_battles.pory"
	playse SE_M_CUT
# 127 "data/emeralbody_rivals/rival_battles.pory"
	waitse
# 128 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 129 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle02_SakuraText_PreBattle, MSGBOX_DEFAULT
# 130 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalMusic
# 131 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_SAKURA_2, Battle02_SakuraText_BattleVictory
# 132 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 133 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle02_SakuraText_PostBattle
# 134 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 135 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 3, Common_Movement_WalkDown5
# 136 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 137 "data/emeralbody_rivals/rival_battles.pory"
	removeobject 3
# 138 "data/emeralbody_rivals/rival_battles.pory"
	fadedefaultbgm
# 139 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 1
# 140 "data/emeralbody_rivals/rival_battles.pory"
	release
	return


Sakura_Battle03::
# 145 "data/emeralbody_rivals/rival_battles.pory"
	lock
# 146 "data/emeralbody_rivals/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 147 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 148 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle03_SakuraText_PreBattle, MSGBOX_DEFAULT
# 149 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalMusic
# 150 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_SAKURA_3, Battle03_SakuraText_BattleVictory
# 151 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 152 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle03_SakuraText_PostBattle
# 153 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 154 "data/emeralbody_rivals/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 155 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_1, 12
	goto_if_eq Sakura_Battle03_2
Sakura_Battle03_1:
# 159 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 8, Common_Movement_WalkDown
# 160 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 161 "data/emeralbody_rivals/rival_battles.pory"
	playse SE_LEDGE
# 162 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 8, Common_Movement_JumpDown2
# 163 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 164 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 8, Common_Movement_WalkDown4
# 165 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 166 "data/emeralbody_rivals/rival_battles.pory"
	removeobject 8
# 167 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_TEMP_2
# 168 "data/emeralbody_rivals/rival_battles.pory"
	fadedefaultbgm
# 169 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 2
# 170 "data/emeralbody_rivals/rival_battles.pory"
	delay 30
# 171 "data/emeralbody_rivals/rival_battles.pory"
	playse SE_EFFECTIVE
# 172 "data/emeralbody_rivals/rival_battles.pory"
	setmetatile 13, 11, 0x208, FALSE
# 173 "data/emeralbody_rivals/rival_battles.pory"
	special DrawWholeMapView
# 174 "data/emeralbody_rivals/rival_battles.pory"
	delay 30
# 175 "data/emeralbody_rivals/rival_battles.pory"
	release
	return

Sakura_Battle03_2:
# 156 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 8, Common_Movement_WalkRight
# 157 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Sakura_Battle03_1


Sakura_Battle04::
# 179 "data/emeralbody_rivals/rival_battles.pory"
	lock
# 180 "data/emeralbody_rivals/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 181 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 182 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle04_SakuraText_PreBattle, MSGBOX_DEFAULT
# 183 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalMusic
# 184 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_SAKURA_4, Battle04_SakuraText_BattleVictory
# 185 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 186 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle04_SakuraText_PostBattle
# 187 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 188 "data/emeralbody_rivals/rival_battles.pory"
	setfieldeffectargument 0, 1
# 189 "data/emeralbody_rivals/rival_battles.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 190 "data/emeralbody_rivals/rival_battles.pory"
	delay 15
# 191 "data/emeralbody_rivals/rival_battles.pory"
	removeobject 1
# 192 "data/emeralbody_rivals/rival_battles.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 193 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_TEMP_1
# 194 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 3
# 195 "data/emeralbody_rivals/rival_battles.pory"
	release
	return


Redd_Battle02::
# 206 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 3
	goto_if_eq Redd_Battle02_1
	return

Redd_Battle02_1:
# 207 "data/emeralbody_rivals/rival_battles.pory"
	lock
# 208 "data/emeralbody_rivals/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 209 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 210 "data/emeralbody_rivals/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 211 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_1, 58
	goto_if_eq Redd_Battle02_4
# 226 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 40, Common_Movement_FaceUp
# 227 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 228 "data/emeralbody_rivals/rival_battles.pory"
	playse SE_PIN
# 229 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 40, Common_Movement_ExclamationMark
# 230 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 231 "data/emeralbody_rivals/rival_battles.pory"
	delay 60
# 232 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_1, 52
	goto_if_eq Redd_Battle02_12
# 237 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 40, Common_Movement_WalkUp2
# 238 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
Redd_Battle02_11:
# 240 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 40, Common_Movement_WalkRight
# 241 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 242 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle02_ReddText_PreBattleAlt, MSGBOX_DEFAULT
Redd_Battle02_3:
# 244 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalMusic
# 245 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_REDD_2, Battle02_ReddText_BattleVictory
# 246 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 247 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle02_ReddText_PostBattle
# 248 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 249 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 40, Common_Movement_WalkUp6
# 250 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 251 "data/emeralbody_rivals/rival_battles.pory"
	removeobject 40
# 252 "data/emeralbody_rivals/rival_battles.pory"
	fadedefaultbgm
# 253 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 1
# 254 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_TEMP_2
# 255 "data/emeralbody_rivals/rival_battles.pory"
	release
	return

Redd_Battle02_4:
# 212 "data/emeralbody_rivals/rival_battles.pory"
	switch VAR_TEMP_0
# 213 "data/emeralbody_rivals/rival_battles.pory"
	case 17, Redd_Battle02_9
# 216 "data/emeralbody_rivals/rival_battles.pory"
	case 19, Redd_Battle02_10
Redd_Battle02_7:
# 221 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 40, Common_Movement_WalkDown2
# 222 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 223 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle02_ReddText_PreBattle, MSGBOX_DEFAULT
	goto Redd_Battle02_3

Redd_Battle02_9:
# 214 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 40, Common_Movement_WalkLeft
# 215 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Redd_Battle02_7

Redd_Battle02_10:
# 217 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 40, Common_Movement_WalkRight
# 218 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Redd_Battle02_7

Redd_Battle02_12:
# 233 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 40, Common_Movement_WalkUp3
# 234 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Redd_Battle02_11


Redd_Battle03::
# 260 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 3
	goto_if_eq Redd_Battle03_1
	return

Redd_Battle03_1:
# 261 "data/emeralbody_rivals/rival_battles.pory"
	lock
# 262 "data/emeralbody_rivals/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 263 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 264 "data/emeralbody_rivals/rival_battles.pory"
	addobject 5
# 265 "data/emeralbody_rivals/rival_battles.pory"
	playse SE_EXIT
# 266 "data/emeralbody_rivals/rival_battles.pory"
	waitse
# 267 "data/emeralbody_rivals/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 268 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_1, 7
	goto_if_eq Redd_Battle03_4
# 274 "data/emeralbody_rivals/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceRight
# 275 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 5, Common_Movement_WalkDown3
# 276 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
Redd_Battle03_3:
# 278 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 5, Common_Movement_WalkLeft3
# 279 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 280 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_1, 7
	goto_if_eq Redd_Battle03_8
# 286 "data/emeralbody_rivals/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceUp
# 287 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 5, Common_Movement_WalkInPlaceDown
# 288 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
Redd_Battle03_7:
# 290 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 291 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle03_ReddText_PreBattle, MSGBOX_DEFAULT
# 292 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalMusic
# 293 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_REDD_3, Battle03_ReddText_BattleVictory
# 294 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 295 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle03_ReddText_PostBattle
# 296 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 297 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 5, Common_Movement_WalkLeft4
# 298 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 299 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_1, 7
	goto_if_eq Redd_Battle03_12
# 304 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 5, Common_Movement_WalkDown
# 305 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
Redd_Battle03_11:
# 307 "data/emeralbody_rivals/rival_battles.pory"
	removeobject 5
# 308 "data/emeralbody_rivals/rival_battles.pory"
	playse SE_EXIT
# 309 "data/emeralbody_rivals/rival_battles.pory"
	waitse
# 310 "data/emeralbody_rivals/rival_battles.pory"
	fadedefaultbgm
# 311 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 2
# 312 "data/emeralbody_rivals/rival_battles.pory"
	release
	return

Redd_Battle03_4:
# 269 "data/emeralbody_rivals/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceRight
# 270 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 5, Common_Movement_WalkDown4
# 271 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Redd_Battle03_3

Redd_Battle03_8:
# 281 "data/emeralbody_rivals/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceDown
# 282 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 5, Common_Movement_WalkInPlaceUp
# 283 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Redd_Battle03_7

Redd_Battle03_12:
# 300 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 5, Common_Movement_WalkInPlaceDown
# 301 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Redd_Battle03_11


Redd_Battle04::
# 317 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 3
	goto_if_eq Redd_Battle04_2
	return

Redd_Battle04_1:
# 318 "data/emeralbody_rivals/rival_battles.pory"
	lock
# 319 "data/emeralbody_rivals/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 320 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 321 "data/emeralbody_rivals/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 322 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_1, 5
	goto_if_eq Redd_Battle04_6
# 333 "data/emeralbody_rivals/rival_battles.pory"
	faceplayer
Redd_Battle04_5:
# 335 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle04_ReddText_PreBattle, MSGBOX_DEFAULT
# 336 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalMusic
# 337 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_REDD_4, Battle04_ReddText_BattleVictory
# 338 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 339 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle04_ReddText_PostBattle1
# 340 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_0x8004, 1
# 341 "data/emeralbody_rivals/rival_battles.pory"
	specialvar VAR_RESULT, ScriptGetPokedexInfo
# 342 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_0x8006, 75
	goto_if_ge Redd_Battle04_10
# 346 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle04_ReddText_PostBattle2a
Redd_Battle04_9:
# 348 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle04_ReddText_PostBattle3
# 349 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 350 "data/emeralbody_rivals/rival_battles.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 351 "data/emeralbody_rivals/rival_battles.pory"
	removeobject 10
# 352 "data/emeralbody_rivals/rival_battles.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 353 "data/emeralbody_rivals/rival_battles.pory"
	fadedefaultbgm
# 354 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 3
# 355 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_TEMP_1
# 356 "data/emeralbody_rivals/rival_battles.pory"
	release
	return

Redd_Battle04_2:
# 317 "data/emeralbody_rivals/rival_battles.pory"
	goto_if_set FLAG_BADGE07_GET, Redd_Battle04_1
	return

Redd_Battle04_6:
# 323 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 10, Common_Movement_ExclamationMark
# 324 "data/emeralbody_rivals/rival_battles.pory"
	playse SE_PIN
# 325 "data/emeralbody_rivals/rival_battles.pory"
	delay 60
# 326 "data/emeralbody_rivals/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceRight
# 327 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_0, 13
	goto_if_eq Redd_Battle04_14
Redd_Battle04_13:
# 330 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Redd_Battle04_5

Redd_Battle04_10:
# 343 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle04_ReddText_PostBattle2b
	goto Redd_Battle04_9

Redd_Battle04_14:
# 328 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 10, Common_Movement_WalkLeft
	goto Redd_Battle04_13


Baron_Battle02::
# 368 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 0
	goto_if_eq Baron_Battle02_1
	return

Baron_Battle02_1:
# 369 "data/emeralbody_rivals/rival_battles.pory"
	lock
# 370 "data/emeralbody_rivals/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 371 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 372 "data/emeralbody_rivals/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 373 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_1, 9
	goto_if_eq Baron_Battle02_4
# 382 "data/emeralbody_rivals/rival_battles.pory"
	faceplayer
Baron_Battle02_3:
# 384 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle02_BaronText_PreBattle, MSGBOX_DEFAULT
# 385 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalMusic
# 386 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_BARON_2, Battle02_BaronText_BattleVictory
# 387 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 388 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle02_BaronText_PostBattle
# 389 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 390 "data/emeralbody_rivals/rival_battles.pory"
	fadedefaultbgm
# 391 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 1
# 392 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_TEMP_2
# 393 "data/emeralbody_rivals/rival_battles.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 394 "data/emeralbody_rivals/rival_battles.pory"
	removeobject 7
# 395 "data/emeralbody_rivals/rival_battles.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 396 "data/emeralbody_rivals/rival_battles.pory"
	release
	return

Baron_Battle02_4:
# 374 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 7, Common_Movement_WalkInPlaceUp
# 375 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 376 "data/emeralbody_rivals/rival_battles.pory"
	delay 50
# 377 "data/emeralbody_rivals/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceDown
# 378 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 7, Common_Movement_WalkUp
# 379 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Baron_Battle02_3


Baron_Battle03::
# 401 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 0
	goto_if_eq Baron_Battle03_2
	return

Baron_Battle03_1:
# 402 "data/emeralbody_rivals/rival_battles.pory"
	lock
# 403 "data/emeralbody_rivals/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 404 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 405 "data/emeralbody_rivals/rival_battles.pory"
	addobject 14
# 406 "data/emeralbody_rivals/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 407 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_1, 8
	goto_if_eq Baron_Battle03_6
# 410 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_1, 9
	goto_if_eq Baron_Battle03_7
# 413 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_1, 10
	goto_if_eq Baron_Battle03_8
# 416 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_1, 11
	goto_if_eq Baron_Battle03_9
Baron_Battle03_5:
# 421 "data/emeralbody_rivals/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceLeft
# 422 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 14, Common_Movement_WalkRight7
# 423 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 424 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle03_BaronText_PreBattle, MSGBOX_DEFAULT
# 425 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalMusic
# 426 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_BARON_3, Battle03_BaronText_BattleVictory
# 427 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 428 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle03_BaronText_PostBattle
# 429 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 430 "data/emeralbody_rivals/rival_battles.pory"
	fadedefaultbgm
# 431 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 2
# 432 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 14, Common_Movement_WalkLeft7
# 433 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 434 "data/emeralbody_rivals/rival_battles.pory"
	removeobject 14
# 435 "data/emeralbody_rivals/rival_battles.pory"
	release
	return

Baron_Battle03_2:
# 401 "data/emeralbody_rivals/rival_battles.pory"
	goto_if_set FLAG_BADGE05_GET, Baron_Battle03_1
	return

Baron_Battle03_6:
# 408 "data/emeralbody_rivals/rival_battles.pory"
	setobjectxy 14, 30, 8
	goto Baron_Battle03_5

Baron_Battle03_7:
# 411 "data/emeralbody_rivals/rival_battles.pory"
	setobjectxy 14, 30, 9
	goto Baron_Battle03_5

Baron_Battle03_8:
# 414 "data/emeralbody_rivals/rival_battles.pory"
	setobjectxy 14, 30, 10
	goto Baron_Battle03_5

Baron_Battle03_9:
# 417 "data/emeralbody_rivals/rival_battles.pory"
	setobjectxy 14, 30, 10
# 418 "data/emeralbody_rivals/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
# 419 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Baron_Battle03_5


Baron_Battle04::
# 440 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 0
	goto_if_eq Baron_Battle04_2
	return

Baron_Battle04_1:
# 441 "data/emeralbody_rivals/rival_battles.pory"
	lock
# 442 "data/emeralbody_rivals/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 443 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 444 "data/emeralbody_rivals/rival_battles.pory"
	addobject 27
# 445 "data/emeralbody_rivals/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 446 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_0, 55
	goto_if_eq Baron_Battle04_6
# 451 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 27, Common_Movement_WalkLeft8
# 452 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
Baron_Battle04_5:
# 454 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 27, Common_Movement_WalkInPlaceUp
# 455 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 456 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle04_BaronText_PreBattle, MSGBOX_DEFAULT
# 457 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalMusic
# 458 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_BARON_4, Battle04_BaronText_BattleVictory
# 459 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 460 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle04_BaronText_PostBattle
# 461 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 462 "data/emeralbody_rivals/rival_battles.pory"
	fadedefaultbgm
# 463 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 3
# 464 "data/emeralbody_rivals/rival_battles.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 465 "data/emeralbody_rivals/rival_battles.pory"
	removeobject 27
# 466 "data/emeralbody_rivals/rival_battles.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 467 "data/emeralbody_rivals/rival_battles.pory"
	release
	return

Baron_Battle04_2:
# 440 "data/emeralbody_rivals/rival_battles.pory"
	goto_if_set FLAG_MET_TEAM_AQUA_HARBOR, Baron_Battle04_1
	return

Baron_Battle04_6:
# 447 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 27, Common_Movement_WalkLeft9
# 448 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Baron_Battle04_5


Jakson_Battle02::
# 480 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 2
	goto_if_eq Jakson_Battle02_1
	return

Jakson_Battle02_1:
# 481 "data/emeralbody_rivals/rival_battles.pory"
	lock
# 482 "data/emeralbody_rivals/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 483 "data/emeralbody_rivals/rival_battles.pory"
	delay 30
# 484 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 485 "data/emeralbody_rivals/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 486 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_0, 5
	goto_if_eq Jakson_Battle02_4
Jakson_Battle02_3:
# 508 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle02_JaksonText_PreBattle, MSGBOX_DEFAULT
# 509 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalMusic
# 510 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_JAKSON_2, Battle02_JaksonText_BattleVictory
# 511 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 512 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle02_JaksonText_PostBattle
# 513 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 514 "data/emeralbody_rivals/rival_battles.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 515 "data/emeralbody_rivals/rival_battles.pory"
	removeobject 7
# 516 "data/emeralbody_rivals/rival_battles.pory"
	removeobject 6
# 517 "data/emeralbody_rivals/rival_battles.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 518 "data/emeralbody_rivals/rival_battles.pory"
	fadedefaultbgm
# 519 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 1
# 520 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_TEMP_2
# 521 "data/emeralbody_rivals/rival_battles.pory"
	release
	return

Jakson_Battle02_4:
# 487 "data/emeralbody_rivals/rival_battles.pory"
	switch VAR_TEMP_1
# 488 "data/emeralbody_rivals/rival_battles.pory"
	case 9, Jakson_Battle02_8
# 491 "data/emeralbody_rivals/rival_battles.pory"
	case 11, Jakson_Battle02_9
# 494 "data/emeralbody_rivals/rival_battles.pory"
	case 12, Jakson_Battle02_10
# 497 "data/emeralbody_rivals/rival_battles.pory"
	case 13, Jakson_Battle02_11
# 500 "data/emeralbody_rivals/rival_battles.pory"
	case 14, Jakson_Battle02_12
Jakson_Battle02_6:
# 505 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 7, Common_Movement_WalkRight2
# 506 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Jakson_Battle02_3

Jakson_Battle02_8:
# 489 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 7, Common_Movement_WalkUp
# 490 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Jakson_Battle02_6

Jakson_Battle02_9:
# 492 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 7, Common_Movement_WalkDown
# 493 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Jakson_Battle02_6

Jakson_Battle02_10:
# 495 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 7, Common_Movement_WalkDown2
# 496 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Jakson_Battle02_6

Jakson_Battle02_11:
# 498 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 7, Common_Movement_WalkDown3
# 499 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Jakson_Battle02_6

Jakson_Battle02_12:
# 501 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 7, Common_Movement_WalkDown4
# 502 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Jakson_Battle02_6


Jakson_Battle02_Block::
# 526 "data/emeralbody_rivals/rival_battles.pory"
	lock
# 527 "data/emeralbody_rivals/rival_battles.pory"
	faceplayer
# 528 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Jakson_Battle02_Block_Text_0
# 529 "data/emeralbody_rivals/rival_battles.pory"
	playmoncry SPECIES_MURKROW, CRY_MODE_NORMAL
# 530 "data/emeralbody_rivals/rival_battles.pory"
	waitmoncry
# 531 "data/emeralbody_rivals/rival_battles.pory"
	release
	return


Jakson_Battle03::
# 535 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 2
	goto_if_eq Jakson_Battle03_1
	return

Jakson_Battle03_1:
# 536 "data/emeralbody_rivals/rival_battles.pory"
	lock
# 537 "data/emeralbody_rivals/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 538 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 539 "data/emeralbody_rivals/rival_battles.pory"
	addobject 48
# 540 "data/emeralbody_rivals/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 541 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_0, 31
	goto_if_eq Jakson_Battle03_4
Jakson_Battle03_3:
# 544 "data/emeralbody_rivals/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceDown
# 545 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 48, Common_Movement_WalkUp5
# 546 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 547 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle03_JaksonText_PreBattle, MSGBOX_DEFAULT
# 548 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalMusic
# 549 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_JAKSON_3, Battle03_JaksonText_BattleVictory
# 550 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 551 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle03_JaksonText_PostBattle
# 552 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 553 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 2
# 554 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_0, 31
	goto_if_eq Jakson_Battle03_7
# 559 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 48, Common_Movement_WalkRight
# 560 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
Jakson_Battle03_6:
# 562 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 48, Common_Movement_WalkUp7
# 563 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 564 "data/emeralbody_rivals/rival_battles.pory"
	removeobject 48
# 565 "data/emeralbody_rivals/rival_battles.pory"
	fadedefaultbgm
# 566 "data/emeralbody_rivals/rival_battles.pory"
	release
	return

Jakson_Battle03_4:
# 542 "data/emeralbody_rivals/rival_battles.pory"
	setobjectxy 48, 31, 103
	goto Jakson_Battle03_3

Jakson_Battle03_7:
# 555 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 48, Common_Movement_WalkLeft
# 556 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Jakson_Battle03_6


Jakson_Battle04::
# 571 "data/emeralbody_rivals/rival_battles.pory"
	lock
# 572 "data/emeralbody_rivals/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 573 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 574 "data/emeralbody_rivals/rival_battles.pory"
	delay 30
# 575 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 4, Common_Movement_WalkDown2
# 576 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 577 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle04_JaksonText_PreBattle, MSGBOX_DEFAULT
# 578 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalMusic
# 579 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_JAKSON_4, Battle04_JaksonText_BattleVictory
# 580 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 581 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle04_JaksonText_PostBattle
# 582 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 583 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 3
# 584 "data/emeralbody_rivals/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight
# 585 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 586 "data/emeralbody_rivals/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceLeft
# 587 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 4, Common_Movement_WalkDown
# 588 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 589 "data/emeralbody_rivals/rival_battles.pory"
	delay 10
# 590 "data/emeralbody_rivals/rival_battles.pory"
	removeobject 4
# 591 "data/emeralbody_rivals/rival_battles.pory"
	playse SE_EXIT
# 592 "data/emeralbody_rivals/rival_battles.pory"
	waitse
# 593 "data/emeralbody_rivals/rival_battles.pory"
	release
	return


Rival_Battle05::
# 606 "data/emeralbody_rivals/rival_battles.pory"
	lock
# 607 "data/emeralbody_rivals/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 608 "data/emeralbody_rivals/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 609 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 610 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalMusic
# 611 "data/emeralbody_rivals/rival_battles.pory"
	hidefollower
# 612 "data/emeralbody_rivals/rival_battles.pory"
	delay 10
# 613 "data/emeralbody_rivals/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceDown
# 614 "data/emeralbody_rivals/rival_battles.pory"
	switch VAR_EMERALBODY_RIVAL
# 615 "data/emeralbody_rivals/rival_battles.pory"
	case 1, Rival_Battle05_3
# 617 "data/emeralbody_rivals/rival_battles.pory"
	case 2, Rival_Battle05_4
# 619 "data/emeralbody_rivals/rival_battles.pory"
	case 3, Rival_Battle05_5
# 621 "data/emeralbody_rivals/rival_battles.pory"
	case 4, Rival_Battle05_6
# 624 "data/emeralbody_rivals/rival_battles.pory"
	call Baron_Battle05
Rival_Battle05_1:
# 626 "data/emeralbody_rivals/rival_battles.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 627 "data/emeralbody_rivals/rival_battles.pory"
	warpsilent MAP_EVER_GRANDE_CITY_POKEMON_LEAGUE_1F, 9, 4
# 628 "data/emeralbody_rivals/rival_battles.pory"
	release
	return

Rival_Battle05_3:
# 616 "data/emeralbody_rivals/rival_battles.pory"
	call Harper_Battle05
	goto Rival_Battle05_1

Rival_Battle05_4:
# 618 "data/emeralbody_rivals/rival_battles.pory"
	call Jakson_Battle05
	goto Rival_Battle05_1

Rival_Battle05_5:
# 620 "data/emeralbody_rivals/rival_battles.pory"
	call Redd_Battle05
	goto Rival_Battle05_1

Rival_Battle05_6:
# 622 "data/emeralbody_rivals/rival_battles.pory"
	call Sakura_Battle05
	goto Rival_Battle05_1


Jakson_Battle05::
# 632 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_0, 9
	goto_if_eq Jakson_Battle05_2
# 636 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 8, Common_Movement_WalkRight6
Jakson_Battle05_1:
# 638 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 639 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 8, Common_Movement_WalkUp
# 640 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 641 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_JaksonText_PreBattle, MSGBOX_DEFAULT
# 642 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 643 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 8, Common_Movement_WalkInPlaceLeft
# 644 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 645 "data/emeralbody_rivals/rival_battles.pory"
	delay 60
# 646 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 8, Common_Movement_WalkInPlaceUp
# 647 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 648 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 649 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_JaksonText_PreBattle2, MSGBOX_DEFAULT
# 650 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_JAKSON_5, Battle05_JaksonText_BattleVictory
# 651 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 652 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_JaksonText_PostBattle
# 653 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 654 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 8, Common_Movement_WalkDown
# 655 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 656 "data/emeralbody_rivals/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 657 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_0, 9
	goto_if_eq Jakson_Battle05_6
# 661 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 8, Common_Movement_WalkLeft6
Jakson_Battle05_5:
# 663 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 664 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 8, Common_Movement_WalkInPlaceUp
# 665 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	return

Jakson_Battle05_2:
# 633 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 8, Common_Movement_WalkRight5
	goto Jakson_Battle05_1

Jakson_Battle05_6:
# 658 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 8, Common_Movement_WalkLeft5
	goto Jakson_Battle05_5


Harper_Battle05::
# 669 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_0, 9
	goto_if_eq Harper_Battle05_2
# 673 "data/emeralbody_rivals/rival_battles.pory"
	setobjectxy 9, 10, 8
Harper_Battle05_1:
# 675 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 9, Common_Movement_WalkUp5
# 676 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 677 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_HarperText_PreBattle, MSGBOX_DEFAULT
# 678 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_HARPER_5, Battle05_HarperText_BattleVictory
# 679 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 680 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_HarperText_PostBattle
# 681 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 682 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 9, Common_Movement_WalkDown5
# 683 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	return

Harper_Battle05_2:
# 670 "data/emeralbody_rivals/rival_battles.pory"
	setobjectxy 9, 9, 8
	goto Harper_Battle05_1


Redd_Battle05::
# 687 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_0, 9
	goto_if_eq Redd_Battle05_2
# 691 "data/emeralbody_rivals/rival_battles.pory"
	setobjectxy 10, 10, 8
Redd_Battle05_1:
# 693 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 10, Common_Movement_WalkUp5
# 694 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 695 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_ReddText_PreBattle, MSGBOX_DEFAULT
# 696 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_0x8004, 1
# 697 "data/emeralbody_rivals/rival_battles.pory"
	specialvar VAR_RESULT, ScriptGetPokedexInfo
# 698 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_0x8006, 100
	goto_if_ge Redd_Battle05_6
# 702 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_ReddText_PreBattle2a
Redd_Battle05_5:
# 704 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_ReddText_PreBattle3
# 705 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_REDD_5, Battle05_ReddText_BattleVictory
# 706 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 707 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_ReddText_PostBattle
# 708 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 709 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 10, Common_Movement_WalkDown5
# 710 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	return

Redd_Battle05_2:
# 688 "data/emeralbody_rivals/rival_battles.pory"
	setobjectxy 10, 9, 8
	goto Redd_Battle05_1

Redd_Battle05_6:
# 699 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_ReddText_PreBattle2b
	goto Redd_Battle05_5


Sakura_Battle05::
# 714 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_0, 9
	goto_if_eq Sakura_Battle05_2
# 718 "data/emeralbody_rivals/rival_battles.pory"
	setobjectxy 11, 10, 3
Sakura_Battle05_1:
# 720 "data/emeralbody_rivals/rival_battles.pory"
	setfieldeffectargument 0, 1
# 721 "data/emeralbody_rivals/rival_battles.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 722 "data/emeralbody_rivals/rival_battles.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 723 "data/emeralbody_rivals/rival_battles.pory"
	addobject 11
# 724 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 11, Common_Movement_FaceUp
# 725 "data/emeralbody_rivals/rival_battles.pory"
	delay 30
# 726 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_SakuraText_PreBattle, MSGBOX_DEFAULT
# 727 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_SAKURA_5, Battle05_SakuraText_BattleVictory
# 728 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 729 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_SakuraText_PostBattle
# 730 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 731 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 11, Common_Movement_WalkDown5
# 732 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	return

Sakura_Battle05_2:
# 715 "data/emeralbody_rivals/rival_battles.pory"
	setobjectxy 11, 9, 3
	goto Sakura_Battle05_1


Baron_Battle05::
# 736 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_0, 9
	goto_if_eq Baron_Battle05_2
# 740 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 12, Common_Movement_WalkLeft5
Baron_Battle05_1:
# 742 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 743 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 12, Common_Movement_WalkUp
# 744 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 745 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_BaronText_PreBattle, MSGBOX_DEFAULT
# 746 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 747 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 12, Common_Movement_WalkInPlaceLeft
# 748 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 749 "data/emeralbody_rivals/rival_battles.pory"
	delay 20
# 750 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 12, Common_Movement_WalkInPlaceDown
# 751 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 752 "data/emeralbody_rivals/rival_battles.pory"
	delay 40
# 753 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 12, Common_Movement_WalkInPlaceUp
# 754 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 755 "data/emeralbody_rivals/rival_battles.pory"
	delay 20
# 756 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 757 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_BaronText_PreBattle2, MSGBOX_DEFAULT
# 758 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_BARON_5, Battle05_BaronText_BattleVictory
# 759 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 760 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_BaronText_PostBattle
# 761 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 762 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 12, Common_Movement_WalkDown
# 763 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 764 "data/emeralbody_rivals/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 765 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_0, 9
	goto_if_eq Baron_Battle05_6
# 769 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 12, Common_Movement_WalkRight5
Baron_Battle05_5:
# 771 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 772 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 12, Common_Movement_WalkInPlaceUp
# 773 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	return

Baron_Battle05_2:
# 737 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 12, Common_Movement_WalkLeft6
	goto Baron_Battle05_1

Baron_Battle05_6:
# 766 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 12, Common_Movement_WalkRight6
	goto Baron_Battle05_5


Jakson_Battle02_Block_Text_0:
# 528 "data/emeralbody_rivals/rival_battles.pory"
	.string "The Murkrow sees you trying to sneak\naround and actively blocks your\lefforts.$"
