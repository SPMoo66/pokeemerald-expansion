# 1 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 2 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
.set LOCALID_DEVON_EMPLOYEE, 2
# 3 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 4 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_MeetPresident::
# 5 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	lockall
# 6 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_ThisIs3rdFloorWaitHere, MSGBOX_DEFAULT
# 7 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	closemessage
# 8 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_DevonCorp_3F_Movement_EmployeeWalkOffscreen
# 9 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	waitmovement 0
# 10 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	delay 80
# 11 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_DevonCorp_3F_Movement_EmployeeReturnToPlayer
# 12 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	waitmovement 0
# 13 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_WordWithPresidentComeWithMe, MSGBOX_DEFAULT
# 14 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	closemessage
# 15 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 16 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_DevonCorp_3F_Movement_LeadPlayerToPresident
# 17 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RustboroCity_DevonCorp_3F_Movement_PlayerFollowToPresident
# 18 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	waitmovement 0
# 19 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_PleaseGoAhead, MSGBOX_DEFAULT
# 20 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	closemessage
# 21 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	fadedefaultbgm
# 22 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_DevonCorp_3F_Movement_EmployeeFaceDesk
# 23 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RustboroCity_DevonCorp_3F_Movement_PlayerApproachDesk
# 24 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	waitmovement 0
# 25 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	speakername (CommonText_MrStone)
# 26 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_MrStoneIHaveFavor, MSGBOX_DEFAULT
# 27 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	closemessage
# 28 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	giveitem ITEM_LETTER
# 29 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	speakername (CommonText_MrStone)
# 30 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_MrStoneWantYouToHaveThis, MSGBOX_DEFAULT
# 31 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	closemessage
# 32 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 33 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	message RustboroCity_DevonCorp_3F_Text_ReceivedPokenav
# 34 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	waitfanfare
# 35 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setflag FLAG_SYS_POKENAV_GET
# 36 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setflag FLAG_RECEIVED_POKENAV
# 37 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_POKEMON_SCHOOL_SCOTT
# 38 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	speakername (CommonText_MrStone)
# 39 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_MrStoneExplainPokenavRestUp, MSGBOX_DEFAULT
# 40 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	closemessage
# 41 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 42 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	speakername (CommonText_MrStone)
# 43 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_MrStoneGoWithCautionAndCare, MSGBOX_DEFAULT
# 44 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setflag FLAG_HIDE_ROUTE_116_WANDAS_BOYFRIEND
# 45 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_WANDAS_BOYFRIEND
# 46 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_WANDA
# 47 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	clearflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
# 48 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	clearflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
# 49 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setvar VAR_BRINEY_LOCATION, 1
# 50 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	clearflag FLAG_HIDE_RUSTBORO_CITY_RIVAL
# 51 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setvar VAR_DEVON_CORP_3F_STATE, 1
# 52 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 6
# 53 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	releaseall
# 54 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	end
# 55 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 56 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Movement_LeadPlayerToPresident:
# 57 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 58 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 59 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 60 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_down
# 61 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 62 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 63 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 64 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 65 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 66 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 67 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 68 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 69 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 70 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_in_place_faster_left
# 71 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	step_end
# 72 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 73 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Movement_EmployeeFaceDesk:
# 74 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	delay_16
# 75 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_in_place_faster_down
# 76 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	step_end
# 77 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 78 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Movement_EmployeeWalkOffscreen:
# 79 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 80 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 81 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 82 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_down
# 83 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 84 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 85 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 86 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 87 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	step_end
# 88 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 89 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Movement_EmployeeReturnToPlayer:
# 90 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
# 91 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
# 92 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
# 93 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
# 94 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_up
# 95 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
# 96 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
# 97 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
# 98 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	step_end
# 99 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 100 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Movement_PlayerFollowToPresident:
# 101 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 102 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 103 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 104 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 105 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_down
# 106 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 107 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 108 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 109 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 110 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 111 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 112 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 113 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 114 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	step_end
# 115 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 116 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Movement_PlayerApproachDesk:
# 117 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	delay_16
# 118 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	delay_16
# 119 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_down
# 120 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_down
# 121 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_in_place_faster_right
# 122 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	step_end
# 123 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 124 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_RareRocksDisplay::
# 125 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_RareRocksDisplay, MSGBOX_SIGN
# 126 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	end
# 127 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 128 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_MrStoneIHaveFavor:
# 129 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "I'm Mr. Stone, the President of\n"
# 130 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "the Devon Corporation.\p"
# 131 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "I'd just got word about you!\p"
# 132 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "You saved our staff not just once,\n"
# 133 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "but twice!\p"
# 134 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "I have a favor to ask of an amazing\n"
# 135 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "person like you.\p"
# 136 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "I understand that you're delivering\n"
# 137 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "a package to Slateport's Shipyard.\p"
# 138 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Well, on the way, could you stop off in\n"
# 139 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Dewford Town?\p"
# 140 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "I was hoping that you'd deliver a\n"
# 141 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Letter to Steven in Dewford.$"
# 142 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 143 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_MrStoneWantYouToHaveThis:
# 144 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Now, you should know that I am a\n"
# 145 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "great President.\p"
# 146 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "So, I'd never be so cheap as to ask\n"
# 147 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "a favor for nothing in return.\p"
# 148 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "That's why I want you to have this!$"
# 149 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 150 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_ReceivedPokenav:
# 151 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "{PLAYER} received a Pokénav.$"
# 152 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 153 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_MrStoneExplainPokenavRestUp:
# 154 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "That device is a Pokémon Navigator,\n"
# 155 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "or Pokénav for short.\p"
# 156 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "It's an indispensable tool for any\n"
# 157 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Trainer on an adventure.\p"
# 158 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "It has a map of the Hoenn region.\p"
# 159 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "You can check the locations of\n"
# 160 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Dewford and Slateport easily!\p"
# 161 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "By the way, I've heard that sinister\n"
# 162 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "criminals--Magma and Aqua, I believe--\l"
# 163 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "have been making trouble far and wide.\p"
# 164 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "I think it would be best if you rested\n"
# 165 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "up before you go on your way.$"
# 166 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 167 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_MrStoneGoWithCautionAndCare:
# 168 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Well, then, {PLAYER}{KUN}, go with\n"
# 169 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "caution and care!$"
# 170 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 171 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_CountingOnYou:
# 172 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "I'm counting on you!$"
# 173 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 174 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_ThankYouForDeliveringLetter:
# 175 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "You delivered my Letter?\n"
# 176 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Thank you kindly!\p"
# 177 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "This is my way of thanking you.\n"
# 178 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "It should help you, a Trainer.$"
# 179 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 180 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_ExplainExpShare:
# 181 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "A Pokémon holding that Exp. Share\n"
# 182 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "will be given some of the Exp Points\l"
# 183 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "from battle.\p"
# 184 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "It will get Exp Points even if it didn't\n"
# 185 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "actually battle.\p"
# 186 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "I would say Exp. Share is quite useful\n"
# 187 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "for raising weak Pokémon.$"
# 188 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 189 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_NotFamiliarWithTrends:
# 190 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Since my youth, I've immersed myself\n"
# 191 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "in work.\p"
# 192 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Consequently, I'm not familiar with\n"
# 193 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "trends and that sort of thing.\p"
# 194 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "But do young people all want to be\n"
# 195 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Trainers in the Pokémon League?$"
# 196 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 197 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_ThisIs3rdFloorWaitHere:
# 198 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "This is the Devon Corporation's\n"
# 199 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "third floor.\p"
# 200 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Our President's Office is on\n"
# 201 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "this floor.\p"
# 202 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Anyway, I can't tell you how much I'm\n"
# 203 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "grateful for what you've done.\p"
# 204 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Um… By the way, that parcel\n"
# 205 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "you got back for us…\p"
# 206 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Could I get you to deliver that to\n"
# 207 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "the Shipyard in Slateport?\p"
# 208 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "It would be awful if those robbers\n"
# 209 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "tried to take it again.\p"
# 210 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Uh… Hehehe, so, uh, could I count\n"
# 211 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "on you to do that for me?\p"
# 212 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Oh, that's right.\n"
# 213 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Could you wait here a second?$"
# 214 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 215 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_WordWithPresidentComeWithMe:
# 216 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Our President would like to have\n"
# 217 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "a word with you.\p"
# 218 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Please come with me.$"
# 219 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 220 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_PleaseGoAhead:
# 221 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Please, go ahead.$"
# 222 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 223 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_VisitCaptSternShipyard:
# 224 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "If you visit the Shipyard in Slateport,\n"
# 225 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "you should go see Capt. Stern.$"
# 226 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 227 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_RepeatAndTimerHugelyPopular:
# 228 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Devon's new products, the Repeat Ball\n"
# 229 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "and Timer Ball, have become hugely\l"
# 230 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "popular among Trainers.$"
# 231 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 232 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_RareRocksDisplay:
# 233 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "It's a collection of rare rocks and\n"
# 234 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "stones assembled by the President.$"

RustboroCity_DevonCorp_3F_MapScripts::
# 242 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RustboroCity_DevonCorp_3F_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 266 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, RustboroCity_DevonCorp_3F_MapScripts_MAP_SCRIPT_ON_LOAD
# 257 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, RustboroCity_DevonCorp_3F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 262 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, RustboroCity_DevonCorp_3F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

RustboroCity_DevonCorp_3F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 243 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	compare VAR_DEVON_CORP_3F_STATE, 0
	goto_if_eq RustboroCity_DevonCorp_3F_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
RustboroCity_DevonCorp_3F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 247 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 248 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	compare VAR_LOOKER_ROCKET, 5
	goto_if_ne RustboroCity_DevonCorp_3F_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
# 252 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setobjectxyperm 2, 2, 2
# 253 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	savebgm MUS_HG_ROCKET_TAKEOVER
RustboroCity_DevonCorp_3F_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 255 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setflag FLAG_TEMP_2
	return

RustboroCity_DevonCorp_3F_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 244 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setobjectxyperm 2, 3, 2
# 245 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_LEFT
	goto RustboroCity_DevonCorp_3F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

RustboroCity_DevonCorp_3F_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 249 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setflag FLAG_TEMP_1
	goto RustboroCity_DevonCorp_3F_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

RustboroCity_DevonCorp_3F_MapScripts_MAP_SCRIPT_ON_LOAD:
# 267 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	compare VAR_LOOKER_ROCKET, 5
	goto_if_eq RustboroCity_DevonCorp_3F_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

RustboroCity_DevonCorp_3F_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 268 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setmetatile 8, 1, 0x395, TRUE
# 269 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setmetatile 8, 2, 0x381, FALSE
# 270 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setmetatile 9, 1, 0x396, FALSE
# 271 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setmetatile 9, 2, 0x381, FALSE
# 272 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setmetatile 10, 1, 0x397, TRUE
# 273 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setmetatile 10, 2, 0x381, FALSE
# 274 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setmetatile 4, 1, 0x349, TRUE
# 275 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setmetatile 4, 2, 0x351, FALSE
# 276 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setmetatile 5, 1, 0x34A, FALSE
# 277 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setmetatile 5, 2, 0x352, FALSE
# 278 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setmetatile 6, 1, 0x34B, TRUE
# 279 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setmetatile 6, 2, 0x353, FALSE
	return

RustboroCity_DevonCorp_3F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 258 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	map_script_2 VAR_DEVON_CORP_3F_STATE, 0, RustboroCity_DevonCorp_3F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0
	.2byte 0

RustboroCity_DevonCorp_3F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0:
# 259 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
	return

RustboroCity_DevonCorp_3F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 263 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	map_script_2 VAR_DEVON_CORP_3F_STATE, 0, RustboroCity_DevonCorp_3F_EventScript_MeetPresident
# 264 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	map_script_2 VAR_LOOKER_ROCKET, 6, RustboroCity_DevonCorp_3F_PresidentSaved
	.2byte 0


RustboroCity_DevonCorp_3F_EventScript_MrStone::
# 285 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	lock
# 286 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	faceplayer
# 287 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	speakername CommonText_MrStone
# 288 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	compare VAR_LOOKER_ROCKET, 5
	goto_if_eq RustboroCity_DevonCorp_3F_EventScript_MrStone_2
# 291 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	goto_if_set FLAG_RECEIVED_EXP_SHARE, RustboroCity_DevonCorp_3F_EventScript_MrStone_3
# 294 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	goto_if_set FLAG_DELIVERED_STEVEN_LETTER, RustboroCity_DevonCorp_3F_EventScript_MrStone_4
# 306 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_CountingOnYou, MSGBOX_DEFAULT
RustboroCity_DevonCorp_3F_EventScript_MrStone_1:
# 308 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	closemessage
# 309 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 310 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	waitmovement 0
# 311 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	release
	return

RustboroCity_DevonCorp_3F_EventScript_MrStone_2:
# 289 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_EventScript_MrStone_Text_0, MSGBOX_DEFAULT
	goto RustboroCity_DevonCorp_3F_EventScript_MrStone_1

RustboroCity_DevonCorp_3F_EventScript_MrStone_3:
# 292 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_NotFamiliarWithTrends, MSGBOX_DEFAULT
	goto RustboroCity_DevonCorp_3F_EventScript_MrStone_1

RustboroCity_DevonCorp_3F_EventScript_MrStone_4:
# 295 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_ThankYouForDeliveringLetter, MSGBOX_DEFAULT
# 296 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	closemessage
# 297 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	giveitem ITEM_EXP_SHARE
# 298 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq RustboroCity_DevonCorp_3F_EventScript_MrStone_10
RustboroCity_DevonCorp_3F_EventScript_MrStone_9:
# 301 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setflag FLAG_RECEIVED_EXP_SHARE
# 302 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	speakername CommonText_MrStone
# 303 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_ExplainExpShare, MSGBOX_DEFAULT
	goto RustboroCity_DevonCorp_3F_EventScript_MrStone_1

RustboroCity_DevonCorp_3F_EventScript_MrStone_10:
# 299 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto RustboroCity_DevonCorp_3F_EventScript_MrStone_9


RustboroCity_DevonCorp_3F_EventScript_Employee::
# 315 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	lock
# 316 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	faceplayer
# 317 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	compare VAR_LOOKER_ROCKET, 5
	goto_if_eq RustboroCity_DevonCorp_3F_EventScript_Employee_2
# 320 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	goto_if_set FLAG_RECEIVED_REPEAT_BALL, RustboroCity_DevonCorp_3F_EventScript_Employee_3
# 324 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_VisitCaptSternShipyard, MSGBOX_DEFAULT
RustboroCity_DevonCorp_3F_EventScript_Employee_1:
# 326 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	release
	return

RustboroCity_DevonCorp_3F_EventScript_Employee_2:
# 318 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_EventScript_Employee_Text_0, MSGBOX_DEFAULT
	goto RustboroCity_DevonCorp_3F_EventScript_Employee_1

RustboroCity_DevonCorp_3F_EventScript_Employee_3:
# 321 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_RepeatAndTimerHugelyPopular, MSGBOX_DEFAULT
	goto RustboroCity_DevonCorp_3F_EventScript_Employee_1


RustboroCity_DevonCorp_3F_EventScript_Giovanni::
# 330 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 331 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	trainerbattle_single TRAINER_GIOVANNI_DEVONCORP, RustboroCity_DevonCorp_3F_Text_GiovanniIntro, RustboroCity_DevonCorp_3F_Text_GiovanniDefeat, RustboroCity_DevonCorp_3F_GiovanniDefeated, NO_MUSIC
# 332 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	release
	return


RustboroCity_DevonCorp_3F_GiovanniDefeated::
# 336 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	clearflag FLAG_TEMP_2
# 337 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 338 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	addobject 5
# 339 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	speakername CommonText_Looker
# 340 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_GiovanniDefeated_Text_0
# 341 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement 5, Movement_LookerRun
# 342 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	waitmovement 0
# 343 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceFasterDown
# 344 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceFasterUp
# 345 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 346 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	waitmovement 0
# 347 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	speakername CommonText_Giovanni
# 348 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_GiovanniDefeated_Text_1
# 349 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	closemessage
# 350 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	speakername CommonText_Looker
# 351 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_GiovanniDefeated_Text_2
# 353 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	closemessage
# 354 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	speakername CommonText_Giovanni
# 355 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_GiovanniDefeated_Text_3
# 356 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	closemessage
# 357 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setvar VAR_LOOKER_ROCKET, 6
# 358 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	warp MAP_RUSTBORO_CITY_DEVON_CORP_3F, 14, 5
# 359 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	waitstate
	return


RustboroCity_DevonCorp_3F_PresidentSaved::
# 363 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 364 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	waitmovement 0
# 365 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	speakername CommonText_MrStone
# 366 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_PresidentSaved_Text_0
# 367 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	closemessage
# 368 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	giveitem ITEM_BOTTLE_CAP
# 369 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	giveitem ITEM_NORMAL_TERA_SHARD, 3
# 370 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	speakername CommonText_MrStone
# 371 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_PresidentSaved_Text_1
# 372 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	closemessage
# 373 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setvar VAR_LOOKER_ROCKET, 7
# 374 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	release
	return


# 386 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
Movement_LookerRun:
# 387 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_fast_right
# 387 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_fast_right
# 387 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_fast_right
# 387 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_fast_right
# 387 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_fast_right
# 387 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_fast_right
# 387 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_fast_right
# 387 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_fast_right
	step_end

RustboroCity_DevonCorp_3F_EventScript_MrStone_Text_0:
# 289 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "{PLAYER}, please!\nYou must help me with this ruffian!$"

RustboroCity_DevonCorp_3F_EventScript_Employee_Text_0:
# 318 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Please help the President!$"

RustboroCity_DevonCorp_3F_GiovanniDefeated_Text_0:
# 340 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Not so fast!$"

RustboroCity_DevonCorp_3F_GiovanniDefeated_Text_1:
# 348 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Tch…\n"
	.string "The police already?$"

RustboroCity_DevonCorp_3F_GiovanniDefeated_Text_2:
# 351 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "{PLAYER}, thank you for your help, but\n"
	.string "I will be taking it from here.\p"
	.string "Criminal!\n"
	.string "You'll be coming with me!$"

RustboroCity_DevonCorp_3F_GiovanniDefeated_Text_3:
# 355 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Fine. Take me in now.\n"
	.string "This will do nothing to stop our plans.$"

RustboroCity_DevonCorp_3F_PresidentSaved_Text_0:
# 366 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "{PLAYER}, I must thank you once\n"
	.string "again.\p"
	.string "You've done a great deal for me and this\n"
	.string "company, no, the city of Rustboro\l"
	.string "itself.\p"
	.string "Please, take this as a note of my\n"
	.string "appreciation, though small it may be.$"

RustboroCity_DevonCorp_3F_PresidentSaved_Text_1:
# 371 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "It looks like that man…\n"
	.string "Looker, was it?\p"
	.string "He took the intruder away, if you're\n"
	.string "looking for him.$"

RustboroCity_DevonCorp_3F_Text_GiovanniIntro::
# 378 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "We arrived on boat, set for Kanto!\pHow did we end up here in Hoenn!?\nWe decided to come here, taking the\lopportunity, and you won't be stopping\lus!$"

RustboroCity_DevonCorp_3F_Text_GiovanniDefeat::
# 382 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "I'll sue that boat captain into the\nground!$"
