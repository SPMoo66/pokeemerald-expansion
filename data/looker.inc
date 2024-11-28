RustboroCity_EventScript_Looker::
# 2 "data/looker.pory"
	lock
# 3 "data/looker.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 4 "data/looker.pory"
	addobject LOOKER
# 5 "data/looker.pory"
	setobjectxy LOOKER, 21, 15
# 6 "data/looker.pory"
	special SpawnCameraObject
# 7 "data/looker.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkRight2
# 8 "data/looker.pory"
	waitmovement 0
# 9 "data/looker.pory"
	playbgm MUS_PL_LOOKER, FALSE
# 10 "data/looker.pory"
	applymovement LOOKER, RustboroCity_LookerMove
# 11 "data/looker.pory"
	waitmovement 0
# 12 "data/looker.pory"
	removeobject LOOKER
# 13 "data/looker.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 8
# 14 "data/looker.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkLeft2
# 15 "data/looker.pory"
	waitmovement 0
# 16 "data/looker.pory"
	special RemoveCameraObject
# 17 "data/looker.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 18 "data/looker.pory"
	fadedefaultbgm
# 19 "data/looker.pory"
	release
	return


# 22 "data/looker.pory"
RustboroCity_LookerMove:
# 23 "data/looker.pory"
	walk_down
# 23 "data/looker.pory"
	walk_down
# 23 "data/looker.pory"
	walk_down
# 23 "data/looker.pory"
	walk_down
# 24 "data/looker.pory"
	delay_16
# 24 "data/looker.pory"
	delay_16
# 25 "data/looker.pory"
	walk_in_place_faster_up
# 26 "data/looker.pory"
	delay_16
# 26 "data/looker.pory"
	delay_16
# 26 "data/looker.pory"
	delay_16
# 26 "data/looker.pory"
	delay_16
# 27 "data/looker.pory"
	walk_down
# 27 "data/looker.pory"
	walk_down
# 28 "data/looker.pory"
	delay_16
# 29 "data/looker.pory"
	walk_in_place_right
# 30 "data/looker.pory"
	delay_16
# 30 "data/looker.pory"
	delay_16
# 30 "data/looker.pory"
	delay_16
# 30 "data/looker.pory"
	delay_16
# 31 "data/looker.pory"
	walk_down
# 31 "data/looker.pory"
	walk_down
# 32 "data/looker.pory"
	delay_16
# 32 "data/looker.pory"
	delay_16
# 33 "data/looker.pory"
	walk_faster_up
# 33 "data/looker.pory"
	walk_faster_up
# 33 "data/looker.pory"
	walk_faster_up
# 33 "data/looker.pory"
	walk_faster_up
# 34 "data/looker.pory"
	delay_16
# 34 "data/looker.pory"
	delay_16
# 34 "data/looker.pory"
	delay_16
# 34 "data/looker.pory"
	delay_16
# 35 "data/looker.pory"
	lock_facing_direction
# 36 "data/looker.pory"
	walk_slow_down
# 36 "data/looker.pory"
	walk_slow_down
# 36 "data/looker.pory"
	walk_slow_down
# 37 "data/looker.pory"
	delay_16
# 38 "data/looker.pory"
	unlock_facing_direction
# 39 "data/looker.pory"
	walk_faster_down
# 39 "data/looker.pory"
	walk_faster_down
# 39 "data/looker.pory"
	walk_faster_down
# 39 "data/looker.pory"
	walk_faster_down
# 39 "data/looker.pory"
	walk_faster_down
# 39 "data/looker.pory"
	walk_faster_down
# 39 "data/looker.pory"
	walk_faster_down
	step_end
