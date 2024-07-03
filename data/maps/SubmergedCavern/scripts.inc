SubmergedCavern_MapScripts::
# 7 "data/maps/SubmergedCavern/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SubmergedCavern_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 25 "data/maps/SubmergedCavern/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, SubmergedCavern_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

SubmergedCavern_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 8 "data/maps/SubmergedCavern/scripts.pory"
	goto_if_set FLAG_CAUGHT_CHIEN_PAO, SubmergedCavern_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 12 "data/maps/SubmergedCavern/scripts.pory"
	goto_if_set FLAG_CAUGHT_CHI_YU, SubmergedCavern_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 16 "data/maps/SubmergedCavern/scripts.pory"
	goto_if_set FLAG_CAUGHT_TING_LU, SubmergedCavern_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
# 20 "data/maps/SubmergedCavern/scripts.pory"
	goto_if_set FLAG_CAUGHT_WO_CHIEN, SubmergedCavern_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
	return

SubmergedCavern_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 9 "data/maps/SubmergedCavern/scripts.pory"
	setflag FLAG_TEMP_2
# 10 "data/maps/SubmergedCavern/scripts.pory"
	removeobject 1
	return

SubmergedCavern_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 13 "data/maps/SubmergedCavern/scripts.pory"
	setflag FLAG_TEMP_3
# 14 "data/maps/SubmergedCavern/scripts.pory"
	removeobject 2
	return

SubmergedCavern_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
# 17 "data/maps/SubmergedCavern/scripts.pory"
	setflag FLAG_TEMP_4
# 18 "data/maps/SubmergedCavern/scripts.pory"
	removeobject 3
	return

SubmergedCavern_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 21 "data/maps/SubmergedCavern/scripts.pory"
	setflag FLAG_TEMP_5
# 22 "data/maps/SubmergedCavern/scripts.pory"
	removeobject 4
	return

SubmergedCavern_MapScripts_MAP_SCRIPT_ON_RESUME:
# 26 "data/maps/SubmergedCavern/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, SubmergedCavern_MapScripts_MAP_SCRIPT_ON_RESUME_2
SubmergedCavern_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 29 "data/maps/SubmergedCavern/scripts.pory"
	setdivewarp MAP_UNDERWATER_SUBMERGED_CAVERN, 3, 3
	return

SubmergedCavern_MapScripts_MAP_SCRIPT_ON_RESUME_2:
# 27 "data/maps/SubmergedCavern/scripts.pory"
	removeobject VAR_LAST_TALKED
	goto SubmergedCavern_MapScripts_MAP_SCRIPT_ON_RESUME_1


BattleChienPao::
# 34 "data/maps/SubmergedCavern/scripts.pory"
	lock
# 35 "data/maps/SubmergedCavern/scripts.pory"
	setvar VAR_LAST_TALKED, 1
# 36 "data/maps/SubmergedCavern/scripts.pory"
	playmoncry SPECIES_CHIEN_PAO, CRY_MODE_ENCOUNTER
# 37 "data/maps/SubmergedCavern/scripts.pory"
	msgbox BattleChienPao_Text_0
# 38 "data/maps/SubmergedCavern/scripts.pory"
	waitmoncry
# 39 "data/maps/SubmergedCavern/scripts.pory"
	seteventmon SPECIES_CHIEN_PAO, 45
# 40 "data/maps/SubmergedCavern/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 41 "data/maps/SubmergedCavern/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 42 "data/maps/SubmergedCavern/scripts.pory"
	waitstate
# 43 "data/maps/SubmergedCavern/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 44 "data/maps/SubmergedCavern/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 45 "data/maps/SubmergedCavern/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq BattleChienPao_2
BattleChienPao_1:
# 48 "data/maps/SubmergedCavern/scripts.pory"
	release
	end

BattleChienPao_2:
# 46 "data/maps/SubmergedCavern/scripts.pory"
	setflag FLAG_CAUGHT_CHIEN_PAO
	goto BattleChienPao_1


BattleChiYu::
# 53 "data/maps/SubmergedCavern/scripts.pory"
	lock
# 54 "data/maps/SubmergedCavern/scripts.pory"
	setvar VAR_LAST_TALKED, 2
# 55 "data/maps/SubmergedCavern/scripts.pory"
	playmoncry SPECIES_CHI_YU, CRY_MODE_ENCOUNTER
# 56 "data/maps/SubmergedCavern/scripts.pory"
	msgbox BattleChiYu_Text_0
# 57 "data/maps/SubmergedCavern/scripts.pory"
	waitmoncry
# 58 "data/maps/SubmergedCavern/scripts.pory"
	seteventmon SPECIES_CHI_YU, 45
# 59 "data/maps/SubmergedCavern/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 60 "data/maps/SubmergedCavern/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 61 "data/maps/SubmergedCavern/scripts.pory"
	waitstate
# 62 "data/maps/SubmergedCavern/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 63 "data/maps/SubmergedCavern/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 64 "data/maps/SubmergedCavern/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq BattleChiYu_2
BattleChiYu_1:
# 67 "data/maps/SubmergedCavern/scripts.pory"
	release
	end

BattleChiYu_2:
# 65 "data/maps/SubmergedCavern/scripts.pory"
	setflag FLAG_CAUGHT_CHI_YU
	goto BattleChiYu_1


BattleTingLu::
# 72 "data/maps/SubmergedCavern/scripts.pory"
	lock
# 73 "data/maps/SubmergedCavern/scripts.pory"
	setvar VAR_LAST_TALKED, 3
# 74 "data/maps/SubmergedCavern/scripts.pory"
	playmoncry SPECIES_TING_LU, CRY_MODE_ENCOUNTER
# 75 "data/maps/SubmergedCavern/scripts.pory"
	msgbox BattleTingLu_Text_0
# 76 "data/maps/SubmergedCavern/scripts.pory"
	waitmoncry
# 77 "data/maps/SubmergedCavern/scripts.pory"
	seteventmon SPECIES_TING_LU, 45
# 78 "data/maps/SubmergedCavern/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 79 "data/maps/SubmergedCavern/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 80 "data/maps/SubmergedCavern/scripts.pory"
	waitstate
# 81 "data/maps/SubmergedCavern/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 82 "data/maps/SubmergedCavern/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 83 "data/maps/SubmergedCavern/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq BattleTingLu_2
BattleTingLu_1:
# 86 "data/maps/SubmergedCavern/scripts.pory"
	release
	end

BattleTingLu_2:
# 84 "data/maps/SubmergedCavern/scripts.pory"
	setflag FLAG_CAUGHT_TING_LU
	goto BattleTingLu_1


BattleWoChien::
# 91 "data/maps/SubmergedCavern/scripts.pory"
	lock
# 92 "data/maps/SubmergedCavern/scripts.pory"
	setvar VAR_LAST_TALKED, 4
# 93 "data/maps/SubmergedCavern/scripts.pory"
	playmoncry SPECIES_WO_CHIEN, CRY_MODE_ENCOUNTER
# 94 "data/maps/SubmergedCavern/scripts.pory"
	msgbox BattleWoChien_Text_0
# 95 "data/maps/SubmergedCavern/scripts.pory"
	waitmoncry
# 96 "data/maps/SubmergedCavern/scripts.pory"
	seteventmon SPECIES_WO_CHIEN, 45
# 97 "data/maps/SubmergedCavern/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 98 "data/maps/SubmergedCavern/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 99 "data/maps/SubmergedCavern/scripts.pory"
	waitstate
# 100 "data/maps/SubmergedCavern/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 101 "data/maps/SubmergedCavern/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 102 "data/maps/SubmergedCavern/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq BattleWoChien_2
BattleWoChien_1:
# 105 "data/maps/SubmergedCavern/scripts.pory"
	release
	end

BattleWoChien_2:
# 103 "data/maps/SubmergedCavern/scripts.pory"
	setflag FLAG_CAUGHT_WO_CHIEN
	goto BattleWoChien_1


BattleChienPao_Text_0:
# 37 "data/maps/SubmergedCavern/scripts.pory"
	.string "Graoo-wuuh!$"

BattleChiYu_Text_0:
# 56 "data/maps/SubmergedCavern/scripts.pory"
	.string "Di-tiing wuh!$"

BattleTingLu_Text_0:
# 75 "data/maps/SubmergedCavern/scripts.pory"
	.string "Aouu-wooouh!$"

BattleWoChien_Text_0:
# 94 "data/maps/SubmergedCavern/scripts.pory"
	.string "Greu-wuuu!$"
