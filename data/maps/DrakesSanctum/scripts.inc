DrakesSanctum_MapScripts::
# 4 "data/maps/DrakesSanctum/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DrakesSanctum_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 10 "data/maps/DrakesSanctum/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, DrakesSanctum_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

DrakesSanctum_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 5 "data/maps/DrakesSanctum/scripts.pory"
	goto_if_set FLAG_CAUGHT_REGIDRAGO, DrakesSanctum_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

DrakesSanctum_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 6 "data/maps/DrakesSanctum/scripts.pory"
	setflag FLAG_TEMP_2
# 7 "data/maps/DrakesSanctum/scripts.pory"
	removeobject 1
	return

DrakesSanctum_MapScripts_MAP_SCRIPT_ON_RESUME:
# 11 "data/maps/DrakesSanctum/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, DrakesSanctum_MapScripts_MAP_SCRIPT_ON_RESUME_1
	return

DrakesSanctum_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 12 "data/maps/DrakesSanctum/scripts.pory"
	removeobject 1
	return


BattleRegidrago::
# 18 "data/maps/DrakesSanctum/scripts.pory"
	lock
# 19 "data/maps/DrakesSanctum/scripts.pory"
	playmoncry SPECIES_REGIDRAGO, CRY_MODE_ENCOUNTER
# 20 "data/maps/DrakesSanctum/scripts.pory"
	msgbox BattleRegidrago_Text_0
# 21 "data/maps/DrakesSanctum/scripts.pory"
	waitmoncry
# 22 "data/maps/DrakesSanctum/scripts.pory"
	setwildbattle SPECIES_REGIDRAGO, 40
# 23 "data/maps/DrakesSanctum/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 24 "data/maps/DrakesSanctum/scripts.pory"
	special StartRegiBattle
# 25 "data/maps/DrakesSanctum/scripts.pory"
	waitstate
# 26 "data/maps/DrakesSanctum/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 27 "data/maps/DrakesSanctum/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 28 "data/maps/DrakesSanctum/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq BattleRegidrago_2
BattleRegidrago_1:
# 31 "data/maps/DrakesSanctum/scripts.pory"
	release
	end

BattleRegidrago_2:
# 29 "data/maps/DrakesSanctum/scripts.pory"
	setflag FLAG_CAUGHT_REGIDRAGO
	goto BattleRegidrago_1


BattleRegidrago_Text_0:
# 20 "data/maps/DrakesSanctum/scripts.pory"
	.string "Zagd.$"
