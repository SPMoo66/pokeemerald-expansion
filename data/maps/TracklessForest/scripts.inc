TracklessForest_MapScripts::
# 7 "data/maps/TracklessForest/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, TracklessForest_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 25 "data/maps/TracklessForest/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, TracklessForest_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

TracklessForest_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 8 "data/maps/TracklessForest/scripts.pory"
	goto_if_set FLAG_CAUGHT_RAIKOU, TracklessForest_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 12 "data/maps/TracklessForest/scripts.pory"
	goto_if_set FLAG_CAUGHT_ENTEI, TracklessForest_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 16 "data/maps/TracklessForest/scripts.pory"
	goto_if_set FLAG_CAUGHT_SUICUNE, TracklessForest_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
# 20 "data/maps/TracklessForest/scripts.pory"
	goto_if_set FLAG_CAUGHT_CELEBI, TracklessForest_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
	return

TracklessForest_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 9 "data/maps/TracklessForest/scripts.pory"
	setflag FLAG_TEMP_2
# 10 "data/maps/TracklessForest/scripts.pory"
	removeobject 1
	return

TracklessForest_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 13 "data/maps/TracklessForest/scripts.pory"
	setflag FLAG_TEMP_3
# 14 "data/maps/TracklessForest/scripts.pory"
	removeobject 2
	return

TracklessForest_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
# 17 "data/maps/TracklessForest/scripts.pory"
	setflag FLAG_TEMP_4
# 18 "data/maps/TracklessForest/scripts.pory"
	removeobject 3
	return

TracklessForest_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
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
	setvar VAR_LAST_TALKED, 1
# 39 "data/maps/TracklessForest/scripts.pory"
	playmoncry SPECIES_RAIKOU, CRY_MODE_ENCOUNTER
# 40 "data/maps/TracklessForest/scripts.pory"
	msgbox BattleRaikou_Text_0
# 41 "data/maps/TracklessForest/scripts.pory"
	waitmoncry
# 42 "data/maps/TracklessForest/scripts.pory"
	seteventmon SPECIES_RAIKOU, 40
# 43 "data/maps/TracklessForest/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 44 "data/maps/TracklessForest/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 45 "data/maps/TracklessForest/scripts.pory"
	waitstate
# 46 "data/maps/TracklessForest/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 47 "data/maps/TracklessForest/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 48 "data/maps/TracklessForest/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq BattleRaikou_2
BattleRaikou_1:
# 51 "data/maps/TracklessForest/scripts.pory"
	release
	end

BattleRaikou_2:
# 49 "data/maps/TracklessForest/scripts.pory"
	setflag FLAG_CAUGHT_RAIKOU
	goto BattleRaikou_1


BattleEntei::
# 56 "data/maps/TracklessForest/scripts.pory"
	lock
# 57 "data/maps/TracklessForest/scripts.pory"
	setvar VAR_LAST_TALKED, 2
# 58 "data/maps/TracklessForest/scripts.pory"
	playmoncry SPECIES_ENTEI, CRY_MODE_ENCOUNTER
# 59 "data/maps/TracklessForest/scripts.pory"
	msgbox BattleRaikou_Text_0
# 60 "data/maps/TracklessForest/scripts.pory"
	waitmoncry
# 61 "data/maps/TracklessForest/scripts.pory"
	seteventmon SPECIES_ENTEI, 40
# 62 "data/maps/TracklessForest/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 63 "data/maps/TracklessForest/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 64 "data/maps/TracklessForest/scripts.pory"
	waitstate
# 65 "data/maps/TracklessForest/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 66 "data/maps/TracklessForest/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 67 "data/maps/TracklessForest/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq BattleEntei_2
BattleEntei_1:
# 70 "data/maps/TracklessForest/scripts.pory"
	release
	end

BattleEntei_2:
# 68 "data/maps/TracklessForest/scripts.pory"
	setflag FLAG_CAUGHT_ENTEI
	goto BattleEntei_1


BattleSuicune::
# 75 "data/maps/TracklessForest/scripts.pory"
	lock
# 76 "data/maps/TracklessForest/scripts.pory"
	setvar VAR_LAST_TALKED, 3
# 77 "data/maps/TracklessForest/scripts.pory"
	playmoncry SPECIES_SUICUNE, CRY_MODE_ENCOUNTER
# 78 "data/maps/TracklessForest/scripts.pory"
	msgbox BattleRaikou_Text_0
# 79 "data/maps/TracklessForest/scripts.pory"
	waitmoncry
# 80 "data/maps/TracklessForest/scripts.pory"
	seteventmon SPECIES_SUICUNE, 40
# 81 "data/maps/TracklessForest/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 82 "data/maps/TracklessForest/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 83 "data/maps/TracklessForest/scripts.pory"
	waitstate
# 84 "data/maps/TracklessForest/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 85 "data/maps/TracklessForest/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 86 "data/maps/TracklessForest/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq BattleSuicune_2
BattleSuicune_1:
# 89 "data/maps/TracklessForest/scripts.pory"
	release
	end

BattleSuicune_2:
# 87 "data/maps/TracklessForest/scripts.pory"
	setflag FLAG_CAUGHT_SUICUNE
	goto BattleSuicune_1


BattleCelebi::
# 94 "data/maps/TracklessForest/scripts.pory"
	lock
# 95 "data/maps/TracklessForest/scripts.pory"
	setvar VAR_LAST_TALKED, 4
# 96 "data/maps/TracklessForest/scripts.pory"
	playmoncry SPECIES_CELEBI, CRY_MODE_ENCOUNTER
# 97 "data/maps/TracklessForest/scripts.pory"
	msgbox BattleCelebi_Text_0
# 98 "data/maps/TracklessForest/scripts.pory"
	waitmoncry
# 99 "data/maps/TracklessForest/scripts.pory"
	seteventmon SPECIES_CELEBI, 50
# 100 "data/maps/TracklessForest/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 101 "data/maps/TracklessForest/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 102 "data/maps/TracklessForest/scripts.pory"
	waitstate
# 103 "data/maps/TracklessForest/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 104 "data/maps/TracklessForest/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 105 "data/maps/TracklessForest/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq BattleCelebi_2
BattleCelebi_1:
# 108 "data/maps/TracklessForest/scripts.pory"
	release
	end

BattleCelebi_2:
# 106 "data/maps/TracklessForest/scripts.pory"
	setflag FLAG_CAUGHT_CELEBI
	goto BattleCelebi_1


TracklessForest_Teleport::
# 113 "data/maps/TracklessForest/scripts.pory"
	lock
# 114 "data/maps/TracklessForest/scripts.pory"
	msgbox TracklessForest_Teleport_Text_0
# 115 "data/maps/TracklessForest/scripts.pory"
	compare VAR_SKY_PILLAR_STATE, 2
	goto_if_ge TracklessForest_Teleport_2
TracklessForest_Teleport_1:
# 127 "data/maps/TracklessForest/scripts.pory"
	release
	end

TracklessForest_Teleport_2:
# 116 "data/maps/TracklessForest/scripts.pory"
	msgbox TracklessForest_Teleport_Text_1, MSGBOX_YESNO
# 117 "data/maps/TracklessForest/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq TracklessForest_Teleport_4
	goto TracklessForest_Teleport_1

TracklessForest_Teleport_4:
# 118 "data/maps/TracklessForest/scripts.pory"
	special StorePlayerCoordsInVars
# 119 "data/maps/TracklessForest/scripts.pory"
	compare VAR_0x8004, 16
	goto_if_eq TracklessForest_Teleport_6
# 123 "data/maps/TracklessForest/scripts.pory"
	warp MAP_TRACKLESS_FOREST, 0
	goto TracklessForest_Teleport_1

TracklessForest_Teleport_6:
# 120 "data/maps/TracklessForest/scripts.pory"
	warp MAP_TRACKLESS_FOREST, 1
	goto TracklessForest_Teleport_1


BattleRaikou_Text_0:
# 40 "data/maps/TracklessForest/scripts.pory"
	.string "Gwooa!$"

BattleCelebi_Text_0:
# 97 "data/maps/TracklessForest/scripts.pory"
	.string "Kryuu!$"

TracklessForest_Teleport_Text_0:
# 114 "data/maps/TracklessForest/scripts.pory"
	.string "You feel a nostalgic air from the stone.$"

TracklessForest_Teleport_Text_1:
# 116 "data/maps/TracklessForest/scripts.pory"
	.string "Touch the stone?$"
