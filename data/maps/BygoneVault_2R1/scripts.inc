BygoneVault_2R1_MapScripts::
# 2 "data/maps/BygoneVault_2R1/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, BygoneVault_2R1_MapScripts_MAP_SCRIPT_ON_LOAD
# 7 "data/maps/BygoneVault_2R1/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BygoneVault_2R1_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

BygoneVault_2R1_MapScripts_MAP_SCRIPT_ON_LOAD:
# 3 "data/maps/BygoneVault_2R1/scripts.pory"
	goto_if_set FLAG_EXP_1_BYGONE_VAULT_RIGHT_SWITCH_2, BygoneVault_2R1_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

BygoneVault_2R1_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 4 "data/maps/BygoneVault_2R1/scripts.pory"
	setmetatile 6, 2, 0x2A9, TRUE
	return

BygoneVault_2R1_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 8 "data/maps/BygoneVault_2R1/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 43
	goto_if_ne BygoneVault_2R1_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

BygoneVault_2R1_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 9 "data/maps/BygoneVault_2R1/scripts.pory"
	setflag FLAG_TEMP_1
	return


BygoneVault_RightSwitch2::
# 15 "data/maps/BygoneVault_2R1/scripts.pory"
	goto_if_unset FLAG_EXP_1_BYGONE_VAULT_RIGHT_SWITCH_2, BygoneVault_RightSwitch2_1
# 34 "data/maps/BygoneVault_2R1/scripts.pory"
	msgbox Text_FlippedSwitch, MSGBOX_AUTOCLOSE
	return

BygoneVault_RightSwitch2_1:
# 16 "data/maps/BygoneVault_2R1/scripts.pory"
	msgbox Text_FlipSwitch, MSGBOX_YESNO
# 17 "data/maps/BygoneVault_2R1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne BygoneVault_RightSwitch2_4
	return

BygoneVault_RightSwitch2_4:
# 18 "data/maps/BygoneVault_2R1/scripts.pory"
	closemessage
# 19 "data/maps/BygoneVault_2R1/scripts.pory"
	setmetatile 6, 2, 0x2A9, TRUE
# 20 "data/maps/BygoneVault_2R1/scripts.pory"
	special DrawWholeMapView
# 21 "data/maps/BygoneVault_2R1/scripts.pory"
	playse SE_SWITCH
# 22 "data/maps/BygoneVault_2R1/scripts.pory"
	waitse
# 23 "data/maps/BygoneVault_2R1/scripts.pory"
	delay 10
# 24 "data/maps/BygoneVault_2R1/scripts.pory"
	setvar VAR_0x8004, 1
# 25 "data/maps/BygoneVault_2R1/scripts.pory"
	setvar VAR_0x8005, 1
# 26 "data/maps/BygoneVault_2R1/scripts.pory"
	setvar VAR_0x8006, 8
# 27 "data/maps/BygoneVault_2R1/scripts.pory"
	setvar VAR_0x8007, 2
# 28 "data/maps/BygoneVault_2R1/scripts.pory"
	special ShakeCamera
# 29 "data/maps/BygoneVault_2R1/scripts.pory"
	waitstate
# 30 "data/maps/BygoneVault_2R1/scripts.pory"
	setflag FLAG_EXP_1_BYGONE_VAULT_RIGHT_SWITCH_2
	return


BygoneVault_2R1_EventScript_WildPokemon1::
# 39 "data/maps/BygoneVault_2R1/scripts.pory"
	checktrainerflag TRAINER_WILD_POKEMON_BV_1
	goto_if 0, BygoneVault_2R1_EventScript_WildPokemon1_2
BygoneVault_2R1_EventScript_WildPokemon1_1:
# 62 "data/maps/BygoneVault_2R1/scripts.pory"
	setvar VAR_TEMP_0, 1
	return

BygoneVault_2R1_EventScript_WildPokemon1_2:
# 40 "data/maps/BygoneVault_2R1/scripts.pory"
	lock
# 41 "data/maps/BygoneVault_2R1/scripts.pory"
	setobjectxyperm 1, 27, 13
# 42 "data/maps/BygoneVault_2R1/scripts.pory"
	addobject 1
# 43 "data/maps/BygoneVault_2R1/scripts.pory"
	setflag FLAG_WILD_OPPONENT
# 44 "data/maps/BygoneVault_2R1/scripts.pory"
	setflag FLAG_SYS_SET_BATTLE_BGM
# 45 "data/maps/BygoneVault_2R1/scripts.pory"
	setvar VAR_BATTLE_BGM, MUS_XD_VS_CIPHER_PEON
# 46 "data/maps/BygoneVault_2R1/scripts.pory"
	applymovement 1, Common_Movement_WalkUpFast5
# 47 "data/maps/BygoneVault_2R1/scripts.pory"
	waitmovement 0
# 48 "data/maps/BygoneVault_2R1/scripts.pory"
	playmoncry SPECIES_LUCARIO, CRY_MODE_ENCOUNTER
# 49 "data/maps/BygoneVault_2R1/scripts.pory"
	waitmoncry
# 50 "data/maps/BygoneVault_2R1/scripts.pory"
	msgbox Exp1_WildPokemonTrainerText_Intro, MSGBOX_DEFAULT
# 51 "data/maps/BygoneVault_2R1/scripts.pory"
	trainerbattle_no_intro TRAINER_WILD_POKEMON_BV_1, Exp1_WildPokemonTrainerText_Defeat
# 52 "data/maps/BygoneVault_2R1/scripts.pory"
	playmoncry SPECIES_LUCARIO, CRY_MODE_WEAK
# 53 "data/maps/BygoneVault_2R1/scripts.pory"
	waitmoncry
# 54 "data/maps/BygoneVault_2R1/scripts.pory"
	delay 10
# 55 "data/maps/BygoneVault_2R1/scripts.pory"
	applymovement 1, Common_Movement_WalkDownFast5
# 56 "data/maps/BygoneVault_2R1/scripts.pory"
	waitmovement 0
# 57 "data/maps/BygoneVault_2R1/scripts.pory"
	setvar VAR_TEMP_0, 1
# 58 "data/maps/BygoneVault_2R1/scripts.pory"
	clearflag FLAG_WILD_OPPONENT
# 59 "data/maps/BygoneVault_2R1/scripts.pory"
	removeobject 1
# 60 "data/maps/BygoneVault_2R1/scripts.pory"
	release
	goto BygoneVault_2R1_EventScript_WildPokemon1_1

