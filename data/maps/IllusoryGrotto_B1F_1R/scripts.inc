IllusoryGrotto_B1F_1R_MapScripts::
# 2 "data/maps/IllusoryGrotto_B1F_1R/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, IllusoryGrotto_B1F_1R_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

IllusoryGrotto_B1F_1R_MapScripts_MAP_SCRIPT_ON_LOAD:
# 3 "data/maps/IllusoryGrotto_B1F_1R/scripts.pory"
	goto_if_set FLAG_EXP_1_ILLUSORY_GROTTO_B2F_1R_ROCK_IN_PLACE, IllusoryGrotto_B1F_1R_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

IllusoryGrotto_B1F_1R_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 4 "data/maps/IllusoryGrotto_B1F_1R/scripts.pory"
	setmetatile 24, 10, 0x011, FALSE
# 5 "data/maps/IllusoryGrotto_B1F_1R/scripts.pory"
	setmetatile 24, 13, 0x002, FALSE
	return


IllusoryGrotto_B1F_1R_Rock::
# 12 "data/maps/IllusoryGrotto_B1F_1R/scripts.pory"
	goto_if_unset FLAG_EXP_1_ILLUSORY_GROTTO_B2F_1R_ROCK_IN_PLACE, IllusoryGrotto_B1F_1R_Rock_2
IllusoryGrotto_B1F_1R_Rock_1:
# 36 "data/maps/IllusoryGrotto_B1F_1R/scripts.pory"
	release
	return

IllusoryGrotto_B1F_1R_Rock_2:
# 13 "data/maps/IllusoryGrotto_B1F_1R/scripts.pory"
	call IllusoryGrottoMovableRock_Exp1
# 14 "data/maps/IllusoryGrotto_B1F_1R/scripts.pory"
	setmetatile 24, 10, 0x011, FALSE
# 15 "data/maps/IllusoryGrotto_B1F_1R/scripts.pory"
	setmetatile 24, 11, 0x023, TRUE
# 16 "data/maps/IllusoryGrotto_B1F_1R/scripts.pory"
	special DrawWholeMapView
# 17 "data/maps/IllusoryGrotto_B1F_1R/scripts.pory"
	delay 10
# 18 "data/maps/IllusoryGrotto_B1F_1R/scripts.pory"
	setmetatile 24, 11, 0x019, TRUE
# 19 "data/maps/IllusoryGrotto_B1F_1R/scripts.pory"
	setmetatile 24, 12, 0x023, TRUE
# 20 "data/maps/IllusoryGrotto_B1F_1R/scripts.pory"
	special DrawWholeMapView
# 21 "data/maps/IllusoryGrotto_B1F_1R/scripts.pory"
	delay 10
# 22 "data/maps/IllusoryGrotto_B1F_1R/scripts.pory"
	setmetatile 24, 12, 0x019, TRUE
# 23 "data/maps/IllusoryGrotto_B1F_1R/scripts.pory"
	setmetatile 24, 13, 0x02E, TRUE
# 24 "data/maps/IllusoryGrotto_B1F_1R/scripts.pory"
	special DrawWholeMapView
# 25 "data/maps/IllusoryGrotto_B1F_1R/scripts.pory"
	playse SE_M_SWAGGER
# 26 "data/maps/IllusoryGrotto_B1F_1R/scripts.pory"
	delay 60
# 27 "data/maps/IllusoryGrotto_B1F_1R/scripts.pory"
	playse SE_M_EXPLOSION
# 28 "data/maps/IllusoryGrotto_B1F_1R/scripts.pory"
	delay 10
# 29 "data/maps/IllusoryGrotto_B1F_1R/scripts.pory"
	setmetatile 24, 13, 0x002, FALSE
# 30 "data/maps/IllusoryGrotto_B1F_1R/scripts.pory"
	special DrawWholeMapView
# 31 "data/maps/IllusoryGrotto_B1F_1R/scripts.pory"
	delay 10
# 32 "data/maps/IllusoryGrotto_B1F_1R/scripts.pory"
	playse SE_FALL
# 33 "data/maps/IllusoryGrotto_B1F_1R/scripts.pory"
	delay 20
# 34 "data/maps/IllusoryGrotto_B1F_1R/scripts.pory"
	setflag FLAG_EXP_1_ILLUSORY_GROTTO_B2F_1R_ROCK_IN_PLACE
	goto IllusoryGrotto_B1F_1R_Rock_1

