# 1 "data/maps/GraniteCave_B2F/scripts.pory"

# 2 "data/maps/GraniteCave_B2F/scripts.pory"
GraniteCave_B2F_MapScripts::
# 3 "data/maps/GraniteCave_B2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, GraniteCave_B2F_OnTransition
# 4 "data/maps/GraniteCave_B2F/scripts.pory"
	.byte 0
# 5 "data/maps/GraniteCave_B2F/scripts.pory"

# 6 "data/maps/GraniteCave_B2F/scripts.pory"
GraniteCave_B2F_OnTransition:
# 7 "data/maps/GraniteCave_B2F/scripts.pory"
	setflag FLAG_TEMP_1
# 8 "data/maps/GraniteCave_B2F/scripts.pory"
	call_if_eq VAR_EMERALBODY_RIVAL_STATE, 4, EventScript_Clear_FlagTemp1
# 9 "data/maps/GraniteCave_B2F/scripts.pory"
	end
# 10 "data/maps/GraniteCave_B2F/scripts.pory"

# 11 "data/maps/GraniteCave_B2F/scripts.pory"
GraniteCave_B2F_EventScript_Logan::
# 12 "data/maps/GraniteCave_B2F/scripts.pory"
	trainerbattle_single TRAINER_LOGAN, GraniteCave_B2F_Text_LoganIntro, GraniteCave_B2F_Text_LoganDefeated
# 13 "data/maps/GraniteCave_B2F/scripts.pory"
	msgbox GraniteCave_B2F_Text_LoganPostBattle, MSGBOX_AUTOCLOSE
# 14 "data/maps/GraniteCave_B2F/scripts.pory"
	end
# 15 "data/maps/GraniteCave_B2F/scripts.pory"

# 16 "data/maps/GraniteCave_B2F/scripts.pory"
GraniteCave_B2F_Text_LoganIntro:
# 17 "data/maps/GraniteCave_B2F/scripts.pory"
	.string "My Rock type Pokémon will smash you!$"
# 18 "data/maps/GraniteCave_B2F/scripts.pory"

# 19 "data/maps/GraniteCave_B2F/scripts.pory"
GraniteCave_B2F_Text_LoganDefeated:
# 20 "data/maps/GraniteCave_B2F/scripts.pory"
	.string "Darn!$"
# 21 "data/maps/GraniteCave_B2F/scripts.pory"

# 22 "data/maps/GraniteCave_B2F/scripts.pory"
GraniteCave_B2F_Text_LoganPostBattle:
# 23 "data/maps/GraniteCave_B2F/scripts.pory"
	.string "I guess I can't use Rock Smash yet.$"
# 24 "data/maps/GraniteCave_B2F/scripts.pory"

# 25 "data/maps/GraniteCave_B2F/scripts.pory"

# 26 "data/maps/GraniteCave_B2F/scripts.pory"
GraniteCave_B2F_EventScript_Noah::
# 27 "data/maps/GraniteCave_B2F/scripts.pory"
	trainerbattle_single TRAINER_NOAH, GraniteCave_B2F_Text_NoahIntro, GraniteCave_B2F_Text_NoahDefeated
# 28 "data/maps/GraniteCave_B2F/scripts.pory"
	msgbox GraniteCave_B2F_Text_NoahPostBattle, MSGBOX_AUTOCLOSE
# 29 "data/maps/GraniteCave_B2F/scripts.pory"
	end
# 30 "data/maps/GraniteCave_B2F/scripts.pory"

# 31 "data/maps/GraniteCave_B2F/scripts.pory"
GraniteCave_B2F_Text_NoahIntro:
# 32 "data/maps/GraniteCave_B2F/scripts.pory"
	.string "I will strike upon you with a\n"
# 33 "data/maps/GraniteCave_B2F/scripts.pory"
	.string "force greater than any crashing wave!$"
# 34 "data/maps/GraniteCave_B2F/scripts.pory"

# 35 "data/maps/GraniteCave_B2F/scripts.pory"
GraniteCave_B2F_Text_NoahDefeated:
# 36 "data/maps/GraniteCave_B2F/scripts.pory"
	.string "You've brought me back ashore.$"
# 37 "data/maps/GraniteCave_B2F/scripts.pory"

# 38 "data/maps/GraniteCave_B2F/scripts.pory"
GraniteCave_B2F_Text_NoahPostBattle:
# 39 "data/maps/GraniteCave_B2F/scripts.pory"
	.string "Brawly visits this cave regularly\n"
# 40 "data/maps/GraniteCave_B2F/scripts.pory"
	.string "to train now that it's opened up.$"
# 41 "data/maps/GraniteCave_B2F/scripts.pory"

# 42 "data/maps/GraniteCave_B2F/scripts.pory"

# 43 "data/maps/GraniteCave_B2F/scripts.pory"
GraniteCave_B2F_EventScript_Sign::
# 44 "data/maps/GraniteCave_B2F/scripts.pory"
	msgbox GraniteCave_B2F_Sign, MSGBOX_SIGN
# 45 "data/maps/GraniteCave_B2F/scripts.pory"
	end
# 46 "data/maps/GraniteCave_B2F/scripts.pory"

# 47 "data/maps/GraniteCave_B2F/scripts.pory"
GraniteCave_B2F_Sign:
# 48 "data/maps/GraniteCave_B2F/scripts.pory"
	.string "Warning!\p"
# 49 "data/maps/GraniteCave_B2F/scripts.pory"
	.string "Freezing temperatures below!$"
# 50 "data/maps/GraniteCave_B2F/scripts.pory"

# 51 "data/maps/GraniteCave_B2F/scripts.pory"
GraniteCave_B2F_Braille_Loss:
# 52 "data/maps/GraniteCave_B2F/scripts.pory"
	brailleformat 4, 6, 26, 13, 7, 9
# 53 "data/maps/GraniteCave_B2F/scripts.pory"
	.braille "L LL\nLL V$"

GraniteCave_B2F_EventScript_Braille::
# 57 "data/maps/GraniteCave_B2F/scripts.pory"
	lock
# 58 "data/maps/GraniteCave_B2F/scripts.pory"
	msgbox GraniteCave_B2F_EventScript_Braille_Text_0
# 59 "data/maps/GraniteCave_B2F/scripts.pory"
	braillemsgbox GraniteCave_B2F_Braille_Loss
# 60 "data/maps/GraniteCave_B2F/scripts.pory"
	release
	return


GraniteCave_B2F_EventScript_Braille_Text_0:
# 58 "data/maps/GraniteCave_B2F/scripts.pory"
	.string "Ancient text is inscribed on the wall…$"
