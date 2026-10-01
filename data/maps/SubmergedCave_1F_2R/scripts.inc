SubmergedCave_1F_2R_MapScripts::
	.byte 0


SubmergedCave_1F_2R_EventScript_Vance::
# 4 "data/maps/SubmergedCave_1F_2R/scripts.pory"
	trainerbattle_single TRAINER_VANCE, SubmergedCave_1F_2R_EventScript_Vance_Text_0, SubmergedCave_1F_2R_EventScript_Vance_Text_1
# 5 "data/maps/SubmergedCave_1F_2R/scripts.pory"
	msgbox SubmergedCave_1F_2R_EventScript_Vance_Text_2, MSGBOX_AUTOCLOSE
	return


SubmergedCave_1F_2R_EventScript_Aveline::
# 9 "data/maps/SubmergedCave_1F_2R/scripts.pory"
	trainerbattle_single TRAINER_AVELINE, SubmergedCave_1F_2R_EventScript_Aveline_Text_0, SubmergedCave_1F_2R_EventScript_Aveline_Text_1
# 10 "data/maps/SubmergedCave_1F_2R/scripts.pory"
	msgbox SubmergedCave_1F_2R_EventScript_Aveline_Text_2, MSGBOX_AUTOCLOSE
	return


SubmergedCave_1F_2R_EventScript_AquaGrunt::
# 14 "data/maps/SubmergedCave_1F_2R/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_SUBMERGED_CAVE, SubmergedCave_1F_2R_EventScript_AquaGrunt_Text_0, SubmergedCave_1F_2R_EventScript_AquaGrunt_Text_1
# 15 "data/maps/SubmergedCave_1F_2R/scripts.pory"
	msgbox SubmergedCave_1F_2R_EventScript_AquaGrunt_Text_2, MSGBOX_AUTOCLOSE
	return


SubmergedCave_1F_2R_EventScript_Vance_Text_0:
# 4 "data/maps/SubmergedCave_1F_2R/scripts.pory"
	.string "My, these crystals are fascinating!$"

SubmergedCave_1F_2R_EventScript_Vance_Text_1:
# 4 "data/maps/SubmergedCave_1F_2R/scripts.pory"
	.string "Hold on, please!$"

SubmergedCave_1F_2R_EventScript_Vance_Text_2:
# 5 "data/maps/SubmergedCave_1F_2R/scripts.pory"
	.string "This deep purple…\pPerhaps this is the island's namesake.$"

SubmergedCave_1F_2R_EventScript_Aveline_Text_0:
# 9 "data/maps/SubmergedCave_1F_2R/scripts.pory"
	.string "First, a swim down here.\nNext, a battle!$"

SubmergedCave_1F_2R_EventScript_Aveline_Text_1:
# 9 "data/maps/SubmergedCave_1F_2R/scripts.pory"
	.string "Hah… I was winded…$"

SubmergedCave_1F_2R_EventScript_Aveline_Text_2:
# 10 "data/maps/SubmergedCave_1F_2R/scripts.pory"
	.string "Battles?\pNo, they actually aren't a part of\ntriathlons.$"

SubmergedCave_1F_2R_EventScript_AquaGrunt_Text_0:
# 14 "data/maps/SubmergedCave_1F_2R/scripts.pory"
	.string "Wha?! No, leave me alone!$"

SubmergedCave_1F_2R_EventScript_AquaGrunt_Text_1:
# 14 "data/maps/SubmergedCave_1F_2R/scripts.pory"
	.string "Dang!$"

SubmergedCave_1F_2R_EventScript_AquaGrunt_Text_2:
# 15 "data/maps/SubmergedCave_1F_2R/scripts.pory"
	.string "I just recovered after the last kid…$"
