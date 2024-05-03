MauvilleCity_House2_MapScripts::
	.byte 0


MauvilleCity_House2_EventScript_Woman::
# 4 "data/maps/MauvilleCity_House2/scripts.pory"
	lock
# 5 "data/maps/MauvilleCity_House2/scripts.pory"
	faceplayer
# 6 "data/maps/MauvilleCity_House2/scripts.pory"
	goto_if_unset FLAG_RECEIVED_COIN_CASE, MauvilleCity_House2_EventScript_Woman_2
MauvilleCity_House2_EventScript_Woman_1:
# 14 "data/maps/MauvilleCity_House2/scripts.pory"
	msgbox MauvilleCity_House2_EventScript_Woman_Text_1
# 15 "data/maps/MauvilleCity_House2/scripts.pory"
	release
	end

MauvilleCity_House2_EventScript_Woman_2:
# 7 "data/maps/MauvilleCity_House2/scripts.pory"
	msgbox MauvilleCity_House2_EventScript_Woman_Text_0
# 8 "data/maps/MauvilleCity_House2/scripts.pory"
	giveitem ITEM_COIN_CASE
# 9 "data/maps/MauvilleCity_House2/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MauvilleCity_House2_EventScript_Woman_5
MauvilleCity_House2_EventScript_Woman_4:
# 12 "data/maps/MauvilleCity_House2/scripts.pory"
	setflag FLAG_RECEIVED_COIN_CASE
	goto MauvilleCity_House2_EventScript_Woman_1

MauvilleCity_House2_EventScript_Woman_5:
# 10 "data/maps/MauvilleCity_House2/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto MauvilleCity_House2_EventScript_Woman_4


MauvilleCity_House2_EventScript_Woman_Text_0:
# 7 "data/maps/MauvilleCity_House2/scripts.pory"
	.string "I love to collect different Mail, but\n"
	.string "lately they've been so hard to come by…\p"
	.string "I was going to trade a Coin Case to\n"
	.string "someone with Harbor Mail…\p"
	.string "Sigh…\p"
	.string "Here, how about you just take this Coin\n"
	.string "Case off my hands. Someone should get\l"
	.string "some use from it.$"

MauvilleCity_House2_EventScript_Woman_Text_1:
# 14 "data/maps/MauvilleCity_House2/scripts.pory"
	.string "That Coin Case can be used\nat the Game Corner.$"
