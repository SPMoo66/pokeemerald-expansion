# 1 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 2 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_Employee::
# 3 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	lock
# 4 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	faceplayer
# 5 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	goto_if_set FLAG_RETURNED_DEVON_GOODS, RustboroCity_DevonCorp_1F_EventScript_GoodsRecovered
# 6 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	goto_if_set FLAG_DEVON_GOODS_STOLEN, RustboroCity_DevonCorp_1F_EventScript_RobberWasntBright
# 7 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_ThoseShoesAreOurProduct, MSGBOX_DEFAULT
# 8 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	release
# 9 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 10 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 11 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_RobberWasntBright::
# 12 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_RobberWasntVeryBright, MSGBOX_DEFAULT
# 13 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	release
# 14 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 15 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 16 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_GoodsRecovered::
# 17 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_SoundsLikeStolenGoodsRecovered, MSGBOX_DEFAULT
# 18 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	release
# 19 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 20 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 21 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_StairGuard::
# 22 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	lock
# 23 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	faceplayer
# 24 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	goto_if_set FLAG_RETURNED_DEVON_GOODS, RustboroCity_DevonCorp_1F_EventScript_AlwaysWelcome
# 25 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	goto_if_set FLAG_RECOVERED_DEVON_GOODS, RustboroCity_DevonCorp_1F_EventScript_GotRobbed
# 26 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	goto_if_set FLAG_DEVON_GOODS_STOLEN, RustboroCity_DevonCorp_1F_EventScript_GotRobbed
# 27 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_OnlyAuthorizedPeopleEnter, MSGBOX_DEFAULT
# 28 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	release
# 29 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 30 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 31 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_AlwaysWelcome::
# 32 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_YoureAlwaysWelcomeHere, MSGBOX_DEFAULT
# 33 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	release
# 34 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 35 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 36 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_GotRobbed::
# 37 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_HowCouldWeGetRobbed, MSGBOX_DEFAULT
# 38 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	release
# 39 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 40 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 41 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_Greeter::
# 42 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	lock
# 43 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	faceplayer
# 44 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	goto_if_set FLAG_RETURNED_DEVON_GOODS, RustboroCity_DevonCorp_1F_EventScript_WelcomeToDevonCorp
# 45 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	goto_if_set FLAG_RECOVERED_DEVON_GOODS, RustboroCity_DevonCorp_1F_EventScript_StaffGotRobbed
# 46 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	goto_if_set FLAG_DEVON_GOODS_STOLEN, RustboroCity_DevonCorp_1F_EventScript_StaffGotRobbed
# 47 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_WelcomeToDevonCorp, MSGBOX_DEFAULT
# 48 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	release
# 49 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 50 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 51 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_WelcomeToDevonCorp::
# 52 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_WelcomeToDevonCorp, MSGBOX_DEFAULT
# 53 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	release
# 54 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 55 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 56 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_StaffGotRobbed::
# 57 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_StaffGotRobbed, MSGBOX_DEFAULT
# 58 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	release
# 59 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 60 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 61 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_RocksMetalDisplay::
# 62 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_RocksMetalDisplay, MSGBOX_SIGN
# 63 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 64 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 65 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_ProductsDisplay::
# 66 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_ProductDisplay, MSGBOX_SIGN
# 67 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 68 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 69 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_WelcomeToDevonCorp:
# 70 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Hello and welcome to the Devon\n"
# 71 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Corporation.\p"
# 72 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "We're proud producers of items and\n"
# 73 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "medicine that enhance your life.$"
# 74 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 75 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_StaffGotRobbed:
# 76 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "One of our research staff stupidly\n"
# 77 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "got robbed of an important parcel.$"
# 78 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 79 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_ThoseShoesAreOurProduct:
# 80 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Hey, those Running Shoes!\n"
# 81 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "They're one of our products!\p"
# 82 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "It makes me happy when I see someone\n"
# 83 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "using something we made.$"
# 84 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 85 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_RobberWasntVeryBright:
# 86 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "That stolen parcel…\p"
# 87 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Well, sure it's important, but it's not\n"
# 88 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "anything that anyone can use.\p"
# 89 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "In my estimation, that robber must not\n"
# 90 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "have been very bright.$"
# 91 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 92 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_SoundsLikeStolenGoodsRecovered:
# 93 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "It sounds like they've recovered\n"
# 94 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "the ripped-off Devon Goods.$"
# 95 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 96 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_OnlyAuthorizedPeopleEnter:
# 97 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "I'm sorry, only authorized people\n"
# 98 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "are allowed to enter here.$"
# 99 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 100 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_HowCouldWeGetRobbed:
# 101 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "It's beyond stupid.\n"
# 102 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "How could we get robbed?$"
# 103 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 104 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_YoureAlwaysWelcomeHere:
# 105 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Hi, there!\n"
# 106 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "You're always welcome here!$"
# 107 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 108 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_RocksMetalDisplay:
# 109 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Samples of rocks and metal are\n"
# 110 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "displayed in the glass case.\p"
# 111 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "There's a panel with some writing\n"
# 112 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "on it…\p"
# 113 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "“Devon Corporation got its start as\n"
# 114 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "a producer of stones from quarries.\p"
# 115 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "“The company also produced iron from\n"
# 116 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "filings in the sand.\p"
# 117 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "“From that humble start as a producer\n"
# 118 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "of raw materials, Devon developed.\p"
# 119 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "“Devon is now a manufacturer of a wide\n"
# 120 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "range of industrial products.”$"
# 121 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 122 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_ProductDisplay:
# 123 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Prototypes and test products fill\n"
# 124 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "the glass display case.\p"
# 125 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "There's a panel with a description…\p"
# 126 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "“In addition to industrial products,\n"
# 127 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Devon now markets sundries and\l"
# 128 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "pharmaceuticals for better lifestyles.\p"
# 129 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "“Recently, Devon has begun marketing\n"
# 130 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "tools for Pokémon Trainers, including\l"
# 131 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Poké Balls and Pokénav systems.”$"

RustboroCity_DevonCorp_1F_MapScripts::
# 137 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RustboroCity_DevonCorp_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

RustboroCity_DevonCorp_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 138 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	goto_if_unset FLAG_RETURNED_DEVON_GOODS, RustboroCity_DevonCorp_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

RustboroCity_DevonCorp_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 139 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	setobjectxyperm 2, 21, 2
# 140 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_DOWN
	return

