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
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, SubmergedCavern_MapScripts_MAP_SCRIPT_ON_RESUME_1
	return

SubmergedCavern_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 27 "data/maps/SubmergedCavern/scripts.pory"
	removeobject VAR_LAST_TALKED
	return


BattleChienPao::
# 33 "data/maps/SubmergedCavern/scripts.pory"
	lock
# 34 "data/maps/SubmergedCavern/scripts.pory"
	setvar VAR_LAST_TALKED, 1
# 35 "data/maps/SubmergedCavern/scripts.pory"
	playmoncry SPECIES_CHIEN_PAO, CRY_MODE_ENCOUNTER
# 36 "data/maps/SubmergedCavern/scripts.pory"
	msgbox BattleChienPao_Text_0
# 37 "data/maps/SubmergedCavern/scripts.pory"
	waitmoncry
# 38 "data/maps/SubmergedCavern/scripts.pory"
	seteventmon SPECIES_CHIEN_PAO, 50
# 39 "data/maps/SubmergedCavern/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 40 "data/maps/SubmergedCavern/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 41 "data/maps/SubmergedCavern/scripts.pory"
	waitstate
# 42 "data/maps/SubmergedCavern/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 43 "data/maps/SubmergedCavern/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 44 "data/maps/SubmergedCavern/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq BattleChienPao_2
BattleChienPao_1:
# 47 "data/maps/SubmergedCavern/scripts.pory"
	release
	end

BattleChienPao_2:
# 45 "data/maps/SubmergedCavern/scripts.pory"
	setflag FLAG_CAUGHT_CHIEN_PAO
	goto BattleChienPao_1


BattleChiYu::
# 52 "data/maps/SubmergedCavern/scripts.pory"
	lock
# 53 "data/maps/SubmergedCavern/scripts.pory"
	setvar VAR_LAST_TALKED, 2
# 54 "data/maps/SubmergedCavern/scripts.pory"
	playmoncry SPECIES_CHI_YU, CRY_MODE_ENCOUNTER
# 55 "data/maps/SubmergedCavern/scripts.pory"
	msgbox BattleChiYu_Text_0
# 56 "data/maps/SubmergedCavern/scripts.pory"
	waitmoncry
# 57 "data/maps/SubmergedCavern/scripts.pory"
	seteventmon SPECIES_CHI_YU, 50
# 58 "data/maps/SubmergedCavern/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 59 "data/maps/SubmergedCavern/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 60 "data/maps/SubmergedCavern/scripts.pory"
	waitstate
# 61 "data/maps/SubmergedCavern/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 62 "data/maps/SubmergedCavern/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 63 "data/maps/SubmergedCavern/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq BattleChiYu_2
BattleChiYu_1:
# 66 "data/maps/SubmergedCavern/scripts.pory"
	release
	end

BattleChiYu_2:
# 64 "data/maps/SubmergedCavern/scripts.pory"
	setflag FLAG_CAUGHT_CHI_YU
	goto BattleChiYu_1


BattleTingLu::
# 71 "data/maps/SubmergedCavern/scripts.pory"
	lock
# 72 "data/maps/SubmergedCavern/scripts.pory"
	setvar VAR_LAST_TALKED, 3
# 73 "data/maps/SubmergedCavern/scripts.pory"
	playmoncry SPECIES_TING_LU, CRY_MODE_ENCOUNTER
# 74 "data/maps/SubmergedCavern/scripts.pory"
	msgbox BattleTingLu_Text_0
# 75 "data/maps/SubmergedCavern/scripts.pory"
	waitmoncry
# 76 "data/maps/SubmergedCavern/scripts.pory"
	seteventmon SPECIES_TING_LU, 50
# 77 "data/maps/SubmergedCavern/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 78 "data/maps/SubmergedCavern/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 79 "data/maps/SubmergedCavern/scripts.pory"
	waitstate
# 80 "data/maps/SubmergedCavern/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 81 "data/maps/SubmergedCavern/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 82 "data/maps/SubmergedCavern/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq BattleTingLu_2
BattleTingLu_1:
# 85 "data/maps/SubmergedCavern/scripts.pory"
	release
	end

BattleTingLu_2:
# 83 "data/maps/SubmergedCavern/scripts.pory"
	setflag FLAG_CAUGHT_TING_LU
	goto BattleTingLu_1


BattleWoChien::
# 90 "data/maps/SubmergedCavern/scripts.pory"
	lock
# 91 "data/maps/SubmergedCavern/scripts.pory"
	setvar VAR_LAST_TALKED, 4
# 92 "data/maps/SubmergedCavern/scripts.pory"
	playmoncry SPECIES_WO_CHIEN, CRY_MODE_ENCOUNTER
# 93 "data/maps/SubmergedCavern/scripts.pory"
	msgbox BattleWoChien_Text_0
# 94 "data/maps/SubmergedCavern/scripts.pory"
	waitmoncry
# 95 "data/maps/SubmergedCavern/scripts.pory"
	seteventmon SPECIES_WO_CHIEN, 50
# 96 "data/maps/SubmergedCavern/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 97 "data/maps/SubmergedCavern/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 98 "data/maps/SubmergedCavern/scripts.pory"
	waitstate
# 99 "data/maps/SubmergedCavern/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 100 "data/maps/SubmergedCavern/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 101 "data/maps/SubmergedCavern/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq BattleWoChien_2
BattleWoChien_1:
# 104 "data/maps/SubmergedCavern/scripts.pory"
	release
	end

BattleWoChien_2:
# 102 "data/maps/SubmergedCavern/scripts.pory"
	setflag FLAG_CAUGHT_WO_CHIEN
	goto BattleWoChien_1


BattleChienPao_Text_0:
# 36 "data/maps/SubmergedCavern/scripts.pory"
	.string "Graoo-wuuh!$"

BattleChiYu_Text_0:
# 55 "data/maps/SubmergedCavern/scripts.pory"
	.string "Di-tiing wuh!$"

BattleTingLu_Text_0:
# 74 "data/maps/SubmergedCavern/scripts.pory"
	.string "Aouu-wooouh!$"

BattleWoChien_Text_0:
# 93 "data/maps/SubmergedCavern/scripts.pory"
	.string "Greu-wuuu!$"
