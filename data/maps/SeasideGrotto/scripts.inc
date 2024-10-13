SeasideGrotto_MapScripts::
# 7 "data/maps/SeasideGrotto/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SeasideGrotto_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 25 "data/maps/SeasideGrotto/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, SeasideGrotto_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

SeasideGrotto_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 8 "data/maps/SeasideGrotto/scripts.pory"
	goto_if_set FLAG_CAUGHT_TAPU_BULU, SeasideGrotto_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 12 "data/maps/SeasideGrotto/scripts.pory"
	goto_if_set FLAG_CAUGHT_TAPU_FINI, SeasideGrotto_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 16 "data/maps/SeasideGrotto/scripts.pory"
	goto_if_set FLAG_CAUGHT_TAPU_KOKO, SeasideGrotto_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
# 20 "data/maps/SeasideGrotto/scripts.pory"
	goto_if_set FLAG_CAUGHT_TAPU_LELE, SeasideGrotto_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
	return

SeasideGrotto_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 9 "data/maps/SeasideGrotto/scripts.pory"
	setflag FLAG_TEMP_2
# 10 "data/maps/SeasideGrotto/scripts.pory"
	removeobject 1
	return

SeasideGrotto_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 13 "data/maps/SeasideGrotto/scripts.pory"
	setflag FLAG_TEMP_3
# 14 "data/maps/SeasideGrotto/scripts.pory"
	removeobject 2
	return

SeasideGrotto_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
# 17 "data/maps/SeasideGrotto/scripts.pory"
	setflag FLAG_TEMP_4
# 18 "data/maps/SeasideGrotto/scripts.pory"
	removeobject 3
	return

SeasideGrotto_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 21 "data/maps/SeasideGrotto/scripts.pory"
	setflag FLAG_TEMP_5
# 22 "data/maps/SeasideGrotto/scripts.pory"
	removeobject 4
	return

SeasideGrotto_MapScripts_MAP_SCRIPT_ON_RESUME:
# 26 "data/maps/SeasideGrotto/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, SeasideGrotto_MapScripts_MAP_SCRIPT_ON_RESUME_1
	return

SeasideGrotto_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 27 "data/maps/SeasideGrotto/scripts.pory"
	removeobject VAR_LAST_TALKED
	return


BattleTapuBulu::
# 33 "data/maps/SeasideGrotto/scripts.pory"
	lock
# 34 "data/maps/SeasideGrotto/scripts.pory"
	faceplayer
# 35 "data/maps/SeasideGrotto/scripts.pory"
	setvar VAR_LAST_TALKED, 1
# 36 "data/maps/SeasideGrotto/scripts.pory"
	playmoncry SPECIES_TAPU_BULU, CRY_MODE_ENCOUNTER
# 37 "data/maps/SeasideGrotto/scripts.pory"
	msgbox BattleTapuBulu_Text_0
# 38 "data/maps/SeasideGrotto/scripts.pory"
	waitmoncry
# 39 "data/maps/SeasideGrotto/scripts.pory"
	seteventmon SPECIES_TAPU_BULU, 40
# 40 "data/maps/SeasideGrotto/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 41 "data/maps/SeasideGrotto/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 42 "data/maps/SeasideGrotto/scripts.pory"
	waitstate
# 43 "data/maps/SeasideGrotto/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 44 "data/maps/SeasideGrotto/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 45 "data/maps/SeasideGrotto/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq BattleTapuBulu_2
BattleTapuBulu_1:
# 48 "data/maps/SeasideGrotto/scripts.pory"
	release
	end

BattleTapuBulu_2:
# 46 "data/maps/SeasideGrotto/scripts.pory"
	setflag FLAG_CAUGHT_TAPU_BULU
	goto BattleTapuBulu_1


BattleTapuFini::
# 53 "data/maps/SeasideGrotto/scripts.pory"
	lock
# 54 "data/maps/SeasideGrotto/scripts.pory"
	faceplayer
# 55 "data/maps/SeasideGrotto/scripts.pory"
	setvar VAR_LAST_TALKED, 2
# 56 "data/maps/SeasideGrotto/scripts.pory"
	playmoncry SPECIES_TAPU_FINI, CRY_MODE_ENCOUNTER
# 57 "data/maps/SeasideGrotto/scripts.pory"
	msgbox BattleTapuFini_Text_0
# 58 "data/maps/SeasideGrotto/scripts.pory"
	waitmoncry
# 59 "data/maps/SeasideGrotto/scripts.pory"
	seteventmon SPECIES_TAPU_FINI, 40
# 60 "data/maps/SeasideGrotto/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 61 "data/maps/SeasideGrotto/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 62 "data/maps/SeasideGrotto/scripts.pory"
	waitstate
# 63 "data/maps/SeasideGrotto/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 64 "data/maps/SeasideGrotto/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 65 "data/maps/SeasideGrotto/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq BattleTapuFini_2
BattleTapuFini_1:
# 68 "data/maps/SeasideGrotto/scripts.pory"
	release
	end

BattleTapuFini_2:
# 66 "data/maps/SeasideGrotto/scripts.pory"
	setflag FLAG_CAUGHT_TAPU_FINI
	goto BattleTapuFini_1


BattleTapuKoko::
# 73 "data/maps/SeasideGrotto/scripts.pory"
	lock
# 74 "data/maps/SeasideGrotto/scripts.pory"
	faceplayer
# 75 "data/maps/SeasideGrotto/scripts.pory"
	setvar VAR_LAST_TALKED, 3
# 76 "data/maps/SeasideGrotto/scripts.pory"
	playmoncry SPECIES_TAPU_KOKO, CRY_MODE_ENCOUNTER
# 77 "data/maps/SeasideGrotto/scripts.pory"
	msgbox BattleTapuKoko_Text_0
# 78 "data/maps/SeasideGrotto/scripts.pory"
	waitmoncry
# 79 "data/maps/SeasideGrotto/scripts.pory"
	seteventmon SPECIES_TAPU_KOKO, 40
# 80 "data/maps/SeasideGrotto/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 81 "data/maps/SeasideGrotto/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 82 "data/maps/SeasideGrotto/scripts.pory"
	waitstate
# 83 "data/maps/SeasideGrotto/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 84 "data/maps/SeasideGrotto/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 85 "data/maps/SeasideGrotto/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq BattleTapuKoko_2
BattleTapuKoko_1:
# 88 "data/maps/SeasideGrotto/scripts.pory"
	release
	end

BattleTapuKoko_2:
# 86 "data/maps/SeasideGrotto/scripts.pory"
	setflag FLAG_CAUGHT_TAPU_KOKO
	goto BattleTapuKoko_1


BattleTapuLele::
# 93 "data/maps/SeasideGrotto/scripts.pory"
	lock
# 94 "data/maps/SeasideGrotto/scripts.pory"
	faceplayer
# 95 "data/maps/SeasideGrotto/scripts.pory"
	setvar VAR_LAST_TALKED, 4
# 96 "data/maps/SeasideGrotto/scripts.pory"
	playmoncry SPECIES_TAPU_LELE, CRY_MODE_ENCOUNTER
# 97 "data/maps/SeasideGrotto/scripts.pory"
	msgbox BattleTapuLele_Text_0
# 98 "data/maps/SeasideGrotto/scripts.pory"
	waitmoncry
# 99 "data/maps/SeasideGrotto/scripts.pory"
	seteventmon SPECIES_TAPU_LELE, 40
# 100 "data/maps/SeasideGrotto/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 101 "data/maps/SeasideGrotto/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 102 "data/maps/SeasideGrotto/scripts.pory"
	waitstate
# 103 "data/maps/SeasideGrotto/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 104 "data/maps/SeasideGrotto/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 105 "data/maps/SeasideGrotto/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq BattleTapuLele_2
BattleTapuLele_1:
# 108 "data/maps/SeasideGrotto/scripts.pory"
	release
	end

BattleTapuLele_2:
# 106 "data/maps/SeasideGrotto/scripts.pory"
	setflag FLAG_CAUGHT_TAPU_LELE
	goto BattleTapuLele_1


BattleTapuBulu_Text_0:
# 37 "data/maps/SeasideGrotto/scripts.pory"
	.string "Ta-pu-loooo!$"

BattleTapuFini_Text_0:
# 57 "data/maps/SeasideGrotto/scripts.pory"
	.string "Ta-pu-fiiieee!$"

BattleTapuKoko_Text_0:
# 77 "data/maps/SeasideGrotto/scripts.pory"
	.string "Tapu ko-ko-ko-kooo!!!$"

BattleTapuLele_Text_0:
# 97 "data/maps/SeasideGrotto/scripts.pory"
	.string "Ta-pu leeeh!$"
