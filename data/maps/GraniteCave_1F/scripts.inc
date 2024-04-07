# 1 "data/maps/GraniteCave_1F/scripts.pory"

# 2 "data/maps/GraniteCave_1F/scripts.pory"
GraniteCave_1F_MapScripts::
# 3 "data/maps/GraniteCave_1F/scripts.pory"
	.byte 0

GraniteCave_1F_EventScript_Hiker::
# 7 "data/maps/GraniteCave_1F/scripts.pory"
	lock
# 8 "data/maps/GraniteCave_1F/scripts.pory"
	faceplayer
# 9 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox GraniteCave_1F_EventScript_Hiker_Text_0
# 10 "data/maps/GraniteCave_1F/scripts.pory"
	release
	end


GraniteCave_1F_EventScript_Hiker_Text_0:
# 9 "data/maps/GraniteCave_1F/scripts.pory"
	.string "Years ago the lower levels of this cave\n"
	.string "used to be pitch dark.\p"
	.string "Recently they've been all lit up, almost\n"
	.string "like magic.\p"
	.string "I used to hand out a Hidden Machine to\n"
	.string "deal with it, but they discontinued it.$"
