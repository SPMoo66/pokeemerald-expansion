FallarborTown_CozmosHouse_MapScripts::
	.byte 0

FallarborTown_CozmosHouse_EventScript_ProfCozmo::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_BOTTLE_CAP_COZMOS, FallarborTown_CozmosHouse_EventScript_GaveMeteorite
	checkitem ITEM_METEORITE
	goto_if_eq VAR_RESULT, TRUE, FallarborTown_CozmosHouse_EventScript_PlayerHasMeteorite
	speakername (CommonText_Cozmo)
	msgbox FallarborTown_CozmosHouse_Text_MeteoriteWillNeverBeMineNow, MSGBOX_DEFAULT
	release
	end

FallarborTown_CozmosHouse_EventScript_PlayerHasMeteorite::
	call_if_unset FLAG_TEMP_2, FallarborTown_CozmosHouse_EventScript_NoticeMeteorite
	call_if_set FLAG_TEMP_2, FallarborTown_CozmosHouse_EventScript_AskForMeteorite
	goto_if_eq VAR_RESULT, NO, FallarborTown_CozmosHouse_EventScript_DeclineGiveMeteorite
	speakername (CommonText_Cozmo)
	msgbox FallarborTown_CozmosHouse_Text_PleaseTakeThisBottleCap, MSGBOX_DEFAULT
	giveitem ITEM_BOTTLE_CAP
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setvar VAR_0x8004, ITEM_METEORITE
	call Common_EventScript_PlayerHandedOverTheItem
	setflag FLAG_RECEIVED_BOTTLE_CAP_COZMOS
	speakername (CommonText_Cozmo)
	msgbox FallarborTown_CozmosHouse_Text_ReallyGoingToHelpMyResearch, MSGBOX_DEFAULT
	release
	end

FallarborTown_CozmosHouse_EventScript_NoticeMeteorite::
	speakername (CommonText_Cozmo)
	msgbox FallarborTown_CozmosHouse_Text_MeteoriteWillNeverBeMineNow, MSGBOX_DEFAULT
	speakername (CommonText_Cozmo)
	msgbox FallarborTown_CozmosHouse_Text_IsThatMeteoriteMayIHaveIt, MSGBOX_YESNO
	return

FallarborTown_CozmosHouse_EventScript_AskForMeteorite::
	speakername (CommonText_Cozmo)
	msgbox FallarborTown_CozmosHouse_Text_MayIHaveMeteorite, MSGBOX_YESNO
	return

FallarborTown_CozmosHouse_EventScript_DeclineGiveMeteorite::
	setflag FLAG_TEMP_2
	speakername (CommonText_Cozmo)
	msgbox FallarborTown_CozmosHouse_Text_CrushedWithDisappointment, MSGBOX_DEFAULT
	release
	end

FallarborTown_CozmosHouse_EventScript_GaveMeteorite::
	speakername (CommonText_Cozmo)
	goto_if_set FLAG_METEORITE, FallarborTown_CozmosHouse_EventScript_DeoxysMeteoriteObtained
	checkforspecies SPECIES_DEOXYS, NO_PARTY_SCREEN, FallarborTown_CozmosHouse_EventScript_HasDeoxys
	msgbox FallarborTown_CozmosHouse_Text_ReallyGoingToHelpMyResearch, MSGBOX_DEFAULT
	release
	end

FallarborTown_CozmosHouse_EventScript_HasDeoxys::
	msgbox FallarborTown_CozmosHouse_Text_HasDeoxys, MSGBOX_DEFAULT
	giveitem ITEM_METEORITE
	setflag FLAG_METEORITE
	release
	end

FallarborTown_CozmosHouse_EventScript_DeoxysMeteoriteObtained::
	msgbox FallarborTown_CozmosHouse_Text_DeoxysMeteorite, MSGBOX_DEFAULT
	release
	end

FallarborTown_CozmosHouse_EventScript_CozmosWife::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_BOTTLE_CAP_COZMOS, FallarborTown_CozmosHouse_EventScript_CozmoIsHappy
	goto_if_set FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY, FallarborTown_CozmosHouse_EventScript_CozmoIsSad
	msgbox FallarborTown_CozmosHouse_Text_CozmoWentToMeteorFalls, MSGBOX_DEFAULT
	release
	end

FallarborTown_CozmosHouse_EventScript_CozmoIsSad::
	msgbox FallarborTown_CozmosHouse_Text_FeelSorryForCozmo, MSGBOX_DEFAULT
	release
	end

FallarborTown_CozmosHouse_EventScript_CozmoIsHappy::
	msgbox FallarborTown_CozmosHouse_Text_CozmoIsSoHappy, MSGBOX_DEFAULT
	release
	end

FallarborTown_CozmosHouse_Text_MeteoriteWillNeverBeMineNow:
	.string "Oh…\n"
	.string "I never should have let myself be\l"
	.string "conned into telling Team Magma where\l"
	.string "you can find Meteorites…\p"
	.string "That Meteorite from Meteor Falls…\n"
	.string "It's never going to be mine now…$"

FallarborTown_CozmosHouse_Text_IsThatMeteoriteMayIHaveIt:
	.string "Oh!\n"
	.string "Hah?\p"
	.string "That item…\p"
	.string "Could it be?\p"
	.string "Is it the Meteorite that Team Magma\n"
	.string "took from Meteor Falls?\p"
	.string "Please, may I have it?\p"
	.string "I'm not asking for it for free.\n"
	.string "And you can have it back later.\l"
	.string "How about in exchange for something?$"

FallarborTown_CozmosHouse_Text_PleaseTakeThisBottleCap
	.string "This represents my feelings of gratitude.\n"
	.string "Please use it!$"

FallarborTown_CozmosHouse_Text_ReallyGoingToHelpMyResearch:
	.string "Oh, I can't believe it.\n"
	.string "This is really, really great!\p"
	.string "This is really going to help my research!\p"
	.string "Come back later and I'll share my\n$"
	.string "with you.$"

FallarborTown_CozmosHouse_Text_CrushedWithDisappointment:
	.string "Oh, but…\n"
	.string "I'm crushed with disappointment…$"

FallarborTown_CozmosHouse_Text_MayIHaveMeteorite:
	.string "Please, may I have that Meteorite?\p"
	.string "I'm not asking for it for free.\n"
	.string "How about in exchange for this TM?$"

FallarborTown_CozmosHouse_Text_HasDeoxys:
	.string "Wait, is that what I think it is?!\p"
	.string "That Pokémon you have there came down\n"
	.string "with the very same Meteorite you gave me!\p"
	.string "My research has shown that Deoxys will\n"
	.string "react to a Meteorite in some way.\p"
	.string "Here, if you take the Meteorite back"
	.string "maybe you can find better use for it.$"

FallarborTown_CozmosHouse_Text_DeoxysMeteorite:
	.string "I have a feeling that a Deoxys will\n"
	.string "react to a Meteorite in some way.\p"
	.string "Try it out when you have a chance.$"

FallarborTown_CozmosHouse_Text_CozmoWentToMeteorFalls:
	.string "Prof. Cozmo went off to Meteor Falls\n"
	.string "on Route 114 with some people from\l"
	.string "Team Magma.$"

FallarborTown_CozmosHouse_Text_FeelSorryForCozmo:
	.string "Poor Prof. Cozmo…\n"
	.string "He's so depressed… I feel sorry for him.$"

FallarborTown_CozmosHouse_Text_CozmoIsSoHappy:
	.string "Look at Prof. Cozmo…\n"
	.string "He's so happy! I think it's cute.$"

