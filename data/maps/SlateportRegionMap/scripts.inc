SlateportRegionMap_MapScripts::
# 7 "data/maps/SlateportRegionMap/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SlateportRegionMap_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 4 "data/maps/SlateportRegionMap/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SlateportRegionMap_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 13 "data/maps/SlateportRegionMap/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, SlateportRegionMap_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

SlateportRegionMap_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 8 "data/maps/SlateportRegionMap/scripts.pory"
	goto_if_set FLAG_REVERSE_SLATEPORT_BOAT_SCENE, SlateportRegionMap_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

SlateportRegionMap_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 9 "data/maps/SlateportRegionMap/scripts.pory"
	setobjectxyperm 1, 14, 26
# 10 "data/maps/SlateportRegionMap/scripts.pory"
	setvar VAR_TEMP_1, 1
	return

SlateportRegionMap_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 5 "data/maps/SlateportRegionMap/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, SlateportRegionMap_BoatScene
	.2byte 0

SlateportRegionMap_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 14 "data/maps/SlateportRegionMap/scripts.pory"
	map_script_2 VAR_TEMP_1, 1, SlateportRegionMap_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0
	.2byte 0

SlateportRegionMap_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0:
# 15 "data/maps/SlateportRegionMap/scripts.pory"
	turnobject 1, DIR_NORTH
# 16 "data/maps/SlateportRegionMap/scripts.pory"
	setvar VAR_TEMP_1, 0
	return


SlateportRegionMap_BoatSceneInit::
# 22 "data/maps/SlateportRegionMap/scripts.pory"
	lock
# 23 "data/maps/SlateportRegionMap/scripts.pory"
	setflag FLAG_SYS_SPAWN_INVISIBLE
# 24 "data/maps/SlateportRegionMap/scripts.pory"
	goto_if_unset FLAG_REVERSE_SLATEPORT_BOAT_SCENE, SlateportRegionMap_BoatSceneInit_2
# 28 "data/maps/SlateportRegionMap/scripts.pory"
	warp MAP_SLATEPORT_REGION_MAP, 14, 26
SlateportRegionMap_BoatSceneInit_1:
# 30 "data/maps/SlateportRegionMap/scripts.pory"
	waitstate
	return

SlateportRegionMap_BoatSceneInit_2:
# 25 "data/maps/SlateportRegionMap/scripts.pory"
	warp MAP_SLATEPORT_REGION_MAP, 10, 8
	goto SlateportRegionMap_BoatSceneInit_1


SlateportRegionMap_BoatScene::
# 34 "data/maps/SlateportRegionMap/scripts.pory"
	lock
# 35 "data/maps/SlateportRegionMap/scripts.pory"
	playse SE_RG_SS_ANNE_HORN
# 36 "data/maps/SlateportRegionMap/scripts.pory"
	goto_if_unset FLAG_REVERSE_SLATEPORT_BOAT_SCENE, SlateportRegionMap_BoatScene_2
SlateportRegionMap_BoatScene_1:
# 39 "data/maps/SlateportRegionMap/scripts.pory"
	special SpawnCameraObject
# 40 "data/maps/SlateportRegionMap/scripts.pory"
	goto_if_unset FLAG_REVERSE_SLATEPORT_BOAT_SCENE, SlateportRegionMap_BoatScene_5
# 45 "data/maps/SlateportRegionMap/scripts.pory"
	applymovement LOCALID_CAMERA, SlateportRegionMap_MovementReturn
# 46 "data/maps/SlateportRegionMap/scripts.pory"
	applymovement 1, SlateportRegionMap_MovementReturn
SlateportRegionMap_BoatScene_4:
# 48 "data/maps/SlateportRegionMap/scripts.pory"
	waitmovement 0
# 49 "data/maps/SlateportRegionMap/scripts.pory"
	special RemoveCameraObject
# 50 "data/maps/SlateportRegionMap/scripts.pory"
	setvar VAR_TEMP_0, 1
# 51 "data/maps/SlateportRegionMap/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 19
	goto_if_eq SlateportRegionMap_BoatScene_9
# 56 "data/maps/SlateportRegionMap/scripts.pory"
	goto_if_set FLAG_REVERSE_SLATEPORT_BOAT_SCENE, SlateportRegionMap_BoatScene_10
# 61 "data/maps/SlateportRegionMap/scripts.pory"
	warp MAP_MAUVE_CAMP, 0
SlateportRegionMap_BoatScene_8:
# 63 "data/maps/SlateportRegionMap/scripts.pory"
	waitstate
	return

SlateportRegionMap_BoatScene_2:
# 37 "data/maps/SlateportRegionMap/scripts.pory"
	delay 50
	goto SlateportRegionMap_BoatScene_1

SlateportRegionMap_BoatScene_5:
# 41 "data/maps/SlateportRegionMap/scripts.pory"
	applymovement LOCALID_CAMERA, SlateportRegionMap_Movement
# 42 "data/maps/SlateportRegionMap/scripts.pory"
	applymovement 1, SlateportRegionMap_Movement
	goto SlateportRegionMap_BoatScene_4

SlateportRegionMap_BoatScene_9:
# 52 "data/maps/SlateportRegionMap/scripts.pory"
	setflag FLAG_HIDE_SS_TIDAL_CORRIDOR_MR_BRINEY
# 53 "data/maps/SlateportRegionMap/scripts.pory"
	setvar VAR_EMERALBODY_RIVAL_STATE, 20
# 54 "data/maps/SlateportRegionMap/scripts.pory"
	warp MAP_SS_TIDAL_CORRIDOR, 11, 3
	goto SlateportRegionMap_BoatScene_8

SlateportRegionMap_BoatScene_10:
# 57 "data/maps/SlateportRegionMap/scripts.pory"
	clearflag FLAG_REVERSE_SLATEPORT_BOAT_SCENE
# 58 "data/maps/SlateportRegionMap/scripts.pory"
	warp MAP_SLATEPORT_CITY_HARBOR, 8, 11
	goto SlateportRegionMap_BoatScene_8


# 66 "data/maps/SlateportRegionMap/scripts.pory"
SlateportRegionMap_Movement:
# 67 "data/maps/SlateportRegionMap/scripts.pory"
	walk_right
# 67 "data/maps/SlateportRegionMap/scripts.pory"
	walk_right
# 68 "data/maps/SlateportRegionMap/scripts.pory"
	walk_down
# 69 "data/maps/SlateportRegionMap/scripts.pory"
	walk_right
# 69 "data/maps/SlateportRegionMap/scripts.pory"
	walk_right
# 70 "data/maps/SlateportRegionMap/scripts.pory"
	walk_down
# 70 "data/maps/SlateportRegionMap/scripts.pory"
	walk_down
# 70 "data/maps/SlateportRegionMap/scripts.pory"
	walk_down
# 70 "data/maps/SlateportRegionMap/scripts.pory"
	walk_down
# 70 "data/maps/SlateportRegionMap/scripts.pory"
	walk_down
# 70 "data/maps/SlateportRegionMap/scripts.pory"
	walk_down
# 70 "data/maps/SlateportRegionMap/scripts.pory"
	walk_down
# 70 "data/maps/SlateportRegionMap/scripts.pory"
	walk_down
# 70 "data/maps/SlateportRegionMap/scripts.pory"
	walk_down
# 70 "data/maps/SlateportRegionMap/scripts.pory"
	walk_down
# 70 "data/maps/SlateportRegionMap/scripts.pory"
	walk_down
# 70 "data/maps/SlateportRegionMap/scripts.pory"
	walk_down
# 70 "data/maps/SlateportRegionMap/scripts.pory"
	walk_down
# 70 "data/maps/SlateportRegionMap/scripts.pory"
	walk_down
# 70 "data/maps/SlateportRegionMap/scripts.pory"
	walk_down
# 70 "data/maps/SlateportRegionMap/scripts.pory"
	walk_down
# 70 "data/maps/SlateportRegionMap/scripts.pory"
	walk_down
	step_end

# 73 "data/maps/SlateportRegionMap/scripts.pory"
SlateportRegionMap_MovementReturn:
# 74 "data/maps/SlateportRegionMap/scripts.pory"
	walk_up
# 74 "data/maps/SlateportRegionMap/scripts.pory"
	walk_up
# 74 "data/maps/SlateportRegionMap/scripts.pory"
	walk_up
# 74 "data/maps/SlateportRegionMap/scripts.pory"
	walk_up
# 74 "data/maps/SlateportRegionMap/scripts.pory"
	walk_up
# 74 "data/maps/SlateportRegionMap/scripts.pory"
	walk_up
# 74 "data/maps/SlateportRegionMap/scripts.pory"
	walk_up
# 74 "data/maps/SlateportRegionMap/scripts.pory"
	walk_up
# 74 "data/maps/SlateportRegionMap/scripts.pory"
	walk_up
# 74 "data/maps/SlateportRegionMap/scripts.pory"
	walk_up
# 74 "data/maps/SlateportRegionMap/scripts.pory"
	walk_up
# 74 "data/maps/SlateportRegionMap/scripts.pory"
	walk_up
# 74 "data/maps/SlateportRegionMap/scripts.pory"
	walk_up
# 74 "data/maps/SlateportRegionMap/scripts.pory"
	walk_up
# 74 "data/maps/SlateportRegionMap/scripts.pory"
	walk_up
# 74 "data/maps/SlateportRegionMap/scripts.pory"
	walk_up
# 74 "data/maps/SlateportRegionMap/scripts.pory"
	walk_up
# 75 "data/maps/SlateportRegionMap/scripts.pory"
	walk_left
# 75 "data/maps/SlateportRegionMap/scripts.pory"
	walk_left
# 76 "data/maps/SlateportRegionMap/scripts.pory"
	walk_up
# 77 "data/maps/SlateportRegionMap/scripts.pory"
	walk_left
# 77 "data/maps/SlateportRegionMap/scripts.pory"
	walk_left
	step_end
