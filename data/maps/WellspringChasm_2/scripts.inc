WellspringChasm_2_MapScripts::
	.byte 0


WellspringChasm_2_EventScript_PortalTeleport::
# 4 "data/maps/WellspringChasm_2/scripts.pory"
	warp MAP_TEMPORAL_SPIRE, 0
# 5 "data/maps/WellspringChasm_2/scripts.pory"
	waitstate
	return


WellspringChasm_2_EventScript_Dewey::
# 9 "data/maps/WellspringChasm_2/scripts.pory"
	trainerbattle_single TRAINER_DEWEY, WellspringChasm_2_EventScript_Dewey_Text_0, WellspringChasm_2_EventScript_Dewey_Text_1
# 10 "data/maps/WellspringChasm_2/scripts.pory"
	msgbox WellspringChasm_2_EventScript_Dewey_Text_2, MSGBOX_AUTOCLOSE
	return


WellspringChasm_2_EventScript_Harold::
# 14 "data/maps/WellspringChasm_2/scripts.pory"
	trainerbattle_single TRAINER_HAROLD, WellspringChasm_2_EventScript_Harold_Text_0, WellspringChasm_2_EventScript_Harold_Text_1
# 15 "data/maps/WellspringChasm_2/scripts.pory"
	msgbox WellspringChasm_2_EventScript_Harold_Text_2, MSGBOX_AUTOCLOSE
	return


WellspringChasm_2_EventScript_Aurora::
# 19 "data/maps/WellspringChasm_2/scripts.pory"
	trainerbattle_single TRAINER_AURORA, WellspringChasm_2_EventScript_Aurora_Text_0, WellspringChasm_2_EventScript_Aurora_Text_1
# 20 "data/maps/WellspringChasm_2/scripts.pory"
	msgbox WellspringChasm_2_EventScript_Aurora_Text_2, MSGBOX_AUTOCLOSE
	return


WellspringChasm_2_EventScript_Dewey_Text_0:
# 9 "data/maps/WellspringChasm_2/scripts.pory"
	.string "These wild Pokémon are strong, but\nI need a real Trainer to battle!$"

WellspringChasm_2_EventScript_Dewey_Text_1:
# 9 "data/maps/WellspringChasm_2/scripts.pory"
	.string "Ooh, wow!$"

WellspringChasm_2_EventScript_Dewey_Text_2:
# 10 "data/maps/WellspringChasm_2/scripts.pory"
	.string "Maybe I need to train some more first.$"

WellspringChasm_2_EventScript_Harold_Text_0:
# 14 "data/maps/WellspringChasm_2/scripts.pory"
	.string "Can you feel it?$"

WellspringChasm_2_EventScript_Harold_Text_1:
# 14 "data/maps/WellspringChasm_2/scripts.pory"
	.string "Hmm, it wasn't you.$"

WellspringChasm_2_EventScript_Harold_Text_2:
# 15 "data/maps/WellspringChasm_2/scripts.pory"
	.string "I haven't found a single Dragon\nPokémon here, but I can still feel\lthem nearby.$"

WellspringChasm_2_EventScript_Aurora_Text_0:
# 19 "data/maps/WellspringChasm_2/scripts.pory"
	.string "I saw a creepy portal up ahead.\pIf I win, you go investigate it for me!$"

WellspringChasm_2_EventScript_Aurora_Text_1:
# 19 "data/maps/WellspringChasm_2/scripts.pory"
	.string "Whatever!$"

WellspringChasm_2_EventScript_Aurora_Text_2:
# 20 "data/maps/WellspringChasm_2/scripts.pory"
	.string "You go check it out anyway!$"
