Gamecube_CynthiasChallenge::
# 2 "data/cynthias_challenge.pory"
	msgbox Gamecube_CynthiasChallenge_Text_0, MSGBOX_YESNO
# 4 "data/cynthias_challenge.pory"
	compare VAR_RESULT, 1
	goto_if_eq Gamecube_CynthiasChallenge_2
Gamecube_CynthiasChallenge_1:
# 42 "data/cynthias_challenge.pory"
	closemessage
	return

Gamecube_CynthiasChallenge_2:
# 5 "data/cynthias_challenge.pory"
	setvar VAR_0x8000, MUGSHOT_CYNTHIAS_CHALLENGE
# 6 "data/cynthias_challenge.pory"
	callnative DrawMugshot
# 7 "data/cynthias_challenge.pory"
	msgbox Gamecube_CynthiasChallenge_Text_1
# 8 "data/cynthias_challenge.pory"
	goto_if_unset FLAG_BATTLESIM_DISC_1_1, Gamecube_CynthiasChallenge_5
# 12 "data/cynthias_challenge.pory"
	dynmultipush Gamecube_CynthiasChallenge_Text_3, 0
Gamecube_CynthiasChallenge_4:
# 14 "data/cynthias_challenge.pory"
	goto_if_unset FLAG_BATTLESIM_DISC_1_2, Gamecube_CynthiasChallenge_9
# 18 "data/cynthias_challenge.pory"
	dynmultipush Gamecube_CynthiasChallenge_Text_5, 1
Gamecube_CynthiasChallenge_8:
# 20 "data/cynthias_challenge.pory"
	goto_if_set FLAG_BATTLESIM_DISC_1_1, Gamecube_CynthiasChallenge_14
Gamecube_CynthiasChallenge_12:
# 28 "data/cynthias_challenge.pory"
	dynmultistack 0, 6, FALSE, 3, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 29 "data/cynthias_challenge.pory"
	callnative ClearMugshot
# 30 "data/cynthias_challenge.pory"
	switch VAR_RESULT
# 31 "data/cynthias_challenge.pory"
	case 0, Gamecube_CynthiasChallenge_19
# 33 "data/cynthias_challenge.pory"
	case 1, Gamecube_CynthiasChallenge_20
# 35 "data/cynthias_challenge.pory"
	case 2, Gamecube_CynthiasChallenge_21
Gamecube_CynthiasChallenge_17:
# 40 "data/cynthias_challenge.pory"
	callnative ClearMugshot
	goto Gamecube_CynthiasChallenge_1

Gamecube_CynthiasChallenge_5:
# 9 "data/cynthias_challenge.pory"
	dynmultipush Gamecube_CynthiasChallenge_Text_2, 0
	goto Gamecube_CynthiasChallenge_4

Gamecube_CynthiasChallenge_9:
# 15 "data/cynthias_challenge.pory"
	dynmultipush Gamecube_CynthiasChallenge_Text_4, 1
	goto Gamecube_CynthiasChallenge_8

Gamecube_CynthiasChallenge_13:
# 21 "data/cynthias_challenge.pory"
	goto_if_unset FLAG_BATTLESIM_DISC_1_3, Gamecube_CynthiasChallenge_23
# 25 "data/cynthias_challenge.pory"
	dynmultipush Gamecube_CynthiasChallenge_Text_7, 2
	goto Gamecube_CynthiasChallenge_12

Gamecube_CynthiasChallenge_14:
# 20 "data/cynthias_challenge.pory"
	goto_if_set FLAG_BATTLESIM_DISC_1_2, Gamecube_CynthiasChallenge_13
	goto Gamecube_CynthiasChallenge_12

Gamecube_CynthiasChallenge_19:
# 32 "data/cynthias_challenge.pory"
	call CynthiasChallenge_Series1
	goto Gamecube_CynthiasChallenge_17

Gamecube_CynthiasChallenge_20:
# 34 "data/cynthias_challenge.pory"
	call CynthiasChallenge_Series2
	goto Gamecube_CynthiasChallenge_17

Gamecube_CynthiasChallenge_21:
# 36 "data/cynthias_challenge.pory"
	call CynthiasChallenge_Series3
	goto Gamecube_CynthiasChallenge_17

Gamecube_CynthiasChallenge_23:
# 22 "data/cynthias_challenge.pory"
	dynmultipush Gamecube_CynthiasChallenge_Text_6, 2
	goto Gamecube_CynthiasChallenge_12


CynthiasChallenge_Series1::
# 50 "data/cynthias_challenge.pory"
	msgbox Gamecube_Text_Congratulations, MSGBOX_DEFAULT
# 51 "data/cynthias_challenge.pory"
	goto_if_unset FLAG_BATTLESIM_DISC_1_1, CynthiasChallenge_Series1_1
# 57 "data/cynthias_challenge.pory"
	giveitem ITEM_BALM_MUSHROOM, 1
	return

CynthiasChallenge_Series1_1:
# 52 "data/cynthias_challenge.pory"
	giveitem ITEM_STELLAR_TERA_SHARD, 2
# 53 "data/cynthias_challenge.pory"
	giveitem ITEM_EXP_CANDY_L, 2
# 54 "data/cynthias_challenge.pory"
	setflag FLAG_BATTLESIM_DISC_1_1
	return


CynthiasChallenge_Series2::
# 66 "data/cynthias_challenge.pory"
	msgbox Gamecube_Text_Congratulations, MSGBOX_DEFAULT
# 67 "data/cynthias_challenge.pory"
	goto_if_unset FLAG_BATTLESIM_DISC_1_2, CynthiasChallenge_Series2_1
# 73 "data/cynthias_challenge.pory"
	giveitem ITEM_BALM_MUSHROOM, 1
	return

CynthiasChallenge_Series2_1:
# 68 "data/cynthias_challenge.pory"
	giveitem ITEM_STELLAR_TERA_SHARD, 2
# 69 "data/cynthias_challenge.pory"
	giveitem ITEM_EXP_CANDY_L, 2
# 70 "data/cynthias_challenge.pory"
	setflag FLAG_BATTLESIM_DISC_1_2
	return


CynthiasChallenge_Series3::
# 83 "data/cynthias_challenge.pory"
	msgbox Gamecube_Text_Congratulations, MSGBOX_DEFAULT
# 84 "data/cynthias_challenge.pory"
	goto_if_unset FLAG_BATTLESIM_DISC_1_3, CynthiasChallenge_Series3_1
# 91 "data/cynthias_challenge.pory"
	giveitem ITEM_PEARL_STRING, 1
	return

CynthiasChallenge_Series3_1:
# 85 "data/cynthias_challenge.pory"
	giveitem ITEM_SHINY_LURE, 1
# 86 "data/cynthias_challenge.pory"
	giveitem ITEM_EXP_CANDY_XL, 2
# 87 "data/cynthias_challenge.pory"
	giveitem ITEM_BOTTLE_CAP, 1
# 88 "data/cynthias_challenge.pory"
	setflag FLAG_BATTLESIM_DISC_1_3
	return


Gamecube_Info::
# 96 "data/cynthias_challenge.pory"
	msgbox Gamecube_Info_Text_0
	return


Gamecube_CynthiasChallenge_Text_0:
# 2 "data/cynthias_challenge.pory"
	.string "It's a battle simulator!\n"
	.string "Want to use it?$"

Gamecube_CynthiasChallenge_Text_1:
# 7 "data/cynthias_challenge.pory"
	.string "Test$"

Gamecube_CynthiasChallenge_Text_2:
# 9 "data/cynthias_challenge.pory"
	.string "Gym Leaders Part 1$"

Gamecube_CynthiasChallenge_Text_3:
# 12 "data/cynthias_challenge.pory"
	.string "Gym Leaders Part 1 - Complete!$"

Gamecube_CynthiasChallenge_Text_4:
# 15 "data/cynthias_challenge.pory"
	.string "Gym Leaders Part 2$"

Gamecube_CynthiasChallenge_Text_5:
# 18 "data/cynthias_challenge.pory"
	.string "Gym Leaders Part 2 - Complete!$"

Gamecube_CynthiasChallenge_Text_6:
# 22 "data/cynthias_challenge.pory"
	.string "Sinnoh League$"

Gamecube_CynthiasChallenge_Text_7:
# 25 "data/cynthias_challenge.pory"
	.string "Sinnoh League - Complete!$"

Gamecube_Info_Text_0:
# 96 "data/cynthias_challenge.pory"
	.string "In the battle simulator you will use\n"
	.string "your own party to face a series of\l"
	.string "consecutive battles.\p"
	.string "After each battle your party will be\n"
	.string "healed, but you will have no opportunity\l"
	.string "to reorganize it.\p"
	.string "A reward will be given for the\n"
	.string "completion of each series in a disc.\p"
	.string "Some discs will require a series to be\n"
	.string "completed before more within it are\l"
	.string "unlocked.\p"
	.string "Find more discs out in the world to be\n"
	.string "faced with more battles and further\l"
	.string "rewards!$"

Gamecube_Text_Congratulations::
# 103 "data/cynthias_challenge.pory"
	.string "Congratulations. You have completed\n"
	.string "the current series of battles.$"
