BygoneVault_L1_MapScripts::
	.byte 0


HopDownLedge::
# 4 "data/maps/BygoneVault_L1/scripts.pory"
	msgbox HopDownLedge_Text_0, MSGBOX_YESNO
# 5 "data/maps/BygoneVault_L1/scripts.pory"
	closemessage
# 6 "data/maps/BygoneVault_L1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne HopDownLedge_1
	return

HopDownLedge_1:
# 7 "data/maps/BygoneVault_L1/scripts.pory"
	hidefollower
# 8 "data/maps/BygoneVault_L1/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_JumpDown2
# 9 "data/maps/BygoneVault_L1/scripts.pory"
	waitmovement 0
	return


HopDownLedge_Text_0:
# 4 "data/maps/BygoneVault_L1/scripts.pory"
	.string "Hop down the ledge?$"
