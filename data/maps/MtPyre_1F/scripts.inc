# 1 "data/maps/MtPyre_1F/scripts.pory"

# 2 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_EventScript_CleanseTagWoman::
# 3 "data/maps/MtPyre_1F/scripts.pory"
	lock
# 4 "data/maps/MtPyre_1F/scripts.pory"
	faceplayer
# 5 "data/maps/MtPyre_1F/scripts.pory"
	goto_if_set FLAG_RECEIVED_CLEANSE_TAG, MtPyre_1F_EventScript_ReceivedCleanseTag
# 6 "data/maps/MtPyre_1F/scripts.pory"
	msgbox MtPyre_1F_Text_TakeThisForYourOwnGood, MSGBOX_DEFAULT
# 7 "data/maps/MtPyre_1F/scripts.pory"
	giveitem ITEM_CLEANSE_TAG
# 8 "data/maps/MtPyre_1F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 9 "data/maps/MtPyre_1F/scripts.pory"
	setflag FLAG_RECEIVED_CLEANSE_TAG
# 10 "data/maps/MtPyre_1F/scripts.pory"
	release
# 11 "data/maps/MtPyre_1F/scripts.pory"
	end
# 12 "data/maps/MtPyre_1F/scripts.pory"

# 13 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_EventScript_ReceivedCleanseTag::
# 14 "data/maps/MtPyre_1F/scripts.pory"
	msgbox MtPyre_1F_Text_ExplainCleanseTag, MSGBOX_DEFAULT
# 15 "data/maps/MtPyre_1F/scripts.pory"
	release
# 16 "data/maps/MtPyre_1F/scripts.pory"
	end
# 17 "data/maps/MtPyre_1F/scripts.pory"

# 18 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_EventScript_PokefanF::
# 19 "data/maps/MtPyre_1F/scripts.pory"
	msgbox MtPyre_1F_Text_ComeToPayRespects, MSGBOX_NPC
# 20 "data/maps/MtPyre_1F/scripts.pory"
	end
# 21 "data/maps/MtPyre_1F/scripts.pory"

# 22 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_EventScript_Man::
# 23 "data/maps/MtPyre_1F/scripts.pory"
	msgbox MtPyre_1F_Text_RestingPlaceOfZigzagoon, MSGBOX_NPC
# 24 "data/maps/MtPyre_1F/scripts.pory"
	end
# 25 "data/maps/MtPyre_1F/scripts.pory"

# 26 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_Text_TakeThisForYourOwnGood:
# 27 "data/maps/MtPyre_1F/scripts.pory"
	.string "All sorts of beings wander the slopes\n"
# 28 "data/maps/MtPyre_1F/scripts.pory"
	.string "of Mt. Pyre…\p"
# 29 "data/maps/MtPyre_1F/scripts.pory"
	.string "There is no telling what may happen.\n"
# 30 "data/maps/MtPyre_1F/scripts.pory"
	.string "Take this. It's for your own good.$"
# 31 "data/maps/MtPyre_1F/scripts.pory"

# 32 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_Text_ExplainCleanseTag:
# 33 "data/maps/MtPyre_1F/scripts.pory"
	.string "Have a Pokémon hold that\n"
# 34 "data/maps/MtPyre_1F/scripts.pory"
	.string "Cleanse Tag.\p"
# 35 "data/maps/MtPyre_1F/scripts.pory"
	.string "It will help ward off wild Pokémon.$"
# 36 "data/maps/MtPyre_1F/scripts.pory"

# 37 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_Text_ComeToPayRespects:
# 38 "data/maps/MtPyre_1F/scripts.pory"
	.string "Did you come to pay your respect\n"
# 39 "data/maps/MtPyre_1F/scripts.pory"
	.string "to the spirits of departed Pokémon?\p"
# 40 "data/maps/MtPyre_1F/scripts.pory"
	.string "You must care for your Pokémon a lot.$"
# 41 "data/maps/MtPyre_1F/scripts.pory"

# 42 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_Text_RestingPlaceOfZigzagoon:
# 43 "data/maps/MtPyre_1F/scripts.pory"
	.string "This is the final resting place of my\n"
# 44 "data/maps/MtPyre_1F/scripts.pory"
	.string "Zigzagoon. I cherished it…$"

MtPyre_1F_MapScripts::
# 50 "data/maps/MtPyre_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MtPyre_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 56 "data/maps/MtPyre_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, MtPyre_1F_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

MtPyre_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 51 "data/maps/MtPyre_1F/scripts.pory"
	goto_if_set FLAG_CAUGHT_GENESECT, MtPyre_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 51 "data/maps/MtPyre_1F/scripts.pory"
	goto_if_unset FLAG_BADGE08_GET, MtPyre_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

MtPyre_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 52 "data/maps/MtPyre_1F/scripts.pory"
	setflag FLAG_TEMP_2
# 53 "data/maps/MtPyre_1F/scripts.pory"
	removeobject 4
	return

MtPyre_1F_MapScripts_MAP_SCRIPT_ON_RESUME:
# 57 "data/maps/MtPyre_1F/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, MtPyre_1F_MapScripts_MAP_SCRIPT_ON_RESUME_1
	return

MtPyre_1F_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 58 "data/maps/MtPyre_1F/scripts.pory"
	removeobject VAR_LAST_TALKED
	return


BattleMarshadow::
# 64 "data/maps/MtPyre_1F/scripts.pory"
	lock
# 65 "data/maps/MtPyre_1F/scripts.pory"
	faceplayer
# 66 "data/maps/MtPyre_1F/scripts.pory"
	setvar VAR_LAST_TALKED, 4
# 67 "data/maps/MtPyre_1F/scripts.pory"
	playmoncry SPECIES_MARSHADOW, CRY_MODE_ENCOUNTER
# 68 "data/maps/MtPyre_1F/scripts.pory"
	msgbox BattleMarshadow_Text_0
# 69 "data/maps/MtPyre_1F/scripts.pory"
	waitmoncry
# 70 "data/maps/MtPyre_1F/scripts.pory"
	seteventmon SPECIES_MARSHADOW, 50
# 71 "data/maps/MtPyre_1F/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 72 "data/maps/MtPyre_1F/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 73 "data/maps/MtPyre_1F/scripts.pory"
	waitstate
# 74 "data/maps/MtPyre_1F/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 75 "data/maps/MtPyre_1F/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 76 "data/maps/MtPyre_1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq BattleMarshadow_2
BattleMarshadow_1:
# 79 "data/maps/MtPyre_1F/scripts.pory"
	release
	end

BattleMarshadow_2:
# 77 "data/maps/MtPyre_1F/scripts.pory"
	setflag FLAG_CAUGHT_MARSHADOW
	goto BattleMarshadow_1


BattleMarshadow_Text_0:
# 68 "data/maps/MtPyre_1F/scripts.pory"
	.string "Miii!$"
