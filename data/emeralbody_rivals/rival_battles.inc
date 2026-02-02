Harper_Battle02::
# 38 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL_BATTLE_STATE, 0
	goto_if_eq Harper_Battle02_3
Harper_Battle02_1:
# 67 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_TEMP_6
	return

Harper_Battle02_2:
# 39 "data/emeralbody_rivals/rival_battles.pory"
	lock
# 40 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_TEMP_A, 1
# 41 "data/emeralbody_rivals/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 42 "data/emeralbody_rivals/rival_battles.pory"
	addobject 4
# 43 "data/emeralbody_rivals/rival_battles.pory"
	playse SE_EXIT
# 44 "data/emeralbody_rivals/rival_battles.pory"
	waitse
# 45 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 4, Common_Movement_WalkUp4
# 46 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 47 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 4, Common_Movement_WalkRight4
# 48 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 49 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 50 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle02_HarperText_PreBattle, MSGBOX_DEFAULT
# 51 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalMusic
# 52 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 53 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_HARPER_2, Battle02_HarperText_BattleVictory
# 54 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 55 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle02_HarperText_PostBattle, MSGBOX_DEFAULT
# 56 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 57 "data/emeralbody_rivals/rival_battles.pory"
	applymovement LOCALID_PLAYER, Harper_PlayerMoves
# 58 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 59 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 4, Common_Movement_WalkRight9
# 60 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 61 "data/emeralbody_rivals/rival_battles.pory"
	removeobject 4
# 62 "data/emeralbody_rivals/rival_battles.pory"
	fadedefaultbgm
# 63 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 6
# 64 "data/emeralbody_rivals/rival_battles.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 65 "data/emeralbody_rivals/rival_battles.pory"
	release
	goto Harper_Battle02_1

Harper_Battle02_3:
# 38 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 1
	goto_if_eq Harper_Battle02_2
# 38 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 5
	goto_if_eq Harper_Battle02_2
	goto Harper_Battle02_1


# 70 "data/emeralbody_rivals/rival_battles.pory"
Harper_PlayerMoves:
# 71 "data/emeralbody_rivals/rival_battles.pory"
	face_up
# 72 "data/emeralbody_rivals/rival_battles.pory"
	lock_facing_direction
# 73 "data/emeralbody_rivals/rival_battles.pory"
	walk_down
# 74 "data/emeralbody_rivals/rival_battles.pory"
	unlock_facing_direction
	step_end

Harper_Battle03::
# 78 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 1
	goto_if_eq Harper_Battle03_2
	return

Harper_Battle03_1:
# 79 "data/emeralbody_rivals/rival_battles.pory"
	lock
# 80 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_TEMP_A, 1
# 81 "data/emeralbody_rivals/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 82 "data/emeralbody_rivals/rival_battles.pory"
	addobject 15
# 83 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 15, Common_Movement_WalkUp3
# 84 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 85 "data/emeralbody_rivals/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceDown
# 86 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 87 "data/emeralbody_rivals/rival_battles.pory"
	delay 40
# 88 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 15, Common_Movement_WalkUp2
# 89 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 90 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 91 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle03_HarperText_PreBattle, MSGBOX_DEFAULT
# 92 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalMusic
# 93 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 94 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_HARPER_3, Battle03_HarperText_BattleVictory
# 95 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 96 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle03_HarperText_PostBattle, MSGBOX_DEFAULT
# 97 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 98 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 15, Common_Movement_WalkDown5
# 99 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 100 "data/emeralbody_rivals/rival_battles.pory"
	removeobject 15
# 101 "data/emeralbody_rivals/rival_battles.pory"
	fadedefaultbgm
# 102 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 2
# 103 "data/emeralbody_rivals/rival_battles.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 104 "data/emeralbody_rivals/rival_battles.pory"
	release
	return

Harper_Battle03_2:
# 78 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_PETALBURG_GYM_STATE, 6
	goto_if_ge Harper_Battle03_1
	return


Harper_Battle04::
# 109 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 1
	goto_if_eq Harper_Battle04_1
	return

Harper_Battle04_1:
# 110 "data/emeralbody_rivals/rival_battles.pory"
	lock
# 111 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_TEMP_A, 1
# 112 "data/emeralbody_rivals/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 113 "data/emeralbody_rivals/rival_battles.pory"
	addobject 20
# 114 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 20, Common_Movement_WalkUp6
# 115 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 116 "data/emeralbody_rivals/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceLeft
# 117 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 20, Common_Movement_WalkRight4
# 118 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 119 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 120 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle04_HarperText_PreBattle, MSGBOX_DEFAULT
# 121 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalMusic
# 122 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 123 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_HARPER_4, Battle04_HarperText_BattleVictory
# 124 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 125 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle04_HarperText_PostBattle, MSGBOX_DEFAULT
# 126 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 127 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 20, Common_Movement_WalkLeft7
# 128 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 129 "data/emeralbody_rivals/rival_battles.pory"
	removeobject 20
# 130 "data/emeralbody_rivals/rival_battles.pory"
	fadedefaultbgm
# 131 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 3
# 132 "data/emeralbody_rivals/rival_battles.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 133 "data/emeralbody_rivals/rival_battles.pory"
	release
	return


Sakura_Battle02::
# 145 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL_BATTLE_STATE, 0
	goto_if_eq Sakura_Battle02_4
Sakura_Battle02_3:
# 145 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL_BATTLE_STATE, 6
	goto_if_eq Sakura_Battle02_7
Sakura_Battle02_1:
# 179 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_TEMP_6
	return

Sakura_Battle02_2:
# 146 "data/emeralbody_rivals/rival_battles.pory"
	lock
# 147 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_TEMP_A, 4
# 148 "data/emeralbody_rivals/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 149 "data/emeralbody_rivals/rival_battles.pory"
	addobject 3
# 150 "data/emeralbody_rivals/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceDown
# 151 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 152 "data/emeralbody_rivals/rival_battles.pory"
	playse SE_PIN
# 153 "data/emeralbody_rivals/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 154 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 155 "data/emeralbody_rivals/rival_battles.pory"
	delay 60
# 156 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 3, Common_Movement_WalkUp4
# 157 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 158 "data/emeralbody_rivals/rival_battles.pory"
	playse SE_LEDGE
# 159 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 3, Common_Movement_JumpUp
# 160 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 161 "data/emeralbody_rivals/rival_battles.pory"
	playse SE_M_CUT
# 162 "data/emeralbody_rivals/rival_battles.pory"
	waitse
# 163 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 164 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle02_SakuraText_PreBattle, MSGBOX_DEFAULT
# 165 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalMusic
# 166 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 167 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_SAKURA_2, Battle02_SakuraText_BattleVictory
# 168 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 169 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle02_SakuraText_PostBattle, MSGBOX_DEFAULT
# 170 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 171 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 3, Common_Movement_WalkDown5
# 172 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 173 "data/emeralbody_rivals/rival_battles.pory"
	removeobject 3
# 174 "data/emeralbody_rivals/rival_battles.pory"
	fadedefaultbgm
# 175 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 7
# 176 "data/emeralbody_rivals/rival_battles.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 177 "data/emeralbody_rivals/rival_battles.pory"
	release
	goto Sakura_Battle02_1

Sakura_Battle02_4:
# 145 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 4
	goto_if_eq Sakura_Battle02_2
	goto Sakura_Battle02_3

Sakura_Battle02_7:
# 145 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 5
	goto_if_eq Sakura_Battle02_2
	goto Sakura_Battle02_1


Sakura_Battle03::
# 183 "data/emeralbody_rivals/rival_battles.pory"
	lock
# 184 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_TEMP_A, 4
# 185 "data/emeralbody_rivals/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 186 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 187 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle03_SakuraText_PreBattle, MSGBOX_DEFAULT
# 188 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalMusic
# 189 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 190 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_SAKURA_3, Battle03_SakuraText_BattleVictory
# 191 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 192 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle03_SakuraText_PostBattle, MSGBOX_DEFAULT
# 193 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 194 "data/emeralbody_rivals/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 195 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_1, 12
	goto_if_eq Sakura_Battle03_2
Sakura_Battle03_1:
# 199 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 8, Common_Movement_WalkDown
# 200 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 201 "data/emeralbody_rivals/rival_battles.pory"
	playse SE_LEDGE
# 202 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 8, Common_Movement_JumpDown2
# 203 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 204 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 8, Common_Movement_WalkDown4
# 205 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 206 "data/emeralbody_rivals/rival_battles.pory"
	removeobject 8
# 207 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_TEMP_2
# 208 "data/emeralbody_rivals/rival_battles.pory"
	fadedefaultbgm
# 209 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 2
# 210 "data/emeralbody_rivals/rival_battles.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 211 "data/emeralbody_rivals/rival_battles.pory"
	delay 30
# 212 "data/emeralbody_rivals/rival_battles.pory"
	playse SE_EFFECTIVE
# 213 "data/emeralbody_rivals/rival_battles.pory"
	setmetatile 13, 11, 0x208, FALSE
# 214 "data/emeralbody_rivals/rival_battles.pory"
	special DrawWholeMapView
# 215 "data/emeralbody_rivals/rival_battles.pory"
	delay 30
# 216 "data/emeralbody_rivals/rival_battles.pory"
	release
	return

Sakura_Battle03_2:
# 196 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 8, Common_Movement_WalkRight
# 197 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Sakura_Battle03_1


Sakura_Battle04::
# 220 "data/emeralbody_rivals/rival_battles.pory"
	lock
# 221 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_TEMP_A, 4
# 222 "data/emeralbody_rivals/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 223 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 224 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle04_SakuraText_PreBattle, MSGBOX_DEFAULT
# 225 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalMusic
# 226 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 227 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_SAKURA_4, Battle04_SakuraText_BattleVictory
# 228 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 229 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle04_SakuraText_PostBattle, MSGBOX_DEFAULT
# 230 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 231 "data/emeralbody_rivals/rival_battles.pory"
	setfieldeffectargument 0, 1
# 232 "data/emeralbody_rivals/rival_battles.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 233 "data/emeralbody_rivals/rival_battles.pory"
	delay 15
# 234 "data/emeralbody_rivals/rival_battles.pory"
	removeobject 1
# 235 "data/emeralbody_rivals/rival_battles.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 236 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_TEMP_1
# 237 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 3
# 238 "data/emeralbody_rivals/rival_battles.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 239 "data/emeralbody_rivals/rival_battles.pory"
	release
	return


Redd_Battle02::
# 250 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 3
	goto_if_eq Redd_Battle02_1
	return

Redd_Battle02_1:
# 251 "data/emeralbody_rivals/rival_battles.pory"
	lock
# 252 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_TEMP_A, 3
# 253 "data/emeralbody_rivals/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 254 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 255 "data/emeralbody_rivals/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 256 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_1, 58
	goto_if_eq Redd_Battle02_4
# 271 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 40, Common_Movement_FaceUp
# 272 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 273 "data/emeralbody_rivals/rival_battles.pory"
	playse SE_PIN
# 274 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 40, Common_Movement_ExclamationMark
# 275 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 276 "data/emeralbody_rivals/rival_battles.pory"
	delay 60
# 277 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_1, 52
	goto_if_eq Redd_Battle02_12
# 282 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 40, Common_Movement_WalkUp2
# 283 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
Redd_Battle02_11:
# 285 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 40, Common_Movement_WalkRight
# 286 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 287 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle02_ReddText_PreBattleAlt, MSGBOX_DEFAULT
Redd_Battle02_3:
# 289 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalMusic
# 290 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 291 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_REDD_2, Battle02_ReddText_BattleVictory
# 292 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 293 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle02_ReddText_PostBattle, MSGBOX_DEFAULT
# 294 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 295 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 40, Common_Movement_WalkUp6
# 296 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 297 "data/emeralbody_rivals/rival_battles.pory"
	removeobject 40
# 298 "data/emeralbody_rivals/rival_battles.pory"
	fadedefaultbgm
# 299 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 1
# 300 "data/emeralbody_rivals/rival_battles.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 301 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_TEMP_2
# 302 "data/emeralbody_rivals/rival_battles.pory"
	release
	return

Redd_Battle02_4:
# 257 "data/emeralbody_rivals/rival_battles.pory"
	switch VAR_TEMP_0
# 258 "data/emeralbody_rivals/rival_battles.pory"
	case 17, Redd_Battle02_9
# 261 "data/emeralbody_rivals/rival_battles.pory"
	case 19, Redd_Battle02_10
Redd_Battle02_7:
# 266 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 40, Common_Movement_WalkDown2
# 267 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 268 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle02_ReddText_PreBattle, MSGBOX_DEFAULT
	goto Redd_Battle02_3

Redd_Battle02_9:
# 259 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 40, Common_Movement_WalkLeft
# 260 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Redd_Battle02_7

Redd_Battle02_10:
# 262 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 40, Common_Movement_WalkRight
# 263 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Redd_Battle02_7

Redd_Battle02_12:
# 278 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 40, Common_Movement_WalkUp3
# 279 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Redd_Battle02_11


Redd_Battle03::
# 307 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 3
	goto_if_eq Redd_Battle03_1
	return

Redd_Battle03_1:
# 308 "data/emeralbody_rivals/rival_battles.pory"
	lock
# 309 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_TEMP_A, 3
# 310 "data/emeralbody_rivals/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 311 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 312 "data/emeralbody_rivals/rival_battles.pory"
	addobject 5
# 313 "data/emeralbody_rivals/rival_battles.pory"
	playse SE_EXIT
# 314 "data/emeralbody_rivals/rival_battles.pory"
	waitse
# 315 "data/emeralbody_rivals/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 316 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_1, 7
	goto_if_eq Redd_Battle03_4
# 322 "data/emeralbody_rivals/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceRight
# 323 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 5, Common_Movement_WalkDown3
# 324 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
Redd_Battle03_3:
# 326 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 5, Common_Movement_WalkLeft3
# 327 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 328 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_1, 7
	goto_if_eq Redd_Battle03_8
# 334 "data/emeralbody_rivals/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceUp
# 335 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 5, Common_Movement_WalkInPlaceDown
# 336 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
Redd_Battle03_7:
# 338 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 339 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle03_ReddText_PreBattle, MSGBOX_DEFAULT
# 340 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalMusic
# 341 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 342 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_REDD_3, Battle03_ReddText_BattleVictory
# 343 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 344 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle03_ReddText_PostBattle, MSGBOX_DEFAULT
# 345 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 346 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 5, Common_Movement_WalkLeft4
# 347 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 348 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_1, 7
	goto_if_eq Redd_Battle03_12
# 353 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 5, Common_Movement_WalkDown
# 354 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
Redd_Battle03_11:
# 356 "data/emeralbody_rivals/rival_battles.pory"
	removeobject 5
# 357 "data/emeralbody_rivals/rival_battles.pory"
	playse SE_EXIT
# 358 "data/emeralbody_rivals/rival_battles.pory"
	waitse
# 359 "data/emeralbody_rivals/rival_battles.pory"
	fadedefaultbgm
# 360 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 2
# 361 "data/emeralbody_rivals/rival_battles.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 362 "data/emeralbody_rivals/rival_battles.pory"
	release
	return

Redd_Battle03_4:
# 317 "data/emeralbody_rivals/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceRight
# 318 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 5, Common_Movement_WalkDown4
# 319 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Redd_Battle03_3

Redd_Battle03_8:
# 329 "data/emeralbody_rivals/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceDown
# 330 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 5, Common_Movement_WalkInPlaceUp
# 331 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Redd_Battle03_7

Redd_Battle03_12:
# 349 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 5, Common_Movement_WalkInPlaceDown
# 350 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Redd_Battle03_11


Redd_Battle04::
# 367 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 3
	goto_if_eq Redd_Battle04_2
	return

Redd_Battle04_1:
# 368 "data/emeralbody_rivals/rival_battles.pory"
	lock
# 369 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_TEMP_A, 3
# 370 "data/emeralbody_rivals/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 371 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 372 "data/emeralbody_rivals/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 373 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_1, 5
	goto_if_eq Redd_Battle04_6
# 384 "data/emeralbody_rivals/rival_battles.pory"
	faceplayer
Redd_Battle04_5:
# 386 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle04_ReddText_PreBattle, MSGBOX_DEFAULT
# 387 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalMusic
# 388 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 389 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_REDD_4, Battle04_ReddText_BattleVictory
# 390 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 391 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle04_ReddText_PostBattle1, MSGBOX_DEFAULT
# 392 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_0x8004, 1
# 393 "data/emeralbody_rivals/rival_battles.pory"
	specialvar VAR_RESULT, ScriptGetPokedexInfo
# 394 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_0x8006, 75
	goto_if_ge Redd_Battle04_10
# 398 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle04_ReddText_PostBattle2a, MSGBOX_DEFAULT
Redd_Battle04_9:
# 400 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle04_ReddText_PostBattle3, MSGBOX_DEFAULT
# 401 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 402 "data/emeralbody_rivals/rival_battles.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 403 "data/emeralbody_rivals/rival_battles.pory"
	removeobject 10
# 404 "data/emeralbody_rivals/rival_battles.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 405 "data/emeralbody_rivals/rival_battles.pory"
	fadedefaultbgm
# 406 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 3
# 407 "data/emeralbody_rivals/rival_battles.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 408 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_TEMP_1
# 409 "data/emeralbody_rivals/rival_battles.pory"
	release
	return

Redd_Battle04_2:
# 367 "data/emeralbody_rivals/rival_battles.pory"
	goto_if_set FLAG_BADGE07_GET, Redd_Battle04_1
	return

Redd_Battle04_6:
# 374 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 10, Common_Movement_ExclamationMark
# 375 "data/emeralbody_rivals/rival_battles.pory"
	playse SE_PIN
# 376 "data/emeralbody_rivals/rival_battles.pory"
	delay 60
# 377 "data/emeralbody_rivals/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceRight
# 378 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_0, 13
	goto_if_eq Redd_Battle04_14
Redd_Battle04_13:
# 381 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Redd_Battle04_5

Redd_Battle04_10:
# 395 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle04_ReddText_PostBattle2b
	goto Redd_Battle04_9

Redd_Battle04_14:
# 379 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 10, Common_Movement_WalkLeft
	goto Redd_Battle04_13


Baron_Battle02::
# 421 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL_BATTLE_STATE, 0
	goto_if_eq Baron_Battle02_4
Baron_Battle02_3:
# 421 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL_BATTLE_STATE, 7
	goto_if_eq Baron_Battle02_7
Baron_Battle02_1:
# 454 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_TEMP_6
	return

Baron_Battle02_2:
# 422 "data/emeralbody_rivals/rival_battles.pory"
	lock
# 423 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_TEMP_A, 0
# 424 "data/emeralbody_rivals/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 425 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 426 "data/emeralbody_rivals/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 427 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_1, 9
	goto_if_eq Baron_Battle02_11
# 436 "data/emeralbody_rivals/rival_battles.pory"
	faceplayer
Baron_Battle02_10:
# 438 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle02_BaronText_PreBattle, MSGBOX_DEFAULT
# 439 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalMusic
# 440 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 441 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_BARON_2, Battle02_BaronText_BattleVictory
# 442 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 443 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle02_BaronText_PostBattle, MSGBOX_DEFAULT
# 444 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 445 "data/emeralbody_rivals/rival_battles.pory"
	fadedefaultbgm
# 446 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 8
# 447 "data/emeralbody_rivals/rival_battles.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 448 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_TEMP_2
# 449 "data/emeralbody_rivals/rival_battles.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 450 "data/emeralbody_rivals/rival_battles.pory"
	removeobject 7
# 451 "data/emeralbody_rivals/rival_battles.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 452 "data/emeralbody_rivals/rival_battles.pory"
	release
	goto Baron_Battle02_1

Baron_Battle02_4:
# 421 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 0
	goto_if_eq Baron_Battle02_2
	goto Baron_Battle02_3

Baron_Battle02_7:
# 421 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 5
	goto_if_eq Baron_Battle02_2
	goto Baron_Battle02_1

Baron_Battle02_11:
# 428 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 7, Common_Movement_WalkInPlaceUp
# 429 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 430 "data/emeralbody_rivals/rival_battles.pory"
	delay 50
# 431 "data/emeralbody_rivals/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceDown
# 432 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 7, Common_Movement_WalkUp
# 433 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Baron_Battle02_10


Baron_Battle03::
# 458 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 0
	goto_if_eq Baron_Battle03_2
	return

Baron_Battle03_1:
# 459 "data/emeralbody_rivals/rival_battles.pory"
	lock
# 460 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_TEMP_A, 0
# 461 "data/emeralbody_rivals/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 462 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 463 "data/emeralbody_rivals/rival_battles.pory"
	addobject 14
# 464 "data/emeralbody_rivals/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 465 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_1, 8
	goto_if_eq Baron_Battle03_6
# 468 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_1, 9
	goto_if_eq Baron_Battle03_7
# 471 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_1, 10
	goto_if_eq Baron_Battle03_8
# 474 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_1, 11
	goto_if_eq Baron_Battle03_9
Baron_Battle03_5:
# 479 "data/emeralbody_rivals/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceLeft
# 480 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 14, Common_Movement_WalkRight7
# 481 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 482 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle03_BaronText_PreBattle, MSGBOX_DEFAULT
# 483 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalMusic
# 484 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 485 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_BARON_3, Battle03_BaronText_BattleVictory
# 486 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 487 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle03_BaronText_PostBattle, MSGBOX_DEFAULT
# 488 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 489 "data/emeralbody_rivals/rival_battles.pory"
	fadedefaultbgm
# 490 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 2
# 491 "data/emeralbody_rivals/rival_battles.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 492 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 14, Common_Movement_WalkLeft7
# 493 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 494 "data/emeralbody_rivals/rival_battles.pory"
	removeobject 14
# 495 "data/emeralbody_rivals/rival_battles.pory"
	release
	return

Baron_Battle03_2:
# 458 "data/emeralbody_rivals/rival_battles.pory"
	goto_if_set FLAG_BADGE05_GET, Baron_Battle03_1
	return

Baron_Battle03_6:
# 466 "data/emeralbody_rivals/rival_battles.pory"
	setobjectxy 14, 30, 8
	goto Baron_Battle03_5

Baron_Battle03_7:
# 469 "data/emeralbody_rivals/rival_battles.pory"
	setobjectxy 14, 30, 9
	goto Baron_Battle03_5

Baron_Battle03_8:
# 472 "data/emeralbody_rivals/rival_battles.pory"
	setobjectxy 14, 30, 10
	goto Baron_Battle03_5

Baron_Battle03_9:
# 475 "data/emeralbody_rivals/rival_battles.pory"
	setobjectxy 14, 30, 10
# 476 "data/emeralbody_rivals/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
# 477 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Baron_Battle03_5


Baron_Battle04::
# 500 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 0
	goto_if_eq Baron_Battle04_2
	return

Baron_Battle04_1:
# 501 "data/emeralbody_rivals/rival_battles.pory"
	lock
# 502 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_TEMP_A, 0
# 503 "data/emeralbody_rivals/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 504 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 505 "data/emeralbody_rivals/rival_battles.pory"
	addobject 27
# 506 "data/emeralbody_rivals/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 507 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_0, 55
	goto_if_eq Baron_Battle04_6
# 512 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 27, Common_Movement_WalkLeft8
# 513 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
Baron_Battle04_5:
# 515 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 27, Common_Movement_WalkInPlaceUp
# 516 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 517 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle04_BaronText_PreBattle, MSGBOX_DEFAULT
# 518 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalMusic
# 519 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 520 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_BARON_4, Battle04_BaronText_BattleVictory
# 521 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 522 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle04_BaronText_PostBattle, MSGBOX_DEFAULT
# 523 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 524 "data/emeralbody_rivals/rival_battles.pory"
	fadedefaultbgm
# 525 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 3
# 526 "data/emeralbody_rivals/rival_battles.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 527 "data/emeralbody_rivals/rival_battles.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 528 "data/emeralbody_rivals/rival_battles.pory"
	removeobject 27
# 529 "data/emeralbody_rivals/rival_battles.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 530 "data/emeralbody_rivals/rival_battles.pory"
	release
	return

Baron_Battle04_2:
# 500 "data/emeralbody_rivals/rival_battles.pory"
	goto_if_set FLAG_MET_TEAM_AQUA_HARBOR, Baron_Battle04_1
	return

Baron_Battle04_6:
# 508 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 27, Common_Movement_WalkLeft9
# 509 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Baron_Battle04_5


Jakson_Battle02::
# 543 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 2
	goto_if_eq Jakson_Battle02_1
	return

Jakson_Battle02_1:
# 544 "data/emeralbody_rivals/rival_battles.pory"
	lock
# 545 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_TEMP_A, 2
# 546 "data/emeralbody_rivals/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 547 "data/emeralbody_rivals/rival_battles.pory"
	delay 30
# 548 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 549 "data/emeralbody_rivals/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 550 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_0, 5
	goto_if_eq Jakson_Battle02_4
Jakson_Battle02_3:
# 572 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle02_JaksonText_PreBattle, MSGBOX_DEFAULT
# 573 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalMusic
# 574 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 575 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_JAKSON_2, Battle02_JaksonText_BattleVictory
# 576 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 577 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle02_JaksonText_PostBattle, MSGBOX_DEFAULT
# 578 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 579 "data/emeralbody_rivals/rival_battles.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 580 "data/emeralbody_rivals/rival_battles.pory"
	removeobject 7
# 581 "data/emeralbody_rivals/rival_battles.pory"
	removeobject 6
# 582 "data/emeralbody_rivals/rival_battles.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 583 "data/emeralbody_rivals/rival_battles.pory"
	fadedefaultbgm
# 584 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 1
# 585 "data/emeralbody_rivals/rival_battles.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 586 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_TEMP_2
# 587 "data/emeralbody_rivals/rival_battles.pory"
	release
	return

Jakson_Battle02_4:
# 551 "data/emeralbody_rivals/rival_battles.pory"
	switch VAR_TEMP_1
# 552 "data/emeralbody_rivals/rival_battles.pory"
	case 9, Jakson_Battle02_8
# 555 "data/emeralbody_rivals/rival_battles.pory"
	case 11, Jakson_Battle02_9
# 558 "data/emeralbody_rivals/rival_battles.pory"
	case 12, Jakson_Battle02_10
# 561 "data/emeralbody_rivals/rival_battles.pory"
	case 13, Jakson_Battle02_11
# 564 "data/emeralbody_rivals/rival_battles.pory"
	case 14, Jakson_Battle02_12
Jakson_Battle02_6:
# 569 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 7, Common_Movement_WalkRight2
# 570 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Jakson_Battle02_3

Jakson_Battle02_8:
# 553 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 7, Common_Movement_WalkUp
# 554 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Jakson_Battle02_6

Jakson_Battle02_9:
# 556 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 7, Common_Movement_WalkDown
# 557 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Jakson_Battle02_6

Jakson_Battle02_10:
# 559 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 7, Common_Movement_WalkDown2
# 560 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Jakson_Battle02_6

Jakson_Battle02_11:
# 562 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 7, Common_Movement_WalkDown3
# 563 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Jakson_Battle02_6

Jakson_Battle02_12:
# 565 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 7, Common_Movement_WalkDown4
# 566 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Jakson_Battle02_6


Jakson_Battle02_Block::
# 592 "data/emeralbody_rivals/rival_battles.pory"
	lock
# 593 "data/emeralbody_rivals/rival_battles.pory"
	faceplayer
# 594 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Jakson_Battle02_Block_Text_0
# 595 "data/emeralbody_rivals/rival_battles.pory"
	playmoncry SPECIES_MURKROW, CRY_MODE_NORMAL
# 596 "data/emeralbody_rivals/rival_battles.pory"
	waitmoncry
# 597 "data/emeralbody_rivals/rival_battles.pory"
	release
	return


Jakson_Battle03::
# 601 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 2
	goto_if_eq Jakson_Battle03_1
	return

Jakson_Battle03_1:
# 602 "data/emeralbody_rivals/rival_battles.pory"
	lock
# 603 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_TEMP_A, 2
# 604 "data/emeralbody_rivals/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 605 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 606 "data/emeralbody_rivals/rival_battles.pory"
	addobject 48
# 607 "data/emeralbody_rivals/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 608 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_0, 31
	goto_if_eq Jakson_Battle03_4
Jakson_Battle03_3:
# 611 "data/emeralbody_rivals/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceDown
# 612 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 48, Common_Movement_WalkUp5
# 613 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 614 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle03_JaksonText_PreBattle, MSGBOX_DEFAULT
# 615 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalMusic
# 616 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 617 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_JAKSON_3, Battle03_JaksonText_BattleVictory
# 618 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 619 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle03_JaksonText_PostBattle, MSGBOX_DEFAULT
# 620 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 621 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 2
# 622 "data/emeralbody_rivals/rival_battles.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 623 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_0, 31
	goto_if_eq Jakson_Battle03_7
# 628 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 48, Common_Movement_WalkRight
# 629 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
Jakson_Battle03_6:
# 631 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 48, Common_Movement_WalkUp7
# 632 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 633 "data/emeralbody_rivals/rival_battles.pory"
	removeobject 48
# 634 "data/emeralbody_rivals/rival_battles.pory"
	fadedefaultbgm
# 635 "data/emeralbody_rivals/rival_battles.pory"
	release
	return

Jakson_Battle03_4:
# 609 "data/emeralbody_rivals/rival_battles.pory"
	setobjectxy 48, 31, 103
	goto Jakson_Battle03_3

Jakson_Battle03_7:
# 624 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 48, Common_Movement_WalkLeft
# 625 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Jakson_Battle03_6


Jakson_Battle04::
# 640 "data/emeralbody_rivals/rival_battles.pory"
	lock
# 641 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_TEMP_A, 2
# 642 "data/emeralbody_rivals/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 643 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 644 "data/emeralbody_rivals/rival_battles.pory"
	delay 30
# 645 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 4, Common_Movement_WalkDown2
# 646 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 647 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle04_JaksonText_PreBattle, MSGBOX_DEFAULT
# 648 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalMusic
# 649 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 650 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_JAKSON_4, Battle04_JaksonText_BattleVictory
# 651 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 652 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle04_JaksonText_PostBattle, MSGBOX_DEFAULT
# 653 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 654 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 3
# 655 "data/emeralbody_rivals/rival_battles.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 656 "data/emeralbody_rivals/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight
# 657 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 658 "data/emeralbody_rivals/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceLeft
# 659 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 4, Common_Movement_WalkDown
# 660 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 661 "data/emeralbody_rivals/rival_battles.pory"
	delay 10
# 662 "data/emeralbody_rivals/rival_battles.pory"
	removeobject 4
# 663 "data/emeralbody_rivals/rival_battles.pory"
	playse SE_EXIT
# 664 "data/emeralbody_rivals/rival_battles.pory"
	waitse
# 665 "data/emeralbody_rivals/rival_battles.pory"
	release
	return


Rival_Battle05::
# 678 "data/emeralbody_rivals/rival_battles.pory"
	lock
# 679 "data/emeralbody_rivals/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 680 "data/emeralbody_rivals/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 681 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 682 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalMusic
# 683 "data/emeralbody_rivals/rival_battles.pory"
	hidefollower
# 684 "data/emeralbody_rivals/rival_battles.pory"
	delay 10
# 685 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 686 "data/emeralbody_rivals/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceDown
# 687 "data/emeralbody_rivals/rival_battles.pory"
	switch VAR_EMERALBODY_RIVAL
# 688 "data/emeralbody_rivals/rival_battles.pory"
	case 1, Rival_Battle05_3
# 690 "data/emeralbody_rivals/rival_battles.pory"
	case 2, Rival_Battle05_4
# 692 "data/emeralbody_rivals/rival_battles.pory"
	case 3, Rival_Battle05_5
# 694 "data/emeralbody_rivals/rival_battles.pory"
	case 4, Rival_Battle05_6
# 697 "data/emeralbody_rivals/rival_battles.pory"
	call Baron_Battle05
Rival_Battle05_1:
# 699 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 4
# 700 "data/emeralbody_rivals/rival_battles.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 701 "data/emeralbody_rivals/rival_battles.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 702 "data/emeralbody_rivals/rival_battles.pory"
	warpsilent MAP_EVER_GRANDE_CITY_POKEMON_LEAGUE_1F, 9, 4
# 703 "data/emeralbody_rivals/rival_battles.pory"
	release
	return

Rival_Battle05_3:
# 689 "data/emeralbody_rivals/rival_battles.pory"
	call Harper_Battle05
	goto Rival_Battle05_1

Rival_Battle05_4:
# 691 "data/emeralbody_rivals/rival_battles.pory"
	call Jakson_Battle05
	goto Rival_Battle05_1

Rival_Battle05_5:
# 693 "data/emeralbody_rivals/rival_battles.pory"
	call Redd_Battle05
	goto Rival_Battle05_1

Rival_Battle05_6:
# 695 "data/emeralbody_rivals/rival_battles.pory"
	call Sakura_Battle05
	goto Rival_Battle05_1


Jakson_Battle05::
# 707 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_0, 9
	goto_if_eq Jakson_Battle05_2
# 711 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 8, Common_Movement_WalkRight6
Jakson_Battle05_1:
# 713 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 714 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 8, Common_Movement_WalkUp
# 715 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 716 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_JaksonText_PreBattle, MSGBOX_DEFAULT
# 717 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 718 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 8, Common_Movement_WalkInPlaceLeft
# 719 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 720 "data/emeralbody_rivals/rival_battles.pory"
	delay 60
# 721 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 8, Common_Movement_WalkInPlaceUp
# 722 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 723 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 724 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_JaksonText_PreBattle2, MSGBOX_DEFAULT
# 725 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_JAKSON_5, Battle05_JaksonText_BattleVictory
# 726 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 727 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_JaksonText_PostBattle, MSGBOX_DEFAULT
# 728 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 729 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 8, Common_Movement_WalkDown
# 730 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 731 "data/emeralbody_rivals/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 732 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_0, 9
	goto_if_eq Jakson_Battle05_6
# 736 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 8, Common_Movement_WalkLeft6
Jakson_Battle05_5:
# 738 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 739 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 8, Common_Movement_WalkInPlaceUp
# 740 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	return

Jakson_Battle05_2:
# 708 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 8, Common_Movement_WalkRight5
	goto Jakson_Battle05_1

Jakson_Battle05_6:
# 733 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 8, Common_Movement_WalkLeft5
	goto Jakson_Battle05_5


Harper_Battle05::
# 744 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_0, 9
	goto_if_eq Harper_Battle05_2
# 748 "data/emeralbody_rivals/rival_battles.pory"
	setobjectxy 9, 10, 8
Harper_Battle05_1:
# 750 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 9, Common_Movement_WalkUp5
# 751 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 752 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_HarperText_PreBattle, MSGBOX_DEFAULT
# 753 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_HARPER_5, Battle05_HarperText_BattleVictory
# 754 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 9, Common_Movement_WalkInPlaceLeft
# 755 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 756 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 757 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_HarperText_PostBattle, MSGBOX_DEFAULT
# 758 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 759 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 9, Common_Movement_WalkInPlaceUp
# 760 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 761 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_HarperText_PostBattle2, MSGBOX_DEFAULT
# 762 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 763 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 9, Common_Movement_WalkDown5
# 764 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	return

Harper_Battle05_2:
# 745 "data/emeralbody_rivals/rival_battles.pory"
	setobjectxy 9, 9, 8
	goto Harper_Battle05_1


Redd_Battle05::
# 768 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_0, 9
	goto_if_eq Redd_Battle05_2
# 772 "data/emeralbody_rivals/rival_battles.pory"
	setobjectxy 10, 10, 8
Redd_Battle05_1:
# 774 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 10, Common_Movement_WalkUp5
# 775 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 776 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_ReddText_PreBattle, MSGBOX_DEFAULT
# 777 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_0x8004, 1
# 778 "data/emeralbody_rivals/rival_battles.pory"
	specialvar VAR_RESULT, ScriptGetPokedexInfo
# 779 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_0x8006, 100
	goto_if_ge Redd_Battle05_6
# 783 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_ReddText_PreBattle2a, MSGBOX_DEFAULT
Redd_Battle05_5:
# 785 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_ReddText_PreBattle3, MSGBOX_DEFAULT
# 786 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_REDD_5, Battle05_ReddText_BattleVictory
# 787 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 788 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_ReddText_PostBattle, MSGBOX_DEFAULT
# 789 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 790 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 10, Common_Movement_WalkInPlaceLeft
# 791 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 792 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 793 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_ReddText_PostBattle2, MSGBOX_DEFAULT
# 794 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 795 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 10, Common_Movement_WalkInPlaceUp
# 796 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 797 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 798 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_ReddText_PostBattle3, MSGBOX_DEFAULT
# 799 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 800 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 10, Common_Movement_WalkDown5
# 801 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	return

Redd_Battle05_2:
# 769 "data/emeralbody_rivals/rival_battles.pory"
	setobjectxy 10, 9, 8
	goto Redd_Battle05_1

Redd_Battle05_6:
# 780 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_ReddText_PreBattle2b, MSGBOX_DEFAULT
	goto Redd_Battle05_5


Sakura_Battle05::
# 805 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_0, 9
	goto_if_eq Sakura_Battle05_2
# 809 "data/emeralbody_rivals/rival_battles.pory"
	setobjectxy 11, 10, 3
Sakura_Battle05_1:
# 811 "data/emeralbody_rivals/rival_battles.pory"
	setfieldeffectargument 0, 1
# 812 "data/emeralbody_rivals/rival_battles.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 813 "data/emeralbody_rivals/rival_battles.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 814 "data/emeralbody_rivals/rival_battles.pory"
	addobject 11
# 815 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 11, Common_Movement_FaceUp
# 816 "data/emeralbody_rivals/rival_battles.pory"
	delay 30
# 817 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_SakuraText_PreBattle, MSGBOX_DEFAULT
# 818 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_SAKURA_5, Battle05_SakuraText_BattleVictory
# 819 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 820 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_SakuraText_PostBattle, MSGBOX_DEFAULT
# 821 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 822 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 11, Common_Movement_WalkDown5
# 823 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	return

Sakura_Battle05_2:
# 806 "data/emeralbody_rivals/rival_battles.pory"
	setobjectxy 11, 9, 3
	goto Sakura_Battle05_1


Baron_Battle05::
# 827 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_0, 9
	goto_if_eq Baron_Battle05_2
# 831 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 12, Common_Movement_WalkLeft5
Baron_Battle05_1:
# 833 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 834 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 12, Common_Movement_WalkUp
# 835 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 836 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_BaronText_PreBattle, MSGBOX_DEFAULT
# 837 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 838 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 12, Common_Movement_WalkInPlaceLeft
# 839 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 840 "data/emeralbody_rivals/rival_battles.pory"
	delay 20
# 841 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 12, Common_Movement_WalkInPlaceDown
# 842 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 843 "data/emeralbody_rivals/rival_battles.pory"
	delay 40
# 844 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 12, Common_Movement_WalkInPlaceUp
# 845 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 846 "data/emeralbody_rivals/rival_battles.pory"
	delay 20
# 847 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 848 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_BaronText_PreBattle2, MSGBOX_DEFAULT
# 849 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_BARON_5, Battle05_BaronText_BattleVictory
# 850 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 851 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_BaronText_PostBattle, MSGBOX_DEFAULT
# 852 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 853 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 12, Common_Movement_WalkInPlaceDown
# 854 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 855 "data/emeralbody_rivals/rival_battles.pory"
	delay 40
# 856 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 12, Common_Movement_WalkInPlaceUp
# 857 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 858 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 859 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_BaronText_PostBattle2, MSGBOX_DEFAULT
# 860 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 861 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 12, Common_Movement_WalkDown
# 862 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 863 "data/emeralbody_rivals/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 864 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_0, 9
	goto_if_eq Baron_Battle05_6
# 868 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 12, Common_Movement_WalkRight5
Baron_Battle05_5:
# 870 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 871 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 12, Common_Movement_WalkInPlaceUp
# 872 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	return

Baron_Battle05_2:
# 828 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 12, Common_Movement_WalkLeft6
	goto Baron_Battle05_1

Baron_Battle05_6:
# 865 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 12, Common_Movement_WalkRight6
	goto Baron_Battle05_5


Jakson_Battle02_Block_Text_0:
# 594 "data/emeralbody_rivals/rival_battles.pory"
	.string "The Murkrow sees you trying to sneak\naround and actively blocks your\lefforts.$"
