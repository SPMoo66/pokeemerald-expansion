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
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 11
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
	compare VAR_EMERALBODY_RIVAL_BATTLE_STATE, 0
	goto_if_eq Redd_Battle02_4
Redd_Battle02_3:
# 250 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL_BATTLE_STATE, 8
	goto_if_eq Redd_Battle02_7
Redd_Battle02_1:
# 304 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_TEMP_6
	return

Redd_Battle02_2:
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
	goto_if_eq Redd_Battle02_11
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
	goto_if_eq Redd_Battle02_19
# 282 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 40, Common_Movement_WalkUp2
# 283 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
Redd_Battle02_18:
# 285 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 40, Common_Movement_WalkRight
# 286 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 287 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle02_ReddText_PreBattleAlt, MSGBOX_DEFAULT
Redd_Battle02_10:
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
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 9
# 300 "data/emeralbody_rivals/rival_battles.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 301 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_TEMP_2
# 302 "data/emeralbody_rivals/rival_battles.pory"
	release
	goto Redd_Battle02_1

Redd_Battle02_4:
# 250 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 3
	goto_if_eq Redd_Battle02_2
	goto Redd_Battle02_3

Redd_Battle02_7:
# 250 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 5
	goto_if_eq Redd_Battle02_2
	goto Redd_Battle02_1

Redd_Battle02_11:
# 257 "data/emeralbody_rivals/rival_battles.pory"
	switch VAR_TEMP_0
# 258 "data/emeralbody_rivals/rival_battles.pory"
	case 17, Redd_Battle02_16
# 261 "data/emeralbody_rivals/rival_battles.pory"
	case 19, Redd_Battle02_17
Redd_Battle02_14:
# 266 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 40, Common_Movement_WalkDown2
# 267 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 268 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle02_ReddText_PreBattle, MSGBOX_DEFAULT
	goto Redd_Battle02_10

Redd_Battle02_16:
# 259 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 40, Common_Movement_WalkLeft
# 260 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Redd_Battle02_14

Redd_Battle02_17:
# 262 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 40, Common_Movement_WalkRight
# 263 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Redd_Battle02_14

Redd_Battle02_19:
# 278 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 40, Common_Movement_WalkUp3
# 279 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Redd_Battle02_18


Redd_Battle03::
# 308 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 3
	goto_if_eq Redd_Battle03_1
	return

Redd_Battle03_1:
# 309 "data/emeralbody_rivals/rival_battles.pory"
	lock
# 310 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_TEMP_A, 3
# 311 "data/emeralbody_rivals/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 312 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 313 "data/emeralbody_rivals/rival_battles.pory"
	addobject 5
# 314 "data/emeralbody_rivals/rival_battles.pory"
	playse SE_EXIT
# 315 "data/emeralbody_rivals/rival_battles.pory"
	waitse
# 316 "data/emeralbody_rivals/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 317 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_1, 7
	goto_if_eq Redd_Battle03_4
# 323 "data/emeralbody_rivals/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceRight
# 324 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 5, Common_Movement_WalkDown3
# 325 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
Redd_Battle03_3:
# 327 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 5, Common_Movement_WalkLeft3
# 328 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 329 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_1, 7
	goto_if_eq Redd_Battle03_8
# 335 "data/emeralbody_rivals/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceUp
# 336 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 5, Common_Movement_WalkInPlaceDown
# 337 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
Redd_Battle03_7:
# 339 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 340 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle03_ReddText_PreBattle, MSGBOX_DEFAULT
# 341 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalMusic
# 342 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 343 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_REDD_3, Battle03_ReddText_BattleVictory
# 344 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 345 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle03_ReddText_PostBattle, MSGBOX_DEFAULT
# 346 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 347 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 5, Common_Movement_WalkLeft4
# 348 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 349 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_1, 7
	goto_if_eq Redd_Battle03_12
# 354 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 5, Common_Movement_WalkDown
# 355 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
Redd_Battle03_11:
# 357 "data/emeralbody_rivals/rival_battles.pory"
	removeobject 5
# 358 "data/emeralbody_rivals/rival_battles.pory"
	playse SE_EXIT
# 359 "data/emeralbody_rivals/rival_battles.pory"
	waitse
# 360 "data/emeralbody_rivals/rival_battles.pory"
	fadedefaultbgm
# 361 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 2
# 362 "data/emeralbody_rivals/rival_battles.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 363 "data/emeralbody_rivals/rival_battles.pory"
	release
	return

Redd_Battle03_4:
# 318 "data/emeralbody_rivals/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceRight
# 319 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 5, Common_Movement_WalkDown4
# 320 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Redd_Battle03_3

Redd_Battle03_8:
# 330 "data/emeralbody_rivals/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceDown
# 331 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 5, Common_Movement_WalkInPlaceUp
# 332 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Redd_Battle03_7

Redd_Battle03_12:
# 350 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 5, Common_Movement_WalkInPlaceDown
# 351 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Redd_Battle03_11


Redd_Battle04::
# 368 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 3
	goto_if_eq Redd_Battle04_2
	return

Redd_Battle04_1:
# 369 "data/emeralbody_rivals/rival_battles.pory"
	lock
# 370 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_TEMP_A, 3
# 371 "data/emeralbody_rivals/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 372 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 373 "data/emeralbody_rivals/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 374 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_1, 5
	goto_if_eq Redd_Battle04_6
# 385 "data/emeralbody_rivals/rival_battles.pory"
	faceplayer
Redd_Battle04_5:
# 387 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle04_ReddText_PreBattle, MSGBOX_DEFAULT
# 388 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalMusic
# 389 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 390 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_REDD_4, Battle04_ReddText_BattleVictory
# 391 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 392 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle04_ReddText_PostBattle1, MSGBOX_DEFAULT
# 393 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_0x8004, 1
# 394 "data/emeralbody_rivals/rival_battles.pory"
	specialvar VAR_RESULT, ScriptGetPokedexInfo
# 395 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_0x8006, 75
	goto_if_ge Redd_Battle04_10
# 399 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle04_ReddText_PostBattle2a, MSGBOX_DEFAULT
Redd_Battle04_9:
# 401 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle04_ReddText_PostBattle3, MSGBOX_DEFAULT
# 402 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 403 "data/emeralbody_rivals/rival_battles.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 404 "data/emeralbody_rivals/rival_battles.pory"
	removeobject 10
# 405 "data/emeralbody_rivals/rival_battles.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 406 "data/emeralbody_rivals/rival_battles.pory"
	fadedefaultbgm
# 407 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 3
# 408 "data/emeralbody_rivals/rival_battles.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 409 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_TEMP_1
# 410 "data/emeralbody_rivals/rival_battles.pory"
	release
	return

Redd_Battle04_2:
# 368 "data/emeralbody_rivals/rival_battles.pory"
	goto_if_set FLAG_BADGE07_GET, Redd_Battle04_1
	return

Redd_Battle04_6:
# 375 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 10, Common_Movement_ExclamationMark
# 376 "data/emeralbody_rivals/rival_battles.pory"
	playse SE_PIN
# 377 "data/emeralbody_rivals/rival_battles.pory"
	delay 60
# 378 "data/emeralbody_rivals/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceRight
# 379 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_0, 13
	goto_if_eq Redd_Battle04_14
Redd_Battle04_13:
# 382 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Redd_Battle04_5

Redd_Battle04_10:
# 396 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle04_ReddText_PostBattle2b
	goto Redd_Battle04_9

Redd_Battle04_14:
# 380 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 10, Common_Movement_WalkLeft
	goto Redd_Battle04_13


Baron_Battle02::
# 422 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL_BATTLE_STATE, 0
	goto_if_eq Baron_Battle02_4
Baron_Battle02_3:
# 422 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL_BATTLE_STATE, 7
	goto_if_eq Baron_Battle02_7
Baron_Battle02_1:
# 455 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_TEMP_6
	return

Baron_Battle02_2:
# 423 "data/emeralbody_rivals/rival_battles.pory"
	lock
# 424 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_TEMP_A, 0
# 425 "data/emeralbody_rivals/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 426 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 427 "data/emeralbody_rivals/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 428 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_1, 9
	goto_if_eq Baron_Battle02_11
# 437 "data/emeralbody_rivals/rival_battles.pory"
	faceplayer
Baron_Battle02_10:
# 439 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle02_BaronText_PreBattle, MSGBOX_DEFAULT
# 440 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalMusic
# 441 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 442 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_BARON_2, Battle02_BaronText_BattleVictory
# 443 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 444 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle02_BaronText_PostBattle, MSGBOX_DEFAULT
# 445 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 446 "data/emeralbody_rivals/rival_battles.pory"
	fadedefaultbgm
# 447 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 8
# 448 "data/emeralbody_rivals/rival_battles.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 449 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_TEMP_2
# 450 "data/emeralbody_rivals/rival_battles.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 451 "data/emeralbody_rivals/rival_battles.pory"
	removeobject 7
# 452 "data/emeralbody_rivals/rival_battles.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 453 "data/emeralbody_rivals/rival_battles.pory"
	release
	goto Baron_Battle02_1

Baron_Battle02_4:
# 422 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 0
	goto_if_eq Baron_Battle02_2
	goto Baron_Battle02_3

Baron_Battle02_7:
# 422 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 5
	goto_if_eq Baron_Battle02_2
	goto Baron_Battle02_1

Baron_Battle02_11:
# 429 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 7, Common_Movement_WalkInPlaceUp
# 430 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 431 "data/emeralbody_rivals/rival_battles.pory"
	delay 50
# 432 "data/emeralbody_rivals/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceDown
# 433 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 7, Common_Movement_WalkUp
# 434 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Baron_Battle02_10


Baron_Battle03::
# 459 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 0
	goto_if_eq Baron_Battle03_2
	return

Baron_Battle03_1:
# 460 "data/emeralbody_rivals/rival_battles.pory"
	lock
# 461 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_TEMP_A, 0
# 462 "data/emeralbody_rivals/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 463 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 464 "data/emeralbody_rivals/rival_battles.pory"
	addobject 14
# 465 "data/emeralbody_rivals/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 466 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_1, 8
	goto_if_eq Baron_Battle03_6
# 469 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_1, 9
	goto_if_eq Baron_Battle03_7
# 472 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_1, 10
	goto_if_eq Baron_Battle03_8
# 475 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_1, 11
	goto_if_eq Baron_Battle03_9
Baron_Battle03_5:
# 480 "data/emeralbody_rivals/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceLeft
# 481 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 14, Common_Movement_WalkRight7
# 482 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 483 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle03_BaronText_PreBattle, MSGBOX_DEFAULT
# 484 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalMusic
# 485 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 486 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_BARON_3, Battle03_BaronText_BattleVictory
# 487 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 488 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle03_BaronText_PostBattle, MSGBOX_DEFAULT
# 489 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 490 "data/emeralbody_rivals/rival_battles.pory"
	fadedefaultbgm
# 491 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 2
# 492 "data/emeralbody_rivals/rival_battles.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 493 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 14, Common_Movement_WalkLeft7
# 494 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 495 "data/emeralbody_rivals/rival_battles.pory"
	removeobject 14
# 496 "data/emeralbody_rivals/rival_battles.pory"
	release
	return

Baron_Battle03_2:
# 459 "data/emeralbody_rivals/rival_battles.pory"
	goto_if_set FLAG_BADGE05_GET, Baron_Battle03_1
	return

Baron_Battle03_6:
# 467 "data/emeralbody_rivals/rival_battles.pory"
	setobjectxy 14, 30, 8
	goto Baron_Battle03_5

Baron_Battle03_7:
# 470 "data/emeralbody_rivals/rival_battles.pory"
	setobjectxy 14, 30, 9
	goto Baron_Battle03_5

Baron_Battle03_8:
# 473 "data/emeralbody_rivals/rival_battles.pory"
	setobjectxy 14, 30, 10
	goto Baron_Battle03_5

Baron_Battle03_9:
# 476 "data/emeralbody_rivals/rival_battles.pory"
	setobjectxy 14, 30, 10
# 477 "data/emeralbody_rivals/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
# 478 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Baron_Battle03_5


Baron_Battle04::
# 501 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 0
	goto_if_eq Baron_Battle04_2
	return

Baron_Battle04_1:
# 502 "data/emeralbody_rivals/rival_battles.pory"
	lock
# 503 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_TEMP_A, 0
# 504 "data/emeralbody_rivals/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 505 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 506 "data/emeralbody_rivals/rival_battles.pory"
	addobject 27
# 507 "data/emeralbody_rivals/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 508 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_0, 55
	goto_if_eq Baron_Battle04_6
# 513 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 27, Common_Movement_WalkLeft8
# 514 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
Baron_Battle04_5:
# 516 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 27, Common_Movement_WalkInPlaceUp
# 517 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 518 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle04_BaronText_PreBattle, MSGBOX_DEFAULT
# 519 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalMusic
# 520 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 521 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_BARON_4, Battle04_BaronText_BattleVictory
# 522 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 523 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle04_BaronText_PostBattle, MSGBOX_DEFAULT
# 524 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 525 "data/emeralbody_rivals/rival_battles.pory"
	fadedefaultbgm
# 526 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 3
# 527 "data/emeralbody_rivals/rival_battles.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 528 "data/emeralbody_rivals/rival_battles.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 529 "data/emeralbody_rivals/rival_battles.pory"
	removeobject 27
# 530 "data/emeralbody_rivals/rival_battles.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 531 "data/emeralbody_rivals/rival_battles.pory"
	release
	return

Baron_Battle04_2:
# 501 "data/emeralbody_rivals/rival_battles.pory"
	goto_if_set FLAG_MET_TEAM_AQUA_HARBOR, Baron_Battle04_1
	return

Baron_Battle04_6:
# 509 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 27, Common_Movement_WalkLeft9
# 510 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Baron_Battle04_5


Jakson_Battle02::
# 544 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL_BATTLE_STATE, 0
	goto_if_eq Jakson_Battle02_4
Jakson_Battle02_3:
# 544 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL_BATTLE_STATE, 9
	goto_if_eq Jakson_Battle02_7
Jakson_Battle02_1:
# 590 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_TEMP_6
	return

Jakson_Battle02_2:
# 545 "data/emeralbody_rivals/rival_battles.pory"
	lock
# 546 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_TEMP_A, 2
# 547 "data/emeralbody_rivals/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 548 "data/emeralbody_rivals/rival_battles.pory"
	delay 30
# 549 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 550 "data/emeralbody_rivals/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 551 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_0, 5
	goto_if_eq Jakson_Battle02_11
Jakson_Battle02_10:
# 573 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle02_JaksonText_PreBattle, MSGBOX_DEFAULT
# 574 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalMusic
# 575 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 576 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_JAKSON_2, Battle02_JaksonText_BattleVictory
# 577 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 578 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle02_JaksonText_PostBattle, MSGBOX_DEFAULT
# 579 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 580 "data/emeralbody_rivals/rival_battles.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 581 "data/emeralbody_rivals/rival_battles.pory"
	removeobject 7
# 582 "data/emeralbody_rivals/rival_battles.pory"
	removeobject 6
# 583 "data/emeralbody_rivals/rival_battles.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 584 "data/emeralbody_rivals/rival_battles.pory"
	fadedefaultbgm
# 585 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 10
# 586 "data/emeralbody_rivals/rival_battles.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 587 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_TEMP_2
# 588 "data/emeralbody_rivals/rival_battles.pory"
	release
	goto Jakson_Battle02_1

Jakson_Battle02_4:
# 544 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 2
	goto_if_eq Jakson_Battle02_2
	goto Jakson_Battle02_3

Jakson_Battle02_7:
# 544 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 5
	goto_if_eq Jakson_Battle02_2
	goto Jakson_Battle02_1

Jakson_Battle02_11:
# 552 "data/emeralbody_rivals/rival_battles.pory"
	switch VAR_TEMP_1
# 553 "data/emeralbody_rivals/rival_battles.pory"
	case 9, Jakson_Battle02_15
# 556 "data/emeralbody_rivals/rival_battles.pory"
	case 11, Jakson_Battle02_16
# 559 "data/emeralbody_rivals/rival_battles.pory"
	case 12, Jakson_Battle02_17
# 562 "data/emeralbody_rivals/rival_battles.pory"
	case 13, Jakson_Battle02_18
# 565 "data/emeralbody_rivals/rival_battles.pory"
	case 14, Jakson_Battle02_19
Jakson_Battle02_13:
# 570 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 7, Common_Movement_WalkRight2
# 571 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Jakson_Battle02_10

Jakson_Battle02_15:
# 554 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 7, Common_Movement_WalkUp
# 555 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Jakson_Battle02_13

Jakson_Battle02_16:
# 557 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 7, Common_Movement_WalkDown
# 558 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Jakson_Battle02_13

Jakson_Battle02_17:
# 560 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 7, Common_Movement_WalkDown2
# 561 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Jakson_Battle02_13

Jakson_Battle02_18:
# 563 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 7, Common_Movement_WalkDown3
# 564 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Jakson_Battle02_13

Jakson_Battle02_19:
# 566 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 7, Common_Movement_WalkDown4
# 567 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Jakson_Battle02_13


Jakson_Battle02_Block::
# 594 "data/emeralbody_rivals/rival_battles.pory"
	lock
# 595 "data/emeralbody_rivals/rival_battles.pory"
	faceplayer
# 596 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Jakson_Battle02_Block_Text_0
# 597 "data/emeralbody_rivals/rival_battles.pory"
	playmoncry SPECIES_MURKROW, CRY_MODE_NORMAL
# 598 "data/emeralbody_rivals/rival_battles.pory"
	waitmoncry
# 599 "data/emeralbody_rivals/rival_battles.pory"
	release
	return


Jakson_Battle03::
# 603 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 2
	goto_if_eq Jakson_Battle03_1
	return

Jakson_Battle03_1:
# 604 "data/emeralbody_rivals/rival_battles.pory"
	lock
# 605 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_TEMP_A, 2
# 606 "data/emeralbody_rivals/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 607 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 608 "data/emeralbody_rivals/rival_battles.pory"
	addobject 48
# 609 "data/emeralbody_rivals/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 610 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_0, 31
	goto_if_eq Jakson_Battle03_4
Jakson_Battle03_3:
# 613 "data/emeralbody_rivals/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceDown
# 614 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 48, Common_Movement_WalkUp5
# 615 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 616 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle03_JaksonText_PreBattle, MSGBOX_DEFAULT
# 617 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalMusic
# 618 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 619 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_JAKSON_3, Battle03_JaksonText_BattleVictory
# 620 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 621 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle03_JaksonText_PostBattle, MSGBOX_DEFAULT
# 622 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 623 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 2
# 624 "data/emeralbody_rivals/rival_battles.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 625 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_0, 31
	goto_if_eq Jakson_Battle03_7
# 630 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 48, Common_Movement_WalkRight
# 631 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
Jakson_Battle03_6:
# 633 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 48, Common_Movement_WalkUp7
# 634 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 635 "data/emeralbody_rivals/rival_battles.pory"
	removeobject 48
# 636 "data/emeralbody_rivals/rival_battles.pory"
	fadedefaultbgm
# 637 "data/emeralbody_rivals/rival_battles.pory"
	release
	return

Jakson_Battle03_4:
# 611 "data/emeralbody_rivals/rival_battles.pory"
	setobjectxy 48, 31, 103
	goto Jakson_Battle03_3

Jakson_Battle03_7:
# 626 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 48, Common_Movement_WalkLeft
# 627 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Jakson_Battle03_6


Jakson_Battle04::
# 642 "data/emeralbody_rivals/rival_battles.pory"
	lock
# 643 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_TEMP_A, 2
# 644 "data/emeralbody_rivals/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 645 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 646 "data/emeralbody_rivals/rival_battles.pory"
	delay 30
# 647 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 4, Common_Movement_WalkDown2
# 648 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 649 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle04_JaksonText_PreBattle, MSGBOX_DEFAULT
# 650 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalMusic
# 651 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 652 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_JAKSON_4, Battle04_JaksonText_BattleVictory
# 653 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 654 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle04_JaksonText_PostBattle, MSGBOX_DEFAULT
# 655 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 656 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 3
# 657 "data/emeralbody_rivals/rival_battles.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 658 "data/emeralbody_rivals/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight
# 659 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 660 "data/emeralbody_rivals/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceLeft
# 661 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 4, Common_Movement_WalkDown
# 662 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 663 "data/emeralbody_rivals/rival_battles.pory"
	delay 10
# 664 "data/emeralbody_rivals/rival_battles.pory"
	removeobject 4
# 665 "data/emeralbody_rivals/rival_battles.pory"
	playse SE_EXIT
# 666 "data/emeralbody_rivals/rival_battles.pory"
	waitse
# 667 "data/emeralbody_rivals/rival_battles.pory"
	release
	return


Rival_Battle05::
# 680 "data/emeralbody_rivals/rival_battles.pory"
	lock
# 681 "data/emeralbody_rivals/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 682 "data/emeralbody_rivals/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 683 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 684 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalMusic
# 685 "data/emeralbody_rivals/rival_battles.pory"
	hidefollower
# 686 "data/emeralbody_rivals/rival_battles.pory"
	delay 10
# 687 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 688 "data/emeralbody_rivals/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceDown
# 689 "data/emeralbody_rivals/rival_battles.pory"
	switch VAR_EMERALBODY_RIVAL
# 690 "data/emeralbody_rivals/rival_battles.pory"
	case 1, Rival_Battle05_3
# 692 "data/emeralbody_rivals/rival_battles.pory"
	case 2, Rival_Battle05_4
# 694 "data/emeralbody_rivals/rival_battles.pory"
	case 3, Rival_Battle05_5
# 696 "data/emeralbody_rivals/rival_battles.pory"
	case 4, Rival_Battle05_6
# 699 "data/emeralbody_rivals/rival_battles.pory"
	call Baron_Battle05
Rival_Battle05_1:
# 701 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 4
# 702 "data/emeralbody_rivals/rival_battles.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 703 "data/emeralbody_rivals/rival_battles.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 704 "data/emeralbody_rivals/rival_battles.pory"
	warpsilent MAP_EVER_GRANDE_CITY_POKEMON_LEAGUE_1F, 9, 4
# 705 "data/emeralbody_rivals/rival_battles.pory"
	release
	return

Rival_Battle05_3:
# 691 "data/emeralbody_rivals/rival_battles.pory"
	call Harper_Battle05
	goto Rival_Battle05_1

Rival_Battle05_4:
# 693 "data/emeralbody_rivals/rival_battles.pory"
	call Jakson_Battle05
	goto Rival_Battle05_1

Rival_Battle05_5:
# 695 "data/emeralbody_rivals/rival_battles.pory"
	call Redd_Battle05
	goto Rival_Battle05_1

Rival_Battle05_6:
# 697 "data/emeralbody_rivals/rival_battles.pory"
	call Sakura_Battle05
	goto Rival_Battle05_1


Jakson_Battle05::
# 709 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_0, 9
	goto_if_eq Jakson_Battle05_2
# 713 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 8, Common_Movement_WalkRight6
Jakson_Battle05_1:
# 715 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 716 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 8, Common_Movement_WalkUp
# 717 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 718 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_JaksonText_PreBattle, MSGBOX_DEFAULT
# 719 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 720 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 8, Common_Movement_WalkInPlaceLeft
# 721 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 722 "data/emeralbody_rivals/rival_battles.pory"
	delay 60
# 723 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 8, Common_Movement_WalkInPlaceUp
# 724 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 725 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 726 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_JaksonText_PreBattle2, MSGBOX_DEFAULT
# 727 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_JAKSON_5, Battle05_JaksonText_BattleVictory
# 728 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 729 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_JaksonText_PostBattle, MSGBOX_DEFAULT
# 730 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 731 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 8, Common_Movement_WalkDown
# 732 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 733 "data/emeralbody_rivals/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 734 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_0, 9
	goto_if_eq Jakson_Battle05_6
# 738 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 8, Common_Movement_WalkLeft6
Jakson_Battle05_5:
# 740 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 741 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 8, Common_Movement_WalkInPlaceUp
# 742 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	return

Jakson_Battle05_2:
# 710 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 8, Common_Movement_WalkRight5
	goto Jakson_Battle05_1

Jakson_Battle05_6:
# 735 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 8, Common_Movement_WalkLeft5
	goto Jakson_Battle05_5


Harper_Battle05::
# 746 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_0, 9
	goto_if_eq Harper_Battle05_2
# 750 "data/emeralbody_rivals/rival_battles.pory"
	setobjectxy 9, 10, 8
Harper_Battle05_1:
# 752 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 9, Common_Movement_WalkUp5
# 753 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 754 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_HarperText_PreBattle, MSGBOX_DEFAULT
# 755 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_HARPER_5, Battle05_HarperText_BattleVictory
# 756 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 9, Common_Movement_WalkInPlaceLeft
# 757 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 758 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 759 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_HarperText_PostBattle, MSGBOX_DEFAULT
# 760 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 761 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 9, Common_Movement_WalkInPlaceUp
# 762 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 763 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_HarperText_PostBattle2, MSGBOX_DEFAULT
# 764 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 765 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 9, Common_Movement_WalkDown5
# 766 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	return

Harper_Battle05_2:
# 747 "data/emeralbody_rivals/rival_battles.pory"
	setobjectxy 9, 9, 8
	goto Harper_Battle05_1


Redd_Battle05::
# 770 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_0, 9
	goto_if_eq Redd_Battle05_2
# 774 "data/emeralbody_rivals/rival_battles.pory"
	setobjectxy 10, 10, 8
Redd_Battle05_1:
# 776 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 10, Common_Movement_WalkUp5
# 777 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 778 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_ReddText_PreBattle, MSGBOX_DEFAULT
# 779 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_0x8004, 1
# 780 "data/emeralbody_rivals/rival_battles.pory"
	specialvar VAR_RESULT, ScriptGetPokedexInfo
# 781 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_0x8006, 100
	goto_if_ge Redd_Battle05_6
# 785 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_ReddText_PreBattle2a, MSGBOX_DEFAULT
Redd_Battle05_5:
# 787 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_ReddText_PreBattle3, MSGBOX_DEFAULT
# 788 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_REDD_5, Battle05_ReddText_BattleVictory
# 789 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 790 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_ReddText_PostBattle, MSGBOX_DEFAULT
# 791 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 792 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 10, Common_Movement_WalkInPlaceLeft
# 793 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 794 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 795 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_ReddText_PostBattle2, MSGBOX_DEFAULT
# 796 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 797 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 10, Common_Movement_WalkInPlaceUp
# 798 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 799 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 800 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_ReddText_PostBattle3, MSGBOX_DEFAULT
# 801 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 802 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 10, Common_Movement_WalkDown5
# 803 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	return

Redd_Battle05_2:
# 771 "data/emeralbody_rivals/rival_battles.pory"
	setobjectxy 10, 9, 8
	goto Redd_Battle05_1

Redd_Battle05_6:
# 782 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_ReddText_PreBattle2b, MSGBOX_DEFAULT
	goto Redd_Battle05_5


Sakura_Battle05::
# 807 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_0, 9
	goto_if_eq Sakura_Battle05_2
# 811 "data/emeralbody_rivals/rival_battles.pory"
	setobjectxy 11, 10, 3
Sakura_Battle05_1:
# 813 "data/emeralbody_rivals/rival_battles.pory"
	setfieldeffectargument 0, 1
# 814 "data/emeralbody_rivals/rival_battles.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 815 "data/emeralbody_rivals/rival_battles.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 816 "data/emeralbody_rivals/rival_battles.pory"
	addobject 11
# 817 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 11, Common_Movement_FaceUp
# 818 "data/emeralbody_rivals/rival_battles.pory"
	delay 30
# 819 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_SakuraText_PreBattle, MSGBOX_DEFAULT
# 820 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_SAKURA_5, Battle05_SakuraText_BattleVictory
# 821 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 822 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_SakuraText_PostBattle, MSGBOX_DEFAULT
# 823 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 824 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 11, Common_Movement_WalkDown5
# 825 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	return

Sakura_Battle05_2:
# 808 "data/emeralbody_rivals/rival_battles.pory"
	setobjectxy 11, 9, 3
	goto Sakura_Battle05_1


Baron_Battle05::
# 829 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_0, 9
	goto_if_eq Baron_Battle05_2
# 833 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 12, Common_Movement_WalkLeft5
Baron_Battle05_1:
# 835 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 836 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 12, Common_Movement_WalkUp
# 837 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 838 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_BaronText_PreBattle, MSGBOX_DEFAULT
# 839 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 840 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 12, Common_Movement_WalkInPlaceLeft
# 841 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 842 "data/emeralbody_rivals/rival_battles.pory"
	delay 20
# 843 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 12, Common_Movement_WalkInPlaceDown
# 844 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 845 "data/emeralbody_rivals/rival_battles.pory"
	delay 40
# 846 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 12, Common_Movement_WalkInPlaceUp
# 847 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 848 "data/emeralbody_rivals/rival_battles.pory"
	delay 20
# 849 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 850 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_BaronText_PreBattle2, MSGBOX_DEFAULT
# 851 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_BARON_5, Battle05_BaronText_BattleVictory
# 852 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 853 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_BaronText_PostBattle, MSGBOX_DEFAULT
# 854 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 855 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 12, Common_Movement_WalkInPlaceDown
# 856 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 857 "data/emeralbody_rivals/rival_battles.pory"
	delay 40
# 858 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 12, Common_Movement_WalkInPlaceUp
# 859 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 860 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 861 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_BaronText_PostBattle2, MSGBOX_DEFAULT
# 862 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 863 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 12, Common_Movement_WalkDown
# 864 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 865 "data/emeralbody_rivals/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 866 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_0, 9
	goto_if_eq Baron_Battle05_6
# 870 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 12, Common_Movement_WalkRight5
Baron_Battle05_5:
# 872 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 873 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 12, Common_Movement_WalkInPlaceUp
# 874 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	return

Baron_Battle05_2:
# 830 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 12, Common_Movement_WalkLeft6
	goto Baron_Battle05_1

Baron_Battle05_6:
# 867 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 12, Common_Movement_WalkRight6
	goto Baron_Battle05_5


Jakson_Battle02_Block_Text_0:
# 596 "data/emeralbody_rivals/rival_battles.pory"
	.string "The Murkrow sees you trying to sneak\naround and actively blocks your\lefforts.$"
