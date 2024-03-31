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

Route106_EventScript_ChallengeBall1::
# 52 "data/maps/Route106/scripts.pory"
	lock
# 53 "data/maps/Route106/scripts.pory"
	msgbox Route106_EventScript_ChallengeBall1_Text_0, MSGBOX_YESNO
# 54 "data/maps/Route106/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route106_EventScript_ChallengeBall1_2
Route106_EventScript_ChallengeBall1_1:
# 66 "data/maps/Route106/scripts.pory"
	release
	return

Route106_EventScript_ChallengeBall1_2:
# 55 "data/maps/Route106/scripts.pory"
	setflag FLAG_NO_CATCHING
# 56 "data/maps/Route106/scripts.pory"
	setflag FLAG_NO_RUNNING
# 57 "data/maps/Route106/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 58 "data/maps/Route106/scripts.pory"
	setvar VAR_STARTING_STATUS, 3
# 59 "data/maps/Route106/scripts.pory"
	setwildbattle SPECIES_GLOOM_EMERIBIAN, 16, ITEM_NONE, 0, SPECIES_SKIDDO_EMERIBIAN, 16, ITEM_NONE, 2, MOVE_HYPER_BEAM
# 60 "data/maps/Route106/scripts.pory"
	dowildbattle
# 61 "data/maps/Route106/scripts.pory"
	clearflag FLAG_NO_CATCHING
# 62 "data/maps/Route106/scripts.pory"
	clearflag FLAG_NO_RUNNING
# 63 "data/maps/Route106/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 64 "data/maps/Route106/scripts.pory"
	finditem ITEM_ESCAPE_ROPE, 1
	goto Route106_EventScript_ChallengeBall1_1


Route106_EventScript_ChallengeBall1_Text_0:
# 53 "data/maps/Route106/scripts.pory"
	.string "You feel grass growing beneath the\n"
	.string "sand.\l"
	.string "Reach out for the item?$"
