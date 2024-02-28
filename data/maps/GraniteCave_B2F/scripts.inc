GraniteCave_B2F_MapScripts::
	.byte 0


GraniteCave_B2F_EventScript_Logan::
	trainerbattle_single TRAINER_LOGAN, GraniteCave_B2F_Text_LoganIntro, GraniteCave_B2F_Text_LoganDefeated
	msgbox GraniteCave_B2F_Text_LoganPostBattle, MSGBOX_AUTOCLOSE
	end

GraniteCave_B2F_Text_LoganIntro:
	.string "My Rock type Pokémon will smash you!$"

GraniteCave_B2F_Text_LoganDefeated:
	.string "Darn!$"

GraniteCave_B2F_Text_LoganPostBattle:
	.string "I guess I can't use Rock Smash yet.$"


GraniteCave_B2F_EventScript_Noah::
	trainerbattle_single TRAINER_NOAH, GraniteCave_B2F_Text_NoahIntro, GraniteCave_B2F_Text_NoahDefeated
	msgbox GraniteCave_B2F_Text_NoahPostBattle, MSGBOX_AUTOCLOSE
	end

GraniteCave_B2F_Text_NoahIntro:
	.string "I will strike upon you with a\n"
	.string "force greater than any crashing wave!$"

GraniteCave_B2F_Text_NoahDefeated:
	.string "You've brought me back ashore.$"

GraniteCave_B2F_Text_NoahPostBattle:
	.string "Brawly visits this cave regularly\n"
	.string "to train now that it's opened up.$"


GraniteCave_B2F_EventScript_Sign::
	msgbox GraniteCave_B2F_Sign, MSGBOX_SIGN
	end

GraniteCave_B2F_Sign:
	.string "Warning!\p"
	.string "Freezing temperatures below!$"
