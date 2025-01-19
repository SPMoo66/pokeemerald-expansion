# 1 "data/maps/Route102/scripts.pory"

# 2 "data/maps/Route102/scripts.pory"
Route102_EventScript_LittleBoy::
# 3 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_ImNotVeryTall, MSGBOX_NPC
# 4 "data/maps/Route102/scripts.pory"
	end
# 5 "data/maps/Route102/scripts.pory"

# 6 "data/maps/Route102/scripts.pory"
Route102_EventScript_RouteSignOldale::
# 7 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_RouteSignOldale, MSGBOX_SIGN
# 8 "data/maps/Route102/scripts.pory"
	end
# 9 "data/maps/Route102/scripts.pory"

# 10 "data/maps/Route102/scripts.pory"
Route102_EventScript_RouteSignPetalburg::
# 11 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_RouteSignPetalburg, MSGBOX_SIGN
# 12 "data/maps/Route102/scripts.pory"
	end
# 13 "data/maps/Route102/scripts.pory"

# 14 "data/maps/Route102/scripts.pory"
Route102_EventScript_Boy::
# 15 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CatchWholeBunchOfPokemon, MSGBOX_NPC
# 16 "data/maps/Route102/scripts.pory"
	end
# 17 "data/maps/Route102/scripts.pory"

# 18 "data/maps/Route102/scripts.pory"
Route102_EventScript_Calvin::
# 19 "data/maps/Route102/scripts.pory"
	trainerbattle_single TRAINER_CALVIN_1, Route102_Text_CalvinIntro, Route102_Text_CalvinDefeated, Route102_EventScript_CalvinRegisterMatchCallAfterBattle
# 20 "data/maps/Route102/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 21 "data/maps/Route102/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route102_EventScript_CalvinRematch
# 22 "data/maps/Route102/scripts.pory"
	setvar VAR_0x8004, TRAINER_CALVIN_1
# 23 "data/maps/Route102/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 24 "data/maps/Route102/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route102_EventScript_CalvinTryRegister
# 25 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinPostBattle, MSGBOX_DEFAULT
# 26 "data/maps/Route102/scripts.pory"
	release
# 27 "data/maps/Route102/scripts.pory"
	end
# 28 "data/maps/Route102/scripts.pory"

# 29 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinRegisterMatchCallAfterBattle::
# 30 "data/maps/Route102/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 31 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 32 "data/maps/Route102/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route102_EventScript_CalvinRegisterMatchCall
# 33 "data/maps/Route102/scripts.pory"
	release
# 34 "data/maps/Route102/scripts.pory"
	end
# 35 "data/maps/Route102/scripts.pory"

# 36 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinRegisterMatchCall::
# 37 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinRegisterShort, MSGBOX_DEFAULT
# 38 "data/maps/Route102/scripts.pory"
	register_matchcall TRAINER_CALVIN_1
# 39 "data/maps/Route102/scripts.pory"
	release
# 40 "data/maps/Route102/scripts.pory"
	end
# 41 "data/maps/Route102/scripts.pory"

# 42 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinTryRegister::
# 43 "data/maps/Route102/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route102_EventScript_CalvinRegister
# 44 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinPostBattle, MSGBOX_DEFAULT
# 45 "data/maps/Route102/scripts.pory"
	release
# 46 "data/maps/Route102/scripts.pory"
	end
# 47 "data/maps/Route102/scripts.pory"

# 48 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinRegister::
# 49 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinRegister, MSGBOX_DEFAULT
# 50 "data/maps/Route102/scripts.pory"
	register_matchcall TRAINER_CALVIN_1
# 51 "data/maps/Route102/scripts.pory"
	release
# 52 "data/maps/Route102/scripts.pory"
	end
# 53 "data/maps/Route102/scripts.pory"

# 54 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinRematch::
# 55 "data/maps/Route102/scripts.pory"
	trainerbattle_rematch TRAINER_CALVIN_1, Route102_Text_CalvinRematchIntro, Route102_Text_CalvinRematchDefeated
# 56 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinRematchPostBattle, MSGBOX_AUTOCLOSE
# 57 "data/maps/Route102/scripts.pory"
	end
# 58 "data/maps/Route102/scripts.pory"

# 59 "data/maps/Route102/scripts.pory"
Route102_EventScript_Rick::
# 60 "data/maps/Route102/scripts.pory"
	trainerbattle_single TRAINER_RICK, Route102_Text_RickIntro, Route102_Text_RickDefeated
# 61 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_RickPostBattle, MSGBOX_AUTOCLOSE
# 62 "data/maps/Route102/scripts.pory"
	end
# 63 "data/maps/Route102/scripts.pory"

# 64 "data/maps/Route102/scripts.pory"
Route102_EventScript_Tiana::
# 65 "data/maps/Route102/scripts.pory"
	trainerbattle_single TRAINER_TIANA, Route102_Text_TianaIntro, Route102_Text_TianaDefeated
# 66 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_TianaPostBattle, MSGBOX_AUTOCLOSE
# 67 "data/maps/Route102/scripts.pory"
	end
# 68 "data/maps/Route102/scripts.pory"

# 69 "data/maps/Route102/scripts.pory"
Route102_EventScript_Allen::
# 70 "data/maps/Route102/scripts.pory"
	trainerbattle_single TRAINER_ALLEN, Route102_Text_AllenIntro, Route102_Text_AllenDefeated
# 71 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_AllenPostBattle, MSGBOX_AUTOCLOSE
# 72 "data/maps/Route102/scripts.pory"
	end
# 73 "data/maps/Route102/scripts.pory"

# 74 "data/maps/Route102/scripts.pory"
Route102_Text_WatchMeCatchPokemon:
# 75 "data/maps/Route102/scripts.pory"
	.string "{PLAYER}…\n"
# 76 "data/maps/Route102/scripts.pory"
	.string "Pokémon hide in tall grass like this,\l"
# 77 "data/maps/Route102/scripts.pory"
	.string "don't they?\p"
# 78 "data/maps/Route102/scripts.pory"
	.string "Please watch me and see if I can\n"
# 79 "data/maps/Route102/scripts.pory"
	.string "catch one properly.\p"
# 80 "data/maps/Route102/scripts.pory"
	.string "…Whoa!$"
# 81 "data/maps/Route102/scripts.pory"

# 82 "data/maps/Route102/scripts.pory"
Route102_Text_WallyIDidIt:
# 83 "data/maps/Route102/scripts.pory"
	.string "I did it… It's my…\n"
# 84 "data/maps/Route102/scripts.pory"
	.string "My Pokémon!$"
# 85 "data/maps/Route102/scripts.pory"

# 86 "data/maps/Route102/scripts.pory"
Route102_Text_LetsGoBack:
# 87 "data/maps/Route102/scripts.pory"
	.string "{PLAYER}, thank you!\n"
# 88 "data/maps/Route102/scripts.pory"
	.string "Let's go back to the Gym!$"
# 89 "data/maps/Route102/scripts.pory"

# 90 "data/maps/Route102/scripts.pory"
Route102_Text_ImNotVeryTall:
# 91 "data/maps/Route102/scripts.pory"
	.string "I'm…not very tall, so I sink right\n"
# 92 "data/maps/Route102/scripts.pory"
	.string "into tall grass.\p"
# 93 "data/maps/Route102/scripts.pory"
	.string "The grass goes up my nose and…\n"
# 94 "data/maps/Route102/scripts.pory"
	.string "Fwafwafwafwafwa…\p"
# 95 "data/maps/Route102/scripts.pory"
	.string "Fwatchoo!$"
# 96 "data/maps/Route102/scripts.pory"

# 97 "data/maps/Route102/scripts.pory"
Route102_Text_CatchWholeBunchOfPokemon:
# 98 "data/maps/Route102/scripts.pory"
	.string "I'm going to catch a whole bunch of\n"
# 99 "data/maps/Route102/scripts.pory"
	.string "Pokémon!$"
# 100 "data/maps/Route102/scripts.pory"

# 101 "data/maps/Route102/scripts.pory"
Route102_Text_RouteSignOldale:
# 102 "data/maps/Route102/scripts.pory"
	.string "Route 102\n"
# 103 "data/maps/Route102/scripts.pory"
	.string "{RIGHT_ARROW} Oldale Town$"
# 104 "data/maps/Route102/scripts.pory"

# 105 "data/maps/Route102/scripts.pory"
Route102_Text_RouteSignPetalburg:
# 106 "data/maps/Route102/scripts.pory"
	.string "Route 102\n"
# 107 "data/maps/Route102/scripts.pory"
	.string "{LEFT_ARROW} Petalburg City$"

Route102_MapScripts::
# 111 "data/maps/Route102/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route102_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route102_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 112 "data/maps/Route102/scripts.pory"
	setflag FLAG_TEMP_1
# 113 "data/maps/Route102/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 2
	goto_if_eq Route102_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

Route102_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 114 "data/maps/Route102/scripts.pory"
	clearflag FLAG_TEMP_1
	return

