Mart_EventScript_Clerk::
# 2 "data/global.pory"
	lock
# 3 "data/global.pory"
	faceplayer
# 4 "data/global.pory"
	msgbox gText_HowMayIServeYou
# 5 "data/global.pory"
	waitmessage
# 6 "data/global.pory"
	special GetNumberOfBadges
# 7 "data/global.pory"
	switch VAR_RESULT
# 8 "data/global.pory"
	case 0, Mart_EventScript_Clerk_3
# 10 "data/global.pory"
	case 1, Mart_EventScript_Clerk_4
# 12 "data/global.pory"
	case 2, Mart_EventScript_Clerk_5
# 14 "data/global.pory"
	case 3, Mart_EventScript_Clerk_6
# 16 "data/global.pory"
	case 4, Mart_EventScript_Clerk_7
# 17 "data/global.pory"
	case 5, Mart_EventScript_Clerk_7
# 19 "data/global.pory"
	case 6, Mart_EventScript_Clerk_8
# 21 "data/global.pory"
	case 7, Mart_EventScript_Clerk_9
# 22 "data/global.pory"
	case 8, Mart_EventScript_Clerk_9
Mart_EventScript_Clerk_1:
# 27 "data/global.pory"
	msgbox gText_PleaseComeAgain
# 28 "data/global.pory"
	release
	end

Mart_EventScript_Clerk_3:
# 9 "data/global.pory"
	pokemart BadgedPokemart0
	goto Mart_EventScript_Clerk_1

Mart_EventScript_Clerk_4:
# 11 "data/global.pory"
	pokemart BadgedPokemart1
	goto Mart_EventScript_Clerk_1

Mart_EventScript_Clerk_5:
# 13 "data/global.pory"
	pokemart BadgedPokemart2
	goto Mart_EventScript_Clerk_1

Mart_EventScript_Clerk_6:
# 15 "data/global.pory"
	pokemart BadgedPokemart3
	goto Mart_EventScript_Clerk_1

Mart_EventScript_Clerk_7:
# 18 "data/global.pory"
	pokemart BadgedPokemart4
	goto Mart_EventScript_Clerk_1

Mart_EventScript_Clerk_8:
# 20 "data/global.pory"
	pokemart BadgedPokemart6
	goto Mart_EventScript_Clerk_1

Mart_EventScript_Clerk_9:
# 23 "data/global.pory"
	pokemart BadgedPokemart7
	goto Mart_EventScript_Clerk_1


	.align 2
# 32 "data/global.pory"
BadgedPokemart0:
# 33 "data/global.pory"
	.2byte ITEM_POKE_BALL
# 34 "data/global.pory"
	.2byte ITEM_POTION
# 35 "data/global.pory"
	.2byte ITEM_ANTIDOTE
# 36 "data/global.pory"
	.2byte ITEM_PARALYZE_HEAL
# 37 "data/global.pory"
	.2byte ITEM_AWAKENING
# 38 "data/global.pory"
	.2byte ITEM_BURN_HEAL
# 39 "data/global.pory"
	.2byte ITEM_ICE_HEAL
# 40 "data/global.pory"
	.2byte ITEM_REPEL
	.2byte ITEM_NONE

	.align 2
# 43 "data/global.pory"
BadgedPokemart1:
# 44 "data/global.pory"
	.2byte ITEM_POKE_BALL
# 45 "data/global.pory"
	.2byte ITEM_GREAT_BALL
# 46 "data/global.pory"
	.2byte ITEM_POTION
# 47 "data/global.pory"
	.2byte ITEM_SUPER_POTION
# 48 "data/global.pory"
	.2byte ITEM_ANTIDOTE
# 49 "data/global.pory"
	.2byte ITEM_PARALYZE_HEAL
# 50 "data/global.pory"
	.2byte ITEM_AWAKENING
# 51 "data/global.pory"
	.2byte ITEM_BURN_HEAL
# 52 "data/global.pory"
	.2byte ITEM_ICE_HEAL
# 53 "data/global.pory"
	.2byte ITEM_REPEL
	.2byte ITEM_NONE

	.align 2
# 56 "data/global.pory"
BadgedPokemart2:
# 57 "data/global.pory"
	.2byte ITEM_POKE_BALL
# 58 "data/global.pory"
	.2byte ITEM_GREAT_BALL
# 59 "data/global.pory"
	.2byte ITEM_POTION
# 60 "data/global.pory"
	.2byte ITEM_SUPER_POTION
# 61 "data/global.pory"
	.2byte ITEM_ANTIDOTE
# 62 "data/global.pory"
	.2byte ITEM_PARALYZE_HEAL
# 63 "data/global.pory"
	.2byte ITEM_AWAKENING
# 64 "data/global.pory"
	.2byte ITEM_BURN_HEAL
# 65 "data/global.pory"
	.2byte ITEM_ICE_HEAL
# 66 "data/global.pory"
	.2byte ITEM_REPEL
# 67 "data/global.pory"
	.2byte ITEM_SUPER_REPEL
	.2byte ITEM_NONE

	.align 2
# 70 "data/global.pory"
BadgedPokemart3:
# 71 "data/global.pory"
	.2byte ITEM_POKE_BALL
# 72 "data/global.pory"
	.2byte ITEM_GREAT_BALL
# 73 "data/global.pory"
	.2byte ITEM_POTION
# 74 "data/global.pory"
	.2byte ITEM_SUPER_POTION
# 75 "data/global.pory"
	.2byte ITEM_REVIVE
# 76 "data/global.pory"
	.2byte ITEM_ANTIDOTE
# 77 "data/global.pory"
	.2byte ITEM_PARALYZE_HEAL
# 78 "data/global.pory"
	.2byte ITEM_AWAKENING
# 79 "data/global.pory"
	.2byte ITEM_BURN_HEAL
# 80 "data/global.pory"
	.2byte ITEM_ICE_HEAL
# 81 "data/global.pory"
	.2byte ITEM_FULL_HEAL
# 82 "data/global.pory"
	.2byte ITEM_REPEL
# 83 "data/global.pory"
	.2byte ITEM_SUPER_REPEL
# 84 "data/global.pory"
	.2byte ITEM_MAX_REPEL
	.2byte ITEM_NONE

	.align 2
# 87 "data/global.pory"
BadgedPokemart4:
# 88 "data/global.pory"
	.2byte ITEM_POKE_BALL
# 89 "data/global.pory"
	.2byte ITEM_GREAT_BALL
# 90 "data/global.pory"
	.2byte ITEM_ULTRA_BALL
# 91 "data/global.pory"
	.2byte ITEM_POTION
# 92 "data/global.pory"
	.2byte ITEM_SUPER_POTION
# 93 "data/global.pory"
	.2byte ITEM_HYPER_POTION
# 94 "data/global.pory"
	.2byte ITEM_REVIVE
# 95 "data/global.pory"
	.2byte ITEM_ANTIDOTE
# 96 "data/global.pory"
	.2byte ITEM_PARALYZE_HEAL
# 97 "data/global.pory"
	.2byte ITEM_AWAKENING
# 98 "data/global.pory"
	.2byte ITEM_BURN_HEAL
# 99 "data/global.pory"
	.2byte ITEM_ICE_HEAL
# 100 "data/global.pory"
	.2byte ITEM_FULL_HEAL
# 101 "data/global.pory"
	.2byte ITEM_REPEL
# 102 "data/global.pory"
	.2byte ITEM_SUPER_REPEL
# 103 "data/global.pory"
	.2byte ITEM_MAX_REPEL
	.2byte ITEM_NONE

	.align 2
# 106 "data/global.pory"
BadgedPokemart6:
# 107 "data/global.pory"
	.2byte ITEM_POKE_BALL
# 108 "data/global.pory"
	.2byte ITEM_GREAT_BALL
# 109 "data/global.pory"
	.2byte ITEM_ULTRA_BALL
# 110 "data/global.pory"
	.2byte ITEM_POTION
# 111 "data/global.pory"
	.2byte ITEM_SUPER_POTION
# 112 "data/global.pory"
	.2byte ITEM_HYPER_POTION
# 113 "data/global.pory"
	.2byte ITEM_MAX_POTION
# 114 "data/global.pory"
	.2byte ITEM_REVIVE
# 115 "data/global.pory"
	.2byte ITEM_ANTIDOTE
# 116 "data/global.pory"
	.2byte ITEM_PARALYZE_HEAL
# 117 "data/global.pory"
	.2byte ITEM_AWAKENING
# 118 "data/global.pory"
	.2byte ITEM_BURN_HEAL
# 119 "data/global.pory"
	.2byte ITEM_ICE_HEAL
# 120 "data/global.pory"
	.2byte ITEM_FULL_HEAL
# 121 "data/global.pory"
	.2byte ITEM_REPEL
# 122 "data/global.pory"
	.2byte ITEM_SUPER_REPEL
# 123 "data/global.pory"
	.2byte ITEM_MAX_REPEL
	.2byte ITEM_NONE

	.align 2
# 126 "data/global.pory"
BadgedPokemart7:
# 127 "data/global.pory"
	.2byte ITEM_POKE_BALL
# 128 "data/global.pory"
	.2byte ITEM_GREAT_BALL
# 129 "data/global.pory"
	.2byte ITEM_ULTRA_BALL
# 130 "data/global.pory"
	.2byte ITEM_POTION
# 131 "data/global.pory"
	.2byte ITEM_SUPER_POTION
# 132 "data/global.pory"
	.2byte ITEM_HYPER_POTION
# 133 "data/global.pory"
	.2byte ITEM_MAX_POTION
# 134 "data/global.pory"
	.2byte ITEM_FULL_RESTORE
# 135 "data/global.pory"
	.2byte ITEM_REVIVE
# 136 "data/global.pory"
	.2byte ITEM_ANTIDOTE
# 137 "data/global.pory"
	.2byte ITEM_PARALYZE_HEAL
# 138 "data/global.pory"
	.2byte ITEM_AWAKENING
# 139 "data/global.pory"
	.2byte ITEM_BURN_HEAL
# 140 "data/global.pory"
	.2byte ITEM_ICE_HEAL
# 141 "data/global.pory"
	.2byte ITEM_FULL_HEAL
# 142 "data/global.pory"
	.2byte ITEM_REPEL
# 143 "data/global.pory"
	.2byte ITEM_SUPER_REPEL
# 144 "data/global.pory"
	.2byte ITEM_MAX_REPEL
	.2byte ITEM_NONE
