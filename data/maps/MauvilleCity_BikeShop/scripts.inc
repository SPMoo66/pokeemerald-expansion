# 1 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 2 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_MapScripts::
# 3 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.byte 0
# 4 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 5 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_Assistant::
# 6 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_HandbooksAreInBack, MSGBOX_NPC
# 7 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 8 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 9 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_MachBikeHandbook::
# 10 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	message MauvilleCity_BikeShop_Text_MachHandbookWhichPage
# 11 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmessage
# 12 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseMachHandbookPage
# 13 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 14 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 15 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_ChooseMachHandbookPage::
# 16 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	multichoice 0, 0, MULTI_MACH_BIKE_INFO, FALSE
# 17 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	switch VAR_RESULT
# 18 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 0, MauvilleCity_BikeShop_EventScript_HowToRide
# 19 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 1, MauvilleCity_BikeShop_EventScript_HowToTurn
# 20 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 2, MauvilleCity_BikeShop_EventScript_SandySlopes
# 21 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 3, MauvilleCity_BikeShop_EventScript_ExitMachHandbook
# 22 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case MULTI_B_PRESSED, MauvilleCity_BikeShop_EventScript_ExitMachHandbook
# 23 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 24 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 25 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_HowToRide::
# 26 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	message MauvilleCity_BikeShop_Text_HowToRideMachBike
# 27 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmessage
# 28 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseMachHandbookPage
# 29 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 30 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 31 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_HowToTurn::
# 32 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	message MauvilleCity_BikeShop_Text_HowToTurnMachBike
# 33 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmessage
# 34 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseMachHandbookPage
# 35 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 36 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 37 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_SandySlopes::
# 38 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	message MauvilleCity_BikeShop_Text_SandySlopes
# 39 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmessage
# 40 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseMachHandbookPage
# 41 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 42 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 43 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_ExitMachHandbook::
# 44 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	release
# 45 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 46 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 47 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_AcroBikeHandbook::
# 48 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	message MauvilleCity_BikeShop_Text_AcroHandbookWhichPage
# 49 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmessage
# 50 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseAcroHandbookPage
# 51 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 52 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 53 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_ChooseAcroHandbookPage::
# 54 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	multichoice 0, 0, MULTI_ACRO_BIKE_INFO, FALSE
# 55 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	switch VAR_RESULT
# 56 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 0, MauvilleCity_BikeShop_EventScript_Wheelies
# 57 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 1, MauvilleCity_BikeShop_EventScript_BunnyHops
# 58 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 2, MauvilleCity_BikeShop_EventScript_Jumps
# 59 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 3, MauvilleCity_BikeShop_EventScript_ExitAcroHandbook
# 60 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case MULTI_B_PRESSED, MauvilleCity_BikeShop_EventScript_ExitAcroHandbook
# 61 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 62 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 63 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_Wheelies::
# 64 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	message MauvilleCity_BikeShop_Text_Wheelies
# 65 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmessage
# 66 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseAcroHandbookPage
# 67 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 68 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 69 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_BunnyHops::
# 70 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	message MauvilleCity_BikeShop_Text_BunnyHops
# 71 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmessage
# 72 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseAcroHandbookPage
# 73 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 74 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 75 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_Jumps::
# 76 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	message MauvilleCity_BikeShop_Text_Jumps
# 77 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmessage
# 78 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseAcroHandbookPage
# 79 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 80 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 81 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_ExitAcroHandbook::
# 82 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	release
# 83 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 84 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 85 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_HandbooksAreInBack:
# 86 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "I'm learning about Bikes while\n"
# 87 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "I work here.\p"
# 88 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "If you need advice on how to ride your\n"
# 89 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Bike, there're a couple handbooks in\l"
# 90 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "the back.$"
# 91 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 92 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_MachHandbookWhichPage:
# 93 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "It's a handbook on the Mach Bike.\p"
# 94 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Which page do you want to read?$"
# 95 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 96 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_HowToRideMachBike:
# 97 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "A Bike moves in the direction that\n"
# 98 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "the + Control Pad is pressed.\p"
# 99 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "It will speed up once it gets rolling.\p"
# 100 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "To stop, release the + Control Pad.\n"
# 101 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "The Bike will slow to a stop.\p"
# 102 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Want to read a different page?$"
# 103 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 104 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_HowToTurnMachBike:
# 105 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "A Mach Bike is speedy, but it can't\n"
# 106 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "stop very quickly.\p"
# 107 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "It gets a little tricky to get around\n"
# 108 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "a corner.\p"
# 109 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Release the + Control Pad a little\n"
# 110 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "before the corner and slow down.\p"
# 111 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Want to read a different page?$"
# 112 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 113 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_SandySlopes:
# 114 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "There are small sandy slopes\n"
# 115 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "throughout the Hoenn region.\p"
# 116 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "The loose, crumbly sand makes it\n"
# 117 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "impossible to climb normally.\p"
# 118 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "But if you have a Mach Bike, you can\n"
# 119 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "zip up a sandy slope.\p"
# 120 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Want to read a different page?$"
# 121 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 122 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_AcroHandbookWhichPage:
# 123 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "It's a handbook on the Acro Bike.\p"
# 124 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Which page do you want to read?$"
# 125 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 126 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_Wheelies:
# 127 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Press the B Button while riding,\n"
# 128 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "and the front wheel lifts up.\p"
# 129 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "You can zip around with the front\n"
# 130 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "wheel up using the + Control Pad.\p"
# 131 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "This technique is called a wheelie.\p"
# 132 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Want to read a different page?$"
# 133 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 134 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_BunnyHops:
# 135 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Keeping the B Button pressed,\n"
# 136 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "your Bike can hop on the spot.\p"
# 137 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "This technique is called a bunny hop.\p"
# 138 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "You can ride while hopping, too.\p"
# 139 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Want to read a different page?$"
# 140 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 141 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_Jumps:
# 142 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Press the B Button and the + Control\n"
# 143 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Pad at the same time to jump.\p"
# 144 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Press the + Control Pad to the side\n"
# 145 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "to jump sideways.\p"
# 146 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Press it backwards to make the Bike\n"
# 147 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "change directions while jumping.\p"
# 148 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Want to read a different page?$"

MauvilleCity_BikeShop_EventScript_Rydel::
# 152 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	lock
# 153 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	faceplayer
# 154 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto_if_set FLAG_RECEIVED_BIKE, MauvilleCity_BikeShop_EventScript_Rydel_2
# 161 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto_if_unset FLAG_DECLINED_BIKE, MauvilleCity_BikeShop_EventScript_Rydel_5
MauvilleCity_BikeShop_EventScript_Rydel_4:
# 166 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	speakername CommonText_Rydel
# 167 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_EventScript_Rydel_Text_2, MSGBOX_YESNO
# 168 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MauvilleCity_BikeShop_EventScript_Rydel_8
# 180 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	setflag FLAG_DECLINED_BIKE
# 181 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	speakername CommonText_Rydel
# 182 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_EventScript_Rydel_Text_5
MauvilleCity_BikeShop_EventScript_Rydel_7:
# 184 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	release
	end

MauvilleCity_BikeShop_EventScript_Rydel_2:
# 156 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	speakername CommonText_Rydel
# 157 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_EventScript_Rydel_Text_0
# 158 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	release
	end

MauvilleCity_BikeShop_EventScript_Rydel_5:
# 163 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	speakername CommonText_Rydel
# 164 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_EventScript_Rydel_Text_1
	goto MauvilleCity_BikeShop_EventScript_Rydel_4

MauvilleCity_BikeShop_EventScript_Rydel_8:
# 170 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	speakername CommonText_Rydel
# 171 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_EventScript_Rydel_Text_3
# 172 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	giveitem ITEM_ACRO_BIKE
# 173 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	giveitem ITEM_MACH_BIKE
# 174 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	setflag FLAG_RECEIVED_BIKE
# 175 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	speakername CommonText_Rydel
# 176 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_EventScript_Rydel_Text_4
	goto MauvilleCity_BikeShop_EventScript_Rydel_7


MauvilleCity_BikeShop_EventScript_Rydel_Text_0:
# 157 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "I hope you're enjoying the bikes!\p"
	.string "Take a look at the books in the back if\n"
	.string "you need help using them.$"

MauvilleCity_BikeShop_EventScript_Rydel_Text_1:
# 164 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Well, well, what have we here?\nA most energetic customer!\pMe? You may call me Rydel.\nI'm the owner of this cycle shop.$"

MauvilleCity_BikeShop_EventScript_Rydel_Text_2:
# 167 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Your Running Shoes…\nThey're awfully filthy.\pDid you come from far away?$"

MauvilleCity_BikeShop_EventScript_Rydel_Text_3:
# 171 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Hm, hm… … … … …\pYou're saying that you came all this\nway from Littleroot?\pMy goodness!\nThat's ridiculously far!\pIf you had one of my Bikes, you could\ngo anywhere easily while feeling the\lgentle caress of the wind!\pI'll tell you what!\nI'll give you a Bike!\pOh, wait a second!\pI forgot to tell you that there are\ntwo kinds of Bikes!\pThey are the Mach Bike and\nthe Acro Bike!\pThe Mach Bike is for cyclists who want\nto feel the wind with their bodies!\pAnd an Acro Bike is for those who\nprefer technical rides!\pI'm a real sweetheart, so you can have both Bikes!$"

MauvilleCity_BikeShop_EventScript_Rydel_Text_4:
# 176 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Enjoy! And if you need any help, the\n"
	.string "books in the back should be useful.$"

MauvilleCity_BikeShop_EventScript_Rydel_Text_5:
# 182 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Is that right?\pThen, I guess you have no need for\nany of my Bikes.$"
