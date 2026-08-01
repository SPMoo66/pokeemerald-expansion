SS_Tidal_Dungeon_1F_2R_Rooms_MapScripts::
# 2 "data/maps/SS_Tidal_Dungeon_1F_2R_Rooms/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SS_Tidal_Dungeon_1F_2R_Rooms_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 13 "data/maps/SS_Tidal_Dungeon_1F_2R_Rooms/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, SS_Tidal_Dungeon_1F_2R_Rooms_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

SS_Tidal_Dungeon_1F_2R_Rooms_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/SS_Tidal_Dungeon_1F_2R_Rooms/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 38
	goto_if_ge SS_Tidal_Dungeon_1F_2R_Rooms_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
SS_Tidal_Dungeon_1F_2R_Rooms_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 6 "data/maps/SS_Tidal_Dungeon_1F_2R_Rooms/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 37
	goto_if_ge SS_Tidal_Dungeon_1F_2R_Rooms_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
SS_Tidal_Dungeon_1F_2R_Rooms_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 9 "data/maps/SS_Tidal_Dungeon_1F_2R_Rooms/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 51
	goto_if_ge SS_Tidal_Dungeon_1F_2R_Rooms_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
	return

SS_Tidal_Dungeon_1F_2R_Rooms_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 4 "data/maps/SS_Tidal_Dungeon_1F_2R_Rooms/scripts.pory"
	setflag FLAG_TEMP_1
	goto SS_Tidal_Dungeon_1F_2R_Rooms_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

SS_Tidal_Dungeon_1F_2R_Rooms_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 7 "data/maps/SS_Tidal_Dungeon_1F_2R_Rooms/scripts.pory"
	setflag FLAG_TEMP_2
	goto SS_Tidal_Dungeon_1F_2R_Rooms_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

SS_Tidal_Dungeon_1F_2R_Rooms_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 10 "data/maps/SS_Tidal_Dungeon_1F_2R_Rooms/scripts.pory"
	clearflag FLAG_TEMP_1
	return

SS_Tidal_Dungeon_1F_2R_Rooms_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 9 "data/maps/SS_Tidal_Dungeon_1F_2R_Rooms/scripts.pory"
	goto_if_unset FLAG_CAUGHT_REGIAGUA, SS_Tidal_Dungeon_1F_2R_Rooms_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
	return

SS_Tidal_Dungeon_1F_2R_Rooms_MapScripts_MAP_SCRIPT_ON_RESUME:
# 14 "data/maps/SS_Tidal_Dungeon_1F_2R_Rooms/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, SS_Tidal_Dungeon_1F_2R_Rooms_MapScripts_MAP_SCRIPT_ON_RESUME_1
	return

SS_Tidal_Dungeon_1F_2R_Rooms_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 15 "data/maps/SS_Tidal_Dungeon_1F_2R_Rooms/scripts.pory"
	removeobject 2
	return


SS_Tidal_Dungeon_1F_2R_Rooms_Key::
# 21 "data/maps/SS_Tidal_Dungeon_1F_2R_Rooms/scripts.pory"
	removeobject VAR_LAST_TALKED
# 22 "data/maps/SS_Tidal_Dungeon_1F_2R_Rooms/scripts.pory"
	playfanfare MUS_DP_OBTAIN_KEY_ITEM
# 23 "data/maps/SS_Tidal_Dungeon_1F_2R_Rooms/scripts.pory"
	message SS_Tidal_Dungeon_1F_2R_Rooms_Key_Text_0
# 24 "data/maps/SS_Tidal_Dungeon_1F_2R_Rooms/scripts.pory"
	waitfanfare
# 25 "data/maps/SS_Tidal_Dungeon_1F_2R_Rooms/scripts.pory"
	closemessage
# 26 "data/maps/SS_Tidal_Dungeon_1F_2R_Rooms/scripts.pory"
	setvar VAR_EMERALBODY_RIVAL_STATE, 37
	return


SS_Tidal_Dungeon_1F_2R_Rooms_FishBowl::
# 30 "data/maps/SS_Tidal_Dungeon_1F_2R_Rooms/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 51
	goto_if_ge SS_Tidal_Dungeon_1F_2R_Rooms_FishBowl_1
# 34 "data/maps/SS_Tidal_Dungeon_1F_2R_Rooms/scripts.pory"
	msgbox SS_Tidal_Dungeon_1F_2R_Rooms_FishBowl_Text_0, MSGBOX_AUTOCLOSE
	return

SS_Tidal_Dungeon_1F_2R_Rooms_FishBowl_1:
# 31 "data/maps/SS_Tidal_Dungeon_1F_2R_Rooms/scripts.pory"
	goto BattleRegiagua
	return


SS_Tidal_Dungeon_1F_2R_Rooms_EventScript_Otis::
# 41 "data/maps/SS_Tidal_Dungeon_1F_2R_Rooms/scripts.pory"
	trainerbattle_single TRAINER_OTIS, SS_Tidal_Dungeon_1F_2R_Rooms_EventScript_Otis_Text_0, SS_Tidal_Dungeon_1F_2R_Rooms_EventScript_Otis_Text_1
# 42 "data/maps/SS_Tidal_Dungeon_1F_2R_Rooms/scripts.pory"
	msgbox SS_Tidal_Dungeon_1F_2R_Rooms_EventScript_Otis_Text_2, MSGBOX_AUTOCLOSE
	return


SS_Tidal_Dungeon_1F_2R_Rooms_EventScript_Woman::
# 46 "data/maps/SS_Tidal_Dungeon_1F_2R_Rooms/scripts.pory"
	msgbox SS_Tidal_Dungeon_1F_2R_Rooms_EventScript_Woman_Text_0, MSGBOX_NPC
	return


SS_Tidal_Dungeon_1F_2R_Rooms_EventScript_Boy::
# 50 "data/maps/SS_Tidal_Dungeon_1F_2R_Rooms/scripts.pory"
	msgbox SS_Tidal_Dungeon_1F_2R_Rooms_EventScript_Boy_Text_0, MSGBOX_NPC
	return


BattleRegiagua::
# 54 "data/maps/SS_Tidal_Dungeon_1F_2R_Rooms/scripts.pory"
	lock
# 55 "data/maps/SS_Tidal_Dungeon_1F_2R_Rooms/scripts.pory"
	playmoncry SPECIES_REGIAGUA, CRY_MODE_ENCOUNTER
# 56 "data/maps/SS_Tidal_Dungeon_1F_2R_Rooms/scripts.pory"
	msgbox BattleRegiagua_Text_0
# 57 "data/maps/SS_Tidal_Dungeon_1F_2R_Rooms/scripts.pory"
	waitmoncry
# 58 "data/maps/SS_Tidal_Dungeon_1F_2R_Rooms/scripts.pory"
	setwildbattle SPECIES_REGIAGUA, 75
# 59 "data/maps/SS_Tidal_Dungeon_1F_2R_Rooms/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 60 "data/maps/SS_Tidal_Dungeon_1F_2R_Rooms/scripts.pory"
	special StartRegiBattle
# 61 "data/maps/SS_Tidal_Dungeon_1F_2R_Rooms/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 62 "data/maps/SS_Tidal_Dungeon_1F_2R_Rooms/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 63 "data/maps/SS_Tidal_Dungeon_1F_2R_Rooms/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq BattleRegiagua_2
BattleRegiagua_1:
# 66 "data/maps/SS_Tidal_Dungeon_1F_2R_Rooms/scripts.pory"
	release
	end

BattleRegiagua_2:
# 64 "data/maps/SS_Tidal_Dungeon_1F_2R_Rooms/scripts.pory"
	setflag FLAG_CAUGHT_REGIAGUA
	goto BattleRegiagua_1


SS_Tidal_Dungeon_1F_2R_Rooms_Key_Text_0:
# 23 "data/maps/SS_Tidal_Dungeon_1F_2R_Rooms/scripts.pory"
	.string "{PLAYER} found a Room Key!$"

SS_Tidal_Dungeon_1F_2R_Rooms_FishBowl_Text_0:
# 34 "data/maps/SS_Tidal_Dungeon_1F_2R_Rooms/scripts.pory"
	.string "It's a fishbowl!\p"
	.string "There are some colorful fish swimming\n"
	.string "around inside.$"

SS_Tidal_Dungeon_1F_2R_Rooms_EventScript_Otis_Text_0:
# 41 "data/maps/SS_Tidal_Dungeon_1F_2R_Rooms/scripts.pory"
	.string "I don't remember you from before.\pShow your ticket, please!$"

SS_Tidal_Dungeon_1F_2R_Rooms_EventScript_Otis_Text_1:
# 41 "data/maps/SS_Tidal_Dungeon_1F_2R_Rooms/scripts.pory"
	.string "Drats!$"

SS_Tidal_Dungeon_1F_2R_Rooms_EventScript_Otis_Text_2:
# 42 "data/maps/SS_Tidal_Dungeon_1F_2R_Rooms/scripts.pory"
	.string "Please finish your business and return\nto your cabin.$"

SS_Tidal_Dungeon_1F_2R_Rooms_EventScript_Woman_Text_0:
# 46 "data/maps/SS_Tidal_Dungeon_1F_2R_Rooms/scripts.pory"
	.string "What have you traveled here for?\pI'm here to view the trees of the\ntropics.$"

SS_Tidal_Dungeon_1F_2R_Rooms_EventScript_Boy_Text_0:
# 50 "data/maps/SS_Tidal_Dungeon_1F_2R_Rooms/scripts.pory"
	.string "I'm here to find the treasure!\pJust leave it to me!$"

BattleRegiagua_Text_0:
# 56 "data/maps/SS_Tidal_Dungeon_1F_2R_Rooms/scripts.pory"
	.string "Zooshoon!$"
