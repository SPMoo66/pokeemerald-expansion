# 1 "data/maps/Route106/scripts.pory"

# 2 "data/maps/Route106/scripts.pory"
Route106_MapScripts::
# 3 "data/maps/Route106/scripts.pory"
	.byte 0
# 4 "data/maps/Route106/scripts.pory"

# 5 "data/maps/Route106/scripts.pory"
Route106_EventScript_TrainerTipsSign::
# 6 "data/maps/Route106/scripts.pory"
	msgbox Route106_Text_TrainerTips, MSGBOX_SIGN
# 7 "data/maps/Route106/scripts.pory"
	end
# 8 "data/maps/Route106/scripts.pory"

# 9 "data/maps/Route106/scripts.pory"
Route106_EventScript_Douglas::
# 10 "data/maps/Route106/scripts.pory"
	trainerbattle_single TRAINER_DOUGLAS, Route106_Text_DouglasIntro, Route106_Text_DouglasDefeated
# 11 "data/maps/Route106/scripts.pory"
	msgbox Route106_Text_DouglasPostBattle, MSGBOX_AUTOCLOSE
# 12 "data/maps/Route106/scripts.pory"
	end
# 13 "data/maps/Route106/scripts.pory"

# 14 "data/maps/Route106/scripts.pory"
Route106_EventScript_Kyla::
# 15 "data/maps/Route106/scripts.pory"
	trainerbattle_single TRAINER_KYLA, Route106_Text_KylaIntro, Route106_Text_KylaDefeated
# 16 "data/maps/Route106/scripts.pory"
	msgbox Route106_Text_KylaPostBattle, MSGBOX_AUTOCLOSE
# 17 "data/maps/Route106/scripts.pory"
	end
# 18 "data/maps/Route106/scripts.pory"

# 19 "data/maps/Route106/scripts.pory"
Route106_EventScript_Elliot::
# 20 "data/maps/Route106/scripts.pory"
	trainerbattle_single TRAINER_ELLIOT_1, Route106_Text_ElliotIntro, Route106_Text_ElliotDefeated, Route106_EventScript_ElliotRegisterMatchCallAfterBattle
# 21 "data/maps/Route106/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 22 "data/maps/Route106/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route106_EventScript_ElliotRematch
# 23 "data/maps/Route106/scripts.pory"
	msgbox Route106_Text_ElliotPostBattle, MSGBOX_DEFAULT
# 24 "data/maps/Route106/scripts.pory"
	release
# 25 "data/maps/Route106/scripts.pory"
	end
# 26 "data/maps/Route106/scripts.pory"

# 27 "data/maps/Route106/scripts.pory"
Route106_EventScript_ElliotRegisterMatchCallAfterBattle::
# 28 "data/maps/Route106/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 29 "data/maps/Route106/scripts.pory"
	waitmovement 0
# 30 "data/maps/Route106/scripts.pory"
	msgbox Route106_Text_ElliotRegister, MSGBOX_DEFAULT
# 31 "data/maps/Route106/scripts.pory"
	register_matchcall TRAINER_ELLIOT_1
# 32 "data/maps/Route106/scripts.pory"
	release
# 33 "data/maps/Route106/scripts.pory"
	end
# 34 "data/maps/Route106/scripts.pory"

# 35 "data/maps/Route106/scripts.pory"
Route106_EventScript_ElliotRematch::
# 36 "data/maps/Route106/scripts.pory"
	trainerbattle_rematch TRAINER_ELLIOT_1, Route106_Text_ElliotRematchIntro, Route106_Text_ElliotRematchDefeated
# 37 "data/maps/Route106/scripts.pory"
	msgbox Route106_Text_ElliotRematchPostBattle, MSGBOX_AUTOCLOSE
# 38 "data/maps/Route106/scripts.pory"
	end
# 39 "data/maps/Route106/scripts.pory"

# 40 "data/maps/Route106/scripts.pory"
Route106_EventScript_Ned::
# 41 "data/maps/Route106/scripts.pory"
	trainerbattle_single TRAINER_NED, Route106_Text_NedIntro, Route106_Text_NedDefeated
# 42 "data/maps/Route106/scripts.pory"
	msgbox Route106_Text_NedPostBattle, MSGBOX_AUTOCLOSE
# 43 "data/maps/Route106/scripts.pory"
	end
# 44 "data/maps/Route106/scripts.pory"

# 45 "data/maps/Route106/scripts.pory"
Route106_Text_TrainerTips:
# 46 "data/maps/Route106/scripts.pory"
	.string "Trainer Tips\p"
# 47 "data/maps/Route106/scripts.pory"
	.string "Advice on catching Pokémon with a Rod:\n"
# 48 "data/maps/Route106/scripts.pory"
	.string "Press the A Button if you get a bite.$"

Route106_ChallengeBallTutorial::
# 54 "data/maps/Route106/scripts.pory"
	lock
# 55 "data/maps/Route106/scripts.pory"
	addobject 7
# 56 "data/maps/Route106/scripts.pory"
	setobjectxy 7, 56, 16
# 57 "data/maps/Route106/scripts.pory"
	speakername CommonText_Q
# 58 "data/maps/Route106/scripts.pory"
	msgbox Route106_ChallengeBallTutorial_Text_0
# 59 "data/maps/Route106/scripts.pory"
	closemessage
# 60 "data/maps/Route106/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 61 "data/maps/Route106/scripts.pory"
	applymovement 7, Route106_BiancaEnter
# 62 "data/maps/Route106/scripts.pory"
	waitmovement 0
# 63 "data/maps/Route106/scripts.pory"
	speakername CommonText_Bianca
# 64 "data/maps/Route106/scripts.pory"
	msgbox Route106_ChallengeBallTutorial_Text_1
# 67 "data/maps/Route106/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 68 "data/maps/Route106/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceLeft
# 69 "data/maps/Route106/scripts.pory"
	waitmovement 0
# 70 "data/maps/Route106/scripts.pory"
	msgbox Route106_ChallengeBallTutorial_Text_2
# 72 "data/maps/Route106/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 73 "data/maps/Route106/scripts.pory"
	waitmovement 0
# 74 "data/maps/Route106/scripts.pory"
	msgbox Route106_ChallengeBallTutorial_Text_3
# 77 "data/maps/Route106/scripts.pory"
	closemessage
# 78 "data/maps/Route106/scripts.pory"
	applymovement 7, Route106_BiancaExit
# 79 "data/maps/Route106/scripts.pory"
	waitmovement 0
# 80 "data/maps/Route106/scripts.pory"
	removeobject 7
# 81 "data/maps/Route106/scripts.pory"
	setvar VAR_ROUTE106_STATE, 1
# 82 "data/maps/Route106/scripts.pory"
	release
	return


# 85 "data/maps/Route106/scripts.pory"
Route106_BiancaEnter:
# 86 "data/maps/Route106/scripts.pory"
	walk_left
# 86 "data/maps/Route106/scripts.pory"
	walk_left
# 86 "data/maps/Route106/scripts.pory"
	walk_left
# 86 "data/maps/Route106/scripts.pory"
	walk_left
# 87 "data/maps/Route106/scripts.pory"
	walk_down
# 87 "data/maps/Route106/scripts.pory"
	walk_down
# 88 "data/maps/Route106/scripts.pory"
	walk_left
# 88 "data/maps/Route106/scripts.pory"
	walk_left
# 88 "data/maps/Route106/scripts.pory"
	walk_left
	step_end

# 91 "data/maps/Route106/scripts.pory"
Route106_BiancaExit:
# 92 "data/maps/Route106/scripts.pory"
	walk_right
# 92 "data/maps/Route106/scripts.pory"
	walk_right
# 92 "data/maps/Route106/scripts.pory"
	walk_right
# 93 "data/maps/Route106/scripts.pory"
	walk_up
# 93 "data/maps/Route106/scripts.pory"
	walk_up
# 94 "data/maps/Route106/scripts.pory"
	walk_right
# 94 "data/maps/Route106/scripts.pory"
	walk_right
# 94 "data/maps/Route106/scripts.pory"
	walk_right
# 94 "data/maps/Route106/scripts.pory"
	walk_right
	step_end

Route106_ChallengeBallTutorial_Text_0:
# 58 "data/maps/Route106/scripts.pory"
	.string "Heeey!$"

Route106_ChallengeBallTutorial_Text_1:
# 64 "data/maps/Route106/scripts.pory"
	.string "{PLAYER}, it's good to see you again!\p"
	.string "Oh! You've gotten a Badge! Wow!\n"
	.string "Amazing!\p"
	.string "And that thing over there…$"

Route106_ChallengeBallTutorial_Text_2:
# 70 "data/maps/Route106/scripts.pory"
	.string "Those blue Pokéball looking things are\n"
	.string "actually really good items, but there\l"
	.string "just always seem to be really strong\l"
	.string "Pokémon nearby protecting them.\p"
	.string "Most people just call them Challenge\n"
	.string "Balls!$"

Route106_ChallengeBallTutorial_Text_3:
# 74 "data/maps/Route106/scripts.pory"
	.string "They're usually super dangerous, but\n"
	.string "you're starting to look like you can\l"
	.string "handle yourself, {PLAYER}!\p"
	.string "Give it a shot if you've got some time!\p"
	.string "Anyway, I'll see you around, hopefully!$"
