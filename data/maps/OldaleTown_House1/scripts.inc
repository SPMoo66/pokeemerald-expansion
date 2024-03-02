# 1 "data/maps/OldaleTown_House1/scripts.pory"

# 2 "data/maps/OldaleTown_House1/scripts.pory"
OldaleTown_House1_EventScript_Woman::
# 3 "data/maps/OldaleTown_House1/scripts.pory"
	msgbox OldaleTown_House1_Text_LeftPokemonGoesOutFirst, MSGBOX_NPC
# 4 "data/maps/OldaleTown_House1/scripts.pory"
	end
# 5 "data/maps/OldaleTown_House1/scripts.pory"

# 6 "data/maps/OldaleTown_House1/scripts.pory"
OldaleTown_House1_Text_LeftPokemonGoesOutFirst:
# 7 "data/maps/OldaleTown_House1/scripts.pory"
	.string "When a Pokémon battle starts, the one\n"
# 8 "data/maps/OldaleTown_House1/scripts.pory"
	.string "at the top left of the list is sent\l"
# 9 "data/maps/OldaleTown_House1/scripts.pory"
	.string "out first.\p"
# 10 "data/maps/OldaleTown_House1/scripts.pory"
	.string "For a double battle, the two Pokémon in\n"
# 11 "data/maps/OldaleTown_House1/scripts.pory"
	.string "the top slots are sent out first.\p"
# 12 "data/maps/OldaleTown_House1/scripts.pory"
	.string "Try switching them around!$"

OldaleTown_House1_MapScripts::
# 16 "data/maps/OldaleTown_House1/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, OldaleTown_House1_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

OldaleTown_House1_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 17 "data/maps/OldaleTown_House1/scripts.pory"
	setflag FLAG_TEMP_1
# 18 "data/maps/OldaleTown_House1/scripts.pory"
	compare VAR_BIRCH_LAB_STATE, 3
	goto_if_eq OldaleTown_House1_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

OldaleTown_House1_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 19 "data/maps/OldaleTown_House1/scripts.pory"
	clearflag FLAG_TEMP_1
	return


Harper_Town01::
# 26 "data/maps/OldaleTown_House1/scripts.pory"
	faceplayer
# 27 "data/maps/OldaleTown_House1/scripts.pory"
	lock
# 28 "data/maps/OldaleTown_House1/scripts.pory"
	msgbox Harper_Town01_Text_0
# 29 "data/maps/OldaleTown_House1/scripts.pory"
	release
	end


Harper_Town01_Text_0:
# 28 "data/maps/OldaleTown_House1/scripts.pory"
	.string "Harper: So, you're not feeling sick at\n"
	.string "all? Well, props to you then...\p"
	.string "I guess I never really got into this\n"
	.string "trend when it got popular a while back.\p"
	.string "It's a neat gimmick, but its hard to\n"
	.string "imagine it as more than that.\p"
	.string "I mean, how many cases do you need to\n"
	.string "perceive the world in a 2D flat plane?\p"
	.string "Technology is incredible.\p"
	.string "But fuck, does it give me a headache\n"
	.string "sometimes...$"
