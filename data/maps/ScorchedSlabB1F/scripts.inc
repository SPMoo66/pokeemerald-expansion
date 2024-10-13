ScorchedSlabB1F_MapScripts::
# 4 "data/maps/ScorchedSlabB1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ScorchedSlabB1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 10 "data/maps/ScorchedSlabB1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, ScorchedSlabB1F_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

ScorchedSlabB1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 5 "data/maps/ScorchedSlabB1F/scripts.pory"
	goto_if_set FLAG_CAUGHT_HEATRAN, ScorchedSlabB1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

ScorchedSlabB1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 6 "data/maps/ScorchedSlabB1F/scripts.pory"
	setflag FLAG_TEMP_2
# 7 "data/maps/ScorchedSlabB1F/scripts.pory"
	removeobject 5
	return

ScorchedSlabB1F_MapScripts_MAP_SCRIPT_ON_RESUME:
# 11 "data/maps/ScorchedSlabB1F/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, ScorchedSlabB1F_MapScripts_MAP_SCRIPT_ON_RESUME_1
	return

ScorchedSlabB1F_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 12 "data/maps/ScorchedSlabB1F/scripts.pory"
	removeobject 5
	return


BattleHeatran::
# 18 "data/maps/ScorchedSlabB1F/scripts.pory"
	lock
# 19 "data/maps/ScorchedSlabB1F/scripts.pory"
	faceplayer
# 20 "data/maps/ScorchedSlabB1F/scripts.pory"
	playmoncry SPECIES_HEATRAN, CRY_MODE_ENCOUNTER
# 21 "data/maps/ScorchedSlabB1F/scripts.pory"
	msgbox BattleHeatran_Text_0
# 22 "data/maps/ScorchedSlabB1F/scripts.pory"
	waitmoncry
# 23 "data/maps/ScorchedSlabB1F/scripts.pory"
	seteventmon SPECIES_HEATRAN, 50
# 24 "data/maps/ScorchedSlabB1F/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 25 "data/maps/ScorchedSlabB1F/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 26 "data/maps/ScorchedSlabB1F/scripts.pory"
	waitstate
# 27 "data/maps/ScorchedSlabB1F/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 28 "data/maps/ScorchedSlabB1F/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 29 "data/maps/ScorchedSlabB1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq BattleHeatran_2
BattleHeatran_1:
# 32 "data/maps/ScorchedSlabB1F/scripts.pory"
	release
	end

BattleHeatran_2:
# 30 "data/maps/ScorchedSlabB1F/scripts.pory"
	setflag FLAG_CAUGHT_HEATRAN
	goto BattleHeatran_1


BattleHeatran_Text_0:
# 21 "data/maps/ScorchedSlabB1F/scripts.pory"
	.string "Gwogobo gwobobobo!$"
