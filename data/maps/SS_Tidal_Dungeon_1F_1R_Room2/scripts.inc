SS_Tidal_Dungeon_1F_1R_Room2_MapScripts::
	.byte 0


SS_Tidal_Dungeon_1F_1R_Room2_EventScript_Gavin::
# 4 "data/maps/SS_Tidal_Dungeon_1F_1R_Room2/scripts.pory"
	trainerbattle_single TRAINER_GAVIN, SS_Tidal_Dungeon_1F_1R_Room2_EventScript_Gavin_Text_0, SS_Tidal_Dungeon_1F_1R_Room2_EventScript_Gavin_Text_1
# 5 "data/maps/SS_Tidal_Dungeon_1F_1R_Room2/scripts.pory"
	msgbox SS_Tidal_Dungeon_1F_1R_Room2_EventScript_Gavin_Text_2, MSGBOX_AUTOCLOSE
	return


SS_Tidal_Dungeon_1F_1R_Room2_EventScript_Girl::
# 9 "data/maps/SS_Tidal_Dungeon_1F_1R_Room2/scripts.pory"
	msgbox SS_Tidal_Dungeon_1F_1R_Room2_EventScript_Girl_Text_0, MSGBOX_NPC
	return


SS_Tidal_Dungeon_1F_1R_Room2_EventScript_Gavin_Text_0:
# 4 "data/maps/SS_Tidal_Dungeon_1F_1R_Room2/scripts.pory"
	.string "Waiter, a battle, before we land!$"

SS_Tidal_Dungeon_1F_1R_Room2_EventScript_Gavin_Text_1:
# 4 "data/maps/SS_Tidal_Dungeon_1F_1R_Room2/scripts.pory"
	.string "You're no waitstaff!$"

SS_Tidal_Dungeon_1F_1R_Room2_EventScript_Gavin_Text_2:
# 5 "data/maps/SS_Tidal_Dungeon_1F_1R_Room2/scripts.pory"
	.string "Surely you could at least tell me if\nwe've landed.$"

SS_Tidal_Dungeon_1F_1R_Room2_EventScript_Girl_Text_0:
# 9 "data/maps/SS_Tidal_Dungeon_1F_1R_Room2/scripts.pory"
	.string "I can't wait to go out and see the\npretty water!$"
