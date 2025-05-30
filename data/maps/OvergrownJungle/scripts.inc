OvergrownJungle_MapScripts::
# 4 "data/maps/OvergrownJungle/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, OvergrownJungle_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 10 "data/maps/OvergrownJungle/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, OvergrownJungle_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

OvergrownJungle_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 5 "data/maps/OvergrownJungle/scripts.pory"
	goto_if_set FLAG_CAUGHT_ZARUDE, OvergrownJungle_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

OvergrownJungle_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 6 "data/maps/OvergrownJungle/scripts.pory"
	setflag FLAG_TEMP_2
# 7 "data/maps/OvergrownJungle/scripts.pory"
	removeobject 1
	return

OvergrownJungle_MapScripts_MAP_SCRIPT_ON_RESUME:
# 11 "data/maps/OvergrownJungle/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, OvergrownJungle_MapScripts_MAP_SCRIPT_ON_RESUME_1
	return

OvergrownJungle_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 12 "data/maps/OvergrownJungle/scripts.pory"
	removeobject VAR_LAST_TALKED
	return


BattleZarude::
# 18 "data/maps/OvergrownJungle/scripts.pory"
	lock
# 19 "data/maps/OvergrownJungle/scripts.pory"
	faceplayer
# 20 "data/maps/OvergrownJungle/scripts.pory"
	setvar VAR_LAST_TALKED, 1
# 21 "data/maps/OvergrownJungle/scripts.pory"
	playmoncry SPECIES_ZARUDE, CRY_MODE_ENCOUNTER
# 22 "data/maps/OvergrownJungle/scripts.pory"
	msgbox BattleZarude_Text_0
# 23 "data/maps/OvergrownJungle/scripts.pory"
	waitmoncry
# 24 "data/maps/OvergrownJungle/scripts.pory"
	seteventmon SPECIES_ZARUDE, 50
# 25 "data/maps/OvergrownJungle/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 26 "data/maps/OvergrownJungle/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 27 "data/maps/OvergrownJungle/scripts.pory"
	waitstate
# 28 "data/maps/OvergrownJungle/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 29 "data/maps/OvergrownJungle/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 30 "data/maps/OvergrownJungle/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq BattleZarude_2
BattleZarude_1:
# 33 "data/maps/OvergrownJungle/scripts.pory"
	release
	end

BattleZarude_2:
# 31 "data/maps/OvergrownJungle/scripts.pory"
	setflag FLAG_CAUGHT_ZARUDE
	goto BattleZarude_1


BattleZarude_Text_0:
# 22 "data/maps/OvergrownJungle/scripts.pory"
	.string "Guu-guuhuhuhu!!$"
