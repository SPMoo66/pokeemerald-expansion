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
	clearflag FLAG_CHALLENGING_TRAINER
# 32 "data/gym_leaders.pory"
	release
	return

RustboroCity_Gym_EventScript_RoxanneDefeated_2:
# 27 "data/gym_leaders.pory"
	call Common_EventScript_ReadyPetalburgGymForBattle
	goto RustboroCity_Gym_EventScript_RoxanneDefeated_1


RustboroCity_Gym_EventScript_RoxanneRematch::
# 36 "data/gym_leaders.pory"
	trainerbattle_rematch_double TRAINER_ROXANNE_1, RustboroCity_Gym_Text_RoxannePreRematch, RustboroCity_Gym_Text_RoxanneRematchDefeat, RustboroCity_Gym_Text_RoxanneRematchNeedTwoMons
# 37 "data/gym_leaders.pory"
	msgbox RustboroCity_Gym_Text_RoxannePostRematch, MSGBOX_AUTOCLOSE
# 38 "data/gym_leaders.pory"
	clearflag FLAG_CHALLENGING_TRAINER
	return


RustboroCity_Gym_EventScript_RegisterRoxanne::
# 42 "data/gym_leaders.pory"
	lockall
# 43 "data/gym_leaders.pory"
	pokenavcall RustboroCity_Gym_Text_RoxanneRegisterCall
# 44 "data/gym_leaders.pory"
	waitmessage
# 45 "data/gym_leaders.pory"
	delay 30
# 46 "data/gym_leaders.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 47 "data/gym_leaders.pory"
	msgbox RustboroCity_Gym_Text_RegisteredRoxanne, MSGBOX_DEFAULT
# 48 "data/gym_leaders.pory"
	waitfanfare
# 49 "data/gym_leaders.pory"
	closemessage
# 50 "data/gym_leaders.pory"
	delay 30
# 51 "data/gym_leaders.pory"
	setflag FLAG_ENABLE_ROXANNE_MATCH_CALL
# 52 "data/gym_leaders.pory"
	clearflag FLAG_ENABLE_ROXANNE_FIRST_CALL
# 53 "data/gym_leaders.pory"
	releaseall
	return


DewfordTown_Gym_EventScript_Brawly::
# 170 "data/gym_leaders.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 171 "data/gym_leaders.pory"
	trainerbattle_single TRAINER_BRAWLY_1, DewfordTown_Gym_Text_BrawlyIntro, DewfordTown_Gym_Text_BrawlyDefeat, DewfordTown_Gym_EventScript_BrawlyDefeated, NO_MUSIC
# 172 "data/gym_leaders.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 173 "data/gym_leaders.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq DewfordTown_Gym_EventScript_Brawly_2
DewfordTown_Gym_EventScript_Brawly_1:
# 176 "data/gym_leaders.pory"
	msgbox DewfordTown_Gym_Text_BrawlyPostBattle, MSGBOX_DEFAULT
# 177 "data/gym_leaders.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 178 "data/gym_leaders.pory"
	release
	return

DewfordTown_Gym_EventScript_Brawly_2:
# 174 "data/gym_leaders.pory"
	goto DewfordTown_Gym_EventScript_BrawlyRematch
	goto DewfordTown_Gym_EventScript_Brawly_1


DewfordTown_Gym_EventScript_BrawlyDefeated::
# 182 "data/gym_leaders.pory"
	call DewfordTown_Gym_EventScript_AnimateFlashFullBrightness
# 183 "data/gym_leaders.pory"
	message DewfordTown_Gym_Text_ReceivedKnuckleBadge
# 184 "data/gym_leaders.pory"
	waitmessage
# 185 "data/gym_leaders.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 186 "data/gym_leaders.pory"
	msgbox DewfordTown_Gym_Text_KnuckleBadgeInfoTakeThis, MSGBOX_DEFAULT
# 187 "data/gym_leaders.pory"
	setflag FLAG_DEFEATED_DEWFORD_GYM
# 188 "data/gym_leaders.pory"
	setflag FLAG_BADGE02_GET
# 189 "data/gym_leaders.pory"
	addvar VAR_PETALBURG_GYM_STATE, 1
# 190 "data/gym_leaders.pory"
	call_if_eq VAR_PETALBURG_GYM_STATE, 6, Common_EventScript_ReadyPetalburgGymForBattle
# 191 "data/gym_leaders.pory"
	setvar VAR_0x8008, 2
# 192 "data/gym_leaders.pory"
	call Common_EventScript_SetGymTrainers
# 193 "data/gym_leaders.pory"
	giveitem ITEM_TM_BULK_UP
# 194 "data/gym_leaders.pory"
	msgbox DewfordTown_Gym_Text_ExplainBulkUp, MSGBOX_DEFAULT
# 195 "data/gym_leaders.pory"
	closemessage
# 196 "data/gym_leaders.pory"
	delay 30
# 197 "data/gym_leaders.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 198 "data/gym_leaders.pory"
	msgbox DewfordTown_Gym_Text_RegisteredBrawly, MSGBOX_DEFAULT
# 199 "data/gym_leaders.pory"
	waitfanfare
# 200 "data/gym_leaders.pory"
	closemessage
# 201 "data/gym_leaders.pory"
	delay 30
# 202 "data/gym_leaders.pory"
	setflag FLAG_ENABLE_BRAWLY_MATCH_CALL
# 203 "data/gym_leaders.pory"
	setvar VAR_ROXANNE_CALL_STEP_COUNTER, 0
# 204 "data/gym_leaders.pory"
	setflag FLAG_ENABLE_ROXANNE_FIRST_CALL
# 205 "data/gym_leaders.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 206 "data/gym_leaders.pory"
	release
	return


DewfordTown_Gym_EventScript_BrawlyRematch::
# 211 "data/gym_leaders.pory"
	trainerbattle_rematch_double TRAINER_BRAWLY_1, DewfordTown_Gym_Text_BrawlyPreRematch, DewfordTown_Gym_Text_BrawlyRematchDefeat, DewfordTown_Gym_Text_BrawlyRematchNeedTwoMons
# 212 "data/gym_leaders.pory"
	msgbox DewfordTown_Gym_Text_BrawlyPostRematch, MSGBOX_AUTOCLOSE
# 213 "data/gym_leaders.pory"
	clearflag FLAG_CHALLENGING_TRAINER
	return


MauvilleCity_Gym_EventScript_Wattson::
# 301 "data/gym_leaders.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 302 "data/gym_leaders.pory"
	trainerbattle_single TRAINER_WATTSON_1, MauvilleCity_Gym_Text_WattsonIntro, MauvilleCity_Gym_Text_WattsonDefeat, MauvilleCity_Gym_EventScript_WattsonDefeated, NO_MUSIC
# 303 "data/gym_leaders.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 304 "data/gym_leaders.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MauvilleCity_Gym_EventScript_Wattson_2
MauvilleCity_Gym_EventScript_Wattson_1:
# 307 "data/gym_leaders.pory"
	compare VAR_NEW_MAUVILLE_STATE, 2
	goto_if_eq MauvilleCity_Gym_EventScript_Wattson_5
MauvilleCity_Gym_EventScript_Wattson_4:
# 310 "data/gym_leaders.pory"
	msgbox MauvilleCity_Gym_Text_WattsonPostBattle, MSGBOX_DEFAULT
# 311 "data/gym_leaders.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 312 "data/gym_leaders.pory"
	release
	return

MauvilleCity_Gym_EventScript_Wattson_2:
# 305 "data/gym_leaders.pory"
	goto MauvilleCity_Gym_EventScript_WattsonRematch
	goto MauvilleCity_Gym_EventScript_Wattson_1

MauvilleCity_Gym_EventScript_Wattson_5:
# 308 "data/gym_leaders.pory"
	goto MauvilleCity_Gym_EventScript_CompletedNewMauville
	goto MauvilleCity_Gym_EventScript_Wattson_4


MauvilleCity_Gym_EventScript_WattsonDefeated::
# 316 "data/gym_leaders.pory"
	message MauvilleCity_Gym_Text_ReceivedDynamoBadge
# 317 "data/gym_leaders.pory"
	waitmessage
# 318 "data/gym_leaders.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 319 "data/gym_leaders.pory"
	msgbox MauvilleCity_Gym_Text_ExplainDynamoBadgeTakeThis, MSGBOX_DEFAULT
# 320 "data/gym_leaders.pory"
	setvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 3
# 321 "data/gym_leaders.pory"
	clearflag FLAG_HIDE_VERDANTURF_TOWN_SCOTT
# 322 "data/gym_leaders.pory"
	setflag FLAG_DEFEATED_MAUVILLE_GYM
# 323 "data/gym_leaders.pory"
	setflag FLAG_BADGE03_GET
# 324 "data/gym_leaders.pory"
	addvar VAR_PETALBURG_GYM_STATE, 1
# 325 "data/gym_leaders.pory"
	compare VAR_PETALBURG_GYM_STATE, 6
	goto_if_eq MauvilleCity_Gym_EventScript_WattsonDefeated_2
MauvilleCity_Gym_EventScript_WattsonDefeated_1:
# 328 "data/gym_leaders.pory"
	setvar VAR_0x8008, 3
# 329 "data/gym_leaders.pory"
	call Common_EventScript_SetGymTrainers
# 330 "data/gym_leaders.pory"
	special MauvilleGymDeactivatePuzzle
# 331 "data/gym_leaders.pory"
	special DrawWholeMapView
# 332 "data/gym_leaders.pory"
	playse SE_UNLOCK
# 333 "data/gym_leaders.pory"
	call MauvilleCity_Gym_EventScript_GiveChargeBeam
# 334 "data/gym_leaders.pory"
	closemessage
# 335 "data/gym_leaders.pory"
	delay 30
# 336 "data/gym_leaders.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 337 "data/gym_leaders.pory"
	msgbox MauvilleCity_Gym_Text_RegisteredWattson, MSGBOX_DEFAULT
# 338 "data/gym_leaders.pory"
	waitfanfare
# 339 "data/gym_leaders.pory"
	closemessage
# 340 "data/gym_leaders.pory"
	delay 30
# 341 "data/gym_leaders.pory"
	setflag FLAG_ENABLE_WATTSON_MATCH_CALL
# 342 "data/gym_leaders.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 343 "data/gym_leaders.pory"
	release
	return

MauvilleCity_Gym_EventScript_WattsonDefeated_2:
# 326 "data/gym_leaders.pory"
	call Common_EventScript_ReadyPetalburgGymForBattle
	goto MauvilleCity_Gym_EventScript_WattsonDefeated_1


MauvilleCity_Gym_EventScript_GiveChargeBeam::
# 347 "data/gym_leaders.pory"
	giveitem ITEM_TM_CHARGE_BEAM
# 348 "data/gym_leaders.pory"
	msgbox MauvilleCity_Gym_Text_ExplainChargeBeam, MSGBOX_DEFAULT
	return


MauvilleCity_Gym_EventScript_CompletedNewMauville::
# 353 "data/gym_leaders.pory"
	msgbox MauvilleCity_Gym_Text_WattsonGoForthAndEndeavor, MSGBOX_DEFAULT
# 354 "data/gym_leaders.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 355 "data/gym_leaders.pory"
	release
	return


MauvilleCity_Gym_EventScript_WattsonRematch::
# 359 "data/gym_leaders.pory"
	trainerbattle_rematch_double TRAINER_WATTSON_1, MauvilleCity_Gym_Text_WattsonPreRematch, MauvilleCity_Gym_Text_WattsonRematchDefeat, MauvilleCity_Gym_Text_WattsonRematchNeedTwoMons
# 360 "data/gym_leaders.pory"
	msgbox MauvilleCity_Gym_Text_WattsonPostRematch, MSGBOX_AUTOCLOSE
# 361 "data/gym_leaders.pory"
	clearflag FLAG_CHALLENGING_TRAINER
	return


RustboroCity_Gym_Text_RoxanneIntro::
# 57 "data/gym_leaders.pory"
	.string "Hello, I am Roxanne, the Rustboro\n"
	.string "Pokémon Gym Leader.\p"
	.string "I became a Gym Leader so that I might\n"
	.string "apply what I learned at the Pokémon\l"
	.string "Trainer's School in battle.\p"
	.string "Would you kindly demonstrate how you\n"
	.string "battle, and with which Pokémon?$"

RustboroCity_Gym_Text_RoxanneDefeat::
# 67 "data/gym_leaders.pory"
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
# 80 "data/gym_leaders.pory"
	.string "{PLAYER} received the Stone Badge\n"
	.string "from Roxanne.$"

RustboroCity_Gym_Text_StoneBadgeInfoTakeThis::
# 85 "data/gym_leaders.pory"
	.string "The Stone Badge enables the use of\n"
	.string "Cut outside of battle.\p"
	.string "Please take this with you, too.$"

RustboroCity_Gym_Text_ExplainSmackDown::
# 91 "data/gym_leaders.pory"
	.string "That Technical Machine, TM96,\n"
	.string "contains Smack Down.\p"
	.string "It not only inflicts damage by throwing\n"
	.string "rocks, it also grounds flying targets.\p"
	.string "If you use a TM, it instantly teaches\n"
	.string "the move to a Pokémon.\p"
	.string "Remember, a TM can be used multiple\n"
	.string "times.$"

RustboroCity_Gym_Text_RoxannePostBattle::
# 102 "data/gym_leaders.pory"
	.string "Since you are so strong, you should\n"
	.string "challenge other Gym Leaders.\p"
	.string "By battling many Trainers, you should\n"
	.string "learn many things.$"

RustboroCity_Gym_Text_RoxanneRegisterCall::
# 109 "data/gym_leaders.pory"
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
# 127 "data/gym_leaders.pory"
	.string "Registered Gym Leader Roxanne\n"
	.string "in the Pokénav.$"

RustboroCity_Gym_Text_RoxannePreRematch::
# 132 "data/gym_leaders.pory"
	.string "Roxanne: I'm so glad to see you again.\n"
	.string "I'm Roxanne, the Gym Leader here.\p"
	.string "I'm sure we've both experienced many\n"
	.string "battles since we last met.\p"
	.string "I would like to see how much better\n"
	.string "we've become. Let us battle!$"

RustboroCity_Gym_Text_RoxanneRematchDefeat::
# 141 "data/gym_leaders.pory"
	.string "Grr…\n"
	.string "Again, I have lost…$"

RustboroCity_Gym_Text_RoxannePostRematch::
# 146 "data/gym_leaders.pory"
	.string "Roxanne: I still have much to learn\n"
	.string "when it comes to battling Pokémon.\p"
	.string "That awareness makes me love battling\n"
	.string "all that much more!$"

RustboroCity_Gym_Text_RoxanneRematchNeedTwoMons::
# 153 "data/gym_leaders.pory"
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

DewfordTown_Gym_Text_BrawlyIntro::
# 217 "data/gym_leaders.pory"
	.string "I'm Brawly!\n"
	.string "Dewford's Gym Leader!\p"
	.string "I've been churned in the rough waves\n"
	.string "of these parts, and I've grown tough\l"
	.string "in the pitch-black cave!\p"
	.string "So you wanted to challenge me?\n"
	.string "Let me see what you're made of!$"

DewfordTown_Gym_Text_BrawlyDefeat::
# 227 "data/gym_leaders.pory"
	.string "Whoah, wow! You made a much bigger\n"
	.string "splash than I expected!\p"
	.string "You swamped me!\p"
	.string "Okay, you've got me.\n"
	.string "Take this Gym Badge!$"

DewfordTown_Gym_Text_ReceivedKnuckleBadge::
# 235 "data/gym_leaders.pory"
	.string "{PLAYER} received the Knuckle Badge\n"
	.string "from Brawly.$"

DewfordTown_Gym_Text_KnuckleBadgeInfoTakeThis::
# 240 "data/gym_leaders.pory"
	.string "The Knuckle Badge makes all Pokémon\n"
	.string "up to Level 30, even those you get in\l"
	.string "trades, obey without question.\p"
	.string "If you'd like, use this Technical\n"
	.string "Machine, too.$"

DewfordTown_Gym_Text_ExplainBulkUp::
# 248 "data/gym_leaders.pory"
	.string "That TM08 contains Bulk Up.\p"
	.string "It's a move that raises both Attack\n"
	.string "and Defense stats.\p"
	.string "… … … … … …$"

DewfordTown_Gym_Text_RegisteredBrawly::
# 255 "data/gym_leaders.pory"
	.string "Registered Gym Leader Brawly\n"
	.string "in the Pokénav.$"

DewfordTown_Gym_Text_BrawlyPostBattle::
# 260 "data/gym_leaders.pory"
	.string "I can see your talent becoming a giant\n"
	.string "wave to cause a storm of astonishment\l"
	.string "among Trainers one day!$"

DewfordTown_Gym_Text_BrawlyPreRematch::
# 266 "data/gym_leaders.pory"
	.string "Brawly: A wave may draw back, but it\n"
	.string "always returns to the shore.\p"
	.string "A giant wave of a talent like you…\n"
	.string "I knew you would return!\p"
	.string "Show me how much higher\n"
	.string "you've gone!$"

DewfordTown_Gym_Text_BrawlyRematchDefeat::
# 275 "data/gym_leaders.pory"
	.string "Wow!\n"
	.string "Swamped again!$"

DewfordTown_Gym_Text_BrawlyPostRematch::
# 280 "data/gym_leaders.pory"
	.string "Brawly: Battling is vast and it's deep.\n"
	.string "You can't see the bottom.\l"
	.string "It's just like the sea of Hoenn!$"

DewfordTown_Gym_Text_BrawlyRematchNeedTwoMons::
# 286 "data/gym_leaders.pory"
	.string "Brawly: A wave may draw back, but it\n"
	.string "always returns to the shore.\p"
	.string "A giant wave of a talent like you…\n"
	.string "I knew you would return!\p"
	.string "Oh? You only have one Pokémon\n"
	.string "that can battle.\p"
	.string "I'm sorry, but I'd like you to come back\n"
	.string "with at least two Pokémon.$"

MauvilleCity_Gym_Text_WattsonIntro::
# 365 "data/gym_leaders.pory"
	.string "I've given up on my plans to convert\n"
	.string "the city, I have.\p"
	.string "And so, I put my time into making\n"
	.string "door traps in my Gym.\p"
	.string "Oh? Now, what are you doing here?\p"
	.string "What's that? You say you've gotten\n"
	.string "past all my rigged doors?\p"
	.string "Wahahahah!\n"
	.string "Now, that is amusing!\p"
	.string "Then, I, Wattson, the Leader of\n"
	.string "Mauville Gym, shall electrify you!$"

MauvilleCity_Gym_Text_WattsonDefeat::
# 379 "data/gym_leaders.pory"
	.string "Wahahahah!\n"
	.string "Fine, I lost!\p"
	.string "You ended up giving me a thrill!\n"
	.string "Take this Badge!$"

MauvilleCity_Gym_Text_ReceivedDynamoBadge::
# 386 "data/gym_leaders.pory"
	.string "{PLAYER} received the Dynamo Badge\n"
	.string "from Wattson.$"

MauvilleCity_Gym_Text_ExplainDynamoBadgeTakeThis::
# 391 "data/gym_leaders.pory"
	.string "With the Dynamo Badge, you can\n"
	.string "use Rock Smash out of battle.\p"
	.string "Hmm…\n"
	.string "You should take this, too!$"

MauvilleCity_Gym_Text_ExplainChargeBeam::
# 398 "data/gym_leaders.pory"
	.string "That TM55 there contains Charge Beam.\p"
	.string "It's a trustworthy move that always\n"
	.string "raises Sp. Attack! You can count on it!\p"
	.string "… … … … … …$"

MauvilleCity_Gym_Text_RegisteredWattson::
# 405 "data/gym_leaders.pory"
	.string "Registered Gym Leader Wattson\n"
	.string "in the Pokénav.$"

MauvilleCity_Gym_Text_WattsonPostBattle::
# 410 "data/gym_leaders.pory"
	.string "I swell with optimism, seeing a promising\n"
	.string "young Trainer like you!$"

MauvilleCity_Gym_Text_WattsonGoForthAndEndeavor::
# 415 "data/gym_leaders.pory"
	.string "Wahahahah!\n"
	.string "Go forth and endeavor, youngster!$"

MauvilleCity_Gym_Text_WattsonPreRematch::
# 420 "data/gym_leaders.pory"
	.string "Wattson: Ah-ha! Here at last!\n"
	.string "I know what you want.\l"
	.string "You want to battle my Pokémon!\p"
	.string "Wahahahaha!\p"
	.string "I'll make sparks fly from you!\n"
	.string "Don't say I didn't warn you!$"

MauvilleCity_Gym_Text_WattsonRematchDefeat::
# 429 "data/gym_leaders.pory"
	.string "Oof…\n"
	.string "Our batteries ran dry…$"

MauvilleCity_Gym_Text_WattsonPostRematch::
# 434 "data/gym_leaders.pory"
	.string "Wattson: We'll have to recharge our\n"
	.string "batteries again.\p"
	.string "When we're fully charged up, we'll\n"
	.string "gladly accept your challenge.\p"
	.string "So, come back again sometime,\n"
	.string "won't you?$"

MauvilleCity_Gym_Text_WattsonRematchNeedTwoMons::
# 443 "data/gym_leaders.pory"
	.string "Wattson: Ah-ha! Here at last!\n"
	.string "I know what you want.\l"
	.string "You want to battle my Pokémon!\p"
	.string "Wahahahaha!\p"
	.string "Oops! Wait!\n"
	.string "You've only one Pokémon with you!\p"
	.string "Come see me with two or more\n"
	.string "Pokémon, all right?$"
