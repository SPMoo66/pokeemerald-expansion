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
	trainerbattle_no_intro TRAINER_HARPER_2, Battle02_HarperText_BattleVictory
# 25 "data/rival_battles.pory"
	call GetRivalForNameBox
# 26 "data/rival_battles.pory"
	msgbox Battle02_HarperText_PostBattle
# 27 "data/rival_battles.pory"
	closemessage
# 28 "data/rival_battles.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Harper_PlayerMoves
# 29 "data/rival_battles.pory"
	waitmovement 0
# 30 "data/rival_battles.pory"
	applymovement 4, Common_Movement_WalkRight9
# 31 "data/rival_battles.pory"
	waitmovement 0
# 32 "data/rival_battles.pory"
	removeobject 4
# 33 "data/rival_battles.pory"
	fadedefaultbgm
# 34 "data/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 1
# 35 "data/rival_battles.pory"
	release
	return


# 39 "data/rival_battles.pory"
Harper_PlayerMoves:
# 40 "data/rival_battles.pory"
	face_up
# 41 "data/rival_battles.pory"
	lock_facing_direction
# 42 "data/rival_battles.pory"
	walk_down
# 43 "data/rival_battles.pory"
	unlock_facing_direction
	step_end

Redd_Battle02::
# 52 "data/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 3
	goto_if_eq Redd_Battle02_1
	return

Redd_Battle02_1:
# 53 "data/rival_battles.pory"
	lock
# 54 "data/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 55 "data/rival_battles.pory"
	call GetRivalForNameBox
# 56 "data/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 57 "data/rival_battles.pory"
	compare VAR_TEMP_1, 58
	goto_if_eq Redd_Battle02_4
# 72 "data/rival_battles.pory"
	applymovement 40, Common_Movement_FaceUp
# 73 "data/rival_battles.pory"
	waitmovement 0
# 74 "data/rival_battles.pory"
	playse SE_PIN
# 75 "data/rival_battles.pory"
	applymovement 40, Common_Movement_ExclamationMark
# 76 "data/rival_battles.pory"
	waitmovement 0
# 77 "data/rival_battles.pory"
	delay 60
# 78 "data/rival_battles.pory"
	compare VAR_TEMP_1, 52
	goto_if_eq Redd_Battle02_12
# 83 "data/rival_battles.pory"
	applymovement 40, Common_Movement_WalkUp2
# 84 "data/rival_battles.pory"
	waitmovement 0
Redd_Battle02_11:
# 86 "data/rival_battles.pory"
	applymovement 40, Common_Movement_WalkRight
# 87 "data/rival_battles.pory"
	waitmovement 0
# 88 "data/rival_battles.pory"
	msgbox Battle02_ReddText_PreBattleAlt, MSGBOX_DEFAULT
Redd_Battle02_3:
# 90 "data/rival_battles.pory"
	trainerbattle_no_intro TRAINER_REDD_2, Battle02_ReddText_BattleVictory
# 91 "data/rival_battles.pory"
	call GetRivalForNameBox
# 92 "data/rival_battles.pory"
	msgbox Battle02_ReddText_PostBattle
# 93 "data/rival_battles.pory"
	closemessage
# 94 "data/rival_battles.pory"
	applymovement 40, Common_Movement_WalkUp6
# 95 "data/rival_battles.pory"
	waitmovement 0
# 96 "data/rival_battles.pory"
	removeobject 40
# 97 "data/rival_battles.pory"
	fadedefaultbgm
# 98 "data/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 1
# 99 "data/rival_battles.pory"
	setflag FLAG_TEMP_2
# 100 "data/rival_battles.pory"
	release
	return

Redd_Battle02_4:
# 58 "data/rival_battles.pory"
	switch VAR_TEMP_0
# 59 "data/rival_battles.pory"
	case 17, Redd_Battle02_9
# 62 "data/rival_battles.pory"
	case 19, Redd_Battle02_10
Redd_Battle02_7:
# 67 "data/rival_battles.pory"
	applymovement 40, Common_Movement_WalkDown2
# 68 "data/rival_battles.pory"
	waitmovement 0
# 69 "data/rival_battles.pory"
	msgbox Battle02_ReddText_PreBattle, MSGBOX_DEFAULT
	goto Redd_Battle02_3

Redd_Battle02_9:
# 60 "data/rival_battles.pory"
	applymovement 40, Common_Movement_WalkLeft
# 61 "data/rival_battles.pory"
	waitmovement 0
	goto Redd_Battle02_7

Redd_Battle02_10:
# 63 "data/rival_battles.pory"
	applymovement 40, Common_Movement_WalkRight
# 64 "data/rival_battles.pory"
	waitmovement 0
	goto Redd_Battle02_7

Redd_Battle02_12:
# 79 "data/rival_battles.pory"
	applymovement 40, Common_Movement_WalkUp3
# 80 "data/rival_battles.pory"
	waitmovement 0
	goto Redd_Battle02_11


Sakura_Battle02::
# 110 "data/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 4
	goto_if_eq Sakura_Battle02_1
	return

Sakura_Battle02_1:
# 111 "data/rival_battles.pory"
	lock
# 112 "data/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 113 "data/rival_battles.pory"
	addobject 3
# 114 "data/rival_battles.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 115 "data/rival_battles.pory"
	waitmovement 0
# 116 "data/rival_battles.pory"
	playse SE_PIN
# 117 "data/rival_battles.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 118 "data/rival_battles.pory"
	waitmovement 0
# 119 "data/rival_battles.pory"
	delay 60
# 120 "data/rival_battles.pory"
	applymovement 3, Common_Movement_WalkUp4
# 121 "data/rival_battles.pory"
	waitmovement 0
# 122 "data/rival_battles.pory"
	playse SE_LEDGE
# 123 "data/rival_battles.pory"
	applymovement 3, Common_Movement_JumpUp
# 124 "data/rival_battles.pory"
	waitmovement 0
# 125 "data/rival_battles.pory"
	playse SE_M_CUT
# 126 "data/rival_battles.pory"
	waitse
# 127 "data/rival_battles.pory"
	call GetRivalForNameBox
# 128 "data/rival_battles.pory"
	msgbox Battle02_SakuraText_PreBattle, MSGBOX_DEFAULT
# 129 "data/rival_battles.pory"
	trainerbattle_no_intro TRAINER_SAKURA_2, Battle02_SakuraText_BattleVictory
# 130 "data/rival_battles.pory"
	call GetRivalForNameBox
# 131 "data/rival_battles.pory"
	msgbox Battle02_SakuraText_PostBattle
# 132 "data/rival_battles.pory"
	closemessage
# 133 "data/rival_battles.pory"
	applymovement 3, Common_Movement_WalkDown5
# 134 "data/rival_battles.pory"
	waitmovement 0
# 135 "data/rival_battles.pory"
	removeobject 3
# 136 "data/rival_battles.pory"
	fadedefaultbgm
# 137 "data/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 1
# 138 "data/rival_battles.pory"
	release
	return

