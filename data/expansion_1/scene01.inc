SSTidal_Scene01_OnTransition::
# 9 "data/expansion_1/scene01.pory"
	clearflag FLAG_TEMP_4
	return


SSTidal_Scene01_OnWarp::
# 13 "data/expansion_1/scene01.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
	return


SSTidal_Scene01_OnFrame::
# 17 "data/expansion_1/scene01.pory"
	lock
# 19 "data/expansion_1/scene01.pory"
	msgbox SSTidal_Scene01_OnFrame_Text_0, MSGBOX_DEFAULT
# 21 "data/expansion_1/scene01.pory"
	clearflag FLAG_HIDE_SS_TIDAL_CORRIDOR_MR_BRINEY
# 22 "data/expansion_1/scene01.pory"
	setflag FLAG_DONT_START_MUSIC_ON_WARP
# 23 "data/expansion_1/scene01.pory"
	warp MAP_ILLUSORY_GROTTO_B4F_1R, 26, 7
# 24 "data/expansion_1/scene01.pory"
	waitstate
	return


IllusoryGrotto_B4F_1R_Scene01_OnFrame::
# 28 "data/expansion_1/scene01.pory"
	lock
# 29 "data/expansion_1/scene01.pory"
	delay 30
# 30 "data/expansion_1/scene01.pory"
	playse SE_M_BUBBLE3
# 31 "data/expansion_1/scene01.pory"
	delay 40
# 32 "data/expansion_1/scene01.pory"
	playse SE_M_BUBBLE3
# 33 "data/expansion_1/scene01.pory"
	delay 60
# 34 "data/expansion_1/scene01.pory"
	playse SE_M_BUBBLE3
# 35 "data/expansion_1/scene01.pory"
	delay 40
# 37 "data/expansion_1/scene01.pory"
	setflashlevel 8
# 38 "data/expansion_1/scene01.pory"
	animateflash 4
# 39 "data/expansion_1/scene01.pory"
	setflashlevel 4
# 40 "data/expansion_1/scene01.pory"
	delay 20
# 42 "data/expansion_1/scene01.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceUp
# 43 "data/expansion_1/scene01.pory"
	waitmovement 0
# 44 "data/expansion_1/scene01.pory"
	delay 20
# 45 "data/expansion_1/scene01.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceRight
# 46 "data/expansion_1/scene01.pory"
	waitmovement 0
# 47 "data/expansion_1/scene01.pory"
	delay 20
# 48 "data/expansion_1/scene01.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceLeft
# 49 "data/expansion_1/scene01.pory"
	waitmovement 0
# 50 "data/expansion_1/scene01.pory"
	delay 20
# 51 "data/expansion_1/scene01.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceDown
# 52 "data/expansion_1/scene01.pory"
	waitmovement 0
# 54 "data/expansion_1/scene01.pory"
	animateflash 0
# 55 "data/expansion_1/scene01.pory"
	setflashlevel 0
# 57 "data/expansion_1/scene01.pory"
	playbgm MUS_DP_VICTORY_ROAD, FALSE
# 58 "data/expansion_1/scene01.pory"
	setvar VAR_EMERALBODY_RIVAL_STATE, 21
# 59 "data/expansion_1/scene01.pory"
	clearflag FLAG_DONT_START_MUSIC_ON_WARP
# 60 "data/expansion_1/scene01.pory"
	setflag FLAG_CANT_USE_ESCAPE_ROPE
# 61 "data/expansion_1/scene01.pory"
	release
	return


SSTidal_Scene01_OnFrame_Text_0:
# 19 "data/expansion_1/scene01.pory"
	.string "Scene01$"
