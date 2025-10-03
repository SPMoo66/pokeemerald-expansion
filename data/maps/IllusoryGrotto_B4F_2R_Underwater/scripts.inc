IllusoryGrotto_B4F_2R_Underwater_MapScripts::
	.byte 0


IllusoryGrotto_B4F_2R_Underwater_MonsterShadow1::
# 4 "data/maps/IllusoryGrotto_B4F_2R_Underwater/scripts.pory"
	compare VAR_TEMP_0, 0
	goto_if_eq IllusoryGrotto_B4F_2R_Underwater_MonsterShadow1_1
# 10 "data/maps/IllusoryGrotto_B4F_2R_Underwater/scripts.pory"
	setmetatile 6, 6, 0x042, TRUE
# 11 "data/maps/IllusoryGrotto_B4F_2R_Underwater/scripts.pory"
	special DrawWholeMapView
# 12 "data/maps/IllusoryGrotto_B4F_2R_Underwater/scripts.pory"
	setvar VAR_TEMP_0, 0
	return

IllusoryGrotto_B4F_2R_Underwater_MonsterShadow1_1:
# 5 "data/maps/IllusoryGrotto_B4F_2R_Underwater/scripts.pory"
	setmetatile 6, 6, 0x12D, TRUE
# 6 "data/maps/IllusoryGrotto_B4F_2R_Underwater/scripts.pory"
	special DrawWholeMapView
# 7 "data/maps/IllusoryGrotto_B4F_2R_Underwater/scripts.pory"
	setvar VAR_TEMP_0, 1
	return


IllusoryGrotto_B4F_2R_Underwater_MonsterShadow2::
# 17 "data/maps/IllusoryGrotto_B4F_2R_Underwater/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq IllusoryGrotto_B4F_2R_Underwater_MonsterShadow2_1
# 23 "data/maps/IllusoryGrotto_B4F_2R_Underwater/scripts.pory"
	setmetatile 28, 4, 0x040, TRUE
# 24 "data/maps/IllusoryGrotto_B4F_2R_Underwater/scripts.pory"
	special DrawWholeMapView
# 25 "data/maps/IllusoryGrotto_B4F_2R_Underwater/scripts.pory"
	setvar VAR_TEMP_1, 0
	return

IllusoryGrotto_B4F_2R_Underwater_MonsterShadow2_1:
# 18 "data/maps/IllusoryGrotto_B4F_2R_Underwater/scripts.pory"
	setmetatile 28, 4, 0x125, TRUE
# 19 "data/maps/IllusoryGrotto_B4F_2R_Underwater/scripts.pory"
	special DrawWholeMapView
# 20 "data/maps/IllusoryGrotto_B4F_2R_Underwater/scripts.pory"
	setvar VAR_TEMP_1, 1
	return


IllusoryGrotto_B4F_2R_Underwater_MonsterShadow3::
# 30 "data/maps/IllusoryGrotto_B4F_2R_Underwater/scripts.pory"
	compare VAR_TEMP_2, 0
	goto_if_eq IllusoryGrotto_B4F_2R_Underwater_MonsterShadow3_1
# 36 "data/maps/IllusoryGrotto_B4F_2R_Underwater/scripts.pory"
	setmetatile 18, 15, 0x043, TRUE
# 37 "data/maps/IllusoryGrotto_B4F_2R_Underwater/scripts.pory"
	special DrawWholeMapView
# 38 "data/maps/IllusoryGrotto_B4F_2R_Underwater/scripts.pory"
	setvar VAR_TEMP_2, 0
	return

IllusoryGrotto_B4F_2R_Underwater_MonsterShadow3_1:
# 31 "data/maps/IllusoryGrotto_B4F_2R_Underwater/scripts.pory"
	setmetatile 18, 15, 0x135, TRUE
# 32 "data/maps/IllusoryGrotto_B4F_2R_Underwater/scripts.pory"
	special DrawWholeMapView
# 33 "data/maps/IllusoryGrotto_B4F_2R_Underwater/scripts.pory"
	setvar VAR_TEMP_2, 1
	return

