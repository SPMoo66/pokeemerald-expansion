BygoneVault_2L1_MapScripts::
# 2 "data/maps/BygoneVault_2L1/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, BygoneVault_2L1_MapScripts_MAP_SCRIPT_ON_LOAD
# 7 "data/maps/BygoneVault_2L1/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BygoneVault_2L1_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

BygoneVault_2L1_MapScripts_MAP_SCRIPT_ON_LOAD:
# 3 "data/maps/BygoneVault_2L1/scripts.pory"
	goto_if_set FLAG_EXP_1_BYGONE_VAULT_LEFT_SWITCH_2, BygoneVault_2L1_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

BygoneVault_2L1_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 4 "data/maps/BygoneVault_2L1/scripts.pory"
	setmetatile 15, 14, 0x241, TRUE
	return

BygoneVault_2L1_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 8 "data/maps/BygoneVault_2L1/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 43
	goto_if_ne BygoneVault_2L1_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

BygoneVault_2L1_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 9 "data/maps/BygoneVault_2L1/scripts.pory"
	setflag FLAG_TEMP_1
	return


BygoneVault_LeftSwitch2::
# 15 "data/maps/BygoneVault_2L1/scripts.pory"
	goto_if_unset FLAG_EXP_1_BYGONE_VAULT_LEFT_SWITCH_2, BygoneVault_LeftSwitch2_1
# 34 "data/maps/BygoneVault_2L1/scripts.pory"
	msgbox Text_FlippedSwitch, MSGBOX_AUTOCLOSE
	return

BygoneVault_LeftSwitch2_1:
# 16 "data/maps/BygoneVault_2L1/scripts.pory"
	msgbox Text_FlipSwitch, MSGBOX_YESNO
# 17 "data/maps/BygoneVault_2L1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne BygoneVault_LeftSwitch2_4
	return

BygoneVault_LeftSwitch2_4:
# 18 "data/maps/BygoneVault_2L1/scripts.pory"
	closemessage
# 19 "data/maps/BygoneVault_2L1/scripts.pory"
	setmetatile 15, 14, 0x241, TRUE
# 20 "data/maps/BygoneVault_2L1/scripts.pory"
	special DrawWholeMapView
# 21 "data/maps/BygoneVault_2L1/scripts.pory"
	playse SE_SWITCH
# 22 "data/maps/BygoneVault_2L1/scripts.pory"
	waitse
# 23 "data/maps/BygoneVault_2L1/scripts.pory"
	delay 10
# 24 "data/maps/BygoneVault_2L1/scripts.pory"
	setvar VAR_0x8004, 1
# 25 "data/maps/BygoneVault_2L1/scripts.pory"
	setvar VAR_0x8005, 1
# 26 "data/maps/BygoneVault_2L1/scripts.pory"
	setvar VAR_0x8006, 8
# 27 "data/maps/BygoneVault_2L1/scripts.pory"
	setvar VAR_0x8007, 2
# 28 "data/maps/BygoneVault_2L1/scripts.pory"
	special ShakeCamera
# 29 "data/maps/BygoneVault_2L1/scripts.pory"
	waitstate
# 30 "data/maps/BygoneVault_2L1/scripts.pory"
	setflag FLAG_EXP_1_BYGONE_VAULT_LEFT_SWITCH_2
	return

