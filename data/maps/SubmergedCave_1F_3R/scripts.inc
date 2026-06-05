SubmergedCave_1F_3R_MapScripts::
# 4 "data/maps/SubmergedCave_1F_3R/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SubmergedCave_1F_3R_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

SubmergedCave_1F_3R_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 5 "data/maps/SubmergedCave_1F_3R/scripts.pory"
	goto_if_set FLAG_SYS_HIDE_FOLLOWERS, SubmergedCave_1F_3R_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
SubmergedCave_1F_3R_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 8 "data/maps/SubmergedCave_1F_3R/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 31
	goto_if_ge SubmergedCave_1F_3R_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
	return

SubmergedCave_1F_3R_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 6 "data/maps/SubmergedCave_1F_3R/scripts.pory"
	setflag FLAG_TEMP_1
	goto SubmergedCave_1F_3R_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

SubmergedCave_1F_3R_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 9 "data/maps/SubmergedCave_1F_3R/scripts.pory"
	setflag FLAG_TEMP_1
	return


SubmergedCave_1F_3R_Crystal::
# 15 "data/maps/SubmergedCave_1F_3R/scripts.pory"
	msgbox SubmergedCave_1F_3R_Crystal_Text_0
# 16 "data/maps/SubmergedCave_1F_3R/scripts.pory"
	closemessage
	return


SubmergedCave_1F_3R_HarperCheck::
# 20 "data/maps/SubmergedCave_1F_3R/scripts.pory"
	setvar VAR_TEMP_1, 1
# 21 "data/maps/SubmergedCave_1F_3R/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 26
	goto_if_le SubmergedCave_1F_3R_HarperCheck_1
# 25 "data/maps/SubmergedCave_1F_3R/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 31
	goto_if_lt SubmergedCave_1F_3R_HarperCheck_2
	return

SubmergedCave_1F_3R_HarperCheck_1:
# 22 "data/maps/SubmergedCave_1F_3R/scripts.pory"
	call SubmergedCave_1F_3R_PosCheck
# 23 "data/maps/SubmergedCave_1F_3R/scripts.pory"
	goto Expansion1_Rival_Scene03
	return

SubmergedCave_1F_3R_HarperCheck_2:
# 26 "data/maps/SubmergedCave_1F_3R/scripts.pory"
	call SubmergedCave_1F_3R_PosCheck
# 27 "data/maps/SubmergedCave_1F_3R/scripts.pory"
	goto Expansion1_Follower1_Restart
	return


SubmergedCave_1F_3R_PosCheck::
# 33 "data/maps/SubmergedCave_1F_3R/scripts.pory"
	lock
# 34 "data/maps/SubmergedCave_1F_3R/scripts.pory"
	getplayerxy VAR_TEMP_2, VAR_TEMP_3
# 35 "data/maps/SubmergedCave_1F_3R/scripts.pory"
	compare VAR_TEMP_3, 3
	goto_if_eq SubmergedCave_1F_3R_PosCheck_2
# 39 "data/maps/SubmergedCave_1F_3R/scripts.pory"
	compare VAR_TEMP_3, 5
	goto_if_eq SubmergedCave_1F_3R_PosCheck_3
# 43 "data/maps/SubmergedCave_1F_3R/scripts.pory"
	compare VAR_TEMP_3, 6
	goto_if_eq SubmergedCave_1F_3R_PosCheck_4
SubmergedCave_1F_3R_PosCheck_1:
# 48 "data/maps/SubmergedCave_1F_3R/scripts.pory"
	compare VAR_TEMP_2, 6
	goto_if_eq SubmergedCave_1F_3R_PosCheck_8
	return

SubmergedCave_1F_3R_PosCheck_2:
# 36 "data/maps/SubmergedCave_1F_3R/scripts.pory"
	turnobject 1, DIR_NORTH
# 37 "data/maps/SubmergedCave_1F_3R/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_SOUTH
	goto SubmergedCave_1F_3R_PosCheck_1

SubmergedCave_1F_3R_PosCheck_3:
# 40 "data/maps/SubmergedCave_1F_3R/scripts.pory"
	turnobject 1, DIR_SOUTH
# 41 "data/maps/SubmergedCave_1F_3R/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
	goto SubmergedCave_1F_3R_PosCheck_1

SubmergedCave_1F_3R_PosCheck_4:
# 44 "data/maps/SubmergedCave_1F_3R/scripts.pory"
	turnobject 1, DIR_SOUTH
# 45 "data/maps/SubmergedCave_1F_3R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
# 46 "data/maps/SubmergedCave_1F_3R/scripts.pory"
	waitmovement 0
	goto SubmergedCave_1F_3R_PosCheck_1

SubmergedCave_1F_3R_PosCheck_8:
# 49 "data/maps/SubmergedCave_1F_3R/scripts.pory"
	faceplayer
	return


SubmergedCave_1F_3R_Crystal_Text_0:
# 15 "data/maps/SubmergedCave_1F_3R/scripts.pory"
	.string "It appears that a chunk of the crystal\n"
	.string "was broken off recently. Shards of\l"
	.string "crystal are scattered across the\l"
	.string "ground nearby.$"
