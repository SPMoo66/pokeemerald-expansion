SlateportRegionMap_BoatSceneInit::
# 9 "data/expansion_1/scene01.pory"
	lock
# 10 "data/expansion_1/scene01.pory"
	setflag FLAG_SYS_SPAWN_INVISIBLE
# 11 "data/expansion_1/scene01.pory"
	warp MAP_SLATEPORT_REGION_MAP, 10, 8
# 12 "data/expansion_1/scene01.pory"
	waitstate
	return


SlateportRegionMap_BoatScene::
# 16 "data/expansion_1/scene01.pory"
	lock
# 17 "data/expansion_1/scene01.pory"
	playse SE_RG_SS_ANNE_HORN
# 18 "data/expansion_1/scene01.pory"
	delay 50
# 19 "data/expansion_1/scene01.pory"
	special SpawnCameraObject
# 20 "data/expansion_1/scene01.pory"
	applymovement LOCALID_CAMERA, SlateportRegionMap_Movement
# 21 "data/expansion_1/scene01.pory"
	applymovement 1, SlateportRegionMap_Movement
# 22 "data/expansion_1/scene01.pory"
	waitmovement 0
# 23 "data/expansion_1/scene01.pory"
	special RemoveCameraObject
# 24 "data/expansion_1/scene01.pory"
	setvar VAR_TEMP_0, 1
# 25 "data/expansion_1/scene01.pory"
	setflag FLAG_HIDE_SS_TIDAL_CORRIDOR_MR_BRINEY
# 26 "data/expansion_1/scene01.pory"
	setvar VAR_EMERALBODY_RIVAL_STATE, 20
# 27 "data/expansion_1/scene01.pory"
	warp MAP_SS_TIDAL_CORRIDOR, 11, 3
# 28 "data/expansion_1/scene01.pory"
	waitstate
	return


# 31 "data/expansion_1/scene01.pory"
SlateportRegionMap_Movement:
# 32 "data/expansion_1/scene01.pory"
	walk_right
# 32 "data/expansion_1/scene01.pory"
	walk_right
# 33 "data/expansion_1/scene01.pory"
	walk_down
# 34 "data/expansion_1/scene01.pory"
	walk_right
# 34 "data/expansion_1/scene01.pory"
	walk_right
# 35 "data/expansion_1/scene01.pory"
	walk_down
# 35 "data/expansion_1/scene01.pory"
	walk_down
# 35 "data/expansion_1/scene01.pory"
	walk_down
# 35 "data/expansion_1/scene01.pory"
	walk_down
# 35 "data/expansion_1/scene01.pory"
	walk_down
# 35 "data/expansion_1/scene01.pory"
	walk_down
# 35 "data/expansion_1/scene01.pory"
	walk_down
# 35 "data/expansion_1/scene01.pory"
	walk_down
# 35 "data/expansion_1/scene01.pory"
	walk_down
# 35 "data/expansion_1/scene01.pory"
	walk_down
# 35 "data/expansion_1/scene01.pory"
	walk_down
# 35 "data/expansion_1/scene01.pory"
	walk_down
# 35 "data/expansion_1/scene01.pory"
	walk_down
# 35 "data/expansion_1/scene01.pory"
	walk_down
# 35 "data/expansion_1/scene01.pory"
	walk_down
# 35 "data/expansion_1/scene01.pory"
	walk_down
	step_end

SSTidal_Scene01_OnTransition::
# 39 "data/expansion_1/scene01.pory"
	clearflag FLAG_TEMP_4
	return


SSTidal_Scene01_OnWarp::
# 43 "data/expansion_1/scene01.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
	return


SSTidal_Scene01_OnFrame::
# 47 "data/expansion_1/scene01.pory"
	lock
# 49 "data/expansion_1/scene01.pory"
	msgbox SSTidal_Scene01_OnFrame_Text_0, MSGBOX_DEFAULT
# 51 "data/expansion_1/scene01.pory"
	clearflag FLAG_HIDE_SS_TIDAL_CORRIDOR_MR_BRINEY
# 52 "data/expansion_1/scene01.pory"
	setflag FLAG_DONT_START_MUSIC_ON_WARP
# 53 "data/expansion_1/scene01.pory"
	warp MAP_ILLUSORY_GROTTO_B4F_1R, 26, 7
# 54 "data/expansion_1/scene01.pory"
	waitstate
	return


IllusoryGrotto_B4F_1R_Scene01_OnFrame::
# 58 "data/expansion_1/scene01.pory"
	lock
# 59 "data/expansion_1/scene01.pory"
	delay 30
# 60 "data/expansion_1/scene01.pory"
	playse SE_M_BUBBLE3
# 61 "data/expansion_1/scene01.pory"
	delay 40
# 62 "data/expansion_1/scene01.pory"
	playse SE_M_BUBBLE3
# 63 "data/expansion_1/scene01.pory"
	delay 60
# 64 "data/expansion_1/scene01.pory"
	playse SE_M_BUBBLE3
# 65 "data/expansion_1/scene01.pory"
	delay 40
# 67 "data/expansion_1/scene01.pory"
	setflashlevel 8
# 68 "data/expansion_1/scene01.pory"
	animateflash 4
# 69 "data/expansion_1/scene01.pory"
	setflashlevel 4
# 70 "data/expansion_1/scene01.pory"
	delay 20
# 72 "data/expansion_1/scene01.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceUp
# 73 "data/expansion_1/scene01.pory"
	waitmovement 0
# 74 "data/expansion_1/scene01.pory"
	delay 20
# 75 "data/expansion_1/scene01.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceRight
# 76 "data/expansion_1/scene01.pory"
	waitmovement 0
# 77 "data/expansion_1/scene01.pory"
	delay 20
# 78 "data/expansion_1/scene01.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceLeft
# 79 "data/expansion_1/scene01.pory"
	waitmovement 0
# 80 "data/expansion_1/scene01.pory"
	delay 20
# 81 "data/expansion_1/scene01.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceDown
# 82 "data/expansion_1/scene01.pory"
	waitmovement 0
# 84 "data/expansion_1/scene01.pory"
	animateflash 0
# 85 "data/expansion_1/scene01.pory"
	setflashlevel 0
# 87 "data/expansion_1/scene01.pory"
	playbgm MUS_DP_VICTORY_ROAD, FALSE
# 88 "data/expansion_1/scene01.pory"
	setvar VAR_EMERALBODY_RIVAL_STATE, 21
# 89 "data/expansion_1/scene01.pory"
	clearflag FLAG_DONT_START_MUSIC_ON_WARP
# 90 "data/expansion_1/scene01.pory"
	release
	return


SSTidal_Scene01_OnFrame_Text_0:
# 49 "data/expansion_1/scene01.pory"
	.string "Scene01$"
