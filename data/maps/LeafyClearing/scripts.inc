LeafyClearing_MapScripts::
	.byte 0


TrainerTipsClock::
# 4 "data/maps/LeafyClearing/scripts.pory"
	msgbox TrainerTipsClock_Text_0, MSGBOX_SIGN
	return


TrainerTipsBRun::
# 8 "data/maps/LeafyClearing/scripts.pory"
	msgbox TrainerTipsBRun_Text_0, MSGBOX_SIGN
	return


TrainerTipsPartySelectMove::
# 12 "data/maps/LeafyClearing/scripts.pory"
	msgbox TrainerTipsPartySelectMove_Text_0, MSGBOX_SIGN
	return


TrainerTipsClock_Text_0:
# 4 "data/maps/LeafyClearing/scripts.pory"
	.string "Trainer Tips\p"
	.string "When viewing a clock, press {R_BUTTON} to set the\n"
	.string "time.$"

TrainerTipsBRun_Text_0:
# 8 "data/maps/LeafyClearing/scripts.pory"
	.string "Trainer Tips\p"
	.string "In battle, press {B_BUTTON} to center the cursor\n"
	.string "on Run.$"

TrainerTipsPartySelectMove_Text_0:
# 12 "data/maps/LeafyClearing/scripts.pory"
	.string "Trainer Tips\p"
	.string "In the party screen, press {SELECT_BUTTON} to move\n"
	.string "Pokémon.$"
