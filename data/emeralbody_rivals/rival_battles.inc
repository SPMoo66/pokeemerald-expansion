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
	setflag FLAG_CHALLENGING_TRAINER
# 28 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_HARPER_2, Battle02_HarperText_BattleVictory
# 29 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 30 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle02_HarperText_PostBattle, MSGBOX_DEFAULT
# 31 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 32 "data/emeralbody_rivals/rival_battles.pory"
	applymovement LOCALID_PLAYER, Harper_PlayerMoves
# 33 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 34 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 4, Common_Movement_WalkRight9
# 35 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 36 "data/emeralbody_rivals/rival_battles.pory"
	removeobject 4
# 37 "data/emeralbody_rivals/rival_battles.pory"
	fadedefaultbgm
# 38 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 1
# 39 "data/emeralbody_rivals/rival_battles.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 40 "data/emeralbody_rivals/rival_battles.pory"
	release
	return


# 44 "data/emeralbody_rivals/rival_battles.pory"
Harper_PlayerMoves:
# 45 "data/emeralbody_rivals/rival_battles.pory"
	face_up
# 46 "data/emeralbody_rivals/rival_battles.pory"
	lock_facing_direction
# 47 "data/emeralbody_rivals/rival_battles.pory"
	walk_down
# 48 "data/emeralbody_rivals/rival_battles.pory"
	unlock_facing_direction
	step_end

Harper_Battle03::
# 52 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 1
	goto_if_eq Harper_Battle03_2
	return

Harper_Battle03_1:
# 53 "data/emeralbody_rivals/rival_battles.pory"
	lock
# 54 "data/emeralbody_rivals/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 55 "data/emeralbody_rivals/rival_battles.pory"
	addobject 15
# 56 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 15, Common_Movement_WalkUp3
# 57 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 58 "data/emeralbody_rivals/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceDown
# 59 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 60 "data/emeralbody_rivals/rival_battles.pory"
	delay 40
# 61 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 15, Common_Movement_WalkUp2
# 62 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 63 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 64 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle03_HarperText_PreBattle, MSGBOX_DEFAULT
# 65 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalMusic
# 66 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 67 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_HARPER_3, Battle03_HarperText_BattleVictory
# 68 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 69 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle03_HarperText_PostBattle, MSGBOX_DEFAULT
# 70 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 71 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 15, Common_Movement_WalkDown5
# 72 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 73 "data/emeralbody_rivals/rival_battles.pory"
	removeobject 15
# 74 "data/emeralbody_rivals/rival_battles.pory"
	fadedefaultbgm
# 75 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 2
# 76 "data/emeralbody_rivals/rival_battles.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 77 "data/emeralbody_rivals/rival_battles.pory"
	release
	return

Harper_Battle03_2:
# 52 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_PETALBURG_GYM_STATE, 6
	goto_if_ge Harper_Battle03_1
	return


Harper_Battle04::
# 82 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 1
	goto_if_eq Harper_Battle04_1
	return

Harper_Battle04_1:
# 83 "data/emeralbody_rivals/rival_battles.pory"
	lock
# 84 "data/emeralbody_rivals/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 85 "data/emeralbody_rivals/rival_battles.pory"
	addobject 20
# 86 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 20, Common_Movement_WalkUp6
# 87 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 88 "data/emeralbody_rivals/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceLeft
# 89 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 20, Common_Movement_WalkRight4
# 90 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 91 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 92 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle04_HarperText_PreBattle, MSGBOX_DEFAULT
# 93 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalMusic
# 94 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 95 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_HARPER_4, Battle04_HarperText_BattleVictory
# 96 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 97 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle04_HarperText_PostBattle, MSGBOX_DEFAULT
# 98 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 99 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 20, Common_Movement_WalkLeft7
# 100 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 101 "data/emeralbody_rivals/rival_battles.pory"
	removeobject 20
# 102 "data/emeralbody_rivals/rival_battles.pory"
	fadedefaultbgm
# 103 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 3
# 104 "data/emeralbody_rivals/rival_battles.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 105 "data/emeralbody_rivals/rival_battles.pory"
	release
	return


Sakura_Battle02::
# 117 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 4
	goto_if_eq Sakura_Battle02_1
	return

Sakura_Battle02_1:
# 118 "data/emeralbody_rivals/rival_battles.pory"
	lock
# 119 "data/emeralbody_rivals/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 120 "data/emeralbody_rivals/rival_battles.pory"
	addobject 3
# 121 "data/emeralbody_rivals/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceDown
# 122 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 123 "data/emeralbody_rivals/rival_battles.pory"
	playse SE_PIN
# 124 "data/emeralbody_rivals/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 125 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 126 "data/emeralbody_rivals/rival_battles.pory"
	delay 60
# 127 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 3, Common_Movement_WalkUp4
# 128 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 129 "data/emeralbody_rivals/rival_battles.pory"
	playse SE_LEDGE
# 130 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 3, Common_Movement_JumpUp
# 131 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 132 "data/emeralbody_rivals/rival_battles.pory"
	playse SE_M_CUT
# 133 "data/emeralbody_rivals/rival_battles.pory"
	waitse
# 134 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 135 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle02_SakuraText_PreBattle, MSGBOX_DEFAULT
# 136 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalMusic
# 137 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 138 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_SAKURA_2, Battle02_SakuraText_BattleVictory
# 139 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 140 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle02_SakuraText_PostBattle, MSGBOX_DEFAULT
# 141 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 142 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 3, Common_Movement_WalkDown5
# 143 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 144 "data/emeralbody_rivals/rival_battles.pory"
	removeobject 3
# 145 "data/emeralbody_rivals/rival_battles.pory"
	fadedefaultbgm
# 146 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 1
# 147 "data/emeralbody_rivals/rival_battles.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 148 "data/emeralbody_rivals/rival_battles.pory"
	release
	return


Sakura_Battle03::
# 153 "data/emeralbody_rivals/rival_battles.pory"
	lock
# 154 "data/emeralbody_rivals/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 155 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 156 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle03_SakuraText_PreBattle, MSGBOX_DEFAULT
# 157 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalMusic
# 158 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 159 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_SAKURA_3, Battle03_SakuraText_BattleVictory
# 160 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 161 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle03_SakuraText_PostBattle, MSGBOX_DEFAULT
# 162 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 163 "data/emeralbody_rivals/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 164 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_1, 12
	goto_if_eq Sakura_Battle03_2
Sakura_Battle03_1:
# 168 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 8, Common_Movement_WalkDown
# 169 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 170 "data/emeralbody_rivals/rival_battles.pory"
	playse SE_LEDGE
# 171 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 8, Common_Movement_JumpDown2
# 172 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 173 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 8, Common_Movement_WalkDown4
# 174 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 175 "data/emeralbody_rivals/rival_battles.pory"
	removeobject 8
# 176 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_TEMP_2
# 177 "data/emeralbody_rivals/rival_battles.pory"
	fadedefaultbgm
# 178 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 2
# 179 "data/emeralbody_rivals/rival_battles.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 180 "data/emeralbody_rivals/rival_battles.pory"
	delay 30
# 181 "data/emeralbody_rivals/rival_battles.pory"
	playse SE_EFFECTIVE
# 182 "data/emeralbody_rivals/rival_battles.pory"
	setmetatile 13, 11, 0x208, FALSE
# 183 "data/emeralbody_rivals/rival_battles.pory"
	special DrawWholeMapView
# 184 "data/emeralbody_rivals/rival_battles.pory"
	delay 30
# 185 "data/emeralbody_rivals/rival_battles.pory"
	release
	return

Sakura_Battle03_2:
# 165 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 8, Common_Movement_WalkRight
# 166 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Sakura_Battle03_1


Sakura_Battle04::
# 189 "data/emeralbody_rivals/rival_battles.pory"
	lock
# 190 "data/emeralbody_rivals/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 191 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 192 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle04_SakuraText_PreBattle, MSGBOX_DEFAULT
# 193 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalMusic
# 194 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 195 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_SAKURA_4, Battle04_SakuraText_BattleVictory
# 196 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 197 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle04_SakuraText_PostBattle, MSGBOX_DEFAULT
# 198 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 199 "data/emeralbody_rivals/rival_battles.pory"
	setfieldeffectargument 0, 1
# 200 "data/emeralbody_rivals/rival_battles.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 201 "data/emeralbody_rivals/rival_battles.pory"
	delay 15
# 202 "data/emeralbody_rivals/rival_battles.pory"
	removeobject 1
# 203 "data/emeralbody_rivals/rival_battles.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 204 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_TEMP_1
# 205 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 3
# 206 "data/emeralbody_rivals/rival_battles.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 207 "data/emeralbody_rivals/rival_battles.pory"
	release
	return


Redd_Battle02::
# 218 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 3
	goto_if_eq Redd_Battle02_1
	return

Redd_Battle02_1:
# 219 "data/emeralbody_rivals/rival_battles.pory"
	lock
# 220 "data/emeralbody_rivals/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 221 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 222 "data/emeralbody_rivals/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 223 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_1, 58
	goto_if_eq Redd_Battle02_4
# 238 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 40, Common_Movement_FaceUp
# 239 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 240 "data/emeralbody_rivals/rival_battles.pory"
	playse SE_PIN
# 241 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 40, Common_Movement_ExclamationMark
# 242 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 243 "data/emeralbody_rivals/rival_battles.pory"
	delay 60
# 244 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_1, 52
	goto_if_eq Redd_Battle02_12
# 249 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 40, Common_Movement_WalkUp2
# 250 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
Redd_Battle02_11:
# 252 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 40, Common_Movement_WalkRight
# 253 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 254 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle02_ReddText_PreBattleAlt, MSGBOX_DEFAULT
Redd_Battle02_3:
# 256 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalMusic
# 257 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 258 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_REDD_2, Battle02_ReddText_BattleVictory
# 259 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 260 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle02_ReddText_PostBattle, MSGBOX_DEFAULT
# 261 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 262 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 40, Common_Movement_WalkUp6
# 263 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 264 "data/emeralbody_rivals/rival_battles.pory"
	removeobject 40
# 265 "data/emeralbody_rivals/rival_battles.pory"
	fadedefaultbgm
# 266 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 1
# 267 "data/emeralbody_rivals/rival_battles.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 268 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_TEMP_2
# 269 "data/emeralbody_rivals/rival_battles.pory"
	release
	return

Redd_Battle02_4:
# 224 "data/emeralbody_rivals/rival_battles.pory"
	switch VAR_TEMP_0
# 225 "data/emeralbody_rivals/rival_battles.pory"
	case 17, Redd_Battle02_9
# 228 "data/emeralbody_rivals/rival_battles.pory"
	case 19, Redd_Battle02_10
Redd_Battle02_7:
# 233 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 40, Common_Movement_WalkDown2
# 234 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 235 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle02_ReddText_PreBattle, MSGBOX_DEFAULT
	goto Redd_Battle02_3

Redd_Battle02_9:
# 226 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 40, Common_Movement_WalkLeft
# 227 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Redd_Battle02_7

Redd_Battle02_10:
# 229 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 40, Common_Movement_WalkRight
# 230 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Redd_Battle02_7

Redd_Battle02_12:
# 245 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 40, Common_Movement_WalkUp3
# 246 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Redd_Battle02_11


Redd_Battle03::
# 274 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 3
	goto_if_eq Redd_Battle03_1
	return

Redd_Battle03_1:
# 275 "data/emeralbody_rivals/rival_battles.pory"
	lock
# 276 "data/emeralbody_rivals/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 277 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 278 "data/emeralbody_rivals/rival_battles.pory"
	addobject 5
# 279 "data/emeralbody_rivals/rival_battles.pory"
	playse SE_EXIT
# 280 "data/emeralbody_rivals/rival_battles.pory"
	waitse
# 281 "data/emeralbody_rivals/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 282 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_1, 7
	goto_if_eq Redd_Battle03_4
# 288 "data/emeralbody_rivals/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceRight
# 289 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 5, Common_Movement_WalkDown3
# 290 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
Redd_Battle03_3:
# 292 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 5, Common_Movement_WalkLeft3
# 293 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 294 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_1, 7
	goto_if_eq Redd_Battle03_8
# 300 "data/emeralbody_rivals/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceUp
# 301 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 5, Common_Movement_WalkInPlaceDown
# 302 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
Redd_Battle03_7:
# 304 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 305 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle03_ReddText_PreBattle, MSGBOX_DEFAULT
# 306 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalMusic
# 307 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 308 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_REDD_3, Battle03_ReddText_BattleVictory
# 309 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 310 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle03_ReddText_PostBattle, MSGBOX_DEFAULT
# 311 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 312 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 5, Common_Movement_WalkLeft4
# 313 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 314 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_1, 7
	goto_if_eq Redd_Battle03_12
# 319 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 5, Common_Movement_WalkDown
# 320 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
Redd_Battle03_11:
# 322 "data/emeralbody_rivals/rival_battles.pory"
	removeobject 5
# 323 "data/emeralbody_rivals/rival_battles.pory"
	playse SE_EXIT
# 324 "data/emeralbody_rivals/rival_battles.pory"
	waitse
# 325 "data/emeralbody_rivals/rival_battles.pory"
	fadedefaultbgm
# 326 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 2
# 327 "data/emeralbody_rivals/rival_battles.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 328 "data/emeralbody_rivals/rival_battles.pory"
	release
	return

Redd_Battle03_4:
# 283 "data/emeralbody_rivals/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceRight
# 284 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 5, Common_Movement_WalkDown4
# 285 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Redd_Battle03_3

Redd_Battle03_8:
# 295 "data/emeralbody_rivals/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceDown
# 296 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 5, Common_Movement_WalkInPlaceUp
# 297 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Redd_Battle03_7

Redd_Battle03_12:
# 315 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 5, Common_Movement_WalkInPlaceDown
# 316 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Redd_Battle03_11


Redd_Battle04::
# 333 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 3
	goto_if_eq Redd_Battle04_2
	return

Redd_Battle04_1:
# 334 "data/emeralbody_rivals/rival_battles.pory"
	lock
# 335 "data/emeralbody_rivals/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 336 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 337 "data/emeralbody_rivals/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 338 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_1, 5
	goto_if_eq Redd_Battle04_6
# 349 "data/emeralbody_rivals/rival_battles.pory"
	faceplayer
Redd_Battle04_5:
# 351 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle04_ReddText_PreBattle, MSGBOX_DEFAULT
# 352 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalMusic
# 353 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 354 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_REDD_4, Battle04_ReddText_BattleVictory
# 355 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 356 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle04_ReddText_PostBattle1, MSGBOX_DEFAULT
# 357 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_0x8004, 1
# 358 "data/emeralbody_rivals/rival_battles.pory"
	specialvar VAR_RESULT, ScriptGetPokedexInfo
# 359 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_0x8006, 75
	goto_if_ge Redd_Battle04_10
# 363 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle04_ReddText_PostBattle2a, MSGBOX_DEFAULT
Redd_Battle04_9:
# 365 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle04_ReddText_PostBattle3, MSGBOX_DEFAULT
# 366 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 367 "data/emeralbody_rivals/rival_battles.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 368 "data/emeralbody_rivals/rival_battles.pory"
	removeobject 10
# 369 "data/emeralbody_rivals/rival_battles.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 370 "data/emeralbody_rivals/rival_battles.pory"
	fadedefaultbgm
# 371 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 3
# 372 "data/emeralbody_rivals/rival_battles.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 373 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_TEMP_1
# 374 "data/emeralbody_rivals/rival_battles.pory"
	release
	return

Redd_Battle04_2:
# 333 "data/emeralbody_rivals/rival_battles.pory"
	goto_if_set FLAG_BADGE07_GET, Redd_Battle04_1
	return

Redd_Battle04_6:
# 339 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 10, Common_Movement_ExclamationMark
# 340 "data/emeralbody_rivals/rival_battles.pory"
	playse SE_PIN
# 341 "data/emeralbody_rivals/rival_battles.pory"
	delay 60
# 342 "data/emeralbody_rivals/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceRight
# 343 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_0, 13
	goto_if_eq Redd_Battle04_14
Redd_Battle04_13:
# 346 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Redd_Battle04_5

Redd_Battle04_10:
# 360 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle04_ReddText_PostBattle2b
	goto Redd_Battle04_9

Redd_Battle04_14:
# 344 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 10, Common_Movement_WalkLeft
	goto Redd_Battle04_13


Baron_Battle02::
# 386 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 0
	goto_if_eq Baron_Battle02_1
	return

Baron_Battle02_1:
# 387 "data/emeralbody_rivals/rival_battles.pory"
	lock
# 388 "data/emeralbody_rivals/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 389 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 390 "data/emeralbody_rivals/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 391 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_1, 9
	goto_if_eq Baron_Battle02_4
# 400 "data/emeralbody_rivals/rival_battles.pory"
	faceplayer
Baron_Battle02_3:
# 402 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle02_BaronText_PreBattle, MSGBOX_DEFAULT
# 403 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalMusic
# 404 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 405 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_BARON_2, Battle02_BaronText_BattleVictory
# 406 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 407 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle02_BaronText_PostBattle, MSGBOX_DEFAULT
# 408 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 409 "data/emeralbody_rivals/rival_battles.pory"
	fadedefaultbgm
# 410 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 1
# 411 "data/emeralbody_rivals/rival_battles.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 412 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_TEMP_2
# 413 "data/emeralbody_rivals/rival_battles.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 414 "data/emeralbody_rivals/rival_battles.pory"
	removeobject 7
# 415 "data/emeralbody_rivals/rival_battles.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 416 "data/emeralbody_rivals/rival_battles.pory"
	release
	return

Baron_Battle02_4:
# 392 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 7, Common_Movement_WalkInPlaceUp
# 393 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 394 "data/emeralbody_rivals/rival_battles.pory"
	delay 50
# 395 "data/emeralbody_rivals/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceDown
# 396 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 7, Common_Movement_WalkUp
# 397 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Baron_Battle02_3


Baron_Battle03::
# 421 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 0
	goto_if_eq Baron_Battle03_2
	return

Baron_Battle03_1:
# 422 "data/emeralbody_rivals/rival_battles.pory"
	lock
# 423 "data/emeralbody_rivals/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 424 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 425 "data/emeralbody_rivals/rival_battles.pory"
	addobject 14
# 426 "data/emeralbody_rivals/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 427 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_1, 8
	goto_if_eq Baron_Battle03_6
# 430 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_1, 9
	goto_if_eq Baron_Battle03_7
# 433 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_1, 10
	goto_if_eq Baron_Battle03_8
# 436 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_1, 11
	goto_if_eq Baron_Battle03_9
Baron_Battle03_5:
# 441 "data/emeralbody_rivals/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceLeft
# 442 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 14, Common_Movement_WalkRight7
# 443 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 444 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle03_BaronText_PreBattle, MSGBOX_DEFAULT
# 445 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalMusic
# 446 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 447 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_BARON_3, Battle03_BaronText_BattleVictory
# 448 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 449 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle03_BaronText_PostBattle, MSGBOX_DEFAULT
# 450 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 451 "data/emeralbody_rivals/rival_battles.pory"
	fadedefaultbgm
# 452 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 2
# 453 "data/emeralbody_rivals/rival_battles.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 454 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 14, Common_Movement_WalkLeft7
# 455 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 456 "data/emeralbody_rivals/rival_battles.pory"
	removeobject 14
# 457 "data/emeralbody_rivals/rival_battles.pory"
	release
	return

Baron_Battle03_2:
# 421 "data/emeralbody_rivals/rival_battles.pory"
	goto_if_set FLAG_BADGE05_GET, Baron_Battle03_1
	return

Baron_Battle03_6:
# 428 "data/emeralbody_rivals/rival_battles.pory"
	setobjectxy 14, 30, 8
	goto Baron_Battle03_5

Baron_Battle03_7:
# 431 "data/emeralbody_rivals/rival_battles.pory"
	setobjectxy 14, 30, 9
	goto Baron_Battle03_5

Baron_Battle03_8:
# 434 "data/emeralbody_rivals/rival_battles.pory"
	setobjectxy 14, 30, 10
	goto Baron_Battle03_5

Baron_Battle03_9:
# 437 "data/emeralbody_rivals/rival_battles.pory"
	setobjectxy 14, 30, 10
# 438 "data/emeralbody_rivals/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
# 439 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Baron_Battle03_5


Baron_Battle04::
# 462 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 0
	goto_if_eq Baron_Battle04_2
	return

Baron_Battle04_1:
# 463 "data/emeralbody_rivals/rival_battles.pory"
	lock
# 464 "data/emeralbody_rivals/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 465 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 466 "data/emeralbody_rivals/rival_battles.pory"
	addobject 27
# 467 "data/emeralbody_rivals/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 468 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_0, 55
	goto_if_eq Baron_Battle04_6
# 473 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 27, Common_Movement_WalkLeft8
# 474 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
Baron_Battle04_5:
# 476 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 27, Common_Movement_WalkInPlaceUp
# 477 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 478 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle04_BaronText_PreBattle, MSGBOX_DEFAULT
# 479 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalMusic
# 480 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 481 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_BARON_4, Battle04_BaronText_BattleVictory
# 482 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 483 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle04_BaronText_PostBattle, MSGBOX_DEFAULT
# 484 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 485 "data/emeralbody_rivals/rival_battles.pory"
	fadedefaultbgm
# 486 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 3
# 487 "data/emeralbody_rivals/rival_battles.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 488 "data/emeralbody_rivals/rival_battles.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 489 "data/emeralbody_rivals/rival_battles.pory"
	removeobject 27
# 490 "data/emeralbody_rivals/rival_battles.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 491 "data/emeralbody_rivals/rival_battles.pory"
	release
	return

Baron_Battle04_2:
# 462 "data/emeralbody_rivals/rival_battles.pory"
	goto_if_set FLAG_MET_TEAM_AQUA_HARBOR, Baron_Battle04_1
	return

Baron_Battle04_6:
# 469 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 27, Common_Movement_WalkLeft9
# 470 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Baron_Battle04_5


Jakson_Battle02::
# 504 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 2
	goto_if_eq Jakson_Battle02_1
	return

Jakson_Battle02_1:
# 505 "data/emeralbody_rivals/rival_battles.pory"
	lock
# 506 "data/emeralbody_rivals/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 507 "data/emeralbody_rivals/rival_battles.pory"
	delay 30
# 508 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 509 "data/emeralbody_rivals/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 510 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_0, 5
	goto_if_eq Jakson_Battle02_4
Jakson_Battle02_3:
# 532 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle02_JaksonText_PreBattle, MSGBOX_DEFAULT
# 533 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalMusic
# 534 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 535 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_JAKSON_2, Battle02_JaksonText_BattleVictory
# 536 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 537 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle02_JaksonText_PostBattle, MSGBOX_DEFAULT
# 538 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 539 "data/emeralbody_rivals/rival_battles.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 540 "data/emeralbody_rivals/rival_battles.pory"
	removeobject 7
# 541 "data/emeralbody_rivals/rival_battles.pory"
	removeobject 6
# 542 "data/emeralbody_rivals/rival_battles.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 543 "data/emeralbody_rivals/rival_battles.pory"
	fadedefaultbgm
# 544 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 1
# 545 "data/emeralbody_rivals/rival_battles.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 546 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_TEMP_2
# 547 "data/emeralbody_rivals/rival_battles.pory"
	release
	return

Jakson_Battle02_4:
# 511 "data/emeralbody_rivals/rival_battles.pory"
	switch VAR_TEMP_1
# 512 "data/emeralbody_rivals/rival_battles.pory"
	case 9, Jakson_Battle02_8
# 515 "data/emeralbody_rivals/rival_battles.pory"
	case 11, Jakson_Battle02_9
# 518 "data/emeralbody_rivals/rival_battles.pory"
	case 12, Jakson_Battle02_10
# 521 "data/emeralbody_rivals/rival_battles.pory"
	case 13, Jakson_Battle02_11
# 524 "data/emeralbody_rivals/rival_battles.pory"
	case 14, Jakson_Battle02_12
Jakson_Battle02_6:
# 529 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 7, Common_Movement_WalkRight2
# 530 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Jakson_Battle02_3

Jakson_Battle02_8:
# 513 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 7, Common_Movement_WalkUp
# 514 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Jakson_Battle02_6

Jakson_Battle02_9:
# 516 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 7, Common_Movement_WalkDown
# 517 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Jakson_Battle02_6

Jakson_Battle02_10:
# 519 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 7, Common_Movement_WalkDown2
# 520 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Jakson_Battle02_6

Jakson_Battle02_11:
# 522 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 7, Common_Movement_WalkDown3
# 523 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Jakson_Battle02_6

Jakson_Battle02_12:
# 525 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 7, Common_Movement_WalkDown4
# 526 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Jakson_Battle02_6


Jakson_Battle02_Block::
# 552 "data/emeralbody_rivals/rival_battles.pory"
	lock
# 553 "data/emeralbody_rivals/rival_battles.pory"
	faceplayer
# 554 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Jakson_Battle02_Block_Text_0
# 555 "data/emeralbody_rivals/rival_battles.pory"
	playmoncry SPECIES_MURKROW, CRY_MODE_NORMAL
# 556 "data/emeralbody_rivals/rival_battles.pory"
	waitmoncry
# 557 "data/emeralbody_rivals/rival_battles.pory"
	release
	return


Jakson_Battle03::
# 561 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 2
	goto_if_eq Jakson_Battle03_1
	return

Jakson_Battle03_1:
# 562 "data/emeralbody_rivals/rival_battles.pory"
	lock
# 563 "data/emeralbody_rivals/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 564 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 565 "data/emeralbody_rivals/rival_battles.pory"
	addobject 48
# 566 "data/emeralbody_rivals/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 567 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_0, 31
	goto_if_eq Jakson_Battle03_4
Jakson_Battle03_3:
# 570 "data/emeralbody_rivals/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceDown
# 571 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 48, Common_Movement_WalkUp5
# 572 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 573 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle03_JaksonText_PreBattle, MSGBOX_DEFAULT
# 574 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalMusic
# 575 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 576 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_JAKSON_3, Battle03_JaksonText_BattleVictory
# 577 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 578 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle03_JaksonText_PostBattle, MSGBOX_DEFAULT
# 579 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 580 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 2
# 581 "data/emeralbody_rivals/rival_battles.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 582 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_0, 31
	goto_if_eq Jakson_Battle03_7
# 587 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 48, Common_Movement_WalkRight
# 588 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
Jakson_Battle03_6:
# 590 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 48, Common_Movement_WalkUp7
# 591 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 592 "data/emeralbody_rivals/rival_battles.pory"
	removeobject 48
# 593 "data/emeralbody_rivals/rival_battles.pory"
	fadedefaultbgm
# 594 "data/emeralbody_rivals/rival_battles.pory"
	release
	return

Jakson_Battle03_4:
# 568 "data/emeralbody_rivals/rival_battles.pory"
	setobjectxy 48, 31, 103
	goto Jakson_Battle03_3

Jakson_Battle03_7:
# 583 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 48, Common_Movement_WalkLeft
# 584 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Jakson_Battle03_6


Jakson_Battle04::
# 599 "data/emeralbody_rivals/rival_battles.pory"
	lock
# 600 "data/emeralbody_rivals/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 601 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 602 "data/emeralbody_rivals/rival_battles.pory"
	delay 30
# 603 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 4, Common_Movement_WalkDown2
# 604 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 605 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle04_JaksonText_PreBattle, MSGBOX_DEFAULT
# 606 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalMusic
# 607 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 608 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_JAKSON_4, Battle04_JaksonText_BattleVictory
# 609 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 610 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle04_JaksonText_PostBattle, MSGBOX_DEFAULT
# 611 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 612 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 3
# 613 "data/emeralbody_rivals/rival_battles.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 614 "data/emeralbody_rivals/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight
# 615 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 616 "data/emeralbody_rivals/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceLeft
# 617 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 4, Common_Movement_WalkDown
# 618 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 619 "data/emeralbody_rivals/rival_battles.pory"
	delay 10
# 620 "data/emeralbody_rivals/rival_battles.pory"
	removeobject 4
# 621 "data/emeralbody_rivals/rival_battles.pory"
	playse SE_EXIT
# 622 "data/emeralbody_rivals/rival_battles.pory"
	waitse
# 623 "data/emeralbody_rivals/rival_battles.pory"
	release
	return


Rival_Battle05::
# 636 "data/emeralbody_rivals/rival_battles.pory"
	lock
# 637 "data/emeralbody_rivals/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 638 "data/emeralbody_rivals/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 639 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 640 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalMusic
# 641 "data/emeralbody_rivals/rival_battles.pory"
	hidefollower
# 642 "data/emeralbody_rivals/rival_battles.pory"
	delay 10
# 643 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 644 "data/emeralbody_rivals/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceDown
# 645 "data/emeralbody_rivals/rival_battles.pory"
	switch VAR_EMERALBODY_RIVAL
# 646 "data/emeralbody_rivals/rival_battles.pory"
	case 1, Rival_Battle05_3
# 648 "data/emeralbody_rivals/rival_battles.pory"
	case 2, Rival_Battle05_4
# 650 "data/emeralbody_rivals/rival_battles.pory"
	case 3, Rival_Battle05_5
# 652 "data/emeralbody_rivals/rival_battles.pory"
	case 4, Rival_Battle05_6
# 655 "data/emeralbody_rivals/rival_battles.pory"
	call Baron_Battle05
Rival_Battle05_1:
# 657 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 4
# 658 "data/emeralbody_rivals/rival_battles.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 659 "data/emeralbody_rivals/rival_battles.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 660 "data/emeralbody_rivals/rival_battles.pory"
	warpsilent MAP_EVER_GRANDE_CITY_POKEMON_LEAGUE_1F, 9, 4
# 661 "data/emeralbody_rivals/rival_battles.pory"
	release
	return

Rival_Battle05_3:
# 647 "data/emeralbody_rivals/rival_battles.pory"
	call Harper_Battle05
	goto Rival_Battle05_1

Rival_Battle05_4:
# 649 "data/emeralbody_rivals/rival_battles.pory"
	call Jakson_Battle05
	goto Rival_Battle05_1

Rival_Battle05_5:
# 651 "data/emeralbody_rivals/rival_battles.pory"
	call Redd_Battle05
	goto Rival_Battle05_1

Rival_Battle05_6:
# 653 "data/emeralbody_rivals/rival_battles.pory"
	call Sakura_Battle05
	goto Rival_Battle05_1


Jakson_Battle05::
# 665 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_0, 9
	goto_if_eq Jakson_Battle05_2
# 669 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 8, Common_Movement_WalkRight6
Jakson_Battle05_1:
# 671 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 672 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 8, Common_Movement_WalkUp
# 673 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 674 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_JaksonText_PreBattle, MSGBOX_DEFAULT
# 675 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 676 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 8, Common_Movement_WalkInPlaceLeft
# 677 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 678 "data/emeralbody_rivals/rival_battles.pory"
	delay 60
# 679 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 8, Common_Movement_WalkInPlaceUp
# 680 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 681 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 682 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_JaksonText_PreBattle2, MSGBOX_DEFAULT
# 683 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_JAKSON_5, Battle05_JaksonText_BattleVictory
# 684 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 685 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_JaksonText_PostBattle, MSGBOX_DEFAULT
# 686 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 687 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 8, Common_Movement_WalkDown
# 688 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 689 "data/emeralbody_rivals/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 690 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_0, 9
	goto_if_eq Jakson_Battle05_6
# 694 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 8, Common_Movement_WalkLeft6
Jakson_Battle05_5:
# 696 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 697 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 8, Common_Movement_WalkInPlaceUp
# 698 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	return

Jakson_Battle05_2:
# 666 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 8, Common_Movement_WalkRight5
	goto Jakson_Battle05_1

Jakson_Battle05_6:
# 691 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 8, Common_Movement_WalkLeft5
	goto Jakson_Battle05_5


Harper_Battle05::
# 702 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_0, 9
	goto_if_eq Harper_Battle05_2
# 706 "data/emeralbody_rivals/rival_battles.pory"
	setobjectxy 9, 10, 8
Harper_Battle05_1:
# 708 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 9, Common_Movement_WalkUp5
# 709 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 710 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_HarperText_PreBattle, MSGBOX_DEFAULT
# 711 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_HARPER_5, Battle05_HarperText_BattleVictory
# 712 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 9, Common_Movement_WalkInPlaceLeft
# 713 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 714 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 715 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_HarperText_PostBattle, MSGBOX_DEFAULT
# 716 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 717 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 9, Common_Movement_WalkInPlaceUp
# 718 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 719 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_HarperText_PostBattle2, MSGBOX_DEFAULT
# 720 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 721 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 9, Common_Movement_WalkDown5
# 722 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	return

Harper_Battle05_2:
# 703 "data/emeralbody_rivals/rival_battles.pory"
	setobjectxy 9, 9, 8
	goto Harper_Battle05_1


Redd_Battle05::
# 726 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_0, 9
	goto_if_eq Redd_Battle05_2
# 730 "data/emeralbody_rivals/rival_battles.pory"
	setobjectxy 10, 10, 8
Redd_Battle05_1:
# 732 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 10, Common_Movement_WalkUp5
# 733 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 734 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_ReddText_PreBattle, MSGBOX_DEFAULT
# 735 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_0x8004, 1
# 736 "data/emeralbody_rivals/rival_battles.pory"
	specialvar VAR_RESULT, ScriptGetPokedexInfo
# 737 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_0x8006, 100
	goto_if_ge Redd_Battle05_6
# 741 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_ReddText_PreBattle2a, MSGBOX_DEFAULT
Redd_Battle05_5:
# 743 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_ReddText_PreBattle3, MSGBOX_DEFAULT
# 744 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_REDD_5, Battle05_ReddText_BattleVictory
# 745 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 746 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_ReddText_PostBattle, MSGBOX_DEFAULT
# 747 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 748 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 10, Common_Movement_WalkDown5
# 749 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	return

Redd_Battle05_2:
# 727 "data/emeralbody_rivals/rival_battles.pory"
	setobjectxy 10, 9, 8
	goto Redd_Battle05_1

Redd_Battle05_6:
# 738 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_ReddText_PreBattle2b, MSGBOX_DEFAULT
	goto Redd_Battle05_5


Sakura_Battle05::
# 753 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_0, 9
	goto_if_eq Sakura_Battle05_2
# 757 "data/emeralbody_rivals/rival_battles.pory"
	setobjectxy 11, 10, 3
Sakura_Battle05_1:
# 759 "data/emeralbody_rivals/rival_battles.pory"
	setfieldeffectargument 0, 1
# 760 "data/emeralbody_rivals/rival_battles.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 761 "data/emeralbody_rivals/rival_battles.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 762 "data/emeralbody_rivals/rival_battles.pory"
	addobject 11
# 763 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 11, Common_Movement_FaceUp
# 764 "data/emeralbody_rivals/rival_battles.pory"
	delay 30
# 765 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_SakuraText_PreBattle, MSGBOX_DEFAULT
# 766 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_SAKURA_5, Battle05_SakuraText_BattleVictory
# 767 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 768 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_SakuraText_PostBattle, MSGBOX_DEFAULT
# 769 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 770 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 11, Common_Movement_WalkDown5
# 771 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	return

Sakura_Battle05_2:
# 754 "data/emeralbody_rivals/rival_battles.pory"
	setobjectxy 11, 9, 3
	goto Sakura_Battle05_1


Baron_Battle05::
# 775 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_0, 9
	goto_if_eq Baron_Battle05_2
# 779 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 12, Common_Movement_WalkLeft5
Baron_Battle05_1:
# 781 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 782 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 12, Common_Movement_WalkUp
# 783 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 784 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_BaronText_PreBattle, MSGBOX_DEFAULT
# 785 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 786 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 12, Common_Movement_WalkInPlaceLeft
# 787 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 788 "data/emeralbody_rivals/rival_battles.pory"
	delay 20
# 789 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 12, Common_Movement_WalkInPlaceDown
# 790 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 791 "data/emeralbody_rivals/rival_battles.pory"
	delay 40
# 792 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 12, Common_Movement_WalkInPlaceUp
# 793 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 794 "data/emeralbody_rivals/rival_battles.pory"
	delay 20
# 795 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 796 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_BaronText_PreBattle2, MSGBOX_DEFAULT
# 797 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_BARON_5, Battle05_BaronText_BattleVictory
# 798 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 799 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_BaronText_PostBattle, MSGBOX_DEFAULT
# 800 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 801 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 12, Common_Movement_WalkDown
# 802 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 803 "data/emeralbody_rivals/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 804 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_0, 9
	goto_if_eq Baron_Battle05_6
# 808 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 12, Common_Movement_WalkRight5
Baron_Battle05_5:
# 810 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 811 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 12, Common_Movement_WalkInPlaceUp
# 812 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	return

Baron_Battle05_2:
# 776 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 12, Common_Movement_WalkLeft6
	goto Baron_Battle05_1

Baron_Battle05_6:
# 805 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 12, Common_Movement_WalkRight6
	goto Baron_Battle05_5


Jakson_Battle02_Block_Text_0:
# 554 "data/emeralbody_rivals/rival_battles.pory"
	.string "The Murkrow sees you trying to sneak\naround and actively blocks your\lefforts.$"
