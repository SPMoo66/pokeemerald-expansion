SeasideHollow_MapScripts::
# 4 "data/maps/SeasideHollow/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SeasideHollow_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 10 "data/maps/SeasideHollow/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, SeasideHollow_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

SeasideHollow_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 5 "data/maps/SeasideHollow/scripts.pory"
	goto_if_set FLAG_CAUGHT_MANAPHY, SeasideHollow_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

SeasideHollow_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 6 "data/maps/SeasideHollow/scripts.pory"
	setflag FLAG_TEMP_2
# 7 "data/maps/SeasideHollow/scripts.pory"
	removeobject 1
	return

SeasideHollow_MapScripts_MAP_SCRIPT_ON_RESUME:
# 11 "data/maps/SeasideHollow/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, SeasideHollow_MapScripts_MAP_SCRIPT_ON_RESUME_1
	return

SeasideHollow_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 12 "data/maps/SeasideHollow/scripts.pory"
	removeobject VAR_LAST_TALKED
	return


BattleManaphy::
# 18 "data/maps/SeasideHollow/scripts.pory"
	lock
# 19 "data/maps/SeasideHollow/scripts.pory"
	faceplayer
# 20 "data/maps/SeasideHollow/scripts.pory"
	setvar VAR_LAST_TALKED, 1
# 21 "data/maps/SeasideHollow/scripts.pory"
	playmoncry SPECIES_MANAPHY, CRY_MODE_ENCOUNTER
# 22 "data/maps/SeasideHollow/scripts.pory"
	msgbox BattleManaphy_Text_0
# 23 "data/maps/SeasideHollow/scripts.pory"
	waitmoncry
# 24 "data/maps/SeasideHollow/scripts.pory"
	seteventmon SPECIES_MANAPHY, 50
# 25 "data/maps/SeasideHollow/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 26 "data/maps/SeasideHollow/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 27 "data/maps/SeasideHollow/scripts.pory"
	waitstate
# 28 "data/maps/SeasideHollow/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 29 "data/maps/SeasideHollow/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 30 "data/maps/SeasideHollow/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq BattleManaphy_2
BattleManaphy_1:
# 33 "data/maps/SeasideHollow/scripts.pory"
	release
	end

BattleManaphy_2:
# 31 "data/maps/SeasideHollow/scripts.pory"
	setflag FLAG_CAUGHT_MANAPHY
	goto BattleManaphy_1


BattleManaphy_Text_0:
# 22 "data/maps/SeasideHollow/scripts.pory"
	.string "Awawii!$"
