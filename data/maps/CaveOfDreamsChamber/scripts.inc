CaveOfDreamsChamber_MapScripts::
# 4 "data/maps/CaveOfDreamsChamber/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CaveOfDreamsChamber_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 10 "data/maps/CaveOfDreamsChamber/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CaveOfDreamsChamber_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

CaveOfDreamsChamber_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 5 "data/maps/CaveOfDreamsChamber/scripts.pory"
	goto_if_set FLAG_CAUGHT_DARKRAI, CaveOfDreamsChamber_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

CaveOfDreamsChamber_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 6 "data/maps/CaveOfDreamsChamber/scripts.pory"
	setflag FLAG_TEMP_2
# 7 "data/maps/CaveOfDreamsChamber/scripts.pory"
	removeobject 1
	return

CaveOfDreamsChamber_MapScripts_MAP_SCRIPT_ON_RESUME:
# 11 "data/maps/CaveOfDreamsChamber/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, CaveOfDreamsChamber_MapScripts_MAP_SCRIPT_ON_RESUME_1
	return

CaveOfDreamsChamber_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 12 "data/maps/CaveOfDreamsChamber/scripts.pory"
	removeobject 1
	return


BattleDarkrai::
# 18 "data/maps/CaveOfDreamsChamber/scripts.pory"
	lock
# 19 "data/maps/CaveOfDreamsChamber/scripts.pory"
	playmoncry SPECIES_DARKRAI, CRY_MODE_ENCOUNTER
# 20 "data/maps/CaveOfDreamsChamber/scripts.pory"
	msgbox BattleDarkrai_Text_0
# 21 "data/maps/CaveOfDreamsChamber/scripts.pory"
	waitmoncry
# 22 "data/maps/CaveOfDreamsChamber/scripts.pory"
	seteventmon SPECIES_DARKRAI, 50
# 23 "data/maps/CaveOfDreamsChamber/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 24 "data/maps/CaveOfDreamsChamber/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 25 "data/maps/CaveOfDreamsChamber/scripts.pory"
	waitstate
# 26 "data/maps/CaveOfDreamsChamber/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 27 "data/maps/CaveOfDreamsChamber/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 28 "data/maps/CaveOfDreamsChamber/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq BattleDarkrai_2
BattleDarkrai_1:
# 31 "data/maps/CaveOfDreamsChamber/scripts.pory"
	release
	end

BattleDarkrai_2:
# 29 "data/maps/CaveOfDreamsChamber/scripts.pory"
	setflag FLAG_CAUGHT_DARKRAI
	goto BattleDarkrai_1


BattleDarkrai_Text_0:
# 20 "data/maps/CaveOfDreamsChamber/scripts.pory"
	.string "...\p...$"
