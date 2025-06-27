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
	bufferstring STR_VAR_1, Text_GymLeader
# 48 "data/gym_leaders.pory"
	bufferstring STR_VAR_2, CommonText_Roxanne
# 49 "data/gym_leaders.pory"
	msgbox Text_RegisteredInPokenav_TwoInputs, MSGBOX_DEFAULT
# 50 "data/gym_leaders.pory"
	waitfanfare
# 51 "data/gym_leaders.pory"
	closemessage
# 52 "data/gym_leaders.pory"
	delay 30
# 53 "data/gym_leaders.pory"
	setflag FLAG_ENABLE_ROXANNE_MATCH_CALL
# 54 "data/gym_leaders.pory"
	clearflag FLAG_ENABLE_ROXANNE_FIRST_CALL
# 55 "data/gym_leaders.pory"
	releaseall
	return


DewfordTown_Gym_EventScript_Brawly::
# 167 "data/gym_leaders.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 168 "data/gym_leaders.pory"
	trainerbattle_single TRAINER_BRAWLY_1, DewfordTown_Gym_Text_BrawlyIntro, DewfordTown_Gym_Text_BrawlyDefeat, DewfordTown_Gym_EventScript_BrawlyDefeated, NO_MUSIC
# 169 "data/gym_leaders.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 170 "data/gym_leaders.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq DewfordTown_Gym_EventScript_Brawly_2
DewfordTown_Gym_EventScript_Brawly_1:
# 173 "data/gym_leaders.pory"
	msgbox DewfordTown_Gym_Text_BrawlyPostBattle, MSGBOX_DEFAULT
# 174 "data/gym_leaders.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 175 "data/gym_leaders.pory"
	release
	return

DewfordTown_Gym_EventScript_Brawly_2:
# 171 "data/gym_leaders.pory"
	goto DewfordTown_Gym_EventScript_BrawlyRematch
	goto DewfordTown_Gym_EventScript_Brawly_1


DewfordTown_Gym_EventScript_BrawlyDefeated::
# 179 "data/gym_leaders.pory"
	call DewfordTown_Gym_EventScript_AnimateFlashFullBrightness
# 180 "data/gym_leaders.pory"
	message DewfordTown_Gym_Text_ReceivedKnuckleBadge
# 181 "data/gym_leaders.pory"
	waitmessage
# 182 "data/gym_leaders.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 183 "data/gym_leaders.pory"
	msgbox DewfordTown_Gym_Text_KnuckleBadgeInfoTakeThis, MSGBOX_DEFAULT
# 184 "data/gym_leaders.pory"
	setflag FLAG_DEFEATED_DEWFORD_GYM
# 185 "data/gym_leaders.pory"
	setflag FLAG_BADGE02_GET
# 186 "data/gym_leaders.pory"
	setrespawn HEAL_LOCATION_DEWFORD_TOWN
# 187 "data/gym_leaders.pory"
	addvar VAR_PETALBURG_GYM_STATE, 1
# 188 "data/gym_leaders.pory"
	call_if_eq VAR_PETALBURG_GYM_STATE, 6, Common_EventScript_ReadyPetalburgGymForBattle
# 189 "data/gym_leaders.pory"
	setvar VAR_0x8008, 2
# 190 "data/gym_leaders.pory"
	call Common_EventScript_SetGymTrainers
# 191 "data/gym_leaders.pory"
	giveitem ITEM_TM_BULK_UP
# 192 "data/gym_leaders.pory"
	msgbox DewfordTown_Gym_Text_ExplainBulkUp, MSGBOX_DEFAULT
# 193 "data/gym_leaders.pory"
	closemessage
# 194 "data/gym_leaders.pory"
	delay 30
# 195 "data/gym_leaders.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 196 "data/gym_leaders.pory"
	bufferstring STR_VAR_1, Text_GymLeader
# 197 "data/gym_leaders.pory"
	bufferstring STR_VAR_2, CommonText_Brawly
# 198 "data/gym_leaders.pory"
	msgbox Text_RegisteredInPokenav_TwoInputs, MSGBOX_DEFAULT
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
# 296 "data/gym_leaders.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 297 "data/gym_leaders.pory"
	trainerbattle_single TRAINER_WATTSON_1, MauvilleCity_Gym_Text_WattsonIntro, MauvilleCity_Gym_Text_WattsonDefeat, MauvilleCity_Gym_EventScript_WattsonDefeated, NO_MUSIC
# 298 "data/gym_leaders.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 299 "data/gym_leaders.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MauvilleCity_Gym_EventScript_Wattson_2
MauvilleCity_Gym_EventScript_Wattson_1:
# 302 "data/gym_leaders.pory"
	compare VAR_NEW_MAUVILLE_STATE, 2
	goto_if_eq MauvilleCity_Gym_EventScript_Wattson_5
MauvilleCity_Gym_EventScript_Wattson_4:
# 305 "data/gym_leaders.pory"
	msgbox MauvilleCity_Gym_Text_WattsonPostBattle, MSGBOX_DEFAULT
# 306 "data/gym_leaders.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 307 "data/gym_leaders.pory"
	release
	return

MauvilleCity_Gym_EventScript_Wattson_2:
# 300 "data/gym_leaders.pory"
	goto MauvilleCity_Gym_EventScript_WattsonRematch
	goto MauvilleCity_Gym_EventScript_Wattson_1

MauvilleCity_Gym_EventScript_Wattson_5:
# 303 "data/gym_leaders.pory"
	goto MauvilleCity_Gym_EventScript_CompletedNewMauville
	goto MauvilleCity_Gym_EventScript_Wattson_4


MauvilleCity_Gym_EventScript_WattsonDefeated::
# 311 "data/gym_leaders.pory"
	message MauvilleCity_Gym_Text_ReceivedDynamoBadge
# 312 "data/gym_leaders.pory"
	waitmessage
# 313 "data/gym_leaders.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 314 "data/gym_leaders.pory"
	msgbox MauvilleCity_Gym_Text_ExplainDynamoBadgeTakeThis, MSGBOX_DEFAULT
# 315 "data/gym_leaders.pory"
	setvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 3
# 316 "data/gym_leaders.pory"
	clearflag FLAG_HIDE_VERDANTURF_TOWN_SCOTT
# 317 "data/gym_leaders.pory"
	setflag FLAG_DEFEATED_MAUVILLE_GYM
# 318 "data/gym_leaders.pory"
	setflag FLAG_BADGE03_GET
# 319 "data/gym_leaders.pory"
	addvar VAR_PETALBURG_GYM_STATE, 1
# 320 "data/gym_leaders.pory"
	compare VAR_PETALBURG_GYM_STATE, 6
	goto_if_eq MauvilleCity_Gym_EventScript_WattsonDefeated_2
MauvilleCity_Gym_EventScript_WattsonDefeated_1:
# 323 "data/gym_leaders.pory"
	setvar VAR_0x8008, 3
# 324 "data/gym_leaders.pory"
	call Common_EventScript_SetGymTrainers
# 325 "data/gym_leaders.pory"
	special MauvilleGymDeactivatePuzzle
# 326 "data/gym_leaders.pory"
	special DrawWholeMapView
# 327 "data/gym_leaders.pory"
	playse SE_UNLOCK
# 328 "data/gym_leaders.pory"
	giveitem ITEM_TM_CHARGE_BEAM
# 329 "data/gym_leaders.pory"
	msgbox MauvilleCity_Gym_Text_ExplainChargeBeam, MSGBOX_DEFAULT
# 330 "data/gym_leaders.pory"
	closemessage
# 331 "data/gym_leaders.pory"
	delay 30
# 332 "data/gym_leaders.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 333 "data/gym_leaders.pory"
	bufferstring STR_VAR_1, Text_GymLeader
# 334 "data/gym_leaders.pory"
	bufferstring STR_VAR_2, CommonText_Wattson
# 335 "data/gym_leaders.pory"
	msgbox Text_RegisteredInPokenav_TwoInputs, MSGBOX_DEFAULT
# 336 "data/gym_leaders.pory"
	waitfanfare
# 337 "data/gym_leaders.pory"
	closemessage
# 338 "data/gym_leaders.pory"
	delay 30
# 339 "data/gym_leaders.pory"
	setflag FLAG_ENABLE_WATTSON_MATCH_CALL
# 340 "data/gym_leaders.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 341 "data/gym_leaders.pory"
	release
	return

MauvilleCity_Gym_EventScript_WattsonDefeated_2:
# 321 "data/gym_leaders.pory"
	call Common_EventScript_ReadyPetalburgGymForBattle
	goto MauvilleCity_Gym_EventScript_WattsonDefeated_1


MauvilleCity_Gym_EventScript_CompletedNewMauville::
# 345 "data/gym_leaders.pory"
	msgbox MauvilleCity_Gym_Text_WattsonGoForthAndEndeavor, MSGBOX_DEFAULT
# 346 "data/gym_leaders.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 347 "data/gym_leaders.pory"
	release
	return


MauvilleCity_Gym_EventScript_WattsonRematch::
# 351 "data/gym_leaders.pory"
	trainerbattle_rematch_double TRAINER_WATTSON_1, MauvilleCity_Gym_Text_WattsonPreRematch, MauvilleCity_Gym_Text_WattsonRematchDefeat, MauvilleCity_Gym_Text_WattsonRematchNeedTwoMons
# 352 "data/gym_leaders.pory"
	msgbox MauvilleCity_Gym_Text_WattsonPostRematch, MSGBOX_AUTOCLOSE
# 353 "data/gym_leaders.pory"
	clearflag FLAG_CHALLENGING_TRAINER
	return


LavaridgeTown_Gym_1F_EventScript_Flannery::
# 445 "data/gym_leaders.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 446 "data/gym_leaders.pory"
	trainerbattle_single TRAINER_FLANNERY_1, LavaridgeTown_Gym_1F_Text_FlanneryIntro, LavaridgeTown_Gym_1F_Text_FlanneryDefeat, LavaridgeTown_Gym_1F_EventScript_FlanneryDefeated, NO_MUSIC
# 447 "data/gym_leaders.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 448 "data/gym_leaders.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq LavaridgeTown_Gym_1F_EventScript_Flannery_2
LavaridgeTown_Gym_1F_EventScript_Flannery_1:
# 451 "data/gym_leaders.pory"
	msgbox LavaridgeTown_Gym_1F_Text_FlanneryPostBattle, MSGBOX_DEFAULT
# 452 "data/gym_leaders.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 453 "data/gym_leaders.pory"
	release
	return

LavaridgeTown_Gym_1F_EventScript_Flannery_2:
# 449 "data/gym_leaders.pory"
	goto LavaridgeTown_Gym_1F_EventScript_FlanneryRematch
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_1


LavaridgeTown_Gym_1F_EventScript_FlanneryDefeated::
# 457 "data/gym_leaders.pory"
	message LavaridgeTown_Gym_1F_Text_ReceivedHeatBadge
# 458 "data/gym_leaders.pory"
	waitmessage
# 459 "data/gym_leaders.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 460 "data/gym_leaders.pory"
	msgbox LavaridgeTown_Gym_1F_Text_ExplainHeatBadgeTakeThis, MSGBOX_DEFAULT
# 461 "data/gym_leaders.pory"
	setflag FLAG_WHITEOUT_TO_LAVARIDGE
# 462 "data/gym_leaders.pory"
	setflag FLAG_DEFEATED_LAVARIDGE_GYM
# 463 "data/gym_leaders.pory"
	setflag FLAG_BADGE04_GET
# 464 "data/gym_leaders.pory"
	addvar VAR_PETALBURG_GYM_STATE, 1
# 465 "data/gym_leaders.pory"
	compare VAR_PETALBURG_GYM_STATE, 6
	goto_if_eq LavaridgeTown_Gym_1F_EventScript_FlanneryDefeated_2
LavaridgeTown_Gym_1F_EventScript_FlanneryDefeated_1:
# 468 "data/gym_leaders.pory"
	setvar VAR_0x8008, 4
# 469 "data/gym_leaders.pory"
	call Common_EventScript_SetGymTrainers
# 470 "data/gym_leaders.pory"
	setflag FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WALLY
# 471 "data/gym_leaders.pory"
	setvar VAR_LAVARIDGE_TOWN_STATE, 1
# 472 "data/gym_leaders.pory"
	giveitem ITEM_TM_BLAZE_KICK
# 473 "data/gym_leaders.pory"
	msgbox LavaridgeTown_Gym_1F_Text_ExplainBlazeKick, MSGBOX_DEFAULT
# 474 "data/gym_leaders.pory"
	closemessage
# 475 "data/gym_leaders.pory"
	delay 30
# 476 "data/gym_leaders.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 477 "data/gym_leaders.pory"
	bufferstring STR_VAR_1, Text_GymLeader
# 478 "data/gym_leaders.pory"
	bufferstring STR_VAR_2, CommonText_Flannery
# 479 "data/gym_leaders.pory"
	msgbox Text_RegisteredInPokenav_TwoInputs, MSGBOX_DEFAULT
# 480 "data/gym_leaders.pory"
	waitfanfare
# 481 "data/gym_leaders.pory"
	closemessage
# 482 "data/gym_leaders.pory"
	delay 30
# 483 "data/gym_leaders.pory"
	setflag FLAG_ENABLE_FLANNERY_MATCH_CALL
# 484 "data/gym_leaders.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 485 "data/gym_leaders.pory"
	release
	return

LavaridgeTown_Gym_1F_EventScript_FlanneryDefeated_2:
# 466 "data/gym_leaders.pory"
	call Common_EventScript_ReadyPetalburgGymForBattle
	goto LavaridgeTown_Gym_1F_EventScript_FlanneryDefeated_1


LavaridgeTown_Gym_1F_EventScript_FlanneryRematch::
# 489 "data/gym_leaders.pory"
	trainerbattle_rematch_double TRAINER_FLANNERY_1, LavaridgeTown_Gym_1F_Text_FlanneryPreRematch, LavaridgeTown_Gym_1F_Text_FlanneryRematchDefeat, LavaridgeTown_Gym_1F_Text_FlanneryRematchNeedTwoMons
# 490 "data/gym_leaders.pory"
	msgbox LavaridgeTown_Gym_1F_Text_FlanneryPostRematch, MSGBOX_AUTOCLOSE
# 491 "data/gym_leaders.pory"
	clearflag FLAG_CHALLENGING_TRAINER
	return


PetalburgCity_Gym_EventScript_NormanBattle::
# 595 "data/gym_leaders.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 596 "data/gym_leaders.pory"
	msgbox PetalburgCity_Gym_Text_NormanIntro, MSGBOX_DEFAULT
# 597 "data/gym_leaders.pory"
	trainerbattle_no_intro TRAINER_NORMAN_1, PetalburgCity_Gym_Text_NormanDefeat
# 598 "data/gym_leaders.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 599 "data/gym_leaders.pory"
	message PetalburgCity_Gym_Text_ReceivedBalanceBadge
# 600 "data/gym_leaders.pory"
	waitmessage
# 601 "data/gym_leaders.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 602 "data/gym_leaders.pory"
	msgbox PetalburgCity_Gym_Text_ExplainBalanceBadgeTakeThis, MSGBOX_DEFAULT
# 603 "data/gym_leaders.pory"
	setflag FLAG_DEFEATED_PETALBURG_GYM
# 604 "data/gym_leaders.pory"
	setvar VAR_PETALBURG_GYM_STATE, 7
# 605 "data/gym_leaders.pory"
	setflag FLAG_BADGE05_GET
# 606 "data/gym_leaders.pory"
	setvar VAR_EMERALBODY_RIVAL_STATE, 9
# 607 "data/gym_leaders.pory"
	special ResetHealLocationFromDewford
# 608 "data/gym_leaders.pory"
	call EventScript_HideMrBriney
# 609 "data/gym_leaders.pory"
	setflag FLAG_HIDE_MAUVILLE_GYM_WATTSON
# 610 "data/gym_leaders.pory"
	clearflag FLAG_HIDE_MAUVILLE_CITY_WATTSON
# 611 "data/gym_leaders.pory"
	setvar VAR_0x8008, 5
# 612 "data/gym_leaders.pory"
	call Common_EventScript_SetGymTrainers
# 613 "data/gym_leaders.pory"
	call PetalburgCity_Gym_EventScript_UnlockAllDoors
# 614 "data/gym_leaders.pory"
	special DrawWholeMapView
# 615 "data/gym_leaders.pory"
	giveitem ITEM_TM_FACADE
# 616 "data/gym_leaders.pory"
	speakername CommonText_Dad
# 617 "data/gym_leaders.pory"
	msgbox PetalburgCity_Gym_Text_ExplainFacade, MSGBOX_DEFAULT
# 618 "data/gym_leaders.pory"
	delay 10
# 619 "data/gym_leaders.pory"
	speakername CommonText_Dad
# 620 "data/gym_leaders.pory"
	msgbox PetalburgCity_Gym_Text_DadPokevial2, MSGBOX_DEFAULT
# 621 "data/gym_leaders.pory"
	closemessage
# 622 "data/gym_leaders.pory"
	pokevialincreasesize
# 623 "data/gym_leaders.pory"
	msgbox Text_PokevialSizeIncrease, MSGBOX_DEFAULT
# 624 "data/gym_leaders.pory"
	playfanfare MUS_OBTAIN_ITEM
# 625 "data/gym_leaders.pory"
	waitfanfare
# 626 "data/gym_leaders.pory"
	closemessage
# 627 "data/gym_leaders.pory"
	delay 20
# 628 "data/gym_leaders.pory"
	speakername CommonText_Dad
# 629 "data/gym_leaders.pory"
	msgbox PetalburgCity_Gym_Text_DadHappyAndSad, MSGBOX_DEFAULT
# 630 "data/gym_leaders.pory"
	closemessage
# 631 "data/gym_leaders.pory"
	delay 30
# 632 "data/gym_leaders.pory"
	playse SE_DOOR
# 633 "data/gym_leaders.pory"
	delay 10
# 634 "data/gym_leaders.pory"
	addobject LOCALID_PETALBURG_GYM_WALLYS_DAD
# 635 "data/gym_leaders.pory"
	switch VAR_FACING
# 636 "data/gym_leaders.pory"
	case DIR_NORTH, PetalburgCity_Gym_EventScript_NormanBattle_2
# 638 "data/gym_leaders.pory"
	case DIR_WEST, PetalburgCity_Gym_EventScript_NormanBattle_3
# 640 "data/gym_leaders.pory"
	case DIR_EAST, PetalburgCity_Gym_EventScript_NormanBattle_4
	return

PetalburgCity_Gym_EventScript_NormanBattle_2:
# 637 "data/gym_leaders.pory"
	goto PetalburgCity_Gym_EventScript_WallysDadArrivesNorth
	return

PetalburgCity_Gym_EventScript_NormanBattle_3:
# 639 "data/gym_leaders.pory"
	goto PetalburgCity_Gym_EventScript_WallysDadArrivesWest
	return

PetalburgCity_Gym_EventScript_NormanBattle_4:
# 641 "data/gym_leaders.pory"
	goto PetalburgCity_Gym_EventScript_WallysDadArrivesEast
	return


PetalburgCity_Gym_EventScript_NormanPostBattle::
# 646 "data/gym_leaders.pory"
	call PetalburgCity_Gym_EventScript_ShouldGiveEnigmaBerry
# 647 "data/gym_leaders.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PetalburgCity_Gym_EventScript_NormanPostBattle_2
PetalburgCity_Gym_EventScript_NormanPostBattle_1:
# 650 "data/gym_leaders.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, PetalburgCity_Gym_EventScript_NormanPostBattle_5
PetalburgCity_Gym_EventScript_NormanPostBattle_4:
# 653 "data/gym_leaders.pory"
	msgbox PetalburgCity_Gym_Text_DadGoingToKeepTraining, MSGBOX_DEFAULT
# 654 "data/gym_leaders.pory"
	release
	return

PetalburgCity_Gym_EventScript_NormanPostBattle_2:
# 648 "data/gym_leaders.pory"
	goto PetalburgCity_Gym_EventScript_GiveEnigmaBerry
	goto PetalburgCity_Gym_EventScript_NormanPostBattle_1

PetalburgCity_Gym_EventScript_NormanPostBattle_5:
# 651 "data/gym_leaders.pory"
	goto PetalburgCity_Gym_EventScript_NoAmountOfTrainingIsEnough
	goto PetalburgCity_Gym_EventScript_NormanPostBattle_4


PetalburgCity_Gym_EventScript_NormanRematch::
# 658 "data/gym_leaders.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 659 "data/gym_leaders.pory"
	trainerbattle_rematch_double TRAINER_NORMAN_1, PetalburgCity_Gym_Text_NormanPreRematch, PetalburgCity_Gym_Text_NormanRematchDefeat, PetalburgCity_Gym_Text_NormanRematchNeedTwoMons
# 660 "data/gym_leaders.pory"
	msgbox PetalburgCity_Gym_Text_NormanPostRematch, MSGBOX_AUTOCLOSE
# 661 "data/gym_leaders.pory"
	setflag FLAG_CHALLENGING_TRAINER
	return


PetalburgCity_Gym_EventScript_NoAmountOfTrainingIsEnough::
# 665 "data/gym_leaders.pory"
	msgbox PetalburgCity_Gym_Text_DadNoAmountOfTrainingIsEnough, MSGBOX_DEFAULT
# 666 "data/gym_leaders.pory"
	release
	return


FortreeCity_Gym_EventScript_Winona::
# 792 "data/gym_leaders.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 793 "data/gym_leaders.pory"
	trainerbattle_single TRAINER_WINONA_1, FortreeCity_Gym_Text_WinonaIntro, FortreeCity_Gym_Text_WinonaDefeat, FortreeCity_Gym_EventScript_WinonaDefeated, NO_MUSIC
# 794 "data/gym_leaders.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 795 "data/gym_leaders.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq FortreeCity_Gym_EventScript_Winona_2
FortreeCity_Gym_EventScript_Winona_1:
# 798 "data/gym_leaders.pory"
	msgbox FortreeCity_Gym_Text_WinonaPostBattle, MSGBOX_DEFAULT
# 799 "data/gym_leaders.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 800 "data/gym_leaders.pory"
	release
	return

FortreeCity_Gym_EventScript_Winona_2:
# 796 "data/gym_leaders.pory"
	goto FortreeCity_Gym_EventScript_WinonaRematch
	goto FortreeCity_Gym_EventScript_Winona_1


FortreeCity_Gym_EventScript_WinonaDefeated::
# 804 "data/gym_leaders.pory"
	message FortreeCity_Gym_Text_ReceivedFeatherBadge
# 805 "data/gym_leaders.pory"
	waitmessage
# 806 "data/gym_leaders.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 807 "data/gym_leaders.pory"
	msgbox FortreeCity_Gym_Text_ExplainFeatherBadgeTakeThis, MSGBOX_DEFAULT
# 808 "data/gym_leaders.pory"
	setflag FLAG_DEFEATED_FORTREE_GYM
# 809 "data/gym_leaders.pory"
	setflag FLAG_BADGE06_GET
# 810 "data/gym_leaders.pory"
	setvar VAR_EMERALBODY_RIVAL_STATE, 10
# 811 "data/gym_leaders.pory"
	setvar VAR_0x8008, 6
# 812 "data/gym_leaders.pory"
	call Common_EventScript_SetGymTrainers
# 813 "data/gym_leaders.pory"
	giveitem ITEM_TM_DUAL_WINGBEAT
# 814 "data/gym_leaders.pory"
	msgbox FortreeCity_Gym_Text_ExplainDualWingbeat, MSGBOX_DEFAULT
# 815 "data/gym_leaders.pory"
	closemessage
# 816 "data/gym_leaders.pory"
	delay 30
# 817 "data/gym_leaders.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 818 "data/gym_leaders.pory"
	bufferstring STR_VAR_1, Text_GymLeader
# 819 "data/gym_leaders.pory"
	bufferstring STR_VAR_2, CommonText_Winona
# 820 "data/gym_leaders.pory"
	msgbox Text_RegisteredInPokenav_TwoInputs, MSGBOX_DEFAULT
# 821 "data/gym_leaders.pory"
	waitfanfare
# 822 "data/gym_leaders.pory"
	closemessage
# 823 "data/gym_leaders.pory"
	delay 30
# 824 "data/gym_leaders.pory"
	setflag FLAG_ENABLE_WINONA_MATCH_CALL
# 825 "data/gym_leaders.pory"
	setvar VAR_SCOTT_FORTREE_CALL_STEP_COUNTER, 0
# 826 "data/gym_leaders.pory"
	setflag FLAG_SCOTT_CALL_FORTREE_GYM
# 827 "data/gym_leaders.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 828 "data/gym_leaders.pory"
	release
	return


FortreeCity_Gym_EventScript_WinonaRematch::
# 832 "data/gym_leaders.pory"
	trainerbattle_rematch_double TRAINER_WINONA_1, FortreeCity_Gym_Text_WinonaPreRematch, FortreeCity_Gym_Text_WinonaRematchDefeat, FortreeCity_Gym_Text_WinonaRematchNeedTwoMons
# 833 "data/gym_leaders.pory"
	msgbox FortreeCity_Gym_Text_WinonaPostRematch, MSGBOX_AUTOCLOSE
# 834 "data/gym_leaders.pory"
	clearflag FLAG_CHALLENGING_TRAINER
	return


MossdeepCity_Gym_EventScript_TateAndLiza::
# 926 "data/gym_leaders.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 927 "data/gym_leaders.pory"
	trainerbattle_double TRAINER_TATE_AND_LIZA_1, MossdeepCity_Gym_Text_TateAndLizaIntro, MossdeepCity_Gym_Text_TateAndLizaDefeat, MossdeepCity_Gym_Text_TateAndLizaNeedTwoMons, MossdeepCity_Gym_EventScript_TateAndLizaDefeated, NO_MUSIC
# 928 "data/gym_leaders.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 929 "data/gym_leaders.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MossdeepCity_Gym_EventScript_TateAndLiza_2
MossdeepCity_Gym_EventScript_TateAndLiza_1:
# 932 "data/gym_leaders.pory"
	msgbox MossdeepCity_Gym_Text_TateAndLizaPostBattle, MSGBOX_DEFAULT
# 933 "data/gym_leaders.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 934 "data/gym_leaders.pory"
	release
	return

MossdeepCity_Gym_EventScript_TateAndLiza_2:
# 930 "data/gym_leaders.pory"
	goto MossdeepCity_Gym_EventScript_TateAndLizaRematch
	goto MossdeepCity_Gym_EventScript_TateAndLiza_1


MossdeepCity_Gym_EventScript_TateAndLizaDefeated::
# 938 "data/gym_leaders.pory"
	message MossdeepCity_Gym_Text_ReceivedMindBadge
# 939 "data/gym_leaders.pory"
	waitmessage
# 940 "data/gym_leaders.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 941 "data/gym_leaders.pory"
	msgbox MossdeepCity_Gym_Text_ExplainMindBadgeTakeThis, MSGBOX_DEFAULT
# 942 "data/gym_leaders.pory"
	setflag FLAG_DEFEATED_MOSSDEEP_GYM
# 943 "data/gym_leaders.pory"
	setflag FLAG_BADGE07_GET
# 944 "data/gym_leaders.pory"
	setflag FLAG_HIDE_AQUA_HIDEOUT_GRUNTS
# 945 "data/gym_leaders.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_STERNS_SHIPYARD_MR_BRINEY
# 946 "data/gym_leaders.pory"
	setvar VAR_0x8008, 7
# 947 "data/gym_leaders.pory"
	call Common_EventScript_SetGymTrainers
# 948 "data/gym_leaders.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_PATRONS
# 949 "data/gym_leaders.pory"
	clearflag FLAG_HIDE_MOSSDEEP_CITY_TEAM_MAGMA
# 950 "data/gym_leaders.pory"
	clearflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_1F_TEAM_MAGMA
# 951 "data/gym_leaders.pory"
	clearflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_2F_TEAM_MAGMA
# 952 "data/gym_leaders.pory"
	clearflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_2F_STEVEN
# 953 "data/gym_leaders.pory"
	setvar VAR_MOSSDEEP_CITY_STATE, 1
# 954 "data/gym_leaders.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_1F_STEVEN
# 955 "data/gym_leaders.pory"
	setvar VAR_MOSSDEEP_SPACE_CENTER_STATE, 1
# 956 "data/gym_leaders.pory"
	giveitem ITEM_TM_TRICK_ROOM
# 957 "data/gym_leaders.pory"
	msgbox MossdeepCity_Gym_Text_ExplainTrickRoom, MSGBOX_DEFAULT
# 958 "data/gym_leaders.pory"
	closemessage
# 959 "data/gym_leaders.pory"
	delay 30
# 960 "data/gym_leaders.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 961 "data/gym_leaders.pory"
	bufferstring STR_VAR_1, Text_GymLeaders
# 962 "data/gym_leaders.pory"
	bufferstring STR_VAR_2, CommonText_LizaAndTate
# 963 "data/gym_leaders.pory"
	msgbox Text_RegisteredInPokenav_TwoInputs, MSGBOX_DEFAULT
# 964 "data/gym_leaders.pory"
	waitfanfare
# 965 "data/gym_leaders.pory"
	closemessage
# 966 "data/gym_leaders.pory"
	delay 30
# 967 "data/gym_leaders.pory"
	setflag FLAG_ENABLE_TATE_AND_LIZA_MATCH_CALL
# 968 "data/gym_leaders.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 969 "data/gym_leaders.pory"
	release
	return


MossdeepCity_Gym_EventScript_TateAndLizaRematch::
# 973 "data/gym_leaders.pory"
	trainerbattle_rematch_double TRAINER_TATE_AND_LIZA_1, MossdeepCity_Gym_Text_TateAndLizaPreRematch, MossdeepCity_Gym_Text_TateAndLizaRematchDefeat, MossdeepCity_Gym_Text_TateAndLizaRematchNeedTwoMons
# 974 "data/gym_leaders.pory"
	msgbox MossdeepCity_Gym_Text_TateAndLizaPostRematch, MSGBOX_AUTOCLOSE
# 975 "data/gym_leaders.pory"
	clearflag FLAG_CHALLENGING_TRAINER
	return


SootopolisCity_Gym_1F_EventScript_Juan::
# 1082 "data/gym_leaders.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 1083 "data/gym_leaders.pory"
	trainerbattle_single TRAINER_JUAN_1, SootopolisCity_Gym_1F_Text_JuanIntro, SootopolisCity_Gym_1F_Text_JuanDefeat, SootopolisCity_Gym_1F_EventScript_JuanDefeated, NO_MUSIC
# 1084 "data/gym_leaders.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 1085 "data/gym_leaders.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SootopolisCity_Gym_1F_EventScript_Juan_2
SootopolisCity_Gym_1F_EventScript_Juan_1:
# 1088 "data/gym_leaders.pory"
	goto_if_unset FLAG_BADGE06_GET, SootopolisCity_Gym_1F_EventScript_Juan_5
SootopolisCity_Gym_1F_EventScript_Juan_4:
# 1091 "data/gym_leaders.pory"
	msgbox SootopolisCity_Gym_1F_Text_JuanPostBattle, MSGBOX_DEFAULT
# 1092 "data/gym_leaders.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 1093 "data/gym_leaders.pory"
	release
	return

SootopolisCity_Gym_1F_EventScript_Juan_2:
# 1086 "data/gym_leaders.pory"
	goto SootopolisCity_Gym_1F_EventScript_JuanRematch
	goto SootopolisCity_Gym_1F_EventScript_Juan_1

SootopolisCity_Gym_1F_EventScript_Juan_5:
# 1089 "data/gym_leaders.pory"
	goto SootopolisCity_Gym_1F_EventScript_GoGetFortreeBadge
	goto SootopolisCity_Gym_1F_EventScript_Juan_4


SootopolisCity_Gym_1F_EventScript_JuanDefeated::
# 1097 "data/gym_leaders.pory"
	message SootopolisCity_Gym_1F_Text_ReceivedRainBadge
# 1098 "data/gym_leaders.pory"
	waitmessage
# 1099 "data/gym_leaders.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 1100 "data/gym_leaders.pory"
	msgbox SootopolisCity_Gym_1F_Text_ExplainRainBadgeTakeThis, MSGBOX_DEFAULT
# 1101 "data/gym_leaders.pory"
	setflag FLAG_DEFEATED_SOOTOPOLIS_GYM
# 1102 "data/gym_leaders.pory"
	setflag FLAG_BADGE08_GET
# 1103 "data/gym_leaders.pory"
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_RESIDENTS
# 1104 "data/gym_leaders.pory"
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_STEVEN
# 1105 "data/gym_leaders.pory"
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_WALLACE
# 1106 "data/gym_leaders.pory"
	setvar VAR_SOOTOPOLIS_CITY_STATE, 6
# 1107 "data/gym_leaders.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_MAN_1
# 1108 "data/gym_leaders.pory"
	setvar VAR_0x8008, 8
# 1109 "data/gym_leaders.pory"
	call Common_EventScript_SetGymTrainers
# 1110 "data/gym_leaders.pory"
	giveitem ITEM_TM_HYDRO_PUMP
# 1111 "data/gym_leaders.pory"
	msgbox SootopolisCity_Gym_1F_Text_ExplainHydroPump, MSGBOX_DEFAULT
# 1112 "data/gym_leaders.pory"
	closemessage
# 1113 "data/gym_leaders.pory"
	delay 30
# 1114 "data/gym_leaders.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 1115 "data/gym_leaders.pory"
	bufferstring STR_VAR_1, Text_GymLeader
# 1116 "data/gym_leaders.pory"
	bufferstring STR_VAR_2, CommonText_Juan
# 1117 "data/gym_leaders.pory"
	msgbox Text_RegisteredInPokenav_TwoInputs, MSGBOX_DEFAULT
# 1118 "data/gym_leaders.pory"
	waitfanfare
# 1119 "data/gym_leaders.pory"
	closemessage
# 1120 "data/gym_leaders.pory"
	delay 30
# 1121 "data/gym_leaders.pory"
	setflag FLAG_ENABLE_JUAN_MATCH_CALL
# 1122 "data/gym_leaders.pory"
	release
	return


SootopolisCity_Gym_1F_EventScript_GoGetFortreeBadge::
# 1126 "data/gym_leaders.pory"
	msgbox SootopolisCity_Gym_1F_Text_GoGetFortreeBadge, MSGBOX_DEFAULT
# 1127 "data/gym_leaders.pory"
	release
	return


SootopolisCity_Gym_1F_EventScript_JuanRematch::
# 1131 "data/gym_leaders.pory"
	trainerbattle_rematch_double TRAINER_JUAN_1, SootopolisCity_Gym_1F_Text_JuanPreRematch, SootopolisCity_Gym_1F_Text_JuanRematchDefeat, SootopolisCity_Gym_1F_Text_JuanRematchNeedTwoMons
# 1132 "data/gym_leaders.pory"
	msgbox SootopolisCity_Gym_1F_Text_JuanPostRematch, MSGBOX_AUTOCLOSE
	return


RustboroCity_Gym_Text_RoxanneIntro::
# 59 "data/gym_leaders.pory"
	.string "Hello, I am Roxanne, the Rustboro\n"
	.string "Pokémon Gym Leader.\p"
	.string "I became a Gym Leader so that I might\n"
	.string "apply what I learned at the Pokémon\l"
	.string "Trainer's School in battle.\p"
	.string "Would you kindly demonstrate how you\n"
	.string "battle, and with which Pokémon?$"

RustboroCity_Gym_Text_RoxanneDefeat::
# 69 "data/gym_leaders.pory"
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
# 82 "data/gym_leaders.pory"
	.string "{PLAYER} received the Stone Badge\n"
	.string "from Roxanne.$"

RustboroCity_Gym_Text_StoneBadgeInfoTakeThis::
# 87 "data/gym_leaders.pory"
	.string "The Stone Badge enables the use of\n"
	.string "Cut outside of battle.\p"
	.string "Please take this with you, too.$"

RustboroCity_Gym_Text_ExplainSmackDown::
# 93 "data/gym_leaders.pory"
	.string "That Technical Machine, TM96,\n"
	.string "contains Smack Down.\p"
	.string "It not only inflicts damage by throwing\n"
	.string "rocks, it also grounds flying targets.\p"
	.string "If you use a TM, it instantly teaches\n"
	.string "the move to a Pokémon.\p"
	.string "Remember, a TM can be used multiple\n"
	.string "times.$"

RustboroCity_Gym_Text_RoxannePostBattle::
# 104 "data/gym_leaders.pory"
	.string "Since you are so strong, you should\n"
	.string "challenge other Gym Leaders.\p"
	.string "By battling many Trainers, you should\n"
	.string "learn many things.$"

RustboroCity_Gym_Text_RoxanneRegisterCall::
# 111 "data/gym_leaders.pory"
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

RustboroCity_Gym_Text_RoxannePreRematch::
# 129 "data/gym_leaders.pory"
	.string "Roxanne: I'm so glad to see you again.\n"
	.string "I'm Roxanne, the Gym Leader here.\p"
	.string "I'm sure we've both experienced many\n"
	.string "battles since we last met.\p"
	.string "I would like to see how much better\n"
	.string "we've become. Let us battle!$"

RustboroCity_Gym_Text_RoxanneRematchDefeat::
# 138 "data/gym_leaders.pory"
	.string "Grr…\n"
	.string "Again, I have lost…$"

RustboroCity_Gym_Text_RoxannePostRematch::
# 143 "data/gym_leaders.pory"
	.string "Roxanne: I still have much to learn\n"
	.string "when it comes to battling Pokémon.\p"
	.string "That awareness makes me love battling\n"
	.string "all that much more!$"

RustboroCity_Gym_Text_RoxanneRematchNeedTwoMons::
# 150 "data/gym_leaders.pory"
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

DewfordTown_Gym_Text_BrawlyPostBattle::
# 255 "data/gym_leaders.pory"
	.string "I can see your talent becoming a giant\n"
	.string "wave to cause a storm of astonishment\l"
	.string "among Trainers one day!$"

DewfordTown_Gym_Text_BrawlyPreRematch::
# 261 "data/gym_leaders.pory"
	.string "Brawly: A wave may draw back, but it\n"
	.string "always returns to the shore.\p"
	.string "A giant wave of a talent like you…\n"
	.string "I knew you would return!\p"
	.string "Show me how much higher\n"
	.string "you've gone!$"

DewfordTown_Gym_Text_BrawlyRematchDefeat::
# 270 "data/gym_leaders.pory"
	.string "Wow!\n"
	.string "Swamped again!$"

DewfordTown_Gym_Text_BrawlyPostRematch::
# 275 "data/gym_leaders.pory"
	.string "Brawly: Battling is vast and it's deep.\n"
	.string "You can't see the bottom.\l"
	.string "It's just like the sea of Hoenn!$"

DewfordTown_Gym_Text_BrawlyRematchNeedTwoMons::
# 281 "data/gym_leaders.pory"
	.string "Brawly: A wave may draw back, but it\n"
	.string "always returns to the shore.\p"
	.string "A giant wave of a talent like you…\n"
	.string "I knew you would return!\p"
	.string "Oh? You only have one Pokémon\n"
	.string "that can battle.\p"
	.string "I'm sorry, but I'd like you to come back\n"
	.string "with at least two Pokémon.$"

MauvilleCity_Gym_Text_WattsonIntro::
# 357 "data/gym_leaders.pory"
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
# 371 "data/gym_leaders.pory"
	.string "Wahahahah!\n"
	.string "Fine, I lost!\p"
	.string "You ended up giving me a thrill!\n"
	.string "Take this Badge!$"

MauvilleCity_Gym_Text_ReceivedDynamoBadge::
# 378 "data/gym_leaders.pory"
	.string "{PLAYER} received the Dynamo Badge\n"
	.string "from Wattson.$"

MauvilleCity_Gym_Text_ExplainDynamoBadgeTakeThis::
# 383 "data/gym_leaders.pory"
	.string "With the Dynamo Badge, you can\n"
	.string "use Rock Smash out of battle.\p"
	.string "Hmm…\n"
	.string "You should take this, too!$"

MauvilleCity_Gym_Text_ExplainChargeBeam::
# 390 "data/gym_leaders.pory"
	.string "That TM55 there contains Charge Beam.\p"
	.string "It's a trustworthy move that always\n"
	.string "raises Sp. Attack! You can count on it!\p"
	.string "… … … … … …$"

MauvilleCity_Gym_Text_WattsonPostBattle::
# 397 "data/gym_leaders.pory"
	.string "I swell with optimism, seeing a promising\n"
	.string "young Trainer like you!$"

MauvilleCity_Gym_Text_WattsonGoForthAndEndeavor::
# 402 "data/gym_leaders.pory"
	.string "Wahahahah!\n"
	.string "Go forth and endeavor, youngster!$"

MauvilleCity_Gym_Text_WattsonPreRematch::
# 407 "data/gym_leaders.pory"
	.string "Wattson: Ah-ha! Here at last!\n"
	.string "I know what you want.\l"
	.string "You want to battle my Pokémon!\p"
	.string "Wahahahaha!\p"
	.string "I'll make sparks fly from you!\n"
	.string "Don't say I didn't warn you!$"

MauvilleCity_Gym_Text_WattsonRematchDefeat::
# 416 "data/gym_leaders.pory"
	.string "Oof…\n"
	.string "Our batteries ran dry…$"

MauvilleCity_Gym_Text_WattsonPostRematch::
# 421 "data/gym_leaders.pory"
	.string "Wattson: We'll have to recharge our\n"
	.string "batteries again.\p"
	.string "When we're fully charged up, we'll\n"
	.string "gladly accept your challenge.\p"
	.string "So, come back again sometime,\n"
	.string "won't you?$"

MauvilleCity_Gym_Text_WattsonRematchNeedTwoMons::
# 430 "data/gym_leaders.pory"
	.string "Wattson: Ah-ha! Here at last!\n"
	.string "I know what you want.\l"
	.string "You want to battle my Pokémon!\p"
	.string "Wahahahaha!\p"
	.string "Oops! Wait!\n"
	.string "You've only one Pokémon with you!\p"
	.string "Come see me with two or more\n"
	.string "Pokémon, all right?$"

LavaridgeTown_Gym_1F_Text_FlanneryIntro::
# 495 "data/gym_leaders.pory"
	.string "Welcome… No, wait.\p"
	.string "Puny Trainer, how good to see you've\n"
	.string "made it here!\p"
	.string "I have been entrusted with the…\n"
	.string "No, wait.\p"
	.string "I am Flannery, and I'm the Gym\n"
	.string "Leader here!\p"
	.string "Uh…\n"
	.string "Dare not underestimate me, though\l"
	.string "I have been Leader only a short time!\p"
	.string "With skills inherited from my grand-\n"
	.string "father, I shall, uh…demonstrate the\l"
	.string "hot moves we have honed on this land!$"

LavaridgeTown_Gym_1F_Text_FlanneryDefeat::
# 511 "data/gym_leaders.pory"
	.string "Oh…\n"
	.string "I guess I was trying too hard…\p"
	.string "I… I've only recently become\n"
	.string "a Gym Leader.\p"
	.string "I tried too hard to be someone\n"
	.string "I'm not.\p"
	.string "I have to do things my natural way. If\n"
	.string "I don't, my Pokémon will be confused.\p"
	.string "Thanks for teaching me that.\n"
	.string "For that, you deserve this.$"

LavaridgeTown_Gym_1F_Text_ReceivedHeatBadge::
# 524 "data/gym_leaders.pory"
	.string "{PLAYER} received the Heat Badge\n"
	.string "from Flannery.$"

LavaridgeTown_Gym_1F_Text_ExplainHeatBadgeTakeThis::
# 529 "data/gym_leaders.pory"
	.string "If you have a Heat Badge, all Pokémon\n"
	.string "up to Level 50, even those you get in\l"
	.string "trades from other people, will obey\l"
	.string "you completely.\p"
	.string "And, it lets you use the HM move\n"
	.string "Strength outside of battle.\p"
	.string "This is a token of my appreciation.\n"
	.string "Don't be shy about taking it!$"

LavaridgeTown_Gym_1F_Text_ExplainBlazeKick::
# 540 "data/gym_leaders.pory"
	.string "That TM40 contains Blaze Kick.\p"
	.string "That move inflicts serious damage on\n"
	.string "the opponent and has a high chance\l"
	.string "to deal a critical hit.$"

LavaridgeTown_Gym_1F_Text_FlanneryPostBattle::
# 547 "data/gym_leaders.pory"
	.string "Your power reminds me of someone…\p"
	.string "Oh! I know! You battle like Norman,\n"
	.string "the Gym Leader of Petalburg.$"

LavaridgeTown_Gym_1F_Text_FlanneryPreRematch::
# 553 "data/gym_leaders.pory"
	.string "Flannery: Losing a battle isn't going\n"
	.string "to deflate me.\p"
	.string "I love Pokémon.\n"
	.string "I love to battle.\l"
	.string "And… I love this Gym!\p"
	.string "Let's exchange superhot moves\n"
	.string "in another battle!$"

LavaridgeTown_Gym_1F_Text_FlanneryRematchDefeat::
# 563 "data/gym_leaders.pory"
	.string "Whew!\n"
	.string "On the verge of eruption!$"

LavaridgeTown_Gym_1F_Text_FlanneryPostRematch::
# 568 "data/gym_leaders.pory"
	.string "Flannery: I lost the match,\n"
	.string "but I'm completely satisfied.\p"
	.string "It's not often I get to enjoy a battle\n"
	.string "this heated.\p"
	.string "Let's have another one like this\n"
	.string "again sometime!$"

LavaridgeTown_Gym_1F_Text_FlanneryRematchNeedTwoMons::
# 577 "data/gym_leaders.pory"
	.string "Flannery: Losing a battle isn't going\n"
	.string "to deflate me.\p"
	.string "I love Pokémon.\n"
	.string "I love to battle.\l"
	.string "And… I love this Gym!\p"
	.string "Let's exchange superhot moves\n"
	.string "in another battle!\p"
	.string "Oh, wait. Do you only have one Pokémon\n"
	.string "that can battle?\p"
	.string "I hate to say this, but when you come\n"
	.string "see me, bring at least two Pokémon.$"

PetalburgCity_Gym_Text_NormanIntro::
# 670 "data/gym_leaders.pory"
	.string "Hm…\n"
	.string "So, you did get four Gym Badges.\p"
	.string "Fine, as I promised, we will have\n"
	.string "a Pokémon battle.\p"
	.string "{PLAYER}…\p"
	.string "I'm so happy that I can have\n"
	.string "a real battle with my own child.\p"
	.string "But, a battle is a battle!\p"
	.string "I will do everything in my power as\n"
	.string "a Gym Leader to win.\p"
	.string "{PLAYER}, you'd better give it your\n"
	.string "best shot, too!$"

PetalburgCity_Gym_Text_NormanDefeat::
# 685 "data/gym_leaders.pory"
	.string "…\p"
	.string "I… I can't…\p"
	.string "I can't believe it. {PLAYER}…\p"
	.string "I lost to {PLAYER}?\p"
	.string "But, rules are rules!\n"
	.string "Here, take this.$"

PetalburgCity_Gym_Text_ReceivedBalanceBadge::
# 694 "data/gym_leaders.pory"
	.string "{PLAYER} received the Balance Badge\n"
	.string "from Dad!$"

PetalburgCity_Gym_Text_ExplainBalanceBadgeTakeThis::
# 699 "data/gym_leaders.pory"
	.string "With that Badge, you will be able\n"
	.string "to use Surf to travel over water\p"
	.string "This is my gift to you. {PLAYER}, I'm\n"
	.string "sure you can use it correctly.$"

PetalburgCity_Gym_Text_ExplainFacade::
# 706 "data/gym_leaders.pory"
	.string "TM42 contains Facade.\p"
	.string "It doubles the power of moves if\n"
	.string "the Pokémon is poisoned, paralyzed,\l"
	.string "or burned.\p"
	.string "It might be able to turn a bad\n"
	.string "situation into an advantage.$"

PetalburgCity_Gym_Text_DadPokevial2::
# 715 "data/gym_leaders.pory"
	.string "Wait, what's this?\p"
	.string "You still haven't gotten any\n"
	.string "additional doses for your Pokevial\l"
	.string "yet?\p"
	.string "I suppose since you beat me, I\n"
	.string "should award another to you.$"

PetalburgCity_Gym_Text_DadHappyAndSad::
# 724 "data/gym_leaders.pory"
	.string "As the Gym Leader, I can't\n"
	.string "express how upset I am…\p"
	.string "But as a father, it makes me both\n"
	.string "happy and a little sad. It's odd…$"

PetalburgCity_Gym_Text_DadGoingToKeepTraining::
# 731 "data/gym_leaders.pory"
	.string "{PLAYER}, you should go visit your\n"
	.string "mother every so often.\p"
	.string "I'm going to stay here and redouble\n"
	.string "my training.\p"
	.string "It would bother me as a Trainer to\n"
	.string "not avenge my loss to you, {PLAYER}!$"

PetalburgCity_Gym_Text_DadNoAmountOfTrainingIsEnough::
# 740 "data/gym_leaders.pory"
	.string "{PLAYER}, how are things going?\p"
	.string "The world of Pokémon is deep.\p"
	.string "I honestly think that no amount of\n"
	.string "training would ever be enough.$"

PetalburgCity_Gym_Text_NormanPreRematch::
# 747 "data/gym_leaders.pory"
	.string "{PLAYER}…\n"
	.string "I had a feeling that you would come.\p"
	.string "I would never refuse to accept\n"
	.string "a challenge from you.\p"
	.string "You do understand, don't you?\p"
	.string "Inside a Gym, it doesn't matter that\n"
	.string "we are a parent and child.\p"
	.string "…No, because we are parent and child,\n"
	.string "we owe it to each other to do the best\l"
	.string "we can. Isn't that right, {PLAYER}?$"

PetalburgCity_Gym_Text_NormanRematchDefeat::
# 760 "data/gym_leaders.pory"
	.string "Uh… Haha…\n"
	.string "Maybe that was going too hard…$"

PetalburgCity_Gym_Text_NormanPostRematch::
# 765 "data/gym_leaders.pory"
	.string "{PLAYER}…\n"
	.string "What is your dream?\p"
	.string "My dream…\n"
	.string "Hahaha…\l"
	.string "It has already come true, actually.$"

PetalburgCity_Gym_Text_NormanRematchNeedTwoMons::
# 773 "data/gym_leaders.pory"
	.string "{PLAYER}…\n"
	.string "I had a feeling that you would come.\p"
	.string "I would never refuse to accept\n"
	.string "a challenge from you.\p"
	.string "You do understand, don't you?\p"
	.string "Inside a Gym, it doesn't matter that\n"
	.string "we are a parent and child.\p"
	.string "Hm? Wait a second, {PLAYER}.\p"
	.string "Do you only have one Pokémon that is\n"
	.string "capable of battle?\p"
	.string "Sorry, but you'll have to come back\n"
	.string "with at least two Pokémon.$"

FortreeCity_Gym_Text_WinonaIntro::
# 838 "data/gym_leaders.pory"
	.string "I am Winona. I am the Leader of\n"
	.string "the Fortree Pokémon Gym.\p"
	.string "I have become one with Bird Pokémon\n"
	.string "and have soared the skies…\p"
	.string "However grueling the battle, we have\n"
	.string "triumphed with grace…\p"
	.string "Witness the elegant choreography\n"
	.string "of Bird Pokémon and I!$"

FortreeCity_Gym_Text_WinonaDefeat::
# 849 "data/gym_leaders.pory"
	.string "Never before have I seen a Trainer\n"
	.string "command Pokémon with more grace\l"
	.string "than I…\p"
	.string "In recognition of your prowess,\n"
	.string "I present to you this Gym Badge.$"

FortreeCity_Gym_Text_ReceivedFeatherBadge::
# 857 "data/gym_leaders.pory"
	.string "{PLAYER} received the Feather Badge\n"
	.string "from Winona.$"

FortreeCity_Gym_Text_ExplainFeatherBadgeTakeThis::
# 862 "data/gym_leaders.pory"
	.string "With the Feather Badge, all Pokémon up\n"
	.string "to Lv 70, even those received through\l"
	.string "trades, will obey your every command.\p"
	.string "You will also be able to use\n"
	.string "Fly outside of battle.\p"
	.string "And this…\n"
	.string "This is a gift from me.$"

FortreeCity_Gym_Text_ExplainDualWingbeat::
# 872 "data/gym_leaders.pory"
	.string "TM80 contains Dual Wingbeat.\p"
	.string "Its speed…\n"
	.string "Two wings strike at blinding speed.\p"
	.string "… … … … … …$"

FortreeCity_Gym_Text_WinonaPostBattle::
# 879 "data/gym_leaders.pory"
	.string "Though I fell to you, I will remain\n"
	.string "devoted to Bird Pokémon.$"

FortreeCity_Gym_Text_WinonaPreRematch::
# 884 "data/gym_leaders.pory"
	.string "Winona: We humans can never escape\n"
	.string "gravity's pull on the ground.\p"
	.string "But by striving for excellence,\n"
	.string "we have the power to soar!\p"
	.string "You have scaled the pinnacle as\n"
	.string "the reigning Champion.\p"
	.string "Please, allow me to see your power\n"
	.string "at full flight!$"

FortreeCity_Gym_Text_WinonaRematchDefeat::
# 895 "data/gym_leaders.pory"
	.string "I failed to reach your height again…$"

FortreeCity_Gym_Text_WinonaPostRematch::
# 899 "data/gym_leaders.pory"
	.string "Winona: Even though I have lost,\n"
	.string "the wings of my heart remain unbroken.\p"
	.string "I can rise and soar again and\n"
	.string "yet again.\p"
	.string "I am convinced of it!$"

FortreeCity_Gym_Text_WinonaRematchNeedTwoMons::
# 907 "data/gym_leaders.pory"
	.string "Winona: We humans can never escape\n"
	.string "gravity's pull on the ground.\p"
	.string "But by striving for excellence,\n"
	.string "we have the power to soar!\p"
	.string "You have scaled the pinnacle as\n"
	.string "the reigning Champion.\p"
	.string "Please, allow me to see your power\n"
	.string "at full flight!\p"
	.string "Oh, no… Do you have but one\n"
	.string "Pokémon with you?\p"
	.string "Please return with two Pokémon\n"
	.string "at the very least.$"

MossdeepCity_Gym_Text_TateAndLizaIntro::
# 979 "data/gym_leaders.pory"
	.string "Tate: Hehehe… Were you surprised?\p"
	.string "Liza: Fufufu… Were you surprised?\p"
	.string "Tate: That there are two Gym Leaders?\n"
	.string "Liza: That there are two Gym Leaders?\p"
	.string "Tate: We're twins!\n"
	.string "Liza: We're twins!\p"
	.string "Tate: We don't need to talk because…\n"
	.string "Liza: We can each determine what…\p"
	.string "Tate: The other is thinking…\n"
	.string "Liza: All in our minds!\p"
	.string "Tate: This combination of ours…\n"
	.string "Liza: Can you beat it?$"

MossdeepCity_Gym_Text_TateAndLizaDefeat::
# 994 "data/gym_leaders.pory"
	.string "Tate: What?! Our combination…\n"
	.string "Liza: Was shattered!\p"
	.string "Tate: It can't be helped. You've won…\n"
	.string "Liza: So, in recognition, take this.$"

MossdeepCity_Gym_Text_ReceivedMindBadge::
# 1001 "data/gym_leaders.pory"
	.string "{PLAYER} received the Mind Badge\n"
	.string "from Tate and Liza.$"

MossdeepCity_Gym_Text_ExplainMindBadgeTakeThis::
# 1006 "data/gym_leaders.pory"
	.string "Liza: The Mind Badge lets you use\n"
	.string "Dive outside of battle.\p"
	.string "Tate: You should also take this, too.$"

MossdeepCity_Gym_Text_ExplainTrickRoom::
# 1012 "data/gym_leaders.pory"
	.string "Tate: That TM04 contains…\n"
	.string "Liza: Trick Room!\p"
	.string "Tate: It creates a bizarre area…\n"
	.string "Liza: That inverts speed!\p"
	.string "Tate: It's a move that's perfect…\n"
	.string "Liza: For Psychic Pokémon!\p"
	.string "… … … … … …$"

MossdeepCity_Gym_Text_TateAndLizaPostBattle::
# 1022 "data/gym_leaders.pory"
	.string "Tate: Looks like the bond between you\n"
	.string "and your Pokémon is far stronger than\l"
	.string "the bond that we share as twins.\p"
	.string "Liza: You will become even stronger!\n"
	.string "We've battled you, so we know.$"

MossdeepCity_Gym_Text_TateAndLizaNeedTwoMons::
# 1030 "data/gym_leaders.pory"
	.string "Tate: Hehehe… Were you surprised?\p"
	.string "Liza: That there are two Gym Leaders?\p"
	.string "Tate: Oops, you have only one…\n"
	.string "Liza: Pokémon that can battle.\p"
	.string "Tate: We can't battle that way!\p"
	.string "Liza: If you want to challenge us,\n"
	.string "bring some more Pokémon.$"

MossdeepCity_Gym_Text_TateAndLizaPreRematch::
# 1040 "data/gym_leaders.pory"
	.string "Tate: Pokémon…\n"
	.string "Liza: Pokémon…\p"
	.string "Tate: By changing the party's mix…\n"
	.string "Liza: The battle style changes.\p"
	.string "Tate: But me…\n"
	.string "Liza: But me…\p"
	.string "Tate: I'll always be with Liza!\n"
	.string "Liza: I'll always be with Tate!\p"
	.string "Tate: Our combination…\n"
	.string "Liza: We'll show you again and again!$"

MossdeepCity_Gym_Text_TateAndLizaRematchDefeat::
# 1053 "data/gym_leaders.pory"
	.string "Tate: You and your Pokémon…\n"
	.string "Liza: It's as if you were siblings!$"

MossdeepCity_Gym_Text_TateAndLizaPostRematch::
# 1058 "data/gym_leaders.pory"
	.string "Tate: You can knock us down,\n"
	.string "but we'll never stay down!\p"
	.string "Liza: Because the two of us,\n"
	.string "we always support each other!$"

MossdeepCity_Gym_Text_TateAndLizaRematchNeedTwoMons::
# 1065 "data/gym_leaders.pory"
	.string "Tate: You're back again…\n"
	.string "Liza: You're back again…\p"
	.string "Tate: To give us a rematch.\n"
	.string "Liza: To give us a rematch.\p"
	.string "Tate: But…\n"
	.string "Liza: For our match…\p"
	.string "Tate: You brought just one Pokémon!\n"
	.string "Liza: You brought just one Pokémon!\p"
	.string "Tate: We need you to bring at least…\n"
	.string "Liza: Two Pokémon when you come back.$"

SootopolisCity_Gym_1F_Text_JuanIntro::
# 1136 "data/gym_leaders.pory"
	.string "Let me ask you.\n"
	.string "Did you know?\l"
	.string "Ah, I should not be so coy.\p"
	.string "It was I who taught Wallace everything\n"
	.string "there is to know about Pokémon.\p"
	.string "Once, I had given up my position as\n"
	.string "the Gym Leader.\p"
	.string "In my place, I had entrusted Wallace\n"
	.string "with the Gym.\p"
	.string "However, a compelling reason arose for\n"
	.string "me to make a comeback.\p"
	.string "Ah, but enough chatter.\n"
	.string "Let us begin our match, shall we?\p"
	.string "Please, you shall bear witness to\n"
	.string "our artistry.\p"
	.string "A grand illusion of water sculpted\n"
	.string "by Pokémon and myself!$"

SootopolisCity_Gym_1F_Text_JuanDefeat::
# 1160 "data/gym_leaders.pory"
	.string "Ahahaha, excellent!\n"
	.string "Very well, you are the winner.\p"
	.string "From you, I sense the brilliant shine\n"
	.string "of skill that will overcome all.\p"
	.string "However, compared with me or even\n"
	.string "Wallace, you are lacking in elegance.\p"
	.string "Perhaps I should make you a loan\n"
	.string "of my outfit?\p"
	.string "… … … … … …\n"
	.string "… … … … … …\p"
	.string "Hahaha, I merely jest!\p"
	.string "Rather than my clothes, I shall reward\n"
	.string "you with this, the Rain Badge!$"

SootopolisCity_Gym_1F_Text_ReceivedRainBadge::
# 1176 "data/gym_leaders.pory"
	.string "{PLAYER} received the Rain Badge\n"
	.string "from Juan.$"

SootopolisCity_Gym_1F_Text_ExplainRainBadgeTakeThis::
# 1181 "data/gym_leaders.pory"
	.string "Having the Rain Badge shall assure you\n"
	.string "the full obedience of all your Pokémon\l"
	.string "to your every command.\p"
	.string "The Rain Badge also allows the use\n"
	.string "of Waterfall to scale walls of \l"
	.string "cascading water.\p"
	.string "And, so that you never forget the\n"
	.string "battle we shared, take this…$"

SootopolisCity_Gym_1F_Text_ExplainHydroPump::
# 1192 "data/gym_leaders.pory"
	.string "The Technical Machine I handed you\n"
	.string "contains Hydro Pump.\p"
	.string "In use, it will strike twice with\n"
	.string "a huge volume of pressurized water.\p"
	.string "… … … … … …$"

SootopolisCity_Gym_1F_Text_JuanPostBattle::
# 1200 "data/gym_leaders.pory"
	.string "The Trainers who have gathered all\n"
	.string "the Gym Badges of Hoenn should make\l"
	.string "way to the ultimate destination.\p"
	.string "The Pokémon League.\p"
	.string "Travel to the easternmost reaches\n"
	.string "of Hoenn, to the island Ever Grande.\p"
	.string "There, you shall find the Pokémon\n"
	.string "League.$"

SootopolisCity_Gym_1F_Text_GoGetFortreeBadge::
# 1211 "data/gym_leaders.pory"
	.string "There remains but one Badge to\n"
	.string "obtain in Hoenn.\p"
	.string "If you wish to challenge the Pokémon\n"
	.string "League, you must obtain the last\l"
	.string "Badge from the Gym in Fortree.$"

SootopolisCity_Gym_1F_Text_JuanPreRematch::
# 1219 "data/gym_leaders.pory"
	.string "Juan: Ah, this Gym had returned to its\n"
	.string "usual state of serenity…\p"
	.string "But our young typhoon has returned\n"
	.string "to put us to the test again!\p"
	.string "Well, my friend, most certainly!\p"
	.string "I shall be delighted to dance with you\n"
	.string "as often as you wish!$"

SootopolisCity_Gym_1F_Text_JuanRematchDefeat::
# 1229 "data/gym_leaders.pory"
	.string "Ahahaha, you are the winner!\n"
	.string "You have defeated me again!$"

SootopolisCity_Gym_1F_Text_JuanPostRematch::
# 1234 "data/gym_leaders.pory"
	.string "Juan: If I told you to become my\n"
	.string "apprentice, you will refuse, I am sure.\p"
	.string "I would like to make a gift of my coat\n"
	.string "to you.\p"
	.string "But again, you will refuse.\n"
	.string "I imagine that to be so.\p"
	.string "And that, my friend, is a certain sign\n"
	.string "of nobility!$"

SootopolisCity_Gym_1F_Text_JuanRematchNeedTwoMons::
# 1245 "data/gym_leaders.pory"
	.string "Juan: Ah, this Gym had returned to its\n"
	.string "usual state of serenity…\p"
	.string "But our young typhoon has returned\n"
	.string "to put us to the test again!\p"
	.string "Well, my friend, most certainly!\n"
	.string "I shall be delighted to dance with you…\p"
	.string "Ah, no, no, no.\n"
	.string "You have with you but one Pokémon.\p"
	.string "I wish that you would return with\n"
	.string "two, perhaps more, Pokémon, please.$"
