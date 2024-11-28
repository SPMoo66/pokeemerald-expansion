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
	playse SE_PIN
# 26 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 27 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 28 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay 30
# 29 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 30 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	playse SE_EXIT
# 31 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	addobject 2
# 32 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	compare VAR_FACING, DIR_SOUTH
	goto_if_ne GraniteCave_StevensRoom_EventScript_Steven_2
GraniteCave_StevensRoom_EventScript_Steven_1:
# 35 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	compare VAR_FACING, DIR_NORTH
	goto_if_ne GraniteCave_StevensRoom_EventScript_Steven_5
GraniteCave_StevensRoom_EventScript_Steven_4:
# 38 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement 2, Common_Movement_WalkDown2
# 39 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitmovement 0
# 40 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	playse SE_EXIT
# 41 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	addobject 3
# 42 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement 2, GraniteCave_MagmaF_Enter
# 43 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement 3, Common_Movement_WalkDown2
# 44 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitmovement 0
# 45 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	speakername CommonText_MagmaGrunt
# 46 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_EventScript_Steven_Text_1
# 47 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	speakername CommonText_Steven
# 48 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_EventScript_Steven_Text_2
# 51 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 52 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	switch VAR_TEMP_1
# 53 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	case 7, GraniteCave_StevensRoom_EventScript_Steven_9
# 55 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	case 8, GraniteCave_StevensRoom_EventScript_Steven_10
# 62 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	case 9, GraniteCave_StevensRoom_EventScript_Steven_11
GraniteCave_StevensRoom_EventScript_Steven_7:
# 66 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitmovement 0
# 67 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay 30
# 68 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	playse SE_PIN
# 69 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 70 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay 30
# 71 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement 1, Common_Movement_WalkFastUp
# 72 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	compare VAR_TEMP_1, 7
	goto_if_eq GraniteCave_StevensRoom_EventScript_Steven_13
GraniteCave_StevensRoom_EventScript_Steven_12:
# 75 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitmovement 0
# 76 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	speakername CommonText_Steven
# 77 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_EventScript_Steven_Text_3
# 80 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	compare VAR_TEMP_1, 8
	goto_if_eq GraniteCave_StevensRoom_EventScript_Steven_19
# 83 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	compare VAR_TEMP_1, 9
	goto_if_eq GraniteCave_StevensRoom_EventScript_Steven_20
GraniteCave_StevensRoom_EventScript_Steven_18:
# 86 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	special SavePlayerParty
# 87 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	fadescreen FADE_TO_BLACK
# 88 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	special ChooseHalfPartyForBattle
# 89 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitstate
# 90 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	multi_2_vs_2 TRAINER_MAGMA_GRUNT_F_GRANITE_CAVE, GraniteCave_StevensRoom_EventScript_Steven_Text_4, TRAINER_MAGMA_GRUNT_M_GRANITE_CAVE, GraniteCave_StevensRoom_EventScript_Steven_Text_5, PARTNER_STEVEN_GRANITE_CAVE
# 92 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq GraniteCave_StevensRoom_EventScript_Steven_23
# 173 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	fadescreen FADE_TO_BLACK
# 174 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	special SetCB2WhiteOut
# 175 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitstate
	return

GraniteCave_StevensRoom_EventScript_Steven_2:
# 33 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterUp
	goto GraniteCave_StevensRoom_EventScript_Steven_1

GraniteCave_StevensRoom_EventScript_Steven_5:
# 36 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
	goto GraniteCave_StevensRoom_EventScript_Steven_4

GraniteCave_StevensRoom_EventScript_Steven_9:
# 54 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterUp
	goto GraniteCave_StevensRoom_EventScript_Steven_7

GraniteCave_StevensRoom_EventScript_Steven_10:
# 56 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	compare VAR_TEMP_0, 5
	goto_if_eq GraniteCave_StevensRoom_EventScript_Steven_15
# 60 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterRight
	goto GraniteCave_StevensRoom_EventScript_Steven_7

GraniteCave_StevensRoom_EventScript_Steven_11:
# 63 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterDown
	goto GraniteCave_StevensRoom_EventScript_Steven_7

GraniteCave_StevensRoom_EventScript_Steven_13:
# 73 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GraniteCave_PlayerPushed
	goto GraniteCave_StevensRoom_EventScript_Steven_12

GraniteCave_StevensRoom_EventScript_Steven_15:
# 57 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterLeft
	goto GraniteCave_StevensRoom_EventScript_Steven_7

GraniteCave_StevensRoom_EventScript_Steven_19:
# 81 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkFastUp
	goto GraniteCave_StevensRoom_EventScript_Steven_18

GraniteCave_StevensRoom_EventScript_Steven_20:
# 84 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GraniteCave_PlayerRunUp
	goto GraniteCave_StevensRoom_EventScript_Steven_18

GraniteCave_StevensRoom_EventScript_Steven_23:
# 93 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement 2, Common_Movement_FaceRight
# 94 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceFasterLeft
# 95 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitmovement 0
# 96 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	speakername CommonText_MagmaGrunt
# 97 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_EventScript_Steven_Text_6
# 98 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterRight
# 99 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitmovement 0
# 100 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_EventScript_Steven_Text_7
# 101 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceFasterLeft
# 102 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitmovement 0
# 103 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_EventScript_Steven_Text_8
# 106 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	closemessage
# 107 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay 20
# 108 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement 3, Common_Movement_WalkFastUp2
# 109 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitmovement 0
# 110 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	playse SE_EXIT
# 111 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	removeobject 3
# 112 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay 30
# 113 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceDown
# 114 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitmovement 0
# 115 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay 30
# 116 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	playse SE_PIN
# 117 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 118 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay 30
# 119 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterUp
# 120 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitmovement 0
# 121 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	speakername CommonText_MagmaGrunt
# 122 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_EventScript_Steven_Text_9
# 123 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	closemessage
# 124 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement 2, GraniteCave_MagmaF_Exit
# 125 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitmovement 0
# 126 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	playse SE_EXIT
# 127 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	removeobject 2
# 128 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay 30
# 129 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	speakername CommonText_Steven
# 130 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_EventScript_Steven_Text_10
# 131 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	closemessage
# 132 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 133 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	compare VAR_TEMP_0, 5
	goto_if_eq GraniteCave_StevensRoom_EventScript_Steven_27
# 138 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterRight
# 139 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
GraniteCave_StevensRoom_EventScript_Steven_26:
# 141 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	speakername CommonText_Steven
# 142 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_EventScript_Steven_Text_11
# 155 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	closemessage
# 156 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay 30
# 157 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 158 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_Text_RegisteredSteven
# 159 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitfanfare
# 160 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	closemessage
# 161 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay 30
# 162 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setflag FLAG_REGISTERED_STEVEN_POKENAV
# 163 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	speakername CommonText_Steven
# 164 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_Text_IveGotToHurryAlong
# 165 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	closemessage
# 166 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement 1, GraniteCave_StevensRoom_Movement_StevenExit
# 167 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitmovement 0
# 168 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	playse SE_EXIT
# 169 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	removeobject 1
# 170 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	release
	return

GraniteCave_StevensRoom_EventScript_Steven_27:
# 134 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterLeft
# 135 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	goto GraniteCave_StevensRoom_EventScript_Steven_26


# 180 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Movement_StevenExit:
# 181 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 181 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 181 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 181 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 182 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay_8
	step_end

# 185 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Movement_PlayerTurnTowardExit:
# 186 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay_16
# 186 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay_16
# 186 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay_16
# 187 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_in_place_faster_up
	step_end

# 190 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_MagmaF_Enter:
# 191 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_left
# 192 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_in_place_down
	step_end

# 195 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_PlayerPushed:
# 196 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	lock_facing_direction
# 197 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_fast_left
	step_end

# 200 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_PlayerRunUp:
# 201 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_fast_left
# 202 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_fast_up
# 202 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_fast_up
	step_end

# 205 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_MagmaF_Exit:
# 206 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_fast_up
# 207 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_fast_right
# 208 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_fast_up
	step_end

GraniteCave_StevensRoom_EventScript_Steven_Text_0:
# 23 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Hold it!$"

GraniteCave_StevensRoom_EventScript_Steven_Text_1:
# 46 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Hand over those Devon Goods, now!$"

GraniteCave_StevensRoom_EventScript_Steven_Text_2:
# 48 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Devon Goods?\n"
	.string "I have nothing of the sort.\p"
	.string "Unless…$"

GraniteCave_StevensRoom_EventScript_Steven_Text_3:
# 77 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "{PLAYER}!\n"
	.string "Let me take care of-!!\p"
	.string "No, help me with this!$"

GraniteCave_StevensRoom_EventScript_Steven_Text_4:
# 90 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Wh-what??$"

GraniteCave_StevensRoom_EventScript_Steven_Text_5:
# 90 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Tch…\nYou told me we could handle this!$"

GraniteCave_StevensRoom_EventScript_Steven_Text_6:
# 97 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "You never told me HE would be here!$"

GraniteCave_StevensRoom_EventScript_Steven_Text_7:
# 100 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "I-I didn't know either!\p"
	.string "We were just following the kid, right?$"

GraniteCave_StevensRoom_EventScript_Steven_Text_8:
# 103 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Well, you know what to do in this\n"
	.string "situation…\p"
	.string "… … …\n"
	.string "Run!$"

GraniteCave_StevensRoom_EventScript_Steven_Text_9:
# 122 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Ah-ahh!\nWait for me!$"

GraniteCave_StevensRoom_EventScript_Steven_Text_10:
# 130 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "… … …$"

GraniteCave_StevensRoom_EventScript_Steven_Text_11:
# 142 "data/maps/GraniteCave_StevensRoom/scripts.pory"
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
# 212 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "My name is Steven.\p"
	.string "I'm interested in rare stones,\n"
	.string "so I travel here and there.\p"
	.string "Oh?\n"
	.string "A Letter for me?$"

GraniteCave_StevensRoom_Text_ThankYouTakeThis::
# 220 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Okay, thank you.\p"
	.string "You went through all this trouble to\n"
	.string "deliver that. I need to thank you.\p"
	.string "Let me see…$"

GraniteCave_StevensRoom_Text_RegisteredSteven::
# 227 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Registered Steven\n"
	.string "in the Pokénav.$"

GraniteCave_StevensRoom_Text_IveGotToHurryAlong::
# 232 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Now, I've got to hurry along.$"
