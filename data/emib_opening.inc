Intro_EmibOpening::
# 2 "data/emib_opening.pory"
	msgbox Intro_EmibOpening_Text_0
# 3 "data/emib_opening.pory"
	fadescreen FADE_TO_BLACK
# 4 "data/emib_opening.pory"
	fadenewbgm MUS_DP_B_TOWER
# 5 "data/emib_opening.pory"
	msgbox Intro_EmibOpening_Text_1
# 18 "data/emib_opening.pory"
	speakername CommonText_Feed
# 19 "data/emib_opening.pory"
	msgbox Intro_EmibOpening_Text_2
# 20 "data/emib_opening.pory"
	closemessage
# 21 "data/emib_opening.pory"
	delay 16
# 22 "data/emib_opening.pory"
	speakername CommonText_Feed
# 23 "data/emib_opening.pory"
	msgbox Intro_EmibOpening_Text_3
# 28 "data/emib_opening.pory"
	closemessage
# 29 "data/emib_opening.pory"
	delay 16
# 30 "data/emib_opening.pory"
	msgbox Intro_EmibOpening_Text_4, MSGBOX_YESNO
# 31 "data/emib_opening.pory"
	speakername CommonText_Feed
# 32 "data/emib_opening.pory"
	msgbox Intro_EmibOpening_Text_5
# 34 "data/emib_opening.pory"
	closemessage
# 35 "data/emib_opening.pory"
	msgbox Intro_EmibOpening_Text_6, MSGBOX_YESNO
# 36 "data/emib_opening.pory"
	compare VAR_RESULT, 1
	goto_if_eq Intro_EmibOpening_2
# 64 "data/emib_opening.pory"
	random 4
# 65 "data/emib_opening.pory"
	copyvar VAR_EMERALBODY_RIVAL, VAR_RESULT
Intro_EmibOpening_1:
# 68 "data/emib_opening.pory"
	speakername CommonText_Feed
# 69 "data/emib_opening.pory"
	msgbox Intro_EmibOpening_Text_29
# 71 "data/emib_opening.pory"
	closemessage
# 72 "data/emib_opening.pory"
	delay 16
# 74 "data/emib_opening.pory"
	msgbox Intro_EmibOpening_Text_30
# 75 "data/emib_opening.pory"
	speakername CommonText_Jakson
# 76 "data/emib_opening.pory"
	msgbox Intro_EmibOpening_Text_31
# 77 "data/emib_opening.pory"
	speakername CommonText_Sakura
# 78 "data/emib_opening.pory"
	msgbox Intro_EmibOpening_Text_32
# 79 "data/emib_opening.pory"
	speakername CommonText_Harper
# 80 "data/emib_opening.pory"
	msgbox Intro_EmibOpening_Text_33
# 81 "data/emib_opening.pory"
	speakername CommonText_Redd
# 82 "data/emib_opening.pory"
	msgbox Intro_EmibOpening_Text_34
# 84 "data/emib_opening.pory"
	speakername CommonText_Baron
# 85 "data/emib_opening.pory"
	msgbox Intro_EmibOpening_Text_35
# 86 "data/emib_opening.pory"
	speakername CommonText_Jakson
# 87 "data/emib_opening.pory"
	msgbox Intro_EmibOpening_Text_36
# 89 "data/emib_opening.pory"
	speakername CommonText_Sakura
# 90 "data/emib_opening.pory"
	msgbox Intro_EmibOpening_Text_37
# 91 "data/emib_opening.pory"
	speakername CommonText_Harper
# 92 "data/emib_opening.pory"
	msgbox Intro_EmibOpening_Text_38
# 93 "data/emib_opening.pory"
	speakername CommonText_Redd
# 94 "data/emib_opening.pory"
	msgbox Intro_EmibOpening_Text_39
# 95 "data/emib_opening.pory"
	speakername CommonText_Harper
# 96 "data/emib_opening.pory"
	msgbox Intro_EmibOpening_Text_40
# 97 "data/emib_opening.pory"
	speakername CommonText_Baron
# 98 "data/emib_opening.pory"
	msgbox Intro_EmibOpening_Text_41
# 99 "data/emib_opening.pory"
	speakername CommonText_Jakson
# 100 "data/emib_opening.pory"
	msgbox Intro_EmibOpening_Text_42
# 101 "data/emib_opening.pory"
	closemessage
# 103 "data/emib_opening.pory"
	delay 16
# 104 "data/emib_opening.pory"
	msgbox Intro_EmibOpening_Text_43
# 113 "data/emib_opening.pory"
	closemessage
# 114 "data/emib_opening.pory"
	fadedefaultbgm
# 115 "data/emib_opening.pory"
	fadescreen FADE_FROM_BLACK
	return

Intro_EmibOpening_2:
# 37 "data/emib_opening.pory"
	speakername CommonText_Quiz
# 38 "data/emib_opening.pory"
	msgbox Intro_EmibOpening_Text_7
# 39 "data/emib_opening.pory"
	dynmultichoice 0, 5, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, Intro_EmibOpening_Text_8, Intro_EmibOpening_Text_9, Intro_EmibOpening_Text_10
# 40 "data/emib_opening.pory"
	speakername CommonText_Quiz
# 41 "data/emib_opening.pory"
	msgbox Intro_EmibOpening_Text_11
# 42 "data/emib_opening.pory"
	dynmultichoice 0, 5, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, Intro_EmibOpening_Text_12, Intro_EmibOpening_Text_13, Intro_EmibOpening_Text_14
# 43 "data/emib_opening.pory"
	speakername CommonText_Quiz
# 44 "data/emib_opening.pory"
	msgbox Intro_EmibOpening_Text_15
# 45 "data/emib_opening.pory"
	dynmultichoice 0, 5, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, Intro_EmibOpening_Text_16, Intro_EmibOpening_Text_17, Intro_EmibOpening_Text_18
# 46 "data/emib_opening.pory"
	speakername CommonText_Quiz
# 47 "data/emib_opening.pory"
	msgbox Intro_EmibOpening_Text_19
# 48 "data/emib_opening.pory"
	dynmultichoice 0, 5, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, Intro_EmibOpening_Text_20, Intro_EmibOpening_Text_21, Intro_EmibOpening_Text_22
# 49 "data/emib_opening.pory"
	speakername CommonText_Quiz
# 50 "data/emib_opening.pory"
	msgbox Intro_EmibOpening_Text_23
# 51 "data/emib_opening.pory"
	dynmultichoice 0, 5, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, Intro_EmibOpening_Text_24, Intro_EmibOpening_Text_25, Intro_EmibOpening_Text_26
# 52 "data/emib_opening.pory"
	closemessage
# 53 "data/emib_opening.pory"
	delay 16
# 54 "data/emib_opening.pory"
	speakername CommonText_Quiz
# 55 "data/emib_opening.pory"
	msgbox Intro_EmibOpening_Text_27
# 56 "data/emib_opening.pory"
	closemessage
# 57 "data/emib_opening.pory"
	msgbox Intro_EmibOpening_Text_28
# 60 "data/emib_opening.pory"
	closemessage
# 61 "data/emib_opening.pory"
	delay 16
	goto Intro_EmibOpening_1


Intro_EmibOpening_Text_0:
# 2 "data/emib_opening.pory"
	.string "Earlier…$"

Intro_EmibOpening_Text_1:
# 5 "data/emib_opening.pory"
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
# 19 "data/emib_opening.pory"
	.string "Scientists disucss whether 2104 will be\n"
	.string "the year that manned flights to the\l"
	.string "Mars colony start, and about the\l"
	.string "tourism industry.$"

Intro_EmibOpening_Text_3:
# 23 "data/emib_opening.pory"
	.string "Harper posted a meme.\p"
	.string "“New job, who this”\p"
	.string "An image of a dog wearing sunglasses is\n"
	.string "affixed.\p"
	.string "EMOTE: Cheering skeleton\n"
	.string "EMOTE: Praying for good fortune.$"

Intro_EmibOpening_Text_4:
# 30 "data/emib_opening.pory"
	.string "Keep scrolling?$"

Intro_EmibOpening_Text_5:
# 32 "data/emib_opening.pory"
	.string "Baron posted\n"
	.string "“Nostalgic Pokémon Personality Quiz\l"
	.string "for the Soul”$"

Intro_EmibOpening_Text_6:
# 35 "data/emib_opening.pory"
	.string "Try the quiz?$"

Intro_EmibOpening_Text_7:
# 38 "data/emib_opening.pory"
	.string "Q1. You receive a gift, and are curious\n"
	.string "about it. What next?$"

Intro_EmibOpening_Text_8:
# 39 "data/emib_opening.pory"
	.string "Open it now$"

Intro_EmibOpening_Text_9:
# 39 "data/emib_opening.pory"
	.string "Open it later$"

Intro_EmibOpening_Text_10:
# 39 "data/emib_opening.pory"
	.string "Get someone else to open it.$"

Intro_EmibOpening_Text_11:
# 41 "data/emib_opening.pory"
	.string "Q2. It is a pleasant day at the beach.\n"
	.string "How are you feeling?$"

Intro_EmibOpening_Text_12:
# 42 "data/emib_opening.pory"
	.string "This feels great!$"

Intro_EmibOpening_Text_13:
# 42 "data/emib_opening.pory"
	.string "Snore…$"

Intro_EmibOpening_Text_14:
# 42 "data/emib_opening.pory"
	.string "I want to go home!$"

Intro_EmibOpening_Text_15:
# 44 "data/emib_opening.pory"
	.string "Q3. You're suddenly locked in a\n"
	.string "pitch-black room! What do you do?$"

Intro_EmibOpening_Text_16:
# 45 "data/emib_opening.pory"
	.string "Kick the door$"

Intro_EmibOpening_Text_17:
# 45 "data/emib_opening.pory"
	.string "Cry$"

Intro_EmibOpening_Text_18:
# 45 "data/emib_opening.pory"
	.string "Clean the room$"

Intro_EmibOpening_Text_19:
# 47 "data/emib_opening.pory"
	.string "Q4. Do you like groan inducing puns?$"

Intro_EmibOpening_Text_20:
# 48 "data/emib_opening.pory"
	.string "Love them!$"

Intro_EmibOpening_Text_21:
# 48 "data/emib_opening.pory"
	.string "A little$"

Intro_EmibOpening_Text_22:
# 48 "data/emib_opening.pory"
	.string "Spare me$"

Intro_EmibOpening_Text_23:
# 50 "data/emib_opening.pory"
	.string "Q5. The road forks. A sign says treasure\n"
	.string "is to the right. You…?$"

Intro_EmibOpening_Text_24:
# 51 "data/emib_opening.pory"
	.string "Instantly go right$"

Intro_EmibOpening_Text_25:
# 51 "data/emib_opening.pory"
	.string "It's a trap! Go left$"

Intro_EmibOpening_Text_26:
# 51 "data/emib_opening.pory"
	.string "Flip a coin$"

Intro_EmibOpening_Text_27:
# 55 "data/emib_opening.pory"
	.string "Congrats! Your answers have been\n"
	.string "transmitted and recorded.$"

Intro_EmibOpening_Text_28:
# 57 "data/emib_opening.pory"
	.string "… … …\p"
	.string "The browser closed on its own, cleared\n"
	.string "itself from my internet history, and\l"
	.string "blacklisted me from accessing the URL\l"
	.string "again.\p"
	.string "… … …$"

Intro_EmibOpening_Text_29:
# 69 "data/emib_opening.pory"
	.string "Jakson posted a link to a video game\n"
	.string "modding webiste.\p"
	.string "Pokémon Emerald remake in the Pokémon\n"
	.string "Anniversary Experience v1.0$"

Intro_EmibOpening_Text_30:
# 74 "data/emib_opening.pory"
	.string "A chat log branched off from the\n"
	.string "article headline.$"

Intro_EmibOpening_Text_31:
# 76 "data/emib_opening.pory"
	.string "Remember that Spatial Reality game\n"
	.string "they made for Pokémon's anniversary a\l"
	.string "few years back? Some people made a\l"
	.string "port of Emerald in it.$"

Intro_EmibOpening_Text_32:
# 78 "data/emib_opening.pory"
	.string "That's awesome!!! I didn't think they'd\n"
	.string "crack the code so easily.$"

Intro_EmibOpening_Text_33:
# 80 "data/emib_opening.pory"
	.string "Neat.$"

Intro_EmibOpening_Text_34:
# 82 "data/emib_opening.pory"
	.string "Will have to try it sometime.\n"
	.string "Gen1 in the original was fun.$"

Intro_EmibOpening_Text_35:
# 85 "data/emib_opening.pory"
	.string "Is this the one that got the\n"
	.string "multiplayer mod last year?$"

Intro_EmibOpening_Text_36:
# 87 "data/emib_opening.pory"
	.string "That's actually where I was going with\n"
	.string "it. I can put together a modpack if\l"
	.string "anyone is interested.\l"
	.string "Any takers?$"

Intro_EmibOpening_Text_37:
# 90 "data/emib_opening.pory"
	.string "Day one, I'm in.$"

Intro_EmibOpening_Text_38:
# 92 "data/emib_opening.pory"
	.string "How much is the base game to purchase?$"

Intro_EmibOpening_Text_39:
# 94 "data/emib_opening.pory"
	.string "No need. I've got like a dozen extra\n"
	.string "redemption codes for it.$"

Intro_EmibOpening_Text_40:
# 96 "data/emib_opening.pory"
	.string "… … … Why do you have a bunch of extra\n"
	.string "copies?$"

Intro_EmibOpening_Text_41:
# 98 "data/emib_opening.pory"
	.string "I'm in, too. Feels like forever since we\n"
	.string "all last got together and hung out or\l"
	.string "played a game together.$"

Intro_EmibOpening_Text_42:
# 100 "data/emib_opening.pory"
	.string "{EMOJI_BIGSMILE}{EMOJI_RIGHT_THUMBS} Give me a few days and I'll set up the\n"
	.string "mods and a server.$"

Intro_EmibOpening_Text_43:
# 104 "data/emib_opening.pory"
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
# 118 "data/emib_opening.pory"
	.string "Feed$"

CommonText_Quiz::
# 122 "data/emib_opening.pory"
	.string "Quiz$"
