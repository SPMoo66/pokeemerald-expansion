SouthernIsland_Interior_MapScripts::
# 4 "data/maps/SouthernIsland_Interior/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, SouthernIsland_OnResume
# 5 "data/maps/SouthernIsland_Interior/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SouthernIsland_OnTransition
	.byte 0


SouthernIsland_OnResume::
# 9 "data/maps/SouthernIsland_Interior/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, SouthernIsland_OnResume_1
	return

SouthernIsland_OnResume_1:
# 10 "data/maps/SouthernIsland_Interior/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 11 "data/maps/SouthernIsland_Interior/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_ne SouthernIsland_OnResume_3
	return

SouthernIsland_OnResume_3:
# 12 "data/maps/SouthernIsland_Interior/scripts.pory"
	removeobject 2
	return


SouthernIsland_OnTransition::
# 19 "data/maps/SouthernIsland_Interior/scripts.pory"
	compare VAR_ROAMER_POKEMON, 0
	goto_if_eq SouthernIsland_OnTransition_2
# 31 "data/maps/SouthernIsland_Interior/scripts.pory"
	goto_if_unset FLAG_CAUGHT_LATIAS_OR_LATIOS, SouthernIsland_OnTransition_11
# 36 "data/maps/SouthernIsland_Interior/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_LATIAS
# 37 "data/maps/SouthernIsland_Interior/scripts.pory"
	setvar VAR_TEMP_4, SPECIES_LATIAS
# 38 "data/maps/SouthernIsland_Interior/scripts.pory"
	setflag FLAG_TEMP_3
SouthernIsland_OnTransition_1:
# 42 "data/maps/SouthernIsland_Interior/scripts.pory"
	checkplayergender
# 43 "data/maps/SouthernIsland_Interior/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq SouthernIsland_OnTransition_5
# 47 "data/maps/SouthernIsland_Interior/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_RIVAL_MAY_NORMAL
	return

SouthernIsland_OnTransition_2:
# 20 "data/maps/SouthernIsland_Interior/scripts.pory"
	goto_if_unset FLAG_CAUGHT_LATIAS_OR_LATIOS, SouthernIsland_OnTransition_8
# 26 "data/maps/SouthernIsland_Interior/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_LATIOS
# 27 "data/maps/SouthernIsland_Interior/scripts.pory"
	setvar VAR_TEMP_4, SPECIES_LATIOS
	goto SouthernIsland_OnTransition_1

SouthernIsland_OnTransition_5:
# 44 "data/maps/SouthernIsland_Interior/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_RIVAL_BRENDAN_NORMAL
	return

SouthernIsland_OnTransition_8:
# 21 "data/maps/SouthernIsland_Interior/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_LATIAS
# 22 "data/maps/SouthernIsland_Interior/scripts.pory"
	setvar VAR_TEMP_4, SPECIES_LATIAS
# 23 "data/maps/SouthernIsland_Interior/scripts.pory"
	setflag FLAG_TEMP_3
	goto SouthernIsland_OnTransition_1

SouthernIsland_OnTransition_11:
# 32 "data/maps/SouthernIsland_Interior/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_LATIOS
# 33 "data/maps/SouthernIsland_Interior/scripts.pory"
	setvar VAR_TEMP_4, SPECIES_LATIOS
	goto SouthernIsland_OnTransition_1


SouthernIsland_Interior_EventScript_TryLatiEncounter::
# 52 "data/maps/SouthernIsland_Interior/scripts.pory"
	call SouthernIsland_OnTransition
# 53 "data/maps/SouthernIsland_Interior/scripts.pory"
	goto_if_set FLAG_TEMP_2, SouthernIsland_Interior_EventScript_TryLatiEncounter_2
# 53 "data/maps/SouthernIsland_Interior/scripts.pory"
	goto_if_set FLAG_CAUGHT_LATIAS_AND_LATIOS, SouthernIsland_Interior_EventScript_TryLatiEncounter_2
# 57 "data/maps/SouthernIsland_Interior/scripts.pory"
	setflag FLAG_TEMP_2
# 58 "data/maps/SouthernIsland_Interior/scripts.pory"
	special SpawnCameraObject
# 59 "data/maps/SouthernIsland_Interior/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SouthernIsland_Interior_Movement_CameraPanUp
# 60 "data/maps/SouthernIsland_Interior/scripts.pory"
	waitmovement 0
# 61 "data/maps/SouthernIsland_Interior/scripts.pory"
	delay 50
# 62 "data/maps/SouthernIsland_Interior/scripts.pory"
	waitse
# 63 "data/maps/SouthernIsland_Interior/scripts.pory"
	playmoncry VAR_TEMP_4, CRY_MODE_NORMAL
# 64 "data/maps/SouthernIsland_Interior/scripts.pory"
	delay 30
# 65 "data/maps/SouthernIsland_Interior/scripts.pory"
	waitmoncry
# 66 "data/maps/SouthernIsland_Interior/scripts.pory"
	addobject 2
# 67 "data/maps/SouthernIsland_Interior/scripts.pory"
	delay 30
# 68 "data/maps/SouthernIsland_Interior/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SouthernIsland_Interior_Movement_CameraPanDown
# 69 "data/maps/SouthernIsland_Interior/scripts.pory"
	applymovement 2, SouthernIsland_Interior_Movement_LatiApproach
# 70 "data/maps/SouthernIsland_Interior/scripts.pory"
	waitmovement 0
# 71 "data/maps/SouthernIsland_Interior/scripts.pory"
	delay 50
# 72 "data/maps/SouthernIsland_Interior/scripts.pory"
	special RemoveCameraObject
# 73 "data/maps/SouthernIsland_Interior/scripts.pory"
	setvar VAR_LAST_TALKED, 2
# 74 "data/maps/SouthernIsland_Interior/scripts.pory"
	goto_if_set FLAG_TEMP_3, SouthernIsland_Interior_EventScript_TryLatiEncounter_8
# 78 "data/maps/SouthernIsland_Interior/scripts.pory"
	seteventmon SPECIES_LATIOS, 50, ITEM_SOUL_DEW
SouthernIsland_Interior_EventScript_TryLatiEncounter_7:
# 80 "data/maps/SouthernIsland_Interior/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 81 "data/maps/SouthernIsland_Interior/scripts.pory"
	special BattleSetup_StartLatiBattle
# 82 "data/maps/SouthernIsland_Interior/scripts.pory"
	waitstate
# 83 "data/maps/SouthernIsland_Interior/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 84 "data/maps/SouthernIsland_Interior/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 85 "data/maps/SouthernIsland_Interior/scripts.pory"
	switch VAR_RESULT
# 86 "data/maps/SouthernIsland_Interior/scripts.pory"
	case B_OUTCOME_WON, SouthernIsland_Interior_EventScript_TryLatiEncounter_12
# 87 "data/maps/SouthernIsland_Interior/scripts.pory"
	case B_OUTCOME_RAN, SouthernIsland_Interior_EventScript_TryLatiEncounter_12
# 88 "data/maps/SouthernIsland_Interior/scripts.pory"
	case B_OUTCOME_PLAYER_TELEPORTED, SouthernIsland_Interior_EventScript_TryLatiEncounter_12
# 92 "data/maps/SouthernIsland_Interior/scripts.pory"
	goto_if_unset FLAG_CAUGHT_LATIAS_OR_LATIOS, SouthernIsland_Interior_EventScript_TryLatiEncounter_14
# 96 "data/maps/SouthernIsland_Interior/scripts.pory"
	setflag FLAG_CAUGHT_LATIAS_AND_LATIOS
SouthernIsland_Interior_EventScript_TryLatiEncounter_1:
# 101 "data/maps/SouthernIsland_Interior/scripts.pory"
	releaseall
	return

SouthernIsland_Interior_EventScript_TryLatiEncounter_2:
# 54 "data/maps/SouthernIsland_Interior/scripts.pory"
	msgbox SouthernIsland_Interior_EventScript_TryLatiEncounter_Text_0
	goto SouthernIsland_Interior_EventScript_TryLatiEncounter_1

SouthernIsland_Interior_EventScript_TryLatiEncounter_8:
# 75 "data/maps/SouthernIsland_Interior/scripts.pory"
	seteventmon SPECIES_LATIAS, 50, ITEM_SOUL_DEW
	goto SouthernIsland_Interior_EventScript_TryLatiEncounter_7

SouthernIsland_Interior_EventScript_TryLatiEncounter_12:
# 89 "data/maps/SouthernIsland_Interior/scripts.pory"
	copyvar VAR_0x8004, VAR_TEMP_4
# 90 "data/maps/SouthernIsland_Interior/scripts.pory"
	goto Common_EventScript_LegendaryFlewAway
	goto SouthernIsland_Interior_EventScript_TryLatiEncounter_1

SouthernIsland_Interior_EventScript_TryLatiEncounter_14:
# 93 "data/maps/SouthernIsland_Interior/scripts.pory"
	setflag FLAG_CAUGHT_LATIAS_OR_LATIOS
	goto SouthernIsland_Interior_EventScript_TryLatiEncounter_1


# 105 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_Movement_CameraPanUp:
# 106 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_up
# 106 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_up
# 106 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_up
	step_end

# 109 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_Movement_CameraPanDown:
# 110 "data/maps/SouthernIsland_Interior/scripts.pory"
	delay_16
# 110 "data/maps/SouthernIsland_Interior/scripts.pory"
	delay_16
# 110 "data/maps/SouthernIsland_Interior/scripts.pory"
	delay_16
# 110 "data/maps/SouthernIsland_Interior/scripts.pory"
	delay_16
# 110 "data/maps/SouthernIsland_Interior/scripts.pory"
	delay_16
# 110 "data/maps/SouthernIsland_Interior/scripts.pory"
	delay_16
# 110 "data/maps/SouthernIsland_Interior/scripts.pory"
	delay_16
# 111 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_down
# 111 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_down
# 111 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_down
# 112 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_in_place_faster_up
	step_end

# 115 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_Movement_LatiApproach:
# 116 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_down
# 116 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_down
# 116 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_down
# 116 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_down
# 116 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_down
# 117 "data/maps/SouthernIsland_Interior/scripts.pory"
	delay_16
# 117 "data/maps/SouthernIsland_Interior/scripts.pory"
	delay_16
# 118 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_down
# 118 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_down
# 118 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_down
# 118 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_down
	step_end

SouthernIsland_Interior_EventScript_TryLatiEncounter_Text_0:
# 54 "data/maps/SouthernIsland_Interior/scripts.pory"
	.string "All dreams are but another reality.\nNever forget…$"
