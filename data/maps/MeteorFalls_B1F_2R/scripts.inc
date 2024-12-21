MeteorFalls_B1F_2R_MapScripts::
# 4 "data/maps/MeteorFalls_B1F_2R/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MeteorFalls_B1F_2R_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 10 "data/maps/MeteorFalls_B1F_2R/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, MeteorFalls_B1F_2R_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

MeteorFalls_B1F_2R_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 5 "data/maps/MeteorFalls_B1F_2R/scripts.pory"
	goto_if_set FLAG_CAUGHT_DIANCIE, MeteorFalls_B1F_2R_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

MeteorFalls_B1F_2R_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 6 "data/maps/MeteorFalls_B1F_2R/scripts.pory"
	setflag FLAG_TEMP_2
# 7 "data/maps/MeteorFalls_B1F_2R/scripts.pory"
	removeobject 2
	return

MeteorFalls_B1F_2R_MapScripts_MAP_SCRIPT_ON_RESUME:
# 11 "data/maps/MeteorFalls_B1F_2R/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, MeteorFalls_B1F_2R_MapScripts_MAP_SCRIPT_ON_RESUME_1
	return

MeteorFalls_B1F_2R_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 12 "data/maps/MeteorFalls_B1F_2R/scripts.pory"
	removeobject VAR_LAST_TALKED
	return


BattleDiancie::
# 18 "data/maps/MeteorFalls_B1F_2R/scripts.pory"
	lock
# 19 "data/maps/MeteorFalls_B1F_2R/scripts.pory"
	faceplayer
# 20 "data/maps/MeteorFalls_B1F_2R/scripts.pory"
	setvar VAR_LAST_TALKED, 2
# 21 "data/maps/MeteorFalls_B1F_2R/scripts.pory"
	playmoncry SPECIES_DIANCIE, CRY_MODE_ENCOUNTER
# 22 "data/maps/MeteorFalls_B1F_2R/scripts.pory"
	msgbox BattleDiancie_Text_0
# 23 "data/maps/MeteorFalls_B1F_2R/scripts.pory"
	waitmoncry
# 24 "data/maps/MeteorFalls_B1F_2R/scripts.pory"
	seteventmon SPECIES_DIANCIE, 50
# 25 "data/maps/MeteorFalls_B1F_2R/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 26 "data/maps/MeteorFalls_B1F_2R/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 27 "data/maps/MeteorFalls_B1F_2R/scripts.pory"
	waitstate
# 28 "data/maps/MeteorFalls_B1F_2R/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 29 "data/maps/MeteorFalls_B1F_2R/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 30 "data/maps/MeteorFalls_B1F_2R/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq BattleDiancie_2
BattleDiancie_1:
# 33 "data/maps/MeteorFalls_B1F_2R/scripts.pory"
	release
	end

BattleDiancie_2:
# 31 "data/maps/MeteorFalls_B1F_2R/scripts.pory"
	setflag FLAG_CAUGHT_DIANCIE
	goto BattleDiancie_1


BattleDiancie_Text_0:
# 22 "data/maps/MeteorFalls_B1F_2R/scripts.pory"
	.string "Dii-diiii!$"
