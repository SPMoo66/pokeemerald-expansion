MauveCamp_MapScripts::
# 5 "data/maps/MauveCamp/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MauveCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 18 "data/maps/MauveCamp/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MauveCamp_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

MauveCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 6 "data/maps/MauveCamp/scripts.pory"
	setrespawn HEAL_LOCATION_MAUVE_CAMP
# 7 "data/maps/MauveCamp/scripts.pory"
	setflag FLAG_LANDMARK_MAUVE_CAMP
# 8 "data/maps/MauveCamp/scripts.pory"
	goto_if_set FLAG_MAUVE_CAMP_HEADBUTT_SCENE, MauveCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
MauveCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 13 "data/maps/MauveCamp/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 23
	goto_if_lt MauveCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
	return

MauveCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 9 "data/maps/MauveCamp/scripts.pory"
	setflag FLAG_TEMP_2
# 10 "data/maps/MauveCamp/scripts.pory"
	setvar VAR_TEMP_0, 1
# 11 "data/maps/MauveCamp/scripts.pory"
	clearflag FLAG_MAUVE_CAMP_HEADBUTT_SCENE
	goto MauveCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

MauveCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 14 "data/maps/MauveCamp/scripts.pory"
	setflag FLAG_TEMP_6
# 15 "data/maps/MauveCamp/scripts.pory"
	setflag FLAG_TEMP_2
	return

MauveCamp_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 19 "data/maps/MauveCamp/scripts.pory"
	map_script_2 VAR_TEMP_0, 1, MauveCamp_EventScript_HeadbuttTree
# 20 "data/maps/MauveCamp/scripts.pory"
	map_script_2 VAR_EMERALBODY_RIVAL_STATE, 22, Expansion1_Rival_Scene02_Setup
	.2byte 0


MauveCamp_EventScript_HeadbuttTree::
# 25 "data/maps/MauveCamp/scripts.pory"
	setvar VAR_TEMP_0, 0
# 26 "data/maps/MauveCamp/scripts.pory"
	delay 20
# 27 "data/maps/MauveCamp/scripts.pory"
	setobjectxyperm 3, 23, 10
# 28 "data/maps/MauveCamp/scripts.pory"
	clearflag FLAG_TEMP_2
# 29 "data/maps/MauveCamp/scripts.pory"
	addobject 3
# 30 "data/maps/MauveCamp/scripts.pory"
	playse SE_EXIT
# 31 "data/maps/MauveCamp/scripts.pory"
	waitse
# 32 "data/maps/MauveCamp/scripts.pory"
	applymovement 3, Common_Movement_WalkDown
# 33 "data/maps/MauveCamp/scripts.pory"
	waitmovement 0
# 34 "data/maps/MauveCamp/scripts.pory"
	applymovement 3, Common_Movement_WalkRight
# 35 "data/maps/MauveCamp/scripts.pory"
	waitmovement 0
# 36 "data/maps/MauveCamp/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceLeft
# 37 "data/maps/MauveCamp/scripts.pory"
	waitmovement 0
# 38 "data/maps/MauveCamp/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_SetVisible
# 39 "data/maps/MauveCamp/scripts.pory"
	waitmovement 0
# 40 "data/maps/MauveCamp/scripts.pory"
	playse SE_EXIT
# 41 "data/maps/MauveCamp/scripts.pory"
	waitse
# 42 "data/maps/MauveCamp/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown2
# 43 "data/maps/MauveCamp/scripts.pory"
	waitmovement 0
# 44 "data/maps/MauveCamp/scripts.pory"
	applymovement 3, Common_Movement_WalkLeft
# 45 "data/maps/MauveCamp/scripts.pory"
	waitmovement 0
# 46 "data/maps/MauveCamp/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceDown
# 47 "data/maps/MauveCamp/scripts.pory"
	waitmovement 0
# 48 "data/maps/MauveCamp/scripts.pory"
	delay 20
# 49 "data/maps/MauveCamp/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceUp
# 50 "data/maps/MauveCamp/scripts.pory"
	waitmovement 0
# 51 "data/maps/MauveCamp/scripts.pory"
	checkplayergender
# 52 "data/maps/MauveCamp/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauveCamp_EventScript_HeadbuttTree_2
# 56 "data/maps/MauveCamp/scripts.pory"
	msgbox MauveCamp_EventScript_HeadbuttTree_Text_1
MauveCamp_EventScript_HeadbuttTree_1:
# 58 "data/maps/MauveCamp/scripts.pory"
	msgbox MauveCamp_EventScript_HeadbuttTree_Text_2
# 59 "data/maps/MauveCamp/scripts.pory"
	closemessage
	return

MauveCamp_EventScript_HeadbuttTree_2:
# 53 "data/maps/MauveCamp/scripts.pory"
	msgbox MauveCamp_EventScript_HeadbuttTree_Text_0
	goto MauveCamp_EventScript_HeadbuttTree_1


MauveCamp_Sailor1::
# 63 "data/maps/MauveCamp/scripts.pory"
	msgbox MauveCamp_Sailor1_Text_0, MSGBOX_NPC
# 68 "data/maps/MauveCamp/scripts.pory"
	turnobject 2, DIR_WEST
	return


MauveCamp_Sailor2::
# 72 "data/maps/MauveCamp/scripts.pory"
	msgbox MauveCamp_Sailor2_Text_0, MSGBOX_NPC
	return


MauveCamp_Sailor3::
# 77 "data/maps/MauveCamp/scripts.pory"
	msgbox MauveCamp_Sailor3_Text_0, MSGBOX_NPC
	return


MauveCamp_Sailor4::
# 84 "data/maps/MauveCamp/scripts.pory"
	faceplayer
# 85 "data/maps/MauveCamp/scripts.pory"
	msgbox MauveCamp_Sailor4_Text_0, MSGBOX_YESNO
# 87 "data/maps/MauveCamp/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne MauveCamp_Sailor4_2
MauveCamp_Sailor4_1:
# 91 "data/maps/MauveCamp/scripts.pory"
	msgbox MauveCamp_Sailor4_Text_1
# 92 "data/maps/MauveCamp/scripts.pory"
	closemessage
	return

MauveCamp_Sailor4_2:
# 88 "data/maps/MauveCamp/scripts.pory"
	closemessage
# 89 "data/maps/MauveCamp/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
	goto MauveCamp_Sailor4_1


MauveCamp_Ranger::
# 96 "data/maps/MauveCamp/scripts.pory"
	msgbox MauveCamp_Ranger_Text_0, MSGBOX_NPC
	return


MauveCamp_Sign::
# 104 "data/maps/MauveCamp/scripts.pory"
	msgbox MauveCamp_Sign_Text_0, MSGBOX_SIGN
	return


MauveCamp_SandCastle::
# 108 "data/maps/MauveCamp/scripts.pory"
	msgbox MauveCamp_SandCastle_Text_0
# 109 "data/maps/MauveCamp/scripts.pory"
	closemessage
	return


MauveCamp_Pokeball::
# 113 "data/maps/MauveCamp/scripts.pory"
	msgbox MauveCamp_Pokeball_Text_0
# 114 "data/maps/MauveCamp/scripts.pory"
	closemessage
	return


MauveCamp_Boxes::
# 118 "data/maps/MauveCamp/scripts.pory"
	msgbox MauveCamp_Boxes_Text_0
# 119 "data/maps/MauveCamp/scripts.pory"
	closemessage
	return


MauveCamp_Rowboat::
# 123 "data/maps/MauveCamp/scripts.pory"
	msgbox MauveCamp_Rowboat_Text_0, MSGBOX_YESNO
# 125 "data/maps/MauveCamp/scripts.pory"
	closemessage
# 126 "data/maps/MauveCamp/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne MauveCamp_Rowboat_1
	return

MauveCamp_Rowboat_1:
# 127 "data/maps/MauveCamp/scripts.pory"
	setvar VAR_EMERALBODY_RIVAL_STATE, 20
# 128 "data/maps/MauveCamp/scripts.pory"
	setflag FLAG_REVERSE_SLATEPORT_BOAT_SCENE
# 129 "data/maps/MauveCamp/scripts.pory"
	goto SlateportRegionMap_BoatSceneInit
	return


MauveCamp_Pot::
# 134 "data/maps/MauveCamp/scripts.pory"
	msgbox MauveCamp_Pot_Text_0
# 137 "data/maps/MauveCamp/scripts.pory"
	closemessage
	return


MauveCamp_Shell::
# 141 "data/maps/MauveCamp/scripts.pory"
	msgbox MauveCamp_Shell_Text_0
# 144 "data/maps/MauveCamp/scripts.pory"
	closemessage
	return


MauveCamp_EventScript_HeadbuttTree_Text_0:
# 53 "data/maps/MauveCamp/scripts.pory"
	.string "Feeling better, lad?$"

MauveCamp_EventScript_HeadbuttTree_Text_1:
# 56 "data/maps/MauveCamp/scripts.pory"
	.string "Feeling better, lass?$"

MauveCamp_EventScript_HeadbuttTree_Text_2:
# 58 "data/maps/MauveCamp/scripts.pory"
	.string "If ye be feeling hungry, we have plenty\nof food at camp.\pThere's no need to bash down trees with\nyer head in hope of finding coconuts.\pIf ye keep knocking yerself out, we'll\nhave to start chargin' ye!$"

MauveCamp_Sailor1_Text_0:
# 63 "data/maps/MauveCamp/scripts.pory"
	.string "Aye, trainer.\n"
	.string "We're here on Mauve Island.\l"
	.string "Be off on your treasure hunt.\l"
	.string "The sooner you finish, the sooner we\l"
	.string "can all leave this blasted land.$"

MauveCamp_Sailor2_Text_0:
# 72 "data/maps/MauveCamp/scripts.pory"
	.string "It seems like we have enough supplies\n"
	.string "to last us for a long time.$"

MauveCamp_Sailor3_Text_0:
# 77 "data/maps/MauveCamp/scripts.pory"
	.string "This island gives me the spooks.\p"
	.string "No signs of civilization, yet there's a\n"
	.string "treasure buried somewhere in these\l"
	.string "lands?$"

MauveCamp_Sailor4_Text_0:
# 85 "data/maps/MauveCamp/scripts.pory"
	.string "Ahoy, trainer!\n"
	.string "Do ye require rest?$"

MauveCamp_Sailor4_Text_1:
# 91 "data/maps/MauveCamp/scripts.pory"
	.string "Stay safe out in the wilds.$"

MauveCamp_Ranger_Text_0:
# 96 "data/maps/MauveCamp/scripts.pory"
	.string "A couple of us rangers joined the\n"
	.string "expedition to help set up camp.\p"
	.string "My partner already left to scout\n"
	.string "out the area on her own.$"

MauveCamp_Sign_Text_0:
# 104 "data/maps/MauveCamp/scripts.pory"
	.string "Mauve Island Base Camp$"

MauveCamp_SandCastle_Text_0:
# 108 "data/maps/MauveCamp/scripts.pory"
	.string "Did Sakura make this sand castle?$"

MauveCamp_Pokeball_Text_0:
# 113 "data/maps/MauveCamp/scripts.pory"
	.string "This must be a Pokémon owned by\none of the sailors.$"

MauveCamp_Boxes_Text_0:
# 118 "data/maps/MauveCamp/scripts.pory"
	.string "The boxes are loaded with supplies.$"

MauveCamp_Rowboat_Text_0:
# 123 "data/maps/MauveCamp/scripts.pory"
	.string "It's a rowboat!\n"
	.string "Use it to return to Hoenn?$"

MauveCamp_Pot_Text_0:
# 134 "data/maps/MauveCamp/scripts.pory"
	.string "{PLAYER} found one Leftovers!\n"
	.string "… … …\l"
	.string "Just kidding!$"

MauveCamp_Shell_Text_0:
# 141 "data/maps/MauveCamp/scripts.pory"
	.string "Wow!\p"
	.string "When you get close you can hear\n"
	.string "the ocean!$"
