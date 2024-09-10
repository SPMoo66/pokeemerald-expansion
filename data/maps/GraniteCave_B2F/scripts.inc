# 1 "data/maps/GraniteCave_B2F/scripts.pory"

# 2 "data/maps/GraniteCave_B2F/scripts.pory"
GraniteCave_B2F_MapScripts::
# 3 "data/maps/GraniteCave_B2F/scripts.pory"
	.byte 0
# 4 "data/maps/GraniteCave_B2F/scripts.pory"

# 5 "data/maps/GraniteCave_B2F/scripts.pory"

# 6 "data/maps/GraniteCave_B2F/scripts.pory"
GraniteCave_B2F_EventScript_Logan::
# 7 "data/maps/GraniteCave_B2F/scripts.pory"
	trainerbattle_single TRAINER_LOGAN, GraniteCave_B2F_Text_LoganIntro, GraniteCave_B2F_Text_LoganDefeated
# 8 "data/maps/GraniteCave_B2F/scripts.pory"
	msgbox GraniteCave_B2F_Text_LoganPostBattle, MSGBOX_AUTOCLOSE
# 9 "data/maps/GraniteCave_B2F/scripts.pory"
	end
# 10 "data/maps/GraniteCave_B2F/scripts.pory"

# 11 "data/maps/GraniteCave_B2F/scripts.pory"
GraniteCave_B2F_Text_LoganIntro:
# 12 "data/maps/GraniteCave_B2F/scripts.pory"
	.string "My Rock type Pokémon will smash you!$"
# 13 "data/maps/GraniteCave_B2F/scripts.pory"

# 14 "data/maps/GraniteCave_B2F/scripts.pory"
GraniteCave_B2F_Text_LoganDefeated:
# 15 "data/maps/GraniteCave_B2F/scripts.pory"
	.string "Darn!$"
# 16 "data/maps/GraniteCave_B2F/scripts.pory"

# 17 "data/maps/GraniteCave_B2F/scripts.pory"
GraniteCave_B2F_Text_LoganPostBattle:
# 18 "data/maps/GraniteCave_B2F/scripts.pory"
	.string "I guess I can't use Rock Smash yet.$"
# 19 "data/maps/GraniteCave_B2F/scripts.pory"

# 20 "data/maps/GraniteCave_B2F/scripts.pory"

# 21 "data/maps/GraniteCave_B2F/scripts.pory"
GraniteCave_B2F_EventScript_Noah::
# 22 "data/maps/GraniteCave_B2F/scripts.pory"
	trainerbattle_single TRAINER_NOAH, GraniteCave_B2F_Text_NoahIntro, GraniteCave_B2F_Text_NoahDefeated
# 23 "data/maps/GraniteCave_B2F/scripts.pory"
	msgbox GraniteCave_B2F_Text_NoahPostBattle, MSGBOX_AUTOCLOSE
# 24 "data/maps/GraniteCave_B2F/scripts.pory"
	end
# 25 "data/maps/GraniteCave_B2F/scripts.pory"

# 26 "data/maps/GraniteCave_B2F/scripts.pory"
GraniteCave_B2F_Text_NoahIntro:
# 27 "data/maps/GraniteCave_B2F/scripts.pory"
	.string "I will strike upon you with a\n"
# 28 "data/maps/GraniteCave_B2F/scripts.pory"
	.string "force greater than any crashing wave!$"
# 29 "data/maps/GraniteCave_B2F/scripts.pory"

# 30 "data/maps/GraniteCave_B2F/scripts.pory"
GraniteCave_B2F_Text_NoahDefeated:
# 31 "data/maps/GraniteCave_B2F/scripts.pory"
	.string "You've brought me back ashore.$"
# 32 "data/maps/GraniteCave_B2F/scripts.pory"

# 33 "data/maps/GraniteCave_B2F/scripts.pory"
GraniteCave_B2F_Text_NoahPostBattle:
# 34 "data/maps/GraniteCave_B2F/scripts.pory"
	.string "Brawly visits this cave regularly\n"
# 35 "data/maps/GraniteCave_B2F/scripts.pory"
	.string "to train now that it's opened up.$"
# 36 "data/maps/GraniteCave_B2F/scripts.pory"

# 37 "data/maps/GraniteCave_B2F/scripts.pory"

# 38 "data/maps/GraniteCave_B2F/scripts.pory"
GraniteCave_B2F_EventScript_Sign::
# 39 "data/maps/GraniteCave_B2F/scripts.pory"
	msgbox GraniteCave_B2F_Sign, MSGBOX_SIGN
# 40 "data/maps/GraniteCave_B2F/scripts.pory"
	end
# 41 "data/maps/GraniteCave_B2F/scripts.pory"

# 42 "data/maps/GraniteCave_B2F/scripts.pory"
GraniteCave_B2F_Sign:
# 43 "data/maps/GraniteCave_B2F/scripts.pory"
	.string "Warning!\p"
# 44 "data/maps/GraniteCave_B2F/scripts.pory"
	.string "Freezing temperatures below!$"
