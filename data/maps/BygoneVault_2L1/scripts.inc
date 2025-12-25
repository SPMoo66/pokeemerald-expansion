BygoneVault_2L1_MapScripts::
# 2 "data/maps/BygoneVault_2L1/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, BygoneVault_2L1_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

BygoneVault_2L1_MapScripts_MAP_SCRIPT_ON_LOAD:
# 3 "data/maps/BygoneVault_2L1/scripts.pory"
	goto_if_set FLAG_EXP_1_BYGONE_VAULT_LEFT_SWITCH_2, BygoneVault_2L1_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

BygoneVault_2L1_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 4 "data/maps/BygoneVault_2L1/scripts.pory"
	setmetatile 15, 14, 0x241, TRUE
	return


BygoneVault_LeftSwitch2::
# 10 "data/maps/BygoneVault_2L1/scripts.pory"
	goto_if_unset FLAG_EXP_1_BYGONE_VAULT_LEFT_SWITCH_2, BygoneVault_LeftSwitch2_1
# 29 "data/maps/BygoneVault_2L1/scripts.pory"
	msgbox Text_FlippedSwitch, MSGBOX_AUTOCLOSE
	return

BygoneVault_LeftSwitch2_1:
# 11 "data/maps/BygoneVault_2L1/scripts.pory"
	msgbox Text_FlipSwitch, MSGBOX_YESNO
# 12 "data/maps/BygoneVault_2L1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne BygoneVault_LeftSwitch2_4
	return

BygoneVault_LeftSwitch2_4:
# 13 "data/maps/BygoneVault_2L1/scripts.pory"
	closemessage
# 14 "data/maps/BygoneVault_2L1/scripts.pory"
	setmetatile 15, 14, 0x241, TRUE
# 15 "data/maps/BygoneVault_2L1/scripts.pory"
	special DrawWholeMapView
# 16 "data/maps/BygoneVault_2L1/scripts.pory"
	playse SE_SWITCH
# 17 "data/maps/BygoneVault_2L1/scripts.pory"
	waitse
# 18 "data/maps/BygoneVault_2L1/scripts.pory"
	delay 10
# 19 "data/maps/BygoneVault_2L1/scripts.pory"
	setvar VAR_0x8004, 1
# 20 "data/maps/BygoneVault_2L1/scripts.pory"
	setvar VAR_0x8005, 1
# 21 "data/maps/BygoneVault_2L1/scripts.pory"
	setvar VAR_0x8006, 8
# 22 "data/maps/BygoneVault_2L1/scripts.pory"
	setvar VAR_0x8007, 2
# 23 "data/maps/BygoneVault_2L1/scripts.pory"
	special ShakeCamera
# 24 "data/maps/BygoneVault_2L1/scripts.pory"
	waitstate
# 25 "data/maps/BygoneVault_2L1/scripts.pory"
	setflag FLAG_EXP_1_BYGONE_VAULT_LEFT_SWITCH_2
	return

