Motel_BattleSimulator_Intro::
# 2 "data/cynthias_challenge.pory"
	special SpawnCameraObject
# 3 "data/cynthias_challenge.pory"
	applymovement LOCALID_CAMERA, Common_Movement_WalkUp3
# 4 "data/cynthias_challenge.pory"
	waitmovement 0
# 5 "data/cynthias_challenge.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 6 "data/cynthias_challenge.pory"
	waitmovement 0
# 7 "data/cynthias_challenge.pory"
	msgbox Motel_BattleSimulator_Intro_Text_0, MSGBOX_DEFAULT
# 8 "data/cynthias_challenge.pory"
	closemessage
# 9 "data/cynthias_challenge.pory"
	delay 10
# 10 "data/cynthias_challenge.pory"
	applymovement LOCALID_PLAYER, Common_Movement_Smile
# 11 "data/cynthias_challenge.pory"
	playse SE_M_MORNING_SUN
# 12 "data/cynthias_challenge.pory"
	delay 60
# 13 "data/cynthias_challenge.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp3
# 14 "data/cynthias_challenge.pory"
	waitmovement 0
# 15 "data/cynthias_challenge.pory"
	special RemoveCameraObject
# 16 "data/cynthias_challenge.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp2
# 17 "data/cynthias_challenge.pory"
	waitmovement 0
# 18 "data/cynthias_challenge.pory"
	applymovement 1, Common_Movement_WalkInPlaceLeft
# 19 "data/cynthias_challenge.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight4
# 20 "data/cynthias_challenge.pory"
	waitmovement 0
# 21 "data/cynthias_challenge.pory"
	msgbox Motel_BattleSimulator_Intro_Text_1, MSGBOX_DEFAULT
# 22 "data/cynthias_challenge.pory"
	closemessage
# 23 "data/cynthias_challenge.pory"
	applymovement 1, Common_Movement_WalkInPlaceUp
# 24 "data/cynthias_challenge.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceUp
# 25 "data/cynthias_challenge.pory"
	waitmovement 0
# 26 "data/cynthias_challenge.pory"
	msgbox Motel_BattleSimulator_Intro_Text_2, MSGBOX_DEFAULT
# 27 "data/cynthias_challenge.pory"
	closemessage
# 28 "data/cynthias_challenge.pory"
	applymovement 1, Common_Movement_WalkInPlaceLeft
# 29 "data/cynthias_challenge.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceRight
# 30 "data/cynthias_challenge.pory"
	waitmovement 0
# 31 "data/cynthias_challenge.pory"
	msgbox Motel_BattleSimulator_Intro_Text_3, MSGBOX_DEFAULT
# 32 "data/cynthias_challenge.pory"
	closemessage
# 33 "data/cynthias_challenge.pory"
	applymovement 1, Common_Movement_WalkInPlaceUp
# 34 "data/cynthias_challenge.pory"
	waitmovement 0
# 35 "data/cynthias_challenge.pory"
	setflag FLAG_INTRODUCED_BATTLESIM
# 36 "data/cynthias_challenge.pory"
	setvar VAR_TEMP_5, 0
	return


Motel_BattleSimulator::
# 40 "data/cynthias_challenge.pory"
	msgbox Motel_BattleSimulator_Text_0, MSGBOX_DEFAULT
# 42 "data/cynthias_challenge.pory"
	dynmultichoice 0, 6, FALSE, 3, 0, DYN_MULTICHOICE_CB_NONE, gText_Yes, gText_Info, gText_No
# 43 "data/cynthias_challenge.pory"
	compare VAR_RESULT, 0
	goto_if_eq Motel_BattleSimulator_2
# 46 "data/cynthias_challenge.pory"
	compare VAR_RESULT, 1
	goto_if_eq Motel_BattleSimulator_3
Motel_BattleSimulator_1:
# 49 "data/cynthias_challenge.pory"
	clearflag FLAG_NO_MONEY_LOSS_ON_DEFEAT
# 50 "data/cynthias_challenge.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 51 "data/cynthias_challenge.pory"
	closemessage
	return

Motel_BattleSimulator_2:
# 44 "data/cynthias_challenge.pory"
	call CynthiasChallenge_Main
	goto Motel_BattleSimulator_1

Motel_BattleSimulator_3:
# 47 "data/cynthias_challenge.pory"
	call Gamecube_Info
	goto Motel_BattleSimulator_1


CynthiasChallenge_Main::
# 64 "data/cynthias_challenge.pory"
	setflag FLAG_NO_MONEY_LOSS_ON_DEFEAT
# 65 "data/cynthias_challenge.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 66 "data/cynthias_challenge.pory"
	setvar VAR_0x8000, MUGSHOT_CYNTHIAS_CHALLENGE
# 67 "data/cynthias_challenge.pory"
	callnative DrawMugshot
# 68 "data/cynthias_challenge.pory"
	msgbox CynthiasChallenge_Main_Text_0
# 70 "data/cynthias_challenge.pory"
	goto_if_unset FLAG_BATTLESIM_DISC_1_1, CynthiasChallenge_Main_2
# 74 "data/cynthias_challenge.pory"
	dynmultipush CynthiasChallenge_Main_Text_2, 0
CynthiasChallenge_Main_1:
# 76 "data/cynthias_challenge.pory"
	goto_if_unset FLAG_BATTLESIM_DISC_1_2, CynthiasChallenge_Main_6
# 80 "data/cynthias_challenge.pory"
	dynmultipush CynthiasChallenge_Main_Text_4, 1
CynthiasChallenge_Main_5:
# 82 "data/cynthias_challenge.pory"
	goto_if_set FLAG_BATTLESIM_DISC_1_1, CynthiasChallenge_Main_11
CynthiasChallenge_Main_9:
# 90 "data/cynthias_challenge.pory"
	dynmultistack 0, 6, FALSE, 3, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 91 "data/cynthias_challenge.pory"
	callnative ClearMugshot
# 92 "data/cynthias_challenge.pory"
	switch VAR_RESULT
# 93 "data/cynthias_challenge.pory"
	case 0, CynthiasChallenge_Main_15
# 95 "data/cynthias_challenge.pory"
	case 1, CynthiasChallenge_Main_16
# 97 "data/cynthias_challenge.pory"
	case 2, CynthiasChallenge_Main_17
	return

CynthiasChallenge_Main_2:
# 71 "data/cynthias_challenge.pory"
	dynmultipush CynthiasChallenge_Main_Text_1, 0
	goto CynthiasChallenge_Main_1

CynthiasChallenge_Main_6:
# 77 "data/cynthias_challenge.pory"
	dynmultipush CynthiasChallenge_Main_Text_3, 1
	goto CynthiasChallenge_Main_5

CynthiasChallenge_Main_10:
# 83 "data/cynthias_challenge.pory"
	goto_if_unset FLAG_BATTLESIM_DISC_1_3, CynthiasChallenge_Main_19
# 87 "data/cynthias_challenge.pory"
	dynmultipush CynthiasChallenge_Main_Text_6, 2
	goto CynthiasChallenge_Main_9

CynthiasChallenge_Main_11:
# 82 "data/cynthias_challenge.pory"
	goto_if_set FLAG_BATTLESIM_DISC_1_2, CynthiasChallenge_Main_10
	goto CynthiasChallenge_Main_9

CynthiasChallenge_Main_15:
# 94 "data/cynthias_challenge.pory"
	call CynthiasChallenge_Series1
	return

CynthiasChallenge_Main_16:
# 96 "data/cynthias_challenge.pory"
	call CynthiasChallenge_Series2
	return

CynthiasChallenge_Main_17:
# 98 "data/cynthias_challenge.pory"
	call CynthiasChallenge_Series3
	return

CynthiasChallenge_Main_19:
# 84 "data/cynthias_challenge.pory"
	dynmultipush CynthiasChallenge_Main_Text_5, 2
	goto CynthiasChallenge_Main_9


CynthiasChallenge_Series1::
# 105 "data/cynthias_challenge.pory"
	trainerbattle_no_intro TRAINER_SIMULATOR_ROARK, CynthiasChallenge_Series1_Text_0
# 106 "data/cynthias_challenge.pory"
	special HealPlayerParty
# 107 "data/cynthias_challenge.pory"
	trainerbattle_no_intro TRAINER_SIMULATOR_GARDENIA, CynthiasChallenge_Series1_Text_1
# 108 "data/cynthias_challenge.pory"
	special HealPlayerParty
# 109 "data/cynthias_challenge.pory"
	trainerbattle_no_intro TRAINER_SIMULATOR_MAYLENE, CynthiasChallenge_Series1_Text_2
# 110 "data/cynthias_challenge.pory"
	special HealPlayerParty
# 111 "data/cynthias_challenge.pory"
	trainerbattle_no_intro TRAINER_SIMULATOR_WAKE, CynthiasChallenge_Series1_Text_3
# 112 "data/cynthias_challenge.pory"
	special HealPlayerParty
# 113 "data/cynthias_challenge.pory"
	msgbox Gamecube_Text_Congratulations, MSGBOX_DEFAULT
# 114 "data/cynthias_challenge.pory"
	goto_if_unset FLAG_BATTLESIM_DISC_1_1, CynthiasChallenge_Series1_1
# 120 "data/cynthias_challenge.pory"
	giveitem ITEM_BALM_MUSHROOM, 1
	return

CynthiasChallenge_Series1_1:
# 115 "data/cynthias_challenge.pory"
	giveitem ITEM_STELLAR_TERA_SHARD, 2
# 116 "data/cynthias_challenge.pory"
	giveitem ITEM_EXP_CANDY_L, 2
# 117 "data/cynthias_challenge.pory"
	setflag FLAG_BATTLESIM_DISC_1_1
	return


CynthiasChallenge_Series2::
# 125 "data/cynthias_challenge.pory"
	trainerbattle_no_intro TRAINER_SIMULATOR_FANTINA, CynthiasChallenge_Series2_Text_0
# 126 "data/cynthias_challenge.pory"
	special HealPlayerParty
# 127 "data/cynthias_challenge.pory"
	trainerbattle_no_intro TRAINER_SIMULATOR_BYRON, CynthiasChallenge_Series2_Text_1
# 128 "data/cynthias_challenge.pory"
	special HealPlayerParty
# 129 "data/cynthias_challenge.pory"
	trainerbattle_no_intro TRAINER_SIMULATOR_CANDICE, CynthiasChallenge_Series2_Text_2
# 130 "data/cynthias_challenge.pory"
	special HealPlayerParty
# 131 "data/cynthias_challenge.pory"
	trainerbattle_no_intro TRAINER_SIMULATOR_VOLKNER, CynthiasChallenge_Series2_Text_3
# 132 "data/cynthias_challenge.pory"
	special HealPlayerParty
# 133 "data/cynthias_challenge.pory"
	msgbox Gamecube_Text_Congratulations, MSGBOX_DEFAULT
# 134 "data/cynthias_challenge.pory"
	goto_if_unset FLAG_BATTLESIM_DISC_1_2, CynthiasChallenge_Series2_1
# 140 "data/cynthias_challenge.pory"
	giveitem ITEM_BALM_MUSHROOM, 1
	return

CynthiasChallenge_Series2_1:
# 135 "data/cynthias_challenge.pory"
	giveitem ITEM_STELLAR_TERA_SHARD, 2
# 136 "data/cynthias_challenge.pory"
	giveitem ITEM_EXP_CANDY_L, 2
# 137 "data/cynthias_challenge.pory"
	setflag FLAG_BATTLESIM_DISC_1_2
	return


CynthiasChallenge_Series3::
# 145 "data/cynthias_challenge.pory"
	trainerbattle_no_intro TRAINER_SIMULATOR_AARON, CynthiasChallenge_Series3_Text_0
# 146 "data/cynthias_challenge.pory"
	special HealPlayerParty
# 147 "data/cynthias_challenge.pory"
	trainerbattle_no_intro TRAINER_SIMULATOR_BERTHA, CynthiasChallenge_Series3_Text_1
# 148 "data/cynthias_challenge.pory"
	special HealPlayerParty
# 149 "data/cynthias_challenge.pory"
	trainerbattle_no_intro TRAINER_SIMULATOR_FLINT, CynthiasChallenge_Series3_Text_2
# 150 "data/cynthias_challenge.pory"
	special HealPlayerParty
# 151 "data/cynthias_challenge.pory"
	trainerbattle_no_intro TRAINER_SIMULATOR_LUCIAN, CynthiasChallenge_Series3_Text_3
# 152 "data/cynthias_challenge.pory"
	special HealPlayerParty
# 153 "data/cynthias_challenge.pory"
	trainerbattle_no_intro TRAINER_SIMULATOR_CYNTHIA, CynthiasChallenge_Series3_Text_4
# 154 "data/cynthias_challenge.pory"
	special HealPlayerParty
# 155 "data/cynthias_challenge.pory"
	msgbox Gamecube_Text_Congratulations, MSGBOX_DEFAULT
# 156 "data/cynthias_challenge.pory"
	goto_if_unset FLAG_BATTLESIM_DISC_1_3, CynthiasChallenge_Series3_1
# 165 "data/cynthias_challenge.pory"
	giveitem ITEM_PEARL_STRING, 1
	return

CynthiasChallenge_Series3_1:
# 157 "data/cynthias_challenge.pory"
	giveitem ITEM_SHINY_LURE, 1
# 158 "data/cynthias_challenge.pory"
	giveitem ITEM_EXP_CANDY_XL, 2
# 159 "data/cynthias_challenge.pory"
	setvar VAR_0x8004, 5
# 160 "data/cynthias_challenge.pory"
	special GiveFrontierBattlePoints
# 161 "data/cynthias_challenge.pory"
	msgbox CynthiasChallenge_Series3_Text_5, MSGBOX_GETPOINTS
# 162 "data/cynthias_challenge.pory"
	setflag FLAG_BATTLESIM_DISC_1_3
	return


Gamecube_Info::
# 170 "data/cynthias_challenge.pory"
	msgbox Gamecube_Info_Text_0
# 176 "data/cynthias_challenge.pory"
	goto Motel_BattleSimulator
	return


Motel_BattleSimulator_Intro_Text_0:
# 7 "data/cynthias_challenge.pory"
	.string "Oh, hey!\nAre you {PLAYER}?$"

Motel_BattleSimulator_Intro_Text_1:
# 21 "data/cynthias_challenge.pory"
	.string "The group that checked in this morning\nleft this thing here for someone named\l{PLAYER}. That must be you then.$"

Motel_BattleSimulator_Intro_Text_2:
# 26 "data/cynthias_challenge.pory"
	.string "They said it's a battle simulator.\pComes with its own instructions and\neverything!\pI'd love to use that sort of thing,\nbut we've got no Pokémon here.$"

Motel_BattleSimulator_Intro_Text_3:
# 31 "data/cynthias_challenge.pory"
	.string "Feel free to use it whenever you're\nhere…\pJust try not to interrupt my TV time!$"

Motel_BattleSimulator_Text_0:
# 40 "data/cynthias_challenge.pory"
	.string "It's a battle simulator!\n"
	.string "Want to use it?$"

CynthiasChallenge_Main_Text_0:
# 68 "data/cynthias_challenge.pory"
	.string "Welcome to Cynthia's Challenge!\n"
	.string "Please select a battle series.$"

CynthiasChallenge_Main_Text_1:
# 71 "data/cynthias_challenge.pory"
	.string "Gym Leaders Part 1$"

CynthiasChallenge_Main_Text_2:
# 74 "data/cynthias_challenge.pory"
	.string "Gym Leaders Part 1 - Complete!$"

CynthiasChallenge_Main_Text_3:
# 77 "data/cynthias_challenge.pory"
	.string "Gym Leaders Part 2$"

CynthiasChallenge_Main_Text_4:
# 80 "data/cynthias_challenge.pory"
	.string "Gym Leaders Part 2 - Complete!$"

CynthiasChallenge_Main_Text_5:
# 84 "data/cynthias_challenge.pory"
	.string "Sinnoh League$"

CynthiasChallenge_Main_Text_6:
# 87 "data/cynthias_challenge.pory"
	.string "Sinnoh League - Complete!$"

CynthiasChallenge_Series1_Text_0:
# 105 "data/cynthias_challenge.pory"
	.string "W-what? That can't be!\nMy buffed-up Pokémon!$"

CynthiasChallenge_Series1_Text_1:
# 107 "data/cynthias_challenge.pory"
	.string "Amazing!\nYou're very good, aren't you?$"

CynthiasChallenge_Series1_Text_2:
# 109 "data/cynthias_challenge.pory"
	.string "I shall admit defeat…\nYou are much too strong.$"

CynthiasChallenge_Series1_Text_3:
# 111 "data/cynthias_challenge.pory"
	.string "Hunwah! It's gone and ended!\nHow will I say this… I want more!\lI wanted to battle a lot more!$"

CynthiasChallenge_Series2_Text_0:
# 125 "data/cynthias_challenge.pory"
	.string "You are so fantastically strong.\nI know now why I have lost.$"

CynthiasChallenge_Series2_Text_1:
# 127 "data/cynthias_challenge.pory"
	.string "Hmm! My sturdy Pokémon, defeated!$"

CynthiasChallenge_Series2_Text_2:
# 129 "data/cynthias_challenge.pory"
	.string "I must say, I'm warmed up to you!\nI might even admire you a little.$"

CynthiasChallenge_Series2_Text_3:
# 131 "data/cynthias_challenge.pory"
	.string "You've got me beat…\nYour desire and the noble way your\lPokémon battled for you…\lI even felt thrilled during our match.\lThat was a very good battle.$"

CynthiasChallenge_Series3_Text_0:
# 145 "data/cynthias_challenge.pory"
	.string "I will now concede defeat. But I think\nyou came to see how great Bug-type\lPokémon can be. Battling is a deep and\lcomplex affair…$"

CynthiasChallenge_Series3_Text_1:
# 147 "data/cynthias_challenge.pory"
	.string "Well! Dear child, I must say, that was\nmost impressive. Your Pokémon believed\lin you and did their best to earn you\lthe win.$"

CynthiasChallenge_Series3_Text_2:
# 149 "data/cynthias_challenge.pory"
	.string "…! I wasn't expecting this! I wasn't\nlooking down on you… But I didn't think\lfor one second that I'd lose!$"

CynthiasChallenge_Series3_Text_3:
# 151 "data/cynthias_challenge.pory"
	.string "I see… You getting past the three\nbefore me was no fluke. Your power\lis real.$"

CynthiasChallenge_Series3_Text_4:
# 153 "data/cynthias_challenge.pory"
	.string "…Just a few moments ago, you were the\nmost powerful challenger. And just now,\lyou became the most powerful of all the\lTrainers.$"

CynthiasChallenge_Series3_Text_5:
# 161 "data/cynthias_challenge.pory"
	.string "{PLAYER} obtained\n3 Battle Points.$"

Gamecube_Info_Text_0:
# 170 "data/cynthias_challenge.pory"
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
# 179 "data/cynthias_challenge.pory"
	.string "Congratulations. You have completed\n"
	.string "the current series of battles.$"
