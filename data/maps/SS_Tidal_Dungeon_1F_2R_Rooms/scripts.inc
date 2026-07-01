SS_Tidal_Dungeon_1F_2R_Rooms_MapScripts::
# 2 "data/maps/SS_Tidal_Dungeon_1F_2R_Rooms/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SS_Tidal_Dungeon_1F_2R_Rooms_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

SS_Tidal_Dungeon_1F_2R_Rooms_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/SS_Tidal_Dungeon_1F_2R_Rooms/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 38
	goto_if_ge SS_Tidal_Dungeon_1F_2R_Rooms_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
SS_Tidal_Dungeon_1F_2R_Rooms_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 6 "data/maps/SS_Tidal_Dungeon_1F_2R_Rooms/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 37
	goto_if_ge SS_Tidal_Dungeon_1F_2R_Rooms_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
	return

SS_Tidal_Dungeon_1F_2R_Rooms_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 4 "data/maps/SS_Tidal_Dungeon_1F_2R_Rooms/scripts.pory"
	setflag FLAG_TEMP_1
	goto SS_Tidal_Dungeon_1F_2R_Rooms_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

SS_Tidal_Dungeon_1F_2R_Rooms_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 7 "data/maps/SS_Tidal_Dungeon_1F_2R_Rooms/scripts.pory"
	setflag FLAG_TEMP_2
	return


SS_Tidal_Dungeon_1F_2R_Rooms_Key::
# 13 "data/maps/SS_Tidal_Dungeon_1F_2R_Rooms/scripts.pory"
	removeobject VAR_LAST_TALKED
# 14 "data/maps/SS_Tidal_Dungeon_1F_2R_Rooms/scripts.pory"
	playfanfare MUS_DP_OBTAIN_KEY_ITEM
# 15 "data/maps/SS_Tidal_Dungeon_1F_2R_Rooms/scripts.pory"
	message SS_Tidal_Dungeon_1F_2R_Rooms_Key_Text_0
# 16 "data/maps/SS_Tidal_Dungeon_1F_2R_Rooms/scripts.pory"
	waitfanfare
# 17 "data/maps/SS_Tidal_Dungeon_1F_2R_Rooms/scripts.pory"
	closemessage
# 18 "data/maps/SS_Tidal_Dungeon_1F_2R_Rooms/scripts.pory"
	setvar VAR_EMERALBODY_RIVAL_STATE, 37
	return


SS_Tidal_Dungeon_1F_2R_Rooms_FishBowl::
# 22 "data/maps/SS_Tidal_Dungeon_1F_2R_Rooms/scripts.pory"
	msgbox SS_Tidal_Dungeon_1F_2R_Rooms_FishBowl_Text_0, MSGBOX_AUTOCLOSE
	return


SS_Tidal_Dungeon_1F_2R_Rooms_EventScript_Otis::
# 28 "data/maps/SS_Tidal_Dungeon_1F_2R_Rooms/scripts.pory"
	trainerbattle_single TRAINER_OTIS, SS_Tidal_Dungeon_1F_2R_Rooms_EventScript_Otis_Text_0, SS_Tidal_Dungeon_1F_2R_Rooms_EventScript_Otis_Text_1
# 29 "data/maps/SS_Tidal_Dungeon_1F_2R_Rooms/scripts.pory"
	msgbox SS_Tidal_Dungeon_1F_2R_Rooms_EventScript_Otis_Text_2, MSGBOX_AUTOCLOSE
	return


SS_Tidal_Dungeon_1F_2R_Rooms_EventScript_Woman::
# 33 "data/maps/SS_Tidal_Dungeon_1F_2R_Rooms/scripts.pory"
	msgbox SS_Tidal_Dungeon_1F_2R_Rooms_EventScript_Woman_Text_0, MSGBOX_NPC
	return


SS_Tidal_Dungeon_1F_2R_Rooms_EventScript_Boy::
# 37 "data/maps/SS_Tidal_Dungeon_1F_2R_Rooms/scripts.pory"
	msgbox SS_Tidal_Dungeon_1F_2R_Rooms_EventScript_Boy_Text_0, MSGBOX_NPC
	return


SS_Tidal_Dungeon_1F_2R_Rooms_Key_Text_0:
# 15 "data/maps/SS_Tidal_Dungeon_1F_2R_Rooms/scripts.pory"
	.string "{PLAYER} found a Room Key!$"

SS_Tidal_Dungeon_1F_2R_Rooms_FishBowl_Text_0:
# 22 "data/maps/SS_Tidal_Dungeon_1F_2R_Rooms/scripts.pory"
	.string "It's a fishbowl!\p"
	.string "There are some colorful fish swimming\n"
	.string "around inside.$"

SS_Tidal_Dungeon_1F_2R_Rooms_EventScript_Otis_Text_0:
# 28 "data/maps/SS_Tidal_Dungeon_1F_2R_Rooms/scripts.pory"
	.string "I don't remember you from before.\pShow your ticket, please!$"

SS_Tidal_Dungeon_1F_2R_Rooms_EventScript_Otis_Text_1:
# 28 "data/maps/SS_Tidal_Dungeon_1F_2R_Rooms/scripts.pory"
	.string "Drats!$"

SS_Tidal_Dungeon_1F_2R_Rooms_EventScript_Otis_Text_2:
# 29 "data/maps/SS_Tidal_Dungeon_1F_2R_Rooms/scripts.pory"
	.string "Please finish your business and return\nto your cabin.$"

SS_Tidal_Dungeon_1F_2R_Rooms_EventScript_Woman_Text_0:
# 33 "data/maps/SS_Tidal_Dungeon_1F_2R_Rooms/scripts.pory"
	.string "What have you traveled here for?\pI'm here to view the trees of the\ntropics.$"

SS_Tidal_Dungeon_1F_2R_Rooms_EventScript_Boy_Text_0:
# 37 "data/maps/SS_Tidal_Dungeon_1F_2R_Rooms/scripts.pory"
	.string "I'm here to find the treasure!\pJust leave it to me!$"
