RetiredMechanism_MapScripts::
# 4 "data/maps/RetiredMechanism/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RetiredMechanism_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 10 "data/maps/RetiredMechanism/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, RetiredMechanism_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

RetiredMechanism_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 5 "data/maps/RetiredMechanism/scripts.pory"
	goto_if_set FLAG_CAUGHT_REGIELEKI, RetiredMechanism_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

RetiredMechanism_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 6 "data/maps/RetiredMechanism/scripts.pory"
	setflag FLAG_TEMP_2
# 7 "data/maps/RetiredMechanism/scripts.pory"
	removeobject 1
	return

RetiredMechanism_MapScripts_MAP_SCRIPT_ON_RESUME:
# 11 "data/maps/RetiredMechanism/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, RetiredMechanism_MapScripts_MAP_SCRIPT_ON_RESUME_1
	return

RetiredMechanism_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 12 "data/maps/RetiredMechanism/scripts.pory"
	removeobject 1
	return


BattleRegieleki::
# 18 "data/maps/RetiredMechanism/scripts.pory"
	lock
# 19 "data/maps/RetiredMechanism/scripts.pory"
	playmoncry SPECIES_REGIELEKI, CRY_MODE_ENCOUNTER
# 20 "data/maps/RetiredMechanism/scripts.pory"
	msgbox BattleRegieleki_Text_0
# 21 "data/maps/RetiredMechanism/scripts.pory"
	waitmoncry
# 22 "data/maps/RetiredMechanism/scripts.pory"
	setwildbattle SPECIES_REGIELEKI, 40
# 23 "data/maps/RetiredMechanism/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 24 "data/maps/RetiredMechanism/scripts.pory"
	special StartRegiBattle
# 25 "data/maps/RetiredMechanism/scripts.pory"
	waitstate
# 26 "data/maps/RetiredMechanism/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 27 "data/maps/RetiredMechanism/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 28 "data/maps/RetiredMechanism/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq BattleRegieleki_2
BattleRegieleki_1:
# 31 "data/maps/RetiredMechanism/scripts.pory"
	release
	end

BattleRegieleki_2:
# 29 "data/maps/RetiredMechanism/scripts.pory"
	setflag FLAG_CAUGHT_REGIELEKI
	goto BattleRegieleki_1


BattleRegieleki_Text_0:
# 20 "data/maps/RetiredMechanism/scripts.pory"
	.string "Zizi zizizi.$"
