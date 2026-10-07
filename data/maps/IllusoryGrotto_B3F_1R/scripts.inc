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
# 41 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	setvar VAR_TEMP_0, 1
	return

IllusoryGrotto_B3F_1R_EventScript_WildPokemon_2:
# 22 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	lock
# 23 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	setflag FLAG_WILD_OPPONENT
# 24 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	setflag FLAG_SYS_SET_BATTLE_BGM
# 25 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	setvar VAR_BATTLE_BGM, MUS_XD_VS_CIPHER_PEON
# 26 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	playmoncry SPECIES_LUCARIO, CRY_MODE_ENCOUNTER
# 27 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	waitmoncry
# 28 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	msgbox Exp1_WildPokemonTrainerText_Intro, MSGBOX_DEFAULT
# 29 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	trainerbattle_no_intro TRAINER_WILD_POKEMON_IG_2, Exp1_WildPokemonTrainerText_Defeat
# 30 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	playmoncry SPECIES_LUCARIO, CRY_MODE_WEAK
# 31 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	waitmoncry
# 32 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	applymovement 2, Common_Movement_WalkLeftFast4
# 33 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	waitmovement 0
# 34 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	applymovement 2, Common_Movement_WalkUpFast3
# 35 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	waitmovement 0
# 36 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	setvar VAR_TEMP_0, 1
# 37 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	clearflag FLAG_WILD_OPPONENT
# 38 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	removeobject 2
# 39 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	release
	goto IllusoryGrotto_B3F_1R_EventScript_WildPokemon_1


IllusoryGrotto_B3F_1R_Rock::
# 46 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	goto_if_unset FLAG_EXP_1_ILLUSORY_GROTTO_B3F_1R_ROCK, IllusoryGrotto_B3F_1R_Rock_2
IllusoryGrotto_B3F_1R_Rock_1:
# 61 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	release
	return

IllusoryGrotto_B3F_1R_Rock_2:
# 47 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	call IllusoryGrottoMovableRock_Exp1
# 48 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	setmetatile 17, 16, 0x011, FALSE
# 49 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	setmetatile 17, 17, 0x023, TRUE
# 50 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	special DrawWholeMapView
# 51 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	delay 10
# 52 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	setmetatile 17, 17, 0x019, TRUE
# 53 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	setmetatile 17, 18, 0x023, TRUE
# 54 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	special DrawWholeMapView
# 55 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	playse SE_M_STRENGTH
# 56 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	delay 10
# 57 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	setflag FLAG_EXP_1_ILLUSORY_GROTTO_B3F_1R_ROCK
# 58 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	setvar VAR_TEMP_3, 1
# 59 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	removeobject 1
	goto IllusoryGrotto_B3F_1R_Rock_1


IllusoryGrotto_B3F_1R_Monster1::
# 65 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	call IllusoryGrotto_MonsterCommon1_Exp1
# 66 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	setmetatile 17, 18, 0x025, TRUE
# 67 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	special DrawWholeMapView
# 68 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	delay 10
# 69 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	setmetatile 17, 18, 0x026, TRUE
# 70 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	special DrawWholeMapView
# 71 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	delay 10
# 72 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	setmetatile 17, 18, 0x027, TRUE
# 73 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	call IllusoryGrotto_MonsterCommon2_Exp1
# 74 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkFastDown4
# 75 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	waitmovement 0
# 76 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_UnlockFacingDirection
# 77 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	waitmovement 0
# 78 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	setmetatile 17, 18, 0x026, TRUE
# 79 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	special DrawWholeMapView
# 80 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	delay 10
# 81 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	setmetatile 17, 18, 0x025, TRUE
# 82 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	special DrawWholeMapView
# 83 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	delay 10
# 84 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	setmetatile 17, 18, 0x01D, TRUE
# 85 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	special DrawWholeMapView
# 86 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	release
	return


IllusoryGrotto_B3F_1R_Monster2::
# 90 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	call IllusoryGrotto_MonsterCommon1_Exp1
# 91 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	setmetatile 12, 12, 0x025, TRUE
# 92 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	special DrawWholeMapView
# 93 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	delay 10
# 94 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	setmetatile 12, 12, 0x026, TRUE
# 95 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	special DrawWholeMapView
# 96 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	delay 10
# 97 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	setmetatile 12, 12, 0x027, TRUE
# 98 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	call IllusoryGrotto_MonsterCommon2_Exp1
# 99 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkFastDown2
# 100 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	waitmovement 0
# 101 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_UnlockFacingDirection
# 102 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	waitmovement 0
# 103 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	setmetatile 12, 12, 0x026, TRUE
# 104 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	special DrawWholeMapView
# 105 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	delay 10
# 106 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	setmetatile 12, 12, 0x025, TRUE
# 107 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	special DrawWholeMapView
# 108 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	delay 10
# 109 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	setmetatile 12, 12, 0x01D, TRUE
# 110 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	special DrawWholeMapView
# 111 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	release
	return


IllusoryGrotto_B3F_1R_Monster3::
# 115 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	call IllusoryGrotto_MonsterCommon1_Exp1
# 116 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	setmetatile 6, 20, 0x025, TRUE
# 117 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	special DrawWholeMapView
# 118 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	delay 10
# 119 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	setmetatile 6, 20, 0x026, TRUE
# 120 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	special DrawWholeMapView
# 121 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	delay 10
# 122 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	setmetatile 6, 20, 0x027, TRUE
# 123 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	call IllusoryGrotto_MonsterCommon2_Exp1
# 124 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkFastDown
# 125 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	waitmovement 0
# 126 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_UnlockFacingDirection
# 127 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	waitmovement 0
# 128 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	setmetatile 6, 20, 0x026, TRUE
# 129 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	special DrawWholeMapView
# 130 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	delay 10
# 131 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	setmetatile 6, 20, 0x025, TRUE
# 132 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	special DrawWholeMapView
# 133 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	delay 10
# 134 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	setmetatile 6, 20, 0x01D, TRUE
# 135 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	special DrawWholeMapView
# 136 "data/maps/IllusoryGrotto_B3F_1R/scripts.pory"
	release
	return

