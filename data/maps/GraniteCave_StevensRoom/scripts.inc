GraniteCave_StevensRoom_MapScripts::
	.byte 0


GraniteCave_StevensRoom_EventScript_Steven::
# 6 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	lock
# 7 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	faceplayer
# 8 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	speakername CommonText_Steven
# 9 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_Text_ImStevenLetterForMe
# 10 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	closemessage
# 11 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setvar VAR_0x8004, ITEM_LETTER
# 12 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	call Common_EventScript_PlayerHandedOverTheItem
# 13 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	speakername CommonText_Steven
# 14 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_Text_ThankYouTakeThis
# 15 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	closemessage
# 16 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	giveitem ITEM_TM_STEEL_WING
# 17 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	speakername CommonText_Steven
# 18 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_Text_CouldBecomeChampionLetsRegister
# 19 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	closemessage
# 20 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay 30
# 21 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 22 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_Text_RegisteredSteven
# 23 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitfanfare
# 24 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	closemessage
# 25 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay 30
# 26 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setflag FLAG_REGISTERED_STEVEN_POKENAV
# 27 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	speakername CommonText_Steven
# 28 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_Text_IveGotToHurryAlong
# 29 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	closemessage
# 30 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	compare VAR_FACING, DIR_NORTH
	goto_if_eq GraniteCave_StevensRoom_EventScript_Steven_2
# 33 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	compare VAR_FACING, DIR_SOUTH
	goto_if_eq GraniteCave_StevensRoom_EventScript_Steven_3
# 38 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GraniteCave_StevensRoom_Movement_PlayerTurnTowardExit
# 39 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement 1, GraniteCave_StevensRoom_Movement_StevenExit
GraniteCave_StevensRoom_EventScript_Steven_1:
# 41 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitmovement 0
# 42 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	playse SE_EXIT
# 43 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	removeobject 1
# 44 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	release
	return

GraniteCave_StevensRoom_EventScript_Steven_2:
# 31 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement 1, GraniteCave_StevensRoom_Movement_StevenExit
	goto GraniteCave_StevensRoom_EventScript_Steven_1

GraniteCave_StevensRoom_EventScript_Steven_3:
# 34 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GraniteCave_StevensRoom_Movement_PlayerTurnTowardExit
# 35 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement 1, GraniteCave_StevensRoom_Movement_StevenExitSouth
	goto GraniteCave_StevensRoom_EventScript_Steven_1


# 47 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Movement_StevenExit:
# 48 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 48 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 48 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 48 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 48 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 49 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay_8
	step_end

# 52 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Movement_PlayerTurnTowardExit:
# 53 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay_16
# 53 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay_16
# 53 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay_16
# 54 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_in_place_faster_up
	step_end

# 57 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Movement_StevenExitSouth:
# 58 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_left
# 59 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 59 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 59 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 60 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_right
# 61 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 61 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 62 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay_8
	step_end

GraniteCave_StevensRoom_Text_ImStevenLetterForMe::
# 65 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "My name is Steven.\p"
	.string "I'm interested in rare stones,\n"
	.string "so I travel here and there.\p"
	.string "Oh?\n"
	.string "A Letter for me?$"

GraniteCave_StevensRoom_Text_ThankYouTakeThis::
# 73 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Okay, thank you.\p"
	.string "You went through all this trouble to\n"
	.string "deliver that. I need to thank you.\p"
	.string "Let me see…\n"
	.string "I'll give you this TM.\p"
	.string "It contains my favorite move,\n"
	.string "Steel Wing.$"

GraniteCave_StevensRoom_Text_CouldBecomeChampionLetsRegister::
# 83 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Your Pokémon appear quite capable.\p"
	.string "If you keep training, you could even\n"
	.string "become the Champion of the Pokémon\l"
	.string "League one day. That's what I think.\p"
	.string "I know, since we've gotten to know each\n"
	.string "other, let's register one another in\l"
	.string "our Pokénavs.\p"
	.string "… … … … … …$"

GraniteCave_StevensRoom_Text_RegisteredSteven::
# 94 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Registered Steven\n"
	.string "in the Pokénav.$"

GraniteCave_StevensRoom_Text_IveGotToHurryAlong::
# 99 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Now, I've got to hurry along.$"
