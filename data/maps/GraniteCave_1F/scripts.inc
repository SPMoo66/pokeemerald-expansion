GraniteCave_1F_MapScripts::
	.byte 0


GraniteCave_1F_EventScript_Hiker::
# 4 "data/maps/GraniteCave_1F/scripts.pory"
	lock
# 5 "data/maps/GraniteCave_1F/scripts.pory"
	faceplayer
# 6 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox GraniteCave_1F_EventScript_Hiker_Text_0
# 7 "data/maps/GraniteCave_1F/scripts.pory"
	release
	end


TrainerTipsEscapeRope::
# 12 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox TrainerTipsEscapeRope_Text_0, MSGBOX_SIGN
	return


GraniteCave_1F_EventScript_Hiker_Text_0:
# 6 "data/maps/GraniteCave_1F/scripts.pory"
	.string "Years ago the lower levels of this cave\n"
	.string "used to be pitch dark.\p"
	.string "Recently they've been all lit up, almost\n"
	.string "like magic.\p"
	.string "I used to hand out a Hidden Machine to\n"
	.string "deal with it, but they discontinued it.$"

TrainerTipsEscapeRope_Text_0:
# 12 "data/maps/GraniteCave_1F/scripts.pory"
	.string "Trainer Tips\p"
	.string "An Escape Rope is a reusable item that\n"
	.string "can be used to exit a cave at any time.$"
