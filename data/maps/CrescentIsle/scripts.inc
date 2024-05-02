CrescentIsle_MapScripts::
# 4 "data/maps/CrescentIsle/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CrescentIsle_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 10 "data/maps/CrescentIsle/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CrescentIsle_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

CrescentIsle_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 5 "data/maps/CrescentIsle/scripts.pory"
	goto_if_set FLAG_CAUGHT_CRESSELIA, CrescentIsle_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

CrescentIsle_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 6 "data/maps/CrescentIsle/scripts.pory"
	setflag FLAG_TEMP_2
# 7 "data/maps/CrescentIsle/scripts.pory"
	removeobject 2
	return

CrescentIsle_MapScripts_MAP_SCRIPT_ON_RESUME:
# 11 "data/maps/CrescentIsle/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, CrescentIsle_MapScripts_MAP_SCRIPT_ON_RESUME_1
	return

CrescentIsle_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 12 "data/maps/CrescentIsle/scripts.pory"
	removeobject VAR_LAST_TALKED
	return


BattleCresselia::
# 18 "data/maps/CrescentIsle/scripts.pory"
	lock
# 19 "data/maps/CrescentIsle/scripts.pory"
	setvar VAR_LAST_TALKED, 2
# 20 "data/maps/CrescentIsle/scripts.pory"
	playmoncry SPECIES_CRESSELIA, CRY_MODE_ENCOUNTER
# 21 "data/maps/CrescentIsle/scripts.pory"
	msgbox BattleCresselia_Text_0
# 22 "data/maps/CrescentIsle/scripts.pory"
	waitmoncry
# 23 "data/maps/CrescentIsle/scripts.pory"
	seteventmon SPECIES_CRESSELIA, 50
# 24 "data/maps/CrescentIsle/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 25 "data/maps/CrescentIsle/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 26 "data/maps/CrescentIsle/scripts.pory"
	waitstate
# 27 "data/maps/CrescentIsle/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 28 "data/maps/CrescentIsle/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 29 "data/maps/CrescentIsle/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq BattleCresselia_2
BattleCresselia_1:
# 32 "data/maps/CrescentIsle/scripts.pory"
	release
	end

BattleCresselia_2:
# 30 "data/maps/CrescentIsle/scripts.pory"
	setflag FLAG_CAUGHT_CRESSELIA
	goto BattleCresselia_1


CrescentIsle_Portal::
# 37 "data/maps/CrescentIsle/scripts.pory"
	warp MAP_CAVE_OF_DREAMS_CHAMBER, 1
	return


BattleCresselia_Text_0:
# 21 "data/maps/CrescentIsle/scripts.pory"
	.string "Gwooa!$"
