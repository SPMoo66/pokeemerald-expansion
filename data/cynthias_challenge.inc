Gamecube_CynthiasChallenge::
# 2 "data/cynthias_challenge.pory"
	setvar VAR_0x8000, MUGSHOT_CYNTHIAS_CHALLENGE
# 3 "data/cynthias_challenge.pory"
	callnative DrawMugshot
# 4 "data/cynthias_challenge.pory"
	msgbox Gamecube_CynthiasChallenge_Text_0
# 5 "data/cynthias_challenge.pory"
	dynmultipush Gamecube_CynthiasChallenge_Text_1, 0
# 6 "data/cynthias_challenge.pory"
	dynmultipush Gamecube_CynthiasChallenge_Text_2, 1
# 7 "data/cynthias_challenge.pory"
	dynmultipush Gamecube_CynthiasChallenge_Text_3, 2
# 8 "data/cynthias_challenge.pory"
	dynmultistack 0, 6, FALSE, 3, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 9 "data/cynthias_challenge.pory"
	switch VAR_RESULT
# 13 "data/cynthias_challenge.pory"
	callnative ClearMugshot
# 14 "data/cynthias_challenge.pory"
	closemessage
	return


Gamecube_CynthiasChallenge_Text_0:
# 4 "data/cynthias_challenge.pory"
	.string "Test$"

Gamecube_CynthiasChallenge_Text_1:
# 5 "data/cynthias_challenge.pory"
	.string "Gym Leaders Part 1$"

Gamecube_CynthiasChallenge_Text_2:
# 6 "data/cynthias_challenge.pory"
	.string "Gym Leaders Part 2$"

Gamecube_CynthiasChallenge_Text_3:
# 7 "data/cynthias_challenge.pory"
	.string "Sinnoh League$"
