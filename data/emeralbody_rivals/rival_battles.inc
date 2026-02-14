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
	compare VAR_EMERALBODY_RIVAL_BATTLE_STATE, 12
	goto_if_eq Harper_Battle04_4
Harper_Battle04_3:
# 113 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL_BATTLE_STATE, 16
	goto_if_eq Harper_Battle04_7
Harper_Battle04_1:
# 139 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_TEMP_6
	return

Harper_Battle04_2:
# 114 "data/emeralbody_rivals/rival_battles.pory"
	lock
# 115 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_TEMP_A, 1
# 116 "data/emeralbody_rivals/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 117 "data/emeralbody_rivals/rival_battles.pory"
	addobject 20
# 118 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 20, Common_Movement_WalkUp6
# 119 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 120 "data/emeralbody_rivals/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceLeft
# 121 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 20, Common_Movement_WalkRight4
# 122 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 123 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 124 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle04_HarperText_PreBattle, MSGBOX_DEFAULT
# 125 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalMusic
# 126 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 127 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_HARPER_4, Battle04_HarperText_BattleVictory
# 128 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 129 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle04_HarperText_PostBattle, MSGBOX_DEFAULT
# 130 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 131 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 20, Common_Movement_WalkLeft7
# 132 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 133 "data/emeralbody_rivals/rival_battles.pory"
	removeobject 20
# 134 "data/emeralbody_rivals/rival_battles.pory"
	fadedefaultbgm
# 135 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 17
# 136 "data/emeralbody_rivals/rival_battles.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 137 "data/emeralbody_rivals/rival_battles.pory"
	release
	goto Harper_Battle04_1

Harper_Battle04_4:
# 112 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 1
	goto_if_eq Harper_Battle04_2
	goto Harper_Battle04_3

Harper_Battle04_7:
# 113 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 5
	goto_if_eq Harper_Battle04_2
	goto Harper_Battle04_1


Sakura_Battle02::
# 150 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL_BATTLE_STATE, 0
	goto_if_eq Sakura_Battle02_4
Sakura_Battle02_3:
# 151 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL_BATTLE_STATE, 6
	goto_if_eq Sakura_Battle02_7
Sakura_Battle02_1:
# 185 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_TEMP_6
	return

Sakura_Battle02_2:
# 152 "data/emeralbody_rivals/rival_battles.pory"
	lock
# 153 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_TEMP_A, 4
# 154 "data/emeralbody_rivals/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 155 "data/emeralbody_rivals/rival_battles.pory"
	addobject 3
# 156 "data/emeralbody_rivals/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceDown
# 157 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 158 "data/emeralbody_rivals/rival_battles.pory"
	playse SE_PIN
# 159 "data/emeralbody_rivals/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 160 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 161 "data/emeralbody_rivals/rival_battles.pory"
	delay 60
# 162 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 3, Common_Movement_WalkUp4
# 163 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 164 "data/emeralbody_rivals/rival_battles.pory"
	playse SE_LEDGE
# 165 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 3, Common_Movement_JumpUp
# 166 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 167 "data/emeralbody_rivals/rival_battles.pory"
	playse SE_M_CUT
# 168 "data/emeralbody_rivals/rival_battles.pory"
	waitse
# 169 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 170 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle02_SakuraText_PreBattle, MSGBOX_DEFAULT
# 171 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalMusic
# 172 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 173 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_SAKURA_2, Battle02_SakuraText_BattleVictory
# 174 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 175 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle02_SakuraText_PostBattle, MSGBOX_DEFAULT
# 176 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 177 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 3, Common_Movement_WalkDown5
# 178 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 179 "data/emeralbody_rivals/rival_battles.pory"
	removeobject 3
# 180 "data/emeralbody_rivals/rival_battles.pory"
	fadedefaultbgm
# 181 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 7
# 182 "data/emeralbody_rivals/rival_battles.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 183 "data/emeralbody_rivals/rival_battles.pory"
	release
	goto Sakura_Battle02_1

Sakura_Battle02_4:
# 150 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 4
	goto_if_eq Sakura_Battle02_2
	goto Sakura_Battle02_3

Sakura_Battle02_7:
# 151 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 5
	goto_if_eq Sakura_Battle02_2
	goto Sakura_Battle02_1


Sakura_Battle03::
# 189 "data/emeralbody_rivals/rival_battles.pory"
	lock
# 190 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_TEMP_A, 4
# 191 "data/emeralbody_rivals/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 192 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 193 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle03_SakuraText_PreBattle, MSGBOX_DEFAULT
# 194 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalMusic
# 195 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 196 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_SAKURA_3, Battle03_SakuraText_BattleVictory
# 197 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 198 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle03_SakuraText_PostBattle, MSGBOX_DEFAULT
# 199 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 200 "data/emeralbody_rivals/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 201 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_1, 12
	goto_if_eq Sakura_Battle03_2
Sakura_Battle03_1:
# 205 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 8, Common_Movement_WalkDown
# 206 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 207 "data/emeralbody_rivals/rival_battles.pory"
	playse SE_LEDGE
# 208 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 8, Common_Movement_JumpDown2
# 209 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 210 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 8, Common_Movement_WalkDown4
# 211 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 212 "data/emeralbody_rivals/rival_battles.pory"
	removeobject 8
# 213 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_TEMP_2
# 214 "data/emeralbody_rivals/rival_battles.pory"
	fadedefaultbgm
# 215 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 11
# 216 "data/emeralbody_rivals/rival_battles.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 217 "data/emeralbody_rivals/rival_battles.pory"
	delay 30
# 218 "data/emeralbody_rivals/rival_battles.pory"
	playse SE_EFFECTIVE
# 219 "data/emeralbody_rivals/rival_battles.pory"
	setmetatile 13, 11, 0x208, FALSE
# 220 "data/emeralbody_rivals/rival_battles.pory"
	special DrawWholeMapView
# 221 "data/emeralbody_rivals/rival_battles.pory"
	delay 30
# 222 "data/emeralbody_rivals/rival_battles.pory"
	release
	return

Sakura_Battle03_2:
# 202 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 8, Common_Movement_WalkRight
# 203 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Sakura_Battle03_1


Sakura_Battle04::
# 226 "data/emeralbody_rivals/rival_battles.pory"
	lock
# 227 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_TEMP_A, 4
# 228 "data/emeralbody_rivals/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 229 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 230 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle04_SakuraText_PreBattle, MSGBOX_DEFAULT
# 231 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalMusic
# 232 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 233 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_SAKURA_4, Battle04_SakuraText_BattleVictory
# 234 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 235 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle04_SakuraText_PostBattle, MSGBOX_DEFAULT
# 236 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 237 "data/emeralbody_rivals/rival_battles.pory"
	setfieldeffectargument 0, 1
# 238 "data/emeralbody_rivals/rival_battles.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 239 "data/emeralbody_rivals/rival_battles.pory"
	delay 15
# 240 "data/emeralbody_rivals/rival_battles.pory"
	removeobject 1
# 241 "data/emeralbody_rivals/rival_battles.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 242 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_TEMP_1
# 243 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 3
# 244 "data/emeralbody_rivals/rival_battles.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 245 "data/emeralbody_rivals/rival_battles.pory"
	release
	return


Redd_Battle02::
# 256 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL_BATTLE_STATE, 0
	goto_if_eq Redd_Battle02_4
Redd_Battle02_3:
# 257 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL_BATTLE_STATE, 8
	goto_if_eq Redd_Battle02_7
Redd_Battle02_1:
# 311 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_TEMP_6
	return

Redd_Battle02_2:
# 258 "data/emeralbody_rivals/rival_battles.pory"
	lock
# 259 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_TEMP_A, 3
# 260 "data/emeralbody_rivals/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 261 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 262 "data/emeralbody_rivals/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 263 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_1, 58
	goto_if_eq Redd_Battle02_11
# 278 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 40, Common_Movement_FaceUp
# 279 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 280 "data/emeralbody_rivals/rival_battles.pory"
	playse SE_PIN
# 281 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 40, Common_Movement_ExclamationMark
# 282 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 283 "data/emeralbody_rivals/rival_battles.pory"
	delay 60
# 284 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_1, 52
	goto_if_eq Redd_Battle02_19
# 289 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 40, Common_Movement_WalkUp2
# 290 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
Redd_Battle02_18:
# 292 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 40, Common_Movement_WalkRight
# 293 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 294 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle02_ReddText_PreBattleAlt, MSGBOX_DEFAULT
Redd_Battle02_10:
# 296 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalMusic
# 297 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 298 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_REDD_2, Battle02_ReddText_BattleVictory
# 299 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 300 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle02_ReddText_PostBattle, MSGBOX_DEFAULT
# 301 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 302 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 40, Common_Movement_WalkUp6
# 303 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 304 "data/emeralbody_rivals/rival_battles.pory"
	removeobject 40
# 305 "data/emeralbody_rivals/rival_battles.pory"
	fadedefaultbgm
# 306 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 9
# 307 "data/emeralbody_rivals/rival_battles.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 308 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_TEMP_2
# 309 "data/emeralbody_rivals/rival_battles.pory"
	release
	goto Redd_Battle02_1

Redd_Battle02_4:
# 256 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 3
	goto_if_eq Redd_Battle02_2
	goto Redd_Battle02_3

Redd_Battle02_7:
# 257 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 5
	goto_if_eq Redd_Battle02_2
	goto Redd_Battle02_1

Redd_Battle02_11:
# 264 "data/emeralbody_rivals/rival_battles.pory"
	switch VAR_TEMP_0
# 265 "data/emeralbody_rivals/rival_battles.pory"
	case 17, Redd_Battle02_16
# 268 "data/emeralbody_rivals/rival_battles.pory"
	case 19, Redd_Battle02_17
Redd_Battle02_14:
# 273 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 40, Common_Movement_WalkDown2
# 274 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 275 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle02_ReddText_PreBattle, MSGBOX_DEFAULT
	goto Redd_Battle02_10

Redd_Battle02_16:
# 266 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 40, Common_Movement_WalkLeft
# 267 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Redd_Battle02_14

Redd_Battle02_17:
# 269 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 40, Common_Movement_WalkRight
# 270 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Redd_Battle02_14

Redd_Battle02_19:
# 285 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 40, Common_Movement_WalkUp3
# 286 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Redd_Battle02_18


Redd_Battle03::
# 315 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL_BATTLE_STATE, 9
	goto_if_eq Redd_Battle03_4
Redd_Battle03_3:
# 316 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL_BATTLE_STATE, 14
	goto_if_eq Redd_Battle03_7
Redd_Battle03_1:
# 373 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_TEMP_6
	return

Redd_Battle03_2:
# 317 "data/emeralbody_rivals/rival_battles.pory"
	lock
# 318 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_TEMP_A, 3
# 319 "data/emeralbody_rivals/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 320 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 321 "data/emeralbody_rivals/rival_battles.pory"
	addobject 5
# 322 "data/emeralbody_rivals/rival_battles.pory"
	playse SE_EXIT
# 323 "data/emeralbody_rivals/rival_battles.pory"
	waitse
# 324 "data/emeralbody_rivals/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 325 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_1, 7
	goto_if_eq Redd_Battle03_11
# 331 "data/emeralbody_rivals/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceRight
# 332 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 5, Common_Movement_WalkDown3
# 333 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
Redd_Battle03_10:
# 335 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 5, Common_Movement_WalkLeft3
# 336 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 337 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_1, 7
	goto_if_eq Redd_Battle03_15
# 343 "data/emeralbody_rivals/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceUp
# 344 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 5, Common_Movement_WalkInPlaceDown
# 345 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
Redd_Battle03_14:
# 347 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 348 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle03_ReddText_PreBattle, MSGBOX_DEFAULT
# 349 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalMusic
# 350 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 351 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_REDD_3, Battle03_ReddText_BattleVictory
# 352 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 353 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle03_ReddText_PostBattle, MSGBOX_DEFAULT
# 354 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 355 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 5, Common_Movement_WalkLeft4
# 356 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 357 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_1, 7
	goto_if_eq Redd_Battle03_19
# 362 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 5, Common_Movement_WalkDown
# 363 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
Redd_Battle03_18:
# 365 "data/emeralbody_rivals/rival_battles.pory"
	removeobject 5
# 366 "data/emeralbody_rivals/rival_battles.pory"
	playse SE_EXIT
# 367 "data/emeralbody_rivals/rival_battles.pory"
	waitse
# 368 "data/emeralbody_rivals/rival_battles.pory"
	fadedefaultbgm
# 369 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 15
# 370 "data/emeralbody_rivals/rival_battles.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 371 "data/emeralbody_rivals/rival_battles.pory"
	release
	goto Redd_Battle03_1

Redd_Battle03_4:
# 315 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 3
	goto_if_eq Redd_Battle03_2
	goto Redd_Battle03_3

Redd_Battle03_7:
# 316 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 5
	goto_if_eq Redd_Battle03_2
	goto Redd_Battle03_1

Redd_Battle03_11:
# 326 "data/emeralbody_rivals/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceRight
# 327 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 5, Common_Movement_WalkDown4
# 328 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Redd_Battle03_10

Redd_Battle03_15:
# 338 "data/emeralbody_rivals/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceDown
# 339 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 5, Common_Movement_WalkInPlaceUp
# 340 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Redd_Battle03_14

Redd_Battle03_19:
# 358 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 5, Common_Movement_WalkInPlaceDown
# 359 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Redd_Battle03_18


Redd_Battle04::
# 377 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 3
	goto_if_eq Redd_Battle04_2
	return

Redd_Battle04_1:
# 378 "data/emeralbody_rivals/rival_battles.pory"
	lock
# 379 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_TEMP_A, 3
# 380 "data/emeralbody_rivals/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 381 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 382 "data/emeralbody_rivals/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 383 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_1, 5
	goto_if_eq Redd_Battle04_6
# 394 "data/emeralbody_rivals/rival_battles.pory"
	faceplayer
Redd_Battle04_5:
# 396 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle04_ReddText_PreBattle, MSGBOX_DEFAULT
# 397 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalMusic
# 398 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 399 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_REDD_4, Battle04_ReddText_BattleVictory
# 400 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 401 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle04_ReddText_PostBattle1, MSGBOX_DEFAULT
# 402 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_0x8004, 1
# 403 "data/emeralbody_rivals/rival_battles.pory"
	specialvar VAR_RESULT, ScriptGetPokedexInfo
# 404 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_0x8006, 75
	goto_if_ge Redd_Battle04_10
# 408 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle04_ReddText_PostBattle2a, MSGBOX_DEFAULT
Redd_Battle04_9:
# 410 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle04_ReddText_PostBattle3, MSGBOX_DEFAULT
# 411 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 412 "data/emeralbody_rivals/rival_battles.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 413 "data/emeralbody_rivals/rival_battles.pory"
	removeobject 10
# 414 "data/emeralbody_rivals/rival_battles.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 415 "data/emeralbody_rivals/rival_battles.pory"
	fadedefaultbgm
# 416 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 3
# 417 "data/emeralbody_rivals/rival_battles.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 418 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_TEMP_1
# 419 "data/emeralbody_rivals/rival_battles.pory"
	release
	return

Redd_Battle04_2:
# 377 "data/emeralbody_rivals/rival_battles.pory"
	goto_if_set FLAG_BADGE07_GET, Redd_Battle04_1
	return

Redd_Battle04_6:
# 384 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 10, Common_Movement_ExclamationMark
# 385 "data/emeralbody_rivals/rival_battles.pory"
	playse SE_PIN
# 386 "data/emeralbody_rivals/rival_battles.pory"
	delay 60
# 387 "data/emeralbody_rivals/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceRight
# 388 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_0, 13
	goto_if_eq Redd_Battle04_14
Redd_Battle04_13:
# 391 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Redd_Battle04_5

Redd_Battle04_10:
# 405 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle04_ReddText_PostBattle2b
	goto Redd_Battle04_9

Redd_Battle04_14:
# 389 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 10, Common_Movement_WalkLeft
	goto Redd_Battle04_13


Baron_Battle02::
# 431 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL_BATTLE_STATE, 0
	goto_if_eq Baron_Battle02_4
Baron_Battle02_3:
# 432 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL_BATTLE_STATE, 7
	goto_if_eq Baron_Battle02_7
Baron_Battle02_1:
# 465 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_TEMP_6
	return

Baron_Battle02_2:
# 433 "data/emeralbody_rivals/rival_battles.pory"
	lock
# 434 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_TEMP_A, 0
# 435 "data/emeralbody_rivals/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 436 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 437 "data/emeralbody_rivals/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 438 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_1, 9
	goto_if_eq Baron_Battle02_11
# 447 "data/emeralbody_rivals/rival_battles.pory"
	faceplayer
Baron_Battle02_10:
# 449 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle02_BaronText_PreBattle, MSGBOX_DEFAULT
# 450 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalMusic
# 451 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 452 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_BARON_2, Battle02_BaronText_BattleVictory
# 453 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 454 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle02_BaronText_PostBattle, MSGBOX_DEFAULT
# 455 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 456 "data/emeralbody_rivals/rival_battles.pory"
	fadedefaultbgm
# 457 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 8
# 458 "data/emeralbody_rivals/rival_battles.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 459 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_TEMP_2
# 460 "data/emeralbody_rivals/rival_battles.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 461 "data/emeralbody_rivals/rival_battles.pory"
	removeobject 7
# 462 "data/emeralbody_rivals/rival_battles.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 463 "data/emeralbody_rivals/rival_battles.pory"
	release
	goto Baron_Battle02_1

Baron_Battle02_4:
# 431 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 0
	goto_if_eq Baron_Battle02_2
	goto Baron_Battle02_3

Baron_Battle02_7:
# 432 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 5
	goto_if_eq Baron_Battle02_2
	goto Baron_Battle02_1

Baron_Battle02_11:
# 439 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 7, Common_Movement_WalkInPlaceUp
# 440 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 441 "data/emeralbody_rivals/rival_battles.pory"
	delay 50
# 442 "data/emeralbody_rivals/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceDown
# 443 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 7, Common_Movement_WalkUp
# 444 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Baron_Battle02_10


Baron_Battle03::
# 469 "data/emeralbody_rivals/rival_battles.pory"
	goto_if_set FLAG_BADGE05_GET, Baron_Battle03_3
Baron_Battle03_1:
# 510 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_TEMP_6
	return

Baron_Battle03_2:
# 472 "data/emeralbody_rivals/rival_battles.pory"
	lock
# 473 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_TEMP_A, 0
# 474 "data/emeralbody_rivals/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 475 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 476 "data/emeralbody_rivals/rival_battles.pory"
	addobject 14
# 477 "data/emeralbody_rivals/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 478 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_1, 8
	goto_if_eq Baron_Battle03_13
# 481 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_1, 9
	goto_if_eq Baron_Battle03_14
# 484 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_1, 10
	goto_if_eq Baron_Battle03_15
# 487 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_1, 11
	goto_if_eq Baron_Battle03_16
Baron_Battle03_12:
# 492 "data/emeralbody_rivals/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceLeft
# 493 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 14, Common_Movement_WalkRight7
# 494 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 495 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle03_BaronText_PreBattle, MSGBOX_DEFAULT
# 496 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalMusic
# 497 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 498 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_BARON_3, Battle03_BaronText_BattleVictory
# 499 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 500 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle03_BaronText_PostBattle, MSGBOX_DEFAULT
# 501 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 502 "data/emeralbody_rivals/rival_battles.pory"
	fadedefaultbgm
# 503 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 13
# 504 "data/emeralbody_rivals/rival_battles.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 505 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 14, Common_Movement_WalkLeft7
# 506 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 507 "data/emeralbody_rivals/rival_battles.pory"
	removeobject 14
# 508 "data/emeralbody_rivals/rival_battles.pory"
	release
	goto Baron_Battle03_1

Baron_Battle03_3:
# 470 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL_BATTLE_STATE, 8
	goto_if_eq Baron_Battle03_6
Baron_Battle03_5:
# 471 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL_BATTLE_STATE, 12
	goto_if_eq Baron_Battle03_9
	goto Baron_Battle03_1

Baron_Battle03_6:
# 470 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 0
	goto_if_eq Baron_Battle03_2
	goto Baron_Battle03_5

Baron_Battle03_9:
# 471 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 5
	goto_if_eq Baron_Battle03_2
	goto Baron_Battle03_1

Baron_Battle03_13:
# 479 "data/emeralbody_rivals/rival_battles.pory"
	setobjectxy 14, 30, 8
	goto Baron_Battle03_12

Baron_Battle03_14:
# 482 "data/emeralbody_rivals/rival_battles.pory"
	setobjectxy 14, 30, 9
	goto Baron_Battle03_12

Baron_Battle03_15:
# 485 "data/emeralbody_rivals/rival_battles.pory"
	setobjectxy 14, 30, 10
	goto Baron_Battle03_12

Baron_Battle03_16:
# 488 "data/emeralbody_rivals/rival_battles.pory"
	setobjectxy 14, 30, 10
# 489 "data/emeralbody_rivals/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
# 490 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Baron_Battle03_12


Baron_Battle04::
# 514 "data/emeralbody_rivals/rival_battles.pory"
	goto_if_set FLAG_MET_TEAM_AQUA_HARBOR, Baron_Battle04_3
Baron_Battle04_1:
# 548 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_TEMP_6
	return

Baron_Battle04_2:
# 517 "data/emeralbody_rivals/rival_battles.pory"
	lock
# 518 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_TEMP_A, 0
# 519 "data/emeralbody_rivals/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 520 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 521 "data/emeralbody_rivals/rival_battles.pory"
	addobject 27
# 522 "data/emeralbody_rivals/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 523 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_0, 55
	goto_if_eq Baron_Battle04_13
# 528 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 27, Common_Movement_WalkLeft8
# 529 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
Baron_Battle04_12:
# 531 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 27, Common_Movement_WalkInPlaceUp
# 532 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 533 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle04_BaronText_PreBattle, MSGBOX_DEFAULT
# 534 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalMusic
# 535 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 536 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_BARON_4, Battle04_BaronText_BattleVictory
# 537 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 538 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle04_BaronText_PostBattle, MSGBOX_DEFAULT
# 539 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 540 "data/emeralbody_rivals/rival_battles.pory"
	fadedefaultbgm
# 541 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 16
# 542 "data/emeralbody_rivals/rival_battles.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 543 "data/emeralbody_rivals/rival_battles.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 544 "data/emeralbody_rivals/rival_battles.pory"
	removeobject 27
# 545 "data/emeralbody_rivals/rival_battles.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 546 "data/emeralbody_rivals/rival_battles.pory"
	release
	goto Baron_Battle04_1

Baron_Battle04_3:
# 515 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL_BATTLE_STATE, 13
	goto_if_eq Baron_Battle04_6
Baron_Battle04_5:
# 516 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL_BATTLE_STATE, 15
	goto_if_eq Baron_Battle04_9
	goto Baron_Battle04_1

Baron_Battle04_6:
# 515 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 0
	goto_if_eq Baron_Battle04_2
	goto Baron_Battle04_5

Baron_Battle04_9:
# 516 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 5
	goto_if_eq Baron_Battle04_2
	goto Baron_Battle04_1

Baron_Battle04_13:
# 524 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 27, Common_Movement_WalkLeft9
# 525 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Baron_Battle04_12


Jakson_Battle02::
# 560 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL_BATTLE_STATE, 0
	goto_if_eq Jakson_Battle02_4
Jakson_Battle02_3:
# 561 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL_BATTLE_STATE, 9
	goto_if_eq Jakson_Battle02_7
Jakson_Battle02_1:
# 607 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_TEMP_6
	return

Jakson_Battle02_2:
# 562 "data/emeralbody_rivals/rival_battles.pory"
	lock
# 563 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_TEMP_A, 2
# 564 "data/emeralbody_rivals/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 565 "data/emeralbody_rivals/rival_battles.pory"
	delay 30
# 566 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 567 "data/emeralbody_rivals/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 568 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_0, 5
	goto_if_eq Jakson_Battle02_11
Jakson_Battle02_10:
# 590 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle02_JaksonText_PreBattle, MSGBOX_DEFAULT
# 591 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalMusic
# 592 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 593 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_JAKSON_2, Battle02_JaksonText_BattleVictory
# 594 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 595 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle02_JaksonText_PostBattle, MSGBOX_DEFAULT
# 596 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 597 "data/emeralbody_rivals/rival_battles.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 598 "data/emeralbody_rivals/rival_battles.pory"
	removeobject 7
# 599 "data/emeralbody_rivals/rival_battles.pory"
	removeobject 6
# 600 "data/emeralbody_rivals/rival_battles.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 601 "data/emeralbody_rivals/rival_battles.pory"
	fadedefaultbgm
# 602 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 10
# 603 "data/emeralbody_rivals/rival_battles.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 604 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_TEMP_2
# 605 "data/emeralbody_rivals/rival_battles.pory"
	release
	goto Jakson_Battle02_1

Jakson_Battle02_4:
# 560 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 2
	goto_if_eq Jakson_Battle02_2
	goto Jakson_Battle02_3

Jakson_Battle02_7:
# 561 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 5
	goto_if_eq Jakson_Battle02_2
	goto Jakson_Battle02_1

Jakson_Battle02_11:
# 569 "data/emeralbody_rivals/rival_battles.pory"
	switch VAR_TEMP_1
# 570 "data/emeralbody_rivals/rival_battles.pory"
	case 9, Jakson_Battle02_15
# 573 "data/emeralbody_rivals/rival_battles.pory"
	case 11, Jakson_Battle02_16
# 576 "data/emeralbody_rivals/rival_battles.pory"
	case 12, Jakson_Battle02_17
# 579 "data/emeralbody_rivals/rival_battles.pory"
	case 13, Jakson_Battle02_18
# 582 "data/emeralbody_rivals/rival_battles.pory"
	case 14, Jakson_Battle02_19
Jakson_Battle02_13:
# 587 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 7, Common_Movement_WalkRight2
# 588 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Jakson_Battle02_10

Jakson_Battle02_15:
# 571 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 7, Common_Movement_WalkUp
# 572 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Jakson_Battle02_13

Jakson_Battle02_16:
# 574 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 7, Common_Movement_WalkDown
# 575 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Jakson_Battle02_13

Jakson_Battle02_17:
# 577 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 7, Common_Movement_WalkDown2
# 578 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Jakson_Battle02_13

Jakson_Battle02_18:
# 580 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 7, Common_Movement_WalkDown3
# 581 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Jakson_Battle02_13

Jakson_Battle02_19:
# 583 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 7, Common_Movement_WalkDown4
# 584 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Jakson_Battle02_13


Jakson_Battle02_Block::
# 611 "data/emeralbody_rivals/rival_battles.pory"
	lock
# 612 "data/emeralbody_rivals/rival_battles.pory"
	faceplayer
# 613 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Jakson_Battle02_Block_Text_0
# 614 "data/emeralbody_rivals/rival_battles.pory"
	playmoncry SPECIES_MURKROW, CRY_MODE_NORMAL
# 615 "data/emeralbody_rivals/rival_battles.pory"
	waitmoncry
# 616 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 617 "data/emeralbody_rivals/rival_battles.pory"
	release
	return


Jakson_Battle03::
# 621 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL_BATTLE_STATE, 10
	goto_if_eq Jakson_Battle03_4
Jakson_Battle03_3:
# 622 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL_BATTLE_STATE, 13
	goto_if_eq Jakson_Battle03_7
Jakson_Battle03_1:
# 658 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_TEMP_6
	return

Jakson_Battle03_2:
# 623 "data/emeralbody_rivals/rival_battles.pory"
	lock
# 624 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_TEMP_A, 2
# 625 "data/emeralbody_rivals/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 626 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 627 "data/emeralbody_rivals/rival_battles.pory"
	addobject 48
# 628 "data/emeralbody_rivals/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 629 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_0, 31
	goto_if_eq Jakson_Battle03_11
Jakson_Battle03_10:
# 632 "data/emeralbody_rivals/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceDown
# 633 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 48, Common_Movement_WalkUp5
# 634 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 635 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle03_JaksonText_PreBattle, MSGBOX_DEFAULT
# 636 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalMusic
# 637 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 638 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_JAKSON_3, Battle03_JaksonText_BattleVictory
# 639 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 640 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle03_JaksonText_PostBattle, MSGBOX_DEFAULT
# 641 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 642 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 14
# 643 "data/emeralbody_rivals/rival_battles.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 644 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_0, 31
	goto_if_eq Jakson_Battle03_14
# 649 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 48, Common_Movement_WalkRight
# 650 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
Jakson_Battle03_13:
# 652 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 48, Common_Movement_WalkUp7
# 653 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 654 "data/emeralbody_rivals/rival_battles.pory"
	removeobject 48
# 655 "data/emeralbody_rivals/rival_battles.pory"
	fadedefaultbgm
# 656 "data/emeralbody_rivals/rival_battles.pory"
	release
	goto Jakson_Battle03_1

Jakson_Battle03_4:
# 621 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 2
	goto_if_eq Jakson_Battle03_2
	goto Jakson_Battle03_3

Jakson_Battle03_7:
# 622 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 5
	goto_if_eq Jakson_Battle03_2
	goto Jakson_Battle03_1

Jakson_Battle03_11:
# 630 "data/emeralbody_rivals/rival_battles.pory"
	setobjectxy 48, 31, 103
	goto Jakson_Battle03_10

Jakson_Battle03_14:
# 645 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 48, Common_Movement_WalkLeft
# 646 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	goto Jakson_Battle03_13


Jakson_Battle04::
# 662 "data/emeralbody_rivals/rival_battles.pory"
	lock
# 663 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_TEMP_A, 2
# 664 "data/emeralbody_rivals/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 665 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 666 "data/emeralbody_rivals/rival_battles.pory"
	delay 30
# 667 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 4, Common_Movement_WalkDown2
# 668 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 669 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle04_JaksonText_PreBattle, MSGBOX_DEFAULT
# 670 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalMusic
# 671 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 672 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_JAKSON_4, Battle04_JaksonText_BattleVictory
# 673 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 674 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle04_JaksonText_PostBattle, MSGBOX_DEFAULT
# 675 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 676 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 3
# 677 "data/emeralbody_rivals/rival_battles.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 678 "data/emeralbody_rivals/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight
# 679 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 680 "data/emeralbody_rivals/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceLeft
# 681 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 4, Common_Movement_WalkDown
# 682 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 683 "data/emeralbody_rivals/rival_battles.pory"
	delay 10
# 684 "data/emeralbody_rivals/rival_battles.pory"
	removeobject 4
# 685 "data/emeralbody_rivals/rival_battles.pory"
	playse SE_EXIT
# 686 "data/emeralbody_rivals/rival_battles.pory"
	waitse
# 687 "data/emeralbody_rivals/rival_battles.pory"
	release
	return


Rival_Battle05::
# 700 "data/emeralbody_rivals/rival_battles.pory"
	lock
# 701 "data/emeralbody_rivals/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 702 "data/emeralbody_rivals/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 703 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 704 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalMusic
# 705 "data/emeralbody_rivals/rival_battles.pory"
	hidefollower
# 706 "data/emeralbody_rivals/rival_battles.pory"
	delay 10
# 707 "data/emeralbody_rivals/rival_battles.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 708 "data/emeralbody_rivals/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceDown
# 709 "data/emeralbody_rivals/rival_battles.pory"
	switch VAR_EMERALBODY_RIVAL
# 710 "data/emeralbody_rivals/rival_battles.pory"
	case 1, Rival_Battle05_3
# 712 "data/emeralbody_rivals/rival_battles.pory"
	case 2, Rival_Battle05_4
# 714 "data/emeralbody_rivals/rival_battles.pory"
	case 3, Rival_Battle05_5
# 716 "data/emeralbody_rivals/rival_battles.pory"
	case 4, Rival_Battle05_6
# 719 "data/emeralbody_rivals/rival_battles.pory"
	call Baron_Battle05
Rival_Battle05_1:
# 721 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 4
# 722 "data/emeralbody_rivals/rival_battles.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 723 "data/emeralbody_rivals/rival_battles.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 724 "data/emeralbody_rivals/rival_battles.pory"
	warpsilent MAP_EVER_GRANDE_CITY_POKEMON_LEAGUE_1F, 9, 4
# 725 "data/emeralbody_rivals/rival_battles.pory"
	release
	return

Rival_Battle05_3:
# 711 "data/emeralbody_rivals/rival_battles.pory"
	call Harper_Battle05
	goto Rival_Battle05_1

Rival_Battle05_4:
# 713 "data/emeralbody_rivals/rival_battles.pory"
	call Jakson_Battle05
	goto Rival_Battle05_1

Rival_Battle05_5:
# 715 "data/emeralbody_rivals/rival_battles.pory"
	call Redd_Battle05
	goto Rival_Battle05_1

Rival_Battle05_6:
# 717 "data/emeralbody_rivals/rival_battles.pory"
	call Sakura_Battle05
	goto Rival_Battle05_1


Jakson_Battle05::
# 729 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_0, 9
	goto_if_eq Jakson_Battle05_2
# 733 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 8, Common_Movement_WalkRight6
Jakson_Battle05_1:
# 735 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 736 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 8, Common_Movement_WalkUp
# 737 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 738 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_JaksonText_PreBattle, MSGBOX_DEFAULT
# 739 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 740 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 8, Common_Movement_WalkInPlaceLeft
# 741 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 742 "data/emeralbody_rivals/rival_battles.pory"
	delay 60
# 743 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 8, Common_Movement_WalkInPlaceUp
# 744 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 745 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 746 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_JaksonText_PreBattle2, MSGBOX_DEFAULT
# 747 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_JAKSON_5, Battle05_JaksonText_BattleVictory
# 748 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 749 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_JaksonText_PostBattle, MSGBOX_DEFAULT
# 750 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 751 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 8, Common_Movement_WalkDown
# 752 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 753 "data/emeralbody_rivals/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 754 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_0, 9
	goto_if_eq Jakson_Battle05_6
# 758 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 8, Common_Movement_WalkLeft6
Jakson_Battle05_5:
# 760 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 761 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 8, Common_Movement_WalkInPlaceUp
# 762 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	return

Jakson_Battle05_2:
# 730 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 8, Common_Movement_WalkRight5
	goto Jakson_Battle05_1

Jakson_Battle05_6:
# 755 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 8, Common_Movement_WalkLeft5
	goto Jakson_Battle05_5


Harper_Battle05::
# 766 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_0, 9
	goto_if_eq Harper_Battle05_2
# 770 "data/emeralbody_rivals/rival_battles.pory"
	setobjectxy 9, 10, 8
Harper_Battle05_1:
# 772 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 9, Common_Movement_WalkUp5
# 773 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 774 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_HarperText_PreBattle, MSGBOX_DEFAULT
# 775 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_HARPER_5, Battle05_HarperText_BattleVictory
# 776 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 9, Common_Movement_WalkInPlaceLeft
# 777 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 778 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 779 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_HarperText_PostBattle, MSGBOX_DEFAULT
# 780 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 781 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 9, Common_Movement_WalkInPlaceUp
# 782 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 783 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_HarperText_PostBattle2, MSGBOX_DEFAULT
# 784 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 785 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 9, Common_Movement_WalkDown5
# 786 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	return

Harper_Battle05_2:
# 767 "data/emeralbody_rivals/rival_battles.pory"
	setobjectxy 9, 9, 8
	goto Harper_Battle05_1


Redd_Battle05::
# 790 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_0, 9
	goto_if_eq Redd_Battle05_2
# 794 "data/emeralbody_rivals/rival_battles.pory"
	setobjectxy 10, 10, 8
Redd_Battle05_1:
# 796 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 10, Common_Movement_WalkUp5
# 797 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 798 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_ReddText_PreBattle, MSGBOX_DEFAULT
# 799 "data/emeralbody_rivals/rival_battles.pory"
	setvar VAR_0x8004, 1
# 800 "data/emeralbody_rivals/rival_battles.pory"
	specialvar VAR_RESULT, ScriptGetPokedexInfo
# 801 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_0x8006, 100
	goto_if_ge Redd_Battle05_6
# 805 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_ReddText_PreBattle2a, MSGBOX_DEFAULT
Redd_Battle05_5:
# 807 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_ReddText_PreBattle3, MSGBOX_DEFAULT
# 808 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_REDD_5, Battle05_ReddText_BattleVictory
# 809 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 810 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_ReddText_PostBattle, MSGBOX_DEFAULT
# 811 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 812 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 10, Common_Movement_WalkInPlaceLeft
# 813 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 814 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 815 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_ReddText_PostBattle2, MSGBOX_DEFAULT
# 816 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 817 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 10, Common_Movement_WalkInPlaceUp
# 818 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 819 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 820 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_ReddText_PostBattle3, MSGBOX_DEFAULT
# 821 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 822 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 10, Common_Movement_WalkDown5
# 823 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	return

Redd_Battle05_2:
# 791 "data/emeralbody_rivals/rival_battles.pory"
	setobjectxy 10, 9, 8
	goto Redd_Battle05_1

Redd_Battle05_6:
# 802 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_ReddText_PreBattle2b, MSGBOX_DEFAULT
	goto Redd_Battle05_5


Sakura_Battle05::
# 827 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_0, 9
	goto_if_eq Sakura_Battle05_2
# 831 "data/emeralbody_rivals/rival_battles.pory"
	setobjectxy 11, 10, 3
Sakura_Battle05_1:
# 833 "data/emeralbody_rivals/rival_battles.pory"
	setfieldeffectargument 0, 1
# 834 "data/emeralbody_rivals/rival_battles.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 835 "data/emeralbody_rivals/rival_battles.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 836 "data/emeralbody_rivals/rival_battles.pory"
	addobject 11
# 837 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 11, Common_Movement_FaceUp
# 838 "data/emeralbody_rivals/rival_battles.pory"
	delay 30
# 839 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_SakuraText_PreBattle, MSGBOX_DEFAULT
# 840 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_SAKURA_5, Battle05_SakuraText_BattleVictory
# 841 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 842 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_SakuraText_PostBattle, MSGBOX_DEFAULT
# 843 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 844 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 11, Common_Movement_WalkDown5
# 845 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	return

Sakura_Battle05_2:
# 828 "data/emeralbody_rivals/rival_battles.pory"
	setobjectxy 11, 9, 3
	goto Sakura_Battle05_1


Baron_Battle05::
# 849 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_0, 9
	goto_if_eq Baron_Battle05_2
# 853 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 12, Common_Movement_WalkLeft5
Baron_Battle05_1:
# 855 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 856 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 12, Common_Movement_WalkUp
# 857 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 858 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_BaronText_PreBattle, MSGBOX_DEFAULT
# 859 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 860 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 12, Common_Movement_WalkInPlaceLeft
# 861 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 862 "data/emeralbody_rivals/rival_battles.pory"
	delay 20
# 863 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 12, Common_Movement_WalkInPlaceDown
# 864 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 865 "data/emeralbody_rivals/rival_battles.pory"
	delay 40
# 866 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 12, Common_Movement_WalkInPlaceUp
# 867 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 868 "data/emeralbody_rivals/rival_battles.pory"
	delay 20
# 869 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 870 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_BaronText_PreBattle2, MSGBOX_DEFAULT
# 871 "data/emeralbody_rivals/rival_battles.pory"
	trainerbattle_no_intro TRAINER_BARON_5, Battle05_BaronText_BattleVictory
# 872 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 873 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_BaronText_PostBattle, MSGBOX_DEFAULT
# 874 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 875 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 12, Common_Movement_WalkInPlaceDown
# 876 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 877 "data/emeralbody_rivals/rival_battles.pory"
	delay 40
# 878 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 12, Common_Movement_WalkInPlaceUp
# 879 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 880 "data/emeralbody_rivals/rival_battles.pory"
	call GetRivalForNameBox
# 881 "data/emeralbody_rivals/rival_battles.pory"
	msgbox Battle05_BaronText_PostBattle2, MSGBOX_DEFAULT
# 882 "data/emeralbody_rivals/rival_battles.pory"
	closemessage
# 883 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 12, Common_Movement_WalkDown
# 884 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 885 "data/emeralbody_rivals/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 886 "data/emeralbody_rivals/rival_battles.pory"
	compare VAR_TEMP_0, 9
	goto_if_eq Baron_Battle05_6
# 890 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 12, Common_Movement_WalkRight5
Baron_Battle05_5:
# 892 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
# 893 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 12, Common_Movement_WalkInPlaceUp
# 894 "data/emeralbody_rivals/rival_battles.pory"
	waitmovement 0
	return

Baron_Battle05_2:
# 850 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 12, Common_Movement_WalkLeft6
	goto Baron_Battle05_1

Baron_Battle05_6:
# 887 "data/emeralbody_rivals/rival_battles.pory"
	applymovement 12, Common_Movement_WalkRight6
	goto Baron_Battle05_5


Jakson_Battle02_Block_Text_0:
# 613 "data/emeralbody_rivals/rival_battles.pory"
	.string "The Murkrow sees you trying to sneak\naround and actively blocks your\lefforts.$"
