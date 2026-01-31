EventScript_JaksonExpansion1Call::
# 12 "data/expansion_1/rival_scripts.pory"
	lockall
# 13 "data/expansion_1/rival_scripts.pory"
	pokenavcall Call1_JaksonText
# 14 "data/expansion_1/rival_scripts.pory"
	waitmessage
# 15 "data/expansion_1/rival_scripts.pory"
	playfanfare MUS_HG_POKEGEAR_REGISTERED
# 16 "data/expansion_1/rival_scripts.pory"
	waitfanfare
# 17 "data/expansion_1/rival_scripts.pory"
	setvar VAR_EMERALBODY_RIVAL_STATE, 19
# 18 "data/expansion_1/rival_scripts.pory"
	releaseall
	return

