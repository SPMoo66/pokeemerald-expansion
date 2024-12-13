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
	speakername CommonText_MagmaGrunt
# 36 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_0
# 39 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 40 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceFasterUp
# 41 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterUp
# 42 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 43 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	playse SE_PIN
# 44 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 5, Common_Movement_ExclamationMark
# 45 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 46 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 5, Common_Movement_Delay48
# 47 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 48 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	speakername CommonText_MagmaGrunt
# 49 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_1
# 53 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 54 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 5, Common_Movement_WalkRight
# 55 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 56 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceUp
# 57 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 58 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	speakername CommonText_Courtney
# 59 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_2
# 60 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceDown
# 61 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	speakername CommonText_Courtney
# 62 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_3
# 63 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 64 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	speakername CommonText_MagmaGrunt
# 65 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_4
# 66 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceRight
# 67 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 68 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 69 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 70 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	addobject 11
# 71 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 11, MeteorFalls_1F_1R_Movement_RivalRunsIn
# 72 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 73 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	checkplayergender
# 74 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_2
# 80 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	speakername CommonText_Brendan
# 81 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_6
MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_1:
# 84 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceRight
# 85 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 86 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	speakername CommonText_MagmaGrunt
# 87 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_7
# 88 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 89 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 11, MeteorFalls_1F_1R_Movement_RivalBeforeBattle
# 90 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceUp
# 91 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 6, Common_Movement_WalkUp2
# 92 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 93 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	special RemoveCameraObject
# 94 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	special SavePlayerParty
# 95 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	fadescreen FADE_TO_BLACK
# 96 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	special ChooseHalfPartyForBattle
# 97 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitstate
# 98 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	checkplayergender
# 99 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_6
# 103 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	multi_2_vs_2 TRAINER_COURTNEY_METEOR_FALLS, MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_8, TRAINER_MAGMA_GRUNT_METEOR_FALLS, MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_9, PARTNER_BRENDAN_METEOR_FALLS
MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_5:
# 105 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	switch VAR_RESULT
# 106 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	case 1, MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_10
# 229 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	fadescreen FADE_TO_BLACK
# 230 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	special SetCB2WhiteOut
# 231 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitstate
	return

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_2:
# 75 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	speakername CommonText_May
# 76 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_5
	goto MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_1

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_6:
# 100 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	multi_2_vs_2 TRAINER_COURTNEY_METEOR_FALLS, MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_8, TRAINER_MAGMA_GRUNT_METEOR_FALLS, MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_9, PARTNER_MAY_METEOR_FALLS
	goto MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_5

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_10:
# 107 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	speakername CommonText_Q
# 108 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_10
# 111 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 112 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 113 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceFasterLeft
# 114 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterLeft
# 115 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 11, Common_Movement_WalkInPlaceFasterLeft
# 116 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 117 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	addobject 7
# 118 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	addobject 8
# 119 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	addobject 9
# 120 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 121 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 7, Common_Movement_WalkRight6
# 122 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 8, MeteorFalls_1F_1R_Movement_AquaGruntArrive
# 123 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 9, MeteorFalls_1F_1R_Movement_AquaGruntArrive
# 124 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 125 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceFasterLeft
# 126 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 127 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	special SpawnCameraObject
# 128 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	speakername CommonText_MagmaGrunt
# 129 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_11
# 138 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 139 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MeteorFalls_1F_1R_Movement_PushPlayerOutOfWay
# 140 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MeteorFalls_1F_1R_Movement_PushPlayerOutOfWay
# 141 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 11, MeteorFalls_1F_1R_Movement_PushRivalOutOfWay
# 142 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 5, MeteorFalls_1F_1R_Movement_MagmaGrunt1Exit
# 143 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 6, MeteorFalls_1F_1R_Movement_CourtneyExit
# 144 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 145 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	removeobject 5
# 146 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	removeobject 6
# 147 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 11, Common_Movement_FaceDown
# 148 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 7, MeteorFalls_1F_1R_Movement_ArchieApproachPlayer
# 149 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 150 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	speakername CommonText_Archie
# 151 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_12
# 164 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 165 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 8, MeteorFalls_1F_1R_Movement_AquaGrunt1ApproachArchie
# 166 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 9, MeteorFalls_1F_1R_Movement_AquaGrunt2ApproachArchie
# 167 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 168 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	speakername CommonText_AquaGrunt
# 169 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_13
# 171 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceFasterDown
# 172 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 173 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	speakername CommonText_Archie
# 174 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_14
# 178 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceFasterLeft
# 179 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 180 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	speakername CommonText_Archie
# 181 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_15
# 184 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 185 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 7, Common_Movement_WalkRight7
# 186 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 8, MeteorFalls_1F_1R_Movement_AquaGrunt1Exit
# 187 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 9, MeteorFalls_1F_1R_Movement_AquaGrunt2Exit
# 188 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 189 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	fadedefaultbgm
# 190 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	removeobject 7
# 191 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	removeobject 8
# 192 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	removeobject 9
# 193 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setflag FLAG_HIDE_ROUTE_112_TEAM_MAGMA
# 194 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setflag FLAG_MET_ARCHIE_METEOR_FALLS
# 195 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setflag FLAG_HIDE_FALLARBOR_TOWN_BATTLE_TENT_SCOTT
# 196 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setvar VAR_METEOR_FALLS_STATE, 1
# 197 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp2
# 198 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 199 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	special RemoveCameraObject
# 200 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 11, MeteorFalls_1F_1R_Movement_RivalApproach
# 201 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 202 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	checkplayergender
# 203 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_13
# 213 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	speakername CommonText_Brendan
# 214 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_17
MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_12:
# 221 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	giveitem ITEM_BOTTLE_CAP
# 222 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 223 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 11, Common_Movement_WalkRight7
# 224 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 225 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	removeobject 11
# 226 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	releaseall
	end

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_13:
# 204 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	speakername CommonText_May
# 205 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_16
	goto MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_12


# 235 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_MagmaGrunt1Exit:
# 236 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 237 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_up
# 237 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_up
# 238 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 238 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 238 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 238 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 238 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 238 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 238 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
	step_end

# 241 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_CourtneyExit:
# 242 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_up
# 242 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_up
# 243 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 243 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 243 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 243 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 243 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 243 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 243 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
	step_end

# 246 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_AquaGruntArrive:
# 247 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_16
# 248 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_16
# 249 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 249 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 249 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 249 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 249 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
	step_end

# 252 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_ArchieApproachPlayer:
# 253 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 253 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 254 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 254 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 255 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_left
	step_end

# 258 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_AquaGrunt1Exit:
# 259 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 259 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 260 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 260 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 260 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 260 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 260 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 260 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 260 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
	step_end

# 263 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_AquaGrunt1ApproachArchie:
# 264 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 264 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 264 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 265 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_up
	step_end

# 268 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_AquaGrunt2Exit:
# 269 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 269 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 269 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 270 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 270 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 270 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 270 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 270 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 270 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 270 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
	step_end

# 273 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_AquaGrunt2ApproachArchie:
# 274 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 274 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 274 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 275 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_up
	step_end

# 278 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_PushPlayerOutOfWay:
# 279 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_down
# 280 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_4
# 281 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_right
# 282 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	lock_facing_direction
# 283 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_left
# 284 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	unlock_facing_direction
# 285 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	face_right
	step_end

# 288 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_RivalRunsIn:
# 289 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_left
# 289 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_left
# 289 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_left
# 289 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_left
# 289 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_left
# 289 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_left
	step_end

# 292 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_RivalBeforeBattle:
# 293 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_left
# 294 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_down
	step_end

# 297 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_PushRivalOutOfWay:
# 298 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_down
# 299 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	lock_facing_direction
# 300 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 301 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	unlock_facing_direction
# 302 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_4
# 303 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	face_right
	step_end

# 306 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_RivalApproach:
# 307 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_down
# 308 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_left
	step_end

MeteorFalls_1F_1R_EventScript_ProfCozmo::
# 312 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	lock
# 313 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	faceplayer
# 314 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	goto_if_unset FLAG_MET_PROF_COZMO, MeteorFalls_1F_1R_EventScript_ProfCozmo_2
# 329 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	speakername CommonText_Cozmo
# 330 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_EventScript_ProfCozmo_Text_1
MeteorFalls_1F_1R_EventScript_ProfCozmo_1:
# 332 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_EventScript_ProfCozmo_Text_2
# 334 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	release
	end

MeteorFalls_1F_1R_EventScript_ProfCozmo_2:
# 315 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_EventScript_ProfCozmo_Text_0
# 326 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setflag FLAG_MET_PROF_COZMO
	goto MeteorFalls_1F_1R_EventScript_ProfCozmo_1


MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_0:
# 36 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Hehehe!\p"
	.string "With this Meteorite, that thing in\n"
	.string "Mt. Chimney will…$"

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_1:
# 49 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Heh?\p"
	.string "I don't know who you are, but if you get\n"
	.string "in the way of Team Magma, don't\l"
	.string "expect any mercy!$"

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_2:
# 59 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Hold on…$"

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_3:
# 62 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "I think you're going to need my help.$"

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_4:
# 65 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Tch… fine.$"

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_5:
# 76 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "{PLAYER}!\n"
	.string "I'll help you!$"

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_6:
# 81 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "{PLAYER}!\n"
	.string "I'm with you!$"

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_7:
# 87 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Courtney! Help me here!$"

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_8:
# 100 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Funny… Just a kid…$"

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_9:
# 100 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Ach!\nWe've got the Meteorite, let's just go!$"

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_10:
# 108 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Hold it right there, Team Magma!\p"
	.string "You're badly mistaken if you think you\n"
	.string "can have your way with the world!$"

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_11:
# 129 "data/maps/MeteorFalls_1F_1R/scripts.pory"
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
# 151 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Didn't I see you before?\n"
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
# 169 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Boss, we should give chase to\n"
	.string "Team Magma…$"

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_14:
# 174 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Yes, yes, we must!\n"
	.string "We've got to hurry.\p"
	.string "There's no telling what Team Magma\n"
	.string "will do at Mt. Chimney!$"

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_15:
# 181 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "{PLAYER}, you should keep\n"
	.string "an eye out for Team Magma, too.\p"
	.string "Farewell!$"

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_16:
# 205 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Are you ok?\n"
	.string "That was scary…\p"
	.string "What could that Team Magma be after?\n"
	.string "If you're planning on going after\l"
	.string "them, please be careful."
	.string "Here, maybe this will help you.$"

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_17:
# 214 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "You're good, right?\n"
	.string "That could have gone bad…\p"
	.string "Team Magma… What do they want?\n"
	.string "They said, Mt. Chimney…\l"
	.string "If you're heading there, be safe."
	.string "I think you'll be needing this$"

MeteorFalls_1F_1R_EventScript_ProfCozmo_Text_0:
# 315 "data/maps/MeteorFalls_1F_1R/scripts.pory"
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
# 330 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "But that Team Magma…$"

MeteorFalls_1F_1R_EventScript_ProfCozmo_Text_2:
# 332 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "What are they going to do with that\n"
	.string "Meteorite at Mt. Chimney?$"
