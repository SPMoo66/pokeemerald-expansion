RustboroCity_Gym_EventScript_Roxanne::
# 4 "data/gym_leaders.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 5 "data/gym_leaders.pory"
	trainerbattle_single TRAINER_ROXANNE_1, RustboroCity_Gym_Text_RoxanneIntro, RustboroCity_Gym_Text_RoxanneDefeat, RustboroCity_Gym_EventScript_RoxanneDefeated, NO_MUSIC
# 6 "data/gym_leaders.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 7 "data/gym_leaders.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq RustboroCity_Gym_EventScript_Roxanne_2
RustboroCity_Gym_EventScript_Roxanne_1:
# 10 "data/gym_leaders.pory"
	msgbox RustboroCity_Gym_Text_RoxannePostBattle, MSGBOX_DEFAULT
# 11 "data/gym_leaders.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 12 "data/gym_leaders.pory"
	release
	return

RustboroCity_Gym_EventScript_Roxanne_2:
# 8 "data/gym_leaders.pory"
	goto RustboroCity_Gym_EventScript_RoxanneRematch
	goto RustboroCity_Gym_EventScript_Roxanne_1


RustboroCity_Gym_EventScript_RoxanneDefeated::
# 16 "data/gym_leaders.pory"
	message RustboroCity_Gym_Text_ReceivedStoneBadge
# 17 "data/gym_leaders.pory"
	waitmessage
# 18 "data/gym_leaders.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 19 "data/gym_leaders.pory"
	msgbox RustboroCity_Gym_Text_StoneBadgeInfoTakeThis, MSGBOX_DEFAULT
# 20 "data/gym_leaders.pory"
	setflag FLAG_DEFEATED_RUSTBORO_GYM
# 21 "data/gym_leaders.pory"
	setflag FLAG_BADGE01_GET
# 22 "data/gym_leaders.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 1
# 23 "data/gym_leaders.pory"
	addvar VAR_PETALBURG_GYM_STATE, 1
# 24 "data/gym_leaders.pory"
	setvar VAR_0x8008, 1
# 25 "data/gym_leaders.pory"
	call Common_EventScript_SetGymTrainers
# 26 "data/gym_leaders.pory"
	compare VAR_PETALBURG_GYM_STATE, 6
	goto_if_eq RustboroCity_Gym_EventScript_RoxanneDefeated_2
RustboroCity_Gym_EventScript_RoxanneDefeated_1:
# 29 "data/gym_leaders.pory"
	giveitem ITEM_TM_SMACK_DOWN
# 30 "data/gym_leaders.pory"
	msgbox RustboroCity_Gym_Text_ExplainSmackDown, MSGBOX_DEFAULT
# 31 "data/gym_leaders.pory"
	release
	return

RustboroCity_Gym_EventScript_RoxanneDefeated_2:
# 27 "data/gym_leaders.pory"
	call Common_EventScript_ReadyPetalburgGymForBattle
	goto RustboroCity_Gym_EventScript_RoxanneDefeated_1


RustboroCity_Gym_EventScript_RoxanneRematch::
# 35 "data/gym_leaders.pory"
	trainerbattle_rematch_double TRAINER_ROXANNE_1, RustboroCity_Gym_Text_RoxannePreRematch, RustboroCity_Gym_Text_RoxanneRematchDefeat, RustboroCity_Gym_Text_RoxanneRematchNeedTwoMons
# 36 "data/gym_leaders.pory"
	msgbox RustboroCity_Gym_Text_RoxannePostRematch, MSGBOX_AUTOCLOSE
	return


RustboroCity_Gym_EventScript_RegisterRoxanne::
# 40 "data/gym_leaders.pory"
	lockall
# 41 "data/gym_leaders.pory"
	pokenavcall RustboroCity_Gym_Text_RoxanneRegisterCall
# 42 "data/gym_leaders.pory"
	waitmessage
# 43 "data/gym_leaders.pory"
	delay 30
# 44 "data/gym_leaders.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 45 "data/gym_leaders.pory"
	msgbox RustboroCity_Gym_Text_RegisteredRoxanne, MSGBOX_DEFAULT
# 46 "data/gym_leaders.pory"
	waitfanfare
# 47 "data/gym_leaders.pory"
	closemessage
# 48 "data/gym_leaders.pory"
	delay 30
# 49 "data/gym_leaders.pory"
	setflag FLAG_ENABLE_ROXANNE_MATCH_CALL
# 50 "data/gym_leaders.pory"
	clearflag FLAG_ENABLE_ROXANNE_FIRST_CALL
# 51 "data/gym_leaders.pory"
	releaseall
	return


RustboroCity_Gym_Text_RoxanneIntro::
# 55 "data/gym_leaders.pory"
	.string "Hello, I am Roxanne, the Rustboro\n"
	.string "Pokémon Gym Leader.\p"
	.string "I became a Gym Leader so that I might\n"
	.string "apply what I learned at the Pokémon\l"
	.string "Trainer's School in battle.\p"
	.string "Would you kindly demonstrate how you\n"
	.string "battle, and with which Pokémon?$"

RustboroCity_Gym_Text_RoxanneDefeat::
# 65 "data/gym_leaders.pory"
	.string "So…\n"
	.string "I lost…\p"
	.string "It seems that I still have much more\n"
	.string "to learn…\p"
	.string "I understand.\p"
	.string "The Pokémon League's rules state\n"
	.string "that Trainers are to be given this\l"
	.string "if they defeat a Gym Leader.\p"
	.string "Please accept the official Pokémon\n"
	.string "League Stone Badge.$"

RustboroCity_Gym_Text_ReceivedStoneBadge::
# 78 "data/gym_leaders.pory"
	.string "{PLAYER} received the Stone Badge\n"
	.string "from Roxanne.$"

RustboroCity_Gym_Text_StoneBadgeInfoTakeThis::
# 83 "data/gym_leaders.pory"
	.string "The Stone Badge enables the use of\n"
	.string "Cut outside of battle.\p"
	.string "Please take this with you, too.$"

RustboroCity_Gym_Text_ExplainSmackDown::
# 89 "data/gym_leaders.pory"
	.string "That Technical Machine, TM96,\n"
	.string "contains Smack Down.\p"
	.string "It not only inflicts damage by throwing\n"
	.string "rocks, it also grounds flying targets.\p"
	.string "If you use a TM, it instantly teaches\n"
	.string "the move to a Pokémon.\p"
	.string "Remember, a TM can be used multiple\n"
	.string "times.$"

RustboroCity_Gym_Text_RoxannePostBattle::
# 100 "data/gym_leaders.pory"
	.string "Since you are so strong, you should\n"
	.string "challenge other Gym Leaders.\p"
	.string "By battling many Trainers, you should\n"
	.string "learn many things.$"

RustboroCity_Gym_Text_RoxanneRegisterCall::
# 107 "data/gym_leaders.pory"
	.string "… … … … … …\n"
	.string "… … … … … Beep!\p"
	.string "Roxanne: Oh, hello, {PLAYER}?\n"
	.string "This is Roxanne of Rustboro City.\p"
	.string "I heard from Brawly that you're\n"
	.string "moving up through the ranks of\l"
	.string "Trainers at an incredible clip.\p"
	.string "Well, I'd rather not think that\n"
	.string "I can't beat you.\p"
	.string "I promise, I will shape up my Gym\n"
	.string "so that you may challenge us again.\p"
	.string "I hope you'll be looking forward to\n"
	.string "that occasion as much as me!\p"
	.string "… … … … … …\n"
	.string "… … … … … Click!$"

RustboroCity_Gym_Text_RegisteredRoxanne::
# 125 "data/gym_leaders.pory"
	.string "Registered Gym Leader Roxanne\n"
	.string "in the Pokénav.$"

RustboroCity_Gym_Text_RoxannePreRematch::
# 130 "data/gym_leaders.pory"
	.string "Roxanne: I'm so glad to see you again.\n"
	.string "I'm Roxanne, the Gym Leader here.\p"
	.string "I'm sure we've both experienced many\n"
	.string "battles since we last met.\p"
	.string "I would like to see how much better\n"
	.string "we've become. Let us battle!$"

RustboroCity_Gym_Text_RoxanneRematchDefeat::
# 139 "data/gym_leaders.pory"
	.string "Grr…\n"
	.string "Again, I have lost…$"

RustboroCity_Gym_Text_RoxannePostRematch::
# 144 "data/gym_leaders.pory"
	.string "Roxanne: I still have much to learn\n"
	.string "when it comes to battling Pokémon.\p"
	.string "That awareness makes me love battling\n"
	.string "all that much more!$"

RustboroCity_Gym_Text_RoxanneRematchNeedTwoMons::
# 151 "data/gym_leaders.pory"
	.string "Roxanne: I'm so glad to see you again.\n"
	.string "I'm Roxanne, the Gym Leader here.\p"
	.string "I'm sure we've both experienced many\n"
	.string "battles since we last met.\p"
	.string "I would like to see how much better\n"
	.string "we've become…\p"
	.string "Oh, no…\n"
	.string "You only have one Pokémon with you?\p"
	.string "Please return with at least one more\n"
	.string "Pokémon.$"
