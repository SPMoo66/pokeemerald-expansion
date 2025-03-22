PathlessPlainAlt_MapScripts::
# 6 "data/maps/PathlessPlainAlt/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PathlessPlainAlt_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 20 "data/maps/PathlessPlainAlt/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, PathlessPlainAlt_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

PathlessPlainAlt_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 7 "data/maps/PathlessPlainAlt/scripts.pory"
	goto_if_set FLAG_CAUGHT_IRON_CROWN, PathlessPlainAlt_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
PathlessPlainAlt_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 11 "data/maps/PathlessPlainAlt/scripts.pory"
	goto_if_set FLAG_CAUGHT_IRON_BOULDER, PathlessPlainAlt_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
PathlessPlainAlt_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 15 "data/maps/PathlessPlainAlt/scripts.pory"
	goto_if_set FLAG_CAUGHT_IRON_LEAVES, PathlessPlainAlt_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
	return

PathlessPlainAlt_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 8 "data/maps/PathlessPlainAlt/scripts.pory"
	setflag FLAG_TEMP_2
# 9 "data/maps/PathlessPlainAlt/scripts.pory"
	removeobject 1
	goto PathlessPlainAlt_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

PathlessPlainAlt_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 12 "data/maps/PathlessPlainAlt/scripts.pory"
	setflag FLAG_TEMP_3
# 13 "data/maps/PathlessPlainAlt/scripts.pory"
	removeobject 2
	goto PathlessPlainAlt_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

PathlessPlainAlt_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 16 "data/maps/PathlessPlainAlt/scripts.pory"
	setflag FLAG_TEMP_4
# 17 "data/maps/PathlessPlainAlt/scripts.pory"
	removeobject 3
	return

PathlessPlainAlt_MapScripts_MAP_SCRIPT_ON_RESUME:
# 21 "data/maps/PathlessPlainAlt/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, PathlessPlainAlt_MapScripts_MAP_SCRIPT_ON_RESUME_1
	return

PathlessPlainAlt_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 22 "data/maps/PathlessPlainAlt/scripts.pory"
	removeobject VAR_LAST_TALKED
	return


PathlessPlainAlt_Portal::
# 28 "data/maps/PathlessPlainAlt/scripts.pory"
	warp MAP_PATHLESS_PLAIN, 0
	return


BattleIronCrown::
# 32 "data/maps/PathlessPlainAlt/scripts.pory"
	lock
# 33 "data/maps/PathlessPlainAlt/scripts.pory"
	faceplayer
# 34 "data/maps/PathlessPlainAlt/scripts.pory"
	setvar VAR_LAST_TALKED, 1
# 35 "data/maps/PathlessPlainAlt/scripts.pory"
	playmoncry SPECIES_IRON_CROWN, CRY_MODE_ENCOUNTER
# 36 "data/maps/PathlessPlainAlt/scripts.pory"
	msgbox BattleIronCrown_Text_0
# 37 "data/maps/PathlessPlainAlt/scripts.pory"
	waitmoncry
# 38 "data/maps/PathlessPlainAlt/scripts.pory"
	setwildbattle SPECIES_IRON_CROWN, 40
# 39 "data/maps/PathlessPlainAlt/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 40 "data/maps/PathlessPlainAlt/scripts.pory"
	special StartRegiBattle
# 41 "data/maps/PathlessPlainAlt/scripts.pory"
	waitstate
# 42 "data/maps/PathlessPlainAlt/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 43 "data/maps/PathlessPlainAlt/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 44 "data/maps/PathlessPlainAlt/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq BattleIronCrown_2
BattleIronCrown_1:
# 47 "data/maps/PathlessPlainAlt/scripts.pory"
	release
	end

BattleIronCrown_2:
# 45 "data/maps/PathlessPlainAlt/scripts.pory"
	setflag FLAG_CAUGHT_IRON_CROWN
	goto BattleIronCrown_1


BattleIronBoulder::
# 52 "data/maps/PathlessPlainAlt/scripts.pory"
	lock
# 53 "data/maps/PathlessPlainAlt/scripts.pory"
	faceplayer
# 54 "data/maps/PathlessPlainAlt/scripts.pory"
	setvar VAR_LAST_TALKED, 2
# 55 "data/maps/PathlessPlainAlt/scripts.pory"
	playmoncry SPECIES_IRON_BOULDER, CRY_MODE_ENCOUNTER
# 56 "data/maps/PathlessPlainAlt/scripts.pory"
	msgbox BattleIronBoulder_Text_0
# 57 "data/maps/PathlessPlainAlt/scripts.pory"
	waitmoncry
# 58 "data/maps/PathlessPlainAlt/scripts.pory"
	setwildbattle SPECIES_IRON_BOULDER, 40
# 59 "data/maps/PathlessPlainAlt/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 60 "data/maps/PathlessPlainAlt/scripts.pory"
	special StartRegiBattle
# 61 "data/maps/PathlessPlainAlt/scripts.pory"
	waitstate
# 62 "data/maps/PathlessPlainAlt/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 63 "data/maps/PathlessPlainAlt/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 64 "data/maps/PathlessPlainAlt/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq BattleIronBoulder_2
BattleIronBoulder_1:
# 67 "data/maps/PathlessPlainAlt/scripts.pory"
	release
	end

BattleIronBoulder_2:
# 65 "data/maps/PathlessPlainAlt/scripts.pory"
	setflag FLAG_CAUGHT_IRON_BOULDER
	goto BattleIronBoulder_1


BattleIronLeaves::
# 72 "data/maps/PathlessPlainAlt/scripts.pory"
	lock
# 73 "data/maps/PathlessPlainAlt/scripts.pory"
	faceplayer
# 74 "data/maps/PathlessPlainAlt/scripts.pory"
	setvar VAR_LAST_TALKED, 3
# 75 "data/maps/PathlessPlainAlt/scripts.pory"
	playmoncry SPECIES_IRON_LEAVES, CRY_MODE_ENCOUNTER
# 76 "data/maps/PathlessPlainAlt/scripts.pory"
	msgbox BattleIronLeaves_Text_0
# 77 "data/maps/PathlessPlainAlt/scripts.pory"
	waitmoncry
# 78 "data/maps/PathlessPlainAlt/scripts.pory"
	setwildbattle SPECIES_IRON_LEAVES, 40
# 79 "data/maps/PathlessPlainAlt/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 80 "data/maps/PathlessPlainAlt/scripts.pory"
	special StartRegiBattle
# 81 "data/maps/PathlessPlainAlt/scripts.pory"
	waitstate
# 82 "data/maps/PathlessPlainAlt/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 83 "data/maps/PathlessPlainAlt/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 84 "data/maps/PathlessPlainAlt/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq BattleIronLeaves_2
BattleIronLeaves_1:
# 87 "data/maps/PathlessPlainAlt/scripts.pory"
	release
	end

BattleIronLeaves_2:
# 85 "data/maps/PathlessPlainAlt/scripts.pory"
	setflag FLAG_CAUGHT_IRON_LEAVES
	goto BattleIronLeaves_1


BattleIronCrown_Text_0:
# 36 "data/maps/PathlessPlainAlt/scripts.pory"
	.string "Kaw-brah-on!$"

BattleIronBoulder_Text_0:
# 56 "data/maps/PathlessPlainAlt/scripts.pory"
	.string "Gurr-oonnn!$"

BattleIronLeaves_Text_0:
# 76 "data/maps/PathlessPlainAlt/scripts.pory"
	.string "Aeepraaa!$"
