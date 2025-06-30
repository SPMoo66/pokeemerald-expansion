RecommendedHacks::
# 2 "data/recommended_hacks.pory"
	lock
# 3 "data/recommended_hacks.pory"
	msgbox RecommendedHacks_Text_0
# 4 "data/recommended_hacks.pory"
	dynmultichoice 0, 0, FALSE, 5, 0, DYN_MULTICHOICE_CB_NONE, RecommendedHacks_Text_1, RecommendedHacks_Text_2, RecommendedHacks_Text_3, RecommendedHacks_Text_4, RecommendedHacks_Text_5, RecommendedHacks_Text_6, RecommendedHacks_Text_7, RecommendedHacks_Text_8, RecommendedHacks_Text_9, RecommendedHacks_Text_10, RecommendedHacks_Text_11
# 5 "data/recommended_hacks.pory"
	switch VAR_RESULT
# 6 "data/recommended_hacks.pory"
	case 0, RecommendedHacks_3
# 9 "data/recommended_hacks.pory"
	case 1, RecommendedHacks_4
# 12 "data/recommended_hacks.pory"
	case 2, RecommendedHacks_5
# 15 "data/recommended_hacks.pory"
	case 3, RecommendedHacks_6
# 18 "data/recommended_hacks.pory"
	case 4, RecommendedHacks_7
# 21 "data/recommended_hacks.pory"
	case 5, RecommendedHacks_8
# 24 "data/recommended_hacks.pory"
	case 6, RecommendedHacks_9
# 27 "data/recommended_hacks.pory"
	case 7, RecommendedHacks_10
# 30 "data/recommended_hacks.pory"
	case 8, RecommendedHacks_11
# 33 "data/recommended_hacks.pory"
	case 9, RecommendedHacks_12
# 36 "data/recommended_hacks.pory"
	case 10, RecommendedHacks_13
RecommendedHacks_1:
# 40 "data/recommended_hacks.pory"
	release
	return

RecommendedHacks_3:
# 7 "data/recommended_hacks.pory"
	speakername RecommendedHacks_Text_12
# 8 "data/recommended_hacks.pory"
	msgbox RecommendedHacks_Text_13
	goto RecommendedHacks_1

RecommendedHacks_4:
# 10 "data/recommended_hacks.pory"
	speakername RecommendedHacks_Text_14
# 11 "data/recommended_hacks.pory"
	msgbox RecommendedHacks_Text_15
	goto RecommendedHacks_1

RecommendedHacks_5:
# 13 "data/recommended_hacks.pory"
	speakername RecommendedHacks_Text_16
# 14 "data/recommended_hacks.pory"
	msgbox RecommendedHacks_Text_17
	goto RecommendedHacks_1

RecommendedHacks_6:
# 16 "data/recommended_hacks.pory"
	speakername RecommendedHacks_Text_4
# 17 "data/recommended_hacks.pory"
	msgbox RecommendedHacks_Text_18
	goto RecommendedHacks_1

RecommendedHacks_7:
# 19 "data/recommended_hacks.pory"
	speakername RecommendedHacks_Text_19
# 20 "data/recommended_hacks.pory"
	msgbox RecommendedHacks_Text_20
	goto RecommendedHacks_1

RecommendedHacks_8:
# 22 "data/recommended_hacks.pory"
	speakername RecommendedHacks_Text_21
# 23 "data/recommended_hacks.pory"
	msgbox RecommendedHacks_Text_22
	goto RecommendedHacks_1

RecommendedHacks_9:
# 25 "data/recommended_hacks.pory"
	speakername RecommendedHacks_Text_23
# 26 "data/recommended_hacks.pory"
	msgbox RecommendedHacks_Text_24
	goto RecommendedHacks_1

RecommendedHacks_10:
# 28 "data/recommended_hacks.pory"
	speakername RecommendedHacks_Text_25
# 29 "data/recommended_hacks.pory"
	msgbox RecommendedHacks_Text_26
	goto RecommendedHacks_1

RecommendedHacks_11:
# 31 "data/recommended_hacks.pory"
	speakername RecommendedHacks_Text_27
# 32 "data/recommended_hacks.pory"
	msgbox RecommendedHacks_Text_28
	goto RecommendedHacks_1

RecommendedHacks_12:
# 34 "data/recommended_hacks.pory"
	speakername RecommendedHacks_Text_29
# 35 "data/recommended_hacks.pory"
	msgbox RecommendedHacks_Text_30
	goto RecommendedHacks_1

RecommendedHacks_13:
# 37 "data/recommended_hacks.pory"
	speakername RecommendedHacks_Text_31
# 38 "data/recommended_hacks.pory"
	msgbox RecommendedHacks_Text_32
	goto RecommendedHacks_1


RecommendedHacks_Text_0:
# 3 "data/recommended_hacks.pory"
	.string "Check out these other romhacks!$"

RecommendedHacks_Text_1:
# 4 "data/recommended_hacks.pory"
	.string "Pokémon Unbound$"

RecommendedHacks_Text_2:
# 4 "data/recommended_hacks.pory"
	.string "Pokémon R.O.W.E.$"

RecommendedHacks_Text_3:
# 4 "data/recommended_hacks.pory"
	.string "Pokémon Emerald Rogue$"

RecommendedHacks_Text_4:
# 4 "data/recommended_hacks.pory"
	.string "The Pit$"

RecommendedHacks_Text_5:
# 4 "data/recommended_hacks.pory"
	.string "Pokémon Voyager (Demo)$"

RecommendedHacks_Text_6:
# 4 "data/recommended_hacks.pory"
	.string "Pokémon Darkfire (Demo)$"

RecommendedHacks_Text_7:
# 4 "data/recommended_hacks.pory"
	.string "Celia's Stupid Romhack (Demo)$"

RecommendedHacks_Text_8:
# 4 "data/recommended_hacks.pory"
	.string "Sovereign of the Skies (Demo)$"

RecommendedHacks_Text_9:
# 4 "data/recommended_hacks.pory"
	.string "Pokémon Peach and Lime (indev)$"

RecommendedHacks_Text_10:
# 4 "data/recommended_hacks.pory"
	.string "Pokémon Samiya (indev)$"

RecommendedHacks_Text_11:
# 4 "data/recommended_hacks.pory"
	.string "Legends Arise - Trinity Aenigma (indev)$"

RecommendedHacks_Text_12:
# 7 "data/recommended_hacks.pory"
	.string "Unbound$"

RecommendedHacks_Text_13:
# 8 "data/recommended_hacks.pory"
	.string "Pokémon Unbound is a new region hack of\n"
	.string "FireRed, built on an incredibly\l"
	.string "ambitious custom engine, injecting code\l"
	.string "straight into the ROM, and\l"
	.string "subsequently released to the public as\l"
	.string "the Complete Fire Red Upgrade.\p"
	.string "This is an incredible, complete hack.$"

RecommendedHacks_Text_14:
# 10 "data/recommended_hacks.pory"
	.string "R.O.W.E$"

RecommendedHacks_Text_15:
# 11 "data/recommended_hacks.pory"
	.string "Pokémon R.O.W.E., short for Rioluwott's\n"
	.string "Open World Emerald, is an open world\l"
	.string "hack of Emerald with tons of\l"
	.string "customizations available. On top of\l"
	.string "Hoenn, the Sevii Islands are included\l"
	.string "and Kanto is promised in future\l"
	.string "updates.\p"
	.string "This hack is complete!$"

RecommendedHacks_Text_16:
# 13 "data/recommended_hacks.pory"
	.string "Emerald Rogue$"

RecommendedHacks_Text_17:
# 14 "data/recommended_hacks.pory"
	.string "Pokémon Emerald Rogue is a great\n"
	.string "romhack built around shorter roguelike\l"
	.string "runs of Emerald. The player runs around\l"
	.string "in randomized individual routes,\l"
	.string "catching Pokémon and then fighting\l"
	.string "battles and bosses.$"

RecommendedHacks_Text_18:
# 17 "data/recommended_hacks.pory"
	.string "The Pit is a hack of Emerald that is\n"
	.string "inspired by the Pit of 100 Trials from\l"
	.string "Paper Mario: The Thousand Year Door.\l"
	.string "The player goes through randomized\l"
	.string "floors, fighting battles along the way.$"

RecommendedHacks_Text_19:
# 19 "data/recommended_hacks.pory"
	.string "Voyager$"

RecommendedHacks_Text_20:
# 20 "data/recommended_hacks.pory"
	.string "Pokémon Voyager is an upcoming new\n"
	.string "region hack featuring fakemon, triple\l"
	.string "battles, rotation battles, a casino with\l"
	.string "custom games, and many other ambitious\l"
	.string "features.\p"
	.string "Demos are currently available.$"

RecommendedHacks_Text_21:
# 22 "data/recommended_hacks.pory"
	.string "Darkfire$"

RecommendedHacks_Text_22:
# 23 "data/recommended_hacks.pory"
	.string "Pokémon Darkfire is an upcoming new\n"
	.string "region hack featuring great custom art,\l"
	.string "focused on Generation 1-3 Pokémon.\p"
	.string "Demos are currently available.$"

RecommendedHacks_Text_23:
# 25 "data/recommended_hacks.pory"
	.string "Celia's$"

RecommendedHacks_Text_24:
# 26 "data/recommended_hacks.pory"
	.string "Celia's Stupid Romhack is a self\n"
	.string "described ‘comedy and puzzle romhack’\l"
	.string "that…\p"
	.string "Well, it's incredibly creative.\p"
	.string "Demos are currently available.$"

RecommendedHacks_Text_25:
# 28 "data/recommended_hacks.pory"
	.string "SotS$"

RecommendedHacks_Text_26:
# 29 "data/recommended_hacks.pory"
	.string "Sovereign of the Skies is an upcoming\n"
	.string "new region romhack featuring incredible\l"
	.string "custom art, creative puzzles, amazing\l"
	.string "maps, and more.\p"
	.string "Demos are currently available.$"

RecommendedHacks_Text_27:
# 31 "data/recommended_hacks.pory"
	.string "Peach and Lime$"

RecommendedHacks_Text_28:
# 32 "data/recommended_hacks.pory"
	.string "Pokémon Peach and Lime are a pair of\n"
	.string "romhacks in development that feature\l"
	.string "great custom art.\p"
	.string "Both are currently in development with\n"
	.string "nothing released.$"

RecommendedHacks_Text_29:
# 34 "data/recommended_hacks.pory"
	.string "Samiya$"

RecommendedHacks_Text_30:
# 35 "data/recommended_hacks.pory"
	.string "Pokémon Samiya is an upcoming\n"
	.string "action-based romhack of Emerald based\l"
	.string "around The Legend of Zelda.\p"
	.string "It is currently in development with\n"
	.string "nothing released.$"

RecommendedHacks_Text_31:
# 37 "data/recommended_hacks.pory"
	.string "LA - TA$"

RecommendedHacks_Text_32:
# 38 "data/recommended_hacks.pory"
	.string "Legends Arise - Trinity Aenigma is an\n"
	.string "incredibly ambitious upcoming romhack\l"
	.string "of Platinum. If it ever releases, this\l"
	.string "will be a must-play.\p"
	.string "It is currently in development with\n"
	.string "nothing released.$"
