# 1 "data/maps/GraniteCave_B1F/scripts.pory"

# 2 "data/maps/GraniteCave_B1F/scripts.pory"
GraniteCave_B1F_MapScripts::
# 3 "data/maps/GraniteCave_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CaveHole_CheckFallDownHole
# 4 "data/maps/GraniteCave_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CaveHole_FixCrackedGround
# 5 "data/maps/GraniteCave_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, GraniteCave_B1F_SetHoleWarp
# 6 "data/maps/GraniteCave_B1F/scripts.pory"
	.byte 0
# 7 "data/maps/GraniteCave_B1F/scripts.pory"

# 8 "data/maps/GraniteCave_B1F/scripts.pory"
GraniteCave_B1F_SetHoleWarp:
# 9 "data/maps/GraniteCave_B1F/scripts.pory"
	setstepcallback STEP_CB_CRACKED_FLOOR
# 10 "data/maps/GraniteCave_B1F/scripts.pory"
	setholewarp MAP_GRANITE_CAVE_B2F
# 11 "data/maps/GraniteCave_B1F/scripts.pory"
	end
# 12 "data/maps/GraniteCave_B1F/scripts.pory"

# 13 "data/maps/GraniteCave_B1F/scripts.pory"
GraniteCave_B1F_EventScript_Evelyn::
# 14 "data/maps/GraniteCave_B1F/scripts.pory"
	trainerbattle_single TRAINER_EVELYN, GraniteCave_B1F_Text_EvelynIntro, GraniteCave_B1F_Text_EvelynDefeated
# 15 "data/maps/GraniteCave_B1F/scripts.pory"
	msgbox GraniteCave_B1F_Text_EvelynPostBattle, MSGBOX_AUTOCLOSE
# 16 "data/maps/GraniteCave_B1F/scripts.pory"
	end
# 17 "data/maps/GraniteCave_B1F/scripts.pory"

# 18 "data/maps/GraniteCave_B1F/scripts.pory"
GraniteCave_B1F_Text_EvelynIntro:
# 19 "data/maps/GraniteCave_B1F/scripts.pory"
	.string "Now that this cave isn't so dark\n"
# 20 "data/maps/GraniteCave_B1F/scripts.pory"
	.string "it's great for training!$"
# 21 "data/maps/GraniteCave_B1F/scripts.pory"

# 22 "data/maps/GraniteCave_B1F/scripts.pory"
GraniteCave_B1F_Text_EvelynDefeated:
# 23 "data/maps/GraniteCave_B1F/scripts.pory"
	.string "Thrown back into darkness!$"
# 24 "data/maps/GraniteCave_B1F/scripts.pory"

# 25 "data/maps/GraniteCave_B1F/scripts.pory"
GraniteCave_B1F_Text_EvelynPostBattle:
# 26 "data/maps/GraniteCave_B1F/scripts.pory"
	.string "A lit cave alone won't make me stronger!$"

GraniteCave_B1F_EventScript_ChallengeBall1::
# 30 "data/maps/GraniteCave_B1F/scripts.pory"
	lock
# 31 "data/maps/GraniteCave_B1F/scripts.pory"
	msgbox GraniteCave_B1F_EventScript_ChallengeBall1_Text_0, MSGBOX_YESNO
# 32 "data/maps/GraniteCave_B1F/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq GraniteCave_B1F_EventScript_ChallengeBall1_2
GraniteCave_B1F_EventScript_ChallengeBall1_1:
# 44 "data/maps/GraniteCave_B1F/scripts.pory"
	release
	return

GraniteCave_B1F_EventScript_ChallengeBall1_2:
# 33 "data/maps/GraniteCave_B1F/scripts.pory"
	setflag FLAG_NO_CATCHING
# 34 "data/maps/GraniteCave_B1F/scripts.pory"
	setflag FLAG_NO_RUNNING
# 35 "data/maps/GraniteCave_B1F/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 36 "data/maps/GraniteCave_B1F/scripts.pory"
	settotemboost 1, 1
# 37 "data/maps/GraniteCave_B1F/scripts.pory"
	setwildbattle SPECIES_LUVDISC, 18, ITEM_NONE, 1, SPECIES_POLIWHIRL, 18, ITEM_NONE, 2, MOVE_AQUA_JET, MOVE_ICY_WIND, MOVE_RAIN_DANCE, MOVE_WHIRLPOOL, MOVE_CHILLING_WATER, MOVE_MUD_SHOT, MOVE_LOW_SWEEP, MOVE_SWIFT
# 38 "data/maps/GraniteCave_B1F/scripts.pory"
	dowildbattle
# 39 "data/maps/GraniteCave_B1F/scripts.pory"
	clearflag FLAG_NO_CATCHING
# 40 "data/maps/GraniteCave_B1F/scripts.pory"
	clearflag FLAG_NO_RUNNING
# 41 "data/maps/GraniteCave_B1F/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 42 "data/maps/GraniteCave_B1F/scripts.pory"
	finditem ITEM_GOOD_ROD, 1
	goto GraniteCave_B1F_EventScript_ChallengeBall1_1


GraniteCave_B1F_EventScript_ChallengeBall1_Text_0:
# 31 "data/maps/GraniteCave_B1F/scripts.pory"
	.string "You feel a drip from the ceiling.\p"
	.string "Reach out for the item?$"
