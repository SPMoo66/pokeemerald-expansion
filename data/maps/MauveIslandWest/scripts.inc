MauveIslandWest_MapScripts::
	.byte 0


MauveIslandWest_EventScript_Leo::
# 4 "data/maps/MauveIslandWest/scripts.pory"
	trainerbattle_single TRAINER_SAWYER_1, MauveIslandWest_EventScript_Leo_Text_0, MauveIslandWest_EventScript_Leo_Text_1
# 5 "data/maps/MauveIslandWest/scripts.pory"
	msgbox MauveIslandWest_EventScript_Leo_Text_2, MSGBOX_AUTOCLOSE
	return


MauveIslandWest_EventScript_Eryk::
# 9 "data/maps/MauveIslandWest/scripts.pory"
	trainerbattle_single TRAINER_SAWYER_1, MauveIslandWest_EventScript_Eryk_Text_0, MauveIslandWest_EventScript_Eryk_Text_1
# 10 "data/maps/MauveIslandWest/scripts.pory"
	msgbox MauveIslandWest_EventScript_Eryk_Text_2, MSGBOX_AUTOCLOSE
	return


MauveIslandWest_EventScript_Leo_Text_0:
# 4 "data/maps/MauveIslandWest/scripts.pory"
	.string "I came here to train for my next\ntriathlon!\pI'll use you to train my Pokémon too!$"

MauveIslandWest_EventScript_Leo_Text_1:
# 4 "data/maps/MauveIslandWest/scripts.pory"
	.string "All I have left is myself!$"

MauveIslandWest_EventScript_Leo_Text_2:
# 5 "data/maps/MauveIslandWest/scripts.pory"
	.string "It seems like I was too focused on\ntraining my own body.$"

MauveIslandWest_EventScript_Eryk_Text_0:
# 9 "data/maps/MauveIslandWest/scripts.pory"
	.string "New lands, new Pokémon! Help me get\nready to catch some with a battle!$"

MauveIslandWest_EventScript_Eryk_Text_1:
# 9 "data/maps/MauveIslandWest/scripts.pory"
	.string "Blast!$"

MauveIslandWest_EventScript_Eryk_Text_2:
# 10 "data/maps/MauveIslandWest/scripts.pory"
	.string "I need to hurry up and catch something\ngood!$"
