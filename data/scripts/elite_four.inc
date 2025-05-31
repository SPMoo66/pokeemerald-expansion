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


EverGrandeCity_SidneysRoom_EventScript_Sidney::
# 48 "data/scripts/elite_four.pory"
	lock
# 49 "data/scripts/elite_four.pory"
	faceplayer
# 50 "data/scripts/elite_four.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 51 "data/scripts/elite_four.pory"
	goto_if_unset FLAG_DEFEATED_ELITE_4_SIDNEY, EverGrandeCity_SidneysRoom_EventScript_Sidney_2
EverGrandeCity_SidneysRoom_EventScript_Sidney_1:
# 58 "data/scripts/elite_four.pory"
	msgbox EverGrandeCity_SidneysRoom_Text_PostBattleSpeech, MSGBOX_DEFAULT
# 59 "data/scripts/elite_four.pory"
	release
	return

EverGrandeCity_SidneysRoom_EventScript_Sidney_2:
# 52 "data/scripts/elite_four.pory"
	playbgm MUS_ENCOUNTER_ELITE_FOUR, FALSE
# 53 "data/scripts/elite_four.pory"
	msgbox EverGrandeCity_SidneysRoom_Text_IntroSpeech, MSGBOX_DEFAULT
# 54 "data/scripts/elite_four.pory"
	trainerbattle_no_intro TRAINER_SIDNEY, EverGrandeCity_SidneysRoom_Text_Defeat
# 55 "data/scripts/elite_four.pory"
	setflag FLAG_DEFEATED_ELITE_4_SIDNEY
# 56 "data/scripts/elite_four.pory"
	call PokemonLeague_EliteFour_SetAdvanceToNextRoomMetatiles
	goto EverGrandeCity_SidneysRoom_EventScript_Sidney_1


EverGrandeCity_PhoebesRoom_EventScript_Phoebe::
# 89 "data/scripts/elite_four.pory"
	lock
# 90 "data/scripts/elite_four.pory"
	faceplayer
# 91 "data/scripts/elite_four.pory"
	goto_if_unset FLAG_DEFEATED_ELITE_4_PHOEBE, EverGrandeCity_PhoebesRoom_EventScript_Phoebe_2
EverGrandeCity_PhoebesRoom_EventScript_Phoebe_1:
# 98 "data/scripts/elite_four.pory"
	msgbox EverGrandeCity_PhoebesRoom_Text_PostBattleSpeech, MSGBOX_DEFAULT
# 99 "data/scripts/elite_four.pory"
	release
	return

EverGrandeCity_PhoebesRoom_EventScript_Phoebe_2:
# 92 "data/scripts/elite_four.pory"
	playbgm MUS_ENCOUNTER_ELITE_FOUR, FALSE
# 93 "data/scripts/elite_four.pory"
	msgbox EverGrandeCity_PhoebesRoom_Text_IntroSpeech, MSGBOX_DEFAULT
# 94 "data/scripts/elite_four.pory"
	trainerbattle_no_intro TRAINER_PHOEBE, EverGrandeCity_PhoebesRoom_Text_Defeat
# 95 "data/scripts/elite_four.pory"
	setflag FLAG_DEFEATED_ELITE_4_PHOEBE
# 96 "data/scripts/elite_four.pory"
	call PokemonLeague_EliteFour_SetAdvanceToNextRoomMetatiles
	goto EverGrandeCity_PhoebesRoom_EventScript_Phoebe_1


EverGrandeCity_GlaciasRoom_EventScript_Glacia::
# 132 "data/scripts/elite_four.pory"
	lock
# 133 "data/scripts/elite_four.pory"
	faceplayer
# 134 "data/scripts/elite_four.pory"
	goto_if_unset FLAG_DEFEATED_ELITE_4_GLACIA, EverGrandeCity_GlaciasRoom_EventScript_Glacia_2
EverGrandeCity_GlaciasRoom_EventScript_Glacia_1:
# 141 "data/scripts/elite_four.pory"
	msgbox EverGrandeCity_GlaciasRoom_Text_PostBattleSpeech, MSGBOX_DEFAULT
# 142 "data/scripts/elite_four.pory"
	release
	return

EverGrandeCity_GlaciasRoom_EventScript_Glacia_2:
# 135 "data/scripts/elite_four.pory"
	playbgm MUS_ENCOUNTER_ELITE_FOUR, FALSE
# 136 "data/scripts/elite_four.pory"
	msgbox EverGrandeCity_GlaciasRoom_Text_IntroSpeech, MSGBOX_DEFAULT
# 137 "data/scripts/elite_four.pory"
	trainerbattle_no_intro TRAINER_GLACIA, EverGrandeCity_GlaciasRoom_Text_Defeat
# 138 "data/scripts/elite_four.pory"
	setflag FLAG_DEFEATED_ELITE_4_GLACIA
# 139 "data/scripts/elite_four.pory"
	call PokemonLeague_EliteFour_SetAdvanceToNextRoomMetatiles
	goto EverGrandeCity_GlaciasRoom_EventScript_Glacia_1


EverGrandeCity_DrakesRoom_EventScript_Drake::
# 174 "data/scripts/elite_four.pory"
	lock
# 175 "data/scripts/elite_four.pory"
	faceplayer
# 176 "data/scripts/elite_four.pory"
	goto_if_unset FLAG_DEFEATED_ELITE_4_DRAKE, EverGrandeCity_DrakesRoom_EventScript_Drake_2
EverGrandeCity_DrakesRoom_EventScript_Drake_1:
# 185 "data/scripts/elite_four.pory"
	msgbox EverGrandeCity_DrakesRoom_Text_PostBattleSpeech, MSGBOX_DEFAULT
# 186 "data/scripts/elite_four.pory"
	release
	return

EverGrandeCity_DrakesRoom_EventScript_Drake_2:
# 177 "data/scripts/elite_four.pory"
	playbgm MUS_ENCOUNTER_ELITE_FOUR, FALSE
# 178 "data/scripts/elite_four.pory"
	msgbox EverGrandeCity_DrakesRoom_Text_IntroSpeech, MSGBOX_DEFAULT
# 179 "data/scripts/elite_four.pory"
	trainerbattle_no_intro TRAINER_DRAKE, EverGrandeCity_DrakesRoom_Text_Defeat
# 180 "data/scripts/elite_four.pory"
	setvar VAR_0x8004, FANCOUNTER_DEFEATED_DRAKE
# 181 "data/scripts/elite_four.pory"
	special Script_TryGainNewFanFromCounter
# 182 "data/scripts/elite_four.pory"
	setflag FLAG_DEFEATED_ELITE_4_DRAKE
# 183 "data/scripts/elite_four.pory"
	call PokemonLeague_EliteFour_SetAdvanceToNextRoomMetatiles
	goto EverGrandeCity_DrakesRoom_EventScript_Drake_1


EverGrandeCity_SidneysRoom_Text_IntroSpeech::
# 62 "data/scripts/elite_four.pory"
	.string "Welcome, challenger!\n"
	.string "I'm Sidney of the Elite Four.\p"
	.string "I like that look you're giving me.\n"
	.string "I guess you'll give me a good match.\l"
	.string "That's good! Looking real good!\p"
	.string "All right! You and me, let's enjoy\n"
	.string "a battle that can only be staged\l"
	.string "here in the Pokémon League!$"

EverGrandeCity_SidneysRoom_Text_Defeat::
# 73 "data/scripts/elite_four.pory"
	.string "Well, how do you like that? I lost!\n"
	.string "Eh, it was fun, so it doesn't matter.$"

EverGrandeCity_SidneysRoom_Text_PostBattleSpeech::
# 78 "data/scripts/elite_four.pory"
	.string "Well, listen to what this loser has\n"
	.string "to say.\p"
	.string "You've got what it takes to go far.\n"
	.string "Now, go on to the next room and enjoy\l"
	.string "your next battle!$"

EverGrandeCity_PhoebesRoom_Text_IntroSpeech::
# 102 "data/scripts/elite_four.pory"
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
# 114 "data/scripts/elite_four.pory"
	.string "Oh, darn.\n"
	.string "I've gone and lost.$"

EverGrandeCity_PhoebesRoom_Text_PostBattleSpeech::
# 119 "data/scripts/elite_four.pory"
	.string "There's a definite bond between you\n"
	.string "and your Pokémon, too.\p"
	.string "I didn't recognize it, so it's only\n"
	.string "natural that I lost.\p"
	.string "Yup, I'd like to see how far your bond\n"
	.string "will carry you.\p"
	.string "Go ahead, move on to the next room.$"

EverGrandeCity_GlaciasRoom_Text_IntroSpeech::
# 145 "data/scripts/elite_four.pory"
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
# 157 "data/scripts/elite_four.pory"
	.string "You and your Pokémon…\n"
	.string "How hot your spirits burn!\p"
	.string "The all-consuming heat overwhelms.\p"
	.string "It's no surprise that my icy skills\n"
	.string "failed to harm you.$"

EverGrandeCity_GlaciasRoom_Text_PostBattleSpeech::
# 165 "data/scripts/elite_four.pory"
	.string "Advance to the next room.\p"
	.string "And there, confirm the truly fearsome\n"
	.string "side of the Pokémon League.$"

EverGrandeCity_DrakesRoom_Text_IntroSpeech::
# 189 "data/scripts/elite_four.pory"
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
# 203 "data/scripts/elite_four.pory"
	.string "Superb, it should be said.$"

EverGrandeCity_DrakesRoom_Text_PostBattleSpeech::
# 207 "data/scripts/elite_four.pory"
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
