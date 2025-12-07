BygoneVault_L2_MapScripts::
# 2 "data/maps/BygoneVault_L2/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, BygoneVault_L2_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

BygoneVault_L2_MapScripts_MAP_SCRIPT_ON_LOAD:
# 3 "data/maps/BygoneVault_L2/scripts.pory"
	goto_if_set FLAG_EXP_1_BYGONE_VAULT_LEFT_SWITCH, BygoneVault_L2_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

BygoneVault_L2_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 4 "data/maps/BygoneVault_L2/scripts.pory"
	setmetatile 3, 2, 0x241, TRUE
	return


BygoneVault_LeftSwitch::
# 10 "data/maps/BygoneVault_L2/scripts.pory"
	goto_if_unset FLAG_EXP_1_BYGONE_VAULT_LEFT_SWITCH, BygoneVault_LeftSwitch_1
# 26 "data/maps/BygoneVault_L2/scripts.pory"
	msgbox Text_FlippedSwitch, MSGBOX_AUTOCLOSE
	return

BygoneVault_LeftSwitch_1:
# 11 "data/maps/BygoneVault_L2/scripts.pory"
	msgbox Text_FlipSwitch, MSGBOX_YESNO
# 12 "data/maps/BygoneVault_L2/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne BygoneVault_LeftSwitch_4
	return

BygoneVault_LeftSwitch_4:
# 13 "data/maps/BygoneVault_L2/scripts.pory"
	closemessage
# 14 "data/maps/BygoneVault_L2/scripts.pory"
	setmetatile 3, 2, 0x241, TRUE
# 15 "data/maps/BygoneVault_L2/scripts.pory"
	special DrawWholeMapView
# 16 "data/maps/BygoneVault_L2/scripts.pory"
	playse SE_SWITCH
# 17 "data/maps/BygoneVault_L2/scripts.pory"
	waitse
# 18 "data/maps/BygoneVault_L2/scripts.pory"
	playse SE_DOWNPOUR
# 19 "data/maps/BygoneVault_L2/scripts.pory"
	delay 100
# 20 "data/maps/BygoneVault_L2/scripts.pory"
	playse SE_DOWNPOUR_STOP
# 21 "data/maps/BygoneVault_L2/scripts.pory"
	waitse
# 22 "data/maps/BygoneVault_L2/scripts.pory"
	setflag FLAG_EXP_1_BYGONE_VAULT_LEFT_SWITCH
	return


Text_FlipSwitch::
# 30 "data/maps/BygoneVault_L2/scripts.pory"
	.string "Flip the switch?$"

Text_FlippedSwitch::
# 34 "data/maps/BygoneVault_L2/scripts.pory"
	.string "The switch has been flipped.$"
