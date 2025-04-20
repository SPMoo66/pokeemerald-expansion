GraniteCave_StevensRoom_MapScripts::
	.byte 0


GraniteCave_StevensRoom_EventScript_Steven::
# 8 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	lock
# 9 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	faceplayer
# 10 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	speakername CommonText_Steven
# 11 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_Text_ImStevenLetterForMe
# 12 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	closemessage
# 13 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setvar VAR_0x8004, ITEM_LETTER
# 14 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	call Common_EventScript_PlayerHandedOverTheItem
# 15 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	speakername CommonText_Steven
# 16 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_Text_ThankYouTakeThis
# 17 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	closemessage
# 18 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	speakername CommonText_Q
# 19 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_EventScript_Steven_Text_0
# 20 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	closemessage
# 21 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 22 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	special SpawnCameraObject
# 23 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	compare VAR_TEMP_1, 8
	goto_if_eq GraniteCave_StevensRoom_EventScript_Steven_2
# 27 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	compare VAR_TEMP_1, 9
	goto_if_eq GraniteCave_StevensRoom_EventScript_Steven_3
GraniteCave_StevensRoom_EventScript_Steven_1:
# 31 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	playse SE_PIN
# 32 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 33 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 34 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay 30
# 35 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 36 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	playse SE_EXIT
# 37 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	addobject 2
# 38 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	compare VAR_FACING, DIR_SOUTH
	goto_if_ne GraniteCave_StevensRoom_EventScript_Steven_7
GraniteCave_StevensRoom_EventScript_Steven_6:
# 41 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	compare VAR_FACING, DIR_NORTH
	goto_if_ne GraniteCave_StevensRoom_EventScript_Steven_10
GraniteCave_StevensRoom_EventScript_Steven_9:
# 44 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement 2, Common_Movement_WalkDown2
# 45 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitmovement 0
# 46 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	playse SE_EXIT
# 47 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	addobject 3
# 48 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement 2, GraniteCave_MagmaF_Enter
# 49 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement 3, Common_Movement_WalkDown2
# 50 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitmovement 0
# 51 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	speakername CommonText_MagmaGrunt
# 52 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_EventScript_Steven_Text_1
# 53 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	speakername CommonText_Steven
# 54 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_EventScript_Steven_Text_2
# 57 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	switch VAR_TEMP_1
# 58 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	case 7, GraniteCave_StevensRoom_EventScript_Steven_14
# 60 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	case 8, GraniteCave_StevensRoom_EventScript_Steven_15
# 67 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	case 9, GraniteCave_StevensRoom_EventScript_Steven_16
GraniteCave_StevensRoom_EventScript_Steven_12:
# 71 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitmovement 0
# 72 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay 30
# 73 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	playse SE_PIN
# 74 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 75 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay 30
# 76 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement 1, Common_Movement_WalkFastUp
# 77 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	compare VAR_TEMP_1, 7
	goto_if_eq GraniteCave_StevensRoom_EventScript_Steven_18
GraniteCave_StevensRoom_EventScript_Steven_17:
# 81 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitmovement 0
# 82 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	speakername CommonText_Steven
# 83 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_EventScript_Steven_Text_3
# 86 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	compare VAR_TEMP_1, 8
	goto_if_eq GraniteCave_StevensRoom_EventScript_Steven_24
# 89 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	compare VAR_TEMP_1, 9
	goto_if_eq GraniteCave_StevensRoom_EventScript_Steven_25
GraniteCave_StevensRoom_EventScript_Steven_23:
# 93 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitmovement 0
# 94 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	special RemoveCameraObject
# 95 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	special SavePlayerParty
# 96 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	fadescreen FADE_TO_BLACK
# 97 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	special ChooseHalfPartyForBattle
# 98 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitstate
# 99 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	multi_2_vs_2 TRAINER_MAGMA_GRUNT_F_GRANITE_CAVE, GraniteCave_StevensRoom_EventScript_Steven_Text_4, TRAINER_MAGMA_GRUNT_M_GRANITE_CAVE, GraniteCave_StevensRoom_EventScript_Steven_Text_5, PARTNER_STEVEN_GRANITE_CAVE
# 101 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq GraniteCave_StevensRoom_EventScript_Steven_28
# 184 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	fadescreen FADE_TO_BLACK
# 185 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	special SetCB2WhiteOut
# 186 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitstate
	return

GraniteCave_StevensRoom_EventScript_Steven_2:
# 24 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 25 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitmovement 0
	goto GraniteCave_StevensRoom_EventScript_Steven_1

GraniteCave_StevensRoom_EventScript_Steven_3:
# 28 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp2
# 29 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitmovement 0
	goto GraniteCave_StevensRoom_EventScript_Steven_1

GraniteCave_StevensRoom_EventScript_Steven_7:
# 39 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterUp
	goto GraniteCave_StevensRoom_EventScript_Steven_6

GraniteCave_StevensRoom_EventScript_Steven_10:
# 42 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
	goto GraniteCave_StevensRoom_EventScript_Steven_9

GraniteCave_StevensRoom_EventScript_Steven_14:
# 59 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterUp
	goto GraniteCave_StevensRoom_EventScript_Steven_12

GraniteCave_StevensRoom_EventScript_Steven_15:
# 61 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	compare VAR_TEMP_0, 5
	goto_if_eq GraniteCave_StevensRoom_EventScript_Steven_20
# 65 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterRight
	goto GraniteCave_StevensRoom_EventScript_Steven_12

GraniteCave_StevensRoom_EventScript_Steven_16:
# 68 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterDown
	goto GraniteCave_StevensRoom_EventScript_Steven_12

GraniteCave_StevensRoom_EventScript_Steven_18:
# 78 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GraniteCave_PlayerPushed
# 79 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkLeft
	goto GraniteCave_StevensRoom_EventScript_Steven_17

GraniteCave_StevensRoom_EventScript_Steven_20:
# 62 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterLeft
	goto GraniteCave_StevensRoom_EventScript_Steven_12

GraniteCave_StevensRoom_EventScript_Steven_24:
# 87 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkFastUp
	goto GraniteCave_StevensRoom_EventScript_Steven_23

GraniteCave_StevensRoom_EventScript_Steven_25:
# 90 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GraniteCave_PlayerRunUp
# 91 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkLeft
	goto GraniteCave_StevensRoom_EventScript_Steven_23

GraniteCave_StevensRoom_EventScript_Steven_28:
# 102 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement 2, Common_Movement_FaceRight
# 103 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceFasterLeft
# 104 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitmovement 0
# 105 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	speakername CommonText_MagmaGrunt
# 106 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_EventScript_Steven_Text_6
# 107 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterRight
# 108 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitmovement 0
# 109 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_EventScript_Steven_Text_7
# 110 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceFasterLeft
# 111 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitmovement 0
# 112 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_EventScript_Steven_Text_8
# 115 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	closemessage
# 116 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay 20
# 117 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement 3, Common_Movement_WalkFastUp2
# 118 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitmovement 0
# 119 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	playse SE_EXIT
# 120 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	removeobject 3
# 121 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay 30
# 122 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceDown
# 123 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitmovement 0
# 124 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay 30
# 125 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	playse SE_PIN
# 126 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 127 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay 30
# 128 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterUp
# 129 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitmovement 0
# 130 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	speakername CommonText_MagmaGrunt
# 131 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_EventScript_Steven_Text_9
# 132 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	closemessage
# 133 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement 2, GraniteCave_MagmaF_Exit
# 134 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitmovement 0
# 135 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	playse SE_EXIT
# 136 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	removeobject 2
# 137 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay 30
# 138 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	speakername CommonText_Steven
# 139 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_EventScript_Steven_Text_10
# 140 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	closemessage
# 141 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 142 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	compare VAR_TEMP_0, 5
	goto_if_eq GraniteCave_StevensRoom_EventScript_Steven_32
# 147 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterRight
# 148 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
GraniteCave_StevensRoom_EventScript_Steven_31:
# 150 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	speakername CommonText_Steven
# 151 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_EventScript_Steven_Text_11
# 164 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	closemessage
# 165 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay 30
# 166 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 167 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	bufferstring STR_VAR_2, CommonText_Steven
# 168 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox Text_RegisteredInPokenav_OneInput
# 169 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitfanfare
# 170 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	closemessage
# 171 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay 30
# 172 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setflag FLAG_REGISTERED_STEVEN_POKENAV
# 173 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setflag FLAG_DELIVERED_STEVEN_LETTER
# 174 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	speakername CommonText_Steven
# 175 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_Text_IveGotToHurryAlong
# 176 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	closemessage
# 177 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement 1, GraniteCave_StevensRoom_Movement_StevenExit
# 178 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitmovement 0
# 179 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	playse SE_EXIT
# 180 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	removeobject 1
# 181 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	release
	return

GraniteCave_StevensRoom_EventScript_Steven_32:
# 143 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterLeft
# 144 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	goto GraniteCave_StevensRoom_EventScript_Steven_31


# 191 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Movement_StevenExit:
# 192 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 192 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 192 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 192 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 193 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay_8
	step_end

# 196 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Movement_PlayerTurnTowardExit:
# 197 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay_16
# 197 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay_16
# 197 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay_16
# 198 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_in_place_faster_up
	step_end

# 201 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_MagmaF_Enter:
# 202 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_left
# 203 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_in_place_down
	step_end

# 206 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_PlayerPushed:
# 207 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	lock_facing_direction
# 208 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_fast_left
	step_end

# 211 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_PlayerRunUp:
# 212 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_fast_left
# 213 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_fast_up
# 213 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_fast_up
	step_end

# 216 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_MagmaF_Exit:
# 217 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_fast_up
# 218 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_fast_right
# 219 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_fast_up
	step_end

GraniteCave_StevensRoom_EventScript_Steven_Text_0:
# 19 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Hold it!$"

GraniteCave_StevensRoom_EventScript_Steven_Text_1:
# 52 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Hand over those Devon Goods, now!$"

GraniteCave_StevensRoom_EventScript_Steven_Text_2:
# 54 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Devon Goods?\n"
	.string "I have nothing of the sort.\p"
	.string "Unless…$"

GraniteCave_StevensRoom_EventScript_Steven_Text_3:
# 83 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "{PLAYER}!\n"
	.string "Let me take care of-!!\p"
	.string "No, help me with this!$"

GraniteCave_StevensRoom_EventScript_Steven_Text_4:
# 99 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Wh-what??$"

GraniteCave_StevensRoom_EventScript_Steven_Text_5:
# 99 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Tch…\nYou told me we could handle this!$"

GraniteCave_StevensRoom_EventScript_Steven_Text_6:
# 106 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "You never told me HE would be here!$"

GraniteCave_StevensRoom_EventScript_Steven_Text_7:
# 109 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "I-I didn't know either!\p"
	.string "We were just following the kid, right?$"

GraniteCave_StevensRoom_EventScript_Steven_Text_8:
# 112 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Well, you know what to do in this\n"
	.string "situation…\p"
	.string "… … …\n"
	.string "Run!$"

GraniteCave_StevensRoom_EventScript_Steven_Text_9:
# 131 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Ah-ahh!\nWait for me!$"

GraniteCave_StevensRoom_EventScript_Steven_Text_10:
# 139 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "… … …$"

GraniteCave_StevensRoom_EventScript_Steven_Text_11:
# 151 "data/maps/GraniteCave_StevensRoom/scripts.pory"
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
# 223 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "My name is Steven.\p"
	.string "I'm interested in rare stones,\n"
	.string "so I travel here and there.\p"
	.string "Oh?\n"
	.string "A Letter for me?$"

GraniteCave_StevensRoom_Text_ThankYouTakeThis::
# 231 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Okay, thank you.\p"
	.string "You went through all this trouble to\n"
	.string "deliver that. I need to thank you.\p"
	.string "Let me see…$"

GraniteCave_StevensRoom_Text_IveGotToHurryAlong::
# 238 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Now, I've got to hurry along.$"
