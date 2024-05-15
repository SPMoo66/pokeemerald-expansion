LilycoveCity_DepartmentStore_4F_MapScripts::
	.byte 0

LilycoveCity_DepartmentStore_4F_EventScript_Man::
	msgbox LilycoveCity_DepartmentStore_4F_Text_AttackOrDefenseTM, MSGBOX_NPC
	end

LilycoveCity_DepartmentStore_4F_EventScript_Woman::
	msgbox LilycoveCity_DepartmentStore_4F_Text_FiftyDifferentTMs, MSGBOX_NPC
	end

LilycoveCity_DepartmentStore_4F_EventScript_Youngster::
	msgbox LilycoveCity_DepartmentStore_4F_Text_PokemonOnlyHaveFourMoves, MSGBOX_NPC
	end

LilycoveCity_DepartmentStore_4F_EventScript_ClerkLeft::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart LilycoveCity_DepartmentStore_4F_Pokemart_Pokeballs
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
LilycoveCity_DepartmentStore_4F_Pokemart_Pokeballs:
	.2byte ITEM_HEAL_BALL
	.2byte ITEM_LUXURY_BALL
	.2byte ITEM_FRIEND_BALL
	.2byte ITEM_LEVEL_BALL
	.2byte ITEM_NEST_BALL
	.2byte ITEM_LURE_BALL
	.2byte ITEM_DIVE_BALL
	.2byte ITEM_NET_BALL
	.2byte ITEM_MOON_BALL
	.2byte ITEM_FAST_BALL
	.2byte ITEM_LOVE_BALL
	.2byte ITEM_REPEAT_BALL
	.2byte ITEM_QUICK_BALL
	.2byte ITEM_TIMER_BALL
	.2byte ITEM_DUSK_BALL
	.2byte ITEM_DREAM_BALL
	.2byte ITEM_BEAST_BALL
	.2byte ITEM_NONE
	release
	end

LilycoveCity_DepartmentStore_4F_EventScript_ClerkRight::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart LilycoveCity_DepartmentStore_4F_Pokemart_Nectar
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
LilycoveCity_DepartmentStore_4F_Pokemart_Nectar:
	.2byte ITEM_RED_NECTAR
	.2byte ITEM_YELLOW_NECTAR
	.2byte ITEM_PINK_NECTAR
	.2byte ITEM_PURPLE_NECTAR
	.2byte ITEM_NONE
	release
	end

LilycoveCity_DepartmentStore_4F_Text_AttackOrDefenseTM:
	.string "I've designed a new type of Poké Ball\n"
	.string "specifically for catching Gulpin!\p"
	.string "I call them Gulpin Balls!\n"
	.string "…\p"
	.string "But no Pokémart seems to be interested\n"
	.string "in carrying them…$"

LilycoveCity_DepartmentStore_4F_Text_FiftyDifferentTMs:
	.string "There are so many different kinds of\n"
	.string "TM moves.\p"
	.string "A catalog I read said there are one-\n"
	.string "hundred and twenty different kinds.$"

LilycoveCity_DepartmentStore_4F_Text_PokemonOnlyHaveFourMoves:
	.string "I'd like to get all the different TMs,\n"
	.string "but a Pokémon learns only four moves.$"

