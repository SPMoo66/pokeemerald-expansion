GraniteCave_1F_MapScripts::
	.byte 0

GraniteCave_1F_EventScript_Hiker::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_HM_ROCK_CLIMB, GraniteCave_1F_EventScript_ReceivedRockClimb
	msgbox GraniteCave_1F_Text_GetsDarkAheadHereYouGo, MSGBOX_DEFAULT
	giveitem ITEM_HM_ROCK_CLIMB
	setflag FLAG_RECEIVED_HM_ROCK_CLIMB
	msgbox GraniteCave_1F_Text_ExplainRockClimb, MSGBOX_DEFAULT
	release
	end

GraniteCave_1F_EventScript_ReceivedRockClimb::
	msgbox GraniteCave_1F_Text_ExplainRockClimb, MSGBOX_DEFAULT
	release
	end

GraniteCave_1F_Text_GetsDarkAheadHereYouGo:
	.string "Hey, you.\n"
	.string "It gets awfully dark ahead.\l"
	.string "It'll be tough trying to explore.\p"
	.string "That guy who came by earlier…\n"
	.string "Steven, I think it was.\p"
	.string "He knew how to use RockClimb, so he ought\n"
	.string "to be all right, but…\p"
	.string "Well, for us Hikers, helping out those\n"
	.string "that we meet is our motto.\p"
	.string "Here you go, I'll pass this on to you.$"

GraniteCave_1F_Text_ExplainRockClimb:
	.string "Teach that hidden move RockClimb to\n"
	.string "a Pokémon and use it.\p"
	.string "It lights up even the inky darkness\n"
	.string "of caves.\p"
	.string "But, to use it, you need the Gym Badge\n"
	.string "from Dewford's Pokémon Gym.$"

