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


EventScript_JaksonExpansion1Call_Text_0:
# 13 "data/expansion_1/rival_scripts.pory"
	.string "it's jakson lmao$"
