PathlessPlain_MapScripts::
# 7 "data/maps/PathlessPlain/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PathlessPlain_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 25 "data/maps/PathlessPlain/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, PathlessPlain_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

PathlessPlain_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 8 "data/maps/PathlessPlain/scripts.pory"
	goto_if_set FLAG_CAUGHT_COBALION, PathlessPlain_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 12 "data/maps/PathlessPlain/scripts.pory"
	goto_if_set FLAG_CAUGHT_TERRAKION, PathlessPlain_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 16 "data/maps/PathlessPlain/scripts.pory"
	goto_if_set FLAG_CAUGHT_VIRIZION, PathlessPlain_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
# 20 "data/maps/PathlessPlain/scripts.pory"
	goto_if_set FLAG_CAUGHT_KELDEO, PathlessPlain_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
	return

PathlessPlain_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 9 "data/maps/PathlessPlain/scripts.pory"
	setflag FLAG_TEMP_2
# 10 "data/maps/PathlessPlain/scripts.pory"
	removeobject 1
	return

PathlessPlain_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 13 "data/maps/PathlessPlain/scripts.pory"
	setflag FLAG_TEMP_3
# 14 "data/maps/PathlessPlain/scripts.pory"
	removeobject 2
	return

PathlessPlain_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
# 17 "data/maps/PathlessPlain/scripts.pory"
	setflag FLAG_TEMP_4
# 18 "data/maps/PathlessPlain/scripts.pory"
	removeobject 3
	return

PathlessPlain_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 21 "data/maps/PathlessPlain/scripts.pory"
	setflag FLAG_TEMP_5
# 22 "data/maps/PathlessPlain/scripts.pory"
	removeobject 4
	return

PathlessPlain_MapScripts_MAP_SCRIPT_ON_RESUME:
# 26 "data/maps/PathlessPlain/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, PathlessPlain_MapScripts_MAP_SCRIPT_ON_RESUME_1
	return

PathlessPlain_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 27 "data/maps/PathlessPlain/scripts.pory"
	removeobject VAR_LAST_TALKED
	return


PathlessPlain_Portal::
# 33 "data/maps/PathlessPlain/scripts.pory"
	warp MAP_PATHLESS_PLAIN_ALT, 0
	return


BattleCobalion::
# 37 "data/maps/PathlessPlain/scripts.pory"
	lock
# 38 "data/maps/PathlessPlain/scripts.pory"
	faceplayer
# 39 "data/maps/PathlessPlain/scripts.pory"
	setvar VAR_LAST_TALKED, 1
# 40 "data/maps/PathlessPlain/scripts.pory"
	playmoncry SPECIES_COBALION, CRY_MODE_ENCOUNTER
# 41 "data/maps/PathlessPlain/scripts.pory"
	msgbox BattleCobalion_Text_0
# 42 "data/maps/PathlessPlain/scripts.pory"
	waitmoncry
# 43 "data/maps/PathlessPlain/scripts.pory"
	seteventmon SPECIES_COBALION, 40
# 44 "data/maps/PathlessPlain/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 45 "data/maps/PathlessPlain/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 46 "data/maps/PathlessPlain/scripts.pory"
	waitstate
# 47 "data/maps/PathlessPlain/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 48 "data/maps/PathlessPlain/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 49 "data/maps/PathlessPlain/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq BattleCobalion_2
BattleCobalion_1:
# 52 "data/maps/PathlessPlain/scripts.pory"
	release
	end

BattleCobalion_2:
# 50 "data/maps/PathlessPlain/scripts.pory"
	setflag FLAG_CAUGHT_COBALION
	goto BattleCobalion_1


BattleTerrakion::
# 57 "data/maps/PathlessPlain/scripts.pory"
	lock
# 58 "data/maps/PathlessPlain/scripts.pory"
	faceplayer
# 59 "data/maps/PathlessPlain/scripts.pory"
	setvar VAR_LAST_TALKED, 2
# 60 "data/maps/PathlessPlain/scripts.pory"
	playmoncry SPECIES_TERRAKION, CRY_MODE_ENCOUNTER
# 61 "data/maps/PathlessPlain/scripts.pory"
	msgbox BattleTerrakion_Text_0
# 62 "data/maps/PathlessPlain/scripts.pory"
	waitmoncry
# 63 "data/maps/PathlessPlain/scripts.pory"
	seteventmon SPECIES_TERRAKION, 40
# 64 "data/maps/PathlessPlain/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 65 "data/maps/PathlessPlain/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 66 "data/maps/PathlessPlain/scripts.pory"
	waitstate
# 67 "data/maps/PathlessPlain/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 68 "data/maps/PathlessPlain/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 69 "data/maps/PathlessPlain/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq BattleTerrakion_2
BattleTerrakion_1:
# 72 "data/maps/PathlessPlain/scripts.pory"
	release
	end

BattleTerrakion_2:
# 70 "data/maps/PathlessPlain/scripts.pory"
	setflag FLAG_CAUGHT_TERRAKION
	goto BattleTerrakion_1


BattleVirizion::
# 77 "data/maps/PathlessPlain/scripts.pory"
	lock
# 78 "data/maps/PathlessPlain/scripts.pory"
	faceplayer
# 79 "data/maps/PathlessPlain/scripts.pory"
	setvar VAR_LAST_TALKED, 3
# 80 "data/maps/PathlessPlain/scripts.pory"
	playmoncry SPECIES_VIRIZION, CRY_MODE_ENCOUNTER
# 81 "data/maps/PathlessPlain/scripts.pory"
	msgbox BattleVirizion_Text_0
# 82 "data/maps/PathlessPlain/scripts.pory"
	waitmoncry
# 83 "data/maps/PathlessPlain/scripts.pory"
	seteventmon SPECIES_VIRIZION, 40
# 84 "data/maps/PathlessPlain/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 85 "data/maps/PathlessPlain/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 86 "data/maps/PathlessPlain/scripts.pory"
	waitstate
# 87 "data/maps/PathlessPlain/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 88 "data/maps/PathlessPlain/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 89 "data/maps/PathlessPlain/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq BattleVirizion_2
BattleVirizion_1:
# 92 "data/maps/PathlessPlain/scripts.pory"
	release
	end

BattleVirizion_2:
# 90 "data/maps/PathlessPlain/scripts.pory"
	setflag FLAG_CAUGHT_VIRIZION
	goto BattleVirizion_1


BattleKeldeo::
# 97 "data/maps/PathlessPlain/scripts.pory"
	lock
# 98 "data/maps/PathlessPlain/scripts.pory"
	faceplayer
# 99 "data/maps/PathlessPlain/scripts.pory"
	setvar VAR_LAST_TALKED, 4
# 100 "data/maps/PathlessPlain/scripts.pory"
	playmoncry SPECIES_KELDEO, CRY_MODE_ENCOUNTER
# 101 "data/maps/PathlessPlain/scripts.pory"
	msgbox BattleKeldeo_Text_0
# 102 "data/maps/PathlessPlain/scripts.pory"
	waitmoncry
# 103 "data/maps/PathlessPlain/scripts.pory"
	seteventmon SPECIES_KELDEO, 40
# 104 "data/maps/PathlessPlain/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 105 "data/maps/PathlessPlain/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 106 "data/maps/PathlessPlain/scripts.pory"
	waitstate
# 107 "data/maps/PathlessPlain/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 108 "data/maps/PathlessPlain/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 109 "data/maps/PathlessPlain/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq BattleKeldeo_2
BattleKeldeo_1:
# 112 "data/maps/PathlessPlain/scripts.pory"
	release
	end

BattleKeldeo_2:
# 110 "data/maps/PathlessPlain/scripts.pory"
	setflag FLAG_CAUGHT_KELDEO
	goto BattleKeldeo_1


BattleCobalion_Text_0:
# 41 "data/maps/PathlessPlain/scripts.pory"
	.string "Kawbraa!$"

BattleTerrakion_Text_0:
# 61 "data/maps/PathlessPlain/scripts.pory"
	.string "Gurooooohhh!$"

BattleVirizion_Text_0:
# 81 "data/maps/PathlessPlain/scripts.pory"
	.string "Aeepraaa!$"

BattleKeldeo_Text_0:
# 101 "data/maps/PathlessPlain/scripts.pory"
	.string "Rarurarii!$"
