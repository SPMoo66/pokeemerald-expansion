BygoneVault_2R1_MapScripts::
# 2 "data/maps/BygoneVault_2R1/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, BygoneVault_2R1_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

BygoneVault_2R1_MapScripts_MAP_SCRIPT_ON_LOAD:
# 3 "data/maps/BygoneVault_2R1/scripts.pory"
	goto_if_set FLAG_EXP_1_BYGONE_VAULT_RIGHT_SWITCH_2, BygoneVault_2R1_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

BygoneVault_2R1_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 4 "data/maps/BygoneVault_2R1/scripts.pory"
	setmetatile 6, 2, 0x2A9, TRUE
	return


BygoneVault_RightSwitch2::
# 10 "data/maps/BygoneVault_2R1/scripts.pory"
	goto_if_unset FLAG_EXP_1_BYGONE_VAULT_RIGHT_SWITCH_2, BygoneVault_RightSwitch2_1
# 22 "data/maps/BygoneVault_2R1/scripts.pory"
	msgbox Text_FlippedSwitch, MSGBOX_AUTOCLOSE
	return

BygoneVault_RightSwitch2_1:
# 11 "data/maps/BygoneVault_2R1/scripts.pory"
	msgbox Text_FlipSwitch, MSGBOX_YESNO
# 12 "data/maps/BygoneVault_2R1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne BygoneVault_RightSwitch2_4
	return

BygoneVault_RightSwitch2_4:
# 13 "data/maps/BygoneVault_2R1/scripts.pory"
	closemessage
# 14 "data/maps/BygoneVault_2R1/scripts.pory"
	setmetatile 6, 2, 0x2A9, TRUE
# 15 "data/maps/BygoneVault_2R1/scripts.pory"
	special DrawWholeMapView
# 16 "data/maps/BygoneVault_2R1/scripts.pory"
	playse SE_SWITCH
# 17 "data/maps/BygoneVault_2R1/scripts.pory"
	waitse
# 18 "data/maps/BygoneVault_2R1/scripts.pory"
	setflag FLAG_EXP_1_BYGONE_VAULT_RIGHT_SWITCH_2
	return

