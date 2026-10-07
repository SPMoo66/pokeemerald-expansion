SeaSpiritsDen_MapScripts::
# 6 "data/maps/SeaSpiritsDen/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SeaSpiritsDen_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 20 "data/maps/SeaSpiritsDen/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, SeaSpiritsDen_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

SeaSpiritsDen_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 7 "data/maps/SeaSpiritsDen/scripts.pory"
	goto_if_set FLAG_CAUGHT_ARTICUNO, SeaSpiritsDen_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
SeaSpiritsDen_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 11 "data/maps/SeaSpiritsDen/scripts.pory"
	goto_if_set FLAG_CAUGHT_ZAPDOS, SeaSpiritsDen_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
SeaSpiritsDen_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 15 "data/maps/SeaSpiritsDen/scripts.pory"
	goto_if_set FLAG_CAUGHT_MOLTRES, SeaSpiritsDen_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
	return

SeaSpiritsDen_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 8 "data/maps/SeaSpiritsDen/scripts.pory"
	setflag FLAG_TEMP_2
# 9 "data/maps/SeaSpiritsDen/scripts.pory"
	removeobject 1
	goto SeaSpiritsDen_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

SeaSpiritsDen_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 12 "data/maps/SeaSpiritsDen/scripts.pory"
	setflag FLAG_TEMP_3
# 13 "data/maps/SeaSpiritsDen/scripts.pory"
	removeobject 2
	goto SeaSpiritsDen_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

SeaSpiritsDen_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 16 "data/maps/SeaSpiritsDen/scripts.pory"
	setflag FLAG_TEMP_4
# 17 "data/maps/SeaSpiritsDen/scripts.pory"
	removeobject 3
	return

SeaSpiritsDen_MapScripts_MAP_SCRIPT_ON_RESUME:
# 21 "data/maps/SeaSpiritsDen/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, SeaSpiritsDen_MapScripts_MAP_SCRIPT_ON_RESUME_1
	return

SeaSpiritsDen_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 22 "data/maps/SeaSpiritsDen/scripts.pory"
	removeobject VAR_LAST_TALKED
	return


SeaSpiritsDen_Portal::
# 28 "data/maps/SeaSpiritsDen/scripts.pory"
	warp MAP_SEA_SPIRITS_DEN_ALT, 0
# 29 "data/maps/SeaSpiritsDen/scripts.pory"
	waitstate
	return


BattleArticuno::
# 33 "data/maps/SeaSpiritsDen/scripts.pory"
	lock
# 34 "data/maps/SeaSpiritsDen/scripts.pory"
	faceplayer
# 35 "data/maps/SeaSpiritsDen/scripts.pory"
	setvar VAR_LAST_TALKED, 1
# 36 "data/maps/SeaSpiritsDen/scripts.pory"
	playmoncry SPECIES_ARTICUNO, CRY_MODE_ENCOUNTER
# 37 "data/maps/SeaSpiritsDen/scripts.pory"
	msgbox BattleArticuno_Text_0
# 38 "data/maps/SeaSpiritsDen/scripts.pory"
	waitmoncry
# 39 "data/maps/SeaSpiritsDen/scripts.pory"
	seteventmon SPECIES_ARTICUNO, 40
# 40 "data/maps/SeaSpiritsDen/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 41 "data/maps/SeaSpiritsDen/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 42 "data/maps/SeaSpiritsDen/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 43 "data/maps/SeaSpiritsDen/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 44 "data/maps/SeaSpiritsDen/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq BattleArticuno_2
BattleArticuno_1:
# 47 "data/maps/SeaSpiritsDen/scripts.pory"
	release
	end

BattleArticuno_2:
# 45 "data/maps/SeaSpiritsDen/scripts.pory"
	setflag FLAG_CAUGHT_ARTICUNO
	goto BattleArticuno_1


BattleZapdos::
# 52 "data/maps/SeaSpiritsDen/scripts.pory"
	lock
# 53 "data/maps/SeaSpiritsDen/scripts.pory"
	faceplayer
# 54 "data/maps/SeaSpiritsDen/scripts.pory"
	setvar VAR_LAST_TALKED, 2
# 55 "data/maps/SeaSpiritsDen/scripts.pory"
	playmoncry SPECIES_ZAPDOS, CRY_MODE_ENCOUNTER
# 56 "data/maps/SeaSpiritsDen/scripts.pory"
	msgbox BattleArticuno_Text_0
# 57 "data/maps/SeaSpiritsDen/scripts.pory"
	waitmoncry
# 58 "data/maps/SeaSpiritsDen/scripts.pory"
	seteventmon SPECIES_ZAPDOS, 40
# 59 "data/maps/SeaSpiritsDen/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 60 "data/maps/SeaSpiritsDen/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 61 "data/maps/SeaSpiritsDen/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 62 "data/maps/SeaSpiritsDen/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 63 "data/maps/SeaSpiritsDen/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq BattleZapdos_2
BattleZapdos_1:
# 66 "data/maps/SeaSpiritsDen/scripts.pory"
	release
	end

BattleZapdos_2:
# 64 "data/maps/SeaSpiritsDen/scripts.pory"
	setflag FLAG_CAUGHT_ZAPDOS
	goto BattleZapdos_1


BattleMoltres::
# 71 "data/maps/SeaSpiritsDen/scripts.pory"
	lock
# 72 "data/maps/SeaSpiritsDen/scripts.pory"
	faceplayer
# 73 "data/maps/SeaSpiritsDen/scripts.pory"
	setvar VAR_LAST_TALKED, 3
# 74 "data/maps/SeaSpiritsDen/scripts.pory"
	playmoncry SPECIES_MOLTRES, CRY_MODE_ENCOUNTER
# 75 "data/maps/SeaSpiritsDen/scripts.pory"
	msgbox BattleArticuno_Text_0
# 76 "data/maps/SeaSpiritsDen/scripts.pory"
	waitmoncry
# 77 "data/maps/SeaSpiritsDen/scripts.pory"
	seteventmon SPECIES_MOLTRES, 40
# 78 "data/maps/SeaSpiritsDen/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 79 "data/maps/SeaSpiritsDen/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 80 "data/maps/SeaSpiritsDen/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 81 "data/maps/SeaSpiritsDen/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 82 "data/maps/SeaSpiritsDen/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq BattleMoltres_2
BattleMoltres_1:
# 85 "data/maps/SeaSpiritsDen/scripts.pory"
	release
	end

BattleMoltres_2:
# 83 "data/maps/SeaSpiritsDen/scripts.pory"
	setflag FLAG_CAUGHT_MOLTRES
	goto BattleMoltres_1


BattleArticuno_Text_0:
# 37 "data/maps/SeaSpiritsDen/scripts.pory"
	.string "Gyaoo!$"
