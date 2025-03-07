RocketRefuge_B1F_MapScripts::
# 4 "data/maps/RocketRefuge_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RocketRefuge_B1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 7 "data/maps/RocketRefuge_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, RocketRefuge_B1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

RocketRefuge_B1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 5 "data/maps/RocketRefuge_B1F/scripts.pory"
	setflag FLAG_TEMP_1
	return

RocketRefuge_B1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 8 "data/maps/RocketRefuge_B1F/scripts.pory"
	map_script_2 VAR_LOOKER_ROCKET, 11, RocketRefuge_B1F_Looker
	.2byte 0


RocketRefuge_B1F_EventScript_Grunt1::
# 13 "data/maps/RocketRefuge_B1F/scripts.pory"
	trainerbattle_single TRAINER_ROCKET_GRUNT_REFUGE_1, RocketRefuge_B1F_EventScript_Grunt1_Text_0, RocketRefuge_B1F_EventScript_Grunt1_Text_1
# 14 "data/maps/RocketRefuge_B1F/scripts.pory"
	msgbox RocketRefuge_B1F_EventScript_Grunt1_Text_2, MSGBOX_AUTOCLOSE
	return


RocketRefuge_B1F_EventScript_Grunt2::
# 18 "data/maps/RocketRefuge_B1F/scripts.pory"
	trainerbattle_single TRAINER_ROCKET_GRUNT_REFUGE_2, RocketRefuge_B1F_EventScript_Grunt2_Text_0, RocketRefuge_B1F_EventScript_Grunt2_Text_1
# 19 "data/maps/RocketRefuge_B1F/scripts.pory"
	msgbox RocketRefuge_B1F_EventScript_Grunt2_Text_2, MSGBOX_AUTOCLOSE
	return


RocketRefuge_B1F_EventScript_Grunt3::
# 23 "data/maps/RocketRefuge_B1F/scripts.pory"
	trainerbattle_single TRAINER_ROCKET_GRUNT_REFUGE_3, RocketRefuge_B1F_EventScript_Grunt3_Text_0, RocketRefuge_B1F_EventScript_Grunt3_Text_1
# 24 "data/maps/RocketRefuge_B1F/scripts.pory"
	msgbox RocketRefuge_B1F_EventScript_Grunt3_Text_2, MSGBOX_AUTOCLOSE
	return


RocketRefuge_B1F_EventScript_Grunt1_Text_0:
# 13 "data/maps/RocketRefuge_B1F/scripts.pory"
	.string "Some guy just flew past me, but I can\nget you!$"

RocketRefuge_B1F_EventScript_Grunt1_Text_1:
# 13 "data/maps/RocketRefuge_B1F/scripts.pory"
	.string "You're slipping away too!?$"

RocketRefuge_B1F_EventScript_Grunt1_Text_2:
# 14 "data/maps/RocketRefuge_B1F/scripts.pory"
	.string "Look, it's not easy to grab someone who\nflies by that fast!$"

RocketRefuge_B1F_EventScript_Grunt2_Text_0:
# 18 "data/maps/RocketRefuge_B1F/scripts.pory"
	.string "Shoot, I was supposed to put a poster\nup on top of the hideout's entrance\lswitch!$"

RocketRefuge_B1F_EventScript_Grunt2_Text_1:
# 18 "data/maps/RocketRefuge_B1F/scripts.pory"
	.string "I guess it doesn't matter anymore…$"

RocketRefuge_B1F_EventScript_Grunt2_Text_2:
# 19 "data/maps/RocketRefuge_B1F/scripts.pory"
	.string "I'll remember to disguise the hideout\nbetter next time.$"

RocketRefuge_B1F_EventScript_Grunt3_Text_0:
# 23 "data/maps/RocketRefuge_B1F/scripts.pory"
	.string "Another intruder!$"

RocketRefuge_B1F_EventScript_Grunt3_Text_1:
# 23 "data/maps/RocketRefuge_B1F/scripts.pory"
	.string "And it's just a kid…$"

RocketRefuge_B1F_EventScript_Grunt3_Text_2:
# 24 "data/maps/RocketRefuge_B1F/scripts.pory"
	.string "Whatever. I'm sure the grunts up ahead\nhave already bagged your friend.$"
