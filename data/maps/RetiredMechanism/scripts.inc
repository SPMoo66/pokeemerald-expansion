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
	faceplayer
# 20 "data/maps/RetiredMechanism/scripts.pory"
	playmoncry SPECIES_REGIELEKI, CRY_MODE_ENCOUNTER
# 21 "data/maps/RetiredMechanism/scripts.pory"
	msgbox BattleRegieleki_Text_0
# 22 "data/maps/RetiredMechanism/scripts.pory"
	waitmoncry
# 23 "data/maps/RetiredMechanism/scripts.pory"
	setwildbattle SPECIES_REGIELEKI, 40
# 24 "data/maps/RetiredMechanism/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 25 "data/maps/RetiredMechanism/scripts.pory"
	special StartRegiBattle
# 26 "data/maps/RetiredMechanism/scripts.pory"
	waitstate
# 27 "data/maps/RetiredMechanism/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 28 "data/maps/RetiredMechanism/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 29 "data/maps/RetiredMechanism/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq BattleRegieleki_2
BattleRegieleki_1:
# 32 "data/maps/RetiredMechanism/scripts.pory"
	release
	end

BattleRegieleki_2:
# 30 "data/maps/RetiredMechanism/scripts.pory"
	setflag FLAG_CAUGHT_REGIELEKI
	goto BattleRegieleki_1


BattleRegieleki_Text_0:
# 21 "data/maps/RetiredMechanism/scripts.pory"
	.string "Zizi zizizi.$"
