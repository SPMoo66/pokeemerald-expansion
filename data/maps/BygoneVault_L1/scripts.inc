BygoneVault_L1_MapScripts::
# 2 "data/maps/BygoneVault_L1/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BygoneVault_L1_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

BygoneVault_L1_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/BygoneVault_L1/scripts.pory"
	goto_if_set FLAG_EXP_1_BYGONE_VAULT_LEFT_SWITCH, BygoneVault_L1_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

BygoneVault_L1_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 4 "data/maps/BygoneVault_L1/scripts.pory"
	setmaplayoutindex LAYOUT_BYGONE_VAULT_L1_DRAINED
	return


HopDownLedge::
# 10 "data/maps/BygoneVault_L1/scripts.pory"
	msgbox HopDownLedge_Text_0, MSGBOX_YESNO
# 11 "data/maps/BygoneVault_L1/scripts.pory"
	closemessage
# 12 "data/maps/BygoneVault_L1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne HopDownLedge_1
	return

HopDownLedge_1:
# 13 "data/maps/BygoneVault_L1/scripts.pory"
	hidefollower
# 14 "data/maps/BygoneVault_L1/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_JumpDown2
# 15 "data/maps/BygoneVault_L1/scripts.pory"
	waitmovement 0
	return


HopDownLedge_Text_0:
# 10 "data/maps/BygoneVault_L1/scripts.pory"
	.string "Hop down the ledge?$"
