GraniteCave_B3F_MapScripts::
	.byte 0


GraniteCave_B3F_EventScript_Lexie::
# 4 "data/maps/GraniteCave_B3F/scripts.pory"
	trainerbattle_single TRAINER_LEXIE, GraniteCave_B3F_EventScript_Lexie_Text_0, GraniteCave_B3F_EventScript_Lexie_Text_1
# 5 "data/maps/GraniteCave_B3F/scripts.pory"
	msgbox GraniteCave_B3F_EventScript_Lexie_Text_2, MSGBOX_AUTOCLOSE
	return


GraniteCave_B3F_EventScript_Bjorn::
# 9 "data/maps/GraniteCave_B3F/scripts.pory"
	trainerbattle_single TRAINER_BJORN, GraniteCave_B3F_EventScript_Bjorn_Text_0, GraniteCave_B3F_EventScript_Bjorn_Text_1
# 10 "data/maps/GraniteCave_B3F/scripts.pory"
	msgbox GraniteCave_B3F_EventScript_Bjorn_Text_2, MSGBOX_AUTOCLOSE
	return


GraniteCave_B3F_EventScript_Lexie_Text_0:
# 4 "data/maps/GraniteCave_B3F/scripts.pory"
	.string "It turns out there's not enough snow in\nhere to ski, so let's battle instead!$"

GraniteCave_B3F_EventScript_Lexie_Text_1:
# 4 "data/maps/GraniteCave_B3F/scripts.pory"
	.string "And now I don't have enough Pokémon to\nbattle!$"

GraniteCave_B3F_EventScript_Lexie_Text_2:
# 5 "data/maps/GraniteCave_B3F/scripts.pory"
	.string "Whoever recommended this place to me\nis a big liar!$"

GraniteCave_B3F_EventScript_Bjorn_Text_0:
# 9 "data/maps/GraniteCave_B3F/scripts.pory"
	.string "How in the world did I even get down\nhere?$"

GraniteCave_B3F_EventScript_Bjorn_Text_1:
# 9 "data/maps/GraniteCave_B3F/scripts.pory"
	.string "Another crushing blow?$"

GraniteCave_B3F_EventScript_Bjorn_Text_2:
# 10 "data/maps/GraniteCave_B3F/scripts.pory"
	.string "Well, I slipped across the ice, of\ncourse.\pHow else would I get here?$"
