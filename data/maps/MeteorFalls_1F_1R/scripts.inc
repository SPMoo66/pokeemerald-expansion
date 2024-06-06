MeteorFalls_1F_1R_MapScripts::
# 9 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, MeteorFalls_1F_1R_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

MeteorFalls_1F_1R_MapScripts_MAP_SCRIPT_ON_LOAD:
# 10 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, MeteorFalls_1F_1R_MapScripts_MAP_SCRIPT_ON_LOAD_2
MeteorFalls_1F_1R_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 16 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	goto_if_set FLAG_REGI_DOORS_OPENED, MeteorFalls_1F_1R_MapScripts_MAP_SCRIPT_ON_LOAD_4
	return

MeteorFalls_1F_1R_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 11 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setmetatile 4, 1, METATILE_MeteorFalls_CaveEntrance_Top, TRUE
# 12 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setmetatile 3, 2, METATILE_MeteorFalls_CaveEntrance_Left, TRUE
# 13 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setmetatile 4, 2, METATILE_MeteorFalls_CaveEntrance_Bottom, FALSE
# 14 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setmetatile 5, 2, METATILE_MeteorFalls_CaveEntrance_Right, TRUE
	goto MeteorFalls_1F_1R_MapScripts_MAP_SCRIPT_ON_LOAD_1

MeteorFalls_1F_1R_MapScripts_MAP_SCRIPT_ON_LOAD_4:
# 17 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setmetatile 12, 25, METATILE_MeteorFalls_CaveEntrance_Top, TRUE
# 18 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setmetatile 11, 26, METATILE_MeteorFalls_CaveEntrance_Left, TRUE
# 19 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setmetatile 12, 26, METATILE_MeteorFalls_CaveEntrance_Bottom, FALSE
# 20 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setmetatile 13, 26, METATILE_MeteorFalls_CaveEntrance_Right, TRUE
	return


MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene::
# 26 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	lockall
# 27 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 28 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	special SpawnCameraObject
# 29 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown2
# 30 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 31 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 32 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay 30
# 33 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 8, Common_Movement_WalkInPlaceDown
# 34 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 35 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_0
# 38 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 39 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceFasterUp
# 40 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterUp
# 41 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 42 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	playse SE_PIN
# 43 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 5, Common_Movement_ExclamationMark
# 44 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 45 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 5, Common_Movement_Delay48
# 46 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 47 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_1
# 51 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 52 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 5, Common_Movement_WalkRight
# 53 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 54 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceUp
# 55 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 56 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_2
# 57 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceDown
# 58 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_3
# 59 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 60 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_4
# 61 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceRight
# 62 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 63 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 64 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 65 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	addobject 11
# 66 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 11, MeteorFalls_1F_1R_Movement_RivalRunsIn
# 67 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 68 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	checkplayergender
# 69 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_2
# 74 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_6
MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_1:
# 77 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceRight
# 78 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 79 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_7
# 80 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 81 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 11, MeteorFalls_1F_1R_Movement_RivalBeforeBattle
# 82 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceUp
# 83 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 6, Common_Movement_WalkUp2
# 84 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 85 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	special RemoveCameraObject
# 86 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	special SavePlayerParty
# 87 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	fadescreen FADE_TO_BLACK
# 88 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	special ChooseHalfPartyForBattle
# 89 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitstate
# 90 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	checkplayergender
# 91 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_6
# 95 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	multi_2_vs_2 TRAINER_COURTNEY_METEOR_FALLS, MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_8, TRAINER_MAGMA_GRUNT_METEOR_FALLS, MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_9, PARTNER_BRENDAN_METEOR_FALLS, TRAINER_BACK_PIC_BRENDAN
MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_5:
# 97 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	switch VAR_RESULT
# 98 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	case 1, MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_10
# 213 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	fadescreen FADE_TO_BLACK
# 214 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	special SetCB2WhiteOut
# 215 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitstate
	return

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_2:
# 70 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_5
	goto MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_1

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_6:
# 92 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	multi_2_vs_2 TRAINER_COURTNEY_METEOR_FALLS, MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_8, TRAINER_MAGMA_GRUNT_METEOR_FALLS, MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_9, PARTNER_MAY_METEOR_FALLS, TRAINER_BACK_PIC_MAY
	goto MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_5

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_10:
# 99 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_10
# 102 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 103 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 104 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceFasterLeft
# 105 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterLeft
# 106 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 11, Common_Movement_WalkInPlaceFasterLeft
# 107 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 108 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	addobject 7
# 109 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	addobject 8
# 110 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	addobject 9
# 111 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 112 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 7, MeteorFalls_1F_1R_Movement_ArchieArrive
# 113 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 8, MeteorFalls_1F_1R_Movement_AquaGruntArrive
# 114 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 9, MeteorFalls_1F_1R_Movement_AquaGruntArrive
# 115 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 116 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceFasterLeft
# 117 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 118 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	special SpawnCameraObject
# 119 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_11
# 128 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 129 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MeteorFalls_1F_1R_Movement_PushPlayerOutOfWay
# 130 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MeteorFalls_1F_1R_Movement_PushPlayerOutOfWay
# 131 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 11, MeteorFalls_1F_1R_Movement_PushRivalOutOfWay
# 132 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 5, MeteorFalls_1F_1R_Movement_MagmaGrunt1Exit
# 133 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 6, MeteorFalls_1F_1R_Movement_CourtneyExit
# 134 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 135 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	removeobject 5
# 136 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	removeobject 6
# 137 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 11, Common_Movement_FaceDown
# 138 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 7, MeteorFalls_1F_1R_Movement_ArchieApproachPlayer
# 139 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 140 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_12
# 153 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 154 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 8, MeteorFalls_1F_1R_Movement_AquaGrunt1ApproachArchie
# 155 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 9, MeteorFalls_1F_1R_Movement_AquaGrunt2ApproachArchie
# 156 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 157 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_13
# 159 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceFasterDown
# 160 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 161 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_14
# 165 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceFasterLeft
# 166 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 167 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_15
# 170 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 171 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 7, MeteorFalls_1F_1R_Movement_ArchieExit
# 172 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 8, MeteorFalls_1F_1R_Movement_AquaGrunt1Exit
# 173 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 9, MeteorFalls_1F_1R_Movement_AquaGrunt2Exit
# 174 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 175 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	fadedefaultbgm
# 176 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	removeobject 7
# 177 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	removeobject 8
# 178 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	removeobject 9
# 179 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setflag FLAG_HIDE_ROUTE_112_TEAM_MAGMA
# 180 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setflag FLAG_MET_ARCHIE_METEOR_FALLS
# 181 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setflag FLAG_HIDE_FALLARBOR_TOWN_BATTLE_TENT_SCOTT
# 182 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setvar VAR_METEOR_FALLS_STATE, 1
# 183 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp2
# 184 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 185 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	special RemoveCameraObject
# 186 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 11, MeteorFalls_1F_1R_Movement_RivalApproach
# 187 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 188 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	checkplayergender
# 189 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_13
# 198 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_17
MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_12:
# 205 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	giveitem ITEM_SUPER_ROD
# 206 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 207 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 11, MeteorFalls_1F_1R_Movement_ArchieExit
# 208 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 209 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	removeobject 11
# 210 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	releaseall
	end

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_13:
# 190 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_16
	goto MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_12


# 219 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_MagmaGrunt1Exit:
# 220 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 221 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_up
# 221 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_up
# 222 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 222 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 222 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 222 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 222 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 222 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 222 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
	step_end

# 225 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_CourtneyExit:
# 226 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_up
# 226 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_up
# 227 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 227 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 227 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 227 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 227 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 227 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 227 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
	step_end

# 230 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_ArchieArrive:
# 231 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 231 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 231 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 231 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 231 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 231 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
	step_end

# 234 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_AquaGruntArrive:
# 235 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_16
# 236 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_16
# 237 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 237 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 237 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 237 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 237 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
	step_end

# 240 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_ArchieExit:
# 241 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 241 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 241 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 241 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 241 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 241 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 241 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
	step_end

# 244 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_ArchieApproachPlayer:
# 245 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 245 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 246 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 246 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 247 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_left
	step_end

# 250 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_AquaGrunt1Exit:
# 251 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 251 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 252 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 252 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 252 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 252 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 252 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 252 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 252 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
	step_end

# 255 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_AquaGrunt1ApproachArchie:
# 256 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 256 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 256 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 257 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_up
	step_end

# 260 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_AquaGrunt2Exit:
# 261 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 261 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 261 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 262 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 262 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 262 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 262 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 262 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 262 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 262 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
	step_end

# 265 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_AquaGrunt2ApproachArchie:
# 266 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 266 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 266 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 267 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_up
	step_end

# 270 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_PushPlayerOutOfWay:
# 271 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_down
# 272 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_4
# 273 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_right
# 274 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	lock_facing_direction
# 275 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_left
# 276 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	unlock_facing_direction
# 277 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	face_right
	step_end

# 280 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_RivalRunsIn:
# 281 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_left
# 281 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_left
# 281 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_left
# 281 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_left
# 281 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_left
# 281 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_left
	step_end

# 284 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_RivalBeforeBattle:
# 285 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_left
# 286 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_down
	step_end

# 289 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_PushRivalOutOfWay:
# 290 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_down
# 291 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	lock_facing_direction
# 292 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 293 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	unlock_facing_direction
# 294 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_4
# 295 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	face_right
	step_end

# 298 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_RivalApproach:
# 299 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_down
# 300 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_left
	step_end

MeteorFalls_1F_1R_EventScript_ProfCozmo::
# 304 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	lock
# 305 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	faceplayer
# 306 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	goto_if_unset FLAG_MET_PROF_COZMO, MeteorFalls_1F_1R_EventScript_ProfCozmo_2
# 321 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_EventScript_ProfCozmo_Text_1
MeteorFalls_1F_1R_EventScript_ProfCozmo_1:
# 323 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_EventScript_ProfCozmo_Text_2
# 325 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	release
	end

MeteorFalls_1F_1R_EventScript_ProfCozmo_2:
# 307 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_EventScript_ProfCozmo_Text_0
# 318 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setflag FLAG_MET_PROF_COZMO
	goto MeteorFalls_1F_1R_EventScript_ProfCozmo_1


MeteorFalls_EventScript_ChallengeBall1::
# 330 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	lock
# 331 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_EventScript_ChallengeBall1_Text_0, MSGBOX_YESNO
# 332 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MeteorFalls_EventScript_ChallengeBall1_2
MeteorFalls_EventScript_ChallengeBall1_1:
# 346 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	release
	return

MeteorFalls_EventScript_ChallengeBall1_2:
# 333 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setflag FLAG_NO_CATCHING
# 334 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setflag FLAG_NO_RUNNING
# 335 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 336 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setvar VAR_STARTING_STATUS, 1
# 337 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setwildbattle SPECIES_FLOETTE, 31, ITEM_NONE, 2, SPECIES_BELLIBOLT, 31, ITEM_NONE, 0, MOVE_NATURE_POWER, MOVE_SECRET_POWER, MOVE_MAGICAL_LEAF, MOVE_DRAINING_KISS, MOVE_VOLT_SWITCH, MOVE_CHILLING_WATER, MOVE_ACID_SPRAY, MOVE_MUD_SLAP
# 338 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	dowildbattle
# 339 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setvar VAR_STARTING_STATUS, 0
# 340 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	clearflag FLAG_NO_CATCHING
# 341 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	clearflag FLAG_NO_RUNNING
# 342 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 343 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	finditem ITEM_ASSAULT_VEST, 1
# 344 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setwildbattle SPECIES_BULBASAUR, 1
	goto MeteorFalls_EventScript_ChallengeBall1_1


MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_0:
# 35 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Hehehe!\p"
	.string "With this Meteorite, that thing in\n"
	.string "Mt. Chimney will…$"

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_1:
# 47 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Heh?\p"
	.string "I don't know who you are, but if you get\n"
	.string "in the way of Team Magma, don't\l"
	.string "expect any mercy!$"

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_2:
# 56 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Courtney: Hold on…$"

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_3:
# 58 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "I think you're going to need my help.$"

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_4:
# 60 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Tch… fine.$"

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_5:
# 70 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "May: {PLAYER}!\n"
	.string "I'll help you!$"

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_6:
# 74 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Brendan: {PLAYER}!\n"
	.string "I'm with you!$"

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_7:
# 79 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Courtney! Help me here!$"

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_8:
# 92 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Funny… Just a kid…$"

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_9:
# 92 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Ach!\nWe've got the Meteorite, let's just go!$"

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_10:
# 99 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Hold it right there, Team Magma!\p"
	.string "You're badly mistaken if you think you\n"
	.string "can have your way with the world!$"

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_11:
# 119 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Hehehe!\n"
	.string "Even Team Aqua joins us!\p"
	.string "But it's too much trouble to deal with\n"
	.string "you all…\p"
	.string "Heh, it doesn't matter!\p"
	.string "We've got the Meteorite, so off to\n"
	.string "Mt. Chimney we go!\p"
	.string "Hehehe! Be seeing you, you Team\n"
	.string "Aqua dingbats!$"

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_12:
# 140 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Archie: Didn't I see you before?\n"
	.string "At Slateport's Museum?\p"
	.string "Ah, so your name is {PLAYER}.\p"
	.string "At the time, I thought you were one\n"
	.string "of Team Magma's goons.\p"
	.string "Humph…\n"
	.string "You're one odd kid.\p"
	.string "Team Magma is a dangerous group of\n"
	.string "total fanatics.\p"
	.string "They engage in destruction, claiming\n"
	.string "to expand the land mass.\p"
	.string "They are the rivals to us,\n"
	.string "the sea-loving Team Aqua!$"

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_13:
# 157 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Boss, we should give chase to\n"
	.string "Team Magma…$"

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_14:
# 161 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Archie: Yes, yes, we must!\n"
	.string "We've got to hurry.\p"
	.string "There's no telling what Team Magma\n"
	.string "will do at Mt. Chimney!$"

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_15:
# 167 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Archie: {PLAYER}, you should keep\n"
	.string "an eye out for Team Magma, too.\p"
	.string "Farewell!$"

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_16:
# 190 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "May: Are you ok?\n"
	.string "That was scary…\p"
	.string "What could that Team Magma be after?\n"
	.string "If you're planning on going after\l"
	.string "them, please be careful."
	.string "Here, maybe this will help you.$"

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_17:
# 198 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Brendan: You're good, right?\n"
	.string "That could have gone bad…\p"
	.string "Team Magma… What do they want?\n"
	.string "They said, Mt. Chimney…\l"
	.string "If you're heading there, be safe."
	.string "I think you'll be needing this$"

MeteorFalls_1F_1R_EventScript_ProfCozmo_Text_0:
# 307 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "I… I'm Cozmo…\n"
	.string "I'm a Professor…\p"
	.string "Team Magma asked me to guide them\n"
	.string "to Meteor Falls…\p"
	.string "But they tricked me.\n"
	.string "They even took my Meteorite away…\p"
	.string "And then another similar bunch,\n"
	.string "Team Aqua showed up.\p"
	.string "After that…\n"
	.string "I don't understand any of it.\p"
	.string "But that Team Magma…$"

MeteorFalls_1F_1R_EventScript_ProfCozmo_Text_1:
# 321 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Prof. Cozmo: But that Team Magma…$"

MeteorFalls_1F_1R_EventScript_ProfCozmo_Text_2:
# 323 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "What are they going to do with that\n"
	.string "Meteorite at Mt. Chimney?$"

MeteorFalls_EventScript_ChallengeBall1_Text_0:
# 331 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "You feel static running across the\n"
	.string "ground.\p"
	.string "Reach out for the item?$"
