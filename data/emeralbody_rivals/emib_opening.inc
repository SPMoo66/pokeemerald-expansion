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
# 117 "data/emeralbody_rivals/emib_opening.pory"
	random 5
# 118 "data/emeralbody_rivals/emib_opening.pory"
	copyvar VAR_EMERALBODY_RIVAL, VAR_RESULT
Intro_EmibOpening_1:
# 121 "data/emeralbody_rivals/emib_opening.pory"
	speakername CommonText_Feed
# 122 "data/emeralbody_rivals/emib_opening.pory"
	msgbox Intro_EmibOpening_Text_33
# 124 "data/emeralbody_rivals/emib_opening.pory"
	closemessage
# 125 "data/emeralbody_rivals/emib_opening.pory"
	delay 16
# 127 "data/emeralbody_rivals/emib_opening.pory"
	msgbox Intro_EmibOpening_Text_34
# 128 "data/emeralbody_rivals/emib_opening.pory"
	speakername CommonText_Jakson
# 129 "data/emeralbody_rivals/emib_opening.pory"
	msgbox Intro_EmibOpening_Text_35
# 130 "data/emeralbody_rivals/emib_opening.pory"
	speakername CommonText_Sakura
# 131 "data/emeralbody_rivals/emib_opening.pory"
	msgbox Intro_EmibOpening_Text_36
# 132 "data/emeralbody_rivals/emib_opening.pory"
	speakername CommonText_Harper
# 133 "data/emeralbody_rivals/emib_opening.pory"
	msgbox Intro_EmibOpening_Text_37
# 134 "data/emeralbody_rivals/emib_opening.pory"
	speakername CommonText_Redd
# 135 "data/emeralbody_rivals/emib_opening.pory"
	msgbox Intro_EmibOpening_Text_38
# 137 "data/emeralbody_rivals/emib_opening.pory"
	speakername CommonText_Baron
# 138 "data/emeralbody_rivals/emib_opening.pory"
	msgbox Intro_EmibOpening_Text_39
# 139 "data/emeralbody_rivals/emib_opening.pory"
	speakername CommonText_Jakson
# 140 "data/emeralbody_rivals/emib_opening.pory"
	msgbox Intro_EmibOpening_Text_40
# 142 "data/emeralbody_rivals/emib_opening.pory"
	speakername CommonText_Sakura
# 143 "data/emeralbody_rivals/emib_opening.pory"
	msgbox Intro_EmibOpening_Text_41
# 144 "data/emeralbody_rivals/emib_opening.pory"
	speakername CommonText_Harper
# 145 "data/emeralbody_rivals/emib_opening.pory"
	msgbox Intro_EmibOpening_Text_42
# 146 "data/emeralbody_rivals/emib_opening.pory"
	speakername CommonText_Redd
# 147 "data/emeralbody_rivals/emib_opening.pory"
	msgbox Intro_EmibOpening_Text_43
# 148 "data/emeralbody_rivals/emib_opening.pory"
	speakername CommonText_Harper
# 149 "data/emeralbody_rivals/emib_opening.pory"
	msgbox Intro_EmibOpening_Text_44
# 150 "data/emeralbody_rivals/emib_opening.pory"
	speakername CommonText_Baron
# 151 "data/emeralbody_rivals/emib_opening.pory"
	msgbox Intro_EmibOpening_Text_45
# 152 "data/emeralbody_rivals/emib_opening.pory"
	speakername CommonText_Jakson
# 153 "data/emeralbody_rivals/emib_opening.pory"
	msgbox Intro_EmibOpening_Text_46
# 154 "data/emeralbody_rivals/emib_opening.pory"
	closemessage
# 156 "data/emeralbody_rivals/emib_opening.pory"
	delay 16
# 157 "data/emeralbody_rivals/emib_opening.pory"
	msgbox Intro_EmibOpening_Text_47
# 166 "data/emeralbody_rivals/emib_opening.pory"
	closemessage
# 167 "data/emeralbody_rivals/emib_opening.pory"
	delay 40
# 168 "data/emeralbody_rivals/emib_opening.pory"
	callnative ClearMugshot
# 169 "data/emeralbody_rivals/emib_opening.pory"
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
	goto_if_set FLAG_NEW_GAME_PLUS, Intro_EmibOpening_31
Intro_EmibOpening_30:
# 102 "data/emeralbody_rivals/emib_opening.pory"
	closemessage
# 104 "data/emeralbody_rivals/emib_opening.pory"
	call Intro_DetermineRival
# 106 "data/emeralbody_rivals/emib_opening.pory"
	delay 16
# 107 "data/emeralbody_rivals/emib_opening.pory"
	speakername CommonText_Quiz
# 108 "data/emeralbody_rivals/emib_opening.pory"
	msgbox Intro_EmibOpening_Text_31
# 109 "data/emeralbody_rivals/emib_opening.pory"
	closemessage
# 110 "data/emeralbody_rivals/emib_opening.pory"
	msgbox Intro_EmibOpening_Text_32
# 113 "data/emeralbody_rivals/emib_opening.pory"
	closemessage
# 114 "data/emeralbody_rivals/emib_opening.pory"
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

Intro_EmibOpening_31:
# 93 "data/emeralbody_rivals/emib_opening.pory"
	speakername CommonText_Quiz
# 94 "data/emeralbody_rivals/emib_opening.pory"
	msgbox Intro_EmibOpening_Text_29, MSGBOX_YESNO
# 95 "data/emeralbody_rivals/emib_opening.pory"
	compare VAR_RESULT, NO
	goto_if_eq Intro_EmibOpening_33
	goto Intro_EmibOpening_30

Intro_EmibOpening_33:
# 96 "data/emeralbody_rivals/emib_opening.pory"
	msgbox Intro_EmibOpening_Text_30, MSGBOX_YESNO
# 97 "data/emeralbody_rivals/emib_opening.pory"
	compare VAR_RESULT, YES
	goto_if_eq Intro_EmibOpening_35
	goto Intro_EmibOpening_30

Intro_EmibOpening_35:
# 98 "data/emeralbody_rivals/emib_opening.pory"
	setflag FLAG_TEMP_6
	goto Intro_EmibOpening_30


Intro_DetermineRival::
# 174 "data/emeralbody_rivals/emib_opening.pory"
	compare VAR_TEMP_0, 3
	goto_if_eq Intro_DetermineRival_2
# 178 "data/emeralbody_rivals/emib_opening.pory"
	compare VAR_TEMP_0, 2
	goto_if_eq Intro_DetermineRival_3
Intro_DetermineRival_1:
# 182 "data/emeralbody_rivals/emib_opening.pory"
	compare VAR_TEMP_1, 3
	goto_if_eq Intro_DetermineRival_7
# 186 "data/emeralbody_rivals/emib_opening.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq Intro_DetermineRival_8
Intro_DetermineRival_6:
# 190 "data/emeralbody_rivals/emib_opening.pory"
	compare VAR_TEMP_2, 3
	goto_if_eq Intro_DetermineRival_12
# 195 "data/emeralbody_rivals/emib_opening.pory"
	compare VAR_TEMP_3, 3
	goto_if_eq Intro_DetermineRival_15
# 199 "data/emeralbody_rivals/emib_opening.pory"
	compare VAR_TEMP_3, 2
	goto_if_eq Intro_DetermineRival_16
Intro_DetermineRival_14:
# 203 "data/emeralbody_rivals/emib_opening.pory"
	compare VAR_TEMP_4, 3
	goto_if_eq Intro_DetermineRival_20
# 207 "data/emeralbody_rivals/emib_opening.pory"
	compare VAR_TEMP_4, 2
	goto_if_eq Intro_DetermineRival_21
Intro_DetermineRival_19:
# 212 "data/emeralbody_rivals/emib_opening.pory"
	goto_if_set FLAG_TEMP_10, Intro_DetermineRival_25
Intro_DetermineRival_24:
# 215 "data/emeralbody_rivals/emib_opening.pory"
	goto_if_set FLAG_TEMP_4, Intro_DetermineRival_28
Intro_DetermineRival_27:
# 218 "data/emeralbody_rivals/emib_opening.pory"
	goto_if_set FLAG_TEMP_3, Intro_DetermineRival_31
Intro_DetermineRival_30:
# 221 "data/emeralbody_rivals/emib_opening.pory"
	goto_if_set FLAG_TEMP_1, Intro_DetermineRival_34
Intro_DetermineRival_33:
# 224 "data/emeralbody_rivals/emib_opening.pory"
	goto_if_unset FLAG_TEMP_10, Intro_DetermineRival_39
Intro_DetermineRival_36:
# 227 "data/emeralbody_rivals/emib_opening.pory"
	goto_if_set FLAG_TEMP_6, Intro_DetermineRival_45
	return

Intro_DetermineRival_2:
# 175 "data/emeralbody_rivals/emib_opening.pory"
	setvar VAR_EMERALBODY_RIVAL, 0
	return

Intro_DetermineRival_3:
# 179 "data/emeralbody_rivals/emib_opening.pory"
	setflag FLAG_TEMP_10
	goto Intro_DetermineRival_1

Intro_DetermineRival_7:
# 183 "data/emeralbody_rivals/emib_opening.pory"
	setvar VAR_EMERALBODY_RIVAL, 1
	return

Intro_DetermineRival_8:
# 187 "data/emeralbody_rivals/emib_opening.pory"
	setflag FLAG_TEMP_1
	goto Intro_DetermineRival_6

Intro_DetermineRival_12:
# 191 "data/emeralbody_rivals/emib_opening.pory"
	setvar VAR_EMERALBODY_RIVAL, 2
	return

Intro_DetermineRival_15:
# 196 "data/emeralbody_rivals/emib_opening.pory"
	setvar VAR_EMERALBODY_RIVAL, 3
	return

Intro_DetermineRival_16:
# 200 "data/emeralbody_rivals/emib_opening.pory"
	setflag FLAG_TEMP_3
	goto Intro_DetermineRival_14

Intro_DetermineRival_20:
# 204 "data/emeralbody_rivals/emib_opening.pory"
	setvar VAR_EMERALBODY_RIVAL, 4
	return

Intro_DetermineRival_21:
# 208 "data/emeralbody_rivals/emib_opening.pory"
	setflag FLAG_TEMP_4
	goto Intro_DetermineRival_19

Intro_DetermineRival_25:
# 213 "data/emeralbody_rivals/emib_opening.pory"
	setvar VAR_EMERALBODY_RIVAL, 0
	goto Intro_DetermineRival_24

Intro_DetermineRival_28:
# 216 "data/emeralbody_rivals/emib_opening.pory"
	setvar VAR_EMERALBODY_RIVAL, 4
	goto Intro_DetermineRival_27

Intro_DetermineRival_31:
# 219 "data/emeralbody_rivals/emib_opening.pory"
	setvar VAR_EMERALBODY_RIVAL, 3
	goto Intro_DetermineRival_30

Intro_DetermineRival_34:
# 222 "data/emeralbody_rivals/emib_opening.pory"
	setvar VAR_EMERALBODY_RIVAL, 1
	goto Intro_DetermineRival_33

Intro_DetermineRival_37:
# 225 "data/emeralbody_rivals/emib_opening.pory"
	setvar VAR_EMERALBODY_RIVAL, 2
	goto Intro_DetermineRival_36

Intro_DetermineRival_38:
# 224 "data/emeralbody_rivals/emib_opening.pory"
	goto_if_unset FLAG_TEMP_3, Intro_DetermineRival_42
	goto Intro_DetermineRival_36

Intro_DetermineRival_39:
# 224 "data/emeralbody_rivals/emib_opening.pory"
	goto_if_unset FLAG_TEMP_1, Intro_DetermineRival_38
	goto Intro_DetermineRival_36

Intro_DetermineRival_42:
# 224 "data/emeralbody_rivals/emib_opening.pory"
	goto_if_unset FLAG_TEMP_4, Intro_DetermineRival_37
	goto Intro_DetermineRival_36

Intro_DetermineRival_45:
# 228 "data/emeralbody_rivals/emib_opening.pory"
	setvar VAR_EMERALBODY_RIVAL, 5
	return


InsideOfTruck_EventScript_MovingBox2::
# 243 "data/emeralbody_rivals/emib_opening.pory"
	goto_if_set FLAG_TEMP_5, InsideOfTruck_EventScript_MovingBox2_2
# 268 "data/emeralbody_rivals/emib_opening.pory"
	msgbox InsideOfTruck_Text_BoxPrintedWithMonLogo, MSGBOX_SIGN
# 269 "data/emeralbody_rivals/emib_opening.pory"
	setflag FLAG_TEMP_5
InsideOfTruck_EventScript_MovingBox2_1:
# 271 "data/emeralbody_rivals/emib_opening.pory"
	release
	return

InsideOfTruck_EventScript_MovingBox2_2:
# 244 "data/emeralbody_rivals/emib_opening.pory"
	msgbox InsideOfTruck_EventScript_MovingBox2_Text_0
# 245 "data/emeralbody_rivals/emib_opening.pory"
	special EnterCode
# 246 "data/emeralbody_rivals/emib_opening.pory"
	waitstate
# 247 "data/emeralbody_rivals/emib_opening.pory"
	special GetCodeFeedback
# 248 "data/emeralbody_rivals/emib_opening.pory"
	compare VAR_RESULT, 1
	goto_if_eq InsideOfTruck_EventScript_MovingBox2_6
# 254 "data/emeralbody_rivals/emib_opening.pory"
	compare VAR_RESULT, 2
	goto_if_eq InsideOfTruck_EventScript_MovingBox2_7
# 262 "data/emeralbody_rivals/emib_opening.pory"
	msgbox InsideOfTruck_EventScript_MovingBox2_Text_1
InsideOfTruck_EventScript_MovingBox2_5:
# 264 "data/emeralbody_rivals/emib_opening.pory"
	setvar VAR_RESULT, 0
# 265 "data/emeralbody_rivals/emib_opening.pory"
	warpsilent MAP_INSIDE_OF_TRUCK, 2, 2
	goto InsideOfTruck_EventScript_MovingBox2_1

InsideOfTruck_EventScript_MovingBox2_6:
# 249 "data/emeralbody_rivals/emib_opening.pory"
	setflag FLAG_EMIB_DEMO_1
# 250 "data/emeralbody_rivals/emib_opening.pory"
	setflag FLAG_EMIB_DEMO_2
# 251 "data/emeralbody_rivals/emib_opening.pory"
	setflag FLAG_EMIB_DEMO_3
# 252 "data/emeralbody_rivals/emib_opening.pory"
	msgbox Text_CodeEntrySuccess, MSGBOX_DEFAULT
	goto InsideOfTruck_EventScript_MovingBox2_5

InsideOfTruck_EventScript_MovingBox2_7:
# 255 "data/emeralbody_rivals/emib_opening.pory"
	setflag FLAG_NEW_GAME_PLUS
# 256 "data/emeralbody_rivals/emib_opening.pory"
	setflag FLAG_EMIB_DEMO_1
# 257 "data/emeralbody_rivals/emib_opening.pory"
	setflag FLAG_EMIB_DEMO_2
# 258 "data/emeralbody_rivals/emib_opening.pory"
	setflag FLAG_EMIB_DEMO_3
# 259 "data/emeralbody_rivals/emib_opening.pory"
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
# 94 "data/emeralbody_rivals/emib_opening.pory"
	.string "Q??? Do you show favoritism amongst\n"
	.string "your friendships?$"

Intro_EmibOpening_Text_30:
# 96 "data/emeralbody_rivals/emib_opening.pory"
	.string "Are you sure? That could lead to a\n"
	.string "dangerous journey.$"

Intro_EmibOpening_Text_31:
# 108 "data/emeralbody_rivals/emib_opening.pory"
	.string "Congrats! Your answers have been\n"
	.string "transmitted and recorded.$"

Intro_EmibOpening_Text_32:
# 110 "data/emeralbody_rivals/emib_opening.pory"
	.string "… … …\p"
	.string "The browser closed on its own, cleared\n"
	.string "itself from my internet history, and\l"
	.string "blacklisted me from accessing the URL\l"
	.string "again.\p"
	.string "… … …$"

Intro_EmibOpening_Text_33:
# 122 "data/emeralbody_rivals/emib_opening.pory"
	.string "Jakson posted a link to a video game\n"
	.string "modding webiste.\p"
	.string "Pokémon Emerald remake in the Pokémon\n"
	.string "Anniversary Experience v1.0$"

Intro_EmibOpening_Text_34:
# 127 "data/emeralbody_rivals/emib_opening.pory"
	.string "A chat log branched off from the\n"
	.string "article headline.$"

Intro_EmibOpening_Text_35:
# 129 "data/emeralbody_rivals/emib_opening.pory"
	.string "Remember that Spatial Reality game\n"
	.string "they made for Pokémon's anniversary a\l"
	.string "few years back? Some people made a\l"
	.string "port of Emerald in it.$"

Intro_EmibOpening_Text_36:
# 131 "data/emeralbody_rivals/emib_opening.pory"
	.string "That's awesome!!! I didn't think they'd\n"
	.string "crack the code so easily.$"

Intro_EmibOpening_Text_37:
# 133 "data/emeralbody_rivals/emib_opening.pory"
	.string "Neat.$"

Intro_EmibOpening_Text_38:
# 135 "data/emeralbody_rivals/emib_opening.pory"
	.string "Will have to try it sometime.\n"
	.string "Gen1 in the original was fun.$"

Intro_EmibOpening_Text_39:
# 138 "data/emeralbody_rivals/emib_opening.pory"
	.string "Is this the one that got the\n"
	.string "multiplayer mod last year?$"

Intro_EmibOpening_Text_40:
# 140 "data/emeralbody_rivals/emib_opening.pory"
	.string "That's actually where I was going with\n"
	.string "it. I can put together a modpack if\l"
	.string "anyone is interested.\l"
	.string "Any takers?$"

Intro_EmibOpening_Text_41:
# 143 "data/emeralbody_rivals/emib_opening.pory"
	.string "Day one, I'm in.$"

Intro_EmibOpening_Text_42:
# 145 "data/emeralbody_rivals/emib_opening.pory"
	.string "How much is the base game to purchase?$"

Intro_EmibOpening_Text_43:
# 147 "data/emeralbody_rivals/emib_opening.pory"
	.string "No need. I've got like a dozen extra\n"
	.string "redemption codes for it.$"

Intro_EmibOpening_Text_44:
# 149 "data/emeralbody_rivals/emib_opening.pory"
	.string "… … … Why do you have a bunch of extra\n"
	.string "copies?$"

Intro_EmibOpening_Text_45:
# 151 "data/emeralbody_rivals/emib_opening.pory"
	.string "I'm in, too. Feels like forever since we\n"
	.string "all last got together and hung out or\l"
	.string "played a game together.$"

Intro_EmibOpening_Text_46:
# 153 "data/emeralbody_rivals/emib_opening.pory"
	.string "{EMOJI_BIGSMILE}{EMOJI_RIGHT_THUMBS} Give me a few days and I'll set up the\n"
	.string "mods and a server.$"

Intro_EmibOpening_Text_47:
# 157 "data/emeralbody_rivals/emib_opening.pory"
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
# 244 "data/emeralbody_rivals/emib_opening.pory"
	.string "Enter a code.$"

InsideOfTruck_EventScript_MovingBox2_Text_1:
# 262 "data/emeralbody_rivals/emib_opening.pory"
	.string "Valid code not entered.$"

CommonText_Feed::
# 233 "data/emeralbody_rivals/emib_opening.pory"
	.string "Feed$"

CommonText_Quiz::
# 237 "data/emeralbody_rivals/emib_opening.pory"
	.string "Quiz$"

Text_CodeEntrySuccess::
# 274 "data/emeralbody_rivals/emib_opening.pory"
	.string "Code entry successful.$"
