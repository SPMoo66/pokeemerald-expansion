SlateportRegionMap_BoatSceneInit::
# 9 "data/expansion_1/scene01.pory"
	lock
# 10 "data/expansion_1/scene01.pory"
	setflag FLAG_SYS_SPAWN_INVISIBLE
# 11 "data/expansion_1/scene01.pory"
	warp MAP_SLATEPORT_REGION_MAP, 10, 8
	return


SlateportRegionMap_BoatScene::
# 15 "data/expansion_1/scene01.pory"
	lock
# 16 "data/expansion_1/scene01.pory"
	playse SE_RG_SS_ANNE_HORN
# 17 "data/expansion_1/scene01.pory"
	delay 50
# 18 "data/expansion_1/scene01.pory"
	special SpawnCameraObject
# 19 "data/expansion_1/scene01.pory"
	applymovement LOCALID_CAMERA, SlateportRegionMap_Movement
# 20 "data/expansion_1/scene01.pory"
	applymovement 1, SlateportRegionMap_Movement
# 21 "data/expansion_1/scene01.pory"
	waitmovement 0
# 22 "data/expansion_1/scene01.pory"
	special RemoveCameraObject
# 23 "data/expansion_1/scene01.pory"
	setvar VAR_TEMP_0, 1
# 24 "data/expansion_1/scene01.pory"
	setflag FLAG_HIDE_SS_TIDAL_CORRIDOR_MR_BRINEY
# 25 "data/expansion_1/scene01.pory"
	setvar VAR_EMERALBODY_RIVAL_STATE, 20
# 26 "data/expansion_1/scene01.pory"
	warp MAP_SS_TIDAL_CORRIDOR, 11, 3
	return


# 29 "data/expansion_1/scene01.pory"
SlateportRegionMap_Movement:
# 30 "data/expansion_1/scene01.pory"
	walk_right
# 30 "data/expansion_1/scene01.pory"
	walk_right
# 31 "data/expansion_1/scene01.pory"
	walk_down
# 32 "data/expansion_1/scene01.pory"
	walk_right
# 32 "data/expansion_1/scene01.pory"
	walk_right
# 33 "data/expansion_1/scene01.pory"
	walk_down
# 33 "data/expansion_1/scene01.pory"
	walk_down
# 33 "data/expansion_1/scene01.pory"
	walk_down
# 33 "data/expansion_1/scene01.pory"
	walk_down
# 33 "data/expansion_1/scene01.pory"
	walk_down
# 33 "data/expansion_1/scene01.pory"
	walk_down
# 33 "data/expansion_1/scene01.pory"
	walk_down
# 33 "data/expansion_1/scene01.pory"
	walk_down
# 33 "data/expansion_1/scene01.pory"
	walk_down
# 33 "data/expansion_1/scene01.pory"
	walk_down
# 33 "data/expansion_1/scene01.pory"
	walk_down
# 33 "data/expansion_1/scene01.pory"
	walk_down
# 33 "data/expansion_1/scene01.pory"
	walk_down
# 33 "data/expansion_1/scene01.pory"
	walk_down
# 33 "data/expansion_1/scene01.pory"
	walk_down
# 33 "data/expansion_1/scene01.pory"
	walk_down
	step_end

SSTidal_Scene01_OnTransition::
# 37 "data/expansion_1/scene01.pory"
	clearflag FLAG_TEMP_4
	return


SSTidal_Scene01_OnWarp::
# 41 "data/expansion_1/scene01.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
	return


SSTidal_Scene01_OnFrame::
# 45 "data/expansion_1/scene01.pory"
	lock
# 47 "data/expansion_1/scene01.pory"
	msgbox SSTidal_Scene01_OnFrame_Text_0, MSGBOX_DEFAULT
# 49 "data/expansion_1/scene01.pory"
	setvar VAR_EMERALBODY_RIVAL_STATE, 21
# 50 "data/expansion_1/scene01.pory"
	clearflag FLAG_HIDE_SS_TIDAL_CORRIDOR_MR_BRINEY
# 51 "data/expansion_1/scene01.pory"
	warpsilent MAP_ILLUSORY_GROTTO_B4F_1R, 26, 7
	return


SSTidal_Scene01_OnFrame_Text_0:
# 47 "data/expansion_1/scene01.pory"
	.string "Scene01$"
