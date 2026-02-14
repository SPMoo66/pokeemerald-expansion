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
	goto_if_ge Harper_Battle03_3
Harper_Battle03_1:
# 108 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_TEMP_6
	return

Harper_Battle03_2:
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
	goto Harper_Battle03_1

Harper_Battle03_3:
# 79 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL_BATTLE_STATE, 6
	goto_if_eq Harper_Battle03_6
Harper_Battle03_5:
# 80 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL_BATTLE_STATE, 11
	goto_if_eq Harper_Battle03_9
	goto Harper_Battle03_1

Harper_Battle03_6:
# 79 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 1
	goto_if_eq Harper_Battle03_2
	goto Harper_Battle03_5

Harper_Battle03_9:
# 80 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 5
	goto_if_eq Harper_Battle03_2
	goto Harper_Battle03_1


Harper_Battle04::
# 112 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 1
	goto_if_eq Harper_Battle04_1
	return

Harper_Battle04_1:
# 113 "data/emeralbody_rivals/rival_battles.pory"
	lock
# 114 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_TEMP_A, 1
# 115 "data/emeralbody_rivals/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 116 "data/emeralbody_rivals/rival_battles.pory"
	addobject 20
# 117 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 20, Common_Movement_WalkUp6
# 118 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 119 "data/emeralbody_rivals/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceLeft
# 120 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 20, Common_Movement_WalkRight4
# 121 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 122 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 123 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle04_HarperText_PreBattle, MSGBOX_DEFAULT
# 124 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalMusic
# 125 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 126 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_HARPER_4, Battle04_HarperText_BattleVictory
# 127 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 128 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle04_HarperText_PostBattle, MSGBOX_DEFAULT
# 129 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 130 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 20, Common_Movement_WalkLeft7
# 131 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 132 "data/emeralbody_rivals/rival_battles.pory"
	removeobject 20
# 133 "data/emeralbody_rivals/rival_battles.pory"
	fadedefaultbgm
# 134 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 3
# 135 "data/emeralbody_rivals/rival_battles.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 136 "data/emeralbody_rivals/rival_battles.pory"
	release
	return


Sakura_Battle02::
# 148 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL_BATTLE_STATE, 0
	goto_if_eq Sakura_Battle02_4
Sakura_Battle02_3:
# 149 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL_BATTLE_STATE, 6
	goto_if_eq Sakura_Battle02_7
Sakura_Battle02_1:
# 183 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_TEMP_6
	return

Sakura_Battle02_2:
# 150 "data/emeralbody_rivals/rival_battles.pory"
	lock
# 151 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_TEMP_A, 4
# 152 "data/emeralbody_rivals/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 153 "data/emeralbody_rivals/rival_battles.pory"
	addobject 3
# 154 "data/emeralbody_rivals/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceDown
# 155 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 156 "data/emeralbody_rivals/rival_battles.pory"
	playse SE_PIN
# 157 "data/emeralbody_rivals/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 158 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 159 "data/emeralbody_rivals/rival_battles.pory"
	delay 60
# 160 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 3, Common_Movement_WalkUp4
# 161 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 162 "data/emeralbody_rivals/rival_battles.pory"
	playse SE_LEDGE
# 163 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 3, Common_Movement_JumpUp
# 164 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 165 "data/emeralbody_rivals/rival_battles.pory"
	playse SE_M_CUT
# 166 "data/emeralbody_rivals/rival_battles.pory"
	waitse
# 167 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 168 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle02_SakuraText_PreBattle, MSGBOX_DEFAULT
# 169 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalMusic
# 170 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 171 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_SAKURA_2, Battle02_SakuraText_BattleVictory
# 172 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 173 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle02_SakuraText_PostBattle, MSGBOX_DEFAULT
# 174 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 175 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 3, Common_Movement_WalkDown5
# 176 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 177 "data/emeralbody_rivals/rival_battles.pory"
	removeobject 3
# 178 "data/emeralbody_rivals/rival_battles.pory"
	fadedefaultbgm
# 179 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 7
# 180 "data/emeralbody_rivals/rival_battles.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 181 "data/emeralbody_rivals/rival_battles.pory"
	release
	goto Sakura_Battle02_1

Sakura_Battle02_4:
# 148 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 4
	goto_if_eq Sakura_Battle02_2
	goto Sakura_Battle02_3

Sakura_Battle02_7:
# 149 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 5
	goto_if_eq Sakura_Battle02_2
	goto Sakura_Battle02_1


Sakura_Battle03::
# 187 "data/emeralbody_rivals/rival_battles.pory"
	lock
# 188 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_TEMP_A, 4
# 189 "data/emeralbody_rivals/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 190 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 191 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle03_SakuraText_PreBattle, MSGBOX_DEFAULT
# 192 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalMusic
# 193 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 194 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_SAKURA_3, Battle03_SakuraText_BattleVictory
# 195 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 196 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle03_SakuraText_PostBattle, MSGBOX_DEFAULT
# 197 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 198 "data/emeralbody_rivals/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 199 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_1, 12
	goto_if_eq Sakura_Battle03_2
Sakura_Battle03_1:
# 203 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 8, Common_Movement_WalkDown
# 204 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 205 "data/emeralbody_rivals/rival_battles.pory"
	playse SE_LEDGE
# 206 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 8, Common_Movement_JumpDown2
# 207 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 208 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 8, Common_Movement_WalkDown4
# 209 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 210 "data/emeralbody_rivals/rival_battles.pory"
	removeobject 8
# 211 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_TEMP_2
# 212 "data/emeralbody_rivals/rival_battles.pory"
	fadedefaultbgm
# 213 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 11
# 214 "data/emeralbody_rivals/rival_battles.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 215 "data/emeralbody_rivals/rival_battles.pory"
	delay 30
# 216 "data/emeralbody_rivals/rival_battles.pory"
	playse SE_EFFECTIVE
# 217 "data/emeralbody_rivals/rival_battles.pory"
	setmetatile 13, 11, 0x208, FALSE
# 218 "data/emeralbody_rivals/rival_battles.pory"
	special DrawWholeMapView
# 219 "data/emeralbody_rivals/rival_battles.pory"
	delay 30
# 220 "data/emeralbody_rivals/rival_battles.pory"
	release
	return

Sakura_Battle03_2:
# 200 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 8, Common_Movement_WalkRight
# 201 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Sakura_Battle03_1


Sakura_Battle04::
# 224 "data/emeralbody_rivals/rival_battles.pory"
	lock
# 225 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_TEMP_A, 4
# 226 "data/emeralbody_rivals/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 227 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 228 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle04_SakuraText_PreBattle, MSGBOX_DEFAULT
# 229 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalMusic
# 230 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 231 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_SAKURA_4, Battle04_SakuraText_BattleVictory
# 232 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 233 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle04_SakuraText_PostBattle, MSGBOX_DEFAULT
# 234 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 235 "data/emeralbody_rivals/rival_battles.pory"
	setfieldeffectargument 0, 1
# 236 "data/emeralbody_rivals/rival_battles.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 237 "data/emeralbody_rivals/rival_battles.pory"
	delay 15
# 238 "data/emeralbody_rivals/rival_battles.pory"
	removeobject 1
# 239 "data/emeralbody_rivals/rival_battles.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 240 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_TEMP_1
# 241 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 3
# 242 "data/emeralbody_rivals/rival_battles.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 243 "data/emeralbody_rivals/rival_battles.pory"
	release
	return


Redd_Battle02::
# 254 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL_BATTLE_STATE, 0
	goto_if_eq Redd_Battle02_4
Redd_Battle02_3:
# 255 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL_BATTLE_STATE, 8
	goto_if_eq Redd_Battle02_7
Redd_Battle02_1:
# 309 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_TEMP_6
	return

Redd_Battle02_2:
# 256 "data/emeralbody_rivals/rival_battles.pory"
	lock
# 257 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_TEMP_A, 3
# 258 "data/emeralbody_rivals/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 259 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 260 "data/emeralbody_rivals/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 261 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_1, 58
	goto_if_eq Redd_Battle02_11
# 276 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 40, Common_Movement_FaceUp
# 277 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 278 "data/emeralbody_rivals/rival_battles.pory"
	playse SE_PIN
# 279 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 40, Common_Movement_ExclamationMark
# 280 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 281 "data/emeralbody_rivals/rival_battles.pory"
	delay 60
# 282 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_1, 52
	goto_if_eq Redd_Battle02_19
# 287 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 40, Common_Movement_WalkUp2
# 288 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
Redd_Battle02_18:
# 290 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 40, Common_Movement_WalkRight
# 291 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 292 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle02_ReddText_PreBattleAlt, MSGBOX_DEFAULT
Redd_Battle02_10:
# 294 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalMusic
# 295 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 296 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_REDD_2, Battle02_ReddText_BattleVictory
# 297 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 298 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle02_ReddText_PostBattle, MSGBOX_DEFAULT
# 299 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 300 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 40, Common_Movement_WalkUp6
# 301 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 302 "data/emeralbody_rivals/rival_battles.pory"
	removeobject 40
# 303 "data/emeralbody_rivals/rival_battles.pory"
	fadedefaultbgm
# 304 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 9
# 305 "data/emeralbody_rivals/rival_battles.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 306 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_TEMP_2
# 307 "data/emeralbody_rivals/rival_battles.pory"
	release
	goto Redd_Battle02_1

Redd_Battle02_4:
# 254 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 3
	goto_if_eq Redd_Battle02_2
	goto Redd_Battle02_3

Redd_Battle02_7:
# 255 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 5
	goto_if_eq Redd_Battle02_2
	goto Redd_Battle02_1

Redd_Battle02_11:
# 262 "data/emeralbody_rivals/rival_battles.pory"
	switch VAR_TEMP_0
# 263 "data/emeralbody_rivals/rival_battles.pory"
	case 17, Redd_Battle02_16
# 266 "data/emeralbody_rivals/rival_battles.pory"
	case 19, Redd_Battle02_17
Redd_Battle02_14:
# 271 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 40, Common_Movement_WalkDown2
# 272 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 273 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle02_ReddText_PreBattle, MSGBOX_DEFAULT
	goto Redd_Battle02_10

Redd_Battle02_16:
# 264 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 40, Common_Movement_WalkLeft
# 265 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Redd_Battle02_14

Redd_Battle02_17:
# 267 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 40, Common_Movement_WalkRight
# 268 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Redd_Battle02_14

Redd_Battle02_19:
# 283 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 40, Common_Movement_WalkUp3
# 284 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Redd_Battle02_18


Redd_Battle03::
# 313 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL_BATTLE_STATE, 9
	goto_if_eq Redd_Battle03_4
Redd_Battle03_3:
# 314 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL_BATTLE_STATE, 14
	goto_if_eq Redd_Battle03_7
Redd_Battle03_1:
# 371 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_TEMP_6
	return

Redd_Battle03_2:
# 315 "data/emeralbody_rivals/rival_battles.pory"
	lock
# 316 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_TEMP_A, 3
# 317 "data/emeralbody_rivals/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 318 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 319 "data/emeralbody_rivals/rival_battles.pory"
	addobject 5
# 320 "data/emeralbody_rivals/rival_battles.pory"
	playse SE_EXIT
# 321 "data/emeralbody_rivals/rival_battles.pory"
	waitse
# 322 "data/emeralbody_rivals/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 323 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_1, 7
	goto_if_eq Redd_Battle03_11
# 329 "data/emeralbody_rivals/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceRight
# 330 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 5, Common_Movement_WalkDown3
# 331 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
Redd_Battle03_10:
# 333 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 5, Common_Movement_WalkLeft3
# 334 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 335 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_1, 7
	goto_if_eq Redd_Battle03_15
# 341 "data/emeralbody_rivals/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceUp
# 342 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 5, Common_Movement_WalkInPlaceDown
# 343 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
Redd_Battle03_14:
# 345 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 346 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle03_ReddText_PreBattle, MSGBOX_DEFAULT
# 347 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalMusic
# 348 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 349 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_REDD_3, Battle03_ReddText_BattleVictory
# 350 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 351 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle03_ReddText_PostBattle, MSGBOX_DEFAULT
# 352 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 353 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 5, Common_Movement_WalkLeft4
# 354 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 355 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_1, 7
	goto_if_eq Redd_Battle03_19
# 360 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 5, Common_Movement_WalkDown
# 361 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
Redd_Battle03_18:
# 363 "data/emeralbody_rivals/rival_battles.pory"
	removeobject 5
# 364 "data/emeralbody_rivals/rival_battles.pory"
	playse SE_EXIT
# 365 "data/emeralbody_rivals/rival_battles.pory"
	waitse
# 366 "data/emeralbody_rivals/rival_battles.pory"
	fadedefaultbgm
# 367 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 15
# 368 "data/emeralbody_rivals/rival_battles.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 369 "data/emeralbody_rivals/rival_battles.pory"
	release
	goto Redd_Battle03_1

Redd_Battle03_4:
# 313 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 3
	goto_if_eq Redd_Battle03_2
	goto Redd_Battle03_3

Redd_Battle03_7:
# 314 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 5
	goto_if_eq Redd_Battle03_2
	goto Redd_Battle03_1

Redd_Battle03_11:
# 324 "data/emeralbody_rivals/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceRight
# 325 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 5, Common_Movement_WalkDown4
# 326 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Redd_Battle03_10

Redd_Battle03_15:
# 336 "data/emeralbody_rivals/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceDown
# 337 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 5, Common_Movement_WalkInPlaceUp
# 338 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Redd_Battle03_14

Redd_Battle03_19:
# 356 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 5, Common_Movement_WalkInPlaceDown
# 357 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Redd_Battle03_18


Redd_Battle04::
# 375 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 3
	goto_if_eq Redd_Battle04_2
	return

Redd_Battle04_1:
# 376 "data/emeralbody_rivals/rival_battles.pory"
	lock
# 377 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_TEMP_A, 3
# 378 "data/emeralbody_rivals/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 379 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 380 "data/emeralbody_rivals/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 381 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_1, 5
	goto_if_eq Redd_Battle04_6
# 392 "data/emeralbody_rivals/rival_battles.pory"
	faceplayer
Redd_Battle04_5:
# 394 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle04_ReddText_PreBattle, MSGBOX_DEFAULT
# 395 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalMusic
# 396 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 397 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_REDD_4, Battle04_ReddText_BattleVictory
# 398 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 399 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle04_ReddText_PostBattle1, MSGBOX_DEFAULT
# 400 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_0x8004, 1
# 401 "data/emeralbody_rivals/rival_battles.pory"
	specialvar VAR_RESULT, ScriptGetPokedexInfo
# 402 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_0x8006, 75
	goto_if_ge Redd_Battle04_10
# 406 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle04_ReddText_PostBattle2a, MSGBOX_DEFAULT
Redd_Battle04_9:
# 408 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle04_ReddText_PostBattle3, MSGBOX_DEFAULT
# 409 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 410 "data/emeralbody_rivals/rival_battles.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 411 "data/emeralbody_rivals/rival_battles.pory"
	removeobject 10
# 412 "data/emeralbody_rivals/rival_battles.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 413 "data/emeralbody_rivals/rival_battles.pory"
	fadedefaultbgm
# 414 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 3
# 415 "data/emeralbody_rivals/rival_battles.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 416 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_TEMP_1
# 417 "data/emeralbody_rivals/rival_battles.pory"
	release
	return

Redd_Battle04_2:
# 375 "data/emeralbody_rivals/rival_battles.pory"
	goto_if_set FLAG_BADGE07_GET, Redd_Battle04_1
	return

Redd_Battle04_6:
# 382 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 10, Common_Movement_ExclamationMark
# 383 "data/emeralbody_rivals/rival_battles.pory"
	playse SE_PIN
# 384 "data/emeralbody_rivals/rival_battles.pory"
	delay 60
# 385 "data/emeralbody_rivals/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceRight
# 386 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_0, 13
	goto_if_eq Redd_Battle04_14
Redd_Battle04_13:
# 389 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Redd_Battle04_5

Redd_Battle04_10:
# 403 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle04_ReddText_PostBattle2b
	goto Redd_Battle04_9

Redd_Battle04_14:
# 387 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 10, Common_Movement_WalkLeft
	goto Redd_Battle04_13


Baron_Battle02::
# 429 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL_BATTLE_STATE, 0
	goto_if_eq Baron_Battle02_4
Baron_Battle02_3:
# 430 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL_BATTLE_STATE, 7
	goto_if_eq Baron_Battle02_7
Baron_Battle02_1:
# 463 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_TEMP_6
	return

Baron_Battle02_2:
# 431 "data/emeralbody_rivals/rival_battles.pory"
	lock
# 432 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_TEMP_A, 0
# 433 "data/emeralbody_rivals/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 434 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 435 "data/emeralbody_rivals/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 436 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_1, 9
	goto_if_eq Baron_Battle02_11
# 445 "data/emeralbody_rivals/rival_battles.pory"
	faceplayer
Baron_Battle02_10:
# 447 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle02_BaronText_PreBattle, MSGBOX_DEFAULT
# 448 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalMusic
# 449 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 450 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_BARON_2, Battle02_BaronText_BattleVictory
# 451 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 452 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle02_BaronText_PostBattle, MSGBOX_DEFAULT
# 453 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 454 "data/emeralbody_rivals/rival_battles.pory"
	fadedefaultbgm
# 455 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 8
# 456 "data/emeralbody_rivals/rival_battles.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 457 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_TEMP_2
# 458 "data/emeralbody_rivals/rival_battles.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 459 "data/emeralbody_rivals/rival_battles.pory"
	removeobject 7
# 460 "data/emeralbody_rivals/rival_battles.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 461 "data/emeralbody_rivals/rival_battles.pory"
	release
	goto Baron_Battle02_1

Baron_Battle02_4:
# 429 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 0
	goto_if_eq Baron_Battle02_2
	goto Baron_Battle02_3

Baron_Battle02_7:
# 430 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 5
	goto_if_eq Baron_Battle02_2
	goto Baron_Battle02_1

Baron_Battle02_11:
# 437 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 7, Common_Movement_WalkInPlaceUp
# 438 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 439 "data/emeralbody_rivals/rival_battles.pory"
	delay 50
# 440 "data/emeralbody_rivals/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceDown
# 441 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 7, Common_Movement_WalkUp
# 442 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Baron_Battle02_10


Baron_Battle03::
# 467 "data/emeralbody_rivals/rival_battles.pory"
	goto_if_set FLAG_BADGE05_GET, Baron_Battle03_3
Baron_Battle03_1:
# 508 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_TEMP_6
	return

Baron_Battle03_2:
# 470 "data/emeralbody_rivals/rival_battles.pory"
	lock
# 471 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_TEMP_A, 0
# 472 "data/emeralbody_rivals/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 473 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 474 "data/emeralbody_rivals/rival_battles.pory"
	addobject 14
# 475 "data/emeralbody_rivals/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 476 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_1, 8
	goto_if_eq Baron_Battle03_13
# 479 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_1, 9
	goto_if_eq Baron_Battle03_14
# 482 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_1, 10
	goto_if_eq Baron_Battle03_15
# 485 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_1, 11
	goto_if_eq Baron_Battle03_16
Baron_Battle03_12:
# 490 "data/emeralbody_rivals/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceLeft
# 491 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 14, Common_Movement_WalkRight7
# 492 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 493 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle03_BaronText_PreBattle, MSGBOX_DEFAULT
# 494 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalMusic
# 495 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 496 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_BARON_3, Battle03_BaronText_BattleVictory
# 497 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 498 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle03_BaronText_PostBattle, MSGBOX_DEFAULT
# 499 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 500 "data/emeralbody_rivals/rival_battles.pory"
	fadedefaultbgm
# 501 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 13
# 502 "data/emeralbody_rivals/rival_battles.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 503 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 14, Common_Movement_WalkLeft7
# 504 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 505 "data/emeralbody_rivals/rival_battles.pory"
	removeobject 14
# 506 "data/emeralbody_rivals/rival_battles.pory"
	release
	goto Baron_Battle03_1

Baron_Battle03_3:
# 468 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL_BATTLE_STATE, 8
	goto_if_eq Baron_Battle03_6
Baron_Battle03_5:
# 469 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL_BATTLE_STATE, 12
	goto_if_eq Baron_Battle03_9
	goto Baron_Battle03_1

Baron_Battle03_6:
# 468 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 0
	goto_if_eq Baron_Battle03_2
	goto Baron_Battle03_5

Baron_Battle03_9:
# 469 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 5
	goto_if_eq Baron_Battle03_2
	goto Baron_Battle03_1

Baron_Battle03_13:
# 477 "data/emeralbody_rivals/rival_battles.pory"
	setobjectxy 14, 30, 8
	goto Baron_Battle03_12

Baron_Battle03_14:
# 480 "data/emeralbody_rivals/rival_battles.pory"
	setobjectxy 14, 30, 9
	goto Baron_Battle03_12

Baron_Battle03_15:
# 483 "data/emeralbody_rivals/rival_battles.pory"
	setobjectxy 14, 30, 10
	goto Baron_Battle03_12

Baron_Battle03_16:
# 486 "data/emeralbody_rivals/rival_battles.pory"
	setobjectxy 14, 30, 10
# 487 "data/emeralbody_rivals/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
# 488 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Baron_Battle03_12


Baron_Battle04::
# 512 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 0
	goto_if_eq Baron_Battle04_2
	return

Baron_Battle04_1:
# 513 "data/emeralbody_rivals/rival_battles.pory"
	lock
# 514 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_TEMP_A, 0
# 515 "data/emeralbody_rivals/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 516 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 517 "data/emeralbody_rivals/rival_battles.pory"
	addobject 27
# 518 "data/emeralbody_rivals/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 519 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_0, 55
	goto_if_eq Baron_Battle04_6
# 524 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 27, Common_Movement_WalkLeft8
# 525 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
Baron_Battle04_5:
# 527 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 27, Common_Movement_WalkInPlaceUp
# 528 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 529 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle04_BaronText_PreBattle, MSGBOX_DEFAULT
# 530 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalMusic
# 531 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 532 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_BARON_4, Battle04_BaronText_BattleVictory
# 533 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 534 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle04_BaronText_PostBattle, MSGBOX_DEFAULT
# 535 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 536 "data/emeralbody_rivals/rival_battles.pory"
	fadedefaultbgm
# 537 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 3
# 538 "data/emeralbody_rivals/rival_battles.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 539 "data/emeralbody_rivals/rival_battles.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 540 "data/emeralbody_rivals/rival_battles.pory"
	removeobject 27
# 541 "data/emeralbody_rivals/rival_battles.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 542 "data/emeralbody_rivals/rival_battles.pory"
	release
	return

Baron_Battle04_2:
# 512 "data/emeralbody_rivals/rival_battles.pory"
	goto_if_set FLAG_MET_TEAM_AQUA_HARBOR, Baron_Battle04_1
	return

Baron_Battle04_6:
# 520 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 27, Common_Movement_WalkLeft9
# 521 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Baron_Battle04_5


Jakson_Battle02::
# 555 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL_BATTLE_STATE, 0
	goto_if_eq Jakson_Battle02_4
Jakson_Battle02_3:
# 556 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL_BATTLE_STATE, 9
	goto_if_eq Jakson_Battle02_7
Jakson_Battle02_1:
# 602 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_TEMP_6
	return

Jakson_Battle02_2:
# 557 "data/emeralbody_rivals/rival_battles.pory"
	lock
# 558 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_TEMP_A, 2
# 559 "data/emeralbody_rivals/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 560 "data/emeralbody_rivals/rival_battles.pory"
	delay 30
# 561 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 562 "data/emeralbody_rivals/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 563 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_0, 5
	goto_if_eq Jakson_Battle02_11
Jakson_Battle02_10:
# 585 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle02_JaksonText_PreBattle, MSGBOX_DEFAULT
# 586 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalMusic
# 587 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 588 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_JAKSON_2, Battle02_JaksonText_BattleVictory
# 589 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 590 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle02_JaksonText_PostBattle, MSGBOX_DEFAULT
# 591 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 592 "data/emeralbody_rivals/rival_battles.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 593 "data/emeralbody_rivals/rival_battles.pory"
	removeobject 7
# 594 "data/emeralbody_rivals/rival_battles.pory"
	removeobject 6
# 595 "data/emeralbody_rivals/rival_battles.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 596 "data/emeralbody_rivals/rival_battles.pory"
	fadedefaultbgm
# 597 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 10
# 598 "data/emeralbody_rivals/rival_battles.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 599 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_TEMP_2
# 600 "data/emeralbody_rivals/rival_battles.pory"
	release
	goto Jakson_Battle02_1

Jakson_Battle02_4:
# 555 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 2
	goto_if_eq Jakson_Battle02_2
	goto Jakson_Battle02_3

Jakson_Battle02_7:
# 556 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 5
	goto_if_eq Jakson_Battle02_2
	goto Jakson_Battle02_1

Jakson_Battle02_11:
# 564 "data/emeralbody_rivals/rival_battles.pory"
	switch VAR_TEMP_1
# 565 "data/emeralbody_rivals/rival_battles.pory"
	case 9, Jakson_Battle02_15
# 568 "data/emeralbody_rivals/rival_battles.pory"
	case 11, Jakson_Battle02_16
# 571 "data/emeralbody_rivals/rival_battles.pory"
	case 12, Jakson_Battle02_17
# 574 "data/emeralbody_rivals/rival_battles.pory"
	case 13, Jakson_Battle02_18
# 577 "data/emeralbody_rivals/rival_battles.pory"
	case 14, Jakson_Battle02_19
Jakson_Battle02_13:
# 582 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 7, Common_Movement_WalkRight2
# 583 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Jakson_Battle02_10

Jakson_Battle02_15:
# 566 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 7, Common_Movement_WalkUp
# 567 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Jakson_Battle02_13

Jakson_Battle02_16:
# 569 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 7, Common_Movement_WalkDown
# 570 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Jakson_Battle02_13

Jakson_Battle02_17:
# 572 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 7, Common_Movement_WalkDown2
# 573 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Jakson_Battle02_13

Jakson_Battle02_18:
# 575 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 7, Common_Movement_WalkDown3
# 576 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Jakson_Battle02_13

Jakson_Battle02_19:
# 578 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 7, Common_Movement_WalkDown4
# 579 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Jakson_Battle02_13


Jakson_Battle02_Block::
# 606 "data/emeralbody_rivals/rival_battles.pory"
	lock
# 607 "data/emeralbody_rivals/rival_battles.pory"
	faceplayer
# 608 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Jakson_Battle02_Block_Text_0
# 609 "data/emeralbody_rivals/rival_battles.pory"
	playmoncry SPECIES_MURKROW, CRY_MODE_NORMAL
# 610 "data/emeralbody_rivals/rival_battles.pory"
	waitmoncry
# 611 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 612 "data/emeralbody_rivals/rival_battles.pory"
	release
	return


Jakson_Battle03::
# 616 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL_BATTLE_STATE, 10
	goto_if_eq Jakson_Battle03_4
Jakson_Battle03_3:
# 617 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL_BATTLE_STATE, 13
	goto_if_eq Jakson_Battle03_7
Jakson_Battle03_1:
# 653 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_TEMP_6
	return

Jakson_Battle03_2:
# 618 "data/emeralbody_rivals/rival_battles.pory"
	lock
# 619 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_TEMP_A, 2
# 620 "data/emeralbody_rivals/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 621 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 622 "data/emeralbody_rivals/rival_battles.pory"
	addobject 48
# 623 "data/emeralbody_rivals/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 624 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_0, 31
	goto_if_eq Jakson_Battle03_11
Jakson_Battle03_10:
# 627 "data/emeralbody_rivals/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceDown
# 628 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 48, Common_Movement_WalkUp5
# 629 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 630 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle03_JaksonText_PreBattle, MSGBOX_DEFAULT
# 631 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalMusic
# 632 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 633 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_JAKSON_3, Battle03_JaksonText_BattleVictory
# 634 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 635 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle03_JaksonText_PostBattle, MSGBOX_DEFAULT
# 636 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 637 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 14
# 638 "data/emeralbody_rivals/rival_battles.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 639 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_0, 31
	goto_if_eq Jakson_Battle03_14
# 644 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 48, Common_Movement_WalkRight
# 645 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
Jakson_Battle03_13:
# 647 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 48, Common_Movement_WalkUp7
# 648 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 649 "data/emeralbody_rivals/rival_battles.pory"
	removeobject 48
# 650 "data/emeralbody_rivals/rival_battles.pory"
	fadedefaultbgm
# 651 "data/emeralbody_rivals/rival_battles.pory"
	release
	goto Jakson_Battle03_1

Jakson_Battle03_4:
# 616 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 2
	goto_if_eq Jakson_Battle03_2
	goto Jakson_Battle03_3

Jakson_Battle03_7:
# 617 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 5
	goto_if_eq Jakson_Battle03_2
	goto Jakson_Battle03_1

Jakson_Battle03_11:
# 625 "data/emeralbody_rivals/rival_battles.pory"
	setobjectxy 48, 31, 103
	goto Jakson_Battle03_10

Jakson_Battle03_14:
# 640 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 48, Common_Movement_WalkLeft
# 641 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Jakson_Battle03_13


Jakson_Battle04::
# 657 "data/emeralbody_rivals/rival_battles.pory"
	lock
# 658 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_TEMP_A, 2
# 659 "data/emeralbody_rivals/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 660 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 661 "data/emeralbody_rivals/rival_battles.pory"
	delay 30
# 662 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 4, Common_Movement_WalkDown2
# 663 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 664 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle04_JaksonText_PreBattle, MSGBOX_DEFAULT
# 665 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalMusic
# 666 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 667 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_JAKSON_4, Battle04_JaksonText_BattleVictory
# 668 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 669 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle04_JaksonText_PostBattle, MSGBOX_DEFAULT
# 670 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 671 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 3
# 672 "data/emeralbody_rivals/rival_battles.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 673 "data/emeralbody_rivals/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight
# 674 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 675 "data/emeralbody_rivals/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceLeft
# 676 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 4, Common_Movement_WalkDown
# 677 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 678 "data/emeralbody_rivals/rival_battles.pory"
	delay 10
# 679 "data/emeralbody_rivals/rival_battles.pory"
	removeobject 4
# 680 "data/emeralbody_rivals/rival_battles.pory"
	playse SE_EXIT
# 681 "data/emeralbody_rivals/rival_battles.pory"
	waitse
# 682 "data/emeralbody_rivals/rival_battles.pory"
	release
	return


Rival_Battle05::
# 695 "data/emeralbody_rivals/rival_battles.pory"
	lock
# 696 "data/emeralbody_rivals/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 697 "data/emeralbody_rivals/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 698 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 699 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalMusic
# 700 "data/emeralbody_rivals/rival_battles.pory"
	hidefollower
# 701 "data/emeralbody_rivals/rival_battles.pory"
	delay 10
# 702 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 703 "data/emeralbody_rivals/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceDown
# 704 "data/emeralbody_rivals/rival_battles.pory"
	switch VAR_EMERALBODY_RIVAL
# 705 "data/emeralbody_rivals/rival_battles.pory"
	case 1, Rival_Battle05_3
# 707 "data/emeralbody_rivals/rival_battles.pory"
	case 2, Rival_Battle05_4
# 709 "data/emeralbody_rivals/rival_battles.pory"
	case 3, Rival_Battle05_5
# 711 "data/emeralbody_rivals/rival_battles.pory"
	case 4, Rival_Battle05_6
# 714 "data/emeralbody_rivals/rival_battles.pory"
	call Baron_Battle05
Rival_Battle05_1:
# 716 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 4
# 717 "data/emeralbody_rivals/rival_battles.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 718 "data/emeralbody_rivals/rival_battles.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 719 "data/emeralbody_rivals/rival_battles.pory"
	warpsilent MAP_EVER_GRANDE_CITY_POKEMON_LEAGUE_1F, 9, 4
# 720 "data/emeralbody_rivals/rival_battles.pory"
	release
	return

Rival_Battle05_3:
# 706 "data/emeralbody_rivals/rival_battles.pory"
	call Harper_Battle05
	goto Rival_Battle05_1

Rival_Battle05_4:
# 708 "data/emeralbody_rivals/rival_battles.pory"
	call Jakson_Battle05
	goto Rival_Battle05_1

Rival_Battle05_5:
# 710 "data/emeralbody_rivals/rival_battles.pory"
	call Redd_Battle05
	goto Rival_Battle05_1

Rival_Battle05_6:
# 712 "data/emeralbody_rivals/rival_battles.pory"
	call Sakura_Battle05
	goto Rival_Battle05_1


Jakson_Battle05::
# 724 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_0, 9
	goto_if_eq Jakson_Battle05_2
# 728 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 8, Common_Movement_WalkRight6
Jakson_Battle05_1:
# 730 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 731 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 8, Common_Movement_WalkUp
# 732 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 733 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_JaksonText_PreBattle, MSGBOX_DEFAULT
# 734 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 735 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 8, Common_Movement_WalkInPlaceLeft
# 736 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 737 "data/emeralbody_rivals/rival_battles.pory"
	delay 60
# 738 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 8, Common_Movement_WalkInPlaceUp
# 739 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 740 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 741 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_JaksonText_PreBattle2, MSGBOX_DEFAULT
# 742 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_JAKSON_5, Battle05_JaksonText_BattleVictory
# 743 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 744 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_JaksonText_PostBattle, MSGBOX_DEFAULT
# 745 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 746 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 8, Common_Movement_WalkDown
# 747 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 748 "data/emeralbody_rivals/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 749 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_0, 9
	goto_if_eq Jakson_Battle05_6
# 753 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 8, Common_Movement_WalkLeft6
Jakson_Battle05_5:
# 755 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 756 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 8, Common_Movement_WalkInPlaceUp
# 757 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	return

Jakson_Battle05_2:
# 725 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 8, Common_Movement_WalkRight5
	goto Jakson_Battle05_1

Jakson_Battle05_6:
# 750 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 8, Common_Movement_WalkLeft5
	goto Jakson_Battle05_5


Harper_Battle05::
# 761 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_0, 9
	goto_if_eq Harper_Battle05_2
# 765 "data/emeralbody_rivals/rival_battles.pory"
	setobjectxy 9, 10, 8
Harper_Battle05_1:
# 767 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 9, Common_Movement_WalkUp5
# 768 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 769 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_HarperText_PreBattle, MSGBOX_DEFAULT
# 770 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_HARPER_5, Battle05_HarperText_BattleVictory
# 771 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 9, Common_Movement_WalkInPlaceLeft
# 772 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 773 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 774 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_HarperText_PostBattle, MSGBOX_DEFAULT
# 775 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 776 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 9, Common_Movement_WalkInPlaceUp
# 777 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 778 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_HarperText_PostBattle2, MSGBOX_DEFAULT
# 779 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 780 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 9, Common_Movement_WalkDown5
# 781 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	return

Harper_Battle05_2:
# 762 "data/emeralbody_rivals/rival_battles.pory"
	setobjectxy 9, 9, 8
	goto Harper_Battle05_1


Redd_Battle05::
# 785 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_0, 9
	goto_if_eq Redd_Battle05_2
# 789 "data/emeralbody_rivals/rival_battles.pory"
	setobjectxy 10, 10, 8
Redd_Battle05_1:
# 791 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 10, Common_Movement_WalkUp5
# 792 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 793 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_ReddText_PreBattle, MSGBOX_DEFAULT
# 794 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_0x8004, 1
# 795 "data/emeralbody_rivals/rival_battles.pory"
	specialvar VAR_RESULT, ScriptGetPokedexInfo
# 796 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_0x8006, 100
	goto_if_ge Redd_Battle05_6
# 800 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_ReddText_PreBattle2a, MSGBOX_DEFAULT
Redd_Battle05_5:
# 802 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_ReddText_PreBattle3, MSGBOX_DEFAULT
# 803 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_REDD_5, Battle05_ReddText_BattleVictory
# 804 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 805 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_ReddText_PostBattle, MSGBOX_DEFAULT
# 806 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 807 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 10, Common_Movement_WalkInPlaceLeft
# 808 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 809 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 810 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_ReddText_PostBattle2, MSGBOX_DEFAULT
# 811 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 812 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 10, Common_Movement_WalkInPlaceUp
# 813 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 814 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 815 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_ReddText_PostBattle3, MSGBOX_DEFAULT
# 816 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 817 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 10, Common_Movement_WalkDown5
# 818 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	return

Redd_Battle05_2:
# 786 "data/emeralbody_rivals/rival_battles.pory"
	setobjectxy 10, 9, 8
	goto Redd_Battle05_1

Redd_Battle05_6:
# 797 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_ReddText_PreBattle2b, MSGBOX_DEFAULT
	goto Redd_Battle05_5


Sakura_Battle05::
# 822 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_0, 9
	goto_if_eq Sakura_Battle05_2
# 826 "data/emeralbody_rivals/rival_battles.pory"
	setobjectxy 11, 10, 3
Sakura_Battle05_1:
# 828 "data/emeralbody_rivals/rival_battles.pory"
	setfieldeffectargument 0, 1
# 829 "data/emeralbody_rivals/rival_battles.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 830 "data/emeralbody_rivals/rival_battles.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 831 "data/emeralbody_rivals/rival_battles.pory"
	addobject 11
# 832 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 11, Common_Movement_FaceUp
# 833 "data/emeralbody_rivals/rival_battles.pory"
	delay 30
# 834 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_SakuraText_PreBattle, MSGBOX_DEFAULT
# 835 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_SAKURA_5, Battle05_SakuraText_BattleVictory
# 836 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 837 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_SakuraText_PostBattle, MSGBOX_DEFAULT
# 838 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 839 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 11, Common_Movement_WalkDown5
# 840 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	return

Sakura_Battle05_2:
# 823 "data/emeralbody_rivals/rival_battles.pory"
	setobjectxy 11, 9, 3
	goto Sakura_Battle05_1


Baron_Battle05::
# 844 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_0, 9
	goto_if_eq Baron_Battle05_2
# 848 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 12, Common_Movement_WalkLeft5
Baron_Battle05_1:
# 850 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 851 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 12, Common_Movement_WalkUp
# 852 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 853 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_BaronText_PreBattle, MSGBOX_DEFAULT
# 854 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 855 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 12, Common_Movement_WalkInPlaceLeft
# 856 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 857 "data/emeralbody_rivals/rival_battles.pory"
	delay 20
# 858 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 12, Common_Movement_WalkInPlaceDown
# 859 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 860 "data/emeralbody_rivals/rival_battles.pory"
	delay 40
# 861 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 12, Common_Movement_WalkInPlaceUp
# 862 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 863 "data/emeralbody_rivals/rival_battles.pory"
	delay 20
# 864 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 865 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_BaronText_PreBattle2, MSGBOX_DEFAULT
# 866 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_BARON_5, Battle05_BaronText_BattleVictory
# 867 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 868 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_BaronText_PostBattle, MSGBOX_DEFAULT
# 869 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 870 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 12, Common_Movement_WalkInPlaceDown
# 871 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 872 "data/emeralbody_rivals/rival_battles.pory"
	delay 40
# 873 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 12, Common_Movement_WalkInPlaceUp
# 874 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 875 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 876 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_BaronText_PostBattle2, MSGBOX_DEFAULT
# 877 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 878 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 12, Common_Movement_WalkDown
# 879 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 880 "data/emeralbody_rivals/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 881 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_0, 9
	goto_if_eq Baron_Battle05_6
# 885 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 12, Common_Movement_WalkRight5
Baron_Battle05_5:
# 887 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 888 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 12, Common_Movement_WalkInPlaceUp
# 889 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	return

Baron_Battle05_2:
# 845 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 12, Common_Movement_WalkLeft6
	goto Baron_Battle05_1

Baron_Battle05_6:
# 882 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 12, Common_Movement_WalkRight6
	goto Baron_Battle05_5


Jakson_Battle02_Block_Text_0:
# 608 "data/emeralbody_rivals/rival_battles.pory"
	.string "The Murkrow sees you trying to sneak\naround and actively blocks your\lefforts.$"
