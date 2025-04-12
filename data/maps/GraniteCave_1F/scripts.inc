GraniteCave_1F_MapScripts::
# 2 "data/maps/GraniteCave_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, GraniteCave_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

GraniteCave_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/GraniteCave_1F/scripts.pory"
	setflag FLAG_TEMP_2
	return


GraniteCave_1F_EventScript_Hiker::
# 8 "data/maps/GraniteCave_1F/scripts.pory"
	lock
# 9 "data/maps/GraniteCave_1F/scripts.pory"
	faceplayer
# 10 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox GraniteCave_1F_EventScript_Hiker_Text_0
# 11 "data/maps/GraniteCave_1F/scripts.pory"
	release
	end


TrainerTipsEscapeRope::
# 16 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox TrainerTipsEscapeRope_Text_0, MSGBOX_SIGN
	return


GraniteCave_1F_EventScript_Hiker_Text_0:
# 10 "data/maps/GraniteCave_1F/scripts.pory"
	.string "Years ago the lower levels of this cave\n"
	.string "used to be pitch dark.\p"
	.string "Recently they've been all lit up, almost\n"
	.string "like magic.\p"
	.string "I used to hand out a Hidden Machine to\n"
	.string "deal with it, but they discontinued it.$"

TrainerTipsEscapeRope_Text_0:
# 16 "data/maps/GraniteCave_1F/scripts.pory"
	.string "Trainer Tips\p"
	.string "An Escape Rope is a reusable item that\n"
	.string "can be used to exit a cave at any time.$"
