TemporalSpire_MapScripts::
# 5 "data/maps/TemporalSpire/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, TemporalSpire_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 18 "data/maps/TemporalSpire/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, TemporalSpire_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

TemporalSpire_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 6 "data/maps/TemporalSpire/scripts.pory"
	goto_if_set FLAG_CAUGHT_DIALGA, TemporalSpire_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
TemporalSpire_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 10 "data/maps/TemporalSpire/scripts.pory"
	goto_if_set FLAG_CAUGHT_PALKIA, TemporalSpire_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
TemporalSpire_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 14 "data/maps/TemporalSpire/scripts.pory"
	goto_if_unset FLAG_TEMP_1, TemporalSpire_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
	return

TemporalSpire_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 7 "data/maps/TemporalSpire/scripts.pory"
	setflag FLAG_TEMP_1
# 8 "data/maps/TemporalSpire/scripts.pory"
	removeobject 2
	goto TemporalSpire_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

TemporalSpire_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 11 "data/maps/TemporalSpire/scripts.pory"
	setflag FLAG_TEMP_2
# 12 "data/maps/TemporalSpire/scripts.pory"
	removeobject 3
	goto TemporalSpire_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

TemporalSpire_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 15 "data/maps/TemporalSpire/scripts.pory"
	setflag FLAG_TEMP_HIDE_FOLLOWER
	return

TemporalSpire_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 14 "data/maps/TemporalSpire/scripts.pory"
	goto_if_unset FLAG_TEMP_2, TemporalSpire_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
	return

TemporalSpire_MapScripts_MAP_SCRIPT_ON_RESUME:
# 19 "data/maps/TemporalSpire/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, TemporalSpire_MapScripts_MAP_SCRIPT_ON_RESUME_1
	return

TemporalSpire_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 20 "data/maps/TemporalSpire/scripts.pory"
	removeobject VAR_LAST_TALKED
	return


TemporalSpire_EventScript_PortalTeleport::
# 26 "data/maps/TemporalSpire/scripts.pory"
	warp MAP_WELLSPRING_CHASM_2, 2
# 27 "data/maps/TemporalSpire/scripts.pory"
	waitstate
	return


BattleDialga::
# 31 "data/maps/TemporalSpire/scripts.pory"
	lock
# 32 "data/maps/TemporalSpire/scripts.pory"
	faceplayer
# 33 "data/maps/TemporalSpire/scripts.pory"
	setvar VAR_LAST_TALKED, 2
# 34 "data/maps/TemporalSpire/scripts.pory"
	playmoncry SPECIES_DIALGA, CRY_MODE_ENCOUNTER
# 35 "data/maps/TemporalSpire/scripts.pory"
	msgbox BattleDialga_Text_0
# 36 "data/maps/TemporalSpire/scripts.pory"
	waitmoncry
# 37 "data/maps/TemporalSpire/scripts.pory"
	setwildbattle SPECIES_DIALGA, 70
# 38 "data/maps/TemporalSpire/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 39 "data/maps/TemporalSpire/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 40 "data/maps/TemporalSpire/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 41 "data/maps/TemporalSpire/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 42 "data/maps/TemporalSpire/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq BattleDialga_2
BattleDialga_1:
# 45 "data/maps/TemporalSpire/scripts.pory"
	release
	end

BattleDialga_2:
# 43 "data/maps/TemporalSpire/scripts.pory"
	setflag FLAG_CAUGHT_DIALGA
	goto BattleDialga_1


BattlePalkia::
# 50 "data/maps/TemporalSpire/scripts.pory"
	lock
# 51 "data/maps/TemporalSpire/scripts.pory"
	faceplayer
# 52 "data/maps/TemporalSpire/scripts.pory"
	setvar VAR_LAST_TALKED, 3
# 53 "data/maps/TemporalSpire/scripts.pory"
	playmoncry SPECIES_PALKIA, CRY_MODE_ENCOUNTER
# 54 "data/maps/TemporalSpire/scripts.pory"
	msgbox BattlePalkia_Text_0
# 55 "data/maps/TemporalSpire/scripts.pory"
	waitmoncry
# 56 "data/maps/TemporalSpire/scripts.pory"
	setwildbattle SPECIES_PALKIA, 70
# 57 "data/maps/TemporalSpire/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 58 "data/maps/TemporalSpire/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 59 "data/maps/TemporalSpire/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 60 "data/maps/TemporalSpire/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 61 "data/maps/TemporalSpire/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq BattlePalkia_2
BattlePalkia_1:
# 64 "data/maps/TemporalSpire/scripts.pory"
	release
	end

BattlePalkia_2:
# 62 "data/maps/TemporalSpire/scripts.pory"
	setflag FLAG_CAUGHT_PALKIA
	goto BattlePalkia_1


BattleDialga_Text_0:
# 35 "data/maps/TemporalSpire/scripts.pory"
	.string "Gugyugubah!$"

BattlePalkia_Text_0:
# 54 "data/maps/TemporalSpire/scripts.pory"
	.string "Gagyagyaah!$"
