EventScript_JaksonExpansion1Call::
# 12 "data/expansion_1/rival_scripts.pory"
	lockall
# 13 "data/expansion_1/rival_scripts.pory"
	pokenavcall EventScript_JaksonExpansion1Call_Text_0
# 14 "data/expansion_1/rival_scripts.pory"
	waitmessage
# 15 "data/expansion_1/rival_scripts.pory"
	setvar VAR_EMERALBODY_RIVAL_STATE, 19
# 16 "data/expansion_1/rival_scripts.pory"
	releaseall
	return


EventScript_MoveToEndlessFarOffSea::
# 20 "data/expansion_1/rival_scripts.pory"
	lock
# 21 "data/expansion_1/rival_scripts.pory"
	warp MAP_FAR_OFF_SEA_ENDLESS, 12, 2
# 22 "data/expansion_1/rival_scripts.pory"
	waitstate
	return


EventScript_EndEndlessFarOffSea::
# 26 "data/expansion_1/rival_scripts.pory"
	lock
# 27 "data/expansion_1/rival_scripts.pory"
	msgbox EventScript_EndEndlessFarOffSea_Text_0, MSGBOX_AUTOCLOSE
# 28 "data/expansion_1/rival_scripts.pory"
	setvar VAR_EMERALBODY_RIVAL_STATE, 22
# 29 "data/expansion_1/rival_scripts.pory"
	warp MAP_FAR_OFF_SEA_WEST_2, 5, 5
# 30 "data/expansion_1/rival_scripts.pory"
	waitstate
	return


EventScript_JaksonExpansion1Call_Text_0:
# 13 "data/expansion_1/rival_scripts.pory"
	.string "it's jakson lmao$"

EventScript_EndEndlessFarOffSea_Text_0:
# 27 "data/expansion_1/rival_scripts.pory"
	.string "Hello$"
