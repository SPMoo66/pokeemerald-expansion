TracklessForestAlt_MapScripts::
# 6 "data/maps/TracklessForestAlt/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, TracklessForestAlt_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 20 "data/maps/TracklessForestAlt/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, TracklessForestAlt_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

TracklessForestAlt_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 7 "data/maps/TracklessForestAlt/scripts.pory"
	goto_if_set FLAG_CAUGHT_RAGING_BOLT, TracklessForestAlt_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 11 "data/maps/TracklessForestAlt/scripts.pory"
	goto_if_set FLAG_CAUGHT_GOUGING_FIRE, TracklessForestAlt_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 15 "data/maps/TracklessForestAlt/scripts.pory"
	goto_if_set FLAG_CAUGHT_WALKING_WAKE, TracklessForestAlt_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
	return

TracklessForestAlt_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 8 "data/maps/TracklessForestAlt/scripts.pory"
	setflag FLAG_TEMP_2
# 9 "data/maps/TracklessForestAlt/scripts.pory"
	removeobject 1
	return

TracklessForestAlt_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 12 "data/maps/TracklessForestAlt/scripts.pory"
	setflag FLAG_TEMP_3
# 13 "data/maps/TracklessForestAlt/scripts.pory"
	removeobject 2
	return

TracklessForestAlt_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
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


BattleRagingBolt::
# 28 "data/maps/TracklessForestAlt/scripts.pory"
	lock
# 29 "data/maps/TracklessForestAlt/scripts.pory"
	setvar VAR_LAST_TALKED, 1
# 30 "data/maps/TracklessForestAlt/scripts.pory"
	playmoncry SPECIES_RAGING_BOLT, CRY_MODE_ENCOUNTER
# 31 "data/maps/TracklessForestAlt/scripts.pory"
	msgbox BattleRagingBolt_Text_0
# 32 "data/maps/TracklessForestAlt/scripts.pory"
	waitmoncry
# 33 "data/maps/TracklessForestAlt/scripts.pory"
	seteventmon SPECIES_RAGING_BOLT, 40
# 34 "data/maps/TracklessForestAlt/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 35 "data/maps/TracklessForestAlt/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 36 "data/maps/TracklessForestAlt/scripts.pory"
	waitstate
# 37 "data/maps/TracklessForestAlt/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 38 "data/maps/TracklessForestAlt/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 39 "data/maps/TracklessForestAlt/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq BattleRagingBolt_2
BattleRagingBolt_1:
# 42 "data/maps/TracklessForestAlt/scripts.pory"
	release
	end

BattleRagingBolt_2:
# 40 "data/maps/TracklessForestAlt/scripts.pory"
	setflag FLAG_CAUGHT_RAGING_BOLT
	goto BattleRagingBolt_1


BattleGougingFire::
# 47 "data/maps/TracklessForestAlt/scripts.pory"
	lock
# 48 "data/maps/TracklessForestAlt/scripts.pory"
	setvar VAR_LAST_TALKED, 2
# 49 "data/maps/TracklessForestAlt/scripts.pory"
	playmoncry SPECIES_GOUGING_FIRE, CRY_MODE_ENCOUNTER
# 50 "data/maps/TracklessForestAlt/scripts.pory"
	msgbox BattleRagingBolt_Text_0
# 51 "data/maps/TracklessForestAlt/scripts.pory"
	waitmoncry
# 52 "data/maps/TracklessForestAlt/scripts.pory"
	seteventmon SPECIES_GOUGING_FIRE, 40
# 53 "data/maps/TracklessForestAlt/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 54 "data/maps/TracklessForestAlt/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 55 "data/maps/TracklessForestAlt/scripts.pory"
	waitstate
# 56 "data/maps/TracklessForestAlt/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 57 "data/maps/TracklessForestAlt/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 58 "data/maps/TracklessForestAlt/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq BattleGougingFire_2
BattleGougingFire_1:
# 61 "data/maps/TracklessForestAlt/scripts.pory"
	release
	end

BattleGougingFire_2:
# 59 "data/maps/TracklessForestAlt/scripts.pory"
	setflag FLAG_CAUGHT_GOUGING_FIRE
	goto BattleGougingFire_1


BattleWalkingWake::
# 66 "data/maps/TracklessForestAlt/scripts.pory"
	lock
# 67 "data/maps/TracklessForestAlt/scripts.pory"
	setvar VAR_LAST_TALKED, 3
# 68 "data/maps/TracklessForestAlt/scripts.pory"
	playmoncry SPECIES_WALKING_WAKE, CRY_MODE_ENCOUNTER
# 69 "data/maps/TracklessForestAlt/scripts.pory"
	msgbox BattleRagingBolt_Text_0
# 70 "data/maps/TracklessForestAlt/scripts.pory"
	waitmoncry
# 71 "data/maps/TracklessForestAlt/scripts.pory"
	seteventmon SPECIES_WALKING_WAKE, 40
# 72 "data/maps/TracklessForestAlt/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 73 "data/maps/TracklessForestAlt/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 74 "data/maps/TracklessForestAlt/scripts.pory"
	waitstate
# 75 "data/maps/TracklessForestAlt/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 76 "data/maps/TracklessForestAlt/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 77 "data/maps/TracklessForestAlt/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq BattleWalkingWake_2
BattleWalkingWake_1:
# 80 "data/maps/TracklessForestAlt/scripts.pory"
	release
	end

BattleWalkingWake_2:
# 78 "data/maps/TracklessForestAlt/scripts.pory"
	setflag FLAG_CAUGHT_WALKING_WAKE
	goto BattleWalkingWake_1


BattleRagingBolt_Text_0:
# 31 "data/maps/TracklessForestAlt/scripts.pory"
	.string "Gwooa!$"
