FlurryPeak_MapScripts::
	.byte 0


FlurryPeak_Boy::
# 4 "data/maps/FlurryPeak/scripts.pory"
	lock
# 5 "data/maps/FlurryPeak/scripts.pory"
	faceplayer
# 6 "data/maps/FlurryPeak/scripts.pory"
	msgbox FlurryPeak_Boy_Text_0
# 7 "data/maps/FlurryPeak/scripts.pory"
	release
	return


FlurryPeak_Sign::
# 11 "data/maps/FlurryPeak/scripts.pory"
	msgbox FlurryPeak_Sign_Text_0, MSGBOX_SIGN
	return


FlurryPeak_EventScript_Candy::
# 15 "data/maps/FlurryPeak/scripts.pory"
	trainerbattle_single TRAINER_CANDY, FlurryPeak_EventScript_Candy_Text_0, FlurryPeak_EventScript_Candy_Text_1
# 16 "data/maps/FlurryPeak/scripts.pory"
	msgbox FlurryPeak_EventScript_Candy_Text_2, MSGBOX_AUTOCLOSE
	return


FlurryPeak_EventScript_Josef::
# 20 "data/maps/FlurryPeak/scripts.pory"
	trainerbattle_single TRAINER_JOSEF, FlurryPeak_EventScript_Josef_Text_0, FlurryPeak_EventScript_Josef_Text_1
# 21 "data/maps/FlurryPeak/scripts.pory"
	msgbox FlurryPeak_EventScript_Josef_Text_2, MSGBOX_AUTOCLOSE
	return


FlurryPeak_EventScript_Gerardo::
# 25 "data/maps/FlurryPeak/scripts.pory"
	trainerbattle_single TRAINER_GERARDO, FlurryPeak_EventScript_Gerardo_Text_0, FlurryPeak_EventScript_Gerardo_Text_1
# 26 "data/maps/FlurryPeak/scripts.pory"
	msgbox FlurryPeak_EventScript_Gerardo_Text_2, MSGBOX_AUTOCLOSE
	return


FlurryPeak_EventScript_Aurelia::
# 30 "data/maps/FlurryPeak/scripts.pory"
	trainerbattle_single TRAINER_AURELIA, FlurryPeak_EventScript_Aurelia_Text_0, FlurryPeak_EventScript_Aurelia_Text_1
# 31 "data/maps/FlurryPeak/scripts.pory"
	msgbox FlurryPeak_EventScript_Aurelia_Text_2, MSGBOX_AUTOCLOSE
	return


FlurryPeak_Boy_Text_0:
# 6 "data/maps/FlurryPeak/scripts.pory"
	.string "Playing in the snow is so much fun!\p"
	.string "But I wish I had warm clothes like the\n"
	.string "people down the trail.$"

FlurryPeak_Sign_Text_0:
# 11 "data/maps/FlurryPeak/scripts.pory"
	.string "{RIGHT_ARROW} Flurry Peak\n"
	.string "{LEFT_ARROW} Route 104$"

FlurryPeak_EventScript_Candy_Text_0:
# 15 "data/maps/FlurryPeak/scripts.pory"
	.string "Are you enjoying the snow?$"

FlurryPeak_EventScript_Candy_Text_1:
# 15 "data/maps/FlurryPeak/scripts.pory"
	.string "No! I slipped!$"

FlurryPeak_EventScript_Candy_Text_2:
# 16 "data/maps/FlurryPeak/scripts.pory"
	.string "Take your time trekking through\nthe snow.$"

FlurryPeak_EventScript_Josef_Text_0:
# 20 "data/maps/FlurryPeak/scripts.pory"
	.string "Are you sure you're dressed for\nthis weather?$"

FlurryPeak_EventScript_Josef_Text_1:
# 20 "data/maps/FlurryPeak/scripts.pory"
	.string "Ach! That wind!$"

FlurryPeak_EventScript_Josef_Text_2:
# 21 "data/maps/FlurryPeak/scripts.pory"
	.string "Even with my gloves on, I can\nbarely feel my hands.$"

FlurryPeak_EventScript_Gerardo_Text_0:
# 25 "data/maps/FlurryPeak/scripts.pory"
	.string "I wonder where this mountain leads.$"

FlurryPeak_EventScript_Gerardo_Text_1:
# 25 "data/maps/FlurryPeak/scripts.pory"
	.string "It's snow cold out here!$"

FlurryPeak_EventScript_Gerardo_Text_2:
# 26 "data/maps/FlurryPeak/scripts.pory"
	.string "Don't fall on the ice down there.$"

FlurryPeak_EventScript_Aurelia_Text_0:
# 30 "data/maps/FlurryPeak/scripts.pory"
	.string "I hope you weren't planning on\ngoing in the cave.$"

FlurryPeak_EventScript_Aurelia_Text_1:
# 30 "data/maps/FlurryPeak/scripts.pory"
	.string "Aw no.$"

FlurryPeak_EventScript_Aurelia_Text_2:
# 31 "data/maps/FlurryPeak/scripts.pory"
	.string "Even after you beat me, there's\nstill a rock in the way up there.$"
