Motel_BattleSimulator::
# 2 "data/cynthias_challenge.pory"
	msgbox Motel_BattleSimulator_Text_0, MSGBOX_DEFAULT
# 4 "data/cynthias_challenge.pory"
	dynmultichoice 0, 6, FALSE, 3, 0, DYN_MULTICHOICE_CB_NONE, gText_Yes, gText_Info, gText_No
# 5 "data/cynthias_challenge.pory"
	compare VAR_RESULT, 0
	goto_if_eq Motel_BattleSimulator_2
# 8 "data/cynthias_challenge.pory"
	compare VAR_RESULT, 1
	goto_if_eq Motel_BattleSimulator_3
Motel_BattleSimulator_1:
# 11 "data/cynthias_challenge.pory"
	clearflag FLAG_NO_MONEY_LOSS_ON_DEFEAT
# 12 "data/cynthias_challenge.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 13 "data/cynthias_challenge.pory"
	closemessage
	return

Motel_BattleSimulator_2:
# 6 "data/cynthias_challenge.pory"
	call CynthiasChallenge_Main
	goto Motel_BattleSimulator_1

Motel_BattleSimulator_3:
# 9 "data/cynthias_challenge.pory"
	call Gamecube_Info
	goto Motel_BattleSimulator_1


CynthiasChallenge_Main::
# 26 "data/cynthias_challenge.pory"
	setflag FLAG_NO_MONEY_LOSS_ON_DEFEAT
# 27 "data/cynthias_challenge.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 28 "data/cynthias_challenge.pory"
	setvar VAR_0x8000, MUGSHOT_CYNTHIAS_CHALLENGE
# 29 "data/cynthias_challenge.pory"
	callnative DrawMugshot
# 30 "data/cynthias_challenge.pory"
	msgbox CynthiasChallenge_Main_Text_0
# 32 "data/cynthias_challenge.pory"
	goto_if_unset FLAG_BATTLESIM_DISC_1_1, CynthiasChallenge_Main_2
# 36 "data/cynthias_challenge.pory"
	dynmultipush CynthiasChallenge_Main_Text_2, 0
CynthiasChallenge_Main_1:
# 38 "data/cynthias_challenge.pory"
	goto_if_unset FLAG_BATTLESIM_DISC_1_2, CynthiasChallenge_Main_6
# 42 "data/cynthias_challenge.pory"
	dynmultipush CynthiasChallenge_Main_Text_4, 1
CynthiasChallenge_Main_5:
# 44 "data/cynthias_challenge.pory"
	goto_if_set FLAG_BATTLESIM_DISC_1_1, CynthiasChallenge_Main_11
CynthiasChallenge_Main_9:
# 52 "data/cynthias_challenge.pory"
	dynmultistack 0, 6, FALSE, 3, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 53 "data/cynthias_challenge.pory"
	callnative ClearMugshot
# 54 "data/cynthias_challenge.pory"
	switch VAR_RESULT
# 55 "data/cynthias_challenge.pory"
	case 0, CynthiasChallenge_Main_15
# 57 "data/cynthias_challenge.pory"
	case 1, CynthiasChallenge_Main_16
# 59 "data/cynthias_challenge.pory"
	case 2, CynthiasChallenge_Main_17
	return

CynthiasChallenge_Main_2:
# 33 "data/cynthias_challenge.pory"
	dynmultipush CynthiasChallenge_Main_Text_1, 0
	goto CynthiasChallenge_Main_1

CynthiasChallenge_Main_6:
# 39 "data/cynthias_challenge.pory"
	dynmultipush CynthiasChallenge_Main_Text_3, 1
	goto CynthiasChallenge_Main_5

CynthiasChallenge_Main_10:
# 45 "data/cynthias_challenge.pory"
	goto_if_unset FLAG_BATTLESIM_DISC_1_3, CynthiasChallenge_Main_19
# 49 "data/cynthias_challenge.pory"
	dynmultipush CynthiasChallenge_Main_Text_6, 2
	goto CynthiasChallenge_Main_9

CynthiasChallenge_Main_11:
# 44 "data/cynthias_challenge.pory"
	goto_if_set FLAG_BATTLESIM_DISC_1_2, CynthiasChallenge_Main_10
	goto CynthiasChallenge_Main_9

CynthiasChallenge_Main_15:
# 56 "data/cynthias_challenge.pory"
	call CynthiasChallenge_Series1
	return

CynthiasChallenge_Main_16:
# 58 "data/cynthias_challenge.pory"
	call CynthiasChallenge_Series2
	return

CynthiasChallenge_Main_17:
# 60 "data/cynthias_challenge.pory"
	call CynthiasChallenge_Series3
	return

CynthiasChallenge_Main_19:
# 46 "data/cynthias_challenge.pory"
	dynmultipush CynthiasChallenge_Main_Text_5, 2
	goto CynthiasChallenge_Main_9


CynthiasChallenge_Series1::
# 67 "data/cynthias_challenge.pory"
	trainerbattle_no_intro TRAINER_SIMULATOR_ROARK, CynthiasChallenge_Series1_Text_0
# 68 "data/cynthias_challenge.pory"
	special HealPlayerParty
# 69 "data/cynthias_challenge.pory"
	trainerbattle_no_intro TRAINER_SIMULATOR_GARDENIA, CynthiasChallenge_Series1_Text_1
# 70 "data/cynthias_challenge.pory"
	special HealPlayerParty
# 71 "data/cynthias_challenge.pory"
	trainerbattle_no_intro TRAINER_SIMULATOR_MAYLENE, CynthiasChallenge_Series1_Text_2
# 72 "data/cynthias_challenge.pory"
	special HealPlayerParty
# 73 "data/cynthias_challenge.pory"
	trainerbattle_no_intro TRAINER_SIMULATOR_WAKE, CynthiasChallenge_Series1_Text_3
# 74 "data/cynthias_challenge.pory"
	special HealPlayerParty
# 75 "data/cynthias_challenge.pory"
	msgbox Gamecube_Text_Congratulations, MSGBOX_DEFAULT
# 76 "data/cynthias_challenge.pory"
	goto_if_unset FLAG_BATTLESIM_DISC_1_1, CynthiasChallenge_Series1_1
# 82 "data/cynthias_challenge.pory"
	giveitem ITEM_BALM_MUSHROOM, 1
	return

CynthiasChallenge_Series1_1:
# 77 "data/cynthias_challenge.pory"
	giveitem ITEM_STELLAR_TERA_SHARD, 2
# 78 "data/cynthias_challenge.pory"
	giveitem ITEM_EXP_CANDY_L, 2
# 79 "data/cynthias_challenge.pory"
	setflag FLAG_BATTLESIM_DISC_1_1
	return


CynthiasChallenge_Series2::
# 87 "data/cynthias_challenge.pory"
	trainerbattle_no_intro TRAINER_SIMULATOR_FANTINA, CynthiasChallenge_Series2_Text_0
# 88 "data/cynthias_challenge.pory"
	special HealPlayerParty
# 89 "data/cynthias_challenge.pory"
	trainerbattle_no_intro TRAINER_SIMULATOR_BYRON, CynthiasChallenge_Series2_Text_1
# 90 "data/cynthias_challenge.pory"
	special HealPlayerParty
# 91 "data/cynthias_challenge.pory"
	trainerbattle_no_intro TRAINER_SIMULATOR_CANDICE, CynthiasChallenge_Series2_Text_2
# 92 "data/cynthias_challenge.pory"
	special HealPlayerParty
# 93 "data/cynthias_challenge.pory"
	trainerbattle_no_intro TRAINER_SIMULATOR_VOLKNER, CynthiasChallenge_Series2_Text_3
# 94 "data/cynthias_challenge.pory"
	special HealPlayerParty
# 95 "data/cynthias_challenge.pory"
	msgbox Gamecube_Text_Congratulations, MSGBOX_DEFAULT
# 96 "data/cynthias_challenge.pory"
	goto_if_unset FLAG_BATTLESIM_DISC_1_2, CynthiasChallenge_Series2_1
# 102 "data/cynthias_challenge.pory"
	giveitem ITEM_BALM_MUSHROOM, 1
	return

CynthiasChallenge_Series2_1:
# 97 "data/cynthias_challenge.pory"
	giveitem ITEM_STELLAR_TERA_SHARD, 2
# 98 "data/cynthias_challenge.pory"
	giveitem ITEM_EXP_CANDY_L, 2
# 99 "data/cynthias_challenge.pory"
	setflag FLAG_BATTLESIM_DISC_1_2
	return


CynthiasChallenge_Series3::
# 107 "data/cynthias_challenge.pory"
	trainerbattle_no_intro TRAINER_SIMULATOR_AARON, CynthiasChallenge_Series3_Text_0
# 108 "data/cynthias_challenge.pory"
	special HealPlayerParty
# 109 "data/cynthias_challenge.pory"
	trainerbattle_no_intro TRAINER_SIMULATOR_BERTHA, CynthiasChallenge_Series3_Text_1
# 110 "data/cynthias_challenge.pory"
	special HealPlayerParty
# 111 "data/cynthias_challenge.pory"
	trainerbattle_no_intro TRAINER_SIMULATOR_FLINT, CynthiasChallenge_Series3_Text_2
# 112 "data/cynthias_challenge.pory"
	special HealPlayerParty
# 113 "data/cynthias_challenge.pory"
	trainerbattle_no_intro TRAINER_SIMULATOR_LUCIAN, CynthiasChallenge_Series3_Text_3
# 114 "data/cynthias_challenge.pory"
	special HealPlayerParty
# 115 "data/cynthias_challenge.pory"
	trainerbattle_no_intro TRAINER_SIMULATOR_CYNTHIA, CynthiasChallenge_Series3_Text_4
# 116 "data/cynthias_challenge.pory"
	special HealPlayerParty
# 117 "data/cynthias_challenge.pory"
	msgbox Gamecube_Text_Congratulations, MSGBOX_DEFAULT
# 118 "data/cynthias_challenge.pory"
	goto_if_unset FLAG_BATTLESIM_DISC_1_3, CynthiasChallenge_Series3_1
# 127 "data/cynthias_challenge.pory"
	giveitem ITEM_PEARL_STRING, 1
	return

CynthiasChallenge_Series3_1:
# 119 "data/cynthias_challenge.pory"
	giveitem ITEM_SHINY_LURE, 1
# 120 "data/cynthias_challenge.pory"
	giveitem ITEM_EXP_CANDY_XL, 2
# 121 "data/cynthias_challenge.pory"
	setvar VAR_0x8004, 5
# 122 "data/cynthias_challenge.pory"
	special GiveFrontierBattlePoints
# 123 "data/cynthias_challenge.pory"
	msgbox CynthiasChallenge_Series3_Text_5, MSGBOX_GETPOINTS
# 124 "data/cynthias_challenge.pory"
	setflag FLAG_BATTLESIM_DISC_1_3
	return


Gamecube_Info::
# 132 "data/cynthias_challenge.pory"
	msgbox Gamecube_Info_Text_0
# 138 "data/cynthias_challenge.pory"
	goto Motel_BattleSimulator
	return


Motel_BattleSimulator_Text_0:
# 2 "data/cynthias_challenge.pory"
	.string "It's a battle simulator!\n"
	.string "Want to use it?$"

CynthiasChallenge_Main_Text_0:
# 30 "data/cynthias_challenge.pory"
	.string "Welcome to Cynthia's Challenge!\n"
	.string "Please select a battle series.$"

CynthiasChallenge_Main_Text_1:
# 33 "data/cynthias_challenge.pory"
	.string "Gym Leaders Part 1$"

CynthiasChallenge_Main_Text_2:
# 36 "data/cynthias_challenge.pory"
	.string "Gym Leaders Part 1 - Complete!$"

CynthiasChallenge_Main_Text_3:
# 39 "data/cynthias_challenge.pory"
	.string "Gym Leaders Part 2$"

CynthiasChallenge_Main_Text_4:
# 42 "data/cynthias_challenge.pory"
	.string "Gym Leaders Part 2 - Complete!$"

CynthiasChallenge_Main_Text_5:
# 46 "data/cynthias_challenge.pory"
	.string "Sinnoh League$"

CynthiasChallenge_Main_Text_6:
# 49 "data/cynthias_challenge.pory"
	.string "Sinnoh League - Complete!$"

CynthiasChallenge_Series1_Text_0:
# 67 "data/cynthias_challenge.pory"
	.string "W-what? That can't be!\nMy buffed-up Pokémon!$"

CynthiasChallenge_Series1_Text_1:
# 69 "data/cynthias_challenge.pory"
	.string "Amazing!\nYou're very good, aren't you?$"

CynthiasChallenge_Series1_Text_2:
# 71 "data/cynthias_challenge.pory"
	.string "I shall admit defeat…\nYou are much too strong.$"

CynthiasChallenge_Series1_Text_3:
# 73 "data/cynthias_challenge.pory"
	.string "Hunwah! It's gone and ended!\nHow will I say this… I want more!\lI wanted to battle a lot more!$"

CynthiasChallenge_Series2_Text_0:
# 87 "data/cynthias_challenge.pory"
	.string "You are so fantastically strong.\nI know now why I have lost.$"

CynthiasChallenge_Series2_Text_1:
# 89 "data/cynthias_challenge.pory"
	.string "Hmm! My sturdy Pokémon, defeated!$"

CynthiasChallenge_Series2_Text_2:
# 91 "data/cynthias_challenge.pory"
	.string "I must say, I'm warmed up to you!\nI might even admire you a little.$"

CynthiasChallenge_Series2_Text_3:
# 93 "data/cynthias_challenge.pory"
	.string "You've got me beat…\nYour desire and the noble way your\lPokémon battled for you…\lI even felt thrilled during our match.\lThat was a very good battle.$"

CynthiasChallenge_Series3_Text_0:
# 107 "data/cynthias_challenge.pory"
	.string "I will now concede defeat. But I think\nyou came to see how great Bug-type\lPokémon can be. Battling is a deep and\lcomplex affair…$"

CynthiasChallenge_Series3_Text_1:
# 109 "data/cynthias_challenge.pory"
	.string "Well! Dear child, I must say, that was\nmost impressive. Your Pokémon believed\lin you and did their best to earn you\lthe win.$"

CynthiasChallenge_Series3_Text_2:
# 111 "data/cynthias_challenge.pory"
	.string "…! I wasn't expecting this! I wasn't\nlooking down on you… But I didn't think\lfor one second that I'd lose!$"

CynthiasChallenge_Series3_Text_3:
# 113 "data/cynthias_challenge.pory"
	.string "I see… You getting past the three\nbefore me was no fluke. Your power\lis real.$"

CynthiasChallenge_Series3_Text_4:
# 115 "data/cynthias_challenge.pory"
	.string "…Just a few moments ago, you were the\nmost powerful challenger. And just now,\lyou became the most powerful of all the\lTrainers.$"

CynthiasChallenge_Series3_Text_5:
# 123 "data/cynthias_challenge.pory"
	.string "{PLAYER} obtained\n3 Battle Points.$"

Gamecube_Info_Text_0:
# 132 "data/cynthias_challenge.pory"
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
# 141 "data/cynthias_challenge.pory"
	.string "Congratulations. You have completed\n"
	.string "the current series of battles.$"
