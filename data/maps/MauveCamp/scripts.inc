MauveCamp_MapScripts::
# 5 "data/maps/MauveCamp/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MauveCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 32 "data/maps/MauveCamp/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MauveCamp_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

MauveCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 6 "data/maps/MauveCamp/scripts.pory"
	setrespawn HEAL_LOCATION_MAUVE_CAMP
# 7 "data/maps/MauveCamp/scripts.pory"
	setflag FLAG_LANDMARK_MAUVE_CAMP
# 8 "data/maps/MauveCamp/scripts.pory"
	call GetPlayerGfxNormal
# 9 "data/maps/MauveCamp/scripts.pory"
	goto_if_set FLAG_MAUVE_CAMP_HEADBUTT_SCENE, MauveCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
MauveCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 14 "data/maps/MauveCamp/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 24
	goto_if_lt MauveCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
MauveCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 20 "data/maps/MauveCamp/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 23
	goto_if_eq MauveCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
MauveCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 23 "data/maps/MauveCamp/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 24
	goto_if_eq MauveCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION_11
MauveCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 27 "data/maps/MauveCamp/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 31
	goto_if_eq MauveCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION_13
# 27 "data/maps/MauveCamp/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 30
	goto_if_eq MauveCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION_13
	return

MauveCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 10 "data/maps/MauveCamp/scripts.pory"
	setflag FLAG_TEMP_2
# 11 "data/maps/MauveCamp/scripts.pory"
	setvar VAR_TEMP_0, 1
# 12 "data/maps/MauveCamp/scripts.pory"
	clearflag FLAG_MAUVE_CAMP_HEADBUTT_SCENE
	goto MauveCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

MauveCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 15 "data/maps/MauveCamp/scripts.pory"
	setflag FLAG_TEMP_6
# 16 "data/maps/MauveCamp/scripts.pory"
	setflag FLAG_TEMP_2
# 17 "data/maps/MauveCamp/scripts.pory"
	setflag FLAG_TEMP_3
# 18 "data/maps/MauveCamp/scripts.pory"
	setflag FLAG_TEMP_4
	goto MauveCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

MauveCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 21 "data/maps/MauveCamp/scripts.pory"
	savebgm MUS_DP_SUNYSHORE_DAY
	goto MauveCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION_7

MauveCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION_11:
# 25 "data/maps/MauveCamp/scripts.pory"
	setflag FLAG_TEMP_4
	goto MauveCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION_10

MauveCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION_13:
# 28 "data/maps/MauveCamp/scripts.pory"
	setflag FLAG_TEMP_6
	return

MauveCamp_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 33 "data/maps/MauveCamp/scripts.pory"
	map_script_2 VAR_TEMP_0, 1, MauveCamp_EventScript_HeadbuttTree
# 34 "data/maps/MauveCamp/scripts.pory"
	map_script_2 VAR_EMERALBODY_RIVAL_STATE, 22, Expansion1_Rival_Scene02_Setup
# 35 "data/maps/MauveCamp/scripts.pory"
	map_script_2 VAR_EMERALBODY_RIVAL_STATE, 30, Expansion1_Rival_Scene05_Setup
	.2byte 0


MauveCamp_EventScript_HeadbuttTree::
# 40 "data/maps/MauveCamp/scripts.pory"
	setvar VAR_TEMP_0, 0
# 41 "data/maps/MauveCamp/scripts.pory"
	delay 20
# 42 "data/maps/MauveCamp/scripts.pory"
	setobjectxyperm 3, 23, 10
# 43 "data/maps/MauveCamp/scripts.pory"
	clearflag FLAG_TEMP_2
# 44 "data/maps/MauveCamp/scripts.pory"
	addobject 3
# 45 "data/maps/MauveCamp/scripts.pory"
	playse SE_EXIT
# 46 "data/maps/MauveCamp/scripts.pory"
	waitse
# 47 "data/maps/MauveCamp/scripts.pory"
	applymovement 3, Common_Movement_WalkDown
# 48 "data/maps/MauveCamp/scripts.pory"
	waitmovement 0
# 49 "data/maps/MauveCamp/scripts.pory"
	applymovement 3, Common_Movement_WalkRight
# 50 "data/maps/MauveCamp/scripts.pory"
	waitmovement 0
# 51 "data/maps/MauveCamp/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceLeft
# 52 "data/maps/MauveCamp/scripts.pory"
	waitmovement 0
# 53 "data/maps/MauveCamp/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_SetVisible
# 54 "data/maps/MauveCamp/scripts.pory"
	waitmovement 0
# 55 "data/maps/MauveCamp/scripts.pory"
	playse SE_EXIT
# 56 "data/maps/MauveCamp/scripts.pory"
	waitse
# 57 "data/maps/MauveCamp/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown2
# 58 "data/maps/MauveCamp/scripts.pory"
	waitmovement 0
# 59 "data/maps/MauveCamp/scripts.pory"
	applymovement 3, Common_Movement_WalkLeft
# 60 "data/maps/MauveCamp/scripts.pory"
	waitmovement 0
# 61 "data/maps/MauveCamp/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceDown
# 62 "data/maps/MauveCamp/scripts.pory"
	waitmovement 0
# 63 "data/maps/MauveCamp/scripts.pory"
	delay 20
# 64 "data/maps/MauveCamp/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceUp
# 65 "data/maps/MauveCamp/scripts.pory"
	waitmovement 0
# 66 "data/maps/MauveCamp/scripts.pory"
	checkplayergender
# 67 "data/maps/MauveCamp/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauveCamp_EventScript_HeadbuttTree_2
# 71 "data/maps/MauveCamp/scripts.pory"
	msgbox MauveCamp_EventScript_HeadbuttTree_Text_1
MauveCamp_EventScript_HeadbuttTree_1:
# 73 "data/maps/MauveCamp/scripts.pory"
	msgbox MauveCamp_EventScript_HeadbuttTree_Text_2
# 74 "data/maps/MauveCamp/scripts.pory"
	closemessage
	return

MauveCamp_EventScript_HeadbuttTree_2:
# 68 "data/maps/MauveCamp/scripts.pory"
	msgbox MauveCamp_EventScript_HeadbuttTree_Text_0
	goto MauveCamp_EventScript_HeadbuttTree_1


MauveCamp_Sailor1::
# 78 "data/maps/MauveCamp/scripts.pory"
	msgbox MauveCamp_Sailor1_Text_0, MSGBOX_NPC
# 83 "data/maps/MauveCamp/scripts.pory"
	turnobject 2, DIR_WEST
	return


MauveCamp_Sailor2::
# 87 "data/maps/MauveCamp/scripts.pory"
	msgbox MauveCamp_Sailor2_Text_0, MSGBOX_NPC
	return


MauveCamp_Sailor3::
# 92 "data/maps/MauveCamp/scripts.pory"
	msgbox MauveCamp_Sailor3_Text_0, MSGBOX_NPC
	return


MauveCamp_Sailor4::
# 99 "data/maps/MauveCamp/scripts.pory"
	faceplayer
# 100 "data/maps/MauveCamp/scripts.pory"
	msgbox MauveCamp_Sailor4_Text_0, MSGBOX_YESNO
# 102 "data/maps/MauveCamp/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne MauveCamp_Sailor4_2
MauveCamp_Sailor4_1:
# 106 "data/maps/MauveCamp/scripts.pory"
	msgbox MauveCamp_Sailor4_Text_1
# 107 "data/maps/MauveCamp/scripts.pory"
	closemessage
	return

MauveCamp_Sailor4_2:
# 103 "data/maps/MauveCamp/scripts.pory"
	closemessage
# 104 "data/maps/MauveCamp/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
	goto MauveCamp_Sailor4_1


MauveCamp_Ranger::
# 111 "data/maps/MauveCamp/scripts.pory"
	msgbox MauveCamp_Ranger_Text_0, MSGBOX_NPC
	return


MauveCamp_Sign::
# 119 "data/maps/MauveCamp/scripts.pory"
	msgbox MauveCamp_Sign_Text_0, MSGBOX_SIGN
	return


MauveCamp_SandCastle::
# 123 "data/maps/MauveCamp/scripts.pory"
	msgbox MauveCamp_SandCastle_Text_0
# 124 "data/maps/MauveCamp/scripts.pory"
	closemessage
	return


MauveCamp_Pokeball::
# 128 "data/maps/MauveCamp/scripts.pory"
	msgbox MauveCamp_Pokeball_Text_0
# 129 "data/maps/MauveCamp/scripts.pory"
	closemessage
	return


MauveCamp_Boxes::
# 133 "data/maps/MauveCamp/scripts.pory"
	msgbox MauveCamp_Boxes_Text_0
# 134 "data/maps/MauveCamp/scripts.pory"
	closemessage
	return


MauveCamp_Rowboat::
# 138 "data/maps/MauveCamp/scripts.pory"
	msgbox MauveCamp_Rowboat_Text_0, MSGBOX_YESNO
# 140 "data/maps/MauveCamp/scripts.pory"
	closemessage
# 141 "data/maps/MauveCamp/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne MauveCamp_Rowboat_1
	return

MauveCamp_Rowboat_1:
# 142 "data/maps/MauveCamp/scripts.pory"
	setflag FLAG_REVERSE_SLATEPORT_BOAT_SCENE
# 143 "data/maps/MauveCamp/scripts.pory"
	goto SlateportRegionMap_BoatSceneInit
	return


MauveCamp_Pot::
# 148 "data/maps/MauveCamp/scripts.pory"
	msgbox MauveCamp_Pot_Text_0
# 151 "data/maps/MauveCamp/scripts.pory"
	closemessage
	return


MauveCamp_Shell::
# 155 "data/maps/MauveCamp/scripts.pory"
	msgbox MauveCamp_Shell_Text_0
# 158 "data/maps/MauveCamp/scripts.pory"
	closemessage
	return


MauveCamp_EventScript_HeadbuttTree_Text_0:
# 68 "data/maps/MauveCamp/scripts.pory"
	.string "Feeling better, lad?$"

MauveCamp_EventScript_HeadbuttTree_Text_1:
# 71 "data/maps/MauveCamp/scripts.pory"
	.string "Feeling better, lass?$"

MauveCamp_EventScript_HeadbuttTree_Text_2:
# 73 "data/maps/MauveCamp/scripts.pory"
	.string "If ye be feeling hungry, we have plenty\nof food at camp.\pThere's no need to bash down trees with\nyer head in hope of finding coconuts.\pIf ye keep knocking yerself out, we'll\nhave to start chargin' ye!$"

MauveCamp_Sailor1_Text_0:
# 78 "data/maps/MauveCamp/scripts.pory"
	.string "Aye, trainer.\n"
	.string "We're here on Mauve Island.\l"
	.string "Be off on your treasure hunt.\l"
	.string "The sooner you finish, the sooner we\l"
	.string "can all leave this blasted land.$"

MauveCamp_Sailor2_Text_0:
# 87 "data/maps/MauveCamp/scripts.pory"
	.string "It seems like we have enough supplies\n"
	.string "to last us for a long time.$"

MauveCamp_Sailor3_Text_0:
# 92 "data/maps/MauveCamp/scripts.pory"
	.string "This island gives me the spooks.\p"
	.string "No signs of civilization, yet there's a\n"
	.string "treasure buried somewhere in these\l"
	.string "lands?$"

MauveCamp_Sailor4_Text_0:
# 100 "data/maps/MauveCamp/scripts.pory"
	.string "Ahoy, trainer!\n"
	.string "Do ye require rest?$"

MauveCamp_Sailor4_Text_1:
# 106 "data/maps/MauveCamp/scripts.pory"
	.string "Stay safe out in the wilds.$"

MauveCamp_Ranger_Text_0:
# 111 "data/maps/MauveCamp/scripts.pory"
	.string "A couple of us rangers joined the\n"
	.string "expedition to help set up camp.\p"
	.string "My partner already left to scout\n"
	.string "out the area on her own.$"

MauveCamp_Sign_Text_0:
# 119 "data/maps/MauveCamp/scripts.pory"
	.string "Mauve Island Base Camp$"

MauveCamp_SandCastle_Text_0:
# 123 "data/maps/MauveCamp/scripts.pory"
	.string "Did Sakura make this sand castle?$"

MauveCamp_Pokeball_Text_0:
# 128 "data/maps/MauveCamp/scripts.pory"
	.string "This must be a Pokémon owned by\none of the sailors.$"

MauveCamp_Boxes_Text_0:
# 133 "data/maps/MauveCamp/scripts.pory"
	.string "The boxes are loaded with supplies.$"

MauveCamp_Rowboat_Text_0:
# 138 "data/maps/MauveCamp/scripts.pory"
	.string "It's a rowboat!\n"
	.string "Use it to return to Hoenn?$"

MauveCamp_Pot_Text_0:
# 148 "data/maps/MauveCamp/scripts.pory"
	.string "{PLAYER} found one Leftovers!\n"
	.string "… … …\l"
	.string "Just kidding!$"

MauveCamp_Shell_Text_0:
# 155 "data/maps/MauveCamp/scripts.pory"
	.string "Wow!\p"
	.string "When you get close you can hear\n"
	.string "the ocean!$"
