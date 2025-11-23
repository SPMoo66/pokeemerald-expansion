Gamecube_CynthiasChallenge::
# 2 "data/cynthias_challenge.pory"
	msgbox Gamecube_CynthiasChallenge_Text_0, MSGBOX_DEFAULT
# 4 "data/cynthias_challenge.pory"
	dynmultichoice 0, 6, FALSE, 3, 0, DYN_MULTICHOICE_CB_NONE, gText_Yes, gText_Info, gText_No
# 5 "data/cynthias_challenge.pory"
	compare VAR_RESULT, 0
	goto_if_eq Gamecube_CynthiasChallenge_2
# 46 "data/cynthias_challenge.pory"
	compare VAR_RESULT, 1
	goto_if_eq Gamecube_CynthiasChallenge_3
Gamecube_CynthiasChallenge_1:
# 49 "data/cynthias_challenge.pory"
	closemessage
	return

Gamecube_CynthiasChallenge_2:
# 6 "data/cynthias_challenge.pory"
	setflag FLAG_NO_MONEY_LOSS_ON_DEFEAT
# 7 "data/cynthias_challenge.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 8 "data/cynthias_challenge.pory"
	setvar VAR_0x8000, MUGSHOT_CYNTHIAS_CHALLENGE
# 9 "data/cynthias_challenge.pory"
	callnative DrawMugshot
# 10 "data/cynthias_challenge.pory"
	msgbox Gamecube_CynthiasChallenge_Text_1
# 11 "data/cynthias_challenge.pory"
	goto_if_unset FLAG_BATTLESIM_DISC_1_1, Gamecube_CynthiasChallenge_7
# 15 "data/cynthias_challenge.pory"
	dynmultipush Gamecube_CynthiasChallenge_Text_3, 0
Gamecube_CynthiasChallenge_6:
# 17 "data/cynthias_challenge.pory"
	goto_if_unset FLAG_BATTLESIM_DISC_1_2, Gamecube_CynthiasChallenge_11
# 21 "data/cynthias_challenge.pory"
	dynmultipush Gamecube_CynthiasChallenge_Text_5, 1
Gamecube_CynthiasChallenge_10:
# 23 "data/cynthias_challenge.pory"
	goto_if_set FLAG_BATTLESIM_DISC_1_1, Gamecube_CynthiasChallenge_16
Gamecube_CynthiasChallenge_14:
# 31 "data/cynthias_challenge.pory"
	dynmultistack 0, 6, FALSE, 3, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 32 "data/cynthias_challenge.pory"
	callnative ClearMugshot
# 33 "data/cynthias_challenge.pory"
	switch VAR_RESULT
# 34 "data/cynthias_challenge.pory"
	case 0, Gamecube_CynthiasChallenge_21
# 36 "data/cynthias_challenge.pory"
	case 1, Gamecube_CynthiasChallenge_22
# 38 "data/cynthias_challenge.pory"
	case 2, Gamecube_CynthiasChallenge_23
Gamecube_CynthiasChallenge_19:
# 43 "data/cynthias_challenge.pory"
	clearflag FLAG_NO_MONEY_LOSS_ON_DEFEAT
# 44 "data/cynthias_challenge.pory"
	clearflag FLAG_CHALLENGING_TRAINER
	goto Gamecube_CynthiasChallenge_1

Gamecube_CynthiasChallenge_3:
# 47 "data/cynthias_challenge.pory"
	call Gamecube_Info
	goto Gamecube_CynthiasChallenge_1

Gamecube_CynthiasChallenge_7:
# 12 "data/cynthias_challenge.pory"
	dynmultipush Gamecube_CynthiasChallenge_Text_2, 0
	goto Gamecube_CynthiasChallenge_6

Gamecube_CynthiasChallenge_11:
# 18 "data/cynthias_challenge.pory"
	dynmultipush Gamecube_CynthiasChallenge_Text_4, 1
	goto Gamecube_CynthiasChallenge_10

Gamecube_CynthiasChallenge_15:
# 24 "data/cynthias_challenge.pory"
	goto_if_unset FLAG_BATTLESIM_DISC_1_3, Gamecube_CynthiasChallenge_25
# 28 "data/cynthias_challenge.pory"
	dynmultipush Gamecube_CynthiasChallenge_Text_7, 2
	goto Gamecube_CynthiasChallenge_14

Gamecube_CynthiasChallenge_16:
# 23 "data/cynthias_challenge.pory"
	goto_if_set FLAG_BATTLESIM_DISC_1_2, Gamecube_CynthiasChallenge_15
	goto Gamecube_CynthiasChallenge_14

Gamecube_CynthiasChallenge_21:
# 35 "data/cynthias_challenge.pory"
	call CynthiasChallenge_Series1
	goto Gamecube_CynthiasChallenge_19

Gamecube_CynthiasChallenge_22:
# 37 "data/cynthias_challenge.pory"
	call CynthiasChallenge_Series2
	goto Gamecube_CynthiasChallenge_19

Gamecube_CynthiasChallenge_23:
# 39 "data/cynthias_challenge.pory"
	call CynthiasChallenge_Series3
	goto Gamecube_CynthiasChallenge_19

Gamecube_CynthiasChallenge_25:
# 25 "data/cynthias_challenge.pory"
	dynmultipush Gamecube_CynthiasChallenge_Text_6, 2
	goto Gamecube_CynthiasChallenge_14


CynthiasChallenge_Series1::
# 53 "data/cynthias_challenge.pory"
	trainerbattle_no_intro TRAINER_SIMULATOR_ROARK, CynthiasChallenge_Series1_Text_0
# 54 "data/cynthias_challenge.pory"
	special HealPlayerParty
# 55 "data/cynthias_challenge.pory"
	trainerbattle_no_intro TRAINER_SIMULATOR_GARDENIA, CynthiasChallenge_Series1_Text_1
# 56 "data/cynthias_challenge.pory"
	special HealPlayerParty
# 57 "data/cynthias_challenge.pory"
	trainerbattle_no_intro TRAINER_SIMULATOR_MAYLENE, CynthiasChallenge_Series1_Text_2
# 58 "data/cynthias_challenge.pory"
	special HealPlayerParty
# 59 "data/cynthias_challenge.pory"
	trainerbattle_no_intro TRAINER_SIMULATOR_WAKE, CynthiasChallenge_Series1_Text_3
# 60 "data/cynthias_challenge.pory"
	special HealPlayerParty
# 61 "data/cynthias_challenge.pory"
	msgbox Gamecube_Text_Congratulations, MSGBOX_DEFAULT
# 62 "data/cynthias_challenge.pory"
	goto_if_unset FLAG_BATTLESIM_DISC_1_1, CynthiasChallenge_Series1_1
# 68 "data/cynthias_challenge.pory"
	giveitem ITEM_BALM_MUSHROOM, 1
	return

CynthiasChallenge_Series1_1:
# 63 "data/cynthias_challenge.pory"
	giveitem ITEM_STELLAR_TERA_SHARD, 2
# 64 "data/cynthias_challenge.pory"
	giveitem ITEM_EXP_CANDY_L, 2
# 65 "data/cynthias_challenge.pory"
	setflag FLAG_BATTLESIM_DISC_1_1
	return


CynthiasChallenge_Series2::
# 73 "data/cynthias_challenge.pory"
	trainerbattle_no_intro TRAINER_SIMULATOR_FANTINA, CynthiasChallenge_Series2_Text_0
# 74 "data/cynthias_challenge.pory"
	special HealPlayerParty
# 75 "data/cynthias_challenge.pory"
	trainerbattle_no_intro TRAINER_SIMULATOR_BYRON, CynthiasChallenge_Series2_Text_1
# 76 "data/cynthias_challenge.pory"
	special HealPlayerParty
# 77 "data/cynthias_challenge.pory"
	trainerbattle_no_intro TRAINER_SIMULATOR_CANDICE, CynthiasChallenge_Series2_Text_2
# 78 "data/cynthias_challenge.pory"
	special HealPlayerParty
# 79 "data/cynthias_challenge.pory"
	trainerbattle_no_intro TRAINER_SIMULATOR_VOLKNER, CynthiasChallenge_Series2_Text_3
# 80 "data/cynthias_challenge.pory"
	special HealPlayerParty
# 81 "data/cynthias_challenge.pory"
	msgbox Gamecube_Text_Congratulations, MSGBOX_DEFAULT
# 82 "data/cynthias_challenge.pory"
	goto_if_unset FLAG_BATTLESIM_DISC_1_2, CynthiasChallenge_Series2_1
# 88 "data/cynthias_challenge.pory"
	giveitem ITEM_BALM_MUSHROOM, 1
	return

CynthiasChallenge_Series2_1:
# 83 "data/cynthias_challenge.pory"
	giveitem ITEM_STELLAR_TERA_SHARD, 2
# 84 "data/cynthias_challenge.pory"
	giveitem ITEM_EXP_CANDY_L, 2
# 85 "data/cynthias_challenge.pory"
	setflag FLAG_BATTLESIM_DISC_1_2
	return


CynthiasChallenge_Series3::
# 93 "data/cynthias_challenge.pory"
	trainerbattle_no_intro TRAINER_SIMULATOR_AARON, CynthiasChallenge_Series3_Text_0
# 94 "data/cynthias_challenge.pory"
	special HealPlayerParty
# 95 "data/cynthias_challenge.pory"
	trainerbattle_no_intro TRAINER_SIMULATOR_BERTHA, CynthiasChallenge_Series3_Text_1
# 96 "data/cynthias_challenge.pory"
	special HealPlayerParty
# 97 "data/cynthias_challenge.pory"
	trainerbattle_no_intro TRAINER_SIMULATOR_FLINT, CynthiasChallenge_Series3_Text_2
# 98 "data/cynthias_challenge.pory"
	special HealPlayerParty
# 99 "data/cynthias_challenge.pory"
	trainerbattle_no_intro TRAINER_SIMULATOR_LUCIAN, CynthiasChallenge_Series3_Text_3
# 100 "data/cynthias_challenge.pory"
	special HealPlayerParty
# 101 "data/cynthias_challenge.pory"
	trainerbattle_no_intro TRAINER_SIMULATOR_CYNTHIA, CynthiasChallenge_Series3_Text_4
# 102 "data/cynthias_challenge.pory"
	special HealPlayerParty
# 103 "data/cynthias_challenge.pory"
	msgbox Gamecube_Text_Congratulations, MSGBOX_DEFAULT
# 104 "data/cynthias_challenge.pory"
	goto_if_unset FLAG_BATTLESIM_DISC_1_3, CynthiasChallenge_Series3_1
# 113 "data/cynthias_challenge.pory"
	giveitem ITEM_PEARL_STRING, 1
	return

CynthiasChallenge_Series3_1:
# 105 "data/cynthias_challenge.pory"
	giveitem ITEM_SHINY_LURE, 1
# 106 "data/cynthias_challenge.pory"
	giveitem ITEM_EXP_CANDY_XL, 2
# 107 "data/cynthias_challenge.pory"
	setvar VAR_0x8004, 5
# 108 "data/cynthias_challenge.pory"
	special GiveFrontierBattlePoints
# 109 "data/cynthias_challenge.pory"
	msgbox CynthiasChallenge_Series3_Text_5, MSGBOX_GETPOINTS
# 110 "data/cynthias_challenge.pory"
	setflag FLAG_BATTLESIM_DISC_1_3
	return


Gamecube_Info::
# 118 "data/cynthias_challenge.pory"
	msgbox Gamecube_Info_Text_0
# 124 "data/cynthias_challenge.pory"
	goto Gamecube_CynthiasChallenge
	return


Gamecube_CynthiasChallenge_Text_0:
# 2 "data/cynthias_challenge.pory"
	.string "It's a battle simulator!\n"
	.string "Want to use it?$"

Gamecube_CynthiasChallenge_Text_1:
# 10 "data/cynthias_challenge.pory"
	.string "Test$"

Gamecube_CynthiasChallenge_Text_2:
# 12 "data/cynthias_challenge.pory"
	.string "Gym Leaders Part 1$"

Gamecube_CynthiasChallenge_Text_3:
# 15 "data/cynthias_challenge.pory"
	.string "Gym Leaders Part 1 - Complete!$"

Gamecube_CynthiasChallenge_Text_4:
# 18 "data/cynthias_challenge.pory"
	.string "Gym Leaders Part 2$"

Gamecube_CynthiasChallenge_Text_5:
# 21 "data/cynthias_challenge.pory"
	.string "Gym Leaders Part 2 - Complete!$"

Gamecube_CynthiasChallenge_Text_6:
# 25 "data/cynthias_challenge.pory"
	.string "Sinnoh League$"

Gamecube_CynthiasChallenge_Text_7:
# 28 "data/cynthias_challenge.pory"
	.string "Sinnoh League - Complete!$"

CynthiasChallenge_Series1_Text_0:
# 53 "data/cynthias_challenge.pory"
	.string "W-what? That can't be!\nMy buffed-up Pokémon!$"

CynthiasChallenge_Series1_Text_1:
# 55 "data/cynthias_challenge.pory"
	.string "Amazing!\nYou're very good, aren't you?$"

CynthiasChallenge_Series1_Text_2:
# 57 "data/cynthias_challenge.pory"
	.string "I shall admit defeat…\nYou are much too strong.$"

CynthiasChallenge_Series1_Text_3:
# 59 "data/cynthias_challenge.pory"
	.string "Hunwah! It's gone and ended!\nHow will I say this… I want more!\lI wanted to battle a lot more!$"

CynthiasChallenge_Series2_Text_0:
# 73 "data/cynthias_challenge.pory"
	.string "You are so fantastically strong.\nI know now why I have lost.$"

CynthiasChallenge_Series2_Text_1:
# 75 "data/cynthias_challenge.pory"
	.string "Hmm! My sturdy Pokémon, defeated!$"

CynthiasChallenge_Series2_Text_2:
# 77 "data/cynthias_challenge.pory"
	.string "I must say, I'm warmed up to you!\nI might even admire you a little.$"

CynthiasChallenge_Series2_Text_3:
# 79 "data/cynthias_challenge.pory"
	.string "You've got me beat…\nYour desire and the noble way your\lPokémon battled for you…\lI even felt thrilled during our match.\lThat was a very good battle.$"

CynthiasChallenge_Series3_Text_0:
# 93 "data/cynthias_challenge.pory"
	.string "I will now concede defeat. But I think\nyou came to see how great Bug-type\lPokémon can be. Battling is a deep and\lcomplex affair…$"

CynthiasChallenge_Series3_Text_1:
# 95 "data/cynthias_challenge.pory"
	.string "Well! Dear child, I must say, that was\nmost impressive. Your Pokémon believed\lin you and did their best to earn you\lthe win.$"

CynthiasChallenge_Series3_Text_2:
# 97 "data/cynthias_challenge.pory"
	.string "…! I wasn't expecting this! I wasn't\nlooking down on you… But I didn't think\lfor one second that I'd lose!$"

CynthiasChallenge_Series3_Text_3:
# 99 "data/cynthias_challenge.pory"
	.string "I see… You getting past the three\nbefore me was no fluke. Your power\lis real.$"

CynthiasChallenge_Series3_Text_4:
# 101 "data/cynthias_challenge.pory"
	.string "…Just a few moments ago, you were the\nmost powerful challenger. And just now,\lyou became the most powerful of all the\lTrainers.$"

CynthiasChallenge_Series3_Text_5:
# 109 "data/cynthias_challenge.pory"
	.string "{PLAYER} obtained\n3 Battle Points.$"

Gamecube_Info_Text_0:
# 118 "data/cynthias_challenge.pory"
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
# 127 "data/cynthias_challenge.pory"
	.string "Congratulations. You have completed\n"
	.string "the current series of battles.$"
