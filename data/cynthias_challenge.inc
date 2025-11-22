Gamecube_CynthiasChallenge::
# 2 "data/cynthias_challenge.pory"
	setvar VAR_0x8000, MUGSHOT_CYNTHIAS_CHALLENGE
# 3 "data/cynthias_challenge.pory"
	callnative DrawMugshot
# 4 "data/cynthias_challenge.pory"
	msgbox Gamecube_CynthiasChallenge_Text_0
# 5 "data/cynthias_challenge.pory"
	callnative ClearMugshot
# 6 "data/cynthias_challenge.pory"
	closemessage
	return


Gamecube_CynthiasChallenge_Text_0:
# 4 "data/cynthias_challenge.pory"
	.string "Test$"
