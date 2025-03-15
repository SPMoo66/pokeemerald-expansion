RocketRefuge_B3F_MapScripts::
# 5 "data/maps/RocketRefuge_B3F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RocketRefuge_B3F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

RocketRefuge_B3F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 6 "data/maps/RocketRefuge_B3F/scripts.pory"
	setflag FLAG_TEMP_1
	return


RocketRefuge_B3F_EventScript_Grunt1::
# 11 "data/maps/RocketRefuge_B3F/scripts.pory"
	trainerbattle_single TRAINER_ROCKET_GRUNT_REFUGE_9, RocketRefuge_B3F_EventScript_Grunt1_Text_0, RocketRefuge_B3F_EventScript_Grunt1_Text_1
# 12 "data/maps/RocketRefuge_B3F/scripts.pory"
	msgbox RocketRefuge_B3F_EventScript_Grunt1_Text_2, MSGBOX_AUTOCLOSE
	return


RocketRefuge_B3F_EventScript_Grunt2::
# 16 "data/maps/RocketRefuge_B3F/scripts.pory"
	trainerbattle_single TRAINER_ROCKET_GRUNT_REFUGE_10, RocketRefuge_B3F_EventScript_Grunt2_Text_0, RocketRefuge_B3F_EventScript_Grunt2_Text_1
# 17 "data/maps/RocketRefuge_B3F/scripts.pory"
	msgbox RocketRefuge_B3F_EventScript_Grunt2_Text_2, MSGBOX_AUTOCLOSE
	return


RocketRefuge_B3F_EventScript_Grunt1_Text_0:
# 11 "data/maps/RocketRefuge_B3F/scripts.pory"
	.string "Oh, not you again!$"

RocketRefuge_B3F_EventScript_Grunt1_Text_1:
# 11 "data/maps/RocketRefuge_B3F/scripts.pory"
	.string "A repeat defeat!$"

RocketRefuge_B3F_EventScript_Grunt1_Text_2:
# 12 "data/maps/RocketRefuge_B3F/scripts.pory"
	.string "Yeah, I remember you from Rustboro, kid.$"

RocketRefuge_B3F_EventScript_Grunt2_Text_0:
# 16 "data/maps/RocketRefuge_B3F/scripts.pory"
	.string "Boss trusted me to stop anyone from\ngetting to him!\pYou're done!$"

RocketRefuge_B3F_EventScript_Grunt2_Text_1:
# 16 "data/maps/RocketRefuge_B3F/scripts.pory"
	.string "Boss will be furious!$"

RocketRefuge_B3F_EventScript_Grunt2_Text_2:
# 17 "data/maps/RocketRefuge_B3F/scripts.pory"
	.string "You can put me down, but you should\nfear what's to come.\pBoss will put you in your place, trust\nme.$"
