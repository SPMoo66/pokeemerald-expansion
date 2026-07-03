IllusoryGrotto_B2F_1R_MapScripts::
# 4 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, IllusoryGrotto_B2F_1R_MapScripts_MAP_SCRIPT_ON_LOAD
# 13 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, IllusoryGrotto_B2F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

IllusoryGrotto_B2F_1R_MapScripts_MAP_SCRIPT_ON_LOAD:
# 5 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	goto_if_set FLAG_EXP_1_ILLUSORY_GROTTO_B2F_1R_ROCK_IN_PLACE, IllusoryGrotto_B2F_1R_MapScripts_MAP_SCRIPT_ON_LOAD_2
IllusoryGrotto_B2F_1R_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 8 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	goto_if_set FLAG_EXP_1_ILLUSORY_GROTTO_B2F_1R_ROCK, IllusoryGrotto_B2F_1R_MapScripts_MAP_SCRIPT_ON_LOAD_4
	return

IllusoryGrotto_B2F_1R_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 6 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	setmetatile 18, 6, 0x01C, TRUE
	goto IllusoryGrotto_B2F_1R_MapScripts_MAP_SCRIPT_ON_LOAD_1

IllusoryGrotto_B2F_1R_MapScripts_MAP_SCRIPT_ON_LOAD_4:
# 9 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	setmetatile 18, 6, 0x011, FALSE
# 10 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	setmetatile 18, 8, 0x053, TRUE
	return

IllusoryGrotto_B2F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 14 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	setflag FLAG_TEMP_3
# 15 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	goto_if_set FLAG_EXP_1_ILLUSORY_GROTTO_B2F_1R_ROCK_IN_PLACE, IllusoryGrotto_B2F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
IllusoryGrotto_B2F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 18 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	goto_if_set FLAG_EXP_1_ILLUSORY_GROTTO_B2F_1R_ROCK, IllusoryGrotto_B2F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
IllusoryGrotto_B2F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION_6:
# 21 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	checktrainerflag TRAINER_WILD_POKEMON_IG_3
	goto_if 1, IllusoryGrotto_B2F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION_10
IllusoryGrotto_B2F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION_9:
# 24 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	checktrainerflag TRAINER_WILD_POKEMON_IG_4
	goto_if 1, IllusoryGrotto_B2F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION_12
	return

IllusoryGrotto_B2F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 16 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	clearflag FLAG_TEMP_3
	goto IllusoryGrotto_B2F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

IllusoryGrotto_B2F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
# 15 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	goto_if_unset FLAG_EXP_1_ILLUSORY_GROTTO_B2F_1R_ROCK, IllusoryGrotto_B2F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
	goto IllusoryGrotto_B2F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

IllusoryGrotto_B2F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 19 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	setvar VAR_TEMP_3, 1
	goto IllusoryGrotto_B2F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION_6

IllusoryGrotto_B2F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 22 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	setflag FLAG_TEMP_1
	goto IllusoryGrotto_B2F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION_9

IllusoryGrotto_B2F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION_12:
# 25 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	setflag FLAG_TEMP_2
	return


IllusoryGrotto_B2F_1R_EventScript_WildPokemon1::
# 31 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	checktrainerflag TRAINER_WILD_POKEMON_IG_3
	goto_if 0, IllusoryGrotto_B2F_1R_EventScript_WildPokemon1_2
IllusoryGrotto_B2F_1R_EventScript_WildPokemon1_1:
# 52 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	setvar VAR_TEMP_0, 1
	return

IllusoryGrotto_B2F_1R_EventScript_WildPokemon1_2:
# 32 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	lock
# 33 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	setflag FLAG_WILD_OPPONENT
# 34 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	playmoncry SPECIES_LUCARIO, CRY_MODE_ENCOUNTER
# 35 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	waitmoncry
# 36 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	msgbox Exp1_WildPokemonTrainerText_Intro, MSGBOX_DEFAULT
# 37 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	trainerbattle_no_intro TRAINER_WILD_POKEMON_IG_3, Exp1_WildPokemonTrainerText_Defeat
# 38 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	playmoncry SPECIES_LUCARIO, CRY_MODE_WEAK
# 39 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	waitmoncry
# 40 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	applymovement 2, Common_Movement_WalkDownFast
# 41 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	waitmovement 0
# 42 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	playse SE_LEDGE
# 43 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	applymovement 2, Common_Movement_JumpDown
# 44 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	waitmovement 0
# 45 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	applymovement 2, Common_Movement_WalkDownFast5
# 46 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	waitmovement 0
# 47 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	setvar VAR_TEMP_0, 1
# 48 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	clearflag FLAG_WILD_OPPONENT
# 49 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	removeobject 2
# 50 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	release
	goto IllusoryGrotto_B2F_1R_EventScript_WildPokemon1_1


IllusoryGrotto_B2F_1R_EventScript_WildPokemon2::
# 56 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	checktrainerflag TRAINER_WILD_POKEMON_IG_4
	goto_if 0, IllusoryGrotto_B2F_1R_EventScript_WildPokemon2_2
IllusoryGrotto_B2F_1R_EventScript_WildPokemon2_1:
# 79 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	setvar VAR_TEMP_1, 1
	return

IllusoryGrotto_B2F_1R_EventScript_WildPokemon2_2:
# 57 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	lock
# 58 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_WEST
# 59 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	setflag FLAG_WILD_OPPONENT
# 60 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	playmoncry SPECIES_LUCARIO, CRY_MODE_ENCOUNTER
# 61 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	waitmoncry
# 62 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	msgbox Exp1_WildPokemonTrainerText_Intro, MSGBOX_DEFAULT
# 63 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	trainerbattle_no_intro TRAINER_WILD_POKEMON_IG_4, Exp1_WildPokemonTrainerText_Defeat
# 64 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	playmoncry SPECIES_LUCARIO, CRY_MODE_WEAK
# 65 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	waitmoncry
# 66 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	playse SE_LEDGE
# 67 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	applymovement 3, Common_Movement_JumpLeft2
# 68 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	waitmovement 0
# 69 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	playse SE_LEDGE
# 70 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	applymovement 3, Common_Movement_JumpLeft2
# 71 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	waitmovement 0
# 72 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	applymovement 3, Common_Movement_WalkLeftFast2
# 73 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	waitmovement 0
# 74 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	setvar VAR_TEMP_1, 1
# 75 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	clearflag FLAG_WILD_OPPONENT
# 76 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	removeobject 3
# 77 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	release
	goto IllusoryGrotto_B2F_1R_EventScript_WildPokemon2_1


IllusoryGrotto_B2F_1R_Rock::
# 84 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	goto_if_set FLAG_EXP_1_ILLUSORY_GROTTO_B2F_1R_ROCK_IN_PLACE, IllusoryGrotto_B2F_1R_Rock_3
IllusoryGrotto_B2F_1R_Rock_1:
# 100 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	release
	return

IllusoryGrotto_B2F_1R_Rock_2:
# 85 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	call IllusoryGrottoMovableRock_Exp1
# 86 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	setmetatile 18, 6, 0x011, FALSE
# 87 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	setmetatile 18, 7, 0x023, TRUE
# 88 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	special DrawWholeMapView
# 89 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	delay 10
# 90 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	setmetatile 18, 7, 0x019, TRUE
# 91 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	setmetatile 18, 8, 0x053, TRUE
# 92 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	special DrawWholeMapView
# 93 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	playse SE_M_STRENGTH
# 94 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	delay 10
# 95 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	setflag FLAG_EXP_1_ILLUSORY_GROTTO_B2F_1R_ROCK
# 96 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	setvar VAR_TEMP_3, 1
# 97 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	setflag FLAG_TEMP_3
# 98 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	removeobject 1
	goto IllusoryGrotto_B2F_1R_Rock_1

IllusoryGrotto_B2F_1R_Rock_3:
# 84 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	goto_if_unset FLAG_EXP_1_ILLUSORY_GROTTO_B2F_1R_ROCK, IllusoryGrotto_B2F_1R_Rock_2
	goto IllusoryGrotto_B2F_1R_Rock_1


IllusoryGrotto_B2F_1R_Monster::
# 104 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	call IllusoryGrotto_MonsterCommon1_Exp1
# 105 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	setmetatile 18, 8, 0x04D, TRUE
# 106 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	special DrawWholeMapView
# 107 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	delay 10
# 108 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	setmetatile 18, 8, 0x04E, TRUE
# 109 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	special DrawWholeMapView
# 110 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	delay 10
# 111 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	setmetatile 18, 8, 0x04F, TRUE
# 112 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	call IllusoryGrotto_MonsterCommon2_Exp1
# 113 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 114 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	compare VAR_TEMP_1, 9
	goto_if_eq IllusoryGrotto_B2F_1R_Monster_2
# 118 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkFastDown2
IllusoryGrotto_B2F_1R_Monster_1:
# 120 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	waitmovement 0
# 121 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_UnlockFacingDirection
# 122 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	waitmovement 0
# 123 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	setmetatile 18, 8, 0x04E, TRUE
# 124 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	special DrawWholeMapView
# 125 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	delay 10
# 126 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	setmetatile 18, 8, 0x04D, TRUE
# 127 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	special DrawWholeMapView
# 128 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	delay 10
# 129 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	setmetatile 18, 8, 0x04C, TRUE
# 130 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	special DrawWholeMapView
# 131 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	release
	return

IllusoryGrotto_B2F_1R_Monster_2:
# 115 "data/maps/IllusoryGrotto_B2F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkFastDown3
	goto IllusoryGrotto_B2F_1R_Monster_1

