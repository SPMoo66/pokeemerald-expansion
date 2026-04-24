Scene01::
# 15 "data/expansion_1/scene01.pory"
	clearflag FLAG_UNUSED_0x34D
# 16 "data/expansion_1/scene01.pory"
	clearflag FLAG_UNUSED_0x34E
	return


SSTidal_Scene01_OnTransition::
# 21 "data/expansion_1/scene01.pory"
	clearflag FLAG_TEMP_4
	return


SSTidal_Scene01_OnWarp::
# 25 "data/expansion_1/scene01.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
	return


SSTidal_Scene01_OnFrame::
# 29 "data/expansion_1/scene01.pory"
	lock
# 31 "data/expansion_1/scene01.pory"
	msgbox SSTidal_Scene01_OnFrame_Text_0, MSGBOX_DEFAULT
# 33 "data/expansion_1/scene01.pory"
	clearflag FLAG_HIDE_SS_TIDAL_CORRIDOR_MR_BRINEY
# 34 "data/expansion_1/scene01.pory"
	setflag FLAG_DONT_START_MUSIC_ON_WARP
# 35 "data/expansion_1/scene01.pory"
	warp MAP_ILLUSORY_GROTTO_B4F_1R, 26, 7
# 36 "data/expansion_1/scene01.pory"
	waitstate
	return


IllusoryGrotto_B4F_1R_Scene01_OnFrame::
# 40 "data/expansion_1/scene01.pory"
	lock
# 41 "data/expansion_1/scene01.pory"
	delay 30
# 42 "data/expansion_1/scene01.pory"
	playse SE_M_BUBBLE3
# 43 "data/expansion_1/scene01.pory"
	delay 40
# 44 "data/expansion_1/scene01.pory"
	playse SE_M_BUBBLE3
# 45 "data/expansion_1/scene01.pory"
	delay 60
# 46 "data/expansion_1/scene01.pory"
	playse SE_M_BUBBLE3
# 47 "data/expansion_1/scene01.pory"
	delay 40
# 49 "data/expansion_1/scene01.pory"
	setflashlevel 8
# 50 "data/expansion_1/scene01.pory"
	animateflash 4
# 51 "data/expansion_1/scene01.pory"
	setflashlevel 4
# 52 "data/expansion_1/scene01.pory"
	delay 20
# 54 "data/expansion_1/scene01.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceUp
# 55 "data/expansion_1/scene01.pory"
	waitmovement 0
# 56 "data/expansion_1/scene01.pory"
	delay 20
# 57 "data/expansion_1/scene01.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceRight
# 58 "data/expansion_1/scene01.pory"
	waitmovement 0
# 59 "data/expansion_1/scene01.pory"
	delay 20
# 60 "data/expansion_1/scene01.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceLeft
# 61 "data/expansion_1/scene01.pory"
	waitmovement 0
# 62 "data/expansion_1/scene01.pory"
	delay 20
# 63 "data/expansion_1/scene01.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceDown
# 64 "data/expansion_1/scene01.pory"
	waitmovement 0
# 66 "data/expansion_1/scene01.pory"
	animateflash 0
# 67 "data/expansion_1/scene01.pory"
	setflashlevel 0
# 69 "data/expansion_1/scene01.pory"
	playbgm MUS_DP_VICTORY_ROAD, FALSE
# 70 "data/expansion_1/scene01.pory"
	setvar VAR_EMERALBODY_RIVAL_STATE, 21
# 71 "data/expansion_1/scene01.pory"
	clearflag FLAG_DONT_START_MUSIC_ON_WARP
# 72 "data/expansion_1/scene01.pory"
	setflag FLAG_CANT_USE_ESCAPE_ROPE
# 73 "data/expansion_1/scene01.pory"
	release
	return


SSTidal_Scene01_OnFrame_Text_0:
# 31 "data/expansion_1/scene01.pory"
	.string "Scene01$"
