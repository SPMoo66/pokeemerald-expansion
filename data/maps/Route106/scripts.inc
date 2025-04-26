# 1 "data/maps/Route106/scripts.pory"

# 2 "data/maps/Route106/scripts.pory"
Route106_MapScripts::
# 3 "data/maps/Route106/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route106_OnTransition
# 4 "data/maps/Route106/scripts.pory"
	.byte 0
# 5 "data/maps/Route106/scripts.pory"

# 6 "data/maps/Route106/scripts.pory"
Route106_OnTransition:
# 7 "data/maps/Route106/scripts.pory"
	setflag FLAG_TEMP_1
# 8 "data/maps/Route106/scripts.pory"
	call_if_eq VAR_EMERALBODY_RIVAL_STATE, 4, EventScript_Clear_FlagTemp1
# 9 "data/maps/Route106/scripts.pory"
	end
# 10 "data/maps/Route106/scripts.pory"

# 11 "data/maps/Route106/scripts.pory"
Route106_EventScript_TrainerTipsSign::
# 12 "data/maps/Route106/scripts.pory"
	msgbox Route106_Text_TrainerTips, MSGBOX_SIGN
# 13 "data/maps/Route106/scripts.pory"
	end
# 14 "data/maps/Route106/scripts.pory"

# 15 "data/maps/Route106/scripts.pory"
Route106_EventScript_Douglas::
# 16 "data/maps/Route106/scripts.pory"
	trainerbattle_single TRAINER_DOUGLAS, Route106_Text_DouglasIntro, Route106_Text_DouglasDefeated
# 17 "data/maps/Route106/scripts.pory"
	msgbox Route106_Text_DouglasPostBattle, MSGBOX_AUTOCLOSE
# 18 "data/maps/Route106/scripts.pory"
	end
# 19 "data/maps/Route106/scripts.pory"

# 20 "data/maps/Route106/scripts.pory"
Route106_EventScript_Kyla::
# 21 "data/maps/Route106/scripts.pory"
	trainerbattle_single TRAINER_KYLA, Route106_Text_KylaIntro, Route106_Text_KylaDefeated
# 22 "data/maps/Route106/scripts.pory"
	msgbox Route106_Text_KylaPostBattle, MSGBOX_AUTOCLOSE
# 23 "data/maps/Route106/scripts.pory"
	end
# 24 "data/maps/Route106/scripts.pory"

# 25 "data/maps/Route106/scripts.pory"
Route106_EventScript_Elliot::
# 26 "data/maps/Route106/scripts.pory"
	trainerbattle_single TRAINER_ELLIOT_1, Route106_Text_ElliotIntro, Route106_Text_ElliotDefeated, Route106_EventScript_ElliotRegisterMatchCallAfterBattle
# 27 "data/maps/Route106/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 28 "data/maps/Route106/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route106_EventScript_ElliotRematch
# 29 "data/maps/Route106/scripts.pory"
	msgbox Route106_Text_ElliotPostBattle, MSGBOX_DEFAULT
# 30 "data/maps/Route106/scripts.pory"
	release
# 31 "data/maps/Route106/scripts.pory"
	end
# 32 "data/maps/Route106/scripts.pory"

# 33 "data/maps/Route106/scripts.pory"
Route106_EventScript_ElliotRegisterMatchCallAfterBattle::
# 34 "data/maps/Route106/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 35 "data/maps/Route106/scripts.pory"
	waitmovement 0
# 36 "data/maps/Route106/scripts.pory"
	msgbox Route106_Text_ElliotRegister, MSGBOX_DEFAULT
# 37 "data/maps/Route106/scripts.pory"
	register_matchcall TRAINER_ELLIOT_1
# 38 "data/maps/Route106/scripts.pory"
	release
# 39 "data/maps/Route106/scripts.pory"
	end
# 40 "data/maps/Route106/scripts.pory"

# 41 "data/maps/Route106/scripts.pory"
Route106_EventScript_ElliotRematch::
# 42 "data/maps/Route106/scripts.pory"
	trainerbattle_rematch TRAINER_ELLIOT_1, Route106_Text_ElliotRematchIntro, Route106_Text_ElliotRematchDefeated
# 43 "data/maps/Route106/scripts.pory"
	msgbox Route106_Text_ElliotRematchPostBattle, MSGBOX_AUTOCLOSE
# 44 "data/maps/Route106/scripts.pory"
	end
# 45 "data/maps/Route106/scripts.pory"

# 46 "data/maps/Route106/scripts.pory"
Route106_EventScript_Ned::
# 47 "data/maps/Route106/scripts.pory"
	trainerbattle_single TRAINER_NED, Route106_Text_NedIntro, Route106_Text_NedDefeated
# 48 "data/maps/Route106/scripts.pory"
	msgbox Route106_Text_NedPostBattle, MSGBOX_AUTOCLOSE
# 49 "data/maps/Route106/scripts.pory"
	end
# 50 "data/maps/Route106/scripts.pory"

# 51 "data/maps/Route106/scripts.pory"
Route106_Text_TrainerTips:
# 52 "data/maps/Route106/scripts.pory"
	.string "Trainer Tips\p"
# 53 "data/maps/Route106/scripts.pory"
	.string "Advice on catching Pokémon with a Rod:\n"
# 54 "data/maps/Route106/scripts.pory"
	.string "Press the A Button if you get a bite.$"

Route106_ChallengeBallTutorial::
# 60 "data/maps/Route106/scripts.pory"
	lock
# 61 "data/maps/Route106/scripts.pory"
	addobject 7
# 62 "data/maps/Route106/scripts.pory"
	setobjectxy 7, 56, 16
# 63 "data/maps/Route106/scripts.pory"
	speakername CommonText_Q
# 64 "data/maps/Route106/scripts.pory"
	msgbox Route106_ChallengeBallTutorial_Text_0
# 65 "data/maps/Route106/scripts.pory"
	closemessage
# 66 "data/maps/Route106/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 67 "data/maps/Route106/scripts.pory"
	applymovement 7, Route106_BiancaEnter
# 68 "data/maps/Route106/scripts.pory"
	waitmovement 0
# 69 "data/maps/Route106/scripts.pory"
	speakername CommonText_Bianca
# 70 "data/maps/Route106/scripts.pory"
	msgbox Route106_ChallengeBallTutorial_Text_1
# 73 "data/maps/Route106/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 74 "data/maps/Route106/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceLeft
# 75 "data/maps/Route106/scripts.pory"
	waitmovement 0
# 76 "data/maps/Route106/scripts.pory"
	msgbox Route106_ChallengeBallTutorial_Text_2
# 78 "data/maps/Route106/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 79 "data/maps/Route106/scripts.pory"
	waitmovement 0
# 80 "data/maps/Route106/scripts.pory"
	msgbox Route106_ChallengeBallTutorial_Text_3
# 83 "data/maps/Route106/scripts.pory"
	closemessage
# 84 "data/maps/Route106/scripts.pory"
	applymovement 7, Route106_BiancaExit
# 85 "data/maps/Route106/scripts.pory"
	waitmovement 0
# 86 "data/maps/Route106/scripts.pory"
	removeobject 7
# 87 "data/maps/Route106/scripts.pory"
	setvar VAR_ROUTE106_STATE, 1
# 88 "data/maps/Route106/scripts.pory"
	release
	return


# 91 "data/maps/Route106/scripts.pory"
Route106_BiancaEnter:
# 92 "data/maps/Route106/scripts.pory"
	walk_left
# 92 "data/maps/Route106/scripts.pory"
	walk_left
# 92 "data/maps/Route106/scripts.pory"
	walk_left
# 92 "data/maps/Route106/scripts.pory"
	walk_left
# 93 "data/maps/Route106/scripts.pory"
	walk_down
# 93 "data/maps/Route106/scripts.pory"
	walk_down
# 94 "data/maps/Route106/scripts.pory"
	walk_left
# 94 "data/maps/Route106/scripts.pory"
	walk_left
# 94 "data/maps/Route106/scripts.pory"
	walk_left
	step_end

# 97 "data/maps/Route106/scripts.pory"
Route106_BiancaExit:
# 98 "data/maps/Route106/scripts.pory"
	walk_right
# 98 "data/maps/Route106/scripts.pory"
	walk_right
# 98 "data/maps/Route106/scripts.pory"
	walk_right
# 99 "data/maps/Route106/scripts.pory"
	walk_up
# 99 "data/maps/Route106/scripts.pory"
	walk_up
# 100 "data/maps/Route106/scripts.pory"
	walk_right
# 100 "data/maps/Route106/scripts.pory"
	walk_right
# 100 "data/maps/Route106/scripts.pory"
	walk_right
# 100 "data/maps/Route106/scripts.pory"
	walk_right
	step_end

Route106_ChallengeBallTutorial_Text_0:
# 64 "data/maps/Route106/scripts.pory"
	.string "Heeey!$"

Route106_ChallengeBallTutorial_Text_1:
# 70 "data/maps/Route106/scripts.pory"
	.string "{PLAYER}, it's good to see you again!\p"
	.string "Oh! You've gotten a Badge! Wow!\n"
	.string "Amazing!\p"
	.string "And that thing over there…$"

Route106_ChallengeBallTutorial_Text_2:
# 76 "data/maps/Route106/scripts.pory"
	.string "Those blue Pokéball looking things are\n"
	.string "actually really good items, but there\l"
	.string "just always seem to be really strong\l"
	.string "Pokémon nearby protecting them.\p"
	.string "Most people just call them Challenge\n"
	.string "Balls!$"

Route106_ChallengeBallTutorial_Text_3:
# 80 "data/maps/Route106/scripts.pory"
	.string "They're usually super dangerous, but\n"
	.string "you're starting to look like you can\l"
	.string "handle yourself, {PLAYER}!\p"
	.string "Give it a shot if you've got some time!\p"
	.string "Anyway, I'll see you around, hopefully!$"
