BygoneVault_L1_MapScripts::
# 2 "data/maps/BygoneVault_L1/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BygoneVault_L1_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

BygoneVault_L1_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/BygoneVault_L1/scripts.pory"
	setflag FLAG_TEMP_1
# 4 "data/maps/BygoneVault_L1/scripts.pory"
	goto_if_set FLAG_EXP_1_BYGONE_VAULT_LEFT_SWITCH, BygoneVault_L1_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

BygoneVault_L1_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 5 "data/maps/BygoneVault_L1/scripts.pory"
	setmaplayoutindex LAYOUT_BYGONE_VAULT_L1_DRAINED
# 6 "data/maps/BygoneVault_L1/scripts.pory"
	clearflag FLAG_TEMP_1
	return


HopDownLedge::
# 12 "data/maps/BygoneVault_L1/scripts.pory"
	msgbox HopDownLedge_Text_0, MSGBOX_YESNO
# 13 "data/maps/BygoneVault_L1/scripts.pory"
	closemessage
# 14 "data/maps/BygoneVault_L1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne HopDownLedge_1
	return

HopDownLedge_1:
# 15 "data/maps/BygoneVault_L1/scripts.pory"
	hidefollower
# 16 "data/maps/BygoneVault_L1/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_JumpDown2
# 17 "data/maps/BygoneVault_L1/scripts.pory"
	waitmovement 0
	return


BygoneVault_L1_Sign::
# 22 "data/maps/BygoneVault_L1/scripts.pory"
	msgbox BygoneVault_L1_Sign_Text_0, MSGBOX_SIGN
	return


HopDownLedge_Text_0:
# 12 "data/maps/BygoneVault_L1/scripts.pory"
	.string "Hop down the ledge?$"

BygoneVault_L1_Sign_Text_0:
# 22 "data/maps/BygoneVault_L1/scripts.pory"
	.string "When the water has gone,\nthe water will appear.$"
