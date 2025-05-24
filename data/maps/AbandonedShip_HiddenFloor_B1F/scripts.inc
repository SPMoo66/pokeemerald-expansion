AbandonedShip_HiddenFloor_B1F_MapScripts::
# 5 "data/maps/AbandonedShip_HiddenFloor_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, AbandonedShip_HiddenFloor_B1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 11 "data/maps/AbandonedShip_HiddenFloor_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, AbandonedShip_HiddenFloor_B1F_MapScripts_MAP_SCRIPT_ON_RESUME
# 16 "data/maps/AbandonedShip_HiddenFloor_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, AbandonedShip_HiddenFloor_B1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

AbandonedShip_HiddenFloor_B1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 6 "data/maps/AbandonedShip_HiddenFloor_B1F/scripts.pory"
	goto_if_set FLAG_CAUGHT_MELMETAL, AbandonedShip_HiddenFloor_B1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

AbandonedShip_HiddenFloor_B1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 7 "data/maps/AbandonedShip_HiddenFloor_B1F/scripts.pory"
	setflag FLAG_TEMP_2
# 8 "data/maps/AbandonedShip_HiddenFloor_B1F/scripts.pory"
	removeobject 1
	return

AbandonedShip_HiddenFloor_B1F_MapScripts_MAP_SCRIPT_ON_RESUME:
# 12 "data/maps/AbandonedShip_HiddenFloor_B1F/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, AbandonedShip_HiddenFloor_B1F_MapScripts_MAP_SCRIPT_ON_RESUME_1
	return

AbandonedShip_HiddenFloor_B1F_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 13 "data/maps/AbandonedShip_HiddenFloor_B1F/scripts.pory"
	removeobject VAR_LAST_TALKED
	return

AbandonedShip_HiddenFloor_B1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 17 "data/maps/AbandonedShip_HiddenFloor_B1F/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, AbandonedShip_HiddenFloor_B1F_Meltan
	.2byte 0


AbandonedShip_HiddenFloor_B1F_Meltan::
# 22 "data/maps/AbandonedShip_HiddenFloor_B1F/scripts.pory"
	goto_if_unset FLAG_ABANDONEDSHIP_SEEN_MELTAN, AbandonedShip_HiddenFloor_B1F_Meltan_2
AbandonedShip_HiddenFloor_B1F_Meltan_1:
# 44 "data/maps/AbandonedShip_HiddenFloor_B1F/scripts.pory"
	setvar VAR_TEMP_0, 1
	return

AbandonedShip_HiddenFloor_B1F_Meltan_2:
# 23 "data/maps/AbandonedShip_HiddenFloor_B1F/scripts.pory"
	lockall
# 24 "data/maps/AbandonedShip_HiddenFloor_B1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 25 "data/maps/AbandonedShip_HiddenFloor_B1F/scripts.pory"
	waitmovement 0
# 26 "data/maps/AbandonedShip_HiddenFloor_B1F/scripts.pory"
	delay 60
# 27 "data/maps/AbandonedShip_HiddenFloor_B1F/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceLeft
# 28 "data/maps/AbandonedShip_HiddenFloor_B1F/scripts.pory"
	waitmovement 0
# 29 "data/maps/AbandonedShip_HiddenFloor_B1F/scripts.pory"
	delay 40
# 30 "data/maps/AbandonedShip_HiddenFloor_B1F/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceUp
# 31 "data/maps/AbandonedShip_HiddenFloor_B1F/scripts.pory"
	waitmovement 0
# 32 "data/maps/AbandonedShip_HiddenFloor_B1F/scripts.pory"
	delay 40
# 33 "data/maps/AbandonedShip_HiddenFloor_B1F/scripts.pory"
	playse SE_PIN
# 34 "data/maps/AbandonedShip_HiddenFloor_B1F/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 35 "data/maps/AbandonedShip_HiddenFloor_B1F/scripts.pory"
	waitmovement 0
# 36 "data/maps/AbandonedShip_HiddenFloor_B1F/scripts.pory"
	delay 60
# 37 "data/maps/AbandonedShip_HiddenFloor_B1F/scripts.pory"
	applymovement 2, Common_Movement_WalkFastLeft9
# 38 "data/maps/AbandonedShip_HiddenFloor_B1F/scripts.pory"
	waitmovement 0
# 39 "data/maps/AbandonedShip_HiddenFloor_B1F/scripts.pory"
	delay 20
# 40 "data/maps/AbandonedShip_HiddenFloor_B1F/scripts.pory"
	setflag FLAG_ABANDONEDSHIP_SEEN_MELTAN
# 41 "data/maps/AbandonedShip_HiddenFloor_B1F/scripts.pory"
	removeobject 2
# 42 "data/maps/AbandonedShip_HiddenFloor_B1F/scripts.pory"
	releaseall
	goto AbandonedShip_HiddenFloor_B1F_Meltan_1


BattleMelmetal::
# 48 "data/maps/AbandonedShip_HiddenFloor_B1F/scripts.pory"
	lock
# 49 "data/maps/AbandonedShip_HiddenFloor_B1F/scripts.pory"
	faceplayer
# 50 "data/maps/AbandonedShip_HiddenFloor_B1F/scripts.pory"
	setvar VAR_LAST_TALKED, 1
# 51 "data/maps/AbandonedShip_HiddenFloor_B1F/scripts.pory"
	playmoncry SPECIES_MELMETAL, CRY_MODE_ENCOUNTER
# 52 "data/maps/AbandonedShip_HiddenFloor_B1F/scripts.pory"
	msgbox BattleMelmetal_Text_0
# 53 "data/maps/AbandonedShip_HiddenFloor_B1F/scripts.pory"
	waitmoncry
# 54 "data/maps/AbandonedShip_HiddenFloor_B1F/scripts.pory"
	seteventmon SPECIES_MELMETAL, 50
# 55 "data/maps/AbandonedShip_HiddenFloor_B1F/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 56 "data/maps/AbandonedShip_HiddenFloor_B1F/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 57 "data/maps/AbandonedShip_HiddenFloor_B1F/scripts.pory"
	waitstate
# 58 "data/maps/AbandonedShip_HiddenFloor_B1F/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 59 "data/maps/AbandonedShip_HiddenFloor_B1F/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 60 "data/maps/AbandonedShip_HiddenFloor_B1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq BattleMelmetal_2
BattleMelmetal_1:
# 63 "data/maps/AbandonedShip_HiddenFloor_B1F/scripts.pory"
	release
	return

BattleMelmetal_2:
# 61 "data/maps/AbandonedShip_HiddenFloor_B1F/scripts.pory"
	setflag FLAG_CAUGHT_MELMETAL
	goto BattleMelmetal_1


BattleMelmetal_Text_0:
# 52 "data/maps/AbandonedShip_HiddenFloor_B1F/scripts.pory"
	.string "Grii-oo-rii!$"
