VictoryRoad_2F_MapScripts::
# 4 "data/maps/VictoryRoad_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, VictoryRoad_2F_MapScripts_MAP_SCRIPT_ON_RESUME
# 10 "data/maps/VictoryRoad_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, VictoryRoad_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

VictoryRoad_2F_MapScripts_MAP_SCRIPT_ON_RESUME:
# 5 "data/maps/VictoryRoad_2F/scripts.pory"
	setobjectxy 1, 9, 0
# 6 "data/maps/VictoryRoad_2F/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, VictoryRoad_2F_MapScripts_MAP_SCRIPT_ON_RESUME_1
	return

VictoryRoad_2F_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 7 "data/maps/VictoryRoad_2F/scripts.pory"
	removeobject 1
	return

VictoryRoad_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 11 "data/maps/VictoryRoad_2F/scripts.pory"
	goto_if_set FLAG_CAUGHT_MELOETTA, VictoryRoad_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

VictoryRoad_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 12 "data/maps/VictoryRoad_2F/scripts.pory"
	setflag FLAG_TEMP_2
# 13 "data/maps/VictoryRoad_2F/scripts.pory"
	removeobject 1
	return


BattleMeloetta::
# 19 "data/maps/VictoryRoad_2F/scripts.pory"
	goto_if_unset FLAG_CAUGHT_MELOETTA, BattleMeloetta_2
# 37 "data/maps/VictoryRoad_2F/scripts.pory"
	msgbox BattleMeloetta_Text_1
BattleMeloetta_1:
# 39 "data/maps/VictoryRoad_2F/scripts.pory"
	release
	end

BattleMeloetta_2:
# 20 "data/maps/VictoryRoad_2F/scripts.pory"
	lock
# 21 "data/maps/VictoryRoad_2F/scripts.pory"
	applymovement 1, SkyPillar_Top_Movement_CameraPanDown
# 22 "data/maps/VictoryRoad_2F/scripts.pory"
	waitmovement 0
# 23 "data/maps/VictoryRoad_2F/scripts.pory"
	playmoncry SPECIES_MELOETTA, CRY_MODE_ENCOUNTER
# 24 "data/maps/VictoryRoad_2F/scripts.pory"
	msgbox BattleMeloetta_Text_0
# 25 "data/maps/VictoryRoad_2F/scripts.pory"
	waitmoncry
# 26 "data/maps/VictoryRoad_2F/scripts.pory"
	seteventmon SPECIES_MELOETTA, 50
# 27 "data/maps/VictoryRoad_2F/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 28 "data/maps/VictoryRoad_2F/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 29 "data/maps/VictoryRoad_2F/scripts.pory"
	waitstate
# 30 "data/maps/VictoryRoad_2F/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 31 "data/maps/VictoryRoad_2F/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 32 "data/maps/VictoryRoad_2F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq BattleMeloetta_5
	goto BattleMeloetta_1

BattleMeloetta_5:
# 33 "data/maps/VictoryRoad_2F/scripts.pory"
	setflag FLAG_CAUGHT_MELOETTA
	goto BattleMeloetta_1


BattleMeloetta_Text_0:
# 24 "data/maps/VictoryRoad_2F/scripts.pory"
	.string "Laaa-liii!!$"

BattleMeloetta_Text_1:
# 37 "data/maps/VictoryRoad_2F/scripts.pory"
	.string "You can see the Pokémon League\n"
	.string "building in the distance.$"
