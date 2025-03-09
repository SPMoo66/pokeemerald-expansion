RocketRefuge_B2F_MapScripts::
# 4 "data/maps/RocketRefuge_B2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RocketRefuge_B2F_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 9 "data/maps/RocketRefuge_B2F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, RocketRefuge_B2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

RocketRefuge_B2F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 5 "data/maps/RocketRefuge_B2F/scripts.pory"
	compare VAR_LOOKER_ROCKET, 12
	goto_if_gt RocketRefuge_B2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

RocketRefuge_B2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 6 "data/maps/RocketRefuge_B2F/scripts.pory"
	setflag FLAG_TEMP_1
	return

RocketRefuge_B2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 10 "data/maps/RocketRefuge_B2F/scripts.pory"
	map_script_2 VAR_LOOKER_ROCKET, 12, RocketRefuge_B2F_Looker
	.2byte 0


RocketRefuge_B2F_EventScript_Grunt1::
# 15 "data/maps/RocketRefuge_B2F/scripts.pory"
	trainerbattle_single TRAINER_ROCKET_GRUNT_REFUGE_4, RocketRefuge_B2F_EventScript_Grunt1_Text_0, RocketRefuge_B2F_EventScript_Grunt1_Text_1
# 16 "data/maps/RocketRefuge_B2F/scripts.pory"
	msgbox RocketRefuge_B2F_EventScript_Grunt1_Text_2, MSGBOX_AUTOCLOSE
	return


RocketRefuge_B2F_EventScript_Grunt2::
# 20 "data/maps/RocketRefuge_B2F/scripts.pory"
	trainerbattle_single TRAINER_ROCKET_GRUNT_REFUGE_7, RocketRefuge_B2F_EventScript_Grunt2_Text_0, RocketRefuge_B2F_EventScript_Grunt2_Text_1
# 21 "data/maps/RocketRefuge_B2F/scripts.pory"
	msgbox RocketRefuge_B2F_EventScript_Grunt2_Text_2, MSGBOX_AUTOCLOSE
	return


RocketRefuge_B2F_EventScript_Grunt3::
# 25 "data/maps/RocketRefuge_B2F/scripts.pory"
	trainerbattle_single TRAINER_ROCKET_GRUNT_REFUGE_8, RocketRefuge_B2F_EventScript_Grunt3_Text_0, RocketRefuge_B2F_EventScript_Grunt3_Text_1
# 26 "data/maps/RocketRefuge_B2F/scripts.pory"
	msgbox RocketRefuge_B2F_EventScript_Grunt3_Text_2, MSGBOX_AUTOCLOSE
	return


RocketRefuge_B2F_EventScript_Grunt1_Text_0:
# 15 "data/maps/RocketRefuge_B2F/scripts.pory"
	.string "The intruder's you? Stop!$"

RocketRefuge_B2F_EventScript_Grunt1_Text_1:
# 15 "data/maps/RocketRefuge_B2F/scripts.pory"
	.string "Urk!$"

RocketRefuge_B2F_EventScript_Grunt1_Text_2:
# 16 "data/maps/RocketRefuge_B2F/scripts.pory"
	.string "I thought I heard the others say there\nwas a cop, but you're just some brat.$"

RocketRefuge_B2F_EventScript_Grunt2_Text_0:
# 20 "data/maps/RocketRefuge_B2F/scripts.pory"
	.string "What do you think you're doing here?$"

RocketRefuge_B2F_EventScript_Grunt2_Text_1:
# 20 "data/maps/RocketRefuge_B2F/scripts.pory"
	.string "Would you just go away already?$"

RocketRefuge_B2F_EventScript_Grunt2_Text_2:
# 21 "data/maps/RocketRefuge_B2F/scripts.pory"
	.string "Is the Boss here?\pHmm, I wonder.$"

RocketRefuge_B2F_EventScript_Grunt3_Text_0:
# 25 "data/maps/RocketRefuge_B2F/scripts.pory"
	.string "Not on my watch!$"

RocketRefuge_B2F_EventScript_Grunt3_Text_1:
# 25 "data/maps/RocketRefuge_B2F/scripts.pory"
	.string "You broke my watch!$"

RocketRefuge_B2F_EventScript_Grunt3_Text_2:
# 26 "data/maps/RocketRefuge_B2F/scripts.pory"
	.string "Must all brats be such a nuisance?$"
