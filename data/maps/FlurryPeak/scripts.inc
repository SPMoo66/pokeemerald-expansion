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


FlurryPeak_Boy_Text_0:
# 6 "data/maps/FlurryPeak/scripts.pory"
	.string "Playing in the snow is so much fun!\p"
	.string "But I wish I had warm clothes like the\n"
	.string "people down the trail.$"

FlurryPeak_Sign_Text_0:
# 11 "data/maps/FlurryPeak/scripts.pory"
	.string "{RIGHT_ARROW} Flurry Peak\n"
	.string "{LEFT_ARROW} Route 104$"
