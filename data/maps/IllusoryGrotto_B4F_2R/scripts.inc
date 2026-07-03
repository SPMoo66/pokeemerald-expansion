IllusoryGrotto_B4F_2R_MapScripts::
# 2 "data/maps/IllusoryGrotto_B4F_2R/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, IllusoryGrotto_B4F_2R_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

IllusoryGrotto_B4F_2R_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/IllusoryGrotto_B4F_2R/scripts.pory"
	checktrainerflag TRAINER_WILD_POKEMON_IG_1
	goto_if 1, IllusoryGrotto_B4F_2R_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

IllusoryGrotto_B4F_2R_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 4 "data/maps/IllusoryGrotto_B4F_2R/scripts.pory"
	setflag FLAG_TEMP_1
	return


IllusoryGrotto_B4F_2R_EventScript_WildPokemon::
# 10 "data/maps/IllusoryGrotto_B4F_2R/scripts.pory"
	checktrainerflag TRAINER_WILD_POKEMON_IG_1
	goto_if 0, IllusoryGrotto_B4F_2R_EventScript_WildPokemon_2
IllusoryGrotto_B4F_2R_EventScript_WildPokemon_1:
# 37 "data/maps/IllusoryGrotto_B4F_2R/scripts.pory"
	setvar VAR_TEMP_3, 1
	return

IllusoryGrotto_B4F_2R_EventScript_WildPokemon_2:
# 11 "data/maps/IllusoryGrotto_B4F_2R/scripts.pory"
	lock
# 12 "data/maps/IllusoryGrotto_B4F_2R/scripts.pory"
	setflag FLAG_WILD_OPPONENT
# 13 "data/maps/IllusoryGrotto_B4F_2R/scripts.pory"
	setflag FLAG_SYS_SET_BATTLE_BGM
# 14 "data/maps/IllusoryGrotto_B4F_2R/scripts.pory"
	setvar VAR_BATTLE_BGM, MUS_XD_VS_CIPHER_PEON
# 15 "data/maps/IllusoryGrotto_B4F_2R/scripts.pory"
	playmoncry SPECIES_LUCARIO, CRY_MODE_ENCOUNTER
# 16 "data/maps/IllusoryGrotto_B4F_2R/scripts.pory"
	waitmoncry
# 17 "data/maps/IllusoryGrotto_B4F_2R/scripts.pory"
	special SpawnCameraObject
# 18 "data/maps/IllusoryGrotto_B4F_2R/scripts.pory"
	applymovement LOCALID_CAMERA, Common_Movement_WalkUp2
# 19 "data/maps/IllusoryGrotto_B4F_2R/scripts.pory"
	waitmovement 0
# 20 "data/maps/IllusoryGrotto_B4F_2R/scripts.pory"
	special RemoveCameraObject
# 21 "data/maps/IllusoryGrotto_B4F_2R/scripts.pory"
	msgbox Exp1_WildPokemonTrainerText_Intro, MSGBOX_DEFAULT
# 22 "data/maps/IllusoryGrotto_B4F_2R/scripts.pory"
	trainerbattle_no_intro TRAINER_WILD_POKEMON_IG_1, Exp1_WildPokemonTrainerText_Defeat
# 23 "data/maps/IllusoryGrotto_B4F_2R/scripts.pory"
	playmoncry SPECIES_LUCARIO, CRY_MODE_WEAK
# 24 "data/maps/IllusoryGrotto_B4F_2R/scripts.pory"
	waitmoncry
# 25 "data/maps/IllusoryGrotto_B4F_2R/scripts.pory"
	applymovement 2, Common_Movement_WalkUpFast3
# 26 "data/maps/IllusoryGrotto_B4F_2R/scripts.pory"
	waitmovement 0
# 27 "data/maps/IllusoryGrotto_B4F_2R/scripts.pory"
	special SpawnCameraObject
# 28 "data/maps/IllusoryGrotto_B4F_2R/scripts.pory"
	delay 20
# 29 "data/maps/IllusoryGrotto_B4F_2R/scripts.pory"
	applymovement LOCALID_CAMERA, Common_Movement_WalkDown2
# 30 "data/maps/IllusoryGrotto_B4F_2R/scripts.pory"
	waitmovement 0
# 31 "data/maps/IllusoryGrotto_B4F_2R/scripts.pory"
	special RemoveCameraObject
# 32 "data/maps/IllusoryGrotto_B4F_2R/scripts.pory"
	setvar VAR_TEMP_3, 1
# 33 "data/maps/IllusoryGrotto_B4F_2R/scripts.pory"
	clearflag FLAG_WILD_OPPONENT
# 34 "data/maps/IllusoryGrotto_B4F_2R/scripts.pory"
	removeobject 2
# 35 "data/maps/IllusoryGrotto_B4F_2R/scripts.pory"
	release
	goto IllusoryGrotto_B4F_2R_EventScript_WildPokemon_1

