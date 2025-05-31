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

Redd_Battle02::
# 53 "data/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 3
	goto_if_eq Redd_Battle02_1
	return

Redd_Battle02_1:
# 54 "data/rival_battles.pory"
	lock
# 55 "data/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 56 "data/rival_battles.pory"
	call GetRivalForNameBox
# 57 "data/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 58 "data/rival_battles.pory"
	compare VAR_TEMP_1, 58
	goto_if_eq Redd_Battle02_4
# 73 "data/rival_battles.pory"
	applymovement 40, Common_Movement_FaceUp
# 74 "data/rival_battles.pory"
	waitmovement 0
# 75 "data/rival_battles.pory"
	playse SE_PIN
# 76 "data/rival_battles.pory"
	applymovement 40, Common_Movement_ExclamationMark
# 77 "data/rival_battles.pory"
	waitmovement 0
# 78 "data/rival_battles.pory"
	delay 60
# 79 "data/rival_battles.pory"
	compare VAR_TEMP_1, 52
	goto_if_eq Redd_Battle02_12
# 84 "data/rival_battles.pory"
	applymovement 40, Common_Movement_WalkUp2
# 85 "data/rival_battles.pory"
	waitmovement 0
Redd_Battle02_11:
# 87 "data/rival_battles.pory"
	applymovement 40, Common_Movement_WalkRight
# 88 "data/rival_battles.pory"
	waitmovement 0
# 89 "data/rival_battles.pory"
	msgbox Battle02_ReddText_PreBattleAlt, MSGBOX_DEFAULT
Redd_Battle02_3:
# 91 "data/rival_battles.pory"
	call GetRivalMusic
# 92 "data/rival_battles.pory"
	trainerbattle_no_intro TRAINER_REDD_2, Battle02_ReddText_BattleVictory
# 93 "data/rival_battles.pory"
	call GetRivalForNameBox
# 94 "data/rival_battles.pory"
	msgbox Battle02_ReddText_PostBattle
# 95 "data/rival_battles.pory"
	closemessage
# 96 "data/rival_battles.pory"
	applymovement 40, Common_Movement_WalkUp6
# 97 "data/rival_battles.pory"
	waitmovement 0
# 98 "data/rival_battles.pory"
	removeobject 40
# 99 "data/rival_battles.pory"
	fadedefaultbgm
# 100 "data/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 1
# 101 "data/rival_battles.pory"
	setflag FLAG_TEMP_2
# 102 "data/rival_battles.pory"
	release
	return

Redd_Battle02_4:
# 59 "data/rival_battles.pory"
	switch VAR_TEMP_0
# 60 "data/rival_battles.pory"
	case 17, Redd_Battle02_9
# 63 "data/rival_battles.pory"
	case 19, Redd_Battle02_10
Redd_Battle02_7:
# 68 "data/rival_battles.pory"
	applymovement 40, Common_Movement_WalkDown2
# 69 "data/rival_battles.pory"
	waitmovement 0
# 70 "data/rival_battles.pory"
	msgbox Battle02_ReddText_PreBattle, MSGBOX_DEFAULT
	goto Redd_Battle02_3

Redd_Battle02_9:
# 61 "data/rival_battles.pory"
	applymovement 40, Common_Movement_WalkLeft
# 62 "data/rival_battles.pory"
	waitmovement 0
	goto Redd_Battle02_7

Redd_Battle02_10:
# 64 "data/rival_battles.pory"
	applymovement 40, Common_Movement_WalkRight
# 65 "data/rival_battles.pory"
	waitmovement 0
	goto Redd_Battle02_7

Redd_Battle02_12:
# 80 "data/rival_battles.pory"
	applymovement 40, Common_Movement_WalkUp3
# 81 "data/rival_battles.pory"
	waitmovement 0
	goto Redd_Battle02_11


Sakura_Battle02::
# 112 "data/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 4
	goto_if_eq Sakura_Battle02_1
	return

Sakura_Battle02_1:
# 113 "data/rival_battles.pory"
	lock
# 114 "data/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 115 "data/rival_battles.pory"
	addobject 3
# 116 "data/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceDown
# 117 "data/rival_battles.pory"
	waitmovement 0
# 118 "data/rival_battles.pory"
	playse SE_PIN
# 119 "data/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 120 "data/rival_battles.pory"
	waitmovement 0
# 121 "data/rival_battles.pory"
	delay 60
# 122 "data/rival_battles.pory"
	applymovement 3, Common_Movement_WalkUp4
# 123 "data/rival_battles.pory"
	waitmovement 0
# 124 "data/rival_battles.pory"
	playse SE_LEDGE
# 125 "data/rival_battles.pory"
	applymovement 3, Common_Movement_JumpUp
# 126 "data/rival_battles.pory"
	waitmovement 0
# 127 "data/rival_battles.pory"
	playse SE_M_CUT
# 128 "data/rival_battles.pory"
	waitse
# 129 "data/rival_battles.pory"
	call GetRivalForNameBox
# 130 "data/rival_battles.pory"
	msgbox Battle02_SakuraText_PreBattle, MSGBOX_DEFAULT
# 131 "data/rival_battles.pory"
	call GetRivalMusic
# 132 "data/rival_battles.pory"
	trainerbattle_no_intro TRAINER_SAKURA_2, Battle02_SakuraText_BattleVictory
# 133 "data/rival_battles.pory"
	call GetRivalForNameBox
# 134 "data/rival_battles.pory"
	msgbox Battle02_SakuraText_PostBattle
# 135 "data/rival_battles.pory"
	closemessage
# 136 "data/rival_battles.pory"
	applymovement 3, Common_Movement_WalkDown5
# 137 "data/rival_battles.pory"
	waitmovement 0
# 138 "data/rival_battles.pory"
	removeobject 3
# 139 "data/rival_battles.pory"
	fadedefaultbgm
# 140 "data/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 1
# 141 "data/rival_battles.pory"
	release
	return

