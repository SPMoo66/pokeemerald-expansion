# 1 "data/maps/BattleFrontier_Lounge6/scripts.pory"

# 2 "data/maps/BattleFrontier_Lounge6/scripts.pory"
BattleFrontier_Lounge6_MapScripts::
# 3 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	.byte 0
# 4 "data/maps/BattleFrontier_Lounge6/scripts.pory"

# 5 "data/maps/BattleFrontier_Lounge6/scripts.pory"
BattleFrontier_Lounge6_EventScript_Trader::
# 6 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	lock
# 7 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	faceplayer
# 8 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	goto_if_set FLAG_BATTLE_FRONTIER_TRADE_DONE, BattleFrontier_Lounge6_EventScript_TradeCompleted
# 9 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_MEOWTH
# 10 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 11 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
# 12 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	copyvar VAR_0x8009, VAR_RESULT
# 13 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	msgbox BattleFrontier_Lounge6_Text_WouldYouLikeToTrade, MSGBOX_YESNO
# 14 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	goto_if_eq VAR_RESULT, NO, BattleFrontier_Lounge6_EventScript_DeclineTrade
# 15 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	special ChoosePartyMon
# 16 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	waitstate
# 17 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	copyvar VAR_0x800A, VAR_0x8004
# 18 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, BattleFrontier_Lounge6_EventScript_DeclineTrade
# 19 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 20 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 21 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	copyvar VAR_0x800B, VAR_RESULT
# 22 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, BattleFrontier_Lounge6_EventScript_NotRequestedMon
# 23 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 24 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 25 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	special CreateInGameTradePokemon
# 26 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	special DoInGameTradeScene
# 27 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	waitstate
# 28 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	msgbox BattleFrontier_Lounge6_Text_PromiseIllBeGoodToIt, MSGBOX_DEFAULT
# 29 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	setflag FLAG_BATTLE_FRONTIER_TRADE_DONE
# 30 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	release
# 31 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	end
# 32 "data/maps/BattleFrontier_Lounge6/scripts.pory"

# 33 "data/maps/BattleFrontier_Lounge6/scripts.pory"
BattleFrontier_Lounge6_EventScript_DeclineTrade::
# 34 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	msgbox BattleFrontier_Lounge6_Text_WellThatsFineToo, MSGBOX_DEFAULT
# 35 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	release
# 36 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	end
# 37 "data/maps/BattleFrontier_Lounge6/scripts.pory"

# 38 "data/maps/BattleFrontier_Lounge6/scripts.pory"
BattleFrontier_Lounge6_EventScript_NotRequestedMon::
# 39 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8009
# 40 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	msgbox BattleFrontier_Lounge6_Text_DontTradeForAnythingButMon, MSGBOX_DEFAULT
# 41 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	release
# 42 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	end
# 43 "data/maps/BattleFrontier_Lounge6/scripts.pory"

# 44 "data/maps/BattleFrontier_Lounge6/scripts.pory"
BattleFrontier_Lounge6_EventScript_TradeCompleted::
# 45 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	msgbox BattleFrontier_Lounge6_Text_SkittySoMuchCuterThanImagined, MSGBOX_DEFAULT
# 46 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	release
# 47 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	end
# 48 "data/maps/BattleFrontier_Lounge6/scripts.pory"

# 49 "data/maps/BattleFrontier_Lounge6/scripts.pory"
BattleFrontier_Lounge6_Text_WouldYouLikeToTrade:
# 50 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	.string "My Pokémon is a {STR_VAR_2}.\n"
# 51 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	.string "Do you know it?\l"
# 52 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	.string "It's quite cute and rather nice.\p"
# 53 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	.string "This little one, I could trade with\n"
# 54 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	.string "pride!\p"
# 55 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	.string "Would you like to trade me a {STR_VAR_1}\n"
# 56 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	.string "for my {STR_VAR_2}?$"
# 57 "data/maps/BattleFrontier_Lounge6/scripts.pory"

# 58 "data/maps/BattleFrontier_Lounge6/scripts.pory"
BattleFrontier_Lounge6_Text_PromiseIllBeGoodToIt:
# 59 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	.string "Oh, it's adorable!\n"
# 60 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	.string "Thank you!\l"
# 61 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	.string "I promise I'll be good to it!\p"
# 62 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	.string "Oh! I hope you'll be good to\n"
# 63 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	.string "my {STR_VAR_2}, too!$"
# 64 "data/maps/BattleFrontier_Lounge6/scripts.pory"

# 65 "data/maps/BattleFrontier_Lounge6/scripts.pory"
BattleFrontier_Lounge6_Text_DontTradeForAnythingButMon:
# 66 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	.string "Oh, I'm sorry!\n"
# 67 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	.string "I don't intend to trade for anything\l"
# 68 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	.string "but a {STR_VAR_1}.$"
# 69 "data/maps/BattleFrontier_Lounge6/scripts.pory"

# 70 "data/maps/BattleFrontier_Lounge6/scripts.pory"
BattleFrontier_Lounge6_Text_WellThatsFineToo:
# 71 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	.string "Oh, you won't?\n"
# 72 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	.string "Well, that's fine, too.\l"
# 73 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	.string "Please come visit us again.$"
# 74 "data/maps/BattleFrontier_Lounge6/scripts.pory"

# 75 "data/maps/BattleFrontier_Lounge6/scripts.pory"
BattleFrontier_Lounge6_Text_SkittySoMuchCuterThanImagined:
# 76 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	.string "Giggle!\n"
# 77 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	.string "A Skitty is so much cuter than I had\l"
# 78 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	.string "imagined. I'm delighted!$"

DemoLady::
# 92 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	goto_if_unset FLAG_DEMO_LADY, DemoLady_1
# 108 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	applymovement 2, Common_Movement_FacePlayer
# 109 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	goto_if_unset FLAG_HIDE_EEVEE, DemoLady_10
DemoLady_8:
# 115 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	msgbox DemoLady_Text_2, MSGBOX_YESNO
# 116 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq DemoLady_23
# 183 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	msgbox DemoLady_Text_13
# 184 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	closemessage
	return

DemoLady_1:
# 93 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 94 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	switch VAR_TEMP_0
# 95 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	case 13, DemoLady_6
DemoLady_4:
# 99 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	applymovement 2, Common_Movement_FacePlayer
# 100 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	waitmovement 0
# 101 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	msgbox DemoLady_Text_0
# 104 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	closemessage
# 105 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	setflag FLAG_DEMO_LADY
	return

DemoLady_6:
# 96 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	goto DemoLady_4

DemoLady_7:
# 110 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	msgbox DemoLady_Text_1
# 112 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	closemessage
	return

DemoLady_9:
# 109 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	goto_if_unset FLAG_HIDE_ROOKIDEE, DemoLady_14
	goto DemoLady_8

DemoLady_10:
# 109 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	goto_if_unset FLAG_HIDE_MAREEP, DemoLady_9
	goto DemoLady_8

DemoLady_13:
# 109 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	goto_if_unset FLAG_HIDE_GOOMY, DemoLady_18
	goto DemoLady_8

DemoLady_14:
# 109 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	goto_if_unset FLAG_HIDE_HONEDGE, DemoLady_13
	goto DemoLady_8

DemoLady_17:
# 109 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	goto_if_unset FLAG_HIDE_DRATINI, DemoLady_7
	goto DemoLady_8

DemoLady_18:
# 109 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	goto_if_unset FLAG_HIDE_MUDKIP, DemoLady_17
	goto DemoLady_8

DemoLady_23:
# 118 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	specialvar VAR_TEMP_1, GetFrontierBattlePoints
# 119 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_ge DemoLady_25
# 176 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	msgbox DemoLady_Text_12
# 179 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	closemessage
	end

DemoLady_25:
# 121 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	goto_if_set FLAG_HIDE_EEVEE, DemoLady_29
DemoLady_28:
# 124 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	goto_if_set FLAG_HIDE_MAREEP, DemoLady_32
DemoLady_31:
# 127 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	goto_if_set FLAG_HIDE_ROOKIDEE, DemoLady_35
DemoLady_34:
# 130 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	goto_if_set FLAG_HIDE_HONEDGE, DemoLady_38
DemoLady_37:
# 133 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	goto_if_set FLAG_HIDE_GOOMY, DemoLady_41
DemoLady_40:
# 136 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	goto_if_set FLAG_HIDE_MUDKIP, DemoLady_44
DemoLady_43:
# 139 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	goto_if_set FLAG_HIDE_DRATINI, DemoLady_47
DemoLady_46:
# 143 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	special ShowBattlePointsWindow
# 144 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	dynmultistack 17, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 145 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	switch VAR_RESULT
# 146 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	case 1, DemoLady_51
# 148 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	case 2, DemoLady_52
# 150 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	case 3, DemoLady_53
# 152 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	case 4, DemoLady_54
# 154 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	case 5, DemoLady_55
# 156 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	case 6, DemoLady_56
# 158 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	case 7, DemoLady_57
# 161 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	msgbox DemoLady_Text_10
# 162 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	special CloseBattlePointsWindow
# 163 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	closemessage
	end

DemoLady_29:
# 122 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	dynmultipush DemoLady_Text_3, 1
	goto DemoLady_28

DemoLady_32:
# 125 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	dynmultipush DemoLady_Text_4, 2
	goto DemoLady_31

DemoLady_35:
# 128 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	dynmultipush DemoLady_Text_5, 3
	goto DemoLady_34

DemoLady_38:
# 131 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	dynmultipush DemoLady_Text_6, 4
	goto DemoLady_37

DemoLady_41:
# 134 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	dynmultipush DemoLady_Text_7, 5
	goto DemoLady_40

DemoLady_44:
# 137 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	dynmultipush DemoLady_Text_8, 6
	goto DemoLady_43

DemoLady_47:
# 140 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	dynmultipush DemoLady_Text_9, 7
	goto DemoLady_46

DemoLady_49:
# 166 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	setvar VAR_0x8004, 2
# 167 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	special TakeFrontierBattlePoints
# 168 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	special UpdateBattlePointsWindow
# 169 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	msgbox DemoLady_Text_11
# 171 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	special CloseBattlePointsWindow
# 172 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	closemessage
	end

DemoLady_51:
# 147 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	clearflag FLAG_HIDE_EEVEE
	goto DemoLady_49

DemoLady_52:
# 149 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	clearflag FLAG_HIDE_MAREEP
	goto DemoLady_49

DemoLady_53:
# 151 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	clearflag FLAG_HIDE_ROOKIDEE
	goto DemoLady_49

DemoLady_54:
# 153 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	clearflag FLAG_HIDE_HONEDGE
	goto DemoLady_49

DemoLady_55:
# 155 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	clearflag FLAG_HIDE_GOOMY
	goto DemoLady_49

DemoLady_56:
# 157 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	clearflag FLAG_HIDE_MUDKIP
	goto DemoLady_49

DemoLady_57:
# 159 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	clearflag FLAG_HIDE_DRATINI
	goto DemoLady_49


SetMons::
# 190 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	setflag FLAG_HIDE_EEVEE
# 191 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	setflag FLAG_HIDE_MAREEP
# 192 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	setflag FLAG_HIDE_ROOKIDEE
# 193 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	setflag FLAG_HIDE_HONEDGE
# 194 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	setflag FLAG_HIDE_GOOMY
# 195 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	setflag FLAG_HIDE_MUDKIP
# 196 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	setflag FLAG_HIDE_DRATINI
	return


ScriptEevee::
# 200 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	faceplayer
# 201 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	msgbox ScriptEevee_Text_0
# 202 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	closemessage
	return


ScriptMareep::
# 206 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	faceplayer
# 207 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	msgbox ScriptMareep_Text_0
# 208 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	closemessage
	return


ScriptRookidee::
# 212 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	faceplayer
# 213 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	msgbox ScriptRookidee_Text_0
# 214 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	closemessage
	return


ScriptHonedge::
# 218 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	faceplayer
# 219 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	msgbox ScriptHonedge_Text_0
# 220 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	closemessage
	return


ScriptGoomy::
# 224 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	faceplayer
# 225 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	msgbox ScriptGoomy_Text_0
# 226 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 227 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	applymovement 4, FollowerHopFast
# 228 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	waitmovement 0
# 229 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	closemessage
# 230 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
	return


ScriptMudkip::
# 234 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	faceplayer
# 235 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	msgbox ScriptMudkip_Text_0
# 236 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 237 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	applymovement 9, FollowerStartled
# 238 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	waitmovement 0
# 239 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	closemessage
# 240 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
	return


ScriptDratini::
# 244 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	faceplayer
# 245 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	msgbox ScriptDratini_Text_0
# 246 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	closemessage
	return


DemoLady_Text_0:
# 101 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	.string "Hello!\p"
	.string "I used to run a daycare out in Kanto.\p"
	.string "If you'd like, you can spend your BP\n"
	.string "with me and I'll populate the area with\l"
	.string "some Pokémon.$"

DemoLady_Text_1:
# 110 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	.string "You've managed to fill this area as much\n"
	.string "as I could imagine.\p"
	.string "Thank you for all of your help, dear.$"

DemoLady_Text_2:
# 115 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	.string "Would you like me to fill the area with\n"
	.string "any new Pokémon?$"

DemoLady_Text_3:
# 122 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	.string "Eevee{CLEAR_TO 0x5E}2BP$"

DemoLady_Text_4:
# 125 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	.string "Mareep{CLEAR_TO 0x5E}2BP$"

DemoLady_Text_5:
# 128 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	.string "Rookidee{CLEAR_TO 0x5E}2BP$"

DemoLady_Text_6:
# 131 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	.string "Honedge{CLEAR_TO 0x5E}2BP$"

DemoLady_Text_7:
# 134 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	.string "Goomy{CLEAR_TO 0x5E}2BP$"

DemoLady_Text_8:
# 137 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	.string "Mudkip{CLEAR_TO 0x5E}2BP$"

DemoLady_Text_9:
# 140 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	.string "Dratini{CLEAR_TO 0x5E}2BP$"

DemoLady_Text_10:
# 161 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	.string "Do come back if you want me to find you\n"
	.string "another Pokémon.$"

DemoLady_Text_11:
# 169 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	.string "Wonderful!\n"
	.string "I'll have that Pokémon out here the\l"
	.string "next time you visit.$"

DemoLady_Text_12:
# 176 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	.string "Oh…\p"
	.string "It doesn't seem as though you have\n"
	.string "enough BP for me.\p"
	.string "Do come back when you obtain some more.$"

DemoLady_Text_13:
# 183 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	.string "Thank you for all of your help!$"

ScriptEevee_Text_0:
# 201 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	.string "You pet the Eevee as it so desperately\n"
	.string "needs.$"

ScriptMareep_Text_0:
# 207 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	.string "The Mareep looks so fluffy!$"

ScriptRookidee_Text_0:
# 213 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	.string "Rookidee flaps its small wings about.$"

ScriptHonedge_Text_0:
# 219 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	.string "Honedge has been sharpening itself on\n"
	.string "the cliffside.$"

ScriptGoomy_Text_0:
# 225 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	.string "Goomy is bouncing around like usual.$"

ScriptMudkip_Text_0:
# 235 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	.string "The Mudkip can be seen splashing about\n"
	.string "in the water.$"

ScriptDratini_Text_0:
# 245 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	.string "Dratini has been curled up, basking in\n"
	.string "the sunlight.$"
