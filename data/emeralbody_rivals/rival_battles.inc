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
	compare VAR_PETALBURG_GYM_STATE, 6
	goto_if_ge Harper_Battle03_2
	return

Harper_Battle03_1:
# 81 "data/emeralbody_rivals/rival_battles.pory"
	lock
# 82 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_TEMP_A, 1
# 83 "data/emeralbody_rivals/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 84 "data/emeralbody_rivals/rival_battles.pory"
	addobject 15
# 85 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 15, Common_Movement_WalkUp3
# 86 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 87 "data/emeralbody_rivals/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceDown
# 88 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 89 "data/emeralbody_rivals/rival_battles.pory"
	delay 40
# 90 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 15, Common_Movement_WalkUp2
# 91 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 92 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 93 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle03_HarperText_PreBattle, MSGBOX_DEFAULT
# 94 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalMusic
# 95 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 96 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_HARPER_3, Battle03_HarperText_BattleVictory
# 97 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 98 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle03_HarperText_PostBattle, MSGBOX_DEFAULT
# 99 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 100 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 15, Common_Movement_WalkDown5
# 101 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 102 "data/emeralbody_rivals/rival_battles.pory"
	removeobject 15
# 103 "data/emeralbody_rivals/rival_battles.pory"
	fadedefaultbgm
# 104 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 12
# 105 "data/emeralbody_rivals/rival_battles.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 106 "data/emeralbody_rivals/rival_battles.pory"
	release
	return

Harper_Battle03_2:
# 79 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL_BATTLE_STATE, 6
	goto_if_eq Harper_Battle03_5
Harper_Battle03_4:
# 80 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL_BATTLE_STATE, 11
	goto_if_eq Harper_Battle03_8
	return

Harper_Battle03_5:
# 79 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 1
	goto_if_eq Harper_Battle03_1
	goto Harper_Battle03_4

Harper_Battle03_8:
# 80 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 5
	goto_if_eq Harper_Battle03_1
	return


Harper_Battle04::
# 111 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 1
	goto_if_eq Harper_Battle04_1
	return

Harper_Battle04_1:
# 112 "data/emeralbody_rivals/rival_battles.pory"
	lock
# 113 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_TEMP_A, 1
# 114 "data/emeralbody_rivals/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 115 "data/emeralbody_rivals/rival_battles.pory"
	addobject 20
# 116 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 20, Common_Movement_WalkUp6
# 117 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 118 "data/emeralbody_rivals/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceLeft
# 119 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 20, Common_Movement_WalkRight4
# 120 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 121 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 122 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle04_HarperText_PreBattle, MSGBOX_DEFAULT
# 123 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalMusic
# 124 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 125 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_HARPER_4, Battle04_HarperText_BattleVictory
# 126 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 127 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle04_HarperText_PostBattle, MSGBOX_DEFAULT
# 128 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 129 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 20, Common_Movement_WalkLeft7
# 130 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 131 "data/emeralbody_rivals/rival_battles.pory"
	removeobject 20
# 132 "data/emeralbody_rivals/rival_battles.pory"
	fadedefaultbgm
# 133 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 3
# 134 "data/emeralbody_rivals/rival_battles.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 135 "data/emeralbody_rivals/rival_battles.pory"
	release
	return


Sakura_Battle02::
# 147 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL_BATTLE_STATE, 0
	goto_if_eq Sakura_Battle02_4
Sakura_Battle02_3:
# 148 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL_BATTLE_STATE, 6
	goto_if_eq Sakura_Battle02_7
Sakura_Battle02_1:
# 182 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_TEMP_6
	return

Sakura_Battle02_2:
# 149 "data/emeralbody_rivals/rival_battles.pory"
	lock
# 150 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_TEMP_A, 4
# 151 "data/emeralbody_rivals/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 152 "data/emeralbody_rivals/rival_battles.pory"
	addobject 3
# 153 "data/emeralbody_rivals/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceDown
# 154 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 155 "data/emeralbody_rivals/rival_battles.pory"
	playse SE_PIN
# 156 "data/emeralbody_rivals/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 157 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 158 "data/emeralbody_rivals/rival_battles.pory"
	delay 60
# 159 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 3, Common_Movement_WalkUp4
# 160 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 161 "data/emeralbody_rivals/rival_battles.pory"
	playse SE_LEDGE
# 162 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 3, Common_Movement_JumpUp
# 163 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 164 "data/emeralbody_rivals/rival_battles.pory"
	playse SE_M_CUT
# 165 "data/emeralbody_rivals/rival_battles.pory"
	waitse
# 166 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 167 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle02_SakuraText_PreBattle, MSGBOX_DEFAULT
# 168 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalMusic
# 169 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 170 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_SAKURA_2, Battle02_SakuraText_BattleVictory
# 171 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 172 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle02_SakuraText_PostBattle, MSGBOX_DEFAULT
# 173 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 174 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 3, Common_Movement_WalkDown5
# 175 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 176 "data/emeralbody_rivals/rival_battles.pory"
	removeobject 3
# 177 "data/emeralbody_rivals/rival_battles.pory"
	fadedefaultbgm
# 178 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 7
# 179 "data/emeralbody_rivals/rival_battles.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 180 "data/emeralbody_rivals/rival_battles.pory"
	release
	goto Sakura_Battle02_1

Sakura_Battle02_4:
# 147 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 4
	goto_if_eq Sakura_Battle02_2
	goto Sakura_Battle02_3

Sakura_Battle02_7:
# 148 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 5
	goto_if_eq Sakura_Battle02_2
	goto Sakura_Battle02_1


Sakura_Battle03::
# 186 "data/emeralbody_rivals/rival_battles.pory"
	lock
# 187 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_TEMP_A, 4
# 188 "data/emeralbody_rivals/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 189 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 190 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle03_SakuraText_PreBattle, MSGBOX_DEFAULT
# 191 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalMusic
# 192 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 193 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_SAKURA_3, Battle03_SakuraText_BattleVictory
# 194 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 195 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle03_SakuraText_PostBattle, MSGBOX_DEFAULT
# 196 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 197 "data/emeralbody_rivals/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 198 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_1, 12
	goto_if_eq Sakura_Battle03_2
Sakura_Battle03_1:
# 202 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 8, Common_Movement_WalkDown
# 203 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 204 "data/emeralbody_rivals/rival_battles.pory"
	playse SE_LEDGE
# 205 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 8, Common_Movement_JumpDown2
# 206 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 207 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 8, Common_Movement_WalkDown4
# 208 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 209 "data/emeralbody_rivals/rival_battles.pory"
	removeobject 8
# 210 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_TEMP_2
# 211 "data/emeralbody_rivals/rival_battles.pory"
	fadedefaultbgm
# 212 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 11
# 213 "data/emeralbody_rivals/rival_battles.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 214 "data/emeralbody_rivals/rival_battles.pory"
	delay 30
# 215 "data/emeralbody_rivals/rival_battles.pory"
	playse SE_EFFECTIVE
# 216 "data/emeralbody_rivals/rival_battles.pory"
	setmetatile 13, 11, 0x208, FALSE
# 217 "data/emeralbody_rivals/rival_battles.pory"
	special DrawWholeMapView
# 218 "data/emeralbody_rivals/rival_battles.pory"
	delay 30
# 219 "data/emeralbody_rivals/rival_battles.pory"
	release
	return

Sakura_Battle03_2:
# 199 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 8, Common_Movement_WalkRight
# 200 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Sakura_Battle03_1


Sakura_Battle04::
# 223 "data/emeralbody_rivals/rival_battles.pory"
	lock
# 224 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_TEMP_A, 4
# 225 "data/emeralbody_rivals/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 226 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 227 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle04_SakuraText_PreBattle, MSGBOX_DEFAULT
# 228 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalMusic
# 229 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 230 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_SAKURA_4, Battle04_SakuraText_BattleVictory
# 231 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 232 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle04_SakuraText_PostBattle, MSGBOX_DEFAULT
# 233 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 234 "data/emeralbody_rivals/rival_battles.pory"
	setfieldeffectargument 0, 1
# 235 "data/emeralbody_rivals/rival_battles.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 236 "data/emeralbody_rivals/rival_battles.pory"
	delay 15
# 237 "data/emeralbody_rivals/rival_battles.pory"
	removeobject 1
# 238 "data/emeralbody_rivals/rival_battles.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 239 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_TEMP_1
# 240 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 3
# 241 "data/emeralbody_rivals/rival_battles.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 242 "data/emeralbody_rivals/rival_battles.pory"
	release
	return


Redd_Battle02::
# 253 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL_BATTLE_STATE, 0
	goto_if_eq Redd_Battle02_4
Redd_Battle02_3:
# 254 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL_BATTLE_STATE, 8
	goto_if_eq Redd_Battle02_7
Redd_Battle02_1:
# 308 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_TEMP_6
	return

Redd_Battle02_2:
# 255 "data/emeralbody_rivals/rival_battles.pory"
	lock
# 256 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_TEMP_A, 3
# 257 "data/emeralbody_rivals/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 258 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 259 "data/emeralbody_rivals/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 260 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_1, 58
	goto_if_eq Redd_Battle02_11
# 275 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 40, Common_Movement_FaceUp
# 276 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 277 "data/emeralbody_rivals/rival_battles.pory"
	playse SE_PIN
# 278 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 40, Common_Movement_ExclamationMark
# 279 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 280 "data/emeralbody_rivals/rival_battles.pory"
	delay 60
# 281 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_1, 52
	goto_if_eq Redd_Battle02_19
# 286 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 40, Common_Movement_WalkUp2
# 287 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
Redd_Battle02_18:
# 289 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 40, Common_Movement_WalkRight
# 290 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 291 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle02_ReddText_PreBattleAlt, MSGBOX_DEFAULT
Redd_Battle02_10:
# 293 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalMusic
# 294 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 295 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_REDD_2, Battle02_ReddText_BattleVictory
# 296 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 297 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle02_ReddText_PostBattle, MSGBOX_DEFAULT
# 298 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 299 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 40, Common_Movement_WalkUp6
# 300 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 301 "data/emeralbody_rivals/rival_battles.pory"
	removeobject 40
# 302 "data/emeralbody_rivals/rival_battles.pory"
	fadedefaultbgm
# 303 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 9
# 304 "data/emeralbody_rivals/rival_battles.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 305 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_TEMP_2
# 306 "data/emeralbody_rivals/rival_battles.pory"
	release
	goto Redd_Battle02_1

Redd_Battle02_4:
# 253 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 3
	goto_if_eq Redd_Battle02_2
	goto Redd_Battle02_3

Redd_Battle02_7:
# 254 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 5
	goto_if_eq Redd_Battle02_2
	goto Redd_Battle02_1

Redd_Battle02_11:
# 261 "data/emeralbody_rivals/rival_battles.pory"
	switch VAR_TEMP_0
# 262 "data/emeralbody_rivals/rival_battles.pory"
	case 17, Redd_Battle02_16
# 265 "data/emeralbody_rivals/rival_battles.pory"
	case 19, Redd_Battle02_17
Redd_Battle02_14:
# 270 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 40, Common_Movement_WalkDown2
# 271 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 272 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle02_ReddText_PreBattle, MSGBOX_DEFAULT
	goto Redd_Battle02_10

Redd_Battle02_16:
# 263 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 40, Common_Movement_WalkLeft
# 264 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Redd_Battle02_14

Redd_Battle02_17:
# 266 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 40, Common_Movement_WalkRight
# 267 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Redd_Battle02_14

Redd_Battle02_19:
# 282 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 40, Common_Movement_WalkUp3
# 283 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Redd_Battle02_18


Redd_Battle03::
# 312 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 3
	goto_if_eq Redd_Battle03_1
	return

Redd_Battle03_1:
# 313 "data/emeralbody_rivals/rival_battles.pory"
	lock
# 314 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_TEMP_A, 3
# 315 "data/emeralbody_rivals/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 316 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 317 "data/emeralbody_rivals/rival_battles.pory"
	addobject 5
# 318 "data/emeralbody_rivals/rival_battles.pory"
	playse SE_EXIT
# 319 "data/emeralbody_rivals/rival_battles.pory"
	waitse
# 320 "data/emeralbody_rivals/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 321 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_1, 7
	goto_if_eq Redd_Battle03_4
# 327 "data/emeralbody_rivals/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceRight
# 328 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 5, Common_Movement_WalkDown3
# 329 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
Redd_Battle03_3:
# 331 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 5, Common_Movement_WalkLeft3
# 332 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 333 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_1, 7
	goto_if_eq Redd_Battle03_8
# 339 "data/emeralbody_rivals/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceUp
# 340 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 5, Common_Movement_WalkInPlaceDown
# 341 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
Redd_Battle03_7:
# 343 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 344 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle03_ReddText_PreBattle, MSGBOX_DEFAULT
# 345 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalMusic
# 346 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 347 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_REDD_3, Battle03_ReddText_BattleVictory
# 348 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 349 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle03_ReddText_PostBattle, MSGBOX_DEFAULT
# 350 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 351 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 5, Common_Movement_WalkLeft4
# 352 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 353 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_1, 7
	goto_if_eq Redd_Battle03_12
# 358 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 5, Common_Movement_WalkDown
# 359 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
Redd_Battle03_11:
# 361 "data/emeralbody_rivals/rival_battles.pory"
	removeobject 5
# 362 "data/emeralbody_rivals/rival_battles.pory"
	playse SE_EXIT
# 363 "data/emeralbody_rivals/rival_battles.pory"
	waitse
# 364 "data/emeralbody_rivals/rival_battles.pory"
	fadedefaultbgm
# 365 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 2
# 366 "data/emeralbody_rivals/rival_battles.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 367 "data/emeralbody_rivals/rival_battles.pory"
	release
	return

Redd_Battle03_4:
# 322 "data/emeralbody_rivals/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceRight
# 323 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 5, Common_Movement_WalkDown4
# 324 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Redd_Battle03_3

Redd_Battle03_8:
# 334 "data/emeralbody_rivals/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceDown
# 335 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 5, Common_Movement_WalkInPlaceUp
# 336 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Redd_Battle03_7

Redd_Battle03_12:
# 354 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 5, Common_Movement_WalkInPlaceDown
# 355 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Redd_Battle03_11


Redd_Battle04::
# 372 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 3
	goto_if_eq Redd_Battle04_2
	return

Redd_Battle04_1:
# 373 "data/emeralbody_rivals/rival_battles.pory"
	lock
# 374 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_TEMP_A, 3
# 375 "data/emeralbody_rivals/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 376 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 377 "data/emeralbody_rivals/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 378 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_1, 5
	goto_if_eq Redd_Battle04_6
# 389 "data/emeralbody_rivals/rival_battles.pory"
	faceplayer
Redd_Battle04_5:
# 391 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle04_ReddText_PreBattle, MSGBOX_DEFAULT
# 392 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalMusic
# 393 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 394 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_REDD_4, Battle04_ReddText_BattleVictory
# 395 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 396 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle04_ReddText_PostBattle1, MSGBOX_DEFAULT
# 397 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_0x8004, 1
# 398 "data/emeralbody_rivals/rival_battles.pory"
	specialvar VAR_RESULT, ScriptGetPokedexInfo
# 399 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_0x8006, 75
	goto_if_ge Redd_Battle04_10
# 403 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle04_ReddText_PostBattle2a, MSGBOX_DEFAULT
Redd_Battle04_9:
# 405 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle04_ReddText_PostBattle3, MSGBOX_DEFAULT
# 406 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 407 "data/emeralbody_rivals/rival_battles.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 408 "data/emeralbody_rivals/rival_battles.pory"
	removeobject 10
# 409 "data/emeralbody_rivals/rival_battles.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 410 "data/emeralbody_rivals/rival_battles.pory"
	fadedefaultbgm
# 411 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 3
# 412 "data/emeralbody_rivals/rival_battles.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 413 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_TEMP_1
# 414 "data/emeralbody_rivals/rival_battles.pory"
	release
	return

Redd_Battle04_2:
# 372 "data/emeralbody_rivals/rival_battles.pory"
	goto_if_set FLAG_BADGE07_GET, Redd_Battle04_1
	return

Redd_Battle04_6:
# 379 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 10, Common_Movement_ExclamationMark
# 380 "data/emeralbody_rivals/rival_battles.pory"
	playse SE_PIN
# 381 "data/emeralbody_rivals/rival_battles.pory"
	delay 60
# 382 "data/emeralbody_rivals/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceRight
# 383 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_0, 13
	goto_if_eq Redd_Battle04_14
Redd_Battle04_13:
# 386 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Redd_Battle04_5

Redd_Battle04_10:
# 400 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle04_ReddText_PostBattle2b
	goto Redd_Battle04_9

Redd_Battle04_14:
# 384 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 10, Common_Movement_WalkLeft
	goto Redd_Battle04_13


Baron_Battle02::
# 426 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL_BATTLE_STATE, 0
	goto_if_eq Baron_Battle02_4
Baron_Battle02_3:
# 427 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL_BATTLE_STATE, 7
	goto_if_eq Baron_Battle02_7
Baron_Battle02_1:
# 460 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_TEMP_6
	return

Baron_Battle02_2:
# 428 "data/emeralbody_rivals/rival_battles.pory"
	lock
# 429 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_TEMP_A, 0
# 430 "data/emeralbody_rivals/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 431 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 432 "data/emeralbody_rivals/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 433 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_1, 9
	goto_if_eq Baron_Battle02_11
# 442 "data/emeralbody_rivals/rival_battles.pory"
	faceplayer
Baron_Battle02_10:
# 444 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle02_BaronText_PreBattle, MSGBOX_DEFAULT
# 445 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalMusic
# 446 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 447 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_BARON_2, Battle02_BaronText_BattleVictory
# 448 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 449 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle02_BaronText_PostBattle, MSGBOX_DEFAULT
# 450 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 451 "data/emeralbody_rivals/rival_battles.pory"
	fadedefaultbgm
# 452 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 8
# 453 "data/emeralbody_rivals/rival_battles.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 454 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_TEMP_2
# 455 "data/emeralbody_rivals/rival_battles.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 456 "data/emeralbody_rivals/rival_battles.pory"
	removeobject 7
# 457 "data/emeralbody_rivals/rival_battles.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 458 "data/emeralbody_rivals/rival_battles.pory"
	release
	goto Baron_Battle02_1

Baron_Battle02_4:
# 426 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 0
	goto_if_eq Baron_Battle02_2
	goto Baron_Battle02_3

Baron_Battle02_7:
# 427 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 5
	goto_if_eq Baron_Battle02_2
	goto Baron_Battle02_1

Baron_Battle02_11:
# 434 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 7, Common_Movement_WalkInPlaceUp
# 435 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 436 "data/emeralbody_rivals/rival_battles.pory"
	delay 50
# 437 "data/emeralbody_rivals/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceDown
# 438 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 7, Common_Movement_WalkUp
# 439 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Baron_Battle02_10


Baron_Battle03::
# 464 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 0
	goto_if_eq Baron_Battle03_2
	return

Baron_Battle03_1:
# 465 "data/emeralbody_rivals/rival_battles.pory"
	lock
# 466 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_TEMP_A, 0
# 467 "data/emeralbody_rivals/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 468 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 469 "data/emeralbody_rivals/rival_battles.pory"
	addobject 14
# 470 "data/emeralbody_rivals/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 471 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_1, 8
	goto_if_eq Baron_Battle03_6
# 474 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_1, 9
	goto_if_eq Baron_Battle03_7
# 477 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_1, 10
	goto_if_eq Baron_Battle03_8
# 480 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_1, 11
	goto_if_eq Baron_Battle03_9
Baron_Battle03_5:
# 485 "data/emeralbody_rivals/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceLeft
# 486 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 14, Common_Movement_WalkRight7
# 487 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 488 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle03_BaronText_PreBattle, MSGBOX_DEFAULT
# 489 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalMusic
# 490 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 491 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_BARON_3, Battle03_BaronText_BattleVictory
# 492 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 493 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle03_BaronText_PostBattle, MSGBOX_DEFAULT
# 494 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 495 "data/emeralbody_rivals/rival_battles.pory"
	fadedefaultbgm
# 496 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 2
# 497 "data/emeralbody_rivals/rival_battles.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 498 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 14, Common_Movement_WalkLeft7
# 499 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 500 "data/emeralbody_rivals/rival_battles.pory"
	removeobject 14
# 501 "data/emeralbody_rivals/rival_battles.pory"
	release
	return

Baron_Battle03_2:
# 464 "data/emeralbody_rivals/rival_battles.pory"
	goto_if_set FLAG_BADGE05_GET, Baron_Battle03_1
	return

Baron_Battle03_6:
# 472 "data/emeralbody_rivals/rival_battles.pory"
	setobjectxy 14, 30, 8
	goto Baron_Battle03_5

Baron_Battle03_7:
# 475 "data/emeralbody_rivals/rival_battles.pory"
	setobjectxy 14, 30, 9
	goto Baron_Battle03_5

Baron_Battle03_8:
# 478 "data/emeralbody_rivals/rival_battles.pory"
	setobjectxy 14, 30, 10
	goto Baron_Battle03_5

Baron_Battle03_9:
# 481 "data/emeralbody_rivals/rival_battles.pory"
	setobjectxy 14, 30, 10
# 482 "data/emeralbody_rivals/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
# 483 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Baron_Battle03_5


Baron_Battle04::
# 506 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 0
	goto_if_eq Baron_Battle04_2
	return

Baron_Battle04_1:
# 507 "data/emeralbody_rivals/rival_battles.pory"
	lock
# 508 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_TEMP_A, 0
# 509 "data/emeralbody_rivals/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 510 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 511 "data/emeralbody_rivals/rival_battles.pory"
	addobject 27
# 512 "data/emeralbody_rivals/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 513 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_0, 55
	goto_if_eq Baron_Battle04_6
# 518 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 27, Common_Movement_WalkLeft8
# 519 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
Baron_Battle04_5:
# 521 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 27, Common_Movement_WalkInPlaceUp
# 522 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 523 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle04_BaronText_PreBattle, MSGBOX_DEFAULT
# 524 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalMusic
# 525 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 526 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_BARON_4, Battle04_BaronText_BattleVictory
# 527 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 528 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle04_BaronText_PostBattle, MSGBOX_DEFAULT
# 529 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 530 "data/emeralbody_rivals/rival_battles.pory"
	fadedefaultbgm
# 531 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 3
# 532 "data/emeralbody_rivals/rival_battles.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 533 "data/emeralbody_rivals/rival_battles.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 534 "data/emeralbody_rivals/rival_battles.pory"
	removeobject 27
# 535 "data/emeralbody_rivals/rival_battles.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 536 "data/emeralbody_rivals/rival_battles.pory"
	release
	return

Baron_Battle04_2:
# 506 "data/emeralbody_rivals/rival_battles.pory"
	goto_if_set FLAG_MET_TEAM_AQUA_HARBOR, Baron_Battle04_1
	return

Baron_Battle04_6:
# 514 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 27, Common_Movement_WalkLeft9
# 515 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Baron_Battle04_5


Jakson_Battle02::
# 549 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL_BATTLE_STATE, 0
	goto_if_eq Jakson_Battle02_4
Jakson_Battle02_3:
# 550 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL_BATTLE_STATE, 9
	goto_if_eq Jakson_Battle02_7
Jakson_Battle02_1:
# 596 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_TEMP_6
	return

Jakson_Battle02_2:
# 551 "data/emeralbody_rivals/rival_battles.pory"
	lock
# 552 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_TEMP_A, 2
# 553 "data/emeralbody_rivals/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 554 "data/emeralbody_rivals/rival_battles.pory"
	delay 30
# 555 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 556 "data/emeralbody_rivals/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 557 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_0, 5
	goto_if_eq Jakson_Battle02_11
Jakson_Battle02_10:
# 579 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle02_JaksonText_PreBattle, MSGBOX_DEFAULT
# 580 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalMusic
# 581 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 582 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_JAKSON_2, Battle02_JaksonText_BattleVictory
# 583 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 584 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle02_JaksonText_PostBattle, MSGBOX_DEFAULT
# 585 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 586 "data/emeralbody_rivals/rival_battles.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 587 "data/emeralbody_rivals/rival_battles.pory"
	removeobject 7
# 588 "data/emeralbody_rivals/rival_battles.pory"
	removeobject 6
# 589 "data/emeralbody_rivals/rival_battles.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 590 "data/emeralbody_rivals/rival_battles.pory"
	fadedefaultbgm
# 591 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 10
# 592 "data/emeralbody_rivals/rival_battles.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 593 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_TEMP_2
# 594 "data/emeralbody_rivals/rival_battles.pory"
	release
	goto Jakson_Battle02_1

Jakson_Battle02_4:
# 549 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 2
	goto_if_eq Jakson_Battle02_2
	goto Jakson_Battle02_3

Jakson_Battle02_7:
# 550 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 5
	goto_if_eq Jakson_Battle02_2
	goto Jakson_Battle02_1

Jakson_Battle02_11:
# 558 "data/emeralbody_rivals/rival_battles.pory"
	switch VAR_TEMP_1
# 559 "data/emeralbody_rivals/rival_battles.pory"
	case 9, Jakson_Battle02_15
# 562 "data/emeralbody_rivals/rival_battles.pory"
	case 11, Jakson_Battle02_16
# 565 "data/emeralbody_rivals/rival_battles.pory"
	case 12, Jakson_Battle02_17
# 568 "data/emeralbody_rivals/rival_battles.pory"
	case 13, Jakson_Battle02_18
# 571 "data/emeralbody_rivals/rival_battles.pory"
	case 14, Jakson_Battle02_19
Jakson_Battle02_13:
# 576 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 7, Common_Movement_WalkRight2
# 577 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Jakson_Battle02_10

Jakson_Battle02_15:
# 560 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 7, Common_Movement_WalkUp
# 561 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Jakson_Battle02_13

Jakson_Battle02_16:
# 563 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 7, Common_Movement_WalkDown
# 564 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Jakson_Battle02_13

Jakson_Battle02_17:
# 566 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 7, Common_Movement_WalkDown2
# 567 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Jakson_Battle02_13

Jakson_Battle02_18:
# 569 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 7, Common_Movement_WalkDown3
# 570 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Jakson_Battle02_13

Jakson_Battle02_19:
# 572 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 7, Common_Movement_WalkDown4
# 573 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Jakson_Battle02_13


Jakson_Battle02_Block::
# 600 "data/emeralbody_rivals/rival_battles.pory"
	lock
# 601 "data/emeralbody_rivals/rival_battles.pory"
	faceplayer
# 602 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Jakson_Battle02_Block_Text_0
# 603 "data/emeralbody_rivals/rival_battles.pory"
	playmoncry SPECIES_MURKROW, CRY_MODE_NORMAL
# 604 "data/emeralbody_rivals/rival_battles.pory"
	waitmoncry
# 605 "data/emeralbody_rivals/rival_battles.pory"
	release
	return


Jakson_Battle03::
# 609 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 2
	goto_if_eq Jakson_Battle03_1
	return

Jakson_Battle03_1:
# 610 "data/emeralbody_rivals/rival_battles.pory"
	lock
# 611 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_TEMP_A, 2
# 612 "data/emeralbody_rivals/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 613 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 614 "data/emeralbody_rivals/rival_battles.pory"
	addobject 48
# 615 "data/emeralbody_rivals/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 616 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_0, 31
	goto_if_eq Jakson_Battle03_4
Jakson_Battle03_3:
# 619 "data/emeralbody_rivals/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceDown
# 620 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 48, Common_Movement_WalkUp5
# 621 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 622 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle03_JaksonText_PreBattle, MSGBOX_DEFAULT
# 623 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalMusic
# 624 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 625 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_JAKSON_3, Battle03_JaksonText_BattleVictory
# 626 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 627 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle03_JaksonText_PostBattle, MSGBOX_DEFAULT
# 628 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 629 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 2
# 630 "data/emeralbody_rivals/rival_battles.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 631 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_0, 31
	goto_if_eq Jakson_Battle03_7
# 636 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 48, Common_Movement_WalkRight
# 637 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
Jakson_Battle03_6:
# 639 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 48, Common_Movement_WalkUp7
# 640 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 641 "data/emeralbody_rivals/rival_battles.pory"
	removeobject 48
# 642 "data/emeralbody_rivals/rival_battles.pory"
	fadedefaultbgm
# 643 "data/emeralbody_rivals/rival_battles.pory"
	release
	return

Jakson_Battle03_4:
# 617 "data/emeralbody_rivals/rival_battles.pory"
	setobjectxy 48, 31, 103
	goto Jakson_Battle03_3

Jakson_Battle03_7:
# 632 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 48, Common_Movement_WalkLeft
# 633 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Jakson_Battle03_6


Jakson_Battle04::
# 648 "data/emeralbody_rivals/rival_battles.pory"
	lock
# 649 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_TEMP_A, 2
# 650 "data/emeralbody_rivals/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 651 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 652 "data/emeralbody_rivals/rival_battles.pory"
	delay 30
# 653 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 4, Common_Movement_WalkDown2
# 654 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 655 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle04_JaksonText_PreBattle, MSGBOX_DEFAULT
# 656 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalMusic
# 657 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 658 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_JAKSON_4, Battle04_JaksonText_BattleVictory
# 659 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 660 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle04_JaksonText_PostBattle, MSGBOX_DEFAULT
# 661 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 662 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 3
# 663 "data/emeralbody_rivals/rival_battles.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 664 "data/emeralbody_rivals/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight
# 665 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 666 "data/emeralbody_rivals/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceLeft
# 667 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 4, Common_Movement_WalkDown
# 668 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 669 "data/emeralbody_rivals/rival_battles.pory"
	delay 10
# 670 "data/emeralbody_rivals/rival_battles.pory"
	removeobject 4
# 671 "data/emeralbody_rivals/rival_battles.pory"
	playse SE_EXIT
# 672 "data/emeralbody_rivals/rival_battles.pory"
	waitse
# 673 "data/emeralbody_rivals/rival_battles.pory"
	release
	return


Rival_Battle05::
# 686 "data/emeralbody_rivals/rival_battles.pory"
	lock
# 687 "data/emeralbody_rivals/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 688 "data/emeralbody_rivals/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 689 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 690 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalMusic
# 691 "data/emeralbody_rivals/rival_battles.pory"
	hidefollower
# 692 "data/emeralbody_rivals/rival_battles.pory"
	delay 10
# 693 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 694 "data/emeralbody_rivals/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceDown
# 695 "data/emeralbody_rivals/rival_battles.pory"
	switch VAR_EMERALBODY_RIVAL
# 696 "data/emeralbody_rivals/rival_battles.pory"
	case 1, Rival_Battle05_3
# 698 "data/emeralbody_rivals/rival_battles.pory"
	case 2, Rival_Battle05_4
# 700 "data/emeralbody_rivals/rival_battles.pory"
	case 3, Rival_Battle05_5
# 702 "data/emeralbody_rivals/rival_battles.pory"
	case 4, Rival_Battle05_6
# 705 "data/emeralbody_rivals/rival_battles.pory"
	call Baron_Battle05
Rival_Battle05_1:
# 707 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 4
# 708 "data/emeralbody_rivals/rival_battles.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 709 "data/emeralbody_rivals/rival_battles.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 710 "data/emeralbody_rivals/rival_battles.pory"
	warpsilent MAP_EVER_GRANDE_CITY_POKEMON_LEAGUE_1F, 9, 4
# 711 "data/emeralbody_rivals/rival_battles.pory"
	release
	return

Rival_Battle05_3:
# 697 "data/emeralbody_rivals/rival_battles.pory"
	call Harper_Battle05
	goto Rival_Battle05_1

Rival_Battle05_4:
# 699 "data/emeralbody_rivals/rival_battles.pory"
	call Jakson_Battle05
	goto Rival_Battle05_1

Rival_Battle05_5:
# 701 "data/emeralbody_rivals/rival_battles.pory"
	call Redd_Battle05
	goto Rival_Battle05_1

Rival_Battle05_6:
# 703 "data/emeralbody_rivals/rival_battles.pory"
	call Sakura_Battle05
	goto Rival_Battle05_1


Jakson_Battle05::
# 715 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_0, 9
	goto_if_eq Jakson_Battle05_2
# 719 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 8, Common_Movement_WalkRight6
Jakson_Battle05_1:
# 721 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 722 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 8, Common_Movement_WalkUp
# 723 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 724 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_JaksonText_PreBattle, MSGBOX_DEFAULT
# 725 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 726 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 8, Common_Movement_WalkInPlaceLeft
# 727 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 728 "data/emeralbody_rivals/rival_battles.pory"
	delay 60
# 729 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 8, Common_Movement_WalkInPlaceUp
# 730 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 731 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 732 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_JaksonText_PreBattle2, MSGBOX_DEFAULT
# 733 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_JAKSON_5, Battle05_JaksonText_BattleVictory
# 734 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 735 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_JaksonText_PostBattle, MSGBOX_DEFAULT
# 736 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 737 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 8, Common_Movement_WalkDown
# 738 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 739 "data/emeralbody_rivals/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 740 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_0, 9
	goto_if_eq Jakson_Battle05_6
# 744 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 8, Common_Movement_WalkLeft6
Jakson_Battle05_5:
# 746 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 747 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 8, Common_Movement_WalkInPlaceUp
# 748 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	return

Jakson_Battle05_2:
# 716 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 8, Common_Movement_WalkRight5
	goto Jakson_Battle05_1

Jakson_Battle05_6:
# 741 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 8, Common_Movement_WalkLeft5
	goto Jakson_Battle05_5


Harper_Battle05::
# 752 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_0, 9
	goto_if_eq Harper_Battle05_2
# 756 "data/emeralbody_rivals/rival_battles.pory"
	setobjectxy 9, 10, 8
Harper_Battle05_1:
# 758 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 9, Common_Movement_WalkUp5
# 759 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 760 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_HarperText_PreBattle, MSGBOX_DEFAULT
# 761 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_HARPER_5, Battle05_HarperText_BattleVictory
# 762 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 9, Common_Movement_WalkInPlaceLeft
# 763 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 764 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 765 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_HarperText_PostBattle, MSGBOX_DEFAULT
# 766 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 767 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 9, Common_Movement_WalkInPlaceUp
# 768 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 769 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_HarperText_PostBattle2, MSGBOX_DEFAULT
# 770 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 771 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 9, Common_Movement_WalkDown5
# 772 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	return

Harper_Battle05_2:
# 753 "data/emeralbody_rivals/rival_battles.pory"
	setobjectxy 9, 9, 8
	goto Harper_Battle05_1


Redd_Battle05::
# 776 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_0, 9
	goto_if_eq Redd_Battle05_2
# 780 "data/emeralbody_rivals/rival_battles.pory"
	setobjectxy 10, 10, 8
Redd_Battle05_1:
# 782 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 10, Common_Movement_WalkUp5
# 783 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 784 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_ReddText_PreBattle, MSGBOX_DEFAULT
# 785 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_0x8004, 1
# 786 "data/emeralbody_rivals/rival_battles.pory"
	specialvar VAR_RESULT, ScriptGetPokedexInfo
# 787 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_0x8006, 100
	goto_if_ge Redd_Battle05_6
# 791 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_ReddText_PreBattle2a, MSGBOX_DEFAULT
Redd_Battle05_5:
# 793 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_ReddText_PreBattle3, MSGBOX_DEFAULT
# 794 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_REDD_5, Battle05_ReddText_BattleVictory
# 795 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 796 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_ReddText_PostBattle, MSGBOX_DEFAULT
# 797 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 798 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 10, Common_Movement_WalkInPlaceLeft
# 799 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 800 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 801 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_ReddText_PostBattle2, MSGBOX_DEFAULT
# 802 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 803 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 10, Common_Movement_WalkInPlaceUp
# 804 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 805 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 806 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_ReddText_PostBattle3, MSGBOX_DEFAULT
# 807 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 808 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 10, Common_Movement_WalkDown5
# 809 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	return

Redd_Battle05_2:
# 777 "data/emeralbody_rivals/rival_battles.pory"
	setobjectxy 10, 9, 8
	goto Redd_Battle05_1

Redd_Battle05_6:
# 788 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_ReddText_PreBattle2b, MSGBOX_DEFAULT
	goto Redd_Battle05_5


Sakura_Battle05::
# 813 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_0, 9
	goto_if_eq Sakura_Battle05_2
# 817 "data/emeralbody_rivals/rival_battles.pory"
	setobjectxy 11, 10, 3
Sakura_Battle05_1:
# 819 "data/emeralbody_rivals/rival_battles.pory"
	setfieldeffectargument 0, 1
# 820 "data/emeralbody_rivals/rival_battles.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 821 "data/emeralbody_rivals/rival_battles.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 822 "data/emeralbody_rivals/rival_battles.pory"
	addobject 11
# 823 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 11, Common_Movement_FaceUp
# 824 "data/emeralbody_rivals/rival_battles.pory"
	delay 30
# 825 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_SakuraText_PreBattle, MSGBOX_DEFAULT
# 826 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_SAKURA_5, Battle05_SakuraText_BattleVictory
# 827 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 828 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_SakuraText_PostBattle, MSGBOX_DEFAULT
# 829 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 830 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 11, Common_Movement_WalkDown5
# 831 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	return

Sakura_Battle05_2:
# 814 "data/emeralbody_rivals/rival_battles.pory"
	setobjectxy 11, 9, 3
	goto Sakura_Battle05_1


Baron_Battle05::
# 835 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_0, 9
	goto_if_eq Baron_Battle05_2
# 839 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 12, Common_Movement_WalkLeft5
Baron_Battle05_1:
# 841 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 842 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 12, Common_Movement_WalkUp
# 843 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 844 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_BaronText_PreBattle, MSGBOX_DEFAULT
# 845 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 846 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 12, Common_Movement_WalkInPlaceLeft
# 847 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 848 "data/emeralbody_rivals/rival_battles.pory"
	delay 20
# 849 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 12, Common_Movement_WalkInPlaceDown
# 850 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 851 "data/emeralbody_rivals/rival_battles.pory"
	delay 40
# 852 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 12, Common_Movement_WalkInPlaceUp
# 853 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 854 "data/emeralbody_rivals/rival_battles.pory"
	delay 20
# 855 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 856 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_BaronText_PreBattle2, MSGBOX_DEFAULT
# 857 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_BARON_5, Battle05_BaronText_BattleVictory
# 858 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 859 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_BaronText_PostBattle, MSGBOX_DEFAULT
# 860 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 861 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 12, Common_Movement_WalkInPlaceDown
# 862 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 863 "data/emeralbody_rivals/rival_battles.pory"
	delay 40
# 864 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 12, Common_Movement_WalkInPlaceUp
# 865 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 866 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 867 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_BaronText_PostBattle2, MSGBOX_DEFAULT
# 868 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 869 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 12, Common_Movement_WalkDown
# 870 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 871 "data/emeralbody_rivals/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 872 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_0, 9
	goto_if_eq Baron_Battle05_6
# 876 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 12, Common_Movement_WalkRight5
Baron_Battle05_5:
# 878 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 879 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 12, Common_Movement_WalkInPlaceUp
# 880 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	return

Baron_Battle05_2:
# 836 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 12, Common_Movement_WalkLeft6
	goto Baron_Battle05_1

Baron_Battle05_6:
# 873 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 12, Common_Movement_WalkRight6
	goto Baron_Battle05_5


Jakson_Battle02_Block_Text_0:
# 602 "data/emeralbody_rivals/rival_battles.pory"
	.string "The Murkrow sees you trying to sneak\naround and actively blocks your\lefforts.$"
