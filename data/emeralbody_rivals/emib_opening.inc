Intro_EmibOpening::
# 2 "data/emeralbody_rivals/emib_opening.pory"
	msgbox Intro_EmibOpening_Text_0
# 3 "data/emeralbody_rivals/emib_opening.pory"
	fadescreen FADE_TO_BLACK
# 4 "data/emeralbody_rivals/emib_opening.pory"
	fadenewbgm MUS_DP_B_TOWER
# 5 "data/emeralbody_rivals/emib_opening.pory"
	special SpawnCameraObject
# 6 "data/emeralbody_rivals/emib_opening.pory"
	setobjectxy OBJ_EVENT_ID_CAMERA, 2, 16
# 7 "data/emeralbody_rivals/emib_opening.pory"
	delay 10
# 8 "data/emeralbody_rivals/emib_opening.pory"
	setvar VAR_0x8000, MUGSHOT_TEST
# 9 "data/emeralbody_rivals/emib_opening.pory"
	callnative DrawMugshot
# 10 "data/emeralbody_rivals/emib_opening.pory"
	msgbox Intro_EmibOpening_Text_1
# 23 "data/emeralbody_rivals/emib_opening.pory"
	speakername CommonText_Feed
# 24 "data/emeralbody_rivals/emib_opening.pory"
	msgbox Intro_EmibOpening_Text_2
# 25 "data/emeralbody_rivals/emib_opening.pory"
	closemessage
# 26 "data/emeralbody_rivals/emib_opening.pory"
	delay 16
# 27 "data/emeralbody_rivals/emib_opening.pory"
	speakername CommonText_Feed
# 28 "data/emeralbody_rivals/emib_opening.pory"
	msgbox Intro_EmibOpening_Text_3
# 31 "data/emeralbody_rivals/emib_opening.pory"
	dynmultichoice 0, 5, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, Intro_EmibOpening_Text_4, Intro_EmibOpening_Text_5, Intro_EmibOpening_Text_6
# 32 "data/emeralbody_rivals/emib_opening.pory"
	msgbox Intro_EmibOpening_Text_7
# 34 "data/emeralbody_rivals/emib_opening.pory"
	closemessage
# 35 "data/emeralbody_rivals/emib_opening.pory"
	msgbox Intro_EmibOpening_Text_8, MSGBOX_YESNO
# 36 "data/emeralbody_rivals/emib_opening.pory"
	compare VAR_RESULT, 1
	goto_if_eq Intro_EmibOpening_2
# 107 "data/emeralbody_rivals/emib_opening.pory"
	random 4
# 108 "data/emeralbody_rivals/emib_opening.pory"
	copyvar VAR_EMERALBODY_RIVAL, VAR_RESULT
Intro_EmibOpening_1:
# 111 "data/emeralbody_rivals/emib_opening.pory"
	speakername CommonText_Feed
# 112 "data/emeralbody_rivals/emib_opening.pory"
	msgbox Intro_EmibOpening_Text_31
# 114 "data/emeralbody_rivals/emib_opening.pory"
	closemessage
# 115 "data/emeralbody_rivals/emib_opening.pory"
	delay 16
# 117 "data/emeralbody_rivals/emib_opening.pory"
	msgbox Intro_EmibOpening_Text_32
# 118 "data/emeralbody_rivals/emib_opening.pory"
	speakername CommonText_Jakson
# 119 "data/emeralbody_rivals/emib_opening.pory"
	msgbox Intro_EmibOpening_Text_33
# 120 "data/emeralbody_rivals/emib_opening.pory"
	speakername CommonText_Sakura
# 121 "data/emeralbody_rivals/emib_opening.pory"
	msgbox Intro_EmibOpening_Text_34
# 122 "data/emeralbody_rivals/emib_opening.pory"
	speakername CommonText_Harper
# 123 "data/emeralbody_rivals/emib_opening.pory"
	msgbox Intro_EmibOpening_Text_35
# 124 "data/emeralbody_rivals/emib_opening.pory"
	speakername CommonText_Redd
# 125 "data/emeralbody_rivals/emib_opening.pory"
	msgbox Intro_EmibOpening_Text_36
# 127 "data/emeralbody_rivals/emib_opening.pory"
	speakername CommonText_Baron
# 128 "data/emeralbody_rivals/emib_opening.pory"
	msgbox Intro_EmibOpening_Text_37
# 129 "data/emeralbody_rivals/emib_opening.pory"
	speakername CommonText_Jakson
# 130 "data/emeralbody_rivals/emib_opening.pory"
	msgbox Intro_EmibOpening_Text_38
# 132 "data/emeralbody_rivals/emib_opening.pory"
	speakername CommonText_Sakura
# 133 "data/emeralbody_rivals/emib_opening.pory"
	msgbox Intro_EmibOpening_Text_39
# 134 "data/emeralbody_rivals/emib_opening.pory"
	speakername CommonText_Harper
# 135 "data/emeralbody_rivals/emib_opening.pory"
	msgbox Intro_EmibOpening_Text_40
# 136 "data/emeralbody_rivals/emib_opening.pory"
	speakername CommonText_Redd
# 137 "data/emeralbody_rivals/emib_opening.pory"
	msgbox Intro_EmibOpening_Text_41
# 138 "data/emeralbody_rivals/emib_opening.pory"
	speakername CommonText_Harper
# 139 "data/emeralbody_rivals/emib_opening.pory"
	msgbox Intro_EmibOpening_Text_42
# 140 "data/emeralbody_rivals/emib_opening.pory"
	speakername CommonText_Baron
# 141 "data/emeralbody_rivals/emib_opening.pory"
	msgbox Intro_EmibOpening_Text_43
# 142 "data/emeralbody_rivals/emib_opening.pory"
	speakername CommonText_Jakson
# 143 "data/emeralbody_rivals/emib_opening.pory"
	msgbox Intro_EmibOpening_Text_44
# 144 "data/emeralbody_rivals/emib_opening.pory"
	closemessage
# 146 "data/emeralbody_rivals/emib_opening.pory"
	delay 16
# 147 "data/emeralbody_rivals/emib_opening.pory"
	msgbox Intro_EmibOpening_Text_45
# 156 "data/emeralbody_rivals/emib_opening.pory"
	closemessage
# 157 "data/emeralbody_rivals/emib_opening.pory"
	delay 40
# 158 "data/emeralbody_rivals/emib_opening.pory"
	callnative ClearMugshot
# 159 "data/emeralbody_rivals/emib_opening.pory"
	fadedefaultbgm
	return

Intro_EmibOpening_2:
# 37 "data/emeralbody_rivals/emib_opening.pory"
	speakername CommonText_Quiz
# 38 "data/emeralbody_rivals/emib_opening.pory"
	msgbox Intro_EmibOpening_Text_9
# 39 "data/emeralbody_rivals/emib_opening.pory"
	dynmultichoice 0, 5, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, Intro_EmibOpening_Text_10, Intro_EmibOpening_Text_11, Intro_EmibOpening_Text_12
# 40 "data/emeralbody_rivals/emib_opening.pory"
	switch VAR_RESULT
# 41 "data/emeralbody_rivals/emib_opening.pory"
	case 0, Intro_EmibOpening_7
# 43 "data/emeralbody_rivals/emib_opening.pory"
	case 1, Intro_EmibOpening_8
# 45 "data/emeralbody_rivals/emib_opening.pory"
	case 2, Intro_EmibOpening_9
Intro_EmibOpening_5:
# 48 "data/emeralbody_rivals/emib_opening.pory"
	speakername CommonText_Quiz
# 49 "data/emeralbody_rivals/emib_opening.pory"
	msgbox Intro_EmibOpening_Text_13
# 50 "data/emeralbody_rivals/emib_opening.pory"
	dynmultichoice 0, 5, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, Intro_EmibOpening_Text_14, Intro_EmibOpening_Text_15, Intro_EmibOpening_Text_16
# 51 "data/emeralbody_rivals/emib_opening.pory"
	switch VAR_RESULT
# 52 "data/emeralbody_rivals/emib_opening.pory"
	case 0, Intro_EmibOpening_12
# 54 "data/emeralbody_rivals/emib_opening.pory"
	case 1, Intro_EmibOpening_13
# 56 "data/emeralbody_rivals/emib_opening.pory"
	case 2, Intro_EmibOpening_14
Intro_EmibOpening_10:
# 59 "data/emeralbody_rivals/emib_opening.pory"
	speakername CommonText_Quiz
# 60 "data/emeralbody_rivals/emib_opening.pory"
	msgbox Intro_EmibOpening_Text_17
# 61 "data/emeralbody_rivals/emib_opening.pory"
	dynmultichoice 0, 5, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, Intro_EmibOpening_Text_18, Intro_EmibOpening_Text_19, Intro_EmibOpening_Text_20
# 62 "data/emeralbody_rivals/emib_opening.pory"
	switch VAR_RESULT
# 63 "data/emeralbody_rivals/emib_opening.pory"
	case 0, Intro_EmibOpening_17
# 65 "data/emeralbody_rivals/emib_opening.pory"
	case 1, Intro_EmibOpening_18
# 67 "data/emeralbody_rivals/emib_opening.pory"
	case 2, Intro_EmibOpening_19
Intro_EmibOpening_15:
# 70 "data/emeralbody_rivals/emib_opening.pory"
	speakername CommonText_Quiz
# 71 "data/emeralbody_rivals/emib_opening.pory"
	msgbox Intro_EmibOpening_Text_21
# 72 "data/emeralbody_rivals/emib_opening.pory"
	dynmultichoice 0, 5, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, Intro_EmibOpening_Text_22, Intro_EmibOpening_Text_23, Intro_EmibOpening_Text_24
# 73 "data/emeralbody_rivals/emib_opening.pory"
	switch VAR_RESULT
# 74 "data/emeralbody_rivals/emib_opening.pory"
	case 0, Intro_EmibOpening_22
# 76 "data/emeralbody_rivals/emib_opening.pory"
	case 1, Intro_EmibOpening_23
# 78 "data/emeralbody_rivals/emib_opening.pory"
	case 2, Intro_EmibOpening_24
Intro_EmibOpening_20:
# 81 "data/emeralbody_rivals/emib_opening.pory"
	speakername CommonText_Quiz
# 82 "data/emeralbody_rivals/emib_opening.pory"
	msgbox Intro_EmibOpening_Text_25
# 83 "data/emeralbody_rivals/emib_opening.pory"
	dynmultichoice 0, 5, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, Intro_EmibOpening_Text_26, Intro_EmibOpening_Text_27, Intro_EmibOpening_Text_28
# 84 "data/emeralbody_rivals/emib_opening.pory"
	switch VAR_RESULT
# 85 "data/emeralbody_rivals/emib_opening.pory"
	case 0, Intro_EmibOpening_27
# 87 "data/emeralbody_rivals/emib_opening.pory"
	case 1, Intro_EmibOpening_28
# 89 "data/emeralbody_rivals/emib_opening.pory"
	case 2, Intro_EmibOpening_29
Intro_EmibOpening_25:
# 92 "data/emeralbody_rivals/emib_opening.pory"
	closemessage
# 94 "data/emeralbody_rivals/emib_opening.pory"
	call Intro_DetermineRival
# 96 "data/emeralbody_rivals/emib_opening.pory"
	delay 16
# 97 "data/emeralbody_rivals/emib_opening.pory"
	speakername CommonText_Quiz
# 98 "data/emeralbody_rivals/emib_opening.pory"
	msgbox Intro_EmibOpening_Text_29
# 99 "data/emeralbody_rivals/emib_opening.pory"
	closemessage
# 100 "data/emeralbody_rivals/emib_opening.pory"
	msgbox Intro_EmibOpening_Text_30
# 103 "data/emeralbody_rivals/emib_opening.pory"
	closemessage
# 104 "data/emeralbody_rivals/emib_opening.pory"
	delay 16
	goto Intro_EmibOpening_1

Intro_EmibOpening_7:
# 42 "data/emeralbody_rivals/emib_opening.pory"
	addvar VAR_TEMP_4, 1
	goto Intro_EmibOpening_5

Intro_EmibOpening_8:
# 44 "data/emeralbody_rivals/emib_opening.pory"
	addvar VAR_TEMP_3, 1
	goto Intro_EmibOpening_5

Intro_EmibOpening_9:
# 46 "data/emeralbody_rivals/emib_opening.pory"
	addvar VAR_TEMP_1, 1
	goto Intro_EmibOpening_5

Intro_EmibOpening_12:
# 53 "data/emeralbody_rivals/emib_opening.pory"
	addvar VAR_TEMP_1, 1
	goto Intro_EmibOpening_10

Intro_EmibOpening_13:
# 55 "data/emeralbody_rivals/emib_opening.pory"
	addvar VAR_TEMP_2, 1
	goto Intro_EmibOpening_10

Intro_EmibOpening_14:
# 57 "data/emeralbody_rivals/emib_opening.pory"
	addvar VAR_TEMP_0, 1
	goto Intro_EmibOpening_10

Intro_EmibOpening_17:
# 64 "data/emeralbody_rivals/emib_opening.pory"
	addvar VAR_TEMP_3, 1
	goto Intro_EmibOpening_15

Intro_EmibOpening_18:
# 66 "data/emeralbody_rivals/emib_opening.pory"
	addvar VAR_TEMP_4, 1
	goto Intro_EmibOpening_15

Intro_EmibOpening_19:
# 68 "data/emeralbody_rivals/emib_opening.pory"
	addvar VAR_TEMP_0, 1
	goto Intro_EmibOpening_15

Intro_EmibOpening_22:
# 75 "data/emeralbody_rivals/emib_opening.pory"
	addvar VAR_TEMP_4, 1
	goto Intro_EmibOpening_20

Intro_EmibOpening_23:
# 77 "data/emeralbody_rivals/emib_opening.pory"
	addvar VAR_TEMP_0, 1
	goto Intro_EmibOpening_20

Intro_EmibOpening_24:
# 79 "data/emeralbody_rivals/emib_opening.pory"
	addvar VAR_TEMP_2, 1
	goto Intro_EmibOpening_20

Intro_EmibOpening_27:
# 86 "data/emeralbody_rivals/emib_opening.pory"
	addvar VAR_TEMP_3, 1
	goto Intro_EmibOpening_25

Intro_EmibOpening_28:
# 88 "data/emeralbody_rivals/emib_opening.pory"
	addvar VAR_TEMP_2, 1
	goto Intro_EmibOpening_25

Intro_EmibOpening_29:
# 90 "data/emeralbody_rivals/emib_opening.pory"
	addvar VAR_TEMP_1, 1
	goto Intro_EmibOpening_25


Intro_DetermineRival::
# 164 "data/emeralbody_rivals/emib_opening.pory"
	compare VAR_TEMP_0, 3
	goto_if_eq Intro_DetermineRival_2
# 168 "data/emeralbody_rivals/emib_opening.pory"
	compare VAR_TEMP_0, 2
	goto_if_eq Intro_DetermineRival_3
Intro_DetermineRival_1:
# 172 "data/emeralbody_rivals/emib_opening.pory"
	compare VAR_TEMP_1, 3
	goto_if_eq Intro_DetermineRival_7
# 176 "data/emeralbody_rivals/emib_opening.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq Intro_DetermineRival_8
Intro_DetermineRival_6:
# 180 "data/emeralbody_rivals/emib_opening.pory"
	compare VAR_TEMP_2, 3
	goto_if_eq Intro_DetermineRival_12
# 185 "data/emeralbody_rivals/emib_opening.pory"
	compare VAR_TEMP_3, 3
	goto_if_eq Intro_DetermineRival_15
# 189 "data/emeralbody_rivals/emib_opening.pory"
	compare VAR_TEMP_3, 2
	goto_if_eq Intro_DetermineRival_16
Intro_DetermineRival_14:
# 193 "data/emeralbody_rivals/emib_opening.pory"
	compare VAR_TEMP_4, 3
	goto_if_eq Intro_DetermineRival_20
# 197 "data/emeralbody_rivals/emib_opening.pory"
	compare VAR_TEMP_4, 2
	goto_if_eq Intro_DetermineRival_21
Intro_DetermineRival_19:
# 202 "data/emeralbody_rivals/emib_opening.pory"
	goto_if_set FLAG_TEMP_10, Intro_DetermineRival_25
Intro_DetermineRival_24:
# 205 "data/emeralbody_rivals/emib_opening.pory"
	goto_if_set FLAG_TEMP_4, Intro_DetermineRival_28
Intro_DetermineRival_27:
# 208 "data/emeralbody_rivals/emib_opening.pory"
	goto_if_set FLAG_TEMP_3, Intro_DetermineRival_31
Intro_DetermineRival_30:
# 211 "data/emeralbody_rivals/emib_opening.pory"
	goto_if_set FLAG_TEMP_1, Intro_DetermineRival_34
Intro_DetermineRival_33:
# 214 "data/emeralbody_rivals/emib_opening.pory"
	goto_if_unset FLAG_TEMP_10, Intro_DetermineRival_38
	return

Intro_DetermineRival_2:
# 165 "data/emeralbody_rivals/emib_opening.pory"
	setvar VAR_EMERALBODY_RIVAL, 0
	return

Intro_DetermineRival_3:
# 169 "data/emeralbody_rivals/emib_opening.pory"
	setflag FLAG_TEMP_10
	goto Intro_DetermineRival_1

Intro_DetermineRival_7:
# 173 "data/emeralbody_rivals/emib_opening.pory"
	setvar VAR_EMERALBODY_RIVAL, 1
	return

Intro_DetermineRival_8:
# 177 "data/emeralbody_rivals/emib_opening.pory"
	setflag FLAG_TEMP_1
	goto Intro_DetermineRival_6

Intro_DetermineRival_12:
# 181 "data/emeralbody_rivals/emib_opening.pory"
	setvar VAR_EMERALBODY_RIVAL, 2
	return

Intro_DetermineRival_15:
# 186 "data/emeralbody_rivals/emib_opening.pory"
	setvar VAR_EMERALBODY_RIVAL, 3
	return

Intro_DetermineRival_16:
# 190 "data/emeralbody_rivals/emib_opening.pory"
	setflag FLAG_TEMP_3
	goto Intro_DetermineRival_14

Intro_DetermineRival_20:
# 194 "data/emeralbody_rivals/emib_opening.pory"
	setvar VAR_EMERALBODY_RIVAL, 4
	return

Intro_DetermineRival_21:
# 198 "data/emeralbody_rivals/emib_opening.pory"
	setflag FLAG_TEMP_4
	goto Intro_DetermineRival_19

Intro_DetermineRival_25:
# 203 "data/emeralbody_rivals/emib_opening.pory"
	setvar VAR_EMERALBODY_RIVAL, 0
	goto Intro_DetermineRival_24

Intro_DetermineRival_28:
# 206 "data/emeralbody_rivals/emib_opening.pory"
	setvar VAR_EMERALBODY_RIVAL, 4
	goto Intro_DetermineRival_27

Intro_DetermineRival_31:
# 209 "data/emeralbody_rivals/emib_opening.pory"
	setvar VAR_EMERALBODY_RIVAL, 3
	goto Intro_DetermineRival_30

Intro_DetermineRival_34:
# 212 "data/emeralbody_rivals/emib_opening.pory"
	setvar VAR_EMERALBODY_RIVAL, 1
	goto Intro_DetermineRival_33

Intro_DetermineRival_36:
# 215 "data/emeralbody_rivals/emib_opening.pory"
	setvar VAR_EMERALBODY_RIVAL, 2
	return

Intro_DetermineRival_37:
# 214 "data/emeralbody_rivals/emib_opening.pory"
	goto_if_unset FLAG_TEMP_3, Intro_DetermineRival_41
	return

Intro_DetermineRival_38:
# 214 "data/emeralbody_rivals/emib_opening.pory"
	goto_if_unset FLAG_TEMP_1, Intro_DetermineRival_37
	return

Intro_DetermineRival_41:
# 214 "data/emeralbody_rivals/emib_opening.pory"
	goto_if_unset FLAG_TEMP_4, Intro_DetermineRival_36
	return


InsideOfTruck_EventScript_MovingBox2::
# 230 "data/emeralbody_rivals/emib_opening.pory"
	goto_if_set FLAG_TEMP_5, InsideOfTruck_EventScript_MovingBox2_2
# 255 "data/emeralbody_rivals/emib_opening.pory"
	msgbox InsideOfTruck_Text_BoxPrintedWithMonLogo, MSGBOX_SIGN
# 256 "data/emeralbody_rivals/emib_opening.pory"
	setflag FLAG_TEMP_5
InsideOfTruck_EventScript_MovingBox2_1:
# 258 "data/emeralbody_rivals/emib_opening.pory"
	release
	return

InsideOfTruck_EventScript_MovingBox2_2:
# 231 "data/emeralbody_rivals/emib_opening.pory"
	msgbox InsideOfTruck_EventScript_MovingBox2_Text_0
# 232 "data/emeralbody_rivals/emib_opening.pory"
	special EnterCode
# 233 "data/emeralbody_rivals/emib_opening.pory"
	waitstate
# 234 "data/emeralbody_rivals/emib_opening.pory"
	special GetCodeFeedback
# 235 "data/emeralbody_rivals/emib_opening.pory"
	compare VAR_RESULT, 1
	goto_if_eq InsideOfTruck_EventScript_MovingBox2_6
# 241 "data/emeralbody_rivals/emib_opening.pory"
	compare VAR_RESULT, 2
	goto_if_eq InsideOfTruck_EventScript_MovingBox2_7
# 249 "data/emeralbody_rivals/emib_opening.pory"
	msgbox InsideOfTruck_EventScript_MovingBox2_Text_1
InsideOfTruck_EventScript_MovingBox2_5:
# 251 "data/emeralbody_rivals/emib_opening.pory"
	setvar VAR_RESULT, 0
# 252 "data/emeralbody_rivals/emib_opening.pory"
	warpsilent MAP_INSIDE_OF_TRUCK, 2, 2
	goto InsideOfTruck_EventScript_MovingBox2_1

InsideOfTruck_EventScript_MovingBox2_6:
# 236 "data/emeralbody_rivals/emib_opening.pory"
	setflag FLAG_EMIB_DEMO_1
# 237 "data/emeralbody_rivals/emib_opening.pory"
	setflag FLAG_EMIB_DEMO_2
# 238 "data/emeralbody_rivals/emib_opening.pory"
	setflag FLAG_EMIB_DEMO_3
# 239 "data/emeralbody_rivals/emib_opening.pory"
	msgbox Text_CodeEntrySuccess, MSGBOX_DEFAULT
	goto InsideOfTruck_EventScript_MovingBox2_5

InsideOfTruck_EventScript_MovingBox2_7:
# 242 "data/emeralbody_rivals/emib_opening.pory"
	setflag FLAG_NEW_GAME_PLUS
# 243 "data/emeralbody_rivals/emib_opening.pory"
	setflag FLAG_EMIB_DEMO_1
# 244 "data/emeralbody_rivals/emib_opening.pory"
	setflag FLAG_EMIB_DEMO_2
# 245 "data/emeralbody_rivals/emib_opening.pory"
	setflag FLAG_EMIB_DEMO_3
# 246 "data/emeralbody_rivals/emib_opening.pory"
	msgbox Text_CodeEntrySuccess, MSGBOX_DEFAULT
	goto InsideOfTruck_EventScript_MovingBox2_5


Intro_EmibOpening_Text_0:
# 2 "data/emeralbody_rivals/emib_opening.pory"
	.string "Earlier…$"

Intro_EmibOpening_Text_1:
# 10 "data/emeralbody_rivals/emib_opening.pory"
	.string "Loading… 25%\n"
	.string "Loading… 76%\l"
	.string "… … …\p"
	.string "Updating… 5%\n"
	.string "Updating… 65%\l"
	.string "Updating… 92%\l"
	.string "Updating… 95%\l"
	.string "Updating… 97%\l"
	.string "Updating… 97%\l"
	.string "Updating… 97%\l"
	.string "Updated!\p"
	.string "Welcome to ENCORE, the world's foremost\n"
	.string "chat system!\p"
	.string "Your ENCORE server, FRIENDSCROPOLIS,\n"
	.string "has updates.$"

Intro_EmibOpening_Text_2:
# 24 "data/emeralbody_rivals/emib_opening.pory"
	.string "Scientists discuss whether 2104 will be\n"
	.string "the year that manned flights to the\l"
	.string "Mars colony start, and about the\l"
	.string "tourism industry.$"

Intro_EmibOpening_Text_3:
# 28 "data/emeralbody_rivals/emib_opening.pory"
	.string "Harper posted a meme.\p"
	.string "“New job, who this”\p"
	.string "An image of a dog wearing sunglasses is\n"
	.string "affixed.$"

Intro_EmibOpening_Text_4:
# 31 "data/emeralbody_rivals/emib_opening.pory"
	.string "EMOTE: Cheering skeleton$"

Intro_EmibOpening_Text_5:
# 31 "data/emeralbody_rivals/emib_opening.pory"
	.string "EMOTE: Praying for good fortune$"

Intro_EmibOpening_Text_6:
# 31 "data/emeralbody_rivals/emib_opening.pory"
	.string "Ignore and keep scrolling$"

Intro_EmibOpening_Text_7:
# 32 "data/emeralbody_rivals/emib_opening.pory"
	.string "Baron posted\n"
	.string "“Nostalgic Pokémon Personality Quiz\l"
	.string "for the Soul”$"

Intro_EmibOpening_Text_8:
# 35 "data/emeralbody_rivals/emib_opening.pory"
	.string "Try the quiz?$"

Intro_EmibOpening_Text_9:
# 38 "data/emeralbody_rivals/emib_opening.pory"
	.string "Q1. You receive a gift, and are curious\n"
	.string "about it. What next?$"

Intro_EmibOpening_Text_10:
# 39 "data/emeralbody_rivals/emib_opening.pory"
	.string "Open it now$"

Intro_EmibOpening_Text_11:
# 39 "data/emeralbody_rivals/emib_opening.pory"
	.string "Open it later$"

Intro_EmibOpening_Text_12:
# 39 "data/emeralbody_rivals/emib_opening.pory"
	.string "Get someone else to open it.$"

Intro_EmibOpening_Text_13:
# 49 "data/emeralbody_rivals/emib_opening.pory"
	.string "Q2. It is a pleasant day at the beach.\n"
	.string "How are you feeling?$"

Intro_EmibOpening_Text_14:
# 50 "data/emeralbody_rivals/emib_opening.pory"
	.string "This feels great!$"

Intro_EmibOpening_Text_15:
# 50 "data/emeralbody_rivals/emib_opening.pory"
	.string "Snore…$"

Intro_EmibOpening_Text_16:
# 50 "data/emeralbody_rivals/emib_opening.pory"
	.string "I want to go home!$"

Intro_EmibOpening_Text_17:
# 60 "data/emeralbody_rivals/emib_opening.pory"
	.string "Q3. You're suddenly locked in a\n"
	.string "pitch-black room! What do you do?$"

Intro_EmibOpening_Text_18:
# 61 "data/emeralbody_rivals/emib_opening.pory"
	.string "Kick the door$"

Intro_EmibOpening_Text_19:
# 61 "data/emeralbody_rivals/emib_opening.pory"
	.string "Cry$"

Intro_EmibOpening_Text_20:
# 61 "data/emeralbody_rivals/emib_opening.pory"
	.string "Clean the room$"

Intro_EmibOpening_Text_21:
# 71 "data/emeralbody_rivals/emib_opening.pory"
	.string "Q4. Do you like groan inducing puns?$"

Intro_EmibOpening_Text_22:
# 72 "data/emeralbody_rivals/emib_opening.pory"
	.string "Love them!$"

Intro_EmibOpening_Text_23:
# 72 "data/emeralbody_rivals/emib_opening.pory"
	.string "A little$"

Intro_EmibOpening_Text_24:
# 72 "data/emeralbody_rivals/emib_opening.pory"
	.string "Spare me$"

Intro_EmibOpening_Text_25:
# 82 "data/emeralbody_rivals/emib_opening.pory"
	.string "Q5. The road forks. A sign says treasure\n"
	.string "is to the right. You…?$"

Intro_EmibOpening_Text_26:
# 83 "data/emeralbody_rivals/emib_opening.pory"
	.string "Instantly go right$"

Intro_EmibOpening_Text_27:
# 83 "data/emeralbody_rivals/emib_opening.pory"
	.string "It's a trap! Go left$"

Intro_EmibOpening_Text_28:
# 83 "data/emeralbody_rivals/emib_opening.pory"
	.string "Flip a coin$"

Intro_EmibOpening_Text_29:
# 98 "data/emeralbody_rivals/emib_opening.pory"
	.string "Congrats! Your answers have been\n"
	.string "transmitted and recorded.$"

Intro_EmibOpening_Text_30:
# 100 "data/emeralbody_rivals/emib_opening.pory"
	.string "… … …\p"
	.string "The browser closed on its own, cleared\n"
	.string "itself from my internet history, and\l"
	.string "blacklisted me from accessing the URL\l"
	.string "again.\p"
	.string "… … …$"

Intro_EmibOpening_Text_31:
# 112 "data/emeralbody_rivals/emib_opening.pory"
	.string "Jakson posted a link to a video game\n"
	.string "modding webiste.\p"
	.string "Pokémon Emerald remake in the Pokémon\n"
	.string "Anniversary Experience v1.0$"

Intro_EmibOpening_Text_32:
# 117 "data/emeralbody_rivals/emib_opening.pory"
	.string "A chat log branched off from the\n"
	.string "article headline.$"

Intro_EmibOpening_Text_33:
# 119 "data/emeralbody_rivals/emib_opening.pory"
	.string "Remember that Spatial Reality game\n"
	.string "they made for Pokémon's anniversary a\l"
	.string "few years back? Some people made a\l"
	.string "port of Emerald in it.$"

Intro_EmibOpening_Text_34:
# 121 "data/emeralbody_rivals/emib_opening.pory"
	.string "That's awesome!!! I didn't think they'd\n"
	.string "crack the code so easily.$"

Intro_EmibOpening_Text_35:
# 123 "data/emeralbody_rivals/emib_opening.pory"
	.string "Neat.$"

Intro_EmibOpening_Text_36:
# 125 "data/emeralbody_rivals/emib_opening.pory"
	.string "Will have to try it sometime.\n"
	.string "Gen1 in the original was fun.$"

Intro_EmibOpening_Text_37:
# 128 "data/emeralbody_rivals/emib_opening.pory"
	.string "Is this the one that got the\n"
	.string "multiplayer mod last year?$"

Intro_EmibOpening_Text_38:
# 130 "data/emeralbody_rivals/emib_opening.pory"
	.string "That's actually where I was going with\n"
	.string "it. I can put together a modpack if\l"
	.string "anyone is interested.\l"
	.string "Any takers?$"

Intro_EmibOpening_Text_39:
# 133 "data/emeralbody_rivals/emib_opening.pory"
	.string "Day one, I'm in.$"

Intro_EmibOpening_Text_40:
# 135 "data/emeralbody_rivals/emib_opening.pory"
	.string "How much is the base game to purchase?$"

Intro_EmibOpening_Text_41:
# 137 "data/emeralbody_rivals/emib_opening.pory"
	.string "No need. I've got like a dozen extra\n"
	.string "redemption codes for it.$"

Intro_EmibOpening_Text_42:
# 139 "data/emeralbody_rivals/emib_opening.pory"
	.string "… … … Why do you have a bunch of extra\n"
	.string "copies?$"

Intro_EmibOpening_Text_43:
# 141 "data/emeralbody_rivals/emib_opening.pory"
	.string "I'm in, too. Feels like forever since we\n"
	.string "all last got together and hung out or\l"
	.string "played a game together.$"

Intro_EmibOpening_Text_44:
# 143 "data/emeralbody_rivals/emib_opening.pory"
	.string "{EMOJI_BIGSMILE}{EMOJI_RIGHT_THUMBS} Give me a few days and I'll set up the\n"
	.string "mods and a server.$"

Intro_EmibOpening_Text_45:
# 147 "data/emeralbody_rivals/emib_opening.pory"
	.string "Initializing scripts…\n"
	.string "Initializing textures…\l"
	.string "Initializing mods…\l"
	.string "Initializing mods {EMOJI_LEFT_PAREN}multi-framework{EMOJI_RIGHT_PAREN}…\l"
	.string "Initializing mods {EMOJI_LEFT_PAREN}emerald your body{EMOJI_RIGHT_PAREN}…\l"
	.string "Initializing mods {EMOJI_LEFT_PAREN}custom pack 2{EMOJI_RIGHT_PAREN}…\l"
	.string "Initializing world…\l"
	.string "… … …\l"
	.string "Connecting to server…$"

InsideOfTruck_EventScript_MovingBox2_Text_0:
# 231 "data/emeralbody_rivals/emib_opening.pory"
	.string "Enter a code.$"

InsideOfTruck_EventScript_MovingBox2_Text_1:
# 249 "data/emeralbody_rivals/emib_opening.pory"
	.string "Valid code not entered.$"

CommonText_Feed::
# 220 "data/emeralbody_rivals/emib_opening.pory"
	.string "Feed$"

CommonText_Quiz::
# 224 "data/emeralbody_rivals/emib_opening.pory"
	.string "Quiz$"

Text_CodeEntrySuccess::
# 261 "data/emeralbody_rivals/emib_opening.pory"
	.string "Code entry successful.$"
