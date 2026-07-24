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
	checkplayergender
# 20 "data/maps/SouthernIsland_Interior/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq SouthernIsland_OnTransition_2
# 32 "data/maps/SouthernIsland_Interior/scripts.pory"
	goto_if_unset FLAG_CAUGHT_FIRST_LATI, SouthernIsland_OnTransition_11
# 37 "data/maps/SouthernIsland_Interior/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_SPECIES ( LATIAS )
# 38 "data/maps/SouthernIsland_Interior/scripts.pory"
	setvar VAR_TEMP_4, SPECIES_LATIAS
# 39 "data/maps/SouthernIsland_Interior/scripts.pory"
	setflag FLAG_TEMP_3
SouthernIsland_OnTransition_1:
# 43 "data/maps/SouthernIsland_Interior/scripts.pory"
	checkplayergender
# 44 "data/maps/SouthernIsland_Interior/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq SouthernIsland_OnTransition_5
# 48 "data/maps/SouthernIsland_Interior/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_RIVAL_MAY_NORMAL
	return

SouthernIsland_OnTransition_2:
# 21 "data/maps/SouthernIsland_Interior/scripts.pory"
	goto_if_unset FLAG_CAUGHT_FIRST_LATI, SouthernIsland_OnTransition_8
# 27 "data/maps/SouthernIsland_Interior/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_SPECIES ( LATIOS )
# 28 "data/maps/SouthernIsland_Interior/scripts.pory"
	setvar VAR_TEMP_4, SPECIES_LATIOS
	goto SouthernIsland_OnTransition_1

SouthernIsland_OnTransition_5:
# 45 "data/maps/SouthernIsland_Interior/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_RIVAL_BRENDAN_NORMAL
	return

SouthernIsland_OnTransition_8:
# 22 "data/maps/SouthernIsland_Interior/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_SPECIES ( LATIAS )
# 23 "data/maps/SouthernIsland_Interior/scripts.pory"
	setvar VAR_TEMP_4, SPECIES_LATIAS
# 24 "data/maps/SouthernIsland_Interior/scripts.pory"
	setflag FLAG_TEMP_3
	goto SouthernIsland_OnTransition_1

SouthernIsland_OnTransition_11:
# 33 "data/maps/SouthernIsland_Interior/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_SPECIES ( LATIOS )
# 34 "data/maps/SouthernIsland_Interior/scripts.pory"
	setvar VAR_TEMP_4, SPECIES_LATIOS
	goto SouthernIsland_OnTransition_1


SouthernIsland_Interior_EventScript_TryLatiEncounter::
# 53 "data/maps/SouthernIsland_Interior/scripts.pory"
	call SouthernIsland_OnTransition
# 54 "data/maps/SouthernIsland_Interior/scripts.pory"
	goto_if_set FLAG_TEMP_2, SouthernIsland_Interior_EventScript_TryLatiEncounter_2
# 54 "data/maps/SouthernIsland_Interior/scripts.pory"
	goto_if_set FLAG_CAUGHT_LATIAS_AND_LATIOS, SouthernIsland_Interior_EventScript_TryLatiEncounter_2
# 58 "data/maps/SouthernIsland_Interior/scripts.pory"
	setflag FLAG_TEMP_2
# 59 "data/maps/SouthernIsland_Interior/scripts.pory"
	special SpawnCameraObject
# 60 "data/maps/SouthernIsland_Interior/scripts.pory"
	applymovement LOCALID_CAMERA, Common_Movement_WalkUp3
# 61 "data/maps/SouthernIsland_Interior/scripts.pory"
	waitmovement 0
# 62 "data/maps/SouthernIsland_Interior/scripts.pory"
	delay 50
# 63 "data/maps/SouthernIsland_Interior/scripts.pory"
	waitse
# 64 "data/maps/SouthernIsland_Interior/scripts.pory"
	playmoncry VAR_TEMP_4, CRY_MODE_NORMAL
# 65 "data/maps/SouthernIsland_Interior/scripts.pory"
	delay 30
# 66 "data/maps/SouthernIsland_Interior/scripts.pory"
	waitmoncry
# 67 "data/maps/SouthernIsland_Interior/scripts.pory"
	addobject 2
# 68 "data/maps/SouthernIsland_Interior/scripts.pory"
	delay 30
# 69 "data/maps/SouthernIsland_Interior/scripts.pory"
	applymovement LOCALID_CAMERA, SouthernIsland_Interior_Movement_CameraPanDown
# 70 "data/maps/SouthernIsland_Interior/scripts.pory"
	applymovement 2, SouthernIsland_Interior_Movement_LatiApproach
# 71 "data/maps/SouthernIsland_Interior/scripts.pory"
	waitmovement 0
# 72 "data/maps/SouthernIsland_Interior/scripts.pory"
	delay 50
# 73 "data/maps/SouthernIsland_Interior/scripts.pory"
	special RemoveCameraObject
# 74 "data/maps/SouthernIsland_Interior/scripts.pory"
	setvar VAR_LAST_TALKED, 2
# 75 "data/maps/SouthernIsland_Interior/scripts.pory"
	goto_if_set FLAG_TEMP_3, SouthernIsland_Interior_EventScript_TryLatiEncounter_8
# 79 "data/maps/SouthernIsland_Interior/scripts.pory"
	seteventmon SPECIES_LATIOS, 60, ITEM_SOUL_DEW
SouthernIsland_Interior_EventScript_TryLatiEncounter_7:
# 81 "data/maps/SouthernIsland_Interior/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 82 "data/maps/SouthernIsland_Interior/scripts.pory"
	special BattleSetup_StartLatiBattle
# 83 "data/maps/SouthernIsland_Interior/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 84 "data/maps/SouthernIsland_Interior/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 85 "data/maps/SouthernIsland_Interior/scripts.pory"
	switch VAR_RESULT
# 86 "data/maps/SouthernIsland_Interior/scripts.pory"
	case B_OUTCOME_CAUGHT, SouthernIsland_Interior_EventScript_TryLatiEncounter_12
# 94 "data/maps/SouthernIsland_Interior/scripts.pory"
	copyvar VAR_0x8004, VAR_TEMP_4
# 95 "data/maps/SouthernIsland_Interior/scripts.pory"
	goto Common_EventScript_LegendaryFlewAway
SouthernIsland_Interior_EventScript_TryLatiEncounter_1:
# 99 "data/maps/SouthernIsland_Interior/scripts.pory"
	releaseall
	return

SouthernIsland_Interior_EventScript_TryLatiEncounter_2:
# 55 "data/maps/SouthernIsland_Interior/scripts.pory"
	msgbox SouthernIsland_Interior_EventScript_TryLatiEncounter_Text_0
	goto SouthernIsland_Interior_EventScript_TryLatiEncounter_1

SouthernIsland_Interior_EventScript_TryLatiEncounter_8:
# 76 "data/maps/SouthernIsland_Interior/scripts.pory"
	seteventmon SPECIES_LATIAS, 60, ITEM_SOUL_DEW
	goto SouthernIsland_Interior_EventScript_TryLatiEncounter_7

SouthernIsland_Interior_EventScript_TryLatiEncounter_12:
# 87 "data/maps/SouthernIsland_Interior/scripts.pory"
	goto_if_unset FLAG_CAUGHT_FIRST_LATI, SouthernIsland_Interior_EventScript_TryLatiEncounter_14
# 91 "data/maps/SouthernIsland_Interior/scripts.pory"
	setflag FLAG_CAUGHT_LATIAS_AND_LATIOS
	goto SouthernIsland_Interior_EventScript_TryLatiEncounter_1

SouthernIsland_Interior_EventScript_TryLatiEncounter_14:
# 88 "data/maps/SouthernIsland_Interior/scripts.pory"
	setflag FLAG_CAUGHT_FIRST_LATI
	goto SouthernIsland_Interior_EventScript_TryLatiEncounter_1


# 103 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_Movement_CameraPanDown:
# 104 "data/maps/SouthernIsland_Interior/scripts.pory"
	delay_16
# 104 "data/maps/SouthernIsland_Interior/scripts.pory"
	delay_16
# 104 "data/maps/SouthernIsland_Interior/scripts.pory"
	delay_16
# 104 "data/maps/SouthernIsland_Interior/scripts.pory"
	delay_16
# 104 "data/maps/SouthernIsland_Interior/scripts.pory"
	delay_16
# 104 "data/maps/SouthernIsland_Interior/scripts.pory"
	delay_16
# 104 "data/maps/SouthernIsland_Interior/scripts.pory"
	delay_16
# 105 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_down
# 105 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_down
# 105 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_down
# 106 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_in_place_faster_up
	step_end

# 109 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_Movement_LatiApproach:
# 110 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_down
# 110 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_down
# 110 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_down
# 110 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_down
# 110 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_down
# 111 "data/maps/SouthernIsland_Interior/scripts.pory"
	delay_16
# 111 "data/maps/SouthernIsland_Interior/scripts.pory"
	delay_16
# 112 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_down
# 112 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_down
# 112 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_down
# 112 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_down
	step_end

SouthernIsland_Interior_EventScript_TryLatiEncounter_Text_0:
# 55 "data/maps/SouthernIsland_Interior/scripts.pory"
	.string "All dreams are but another reality.\nNever forget…$"
