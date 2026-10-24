MauveCamp_MapScripts::
# 10 "data/maps/MauveCamp/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, MauveCamp_MapScripts_MAP_SCRIPT_ON_LOAD
# 20 "data/maps/MauveCamp/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MauveCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 80 "data/maps/MauveCamp/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MauveCamp_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

MauveCamp_MapScripts_MAP_SCRIPT_ON_LOAD:
# 11 "data/maps/MauveCamp/scripts.pory"
	goto_if_set FLAG_MAUVE_CAMP_REMOVE_CAMP_TILES, MauveCamp_MapScripts_MAP_SCRIPT_ON_LOAD_2
MauveCamp_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 14 "data/maps/MauveCamp/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 51
	goto_if_eq MauveCamp_MapScripts_MAP_SCRIPT_ON_LOAD_4
	return

MauveCamp_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 12 "data/maps/MauveCamp/scripts.pory"
	call MauveCamp_RemoveCampTiles
	goto MauveCamp_MapScripts_MAP_SCRIPT_ON_LOAD_1

MauveCamp_MapScripts_MAP_SCRIPT_ON_LOAD_4:
# 15 "data/maps/MauveCamp/scripts.pory"
	setmetatile 25, 6, 0x236, TRUE
# 16 "data/maps/MauveCamp/scripts.pory"
	setmetatile 25, 7, 0x23E, FALSE
# 17 "data/maps/MauveCamp/scripts.pory"
	setmetatile 25, 8, 0x246, FALSE
	return

MauveCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 21 "data/maps/MauveCamp/scripts.pory"
	setrespawn HEAL_LOCATION_MAUVE_CAMP
# 22 "data/maps/MauveCamp/scripts.pory"
	setflag FLAG_LANDMARK_MAUVE_CAMP
# 23 "data/maps/MauveCamp/scripts.pory"
	call GetPlayerGfxNormal
# 24 "data/maps/MauveCamp/scripts.pory"
	goto_if_set FLAG_MAUVE_CAMP_HEADBUTT_SCENE, MauveCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
MauveCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 29 "data/maps/MauveCamp/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 24
	goto_if_lt MauveCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
MauveCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 33 "data/maps/MauveCamp/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 23
	goto_if_eq MauveCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
MauveCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 36 "data/maps/MauveCamp/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 24
	goto_if_ge MauveCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION_12
MauveCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 41 "data/maps/MauveCamp/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 31
	goto_if_eq MauveCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION_16
# 41 "data/maps/MauveCamp/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 32
	goto_if_eq MauveCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION_16
MauveCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION_15:
# 45 "data/maps/MauveCamp/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 33
	goto_if_ge MauveCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION_22
MauveCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION_20:
# 54 "data/maps/MauveCamp/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 40
	goto_if_eq MauveCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION_26
MauveCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION_25:
# 63 "data/maps/MauveCamp/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 45
	goto_if_eq MauveCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION_29
MauveCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION_28:
# 68 "data/maps/MauveCamp/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 50
	goto_if_eq MauveCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION_33
MauveCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION_31:
# 72 "data/maps/MauveCamp/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 51
	goto_if_lt MauveCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION_37
MauveCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION_36:
# 75 "data/maps/MauveCamp/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 51
	goto_if_eq MauveCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION_39
	return

MauveCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 25 "data/maps/MauveCamp/scripts.pory"
	setflag FLAG_TEMP_2
# 26 "data/maps/MauveCamp/scripts.pory"
	setvar VAR_TEMP_0, 1
# 27 "data/maps/MauveCamp/scripts.pory"
	clearflag FLAG_MAUVE_CAMP_HEADBUTT_SCENE
	goto MauveCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

MauveCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 30 "data/maps/MauveCamp/scripts.pory"
	setflag FLAG_TEMP_6
# 31 "data/maps/MauveCamp/scripts.pory"
	setflag FLAG_TEMP_2
	goto MauveCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

MauveCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 34 "data/maps/MauveCamp/scripts.pory"
	savebgm MUS_DP_SUNYSHORE_DAY
	goto MauveCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION_7

MauveCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION_11:
# 38 "data/maps/MauveCamp/scripts.pory"
	setobjectxyperm 6, 17, 11
# 39 "data/maps/MauveCamp/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_WANDER_AROUND
	goto MauveCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION_10

MauveCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION_12:
# 36 "data/maps/MauveCamp/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 32
	goto_if_le MauveCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION_11
	goto MauveCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION_10

MauveCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION_16:
# 42 "data/maps/MauveCamp/scripts.pory"
	setflag FLAG_TEMP_6
# 43 "data/maps/MauveCamp/scripts.pory"
	savebgm MUS_HG_POKEWALKER
	goto MauveCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION_15

MauveCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION_21:
# 47 "data/maps/MauveCamp/scripts.pory"
	setobjectxyperm 6, 25, 18
# 48 "data/maps/MauveCamp/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_DOWN_LEFT_AND_RIGHT
# 49 "data/maps/MauveCamp/scripts.pory"
	setobjectxyperm 7, 10, 12
# 50 "data/maps/MauveCamp/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_WANDER_AROUND
# 51 "data/maps/MauveCamp/scripts.pory"
	setobjectxyperm 8, 20, 29
	goto MauveCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION_20

MauveCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION_22:
# 45 "data/maps/MauveCamp/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 38
	goto_if_le MauveCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION_21
	goto MauveCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION_20

MauveCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION_26:
# 56 "data/maps/MauveCamp/scripts.pory"
	setobjectxyperm 11, 23, 17
# 57 "data/maps/MauveCamp/scripts.pory"
	setobjectmovementtype 11, MOVEMENT_TYPE_FACE_LEFT
# 58 "data/maps/MauveCamp/scripts.pory"
	setobjectxyperm 10, 15, 9
# 59 "data/maps/MauveCamp/scripts.pory"
	setobjectmovementtype 10, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT
# 60 "data/maps/MauveCamp/scripts.pory"
	setobjectxyperm 7, 26, 7
# 61 "data/maps/MauveCamp/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_WANDER_AROUND
	goto MauveCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION_25

MauveCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION_29:
# 65 "data/maps/MauveCamp/scripts.pory"
	setobjectxyperm 8, 26, 13
# 66 "data/maps/MauveCamp/scripts.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_WANDER_AROUND
	goto MauveCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION_28

MauveCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION_32:
# 69 "data/maps/MauveCamp/scripts.pory"
	savebgm MUS_PL_CONTEST_BEAUTY
# 70 "data/maps/MauveCamp/scripts.pory"
	clearflag FLAG_SCENE10_TRANSITION
	goto MauveCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION_31

MauveCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION_33:
# 68 "data/maps/MauveCamp/scripts.pory"
	goto_if_set FLAG_SCENE10_TRANSITION, MauveCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION_32
	goto MauveCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION_31

MauveCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION_37:
# 73 "data/maps/MauveCamp/scripts.pory"
	setflag FLAG_TEMP_8
	goto MauveCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION_36

MauveCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION_39:
# 76 "data/maps/MauveCamp/scripts.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_FACE_DOWN
# 77 "data/maps/MauveCamp/scripts.pory"
	setobjectxyperm 8, 25, 7
	return

MauveCamp_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 81 "data/maps/MauveCamp/scripts.pory"
	map_script_2 VAR_TEMP_0, 1, MauveCamp_EventScript_FromHeadbuttTree
# 82 "data/maps/MauveCamp/scripts.pory"
	map_script_2 VAR_EMERALBODY_RIVAL_STATE, 22, Expansion1_Rival_Scene02_Setup
# 83 "data/maps/MauveCamp/scripts.pory"
	map_script_2 VAR_EMERALBODY_RIVAL_STATE, 31, Expansion1_Rival_Scene05_Setup
	.2byte 0


MauveCamp_RemoveCampTiles::
# 88 "data/maps/MauveCamp/scripts.pory"
	setmetatileinrange 21, 8, 29, 18, 0x000
# 89 "data/maps/MauveCamp/scripts.pory"
	setmetatileinrange 15, 14, 17, 16, 0x000
# 90 "data/maps/MauveCamp/scripts.pory"
	setmetatileinrange 14, 13, 14, 14, 0x000
# 91 "data/maps/MauveCamp/scripts.pory"
	setmetatileinrange 30, 17, 30, 18, 0x000
# 92 "data/maps/MauveCamp/scripts.pory"
	setmetatileinrange 29, 20, 29, 21, 0x000
# 93 "data/maps/MauveCamp/scripts.pory"
	setmetatileinrange 32, 10, 32, 12, 0x000
# 94 "data/maps/MauveCamp/scripts.pory"
	setmetatile 28, 7, 0x000, FALSE
# 95 "data/maps/MauveCamp/scripts.pory"
	setmetatile 30, 10, 0x000, FALSE
	return


MauveCamp_Jakson::
# 99 "data/maps/MauveCamp/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 33
	goto_if_ge MauveCamp_Jakson_2
MauveCamp_Jakson_1:
# 102 "data/maps/MauveCamp/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 24
	goto_if_ge MauveCamp_Jakson_4
	return

MauveCamp_Jakson_2:
# 100 "data/maps/MauveCamp/scripts.pory"
	goto Jakson_Exp1_Town03
	goto MauveCamp_Jakson_1

MauveCamp_Jakson_4:
# 103 "data/maps/MauveCamp/scripts.pory"
	goto Jakson_Exp1_Town02
	return


MauveCamp_Baron::
# 108 "data/maps/MauveCamp/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 40
	goto_if_eq MauveCamp_Baron_2
MauveCamp_Baron_1:
# 111 "data/maps/MauveCamp/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 33
	goto_if_ge MauveCamp_Baron_4
	return

MauveCamp_Baron_2:
# 109 "data/maps/MauveCamp/scripts.pory"
	goto Baron_Exp1_Town04
	goto MauveCamp_Baron_1

MauveCamp_Baron_4:
# 112 "data/maps/MauveCamp/scripts.pory"
	goto Baron_Exp1_Town03
	return


MauveCamp_Sakura::
# 117 "data/maps/MauveCamp/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 33
	goto_if_ge MauveCamp_Sakura_2
MauveCamp_Sakura_1:
# 122 "data/maps/MauveCamp/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 45
	goto_if_eq MauveCamp_Sakura_5
MauveCamp_Sakura_4:
# 125 "data/maps/MauveCamp/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 51
	goto_if_eq MauveCamp_Sakura_9
	return

MauveCamp_Sakura_2:
# 118 "data/maps/MauveCamp/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 38
	goto_if_le MauveCamp_Sakura_7
	goto MauveCamp_Sakura_1

MauveCamp_Sakura_5:
# 123 "data/maps/MauveCamp/scripts.pory"
	goto Sakura_Exp1_Town07
	goto MauveCamp_Sakura_4

MauveCamp_Sakura_7:
# 119 "data/maps/MauveCamp/scripts.pory"
	goto Sakura_Exp1_Town03
	goto MauveCamp_Sakura_1

MauveCamp_Sakura_9:
# 126 "data/maps/MauveCamp/scripts.pory"
	goto Sakura_Exp1_Town09
	return


MauveCamp_EventScript_FromHeadbuttTree::
# 131 "data/maps/MauveCamp/scripts.pory"
	setvar VAR_TEMP_0, 0
# 132 "data/maps/MauveCamp/scripts.pory"
	delay 20
# 133 "data/maps/MauveCamp/scripts.pory"
	setobjectxyperm 3, 23, 10
# 134 "data/maps/MauveCamp/scripts.pory"
	clearflag FLAG_TEMP_2
# 135 "data/maps/MauveCamp/scripts.pory"
	addobject 3
# 136 "data/maps/MauveCamp/scripts.pory"
	playse SE_EXIT
# 137 "data/maps/MauveCamp/scripts.pory"
	waitse
# 138 "data/maps/MauveCamp/scripts.pory"
	applymovement 3, Common_Movement_WalkDown
# 139 "data/maps/MauveCamp/scripts.pory"
	waitmovement 0
# 140 "data/maps/MauveCamp/scripts.pory"
	applymovement 3, Common_Movement_WalkRight
# 141 "data/maps/MauveCamp/scripts.pory"
	waitmovement 0
# 142 "data/maps/MauveCamp/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceLeft
# 143 "data/maps/MauveCamp/scripts.pory"
	waitmovement 0
# 144 "data/maps/MauveCamp/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_SetVisible
# 145 "data/maps/MauveCamp/scripts.pory"
	waitmovement 0
# 146 "data/maps/MauveCamp/scripts.pory"
	playse SE_EXIT
# 147 "data/maps/MauveCamp/scripts.pory"
	waitse
# 148 "data/maps/MauveCamp/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown2
# 149 "data/maps/MauveCamp/scripts.pory"
	waitmovement 0
# 150 "data/maps/MauveCamp/scripts.pory"
	applymovement 3, Common_Movement_WalkLeft
# 151 "data/maps/MauveCamp/scripts.pory"
	waitmovement 0
# 152 "data/maps/MauveCamp/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceDown
# 153 "data/maps/MauveCamp/scripts.pory"
	waitmovement 0
# 154 "data/maps/MauveCamp/scripts.pory"
	delay 20
# 155 "data/maps/MauveCamp/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceUp
# 156 "data/maps/MauveCamp/scripts.pory"
	waitmovement 0
# 157 "data/maps/MauveCamp/scripts.pory"
	checkplayergender
# 158 "data/maps/MauveCamp/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauveCamp_EventScript_FromHeadbuttTree_2
# 162 "data/maps/MauveCamp/scripts.pory"
	msgbox MauveCamp_EventScript_FromHeadbuttTree_Text_1
MauveCamp_EventScript_FromHeadbuttTree_1:
# 164 "data/maps/MauveCamp/scripts.pory"
	msgbox MauveCamp_EventScript_FromHeadbuttTree_Text_2
# 165 "data/maps/MauveCamp/scripts.pory"
	closemessage
	return

MauveCamp_EventScript_FromHeadbuttTree_2:
# 159 "data/maps/MauveCamp/scripts.pory"
	msgbox MauveCamp_EventScript_FromHeadbuttTree_Text_0
	goto MauveCamp_EventScript_FromHeadbuttTree_1


MauveCamp_Sailor1::
# 169 "data/maps/MauveCamp/scripts.pory"
	msgbox MauveCamp_Sailor1_Text_0, MSGBOX_NPC
# 174 "data/maps/MauveCamp/scripts.pory"
	turnobject 2, DIR_WEST
	return


MauveCamp_Sailor2::
# 178 "data/maps/MauveCamp/scripts.pory"
	msgbox MauveCamp_Sailor2_Text_0, MSGBOX_NPC
	return


MauveCamp_Sailor3::
# 183 "data/maps/MauveCamp/scripts.pory"
	msgbox MauveCamp_Sailor3_Text_0, MSGBOX_NPC
	return


MauveCamp_Sailor4::
# 190 "data/maps/MauveCamp/scripts.pory"
	faceplayer
# 191 "data/maps/MauveCamp/scripts.pory"
	msgbox MauveCamp_Sailor4_Text_0, MSGBOX_YESNO
# 193 "data/maps/MauveCamp/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne MauveCamp_Sailor4_2
MauveCamp_Sailor4_1:
# 197 "data/maps/MauveCamp/scripts.pory"
	msgbox MauveCamp_Sailor4_Text_1
# 198 "data/maps/MauveCamp/scripts.pory"
	closemessage
# 199 "data/maps/MauveCamp/scripts.pory"
	release
# 200 "data/maps/MauveCamp/scripts.pory"
	releaseall
	return

MauveCamp_Sailor4_2:
# 194 "data/maps/MauveCamp/scripts.pory"
	closemessage
# 195 "data/maps/MauveCamp/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
	goto MauveCamp_Sailor4_1


MauveCamp_Ranger::
# 204 "data/maps/MauveCamp/scripts.pory"
	msgbox MauveCamp_Ranger_Text_0, MSGBOX_NPC
	return


MauveCamp_Cynthia::
# 211 "data/maps/MauveCamp/scripts.pory"
	faceplayer
# 212 "data/maps/MauveCamp/scripts.pory"
	speakername CommonText_Cynthia
# 213 "data/maps/MauveCamp/scripts.pory"
	checktrainerflag TRAINER_CYNTHIA_EXP_1
	goto_if 0, MauveCamp_Cynthia_2
MauveCamp_Cynthia_1:
# 231 "data/maps/MauveCamp/scripts.pory"
	speakername CommonText_Cynthia
# 232 "data/maps/MauveCamp/scripts.pory"
	msgbox MauveCamp_Cynthia_Text_2, MSGBOX_AUTOCLOSE
	return

MauveCamp_Cynthia_2:
# 214 "data/maps/MauveCamp/scripts.pory"
	msgbox MauveCamp_Cynthia_Text_0, MSGBOX_NPC
# 225 "data/maps/MauveCamp/scripts.pory"
	setflag FLAG_SUPERBOSS_TRAINER
# 226 "data/maps/MauveCamp/scripts.pory"
	setflag FLAG_IGNORE_LEVEL_SYNC
# 227 "data/maps/MauveCamp/scripts.pory"
	trainerbattle_no_intro TRAINER_CYNTHIA_EXP_1, MauveCamp_Cynthia_Text_1
# 228 "data/maps/MauveCamp/scripts.pory"
	clearflag FLAG_SUPERBOSS_TRAINER
# 229 "data/maps/MauveCamp/scripts.pory"
	clearflag FLAG_IGNORE_LEVEL_SYNC
	goto MauveCamp_Cynthia_1


MauveCamp_Sign::
# 248 "data/maps/MauveCamp/scripts.pory"
	msgbox MauveCamp_Sign_Text_0, MSGBOX_SIGN
	return


MauveCamp_SandCastle::
# 252 "data/maps/MauveCamp/scripts.pory"
	msgbox MauveCamp_SandCastle_Text_0
# 253 "data/maps/MauveCamp/scripts.pory"
	closemessage
	return


MauveCamp_Pokeball::
# 257 "data/maps/MauveCamp/scripts.pory"
	msgbox MauveCamp_Pokeball_Text_0
# 258 "data/maps/MauveCamp/scripts.pory"
	closemessage
	return


MauveCamp_Boxes::
# 262 "data/maps/MauveCamp/scripts.pory"
	msgbox MauveCamp_Boxes_Text_0
# 263 "data/maps/MauveCamp/scripts.pory"
	closemessage
	return


MauveCamp_Rowboat::
# 267 "data/maps/MauveCamp/scripts.pory"
	msgbox MauveCamp_Rowboat_Text_0, MSGBOX_YESNO
# 269 "data/maps/MauveCamp/scripts.pory"
	closemessage
# 270 "data/maps/MauveCamp/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne MauveCamp_Rowboat_1
	return

MauveCamp_Rowboat_1:
# 271 "data/maps/MauveCamp/scripts.pory"
	setflag FLAG_REVERSE_SLATEPORT_BOAT_SCENE
# 272 "data/maps/MauveCamp/scripts.pory"
	goto SlateportRegionMap_BoatSceneInit
	return


MauveCamp_Pot::
# 277 "data/maps/MauveCamp/scripts.pory"
	msgbox MauveCamp_Pot_Text_0
# 280 "data/maps/MauveCamp/scripts.pory"
	closemessage
	return


MauveCamp_Shell::
# 284 "data/maps/MauveCamp/scripts.pory"
	msgbox MauveCamp_Shell_Text_0
# 287 "data/maps/MauveCamp/scripts.pory"
	closemessage
	return


MauveCamp_EventScript_FromHeadbuttTree_Text_0:
# 159 "data/maps/MauveCamp/scripts.pory"
	.string "Feeling better, lad?$"

MauveCamp_EventScript_FromHeadbuttTree_Text_1:
# 162 "data/maps/MauveCamp/scripts.pory"
	.string "Feeling better, lass?$"

MauveCamp_EventScript_FromHeadbuttTree_Text_2:
# 164 "data/maps/MauveCamp/scripts.pory"
	.string "If ye be feeling hungry, we have plenty\nof food at camp.\pThere's no need to bash down trees with\nyer head in hope of finding coconuts.\pIf ye keep knocking yerself out, we'll\nhave to start chargin' ye!$"

MauveCamp_Sailor1_Text_0:
# 169 "data/maps/MauveCamp/scripts.pory"
	.string "Aye, trainer.\n"
	.string "We're here on Mauve Island.\l"
	.string "Be off on your treasure hunt.\l"
	.string "The sooner you finish, the sooner we\l"
	.string "can all leave this blasted land.$"

MauveCamp_Sailor2_Text_0:
# 178 "data/maps/MauveCamp/scripts.pory"
	.string "It seems like we have enough supplies\n"
	.string "to last us for a long time.$"

MauveCamp_Sailor3_Text_0:
# 183 "data/maps/MauveCamp/scripts.pory"
	.string "This island gives me the spooks.\p"
	.string "No signs of civilization, yet there's a\n"
	.string "treasure buried somewhere in these\l"
	.string "lands?$"

MauveCamp_Sailor4_Text_0:
# 191 "data/maps/MauveCamp/scripts.pory"
	.string "Ahoy, trainer!\n"
	.string "Do ye require rest?$"

MauveCamp_Sailor4_Text_1:
# 197 "data/maps/MauveCamp/scripts.pory"
	.string "Stay safe out in the wilds.$"

MauveCamp_Ranger_Text_0:
# 204 "data/maps/MauveCamp/scripts.pory"
	.string "A couple of us rangers joined the\n"
	.string "expedition to help set up camp.\p"
	.string "My partner already left to scout\n"
	.string "out the area on her own.$"

MauveCamp_Cynthia_Text_0:
# 214 "data/maps/MauveCamp/scripts.pory"
	.string "Oh, hello.\p"
	.string "… {PAUSE 60}… {PAUSE 60}…{PAUSE 60}\n"
	.string "I seem familiar?\p"
	.string "I can assure you, we have not met\n"
	.string "before.\p"
	.string "Though… {PAUSE 60}I have heard of you,\n"
	.string "Champion of Hoenn.\p"
	.string "I may be on vacation, but I can still\n"
	.string "appreciate a battle.\p"
	.string "Steven was a good warmup, but show me\n"
	.string "what you are made of, {PLAYER}!$"

MauveCamp_Cynthia_Text_1:
# 227 "data/maps/MauveCamp/scripts.pory"
	.string "A superb style of battling.\pSteven, you've really declined if a child\nlike this puts up a better challenge…$"

MauveCamp_Cynthia_Text_2:
# 232 "data/maps/MauveCamp/scripts.pory"
	.string "No… {PAUSE 60}I'm quite sure we had not met\n"
	.string "before now.\p"
	.string "I'm not sure what gave you that idea.\p"
	.string "But it is good to have finally have\n"
	.string "met you.\p"
	.string "The community of Pokémon Champions is\n"
	.string "small… {PAUSE 60}and it can be rather awkward\l"
	.string "when we can't get along.\p"
	.string "I already exchanged pleasantries with\n"
	.string "Steven.\p"
	.string "I didn't take the initial boat ride over,\n"
	.string "but I did visit him in his cabin.$"

MauveCamp_Sign_Text_0:
# 248 "data/maps/MauveCamp/scripts.pory"
	.string "Mauve Island Base Camp$"

MauveCamp_SandCastle_Text_0:
# 252 "data/maps/MauveCamp/scripts.pory"
	.string "Did Sakura make this sand castle?$"

MauveCamp_Pokeball_Text_0:
# 257 "data/maps/MauveCamp/scripts.pory"
	.string "This must be a Pokémon owned by\none of the sailors.$"

MauveCamp_Boxes_Text_0:
# 262 "data/maps/MauveCamp/scripts.pory"
	.string "The boxes are loaded with supplies.$"

MauveCamp_Rowboat_Text_0:
# 267 "data/maps/MauveCamp/scripts.pory"
	.string "It's a rowboat!\n"
	.string "Use it to return to Hoenn?$"

MauveCamp_Pot_Text_0:
# 277 "data/maps/MauveCamp/scripts.pory"
	.string "{PLAYER} found one Leftovers!\n"
	.string "… … …\l"
	.string "Just kidding!$"

MauveCamp_Shell_Text_0:
# 284 "data/maps/MauveCamp/scripts.pory"
	.string "Wow!\p"
	.string "When you get close you can hear\n"
	.string "the ocean!$"
