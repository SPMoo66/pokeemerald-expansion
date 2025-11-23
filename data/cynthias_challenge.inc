Gamecube_CynthiasChallenge::
# 2 "data/cynthias_challenge.pory"
	msgbox Gamecube_CynthiasChallenge_Text_0, MSGBOX_DEFAULT
# 4 "data/cynthias_challenge.pory"
	dynmultichoice 0, 6, FALSE, 3, 0, DYN_MULTICHOICE_CB_NONE, gText_Yes, gText_Info, gText_No
# 5 "data/cynthias_challenge.pory"
	compare VAR_RESULT, 0
	goto_if_eq Gamecube_CynthiasChallenge_2
# 44 "data/cynthias_challenge.pory"
	compare VAR_RESULT, 1
	goto_if_eq Gamecube_CynthiasChallenge_3
Gamecube_CynthiasChallenge_1:
# 47 "data/cynthias_challenge.pory"
	closemessage
	return

Gamecube_CynthiasChallenge_2:
# 6 "data/cynthias_challenge.pory"
	setflag FLAG_NO_MONEY_LOSS_ON_DEFEAT
# 7 "data/cynthias_challenge.pory"
	setvar VAR_0x8000, MUGSHOT_CYNTHIAS_CHALLENGE
# 8 "data/cynthias_challenge.pory"
	callnative DrawMugshot
# 9 "data/cynthias_challenge.pory"
	msgbox Gamecube_CynthiasChallenge_Text_1
# 10 "data/cynthias_challenge.pory"
	goto_if_unset FLAG_BATTLESIM_DISC_1_1, Gamecube_CynthiasChallenge_7
# 14 "data/cynthias_challenge.pory"
	dynmultipush Gamecube_CynthiasChallenge_Text_3, 0
Gamecube_CynthiasChallenge_6:
# 16 "data/cynthias_challenge.pory"
	goto_if_unset FLAG_BATTLESIM_DISC_1_2, Gamecube_CynthiasChallenge_11
# 20 "data/cynthias_challenge.pory"
	dynmultipush Gamecube_CynthiasChallenge_Text_5, 1
Gamecube_CynthiasChallenge_10:
# 22 "data/cynthias_challenge.pory"
	goto_if_set FLAG_BATTLESIM_DISC_1_1, Gamecube_CynthiasChallenge_16
Gamecube_CynthiasChallenge_14:
# 30 "data/cynthias_challenge.pory"
	dynmultistack 0, 6, FALSE, 3, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 31 "data/cynthias_challenge.pory"
	callnative ClearMugshot
# 32 "data/cynthias_challenge.pory"
	switch VAR_RESULT
# 33 "data/cynthias_challenge.pory"
	case 0, Gamecube_CynthiasChallenge_21
# 35 "data/cynthias_challenge.pory"
	case 1, Gamecube_CynthiasChallenge_22
# 37 "data/cynthias_challenge.pory"
	case 2, Gamecube_CynthiasChallenge_23
Gamecube_CynthiasChallenge_19:
# 42 "data/cynthias_challenge.pory"
	clearflag FLAG_NO_MONEY_LOSS_ON_DEFEAT
	goto Gamecube_CynthiasChallenge_1

Gamecube_CynthiasChallenge_3:
# 45 "data/cynthias_challenge.pory"
	call Gamecube_Info
	goto Gamecube_CynthiasChallenge_1

Gamecube_CynthiasChallenge_7:
# 11 "data/cynthias_challenge.pory"
	dynmultipush Gamecube_CynthiasChallenge_Text_2, 0
	goto Gamecube_CynthiasChallenge_6

Gamecube_CynthiasChallenge_11:
# 17 "data/cynthias_challenge.pory"
	dynmultipush Gamecube_CynthiasChallenge_Text_4, 1
	goto Gamecube_CynthiasChallenge_10

Gamecube_CynthiasChallenge_15:
# 23 "data/cynthias_challenge.pory"
	goto_if_unset FLAG_BATTLESIM_DISC_1_3, Gamecube_CynthiasChallenge_25
# 27 "data/cynthias_challenge.pory"
	dynmultipush Gamecube_CynthiasChallenge_Text_7, 2
	goto Gamecube_CynthiasChallenge_14

Gamecube_CynthiasChallenge_16:
# 22 "data/cynthias_challenge.pory"
	goto_if_set FLAG_BATTLESIM_DISC_1_2, Gamecube_CynthiasChallenge_15
	goto Gamecube_CynthiasChallenge_14

Gamecube_CynthiasChallenge_21:
# 34 "data/cynthias_challenge.pory"
	call CynthiasChallenge_Series1
	goto Gamecube_CynthiasChallenge_19

Gamecube_CynthiasChallenge_22:
# 36 "data/cynthias_challenge.pory"
	call CynthiasChallenge_Series2
	goto Gamecube_CynthiasChallenge_19

Gamecube_CynthiasChallenge_23:
# 38 "data/cynthias_challenge.pory"
	call CynthiasChallenge_Series3
	goto Gamecube_CynthiasChallenge_19

Gamecube_CynthiasChallenge_25:
# 24 "data/cynthias_challenge.pory"
	dynmultipush Gamecube_CynthiasChallenge_Text_6, 2
	goto Gamecube_CynthiasChallenge_14


CynthiasChallenge_Series1::
# 51 "data/cynthias_challenge.pory"
	trainerbattle_no_intro TRAINER_HARPER_1, CynthiasChallenge_Series1_Text_0
# 52 "data/cynthias_challenge.pory"
	trainerbattle_no_intro TRAINER_HARPER_2, CynthiasChallenge_Series1_Text_1
# 53 "data/cynthias_challenge.pory"
	trainerbattle_no_intro TRAINER_HARPER_3, CynthiasChallenge_Series1_Text_2
# 54 "data/cynthias_challenge.pory"
	trainerbattle_no_intro TRAINER_HARPER_4, CynthiasChallenge_Series1_Text_3
# 55 "data/cynthias_challenge.pory"
	msgbox Gamecube_Text_Congratulations, MSGBOX_DEFAULT
# 56 "data/cynthias_challenge.pory"
	goto_if_unset FLAG_BATTLESIM_DISC_1_1, CynthiasChallenge_Series1_1
# 62 "data/cynthias_challenge.pory"
	giveitem ITEM_BALM_MUSHROOM, 1
	return

CynthiasChallenge_Series1_1:
# 57 "data/cynthias_challenge.pory"
	giveitem ITEM_STELLAR_TERA_SHARD, 2
# 58 "data/cynthias_challenge.pory"
	giveitem ITEM_EXP_CANDY_L, 2
# 59 "data/cynthias_challenge.pory"
	setflag FLAG_BATTLESIM_DISC_1_1
	return


CynthiasChallenge_Series2::
# 71 "data/cynthias_challenge.pory"
	msgbox Gamecube_Text_Congratulations, MSGBOX_DEFAULT
# 72 "data/cynthias_challenge.pory"
	goto_if_unset FLAG_BATTLESIM_DISC_1_2, CynthiasChallenge_Series2_1
# 78 "data/cynthias_challenge.pory"
	giveitem ITEM_BALM_MUSHROOM, 1
	return

CynthiasChallenge_Series2_1:
# 73 "data/cynthias_challenge.pory"
	giveitem ITEM_STELLAR_TERA_SHARD, 2
# 74 "data/cynthias_challenge.pory"
	giveitem ITEM_EXP_CANDY_L, 2
# 75 "data/cynthias_challenge.pory"
	setflag FLAG_BATTLESIM_DISC_1_2
	return


CynthiasChallenge_Series3::
# 88 "data/cynthias_challenge.pory"
	msgbox Gamecube_Text_Congratulations, MSGBOX_DEFAULT
# 89 "data/cynthias_challenge.pory"
	goto_if_unset FLAG_BATTLESIM_DISC_1_3, CynthiasChallenge_Series3_1
# 98 "data/cynthias_challenge.pory"
	giveitem ITEM_PEARL_STRING, 1
	return

CynthiasChallenge_Series3_1:
# 90 "data/cynthias_challenge.pory"
	giveitem ITEM_SHINY_LURE, 1
# 91 "data/cynthias_challenge.pory"
	giveitem ITEM_EXP_CANDY_XL, 2
# 92 "data/cynthias_challenge.pory"
	setvar VAR_0x8004, 3
# 93 "data/cynthias_challenge.pory"
	special GiveFrontierBattlePoints
# 94 "data/cynthias_challenge.pory"
	msgbox CynthiasChallenge_Series3_Text_0, MSGBOX_GETPOINTS
# 95 "data/cynthias_challenge.pory"
	setflag FLAG_BATTLESIM_DISC_1_3
	return


Gamecube_Info::
# 103 "data/cynthias_challenge.pory"
	msgbox Gamecube_Info_Text_0
# 109 "data/cynthias_challenge.pory"
	goto Gamecube_CynthiasChallenge
	return


Gamecube_CynthiasChallenge_Text_0:
# 2 "data/cynthias_challenge.pory"
	.string "It's a battle simulator!\n"
	.string "Want to use it?$"

Gamecube_CynthiasChallenge_Text_1:
# 9 "data/cynthias_challenge.pory"
	.string "Test$"

Gamecube_CynthiasChallenge_Text_2:
# 11 "data/cynthias_challenge.pory"
	.string "Gym Leaders Part 1$"

Gamecube_CynthiasChallenge_Text_3:
# 14 "data/cynthias_challenge.pory"
	.string "Gym Leaders Part 1 - Complete!$"

Gamecube_CynthiasChallenge_Text_4:
# 17 "data/cynthias_challenge.pory"
	.string "Gym Leaders Part 2$"

Gamecube_CynthiasChallenge_Text_5:
# 20 "data/cynthias_challenge.pory"
	.string "Gym Leaders Part 2 - Complete!$"

Gamecube_CynthiasChallenge_Text_6:
# 24 "data/cynthias_challenge.pory"
	.string "Sinnoh League$"

Gamecube_CynthiasChallenge_Text_7:
# 27 "data/cynthias_challenge.pory"
	.string "Sinnoh League - Complete!$"

CynthiasChallenge_Series1_Text_0:
# 51 "data/cynthias_challenge.pory"
	.string "W-what? That can't be!\nMy buffed-up Pokémon!$"

CynthiasChallenge_Series1_Text_1:
# 52 "data/cynthias_challenge.pory"
	.string "Amazing!\nYou're very good, aren't you?$"

CynthiasChallenge_Series1_Text_2:
# 53 "data/cynthias_challenge.pory"
	.string "I shall admit defeat…\nYou are much too strong.$"

CynthiasChallenge_Series1_Text_3:
# 54 "data/cynthias_challenge.pory"
	.string "Hunwah! It's gone and ended!\nHow will I say this… I want more!\lI wanted to battle a lot more!$"

CynthiasChallenge_Series3_Text_0:
# 94 "data/cynthias_challenge.pory"
	.string "{PLAYER} obtained\n3 Battle Points.$"

Gamecube_Info_Text_0:
# 103 "data/cynthias_challenge.pory"
	.string "In the battle simulator you will use\n"
	.string "your own party to face a series of\l"
	.string "consecutive battles.\p"
	.string "After each battle your party will be\n"
	.string "healed, but you will have no opportunity\l"
	.string "to reorganize it.\p"
	.string "A reward will be given for the\n"
	.string "completion of each series in a disc.\p"
	.string "Money will not be lost if you are\n"
	.string "defeated within the battle simulator.\p"
	.string "Some discs will require a series to be\n"
	.string "completed before more within it are\l"
	.string "unlocked.\p"
	.string "Find more discs out in the world to be\n"
	.string "faced with more battles and further\l"
	.string "rewards!$"

Gamecube_Text_Congratulations::
# 112 "data/cynthias_challenge.pory"
	.string "Congratulations. You have completed\n"
	.string "the current series of battles.$"
