MauveCamp_MapScripts::
# 10 "data/maps/MauveCamp/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, MauveCamp_MapScripts_MAP_SCRIPT_ON_LOAD
# 15 "data/maps/MauveCamp/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MauveCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 53 "data/maps/MauveCamp/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MauveCamp_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

MauveCamp_MapScripts_MAP_SCRIPT_ON_LOAD:
# 11 "data/maps/MauveCamp/scripts.pory"
	goto_if_set FLAG_MAUVE_CAMP_REMOVE_CAMP_TILES, MauveCamp_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

MauveCamp_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 12 "data/maps/MauveCamp/scripts.pory"
	call MauveCamp_RemoveCampTiles
	return

MauveCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 16 "data/maps/MauveCamp/scripts.pory"
	setrespawn HEAL_LOCATION_MAUVE_CAMP
# 17 "data/maps/MauveCamp/scripts.pory"
	setflag FLAG_LANDMARK_MAUVE_CAMP
# 18 "data/maps/MauveCamp/scripts.pory"
	call GetPlayerGfxNormal
# 19 "data/maps/MauveCamp/scripts.pory"
	goto_if_set FLAG_MAUVE_CAMP_HEADBUTT_SCENE, MauveCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
MauveCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 24 "data/maps/MauveCamp/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 24
	goto_if_lt MauveCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
MauveCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 28 "data/maps/MauveCamp/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 23
	goto_if_eq MauveCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
MauveCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 31 "data/maps/MauveCamp/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 24
	goto_if_ge MauveCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION_12
MauveCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 36 "data/maps/MauveCamp/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 31
	goto_if_eq MauveCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION_16
# 36 "data/maps/MauveCamp/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 32
	goto_if_eq MauveCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION_16
MauveCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION_15:
# 40 "data/maps/MauveCamp/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 33
	goto_if_ge MauveCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION_22
MauveCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION_20:
# 49 "data/maps/MauveCamp/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 40
	goto_if_ge MauveCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION_25
	return

MauveCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 20 "data/maps/MauveCamp/scripts.pory"
	setflag FLAG_TEMP_2
# 21 "data/maps/MauveCamp/scripts.pory"
	setvar VAR_TEMP_0, 1
# 22 "data/maps/MauveCamp/scripts.pory"
	clearflag FLAG_MAUVE_CAMP_HEADBUTT_SCENE
	goto MauveCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

MauveCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 25 "data/maps/MauveCamp/scripts.pory"
	setflag FLAG_TEMP_6
# 26 "data/maps/MauveCamp/scripts.pory"
	setflag FLAG_TEMP_2
	goto MauveCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

MauveCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 29 "data/maps/MauveCamp/scripts.pory"
	savebgm MUS_DP_SUNYSHORE_DAY
	goto MauveCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION_7

MauveCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION_11:
# 33 "data/maps/MauveCamp/scripts.pory"
	setobjectxyperm 6, 17, 11
# 34 "data/maps/MauveCamp/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_WANDER_AROUND
	goto MauveCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION_10

MauveCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION_12:
# 31 "data/maps/MauveCamp/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 32
	goto_if_le MauveCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION_11
	goto MauveCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION_10

MauveCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION_16:
# 37 "data/maps/MauveCamp/scripts.pory"
	setflag FLAG_TEMP_6
# 38 "data/maps/MauveCamp/scripts.pory"
	savebgm MUS_HG_POKEWALKER
	goto MauveCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION_15

MauveCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION_21:
# 42 "data/maps/MauveCamp/scripts.pory"
	setobjectxyperm 6, 25, 18
# 43 "data/maps/MauveCamp/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_DOWN_LEFT_AND_RIGHT
# 44 "data/maps/MauveCamp/scripts.pory"
	setobjectxyperm 7, 10, 12
# 45 "data/maps/MauveCamp/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_WANDER_AROUND
# 46 "data/maps/MauveCamp/scripts.pory"
	setobjectxyperm 8, 20, 29
	goto MauveCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION_20

MauveCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION_22:
# 40 "data/maps/MauveCamp/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 39
	goto_if_le MauveCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION_21
	goto MauveCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION_20

MauveCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION_25:
	return

MauveCamp_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 54 "data/maps/MauveCamp/scripts.pory"
	map_script_2 VAR_TEMP_0, 1, MauveCamp_EventScript_FromHeadbuttTree
# 55 "data/maps/MauveCamp/scripts.pory"
	map_script_2 VAR_EMERALBODY_RIVAL_STATE, 22, Expansion1_Rival_Scene02_Setup
# 56 "data/maps/MauveCamp/scripts.pory"
	map_script_2 VAR_EMERALBODY_RIVAL_STATE, 31, Expansion1_Rival_Scene05_Setup
	.2byte 0


MauveCamp_RemoveCampTiles::
# 61 "data/maps/MauveCamp/scripts.pory"
	setmetatileinrange 21, 8, 29, 18, 0x000
# 62 "data/maps/MauveCamp/scripts.pory"
	setmetatileinrange 15, 14, 17, 16, 0x000
# 63 "data/maps/MauveCamp/scripts.pory"
	setmetatileinrange 14, 13, 14, 14, 0x000
# 64 "data/maps/MauveCamp/scripts.pory"
	setmetatileinrange 30, 17, 30, 18, 0x000
# 65 "data/maps/MauveCamp/scripts.pory"
	setmetatileinrange 29, 20, 29, 21, 0x000
# 66 "data/maps/MauveCamp/scripts.pory"
	setmetatileinrange 32, 10, 32, 12, 0x000
# 67 "data/maps/MauveCamp/scripts.pory"
	setmetatile 28, 7, 0x000, FALSE
# 68 "data/maps/MauveCamp/scripts.pory"
	setmetatile 30, 10, 0x000, FALSE
	return


MauveCamp_Jakson::
# 72 "data/maps/MauveCamp/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 33
	goto_if_ge MauveCamp_Jakson_2
MauveCamp_Jakson_1:
# 75 "data/maps/MauveCamp/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 24
	goto_if_ge MauveCamp_Jakson_4
	return

MauveCamp_Jakson_2:
# 73 "data/maps/MauveCamp/scripts.pory"
	goto Jakson_Exp1_Town03
	goto MauveCamp_Jakson_1

MauveCamp_Jakson_4:
# 76 "data/maps/MauveCamp/scripts.pory"
	goto Jakson_Exp1_Town02
	return


MauveCamp_Baron::
# 81 "data/maps/MauveCamp/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 33
	goto_if_ge MauveCamp_Baron_1
	return

MauveCamp_Baron_1:
# 82 "data/maps/MauveCamp/scripts.pory"
	goto Baron_Exp1_Town03
	return


MauveCamp_Sakura::
# 87 "data/maps/MauveCamp/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 33
	goto_if_ge MauveCamp_Sakura_1
	return

MauveCamp_Sakura_1:
# 88 "data/maps/MauveCamp/scripts.pory"
	goto Sakura_Exp1_Town03
	return


MauveCamp_EventScript_FromHeadbuttTree::
# 93 "data/maps/MauveCamp/scripts.pory"
	setvar VAR_TEMP_0, 0
# 94 "data/maps/MauveCamp/scripts.pory"
	delay 20
# 95 "data/maps/MauveCamp/scripts.pory"
	setobjectxyperm 3, 23, 10
# 96 "data/maps/MauveCamp/scripts.pory"
	clearflag FLAG_TEMP_2
# 97 "data/maps/MauveCamp/scripts.pory"
	addobject 3
# 98 "data/maps/MauveCamp/scripts.pory"
	playse SE_EXIT
# 99 "data/maps/MauveCamp/scripts.pory"
	waitse
# 100 "data/maps/MauveCamp/scripts.pory"
	applymovement 3, Common_Movement_WalkDown
# 101 "data/maps/MauveCamp/scripts.pory"
	waitmovement 0
# 102 "data/maps/MauveCamp/scripts.pory"
	applymovement 3, Common_Movement_WalkRight
# 103 "data/maps/MauveCamp/scripts.pory"
	waitmovement 0
# 104 "data/maps/MauveCamp/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceLeft
# 105 "data/maps/MauveCamp/scripts.pory"
	waitmovement 0
# 106 "data/maps/MauveCamp/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_SetVisible
# 107 "data/maps/MauveCamp/scripts.pory"
	waitmovement 0
# 108 "data/maps/MauveCamp/scripts.pory"
	playse SE_EXIT
# 109 "data/maps/MauveCamp/scripts.pory"
	waitse
# 110 "data/maps/MauveCamp/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown2
# 111 "data/maps/MauveCamp/scripts.pory"
	waitmovement 0
# 112 "data/maps/MauveCamp/scripts.pory"
	applymovement 3, Common_Movement_WalkLeft
# 113 "data/maps/MauveCamp/scripts.pory"
	waitmovement 0
# 114 "data/maps/MauveCamp/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceDown
# 115 "data/maps/MauveCamp/scripts.pory"
	waitmovement 0
# 116 "data/maps/MauveCamp/scripts.pory"
	delay 20
# 117 "data/maps/MauveCamp/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceUp
# 118 "data/maps/MauveCamp/scripts.pory"
	waitmovement 0
# 119 "data/maps/MauveCamp/scripts.pory"
	checkplayergender
# 120 "data/maps/MauveCamp/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauveCamp_EventScript_FromHeadbuttTree_2
# 124 "data/maps/MauveCamp/scripts.pory"
	msgbox MauveCamp_EventScript_FromHeadbuttTree_Text_1
MauveCamp_EventScript_FromHeadbuttTree_1:
# 126 "data/maps/MauveCamp/scripts.pory"
	msgbox MauveCamp_EventScript_FromHeadbuttTree_Text_2
# 127 "data/maps/MauveCamp/scripts.pory"
	closemessage
	return

MauveCamp_EventScript_FromHeadbuttTree_2:
# 121 "data/maps/MauveCamp/scripts.pory"
	msgbox MauveCamp_EventScript_FromHeadbuttTree_Text_0
	goto MauveCamp_EventScript_FromHeadbuttTree_1


MauveCamp_Sailor1::
# 131 "data/maps/MauveCamp/scripts.pory"
	msgbox MauveCamp_Sailor1_Text_0, MSGBOX_NPC
# 136 "data/maps/MauveCamp/scripts.pory"
	turnobject 2, DIR_WEST
	return


MauveCamp_Sailor2::
# 140 "data/maps/MauveCamp/scripts.pory"
	msgbox MauveCamp_Sailor2_Text_0, MSGBOX_NPC
	return


MauveCamp_Sailor3::
# 145 "data/maps/MauveCamp/scripts.pory"
	msgbox MauveCamp_Sailor3_Text_0, MSGBOX_NPC
	return


MauveCamp_Sailor4::
# 152 "data/maps/MauveCamp/scripts.pory"
	faceplayer
# 153 "data/maps/MauveCamp/scripts.pory"
	msgbox MauveCamp_Sailor4_Text_0, MSGBOX_YESNO
# 155 "data/maps/MauveCamp/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne MauveCamp_Sailor4_2
MauveCamp_Sailor4_1:
# 159 "data/maps/MauveCamp/scripts.pory"
	msgbox MauveCamp_Sailor4_Text_1
# 160 "data/maps/MauveCamp/scripts.pory"
	closemessage
# 161 "data/maps/MauveCamp/scripts.pory"
	release
# 162 "data/maps/MauveCamp/scripts.pory"
	releaseall
	return

MauveCamp_Sailor4_2:
# 156 "data/maps/MauveCamp/scripts.pory"
	closemessage
# 157 "data/maps/MauveCamp/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
	goto MauveCamp_Sailor4_1


MauveCamp_Ranger::
# 166 "data/maps/MauveCamp/scripts.pory"
	msgbox MauveCamp_Ranger_Text_0, MSGBOX_NPC
	return


MauveCamp_Sign::
# 174 "data/maps/MauveCamp/scripts.pory"
	msgbox MauveCamp_Sign_Text_0, MSGBOX_SIGN
	return


MauveCamp_SandCastle::
# 178 "data/maps/MauveCamp/scripts.pory"
	msgbox MauveCamp_SandCastle_Text_0
# 179 "data/maps/MauveCamp/scripts.pory"
	closemessage
	return


MauveCamp_Pokeball::
# 183 "data/maps/MauveCamp/scripts.pory"
	msgbox MauveCamp_Pokeball_Text_0
# 184 "data/maps/MauveCamp/scripts.pory"
	closemessage
	return


MauveCamp_Boxes::
# 188 "data/maps/MauveCamp/scripts.pory"
	msgbox MauveCamp_Boxes_Text_0
# 189 "data/maps/MauveCamp/scripts.pory"
	closemessage
	return


MauveCamp_Rowboat::
# 193 "data/maps/MauveCamp/scripts.pory"
	msgbox MauveCamp_Rowboat_Text_0, MSGBOX_YESNO
# 195 "data/maps/MauveCamp/scripts.pory"
	closemessage
# 196 "data/maps/MauveCamp/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne MauveCamp_Rowboat_1
	return

MauveCamp_Rowboat_1:
# 197 "data/maps/MauveCamp/scripts.pory"
	setflag FLAG_REVERSE_SLATEPORT_BOAT_SCENE
# 198 "data/maps/MauveCamp/scripts.pory"
	goto SlateportRegionMap_BoatSceneInit
	return


MauveCamp_Pot::
# 203 "data/maps/MauveCamp/scripts.pory"
	msgbox MauveCamp_Pot_Text_0
# 206 "data/maps/MauveCamp/scripts.pory"
	closemessage
	return


MauveCamp_Shell::
# 210 "data/maps/MauveCamp/scripts.pory"
	msgbox MauveCamp_Shell_Text_0
# 213 "data/maps/MauveCamp/scripts.pory"
	closemessage
	return


MauveCamp_EventScript_FromHeadbuttTree_Text_0:
# 121 "data/maps/MauveCamp/scripts.pory"
	.string "Feeling better, lad?$"

MauveCamp_EventScript_FromHeadbuttTree_Text_1:
# 124 "data/maps/MauveCamp/scripts.pory"
	.string "Feeling better, lass?$"

MauveCamp_EventScript_FromHeadbuttTree_Text_2:
# 126 "data/maps/MauveCamp/scripts.pory"
	.string "If ye be feeling hungry, we have plenty\nof food at camp.\pThere's no need to bash down trees with\nyer head in hope of finding coconuts.\pIf ye keep knocking yerself out, we'll\nhave to start chargin' ye!$"

MauveCamp_Sailor1_Text_0:
# 131 "data/maps/MauveCamp/scripts.pory"
	.string "Aye, trainer.\n"
	.string "We're here on Mauve Island.\l"
	.string "Be off on your treasure hunt.\l"
	.string "The sooner you finish, the sooner we\l"
	.string "can all leave this blasted land.$"

MauveCamp_Sailor2_Text_0:
# 140 "data/maps/MauveCamp/scripts.pory"
	.string "It seems like we have enough supplies\n"
	.string "to last us for a long time.$"

MauveCamp_Sailor3_Text_0:
# 145 "data/maps/MauveCamp/scripts.pory"
	.string "This island gives me the spooks.\p"
	.string "No signs of civilization, yet there's a\n"
	.string "treasure buried somewhere in these\l"
	.string "lands?$"

MauveCamp_Sailor4_Text_0:
# 153 "data/maps/MauveCamp/scripts.pory"
	.string "Ahoy, trainer!\n"
	.string "Do ye require rest?$"

MauveCamp_Sailor4_Text_1:
# 159 "data/maps/MauveCamp/scripts.pory"
	.string "Stay safe out in the wilds.$"

MauveCamp_Ranger_Text_0:
# 166 "data/maps/MauveCamp/scripts.pory"
	.string "A couple of us rangers joined the\n"
	.string "expedition to help set up camp.\p"
	.string "My partner already left to scout\n"
	.string "out the area on her own.$"

MauveCamp_Sign_Text_0:
# 174 "data/maps/MauveCamp/scripts.pory"
	.string "Mauve Island Base Camp$"

MauveCamp_SandCastle_Text_0:
# 178 "data/maps/MauveCamp/scripts.pory"
	.string "Did Sakura make this sand castle?$"

MauveCamp_Pokeball_Text_0:
# 183 "data/maps/MauveCamp/scripts.pory"
	.string "This must be a Pokémon owned by\none of the sailors.$"

MauveCamp_Boxes_Text_0:
# 188 "data/maps/MauveCamp/scripts.pory"
	.string "The boxes are loaded with supplies.$"

MauveCamp_Rowboat_Text_0:
# 193 "data/maps/MauveCamp/scripts.pory"
	.string "It's a rowboat!\n"
	.string "Use it to return to Hoenn?$"

MauveCamp_Pot_Text_0:
# 203 "data/maps/MauveCamp/scripts.pory"
	.string "{PLAYER} found one Leftovers!\n"
	.string "… … …\l"
	.string "Just kidding!$"

MauveCamp_Shell_Text_0:
# 210 "data/maps/MauveCamp/scripts.pory"
	.string "Wow!\p"
	.string "When you get close you can hear\n"
	.string "the ocean!$"
