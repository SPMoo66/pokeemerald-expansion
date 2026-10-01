BygoneVault_L1_MapScripts::
# 2 "data/maps/BygoneVault_L1/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BygoneVault_L1_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

BygoneVault_L1_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/BygoneVault_L1/scripts.pory"
	setflag FLAG_TEMP_1
# 4 "data/maps/BygoneVault_L1/scripts.pory"
	setflag FLAG_TEMP_3
# 5 "data/maps/BygoneVault_L1/scripts.pory"
	goto_if_set FLAG_EXP_1_BYGONE_VAULT_LEFT_SWITCH, BygoneVault_L1_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
BygoneVault_L1_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 9 "data/maps/BygoneVault_L1/scripts.pory"
	goto_if_unset FLAG_EXP_1_BYGONE_VAULT_LEFT_SWITCH, BygoneVault_L1_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
# 9 "data/maps/BygoneVault_L1/scripts.pory"
	goto_if_set FLAG_ITEM_BYGONE_VAULT_L1_BALM_MUSHROOM, BygoneVault_L1_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
BygoneVault_L1_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 12 "data/maps/BygoneVault_L1/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 42
	goto_if_eq BygoneVault_L1_MapScripts_MAP_SCRIPT_ON_TRANSITION_9
	return

BygoneVault_L1_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 6 "data/maps/BygoneVault_L1/scripts.pory"
	setmaplayoutindex LAYOUT_BYGONE_VAULT_L1_DRAINED
# 7 "data/maps/BygoneVault_L1/scripts.pory"
	clearflag FLAG_TEMP_1
	goto BygoneVault_L1_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

BygoneVault_L1_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 10 "data/maps/BygoneVault_L1/scripts.pory"
	setflag FLAG_TEMP_2
	goto BygoneVault_L1_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

BygoneVault_L1_MapScripts_MAP_SCRIPT_ON_TRANSITION_9:
# 13 "data/maps/BygoneVault_L1/scripts.pory"
	clearflag FLAG_TEMP_3
	return


HopDownLedge::
# 19 "data/maps/BygoneVault_L1/scripts.pory"
	msgbox HopDownLedge_Text_0, MSGBOX_YESNO
# 20 "data/maps/BygoneVault_L1/scripts.pory"
	closemessage
# 21 "data/maps/BygoneVault_L1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne HopDownLedge_1
	return

HopDownLedge_1:
# 22 "data/maps/BygoneVault_L1/scripts.pory"
	hidefollower
# 23 "data/maps/BygoneVault_L1/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_JumpDown2
# 24 "data/maps/BygoneVault_L1/scripts.pory"
	waitmovement 0
	return


BygoneVault_L1_Sign::
# 29 "data/maps/BygoneVault_L1/scripts.pory"
	msgbox BygoneVault_L1_Sign_Text_0, MSGBOX_SIGN
	return


BygoneVault_L1_ItemBall::
# 34 "data/maps/BygoneVault_L1/scripts.pory"
	setflag FLAG_ITEM_BYGONE_VAULT_L1_BALM_MUSHROOM
# 35 "data/maps/BygoneVault_L1/scripts.pory"
	call Common_EventScript_FindItem
	return


HopDownLedge_Text_0:
# 19 "data/maps/BygoneVault_L1/scripts.pory"
	.string "Hop down the ledge?$"

BygoneVault_L1_Sign_Text_0:
# 29 "data/maps/BygoneVault_L1/scripts.pory"
	.string "When the water has gone,\n"
	.string "the water will appear.$"
