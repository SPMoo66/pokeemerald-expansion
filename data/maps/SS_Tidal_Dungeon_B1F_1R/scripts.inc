SS_Tidal_Dungeon_B1F_1R_MapScripts::
	.byte 0


SS_Tidal_Dungeon_B1F_1R_EventScript_Finn::
# 4 "data/maps/SS_Tidal_Dungeon_B1F_1R/scripts.pory"
	trainerbattle_single TRAINER_FINN, SS_Tidal_Dungeon_B1F_1R_EventScript_Finn_Text_0, SS_Tidal_Dungeon_B1F_1R_EventScript_Finn_Text_1
# 5 "data/maps/SS_Tidal_Dungeon_B1F_1R/scripts.pory"
	msgbox SS_Tidal_Dungeon_B1F_1R_EventScript_Finn_Text_2, MSGBOX_AUTOCLOSE
	return


SS_Tidal_Dungeon_B1F_1R_EventScript_Brian::
# 9 "data/maps/SS_Tidal_Dungeon_B1F_1R/scripts.pory"
	trainerbattle_single TRAINER_BRIAN, SS_Tidal_Dungeon_B1F_1R_EventScript_Brian_Text_0, SS_Tidal_Dungeon_B1F_1R_EventScript_Brian_Text_1
# 10 "data/maps/SS_Tidal_Dungeon_B1F_1R/scripts.pory"
	msgbox SS_Tidal_Dungeon_B1F_1R_EventScript_Brian_Text_2, MSGBOX_AUTOCLOSE
	return


SS_Tidal_Dungeon_B1F_1R_EventScript_Finn_Text_0:
# 4 "data/maps/SS_Tidal_Dungeon_B1F_1R/scripts.pory"
	.string "Give me a break from sorting this cargo!$"

SS_Tidal_Dungeon_B1F_1R_EventScript_Finn_Text_1:
# 4 "data/maps/SS_Tidal_Dungeon_B1F_1R/scripts.pory"
	.string "Darn, back to work already?$"

SS_Tidal_Dungeon_B1F_1R_EventScript_Finn_Text_2:
# 5 "data/maps/SS_Tidal_Dungeon_B1F_1R/scripts.pory"
	.string "You'd never believe the crazy things\nthese passengers have brought along.\pWhere in the world do they think we're\ngoing?$"

SS_Tidal_Dungeon_B1F_1R_EventScript_Brian_Text_0:
# 9 "data/maps/SS_Tidal_Dungeon_B1F_1R/scripts.pory"
	.string "Excuse me, have you seen a lost key?\pNo? Well, a battle then!$"

SS_Tidal_Dungeon_B1F_1R_EventScript_Brian_Text_1:
# 9 "data/maps/SS_Tidal_Dungeon_B1F_1R/scripts.pory"
	.string "Hmph.$"

SS_Tidal_Dungeon_B1F_1R_EventScript_Brian_Text_2:
# 10 "data/maps/SS_Tidal_Dungeon_B1F_1R/scripts.pory"
	.string "A passenger reported a lost room key.\nIf you find one, please return it!$"
