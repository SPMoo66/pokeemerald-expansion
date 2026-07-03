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
# 21 "data/maps/IllusoryGrotto_B4F_2R/scripts.pory"
	setvar VAR_TEMP_3, 1
	return

IllusoryGrotto_B4F_2R_EventScript_WildPokemon_2:
# 11 "data/maps/IllusoryGrotto_B4F_2R/scripts.pory"
	lock
# 12 "data/maps/IllusoryGrotto_B4F_2R/scripts.pory"
	setflag FLAG_WILD_OPPONENT
# 13 "data/maps/IllusoryGrotto_B4F_2R/scripts.pory"
	playmoncry SPECIES_LUCARIO, CRY_MODE_ENCOUNTER
# 14 "data/maps/IllusoryGrotto_B4F_2R/scripts.pory"
	waitmoncry
# 15 "data/maps/IllusoryGrotto_B4F_2R/scripts.pory"
	special SpawnCameraObject
# 16 "data/maps/IllusoryGrotto_B4F_2R/scripts.pory"
	applymovement LOCALID_CAMERA, Common_Movement_WalkUp2
# 17 "data/maps/IllusoryGrotto_B4F_2R/scripts.pory"
	waitmovement 0
# 18 "data/maps/IllusoryGrotto_B4F_2R/scripts.pory"
	special RemoveCameraObject
# 19 "data/maps/IllusoryGrotto_B4F_2R/scripts.pory"
	trainerbattle_single TRAINER_WILD_POKEMON_IG_1, Exp1_WildPokemonTrainerText_Intro, Exp1_WildPokemonTrainerText_Defeat, IllusoryGrotto_B4F_2R_EventScript_WildPokemon_Victory
	goto IllusoryGrotto_B4F_2R_EventScript_WildPokemon_1


IllusoryGrotto_B4F_2R_EventScript_WildPokemon_Victory::
# 25 "data/maps/IllusoryGrotto_B4F_2R/scripts.pory"
	playmoncry SPECIES_LUCARIO, CRY_MODE_WEAK
# 26 "data/maps/IllusoryGrotto_B4F_2R/scripts.pory"
	waitmoncry
# 27 "data/maps/IllusoryGrotto_B4F_2R/scripts.pory"
	applymovement 2, Common_Movement_WalkUpFast3
# 28 "data/maps/IllusoryGrotto_B4F_2R/scripts.pory"
	waitmovement 0
# 29 "data/maps/IllusoryGrotto_B4F_2R/scripts.pory"
	special SpawnCameraObject
# 30 "data/maps/IllusoryGrotto_B4F_2R/scripts.pory"
	delay 20
# 31 "data/maps/IllusoryGrotto_B4F_2R/scripts.pory"
	applymovement LOCALID_CAMERA, Common_Movement_WalkDown2
# 32 "data/maps/IllusoryGrotto_B4F_2R/scripts.pory"
	waitmovement 0
# 33 "data/maps/IllusoryGrotto_B4F_2R/scripts.pory"
	special RemoveCameraObject
# 34 "data/maps/IllusoryGrotto_B4F_2R/scripts.pory"
	setvar VAR_TEMP_3, 1
# 35 "data/maps/IllusoryGrotto_B4F_2R/scripts.pory"
	clearflag FLAG_WILD_OPPONENT
# 36 "data/maps/IllusoryGrotto_B4F_2R/scripts.pory"
	removeobject 2
# 37 "data/maps/IllusoryGrotto_B4F_2R/scripts.pory"
	release
	return

