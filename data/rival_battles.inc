Harper_Battle02::
# 6 "data/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 1
	goto_if_eq Harper_Battle02_1
	return

Harper_Battle02_1:
# 7 "data/rival_battles.pory"
	lock
# 8 "data/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 9 "data/rival_battles.pory"
	addobject 4
# 10 "data/rival_battles.pory"
	playse SE_EXIT
# 11 "data/rival_battles.pory"
	waitse
# 12 "data/rival_battles.pory"
	applymovement 4, Common_Movement_WalkUp4
# 13 "data/rival_battles.pory"
	waitmovement 0
# 14 "data/rival_battles.pory"
	applymovement 4, Common_Movement_WalkRight4
# 15 "data/rival_battles.pory"
	waitmovement 0
# 16 "data/rival_battles.pory"
	call GetRivalForNameBox
# 17 "data/rival_battles.pory"
	msgbox Battle02_HarperText_PreBattle, MSGBOX_DEFAULT
# 18 "data/rival_battles.pory"
	trainerbattle_no_intro TRAINER_HARPER_2, Battle02_HarperText_BattleVictory
# 19 "data/rival_battles.pory"
	call GetRivalForNameBox
# 20 "data/rival_battles.pory"
	msgbox Battle02_HarperText_PostBattle
# 21 "data/rival_battles.pory"
	closemessage
# 22 "data/rival_battles.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Harper_PlayerMoves
# 23 "data/rival_battles.pory"
	waitmovement 0
# 24 "data/rival_battles.pory"
	applymovement 4, Common_Movement_WalkRight9
# 25 "data/rival_battles.pory"
	waitmovement 0
# 26 "data/rival_battles.pory"
	removeobject 4
# 27 "data/rival_battles.pory"
	fadedefaultbgm
# 28 "data/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 1
# 29 "data/rival_battles.pory"
	release
	return


# 33 "data/rival_battles.pory"
Harper_PlayerMoves:
# 34 "data/rival_battles.pory"
	face_up
# 35 "data/rival_battles.pory"
	lock_facing_direction
# 36 "data/rival_battles.pory"
	walk_down
# 37 "data/rival_battles.pory"
	unlock_facing_direction
	step_end

Redd_Battle02::
# 46 "data/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 3
	goto_if_eq Redd_Battle02_1
	return

Redd_Battle02_1:
# 47 "data/rival_battles.pory"
	lock
# 48 "data/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 49 "data/rival_battles.pory"
	call GetRivalForNameBox
# 50 "data/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 51 "data/rival_battles.pory"
	compare VAR_TEMP_1, 58
	goto_if_eq Redd_Battle02_4
# 66 "data/rival_battles.pory"
	applymovement 40, Common_Movement_FaceUp
# 67 "data/rival_battles.pory"
	waitmovement 0
# 68 "data/rival_battles.pory"
	playse SE_PIN
# 69 "data/rival_battles.pory"
	applymovement 40, Common_Movement_ExclamationMark
# 70 "data/rival_battles.pory"
	waitmovement 0
# 71 "data/rival_battles.pory"
	delay 60
# 72 "data/rival_battles.pory"
	compare VAR_TEMP_1, 52
	goto_if_eq Redd_Battle02_12
# 77 "data/rival_battles.pory"
	applymovement 40, Common_Movement_WalkUp2
# 78 "data/rival_battles.pory"
	waitmovement 0
Redd_Battle02_11:
# 80 "data/rival_battles.pory"
	applymovement 40, Common_Movement_WalkRight
# 81 "data/rival_battles.pory"
	waitmovement 0
# 82 "data/rival_battles.pory"
	msgbox Battle02_ReddText_PreBattleAlt, MSGBOX_DEFAULT
Redd_Battle02_3:
# 84 "data/rival_battles.pory"
	trainerbattle_no_intro TRAINER_REDD_2, Battle02_ReddText_BattleVictory
# 85 "data/rival_battles.pory"
	call GetRivalForNameBox
# 86 "data/rival_battles.pory"
	msgbox Battle02_ReddText_PostBattle
# 87 "data/rival_battles.pory"
	closemessage
# 88 "data/rival_battles.pory"
	applymovement 40, Common_Movement_WalkUp6
# 89 "data/rival_battles.pory"
	waitmovement 0
# 90 "data/rival_battles.pory"
	removeobject 40
# 91 "data/rival_battles.pory"
	fadedefaultbgm
# 92 "data/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 1
# 93 "data/rival_battles.pory"
	setflag FLAG_TEMP_2
# 94 "data/rival_battles.pory"
	release
	return

Redd_Battle02_4:
# 52 "data/rival_battles.pory"
	switch VAR_TEMP_0
# 53 "data/rival_battles.pory"
	case 17, Redd_Battle02_9
# 56 "data/rival_battles.pory"
	case 19, Redd_Battle02_10
Redd_Battle02_7:
# 61 "data/rival_battles.pory"
	applymovement 40, Common_Movement_WalkDown2
# 62 "data/rival_battles.pory"
	waitmovement 0
# 63 "data/rival_battles.pory"
	msgbox Battle02_ReddText_PreBattle, MSGBOX_DEFAULT
	goto Redd_Battle02_3

Redd_Battle02_9:
# 54 "data/rival_battles.pory"
	applymovement 40, Common_Movement_WalkLeft
# 55 "data/rival_battles.pory"
	waitmovement 0
	goto Redd_Battle02_7

Redd_Battle02_10:
# 57 "data/rival_battles.pory"
	applymovement 40, Common_Movement_WalkRight
# 58 "data/rival_battles.pory"
	waitmovement 0
	goto Redd_Battle02_7

Redd_Battle02_12:
# 73 "data/rival_battles.pory"
	applymovement 40, Common_Movement_WalkUp3
# 74 "data/rival_battles.pory"
	waitmovement 0
	goto Redd_Battle02_11


Sakura_Battle02::
# 104 "data/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 4
	goto_if_eq Sakura_Battle02_1
	return

Sakura_Battle02_1:
# 105 "data/rival_battles.pory"
	lock
# 106 "data/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 107 "data/rival_battles.pory"
	addobject 3
# 108 "data/rival_battles.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 109 "data/rival_battles.pory"
	waitmovement 0
# 110 "data/rival_battles.pory"
	playse SE_PIN
# 111 "data/rival_battles.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 112 "data/rival_battles.pory"
	waitmovement 0
# 113 "data/rival_battles.pory"
	delay 60
# 114 "data/rival_battles.pory"
	applymovement 3, Common_Movement_WalkUp4
# 115 "data/rival_battles.pory"
	waitmovement 0
# 116 "data/rival_battles.pory"
	playse SE_LEDGE
# 117 "data/rival_battles.pory"
	applymovement 3, Common_Movement_JumpUp
# 118 "data/rival_battles.pory"
	waitmovement 0
# 119 "data/rival_battles.pory"
	playse SE_M_CUT
# 120 "data/rival_battles.pory"
	waitse
# 121 "data/rival_battles.pory"
	call GetRivalForNameBox
# 122 "data/rival_battles.pory"
	msgbox Battle02_SakuraText_PreBattle, MSGBOX_DEFAULT
# 123 "data/rival_battles.pory"
	trainerbattle_no_intro TRAINER_SAKURA_2, Battle02_SakuraText_BattleVictory
# 124 "data/rival_battles.pory"
	call GetRivalForNameBox
# 125 "data/rival_battles.pory"
	msgbox Battle02_SakuraText_PostBattle
# 126 "data/rival_battles.pory"
	closemessage
# 127 "data/rival_battles.pory"
	applymovement 3, Common_Movement_WalkDown5
# 128 "data/rival_battles.pory"
	waitmovement 0
# 129 "data/rival_battles.pory"
	removeobject 3
# 130 "data/rival_battles.pory"
	fadedefaultbgm
# 131 "data/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 1
# 132 "data/rival_battles.pory"
	release
	return

