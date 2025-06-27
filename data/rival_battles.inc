Harper_Battle02::
# 12 "data/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 1
	goto_if_eq Harper_Battle02_1
	return

Harper_Battle02_1:
# 13 "data/rival_battles.pory"
	lock
# 14 "data/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 15 "data/rival_battles.pory"
	addobject 4
# 16 "data/rival_battles.pory"
	playse SE_EXIT
# 17 "data/rival_battles.pory"
	waitse
# 18 "data/rival_battles.pory"
	applymovement 4, Common_Movement_WalkUp4
# 19 "data/rival_battles.pory"
	waitmovement 0
# 20 "data/rival_battles.pory"
	applymovement 4, Common_Movement_WalkRight4
# 21 "data/rival_battles.pory"
	waitmovement 0
# 22 "data/rival_battles.pory"
	call GetRivalForNameBox
# 23 "data/rival_battles.pory"
	msgbox Battle02_HarperText_PreBattle, MSGBOX_DEFAULT
# 24 "data/rival_battles.pory"
	call GetRivalMusic
# 25 "data/rival_battles.pory"
	trainerbattle_no_intro TRAINER_HARPER_2, Battle02_HarperText_BattleVictory
# 26 "data/rival_battles.pory"
	call GetRivalForNameBox
# 27 "data/rival_battles.pory"
	msgbox Battle02_HarperText_PostBattle
# 28 "data/rival_battles.pory"
	closemessage
# 29 "data/rival_battles.pory"
	applymovement LOCALID_PLAYER, Harper_PlayerMoves
# 30 "data/rival_battles.pory"
	waitmovement 0
# 31 "data/rival_battles.pory"
	applymovement 4, Common_Movement_WalkRight9
# 32 "data/rival_battles.pory"
	waitmovement 0
# 33 "data/rival_battles.pory"
	removeobject 4
# 34 "data/rival_battles.pory"
	fadedefaultbgm
# 35 "data/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 1
# 36 "data/rival_battles.pory"
	release
	return


# 40 "data/rival_battles.pory"
Harper_PlayerMoves:
# 41 "data/rival_battles.pory"
	face_up
# 42 "data/rival_battles.pory"
	lock_facing_direction
# 43 "data/rival_battles.pory"
	walk_down
# 44 "data/rival_battles.pory"
	unlock_facing_direction
	step_end

Sakura_Battle02::
# 54 "data/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 4
	goto_if_eq Sakura_Battle02_1
	return

Sakura_Battle02_1:
# 55 "data/rival_battles.pory"
	lock
# 56 "data/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 57 "data/rival_battles.pory"
	addobject 3
# 58 "data/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceDown
# 59 "data/rival_battles.pory"
	waitmovement 0
# 60 "data/rival_battles.pory"
	playse SE_PIN
# 61 "data/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 62 "data/rival_battles.pory"
	waitmovement 0
# 63 "data/rival_battles.pory"
	delay 60
# 64 "data/rival_battles.pory"
	applymovement 3, Common_Movement_WalkUp4
# 65 "data/rival_battles.pory"
	waitmovement 0
# 66 "data/rival_battles.pory"
	playse SE_LEDGE
# 67 "data/rival_battles.pory"
	applymovement 3, Common_Movement_JumpUp
# 68 "data/rival_battles.pory"
	waitmovement 0
# 69 "data/rival_battles.pory"
	playse SE_M_CUT
# 70 "data/rival_battles.pory"
	waitse
# 71 "data/rival_battles.pory"
	call GetRivalForNameBox
# 72 "data/rival_battles.pory"
	msgbox Battle02_SakuraText_PreBattle, MSGBOX_DEFAULT
# 73 "data/rival_battles.pory"
	call GetRivalMusic
# 74 "data/rival_battles.pory"
	trainerbattle_no_intro TRAINER_SAKURA_2, Battle02_SakuraText_BattleVictory
# 75 "data/rival_battles.pory"
	call GetRivalForNameBox
# 76 "data/rival_battles.pory"
	msgbox Battle02_SakuraText_PostBattle
# 77 "data/rival_battles.pory"
	closemessage
# 78 "data/rival_battles.pory"
	applymovement 3, Common_Movement_WalkDown5
# 79 "data/rival_battles.pory"
	waitmovement 0
# 80 "data/rival_battles.pory"
	removeobject 3
# 81 "data/rival_battles.pory"
	fadedefaultbgm
# 82 "data/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 1
# 83 "data/rival_battles.pory"
	release
	return


Sakura_Battle03::
# 88 "data/rival_battles.pory"
	lock
# 89 "data/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 90 "data/rival_battles.pory"
	call GetRivalForNameBox
# 91 "data/rival_battles.pory"
	msgbox Battle03_SakuraText_PreBattle, MSGBOX_DEFAULT
# 92 "data/rival_battles.pory"
	call GetRivalMusic
# 93 "data/rival_battles.pory"
	trainerbattle_no_intro TRAINER_SAKURA_3, Battle03_SakuraText_BattleVictory
# 94 "data/rival_battles.pory"
	call GetRivalForNameBox
# 95 "data/rival_battles.pory"
	msgbox Battle03_SakuraText_PostBattle
# 96 "data/rival_battles.pory"
	closemessage
# 97 "data/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 98 "data/rival_battles.pory"
	compare VAR_TEMP_1, 12
	goto_if_eq Sakura_Battle03_2
Sakura_Battle03_1:
# 102 "data/rival_battles.pory"
	applymovement 8, Common_Movement_WalkDown
# 103 "data/rival_battles.pory"
	waitmovement 0
# 104 "data/rival_battles.pory"
	playse SE_LEDGE
# 105 "data/rival_battles.pory"
	applymovement 8, Common_Movement_JumpDown2
# 106 "data/rival_battles.pory"
	waitmovement 0
# 107 "data/rival_battles.pory"
	applymovement 8, Common_Movement_WalkDown4
# 108 "data/rival_battles.pory"
	waitmovement 0
# 109 "data/rival_battles.pory"
	removeobject 8
# 110 "data/rival_battles.pory"
	setflag FLAG_TEMP_2
# 111 "data/rival_battles.pory"
	fadedefaultbgm
# 112 "data/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 2
# 113 "data/rival_battles.pory"
	delay 30
# 114 "data/rival_battles.pory"
	playse SE_EFFECTIVE
# 115 "data/rival_battles.pory"
	setmetatile 13, 11, 0x208, FALSE
# 116 "data/rival_battles.pory"
	special DrawWholeMapView
# 117 "data/rival_battles.pory"
	delay 30
# 118 "data/rival_battles.pory"
	release
	return

Sakura_Battle03_2:
# 99 "data/rival_battles.pory"
	applymovement 8, Common_Movement_WalkRight
# 100 "data/rival_battles.pory"
	waitmovement 0
	goto Sakura_Battle03_1


Redd_Battle02::
# 127 "data/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 3
	goto_if_eq Redd_Battle02_1
	return

Redd_Battle02_1:
# 128 "data/rival_battles.pory"
	lock
# 129 "data/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 130 "data/rival_battles.pory"
	call GetRivalForNameBox
# 131 "data/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 132 "data/rival_battles.pory"
	compare VAR_TEMP_1, 58
	goto_if_eq Redd_Battle02_4
# 147 "data/rival_battles.pory"
	applymovement 40, Common_Movement_FaceUp
# 148 "data/rival_battles.pory"
	waitmovement 0
# 149 "data/rival_battles.pory"
	playse SE_PIN
# 150 "data/rival_battles.pory"
	applymovement 40, Common_Movement_ExclamationMark
# 151 "data/rival_battles.pory"
	waitmovement 0
# 152 "data/rival_battles.pory"
	delay 60
# 153 "data/rival_battles.pory"
	compare VAR_TEMP_1, 52
	goto_if_eq Redd_Battle02_12
# 158 "data/rival_battles.pory"
	applymovement 40, Common_Movement_WalkUp2
# 159 "data/rival_battles.pory"
	waitmovement 0
Redd_Battle02_11:
# 161 "data/rival_battles.pory"
	applymovement 40, Common_Movement_WalkRight
# 162 "data/rival_battles.pory"
	waitmovement 0
# 163 "data/rival_battles.pory"
	msgbox Battle02_ReddText_PreBattleAlt, MSGBOX_DEFAULT
Redd_Battle02_3:
# 165 "data/rival_battles.pory"
	call GetRivalMusic
# 166 "data/rival_battles.pory"
	trainerbattle_no_intro TRAINER_REDD_2, Battle02_ReddText_BattleVictory
# 167 "data/rival_battles.pory"
	call GetRivalForNameBox
# 168 "data/rival_battles.pory"
	msgbox Battle02_ReddText_PostBattle
# 169 "data/rival_battles.pory"
	closemessage
# 170 "data/rival_battles.pory"
	applymovement 40, Common_Movement_WalkUp6
# 171 "data/rival_battles.pory"
	waitmovement 0
# 172 "data/rival_battles.pory"
	removeobject 40
# 173 "data/rival_battles.pory"
	fadedefaultbgm
# 174 "data/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 1
# 175 "data/rival_battles.pory"
	setflag FLAG_TEMP_2
# 176 "data/rival_battles.pory"
	release
	return

Redd_Battle02_4:
# 133 "data/rival_battles.pory"
	switch VAR_TEMP_0
# 134 "data/rival_battles.pory"
	case 17, Redd_Battle02_9
# 137 "data/rival_battles.pory"
	case 19, Redd_Battle02_10
Redd_Battle02_7:
# 142 "data/rival_battles.pory"
	applymovement 40, Common_Movement_WalkDown2
# 143 "data/rival_battles.pory"
	waitmovement 0
# 144 "data/rival_battles.pory"
	msgbox Battle02_ReddText_PreBattle, MSGBOX_DEFAULT
	goto Redd_Battle02_3

Redd_Battle02_9:
# 135 "data/rival_battles.pory"
	applymovement 40, Common_Movement_WalkLeft
# 136 "data/rival_battles.pory"
	waitmovement 0
	goto Redd_Battle02_7

Redd_Battle02_10:
# 138 "data/rival_battles.pory"
	applymovement 40, Common_Movement_WalkRight
# 139 "data/rival_battles.pory"
	waitmovement 0
	goto Redd_Battle02_7

Redd_Battle02_12:
# 154 "data/rival_battles.pory"
	applymovement 40, Common_Movement_WalkUp3
# 155 "data/rival_battles.pory"
	waitmovement 0
	goto Redd_Battle02_11


Baron_Battle02::
# 186 "data/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 0
	goto_if_eq Baron_Battle02_1
	return

Baron_Battle02_1:
# 187 "data/rival_battles.pory"
	lock
# 188 "data/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 189 "data/rival_battles.pory"
	call GetRivalForNameBox
# 190 "data/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 191 "data/rival_battles.pory"
	compare VAR_TEMP_1, 9
	goto_if_eq Baron_Battle02_4
# 200 "data/rival_battles.pory"
	faceplayer
Baron_Battle02_3:
# 202 "data/rival_battles.pory"
	msgbox Battle02_BaronText_PreBattle, MSGBOX_DEFAULT
# 203 "data/rival_battles.pory"
	call GetRivalMusic
# 204 "data/rival_battles.pory"
	trainerbattle_no_intro TRAINER_BARON_2, Battle02_BaronText_BattleVictory
# 205 "data/rival_battles.pory"
	call GetRivalForNameBox
# 206 "data/rival_battles.pory"
	msgbox Battle02_BaronText_PostBattle
# 207 "data/rival_battles.pory"
	closemessage
# 208 "data/rival_battles.pory"
	fadedefaultbgm
# 209 "data/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 1
# 210 "data/rival_battles.pory"
	setflag FLAG_TEMP_2
# 211 "data/rival_battles.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 212 "data/rival_battles.pory"
	removeobject 7
# 213 "data/rival_battles.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 214 "data/rival_battles.pory"
	release
	return

Baron_Battle02_4:
# 192 "data/rival_battles.pory"
	applymovement 7, Common_Movement_WalkInPlaceUp
# 193 "data/rival_battles.pory"
	waitmovement 0
# 194 "data/rival_battles.pory"
	delay 50
# 195 "data/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceDown
# 196 "data/rival_battles.pory"
	applymovement 7, Common_Movement_WalkUp
# 197 "data/rival_battles.pory"
	waitmovement 0
	goto Baron_Battle02_3


Jakson_Battle02::
# 226 "data/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 2
	goto_if_eq Jakson_Battle02_1
	return

Jakson_Battle02_1:
# 227 "data/rival_battles.pory"
	lock
# 228 "data/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 229 "data/rival_battles.pory"
	delay 30
# 230 "data/rival_battles.pory"
	call GetRivalForNameBox
# 231 "data/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 232 "data/rival_battles.pory"
	compare VAR_TEMP_0, 5
	goto_if_eq Jakson_Battle02_4
Jakson_Battle02_3:
# 254 "data/rival_battles.pory"
	msgbox Battle02_JaksonText_PreBattle, MSGBOX_DEFAULT
# 255 "data/rival_battles.pory"
	call GetRivalMusic
# 256 "data/rival_battles.pory"
	trainerbattle_no_intro TRAINER_JAKSON_2, Battle02_JaksonText_BattleVictory
# 257 "data/rival_battles.pory"
	call GetRivalForNameBox
# 258 "data/rival_battles.pory"
	msgbox Battle02_JaksonText_PostBattle
# 259 "data/rival_battles.pory"
	closemessage
# 260 "data/rival_battles.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 261 "data/rival_battles.pory"
	removeobject 7
# 262 "data/rival_battles.pory"
	removeobject 6
# 263 "data/rival_battles.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 264 "data/rival_battles.pory"
	fadedefaultbgm
# 265 "data/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 1
# 266 "data/rival_battles.pory"
	setflag FLAG_TEMP_2
# 267 "data/rival_battles.pory"
	release
	return

Jakson_Battle02_4:
# 233 "data/rival_battles.pory"
	switch VAR_TEMP_1
# 234 "data/rival_battles.pory"
	case 9, Jakson_Battle02_8
# 237 "data/rival_battles.pory"
	case 11, Jakson_Battle02_9
# 240 "data/rival_battles.pory"
	case 12, Jakson_Battle02_10
# 243 "data/rival_battles.pory"
	case 13, Jakson_Battle02_11
# 246 "data/rival_battles.pory"
	case 14, Jakson_Battle02_12
Jakson_Battle02_6:
# 251 "data/rival_battles.pory"
	applymovement 7, Common_Movement_WalkRight2
# 252 "data/rival_battles.pory"
	waitmovement 0
	goto Jakson_Battle02_3

Jakson_Battle02_8:
# 235 "data/rival_battles.pory"
	applymovement 7, Common_Movement_WalkUp
# 236 "data/rival_battles.pory"
	waitmovement 0
	goto Jakson_Battle02_6

Jakson_Battle02_9:
# 238 "data/rival_battles.pory"
	applymovement 7, Common_Movement_WalkDown
# 239 "data/rival_battles.pory"
	waitmovement 0
	goto Jakson_Battle02_6

Jakson_Battle02_10:
# 241 "data/rival_battles.pory"
	applymovement 7, Common_Movement_WalkDown2
# 242 "data/rival_battles.pory"
	waitmovement 0
	goto Jakson_Battle02_6

Jakson_Battle02_11:
# 244 "data/rival_battles.pory"
	applymovement 7, Common_Movement_WalkDown3
# 245 "data/rival_battles.pory"
	waitmovement 0
	goto Jakson_Battle02_6

Jakson_Battle02_12:
# 247 "data/rival_battles.pory"
	applymovement 7, Common_Movement_WalkDown4
# 248 "data/rival_battles.pory"
	waitmovement 0
	goto Jakson_Battle02_6


Jakson_Battle02_Block::
# 272 "data/rival_battles.pory"
	lock
# 273 "data/rival_battles.pory"
	faceplayer
# 274 "data/rival_battles.pory"
	msgbox Jakson_Battle02_Block_Text_0
# 275 "data/rival_battles.pory"
	playmoncry SPECIES_MURKROW, CRY_MODE_NORMAL
# 276 "data/rival_battles.pory"
	waitmoncry
# 277 "data/rival_battles.pory"
	release
	return


Jakson_Battle03::
# 281 "data/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 2
	goto_if_eq Jakson_Battle03_1
	return

Jakson_Battle03_1:
# 282 "data/rival_battles.pory"
	lock
# 283 "data/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 284 "data/rival_battles.pory"
	call GetRivalForNameBox
# 285 "data/rival_battles.pory"
	addobject 48
# 286 "data/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 287 "data/rival_battles.pory"
	compare VAR_TEMP_0, 31
	goto_if_eq Jakson_Battle03_4
Jakson_Battle03_3:
# 290 "data/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceDown
# 291 "data/rival_battles.pory"
	applymovement 48, Common_Movement_WalkUp5
# 292 "data/rival_battles.pory"
	waitmovement 0
# 293 "data/rival_battles.pory"
	msgbox Battle03_JaksonText_PreBattle, MSGBOX_DEFAULT
# 294 "data/rival_battles.pory"
	call GetRivalMusic
# 296 "data/rival_battles.pory"
	call GetRivalForNameBox
# 297 "data/rival_battles.pory"
	msgbox Battle03_JaksonText_PostBattle
# 298 "data/rival_battles.pory"
	closemessage
# 299 "data/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 2
# 300 "data/rival_battles.pory"
	compare VAR_TEMP_0, 31
	goto_if_eq Jakson_Battle03_7
# 305 "data/rival_battles.pory"
	applymovement 48, Common_Movement_WalkRight
# 306 "data/rival_battles.pory"
	waitmovement 0
Jakson_Battle03_6:
# 308 "data/rival_battles.pory"
	applymovement 48, Common_Movement_WalkUp7
# 309 "data/rival_battles.pory"
	waitmovement 0
# 310 "data/rival_battles.pory"
	removeobject 48
# 311 "data/rival_battles.pory"
	fadedefaultbgm
# 312 "data/rival_battles.pory"
	release
	return

Jakson_Battle03_4:
# 288 "data/rival_battles.pory"
	setobjectxy 48, 31, 103
	goto Jakson_Battle03_3

Jakson_Battle03_7:
# 301 "data/rival_battles.pory"
	applymovement 48, Common_Movement_WalkLeft
# 302 "data/rival_battles.pory"
	waitmovement 0
	goto Jakson_Battle03_6


Jakson_Battle02_Block_Text_0:
# 274 "data/rival_battles.pory"
	.string "The Murkrow sees you trying to sneak\naround and actively blocks your\lefforts.$"
