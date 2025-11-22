IllusoryGrotto_B1F_1R_MapScripts::
# 4 "data/maps/IllusoryGrotto_B1F_1R/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, IllusoryGrotto_B1F_1R_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

IllusoryGrotto_B1F_1R_MapScripts_MAP_SCRIPT_ON_LOAD:
# 5 "data/maps/IllusoryGrotto_B1F_1R/scripts.pory"
	goto_if_set FLAG_EXP_1_ILLUSORY_GROTTO_B2F_1R_ROCK_IN_PLACE, IllusoryGrotto_B1F_1R_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

IllusoryGrotto_B1F_1R_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 6 "data/maps/IllusoryGrotto_B1F_1R/scripts.pory"
	setmetatile 24, 11, 0x011, FALSE
# 7 "data/maps/IllusoryGrotto_B1F_1R/scripts.pory"
	setmetatile 24, 14, 0x002, FALSE
	return


IllusoryGrotto_B1F_1R_Rock::
# 13 "data/maps/IllusoryGrotto_B1F_1R/scripts.pory"
	goto_if_unset FLAG_EXP_1_ILLUSORY_GROTTO_B2F_1R_ROCK_IN_PLACE, IllusoryGrotto_B1F_1R_Rock_2
IllusoryGrotto_B1F_1R_Rock_1:
# 38 "data/maps/IllusoryGrotto_B1F_1R/scripts.pory"
	release
	return

IllusoryGrotto_B1F_1R_Rock_2:
# 14 "data/maps/IllusoryGrotto_B1F_1R/scripts.pory"
	call IllusoryGrottoMovableRock_Exp1
# 15 "data/maps/IllusoryGrotto_B1F_1R/scripts.pory"
	setmetatile 24, 11, 0x011, FALSE
# 16 "data/maps/IllusoryGrotto_B1F_1R/scripts.pory"
	setmetatile 24, 12, 0x023, TRUE
# 17 "data/maps/IllusoryGrotto_B1F_1R/scripts.pory"
	special DrawWholeMapView
# 18 "data/maps/IllusoryGrotto_B1F_1R/scripts.pory"
	delay 10
# 19 "data/maps/IllusoryGrotto_B1F_1R/scripts.pory"
	setmetatile 24, 12, 0x019, TRUE
# 20 "data/maps/IllusoryGrotto_B1F_1R/scripts.pory"
	setmetatile 24, 13, 0x023, TRUE
# 21 "data/maps/IllusoryGrotto_B1F_1R/scripts.pory"
	special DrawWholeMapView
# 22 "data/maps/IllusoryGrotto_B1F_1R/scripts.pory"
	delay 10
# 23 "data/maps/IllusoryGrotto_B1F_1R/scripts.pory"
	setmetatile 24, 13, 0x019, TRUE
# 24 "data/maps/IllusoryGrotto_B1F_1R/scripts.pory"
	setmetatile 24, 14, 0x02E, TRUE
# 25 "data/maps/IllusoryGrotto_B1F_1R/scripts.pory"
	special DrawWholeMapView
# 26 "data/maps/IllusoryGrotto_B1F_1R/scripts.pory"
	playse SE_M_SWAGGER
# 27 "data/maps/IllusoryGrotto_B1F_1R/scripts.pory"
	delay 60
# 28 "data/maps/IllusoryGrotto_B1F_1R/scripts.pory"
	playse SE_M_EXPLOSION
# 29 "data/maps/IllusoryGrotto_B1F_1R/scripts.pory"
	delay 10
# 30 "data/maps/IllusoryGrotto_B1F_1R/scripts.pory"
	setmetatile 24, 14, 0x002, FALSE
# 31 "data/maps/IllusoryGrotto_B1F_1R/scripts.pory"
	special DrawWholeMapView
# 32 "data/maps/IllusoryGrotto_B1F_1R/scripts.pory"
	delay 10
# 33 "data/maps/IllusoryGrotto_B1F_1R/scripts.pory"
	playse SE_FALL
# 34 "data/maps/IllusoryGrotto_B1F_1R/scripts.pory"
	delay 20
# 35 "data/maps/IllusoryGrotto_B1F_1R/scripts.pory"
	setflag FLAG_EXP_1_ILLUSORY_GROTTO_B2F_1R_ROCK_IN_PLACE
# 36 "data/maps/IllusoryGrotto_B1F_1R/scripts.pory"
	removeobject 1
	goto IllusoryGrotto_B1F_1R_Rock_1

