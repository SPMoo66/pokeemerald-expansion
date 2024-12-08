FlurryPeak_MapScripts::
# 5 "data/maps/FlurryPeak/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FlurryPeak_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 21 "data/maps/FlurryPeak/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, FlurryPeak_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

FlurryPeak_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 6 "data/maps/FlurryPeak/scripts.pory"
	compare VAR_SKY_PILLAR_STATE, 2
	goto_if_lt FlurryPeak_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 11 "data/maps/FlurryPeak/scripts.pory"
	goto_if_set FLAG_CAUGHT_GLASTRIER, FlurryPeak_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
FlurryPeak_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 15 "data/maps/FlurryPeak/scripts.pory"
	goto_if_set FLAG_CAUGHT_SPECTRIER, FlurryPeak_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
	return

FlurryPeak_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 7 "data/maps/FlurryPeak/scripts.pory"
	setflag FLAG_TEMP_2
# 8 "data/maps/FlurryPeak/scripts.pory"
	setflag FLAG_TEMP_3
	return

FlurryPeak_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 12 "data/maps/FlurryPeak/scripts.pory"
	setflag FLAG_TEMP_2
# 13 "data/maps/FlurryPeak/scripts.pory"
	removeobject 9
	goto FlurryPeak_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

FlurryPeak_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 16 "data/maps/FlurryPeak/scripts.pory"
	setflag FLAG_TEMP_3
# 17 "data/maps/FlurryPeak/scripts.pory"
	removeobject 10
	return

FlurryPeak_MapScripts_MAP_SCRIPT_ON_RESUME:
# 22 "data/maps/FlurryPeak/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, FlurryPeak_MapScripts_MAP_SCRIPT_ON_RESUME_1
	return

FlurryPeak_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 23 "data/maps/FlurryPeak/scripts.pory"
	removeobject VAR_LAST_TALKED
	return


FlurryPeak_Boy::
# 29 "data/maps/FlurryPeak/scripts.pory"
	lock
# 30 "data/maps/FlurryPeak/scripts.pory"
	faceplayer
# 31 "data/maps/FlurryPeak/scripts.pory"
	msgbox FlurryPeak_Boy_Text_0
# 32 "data/maps/FlurryPeak/scripts.pory"
	release
	return


FlurryPeak_Sign::
# 36 "data/maps/FlurryPeak/scripts.pory"
	msgbox FlurryPeak_Sign_Text_0, MSGBOX_SIGN
	return


FlurryPeak_EventScript_Candy::
# 40 "data/maps/FlurryPeak/scripts.pory"
	trainerbattle_single TRAINER_CANDY, FlurryPeak_EventScript_Candy_Text_0, FlurryPeak_EventScript_Candy_Text_1
# 41 "data/maps/FlurryPeak/scripts.pory"
	msgbox FlurryPeak_EventScript_Candy_Text_2, MSGBOX_AUTOCLOSE
	return


FlurryPeak_EventScript_Josef::
# 45 "data/maps/FlurryPeak/scripts.pory"
	trainerbattle_single TRAINER_JOSEF, FlurryPeak_EventScript_Josef_Text_0, FlurryPeak_EventScript_Josef_Text_1
# 46 "data/maps/FlurryPeak/scripts.pory"
	msgbox FlurryPeak_EventScript_Josef_Text_2, MSGBOX_AUTOCLOSE
	return


FlurryPeak_EventScript_Gerardo::
# 50 "data/maps/FlurryPeak/scripts.pory"
	trainerbattle_single TRAINER_GERARDO, FlurryPeak_EventScript_Gerardo_Text_0, FlurryPeak_EventScript_Gerardo_Text_1
# 51 "data/maps/FlurryPeak/scripts.pory"
	msgbox FlurryPeak_EventScript_Gerardo_Text_2, MSGBOX_AUTOCLOSE
	return


FlurryPeak_EventScript_Aurelia::
# 55 "data/maps/FlurryPeak/scripts.pory"
	trainerbattle_single TRAINER_AURELIA, FlurryPeak_EventScript_Aurelia_Text_0, FlurryPeak_EventScript_Aurelia_Text_1
# 56 "data/maps/FlurryPeak/scripts.pory"
	msgbox FlurryPeak_EventScript_Aurelia_Text_2, MSGBOX_AUTOCLOSE
	return


FlurryPeak_Man::
# 60 "data/maps/FlurryPeak/scripts.pory"
	lock
# 61 "data/maps/FlurryPeak/scripts.pory"
	faceplayer
# 62 "data/maps/FlurryPeak/scripts.pory"
	msgbox FlurryPeak_Man_Text_0
# 63 "data/maps/FlurryPeak/scripts.pory"
	release
	return


BattleGlastrier::
# 67 "data/maps/FlurryPeak/scripts.pory"
	lock
# 68 "data/maps/FlurryPeak/scripts.pory"
	faceplayer
# 69 "data/maps/FlurryPeak/scripts.pory"
	setvar VAR_LAST_TALKED, 9
# 70 "data/maps/FlurryPeak/scripts.pory"
	playmoncry SPECIES_GLASTRIER, CRY_MODE_ENCOUNTER
# 71 "data/maps/FlurryPeak/scripts.pory"
	msgbox BattleGlastrier_Text_0
# 72 "data/maps/FlurryPeak/scripts.pory"
	waitmoncry
# 73 "data/maps/FlurryPeak/scripts.pory"
	seteventmon SPECIES_GLASTRIER, 40
# 74 "data/maps/FlurryPeak/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 75 "data/maps/FlurryPeak/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 76 "data/maps/FlurryPeak/scripts.pory"
	waitstate
# 77 "data/maps/FlurryPeak/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 78 "data/maps/FlurryPeak/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 79 "data/maps/FlurryPeak/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq BattleGlastrier_2
BattleGlastrier_1:
# 82 "data/maps/FlurryPeak/scripts.pory"
	release
	end

BattleGlastrier_2:
# 80 "data/maps/FlurryPeak/scripts.pory"
	setflag FLAG_CAUGHT_GLASTRIER
	goto BattleGlastrier_1


BattleSpectrier::
# 87 "data/maps/FlurryPeak/scripts.pory"
	lock
# 88 "data/maps/FlurryPeak/scripts.pory"
	faceplayer
# 89 "data/maps/FlurryPeak/scripts.pory"
	setvar VAR_LAST_TALKED, 10
# 90 "data/maps/FlurryPeak/scripts.pory"
	playmoncry SPECIES_SPECTRIER, CRY_MODE_ENCOUNTER
# 91 "data/maps/FlurryPeak/scripts.pory"
	msgbox BattleSpectrier_Text_0
# 92 "data/maps/FlurryPeak/scripts.pory"
	waitmoncry
# 93 "data/maps/FlurryPeak/scripts.pory"
	seteventmon SPECIES_SPECTRIER, 40
# 94 "data/maps/FlurryPeak/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 95 "data/maps/FlurryPeak/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 96 "data/maps/FlurryPeak/scripts.pory"
	waitstate
# 97 "data/maps/FlurryPeak/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 98 "data/maps/FlurryPeak/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 99 "data/maps/FlurryPeak/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq BattleSpectrier_2
BattleSpectrier_1:
# 102 "data/maps/FlurryPeak/scripts.pory"
	release
	end

BattleSpectrier_2:
# 100 "data/maps/FlurryPeak/scripts.pory"
	setflag FLAG_CAUGHT_SPECTRIER
	goto BattleSpectrier_1


FlurryPeak_Boy_Text_0:
# 31 "data/maps/FlurryPeak/scripts.pory"
	.string "Playing in the snow is so much fun!\p"
	.string "But I wish I had warm clothes like the\n"
	.string "people down the trail.$"

FlurryPeak_Sign_Text_0:
# 36 "data/maps/FlurryPeak/scripts.pory"
	.string "{RIGHT_ARROW} Flurry Peak\n"
	.string "{LEFT_ARROW} Route 104$"

FlurryPeak_EventScript_Candy_Text_0:
# 40 "data/maps/FlurryPeak/scripts.pory"
	.string "Are you enjoying the snow?$"

FlurryPeak_EventScript_Candy_Text_1:
# 40 "data/maps/FlurryPeak/scripts.pory"
	.string "No! I slipped!$"

FlurryPeak_EventScript_Candy_Text_2:
# 41 "data/maps/FlurryPeak/scripts.pory"
	.string "Take your time trekking through\nthe snow.$"

FlurryPeak_EventScript_Josef_Text_0:
# 45 "data/maps/FlurryPeak/scripts.pory"
	.string "Are you sure you're dressed for\nthis weather?$"

FlurryPeak_EventScript_Josef_Text_1:
# 45 "data/maps/FlurryPeak/scripts.pory"
	.string "Ach! That wind!$"

FlurryPeak_EventScript_Josef_Text_2:
# 46 "data/maps/FlurryPeak/scripts.pory"
	.string "Even with my gloves on, I can\nbarely feel my hands.$"

FlurryPeak_EventScript_Gerardo_Text_0:
# 50 "data/maps/FlurryPeak/scripts.pory"
	.string "I wonder where this mountain leads.$"

FlurryPeak_EventScript_Gerardo_Text_1:
# 50 "data/maps/FlurryPeak/scripts.pory"
	.string "It's snow cold out here!$"

FlurryPeak_EventScript_Gerardo_Text_2:
# 51 "data/maps/FlurryPeak/scripts.pory"
	.string "Don't fall on the ice down there.$"

FlurryPeak_EventScript_Aurelia_Text_0:
# 55 "data/maps/FlurryPeak/scripts.pory"
	.string "I hope you weren't planning on\ngoing in the cave.$"

FlurryPeak_EventScript_Aurelia_Text_1:
# 55 "data/maps/FlurryPeak/scripts.pory"
	.string "Aw no.$"

FlurryPeak_EventScript_Aurelia_Text_2:
# 56 "data/maps/FlurryPeak/scripts.pory"
	.string "Even after you beat me, there's\nstill a rock in the way up there.$"

FlurryPeak_Man_Text_0:
# 62 "data/maps/FlurryPeak/scripts.pory"
	.string "They say that at some nights you can\n"
	.string "hear the chilling neighs of a horse long\l"
	.string "since departed from this world.$"

BattleGlastrier_Text_0:
# 71 "data/maps/FlurryPeak/scripts.pory"
	.string "Raaaaoo!$"

BattleSpectrier_Text_0:
# 91 "data/maps/FlurryPeak/scripts.pory"
	.string "Raaooo!$"
