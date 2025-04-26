# 1 "data/maps/Route102/scripts.pory"

# 2 "data/maps/Route102/scripts.pory"
Route102_MapScripts::
# 3 "data/maps/Route102/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route102_OnTransition
# 4 "data/maps/Route102/scripts.pory"
	.byte 0
# 5 "data/maps/Route102/scripts.pory"

# 6 "data/maps/Route102/scripts.pory"
Route102_OnTransition:
# 7 "data/maps/Route102/scripts.pory"
	setflag FLAG_TEMP_1
# 8 "data/maps/Route102/scripts.pory"
	call_if_eq VAR_EMERALBODY_RIVAL_STATE, 2, EventScript_Clear_FlagTemp1
# 9 "data/maps/Route102/scripts.pory"
	end
# 10 "data/maps/Route102/scripts.pory"

# 11 "data/maps/Route102/scripts.pory"
Route102_EventScript_LittleBoy::
# 12 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_ImNotVeryTall, MSGBOX_NPC
# 13 "data/maps/Route102/scripts.pory"
	end
# 14 "data/maps/Route102/scripts.pory"

# 15 "data/maps/Route102/scripts.pory"
Route102_EventScript_RouteSignOldale::
# 16 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_RouteSignOldale, MSGBOX_SIGN
# 17 "data/maps/Route102/scripts.pory"
	end
# 18 "data/maps/Route102/scripts.pory"

# 19 "data/maps/Route102/scripts.pory"
Route102_EventScript_RouteSignPetalburg::
# 20 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_RouteSignPetalburg, MSGBOX_SIGN
# 21 "data/maps/Route102/scripts.pory"
	end
# 22 "data/maps/Route102/scripts.pory"

# 23 "data/maps/Route102/scripts.pory"
Route102_EventScript_Boy::
# 24 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CatchWholeBunchOfPokemon, MSGBOX_NPC
# 25 "data/maps/Route102/scripts.pory"
	end
# 26 "data/maps/Route102/scripts.pory"

# 27 "data/maps/Route102/scripts.pory"
Route102_EventScript_Calvin::
# 28 "data/maps/Route102/scripts.pory"
	trainerbattle_single TRAINER_CALVIN_1, Route102_Text_CalvinIntro, Route102_Text_CalvinDefeated, Route102_EventScript_CalvinRegisterMatchCallAfterBattle
# 29 "data/maps/Route102/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 30 "data/maps/Route102/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route102_EventScript_CalvinRematch
# 31 "data/maps/Route102/scripts.pory"
	setvar VAR_0x8004, TRAINER_CALVIN_1
# 32 "data/maps/Route102/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 33 "data/maps/Route102/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route102_EventScript_CalvinTryRegister
# 34 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinPostBattle, MSGBOX_DEFAULT
# 35 "data/maps/Route102/scripts.pory"
	release
# 36 "data/maps/Route102/scripts.pory"
	end
# 37 "data/maps/Route102/scripts.pory"

# 38 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinRegisterMatchCallAfterBattle::
# 39 "data/maps/Route102/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 40 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 41 "data/maps/Route102/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route102_EventScript_CalvinRegisterMatchCall
# 42 "data/maps/Route102/scripts.pory"
	release
# 43 "data/maps/Route102/scripts.pory"
	end
# 44 "data/maps/Route102/scripts.pory"

# 45 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinRegisterMatchCall::
# 46 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinRegisterShort, MSGBOX_DEFAULT
# 47 "data/maps/Route102/scripts.pory"
	register_matchcall TRAINER_CALVIN_1
# 48 "data/maps/Route102/scripts.pory"
	release
# 49 "data/maps/Route102/scripts.pory"
	end
# 50 "data/maps/Route102/scripts.pory"

# 51 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinTryRegister::
# 52 "data/maps/Route102/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route102_EventScript_CalvinRegister
# 53 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinPostBattle, MSGBOX_DEFAULT
# 54 "data/maps/Route102/scripts.pory"
	release
# 55 "data/maps/Route102/scripts.pory"
	end
# 56 "data/maps/Route102/scripts.pory"

# 57 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinRegister::
# 58 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinRegister, MSGBOX_DEFAULT
# 59 "data/maps/Route102/scripts.pory"
	register_matchcall TRAINER_CALVIN_1
# 60 "data/maps/Route102/scripts.pory"
	release
# 61 "data/maps/Route102/scripts.pory"
	end
# 62 "data/maps/Route102/scripts.pory"

# 63 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinRematch::
# 64 "data/maps/Route102/scripts.pory"
	trainerbattle_rematch TRAINER_CALVIN_1, Route102_Text_CalvinRematchIntro, Route102_Text_CalvinRematchDefeated
# 65 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinRematchPostBattle, MSGBOX_AUTOCLOSE
# 66 "data/maps/Route102/scripts.pory"
	end
# 67 "data/maps/Route102/scripts.pory"

# 68 "data/maps/Route102/scripts.pory"
Route102_EventScript_Rick::
# 69 "data/maps/Route102/scripts.pory"
	trainerbattle_single TRAINER_RICK, Route102_Text_RickIntro, Route102_Text_RickDefeated
# 70 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_RickPostBattle, MSGBOX_AUTOCLOSE
# 71 "data/maps/Route102/scripts.pory"
	end
# 72 "data/maps/Route102/scripts.pory"

# 73 "data/maps/Route102/scripts.pory"
Route102_EventScript_Tiana::
# 74 "data/maps/Route102/scripts.pory"
	trainerbattle_single TRAINER_TIANA, Route102_Text_TianaIntro, Route102_Text_TianaDefeated
# 75 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_TianaPostBattle, MSGBOX_AUTOCLOSE
# 76 "data/maps/Route102/scripts.pory"
	end
# 77 "data/maps/Route102/scripts.pory"

# 78 "data/maps/Route102/scripts.pory"
Route102_EventScript_Allen::
# 79 "data/maps/Route102/scripts.pory"
	trainerbattle_single TRAINER_ALLEN, Route102_Text_AllenIntro, Route102_Text_AllenDefeated
# 80 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_AllenPostBattle, MSGBOX_AUTOCLOSE
# 81 "data/maps/Route102/scripts.pory"
	end
# 82 "data/maps/Route102/scripts.pory"

# 83 "data/maps/Route102/scripts.pory"
Route102_Text_WatchMeCatchPokemon:
# 84 "data/maps/Route102/scripts.pory"
	.string "{PLAYER}…\n"
# 85 "data/maps/Route102/scripts.pory"
	.string "Pokémon hide in tall grass like this,\l"
# 86 "data/maps/Route102/scripts.pory"
	.string "don't they?\p"
# 87 "data/maps/Route102/scripts.pory"
	.string "Please watch me and see if I can\n"
# 88 "data/maps/Route102/scripts.pory"
	.string "catch one properly.\p"
# 89 "data/maps/Route102/scripts.pory"
	.string "…Whoa!$"
# 90 "data/maps/Route102/scripts.pory"

# 91 "data/maps/Route102/scripts.pory"
Route102_Text_WallyIDidIt:
# 92 "data/maps/Route102/scripts.pory"
	.string "I did it… It's my…\n"
# 93 "data/maps/Route102/scripts.pory"
	.string "My Pokémon!$"
# 94 "data/maps/Route102/scripts.pory"

# 95 "data/maps/Route102/scripts.pory"
Route102_Text_LetsGoBack:
# 96 "data/maps/Route102/scripts.pory"
	.string "{PLAYER}, thank you!\n"
# 97 "data/maps/Route102/scripts.pory"
	.string "Let's go back to the Gym!$"
# 98 "data/maps/Route102/scripts.pory"

# 99 "data/maps/Route102/scripts.pory"
Route102_Text_ImNotVeryTall:
# 100 "data/maps/Route102/scripts.pory"
	.string "I'm…not very tall, so I sink right\n"
# 101 "data/maps/Route102/scripts.pory"
	.string "into tall grass.\p"
# 102 "data/maps/Route102/scripts.pory"
	.string "The grass goes up my nose and…\n"
# 103 "data/maps/Route102/scripts.pory"
	.string "Fwafwafwafwafwa…\p"
# 104 "data/maps/Route102/scripts.pory"
	.string "Fwatchoo!$"
# 105 "data/maps/Route102/scripts.pory"

# 106 "data/maps/Route102/scripts.pory"
Route102_Text_CatchWholeBunchOfPokemon:
# 107 "data/maps/Route102/scripts.pory"
	.string "I'm going to catch a whole bunch of\n"
# 108 "data/maps/Route102/scripts.pory"
	.string "Pokémon!$"
# 109 "data/maps/Route102/scripts.pory"

# 110 "data/maps/Route102/scripts.pory"
Route102_Text_RouteSignOldale:
# 111 "data/maps/Route102/scripts.pory"
	.string "Route 102\n"
# 112 "data/maps/Route102/scripts.pory"
	.string "{RIGHT_ARROW} Oldale Town$"
# 113 "data/maps/Route102/scripts.pory"

# 114 "data/maps/Route102/scripts.pory"
Route102_Text_RouteSignPetalburg:
# 115 "data/maps/Route102/scripts.pory"
	.string "Route 102\n"
# 116 "data/maps/Route102/scripts.pory"
	.string "{LEFT_ARROW} Petalburg City$"
