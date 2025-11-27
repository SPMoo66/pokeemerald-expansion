VictoryRoad_2F_MapScripts::
# 5 "data/maps/VictoryRoad_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, VictoryRoad_2F_MapScripts_MAP_SCRIPT_ON_RESUME
# 12 "data/maps/VictoryRoad_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, VictoryRoad_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

VictoryRoad_2F_MapScripts_MAP_SCRIPT_ON_RESUME:
# 6 "data/maps/VictoryRoad_2F/scripts.pory"
	setobjectxy 1, 9, 0
# 7 "data/maps/VictoryRoad_2F/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, VictoryRoad_2F_MapScripts_MAP_SCRIPT_ON_RESUME_1
	return

VictoryRoad_2F_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 8 "data/maps/VictoryRoad_2F/scripts.pory"
	removeobject 1
# 9 "data/maps/VictoryRoad_2F/scripts.pory"
	removeobject 2
	return

VictoryRoad_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 13 "data/maps/VictoryRoad_2F/scripts.pory"
	goto_if_set FLAG_CAUGHT_MELOETTA, VictoryRoad_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

VictoryRoad_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 14 "data/maps/VictoryRoad_2F/scripts.pory"
	setflag FLAG_TEMP_2
# 15 "data/maps/VictoryRoad_2F/scripts.pory"
	removeobject 1
	return


BattleMeloetta::
# 21 "data/maps/VictoryRoad_2F/scripts.pory"
	goto_if_unset FLAG_CAUGHT_MELOETTA, BattleMeloetta_2
# 39 "data/maps/VictoryRoad_2F/scripts.pory"
	msgbox BattleMeloetta_Text_1
BattleMeloetta_1:
# 41 "data/maps/VictoryRoad_2F/scripts.pory"
	release
	return

BattleMeloetta_2:
# 22 "data/maps/VictoryRoad_2F/scripts.pory"
	lock
# 23 "data/maps/VictoryRoad_2F/scripts.pory"
	applymovement 1, SkyPillar_Top_Movement_CameraPanDown
# 24 "data/maps/VictoryRoad_2F/scripts.pory"
	waitmovement 0
# 25 "data/maps/VictoryRoad_2F/scripts.pory"
	playmoncry SPECIES_MELOETTA, CRY_MODE_ENCOUNTER
# 26 "data/maps/VictoryRoad_2F/scripts.pory"
	msgbox BattleMeloetta_Text_0
# 27 "data/maps/VictoryRoad_2F/scripts.pory"
	waitmoncry
# 28 "data/maps/VictoryRoad_2F/scripts.pory"
	seteventmon SPECIES_MELOETTA, 50
# 29 "data/maps/VictoryRoad_2F/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 30 "data/maps/VictoryRoad_2F/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 31 "data/maps/VictoryRoad_2F/scripts.pory"
	waitstate
# 32 "data/maps/VictoryRoad_2F/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 33 "data/maps/VictoryRoad_2F/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 34 "data/maps/VictoryRoad_2F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq BattleMeloetta_5
	goto BattleMeloetta_1

BattleMeloetta_5:
# 35 "data/maps/VictoryRoad_2F/scripts.pory"
	setflag FLAG_CAUGHT_MELOETTA
	goto BattleMeloetta_1


BattleMeloetta_Text_0:
# 26 "data/maps/VictoryRoad_2F/scripts.pory"
	.string "Melote!$"

BattleMeloetta_Text_1:
# 39 "data/maps/VictoryRoad_2F/scripts.pory"
	.string "You can see the Pokémon League\n"
	.string "building in the distance.$"
