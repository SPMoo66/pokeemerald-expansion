SetupChallengeBall::
# 2 "data/challenge_balls.pory"
	setflag FLAG_NO_CATCHING
# 3 "data/challenge_balls.pory"
	setflag FLAG_NO_RUNNING
# 4 "data/challenge_balls.pory"
	setflag FLAG_SMART_WILD_AI
# 5 "data/challenge_balls.pory"
	setflag FLAG_SYS_SET_BATTLE_BGM
# 6 "data/challenge_balls.pory"
	setvar VAR_BATTLE_BGM, MUS_FF4_FIGHT_2
	return


Route106_EventScript_ChallengeBall1::
# 10 "data/challenge_balls.pory"
	lock
# 11 "data/challenge_balls.pory"
	msgbox Route106_EventScript_ChallengeBall1_Text_0, MSGBOX_YESNO
# 12 "data/challenge_balls.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route106_EventScript_ChallengeBall1_2
Route106_EventScript_ChallengeBall1_1:
# 23 "data/challenge_balls.pory"
	release
	return

Route106_EventScript_ChallengeBall1_2:
# 13 "data/challenge_balls.pory"
	call SetupChallengeBall
# 14 "data/challenge_balls.pory"
	setstartingstatus STARTING_STATUS_GRASSY_TERRAIN_TEMPORARY
# 15 "data/challenge_balls.pory"
	setwildbattle SPECIES_GLOOM_EMERIBIAN, 17, ITEM_NONE, 0, SPECIES_SKIDDO_EMERIBIAN, 17, ITEM_NONE, 2, MOVE_MEGA_DRAIN, MOVE_SOAK, MOVE_LIFE_DEW, MOVE_BUBBLE_BEAM, MOVE_TRAILBLAZE, MOVE_INGRAIN, MOVE_GROWL, MOVE_CAMOUFLAGE
# 16 "data/challenge_balls.pory"
	dowildbattle
# 17 "data/challenge_balls.pory"
	clearflag FLAG_NO_CATCHING
# 18 "data/challenge_balls.pory"
	clearflag FLAG_NO_RUNNING
# 19 "data/challenge_balls.pory"
	clearflag FLAG_SMART_WILD_AI
# 20 "data/challenge_balls.pory"
	finditem ITEM_ESCAPE_ROPE, 1
# 21 "data/challenge_balls.pory"
	setwildbattle SPECIES_BULBASAUR, 1
	goto Route106_EventScript_ChallengeBall1_1


GraniteCave_B1F_EventScript_ChallengeBall1::
# 27 "data/challenge_balls.pory"
	lock
# 28 "data/challenge_balls.pory"
	msgbox GraniteCave_B1F_EventScript_ChallengeBall1_Text_0, MSGBOX_YESNO
# 29 "data/challenge_balls.pory"
	compare VAR_RESULT, 1
	goto_if_eq GraniteCave_B1F_EventScript_ChallengeBall1_2
GraniteCave_B1F_EventScript_ChallengeBall1_1:
# 40 "data/challenge_balls.pory"
	release
	return

GraniteCave_B1F_EventScript_ChallengeBall1_2:
# 30 "data/challenge_balls.pory"
	call SetupChallengeBall
# 31 "data/challenge_balls.pory"
	settotemboost 1, 1
# 32 "data/challenge_balls.pory"
	setwildbattle SPECIES_LUVDISC, 18, ITEM_NONE, 1, SPECIES_POLIWHIRL, 18, ITEM_NONE, 2, MOVE_AQUA_JET, MOVE_ICY_WIND, MOVE_RAIN_DANCE, MOVE_WHIRLPOOL, MOVE_CHILLING_WATER, MOVE_MUD_SHOT, MOVE_LOW_SWEEP, MOVE_SWIFT
# 33 "data/challenge_balls.pory"
	dowildbattle
# 34 "data/challenge_balls.pory"
	clearflag FLAG_NO_CATCHING
# 35 "data/challenge_balls.pory"
	clearflag FLAG_NO_RUNNING
# 36 "data/challenge_balls.pory"
	clearflag FLAG_SMART_WILD_AI
# 37 "data/challenge_balls.pory"
	finditem ITEM_GOOD_ROD, 1
# 38 "data/challenge_balls.pory"
	setwildbattle SPECIES_BULBASAUR, 1
	goto GraniteCave_B1F_EventScript_ChallengeBall1_1


GraniteCave_B2F_EventScript_ChallengeBall1::
# 44 "data/challenge_balls.pory"
	lock
# 45 "data/challenge_balls.pory"
	msgbox GraniteCave_B2F_EventScript_ChallengeBall1_Text_0, MSGBOX_YESNO
# 46 "data/challenge_balls.pory"
	compare VAR_RESULT, 1
	goto_if_eq GraniteCave_B2F_EventScript_ChallengeBall1_2
GraniteCave_B2F_EventScript_ChallengeBall1_1:
# 57 "data/challenge_balls.pory"
	release
	return

GraniteCave_B2F_EventScript_ChallengeBall1_2:
# 47 "data/challenge_balls.pory"
	call SetupChallengeBall
# 48 "data/challenge_balls.pory"
	settotemboost 1, 0, 1, 0, 0, 1
# 49 "data/challenge_balls.pory"
	setwildbattle SPECIES_ARIADOS_EMERIBIAN, 28, ITEM_NONE, 0, SPECIES_SMOOCHUM, 28, ITEM_NONE, 0, MOVE_THUNDER_FANG, MOVE_POISON_STING, MOVE_HONE_CLAWS, MOVE_CONSTRICT, MOVE_DRAINING_KISS, MOVE_ICY_WIND, MOVE_CONFUSION, MOVE_WATER_PULSE
# 50 "data/challenge_balls.pory"
	dowildbattle
# 51 "data/challenge_balls.pory"
	clearflag FLAG_NO_CATCHING
# 52 "data/challenge_balls.pory"
	clearflag FLAG_NO_RUNNING
# 53 "data/challenge_balls.pory"
	clearflag FLAG_SMART_WILD_AI
# 54 "data/challenge_balls.pory"
	finditem ITEM_EXPERT_BELT, 1
# 55 "data/challenge_balls.pory"
	setwildbattle SPECIES_BULBASAUR, 1
	goto GraniteCave_B2F_EventScript_ChallengeBall1_1


Route109_EventScript_ChallengeBall1::
# 61 "data/challenge_balls.pory"
	lock
# 62 "data/challenge_balls.pory"
	msgbox Route109_EventScript_ChallengeBall1_Text_0, MSGBOX_YESNO
# 63 "data/challenge_balls.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route109_EventScript_ChallengeBall1_2
Route109_EventScript_ChallengeBall1_1:
# 74 "data/challenge_balls.pory"
	release
	return

Route109_EventScript_ChallengeBall1_2:
# 64 "data/challenge_balls.pory"
	call SetupChallengeBall
# 65 "data/challenge_balls.pory"
	settotemboost 1, 1, 0, 0, 0, 1
# 66 "data/challenge_balls.pory"
	setwildbattle SPECIES_DODUO_EMERIBIAN, 21, ITEM_NONE, 1, SPECIES_TINKATUFF, 21, ITEM_NONE, 0, MOVE_FLAME_CHARGE, MOVE_SPARK, MOVE_TAILWIND, MOVE_FEINT_ATTACK, MOVE_FAKE_OUT, MOVE_METAL_CLAW, MOVE_POUNCE, MOVE_REFLECT
# 67 "data/challenge_balls.pory"
	dowildbattle
# 68 "data/challenge_balls.pory"
	clearflag FLAG_NO_CATCHING
# 69 "data/challenge_balls.pory"
	clearflag FLAG_NO_RUNNING
# 70 "data/challenge_balls.pory"
	clearflag FLAG_SMART_WILD_AI
# 71 "data/challenge_balls.pory"
	finditem ITEM_CLEAR_AMULET, 1
# 72 "data/challenge_balls.pory"
	setwildbattle SPECIES_BULBASAUR, 1
	goto Route109_EventScript_ChallengeBall1_1


Route103_EventScript_ChallengeBall1::
# 78 "data/challenge_balls.pory"
	lock
# 79 "data/challenge_balls.pory"
	msgbox Route103_EventScript_ChallengeBall1_Text_0, MSGBOX_YESNO
# 80 "data/challenge_balls.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route103_EventScript_ChallengeBall1_2
Route103_EventScript_ChallengeBall1_1:
# 91 "data/challenge_balls.pory"
	release
	return

Route103_EventScript_ChallengeBall1_2:
# 81 "data/challenge_balls.pory"
	call SetupChallengeBall
# 82 "data/challenge_balls.pory"
	settotemboost 3, 0, 0, 1
# 83 "data/challenge_balls.pory"
	setwildbattle SPECIES_JIGGLYPUFF, 23, ITEM_NONE, 2, SPECIES_MUDBRAY, 23, ITEM_NONE, 1, MOVE_HELPING_HAND, MOVE_AMNESIA, MOVE_DRAINING_KISS, MOVE_DISABLE, MOVE_BULLDOZE, MOVE_ROCK_SMASH, MOVE_SMACK_DOWN, MOVE_STOMP
# 84 "data/challenge_balls.pory"
	dowildbattle
# 85 "data/challenge_balls.pory"
	clearflag FLAG_NO_CATCHING
# 86 "data/challenge_balls.pory"
	clearflag FLAG_NO_RUNNING
# 87 "data/challenge_balls.pory"
	clearflag FLAG_SMART_WILD_AI
# 88 "data/challenge_balls.pory"
	finditem ITEM_BRIGHT_POWDER, 1
# 89 "data/challenge_balls.pory"
	setwildbattle SPECIES_BULBASAUR, 1
	goto Route103_EventScript_ChallengeBall1_1


Route110_EventScript_ChallengeBall1::
# 95 "data/challenge_balls.pory"
	lock
# 96 "data/challenge_balls.pory"
	msgbox Route110_EventScript_ChallengeBall1_Text_0, MSGBOX_YESNO
# 97 "data/challenge_balls.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route110_EventScript_ChallengeBall1_2
Route110_EventScript_ChallengeBall1_1:
# 108 "data/challenge_balls.pory"
	release
	return

Route110_EventScript_ChallengeBall1_2:
# 98 "data/challenge_balls.pory"
	call SetupChallengeBall
# 99 "data/challenge_balls.pory"
	setstartingstatus STARTING_STATUS_PSYCHIC_TERRAIN_TEMPORARY
# 100 "data/challenge_balls.pory"
	setwildbattle SPECIES_GOTHORITA, 24, ITEM_NONE, 1, SPECIES_RIBOMBEE, 24, ITEM_NONE, 1, MOVE_CALM_MIND, MOVE_FLATTER, MOVE_PSYBEAM, MOVE_GRASS_KNOT, MOVE_NATURE_POWER, MOVE_SECRET_POWER, MOVE_STICKY_WEB, MOVE_DRAINING_KISS
# 101 "data/challenge_balls.pory"
	dowildbattle
# 102 "data/challenge_balls.pory"
	clearflag FLAG_NO_CATCHING
# 103 "data/challenge_balls.pory"
	clearflag FLAG_NO_RUNNING
# 104 "data/challenge_balls.pory"
	clearflag FLAG_SMART_WILD_AI
# 105 "data/challenge_balls.pory"
	finditem ITEM_WIDE_LENS, 1
# 106 "data/challenge_balls.pory"
	setwildbattle SPECIES_BULBASAUR, 1
	goto Route110_EventScript_ChallengeBall1_1


Route110_EventScript_ChallengeBall2::
# 112 "data/challenge_balls.pory"
	lock
# 113 "data/challenge_balls.pory"
	msgbox Route110_EventScript_ChallengeBall2_Text_0, MSGBOX_YESNO
# 114 "data/challenge_balls.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route110_EventScript_ChallengeBall2_2
Route110_EventScript_ChallengeBall2_1:
# 125 "data/challenge_balls.pory"
	release
	return

Route110_EventScript_ChallengeBall2_2:
# 115 "data/challenge_balls.pory"
	call SetupChallengeBall
# 116 "data/challenge_balls.pory"
	settotemboost 1, 0, 0, 3
# 117 "data/challenge_balls.pory"
	setwildbattle SPECIES_TORKOAL, 37, ITEM_NONE, 1, SPECIES_WHIMSICOTT, 37, ITEM_NONE, 2, MOVE_STEALTH_ROCK, MOVE_FLAME_CHARGE, MOVE_CURSE, MOVE_ROCK_TOMB, MOVE_TAILWIND, MOVE_GROWTH, MOVE_COTTON_SPORE, MOVE_GRASS_KNOT
# 118 "data/challenge_balls.pory"
	dowildbattle
# 119 "data/challenge_balls.pory"
	clearflag FLAG_NO_CATCHING
# 120 "data/challenge_balls.pory"
	clearflag FLAG_NO_RUNNING
# 121 "data/challenge_balls.pory"
	clearflag FLAG_SMART_WILD_AI
# 122 "data/challenge_balls.pory"
	finditem ITEM_ZOOM_LENS, 1
# 123 "data/challenge_balls.pory"
	setwildbattle SPECIES_BULBASAUR, 1
	goto Route110_EventScript_ChallengeBall2_1


Route117_EventScript_ChallengeBall1::
# 129 "data/challenge_balls.pory"
	lock
# 130 "data/challenge_balls.pory"
	msgbox Route117_EventScript_ChallengeBall1_Text_0, MSGBOX_YESNO
# 131 "data/challenge_balls.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route117_EventScript_ChallengeBall1_2
Route117_EventScript_ChallengeBall1_1:
# 142 "data/challenge_balls.pory"
	release
	return

Route117_EventScript_ChallengeBall1_2:
# 132 "data/challenge_balls.pory"
	call SetupChallengeBall
# 133 "data/challenge_balls.pory"
	settotemboost 1, 0, 0, 1
# 134 "data/challenge_balls.pory"
	setwildbattle SPECIES_CHERRIM, 27, ITEM_NONE, 0, SPECIES_BRELOOM_FRIBIAN, 27, ITEM_NONE, 1, MOVE_GROWTH, MOVE_TRAILBLAZE, MOVE_GRASSY_TERRAIN, MOVE_HEAL_PULSE, MOVE_MACH_PUNCH, MOVE_BULLET_SEED, MOVE_BULLDOZE, MOVE_HEADBUTT
# 135 "data/challenge_balls.pory"
	dowildbattle
# 136 "data/challenge_balls.pory"
	clearflag FLAG_NO_CATCHING
# 137 "data/challenge_balls.pory"
	clearflag FLAG_NO_RUNNING
# 138 "data/challenge_balls.pory"
	clearflag FLAG_SMART_WILD_AI
# 139 "data/challenge_balls.pory"
	finditem ITEM_LUCKY_EGG, 1
# 140 "data/challenge_balls.pory"
	setwildbattle SPECIES_BULBASAUR, 1
	goto Route117_EventScript_ChallengeBall1_1


Route112_EventScript_ChallengeBall1::
# 146 "data/challenge_balls.pory"
	lock
# 147 "data/challenge_balls.pory"
	msgbox Route112_EventScript_ChallengeBall1_Text_0, MSGBOX_YESNO
# 148 "data/challenge_balls.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route112_EventScript_ChallengeBall1_2
Route112_EventScript_ChallengeBall1_1:
# 159 "data/challenge_balls.pory"
	release
	return

Route112_EventScript_ChallengeBall1_2:
# 149 "data/challenge_balls.pory"
	call SetupChallengeBall
# 150 "data/challenge_balls.pory"
	settotemboost 1, 1
# 151 "data/challenge_balls.pory"
	setwildbattle SPECIES_OINKOLOGNE_F, 29, ITEM_NONE, 0, SPECIES_SKIPLOOM_EMERIBIAN, 29, ITEM_NONE, 2, MOVE_HEADBUTT, MOVE_STOMPING_TANTRUM, MOVE_TRAILBLAZE, MOVE_CURSE, MOVE_ICY_WIND, MOVE_ROUND, MOVE_DRAINING_KISS, MOVE_SING
# 152 "data/challenge_balls.pory"
	dowildbattle
# 153 "data/challenge_balls.pory"
	clearflag FLAG_NO_CATCHING
# 154 "data/challenge_balls.pory"
	clearflag FLAG_NO_RUNNING
# 155 "data/challenge_balls.pory"
	clearflag FLAG_SMART_WILD_AI
# 156 "data/challenge_balls.pory"
	finditem ITEM_LOADED_DICE, 1
# 157 "data/challenge_balls.pory"
	setwildbattle SPECIES_BULBASAUR, 1
	goto Route112_EventScript_ChallengeBall1_1


Route113_EventScript_ChallengeBall1::
# 163 "data/challenge_balls.pory"
	lock
# 164 "data/challenge_balls.pory"
	msgbox Route113_EventScript_ChallengeBall1_Text_0, MSGBOX_YESNO
# 165 "data/challenge_balls.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route113_EventScript_ChallengeBall1_2
Route113_EventScript_ChallengeBall1_1:
# 176 "data/challenge_balls.pory"
	release
	return

Route113_EventScript_ChallengeBall1_2:
# 166 "data/challenge_balls.pory"
	call SetupChallengeBall
# 167 "data/challenge_balls.pory"
	setstartingstatus STARTING_STATUS_MAGIC_ROOM_TEMPORARY
# 168 "data/challenge_balls.pory"
	setwildbattle SPECIES_ZANGOOSE, 31, ITEM_NONE, 1, SPECIES_SEVIPER, 31, ITEM_NONE, 2, MOVE_QUICK_ATTACK, MOVE_NIGHT_SLASH, MOVE_DOUBLE_KICK, MOVE_HONE_CLAWS, MOVE_BREAKING_SWIPE, MOVE_ASSURANCE, MOVE_POISON_FANG, MOVE_LICK
# 169 "data/challenge_balls.pory"
	dowildbattle
# 170 "data/challenge_balls.pory"
	clearflag FLAG_NO_CATCHING
# 171 "data/challenge_balls.pory"
	clearflag FLAG_NO_RUNNING
# 172 "data/challenge_balls.pory"
	clearflag FLAG_SMART_WILD_AI
# 173 "data/challenge_balls.pory"
	finditem ITEM_WISE_GLASSES, 1
# 174 "data/challenge_balls.pory"
	setwildbattle SPECIES_BULBASAUR, 1
	goto Route113_EventScript_ChallengeBall1_1


Route113_EventScript_ChallengeBall2::
# 180 "data/challenge_balls.pory"
	lock
# 181 "data/challenge_balls.pory"
	msgbox Route113_EventScript_ChallengeBall2_Text_0, MSGBOX_YESNO
# 182 "data/challenge_balls.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route113_EventScript_ChallengeBall2_2
Route113_EventScript_ChallengeBall2_1:
# 193 "data/challenge_balls.pory"
	release
	return

Route113_EventScript_ChallengeBall2_2:
# 183 "data/challenge_balls.pory"
	call SetupChallengeBall
# 184 "data/challenge_balls.pory"
	setstartingstatus STARTING_STATUS_TRICK_ROOM_TEMPORARY
# 185 "data/challenge_balls.pory"
	setwildbattle SPECIES_CLODSIRE, 31, ITEM_NONE, 1, SPECIES_QUAGSIRE, 31, ITEM_NONE, 2, MOVE_ACID_SPRAY, MOVE_CHILLING_WATER, MOVE_HELPING_HAND, MOVE_LOW_KICK, MOVE_SURF, MOVE_ENDURE, MOVE_RAIN_DANCE, MOVE_TOXIC_SPIKES
# 186 "data/challenge_balls.pory"
	dowildbattle
# 187 "data/challenge_balls.pory"
	clearflag FLAG_NO_CATCHING
# 188 "data/challenge_balls.pory"
	clearflag FLAG_NO_RUNNING
# 189 "data/challenge_balls.pory"
	clearflag FLAG_SMART_WILD_AI
# 190 "data/challenge_balls.pory"
	finditem ITEM_MUSCLE_BAND, 1
# 191 "data/challenge_balls.pory"
	setwildbattle SPECIES_BULBASAUR, 1
	goto Route113_EventScript_ChallengeBall2_1


Route114_EventScript_ChallengeBall1::
# 197 "data/challenge_balls.pory"
	lock
# 198 "data/challenge_balls.pory"
	msgbox Route114_EventScript_ChallengeBall1_Text_0, MSGBOX_YESNO
# 199 "data/challenge_balls.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route114_EventScript_ChallengeBall1_2
Route114_EventScript_ChallengeBall1_1:
# 213 "data/challenge_balls.pory"
	release
	return

Route114_EventScript_ChallengeBall1_2:
# 200 "data/challenge_balls.pory"
	call SetupChallengeBall
# 201 "data/challenge_balls.pory"
	call WeatherScript_SetAndDo_Rain
# 202 "data/challenge_balls.pory"
	delay 60
# 203 "data/challenge_balls.pory"
	setwildbattle SPECIES_LUDICOLO, 32, ITEM_NONE, 1, SPECIES_ARMALDO, 32, ITEM_NONE, 2, MOVE_FAKE_OUT, MOVE_MEGA_DRAIN, MOVE_ASTONISH, MOVE_ENCORE, MOVE_X_SCISSOR, MOVE_ROCK_TOMB, MOVE_SHADOW_CLAW, MOVE_BODY_SLAM
# 204 "data/challenge_balls.pory"
	dowildbattle
# 205 "data/challenge_balls.pory"
	resetweather
# 206 "data/challenge_balls.pory"
	delay 60
# 207 "data/challenge_balls.pory"
	clearflag FLAG_NO_CATCHING
# 208 "data/challenge_balls.pory"
	clearflag FLAG_NO_RUNNING
# 209 "data/challenge_balls.pory"
	clearflag FLAG_SMART_WILD_AI
# 210 "data/challenge_balls.pory"
	finditem ITEM_SUPER_ROD, 1
# 211 "data/challenge_balls.pory"
	setwildbattle SPECIES_BULBASAUR, 1
	goto Route114_EventScript_ChallengeBall1_1


MeteorFalls_EventScript_ChallengeBall1::
# 217 "data/challenge_balls.pory"
	lock
# 218 "data/challenge_balls.pory"
	msgbox MeteorFalls_EventScript_ChallengeBall1_Text_0, MSGBOX_YESNO
# 219 "data/challenge_balls.pory"
	compare VAR_RESULT, 1
	goto_if_eq MeteorFalls_EventScript_ChallengeBall1_2
MeteorFalls_EventScript_ChallengeBall1_1:
# 230 "data/challenge_balls.pory"
	release
	return

MeteorFalls_EventScript_ChallengeBall1_2:
# 220 "data/challenge_balls.pory"
	call SetupChallengeBall
# 221 "data/challenge_balls.pory"
	setstartingstatus STARTING_STATUS_ELECTRIC_TERRAIN_TEMPORARY
# 222 "data/challenge_balls.pory"
	setwildbattle SPECIES_FLOETTE, 32, ITEM_NONE, 2, SPECIES_BELLIBOLT, 32, ITEM_NONE, 0, MOVE_NATURE_POWER, MOVE_SECRET_POWER, MOVE_MAGICAL_LEAF, MOVE_DRAINING_KISS, MOVE_VOLT_SWITCH, MOVE_CHILLING_WATER, MOVE_ACID_SPRAY, MOVE_MUD_SLAP
# 223 "data/challenge_balls.pory"
	dowildbattle
# 224 "data/challenge_balls.pory"
	clearflag FLAG_NO_CATCHING
# 225 "data/challenge_balls.pory"
	clearflag FLAG_NO_RUNNING
# 226 "data/challenge_balls.pory"
	clearflag FLAG_SMART_WILD_AI
# 227 "data/challenge_balls.pory"
	finditem ITEM_ASSAULT_VEST, 1
# 228 "data/challenge_balls.pory"
	setwildbattle SPECIES_BULBASAUR, 1
	goto MeteorFalls_EventScript_ChallengeBall1_1


Route118_EventScript_ChallengeBall1::
# 234 "data/challenge_balls.pory"
	lock
# 235 "data/challenge_balls.pory"
	msgbox Route118_EventScript_ChallengeBall1_Text_0, MSGBOX_YESNO
# 236 "data/challenge_balls.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route118_EventScript_ChallengeBall1_2
Route118_EventScript_ChallengeBall1_1:
# 247 "data/challenge_balls.pory"
	release
	return

Route118_EventScript_ChallengeBall1_2:
# 237 "data/challenge_balls.pory"
	call SetupChallengeBall
# 238 "data/challenge_balls.pory"
	settotemboost 1, 0, 1, 0, 0, 1
# 239 "data/challenge_balls.pory"
	setwildbattle SPECIES_FEAROW, 38, ITEM_NONE, 2, SPECIES_ABSOL, 38, ITEM_NONE, 1, MOVE_FOCUS_ENERGY, MOVE_DRILL_RUN, MOVE_DRILL_PECK, MOVE_STEEL_WING, MOVE_NIGHT_SLASH, MOVE_DETECT, MOVE_SHADOW_CLAW, MOVE_THUNDER_WAVE
# 240 "data/challenge_balls.pory"
	dowildbattle
# 241 "data/challenge_balls.pory"
	clearflag FLAG_NO_CATCHING
# 242 "data/challenge_balls.pory"
	clearflag FLAG_NO_RUNNING
# 243 "data/challenge_balls.pory"
	clearflag FLAG_SMART_WILD_AI
# 244 "data/challenge_balls.pory"
	finditem ITEM_SCOPE_LENS, 1
# 245 "data/challenge_balls.pory"
	setwildbattle SPECIES_BULBASAUR, 1
	goto Route118_EventScript_ChallengeBall1_1


Route123_EventScript_ChallengeBall1::
# 251 "data/challenge_balls.pory"
	lock
# 252 "data/challenge_balls.pory"
	msgbox Route118_EventScript_ChallengeBall1_Text_0, MSGBOX_YESNO
# 253 "data/challenge_balls.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route123_EventScript_ChallengeBall1_2
Route123_EventScript_ChallengeBall1_1:
# 264 "data/challenge_balls.pory"
	release
	return

Route123_EventScript_ChallengeBall1_2:
# 254 "data/challenge_balls.pory"
	call SetupChallengeBall
# 255 "data/challenge_balls.pory"
	settotemboost 1, 1
# 256 "data/challenge_balls.pory"
	setwildbattle SPECIES_TITANEON, 40, ITEM_NONE, 2, SPECIES_NINETALES_EMERIBIAN, 40, ITEM_NONE, 0, MOVE_HEAL_ORDER, MOVE_PARABOLIC_CHARGE, MOVE_METAL_CLAW, MOVE_HELPING_HAND, MOVE_FLAME_BURST, MOVE_FIRE_SPIN, MOVE_WILL_O_WISP, MOVE_HEX
# 257 "data/challenge_balls.pory"
	dowildbattle
# 258 "data/challenge_balls.pory"
	clearflag FLAG_NO_CATCHING
# 259 "data/challenge_balls.pory"
	clearflag FLAG_NO_RUNNING
# 260 "data/challenge_balls.pory"
	clearflag FLAG_SMART_WILD_AI
# 261 "data/challenge_balls.pory"
	finditem ITEM_LEFTOVERS, 1
# 262 "data/challenge_balls.pory"
	setwildbattle SPECIES_BULBASAUR, 1
	goto Route123_EventScript_ChallengeBall1_1


Route120_EventScript_ChallengeBall1::
# 268 "data/challenge_balls.pory"
	lock
# 269 "data/challenge_balls.pory"
	msgbox Route120_EventScript_ChallengeBall1_Text_0, MSGBOX_YESNO
# 270 "data/challenge_balls.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route120_EventScript_ChallengeBall1_2
Route120_EventScript_ChallengeBall1_1:
# 281 "data/challenge_balls.pory"
	release
	return

Route120_EventScript_ChallengeBall1_2:
# 271 "data/challenge_balls.pory"
	call SetupChallengeBall
# 272 "data/challenge_balls.pory"
	settotemboost 1, 0, 1, 0, 0, 1
# 273 "data/challenge_balls.pory"
	setwildbattle SPECIES_WUGTRIO, 42, ITEM_NONE, 0, SPECIES_SLOWKING_GALAR, 42, ITEM_NONE, 1, MOVE_FLATTER, MOVE_TRIPLE_DIVE, MOVE_SUCKER_PUNCH, MOVE_HELPING_HAND, MOVE_SCALD, MOVE_PSYCHIC, MOVE_SLUDGE_BOMB, MOVE_SLACK_OFF
# 274 "data/challenge_balls.pory"
	dowildbattle
# 275 "data/challenge_balls.pory"
	clearflag FLAG_NO_CATCHING
# 276 "data/challenge_balls.pory"
	clearflag FLAG_NO_RUNNING
# 277 "data/challenge_balls.pory"
	clearflag FLAG_SMART_WILD_AI
# 278 "data/challenge_balls.pory"
	finditem ITEM_HEAVY_DUTY_BOOTS, 1
# 279 "data/challenge_balls.pory"
	setwildbattle SPECIES_BULBASAUR, 1
	goto Route120_EventScript_ChallengeBall1_1


MtPyre_Exterior_EventScript_ChallengeBall1::
# 285 "data/challenge_balls.pory"
	lock
# 286 "data/challenge_balls.pory"
	msgbox MtPyre_Exterior_EventScript_ChallengeBall1_Text_0, MSGBOX_YESNO
# 287 "data/challenge_balls.pory"
	compare VAR_RESULT, 1
	goto_if_eq MtPyre_Exterior_EventScript_ChallengeBall1_2
MtPyre_Exterior_EventScript_ChallengeBall1_1:
# 298 "data/challenge_balls.pory"
	release
	return

MtPyre_Exterior_EventScript_ChallengeBall1_2:
# 288 "data/challenge_balls.pory"
	call SetupChallengeBall
# 289 "data/challenge_balls.pory"
	setstartingstatus STARTING_STATUS_TAILWIND_OPPONENT_TEMPORARY
# 290 "data/challenge_balls.pory"
	setwildbattle SPECIES_GOLEM_FRIBIAN, 46, ITEM_NONE, 2, SPECIES_NOCTOWL_EMERIBIAN, 46, ITEM_NONE, 2, MOVE_EARTHQUAKE, MOVE_FLAME_WHEEL, MOVE_SHADOW_PUNCH, MOVE_ROCK_BLAST, MOVE_HYPNOSIS, MOVE_NIGHT_DAZE, MOVE_EXTRASENSORY, MOVE_AIR_SLASH
# 291 "data/challenge_balls.pory"
	dowildbattle
# 292 "data/challenge_balls.pory"
	clearflag FLAG_NO_CATCHING
# 293 "data/challenge_balls.pory"
	clearflag FLAG_NO_RUNNING
# 294 "data/challenge_balls.pory"
	clearflag FLAG_SMART_WILD_AI
# 295 "data/challenge_balls.pory"
	finditem ITEM_BLACK_SLUDGE, 1
# 296 "data/challenge_balls.pory"
	setwildbattle SPECIES_BULBASAUR, 1
	goto MtPyre_Exterior_EventScript_ChallengeBall1_1


LilycoveCity_EventScript_ChallengeBall1::
# 302 "data/challenge_balls.pory"
	lock
# 303 "data/challenge_balls.pory"
	msgbox LilycoveCity_EventScript_ChallengeBall1_Text_0, MSGBOX_YESNO
# 304 "data/challenge_balls.pory"
	compare VAR_RESULT, 1
	goto_if_eq LilycoveCity_EventScript_ChallengeBall1_2
LilycoveCity_EventScript_ChallengeBall1_1:
# 315 "data/challenge_balls.pory"
	release
	return

LilycoveCity_EventScript_ChallengeBall1_2:
# 305 "data/challenge_balls.pory"
	call SetupChallengeBall
# 306 "data/challenge_balls.pory"
	setstartingstatus STARTING_STATUS_WONDER_ROOM_TEMPORARY
# 307 "data/challenge_balls.pory"
	setwildbattle SPECIES_ELDEGOSS, 48, ITEM_NONE, 0, SPECIES_MALAMAR, 48, ITEM_NONE, 0, MOVE_COTTON_GUARD, MOVE_GIGA_DRAIN, MOVE_LIGHT_SCREEN, MOVE_POLLEN_PUFF, MOVE_SUPERPOWER, MOVE_STORED_POWER, MOVE_AERIAL_ACE, MOVE_PROTECT
# 308 "data/challenge_balls.pory"
	dowildbattle
# 309 "data/challenge_balls.pory"
	clearflag FLAG_NO_CATCHING
# 310 "data/challenge_balls.pory"
	clearflag FLAG_NO_RUNNING
# 311 "data/challenge_balls.pory"
	clearflag FLAG_SMART_WILD_AI
# 312 "data/challenge_balls.pory"
	finditem ITEM_ROCKY_HELMET, 1
# 313 "data/challenge_balls.pory"
	setwildbattle SPECIES_BULBASAUR, 1
	goto LilycoveCity_EventScript_ChallengeBall1_1


MossdeepCity_EventScript_ChallengeBall1::
# 319 "data/challenge_balls.pory"
	lock
# 320 "data/challenge_balls.pory"
	msgbox MossdeepCity_EventScript_ChallengeBall1_Text_0, MSGBOX_YESNO
# 321 "data/challenge_balls.pory"
	compare VAR_RESULT, 1
	goto_if_eq MossdeepCity_EventScript_ChallengeBall1_2
MossdeepCity_EventScript_ChallengeBall1_1:
# 332 "data/challenge_balls.pory"
	release
	return

MossdeepCity_EventScript_ChallengeBall1_2:
# 322 "data/challenge_balls.pory"
	call SetupChallengeBall
# 323 "data/challenge_balls.pory"
	setstartingstatus STARTING_STATUS_MAGIC_ROOM_TEMPORARY
# 324 "data/challenge_balls.pory"
	setwildbattle SPECIES_CONTAGEON, 53, ITEM_NONE, 2, SPECIES_SLAKING, 53, ITEM_NONE, 0, MOVE_PROTECT, MOVE_DIRE_CLAW, MOVE_SPECTRAL_THIEF, MOVE_TAUNT, MOVE_BODY_SLAM, MOVE_HAMMER_ARM, MOVE_PLAY_ROUGH, MOVE_SHADOW_CLAW
# 325 "data/challenge_balls.pory"
	dowildbattle
# 326 "data/challenge_balls.pory"
	clearflag FLAG_NO_CATCHING
# 327 "data/challenge_balls.pory"
	clearflag FLAG_NO_RUNNING
# 328 "data/challenge_balls.pory"
	clearflag FLAG_SMART_WILD_AI
# 329 "data/challenge_balls.pory"
	finditem ITEM_FOCUS_SASH, 1
# 330 "data/challenge_balls.pory"
	setwildbattle SPECIES_BULBASAUR, 1
	goto MossdeepCity_EventScript_ChallengeBall1_1


Route127_EventScript_ChallengeBall1::
# 336 "data/challenge_balls.pory"
	lock
# 337 "data/challenge_balls.pory"
	msgbox Route127_EventScript_ChallengeBall1_Text_0, MSGBOX_YESNO
# 338 "data/challenge_balls.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route127_EventScript_ChallengeBall1_2
Route127_EventScript_ChallengeBall1_1:
# 352 "data/challenge_balls.pory"
	release
	return

Route127_EventScript_ChallengeBall1_2:
# 339 "data/challenge_balls.pory"
	call SetupChallengeBall
# 340 "data/challenge_balls.pory"
	call WeatherScript_SetAndDo_Rain
# 341 "data/challenge_balls.pory"
	delay 60
# 342 "data/challenge_balls.pory"
	setwildbattle SPECIES_KINGDRA, 55, ITEM_NONE, 1, SPECIES_CACTURNE, 55, ITEM_NONE, 2, MOVE_DRAGON_DANCE, MOVE_DRAGON_PULSE, MOVE_SURF, MOVE_FOCUS_ENERGY, MOVE_SPIKY_SHIELD, MOVE_RAIN_DANCE, MOVE_NEEDLE_ARM, MOVE_NIGHT_SLASH
# 343 "data/challenge_balls.pory"
	dowildbattle
# 344 "data/challenge_balls.pory"
	resetweather
# 345 "data/challenge_balls.pory"
	delay 60
# 346 "data/challenge_balls.pory"
	clearflag FLAG_NO_CATCHING
# 347 "data/challenge_balls.pory"
	clearflag FLAG_NO_RUNNING
# 348 "data/challenge_balls.pory"
	clearflag FLAG_SMART_WILD_AI
# 349 "data/challenge_balls.pory"
	finditem ITEM_LIFE_ORB, 1
# 350 "data/challenge_balls.pory"
	setwildbattle SPECIES_BULBASAUR, 1
	goto Route127_EventScript_ChallengeBall1_1


Route132_EventScript_ChallengeBall1::
# 356 "data/challenge_balls.pory"
	lock
# 357 "data/challenge_balls.pory"
	msgbox Route132_EventScript_ChallengeBall1_Text_0, MSGBOX_YESNO
# 358 "data/challenge_balls.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route132_EventScript_ChallengeBall1_2
Route132_EventScript_ChallengeBall1_1:
# 372 "data/challenge_balls.pory"
	release
	return

Route132_EventScript_ChallengeBall1_2:
# 359 "data/challenge_balls.pory"
	call SetupChallengeBall
# 360 "data/challenge_balls.pory"
	call WeatherScript_SetAndDo_Snow
# 361 "data/challenge_balls.pory"
	delay 60
# 362 "data/challenge_balls.pory"
	setwildbattle SPECIES_VANILLUXE, 57, ITEM_NONE, 0, SPECIES_TREVENANT_EMERIBIAN, 57, ITEM_NONE, 0, MOVE_FREEZE_DRY, MOVE_AURORA_VEIL, MOVE_HYPER_VOICE, MOVE_FLASH_CANNON, MOVE_SPIRIT_BREAK, MOVE_HORN_LEECH, MOVE_INGRAIN, MOVE_LEECH_SEED
# 363 "data/challenge_balls.pory"
	dowildbattle
# 364 "data/challenge_balls.pory"
	resetweather
# 365 "data/challenge_balls.pory"
	delay 60
# 366 "data/challenge_balls.pory"
	clearflag FLAG_NO_CATCHING
# 367 "data/challenge_balls.pory"
	clearflag FLAG_NO_RUNNING
# 368 "data/challenge_balls.pory"
	clearflag FLAG_SMART_WILD_AI
# 369 "data/challenge_balls.pory"
	finditem ITEM_CHOICE_BAND, 1
# 370 "data/challenge_balls.pory"
	setwildbattle SPECIES_BULBASAUR, 1
	goto Route132_EventScript_ChallengeBall1_1


Route133_EventScript_ChallengeBall1::
# 376 "data/challenge_balls.pory"
	lock
# 377 "data/challenge_balls.pory"
	msgbox Route133_EventScript_ChallengeBall1_Text_0, MSGBOX_YESNO
# 378 "data/challenge_balls.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route133_EventScript_ChallengeBall1_2
Route133_EventScript_ChallengeBall1_1:
# 392 "data/challenge_balls.pory"
	release
	return

Route133_EventScript_ChallengeBall1_2:
# 379 "data/challenge_balls.pory"
	call SetupChallengeBall
# 380 "data/challenge_balls.pory"
	call WeatherScript_SetAndDo_Drought
# 381 "data/challenge_balls.pory"
	delay 60
# 382 "data/challenge_balls.pory"
	setwildbattle SPECIES_SOLFLORA, 57, ITEM_NONE, 0, SPECIES_SCREAM_TAIL, 57, ITEM_NONE, 0, MOVE_TORCH_SONG, MOVE_DAZZLING_GLEAM, MOVE_SOLAR_BEAM, MOVE_TRAILBLAZE, MOVE_PLAY_ROUGH, MOVE_PSYCHIC_FANGS, MOVE_CRUNCH, MOVE_GYRO_BALL
# 383 "data/challenge_balls.pory"
	dowildbattle
# 384 "data/challenge_balls.pory"
	resetweather
# 385 "data/challenge_balls.pory"
	delay 60
# 386 "data/challenge_balls.pory"
	clearflag FLAG_NO_CATCHING
# 387 "data/challenge_balls.pory"
	clearflag FLAG_NO_RUNNING
# 388 "data/challenge_balls.pory"
	clearflag FLAG_SMART_WILD_AI
# 389 "data/challenge_balls.pory"
	finditem ITEM_CHOICE_SCARF, 1
# 390 "data/challenge_balls.pory"
	setwildbattle SPECIES_BULBASAUR, 1
	goto Route133_EventScript_ChallengeBall1_1


Route134_EventScript_ChallengeBall1::
# 396 "data/challenge_balls.pory"
	lock
# 397 "data/challenge_balls.pory"
	msgbox Route134_EventScript_ChallengeBall1_Text_0, MSGBOX_YESNO
# 398 "data/challenge_balls.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route134_EventScript_ChallengeBall1_2
Route134_EventScript_ChallengeBall1_1:
# 409 "data/challenge_balls.pory"
	release
	return

Route134_EventScript_ChallengeBall1_2:
# 399 "data/challenge_balls.pory"
	call SetupChallengeBall
# 400 "data/challenge_balls.pory"
	setstartingstatus STARTING_STATUS_ELECTRIC_TERRAIN_TEMPORARY
# 401 "data/challenge_balls.pory"
	setwildbattle SPECIES_SAWSBUCK, 57, ITEM_NONE, 2, SPECIES_IRON_HANDS, 57, ITEM_NONE, 0, MOVE_NATURE_POWER, MOVE_HORN_LEECH, MOVE_ZEN_HEADBUTT, MOVE_BODY_SLAM, MOVE_WILD_CHARGE, MOVE_CLOSE_COMBAT, MOVE_HEAVY_SLAM, MOVE_FAKE_OUT
# 402 "data/challenge_balls.pory"
	dowildbattle
# 403 "data/challenge_balls.pory"
	clearflag FLAG_NO_CATCHING
# 404 "data/challenge_balls.pory"
	clearflag FLAG_NO_RUNNING
# 405 "data/challenge_balls.pory"
	clearflag FLAG_SMART_WILD_AI
# 406 "data/challenge_balls.pory"
	finditem ITEM_CHOICE_SPECS, 1
# 407 "data/challenge_balls.pory"
	setwildbattle SPECIES_BULBASAUR, 1
	goto Route134_EventScript_ChallengeBall1_1


Route119_EventScript_ChallengeBall1::
# 413 "data/challenge_balls.pory"
	lock
# 414 "data/challenge_balls.pory"
	msgbox Route119_EventScript_ChallengeBall1_Text_0, MSGBOX_YESNO
# 415 "data/challenge_balls.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route119_EventScript_ChallengeBall1_2
Route119_EventScript_ChallengeBall1_1:
# 426 "data/challenge_balls.pory"
	release
	return

Route119_EventScript_ChallengeBall1_2:
# 416 "data/challenge_balls.pory"
	call SetupChallengeBall
# 417 "data/challenge_balls.pory"
	settotemboost 1, 0, 1, 0, 0, 1
# 418 "data/challenge_balls.pory"
	setwildbattle SPECIES_KINGAMBIT, 60, ITEM_NONE, 0, SPECIES_LOPUNNY_EMERIBIAN, 60, ITEM_NONE, 2, MOVE_KOWTOW_CLEAVE, MOVE_IRON_HEAD, MOVE_IRON_DEFENSE, MOVE_SHADOW_CLAW, MOVE_SUPERPOWER, MOVE_ICE_HAMMER, MOVE_ME_FIRST, MOVE_STRENGTH
# 419 "data/challenge_balls.pory"
	dowildbattle
# 420 "data/challenge_balls.pory"
	clearflag FLAG_NO_CATCHING
# 421 "data/challenge_balls.pory"
	clearflag FLAG_NO_RUNNING
# 422 "data/challenge_balls.pory"
	clearflag FLAG_SMART_WILD_AI
# 423 "data/challenge_balls.pory"
	finditem ITEM_WEAKNESS_POLICY, 1
# 424 "data/challenge_balls.pory"
	setwildbattle SPECIES_BULBASAUR, 1
	goto Route119_EventScript_ChallengeBall1_1


Route106_EventScript_ChallengeBall1_Text_0:
# 11 "data/challenge_balls.pory"
	.string "You feel grass growing beneath the\n"
	.string "sand.\p"
	.string "Reach out for the item?$"

GraniteCave_B1F_EventScript_ChallengeBall1_Text_0:
# 28 "data/challenge_balls.pory"
	.string "You feel a drip from the ceiling.\p"
	.string "Reach out for the item?$"

GraniteCave_B2F_EventScript_ChallengeBall1_Text_0:
# 45 "data/challenge_balls.pory"
	.string "You sense an enemy in a defensive\n"
	.string "position.\p"
	.string "Reach out for the item?$"

Route109_EventScript_ChallengeBall1_Text_0:
# 62 "data/challenge_balls.pory"
	.string "Enemies are clearly lying in wait.\p"
	.string "Reach out for the item?$"

Route103_EventScript_ChallengeBall1_Text_0:
# 79 "data/challenge_balls.pory"
	.string "You sense some real horsepower in wait.\p"
	.string "Reach out for the item?$"

Route110_EventScript_ChallengeBall1_Text_0:
# 96 "data/challenge_balls.pory"
	.string "You feel a circle of mysticism around.\p"
	.string "Reach out for the item?$"

Route110_EventScript_ChallengeBall2_Text_0:
# 113 "data/challenge_balls.pory"
	.string "You sense a drought approaching\n"
	.string "quickly.\p"
	.string "Reach out for the item?$"

Route117_EventScript_ChallengeBall1_Text_0:
# 130 "data/challenge_balls.pory"
	.string "You sense a drought approaching.\p"
	.string "Reach out for the item?$"

Route112_EventScript_ChallengeBall1_Text_0:
# 147 "data/challenge_balls.pory"
	.string "You see an enemy waiting in an\n"
	.string "offensive position.\p"
	.string "Reach out for the item?$"

Route113_EventScript_ChallengeBall1_Text_0:
# 164 "data/challenge_balls.pory"
	.string "You feel a magical aura.\p"
	.string "Reach out for the item?$"

Route113_EventScript_ChallengeBall2_Text_0:
# 181 "data/challenge_balls.pory"
	.string "You feel a trickster's presence.\p"
	.string "Reach out for the item?$"

Route114_EventScript_ChallengeBall1_Text_0:
# 198 "data/challenge_balls.pory"
	.string "You see clouds forming above.\p"
	.string "Reach out for the item?$"

MeteorFalls_EventScript_ChallengeBall1_Text_0:
# 218 "data/challenge_balls.pory"
	.string "You feel static running across the\n"
	.string "ground.\p"
	.string "Reach out for the item?$"

Route118_EventScript_ChallengeBall1_Text_0:
# 235 "data/challenge_balls.pory"
	.string "You sense enemies with sharp claws\n"
	.string "ready to strike.\p"
	.string "Reach out for the item?$"

Route120_EventScript_ChallengeBall1_Text_0:
# 269 "data/challenge_balls.pory"
	.string "After trudging through the mud you\n"
	.string "sense enemies nearby.\p"
	.string "Reach out for the item?$"

MtPyre_Exterior_EventScript_ChallengeBall1_Text_0:
# 286 "data/challenge_balls.pory"
	.string "A strong wind blows against you.\p"
	.string "Reach out for the item?$"

LilycoveCity_EventScript_ChallengeBall1_Text_0:
# 303 "data/challenge_balls.pory"
	.string "You feel a wondrous sensation as you\n"
	.string "approach.\p"
	.string "Reach out for the item?$"

MossdeepCity_EventScript_ChallengeBall1_Text_0:
# 320 "data/challenge_balls.pory"
	.string "You feel a magical sensation as you\n"
	.string "approach.\p"
	.string "Reach out for the item?$"

Route127_EventScript_ChallengeBall1_Text_0:
# 337 "data/challenge_balls.pory"
	.string "You sense an imminent downpour.\p"
	.string "Reach out for the item?$"

Route132_EventScript_ChallengeBall1_Text_0:
# 357 "data/challenge_balls.pory"
	.string "You see stray snowflakes falling.\p"
	.string "Reach out for the item?$"

Route133_EventScript_ChallengeBall1_Text_0:
# 377 "data/challenge_balls.pory"
	.string "You enter an area lacking in humidity.\p"
	.string "Reach out for the item?$"

Route134_EventScript_ChallengeBall1_Text_0:
# 397 "data/challenge_balls.pory"
	.string "An electric current runs through the\n"
	.string "sand.\p"
	.string "Reach out for the item?$"

Route119_EventScript_ChallengeBall1_Text_0:
# 414 "data/challenge_balls.pory"
	.string "Enemies manipulating their own power\n"
	.string "are near.\p"
	.string "Reach out for the item?$"
