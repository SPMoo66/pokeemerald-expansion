FloralParadise_MapScripts::
# 4 "data/maps/FloralParadise/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FloralParadise_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 10 "data/maps/FloralParadise/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, FloralParadise_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

FloralParadise_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 5 "data/maps/FloralParadise/scripts.pory"
	goto_if_set FLAG_CAUGHT_SHAYMIN, FloralParadise_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

FloralParadise_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 6 "data/maps/FloralParadise/scripts.pory"
	setflag FLAG_TEMP_2
# 7 "data/maps/FloralParadise/scripts.pory"
	removeobject 1
	return

FloralParadise_MapScripts_MAP_SCRIPT_ON_RESUME:
# 11 "data/maps/FloralParadise/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, FloralParadise_MapScripts_MAP_SCRIPT_ON_RESUME_1
	return

FloralParadise_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 12 "data/maps/FloralParadise/scripts.pory"
	removeobject VAR_LAST_TALKED
	return


BattleShaymin::
# 18 "data/maps/FloralParadise/scripts.pory"
	lock
# 19 "data/maps/FloralParadise/scripts.pory"
	faceplayer
# 20 "data/maps/FloralParadise/scripts.pory"
	setvar VAR_LAST_TALKED, 1
# 21 "data/maps/FloralParadise/scripts.pory"
	playmoncry SPECIES_SHAYMIN, CRY_MODE_ENCOUNTER
# 22 "data/maps/FloralParadise/scripts.pory"
	msgbox BattleShaymin_Text_0
# 23 "data/maps/FloralParadise/scripts.pory"
	waitmoncry
# 24 "data/maps/FloralParadise/scripts.pory"
	seteventmon SPECIES_SHAYMIN, 40
# 25 "data/maps/FloralParadise/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 26 "data/maps/FloralParadise/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 27 "data/maps/FloralParadise/scripts.pory"
	waitstate
# 28 "data/maps/FloralParadise/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 29 "data/maps/FloralParadise/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 30 "data/maps/FloralParadise/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq BattleShaymin_2
BattleShaymin_1:
# 33 "data/maps/FloralParadise/scripts.pory"
	release
	end

BattleShaymin_2:
# 31 "data/maps/FloralParadise/scripts.pory"
	setflag FLAG_CAUGHT_SHAYMIN
	goto BattleShaymin_1


BattleShaymin_Text_0:
# 22 "data/maps/FloralParadise/scripts.pory"
	.string "Kyuu uuhn!$"
