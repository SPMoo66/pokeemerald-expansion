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
	compare VAR_EMERALBODY_RIVAL, 3
	goto_if_eq Redd_Battle03_1
	return

Redd_Battle03_1:
# 314 "data/emeralbody_rivals/rival_battles.pory"
	lock
# 315 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_TEMP_A, 3
# 316 "data/emeralbody_rivals/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 317 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 318 "data/emeralbody_rivals/rival_battles.pory"
	addobject 5
# 319 "data/emeralbody_rivals/rival_battles.pory"
	playse SE_EXIT
# 320 "data/emeralbody_rivals/rival_battles.pory"
	waitse
# 321 "data/emeralbody_rivals/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 322 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_1, 7
	goto_if_eq Redd_Battle03_4
# 328 "data/emeralbody_rivals/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceRight
# 329 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 5, Common_Movement_WalkDown3
# 330 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
Redd_Battle03_3:
# 332 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 5, Common_Movement_WalkLeft3
# 333 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 334 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_1, 7
	goto_if_eq Redd_Battle03_8
# 340 "data/emeralbody_rivals/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceUp
# 341 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 5, Common_Movement_WalkInPlaceDown
# 342 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
Redd_Battle03_7:
# 344 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 345 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle03_ReddText_PreBattle, MSGBOX_DEFAULT
# 346 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalMusic
# 347 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 348 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_REDD_3, Battle03_ReddText_BattleVictory
# 349 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 350 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle03_ReddText_PostBattle, MSGBOX_DEFAULT
# 351 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 352 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 5, Common_Movement_WalkLeft4
# 353 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 354 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_1, 7
	goto_if_eq Redd_Battle03_12
# 359 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 5, Common_Movement_WalkDown
# 360 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
Redd_Battle03_11:
# 362 "data/emeralbody_rivals/rival_battles.pory"
	removeobject 5
# 363 "data/emeralbody_rivals/rival_battles.pory"
	playse SE_EXIT
# 364 "data/emeralbody_rivals/rival_battles.pory"
	waitse
# 365 "data/emeralbody_rivals/rival_battles.pory"
	fadedefaultbgm
# 366 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 2
# 367 "data/emeralbody_rivals/rival_battles.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 368 "data/emeralbody_rivals/rival_battles.pory"
	release
	return

Redd_Battle03_4:
# 323 "data/emeralbody_rivals/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceRight
# 324 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 5, Common_Movement_WalkDown4
# 325 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Redd_Battle03_3

Redd_Battle03_8:
# 335 "data/emeralbody_rivals/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceDown
# 336 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 5, Common_Movement_WalkInPlaceUp
# 337 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Redd_Battle03_7

Redd_Battle03_12:
# 355 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 5, Common_Movement_WalkInPlaceDown
# 356 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Redd_Battle03_11


Redd_Battle04::
# 373 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 3
	goto_if_eq Redd_Battle04_2
	return

Redd_Battle04_1:
# 374 "data/emeralbody_rivals/rival_battles.pory"
	lock
# 375 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_TEMP_A, 3
# 376 "data/emeralbody_rivals/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 377 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 378 "data/emeralbody_rivals/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 379 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_1, 5
	goto_if_eq Redd_Battle04_6
# 390 "data/emeralbody_rivals/rival_battles.pory"
	faceplayer
Redd_Battle04_5:
# 392 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle04_ReddText_PreBattle, MSGBOX_DEFAULT
# 393 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalMusic
# 394 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 395 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_REDD_4, Battle04_ReddText_BattleVictory
# 396 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 397 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle04_ReddText_PostBattle1, MSGBOX_DEFAULT
# 398 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_0x8004, 1
# 399 "data/emeralbody_rivals/rival_battles.pory"
	specialvar VAR_RESULT, ScriptGetPokedexInfo
# 400 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_0x8006, 75
	goto_if_ge Redd_Battle04_10
# 404 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle04_ReddText_PostBattle2a, MSGBOX_DEFAULT
Redd_Battle04_9:
# 406 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle04_ReddText_PostBattle3, MSGBOX_DEFAULT
# 407 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 408 "data/emeralbody_rivals/rival_battles.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 409 "data/emeralbody_rivals/rival_battles.pory"
	removeobject 10
# 410 "data/emeralbody_rivals/rival_battles.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 411 "data/emeralbody_rivals/rival_battles.pory"
	fadedefaultbgm
# 412 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 3
# 413 "data/emeralbody_rivals/rival_battles.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 414 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_TEMP_1
# 415 "data/emeralbody_rivals/rival_battles.pory"
	release
	return

Redd_Battle04_2:
# 373 "data/emeralbody_rivals/rival_battles.pory"
	goto_if_set FLAG_BADGE07_GET, Redd_Battle04_1
	return

Redd_Battle04_6:
# 380 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 10, Common_Movement_ExclamationMark
# 381 "data/emeralbody_rivals/rival_battles.pory"
	playse SE_PIN
# 382 "data/emeralbody_rivals/rival_battles.pory"
	delay 60
# 383 "data/emeralbody_rivals/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceRight
# 384 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_0, 13
	goto_if_eq Redd_Battle04_14
Redd_Battle04_13:
# 387 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Redd_Battle04_5

Redd_Battle04_10:
# 401 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle04_ReddText_PostBattle2b
	goto Redd_Battle04_9

Redd_Battle04_14:
# 385 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 10, Common_Movement_WalkLeft
	goto Redd_Battle04_13


Baron_Battle02::
# 427 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL_BATTLE_STATE, 0
	goto_if_eq Baron_Battle02_4
Baron_Battle02_3:
# 428 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL_BATTLE_STATE, 7
	goto_if_eq Baron_Battle02_7
Baron_Battle02_1:
# 461 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_TEMP_6
	return

Baron_Battle02_2:
# 429 "data/emeralbody_rivals/rival_battles.pory"
	lock
# 430 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_TEMP_A, 0
# 431 "data/emeralbody_rivals/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 432 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 433 "data/emeralbody_rivals/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 434 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_1, 9
	goto_if_eq Baron_Battle02_11
# 443 "data/emeralbody_rivals/rival_battles.pory"
	faceplayer
Baron_Battle02_10:
# 445 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle02_BaronText_PreBattle, MSGBOX_DEFAULT
# 446 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalMusic
# 447 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 448 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_BARON_2, Battle02_BaronText_BattleVictory
# 449 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 450 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle02_BaronText_PostBattle, MSGBOX_DEFAULT
# 451 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 452 "data/emeralbody_rivals/rival_battles.pory"
	fadedefaultbgm
# 453 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 8
# 454 "data/emeralbody_rivals/rival_battles.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 455 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_TEMP_2
# 456 "data/emeralbody_rivals/rival_battles.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 457 "data/emeralbody_rivals/rival_battles.pory"
	removeobject 7
# 458 "data/emeralbody_rivals/rival_battles.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 459 "data/emeralbody_rivals/rival_battles.pory"
	release
	goto Baron_Battle02_1

Baron_Battle02_4:
# 427 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 0
	goto_if_eq Baron_Battle02_2
	goto Baron_Battle02_3

Baron_Battle02_7:
# 428 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 5
	goto_if_eq Baron_Battle02_2
	goto Baron_Battle02_1

Baron_Battle02_11:
# 435 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 7, Common_Movement_WalkInPlaceUp
# 436 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 437 "data/emeralbody_rivals/rival_battles.pory"
	delay 50
# 438 "data/emeralbody_rivals/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceDown
# 439 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 7, Common_Movement_WalkUp
# 440 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Baron_Battle02_10


Baron_Battle03::
# 465 "data/emeralbody_rivals/rival_battles.pory"
	goto_if_set FLAG_BADGE05_GET, Baron_Battle03_3
Baron_Battle03_1:
# 506 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_TEMP_6
	return

Baron_Battle03_2:
# 468 "data/emeralbody_rivals/rival_battles.pory"
	lock
# 469 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_TEMP_A, 0
# 470 "data/emeralbody_rivals/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 471 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 472 "data/emeralbody_rivals/rival_battles.pory"
	addobject 14
# 473 "data/emeralbody_rivals/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 474 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_1, 8
	goto_if_eq Baron_Battle03_13
# 477 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_1, 9
	goto_if_eq Baron_Battle03_14
# 480 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_1, 10
	goto_if_eq Baron_Battle03_15
# 483 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_1, 11
	goto_if_eq Baron_Battle03_16
Baron_Battle03_12:
# 488 "data/emeralbody_rivals/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceLeft
# 489 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 14, Common_Movement_WalkRight7
# 490 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 491 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle03_BaronText_PreBattle, MSGBOX_DEFAULT
# 492 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalMusic
# 493 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 494 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_BARON_3, Battle03_BaronText_BattleVictory
# 495 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 496 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle03_BaronText_PostBattle, MSGBOX_DEFAULT
# 497 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 498 "data/emeralbody_rivals/rival_battles.pory"
	fadedefaultbgm
# 499 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 13
# 500 "data/emeralbody_rivals/rival_battles.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 501 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 14, Common_Movement_WalkLeft7
# 502 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 503 "data/emeralbody_rivals/rival_battles.pory"
	removeobject 14
# 504 "data/emeralbody_rivals/rival_battles.pory"
	release
	goto Baron_Battle03_1

Baron_Battle03_3:
# 466 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL_BATTLE_STATE, 8
	goto_if_eq Baron_Battle03_6
Baron_Battle03_5:
# 467 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL_BATTLE_STATE, 12
	goto_if_eq Baron_Battle03_9
	goto Baron_Battle03_1

Baron_Battle03_6:
# 466 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 0
	goto_if_eq Baron_Battle03_2
	goto Baron_Battle03_5

Baron_Battle03_9:
# 467 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 5
	goto_if_eq Baron_Battle03_2
	goto Baron_Battle03_1

Baron_Battle03_13:
# 475 "data/emeralbody_rivals/rival_battles.pory"
	setobjectxy 14, 30, 8
	goto Baron_Battle03_12

Baron_Battle03_14:
# 478 "data/emeralbody_rivals/rival_battles.pory"
	setobjectxy 14, 30, 9
	goto Baron_Battle03_12

Baron_Battle03_15:
# 481 "data/emeralbody_rivals/rival_battles.pory"
	setobjectxy 14, 30, 10
	goto Baron_Battle03_12

Baron_Battle03_16:
# 484 "data/emeralbody_rivals/rival_battles.pory"
	setobjectxy 14, 30, 10
# 485 "data/emeralbody_rivals/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
# 486 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Baron_Battle03_12


Baron_Battle04::
# 510 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 0
	goto_if_eq Baron_Battle04_2
	return

Baron_Battle04_1:
# 511 "data/emeralbody_rivals/rival_battles.pory"
	lock
# 512 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_TEMP_A, 0
# 513 "data/emeralbody_rivals/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 514 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 515 "data/emeralbody_rivals/rival_battles.pory"
	addobject 27
# 516 "data/emeralbody_rivals/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 517 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_0, 55
	goto_if_eq Baron_Battle04_6
# 522 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 27, Common_Movement_WalkLeft8
# 523 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
Baron_Battle04_5:
# 525 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 27, Common_Movement_WalkInPlaceUp
# 526 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 527 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle04_BaronText_PreBattle, MSGBOX_DEFAULT
# 528 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalMusic
# 529 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 530 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_BARON_4, Battle04_BaronText_BattleVictory
# 531 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 532 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle04_BaronText_PostBattle, MSGBOX_DEFAULT
# 533 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 534 "data/emeralbody_rivals/rival_battles.pory"
	fadedefaultbgm
# 535 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 3
# 536 "data/emeralbody_rivals/rival_battles.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 537 "data/emeralbody_rivals/rival_battles.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 538 "data/emeralbody_rivals/rival_battles.pory"
	removeobject 27
# 539 "data/emeralbody_rivals/rival_battles.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 540 "data/emeralbody_rivals/rival_battles.pory"
	release
	return

Baron_Battle04_2:
# 510 "data/emeralbody_rivals/rival_battles.pory"
	goto_if_set FLAG_MET_TEAM_AQUA_HARBOR, Baron_Battle04_1
	return

Baron_Battle04_6:
# 518 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 27, Common_Movement_WalkLeft9
# 519 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Baron_Battle04_5


Jakson_Battle02::
# 553 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL_BATTLE_STATE, 0
	goto_if_eq Jakson_Battle02_4
Jakson_Battle02_3:
# 554 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL_BATTLE_STATE, 9
	goto_if_eq Jakson_Battle02_7
Jakson_Battle02_1:
# 600 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_TEMP_6
	return

Jakson_Battle02_2:
# 555 "data/emeralbody_rivals/rival_battles.pory"
	lock
# 556 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_TEMP_A, 2
# 557 "data/emeralbody_rivals/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 558 "data/emeralbody_rivals/rival_battles.pory"
	delay 30
# 559 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 560 "data/emeralbody_rivals/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 561 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_0, 5
	goto_if_eq Jakson_Battle02_11
Jakson_Battle02_10:
# 583 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle02_JaksonText_PreBattle, MSGBOX_DEFAULT
# 584 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalMusic
# 585 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 586 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_JAKSON_2, Battle02_JaksonText_BattleVictory
# 587 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 588 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle02_JaksonText_PostBattle, MSGBOX_DEFAULT
# 589 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 590 "data/emeralbody_rivals/rival_battles.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 591 "data/emeralbody_rivals/rival_battles.pory"
	removeobject 7
# 592 "data/emeralbody_rivals/rival_battles.pory"
	removeobject 6
# 593 "data/emeralbody_rivals/rival_battles.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 594 "data/emeralbody_rivals/rival_battles.pory"
	fadedefaultbgm
# 595 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 10
# 596 "data/emeralbody_rivals/rival_battles.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 597 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_TEMP_2
# 598 "data/emeralbody_rivals/rival_battles.pory"
	release
	goto Jakson_Battle02_1

Jakson_Battle02_4:
# 553 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 2
	goto_if_eq Jakson_Battle02_2
	goto Jakson_Battle02_3

Jakson_Battle02_7:
# 554 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 5
	goto_if_eq Jakson_Battle02_2
	goto Jakson_Battle02_1

Jakson_Battle02_11:
# 562 "data/emeralbody_rivals/rival_battles.pory"
	switch VAR_TEMP_1
# 563 "data/emeralbody_rivals/rival_battles.pory"
	case 9, Jakson_Battle02_15
# 566 "data/emeralbody_rivals/rival_battles.pory"
	case 11, Jakson_Battle02_16
# 569 "data/emeralbody_rivals/rival_battles.pory"
	case 12, Jakson_Battle02_17
# 572 "data/emeralbody_rivals/rival_battles.pory"
	case 13, Jakson_Battle02_18
# 575 "data/emeralbody_rivals/rival_battles.pory"
	case 14, Jakson_Battle02_19
Jakson_Battle02_13:
# 580 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 7, Common_Movement_WalkRight2
# 581 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Jakson_Battle02_10

Jakson_Battle02_15:
# 564 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 7, Common_Movement_WalkUp
# 565 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Jakson_Battle02_13

Jakson_Battle02_16:
# 567 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 7, Common_Movement_WalkDown
# 568 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Jakson_Battle02_13

Jakson_Battle02_17:
# 570 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 7, Common_Movement_WalkDown2
# 571 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Jakson_Battle02_13

Jakson_Battle02_18:
# 573 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 7, Common_Movement_WalkDown3
# 574 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Jakson_Battle02_13

Jakson_Battle02_19:
# 576 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 7, Common_Movement_WalkDown4
# 577 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Jakson_Battle02_13


Jakson_Battle02_Block::
# 604 "data/emeralbody_rivals/rival_battles.pory"
	lock
# 605 "data/emeralbody_rivals/rival_battles.pory"
	faceplayer
# 606 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Jakson_Battle02_Block_Text_0
# 607 "data/emeralbody_rivals/rival_battles.pory"
	playmoncry SPECIES_MURKROW, CRY_MODE_NORMAL
# 608 "data/emeralbody_rivals/rival_battles.pory"
	waitmoncry
# 609 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 610 "data/emeralbody_rivals/rival_battles.pory"
	release
	return


Jakson_Battle03::
# 614 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL_BATTLE_STATE, 10
	goto_if_eq Jakson_Battle03_4
Jakson_Battle03_3:
# 615 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL_BATTLE_STATE, 13
	goto_if_eq Jakson_Battle03_7
Jakson_Battle03_1:
# 651 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_TEMP_6
	return

Jakson_Battle03_2:
# 616 "data/emeralbody_rivals/rival_battles.pory"
	lock
# 617 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_TEMP_A, 2
# 618 "data/emeralbody_rivals/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 619 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 620 "data/emeralbody_rivals/rival_battles.pory"
	addobject 48
# 621 "data/emeralbody_rivals/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 622 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_0, 31
	goto_if_eq Jakson_Battle03_11
Jakson_Battle03_10:
# 625 "data/emeralbody_rivals/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceDown
# 626 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 48, Common_Movement_WalkUp5
# 627 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 628 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle03_JaksonText_PreBattle, MSGBOX_DEFAULT
# 629 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalMusic
# 630 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 631 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_JAKSON_3, Battle03_JaksonText_BattleVictory
# 632 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 633 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle03_JaksonText_PostBattle, MSGBOX_DEFAULT
# 634 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 635 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 2
# 636 "data/emeralbody_rivals/rival_battles.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 637 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_0, 31
	goto_if_eq Jakson_Battle03_14
# 642 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 48, Common_Movement_WalkRight
# 643 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
Jakson_Battle03_13:
# 645 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 48, Common_Movement_WalkUp7
# 646 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 647 "data/emeralbody_rivals/rival_battles.pory"
	removeobject 48
# 648 "data/emeralbody_rivals/rival_battles.pory"
	fadedefaultbgm
# 649 "data/emeralbody_rivals/rival_battles.pory"
	release
	goto Jakson_Battle03_1

Jakson_Battle03_4:
# 614 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 2
	goto_if_eq Jakson_Battle03_2
	goto Jakson_Battle03_3

Jakson_Battle03_7:
# 615 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 5
	goto_if_eq Jakson_Battle03_2
	goto Jakson_Battle03_1

Jakson_Battle03_11:
# 623 "data/emeralbody_rivals/rival_battles.pory"
	setobjectxy 48, 31, 103
	goto Jakson_Battle03_10

Jakson_Battle03_14:
# 638 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 48, Common_Movement_WalkLeft
# 639 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Jakson_Battle03_13


Jakson_Battle04::
# 655 "data/emeralbody_rivals/rival_battles.pory"
	lock
# 656 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_TEMP_A, 2
# 657 "data/emeralbody_rivals/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 658 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 659 "data/emeralbody_rivals/rival_battles.pory"
	delay 30
# 660 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 4, Common_Movement_WalkDown2
# 661 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 662 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle04_JaksonText_PreBattle, MSGBOX_DEFAULT
# 663 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalMusic
# 664 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 665 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_JAKSON_4, Battle04_JaksonText_BattleVictory
# 666 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 667 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle04_JaksonText_PostBattle, MSGBOX_DEFAULT
# 668 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 669 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 3
# 670 "data/emeralbody_rivals/rival_battles.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 671 "data/emeralbody_rivals/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight
# 672 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 673 "data/emeralbody_rivals/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceLeft
# 674 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 4, Common_Movement_WalkDown
# 675 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 676 "data/emeralbody_rivals/rival_battles.pory"
	delay 10
# 677 "data/emeralbody_rivals/rival_battles.pory"
	removeobject 4
# 678 "data/emeralbody_rivals/rival_battles.pory"
	playse SE_EXIT
# 679 "data/emeralbody_rivals/rival_battles.pory"
	waitse
# 680 "data/emeralbody_rivals/rival_battles.pory"
	release
	return


Rival_Battle05::
# 693 "data/emeralbody_rivals/rival_battles.pory"
	lock
# 694 "data/emeralbody_rivals/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 695 "data/emeralbody_rivals/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 696 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 697 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalMusic
# 698 "data/emeralbody_rivals/rival_battles.pory"
	hidefollower
# 699 "data/emeralbody_rivals/rival_battles.pory"
	delay 10
# 700 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 701 "data/emeralbody_rivals/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceDown
# 702 "data/emeralbody_rivals/rival_battles.pory"
	switch VAR_EMERALBODY_RIVAL
# 703 "data/emeralbody_rivals/rival_battles.pory"
	case 1, Rival_Battle05_3
# 705 "data/emeralbody_rivals/rival_battles.pory"
	case 2, Rival_Battle05_4
# 707 "data/emeralbody_rivals/rival_battles.pory"
	case 3, Rival_Battle05_5
# 709 "data/emeralbody_rivals/rival_battles.pory"
	case 4, Rival_Battle05_6
# 712 "data/emeralbody_rivals/rival_battles.pory"
	call Baron_Battle05
Rival_Battle05_1:
# 714 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 4
# 715 "data/emeralbody_rivals/rival_battles.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 716 "data/emeralbody_rivals/rival_battles.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 717 "data/emeralbody_rivals/rival_battles.pory"
	warpsilent MAP_EVER_GRANDE_CITY_POKEMON_LEAGUE_1F, 9, 4
# 718 "data/emeralbody_rivals/rival_battles.pory"
	release
	return

Rival_Battle05_3:
# 704 "data/emeralbody_rivals/rival_battles.pory"
	call Harper_Battle05
	goto Rival_Battle05_1

Rival_Battle05_4:
# 706 "data/emeralbody_rivals/rival_battles.pory"
	call Jakson_Battle05
	goto Rival_Battle05_1

Rival_Battle05_5:
# 708 "data/emeralbody_rivals/rival_battles.pory"
	call Redd_Battle05
	goto Rival_Battle05_1

Rival_Battle05_6:
# 710 "data/emeralbody_rivals/rival_battles.pory"
	call Sakura_Battle05
	goto Rival_Battle05_1


Jakson_Battle05::
# 722 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_0, 9
	goto_if_eq Jakson_Battle05_2
# 726 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 8, Common_Movement_WalkRight6
Jakson_Battle05_1:
# 728 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 729 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 8, Common_Movement_WalkUp
# 730 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 731 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_JaksonText_PreBattle, MSGBOX_DEFAULT
# 732 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 733 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 8, Common_Movement_WalkInPlaceLeft
# 734 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 735 "data/emeralbody_rivals/rival_battles.pory"
	delay 60
# 736 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 8, Common_Movement_WalkInPlaceUp
# 737 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 738 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 739 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_JaksonText_PreBattle2, MSGBOX_DEFAULT
# 740 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_JAKSON_5, Battle05_JaksonText_BattleVictory
# 741 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 742 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_JaksonText_PostBattle, MSGBOX_DEFAULT
# 743 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 744 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 8, Common_Movement_WalkDown
# 745 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 746 "data/emeralbody_rivals/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 747 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_0, 9
	goto_if_eq Jakson_Battle05_6
# 751 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 8, Common_Movement_WalkLeft6
Jakson_Battle05_5:
# 753 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 754 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 8, Common_Movement_WalkInPlaceUp
# 755 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	return

Jakson_Battle05_2:
# 723 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 8, Common_Movement_WalkRight5
	goto Jakson_Battle05_1

Jakson_Battle05_6:
# 748 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 8, Common_Movement_WalkLeft5
	goto Jakson_Battle05_5


Harper_Battle05::
# 759 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_0, 9
	goto_if_eq Harper_Battle05_2
# 763 "data/emeralbody_rivals/rival_battles.pory"
	setobjectxy 9, 10, 8
Harper_Battle05_1:
# 765 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 9, Common_Movement_WalkUp5
# 766 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 767 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_HarperText_PreBattle, MSGBOX_DEFAULT
# 768 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_HARPER_5, Battle05_HarperText_BattleVictory
# 769 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 9, Common_Movement_WalkInPlaceLeft
# 770 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 771 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 772 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_HarperText_PostBattle, MSGBOX_DEFAULT
# 773 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 774 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 9, Common_Movement_WalkInPlaceUp
# 775 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 776 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_HarperText_PostBattle2, MSGBOX_DEFAULT
# 777 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 778 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 9, Common_Movement_WalkDown5
# 779 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	return

Harper_Battle05_2:
# 760 "data/emeralbody_rivals/rival_battles.pory"
	setobjectxy 9, 9, 8
	goto Harper_Battle05_1


Redd_Battle05::
# 783 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_0, 9
	goto_if_eq Redd_Battle05_2
# 787 "data/emeralbody_rivals/rival_battles.pory"
	setobjectxy 10, 10, 8
Redd_Battle05_1:
# 789 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 10, Common_Movement_WalkUp5
# 790 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 791 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_ReddText_PreBattle, MSGBOX_DEFAULT
# 792 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_0x8004, 1
# 793 "data/emeralbody_rivals/rival_battles.pory"
	specialvar VAR_RESULT, ScriptGetPokedexInfo
# 794 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_0x8006, 100
	goto_if_ge Redd_Battle05_6
# 798 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_ReddText_PreBattle2a, MSGBOX_DEFAULT
Redd_Battle05_5:
# 800 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_ReddText_PreBattle3, MSGBOX_DEFAULT
# 801 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_REDD_5, Battle05_ReddText_BattleVictory
# 802 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 803 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_ReddText_PostBattle, MSGBOX_DEFAULT
# 804 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 805 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 10, Common_Movement_WalkInPlaceLeft
# 806 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 807 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 808 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_ReddText_PostBattle2, MSGBOX_DEFAULT
# 809 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 810 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 10, Common_Movement_WalkInPlaceUp
# 811 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 812 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 813 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_ReddText_PostBattle3, MSGBOX_DEFAULT
# 814 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 815 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 10, Common_Movement_WalkDown5
# 816 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	return

Redd_Battle05_2:
# 784 "data/emeralbody_rivals/rival_battles.pory"
	setobjectxy 10, 9, 8
	goto Redd_Battle05_1

Redd_Battle05_6:
# 795 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_ReddText_PreBattle2b, MSGBOX_DEFAULT
	goto Redd_Battle05_5


Sakura_Battle05::
# 820 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_0, 9
	goto_if_eq Sakura_Battle05_2
# 824 "data/emeralbody_rivals/rival_battles.pory"
	setobjectxy 11, 10, 3
Sakura_Battle05_1:
# 826 "data/emeralbody_rivals/rival_battles.pory"
	setfieldeffectargument 0, 1
# 827 "data/emeralbody_rivals/rival_battles.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 828 "data/emeralbody_rivals/rival_battles.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 829 "data/emeralbody_rivals/rival_battles.pory"
	addobject 11
# 830 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 11, Common_Movement_FaceUp
# 831 "data/emeralbody_rivals/rival_battles.pory"
	delay 30
# 832 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_SakuraText_PreBattle, MSGBOX_DEFAULT
# 833 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_SAKURA_5, Battle05_SakuraText_BattleVictory
# 834 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 835 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_SakuraText_PostBattle, MSGBOX_DEFAULT
# 836 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 837 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 11, Common_Movement_WalkDown5
# 838 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	return

Sakura_Battle05_2:
# 821 "data/emeralbody_rivals/rival_battles.pory"
	setobjectxy 11, 9, 3
	goto Sakura_Battle05_1


Baron_Battle05::
# 842 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_0, 9
	goto_if_eq Baron_Battle05_2
# 846 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 12, Common_Movement_WalkLeft5
Baron_Battle05_1:
# 848 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 849 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 12, Common_Movement_WalkUp
# 850 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 851 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_BaronText_PreBattle, MSGBOX_DEFAULT
# 852 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 853 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 12, Common_Movement_WalkInPlaceLeft
# 854 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 855 "data/emeralbody_rivals/rival_battles.pory"
	delay 20
# 856 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 12, Common_Movement_WalkInPlaceDown
# 857 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 858 "data/emeralbody_rivals/rival_battles.pory"
	delay 40
# 859 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 12, Common_Movement_WalkInPlaceUp
# 860 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 861 "data/emeralbody_rivals/rival_battles.pory"
	delay 20
# 862 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 863 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_BaronText_PreBattle2, MSGBOX_DEFAULT
# 864 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_BARON_5, Battle05_BaronText_BattleVictory
# 865 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 866 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_BaronText_PostBattle, MSGBOX_DEFAULT
# 867 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 868 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 12, Common_Movement_WalkInPlaceDown
# 869 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 870 "data/emeralbody_rivals/rival_battles.pory"
	delay 40
# 871 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 12, Common_Movement_WalkInPlaceUp
# 872 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 873 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 874 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_BaronText_PostBattle2, MSGBOX_DEFAULT
# 875 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 876 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 12, Common_Movement_WalkDown
# 877 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 878 "data/emeralbody_rivals/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 879 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_0, 9
	goto_if_eq Baron_Battle05_6
# 883 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 12, Common_Movement_WalkRight5
Baron_Battle05_5:
# 885 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 886 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 12, Common_Movement_WalkInPlaceUp
# 887 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	return

Baron_Battle05_2:
# 843 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 12, Common_Movement_WalkLeft6
	goto Baron_Battle05_1

Baron_Battle05_6:
# 880 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 12, Common_Movement_WalkRight6
	goto Baron_Battle05_5


Jakson_Battle02_Block_Text_0:
# 606 "data/emeralbody_rivals/rival_battles.pory"
	.string "The Murkrow sees you trying to sneak\naround and actively blocks your\lefforts.$"
