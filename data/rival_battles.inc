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
# 53 "data/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 4
	goto_if_eq Sakura_Battle02_1
	return

Sakura_Battle02_1:
# 54 "data/rival_battles.pory"
	lock
# 55 "data/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 56 "data/rival_battles.pory"
	addobject 3
# 57 "data/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceDown
# 58 "data/rival_battles.pory"
	waitmovement 0
# 59 "data/rival_battles.pory"
	playse SE_PIN
# 60 "data/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 61 "data/rival_battles.pory"
	waitmovement 0
# 62 "data/rival_battles.pory"
	delay 60
# 63 "data/rival_battles.pory"
	applymovement 3, Common_Movement_WalkUp4
# 64 "data/rival_battles.pory"
	waitmovement 0
# 65 "data/rival_battles.pory"
	playse SE_LEDGE
# 66 "data/rival_battles.pory"
	applymovement 3, Common_Movement_JumpUp
# 67 "data/rival_battles.pory"
	waitmovement 0
# 68 "data/rival_battles.pory"
	playse SE_M_CUT
# 69 "data/rival_battles.pory"
	waitse
# 70 "data/rival_battles.pory"
	call GetRivalForNameBox
# 71 "data/rival_battles.pory"
	msgbox Battle02_SakuraText_PreBattle, MSGBOX_DEFAULT
# 72 "data/rival_battles.pory"
	call GetRivalMusic
# 73 "data/rival_battles.pory"
	trainerbattle_no_intro TRAINER_SAKURA_2, Battle02_SakuraText_BattleVictory
# 74 "data/rival_battles.pory"
	call GetRivalForNameBox
# 75 "data/rival_battles.pory"
	msgbox Battle02_SakuraText_PostBattle
# 76 "data/rival_battles.pory"
	closemessage
# 77 "data/rival_battles.pory"
	applymovement 3, Common_Movement_WalkDown5
# 78 "data/rival_battles.pory"
	waitmovement 0
# 79 "data/rival_battles.pory"
	removeobject 3
# 80 "data/rival_battles.pory"
	fadedefaultbgm
# 81 "data/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 1
# 82 "data/rival_battles.pory"
	release
	return


Redd_Battle02::
# 92 "data/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 3
	goto_if_eq Redd_Battle02_1
	return

Redd_Battle02_1:
# 93 "data/rival_battles.pory"
	lock
# 94 "data/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 95 "data/rival_battles.pory"
	call GetRivalForNameBox
# 96 "data/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 97 "data/rival_battles.pory"
	compare VAR_TEMP_1, 58
	goto_if_eq Redd_Battle02_4
# 112 "data/rival_battles.pory"
	applymovement 40, Common_Movement_FaceUp
# 113 "data/rival_battles.pory"
	waitmovement 0
# 114 "data/rival_battles.pory"
	playse SE_PIN
# 115 "data/rival_battles.pory"
	applymovement 40, Common_Movement_ExclamationMark
# 116 "data/rival_battles.pory"
	waitmovement 0
# 117 "data/rival_battles.pory"
	delay 60
# 118 "data/rival_battles.pory"
	compare VAR_TEMP_1, 52
	goto_if_eq Redd_Battle02_12
# 123 "data/rival_battles.pory"
	applymovement 40, Common_Movement_WalkUp2
# 124 "data/rival_battles.pory"
	waitmovement 0
Redd_Battle02_11:
# 126 "data/rival_battles.pory"
	applymovement 40, Common_Movement_WalkRight
# 127 "data/rival_battles.pory"
	waitmovement 0
# 128 "data/rival_battles.pory"
	msgbox Battle02_ReddText_PreBattleAlt, MSGBOX_DEFAULT
Redd_Battle02_3:
# 130 "data/rival_battles.pory"
	call GetRivalMusic
# 131 "data/rival_battles.pory"
	trainerbattle_no_intro TRAINER_REDD_2, Battle02_ReddText_BattleVictory
# 132 "data/rival_battles.pory"
	call GetRivalForNameBox
# 133 "data/rival_battles.pory"
	msgbox Battle02_ReddText_PostBattle
# 134 "data/rival_battles.pory"
	closemessage
# 135 "data/rival_battles.pory"
	applymovement 40, Common_Movement_WalkUp6
# 136 "data/rival_battles.pory"
	waitmovement 0
# 137 "data/rival_battles.pory"
	removeobject 40
# 138 "data/rival_battles.pory"
	fadedefaultbgm
# 139 "data/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 1
# 140 "data/rival_battles.pory"
	setflag FLAG_TEMP_2
# 141 "data/rival_battles.pory"
	release
	return

Redd_Battle02_4:
# 98 "data/rival_battles.pory"
	switch VAR_TEMP_0
# 99 "data/rival_battles.pory"
	case 17, Redd_Battle02_9
# 102 "data/rival_battles.pory"
	case 19, Redd_Battle02_10
Redd_Battle02_7:
# 107 "data/rival_battles.pory"
	applymovement 40, Common_Movement_WalkDown2
# 108 "data/rival_battles.pory"
	waitmovement 0
# 109 "data/rival_battles.pory"
	msgbox Battle02_ReddText_PreBattle, MSGBOX_DEFAULT
	goto Redd_Battle02_3

Redd_Battle02_9:
# 100 "data/rival_battles.pory"
	applymovement 40, Common_Movement_WalkLeft
# 101 "data/rival_battles.pory"
	waitmovement 0
	goto Redd_Battle02_7

Redd_Battle02_10:
# 103 "data/rival_battles.pory"
	applymovement 40, Common_Movement_WalkRight
# 104 "data/rival_battles.pory"
	waitmovement 0
	goto Redd_Battle02_7

Redd_Battle02_12:
# 119 "data/rival_battles.pory"
	applymovement 40, Common_Movement_WalkUp3
# 120 "data/rival_battles.pory"
	waitmovement 0
	goto Redd_Battle02_11


Baron_Battle02::
# 151 "data/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 0
	goto_if_eq Baron_Battle02_1
	return

Baron_Battle02_1:
# 152 "data/rival_battles.pory"
	lock
# 153 "data/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 154 "data/rival_battles.pory"
	call GetRivalForNameBox
# 155 "data/rival_battles.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 156 "data/rival_battles.pory"
	compare VAR_TEMP_1, 9
	goto_if_eq Baron_Battle02_4
# 165 "data/rival_battles.pory"
	faceplayer
Baron_Battle02_3:
# 167 "data/rival_battles.pory"
	msgbox Battle02_BaronText_PreBattle, MSGBOX_DEFAULT
# 168 "data/rival_battles.pory"
	call GetRivalMusic
# 169 "data/rival_battles.pory"
	trainerbattle_no_intro TRAINER_BARON_2, Battle02_BaronText_BattleVictory
# 170 "data/rival_battles.pory"
	call GetRivalForNameBox
# 171 "data/rival_battles.pory"
	msgbox Battle02_BaronText_PostBattle
# 172 "data/rival_battles.pory"
	closemessage
# 173 "data/rival_battles.pory"
	fadedefaultbgm
# 174 "data/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 1
# 175 "data/rival_battles.pory"
	setflag FLAG_TEMP_2
# 176 "data/rival_battles.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 177 "data/rival_battles.pory"
	removeobject 7
# 178 "data/rival_battles.pory"
	delay 5
# 179 "data/rival_battles.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 180 "data/rival_battles.pory"
	release
	return

Baron_Battle02_4:
# 157 "data/rival_battles.pory"
	applymovement 7, Common_Movement_WalkInPlaceUp
# 158 "data/rival_battles.pory"
	waitmovement 0
# 159 "data/rival_battles.pory"
	delay 50
# 160 "data/rival_battles.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceDown
# 161 "data/rival_battles.pory"
	applymovement 7, Common_Movement_WalkUp
# 162 "data/rival_battles.pory"
	waitmovement 0
	goto Baron_Battle02_3

