IllusoryGrotto_ChallengeBall::
# 12 "data/expansion_1/challenge_balls.pory"
	lock
# 13 "data/expansion_1/challenge_balls.pory"
	msgbox IllusoryGrotto_ChallengeBall_Text_0, MSGBOX_YESNO
# 14 "data/expansion_1/challenge_balls.pory"
	compare VAR_RESULT, 1
	goto_if_eq IllusoryGrotto_ChallengeBall_2
IllusoryGrotto_ChallengeBall_1:
# 26 "data/expansion_1/challenge_balls.pory"
	release
	return

IllusoryGrotto_ChallengeBall_2:
# 15 "data/expansion_1/challenge_balls.pory"
	call SetupChallengeBall
# 16 "data/expansion_1/challenge_balls.pory"
	setstartingstatus STARTING_STATUS_SHARP_STEEL_PLAYER
# 17 "data/expansion_1/challenge_balls.pory"
	settotemboost 1, 1
# 18 "data/expansion_1/challenge_balls.pory"
	setwildbattle SPECIES_IRON_VALIANT, 76, ITEM_NONE, 0, SPECIES_NOIVERN, 76, ITEM_NONE, 1, MOVE_THUNDER_PUNCH, MOVE_SACRED_SWORD, MOVE_SPIRIT_BREAK, MOVE_AGILITY, MOVE_DRAGON_PULSE, MOVE_AIR_SLASH, MOVE_MOONLIGHT, MOVE_DOUBLE_TEAM
# 19 "data/expansion_1/challenge_balls.pory"
	dowildbattle
# 20 "data/expansion_1/challenge_balls.pory"
	clearflag FLAG_NO_CATCHING
# 21 "data/expansion_1/challenge_balls.pory"
	clearflag FLAG_NO_RUNNING
# 22 "data/expansion_1/challenge_balls.pory"
	clearflag FLAG_SMART_WILD_AI
# 23 "data/expansion_1/challenge_balls.pory"
	finditem ITEM_WHETSTONE, 1
# 24 "data/expansion_1/challenge_balls.pory"
	setwildbattle SPECIES_BULBASAUR, 1
	goto IllusoryGrotto_ChallengeBall_1


FarOffSeaWest_ChallengeBall::
# 30 "data/expansion_1/challenge_balls.pory"
	lock
# 31 "data/expansion_1/challenge_balls.pory"
	msgbox FarOffSeaWest_ChallengeBall_Text_0, MSGBOX_YESNO
# 32 "data/expansion_1/challenge_balls.pory"
	compare VAR_RESULT, 1
	goto_if_eq FarOffSeaWest_ChallengeBall_2
FarOffSeaWest_ChallengeBall_1:
# 44 "data/expansion_1/challenge_balls.pory"
	release
	return

FarOffSeaWest_ChallengeBall_2:
# 33 "data/expansion_1/challenge_balls.pory"
	call SetupChallengeBall
# 34 "data/expansion_1/challenge_balls.pory"
	setstartingstatus STARTING_STATUS_SEA_OF_FIRE_PLAYER
# 35 "data/expansion_1/challenge_balls.pory"
	settotemboost 1, 0, 0, 1
# 36 "data/expansion_1/challenge_balls.pory"
	setwildbattle SPECIES_ALTARIA_EXP_1, 78, ITEM_NONE, 2, SPECIES_ROSERADE_EXP_1, 78, ITEM_NONE, 1, MOVE_THUNDERCLAP, MOVE_HURRICANE, MOVE_TAILWIND, MOVE_ELECTRIFY, MOVE_EARTHQUAKE, MOVE_THROAT_CHOP, MOVE_MORNING_SUN, MOVE_SACRED_FIRE
# 37 "data/expansion_1/challenge_balls.pory"
	dowildbattle
# 38 "data/expansion_1/challenge_balls.pory"
	clearflag FLAG_NO_CATCHING
# 39 "data/expansion_1/challenge_balls.pory"
	clearflag FLAG_NO_RUNNING
# 40 "data/expansion_1/challenge_balls.pory"
	clearflag FLAG_SMART_WILD_AI
# 41 "data/expansion_1/challenge_balls.pory"
	finditem ITEM_WRIST_WEIGHTS, 1
# 42 "data/expansion_1/challenge_balls.pory"
	setwildbattle SPECIES_BULBASAUR, 1
	goto FarOffSeaWest_ChallengeBall_1


MauveIslandSouth_ChallengeBall::
# 48 "data/expansion_1/challenge_balls.pory"
	lock
# 49 "data/expansion_1/challenge_balls.pory"
	msgbox MauveIslandSouth_ChallengeBall_Text_0, MSGBOX_YESNO
# 50 "data/expansion_1/challenge_balls.pory"
	compare VAR_RESULT, 1
	goto_if_eq MauveIslandSouth_ChallengeBall_2
MauveIslandSouth_ChallengeBall_1:
# 61 "data/expansion_1/challenge_balls.pory"
	release
	return

MauveIslandSouth_ChallengeBall_2:
# 51 "data/expansion_1/challenge_balls.pory"
	call SetupChallengeBall
# 52 "data/expansion_1/challenge_balls.pory"
	setstartingstatus STARTING_STATUS_SPIKES_PLAYER_L1
# 53 "data/expansion_1/challenge_balls.pory"
	setwildbattle SPECIES_SHUCKLE_FRIBIAN, 80, ITEM_NONE, 1, SPECIES_NIDOKING, 80, ITEM_NONE, 0, MOVE_RAGE_POWDER, MOVE_SAFEGUARD, MOVE_GASTRO_ACID, MOVE_INFESTATION, MOVE_HEADLONG_RUSH, MOVE_SUCKER_PUNCH, MOVE_POISON_TAIL, MOVE_AQUA_TAIL
# 54 "data/expansion_1/challenge_balls.pory"
	dowildbattle
# 55 "data/expansion_1/challenge_balls.pory"
	clearflag FLAG_NO_CATCHING
# 56 "data/expansion_1/challenge_balls.pory"
	clearflag FLAG_NO_RUNNING
# 57 "data/expansion_1/challenge_balls.pory"
	clearflag FLAG_SMART_WILD_AI
# 58 "data/expansion_1/challenge_balls.pory"
	finditem ITEM_QUICKEST_CLAW, 1
# 59 "data/expansion_1/challenge_balls.pory"
	setwildbattle SPECIES_BULBASAUR, 1
	goto MauveIslandSouth_ChallengeBall_1


MauveHollow_ChallengeBall::
# 65 "data/expansion_1/challenge_balls.pory"
	lock
# 66 "data/expansion_1/challenge_balls.pory"
	msgbox MauveHollow_ChallengeBall_Text_0, MSGBOX_YESNO
# 67 "data/expansion_1/challenge_balls.pory"
	compare VAR_RESULT, 1
	goto_if_eq MauveHollow_ChallengeBall_2
MauveHollow_ChallengeBall_1:
# 79 "data/expansion_1/challenge_balls.pory"
	release
	return

MauveHollow_ChallengeBall_2:
# 68 "data/expansion_1/challenge_balls.pory"
	call SetupChallengeBall
# 69 "data/expansion_1/challenge_balls.pory"
	setstartingstatus STARTING_STATUS_STICKY_WEB_PLAYER
# 70 "data/expansion_1/challenge_balls.pory"
	setstartingstatus STARTING_STATUS_SWAMP_PLAYER
# 71 "data/expansion_1/challenge_balls.pory"
	setwildbattle SPECIES_ARBOK_EXP_1, 82, ITEM_NONE, 0, SPECIES_AMPHAROS_EXP_1, 82, ITEM_NONE, 0, MOVE_DRAGON_TAIL, MOVE_COIL, MOVE_LEECH_LIFE, MOVE_SANDSTORM, MOVE_DRAGON_TAIL, MOVE_TAIL_GLOW, MOVE_THUNDERBOLT, MOVE_POWER_GEM
# 72 "data/expansion_1/challenge_balls.pory"
	dowildbattle
# 73 "data/expansion_1/challenge_balls.pory"
	clearflag FLAG_NO_CATCHING
# 74 "data/expansion_1/challenge_balls.pory"
	clearflag FLAG_NO_RUNNING
# 75 "data/expansion_1/challenge_balls.pory"
	clearflag FLAG_SMART_WILD_AI
# 76 "data/expansion_1/challenge_balls.pory"
	finditem ITEM_TREASURE_CHEST, 1
# 77 "data/expansion_1/challenge_balls.pory"
	setwildbattle SPECIES_BULBASAUR, 1
	goto MauveHollow_ChallengeBall_1


WellspringChasm_ChallengeBall::
# 83 "data/expansion_1/challenge_balls.pory"
	lock
# 84 "data/expansion_1/challenge_balls.pory"
	msgbox WellspringChasm_ChallengeBall_Text_0, MSGBOX_YESNO
# 85 "data/expansion_1/challenge_balls.pory"
	compare VAR_RESULT, 1
	goto_if_eq WellspringChasm_ChallengeBall_2
WellspringChasm_ChallengeBall_1:
# 96 "data/expansion_1/challenge_balls.pory"
	release
	return

WellspringChasm_ChallengeBall_2:
# 86 "data/expansion_1/challenge_balls.pory"
	call SetupChallengeBall
# 87 "data/expansion_1/challenge_balls.pory"
	setstartingstatus STARTING_STATUS_RAINBOW_OPPONENT
# 88 "data/expansion_1/challenge_balls.pory"
	setwildbattle SPECIES_TOGEKISS, 84, ITEM_NONE, 1, SPECIES_NINETALES_EMERIBIAN, 84, ITEM_NONE, 1, MOVE_TRI_ATTACK, MOVE_ANCIENT_POWER, MOVE_MOONBLAST, MOVE_MORNING_SUN, MOVE_INFERNAL_PARADE, MOVE_EXTRASENSORY, MOVE_HEAT_WAVE, MOVE_FIRE_SPIN
# 89 "data/expansion_1/challenge_balls.pory"
	dowildbattle
# 90 "data/expansion_1/challenge_balls.pory"
	clearflag FLAG_NO_CATCHING
# 91 "data/expansion_1/challenge_balls.pory"
	clearflag FLAG_NO_RUNNING
# 92 "data/expansion_1/challenge_balls.pory"
	clearflag FLAG_SMART_WILD_AI
# 93 "data/expansion_1/challenge_balls.pory"
	finditem ITEM_SILPH_SCOPE, 1
# 94 "data/expansion_1/challenge_balls.pory"
	setwildbattle SPECIES_BULBASAUR, 1
	goto WellspringChasm_ChallengeBall_1


IllusoryGrotto_ChallengeBall_Text_0:
# 13 "data/expansion_1/challenge_balls.pory"
	.string "The ground feels sharp.\p"
	.string "Reach out for the item?$"

FarOffSeaWest_ChallengeBall_Text_0:
# 31 "data/expansion_1/challenge_balls.pory"
	.string "Flames lick out at you.\p"
	.string "Reach out for the item?$"

MauveIslandSouth_ChallengeBall_Text_0:
# 49 "data/expansion_1/challenge_balls.pory"
	.string "Caltrops are laid out.\p"
	.string "Reach out for the item?$"

MauveHollow_ChallengeBall_Text_0:
# 66 "data/expansion_1/challenge_balls.pory"
	.string "The area has somehow become sticky and\n"
	.string "swampy.\p"
	.string "Reach out for the item?$"

WellspringChasm_ChallengeBall_Text_0:
# 84 "data/expansion_1/challenge_balls.pory"
	.string "A rainbow has begun to form.\p"
	.string "Reach out for the item?$"
