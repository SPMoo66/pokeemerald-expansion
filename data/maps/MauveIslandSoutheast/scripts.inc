MauveIslandSoutheast_MapScripts::
# 2 "data/maps/MauveIslandSoutheast/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MauveIslandSoutheast_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

MauveIslandSoutheast_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/MauveIslandSoutheast/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 51
	goto_if_ne MauveIslandSoutheast_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

MauveIslandSoutheast_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 4 "data/maps/MauveIslandSoutheast/scripts.pory"
	setflag FLAG_TEMP_1
	return


MauveIslandSoutheast_EventScript_Lars::
# 10 "data/maps/MauveIslandSoutheast/scripts.pory"
	trainerbattle_single TRAINER_LARS, MauveIslandSoutheast_EventScript_Lars_Text_0, MauveIslandSoutheast_EventScript_Lars_Text_1
# 11 "data/maps/MauveIslandSoutheast/scripts.pory"
	msgbox MauveIslandSoutheast_EventScript_Lars_Text_2, MSGBOX_AUTOCLOSE
	return


MauveIslandSoutheast_EventScript_Keela::
# 15 "data/maps/MauveIslandSoutheast/scripts.pory"
	trainerbattle_single TRAINER_KEELA, MauveIslandSoutheast_EventScript_Keela_Text_0, MauveIslandSoutheast_EventScript_Keela_Text_1
# 16 "data/maps/MauveIslandSoutheast/scripts.pory"
	msgbox MauveIslandSoutheast_EventScript_Keela_Text_2, MSGBOX_AUTOCLOSE
	return


MauveIslandSoutheast_EventScript_Gordon::
# 20 "data/maps/MauveIslandSoutheast/scripts.pory"
	trainerbattle_single TRAINER_GORDON, MauveIslandSoutheast_EventScript_Gordon_Text_0, MauveIslandSoutheast_EventScript_Gordon_Text_1
# 21 "data/maps/MauveIslandSoutheast/scripts.pory"
	msgbox MauveIslandSoutheast_EventScript_Gordon_Text_2, MSGBOX_AUTOCLOSE
	return


MauveIslandSoutheast_EventScript_Vernon::
# 25 "data/maps/MauveIslandSoutheast/scripts.pory"
	trainerbattle_single TRAINER_VERNON, MauveIslandSoutheast_EventScript_Vernon_Text_0, MauveIslandSoutheast_EventScript_Vernon_Text_1
# 26 "data/maps/MauveIslandSoutheast/scripts.pory"
	msgbox MauveIslandSoutheast_EventScript_Vernon_Text_2, MSGBOX_AUTOCLOSE
	return


MauveIslandSoutheast_EventScript_Woman::
# 30 "data/maps/MauveIslandSoutheast/scripts.pory"
	msgbox MauveIslandSoutheast_EventScript_Woman_Text_0, MSGBOX_NPC
	return


MauveIslandSoutheast_EventScript_Lars_Text_0:
# 10 "data/maps/MauveIslandSoutheast/scripts.pory"
	.string "I can't find a good start for my climb,\nso distract me with a battle!$"

MauveIslandSoutheast_EventScript_Lars_Text_1:
# 10 "data/maps/MauveIslandSoutheast/scripts.pory"
	.string "Urgh!$"

MauveIslandSoutheast_EventScript_Lars_Text_2:
# 11 "data/maps/MauveIslandSoutheast/scripts.pory"
	.string "Not even I can make it up these cliff\nwalls.$"

MauveIslandSoutheast_EventScript_Keela_Text_0:
# 15 "data/maps/MauveIslandSoutheast/scripts.pory"
	.string "I'm borrowing daddy's Pokémon!\pMake them stronger for me!$"

MauveIslandSoutheast_EventScript_Keela_Text_1:
# 15 "data/maps/MauveIslandSoutheast/scripts.pory"
	.string "No!\nThat's not stronger!$"

MauveIslandSoutheast_EventScript_Keela_Text_2:
# 16 "data/maps/MauveIslandSoutheast/scripts.pory"
	.string "Daddy couldn't come, so he told us\nto bring his Pokémon with us!$"

MauveIslandSoutheast_EventScript_Gordon_Text_0:
# 20 "data/maps/MauveIslandSoutheast/scripts.pory"
	.string "Fight my Pokémon, mister!$"

MauveIslandSoutheast_EventScript_Gordon_Text_1:
# 20 "data/maps/MauveIslandSoutheast/scripts.pory"
	.string "Aww.$"

MauveIslandSoutheast_EventScript_Gordon_Text_2:
# 21 "data/maps/MauveIslandSoutheast/scripts.pory"
	.string "Mommy said she's getting a dee-vorse.\nWhat's that?\lI hope it's something fun!$"

MauveIslandSoutheast_EventScript_Vernon_Text_0:
# 25 "data/maps/MauveIslandSoutheast/scripts.pory"
	.string "Halt, villain!\pThis item is mine!$"

MauveIslandSoutheast_EventScript_Vernon_Text_1:
# 25 "data/maps/MauveIslandSoutheast/scripts.pory"
	.string "And to the victor, the spoils…$"

MauveIslandSoutheast_EventScript_Vernon_Text_2:
# 26 "data/maps/MauveIslandSoutheast/scripts.pory"
	.string "You overcame my strategy like nothing.$"

MauveIslandSoutheast_EventScript_Woman_Text_0:
# 30 "data/maps/MauveIslandSoutheast/scripts.pory"
	.string "A trip to the beach is a great way to\nrelieve some stress, isn't it?$"
