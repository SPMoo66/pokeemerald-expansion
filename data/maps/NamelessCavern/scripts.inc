NamelessCavern_MapScripts::
# 6 "data/maps/NamelessCavern/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, NamelessCavern_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 20 "data/maps/NamelessCavern/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, NamelessCavern_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

NamelessCavern_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 7 "data/maps/NamelessCavern/scripts.pory"
	goto_if_set FLAG_CAUGHT_MESPRIT, NamelessCavern_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 11 "data/maps/NamelessCavern/scripts.pory"
	goto_if_set FLAG_CAUGHT_UXIE, NamelessCavern_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 15 "data/maps/NamelessCavern/scripts.pory"
	goto_if_set FLAG_CAUGHT_AZELF, NamelessCavern_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
	return

NamelessCavern_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 8 "data/maps/NamelessCavern/scripts.pory"
	setflag FLAG_TEMP_2
# 9 "data/maps/NamelessCavern/scripts.pory"
	removeobject 1
	return

NamelessCavern_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 12 "data/maps/NamelessCavern/scripts.pory"
	setflag FLAG_TEMP_3
# 13 "data/maps/NamelessCavern/scripts.pory"
	removeobject 2
	return

NamelessCavern_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
# 16 "data/maps/NamelessCavern/scripts.pory"
	setflag FLAG_TEMP_4
# 17 "data/maps/NamelessCavern/scripts.pory"
	removeobject 3
	return

NamelessCavern_MapScripts_MAP_SCRIPT_ON_RESUME:
# 21 "data/maps/NamelessCavern/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, NamelessCavern_MapScripts_MAP_SCRIPT_ON_RESUME_1
	return

NamelessCavern_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 22 "data/maps/NamelessCavern/scripts.pory"
	removeobject VAR_LAST_TALKED
	return


BattleMesprit::
# 28 "data/maps/NamelessCavern/scripts.pory"
	lock
# 29 "data/maps/NamelessCavern/scripts.pory"
	faceplayer
# 30 "data/maps/NamelessCavern/scripts.pory"
	setvar VAR_LAST_TALKED, 1
# 31 "data/maps/NamelessCavern/scripts.pory"
	playmoncry SPECIES_MESPRIT, CRY_MODE_ENCOUNTER
# 32 "data/maps/NamelessCavern/scripts.pory"
	msgbox BattleMesprit_Text_0
# 33 "data/maps/NamelessCavern/scripts.pory"
	waitmoncry
# 34 "data/maps/NamelessCavern/scripts.pory"
	seteventmon SPECIES_MESPRIT, 40
# 35 "data/maps/NamelessCavern/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 36 "data/maps/NamelessCavern/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 37 "data/maps/NamelessCavern/scripts.pory"
	waitstate
# 38 "data/maps/NamelessCavern/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 39 "data/maps/NamelessCavern/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 40 "data/maps/NamelessCavern/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq BattleMesprit_2
BattleMesprit_1:
# 43 "data/maps/NamelessCavern/scripts.pory"
	release
	end

BattleMesprit_2:
# 41 "data/maps/NamelessCavern/scripts.pory"
	setflag FLAG_CAUGHT_MESPRIT
	goto BattleMesprit_1


BattleUxie::
# 48 "data/maps/NamelessCavern/scripts.pory"
	lock
# 49 "data/maps/NamelessCavern/scripts.pory"
	faceplayer
# 50 "data/maps/NamelessCavern/scripts.pory"
	setvar VAR_LAST_TALKED, 2
# 51 "data/maps/NamelessCavern/scripts.pory"
	playmoncry SPECIES_UXIE, CRY_MODE_ENCOUNTER
# 52 "data/maps/NamelessCavern/scripts.pory"
	msgbox BattleMesprit_Text_0
# 53 "data/maps/NamelessCavern/scripts.pory"
	waitmoncry
# 54 "data/maps/NamelessCavern/scripts.pory"
	seteventmon SPECIES_UXIE, 40
# 55 "data/maps/NamelessCavern/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 56 "data/maps/NamelessCavern/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 57 "data/maps/NamelessCavern/scripts.pory"
	waitstate
# 58 "data/maps/NamelessCavern/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 59 "data/maps/NamelessCavern/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 60 "data/maps/NamelessCavern/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq BattleUxie_2
BattleUxie_1:
# 63 "data/maps/NamelessCavern/scripts.pory"
	release
	end

BattleUxie_2:
# 61 "data/maps/NamelessCavern/scripts.pory"
	setflag FLAG_CAUGHT_UXIE
	goto BattleUxie_1


BattleAzelf::
# 68 "data/maps/NamelessCavern/scripts.pory"
	lock
# 69 "data/maps/NamelessCavern/scripts.pory"
	faceplayer
# 70 "data/maps/NamelessCavern/scripts.pory"
	setvar VAR_LAST_TALKED, 3
# 71 "data/maps/NamelessCavern/scripts.pory"
	playmoncry SPECIES_AZELF, CRY_MODE_ENCOUNTER
# 72 "data/maps/NamelessCavern/scripts.pory"
	msgbox BattleMesprit_Text_0
# 73 "data/maps/NamelessCavern/scripts.pory"
	waitmoncry
# 74 "data/maps/NamelessCavern/scripts.pory"
	seteventmon SPECIES_AZELF, 40
# 75 "data/maps/NamelessCavern/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 76 "data/maps/NamelessCavern/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 77 "data/maps/NamelessCavern/scripts.pory"
	waitstate
# 78 "data/maps/NamelessCavern/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 79 "data/maps/NamelessCavern/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 80 "data/maps/NamelessCavern/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq BattleAzelf_2
BattleAzelf_1:
# 83 "data/maps/NamelessCavern/scripts.pory"
	release
	end

BattleAzelf_2:
# 81 "data/maps/NamelessCavern/scripts.pory"
	setflag FLAG_CAUGHT_AZELF
	goto BattleAzelf_1


BattleMesprit_Text_0:
# 32 "data/maps/NamelessCavern/scripts.pory"
	.string "Gwooa!$"
