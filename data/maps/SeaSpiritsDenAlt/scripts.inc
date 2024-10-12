SeaSpiritsDenAlt_MapScripts::
# 6 "data/maps/SeaSpiritsDenAlt/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SeaSpiritsDenAlt_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 20 "data/maps/SeaSpiritsDenAlt/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, SeaSpiritsDenAlt_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

SeaSpiritsDenAlt_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 7 "data/maps/SeaSpiritsDenAlt/scripts.pory"
	goto_if_set FLAG_CAUGHT_ARTICUNO_G, SeaSpiritsDenAlt_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 11 "data/maps/SeaSpiritsDenAlt/scripts.pory"
	goto_if_set FLAG_CAUGHT_ZAPDOS_G, SeaSpiritsDenAlt_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 15 "data/maps/SeaSpiritsDenAlt/scripts.pory"
	goto_if_set FLAG_CAUGHT_MOLTRES_G, SeaSpiritsDenAlt_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
	return

SeaSpiritsDenAlt_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 8 "data/maps/SeaSpiritsDenAlt/scripts.pory"
	setflag FLAG_TEMP_2
# 9 "data/maps/SeaSpiritsDenAlt/scripts.pory"
	removeobject 1
	return

SeaSpiritsDenAlt_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 12 "data/maps/SeaSpiritsDenAlt/scripts.pory"
	setflag FLAG_TEMP_3
# 13 "data/maps/SeaSpiritsDenAlt/scripts.pory"
	removeobject 2
	return

SeaSpiritsDenAlt_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
# 16 "data/maps/SeaSpiritsDenAlt/scripts.pory"
	setflag FLAG_TEMP_4
# 17 "data/maps/SeaSpiritsDenAlt/scripts.pory"
	removeobject 3
	return

SeaSpiritsDenAlt_MapScripts_MAP_SCRIPT_ON_RESUME:
# 21 "data/maps/SeaSpiritsDenAlt/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, SeaSpiritsDenAlt_MapScripts_MAP_SCRIPT_ON_RESUME_1
	return

SeaSpiritsDenAlt_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 22 "data/maps/SeaSpiritsDenAlt/scripts.pory"
	removeobject VAR_LAST_TALKED
	return


SeaSpiritsDenAlt_Portal::
# 28 "data/maps/SeaSpiritsDenAlt/scripts.pory"
	warp MAP_SEA_SPIRITS_DEN, 1
	return


BattleArticunoG::
# 32 "data/maps/SeaSpiritsDenAlt/scripts.pory"
	lock
# 33 "data/maps/SeaSpiritsDenAlt/scripts.pory"
	setvar VAR_LAST_TALKED, 1
# 34 "data/maps/SeaSpiritsDenAlt/scripts.pory"
	playmoncry SPECIES_ARTICUNO_GALARIAN, CRY_MODE_ENCOUNTER
# 35 "data/maps/SeaSpiritsDenAlt/scripts.pory"
	msgbox BattleArticunoG_Text_0
# 36 "data/maps/SeaSpiritsDenAlt/scripts.pory"
	waitmoncry
# 37 "data/maps/SeaSpiritsDenAlt/scripts.pory"
	seteventmon SPECIES_ARTICUNO_GALARIAN, 40
# 38 "data/maps/SeaSpiritsDenAlt/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 39 "data/maps/SeaSpiritsDenAlt/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 40 "data/maps/SeaSpiritsDenAlt/scripts.pory"
	waitstate
# 41 "data/maps/SeaSpiritsDenAlt/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 42 "data/maps/SeaSpiritsDenAlt/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 43 "data/maps/SeaSpiritsDenAlt/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq BattleArticunoG_2
BattleArticunoG_1:
# 46 "data/maps/SeaSpiritsDenAlt/scripts.pory"
	release
	end

BattleArticunoG_2:
# 44 "data/maps/SeaSpiritsDenAlt/scripts.pory"
	setflag FLAG_CAUGHT_ARTICUNO_G
	goto BattleArticunoG_1


BattleZapdosG::
# 51 "data/maps/SeaSpiritsDenAlt/scripts.pory"
	lock
# 52 "data/maps/SeaSpiritsDenAlt/scripts.pory"
	setvar VAR_LAST_TALKED, 2
# 53 "data/maps/SeaSpiritsDenAlt/scripts.pory"
	playmoncry SPECIES_ZAPDOS_GALARIAN, CRY_MODE_ENCOUNTER
# 54 "data/maps/SeaSpiritsDenAlt/scripts.pory"
	msgbox BattleArticunoG_Text_0
# 55 "data/maps/SeaSpiritsDenAlt/scripts.pory"
	waitmoncry
# 56 "data/maps/SeaSpiritsDenAlt/scripts.pory"
	seteventmon SPECIES_ZAPDOS_GALARIAN, 40
# 57 "data/maps/SeaSpiritsDenAlt/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 58 "data/maps/SeaSpiritsDenAlt/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 59 "data/maps/SeaSpiritsDenAlt/scripts.pory"
	waitstate
# 60 "data/maps/SeaSpiritsDenAlt/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 61 "data/maps/SeaSpiritsDenAlt/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 62 "data/maps/SeaSpiritsDenAlt/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq BattleZapdosG_2
BattleZapdosG_1:
# 65 "data/maps/SeaSpiritsDenAlt/scripts.pory"
	release
	end

BattleZapdosG_2:
# 63 "data/maps/SeaSpiritsDenAlt/scripts.pory"
	setflag FLAG_CAUGHT_ZAPDOS_G
	goto BattleZapdosG_1


BattleMoltresG::
# 70 "data/maps/SeaSpiritsDenAlt/scripts.pory"
	lock
# 71 "data/maps/SeaSpiritsDenAlt/scripts.pory"
	setvar VAR_LAST_TALKED, 3
# 72 "data/maps/SeaSpiritsDenAlt/scripts.pory"
	playmoncry SPECIES_MOLTRES_GALARIAN, CRY_MODE_ENCOUNTER
# 73 "data/maps/SeaSpiritsDenAlt/scripts.pory"
	msgbox BattleArticunoG_Text_0
# 74 "data/maps/SeaSpiritsDenAlt/scripts.pory"
	waitmoncry
# 75 "data/maps/SeaSpiritsDenAlt/scripts.pory"
	seteventmon SPECIES_MOLTRES_GALARIAN, 40
# 76 "data/maps/SeaSpiritsDenAlt/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 77 "data/maps/SeaSpiritsDenAlt/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 78 "data/maps/SeaSpiritsDenAlt/scripts.pory"
	waitstate
# 79 "data/maps/SeaSpiritsDenAlt/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 80 "data/maps/SeaSpiritsDenAlt/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 81 "data/maps/SeaSpiritsDenAlt/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq BattleMoltresG_2
BattleMoltresG_1:
# 84 "data/maps/SeaSpiritsDenAlt/scripts.pory"
	release
	end

BattleMoltresG_2:
# 82 "data/maps/SeaSpiritsDenAlt/scripts.pory"
	setflag FLAG_CAUGHT_MOLTRES_G
	goto BattleMoltresG_1


BattleArticunoG_Text_0:
# 35 "data/maps/SeaSpiritsDenAlt/scripts.pory"
	.string "Gyooa!$"
