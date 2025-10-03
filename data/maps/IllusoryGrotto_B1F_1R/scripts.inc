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
# 11 "data/maps/IllusoryGrotto_B1F_1R/scripts.pory"
	goto_if_unset FLAG_EXP_1_ILLUSORY_GROTTO_B2F_1R_ROCK_IN_PLACE, IllusoryGrotto_B1F_1R_Rock_2
IllusoryGrotto_B1F_1R_Rock_1:
# 35 "data/maps/IllusoryGrotto_B1F_1R/scripts.pory"
	release
	return

IllusoryGrotto_B1F_1R_Rock_2:
# 12 "data/maps/IllusoryGrotto_B1F_1R/scripts.pory"
	call IllusoryGrottoMovableRock_Exp1
# 13 "data/maps/IllusoryGrotto_B1F_1R/scripts.pory"
	setmetatile 24, 10, 0x011, FALSE
# 14 "data/maps/IllusoryGrotto_B1F_1R/scripts.pory"
	setmetatile 24, 11, 0x023, TRUE
# 15 "data/maps/IllusoryGrotto_B1F_1R/scripts.pory"
	special DrawWholeMapView
# 16 "data/maps/IllusoryGrotto_B1F_1R/scripts.pory"
	delay 10
# 17 "data/maps/IllusoryGrotto_B1F_1R/scripts.pory"
	setmetatile 24, 11, 0x019, TRUE
# 18 "data/maps/IllusoryGrotto_B1F_1R/scripts.pory"
	setmetatile 24, 12, 0x023, TRUE
# 19 "data/maps/IllusoryGrotto_B1F_1R/scripts.pory"
	special DrawWholeMapView
# 20 "data/maps/IllusoryGrotto_B1F_1R/scripts.pory"
	delay 10
# 21 "data/maps/IllusoryGrotto_B1F_1R/scripts.pory"
	setmetatile 24, 12, 0x019, TRUE
# 22 "data/maps/IllusoryGrotto_B1F_1R/scripts.pory"
	setmetatile 24, 13, 0x02E, TRUE
# 23 "data/maps/IllusoryGrotto_B1F_1R/scripts.pory"
	special DrawWholeMapView
# 24 "data/maps/IllusoryGrotto_B1F_1R/scripts.pory"
	playse SE_M_SWAGGER
# 25 "data/maps/IllusoryGrotto_B1F_1R/scripts.pory"
	delay 60
# 26 "data/maps/IllusoryGrotto_B1F_1R/scripts.pory"
	playse SE_M_EXPLOSION
# 27 "data/maps/IllusoryGrotto_B1F_1R/scripts.pory"
	delay 10
# 28 "data/maps/IllusoryGrotto_B1F_1R/scripts.pory"
	setmetatile 24, 13, 0x002, FALSE
# 29 "data/maps/IllusoryGrotto_B1F_1R/scripts.pory"
	special DrawWholeMapView
# 30 "data/maps/IllusoryGrotto_B1F_1R/scripts.pory"
	delay 10
# 31 "data/maps/IllusoryGrotto_B1F_1R/scripts.pory"
	playse SE_FALL
# 32 "data/maps/IllusoryGrotto_B1F_1R/scripts.pory"
	delay 20
# 33 "data/maps/IllusoryGrotto_B1F_1R/scripts.pory"
	setflag FLAG_EXP_1_ILLUSORY_GROTTO_B2F_1R_ROCK_IN_PLACE
	goto IllusoryGrotto_B1F_1R_Rock_1

