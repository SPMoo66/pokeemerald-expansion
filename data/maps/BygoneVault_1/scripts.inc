BygoneVault_1_MapScripts::
# 2 "data/maps/BygoneVault_1/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, BygoneVault_1_MapScripts_MAP_SCRIPT_ON_LOAD
# 10 "data/maps/BygoneVault_1/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BygoneVault_1_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

BygoneVault_1_MapScripts_MAP_SCRIPT_ON_LOAD:
# 3 "data/maps/BygoneVault_1/scripts.pory"
	goto_if_set FLAG_EXP_1_BYGONE_VAULT_LEFT_SWITCH, BygoneVault_1_MapScripts_MAP_SCRIPT_ON_LOAD_2
BygoneVault_1_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 6 "data/maps/BygoneVault_1/scripts.pory"
	goto_if_set FLAG_EXP_1_BYGONE_VAULT_RIGHT_SWITCH, BygoneVault_1_MapScripts_MAP_SCRIPT_ON_LOAD_4
	return

BygoneVault_1_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 4 "data/maps/BygoneVault_1/scripts.pory"
	setmetatile 3, 8, 0x0C6, TRUE
	goto BygoneVault_1_MapScripts_MAP_SCRIPT_ON_LOAD_1

BygoneVault_1_MapScripts_MAP_SCRIPT_ON_LOAD_4:
# 7 "data/maps/BygoneVault_1/scripts.pory"
	setmetatile 13, 8, 0x0C6, TRUE
	return

BygoneVault_1_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 11 "data/maps/BygoneVault_1/scripts.pory"
	setflag FLAG_TEMP_1
# 12 "data/maps/BygoneVault_1/scripts.pory"
	setflag FLAG_TEMP_2
# 13 "data/maps/BygoneVault_1/scripts.pory"
	goto_if_set FLAG_EXP_1_BYGONE_VAULT_LEFT_SWITCH, BygoneVault_1_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
BygoneVault_1_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 16 "data/maps/BygoneVault_1/scripts.pory"
	goto_if_set FLAG_EXP_1_BYGONE_VAULT_RIGHT_SWITCH, BygoneVault_1_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
	return

BygoneVault_1_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 14 "data/maps/BygoneVault_1/scripts.pory"
	clearflag FLAG_TEMP_1
	goto BygoneVault_1_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

BygoneVault_1_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 17 "data/maps/BygoneVault_1/scripts.pory"
	clearflag FLAG_TEMP_2
	return


BygoneVault_FullBowl::
# 23 "data/maps/BygoneVault_1/scripts.pory"
	msgbox BygoneVault_FullBowl_Text_0, MSGBOX_AUTOCLOSE
	return


BygoneVault_FullBowl_Text_0:
# 23 "data/maps/BygoneVault_1/scripts.pory"
	.string "The bowl has filled with water.$"
