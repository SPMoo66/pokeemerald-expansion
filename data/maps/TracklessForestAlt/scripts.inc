TracklessForestAlt_MapScripts::
# 6 "data/maps/TracklessForestAlt/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, TracklessForestAlt_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 20 "data/maps/TracklessForestAlt/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, TracklessForestAlt_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

TracklessForestAlt_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 7 "data/maps/TracklessForestAlt/scripts.pory"
	goto_if_set FLAG_CAUGHT_RAGING_BOLT, TracklessForestAlt_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
TracklessForestAlt_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 11 "data/maps/TracklessForestAlt/scripts.pory"
	goto_if_set FLAG_CAUGHT_GOUGING_FIRE, TracklessForestAlt_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
TracklessForestAlt_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 15 "data/maps/TracklessForestAlt/scripts.pory"
	goto_if_set FLAG_CAUGHT_WALKING_WAKE, TracklessForestAlt_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
	return

TracklessForestAlt_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 8 "data/maps/TracklessForestAlt/scripts.pory"
	setflag FLAG_TEMP_2
# 9 "data/maps/TracklessForestAlt/scripts.pory"
	removeobject 1
	goto TracklessForestAlt_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

TracklessForestAlt_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 12 "data/maps/TracklessForestAlt/scripts.pory"
	setflag FLAG_TEMP_3
# 13 "data/maps/TracklessForestAlt/scripts.pory"
	removeobject 2
	goto TracklessForestAlt_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

TracklessForestAlt_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 16 "data/maps/TracklessForestAlt/scripts.pory"
	setflag FLAG_TEMP_4
# 17 "data/maps/TracklessForestAlt/scripts.pory"
	removeobject 3
	return

TracklessForestAlt_MapScripts_MAP_SCRIPT_ON_RESUME:
# 21 "data/maps/TracklessForestAlt/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, TracklessForestAlt_MapScripts_MAP_SCRIPT_ON_RESUME_1
	return

TracklessForestAlt_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 22 "data/maps/TracklessForestAlt/scripts.pory"
	removeobject VAR_LAST_TALKED
	return


TracklessForestAlt_Portal::
# 28 "data/maps/TracklessForestAlt/scripts.pory"
	warp MAP_TRACKLESS_FOREST, 2
	return


BattleRagingBolt::
# 32 "data/maps/TracklessForestAlt/scripts.pory"
	lock
# 33 "data/maps/TracklessForestAlt/scripts.pory"
	faceplayer
# 34 "data/maps/TracklessForestAlt/scripts.pory"
	setvar VAR_LAST_TALKED, 1
# 35 "data/maps/TracklessForestAlt/scripts.pory"
	playmoncry SPECIES_RAGING_BOLT, CRY_MODE_ENCOUNTER
# 36 "data/maps/TracklessForestAlt/scripts.pory"
	msgbox BattleRagingBolt_Text_0
# 37 "data/maps/TracklessForestAlt/scripts.pory"
	waitmoncry
# 38 "data/maps/TracklessForestAlt/scripts.pory"
	seteventmon SPECIES_RAGING_BOLT, 40
# 39 "data/maps/TracklessForestAlt/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 40 "data/maps/TracklessForestAlt/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 41 "data/maps/TracklessForestAlt/scripts.pory"
	waitstate
# 42 "data/maps/TracklessForestAlt/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 43 "data/maps/TracklessForestAlt/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 44 "data/maps/TracklessForestAlt/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq BattleRagingBolt_2
BattleRagingBolt_1:
# 47 "data/maps/TracklessForestAlt/scripts.pory"
	release
	end

BattleRagingBolt_2:
# 45 "data/maps/TracklessForestAlt/scripts.pory"
	setflag FLAG_CAUGHT_RAGING_BOLT
	goto BattleRagingBolt_1


BattleGougingFire::
# 52 "data/maps/TracklessForestAlt/scripts.pory"
	lock
# 53 "data/maps/TracklessForestAlt/scripts.pory"
	faceplayer
# 54 "data/maps/TracklessForestAlt/scripts.pory"
	setvar VAR_LAST_TALKED, 2
# 55 "data/maps/TracklessForestAlt/scripts.pory"
	playmoncry SPECIES_GOUGING_FIRE, CRY_MODE_ENCOUNTER
# 56 "data/maps/TracklessForestAlt/scripts.pory"
	msgbox BattleRagingBolt_Text_0
# 57 "data/maps/TracklessForestAlt/scripts.pory"
	waitmoncry
# 58 "data/maps/TracklessForestAlt/scripts.pory"
	seteventmon SPECIES_GOUGING_FIRE, 40
# 59 "data/maps/TracklessForestAlt/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 60 "data/maps/TracklessForestAlt/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 61 "data/maps/TracklessForestAlt/scripts.pory"
	waitstate
# 62 "data/maps/TracklessForestAlt/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 63 "data/maps/TracklessForestAlt/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 64 "data/maps/TracklessForestAlt/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq BattleGougingFire_2
BattleGougingFire_1:
# 67 "data/maps/TracklessForestAlt/scripts.pory"
	release
	end

BattleGougingFire_2:
# 65 "data/maps/TracklessForestAlt/scripts.pory"
	setflag FLAG_CAUGHT_GOUGING_FIRE
	goto BattleGougingFire_1


BattleWalkingWake::
# 72 "data/maps/TracklessForestAlt/scripts.pory"
	lock
# 73 "data/maps/TracklessForestAlt/scripts.pory"
	faceplayer
# 74 "data/maps/TracklessForestAlt/scripts.pory"
	setvar VAR_LAST_TALKED, 3
# 75 "data/maps/TracklessForestAlt/scripts.pory"
	playmoncry SPECIES_WALKING_WAKE, CRY_MODE_ENCOUNTER
# 76 "data/maps/TracklessForestAlt/scripts.pory"
	msgbox BattleRagingBolt_Text_0
# 77 "data/maps/TracklessForestAlt/scripts.pory"
	waitmoncry
# 78 "data/maps/TracklessForestAlt/scripts.pory"
	seteventmon SPECIES_WALKING_WAKE, 40
# 79 "data/maps/TracklessForestAlt/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 80 "data/maps/TracklessForestAlt/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 81 "data/maps/TracklessForestAlt/scripts.pory"
	waitstate
# 82 "data/maps/TracklessForestAlt/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 83 "data/maps/TracklessForestAlt/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 84 "data/maps/TracklessForestAlt/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq BattleWalkingWake_2
BattleWalkingWake_1:
# 87 "data/maps/TracklessForestAlt/scripts.pory"
	release
	end

BattleWalkingWake_2:
# 85 "data/maps/TracklessForestAlt/scripts.pory"
	setflag FLAG_CAUGHT_WALKING_WAKE
	goto BattleWalkingWake_1


BattleRagingBolt_Text_0:
# 36 "data/maps/TracklessForestAlt/scripts.pory"
	.string "Gwooa!$"
