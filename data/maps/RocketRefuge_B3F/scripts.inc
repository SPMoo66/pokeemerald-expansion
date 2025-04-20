RocketRefuge_B3F_MapScripts::
	.byte 0


RocketRefuge_B3F_EventScript_Grunt1::
# 7 "data/maps/RocketRefuge_B3F/scripts.pory"
	trainerbattle_single TRAINER_ROCKET_GRUNT_REFUGE_9, RocketRefuge_B3F_EventScript_Grunt1_Text_0, RocketRefuge_B3F_EventScript_Grunt1_Text_1
# 8 "data/maps/RocketRefuge_B3F/scripts.pory"
	msgbox RocketRefuge_B3F_EventScript_Grunt1_Text_2, MSGBOX_AUTOCLOSE
	return


RocketRefuge_B3F_EventScript_Grunt2::
# 12 "data/maps/RocketRefuge_B3F/scripts.pory"
	trainerbattle_single TRAINER_ROCKET_GRUNT_REFUGE_10, RocketRefuge_B3F_EventScript_Grunt2_Text_0, RocketRefuge_B3F_EventScript_Grunt2_Text_1
# 13 "data/maps/RocketRefuge_B3F/scripts.pory"
	msgbox RocketRefuge_B3F_EventScript_Grunt2_Text_2, MSGBOX_AUTOCLOSE
	return


RocketRefuge_B3F_EventScript_Grunt1_Text_0:
# 7 "data/maps/RocketRefuge_B3F/scripts.pory"
	.string "Oh, not you again!$"

RocketRefuge_B3F_EventScript_Grunt1_Text_1:
# 7 "data/maps/RocketRefuge_B3F/scripts.pory"
	.string "A repeat defeat!$"

RocketRefuge_B3F_EventScript_Grunt1_Text_2:
# 8 "data/maps/RocketRefuge_B3F/scripts.pory"
	.string "Yeah, I remember you from Rustboro, kid.$"

RocketRefuge_B3F_EventScript_Grunt2_Text_0:
# 12 "data/maps/RocketRefuge_B3F/scripts.pory"
	.string "Boss trusted me to stop anyone from\ngetting to him!\pYou're done!$"

RocketRefuge_B3F_EventScript_Grunt2_Text_1:
# 12 "data/maps/RocketRefuge_B3F/scripts.pory"
	.string "Boss will be furious!$"

RocketRefuge_B3F_EventScript_Grunt2_Text_2:
# 13 "data/maps/RocketRefuge_B3F/scripts.pory"
	.string "You can put me down, but you should\nfear what's to come.\pBoss will put you in your place, trust\nme.$"
