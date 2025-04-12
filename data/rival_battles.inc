Sakura_Battle02::
# 6 "data/rival_battles.pory"
	compare VAR_EMERALBODY_RIVAL, 4
	goto_if_eq Sakura_Battle02_1
	return

Sakura_Battle02_1:
# 7 "data/rival_battles.pory"
	lock
# 8 "data/rival_battles.pory"
	call Common_EventScript_PlayEmRivalBgm
# 9 "data/rival_battles.pory"
	addobject 3
# 10 "data/rival_battles.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 11 "data/rival_battles.pory"
	waitmovement 0
# 12 "data/rival_battles.pory"
	playse SE_PIN
# 13 "data/rival_battles.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 14 "data/rival_battles.pory"
	waitmovement 0
# 15 "data/rival_battles.pory"
	delay 50
# 16 "data/rival_battles.pory"
	applymovement 3, Common_Movement_WalkUp5
# 17 "data/rival_battles.pory"
	waitmovement 0
# 18 "data/rival_battles.pory"
	call GetRivalForNameBox
# 19 "data/rival_battles.pory"
	msgbox Battle02_SakuraText_PreBattle, MSGBOX_DEFAULT
# 20 "data/rival_battles.pory"
	trainerbattle_no_intro TRAINER_SAKURA_2, Battle02_SakuraText_BattleVictory
# 21 "data/rival_battles.pory"
	call GetRivalForNameBox
# 22 "data/rival_battles.pory"
	msgbox Battle02_SakuraText_PostBattle
# 23 "data/rival_battles.pory"
	closemessage
# 24 "data/rival_battles.pory"
	applymovement 3, Common_Movement_WalkDown5
# 25 "data/rival_battles.pory"
	waitmovement 0
# 26 "data/rival_battles.pory"
	removeobject 3
# 27 "data/rival_battles.pory"
	fadedefaultbgm
# 28 "data/rival_battles.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 1
# 29 "data/rival_battles.pory"
	release
	return

