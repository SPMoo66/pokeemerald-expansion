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


BattleRaikou::
# 33 "data/maps/TracklessForest/scripts.pory"
	lock
# 34 "data/maps/TracklessForest/scripts.pory"
	setvar VAR_LAST_TALKED, 1
# 35 "data/maps/TracklessForest/scripts.pory"
	playmoncry SPECIES_RAIKOU, CRY_MODE_ENCOUNTER
# 36 "data/maps/TracklessForest/scripts.pory"
	msgbox BattleRaikou_Text_0
# 37 "data/maps/TracklessForest/scripts.pory"
	waitmoncry
# 38 "data/maps/TracklessForest/scripts.pory"
	seteventmon SPECIES_RAIKOU, 50
# 39 "data/maps/TracklessForest/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 40 "data/maps/TracklessForest/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 41 "data/maps/TracklessForest/scripts.pory"
	waitstate
# 42 "data/maps/TracklessForest/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 43 "data/maps/TracklessForest/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 44 "data/maps/TracklessForest/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq BattleRaikou_2
BattleRaikou_1:
# 47 "data/maps/TracklessForest/scripts.pory"
	release
	end

BattleRaikou_2:
# 45 "data/maps/TracklessForest/scripts.pory"
	setflag FLAG_CAUGHT_RAIKOU
	goto BattleRaikou_1


BattleEntei::
# 52 "data/maps/TracklessForest/scripts.pory"
	lock
# 53 "data/maps/TracklessForest/scripts.pory"
	setvar VAR_LAST_TALKED, 2
# 54 "data/maps/TracklessForest/scripts.pory"
	playmoncry SPECIES_ENTEI, CRY_MODE_ENCOUNTER
# 55 "data/maps/TracklessForest/scripts.pory"
	msgbox BattleRaikou_Text_0
# 56 "data/maps/TracklessForest/scripts.pory"
	waitmoncry
# 57 "data/maps/TracklessForest/scripts.pory"
	seteventmon SPECIES_ENTEI, 50
# 58 "data/maps/TracklessForest/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 59 "data/maps/TracklessForest/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 60 "data/maps/TracklessForest/scripts.pory"
	waitstate
# 61 "data/maps/TracklessForest/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 62 "data/maps/TracklessForest/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 63 "data/maps/TracklessForest/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq BattleEntei_2
BattleEntei_1:
# 66 "data/maps/TracklessForest/scripts.pory"
	release
	end

BattleEntei_2:
# 64 "data/maps/TracklessForest/scripts.pory"
	setflag FLAG_CAUGHT_ENTEI
	goto BattleEntei_1


BattleSuicune::
# 71 "data/maps/TracklessForest/scripts.pory"
	lock
# 72 "data/maps/TracklessForest/scripts.pory"
	setvar VAR_LAST_TALKED, 3
# 73 "data/maps/TracklessForest/scripts.pory"
	playmoncry SPECIES_SUICUNE, CRY_MODE_ENCOUNTER
# 74 "data/maps/TracklessForest/scripts.pory"
	msgbox BattleRaikou_Text_0
# 75 "data/maps/TracklessForest/scripts.pory"
	waitmoncry
# 76 "data/maps/TracklessForest/scripts.pory"
	seteventmon SPECIES_SUICUNE, 50
# 77 "data/maps/TracklessForest/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 78 "data/maps/TracklessForest/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 79 "data/maps/TracklessForest/scripts.pory"
	waitstate
# 80 "data/maps/TracklessForest/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 81 "data/maps/TracklessForest/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 82 "data/maps/TracklessForest/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq BattleSuicune_2
BattleSuicune_1:
# 85 "data/maps/TracklessForest/scripts.pory"
	release
	end

BattleSuicune_2:
# 83 "data/maps/TracklessForest/scripts.pory"
	setflag FLAG_CAUGHT_SUICUNE
	goto BattleSuicune_1


BattleCelebi::
# 90 "data/maps/TracklessForest/scripts.pory"
	lock
# 91 "data/maps/TracklessForest/scripts.pory"
	setvar VAR_LAST_TALKED, 4
# 92 "data/maps/TracklessForest/scripts.pory"
	playmoncry SPECIES_CELEBI, CRY_MODE_ENCOUNTER
# 93 "data/maps/TracklessForest/scripts.pory"
	msgbox BattleCelebi_Text_0
# 94 "data/maps/TracklessForest/scripts.pory"
	waitmoncry
# 95 "data/maps/TracklessForest/scripts.pory"
	seteventmon SPECIES_CELEBI, 50
# 96 "data/maps/TracklessForest/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 97 "data/maps/TracklessForest/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 98 "data/maps/TracklessForest/scripts.pory"
	waitstate
# 99 "data/maps/TracklessForest/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 100 "data/maps/TracklessForest/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 101 "data/maps/TracklessForest/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq BattleCelebi_2
BattleCelebi_1:
# 104 "data/maps/TracklessForest/scripts.pory"
	release
	end

BattleCelebi_2:
# 102 "data/maps/TracklessForest/scripts.pory"
	setflag FLAG_CAUGHT_CELEBI
	goto BattleCelebi_1


TracklessForest_Teleport::
# 109 "data/maps/TracklessForest/scripts.pory"
	lock
# 110 "data/maps/TracklessForest/scripts.pory"
	msgbox TracklessForest_Teleport_Text_0
# 111 "data/maps/TracklessForest/scripts.pory"
	compare VAR_SKY_PILLAR_STATE, 2
	goto_if_ge TracklessForest_Teleport_2
TracklessForest_Teleport_1:
# 123 "data/maps/TracklessForest/scripts.pory"
	release
	end

TracklessForest_Teleport_2:
# 112 "data/maps/TracklessForest/scripts.pory"
	msgbox TracklessForest_Teleport_Text_1, MSGBOX_YESNO
# 113 "data/maps/TracklessForest/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq TracklessForest_Teleport_4
	goto TracklessForest_Teleport_1

TracklessForest_Teleport_4:
# 114 "data/maps/TracklessForest/scripts.pory"
	special StorePlayerCoordsInVars
# 115 "data/maps/TracklessForest/scripts.pory"
	compare VAR_0x8004, 16
	goto_if_eq TracklessForest_Teleport_6
# 119 "data/maps/TracklessForest/scripts.pory"
	warp MAP_TRACKLESS_FOREST, 0
	goto TracklessForest_Teleport_1

TracklessForest_Teleport_6:
# 116 "data/maps/TracklessForest/scripts.pory"
	warp MAP_TRACKLESS_FOREST, 1
	goto TracklessForest_Teleport_1


BattleRaikou_Text_0:
# 36 "data/maps/TracklessForest/scripts.pory"
	.string "Gwooa!$"

BattleCelebi_Text_0:
# 93 "data/maps/TracklessForest/scripts.pory"
	.string "Kryuu!$"

TracklessForest_Teleport_Text_0:
# 110 "data/maps/TracklessForest/scripts.pory"
	.string "You feel a nostalgic air from the stone.$"

TracklessForest_Teleport_Text_1:
# 112 "data/maps/TracklessForest/scripts.pory"
	.string "Touch the stone?$"
