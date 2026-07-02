IllusoryGrotto_B3F_1R_MapScripts::
# 4 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, IllusoryGrotto_B3F_1R_MapScripts_MAP_SCRIPT_ON_LOAD
# 10 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, IllusoryGrotto_B3F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

IllusoryGrotto_B3F_1R_MapScripts_MAP_SCRIPT_ON_LOAD:
# 5 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	goto_if_set FLAG_EXP_1_ILLUSORY_GROTTO_B3F_1R_ROCK, IllusoryGrotto_B3F_1R_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

IllusoryGrotto_B3F_1R_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 6 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	setmetatile 17, 16, 0x011, FALSE
# 7 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	setmetatile 17, 18, 0x023, TRUE
	return

IllusoryGrotto_B3F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 11 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	goto_if_set FLAG_EXP_1_ILLUSORY_GROTTO_B3F_1R_ROCK, IllusoryGrotto_B3F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
IllusoryGrotto_B3F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 14 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	checktrainerflag TRAINER_WILD_POKEMON_IG_2
	goto_if 1, IllusoryGrotto_B3F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
	return

IllusoryGrotto_B3F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 12 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	setvar VAR_TEMP_3, 1
	goto IllusoryGrotto_B3F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

IllusoryGrotto_B3F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 15 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	setflag FLAG_TEMP_1
	return


IllusoryGrotto_B3F_1R_EventScript_WildPokemon::
# 21 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	checktrainerflag TRAINER_WILD_POKEMON_IG_2
	goto_if 0, IllusoryGrotto_B3F_1R_EventScript_WildPokemon_2
IllusoryGrotto_B3F_1R_EventScript_WildPokemon_1:
# 28 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	setvar VAR_TEMP_0, 1
	return

IllusoryGrotto_B3F_1R_EventScript_WildPokemon_2:
# 22 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	lock
# 23 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	setflag FLAG_WILD_OPPONENT
# 24 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	playmoncry SPECIES_LUCARIO, CRY_MODE_ENCOUNTER
# 25 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	waitmoncry
# 26 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	trainerbattle_single TRAINER_WILD_POKEMON_IG_2, Exp1_WildPokemonTrainerText_Intro, Exp1_WildPokemonTrainerText_Defeat, IllusoryGrotto_B3F_1R_EventScript_WildPokemon_Victory
	goto IllusoryGrotto_B3F_1R_EventScript_WildPokemon_1


IllusoryGrotto_B3F_1R_EventScript_WildPokemon_Victory::
# 32 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	playmoncry SPECIES_LUCARIO, CRY_MODE_WEAK
# 33 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	waitmoncry
# 34 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	applymovement 2, Common_Movement_WalkLeftFast4
# 35 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	waitmovement 0
# 36 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	applymovement 2, Common_Movement_WalkUpFast3
# 37 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	waitmovement 0
# 38 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	setvar VAR_TEMP_0, 1
# 39 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	clearflag FLAG_WILD_OPPONENT
# 40 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	removeobject 2
# 41 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	release
	return


IllusoryGrotto_B3F_1R_Rock::
# 45 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	goto_if_unset FLAG_EXP_1_ILLUSORY_GROTTO_B3F_1R_ROCK, IllusoryGrotto_B3F_1R_Rock_2
IllusoryGrotto_B3F_1R_Rock_1:
# 60 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	release
	return

IllusoryGrotto_B3F_1R_Rock_2:
# 46 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	call IllusoryGrottoMovableRock_Exp1
# 47 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	setmetatile 17, 16, 0x011, FALSE
# 48 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	setmetatile 17, 17, 0x023, TRUE
# 49 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	special DrawWholeMapView
# 50 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	delay 10
# 51 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	setmetatile 17, 17, 0x019, TRUE
# 52 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	setmetatile 17, 18, 0x023, TRUE
# 53 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	special DrawWholeMapView
# 54 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	playse SE_M_STRENGTH
# 55 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	delay 10
# 56 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	setflag FLAG_EXP_1_ILLUSORY_GROTTO_B3F_1R_ROCK
# 57 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	setvar VAR_TEMP_3, 1
# 58 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	removeobject 1
	goto IllusoryGrotto_B3F_1R_Rock_1


IllusoryGrotto_B3F_1R_Monster1::
# 64 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	call IllusoryGrotto_MonsterCommon1_Exp1
# 65 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	setmetatile 17, 18, 0x025, TRUE
# 66 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	special DrawWholeMapView
# 67 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	delay 10
# 68 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	setmetatile 17, 18, 0x026, TRUE
# 69 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	special DrawWholeMapView
# 70 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	delay 10
# 71 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	setmetatile 17, 18, 0x027, TRUE
# 72 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	call IllusoryGrotto_MonsterCommon2_Exp1
# 73 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkFastDown4
# 74 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	waitmovement 0
# 75 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_UnlockFacingDirection
# 76 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	waitmovement 0
# 77 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	setmetatile 17, 18, 0x026, TRUE
# 78 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	special DrawWholeMapView
# 79 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	delay 10
# 80 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	setmetatile 17, 18, 0x025, TRUE
# 81 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	special DrawWholeMapView
# 82 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	delay 10
# 83 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	setmetatile 17, 18, 0x01D, TRUE
# 84 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	special DrawWholeMapView
# 85 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	release
	return


IllusoryGrotto_B3F_1R_Monster2::
# 89 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	call IllusoryGrotto_MonsterCommon1_Exp1
# 90 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	setmetatile 12, 12, 0x025, TRUE
# 91 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	special DrawWholeMapView
# 92 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	delay 10
# 93 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	setmetatile 12, 12, 0x026, TRUE
# 94 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	special DrawWholeMapView
# 95 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	delay 10
# 96 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	setmetatile 12, 12, 0x027, TRUE
# 97 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	call IllusoryGrotto_MonsterCommon2_Exp1
# 98 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkFastDown2
# 99 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	waitmovement 0
# 100 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_UnlockFacingDirection
# 101 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	waitmovement 0
# 102 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	setmetatile 12, 12, 0x026, TRUE
# 103 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	special DrawWholeMapView
# 104 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	delay 10
# 105 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	setmetatile 12, 12, 0x025, TRUE
# 106 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	special DrawWholeMapView
# 107 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	delay 10
# 108 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	setmetatile 12, 12, 0x01D, TRUE
# 109 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	special DrawWholeMapView
# 110 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	release
	return


IllusoryGrotto_B3F_1R_Monster3::
# 114 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	call IllusoryGrotto_MonsterCommon1_Exp1
# 115 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	setmetatile 6, 20, 0x025, TRUE
# 116 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	special DrawWholeMapView
# 117 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	delay 10
# 118 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	setmetatile 6, 20, 0x026, TRUE
# 119 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	special DrawWholeMapView
# 120 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	delay 10
# 121 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	setmetatile 6, 20, 0x027, TRUE
# 122 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	call IllusoryGrotto_MonsterCommon2_Exp1
# 123 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkFastDown
# 124 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	waitmovement 0
# 125 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_UnlockFacingDirection
# 126 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	waitmovement 0
# 127 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	setmetatile 6, 20, 0x026, TRUE
# 128 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	special DrawWholeMapView
# 129 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	delay 10
# 130 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	setmetatile 6, 20, 0x025, TRUE
# 131 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	special DrawWholeMapView
# 132 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	delay 10
# 133 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	setmetatile 6, 20, 0x01D, TRUE
# 134 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	special DrawWholeMapView
# 135 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	release
	return

