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
# 97 "data/cynthias_challenge.pory"
	case 1, CynthiasChallenge_Main_16
# 101 "data/cynthias_challenge.pory"
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
	fadeoutbgm 0
# 95 "data/cynthias_challenge.pory"
	fadescreen FADE_TO_BLACK
# 96 "data/cynthias_challenge.pory"
	warpcontinuescript MAP_LILYCOVE_CITY_BATTLE_SIMULATOR, 1, 2, CynthiasChallenge_Series1
	return

CynthiasChallenge_Main_16:
# 98 "data/cynthias_challenge.pory"
	fadeoutbgm 0
# 99 "data/cynthias_challenge.pory"
	fadescreen FADE_TO_BLACK
# 100 "data/cynthias_challenge.pory"
	warpcontinuescript MAP_LILYCOVE_CITY_BATTLE_SIMULATOR, 1, 2, CynthiasChallenge_Series2
	return

CynthiasChallenge_Main_17:
# 102 "data/cynthias_challenge.pory"
	fadeoutbgm 0
# 103 "data/cynthias_challenge.pory"
	fadescreen FADE_TO_BLACK
# 104 "data/cynthias_challenge.pory"
	warpcontinuescript MAP_LILYCOVE_CITY_BATTLE_SIMULATOR, 1, 2, CynthiasChallenge_Series3
	return

CynthiasChallenge_Main_19:
# 84 "data/cynthias_challenge.pory"
	dynmultipush CynthiasChallenge_Main_Text_5, 2
	goto CynthiasChallenge_Main_9


Gamecube_Info::
# 112 "data/cynthias_challenge.pory"
	msgbox Gamecube_Info_Text_0
# 118 "data/cynthias_challenge.pory"
	goto Motel_BattleSimulator
	return


Motel_BattleSimulator_FirstTrainer::
# 136 "data/cynthias_challenge.pory"
	fadescreen FADE_FROM_BLACK
# 137 "data/cynthias_challenge.pory"
	delay 20
# 138 "data/cynthias_challenge.pory"
	special HealPlayerParty
# 139 "data/cynthias_challenge.pory"
	speakername Text_System
# 140 "data/cynthias_challenge.pory"
	msgbox Motel_BattleSimulator_FirstTrainer_Text_0, MSGBOX_AUTOCLOSE
	return


Motel_BattleSimulator_SecondTrainer::
# 144 "data/cynthias_challenge.pory"
	special HealPlayerParty
# 145 "data/cynthias_challenge.pory"
	speakername Text_System
# 146 "data/cynthias_challenge.pory"
	msgbox Motel_BattleSimulator_SecondTrainer_Text_0, MSGBOX_AUTOCLOSE
	return


Motel_BattleSimulator_ThirdTrainer::
# 150 "data/cynthias_challenge.pory"
	special HealPlayerParty
# 151 "data/cynthias_challenge.pory"
	speakername Text_System
# 152 "data/cynthias_challenge.pory"
	msgbox Motel_BattleSimulator_ThirdTrainer_Text_0, MSGBOX_AUTOCLOSE
	return


Motel_BattleSimulator_FourthTrainer::
# 156 "data/cynthias_challenge.pory"
	special HealPlayerParty
# 157 "data/cynthias_challenge.pory"
	speakername Text_System
# 158 "data/cynthias_challenge.pory"
	msgbox Motel_BattleSimulator_FourthTrainer_Text_0, MSGBOX_AUTOCLOSE
	return


Motel_BattleSimulator_FinalTrainer::
# 162 "data/cynthias_challenge.pory"
	special HealPlayerParty
# 163 "data/cynthias_challenge.pory"
	speakername Text_System
# 164 "data/cynthias_challenge.pory"
	msgbox Motel_BattleSimulator_FinalTrainer_Text_0, MSGBOX_AUTOCLOSE
	return


Motel_BattleSimulator_Congratulations::
# 168 "data/cynthias_challenge.pory"
	special HealPlayerParty
# 169 "data/cynthias_challenge.pory"
	speakername Text_System
# 170 "data/cynthias_challenge.pory"
	msgbox Gamecube_Text_Congratulations, MSGBOX_AUTOCLOSE
	return


Motel_BattleSimulator_ExitSimulation::
# 174 "data/cynthias_challenge.pory"
	speakername Text_System
# 175 "data/cynthias_challenge.pory"
	msgbox Gamecube_Text_ExitingSim, MSGBOX_AUTOCLOSE
# 176 "data/cynthias_challenge.pory"
	warp MAP_LILYCOVE_CITY_COVE_LILY_MOTEL_1F, 9, 2
	return


CynthiasChallenge_Series1::
# 181 "data/cynthias_challenge.pory"
	call Motel_BattleSimulator_FirstTrainer
# 182 "data/cynthias_challenge.pory"
	trainerbattle_no_intro TRAINER_SIMULATOR_ROARK, CynthiasChallenge_Series1_Text_0
# 183 "data/cynthias_challenge.pory"
	call Motel_BattleSimulator_SecondTrainer
# 184 "data/cynthias_challenge.pory"
	trainerbattle_no_intro TRAINER_SIMULATOR_GARDENIA, CynthiasChallenge_Series1_Text_1
# 185 "data/cynthias_challenge.pory"
	call Motel_BattleSimulator_ThirdTrainer
# 186 "data/cynthias_challenge.pory"
	trainerbattle_no_intro TRAINER_SIMULATOR_MAYLENE, CynthiasChallenge_Series1_Text_2
# 187 "data/cynthias_challenge.pory"
	call Motel_BattleSimulator_FinalTrainer
# 188 "data/cynthias_challenge.pory"
	trainerbattle_no_intro TRAINER_SIMULATOR_WAKE, CynthiasChallenge_Series1_Text_3
# 189 "data/cynthias_challenge.pory"
	call Motel_BattleSimulator_Congratulations
# 190 "data/cynthias_challenge.pory"
	goto_if_unset FLAG_BATTLESIM_DISC_1_1, CynthiasChallenge_Series1_2
# 196 "data/cynthias_challenge.pory"
	giveitem ITEM_BALM_MUSHROOM, 1
CynthiasChallenge_Series1_1:
# 198 "data/cynthias_challenge.pory"
	goto Motel_BattleSimulator_ExitSimulation
	return

CynthiasChallenge_Series1_2:
# 191 "data/cynthias_challenge.pory"
	giveitem ITEM_STELLAR_TERA_SHARD, 2
# 192 "data/cynthias_challenge.pory"
	giveitem ITEM_EXP_CANDY_L, 2
# 193 "data/cynthias_challenge.pory"
	setflag FLAG_BATTLESIM_DISC_1_1
	goto CynthiasChallenge_Series1_1


CynthiasChallenge_Series2::
# 202 "data/cynthias_challenge.pory"
	call Motel_BattleSimulator_FirstTrainer
# 203 "data/cynthias_challenge.pory"
	trainerbattle_no_intro TRAINER_SIMULATOR_FANTINA, CynthiasChallenge_Series2_Text_0
# 204 "data/cynthias_challenge.pory"
	call Motel_BattleSimulator_SecondTrainer
# 205 "data/cynthias_challenge.pory"
	trainerbattle_no_intro TRAINER_SIMULATOR_BYRON, CynthiasChallenge_Series2_Text_1
# 206 "data/cynthias_challenge.pory"
	call Motel_BattleSimulator_ThirdTrainer
# 207 "data/cynthias_challenge.pory"
	trainerbattle_no_intro TRAINER_SIMULATOR_CANDICE, CynthiasChallenge_Series2_Text_2
# 208 "data/cynthias_challenge.pory"
	call Motel_BattleSimulator_FinalTrainer
# 209 "data/cynthias_challenge.pory"
	trainerbattle_no_intro TRAINER_SIMULATOR_VOLKNER, CynthiasChallenge_Series2_Text_3
# 210 "data/cynthias_challenge.pory"
	call Motel_BattleSimulator_Congratulations
# 211 "data/cynthias_challenge.pory"
	goto_if_unset FLAG_BATTLESIM_DISC_1_2, CynthiasChallenge_Series2_2
# 217 "data/cynthias_challenge.pory"
	giveitem ITEM_BALM_MUSHROOM, 1
CynthiasChallenge_Series2_1:
# 219 "data/cynthias_challenge.pory"
	goto Motel_BattleSimulator_ExitSimulation
	return

CynthiasChallenge_Series2_2:
# 212 "data/cynthias_challenge.pory"
	giveitem ITEM_STELLAR_TERA_SHARD, 2
# 213 "data/cynthias_challenge.pory"
	giveitem ITEM_EXP_CANDY_L, 2
# 214 "data/cynthias_challenge.pory"
	setflag FLAG_BATTLESIM_DISC_1_2
	goto CynthiasChallenge_Series2_1


CynthiasChallenge_Series3::
# 223 "data/cynthias_challenge.pory"
	call Motel_BattleSimulator_FirstTrainer
# 224 "data/cynthias_challenge.pory"
	trainerbattle_no_intro TRAINER_SIMULATOR_AARON, CynthiasChallenge_Series3_Text_0
# 225 "data/cynthias_challenge.pory"
	call Motel_BattleSimulator_SecondTrainer
# 226 "data/cynthias_challenge.pory"
	trainerbattle_no_intro TRAINER_SIMULATOR_BERTHA, CynthiasChallenge_Series3_Text_1
# 227 "data/cynthias_challenge.pory"
	call Motel_BattleSimulator_ThirdTrainer
# 228 "data/cynthias_challenge.pory"
	trainerbattle_no_intro TRAINER_SIMULATOR_FLINT, CynthiasChallenge_Series3_Text_2
# 229 "data/cynthias_challenge.pory"
	call Motel_BattleSimulator_FourthTrainer
# 230 "data/cynthias_challenge.pory"
	trainerbattle_no_intro TRAINER_SIMULATOR_LUCIAN, CynthiasChallenge_Series3_Text_3
# 231 "data/cynthias_challenge.pory"
	call Motel_BattleSimulator_FinalTrainer
# 232 "data/cynthias_challenge.pory"
	trainerbattle_no_intro TRAINER_SIMULATOR_CYNTHIA, CynthiasChallenge_Series3_Text_4
# 233 "data/cynthias_challenge.pory"
	call Motel_BattleSimulator_Congratulations
# 234 "data/cynthias_challenge.pory"
	goto_if_unset FLAG_BATTLESIM_DISC_1_3, CynthiasChallenge_Series3_2
# 243 "data/cynthias_challenge.pory"
	giveitem ITEM_PEARL_STRING, 1
CynthiasChallenge_Series3_1:
# 245 "data/cynthias_challenge.pory"
	goto Motel_BattleSimulator_ExitSimulation
	return

CynthiasChallenge_Series3_2:
# 235 "data/cynthias_challenge.pory"
	giveitem ITEM_SHINY_LURE, 1
# 236 "data/cynthias_challenge.pory"
	giveitem ITEM_EXP_CANDY_XL, 2
# 237 "data/cynthias_challenge.pory"
	setvar VAR_0x8004, 5
# 238 "data/cynthias_challenge.pory"
	special GiveFrontierBattlePoints
# 239 "data/cynthias_challenge.pory"
	msgbox PlayerObtained3BattlePoints, MSGBOX_GETPOINTS
# 240 "data/cynthias_challenge.pory"
	setflag FLAG_BATTLESIM_DISC_1_3
	goto CynthiasChallenge_Series3_1


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

Gamecube_Info_Text_0:
# 112 "data/cynthias_challenge.pory"
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

Motel_BattleSimulator_FirstTrainer_Text_0:
# 140 "data/cynthias_challenge.pory"
	.string "First trainer.\nInitializing…\l… … …$"

Motel_BattleSimulator_SecondTrainer_Text_0:
# 146 "data/cynthias_challenge.pory"
	.string "Second trainer.\nInitializing…\l… … …$"

Motel_BattleSimulator_ThirdTrainer_Text_0:
# 152 "data/cynthias_challenge.pory"
	.string "Third trainer.\nInitializing…\l… … …$"

Motel_BattleSimulator_FourthTrainer_Text_0:
# 158 "data/cynthias_challenge.pory"
	.string "Fourth trainer.\nInitializing…\l… … …$"

Motel_BattleSimulator_FinalTrainer_Text_0:
# 164 "data/cynthias_challenge.pory"
	.string "Final trainer.\nInitializing…\l… … …$"

CynthiasChallenge_Series1_Text_0:
# 182 "data/cynthias_challenge.pory"
	.string "W-what? That can't be!\nMy buffed-up Pokémon!$"

CynthiasChallenge_Series1_Text_1:
# 184 "data/cynthias_challenge.pory"
	.string "Amazing!\nYou're very good, aren't you?$"

CynthiasChallenge_Series1_Text_2:
# 186 "data/cynthias_challenge.pory"
	.string "I shall admit defeat…\nYou are much too strong.$"

CynthiasChallenge_Series1_Text_3:
# 188 "data/cynthias_challenge.pory"
	.string "Hunwah! It's gone and ended!\nHow will I say this… I want more!\lI wanted to battle a lot more!$"

CynthiasChallenge_Series2_Text_0:
# 203 "data/cynthias_challenge.pory"
	.string "You are so fantastically strong.\nI know now why I have lost.$"

CynthiasChallenge_Series2_Text_1:
# 205 "data/cynthias_challenge.pory"
	.string "Hmm! My sturdy Pokémon, defeated!$"

CynthiasChallenge_Series2_Text_2:
# 207 "data/cynthias_challenge.pory"
	.string "I must say, I'm warmed up to you!\nI might even admire you a little.$"

CynthiasChallenge_Series2_Text_3:
# 209 "data/cynthias_challenge.pory"
	.string "You've got me beat…\nYour desire and the noble way your\lPokémon battled for you…\lI even felt thrilled during our match.\lThat was a very good battle.$"

CynthiasChallenge_Series3_Text_0:
# 224 "data/cynthias_challenge.pory"
	.string "I will now concede defeat. But I think\nyou came to see how great Bug-type\lPokémon can be. Battling is a deep and\lcomplex affair…$"

CynthiasChallenge_Series3_Text_1:
# 226 "data/cynthias_challenge.pory"
	.string "Well! Dear child, I must say, that was\nmost impressive. Your Pokémon believed\lin you and did their best to earn you\lthe win.$"

CynthiasChallenge_Series3_Text_2:
# 228 "data/cynthias_challenge.pory"
	.string "…! I wasn't expecting this! I wasn't\nlooking down on you… But I didn't think\lfor one second that I'd lose!$"

CynthiasChallenge_Series3_Text_3:
# 230 "data/cynthias_challenge.pory"
	.string "I see… You getting past the three\nbefore me was no fluke. Your power\lis real.$"

CynthiasChallenge_Series3_Text_4:
# 232 "data/cynthias_challenge.pory"
	.string "…Just a few moments ago, you were the\nmost powerful challenger. And just now,\lyou became the most powerful of all the\lTrainers.$"

Gamecube_Text_Congratulations::
# 121 "data/cynthias_challenge.pory"
	.string "Congratulations. You have completed\n"
	.string "the current series of battles.$"

PlayerObtained3BattlePoints::
# 126 "data/cynthias_challenge.pory"
	.string "{PLAYER} obtained\n3 Battle Points.$"

Gamecube_Text_ExitingSim::
# 130 "data/cynthias_challenge.pory"
	.string "Closing simulation…\n"
	.string "Don't turn off the power…$"
