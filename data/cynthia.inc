LilycoveCity_EventScript_CynthiaAppears::
# 2 "data/cynthia.pory"
	opendoor 24, 14
# 3 "data/cynthia.pory"
	waitdooranim
# 4 "data/cynthia.pory"
	addobject CYNTHIA_LILYCOVE
# 5 "data/cynthia.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 6 "data/cynthia.pory"
	applymovement CYNTHIA_LILYCOVE, Common_Movement_WalkDown
# 7 "data/cynthia.pory"
	waitmovement 0
# 8 "data/cynthia.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 9 "data/cynthia.pory"
	playse SE_PIN
# 10 "data/cynthia.pory"
	playbgm MUS_DP_ENCOUNTER_CHAMPION, FALSE
# 11 "data/cynthia.pory"
	closedoor 24, 14
# 12 "data/cynthia.pory"
	waitdooranim
# 13 "data/cynthia.pory"
	delay 20
# 14 "data/cynthia.pory"
	applymovement CYNTHIA_LILYCOVE, Common_Movement_WalkDown2
# 15 "data/cynthia.pory"
	waitmovement 0
# 16 "data/cynthia.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 17 "data/cynthia.pory"
	switch VAR_TEMP_1
# 18 "data/cynthia.pory"
	case 15, LilycoveCity_EventScript_CynthiaAppears_3
# 20 "data/cynthia.pory"
	case 16, LilycoveCity_EventScript_CynthiaAppears_4
# 22 "data/cynthia.pory"
	case 17, LilycoveCity_EventScript_CynthiaAppears_5
# 24 "data/cynthia.pory"
	case 18, LilycoveCity_EventScript_CynthiaAppears_6
LilycoveCity_EventScript_CynthiaAppears_1:
# 27 "data/cynthia.pory"
	applymovement CYNTHIA_LILYCOVE, Common_Movement_WalkRight7
# 28 "data/cynthia.pory"
	waitmovement 0
# 29 "data/cynthia.pory"
	delay 20
# 30 "data/cynthia.pory"
	special SpawnCameraObject
# 31 "data/cynthia.pory"
	applymovement LOCALID_PLAYER, Cynthia_PlayerWatches
# 32 "data/cynthia.pory"
	applymovement LOCALID_CAMERA, Common_Movement_WalkDown7
# 33 "data/cynthia.pory"
	applymovement CYNTHIA_LILYCOVE, Cynthia_CynthiaWalksToMotel
# 34 "data/cynthia.pory"
	waitmovement 0
# 35 "data/cynthia.pory"
	opendoor 37, 24
# 36 "data/cynthia.pory"
	waitdooranim
# 37 "data/cynthia.pory"
	applymovement CYNTHIA_LILYCOVE, Common_Movement_WalkUp
# 38 "data/cynthia.pory"
	waitmovement 0
# 39 "data/cynthia.pory"
	removeobject CYNTHIA_LILYCOVE
# 40 "data/cynthia.pory"
	closedoor 37, 24
# 41 "data/cynthia.pory"
	waitdooranim
# 42 "data/cynthia.pory"
	fadedefaultbgm
# 43 "data/cynthia.pory"
	delay 30
# 44 "data/cynthia.pory"
	applymovement LOCALID_CAMERA, Common_Movement_WalkUp7
# 45 "data/cynthia.pory"
	waitmovement 0
# 46 "data/cynthia.pory"
	special RemoveCameraObject
# 47 "data/cynthia.pory"
	delay 20
# 48 "data/cynthia.pory"
	setvar VAR_CYNTHIA_MOTEL, 1
# 49 "data/cynthia.pory"
	release
	return

LilycoveCity_EventScript_CynthiaAppears_3:
# 19 "data/cynthia.pory"
	applymovement LOCALID_PLAYER, Cynthia_PlayerBacksAway1
	goto LilycoveCity_EventScript_CynthiaAppears_1

LilycoveCity_EventScript_CynthiaAppears_4:
# 21 "data/cynthia.pory"
	applymovement LOCALID_PLAYER, Cynthia_PlayerBacksAway2
	goto LilycoveCity_EventScript_CynthiaAppears_1

LilycoveCity_EventScript_CynthiaAppears_5:
# 23 "data/cynthia.pory"
	applymovement LOCALID_PLAYER, Cynthia_PlayerBacksAway3
	goto LilycoveCity_EventScript_CynthiaAppears_1

LilycoveCity_EventScript_CynthiaAppears_6:
# 25 "data/cynthia.pory"
	applymovement LOCALID_PLAYER, Cynthia_PlayerBacksAway4
	goto LilycoveCity_EventScript_CynthiaAppears_1


# 52 "data/cynthia.pory"
Cynthia_PlayerBacksAway1:
# 53 "data/cynthia.pory"
	delay_16
# 53 "data/cynthia.pory"
	delay_16
# 54 "data/cynthia.pory"
	lock_facing_direction
# 55 "data/cynthia.pory"
	walk_diag_southeast
# 56 "data/cynthia.pory"
	walk_right
# 56 "data/cynthia.pory"
	walk_right
# 57 "data/cynthia.pory"
	unlock_facing_direction
	step_end

# 60 "data/cynthia.pory"
Cynthia_PlayerBacksAway2:
# 61 "data/cynthia.pory"
	delay_16
# 61 "data/cynthia.pory"
	delay_16
# 62 "data/cynthia.pory"
	lock_facing_direction
# 63 "data/cynthia.pory"
	walk_right
# 63 "data/cynthia.pory"
	walk_right
# 63 "data/cynthia.pory"
	walk_right
# 64 "data/cynthia.pory"
	unlock_facing_direction
	step_end

# 67 "data/cynthia.pory"
Cynthia_PlayerBacksAway3:
# 68 "data/cynthia.pory"
	delay_16
# 68 "data/cynthia.pory"
	delay_16
# 69 "data/cynthia.pory"
	lock_facing_direction
# 70 "data/cynthia.pory"
	walk_diag_northeast
# 71 "data/cynthia.pory"
	walk_right
# 71 "data/cynthia.pory"
	walk_right
# 72 "data/cynthia.pory"
	unlock_facing_direction
	step_end

# 75 "data/cynthia.pory"
Cynthia_PlayerBacksAway4:
# 76 "data/cynthia.pory"
	delay_16
# 76 "data/cynthia.pory"
	delay_16
# 77 "data/cynthia.pory"
	lock_facing_direction
# 78 "data/cynthia.pory"
	walk_diag_northeast
# 78 "data/cynthia.pory"
	walk_diag_northeast
# 79 "data/cynthia.pory"
	walk_right
# 80 "data/cynthia.pory"
	unlock_facing_direction
	step_end

# 83 "data/cynthia.pory"
Cynthia_PlayerWatches:
# 84 "data/cynthia.pory"
	delay_16
# 85 "data/cynthia.pory"
	walk_in_place_faster_down
	step_end

# 88 "data/cynthia.pory"
Cynthia_CynthiaWalksToMotel:
# 89 "data/cynthia.pory"
	walk_down
# 89 "data/cynthia.pory"
	walk_down
# 89 "data/cynthia.pory"
	walk_down
# 89 "data/cynthia.pory"
	walk_down
# 89 "data/cynthia.pory"
	walk_down
# 89 "data/cynthia.pory"
	walk_down
# 89 "data/cynthia.pory"
	walk_down
# 89 "data/cynthia.pory"
	walk_down
# 90 "data/cynthia.pory"
	walk_right
# 90 "data/cynthia.pory"
	walk_right
# 90 "data/cynthia.pory"
	walk_right
# 90 "data/cynthia.pory"
	walk_right
# 90 "data/cynthia.pory"
	walk_right
# 90 "data/cynthia.pory"
	walk_right
# 91 "data/cynthia.pory"
	walk_in_place_up
	step_end
