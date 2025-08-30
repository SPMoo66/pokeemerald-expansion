PokemonLeague_EliteFour_SetAdvanceToNextRoomMetatiles::
# 2 "data/scripts/elite_four.pory"
	applymovement LOCALID_PLAYER, Common_Movement_Delay32
# 3 "data/scripts/elite_four.pory"
	waitmovement 0
# 4 "data/scripts/elite_four.pory"
	playse SE_DOOR
# 5 "data/scripts/elite_four.pory"
	setmetatile 6, 1, METATILE_EliteFour_OpenDoor_Frame, FALSE
# 6 "data/scripts/elite_four.pory"
	setmetatile 6, 2, METATILE_EliteFour_OpenDoor_Opening, FALSE
# 7 "data/scripts/elite_four.pory"
	setmetatile 0, 2, METATILE_EliteFour_RightSpotlightOff, TRUE
# 8 "data/scripts/elite_four.pory"
	setmetatile 1, 2, METATILE_EliteFour_LeftSpotlightOff, TRUE
# 9 "data/scripts/elite_four.pory"
	setmetatile 2, 2, METATILE_EliteFour_RightSpotlightOff, TRUE
# 10 "data/scripts/elite_four.pory"
	setmetatile 3, 2, METATILE_EliteFour_LeftSpotlightOff, TRUE
# 11 "data/scripts/elite_four.pory"
	setmetatile 4, 2, METATILE_EliteFour_RightSpotlightOff, TRUE
# 12 "data/scripts/elite_four.pory"
	setmetatile 8, 2, METATILE_EliteFour_LeftSpotlightOff, TRUE
# 13 "data/scripts/elite_four.pory"
	setmetatile 9, 2, METATILE_EliteFour_RightSpotlightOff, TRUE
# 14 "data/scripts/elite_four.pory"
	setmetatile 10, 2, METATILE_EliteFour_LeftSpotlightOff, TRUE
# 15 "data/scripts/elite_four.pory"
	setmetatile 11, 2, METATILE_EliteFour_RightSpotlightOff, TRUE
# 16 "data/scripts/elite_four.pory"
	setmetatile 12, 2, METATILE_EliteFour_LeftSpotlightOff, TRUE
# 17 "data/scripts/elite_four.pory"
	special DrawWholeMapView
	return


PokemonLeague_EliteFour_EventScript_WalkInCloseDoor::
# 22 "data/scripts/elite_four.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp6
# 23 "data/scripts/elite_four.pory"
	waitmovement 0
# 24 "data/scripts/elite_four.pory"
	playse SE_TRUCK_DOOR
# 25 "data/scripts/elite_four.pory"
	setmetatile 5, 12, METATILE_EliteFour_EntryDoor_ClosedTop, TRUE
# 26 "data/scripts/elite_four.pory"
	setmetatile 6, 12, METATILE_EliteFour_EntryDoor_ClosedTop, TRUE
# 27 "data/scripts/elite_four.pory"
	setmetatile 7, 12, METATILE_EliteFour_EntryDoor_ClosedTop, TRUE
# 28 "data/scripts/elite_four.pory"
	setmetatile 5, 13, METATILE_EliteFour_EntryDoor_ClosedBottom, TRUE
# 29 "data/scripts/elite_four.pory"
	setmetatile 6, 13, METATILE_EliteFour_EntryDoor_ClosedBottom, TRUE
# 30 "data/scripts/elite_four.pory"
	setmetatile 7, 13, METATILE_EliteFour_EntryDoor_ClosedBottom, TRUE
# 31 "data/scripts/elite_four.pory"
	special DrawWholeMapView
	return


PokemonLeague_EliteFour_EventScript_CloseDoor::
# 36 "data/scripts/elite_four.pory"
	setmetatile 5, 12, METATILE_EliteFour_EntryDoor_ClosedTop, TRUE
# 37 "data/scripts/elite_four.pory"
	setmetatile 6, 12, METATILE_EliteFour_EntryDoor_ClosedTop, TRUE
# 38 "data/scripts/elite_four.pory"
	setmetatile 7, 12, METATILE_EliteFour_EntryDoor_ClosedTop, TRUE
# 39 "data/scripts/elite_four.pory"
	setmetatile 5, 13, METATILE_EliteFour_EntryDoor_ClosedBottom, TRUE
# 40 "data/scripts/elite_four.pory"
	setmetatile 6, 13, METATILE_EliteFour_EntryDoor_ClosedBottom, TRUE
# 41 "data/scripts/elite_four.pory"
	setmetatile 7, 13, METATILE_EliteFour_EntryDoor_ClosedBottom, TRUE
	return


PokemonLeague_EliteFour_EventScript_ShuffleEliteFour::
# 46 "data/scripts/elite_four.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, PokemonLeague_EliteFour_EventScript_ShuffleEliteFour_1
	return

PokemonLeague_EliteFour_EventScript_ShuffleEliteFour_1:
# 47 "data/scripts/elite_four.pory"
	shuffleelitefour
# 48 "data/scripts/elite_four.pory"
	readelitefour
# 49 "data/scripts/elite_four.pory"
	buffernumberstring 0, VAR_0x8000
# 50 "data/scripts/elite_four.pory"
	msgbox Debug_PrintRivalVar
# 51 "data/scripts/elite_four.pory"
	closemessage
# 52 "data/scripts/elite_four.pory"
	delay 10
# 53 "data/scripts/elite_four.pory"
	buffernumberstring 0, VAR_0x8001
# 54 "data/scripts/elite_four.pory"
	msgbox Debug_PrintRivalVar
# 55 "data/scripts/elite_four.pory"
	closemessage
# 56 "data/scripts/elite_four.pory"
	delay 10
# 57 "data/scripts/elite_four.pory"
	buffernumberstring 0, VAR_0x8002
# 58 "data/scripts/elite_four.pory"
	msgbox Debug_PrintRivalVar
# 59 "data/scripts/elite_four.pory"
	closemessage
# 60 "data/scripts/elite_four.pory"
	delay 10
# 61 "data/scripts/elite_four.pory"
	buffernumberstring 0, VAR_0x8003
# 62 "data/scripts/elite_four.pory"
	msgbox Debug_PrintRivalVar
# 63 "data/scripts/elite_four.pory"
	closemessage
# 64 "data/scripts/elite_four.pory"
	setvar VAR_TEMP_5, 1
	return


PokemonLeague_EliteFour_EventScript_GetCurrentMemberGraphics::
# 69 "data/scripts/elite_four.pory"
	call PokemonLeague_EliteFour_EventScript_GetCurrentMember
# 70 "data/scripts/elite_four.pory"
	call PokemonLeague_EliteFour_EventScript_SetGraphics
	return


PokemonLeague_EliteFour_EventScript_GetCurrentMember::
# 74 "data/scripts/elite_four.pory"
	switch VAR_ELITE_4_STATE_2
# 75 "data/scripts/elite_four.pory"
	case 1, PokemonLeague_EliteFour_EventScript_GetCurrentMember_2
# 78 "data/scripts/elite_four.pory"
	case 2, PokemonLeague_EliteFour_EventScript_GetCurrentMember_3
# 81 "data/scripts/elite_four.pory"
	case 3, PokemonLeague_EliteFour_EventScript_GetCurrentMember_4
# 84 "data/scripts/elite_four.pory"
	case 4, PokemonLeague_EliteFour_EventScript_GetCurrentMember_5
# 88 "data/scripts/elite_four.pory"
	setvar VAR_0x8008, 8
	return

PokemonLeague_EliteFour_EventScript_GetCurrentMember_2:
# 76 "data/scripts/elite_four.pory"
	readelitefour
# 77 "data/scripts/elite_four.pory"
	copyvar VAR_0x8008, VAR_0x8000
	return

PokemonLeague_EliteFour_EventScript_GetCurrentMember_3:
# 79 "data/scripts/elite_four.pory"
	readelitefour
# 80 "data/scripts/elite_four.pory"
	copyvar VAR_0x8008, VAR_0x8001
	return

PokemonLeague_EliteFour_EventScript_GetCurrentMember_4:
# 82 "data/scripts/elite_four.pory"
	readelitefour
# 83 "data/scripts/elite_four.pory"
	copyvar VAR_0x8008, VAR_0x8002
	return

PokemonLeague_EliteFour_EventScript_GetCurrentMember_5:
# 85 "data/scripts/elite_four.pory"
	readelitefour
# 86 "data/scripts/elite_four.pory"
	copyvar VAR_0x8008, VAR_0x8003
	return


PokemonLeague_EliteFour_EventScript_SetGraphics::
# 93 "data/scripts/elite_four.pory"
	switch VAR_0x8008
# 94 "data/scripts/elite_four.pory"
	case 1, PokemonLeague_EliteFour_EventScript_SetGraphics_2
# 96 "data/scripts/elite_four.pory"
	case 2, PokemonLeague_EliteFour_EventScript_SetGraphics_3
# 98 "data/scripts/elite_four.pory"
	case 3, PokemonLeague_EliteFour_EventScript_SetGraphics_4
# 100 "data/scripts/elite_four.pory"
	case 4, PokemonLeague_EliteFour_EventScript_SetGraphics_5
# 103 "data/scripts/elite_four.pory"
	setvar VAR_OBJ_GFX_ID_B, OBJ_EVENT_GFX_NORMAN
	return

PokemonLeague_EliteFour_EventScript_SetGraphics_2:
# 95 "data/scripts/elite_four.pory"
	setvar VAR_OBJ_GFX_ID_B, OBJ_EVENT_GFX_SIDNEY
	return

PokemonLeague_EliteFour_EventScript_SetGraphics_3:
# 97 "data/scripts/elite_four.pory"
	setvar VAR_OBJ_GFX_ID_B, OBJ_EVENT_GFX_PHOEBE
	return

PokemonLeague_EliteFour_EventScript_SetGraphics_4:
# 99 "data/scripts/elite_four.pory"
	setvar VAR_OBJ_GFX_ID_B, OBJ_EVENT_GFX_GLACIA
	return

PokemonLeague_EliteFour_EventScript_SetGraphics_5:
# 101 "data/scripts/elite_four.pory"
	setvar VAR_OBJ_GFX_ID_B, OBJ_EVENT_GFX_DRAKE
	return


PokemonLeague_EliteFour_EventScript_TrainerScript::
# 108 "data/scripts/elite_four.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, PokemonLeague_EliteFour_EventScript_TrainerScript_1
# 125 "data/scripts/elite_four.pory"
	switch VAR_ELITE_4_STATE_2
# 126 "data/scripts/elite_four.pory"
	case 1, PokemonLeague_EliteFour_EventScript_TrainerScript_11
# 128 "data/scripts/elite_four.pory"
	case 2, PokemonLeague_EliteFour_EventScript_TrainerScript_12
# 130 "data/scripts/elite_four.pory"
	case 3, PokemonLeague_EliteFour_EventScript_TrainerScript_13
# 132 "data/scripts/elite_four.pory"
	case 4, PokemonLeague_EliteFour_EventScript_TrainerScript_14
	return

PokemonLeague_EliteFour_EventScript_TrainerScript_1:
# 109 "data/scripts/elite_four.pory"
	setflag FLAG_ELITE_FOUR_CHALLENGE
# 110 "data/scripts/elite_four.pory"
	call PokemonLeague_EliteFour_EventScript_GetCurrentMember
# 111 "data/scripts/elite_four.pory"
	switch VAR_0x8008
# 112 "data/scripts/elite_four.pory"
	case 1, PokemonLeague_EliteFour_EventScript_TrainerScript_5
# 114 "data/scripts/elite_four.pory"
	case 2, PokemonLeague_EliteFour_EventScript_TrainerScript_6
# 116 "data/scripts/elite_four.pory"
	case 3, PokemonLeague_EliteFour_EventScript_TrainerScript_7
# 118 "data/scripts/elite_four.pory"
	case 4, PokemonLeague_EliteFour_EventScript_TrainerScript_8
	return

PokemonLeague_EliteFour_EventScript_TrainerScript_5:
# 113 "data/scripts/elite_four.pory"
	goto EverGrandeCity_SidneysRoom_EventScript_Sidney
	return

PokemonLeague_EliteFour_EventScript_TrainerScript_6:
# 115 "data/scripts/elite_four.pory"
	goto EverGrandeCity_PhoebesRoom_EventScript_Phoebe
	return

PokemonLeague_EliteFour_EventScript_TrainerScript_7:
# 117 "data/scripts/elite_four.pory"
	goto EverGrandeCity_GlaciasRoom_EventScript_Glacia
	return

PokemonLeague_EliteFour_EventScript_TrainerScript_8:
# 119 "data/scripts/elite_four.pory"
	goto EverGrandeCity_DrakesRoom_EventScript_Drake
	return

PokemonLeague_EliteFour_EventScript_TrainerScript_11:
# 127 "data/scripts/elite_four.pory"
	goto EverGrandeCity_SidneysRoom_EventScript_Sidney
	return

PokemonLeague_EliteFour_EventScript_TrainerScript_12:
# 129 "data/scripts/elite_four.pory"
	goto EverGrandeCity_PhoebesRoom_EventScript_Phoebe
	return

PokemonLeague_EliteFour_EventScript_TrainerScript_13:
# 131 "data/scripts/elite_four.pory"
	goto EverGrandeCity_GlaciasRoom_EventScript_Glacia
	return

PokemonLeague_EliteFour_EventScript_TrainerScript_14:
# 133 "data/scripts/elite_four.pory"
	goto EverGrandeCity_DrakesRoom_EventScript_Drake
	return


EverGrandeCity_SidneysRoom_EventScript_Sidney::
# 141 "data/scripts/elite_four.pory"
	lock
# 142 "data/scripts/elite_four.pory"
	faceplayer
# 143 "data/scripts/elite_four.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 144 "data/scripts/elite_four.pory"
	speakername CommonText_Sidney
# 145 "data/scripts/elite_four.pory"
	goto_if_unset FLAG_DEFEATED_ELITE_4_SIDNEY, EverGrandeCity_SidneysRoom_EventScript_Sidney_2
EverGrandeCity_SidneysRoom_EventScript_Sidney_1:
# 152 "data/scripts/elite_four.pory"
	speakername CommonText_Sidney
# 153 "data/scripts/elite_four.pory"
	msgbox EverGrandeCity_SidneysRoom_Text_PostBattleSpeech, MSGBOX_DEFAULT
# 154 "data/scripts/elite_four.pory"
	release
	return

EverGrandeCity_SidneysRoom_EventScript_Sidney_2:
# 146 "data/scripts/elite_four.pory"
	playbgm MUS_ENCOUNTER_ELITE_FOUR, FALSE
# 147 "data/scripts/elite_four.pory"
	msgbox EverGrandeCity_SidneysRoom_Text_IntroSpeech, MSGBOX_DEFAULT
# 148 "data/scripts/elite_four.pory"
	trainerbattle_no_intro TRAINER_SIDNEY, EverGrandeCity_SidneysRoom_Text_Defeat
# 149 "data/scripts/elite_four.pory"
	setflag FLAG_DEFEATED_ELITE_4_SIDNEY
# 150 "data/scripts/elite_four.pory"
	call PokemonLeague_EliteFour_SetAdvanceToNextRoomMetatiles
	goto EverGrandeCity_SidneysRoom_EventScript_Sidney_1


EverGrandeCity_PhoebesRoom_EventScript_Phoebe::
# 184 "data/scripts/elite_four.pory"
	lock
# 185 "data/scripts/elite_four.pory"
	faceplayer
# 186 "data/scripts/elite_four.pory"
	speakername CommonText_Phoebe
# 187 "data/scripts/elite_four.pory"
	goto_if_unset FLAG_DEFEATED_ELITE_4_PHOEBE, EverGrandeCity_PhoebesRoom_EventScript_Phoebe_2
EverGrandeCity_PhoebesRoom_EventScript_Phoebe_1:
# 194 "data/scripts/elite_four.pory"
	speakername CommonText_Phoebe
# 195 "data/scripts/elite_four.pory"
	msgbox EverGrandeCity_PhoebesRoom_Text_PostBattleSpeech, MSGBOX_DEFAULT
# 196 "data/scripts/elite_four.pory"
	release
	return

EverGrandeCity_PhoebesRoom_EventScript_Phoebe_2:
# 188 "data/scripts/elite_four.pory"
	playbgm MUS_ENCOUNTER_ELITE_FOUR, FALSE
# 189 "data/scripts/elite_four.pory"
	msgbox EverGrandeCity_PhoebesRoom_Text_IntroSpeech, MSGBOX_DEFAULT
# 190 "data/scripts/elite_four.pory"
	trainerbattle_no_intro TRAINER_PHOEBE, EverGrandeCity_PhoebesRoom_Text_Defeat
# 191 "data/scripts/elite_four.pory"
	setflag FLAG_DEFEATED_ELITE_4_PHOEBE
# 192 "data/scripts/elite_four.pory"
	call PokemonLeague_EliteFour_SetAdvanceToNextRoomMetatiles
	goto EverGrandeCity_PhoebesRoom_EventScript_Phoebe_1


EverGrandeCity_GlaciasRoom_EventScript_Glacia::
# 229 "data/scripts/elite_four.pory"
	lock
# 230 "data/scripts/elite_four.pory"
	faceplayer
# 231 "data/scripts/elite_four.pory"
	speakername CommonText_Glacia
# 232 "data/scripts/elite_four.pory"
	goto_if_unset FLAG_DEFEATED_ELITE_4_GLACIA, EverGrandeCity_GlaciasRoom_EventScript_Glacia_2
EverGrandeCity_GlaciasRoom_EventScript_Glacia_1:
# 239 "data/scripts/elite_four.pory"
	speakername CommonText_Glacia
# 240 "data/scripts/elite_four.pory"
	msgbox EverGrandeCity_GlaciasRoom_Text_PostBattleSpeech, MSGBOX_DEFAULT
# 241 "data/scripts/elite_four.pory"
	release
	return

EverGrandeCity_GlaciasRoom_EventScript_Glacia_2:
# 233 "data/scripts/elite_four.pory"
	playbgm MUS_ENCOUNTER_ELITE_FOUR, FALSE
# 234 "data/scripts/elite_four.pory"
	msgbox EverGrandeCity_GlaciasRoom_Text_IntroSpeech, MSGBOX_DEFAULT
# 235 "data/scripts/elite_four.pory"
	trainerbattle_no_intro TRAINER_GLACIA, EverGrandeCity_GlaciasRoom_Text_Defeat
# 236 "data/scripts/elite_four.pory"
	setflag FLAG_DEFEATED_ELITE_4_GLACIA
# 237 "data/scripts/elite_four.pory"
	call PokemonLeague_EliteFour_SetAdvanceToNextRoomMetatiles
	goto EverGrandeCity_GlaciasRoom_EventScript_Glacia_1


EverGrandeCity_DrakesRoom_EventScript_Drake::
# 273 "data/scripts/elite_four.pory"
	lock
# 274 "data/scripts/elite_four.pory"
	faceplayer
# 275 "data/scripts/elite_four.pory"
	speakername CommonText_Drake
# 276 "data/scripts/elite_four.pory"
	goto_if_unset FLAG_DEFEATED_ELITE_4_DRAKE, EverGrandeCity_DrakesRoom_EventScript_Drake_2
EverGrandeCity_DrakesRoom_EventScript_Drake_1:
# 285 "data/scripts/elite_four.pory"
	speakername CommonText_Drake
# 286 "data/scripts/elite_four.pory"
	msgbox EverGrandeCity_DrakesRoom_Text_PostBattleSpeech, MSGBOX_DEFAULT
# 287 "data/scripts/elite_four.pory"
	release
	return

EverGrandeCity_DrakesRoom_EventScript_Drake_2:
# 277 "data/scripts/elite_four.pory"
	playbgm MUS_ENCOUNTER_ELITE_FOUR, FALSE
# 278 "data/scripts/elite_four.pory"
	msgbox EverGrandeCity_DrakesRoom_Text_IntroSpeech, MSGBOX_DEFAULT
# 279 "data/scripts/elite_four.pory"
	trainerbattle_no_intro TRAINER_DRAKE, EverGrandeCity_DrakesRoom_Text_Defeat
# 280 "data/scripts/elite_four.pory"
	setvar VAR_0x8004, FANCOUNTER_DEFEATED_DRAKE
# 281 "data/scripts/elite_four.pory"
	special Script_TryGainNewFanFromCounter
# 282 "data/scripts/elite_four.pory"
	setflag FLAG_DEFEATED_ELITE_4_DRAKE
# 283 "data/scripts/elite_four.pory"
	call PokemonLeague_EliteFour_SetAdvanceToNextRoomMetatiles
	goto EverGrandeCity_DrakesRoom_EventScript_Drake_1


EverGrandeCity_SidneysRoom_Text_IntroSpeech::
# 157 "data/scripts/elite_four.pory"
	.string "Welcome, challenger!\n"
	.string "I'm Sidney of the Elite Four.\p"
	.string "I like that look you're giving me.\n"
	.string "I guess you'll give me a good match.\l"
	.string "That's good! Looking real good!\p"
	.string "All right! You and me, let's enjoy\n"
	.string "a battle that can only be staged\l"
	.string "here in the Pokémon League!$"

EverGrandeCity_SidneysRoom_Text_Defeat::
# 168 "data/scripts/elite_four.pory"
	.string "Well, how do you like that? I lost!\n"
	.string "Eh, it was fun, so it doesn't matter.$"

EverGrandeCity_SidneysRoom_Text_PostBattleSpeech::
# 173 "data/scripts/elite_four.pory"
	.string "Well, listen to what this loser has\n"
	.string "to say.\p"
	.string "You've got what it takes to go far.\n"
	.string "Now, go on to the next room and enjoy\l"
	.string "your next battle!$"

EverGrandeCity_PhoebesRoom_Text_IntroSpeech::
# 199 "data/scripts/elite_four.pory"
	.string "Ahahaha!\p"
	.string "I'm Phoebe of the Elite Four.\n"
	.string "I did my training on Mt. Pyre.\p"
	.string "While I trained, I gained the ability\n"
	.string "to commune with Ghost-type Pokémon.\p"
	.string "Yes, the bond I developed with Pokémon\n"
	.string "is extremely tight.\p"
	.string "So, come on, just try and see if you can\n"
	.string "even inflict damage on my Pokémon!$"

EverGrandeCity_PhoebesRoom_Text_Defeat::
# 211 "data/scripts/elite_four.pory"
	.string "Oh, darn.\n"
	.string "I've gone and lost.$"

EverGrandeCity_PhoebesRoom_Text_PostBattleSpeech::
# 216 "data/scripts/elite_four.pory"
	.string "There's a definite bond between you\n"
	.string "and your Pokémon, too.\p"
	.string "I didn't recognize it, so it's only\n"
	.string "natural that I lost.\p"
	.string "Yup, I'd like to see how far your bond\n"
	.string "will carry you.\p"
	.string "Go ahead, move on to the next room.$"

EverGrandeCity_GlaciasRoom_Text_IntroSpeech::
# 244 "data/scripts/elite_four.pory"
	.string "Welcome, my name is Glacia\n"
	.string "of the Elite Four.\p"
	.string "I've traveled from afar to Hoenn\n"
	.string "so that I may hone my ice skills.\p"
	.string "But all I have seen are challenges by\n"
	.string "weak Trainers and their Pokémon.\p"
	.string "What about you?\p"
	.string "It would please me to no end if I could\n"
	.string "go all out against you!$"

EverGrandeCity_GlaciasRoom_Text_Defeat::
# 256 "data/scripts/elite_four.pory"
	.string "You and your Pokémon…\n"
	.string "How hot your spirits burn!\p"
	.string "The all-consuming heat overwhelms.\p"
	.string "It's no surprise that my icy skills\n"
	.string "failed to harm you.$"

EverGrandeCity_GlaciasRoom_Text_PostBattleSpeech::
# 264 "data/scripts/elite_four.pory"
	.string "Advance to the next room.\p"
	.string "And there, confirm the truly fearsome\n"
	.string "side of the Pokémon League.$"

EverGrandeCity_DrakesRoom_Text_IntroSpeech::
# 290 "data/scripts/elite_four.pory"
	.string "I am the last of the Pokémon League\n"
	.string "Elite Four, Drake the Dragon master!\p"
	.string "In their natural state, Pokémon are\n"
	.string "wild living things. They are free.\p"
	.string "At times, they hinder us.\n"
	.string "At times, they help us.\p"
	.string "For us to battle with Pokémon as\n"
	.string "partners, do you know what it takes?\p"
	.string "Do you know what is needed?\p"
	.string "If you don't, then you will never\n"
	.string "prevail over me!$"

EverGrandeCity_DrakesRoom_Text_Defeat::
# 304 "data/scripts/elite_four.pory"
	.string "Superb, it should be said.$"

EverGrandeCity_DrakesRoom_Text_PostBattleSpeech::
# 308 "data/scripts/elite_four.pory"
	.string "You deserve every credit for coming\n"
	.string "this far as a Trainer of Pokémon.\p"
	.string "You do seem to know what is needed.\p"
	.string "Yes, what a Trainer needs is a\n"
	.string "virtuous heart.\p"
	.string "Pokémon touch the good hearts of\n"
	.string "Trainers and learn good from wrong.\p"
	.string "They touch the good hearts of\n"
	.string "Trainers and grow strong.\p"
	.string "Go! Go onwards!\n"
	.string "The Champion is waiting!$"
