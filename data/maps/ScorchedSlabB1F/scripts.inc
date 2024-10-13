ScorchedSlabB1F_MapScripts::
# 5 "data/maps/ScorchedSlabB1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ScorchedSlabB1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 15 "data/maps/ScorchedSlabB1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, ScorchedSlabB1F_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

ScorchedSlabB1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 6 "data/maps/ScorchedSlabB1F/scripts.pory"
	goto_if_set FLAG_CAUGHT_HEATRAN, ScorchedSlabB1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
ScorchedSlabB1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 10 "data/maps/ScorchedSlabB1F/scripts.pory"
	goto_if_set FLAG_CAUGHT_VOLCANION, ScorchedSlabB1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
	return

ScorchedSlabB1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 7 "data/maps/ScorchedSlabB1F/scripts.pory"
	setflag FLAG_TEMP_2
# 8 "data/maps/ScorchedSlabB1F/scripts.pory"
	removeobject 5
	goto ScorchedSlabB1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

ScorchedSlabB1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 11 "data/maps/ScorchedSlabB1F/scripts.pory"
	setflag FLAG_TEMP_3
# 12 "data/maps/ScorchedSlabB1F/scripts.pory"
	removeobject 6
	return

ScorchedSlabB1F_MapScripts_MAP_SCRIPT_ON_RESUME:
# 16 "data/maps/ScorchedSlabB1F/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, ScorchedSlabB1F_MapScripts_MAP_SCRIPT_ON_RESUME_1
	return

ScorchedSlabB1F_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 17 "data/maps/ScorchedSlabB1F/scripts.pory"
	removeobject VAR_LAST_TALKED
	return


BattleHeatran::
# 23 "data/maps/ScorchedSlabB1F/scripts.pory"
	lock
# 24 "data/maps/ScorchedSlabB1F/scripts.pory"
	faceplayer
# 25 "data/maps/ScorchedSlabB1F/scripts.pory"
	playmoncry SPECIES_HEATRAN, CRY_MODE_ENCOUNTER
# 26 "data/maps/ScorchedSlabB1F/scripts.pory"
	msgbox BattleHeatran_Text_0
# 27 "data/maps/ScorchedSlabB1F/scripts.pory"
	waitmoncry
# 28 "data/maps/ScorchedSlabB1F/scripts.pory"
	seteventmon SPECIES_HEATRAN, 50
# 29 "data/maps/ScorchedSlabB1F/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 30 "data/maps/ScorchedSlabB1F/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 31 "data/maps/ScorchedSlabB1F/scripts.pory"
	waitstate
# 32 "data/maps/ScorchedSlabB1F/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 33 "data/maps/ScorchedSlabB1F/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 34 "data/maps/ScorchedSlabB1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq BattleHeatran_2
BattleHeatran_1:
# 37 "data/maps/ScorchedSlabB1F/scripts.pory"
	release
	end

BattleHeatran_2:
# 35 "data/maps/ScorchedSlabB1F/scripts.pory"
	setflag FLAG_CAUGHT_HEATRAN
	goto BattleHeatran_1


BattleVolcanion::
# 42 "data/maps/ScorchedSlabB1F/scripts.pory"
	lock
# 43 "data/maps/ScorchedSlabB1F/scripts.pory"
	faceplayer
# 44 "data/maps/ScorchedSlabB1F/scripts.pory"
	playmoncry SPECIES_VOLCANION, CRY_MODE_ENCOUNTER
# 45 "data/maps/ScorchedSlabB1F/scripts.pory"
	msgbox BattleVolcanion_Text_0
# 46 "data/maps/ScorchedSlabB1F/scripts.pory"
	waitmoncry
# 47 "data/maps/ScorchedSlabB1F/scripts.pory"
	seteventmon SPECIES_VOLCANION, 50
# 48 "data/maps/ScorchedSlabB1F/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 49 "data/maps/ScorchedSlabB1F/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 50 "data/maps/ScorchedSlabB1F/scripts.pory"
	waitstate
# 51 "data/maps/ScorchedSlabB1F/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 52 "data/maps/ScorchedSlabB1F/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 53 "data/maps/ScorchedSlabB1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq BattleVolcanion_2
BattleVolcanion_1:
# 56 "data/maps/ScorchedSlabB1F/scripts.pory"
	release
	end

BattleVolcanion_2:
# 54 "data/maps/ScorchedSlabB1F/scripts.pory"
	setflag FLAG_CAUGHT_VOLCANION
	goto BattleVolcanion_1


BattleHeatran_Text_0:
# 26 "data/maps/ScorchedSlabB1F/scripts.pory"
	.string "Gwogobo gwobobobo!$"

BattleVolcanion_Text_0:
# 45 "data/maps/ScorchedSlabB1F/scripts.pory"
	.string "Waaoow!$"
