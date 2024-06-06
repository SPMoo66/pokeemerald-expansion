Route114_FossilManiacsHouse_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route114_FossilManiacsHouse_OnTransition
	.byte 0

Route114_FossilManiacsHouse_OnTransition:
	setflag FLAG_LANDMARK_FOSSIL_MANIACS_HOUSE
	end

Route114_FossilManiacsHouse_EventScript_FossilManiacsBrother::
	lock
	faceplayer
	msgbox Route114_FossilManiacsHouse_Text_HaveThisToDigLikeMyBrother, MSGBOX_DEFAULT
	release
	end

Route114_FossilManiacsHouse_EventScript_RockDisplay::
	msgbox Route114_FossilManiacsHouse_Text_RocksFillDisplayCase, MSGBOX_SIGN
	end

Route114_FossilManiacsHouse_EventScript_Bookshelf::
	msgbox Route114_FossilManiacsHouse_Text_CrammedWithBooks, MSGBOX_SIGN
	end

Route114_FossilManiacsHouse_Text_HaveThisToDigLikeMyBrother:
	.string "My big brother's the Fossil Maniac…\n"
	.string "He's a nice guy who loves Fossils…\p"
	.string "He loves digging holes, too…\n"
	.string "He dug this hole by himself…$"

Route114_FossilManiacsHouse_Text_RocksFillDisplayCase:
	.string "Rocks in peculiar shapes fill\n"
	.string "the display case…$"

Route114_FossilManiacsHouse_Text_CrammedWithBooks:
	.string "The Composition of Strata…\n"
	.string "How Rain Shapes the Land…\l"
	.string "Stones, Soil, and Rock…\p"
	.string "It's crammed with books.$"

