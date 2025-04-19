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

Sakura_Battle02::
# 45 "data/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 4
	goto_if_eq Sakura_Battle02_1
	return

Sakura_Battle02_1:
# 46 "data/rival_battles.pory"
	lock
# 47 "data/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 48 "data/rival_battles.pory"
	addobject 3
# 49 "data/rival_battles.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 50 "data/rival_battles.pory"
	waitmovement 0
# 51 "data/rival_battles.pory"
	playse SE_PIN
# 52 "data/rival_battles.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 53 "data/rival_battles.pory"
	waitmovement 0
# 54 "data/rival_battles.pory"
	delay 30
# 55 "data/rival_battles.pory"
	applymovement 3, Common_Movement_WalkUp4
# 56 "data/rival_battles.pory"
	waitmovement 0
# 57 "data/rival_battles.pory"
	playse SE_LEDGE
# 58 "data/rival_battles.pory"
	applymovement 3, Common_Movement_JumpUp
# 59 "data/rival_battles.pory"
	waitmovement 0
# 60 "data/rival_battles.pory"
	playse SE_M_CUT
# 61 "data/rival_battles.pory"
	waitse
# 62 "data/rival_battles.pory"
	call GetRivalForNameBox
# 63 "data/rival_battles.pory"
	msgbox Battle02_SakuraText_PreBattle, MSGBOX_DEFAULT
# 64 "data/rival_battles.pory"
	trainerbattle_no_intro TRAINER_SAKURA_2, Battle02_SakuraText_BattleVictory
# 65 "data/rival_battles.pory"
	call GetRivalForNameBox
# 66 "data/rival_battles.pory"
	msgbox Battle02_SakuraText_PostBattle
# 67 "data/rival_battles.pory"
	closemessage
# 68 "data/rival_battles.pory"
	applymovement 3, Common_Movement_WalkDown5
# 69 "data/rival_battles.pory"
	waitmovement 0
# 70 "data/rival_battles.pory"
	removeobject 3
# 71 "data/rival_battles.pory"
	fadedefaultbgm
# 72 "data/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 1
# 73 "data/rival_battles.pory"
	release
	return

