TracklessForest_MapScripts::
# 7 "data/maps/TracklessForest/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, TracklessForest_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 25 "data/maps/TracklessForest/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, TracklessForest_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

TracklessForest_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 8 "data/maps/TracklessForest/scripts.pory"
	goto_if_set FLAG_CAUGHT_RAIKOU, TracklessForest_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
TracklessForest_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 12 "data/maps/TracklessForest/scripts.pory"
	goto_if_set FLAG_CAUGHT_ENTEI, TracklessForest_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
TracklessForest_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 16 "data/maps/TracklessForest/scripts.pory"
	goto_if_set FLAG_CAUGHT_SUICUNE, TracklessForest_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
TracklessForest_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 20 "data/maps/TracklessForest/scripts.pory"
	goto_if_set FLAG_CAUGHT_CELEBI, TracklessForest_MapScripts_MAP_SCRIPT_ON_TRANSITION_10
	return

TracklessForest_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 9 "data/maps/TracklessForest/scripts.pory"
	setflag FLAG_TEMP_2
# 10 "data/maps/TracklessForest/scripts.pory"
	removeobject 1
	goto TracklessForest_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

TracklessForest_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 13 "data/maps/TracklessForest/scripts.pory"
	setflag FLAG_TEMP_3
# 14 "data/maps/TracklessForest/scripts.pory"
	removeobject 2
	goto TracklessForest_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

TracklessForest_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 17 "data/maps/TracklessForest/scripts.pory"
	setflag FLAG_TEMP_4
# 18 "data/maps/TracklessForest/scripts.pory"
	removeobject 3
	goto TracklessForest_MapScripts_MAP_SCRIPT_ON_TRANSITION_7

TracklessForest_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 21 "data/maps/TracklessForest/scripts.pory"
	setflag FLAG_TEMP_5
# 22 "data/maps/TracklessForest/scripts.pory"
	removeobject 4
	return

TracklessForest_MapScripts_MAP_SCRIPT_ON_RESUME:
# 26 "data/maps/TracklessForest/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, TracklessForest_MapScripts_MAP_SCRIPT_ON_RESUME_1
	return

TracklessForest_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 27 "data/maps/TracklessForest/scripts.pory"
	removeobject VAR_LAST_TALKED
	return


TracklessForest_Portal::
# 33 "data/maps/TracklessForest/scripts.pory"
	warp MAP_TRACKLESS_FOREST_ALT, 0
	return


BattleRaikou::
# 37 "data/maps/TracklessForest/scripts.pory"
	lock
# 38 "data/maps/TracklessForest/scripts.pory"
	faceplayer
# 39 "data/maps/TracklessForest/scripts.pory"
	setvar VAR_LAST_TALKED, 1
# 40 "data/maps/TracklessForest/scripts.pory"
	playmoncry SPECIES_RAIKOU, CRY_MODE_ENCOUNTER
# 41 "data/maps/TracklessForest/scripts.pory"
	msgbox BattleRaikou_Text_0
# 42 "data/maps/TracklessForest/scripts.pory"
	waitmoncry
# 43 "data/maps/TracklessForest/scripts.pory"
	seteventmon SPECIES_RAIKOU, 40
# 44 "data/maps/TracklessForest/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 45 "data/maps/TracklessForest/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 46 "data/maps/TracklessForest/scripts.pory"
	waitstate
# 47 "data/maps/TracklessForest/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 48 "data/maps/TracklessForest/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 49 "data/maps/TracklessForest/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq BattleRaikou_2
BattleRaikou_1:
# 52 "data/maps/TracklessForest/scripts.pory"
	release
	end

BattleRaikou_2:
# 50 "data/maps/TracklessForest/scripts.pory"
	setflag FLAG_CAUGHT_RAIKOU
	goto BattleRaikou_1


BattleEntei::
# 57 "data/maps/TracklessForest/scripts.pory"
	lock
# 58 "data/maps/TracklessForest/scripts.pory"
	faceplayer
# 59 "data/maps/TracklessForest/scripts.pory"
	setvar VAR_LAST_TALKED, 2
# 60 "data/maps/TracklessForest/scripts.pory"
	playmoncry SPECIES_ENTEI, CRY_MODE_ENCOUNTER
# 61 "data/maps/TracklessForest/scripts.pory"
	msgbox BattleRaikou_Text_0
# 62 "data/maps/TracklessForest/scripts.pory"
	waitmoncry
# 63 "data/maps/TracklessForest/scripts.pory"
	seteventmon SPECIES_ENTEI, 40
# 64 "data/maps/TracklessForest/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 65 "data/maps/TracklessForest/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 66 "data/maps/TracklessForest/scripts.pory"
	waitstate
# 67 "data/maps/TracklessForest/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 68 "data/maps/TracklessForest/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 69 "data/maps/TracklessForest/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq BattleEntei_2
BattleEntei_1:
# 72 "data/maps/TracklessForest/scripts.pory"
	release
	end

BattleEntei_2:
# 70 "data/maps/TracklessForest/scripts.pory"
	setflag FLAG_CAUGHT_ENTEI
	goto BattleEntei_1


BattleSuicune::
# 77 "data/maps/TracklessForest/scripts.pory"
	lock
# 78 "data/maps/TracklessForest/scripts.pory"
	faceplayer
# 79 "data/maps/TracklessForest/scripts.pory"
	setvar VAR_LAST_TALKED, 3
# 80 "data/maps/TracklessForest/scripts.pory"
	playmoncry SPECIES_SUICUNE, CRY_MODE_ENCOUNTER
# 81 "data/maps/TracklessForest/scripts.pory"
	msgbox BattleRaikou_Text_0
# 82 "data/maps/TracklessForest/scripts.pory"
	waitmoncry
# 83 "data/maps/TracklessForest/scripts.pory"
	seteventmon SPECIES_SUICUNE, 40
# 84 "data/maps/TracklessForest/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 85 "data/maps/TracklessForest/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 86 "data/maps/TracklessForest/scripts.pory"
	waitstate
# 87 "data/maps/TracklessForest/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 88 "data/maps/TracklessForest/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 89 "data/maps/TracklessForest/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq BattleSuicune_2
BattleSuicune_1:
# 92 "data/maps/TracklessForest/scripts.pory"
	release
	end

BattleSuicune_2:
# 90 "data/maps/TracklessForest/scripts.pory"
	setflag FLAG_CAUGHT_SUICUNE
	goto BattleSuicune_1


BattleCelebi::
# 97 "data/maps/TracklessForest/scripts.pory"
	lock
# 98 "data/maps/TracklessForest/scripts.pory"
	faceplayer
# 99 "data/maps/TracklessForest/scripts.pory"
	setvar VAR_LAST_TALKED, 4
# 100 "data/maps/TracklessForest/scripts.pory"
	playmoncry SPECIES_CELEBI, CRY_MODE_ENCOUNTER
# 101 "data/maps/TracklessForest/scripts.pory"
	msgbox BattleCelebi_Text_0
# 102 "data/maps/TracklessForest/scripts.pory"
	waitmoncry
# 103 "data/maps/TracklessForest/scripts.pory"
	seteventmon SPECIES_CELEBI, 50
# 104 "data/maps/TracklessForest/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 105 "data/maps/TracklessForest/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 106 "data/maps/TracklessForest/scripts.pory"
	waitstate
# 107 "data/maps/TracklessForest/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 108 "data/maps/TracklessForest/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 109 "data/maps/TracklessForest/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq BattleCelebi_2
BattleCelebi_1:
# 112 "data/maps/TracklessForest/scripts.pory"
	release
	end

BattleCelebi_2:
# 110 "data/maps/TracklessForest/scripts.pory"
	setflag FLAG_CAUGHT_CELEBI
	goto BattleCelebi_1


TracklessForest_Teleport::
# 117 "data/maps/TracklessForest/scripts.pory"
	lock
# 118 "data/maps/TracklessForest/scripts.pory"
	msgbox TracklessForest_Teleport_Text_0
# 119 "data/maps/TracklessForest/scripts.pory"
	compare VAR_SKY_PILLAR_STATE, 2
	goto_if_ge TracklessForest_Teleport_2
TracklessForest_Teleport_1:
# 131 "data/maps/TracklessForest/scripts.pory"
	release
	end

TracklessForest_Teleport_2:
# 120 "data/maps/TracklessForest/scripts.pory"
	msgbox TracklessForest_Teleport_Text_1, MSGBOX_YESNO
# 121 "data/maps/TracklessForest/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq TracklessForest_Teleport_4
	goto TracklessForest_Teleport_1

TracklessForest_Teleport_4:
# 122 "data/maps/TracklessForest/scripts.pory"
	special StorePlayerCoordsInVars
# 123 "data/maps/TracklessForest/scripts.pory"
	compare VAR_0x8004, 16
	goto_if_eq TracklessForest_Teleport_6
# 127 "data/maps/TracklessForest/scripts.pory"
	warp MAP_TRACKLESS_FOREST, 0
	goto TracklessForest_Teleport_1

TracklessForest_Teleport_6:
# 124 "data/maps/TracklessForest/scripts.pory"
	warp MAP_TRACKLESS_FOREST, 1
	goto TracklessForest_Teleport_1


BattleRaikou_Text_0:
# 41 "data/maps/TracklessForest/scripts.pory"
	.string "Gwooa!$"

BattleCelebi_Text_0:
# 101 "data/maps/TracklessForest/scripts.pory"
	.string "Kryuu!$"

TracklessForest_Teleport_Text_0:
# 118 "data/maps/TracklessForest/scripts.pory"
	.string "You feel a nostalgic air from the stone.$"

TracklessForest_Teleport_Text_1:
# 120 "data/maps/TracklessForest/scripts.pory"
	.string "Touch the stone?$"
