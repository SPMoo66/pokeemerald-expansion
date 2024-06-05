FortreeCity_House2_MapScripts::
	.byte 0

FortreeCity_House2_EventScript_RotomCatalogGiver::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_ROTOM_CATALOG, FortreeCity_House2_EventScript_GoToStore
	msgbox FortreeCity_House2_Text_GivingRotomCatalog, MSGBOX_DEFAULT
	giveitem ITEM_ROTOM_CATALOG
	setflag FLAG_RECEIVED_ROTOM_CATALOG
	release
	end

FortreeCity_House2_EventScript_GoToStore::
	msgbox FortreeCity_House2_Text_GoToStore, MSGBOX_DEFAULT
	release
	end

FortreeCity_House2_Text_GivingRotomCatalog:
	.string "Hmm…\p"
	.string "I've been looking to buy some new\n"
	.string "appliances, but nothing looks right.\p"
	.string "Here, you can have this catalog instead.$"

FortreeCity_House2_Text_GoToStore:
	.string "I guess we'll have to go to the store.\n"
	.string "in person to pick something out.$"

