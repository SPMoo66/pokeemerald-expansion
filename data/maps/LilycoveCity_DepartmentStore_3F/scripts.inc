LilycoveCity_DepartmentStore_3F_MapScripts::
	.byte 0

@ The merchant below uses a copy of the Energy Guru mart for vitamins
LilycoveCity_DepartmentStore_3F_EventScript_ClerkLeft::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart SlateportCity_Pokemart_EnergyGuru
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

LilycoveCity_DepartmentStore_3F_EventScript_ClerkRight::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart LilycoveCity_DepartmentStore_3F_Pokemart_StatBoosters
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
LilycoveCity_DepartmentStore_3F_Pokemart_StatBoosters:
	.2byte ITEM_X_SPEED
	.2byte ITEM_X_SP_ATK
	.2byte ITEM_X_ATTACK
	.2byte ITEM_X_DEFENSE
	.2byte ITEM_DIRE_HIT
	.2byte ITEM_GUARD_SPEC
	.2byte ITEM_X_ACCURACY
	pokemartlistend

LilycoveCity_DepartmentStore_3F_EventScript_TriathleteM::
	msgbox LilycoveCity_DepartmentStore_3F_Text_ItemsBestForTougheningPokemon, MSGBOX_NPC
	end

LilycoveCity_DepartmentStore_3F_EventScript_PokefanM::
	msgbox LilycoveCity_DepartmentStore_3F_Text_WantMoreEndurance, MSGBOX_NPC
	end

LilycoveCity_DepartmentStore_3F_EventScript_Woman::
	msgbox LilycoveCity_DepartmentStore_3F_Text_GaveCarbosToSpeedUpMon, MSGBOX_NPC
	end

LilycoveCity_DepartmentStore_3F_Text_ItemsBestForTougheningPokemon:
	.string "For quickly toughening up Pokémon,\n"
	.string "items are the best.\p"
	.string "Protein boosts Attack,\n"
	.string "and Calcium raises Sp. Atk.$"

LilycoveCity_DepartmentStore_3F_Text_WantMoreEndurance:
	.string "I want my Pokémon to have more\n"
	.string "endurance.\p"
	.string "I'm trying to decide whether to raise\n"
	.string "Defense with Iron, or Sp. Def with Zinc.$"

LilycoveCity_DepartmentStore_3F_Text_GaveCarbosToSpeedUpMon:
	.string "I gave a Carbos to my Pokémon,\n"
	.string "and its Speed went up.$"

