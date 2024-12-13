GaleforceCliffs_MapScripts::
# 7 "data/maps/GaleforceCliffs/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, GaleforceCliffs_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 25 "data/maps/GaleforceCliffs/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, GaleforceCliffs_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

GaleforceCliffs_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 8 "data/maps/GaleforceCliffs/scripts.pory"
	goto_if_set FLAG_CAUGHT_TORNADUS, GaleforceCliffs_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
GaleforceCliffs_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 12 "data/maps/GaleforceCliffs/scripts.pory"
	goto_if_set FLAG_CAUGHT_THUNDURUS, GaleforceCliffs_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
GaleforceCliffs_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 16 "data/maps/GaleforceCliffs/scripts.pory"
	goto_if_set FLAG_CAUGHT_ENAMORUS, GaleforceCliffs_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
GaleforceCliffs_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 20 "data/maps/GaleforceCliffs/scripts.pory"
	goto_if_set FLAG_CAUGHT_LANDORUS, GaleforceCliffs_MapScripts_MAP_SCRIPT_ON_TRANSITION_10
	return

GaleforceCliffs_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 9 "data/maps/GaleforceCliffs/scripts.pory"
	setflag FLAG_TEMP_2
# 10 "data/maps/GaleforceCliffs/scripts.pory"
	removeobject 1
	goto GaleforceCliffs_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

GaleforceCliffs_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 13 "data/maps/GaleforceCliffs/scripts.pory"
	setflag FLAG_TEMP_3
# 14 "data/maps/GaleforceCliffs/scripts.pory"
	removeobject 2
	goto GaleforceCliffs_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

GaleforceCliffs_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 17 "data/maps/GaleforceCliffs/scripts.pory"
	setflag FLAG_TEMP_4
# 18 "data/maps/GaleforceCliffs/scripts.pory"
	removeobject 3
	goto GaleforceCliffs_MapScripts_MAP_SCRIPT_ON_TRANSITION_7

GaleforceCliffs_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 21 "data/maps/GaleforceCliffs/scripts.pory"
	setflag FLAG_TEMP_5
# 22 "data/maps/GaleforceCliffs/scripts.pory"
	removeobject 4
	return

GaleforceCliffs_MapScripts_MAP_SCRIPT_ON_RESUME:
# 26 "data/maps/GaleforceCliffs/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, GaleforceCliffs_MapScripts_MAP_SCRIPT_ON_RESUME_1
	return

GaleforceCliffs_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 27 "data/maps/GaleforceCliffs/scripts.pory"
	removeobject VAR_LAST_TALKED
	return


BattleTornadus::
# 33 "data/maps/GaleforceCliffs/scripts.pory"
	lock
# 34 "data/maps/GaleforceCliffs/scripts.pory"
	faceplayer
# 35 "data/maps/GaleforceCliffs/scripts.pory"
	setvar VAR_LAST_TALKED, 1
# 36 "data/maps/GaleforceCliffs/scripts.pory"
	playmoncry SPECIES_TORNADUS, CRY_MODE_ENCOUNTER
# 37 "data/maps/GaleforceCliffs/scripts.pory"
	msgbox BattleTornadus_Text_0
# 38 "data/maps/GaleforceCliffs/scripts.pory"
	waitmoncry
# 39 "data/maps/GaleforceCliffs/scripts.pory"
	seteventmon SPECIES_TORNADUS, 40
# 40 "data/maps/GaleforceCliffs/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 41 "data/maps/GaleforceCliffs/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 42 "data/maps/GaleforceCliffs/scripts.pory"
	waitstate
# 43 "data/maps/GaleforceCliffs/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 44 "data/maps/GaleforceCliffs/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 45 "data/maps/GaleforceCliffs/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq BattleTornadus_2
BattleTornadus_1:
# 48 "data/maps/GaleforceCliffs/scripts.pory"
	release
	end

BattleTornadus_2:
# 46 "data/maps/GaleforceCliffs/scripts.pory"
	setflag FLAG_CAUGHT_TORNADUS
	goto BattleTornadus_1


BattleThundurus::
# 53 "data/maps/GaleforceCliffs/scripts.pory"
	lock
# 54 "data/maps/GaleforceCliffs/scripts.pory"
	faceplayer
# 55 "data/maps/GaleforceCliffs/scripts.pory"
	setvar VAR_LAST_TALKED, 2
# 56 "data/maps/GaleforceCliffs/scripts.pory"
	playmoncry SPECIES_THUNDURUS, CRY_MODE_ENCOUNTER
# 57 "data/maps/GaleforceCliffs/scripts.pory"
	msgbox BattleThundurus_Text_0
# 58 "data/maps/GaleforceCliffs/scripts.pory"
	waitmoncry
# 59 "data/maps/GaleforceCliffs/scripts.pory"
	seteventmon SPECIES_THUNDURUS, 40
# 60 "data/maps/GaleforceCliffs/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 61 "data/maps/GaleforceCliffs/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 62 "data/maps/GaleforceCliffs/scripts.pory"
	waitstate
# 63 "data/maps/GaleforceCliffs/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 64 "data/maps/GaleforceCliffs/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 65 "data/maps/GaleforceCliffs/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq BattleThundurus_2
BattleThundurus_1:
# 68 "data/maps/GaleforceCliffs/scripts.pory"
	release
	end

BattleThundurus_2:
# 66 "data/maps/GaleforceCliffs/scripts.pory"
	setflag FLAG_CAUGHT_THUNDURUS
	goto BattleThundurus_1


BattleEnamorus::
# 73 "data/maps/GaleforceCliffs/scripts.pory"
	lock
# 74 "data/maps/GaleforceCliffs/scripts.pory"
	faceplayer
# 75 "data/maps/GaleforceCliffs/scripts.pory"
	setvar VAR_LAST_TALKED, 3
# 76 "data/maps/GaleforceCliffs/scripts.pory"
	playmoncry SPECIES_ENAMORUS, CRY_MODE_ENCOUNTER
# 77 "data/maps/GaleforceCliffs/scripts.pory"
	msgbox BattleEnamorus_Text_0
# 78 "data/maps/GaleforceCliffs/scripts.pory"
	waitmoncry
# 79 "data/maps/GaleforceCliffs/scripts.pory"
	seteventmon SPECIES_ENAMORUS, 40
# 80 "data/maps/GaleforceCliffs/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 81 "data/maps/GaleforceCliffs/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 82 "data/maps/GaleforceCliffs/scripts.pory"
	waitstate
# 83 "data/maps/GaleforceCliffs/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 84 "data/maps/GaleforceCliffs/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 85 "data/maps/GaleforceCliffs/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq BattleEnamorus_2
BattleEnamorus_1:
# 88 "data/maps/GaleforceCliffs/scripts.pory"
	release
	end

BattleEnamorus_2:
# 86 "data/maps/GaleforceCliffs/scripts.pory"
	setflag FLAG_CAUGHT_ENAMORUS
	goto BattleEnamorus_1


BattleLandorus::
# 93 "data/maps/GaleforceCliffs/scripts.pory"
	lock
# 94 "data/maps/GaleforceCliffs/scripts.pory"
	faceplayer
# 95 "data/maps/GaleforceCliffs/scripts.pory"
	setvar VAR_LAST_TALKED, 4
# 96 "data/maps/GaleforceCliffs/scripts.pory"
	playmoncry SPECIES_LANDORUS, CRY_MODE_ENCOUNTER
# 97 "data/maps/GaleforceCliffs/scripts.pory"
	msgbox BattleLandorus_Text_0
# 98 "data/maps/GaleforceCliffs/scripts.pory"
	waitmoncry
# 99 "data/maps/GaleforceCliffs/scripts.pory"
	seteventmon SPECIES_LANDORUS, 50
# 100 "data/maps/GaleforceCliffs/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 101 "data/maps/GaleforceCliffs/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 102 "data/maps/GaleforceCliffs/scripts.pory"
	waitstate
# 103 "data/maps/GaleforceCliffs/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 104 "data/maps/GaleforceCliffs/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 105 "data/maps/GaleforceCliffs/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq BattleLandorus_2
BattleLandorus_1:
# 108 "data/maps/GaleforceCliffs/scripts.pory"
	release
	end

BattleLandorus_2:
# 106 "data/maps/GaleforceCliffs/scripts.pory"
	setflag FLAG_CAUGHT_LANDORUS
	goto BattleLandorus_1


BattleTornadus_Text_0:
# 37 "data/maps/GaleforceCliffs/scripts.pory"
	.string "Whhhwhhhwhhh!!$"

BattleThundurus_Text_0:
# 57 "data/maps/GaleforceCliffs/scripts.pory"
	.string "GKrrrkrrrkrrak!$"

BattleEnamorus_Text_0:
# 77 "data/maps/GaleforceCliffs/scripts.pory"
	.string "Amoooooor!$"

BattleLandorus_Text_0:
# 97 "data/maps/GaleforceCliffs/scripts.pory"
	.string "Karamukukuk!$"
