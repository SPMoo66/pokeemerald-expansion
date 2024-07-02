Intro_EmibOpening::
# 2 "data/emib_opening.pory"
	msgbox Intro_EmibOpening_Text_0
# 3 "data/emib_opening.pory"
	fadescreen FADE_TO_BLACK
# 4 "data/emib_opening.pory"
	fadenewbgm MUS_DP_B_TOWER
# 5 "data/emib_opening.pory"
	setvar VAR_0x8000, MUGSHOT_TEST
# 6 "data/emib_opening.pory"
	callnative DrawMugshot
# 7 "data/emib_opening.pory"
	msgbox Intro_EmibOpening_Text_1
# 20 "data/emib_opening.pory"
	speakername CommonText_Feed
# 21 "data/emib_opening.pory"
	msgbox Intro_EmibOpening_Text_2
# 22 "data/emib_opening.pory"
	closemessage
# 23 "data/emib_opening.pory"
	delay 16
# 24 "data/emib_opening.pory"
	speakername CommonText_Feed
# 25 "data/emib_opening.pory"
	msgbox Intro_EmibOpening_Text_3
# 30 "data/emib_opening.pory"
	closemessage
# 31 "data/emib_opening.pory"
	delay 16
# 32 "data/emib_opening.pory"
	msgbox Intro_EmibOpening_Text_4, MSGBOX_YESNO
# 33 "data/emib_opening.pory"
	speakername CommonText_Feed
# 34 "data/emib_opening.pory"
	msgbox Intro_EmibOpening_Text_5
# 36 "data/emib_opening.pory"
	closemessage
# 37 "data/emib_opening.pory"
	msgbox Intro_EmibOpening_Text_6, MSGBOX_YESNO
# 38 "data/emib_opening.pory"
	compare VAR_RESULT, 1
	goto_if_eq Intro_EmibOpening_2
# 109 "data/emib_opening.pory"
	random 4
# 110 "data/emib_opening.pory"
	copyvar VAR_EMERALBODY_RIVAL, VAR_RESULT
Intro_EmibOpening_1:
# 113 "data/emib_opening.pory"
	speakername CommonText_Feed
# 114 "data/emib_opening.pory"
	msgbox Intro_EmibOpening_Text_29
# 116 "data/emib_opening.pory"
	closemessage
# 117 "data/emib_opening.pory"
	delay 16
# 119 "data/emib_opening.pory"
	msgbox Intro_EmibOpening_Text_30
# 120 "data/emib_opening.pory"
	speakername CommonText_Jakson
# 121 "data/emib_opening.pory"
	msgbox Intro_EmibOpening_Text_31
# 122 "data/emib_opening.pory"
	speakername CommonText_Sakura
# 123 "data/emib_opening.pory"
	msgbox Intro_EmibOpening_Text_32
# 124 "data/emib_opening.pory"
	speakername CommonText_Harper
# 125 "data/emib_opening.pory"
	msgbox Intro_EmibOpening_Text_33
# 126 "data/emib_opening.pory"
	speakername CommonText_Redd
# 127 "data/emib_opening.pory"
	msgbox Intro_EmibOpening_Text_34
# 129 "data/emib_opening.pory"
	speakername CommonText_Baron
# 130 "data/emib_opening.pory"
	msgbox Intro_EmibOpening_Text_35
# 131 "data/emib_opening.pory"
	speakername CommonText_Jakson
# 132 "data/emib_opening.pory"
	msgbox Intro_EmibOpening_Text_36
# 134 "data/emib_opening.pory"
	speakername CommonText_Sakura
# 135 "data/emib_opening.pory"
	msgbox Intro_EmibOpening_Text_37
# 136 "data/emib_opening.pory"
	speakername CommonText_Harper
# 137 "data/emib_opening.pory"
	msgbox Intro_EmibOpening_Text_38
# 138 "data/emib_opening.pory"
	speakername CommonText_Redd
# 139 "data/emib_opening.pory"
	msgbox Intro_EmibOpening_Text_39
# 140 "data/emib_opening.pory"
	speakername CommonText_Harper
# 141 "data/emib_opening.pory"
	msgbox Intro_EmibOpening_Text_40
# 142 "data/emib_opening.pory"
	speakername CommonText_Baron
# 143 "data/emib_opening.pory"
	msgbox Intro_EmibOpening_Text_41
# 144 "data/emib_opening.pory"
	speakername CommonText_Jakson
# 145 "data/emib_opening.pory"
	msgbox Intro_EmibOpening_Text_42
# 146 "data/emib_opening.pory"
	closemessage
# 148 "data/emib_opening.pory"
	delay 16
# 149 "data/emib_opening.pory"
	msgbox Intro_EmibOpening_Text_43
# 158 "data/emib_opening.pory"
	closemessage
# 159 "data/emib_opening.pory"
	callnative ClearMugshot
# 160 "data/emib_opening.pory"
	fadedefaultbgm
# 161 "data/emib_opening.pory"
	fadescreen FADE_FROM_BLACK
	return

Intro_EmibOpening_2:
# 39 "data/emib_opening.pory"
	speakername CommonText_Quiz
# 40 "data/emib_opening.pory"
	msgbox Intro_EmibOpening_Text_7
# 41 "data/emib_opening.pory"
	dynmultichoice 0, 5, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, Intro_EmibOpening_Text_8, Intro_EmibOpening_Text_9, Intro_EmibOpening_Text_10
# 42 "data/emib_opening.pory"
	switch VAR_RESULT
# 43 "data/emib_opening.pory"
	case 0, Intro_EmibOpening_7
# 45 "data/emib_opening.pory"
	case 1, Intro_EmibOpening_8
# 47 "data/emib_opening.pory"
	case 2, Intro_EmibOpening_9
Intro_EmibOpening_5:
# 50 "data/emib_opening.pory"
	speakername CommonText_Quiz
# 51 "data/emib_opening.pory"
	msgbox Intro_EmibOpening_Text_11
# 52 "data/emib_opening.pory"
	dynmultichoice 0, 5, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, Intro_EmibOpening_Text_12, Intro_EmibOpening_Text_13, Intro_EmibOpening_Text_14
# 53 "data/emib_opening.pory"
	switch VAR_RESULT
# 54 "data/emib_opening.pory"
	case 0, Intro_EmibOpening_12
# 56 "data/emib_opening.pory"
	case 1, Intro_EmibOpening_13
# 58 "data/emib_opening.pory"
	case 2, Intro_EmibOpening_14
Intro_EmibOpening_10:
# 61 "data/emib_opening.pory"
	speakername CommonText_Quiz
# 62 "data/emib_opening.pory"
	msgbox Intro_EmibOpening_Text_15
# 63 "data/emib_opening.pory"
	dynmultichoice 0, 5, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, Intro_EmibOpening_Text_16, Intro_EmibOpening_Text_17, Intro_EmibOpening_Text_18
# 64 "data/emib_opening.pory"
	switch VAR_RESULT
# 65 "data/emib_opening.pory"
	case 0, Intro_EmibOpening_17
# 67 "data/emib_opening.pory"
	case 1, Intro_EmibOpening_18
# 69 "data/emib_opening.pory"
	case 2, Intro_EmibOpening_19
Intro_EmibOpening_15:
# 72 "data/emib_opening.pory"
	speakername CommonText_Quiz
# 73 "data/emib_opening.pory"
	msgbox Intro_EmibOpening_Text_19
# 74 "data/emib_opening.pory"
	dynmultichoice 0, 5, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, Intro_EmibOpening_Text_20, Intro_EmibOpening_Text_21, Intro_EmibOpening_Text_22
# 75 "data/emib_opening.pory"
	switch VAR_RESULT
# 76 "data/emib_opening.pory"
	case 0, Intro_EmibOpening_22
# 78 "data/emib_opening.pory"
	case 1, Intro_EmibOpening_23
# 80 "data/emib_opening.pory"
	case 2, Intro_EmibOpening_24
Intro_EmibOpening_20:
# 83 "data/emib_opening.pory"
	speakername CommonText_Quiz
# 84 "data/emib_opening.pory"
	msgbox Intro_EmibOpening_Text_23
# 85 "data/emib_opening.pory"
	dynmultichoice 0, 5, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, Intro_EmibOpening_Text_24, Intro_EmibOpening_Text_25, Intro_EmibOpening_Text_26
# 86 "data/emib_opening.pory"
	switch VAR_RESULT
# 87 "data/emib_opening.pory"
	case 0, Intro_EmibOpening_27
# 89 "data/emib_opening.pory"
	case 1, Intro_EmibOpening_28
# 91 "data/emib_opening.pory"
	case 2, Intro_EmibOpening_29
Intro_EmibOpening_25:
# 94 "data/emib_opening.pory"
	closemessage
# 96 "data/emib_opening.pory"
	call Intro_DetermineRival
# 98 "data/emib_opening.pory"
	delay 16
# 99 "data/emib_opening.pory"
	speakername CommonText_Quiz
# 100 "data/emib_opening.pory"
	msgbox Intro_EmibOpening_Text_27
# 101 "data/emib_opening.pory"
	closemessage
# 102 "data/emib_opening.pory"
	msgbox Intro_EmibOpening_Text_28
# 105 "data/emib_opening.pory"
	closemessage
# 106 "data/emib_opening.pory"
	delay 16
	goto Intro_EmibOpening_1

Intro_EmibOpening_7:
# 44 "data/emib_opening.pory"
	addvar VAR_TEMP_4, 1
	goto Intro_EmibOpening_5

Intro_EmibOpening_8:
# 46 "data/emib_opening.pory"
	addvar VAR_TEMP_3, 1
	goto Intro_EmibOpening_5

Intro_EmibOpening_9:
# 48 "data/emib_opening.pory"
	addvar VAR_TEMP_1, 1
	goto Intro_EmibOpening_5

Intro_EmibOpening_12:
# 55 "data/emib_opening.pory"
	addvar VAR_TEMP_1, 1
	goto Intro_EmibOpening_10

Intro_EmibOpening_13:
# 57 "data/emib_opening.pory"
	addvar VAR_TEMP_2, 1
	goto Intro_EmibOpening_10

Intro_EmibOpening_14:
# 59 "data/emib_opening.pory"
	addvar VAR_TEMP_0, 1
	goto Intro_EmibOpening_10

Intro_EmibOpening_17:
# 66 "data/emib_opening.pory"
	addvar VAR_TEMP_3, 1
	goto Intro_EmibOpening_15

Intro_EmibOpening_18:
# 68 "data/emib_opening.pory"
	addvar VAR_TEMP_4, 1
	goto Intro_EmibOpening_15

Intro_EmibOpening_19:
# 70 "data/emib_opening.pory"
	addvar VAR_TEMP_0, 1
	goto Intro_EmibOpening_15

Intro_EmibOpening_22:
# 77 "data/emib_opening.pory"
	addvar VAR_TEMP_4, 1
	goto Intro_EmibOpening_20

Intro_EmibOpening_23:
# 79 "data/emib_opening.pory"
	addvar VAR_TEMP_0, 1
	goto Intro_EmibOpening_20

Intro_EmibOpening_24:
# 81 "data/emib_opening.pory"
	addvar VAR_TEMP_2, 1
	goto Intro_EmibOpening_20

Intro_EmibOpening_27:
# 88 "data/emib_opening.pory"
	addvar VAR_TEMP_3, 1
	goto Intro_EmibOpening_25

Intro_EmibOpening_28:
# 90 "data/emib_opening.pory"
	addvar VAR_TEMP_2, 1
	goto Intro_EmibOpening_25

Intro_EmibOpening_29:
# 92 "data/emib_opening.pory"
	addvar VAR_TEMP_1, 1
	goto Intro_EmibOpening_25


Intro_DetermineRival::
# 166 "data/emib_opening.pory"
	compare VAR_TEMP_0, 3
	goto_if_eq Intro_DetermineRival_2
# 170 "data/emib_opening.pory"
	compare VAR_TEMP_0, 2
	goto_if_eq Intro_DetermineRival_3
Intro_DetermineRival_1:
# 174 "data/emib_opening.pory"
	compare VAR_TEMP_1, 3
	goto_if_eq Intro_DetermineRival_7
# 178 "data/emib_opening.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq Intro_DetermineRival_8
Intro_DetermineRival_6:
# 182 "data/emib_opening.pory"
	compare VAR_TEMP_2, 3
	goto_if_eq Intro_DetermineRival_12
# 187 "data/emib_opening.pory"
	compare VAR_TEMP_3, 3
	goto_if_eq Intro_DetermineRival_15
# 191 "data/emib_opening.pory"
	compare VAR_TEMP_3, 2
	goto_if_eq Intro_DetermineRival_16
Intro_DetermineRival_14:
# 195 "data/emib_opening.pory"
	compare VAR_TEMP_4, 3
	goto_if_eq Intro_DetermineRival_20
# 199 "data/emib_opening.pory"
	compare VAR_TEMP_4, 2
	goto_if_eq Intro_DetermineRival_21
Intro_DetermineRival_19:
# 204 "data/emib_opening.pory"
	goto_if_set FLAG_TEMP_10, Intro_DetermineRival_25
Intro_DetermineRival_24:
# 207 "data/emib_opening.pory"
	goto_if_set FLAG_TEMP_4, Intro_DetermineRival_28
Intro_DetermineRival_27:
# 210 "data/emib_opening.pory"
	goto_if_set FLAG_TEMP_3, Intro_DetermineRival_31
Intro_DetermineRival_30:
# 213 "data/emib_opening.pory"
	goto_if_set FLAG_TEMP_1, Intro_DetermineRival_34
Intro_DetermineRival_33:
# 216 "data/emib_opening.pory"
	goto_if_unset FLAG_TEMP_10, Intro_DetermineRival_38
	return

Intro_DetermineRival_2:
# 167 "data/emib_opening.pory"
	setvar VAR_EMERALBODY_RIVAL, 0
	return

Intro_DetermineRival_3:
# 171 "data/emib_opening.pory"
	setflag FLAG_TEMP_10
	goto Intro_DetermineRival_1

Intro_DetermineRival_7:
# 175 "data/emib_opening.pory"
	setvar VAR_EMERALBODY_RIVAL, 1
	return

Intro_DetermineRival_8:
# 179 "data/emib_opening.pory"
	setflag FLAG_TEMP_1
	goto Intro_DetermineRival_6

Intro_DetermineRival_12:
# 183 "data/emib_opening.pory"
	setvar VAR_EMERALBODY_RIVAL, 2
	return

Intro_DetermineRival_15:
# 188 "data/emib_opening.pory"
	setvar VAR_EMERALBODY_RIVAL, 3
	return

Intro_DetermineRival_16:
# 192 "data/emib_opening.pory"
	setflag FLAG_TEMP_3
	goto Intro_DetermineRival_14

Intro_DetermineRival_20:
# 196 "data/emib_opening.pory"
	setvar VAR_EMERALBODY_RIVAL, 4
	return

Intro_DetermineRival_21:
# 200 "data/emib_opening.pory"
	setflag FLAG_TEMP_4
	goto Intro_DetermineRival_19

Intro_DetermineRival_25:
# 205 "data/emib_opening.pory"
	setvar VAR_EMERALBODY_RIVAL, 0
	goto Intro_DetermineRival_24

Intro_DetermineRival_28:
# 208 "data/emib_opening.pory"
	setvar VAR_EMERALBODY_RIVAL, 4
	goto Intro_DetermineRival_27

Intro_DetermineRival_31:
# 211 "data/emib_opening.pory"
	setvar VAR_EMERALBODY_RIVAL, 3
	goto Intro_DetermineRival_30

Intro_DetermineRival_34:
# 214 "data/emib_opening.pory"
	setvar VAR_EMERALBODY_RIVAL, 1
	goto Intro_DetermineRival_33

Intro_DetermineRival_36:
# 217 "data/emib_opening.pory"
	setvar VAR_EMERALBODY_RIVAL, 2
	return

Intro_DetermineRival_37:
# 216 "data/emib_opening.pory"
	goto_if_unset FLAG_TEMP_3, Intro_DetermineRival_41
	return

Intro_DetermineRival_38:
# 216 "data/emib_opening.pory"
	goto_if_unset FLAG_TEMP_1, Intro_DetermineRival_37
	return

Intro_DetermineRival_41:
# 216 "data/emib_opening.pory"
	goto_if_unset FLAG_TEMP_4, Intro_DetermineRival_36
	return


Intro_EmibOpening_Text_0:
# 2 "data/emib_opening.pory"
	.string "Earlier…$"

Intro_EmibOpening_Text_1:
# 7 "data/emib_opening.pory"
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
# 21 "data/emib_opening.pory"
	.string "Scientists disucss whether 2104 will be\n"
	.string "the year that manned flights to the\l"
	.string "Mars colony start, and about the\l"
	.string "tourism industry.$"

Intro_EmibOpening_Text_3:
# 25 "data/emib_opening.pory"
	.string "Harper posted a meme.\p"
	.string "“New job, who this”\p"
	.string "An image of a dog wearing sunglasses is\n"
	.string "affixed.\p"
	.string "EMOTE: Cheering skeleton\n"
	.string "EMOTE: Praying for good fortune.$"

Intro_EmibOpening_Text_4:
# 32 "data/emib_opening.pory"
	.string "Keep scrolling?$"

Intro_EmibOpening_Text_5:
# 34 "data/emib_opening.pory"
	.string "Baron posted\n"
	.string "“Nostalgic Pokémon Personality Quiz\l"
	.string "for the Soul”$"

Intro_EmibOpening_Text_6:
# 37 "data/emib_opening.pory"
	.string "Try the quiz?$"

Intro_EmibOpening_Text_7:
# 40 "data/emib_opening.pory"
	.string "Q1. You receive a gift, and are curious\n"
	.string "about it. What next?$"

Intro_EmibOpening_Text_8:
# 41 "data/emib_opening.pory"
	.string "Open it now$"

Intro_EmibOpening_Text_9:
# 41 "data/emib_opening.pory"
	.string "Open it later$"

Intro_EmibOpening_Text_10:
# 41 "data/emib_opening.pory"
	.string "Get someone else to open it.$"

Intro_EmibOpening_Text_11:
# 51 "data/emib_opening.pory"
	.string "Q2. It is a pleasant day at the beach.\n"
	.string "How are you feeling?$"

Intro_EmibOpening_Text_12:
# 52 "data/emib_opening.pory"
	.string "This feels great!$"

Intro_EmibOpening_Text_13:
# 52 "data/emib_opening.pory"
	.string "Snore…$"

Intro_EmibOpening_Text_14:
# 52 "data/emib_opening.pory"
	.string "I want to go home!$"

Intro_EmibOpening_Text_15:
# 62 "data/emib_opening.pory"
	.string "Q3. You're suddenly locked in a\n"
	.string "pitch-black room! What do you do?$"

Intro_EmibOpening_Text_16:
# 63 "data/emib_opening.pory"
	.string "Kick the door$"

Intro_EmibOpening_Text_17:
# 63 "data/emib_opening.pory"
	.string "Cry$"

Intro_EmibOpening_Text_18:
# 63 "data/emib_opening.pory"
	.string "Clean the room$"

Intro_EmibOpening_Text_19:
# 73 "data/emib_opening.pory"
	.string "Q4. Do you like groan inducing puns?$"

Intro_EmibOpening_Text_20:
# 74 "data/emib_opening.pory"
	.string "Love them!$"

Intro_EmibOpening_Text_21:
# 74 "data/emib_opening.pory"
	.string "A little$"

Intro_EmibOpening_Text_22:
# 74 "data/emib_opening.pory"
	.string "Spare me$"

Intro_EmibOpening_Text_23:
# 84 "data/emib_opening.pory"
	.string "Q5. The road forks. A sign says treasure\n"
	.string "is to the right. You…?$"

Intro_EmibOpening_Text_24:
# 85 "data/emib_opening.pory"
	.string "Instantly go right$"

Intro_EmibOpening_Text_25:
# 85 "data/emib_opening.pory"
	.string "It's a trap! Go left$"

Intro_EmibOpening_Text_26:
# 85 "data/emib_opening.pory"
	.string "Flip a coin$"

Intro_EmibOpening_Text_27:
# 100 "data/emib_opening.pory"
	.string "Congrats! Your answers have been\n"
	.string "transmitted and recorded.$"

Intro_EmibOpening_Text_28:
# 102 "data/emib_opening.pory"
	.string "… … …\p"
	.string "The browser closed on its own, cleared\n"
	.string "itself from my internet history, and\l"
	.string "blacklisted me from accessing the URL\l"
	.string "again.\p"
	.string "… … …$"

Intro_EmibOpening_Text_29:
# 114 "data/emib_opening.pory"
	.string "Jakson posted a link to a video game\n"
	.string "modding webiste.\p"
	.string "Pokémon Emerald remake in the Pokémon\n"
	.string "Anniversary Experience v1.0$"

Intro_EmibOpening_Text_30:
# 119 "data/emib_opening.pory"
	.string "A chat log branched off from the\n"
	.string "article headline.$"

Intro_EmibOpening_Text_31:
# 121 "data/emib_opening.pory"
	.string "Remember that Spatial Reality game\n"
	.string "they made for Pokémon's anniversary a\l"
	.string "few years back? Some people made a\l"
	.string "port of Emerald in it.$"

Intro_EmibOpening_Text_32:
# 123 "data/emib_opening.pory"
	.string "That's awesome!!! I didn't think they'd\n"
	.string "crack the code so easily.$"

Intro_EmibOpening_Text_33:
# 125 "data/emib_opening.pory"
	.string "Neat.$"

Intro_EmibOpening_Text_34:
# 127 "data/emib_opening.pory"
	.string "Will have to try it sometime.\n"
	.string "Gen1 in the original was fun.$"

Intro_EmibOpening_Text_35:
# 130 "data/emib_opening.pory"
	.string "Is this the one that got the\n"
	.string "multiplayer mod last year?$"

Intro_EmibOpening_Text_36:
# 132 "data/emib_opening.pory"
	.string "That's actually where I was going with\n"
	.string "it. I can put together a modpack if\l"
	.string "anyone is interested.\l"
	.string "Any takers?$"

Intro_EmibOpening_Text_37:
# 135 "data/emib_opening.pory"
	.string "Day one, I'm in.$"

Intro_EmibOpening_Text_38:
# 137 "data/emib_opening.pory"
	.string "How much is the base game to purchase?$"

Intro_EmibOpening_Text_39:
# 139 "data/emib_opening.pory"
	.string "No need. I've got like a dozen extra\n"
	.string "redemption codes for it.$"

Intro_EmibOpening_Text_40:
# 141 "data/emib_opening.pory"
	.string "… … … Why do you have a bunch of extra\n"
	.string "copies?$"

Intro_EmibOpening_Text_41:
# 143 "data/emib_opening.pory"
	.string "I'm in, too. Feels like forever since we\n"
	.string "all last got together and hung out or\l"
	.string "played a game together.$"

Intro_EmibOpening_Text_42:
# 145 "data/emib_opening.pory"
	.string "{EMOJI_BIGSMILE}{EMOJI_RIGHT_THUMBS} Give me a few days and I'll set up the\n"
	.string "mods and a server.$"

Intro_EmibOpening_Text_43:
# 149 "data/emib_opening.pory"
	.string "Initializing scripts…\n"
	.string "Initializing textures…\l"
	.string "Initializing mods…\l"
	.string "Initializing mods {EMOJI_LEFT_PAREN}multi-framework{EMOJI_RIGHT_PAREN}…\l"
	.string "Initializing mods {EMOJI_LEFT_PAREN}emerald your body{EMOJI_RIGHT_PAREN}…\l"
	.string "Initializing mods {EMOJI_LEFT_PAREN}custom pack 2{EMOJI_RIGHT_PAREN}…\l"
	.string "Initializing world…\l"
	.string "… … …\l"
	.string "Connecting to server…$"

CommonText_Feed::
# 222 "data/emib_opening.pory"
	.string "Feed$"

CommonText_Quiz::
# 226 "data/emib_opening.pory"
	.string "Quiz$"
