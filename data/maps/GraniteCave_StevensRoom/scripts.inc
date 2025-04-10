GraniteCave_StevensRoom_MapScripts::
# 6 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, GraniteCave_StevensRoom_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

GraniteCave_StevensRoom_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 7 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setflag FLAG_TEMP_1
	return


GraniteCave_StevensRoom_EventScript_Steven::
# 12 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	lock
# 13 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	faceplayer
# 14 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	speakername CommonText_Steven
# 15 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_Text_ImStevenLetterForMe
# 16 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	closemessage
# 17 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setvar VAR_0x8004, ITEM_LETTER
# 18 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	call Common_EventScript_PlayerHandedOverTheItem
# 19 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	speakername CommonText_Steven
# 20 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_Text_ThankYouTakeThis
# 21 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	closemessage
# 22 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	speakername CommonText_Q
# 23 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_EventScript_Steven_Text_0
# 24 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	closemessage
# 25 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 26 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	special SpawnCameraObject
# 27 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	compare VAR_TEMP_1, 8
	goto_if_eq GraniteCave_StevensRoom_EventScript_Steven_2
# 31 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	compare VAR_TEMP_1, 9
	goto_if_eq GraniteCave_StevensRoom_EventScript_Steven_3
GraniteCave_StevensRoom_EventScript_Steven_1:
# 35 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	playse SE_PIN
# 36 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 37 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 38 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay 30
# 39 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 40 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	playse SE_EXIT
# 41 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	addobject 2
# 42 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	compare VAR_FACING, DIR_SOUTH
	goto_if_ne GraniteCave_StevensRoom_EventScript_Steven_7
GraniteCave_StevensRoom_EventScript_Steven_6:
# 45 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	compare VAR_FACING, DIR_NORTH
	goto_if_ne GraniteCave_StevensRoom_EventScript_Steven_10
GraniteCave_StevensRoom_EventScript_Steven_9:
# 48 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement 2, Common_Movement_WalkDown2
# 49 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitmovement 0
# 50 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	playse SE_EXIT
# 51 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	addobject 3
# 52 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement 2, GraniteCave_MagmaF_Enter
# 53 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement 3, Common_Movement_WalkDown2
# 54 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitmovement 0
# 55 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	speakername CommonText_MagmaGrunt
# 56 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_EventScript_Steven_Text_1
# 57 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	speakername CommonText_Steven
# 58 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_EventScript_Steven_Text_2
# 61 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	switch VAR_TEMP_1
# 62 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	case 7, GraniteCave_StevensRoom_EventScript_Steven_14
# 64 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	case 8, GraniteCave_StevensRoom_EventScript_Steven_15
# 71 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	case 9, GraniteCave_StevensRoom_EventScript_Steven_16
GraniteCave_StevensRoom_EventScript_Steven_12:
# 75 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitmovement 0
# 76 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay 30
# 77 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	playse SE_PIN
# 78 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 79 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay 30
# 80 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement 1, Common_Movement_WalkFastUp
# 81 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	compare VAR_TEMP_1, 7
	goto_if_eq GraniteCave_StevensRoom_EventScript_Steven_18
GraniteCave_StevensRoom_EventScript_Steven_17:
# 85 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitmovement 0
# 86 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	speakername CommonText_Steven
# 87 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_EventScript_Steven_Text_3
# 90 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	compare VAR_TEMP_1, 8
	goto_if_eq GraniteCave_StevensRoom_EventScript_Steven_24
# 93 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	compare VAR_TEMP_1, 9
	goto_if_eq GraniteCave_StevensRoom_EventScript_Steven_25
GraniteCave_StevensRoom_EventScript_Steven_23:
# 97 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitmovement 0
# 98 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	special RemoveCameraObject
# 99 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	special SavePlayerParty
# 100 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	fadescreen FADE_TO_BLACK
# 101 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	special ChooseHalfPartyForBattle
# 102 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitstate
# 103 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	multi_2_vs_2 TRAINER_MAGMA_GRUNT_F_GRANITE_CAVE, GraniteCave_StevensRoom_EventScript_Steven_Text_4, TRAINER_MAGMA_GRUNT_M_GRANITE_CAVE, GraniteCave_StevensRoom_EventScript_Steven_Text_5, PARTNER_STEVEN_GRANITE_CAVE
# 105 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq GraniteCave_StevensRoom_EventScript_Steven_28
# 188 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	fadescreen FADE_TO_BLACK
# 189 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	special SetCB2WhiteOut
# 190 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitstate
	return

GraniteCave_StevensRoom_EventScript_Steven_2:
# 28 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 29 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitmovement 0
	goto GraniteCave_StevensRoom_EventScript_Steven_1

GraniteCave_StevensRoom_EventScript_Steven_3:
# 32 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp2
# 33 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitmovement 0
	goto GraniteCave_StevensRoom_EventScript_Steven_1

GraniteCave_StevensRoom_EventScript_Steven_7:
# 43 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterUp
	goto GraniteCave_StevensRoom_EventScript_Steven_6

GraniteCave_StevensRoom_EventScript_Steven_10:
# 46 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
	goto GraniteCave_StevensRoom_EventScript_Steven_9

GraniteCave_StevensRoom_EventScript_Steven_14:
# 63 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterUp
	goto GraniteCave_StevensRoom_EventScript_Steven_12

GraniteCave_StevensRoom_EventScript_Steven_15:
# 65 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	compare VAR_TEMP_0, 5
	goto_if_eq GraniteCave_StevensRoom_EventScript_Steven_20
# 69 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterRight
	goto GraniteCave_StevensRoom_EventScript_Steven_12

GraniteCave_StevensRoom_EventScript_Steven_16:
# 72 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterDown
	goto GraniteCave_StevensRoom_EventScript_Steven_12

GraniteCave_StevensRoom_EventScript_Steven_18:
# 82 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GraniteCave_PlayerPushed
# 83 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkLeft
	goto GraniteCave_StevensRoom_EventScript_Steven_17

GraniteCave_StevensRoom_EventScript_Steven_20:
# 66 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterLeft
	goto GraniteCave_StevensRoom_EventScript_Steven_12

GraniteCave_StevensRoom_EventScript_Steven_24:
# 91 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkFastUp
	goto GraniteCave_StevensRoom_EventScript_Steven_23

GraniteCave_StevensRoom_EventScript_Steven_25:
# 94 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GraniteCave_PlayerRunUp
# 95 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkLeft
	goto GraniteCave_StevensRoom_EventScript_Steven_23

GraniteCave_StevensRoom_EventScript_Steven_28:
# 106 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement 2, Common_Movement_FaceRight
# 107 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceFasterLeft
# 108 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitmovement 0
# 109 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	speakername CommonText_MagmaGrunt
# 110 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_EventScript_Steven_Text_6
# 111 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterRight
# 112 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitmovement 0
# 113 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_EventScript_Steven_Text_7
# 114 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceFasterLeft
# 115 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitmovement 0
# 116 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_EventScript_Steven_Text_8
# 119 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	closemessage
# 120 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay 20
# 121 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement 3, Common_Movement_WalkFastUp2
# 122 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitmovement 0
# 123 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	playse SE_EXIT
# 124 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	removeobject 3
# 125 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay 30
# 126 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceDown
# 127 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitmovement 0
# 128 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay 30
# 129 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	playse SE_PIN
# 130 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 131 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay 30
# 132 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterUp
# 133 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitmovement 0
# 134 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	speakername CommonText_MagmaGrunt
# 135 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_EventScript_Steven_Text_9
# 136 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	closemessage
# 137 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement 2, GraniteCave_MagmaF_Exit
# 138 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitmovement 0
# 139 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	playse SE_EXIT
# 140 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	removeobject 2
# 141 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay 30
# 142 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	speakername CommonText_Steven
# 143 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_EventScript_Steven_Text_10
# 144 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	closemessage
# 145 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 146 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	compare VAR_TEMP_0, 5
	goto_if_eq GraniteCave_StevensRoom_EventScript_Steven_32
# 151 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterRight
# 152 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
GraniteCave_StevensRoom_EventScript_Steven_31:
# 154 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	speakername CommonText_Steven
# 155 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_EventScript_Steven_Text_11
# 168 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	closemessage
# 169 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay 30
# 170 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 171 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	bufferstring STR_VAR_2, CommonText_Steven
# 172 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox Text_RegisteredInPokenav_OneInput
# 173 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitfanfare
# 174 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	closemessage
# 175 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay 30
# 176 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setflag FLAG_REGISTERED_STEVEN_POKENAV
# 177 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setflag FLAG_DELIVERED_STEVEN_LETTER
# 178 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	speakername CommonText_Steven
# 179 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_Text_IveGotToHurryAlong
# 180 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	closemessage
# 181 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement 1, GraniteCave_StevensRoom_Movement_StevenExit
# 182 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitmovement 0
# 183 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	playse SE_EXIT
# 184 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	removeobject 1
# 185 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	release
	return

GraniteCave_StevensRoom_EventScript_Steven_32:
# 147 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterLeft
# 148 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	goto GraniteCave_StevensRoom_EventScript_Steven_31


# 195 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Movement_StevenExit:
# 196 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 196 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 196 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 196 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 197 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay_8
	step_end

# 200 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Movement_PlayerTurnTowardExit:
# 201 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay_16
# 201 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay_16
# 201 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay_16
# 202 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_in_place_faster_up
	step_end

# 205 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_MagmaF_Enter:
# 206 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_left
# 207 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_in_place_down
	step_end

# 210 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_PlayerPushed:
# 211 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	lock_facing_direction
# 212 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_fast_left
	step_end

# 215 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_PlayerRunUp:
# 216 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_fast_left
# 217 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_fast_up
# 217 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_fast_up
	step_end

# 220 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_MagmaF_Exit:
# 221 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_fast_up
# 222 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_fast_right
# 223 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_fast_up
	step_end

GraniteCave_StevensRoom_EventScript_Steven_Text_0:
# 23 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Hold it!$"

GraniteCave_StevensRoom_EventScript_Steven_Text_1:
# 56 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Hand over those Devon Goods, now!$"

GraniteCave_StevensRoom_EventScript_Steven_Text_2:
# 58 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Devon Goods?\n"
	.string "I have nothing of the sort.\p"
	.string "Unless…$"

GraniteCave_StevensRoom_EventScript_Steven_Text_3:
# 87 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "{PLAYER}!\n"
	.string "Let me take care of-!!\p"
	.string "No, help me with this!$"

GraniteCave_StevensRoom_EventScript_Steven_Text_4:
# 103 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Wh-what??$"

GraniteCave_StevensRoom_EventScript_Steven_Text_5:
# 103 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Tch…\nYou told me we could handle this!$"

GraniteCave_StevensRoom_EventScript_Steven_Text_6:
# 110 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "You never told me HE would be here!$"

GraniteCave_StevensRoom_EventScript_Steven_Text_7:
# 113 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "I-I didn't know either!\p"
	.string "We were just following the kid, right?$"

GraniteCave_StevensRoom_EventScript_Steven_Text_8:
# 116 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Well, you know what to do in this\n"
	.string "situation…\p"
	.string "… … …\n"
	.string "Run!$"

GraniteCave_StevensRoom_EventScript_Steven_Text_9:
# 135 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Ah-ahh!\nWait for me!$"

GraniteCave_StevensRoom_EventScript_Steven_Text_10:
# 143 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "… … …$"

GraniteCave_StevensRoom_EventScript_Steven_Text_11:
# 155 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Well then.\p"
	.string "As entertaining as those two\n"
	.string "characters were, they were a part of\l"
	.string "Team Magma.\p"
	.string "You may not be from Hoenn, so I'll let\n"
	.string "you know that they're incredibly\l"
	.string "dangerous.\p"
	.string "At least, they usually are…\p"
	.string "You handled yourself well there, and\n"
	.string "your Pokémon appear quite capable.\p"
	.string "If you keep training, you could even\n"
	.string "become the Champion of the Pokémon\l"
	.string "League one day. That's what I think.\p"
	.string "Still, be very wary of those types of\n"
	.string "people.\p"
	.string "I know, since we've gotten to know each\n"
	.string "other, let's register one another in\l"
	.string "our Pokénavs.\p"
	.string "… … … … … …$"

GraniteCave_StevensRoom_Text_ImStevenLetterForMe::
# 227 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "My name is Steven.\p"
	.string "I'm interested in rare stones,\n"
	.string "so I travel here and there.\p"
	.string "Oh?\n"
	.string "A Letter for me?$"

GraniteCave_StevensRoom_Text_ThankYouTakeThis::
# 235 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Okay, thank you.\p"
	.string "You went through all this trouble to\n"
	.string "deliver that. I need to thank you.\p"
	.string "Let me see…$"

GraniteCave_StevensRoom_Text_IveGotToHurryAlong::
# 242 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Now, I've got to hurry along.$"
