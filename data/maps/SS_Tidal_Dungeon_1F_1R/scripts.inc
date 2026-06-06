SS_Tidal_Dungeon_1F_1R_MapScripts::
# 2 "data/maps/SS_Tidal_Dungeon_1F_1R/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SS_Tidal_Dungeon_1F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 10 "data/maps/SS_Tidal_Dungeon_1F_1R/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SS_Tidal_Dungeon_1F_1R_MapScripts_MAP_SCRIPT_ON_LOAD
# 15 "data/maps/SS_Tidal_Dungeon_1F_1R/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SS_Tidal_Dungeon_1F_1R_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

SS_Tidal_Dungeon_1F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/SS_Tidal_Dungeon_1F_1R/scripts.pory"
	goto_if_set FLAG_SYS_HIDE_FOLLOWERS, SS_Tidal_Dungeon_1F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
SS_Tidal_Dungeon_1F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 6 "data/maps/SS_Tidal_Dungeon_1F_1R/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 39
	goto_if_ge SS_Tidal_Dungeon_1F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
	return

SS_Tidal_Dungeon_1F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 4 "data/maps/SS_Tidal_Dungeon_1F_1R/scripts.pory"
	setflag FLAG_TEMP_1
	goto SS_Tidal_Dungeon_1F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

SS_Tidal_Dungeon_1F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 7 "data/maps/SS_Tidal_Dungeon_1F_1R/scripts.pory"
	setflag FLAG_TEMP_1
	return

SS_Tidal_Dungeon_1F_1R_MapScripts_MAP_SCRIPT_ON_LOAD:
# 11 "data/maps/SS_Tidal_Dungeon_1F_1R/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 39
	goto_if_eq SS_Tidal_Dungeon_1F_1R_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

SS_Tidal_Dungeon_1F_1R_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 12 "data/maps/SS_Tidal_Dungeon_1F_1R/scripts.pory"
	setmetatile 4, 9, METATILE_InsideShip_IntactDoor_Bottom_Unlocked, TRUE
	return

SS_Tidal_Dungeon_1F_1R_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 16 "data/maps/SS_Tidal_Dungeon_1F_1R/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, SS_Tidal_Dungeon_1F_1R_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

SS_Tidal_Dungeon_1F_1R_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 17 "data/maps/SS_Tidal_Dungeon_1F_1R/scripts.pory"
	goto_if_unset FLAG_SYS_HIDE_FOLLOWERS, SS_Tidal_Dungeon_1F_1R_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_3
SS_Tidal_Dungeon_1F_1R_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_1:
# 25 "data/maps/SS_Tidal_Dungeon_1F_1R/scripts.pory"
	setvar VAR_TEMP_0, 1
	return

SS_Tidal_Dungeon_1F_1R_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_2:
# 18 "data/maps/SS_Tidal_Dungeon_1F_1R/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 33
	goto_if_eq SS_Tidal_Dungeon_1F_1R_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_6
# 22 "data/maps/SS_Tidal_Dungeon_1F_1R/scripts.pory"
	call Expansion1_Follower2_Restart
	goto SS_Tidal_Dungeon_1F_1R_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_1

SS_Tidal_Dungeon_1F_1R_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_3:
# 17 "data/maps/SS_Tidal_Dungeon_1F_1R/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 39
	goto_if_lt SS_Tidal_Dungeon_1F_1R_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_2
	goto SS_Tidal_Dungeon_1F_1R_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_1

SS_Tidal_Dungeon_1F_1R_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_6:
# 19 "data/maps/SS_Tidal_Dungeon_1F_1R/scripts.pory"
	call Expansion1_Rival_Scene06
	goto SS_Tidal_Dungeon_1F_1R_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_1


SS_Tidal_Dungeon_1F_1R_LockedRoom::
# 31 "data/maps/SS_Tidal_Dungeon_1F_1R/scripts.pory"
	lockall
# 32 "data/maps/SS_Tidal_Dungeon_1F_1R/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 38
	goto_if_eq SS_Tidal_Dungeon_1F_1R_LockedRoom_2
# 38 "data/maps/SS_Tidal_Dungeon_1F_1R/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 38
	goto_if_lt SS_Tidal_Dungeon_1F_1R_LockedRoom_3
# 42 "data/maps/SS_Tidal_Dungeon_1F_1R/scripts.pory"
	msgbox AbandonedShip_Text_TheDoorIsOpen, MSGBOX_AUTOCLOSE
SS_Tidal_Dungeon_1F_1R_LockedRoom_1:
# 44 "data/maps/SS_Tidal_Dungeon_1F_1R/scripts.pory"
	releaseall
	return

SS_Tidal_Dungeon_1F_1R_LockedRoom_2:
# 33 "data/maps/SS_Tidal_Dungeon_1F_1R/scripts.pory"
	msgbox AbandonedShip_Corridors_B1F_Text_InsertedStorageKey, MSGBOX_AUTOCLOSE
# 34 "data/maps/SS_Tidal_Dungeon_1F_1R/scripts.pory"
	setvar VAR_EMERALBODY_RIVAL_STATE, 39
# 35 "data/maps/SS_Tidal_Dungeon_1F_1R/scripts.pory"
	setmetatile 4, 9, METATILE_InsideShip_IntactDoor_Bottom_Unlocked, TRUE
# 36 "data/maps/SS_Tidal_Dungeon_1F_1R/scripts.pory"
	special DrawWholeMapView
	goto SS_Tidal_Dungeon_1F_1R_LockedRoom_1

SS_Tidal_Dungeon_1F_1R_LockedRoom_3:
# 39 "data/maps/SS_Tidal_Dungeon_1F_1R/scripts.pory"
	msgbox SS_Tidal_Dungeon_1F_1R_LockedRoom_Text_0, MSGBOX_AUTOCLOSE
	goto SS_Tidal_Dungeon_1F_1R_LockedRoom_1


SS_Tidal_Dungeon_1F_1R_LockedRoom_Text_0:
# 39 "data/maps/SS_Tidal_Dungeon_1F_1R/scripts.pory"
	.string "The door is locked.$"
