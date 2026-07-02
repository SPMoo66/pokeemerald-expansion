IllusoryGrotto_B4F_2R_MapScripts::
# 2 "data/maps/IllusoryGrotto_B4F_2R/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, IllusoryGrotto_B4F_2R_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

IllusoryGrotto_B4F_2R_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/IllusoryGrotto_B4F_2R/scripts.pory"
	setvar VAR_RESULT, 0
# 4 "data/maps/IllusoryGrotto_B4F_2R/scripts.pory"
	checktrainerflag TRAINER_WILD_POKEMON_IG_1
# 5 "data/maps/IllusoryGrotto_B4F_2R/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq IllusoryGrotto_B4F_2R_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

IllusoryGrotto_B4F_2R_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 6 "data/maps/IllusoryGrotto_B4F_2R/scripts.pory"
	setflag FLAG_TEMP_1
	return


IllusoryGrotto_B4F_2R_EventScript_WildPokemon::
# 20 "data/maps/IllusoryGrotto_B4F_2R/scripts.pory"
	checktrainerflag TRAINER_WILD_POKEMON_IG_1
# 21 "data/maps/IllusoryGrotto_B4F_2R/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq IllusoryGrotto_B4F_2R_EventScript_WildPokemon_2
IllusoryGrotto_B4F_2R_EventScript_WildPokemon_1:
# 32 "data/maps/IllusoryGrotto_B4F_2R/scripts.pory"
	setvar VAR_TEMP_3, 1
	return

IllusoryGrotto_B4F_2R_EventScript_WildPokemon_2:
# 22 "data/maps/IllusoryGrotto_B4F_2R/scripts.pory"
	lock
# 23 "data/maps/IllusoryGrotto_B4F_2R/scripts.pory"
	setflag FLAG_WILD_OPPONENT
# 24 "data/maps/IllusoryGrotto_B4F_2R/scripts.pory"
	playmoncry SPECIES_LUCARIO, CRY_MODE_ENCOUNTER
# 25 "data/maps/IllusoryGrotto_B4F_2R/scripts.pory"
	waitmoncry
# 26 "data/maps/IllusoryGrotto_B4F_2R/scripts.pory"
	special SpawnCameraObject
# 27 "data/maps/IllusoryGrotto_B4F_2R/scripts.pory"
	applymovement LOCALID_CAMERA, Common_Movement_WalkUp2
# 28 "data/maps/IllusoryGrotto_B4F_2R/scripts.pory"
	waitmovement 0
# 29 "data/maps/IllusoryGrotto_B4F_2R/scripts.pory"
	special RemoveCameraObject
# 30 "data/maps/IllusoryGrotto_B4F_2R/scripts.pory"
	trainerbattle_single TRAINER_WILD_POKEMON_IG_1, Exp1_WildPokemonTrainerText_Intro, Exp1_WildPokemonTrainerText_Defeat, IllusoryGrotto_B4F_2R_EventScript_WildPokemon_Victory
	goto IllusoryGrotto_B4F_2R_EventScript_WildPokemon_1


IllusoryGrotto_B4F_2R_EventScript_WildPokemon_Victory::
# 36 "data/maps/IllusoryGrotto_B4F_2R/scripts.pory"
	playmoncry SPECIES_LUCARIO, CRY_MODE_WEAK
# 37 "data/maps/IllusoryGrotto_B4F_2R/scripts.pory"
	waitmoncry
# 38 "data/maps/IllusoryGrotto_B4F_2R/scripts.pory"
	applymovement 2, Common_Movement_WalkUpFast3
# 39 "data/maps/IllusoryGrotto_B4F_2R/scripts.pory"
	waitmovement 0
# 40 "data/maps/IllusoryGrotto_B4F_2R/scripts.pory"
	special SpawnCameraObject
# 41 "data/maps/IllusoryGrotto_B4F_2R/scripts.pory"
	delay 20
# 42 "data/maps/IllusoryGrotto_B4F_2R/scripts.pory"
	applymovement LOCALID_CAMERA, Common_Movement_WalkDown2
# 43 "data/maps/IllusoryGrotto_B4F_2R/scripts.pory"
	waitmovement 0
# 44 "data/maps/IllusoryGrotto_B4F_2R/scripts.pory"
	special RemoveCameraObject
# 45 "data/maps/IllusoryGrotto_B4F_2R/scripts.pory"
	setvar VAR_TEMP_3, 1
# 46 "data/maps/IllusoryGrotto_B4F_2R/scripts.pory"
	clearflag FLAG_WILD_OPPONENT
# 47 "data/maps/IllusoryGrotto_B4F_2R/scripts.pory"
	removeobject 2
# 48 "data/maps/IllusoryGrotto_B4F_2R/scripts.pory"
	release
	return


Exp1_WildPokemonTrainerText_Intro::
# 11 "data/maps/IllusoryGrotto_B4F_2R/scripts.pory"
	.string "Grrrooo!!$"

Exp1_WildPokemonTrainerText_Defeat::
# 15 "data/maps/IllusoryGrotto_B4F_2R/scripts.pory"
	.string "Grooo.$"
