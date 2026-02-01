AllRivalsGraphicsMusicRandomize::
# 2 "data/emeralbody_rivals/all_rivals.pory"
	compare VAR_EMERALBODY_RIVAL, 5
	goto_if_eq AllRivalsGraphicsMusicRandomize_1
	return

AllRivalsGraphicsMusicRandomize_1:
# 3 "data/emeralbody_rivals/all_rivals.pory"
	random 5
# 4 "data/emeralbody_rivals/all_rivals.pory"
	copyvar VAR_TEMP_A, VAR_RESULT
	return

