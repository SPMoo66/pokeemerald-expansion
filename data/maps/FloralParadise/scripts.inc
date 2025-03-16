FloralParadise_MapScripts::
# 5 "data/maps/FloralParadise/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FloralParadise_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 21 "data/maps/FloralParadise/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, FloralParadise_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

FloralParadise_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 6 "data/maps/FloralParadise/scripts.pory"
	goto_if_set FLAG_CAUGHT_SHAYMIN, FloralParadise_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
FloralParadise_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 10 "data/maps/FloralParadise/scripts.pory"
	setflag FLAG_TEMP_3
# 11 "data/maps/FloralParadise/scripts.pory"
	getcaughtmon SPECIES_SHAYMIN
# 12 "data/maps/FloralParadise/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne FloralParadise_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
FloralParadise_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 15 "data/maps/FloralParadise/scripts.pory"
	checkitem ITEM_GRACIDEA
# 16 "data/maps/FloralParadise/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne FloralParadise_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
	return

FloralParadise_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 7 "data/maps/FloralParadise/scripts.pory"
	setflag FLAG_TEMP_2
# 8 "data/maps/FloralParadise/scripts.pory"
	removeobject 1
	goto FloralParadise_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

FloralParadise_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 13 "data/maps/FloralParadise/scripts.pory"
	clearflag FLAG_TEMP_3
	goto FloralParadise_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

FloralParadise_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 17 "data/maps/FloralParadise/scripts.pory"
	setobjectxyperm 2, 13, 5
# 18 "data/maps/FloralParadise/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_RIGHT
	return

FloralParadise_MapScripts_MAP_SCRIPT_ON_RESUME:
# 22 "data/maps/FloralParadise/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, FloralParadise_MapScripts_MAP_SCRIPT_ON_RESUME_2
FloralParadise_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 25 "data/maps/FloralParadise/scripts.pory"
	getcaughtmon SPECIES_SHAYMIN
# 26 "data/maps/FloralParadise/scripts.pory"
	copyvar VAR_TEMP_0, VAR_RESULT
# 27 "data/maps/FloralParadise/scripts.pory"
	checkitem ITEM_GRACIDEA
# 28 "data/maps/FloralParadise/scripts.pory"
	compare VAR_TEMP_0, 0
	goto_if_ne FloralParadise_MapScripts_MAP_SCRIPT_ON_RESUME_5
	return

FloralParadise_MapScripts_MAP_SCRIPT_ON_RESUME_2:
# 23 "data/maps/FloralParadise/scripts.pory"
	removeobject 1
	goto FloralParadise_MapScripts_MAP_SCRIPT_ON_RESUME_1

FloralParadise_MapScripts_MAP_SCRIPT_ON_RESUME_4:
# 29 "data/maps/FloralParadise/scripts.pory"
	addobject 2
	return

FloralParadise_MapScripts_MAP_SCRIPT_ON_RESUME_5:
# 28 "data/maps/FloralParadise/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq FloralParadise_MapScripts_MAP_SCRIPT_ON_RESUME_4
	return


BattleShaymin::
# 35 "data/maps/FloralParadise/scripts.pory"
	lock
# 36 "data/maps/FloralParadise/scripts.pory"
	faceplayer
# 37 "data/maps/FloralParadise/scripts.pory"
	setvar VAR_LAST_TALKED, 1
# 38 "data/maps/FloralParadise/scripts.pory"
	playmoncry SPECIES_SHAYMIN, CRY_MODE_ENCOUNTER
# 39 "data/maps/FloralParadise/scripts.pory"
	msgbox BattleShaymin_Text_0
# 40 "data/maps/FloralParadise/scripts.pory"
	waitmoncry
# 41 "data/maps/FloralParadise/scripts.pory"
	seteventmon SPECIES_SHAYMIN, 40
# 42 "data/maps/FloralParadise/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 43 "data/maps/FloralParadise/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 44 "data/maps/FloralParadise/scripts.pory"
	waitstate
# 45 "data/maps/FloralParadise/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 46 "data/maps/FloralParadise/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 47 "data/maps/FloralParadise/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq BattleShaymin_2
BattleShaymin_1:
# 50 "data/maps/FloralParadise/scripts.pory"
	release
	end

BattleShaymin_2:
# 48 "data/maps/FloralParadise/scripts.pory"
	setflag FLAG_CAUGHT_SHAYMIN
	goto BattleShaymin_1


FloralParadise_GracideaGirl::
# 55 "data/maps/FloralParadise/scripts.pory"
	lock
# 56 "data/maps/FloralParadise/scripts.pory"
	faceplayer
# 57 "data/maps/FloralParadise/scripts.pory"
	checkitem ITEM_GRACIDEA
# 58 "data/maps/FloralParadise/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq FloralParadise_GracideaGirl_2
# 66 "data/maps/FloralParadise/scripts.pory"
	goto_if_unset FLAG_TEMP_4, FloralParadise_GracideaGirl_3
# 78 "data/maps/FloralParadise/scripts.pory"
	msgbox FloralParadise_GracideaGirl_Text_4
FloralParadise_GracideaGirl_1:
# 80 "data/maps/FloralParadise/scripts.pory"
	release
	return

FloralParadise_GracideaGirl_2:
# 59 "data/maps/FloralParadise/scripts.pory"
	msgbox FloralParadise_GracideaGirl_Text_0
# 62 "data/maps/FloralParadise/scripts.pory"
	giveitem ITEM_GRACIDEA
# 63 "data/maps/FloralParadise/scripts.pory"
	msgbox FloralParadise_GracideaGirl_Text_1
# 64 "data/maps/FloralParadise/scripts.pory"
	setflag FLAG_TEMP_4
	goto FloralParadise_GracideaGirl_1

FloralParadise_GracideaGirl_3:
# 67 "data/maps/FloralParadise/scripts.pory"
	checkspecies SPECIES_SHAYMIN, NO_PARTY_SCREEN
# 68 "data/maps/FloralParadise/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 69 "data/maps/FloralParadise/scripts.pory"
	checkspecies SPECIES_SHAYMIN_SKY, NO_PARTY_SCREEN
# 70 "data/maps/FloralParadise/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_ne FloralParadise_GracideaGirl_7
# 70 "data/maps/FloralParadise/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne FloralParadise_GracideaGirl_7
# 74 "data/maps/FloralParadise/scripts.pory"
	msgbox FloralParadise_GracideaGirl_Text_3
	goto FloralParadise_GracideaGirl_1

FloralParadise_GracideaGirl_7:
# 71 "data/maps/FloralParadise/scripts.pory"
	msgbox FloralParadise_GracideaGirl_Text_2
	goto FloralParadise_GracideaGirl_1


BattleShaymin_Text_0:
# 39 "data/maps/FloralParadise/scripts.pory"
	.string "Kyuu uuhn!$"

FloralParadise_GracideaGirl_Text_0:
# 59 "data/maps/FloralParadise/scripts.pory"
	.string "Hi. Did you just catch Shaymin?\p"
	.string "I was hoping to come and give it\n"
	.string "some of its favorite flowers.\p"
	.string "I know, could you give these to\n"
	.string "Shaymin for me?$"

FloralParadise_GracideaGirl_Text_1:
# 63 "data/maps/FloralParadise/scripts.pory"
	.string "I'll come back here, so please\n"
	.string "bring Shaymin by some time!$"

FloralParadise_GracideaGirl_Text_2:
# 71 "data/maps/FloralParadise/scripts.pory"
	.string "Aww, it looks like Shaymin is doing well.\n"
	.string "I'm glad I got to see it again.\l"
	.string "Thank you for taking good care of it!$"

FloralParadise_GracideaGirl_Text_3:
# 74 "data/maps/FloralParadise/scripts.pory"
	.string "Please bring Shaymin by some time so\n"
	.string "I can see it again!$"

FloralParadise_GracideaGirl_Text_4:
# 78 "data/maps/FloralParadise/scripts.pory"
	.string "Please take good care of Shaymin!$"
