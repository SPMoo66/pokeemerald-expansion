BygoneVault_L2_MapScripts::
# 2 "data/maps/BygoneVault_L2/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, BygoneVault_L2_MapScripts_MAP_SCRIPT_ON_LOAD
# 7 "data/maps/BygoneVault_L2/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BygoneVault_L2_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

BygoneVault_L2_MapScripts_MAP_SCRIPT_ON_LOAD:
# 3 "data/maps/BygoneVault_L2/scripts.pory"
	goto_if_set FLAG_EXP_1_BYGONE_VAULT_LEFT_SWITCH, BygoneVault_L2_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

BygoneVault_L2_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 4 "data/maps/BygoneVault_L2/scripts.pory"
	setmetatile 3, 2, 0x241, TRUE
	return

BygoneVault_L2_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 8 "data/maps/BygoneVault_L2/scripts.pory"
	setflag FLAG_TEMP_1
# 9 "data/maps/BygoneVault_L2/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 42
	goto_if_eq BygoneVault_L2_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

BygoneVault_L2_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 10 "data/maps/BygoneVault_L2/scripts.pory"
	clearflag FLAG_TEMP_1
	return


BygoneVault_LeftSwitch::
# 16 "data/maps/BygoneVault_L2/scripts.pory"
	goto_if_unset FLAG_EXP_1_BYGONE_VAULT_LEFT_SWITCH, BygoneVault_LeftSwitch_1
# 39 "data/maps/BygoneVault_L2/scripts.pory"
	msgbox Text_FlippedSwitch, MSGBOX_AUTOCLOSE
	return

BygoneVault_LeftSwitch_1:
# 17 "data/maps/BygoneVault_L2/scripts.pory"
	msgbox Text_FlipSwitch, MSGBOX_YESNO
# 18 "data/maps/BygoneVault_L2/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne BygoneVault_LeftSwitch_4
	return

BygoneVault_LeftSwitch_4:
# 19 "data/maps/BygoneVault_L2/scripts.pory"
	closemessage
# 20 "data/maps/BygoneVault_L2/scripts.pory"
	setmetatile 3, 2, 0x241, TRUE
# 21 "data/maps/BygoneVault_L2/scripts.pory"
	special DrawWholeMapView
# 22 "data/maps/BygoneVault_L2/scripts.pory"
	playse SE_SWITCH
# 23 "data/maps/BygoneVault_L2/scripts.pory"
	waitse
# 24 "data/maps/BygoneVault_L2/scripts.pory"
	delay 10
# 25 "data/maps/BygoneVault_L2/scripts.pory"
	setvar VAR_0x8004, 1
# 26 "data/maps/BygoneVault_L2/scripts.pory"
	setvar VAR_0x8005, 1
# 27 "data/maps/BygoneVault_L2/scripts.pory"
	setvar VAR_0x8006, 8
# 28 "data/maps/BygoneVault_L2/scripts.pory"
	setvar VAR_0x8007, 2
# 29 "data/maps/BygoneVault_L2/scripts.pory"
	special ShakeCamera
# 30 "data/maps/BygoneVault_L2/scripts.pory"
	waitstate
# 31 "data/maps/BygoneVault_L2/scripts.pory"
	playse SE_DOWNPOUR
# 32 "data/maps/BygoneVault_L2/scripts.pory"
	delay 100
# 33 "data/maps/BygoneVault_L2/scripts.pory"
	playse SE_DOWNPOUR_STOP
# 34 "data/maps/BygoneVault_L2/scripts.pory"
	waitse
# 35 "data/maps/BygoneVault_L2/scripts.pory"
	setflag FLAG_EXP_1_BYGONE_VAULT_LEFT_SWITCH
	return


Text_FlipSwitch::
# 43 "data/maps/BygoneVault_L2/scripts.pory"
	.string "Flip the switch?$"

Text_FlippedSwitch::
# 47 "data/maps/BygoneVault_L2/scripts.pory"
	.string "The switch has been flipped.$"
