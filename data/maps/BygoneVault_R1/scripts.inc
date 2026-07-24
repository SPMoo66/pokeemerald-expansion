BygoneVault_R1_MapScripts::
# 2 "data/maps/BygoneVault_R1/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BygoneVault_R1_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

BygoneVault_R1_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/BygoneVault_R1/scripts.pory"
	setflag FLAG_TEMP_1
# 4 "data/maps/BygoneVault_R1/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 42
	goto_if_eq BygoneVault_R1_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

BygoneVault_R1_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 5 "data/maps/BygoneVault_R1/scripts.pory"
	clearflag FLAG_TEMP_1
	return


BygoneVault_R1_EventScript_Marvin::
# 11 "data/maps/BygoneVault_R1/scripts.pory"
	trainerbattle_single TRAINER_MARVIN, BygoneVault_R1_EventScript_Marvin_Text_0, BygoneVault_R1_EventScript_Marvin_Text_1
# 12 "data/maps/BygoneVault_R1/scripts.pory"
	msgbox BygoneVault_R1_EventScript_Marvin_Text_2, MSGBOX_AUTOCLOSE
	return


BygoneVault_R1_EventScript_Luthor::
# 16 "data/maps/BygoneVault_R1/scripts.pory"
	trainerbattle_single TRAINER_LUTHOR, BygoneVault_R1_EventScript_Luthor_Text_0, BygoneVault_R1_EventScript_Luthor_Text_1
# 17 "data/maps/BygoneVault_R1/scripts.pory"
	msgbox BygoneVault_R1_EventScript_Luthor_Text_2, MSGBOX_AUTOCLOSE
	return


BygoneVault_R1_EventScript_Marvin_Text_0:
# 11 "data/maps/BygoneVault_R1/scripts.pory"
	.string "My son and I travel the world in search\nof ancient history.$"

BygoneVault_R1_EventScript_Marvin_Text_1:
# 11 "data/maps/BygoneVault_R1/scripts.pory"
	.string "At least my son wasn't here to see that.$"

BygoneVault_R1_EventScript_Marvin_Text_2:
# 12 "data/maps/BygoneVault_R1/scripts.pory"
	.string "If I want to win battles too, I'll have\nto have my son with me.$"

BygoneVault_R1_EventScript_Luthor_Text_0:
# 16 "data/maps/BygoneVault_R1/scripts.pory"
	.string "Even in this ruin I shall train with you.$"

BygoneVault_R1_EventScript_Luthor_Text_1:
# 16 "data/maps/BygoneVault_R1/scripts.pory"
	.string "Fine! That will do!$"

BygoneVault_R1_EventScript_Luthor_Text_2:
# 17 "data/maps/BygoneVault_R1/scripts.pory"
	.string "Enough training. I need to explore.$"
