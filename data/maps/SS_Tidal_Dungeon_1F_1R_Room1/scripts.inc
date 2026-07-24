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
	compare VAR_EMERALBODY_RIVAL_STATE, 51
	goto_if_lt SS_Tidal_Dungeon_1F_1R_Room1_Steven_1
# 33 "data/maps/SS_Tidal_Dungeon_1F_1R_Room1/scripts.pory"
	checktrainerflag TRAINER_STEVEN_EXP_1
	goto_if 0, SS_Tidal_Dungeon_1F_1R_Room1_Steven_8
SS_Tidal_Dungeon_1F_1R_Room1_Steven_7:
# 43 "data/maps/SS_Tidal_Dungeon_1F_1R_Room1/scripts.pory"
	speakername CommonText_Steven
# 44 "data/maps/SS_Tidal_Dungeon_1F_1R_Room1/scripts.pory"
	msgbox SS_Tidal_Dungeon_1F_1R_Room1_Steven_Text_5, MSGBOX_AUTOCLOSE
	return

SS_Tidal_Dungeon_1F_1R_Room1_Steven_1:
# 14 "data/maps/SS_Tidal_Dungeon_1F_1R_Room1/scripts.pory"
	msgbox SS_Tidal_Dungeon_1F_1R_Room1_Steven_Text_0, MSGBOX_NPC
# 22 "data/maps/SS_Tidal_Dungeon_1F_1R_Room1/scripts.pory"
	speakername CommonText_Steven
# 23 "data/maps/SS_Tidal_Dungeon_1F_1R_Room1/scripts.pory"
	goto_if_set FLAG_DEFEATED_METEOR_FALLS_STEVEN, SS_Tidal_Dungeon_1F_1R_Room1_Steven_4
# 28 "data/maps/SS_Tidal_Dungeon_1F_1R_Room1/scripts.pory"
	msgbox SS_Tidal_Dungeon_1F_1R_Room1_Steven_Text_2, MSGBOX_NPC
	return

SS_Tidal_Dungeon_1F_1R_Room1_Steven_4:
# 24 "data/maps/SS_Tidal_Dungeon_1F_1R_Room1/scripts.pory"
	msgbox SS_Tidal_Dungeon_1F_1R_Room1_Steven_Text_1, MSGBOX_NPC
	return

SS_Tidal_Dungeon_1F_1R_Room1_Steven_8:
# 34 "data/maps/SS_Tidal_Dungeon_1F_1R_Room1/scripts.pory"
	msgbox SS_Tidal_Dungeon_1F_1R_Room1_Steven_Text_3, MSGBOX_NPC
# 39 "data/maps/SS_Tidal_Dungeon_1F_1R_Room1/scripts.pory"
	setflag FLAG_SUPERBOSS_TRAINER
# 40 "data/maps/SS_Tidal_Dungeon_1F_1R_Room1/scripts.pory"
	trainerbattle_no_intro TRAINER_STEVEN_EXP_1, SS_Tidal_Dungeon_1F_1R_Room1_Steven_Text_4
# 41 "data/maps/SS_Tidal_Dungeon_1F_1R_Room1/scripts.pory"
	clearflag FLAG_SUPERBOSS_TRAINER
	goto SS_Tidal_Dungeon_1F_1R_Room1_Steven_7


SS_Tidal_Dungeon_1F_1R_Room1_Steven_Text_0:
# 14 "data/maps/SS_Tidal_Dungeon_1F_1R_Room1/scripts.pory"
	.string "Oh, hello, {PLAYER}.\p"
	.string "Would you happen to be here on\n"
	.string "vacation, or…?\p"
	.string "Fufufu… The treasure hunt, of course.\n"
	.string "It was silly of me to imagine anything\l"
	.string "else.\p"
	.string "Well, I'm here on vacation, but if you\n"
	.string "need anything, you can come to me.$"

SS_Tidal_Dungeon_1F_1R_Room1_Steven_Text_1:
# 24 "data/maps/SS_Tidal_Dungeon_1F_1R_Room1/scripts.pory"
	.string "And once you're done, perhaps we could\n"
	.string "partake in a rematch.$"

SS_Tidal_Dungeon_1F_1R_Room1_Steven_Text_2:
# 28 "data/maps/SS_Tidal_Dungeon_1F_1R_Room1/scripts.pory"
	.string "And once you're done, perhaps we could\n"
	.string "have a battle.$"

SS_Tidal_Dungeon_1F_1R_Room1_Steven_Text_3:
# 34 "data/maps/SS_Tidal_Dungeon_1F_1R_Room1/scripts.pory"
	.string "Oh? I knew you'd take me up on my offer\n"
	.string "for a battle, {PLAYER}.\p"
	.string "Well, let's get right to it.\p"
	.string "Show me what you've learned after a\n"
	.string "new journey!$"

SS_Tidal_Dungeon_1F_1R_Room1_Steven_Text_4:
# 40 "data/maps/SS_Tidal_Dungeon_1F_1R_Room1/scripts.pory"
	.string "Yes! What wonderful strength!$"

SS_Tidal_Dungeon_1F_1R_Room1_Steven_Text_5:
# 44 "data/maps/SS_Tidal_Dungeon_1F_1R_Room1/scripts.pory"
	.string "Outstanding!\p"
	.string "It's just like you, {PLAYER}, to keep\n"
	.string "growing.\p"
	.string "Every time we meet I look forward to\n"
	.string "seeing what you've learned since the\l"
	.string "last.\p"
	.string "I hope you continue journeying.\n"
	.string "Learn more and return to me!$"
