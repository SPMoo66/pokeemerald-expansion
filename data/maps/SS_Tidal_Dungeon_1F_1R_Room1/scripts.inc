SS_Tidal_Dungeon_1F_1R_Room1_MapScripts::
# 2 "data/maps/SS_Tidal_Dungeon_1F_1R_Room1/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SS_Tidal_Dungeon_1F_1R_Room1_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

SS_Tidal_Dungeon_1F_1R_Room1_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/SS_Tidal_Dungeon_1F_1R_Room1/scripts.pory"
	setflag FLAG_TEMP_1
# 4 "data/maps/SS_Tidal_Dungeon_1F_1R_Room1/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 39
	goto_if_ge SS_Tidal_Dungeon_1F_1R_Room1_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

SS_Tidal_Dungeon_1F_1R_Room1_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 5 "data/maps/SS_Tidal_Dungeon_1F_1R_Room1/scripts.pory"
	setflag FLAG_TEMP_2
	return


SS_Tidal_Dungeon_1F_1R_Room1_Steven::
# 11 "data/maps/SS_Tidal_Dungeon_1F_1R_Room1/scripts.pory"
	faceplayer
# 12 "data/maps/SS_Tidal_Dungeon_1F_1R_Room1/scripts.pory"
	speakername CommonText_Steven
# 13 "data/maps/SS_Tidal_Dungeon_1F_1R_Room1/scripts.pory"
	msgbox SS_Tidal_Dungeon_1F_1R_Room1_Steven_Text_0, MSGBOX_NPC
# 21 "data/maps/SS_Tidal_Dungeon_1F_1R_Room1/scripts.pory"
	speakername CommonText_Steven
# 22 "data/maps/SS_Tidal_Dungeon_1F_1R_Room1/scripts.pory"
	goto_if_set FLAG_DEFEATED_METEOR_FALLS_STEVEN, SS_Tidal_Dungeon_1F_1R_Room1_Steven_1
# 27 "data/maps/SS_Tidal_Dungeon_1F_1R_Room1/scripts.pory"
	msgbox SS_Tidal_Dungeon_1F_1R_Room1_Steven_Text_2, MSGBOX_NPC
	return

SS_Tidal_Dungeon_1F_1R_Room1_Steven_1:
# 23 "data/maps/SS_Tidal_Dungeon_1F_1R_Room1/scripts.pory"
	msgbox SS_Tidal_Dungeon_1F_1R_Room1_Steven_Text_1, MSGBOX_NPC
	return


SS_Tidal_Dungeon_1F_1R_Room1_Steven_Text_0:
# 13 "data/maps/SS_Tidal_Dungeon_1F_1R_Room1/scripts.pory"
	.string "Oh, hello, {PLAYER}.\p"
	.string "Would you happen to be here on\n"
	.string "vacation, or…?\p"
	.string "Fufufu… The treasure hunt, of course.\n"
	.string "It was silly of me to imagine anything\l"
	.string "else.\p"
	.string "Well, I'm here on vacation, but if you\n"
	.string "need anything, you can come to me.$"

SS_Tidal_Dungeon_1F_1R_Room1_Steven_Text_1:
# 23 "data/maps/SS_Tidal_Dungeon_1F_1R_Room1/scripts.pory"
	.string "And once you're done, perhaps we could\n"
	.string "partake in a rematch.$"

SS_Tidal_Dungeon_1F_1R_Room1_Steven_Text_2:
# 27 "data/maps/SS_Tidal_Dungeon_1F_1R_Room1/scripts.pory"
	.string "And once you're done, perhaps we could\n"
	.string "have a battle.$"
