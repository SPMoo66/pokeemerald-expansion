MeteorFalls_1F_1R_MapScripts::
# 9 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, MeteorFalls_1F_1R_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

MeteorFalls_1F_1R_MapScripts_MAP_SCRIPT_ON_LOAD:
# 10 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, MeteorFalls_1F_1R_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

MeteorFalls_1F_1R_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 11 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setmetatile 4, 1, METATILE_MeteorFalls_CaveEntrance_Top, TRUE
# 12 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setmetatile 3, 2, METATILE_MeteorFalls_CaveEntrance_Left, TRUE
# 13 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setmetatile 4, 2, METATILE_MeteorFalls_CaveEntrance_Bottom, FALSE
# 14 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setmetatile 5, 2, METATILE_MeteorFalls_CaveEntrance_Right, TRUE
	return


MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene::
# 20 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	lockall
# 21 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 22 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	special SpawnCameraObject
# 23 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown2
# 24 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 25 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 26 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay 30
# 27 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 8, Common_Movement_WalkInPlaceDown
# 28 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 29 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_0
# 32 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 33 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceFasterUp
# 34 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterUp
# 35 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 36 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	playse SE_PIN
# 37 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 5, Common_Movement_ExclamationMark
# 38 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 39 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 5, Common_Movement_Delay48
# 40 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 41 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_1
# 45 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 46 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 5, Common_Movement_WalkRight
# 47 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 48 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceUp
# 49 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 50 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_2
# 51 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceDown
# 52 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_3
# 53 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 54 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_4
# 55 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceRight
# 56 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 57 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 58 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 59 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	addobject 11
# 60 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 11, MeteorFalls_1F_1R_Movement_RivalRunsIn
# 61 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 62 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	checkplayergender
# 63 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_2
# 68 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_6
MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_1:
# 71 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceRight
# 72 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 73 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_7
# 74 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 75 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 11, MeteorFalls_1F_1R_Movement_RivalBeforeBattle
# 76 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceUp
# 77 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 6, Common_Movement_WalkUp2
# 78 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 79 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	special RemoveCameraObject
# 80 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	special SavePlayerParty
# 81 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	fadescreen FADE_TO_BLACK
# 82 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	special ChooseHalfPartyForBattle
# 83 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitstate
# 84 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	checkplayergender
# 85 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_6
# 89 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	multi_2_vs_2 TRAINER_COURTNEY_METEOR_FALLS, MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_8, TRAINER_MAGMA_GRUNT_METEOR_FALLS, MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_9, PARTNER_BRENDAN_METEOR_FALLS, TRAINER_BACK_PIC_BRENDAN
MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_5:
# 91 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	switch VAR_RESULT
# 92 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	case 1, MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_10
# 204 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	fadescreen FADE_TO_BLACK
# 205 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	special SetCB2WhiteOut
# 206 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitstate
	return

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_2:
# 64 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_5
	goto MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_1

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_6:
# 86 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	multi_2_vs_2 TRAINER_COURTNEY_METEOR_FALLS, MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_8, TRAINER_MAGMA_GRUNT_METEOR_FALLS, MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_9, PARTNER_MAY_METEOR_FALLS, TRAINER_BACK_PIC_MAY
	goto MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_5

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_10:
# 93 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_10
# 96 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 97 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 98 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceFasterLeft
# 99 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterLeft
# 100 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 11, Common_Movement_WalkInPlaceFasterLeft
# 101 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 102 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	addobject 7
# 103 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	addobject 8
# 104 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	addobject 9
# 105 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 106 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 7, MeteorFalls_1F_1R_Movement_ArchieArrive
# 107 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 8, MeteorFalls_1F_1R_Movement_AquaGruntArrive
# 108 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 9, MeteorFalls_1F_1R_Movement_AquaGruntArrive
# 109 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 110 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceFasterLeft
# 111 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 112 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	special SpawnCameraObject
# 113 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_11
# 122 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 123 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MeteorFalls_1F_1R_Movement_PushPlayerOutOfWay
# 124 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MeteorFalls_1F_1R_Movement_PushPlayerOutOfWay
# 125 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 11, MeteorFalls_1F_1R_Movement_PushRivalOutOfWay
# 126 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 5, MeteorFalls_1F_1R_Movement_MagmaGrunt1Exit
# 127 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 6, MeteorFalls_1F_1R_Movement_CourtneyExit
# 128 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 129 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	removeobject 5
# 130 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	removeobject 6
# 131 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 11, Common_Movement_FaceDown
# 132 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 7, MeteorFalls_1F_1R_Movement_ArchieApproachPlayer
# 133 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 134 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_12
# 147 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 148 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 8, MeteorFalls_1F_1R_Movement_AquaGrunt1ApproachArchie
# 149 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 9, MeteorFalls_1F_1R_Movement_AquaGrunt2ApproachArchie
# 150 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 151 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_13
# 153 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceFasterDown
# 154 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 155 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_14
# 159 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceFasterLeft
# 160 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 161 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_15
# 164 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 165 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 7, MeteorFalls_1F_1R_Movement_ArchieExit
# 166 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 8, MeteorFalls_1F_1R_Movement_AquaGrunt1Exit
# 167 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 9, MeteorFalls_1F_1R_Movement_AquaGrunt2Exit
# 168 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 169 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	fadedefaultbgm
# 170 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	removeobject 7
# 171 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	removeobject 8
# 172 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	removeobject 9
# 173 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setflag FLAG_HIDE_ROUTE_112_TEAM_MAGMA
# 174 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setflag FLAG_MET_ARCHIE_METEOR_FALLS
# 175 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setflag FLAG_HIDE_FALLARBOR_TOWN_BATTLE_TENT_SCOTT
# 176 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setvar VAR_METEOR_FALLS_STATE, 1
# 177 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp2
# 178 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 179 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	special RemoveCameraObject
# 180 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 11, MeteorFalls_1F_1R_Movement_RivalApproach
# 181 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 182 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	checkplayergender
# 183 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_13
# 191 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_17
MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_12:
# 197 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 198 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 11, MeteorFalls_1F_1R_Movement_ArchieExit
# 199 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 200 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	removeobject 11
# 201 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	releaseall
	end

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_13:
# 184 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_16
	goto MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_12


# 210 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_MagmaGrunt1Exit:
# 211 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 212 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_up
# 212 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_up
# 213 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 213 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 213 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 213 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 213 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 213 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 213 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
	step_end

# 216 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_CourtneyExit:
# 217 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_up
# 217 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_up
# 218 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 218 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 218 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 218 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 218 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 218 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 218 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
	step_end

# 221 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_ArchieArrive:
# 222 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 222 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 222 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 222 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 222 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 222 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
	step_end

# 225 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_AquaGruntArrive:
# 226 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_16
# 227 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_16
# 228 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 228 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 228 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 228 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 228 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
	step_end

# 231 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_ArchieExit:
# 232 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 232 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 232 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 232 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 232 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 232 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 232 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
	step_end

# 235 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_ArchieApproachPlayer:
# 236 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 236 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 237 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 237 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 238 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_left
	step_end

# 241 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_AquaGrunt1Exit:
# 242 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 242 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 243 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 243 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 243 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 243 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 243 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 243 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 243 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
	step_end

# 246 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_AquaGrunt1ApproachArchie:
# 247 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 247 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 247 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 248 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_up
	step_end

# 251 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_AquaGrunt2Exit:
# 252 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 252 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 252 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 253 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 253 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 253 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 253 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 253 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 253 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 253 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
	step_end

# 256 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_AquaGrunt2ApproachArchie:
# 257 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 257 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 257 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 258 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_up
	step_end

# 261 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_PushPlayerOutOfWay:
# 262 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_down
# 263 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_4
# 264 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_right
# 265 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	lock_facing_direction
# 266 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_left
# 267 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	unlock_facing_direction
# 268 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	face_right
	step_end

# 271 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_RivalRunsIn:
# 272 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_left
# 272 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_left
# 272 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_left
# 272 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_left
# 272 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_left
# 272 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_left
	step_end

# 275 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_RivalBeforeBattle:
# 276 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_left
# 277 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_down
	step_end

# 280 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_PushRivalOutOfWay:
# 281 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_down
# 282 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	lock_facing_direction
# 283 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 284 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	unlock_facing_direction
# 285 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_4
# 286 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	face_right
	step_end

# 289 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_RivalApproach:
# 290 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_down
# 291 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_left
	step_end

MeteorFalls_1F_1R_EventScript_ProfCozmo::
# 295 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	lock
# 296 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	faceplayer
# 297 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	goto_if_unset FLAG_MET_PROF_COZMO, MeteorFalls_1F_1R_EventScript_ProfCozmo_2
# 312 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_EventScript_ProfCozmo_Text_1
MeteorFalls_1F_1R_EventScript_ProfCozmo_1:
# 314 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_EventScript_ProfCozmo_Text_2
# 316 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	release
	end

MeteorFalls_1F_1R_EventScript_ProfCozmo_2:
# 298 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_EventScript_ProfCozmo_Text_0
# 309 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setflag FLAG_MET_PROF_COZMO
	goto MeteorFalls_1F_1R_EventScript_ProfCozmo_1


MeteorFalls_EventScript_ChallengeBall1::
# 321 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	lock
# 322 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_EventScript_ChallengeBall1_Text_0, MSGBOX_YESNO
# 323 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MeteorFalls_EventScript_ChallengeBall1_2
MeteorFalls_EventScript_ChallengeBall1_1:
# 336 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	release
	return

MeteorFalls_EventScript_ChallengeBall1_2:
# 324 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setflag FLAG_NO_CATCHING
# 325 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setflag FLAG_NO_RUNNING
# 326 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 327 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setvar VAR_STARTING_STATUS, 1
# 328 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setwildbattle SPECIES_FLOETTE, 28, ITEM_NONE, 2, SPECIES_BELLIBOLT, 28, ITEM_NONE, 0, MOVE_NATURE_POWER, MOVE_SECRET_POWER, MOVE_MAGICAL_LEAF, MOVE_DRAINING_KISS, MOVE_VOLT_SWITCH, MOVE_CHILLING_WATER, MOVE_ACID_SPRAY, MOVE_MUD_SLAP
# 329 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	dowildbattle
# 330 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setvar VAR_STARTING_STATUS, 0
# 331 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	clearflag FLAG_NO_CATCHING
# 332 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	clearflag FLAG_NO_RUNNING
# 333 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 334 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	finditem ITEM_ASSAULT_VEST, 1
	goto MeteorFalls_EventScript_ChallengeBall1_1


MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_0:
# 29 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Hehehe!\p"
	.string "With this Meteorite, that thing in\n"
	.string "Mt. Chimney will…$"

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_1:
# 41 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Heh?\p"
	.string "I don't know who you are, but if you get\n"
	.string "in the way of Team Magma, don't\l"
	.string "expect any mercy!$"

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_2:
# 50 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Courtney: Hold on…$"

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_3:
# 52 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "I think you're going to need my help.$"

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_4:
# 54 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Tch… fine.$"

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_5:
# 64 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "May: {PLAYER}!\n"
	.string "I'll help you!$"

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_6:
# 68 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Brendan: {PLAYER}!\n"
	.string "I'm with you!$"

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_7:
# 73 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Courtney! Help me here!$"

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_8:
# 86 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Funny… Just a kid…$"

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_9:
# 86 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Ach!\nWe've got the Meteorite, let's just go!$"

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_10:
# 93 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Hold it right there, Team Magma!\p"
	.string "You're badly mistaken if you think you\n"
	.string "can have your way with the world!$"

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_11:
# 113 "data/maps/MeteorFalls_1F_1R/scripts.pory"
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
# 134 "data/maps/MeteorFalls_1F_1R/scripts.pory"
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
# 151 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Boss, we should give chase to\n"
	.string "Team Magma…$"

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_14:
# 155 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Archie: Yes, yes, we must!\n"
	.string "We've got to hurry.\p"
	.string "There's no telling what Team Magma\n"
	.string "will do at Mt. Chimney!$"

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_15:
# 161 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Archie: {PLAYER}, you should keep\n"
	.string "an eye out for Team Magma, too.\p"
	.string "Farewell!$"

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_16:
# 184 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "May: Are you ok?\n"
	.string "That was scary…\p"
	.string "What could that Team Magma be after?\n"
	.string "If you're planning on going after\l"
	.string "them, please be careful.$"

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_17:
# 191 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Brendan: You're good, right?\n"
	.string "That could have gone bad…\p"
	.string "Team Magma… What do they want?\n"
	.string "They said, Mt. Chimney…\l"
	.string "If you're heading there, be safe.$"

MeteorFalls_1F_1R_EventScript_ProfCozmo_Text_0:
# 298 "data/maps/MeteorFalls_1F_1R/scripts.pory"
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
# 312 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Prof. Cozmo: But that Team Magma…$"

MeteorFalls_1F_1R_EventScript_ProfCozmo_Text_2:
# 314 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "What are they going to do with that\n"
	.string "Meteorite at Mt. Chimney?$"

MeteorFalls_EventScript_ChallengeBall1_Text_0:
# 322 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "You feel static running across the\n"
	.string "ground.\p"
	.string "Reach out for the item?$"
