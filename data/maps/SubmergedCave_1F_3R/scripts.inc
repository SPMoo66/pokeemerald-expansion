SubmergedCave_1F_3R_MapScripts::
	.byte 0


SubmergedCave_1F_3R_StartHarperFollower::
# 6 "data/maps/SubmergedCave_1F_3R/scripts.pory"
	faceplayer
# 7 "data/maps/SubmergedCave_1F_3R/scripts.pory"
	msgbox SubmergedCave_1F_3R_StartHarperFollower_Text_0
# 8 "data/maps/SubmergedCave_1F_3R/scripts.pory"
	closemessage
# 9 "data/maps/SubmergedCave_1F_3R/scripts.pory"
	setfollowernpc 1, 0, Expansion1_Follower_Harper1, PARTNER_FOLLOWER_HARPER_SUBMERGED_CAVE
# 10 "data/maps/SubmergedCave_1F_3R/scripts.pory"
	hidefollowernpc
# 11 "data/maps/SubmergedCave_1F_3R/scripts.pory"
	setflag FLAG_SYS_HIDE_FOLLOWERS
# 12 "data/maps/SubmergedCave_1F_3R/scripts.pory"
	setvar VAR_TEMP_5, 0
# 13 "data/maps/SubmergedCave_1F_3R/scripts.pory"
	release
	return


SubmergedCave_1F_3R_ClearHarperFollower::
# 17 "data/maps/SubmergedCave_1F_3R/scripts.pory"
	goto_if_set FLAG_SYS_HIDE_FOLLOWERS, SubmergedCave_1F_3R_ClearHarperFollower_1
	return

SubmergedCave_1F_3R_ClearHarperFollower_1:
# 18 "data/maps/SubmergedCave_1F_3R/scripts.pory"
	getobjectfacingdirection LOCALID_PLAYER, VAR_TEMP_0
# 19 "data/maps/SubmergedCave_1F_3R/scripts.pory"
	facefollowernpc
# 20 "data/maps/SubmergedCave_1F_3R/scripts.pory"
	msgbox SubmergedCave_1F_3R_ClearHarperFollower_Text_0, MSGBOX_YESNO
# 21 "data/maps/SubmergedCave_1F_3R/scripts.pory"
	closemessage
# 22 "data/maps/SubmergedCave_1F_3R/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SubmergedCave_1F_3R_ClearHarperFollower_4
# 61 "data/maps/SubmergedCave_1F_3R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkLeft
# 62 "data/maps/SubmergedCave_1F_3R/scripts.pory"
	waitmovement 0
SubmergedCave_1F_3R_ClearHarperFollower_3:
# 64 "data/maps/SubmergedCave_1F_3R/scripts.pory"
	release
	return

SubmergedCave_1F_3R_ClearHarperFollower_4:
# 23 "data/maps/SubmergedCave_1F_3R/scripts.pory"
	clearflag FLAG_SYS_HIDE_FOLLOWERS
# 24 "data/maps/SubmergedCave_1F_3R/scripts.pory"
	compare VAR_TEMP_0, DIR_SOUTH
	goto_if_eq SubmergedCave_1F_3R_ClearHarperFollower_8
# 28 "data/maps/SubmergedCave_1F_3R/scripts.pory"
	compare VAR_TEMP_0, DIR_EAST
	goto_if_eq SubmergedCave_1F_3R_ClearHarperFollower_9
# 32 "data/maps/SubmergedCave_1F_3R/scripts.pory"
	compare VAR_TEMP_0, DIR_NORTH
	goto_if_eq SubmergedCave_1F_3R_ClearHarperFollower_10
SubmergedCave_1F_3R_ClearHarperFollower_7:
# 36 "data/maps/SubmergedCave_1F_3R/scripts.pory"
	msgbox SubmergedCave_1F_3R_ClearHarperFollower_Text_1
# 37 "data/maps/SubmergedCave_1F_3R/scripts.pory"
	closemessage
# 38 "data/maps/SubmergedCave_1F_3R/scripts.pory"
	addobject 1
# 39 "data/maps/SubmergedCave_1F_3R/scripts.pory"
	destroyfollowernpc
# 41 "data/maps/SubmergedCave_1F_3R/scripts.pory"
	compare VAR_TEMP_0, DIR_SOUTH
	goto_if_eq SubmergedCave_1F_3R_ClearHarperFollower_15
# 46 "data/maps/SubmergedCave_1F_3R/scripts.pory"
	compare VAR_TEMP_0, DIR_EAST
	goto_if_eq SubmergedCave_1F_3R_ClearHarperFollower_16
# 49 "data/maps/SubmergedCave_1F_3R/scripts.pory"
	compare VAR_TEMP_0, DIR_NORTH
	goto_if_eq SubmergedCave_1F_3R_ClearHarperFollower_17
SubmergedCave_1F_3R_ClearHarperFollower_14:
# 55 "data/maps/SubmergedCave_1F_3R/scripts.pory"
	waitmovement 0
# 56 "data/maps/SubmergedCave_1F_3R/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_LOOK_AROUND
# 58 "data/maps/SubmergedCave_1F_3R/scripts.pory"
	setvar VAR_TEMP_5, 1
	goto SubmergedCave_1F_3R_ClearHarperFollower_3

SubmergedCave_1F_3R_ClearHarperFollower_8:
# 25 "data/maps/SubmergedCave_1F_3R/scripts.pory"
	setobjectxyperm 1, 8, 3
# 26 "data/maps/SubmergedCave_1F_3R/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
	goto SubmergedCave_1F_3R_ClearHarperFollower_7

SubmergedCave_1F_3R_ClearHarperFollower_9:
# 29 "data/maps/SubmergedCave_1F_3R/scripts.pory"
	setobjectxyperm 1, 7, 4
# 30 "data/maps/SubmergedCave_1F_3R/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_RIGHT
	goto SubmergedCave_1F_3R_ClearHarperFollower_7

SubmergedCave_1F_3R_ClearHarperFollower_10:
# 33 "data/maps/SubmergedCave_1F_3R/scripts.pory"
	setobjectxyperm 1, 8, 5
# 34 "data/maps/SubmergedCave_1F_3R/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_UP
	goto SubmergedCave_1F_3R_ClearHarperFollower_7

SubmergedCave_1F_3R_ClearHarperFollower_15:
# 42 "data/maps/SubmergedCave_1F_3R/scripts.pory"
	applymovement 1, Common_Movement_WalkLeft3
# 43 "data/maps/SubmergedCave_1F_3R/scripts.pory"
	waitmovement 0
# 44 "data/maps/SubmergedCave_1F_3R/scripts.pory"
	applymovement 1, Common_Movement_WalkDown
	goto SubmergedCave_1F_3R_ClearHarperFollower_14

SubmergedCave_1F_3R_ClearHarperFollower_16:
# 47 "data/maps/SubmergedCave_1F_3R/scripts.pory"
	applymovement 1, Common_Movement_WalkLeft2
	goto SubmergedCave_1F_3R_ClearHarperFollower_14

SubmergedCave_1F_3R_ClearHarperFollower_17:
# 50 "data/maps/SubmergedCave_1F_3R/scripts.pory"
	applymovement 1, Common_Movement_WalkLeft3
# 51 "data/maps/SubmergedCave_1F_3R/scripts.pory"
	waitmovement 0
# 52 "data/maps/SubmergedCave_1F_3R/scripts.pory"
	applymovement 1, Common_Movement_WalkUp
	goto SubmergedCave_1F_3R_ClearHarperFollower_14


SubmergedCave_1F_3R_StartHarperFollower_Text_0:
# 7 "data/maps/SubmergedCave_1F_3R/scripts.pory"
	.string "Follower start$"

SubmergedCave_1F_3R_ClearHarperFollower_Text_0:
# 20 "data/maps/SubmergedCave_1F_3R/scripts.pory"
	.string "Do you want to split up?$"

SubmergedCave_1F_3R_ClearHarperFollower_Text_1:
# 36 "data/maps/SubmergedCave_1F_3R/scripts.pory"
	.string "I'll stay here.$"
