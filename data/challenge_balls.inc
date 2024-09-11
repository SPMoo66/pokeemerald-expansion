Route106_EventScript_ChallengeBall1::
# 2 "data/challenge_balls.pory"
	lock
# 3 "data/challenge_balls.pory"
	msgbox Route106_EventScript_ChallengeBall1_Text_0, MSGBOX_YESNO
# 4 "data/challenge_balls.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route106_EventScript_ChallengeBall1_2
Route106_EventScript_ChallengeBall1_1:
# 18 "data/challenge_balls.pory"
	release
	return

Route106_EventScript_ChallengeBall1_2:
# 5 "data/challenge_balls.pory"
	setflag FLAG_NO_CATCHING
# 6 "data/challenge_balls.pory"
	setflag FLAG_NO_RUNNING
# 7 "data/challenge_balls.pory"
	setflag FLAG_SMART_WILD_AI
# 8 "data/challenge_balls.pory"
	setvar VAR_STARTING_STATUS, 3
# 9 "data/challenge_balls.pory"
	setwildbattle SPECIES_GLOOM_EMERIBIAN, 17, ITEM_NONE, 0, SPECIES_SKIDDO_EMERIBIAN, 17, ITEM_NONE, 2, MOVE_MEGA_DRAIN, MOVE_SOAK, MOVE_LIFE_DEW, MOVE_BUBBLE_BEAM, MOVE_TRAILBLAZE, MOVE_INGRAIN, MOVE_GROWL, MOVE_CAMOUFLAGE
# 10 "data/challenge_balls.pory"
	dowildbattle
# 11 "data/challenge_balls.pory"
	setvar VAR_STARTING_STATUS, 0
# 12 "data/challenge_balls.pory"
	clearflag FLAG_NO_CATCHING
# 13 "data/challenge_balls.pory"
	clearflag FLAG_NO_RUNNING
# 14 "data/challenge_balls.pory"
	clearflag FLAG_SMART_WILD_AI
# 15 "data/challenge_balls.pory"
	finditem ITEM_ESCAPE_ROPE, 1
# 16 "data/challenge_balls.pory"
	setwildbattle SPECIES_BULBASAUR, 1
	goto Route106_EventScript_ChallengeBall1_1


GraniteCave_B1F_EventScript_ChallengeBall1::
# 22 "data/challenge_balls.pory"
	lock
# 23 "data/challenge_balls.pory"
	msgbox GraniteCave_B1F_EventScript_ChallengeBall1_Text_0, MSGBOX_YESNO
# 24 "data/challenge_balls.pory"
	compare VAR_RESULT, 1
	goto_if_eq GraniteCave_B1F_EventScript_ChallengeBall1_2
GraniteCave_B1F_EventScript_ChallengeBall1_1:
# 37 "data/challenge_balls.pory"
	release
	return

GraniteCave_B1F_EventScript_ChallengeBall1_2:
# 25 "data/challenge_balls.pory"
	setflag FLAG_NO_CATCHING
# 26 "data/challenge_balls.pory"
	setflag FLAG_NO_RUNNING
# 27 "data/challenge_balls.pory"
	setflag FLAG_SMART_WILD_AI
# 28 "data/challenge_balls.pory"
	settotemboost 1, 1
# 29 "data/challenge_balls.pory"
	setwildbattle SPECIES_LUVDISC, 18, ITEM_NONE, 1, SPECIES_POLIWHIRL, 18, ITEM_NONE, 2, MOVE_AQUA_JET, MOVE_ICY_WIND, MOVE_RAIN_DANCE, MOVE_WHIRLPOOL, MOVE_CHILLING_WATER, MOVE_MUD_SHOT, MOVE_LOW_SWEEP, MOVE_SWIFT
# 30 "data/challenge_balls.pory"
	dowildbattle
# 31 "data/challenge_balls.pory"
	clearflag FLAG_NO_CATCHING
# 32 "data/challenge_balls.pory"
	clearflag FLAG_NO_RUNNING
# 33 "data/challenge_balls.pory"
	clearflag FLAG_SMART_WILD_AI
# 34 "data/challenge_balls.pory"
	finditem ITEM_GOOD_ROD, 1
# 35 "data/challenge_balls.pory"
	setwildbattle SPECIES_BULBASAUR, 1
	goto GraniteCave_B1F_EventScript_ChallengeBall1_1


GraniteCave_B2F_EventScript_ChallengeBall1::
# 41 "data/challenge_balls.pory"
	lock
# 42 "data/challenge_balls.pory"
	msgbox GraniteCave_B2F_EventScript_ChallengeBall1_Text_0, MSGBOX_YESNO
# 43 "data/challenge_balls.pory"
	compare VAR_RESULT, 1
	goto_if_eq GraniteCave_B2F_EventScript_ChallengeBall1_2
GraniteCave_B2F_EventScript_ChallengeBall1_1:
# 56 "data/challenge_balls.pory"
	release
	return

GraniteCave_B2F_EventScript_ChallengeBall1_2:
# 44 "data/challenge_balls.pory"
	setflag FLAG_NO_CATCHING
# 45 "data/challenge_balls.pory"
	setflag FLAG_NO_RUNNING
# 46 "data/challenge_balls.pory"
	setflag FLAG_SMART_WILD_AI
# 47 "data/challenge_balls.pory"
	settotemboost 1, 0, 1, 0, 0, 1
# 48 "data/challenge_balls.pory"
	setwildbattle SPECIES_ARIADOS_EMERIBIAN, 28, ITEM_NONE, 0, SPECIES_SMOOCHUM, 28, ITEM_NONE, 0, MOVE_THUNDER_FANG, MOVE_POISON_STING, MOVE_HONE_CLAWS, MOVE_CONSTRICT, MOVE_DRAINING_KISS, MOVE_ICY_WIND, MOVE_CONFUSION, MOVE_WATER_PULSE
# 49 "data/challenge_balls.pory"
	dowildbattle
# 50 "data/challenge_balls.pory"
	clearflag FLAG_NO_CATCHING
# 51 "data/challenge_balls.pory"
	clearflag FLAG_NO_RUNNING
# 52 "data/challenge_balls.pory"
	clearflag FLAG_SMART_WILD_AI
# 53 "data/challenge_balls.pory"
	finditem ITEM_EXPERT_BELT, 1
# 54 "data/challenge_balls.pory"
	setwildbattle SPECIES_BULBASAUR, 1
	goto GraniteCave_B2F_EventScript_ChallengeBall1_1


Route109_EventScript_ChallengeBall1::
# 60 "data/challenge_balls.pory"
	lock
# 61 "data/challenge_balls.pory"
	msgbox Route109_EventScript_ChallengeBall1_Text_0, MSGBOX_YESNO
# 62 "data/challenge_balls.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route109_EventScript_ChallengeBall1_2
Route109_EventScript_ChallengeBall1_1:
# 75 "data/challenge_balls.pory"
	release
	return

Route109_EventScript_ChallengeBall1_2:
# 63 "data/challenge_balls.pory"
	setflag FLAG_NO_CATCHING
# 64 "data/challenge_balls.pory"
	setflag FLAG_NO_RUNNING
# 65 "data/challenge_balls.pory"
	setflag FLAG_SMART_WILD_AI
# 66 "data/challenge_balls.pory"
	settotemboost 1, 1, 0, 0, 0, 1
# 67 "data/challenge_balls.pory"
	setwildbattle SPECIES_DODUO_EMERIBIAN, 21, ITEM_NONE, 1, SPECIES_TINKATUFF, 21, ITEM_NONE, 0, MOVE_FLAME_CHARGE, MOVE_SPARK, MOVE_TAILWIND, MOVE_FEINT_ATTACK, MOVE_FAKE_OUT, MOVE_METAL_CLAW, MOVE_POUNCE, MOVE_REFLECT
# 68 "data/challenge_balls.pory"
	dowildbattle
# 69 "data/challenge_balls.pory"
	clearflag FLAG_NO_CATCHING
# 70 "data/challenge_balls.pory"
	clearflag FLAG_NO_RUNNING
# 71 "data/challenge_balls.pory"
	clearflag FLAG_SMART_WILD_AI
# 72 "data/challenge_balls.pory"
	finditem ITEM_CLEAR_AMULET, 1
# 73 "data/challenge_balls.pory"
	setwildbattle SPECIES_BULBASAUR, 1
	goto Route109_EventScript_ChallengeBall1_1


Route103_EventScript_ChallengeBall1::
# 79 "data/challenge_balls.pory"
	lock
# 80 "data/challenge_balls.pory"
	msgbox Route103_EventScript_ChallengeBall1_Text_0, MSGBOX_YESNO
# 81 "data/challenge_balls.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route103_EventScript_ChallengeBall1_2
Route103_EventScript_ChallengeBall1_1:
# 94 "data/challenge_balls.pory"
	release
	return

Route103_EventScript_ChallengeBall1_2:
# 82 "data/challenge_balls.pory"
	setflag FLAG_NO_CATCHING
# 83 "data/challenge_balls.pory"
	setflag FLAG_NO_RUNNING
# 84 "data/challenge_balls.pory"
	setflag FLAG_SMART_WILD_AI
# 85 "data/challenge_balls.pory"
	settotemboost 3, 0, 0, 1
# 86 "data/challenge_balls.pory"
	setwildbattle SPECIES_JIGGLYPUFF, 23, ITEM_NONE, 2, SPECIES_MUDBRAY, 23, ITEM_NONE, 1, MOVE_HELPING_HAND, MOVE_AMNESIA, MOVE_DRAINING_KISS, MOVE_DISABLE, MOVE_BULLDOZE, MOVE_ROCK_SMASH, MOVE_SMACK_DOWN, MOVE_STOMP
# 87 "data/challenge_balls.pory"
	dowildbattle
# 88 "data/challenge_balls.pory"
	clearflag FLAG_NO_CATCHING
# 89 "data/challenge_balls.pory"
	clearflag FLAG_NO_RUNNING
# 90 "data/challenge_balls.pory"
	clearflag FLAG_SMART_WILD_AI
# 91 "data/challenge_balls.pory"
	finditem ITEM_BRIGHT_POWDER, 1
# 92 "data/challenge_balls.pory"
	setwildbattle SPECIES_BULBASAUR, 1
	goto Route103_EventScript_ChallengeBall1_1


Route110_EventScript_ChallengeBall1::
# 98 "data/challenge_balls.pory"
	lock
# 99 "data/challenge_balls.pory"
	msgbox Route110_EventScript_ChallengeBall1_Text_0, MSGBOX_YESNO
# 100 "data/challenge_balls.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route110_EventScript_ChallengeBall1_2
Route110_EventScript_ChallengeBall1_1:
# 114 "data/challenge_balls.pory"
	release
	return

Route110_EventScript_ChallengeBall1_2:
# 101 "data/challenge_balls.pory"
	setflag FLAG_NO_CATCHING
# 102 "data/challenge_balls.pory"
	setflag FLAG_NO_RUNNING
# 103 "data/challenge_balls.pory"
	setflag FLAG_SMART_WILD_AI
# 104 "data/challenge_balls.pory"
	setvar VAR_STARTING_STATUS, 4
# 105 "data/challenge_balls.pory"
	setwildbattle SPECIES_GOTHORITA, 24, ITEM_NONE, 1, SPECIES_RIBOMBEE, 24, ITEM_NONE, 1, MOVE_CALM_MIND, MOVE_FLATTER, MOVE_PSYBEAM, MOVE_GRASS_KNOT, MOVE_NATURE_POWER, MOVE_SECRET_POWER, MOVE_STICKY_WEB, MOVE_DRAINING_KISS
# 106 "data/challenge_balls.pory"
	dowildbattle
# 107 "data/challenge_balls.pory"
	setvar VAR_STARTING_STATUS, 0
# 108 "data/challenge_balls.pory"
	clearflag FLAG_NO_CATCHING
# 109 "data/challenge_balls.pory"
	clearflag FLAG_NO_RUNNING
# 110 "data/challenge_balls.pory"
	clearflag FLAG_SMART_WILD_AI
# 111 "data/challenge_balls.pory"
	finditem ITEM_WIDE_LENS, 1
# 112 "data/challenge_balls.pory"
	setwildbattle SPECIES_BULBASAUR, 1
	goto Route110_EventScript_ChallengeBall1_1


Route110_EventScript_ChallengeBall2::
# 118 "data/challenge_balls.pory"
	lock
# 119 "data/challenge_balls.pory"
	msgbox Route110_EventScript_ChallengeBall2_Text_0, MSGBOX_YESNO
# 120 "data/challenge_balls.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route110_EventScript_ChallengeBall2_2
Route110_EventScript_ChallengeBall2_1:
# 133 "data/challenge_balls.pory"
	release
	return

Route110_EventScript_ChallengeBall2_2:
# 121 "data/challenge_balls.pory"
	setflag FLAG_NO_CATCHING
# 122 "data/challenge_balls.pory"
	setflag FLAG_NO_RUNNING
# 123 "data/challenge_balls.pory"
	setflag FLAG_SMART_WILD_AI
# 124 "data/challenge_balls.pory"
	settotemboost 1, 0, 0, 3
# 125 "data/challenge_balls.pory"
	setwildbattle SPECIES_TORKOAL, 37, ITEM_NONE, 1, SPECIES_WHIMSICOTT, 37, ITEM_NONE, 2, MOVE_STEALTH_ROCK, MOVE_FLAME_CHARGE, MOVE_CURSE, MOVE_ROCK_TOMB, MOVE_TAILWIND, MOVE_GROWTH, MOVE_COTTON_SPORE, MOVE_GRASS_KNOT
# 126 "data/challenge_balls.pory"
	dowildbattle
# 127 "data/challenge_balls.pory"
	clearflag FLAG_NO_CATCHING
# 128 "data/challenge_balls.pory"
	clearflag FLAG_NO_RUNNING
# 129 "data/challenge_balls.pory"
	clearflag FLAG_SMART_WILD_AI
# 130 "data/challenge_balls.pory"
	finditem ITEM_ZOOM_LENS, 1
# 131 "data/challenge_balls.pory"
	setwildbattle SPECIES_BULBASAUR, 1
	goto Route110_EventScript_ChallengeBall2_1


Route117_EventScript_ChallengeBall1::
# 137 "data/challenge_balls.pory"
	lock
# 138 "data/challenge_balls.pory"
	msgbox Route117_EventScript_ChallengeBall1_Text_0, MSGBOX_YESNO
# 139 "data/challenge_balls.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route117_EventScript_ChallengeBall1_2
Route117_EventScript_ChallengeBall1_1:
# 152 "data/challenge_balls.pory"
	release
	return

Route117_EventScript_ChallengeBall1_2:
# 140 "data/challenge_balls.pory"
	setflag FLAG_NO_CATCHING
# 141 "data/challenge_balls.pory"
	setflag FLAG_NO_RUNNING
# 142 "data/challenge_balls.pory"
	setflag FLAG_SMART_WILD_AI
# 143 "data/challenge_balls.pory"
	settotemboost 1, 0, 0, 1
# 144 "data/challenge_balls.pory"
	setwildbattle SPECIES_CHERRIM, 27, ITEM_NONE, 0, SPECIES_BRELOOM_FRIBIAN, 27, ITEM_NONE, 1, MOVE_GROWTH, MOVE_TRAILBLAZE, MOVE_GRASSY_TERRAIN, MOVE_HEAL_PULSE, MOVE_MACH_PUNCH, MOVE_BULLET_SEED, MOVE_BULLDOZE, MOVE_HEADBUTT
# 145 "data/challenge_balls.pory"
	dowildbattle
# 146 "data/challenge_balls.pory"
	clearflag FLAG_NO_CATCHING
# 147 "data/challenge_balls.pory"
	clearflag FLAG_NO_RUNNING
# 148 "data/challenge_balls.pory"
	clearflag FLAG_SMART_WILD_AI
# 149 "data/challenge_balls.pory"
	finditem ITEM_LUCKY_EGG, 1
# 150 "data/challenge_balls.pory"
	setwildbattle SPECIES_BULBASAUR, 1
	goto Route117_EventScript_ChallengeBall1_1


Route112_EventScript_ChallengeBall1::
# 156 "data/challenge_balls.pory"
	lock
# 157 "data/challenge_balls.pory"
	msgbox Route112_EventScript_ChallengeBall1_Text_0, MSGBOX_YESNO
# 158 "data/challenge_balls.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route112_EventScript_ChallengeBall1_2
Route112_EventScript_ChallengeBall1_1:
# 171 "data/challenge_balls.pory"
	release
	return

Route112_EventScript_ChallengeBall1_2:
# 159 "data/challenge_balls.pory"
	setflag FLAG_NO_CATCHING
# 160 "data/challenge_balls.pory"
	setflag FLAG_NO_RUNNING
# 161 "data/challenge_balls.pory"
	setflag FLAG_SMART_WILD_AI
# 162 "data/challenge_balls.pory"
	settotemboost 1, 1
# 163 "data/challenge_balls.pory"
	setwildbattle SPECIES_OINKOLOGNE_FEMALE, 29, ITEM_NONE, 0, SPECIES_SKIPLOOM_EMERIBIAN, 29, ITEM_NONE, 2, MOVE_HEADBUTT, MOVE_STOMPING_TANTRUM, MOVE_TRAILBLAZE, MOVE_CURSE, MOVE_ICY_WIND, MOVE_ROUND, MOVE_DRAINING_KISS, MOVE_SING
# 164 "data/challenge_balls.pory"
	dowildbattle
# 165 "data/challenge_balls.pory"
	clearflag FLAG_NO_CATCHING
# 166 "data/challenge_balls.pory"
	clearflag FLAG_NO_RUNNING
# 167 "data/challenge_balls.pory"
	clearflag FLAG_SMART_WILD_AI
# 168 "data/challenge_balls.pory"
	finditem ITEM_LOADED_DICE, 1
# 169 "data/challenge_balls.pory"
	setwildbattle SPECIES_BULBASAUR, 1
	goto Route112_EventScript_ChallengeBall1_1


Route113_EventScript_ChallengeBall1::
# 175 "data/challenge_balls.pory"
	lock
# 176 "data/challenge_balls.pory"
	msgbox Route113_EventScript_ChallengeBall1_Text_0, MSGBOX_YESNO
# 177 "data/challenge_balls.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route113_EventScript_ChallengeBall1_2
Route113_EventScript_ChallengeBall1_1:
# 191 "data/challenge_balls.pory"
	release
	return

Route113_EventScript_ChallengeBall1_2:
# 178 "data/challenge_balls.pory"
	setflag FLAG_NO_CATCHING
# 179 "data/challenge_balls.pory"
	setflag FLAG_NO_RUNNING
# 180 "data/challenge_balls.pory"
	setflag FLAG_SMART_WILD_AI
# 181 "data/challenge_balls.pory"
	setvar VAR_STARTING_STATUS, 6
# 182 "data/challenge_balls.pory"
	setwildbattle SPECIES_ZANGOOSE, 31, ITEM_NONE, 1, SPECIES_SEVIPER, 31, ITEM_NONE, 2, MOVE_QUICK_ATTACK, MOVE_NIGHT_SLASH, MOVE_DOUBLE_KICK, MOVE_HONE_CLAWS, MOVE_BREAKING_SWIPE, MOVE_ASSURANCE, MOVE_POISON_FANG, MOVE_LICK
# 183 "data/challenge_balls.pory"
	dowildbattle
# 184 "data/challenge_balls.pory"
	setvar VAR_STARTING_STATUS, 0
# 185 "data/challenge_balls.pory"
	clearflag FLAG_NO_CATCHING
# 186 "data/challenge_balls.pory"
	clearflag FLAG_NO_RUNNING
# 187 "data/challenge_balls.pory"
	clearflag FLAG_SMART_WILD_AI
# 188 "data/challenge_balls.pory"
	finditem ITEM_WISE_GLASSES, 1
# 189 "data/challenge_balls.pory"
	setwildbattle SPECIES_BULBASAUR, 1
	goto Route113_EventScript_ChallengeBall1_1


Route113_EventScript_ChallengeBall2::
# 195 "data/challenge_balls.pory"
	lock
# 196 "data/challenge_balls.pory"
	msgbox Route113_EventScript_ChallengeBall2_Text_0, MSGBOX_YESNO
# 197 "data/challenge_balls.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route113_EventScript_ChallengeBall2_2
Route113_EventScript_ChallengeBall2_1:
# 211 "data/challenge_balls.pory"
	release
	return

Route113_EventScript_ChallengeBall2_2:
# 198 "data/challenge_balls.pory"
	setflag FLAG_NO_CATCHING
# 199 "data/challenge_balls.pory"
	setflag FLAG_NO_RUNNING
# 200 "data/challenge_balls.pory"
	setflag FLAG_SMART_WILD_AI
# 201 "data/challenge_balls.pory"
	setvar VAR_STARTING_STATUS, 5
# 202 "data/challenge_balls.pory"
	setwildbattle SPECIES_CLODSIRE, 31, ITEM_NONE, 1, SPECIES_QUAGSIRE, 31, ITEM_NONE, 2, MOVE_ACID_SPRAY, MOVE_CHILLING_WATER, MOVE_HELPING_HAND, MOVE_LOW_KICK, MOVE_SURF, MOVE_ENDURE, MOVE_RAIN_DANCE, MOVE_TOXIC_SPIKES
# 203 "data/challenge_balls.pory"
	dowildbattle
# 204 "data/challenge_balls.pory"
	setvar VAR_STARTING_STATUS, 0
# 205 "data/challenge_balls.pory"
	clearflag FLAG_NO_CATCHING
# 206 "data/challenge_balls.pory"
	clearflag FLAG_NO_RUNNING
# 207 "data/challenge_balls.pory"
	clearflag FLAG_SMART_WILD_AI
# 208 "data/challenge_balls.pory"
	finditem ITEM_MUSCLE_BAND, 1
# 209 "data/challenge_balls.pory"
	setwildbattle SPECIES_BULBASAUR, 1
	goto Route113_EventScript_ChallengeBall2_1


Route114_EventScript_ChallengeBall1::
# 215 "data/challenge_balls.pory"
	lock
# 216 "data/challenge_balls.pory"
	msgbox Route114_EventScript_ChallengeBall1_Text_0, MSGBOX_YESNO
# 217 "data/challenge_balls.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route114_EventScript_ChallengeBall1_2
Route114_EventScript_ChallengeBall1_1:
# 234 "data/challenge_balls.pory"
	release
	return

Route114_EventScript_ChallengeBall1_2:
# 218 "data/challenge_balls.pory"
	setflag FLAG_NO_CATCHING
# 219 "data/challenge_balls.pory"
	setflag FLAG_NO_RUNNING
# 220 "data/challenge_balls.pory"
	setflag FLAG_SMART_WILD_AI
# 221 "data/challenge_balls.pory"
	setweather WEATHER_RAIN
# 222 "data/challenge_balls.pory"
	doweather
# 223 "data/challenge_balls.pory"
	delay 60
# 224 "data/challenge_balls.pory"
	setwildbattle SPECIES_LUDICOLO, 32, ITEM_NONE, 1, SPECIES_ARMALDO, 32, ITEM_NONE, 2, MOVE_FAKE_OUT, MOVE_MEGA_DRAIN, MOVE_ASTONISH, MOVE_ENCORE, MOVE_X_SCISSOR, MOVE_ROCK_TOMB, MOVE_SHADOW_CLAW, MOVE_BODY_SLAM
# 225 "data/challenge_balls.pory"
	dowildbattle
# 226 "data/challenge_balls.pory"
	resetweather
# 227 "data/challenge_balls.pory"
	delay 60
# 228 "data/challenge_balls.pory"
	clearflag FLAG_NO_CATCHING
# 229 "data/challenge_balls.pory"
	clearflag FLAG_NO_RUNNING
# 230 "data/challenge_balls.pory"
	clearflag FLAG_SMART_WILD_AI
# 231 "data/challenge_balls.pory"
	finditem ITEM_SUPER_ROD, 1
# 232 "data/challenge_balls.pory"
	setwildbattle SPECIES_BULBASAUR, 1
	goto Route114_EventScript_ChallengeBall1_1


MeteorFalls_EventScript_ChallengeBall1::
# 238 "data/challenge_balls.pory"
	lock
# 239 "data/challenge_balls.pory"
	msgbox MeteorFalls_EventScript_ChallengeBall1_Text_0, MSGBOX_YESNO
# 240 "data/challenge_balls.pory"
	compare VAR_RESULT, 1
	goto_if_eq MeteorFalls_EventScript_ChallengeBall1_2
MeteorFalls_EventScript_ChallengeBall1_1:
# 254 "data/challenge_balls.pory"
	release
	return

MeteorFalls_EventScript_ChallengeBall1_2:
# 241 "data/challenge_balls.pory"
	setflag FLAG_NO_CATCHING
# 242 "data/challenge_balls.pory"
	setflag FLAG_NO_RUNNING
# 243 "data/challenge_balls.pory"
	setflag FLAG_SMART_WILD_AI
# 244 "data/challenge_balls.pory"
	setvar VAR_STARTING_STATUS, 1
# 245 "data/challenge_balls.pory"
	setwildbattle SPECIES_FLOETTE, 32, ITEM_NONE, 2, SPECIES_BELLIBOLT, 32, ITEM_NONE, 0, MOVE_NATURE_POWER, MOVE_SECRET_POWER, MOVE_MAGICAL_LEAF, MOVE_DRAINING_KISS, MOVE_VOLT_SWITCH, MOVE_CHILLING_WATER, MOVE_ACID_SPRAY, MOVE_MUD_SLAP
# 246 "data/challenge_balls.pory"
	dowildbattle
# 247 "data/challenge_balls.pory"
	setvar VAR_STARTING_STATUS, 0
# 248 "data/challenge_balls.pory"
	clearflag FLAG_NO_CATCHING
# 249 "data/challenge_balls.pory"
	clearflag FLAG_NO_RUNNING
# 250 "data/challenge_balls.pory"
	clearflag FLAG_SMART_WILD_AI
# 251 "data/challenge_balls.pory"
	finditem ITEM_ASSAULT_VEST, 1
# 252 "data/challenge_balls.pory"
	setwildbattle SPECIES_BULBASAUR, 1
	goto MeteorFalls_EventScript_ChallengeBall1_1


Route118_EventScript_ChallengeBall1::
# 258 "data/challenge_balls.pory"
	lock
# 259 "data/challenge_balls.pory"
	msgbox Route118_EventScript_ChallengeBall1_Text_0, MSGBOX_YESNO
# 260 "data/challenge_balls.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route118_EventScript_ChallengeBall1_2
Route118_EventScript_ChallengeBall1_1:
# 273 "data/challenge_balls.pory"
	release
	return

Route118_EventScript_ChallengeBall1_2:
# 261 "data/challenge_balls.pory"
	setflag FLAG_NO_CATCHING
# 262 "data/challenge_balls.pory"
	setflag FLAG_NO_RUNNING
# 263 "data/challenge_balls.pory"
	setflag FLAG_SMART_WILD_AI
# 264 "data/challenge_balls.pory"
	settotemboost 1, 0, 1, 0, 0, 1
# 265 "data/challenge_balls.pory"
	setwildbattle SPECIES_FEAROW, 37, ITEM_NONE, 2, SPECIES_ABSOL, 37, ITEM_NONE, 1, MOVE_FOCUS_ENERGY, MOVE_DRILL_RUN, MOVE_DRILL_PECK, MOVE_STEEL_WING, MOVE_NIGHT_SLASH, MOVE_DETECT, MOVE_SHADOW_CLAW, MOVE_THUNDER_WAVE
# 266 "data/challenge_balls.pory"
	dowildbattle
# 267 "data/challenge_balls.pory"
	clearflag FLAG_NO_CATCHING
# 268 "data/challenge_balls.pory"
	clearflag FLAG_NO_RUNNING
# 269 "data/challenge_balls.pory"
	clearflag FLAG_SMART_WILD_AI
# 270 "data/challenge_balls.pory"
	finditem ITEM_SCOPE_LENS, 1
# 271 "data/challenge_balls.pory"
	setwildbattle SPECIES_BULBASAUR, 1
	goto Route118_EventScript_ChallengeBall1_1


Route123_EventScript_ChallengeBall1::
# 277 "data/challenge_balls.pory"
	lock
# 278 "data/challenge_balls.pory"
	msgbox Route118_EventScript_ChallengeBall1_Text_0, MSGBOX_YESNO
# 279 "data/challenge_balls.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route123_EventScript_ChallengeBall1_2
Route123_EventScript_ChallengeBall1_1:
# 292 "data/challenge_balls.pory"
	release
	return

Route123_EventScript_ChallengeBall1_2:
# 280 "data/challenge_balls.pory"
	setflag FLAG_NO_CATCHING
# 281 "data/challenge_balls.pory"
	setflag FLAG_NO_RUNNING
# 282 "data/challenge_balls.pory"
	setflag FLAG_SMART_WILD_AI
# 283 "data/challenge_balls.pory"
	settotemboost 1, 1
# 284 "data/challenge_balls.pory"
	setwildbattle SPECIES_TITANEON, 38, ITEM_NONE, 2, SPECIES_NINETALES_EMERIBIAN, 38, ITEM_NONE, 0, MOVE_HEAL_ORDER, MOVE_PARABOLIC_CHARGE, MOVE_METAL_CLAW, MOVE_HELPING_HAND, MOVE_FLAME_BURST, MOVE_FIRE_SPIN, MOVE_WILL_O_WISP, MOVE_HEX
# 285 "data/challenge_balls.pory"
	dowildbattle
# 286 "data/challenge_balls.pory"
	clearflag FLAG_NO_CATCHING
# 287 "data/challenge_balls.pory"
	clearflag FLAG_NO_RUNNING
# 288 "data/challenge_balls.pory"
	clearflag FLAG_SMART_WILD_AI
# 289 "data/challenge_balls.pory"
	finditem ITEM_LEFTOVERS, 1
# 290 "data/challenge_balls.pory"
	setwildbattle SPECIES_BULBASAUR, 1
	goto Route123_EventScript_ChallengeBall1_1


Route120_EventScript_ChallengeBall1::
# 296 "data/challenge_balls.pory"
	lock
# 297 "data/challenge_balls.pory"
	msgbox Route120_EventScript_ChallengeBall1_Text_0, MSGBOX_YESNO
# 298 "data/challenge_balls.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route120_EventScript_ChallengeBall1_2
Route120_EventScript_ChallengeBall1_1:
# 311 "data/challenge_balls.pory"
	release
	return

Route120_EventScript_ChallengeBall1_2:
# 299 "data/challenge_balls.pory"
	setflag FLAG_NO_CATCHING
# 300 "data/challenge_balls.pory"
	setflag FLAG_NO_RUNNING
# 301 "data/challenge_balls.pory"
	setflag FLAG_SMART_WILD_AI
# 302 "data/challenge_balls.pory"
	settotemboost 1, 0, 1, 0, 0, 1
# 303 "data/challenge_balls.pory"
	setwildbattle SPECIES_WUGTRIO, 40, ITEM_NONE, 0, SPECIES_SLOWKING_GALARIAN, 40, ITEM_NONE, 1, MOVE_FLATTER, MOVE_TRIPLE_DIVE, MOVE_SUCKER_PUNCH, MOVE_HELPING_HAND, MOVE_SCALD, MOVE_PSYCHIC, MOVE_SLUDGE_BOMB, MOVE_SLACK_OFF
# 304 "data/challenge_balls.pory"
	dowildbattle
# 305 "data/challenge_balls.pory"
	clearflag FLAG_NO_CATCHING
# 306 "data/challenge_balls.pory"
	clearflag FLAG_NO_RUNNING
# 307 "data/challenge_balls.pory"
	clearflag FLAG_SMART_WILD_AI
# 308 "data/challenge_balls.pory"
	finditem ITEM_HEAVY_DUTY_BOOTS, 1
# 309 "data/challenge_balls.pory"
	setwildbattle SPECIES_BULBASAUR, 1
	goto Route120_EventScript_ChallengeBall1_1


MtPyre_Exterior_EventScript_ChallengeBall1::
# 315 "data/challenge_balls.pory"
	lock
# 316 "data/challenge_balls.pory"
	msgbox MtPyre_Exterior_EventScript_ChallengeBall1_Text_0, MSGBOX_YESNO
# 317 "data/challenge_balls.pory"
	compare VAR_RESULT, 1
	goto_if_eq MtPyre_Exterior_EventScript_ChallengeBall1_2
MtPyre_Exterior_EventScript_ChallengeBall1_1:
# 331 "data/challenge_balls.pory"
	release
	return

MtPyre_Exterior_EventScript_ChallengeBall1_2:
# 318 "data/challenge_balls.pory"
	setflag FLAG_NO_CATCHING
# 319 "data/challenge_balls.pory"
	setflag FLAG_NO_RUNNING
# 320 "data/challenge_balls.pory"
	setflag FLAG_SMART_WILD_AI
# 321 "data/challenge_balls.pory"
	setvar VAR_STARTING_STATUS, 9
# 322 "data/challenge_balls.pory"
	setwildbattle SPECIES_GOLEM_FRIBIAN, 43, ITEM_NONE, 2, SPECIES_NOCTOWL_EMERIBIAN, 43, ITEM_NONE, 2, MOVE_EARTHQUAKE, MOVE_FLAME_WHEEL, MOVE_SHADOW_PUNCH, MOVE_ROCK_BLAST, MOVE_HYPNOSIS, MOVE_NIGHT_DAZE, MOVE_EXTRASENSORY, MOVE_AIR_SLASH
# 323 "data/challenge_balls.pory"
	dowildbattle
# 324 "data/challenge_balls.pory"
	setvar VAR_STARTING_STATUS, 0
# 325 "data/challenge_balls.pory"
	clearflag FLAG_NO_CATCHING
# 326 "data/challenge_balls.pory"
	clearflag FLAG_NO_RUNNING
# 327 "data/challenge_balls.pory"
	clearflag FLAG_SMART_WILD_AI
# 328 "data/challenge_balls.pory"
	finditem ITEM_BLACK_SLUDGE, 1
# 329 "data/challenge_balls.pory"
	setwildbattle SPECIES_BULBASAUR, 1
	goto MtPyre_Exterior_EventScript_ChallengeBall1_1


LilycoveCity_EventScript_ChallengeBall1::
# 335 "data/challenge_balls.pory"
	lock
# 336 "data/challenge_balls.pory"
	msgbox LilycoveCity_EventScript_ChallengeBall1_Text_0, MSGBOX_YESNO
# 337 "data/challenge_balls.pory"
	compare VAR_RESULT, 1
	goto_if_eq LilycoveCity_EventScript_ChallengeBall1_2
LilycoveCity_EventScript_ChallengeBall1_1:
# 351 "data/challenge_balls.pory"
	release
	return

LilycoveCity_EventScript_ChallengeBall1_2:
# 338 "data/challenge_balls.pory"
	setflag FLAG_NO_CATCHING
# 339 "data/challenge_balls.pory"
	setflag FLAG_NO_RUNNING
# 340 "data/challenge_balls.pory"
	setflag FLAG_SMART_WILD_AI
# 341 "data/challenge_balls.pory"
	setvar VAR_STARTING_STATUS, 7
# 342 "data/challenge_balls.pory"
	setwildbattle SPECIES_ELDEGOSS, 44, ITEM_NONE, 0, SPECIES_MALAMAR, 44, ITEM_NONE, 0, MOVE_COTTON_GUARD, MOVE_GIGA_DRAIN, MOVE_LIGHT_SCREEN, MOVE_POLLEN_PUFF, MOVE_SUPERPOWER, MOVE_STORED_POWER, MOVE_AERIAL_ACE, MOVE_PROTECT
# 343 "data/challenge_balls.pory"
	dowildbattle
# 344 "data/challenge_balls.pory"
	setvar VAR_STARTING_STATUS, 0
# 345 "data/challenge_balls.pory"
	clearflag FLAG_NO_CATCHING
# 346 "data/challenge_balls.pory"
	clearflag FLAG_NO_RUNNING
# 347 "data/challenge_balls.pory"
	clearflag FLAG_SMART_WILD_AI
# 348 "data/challenge_balls.pory"
	finditem ITEM_ROCKY_HELMET, 1
# 349 "data/challenge_balls.pory"
	setwildbattle SPECIES_BULBASAUR, 1
	goto LilycoveCity_EventScript_ChallengeBall1_1


MossdeepCity_EventScript_ChallengeBall1::
# 355 "data/challenge_balls.pory"
	lock
# 356 "data/challenge_balls.pory"
	msgbox MossdeepCity_EventScript_ChallengeBall1_Text_0, MSGBOX_YESNO
# 357 "data/challenge_balls.pory"
	compare VAR_RESULT, 1
	goto_if_eq MossdeepCity_EventScript_ChallengeBall1_2
MossdeepCity_EventScript_ChallengeBall1_1:
# 371 "data/challenge_balls.pory"
	release
	return

MossdeepCity_EventScript_ChallengeBall1_2:
# 358 "data/challenge_balls.pory"
	setflag FLAG_NO_CATCHING
# 359 "data/challenge_balls.pory"
	setflag FLAG_NO_RUNNING
# 360 "data/challenge_balls.pory"
	setflag FLAG_SMART_WILD_AI
# 361 "data/challenge_balls.pory"
	setvar VAR_STARTING_STATUS, 6
# 362 "data/challenge_balls.pory"
	setwildbattle SPECIES_CONTAGEON, 50, ITEM_NONE, 2, SPECIES_SLAKING, 50, ITEM_NONE, 0, MOVE_PROTECT, MOVE_DIRE_CLAW, MOVE_SPECTRAL_THIEF, MOVE_TAUNT, MOVE_BODY_SLAM, MOVE_HAMMER_ARM, MOVE_PLAY_ROUGH, MOVE_SHADOW_CLAW
# 363 "data/challenge_balls.pory"
	dowildbattle
# 364 "data/challenge_balls.pory"
	setvar VAR_STARTING_STATUS, 0
# 365 "data/challenge_balls.pory"
	clearflag FLAG_NO_CATCHING
# 366 "data/challenge_balls.pory"
	clearflag FLAG_NO_RUNNING
# 367 "data/challenge_balls.pory"
	clearflag FLAG_SMART_WILD_AI
# 368 "data/challenge_balls.pory"
	finditem ITEM_FOCUS_SASH, 1
# 369 "data/challenge_balls.pory"
	setwildbattle SPECIES_BULBASAUR, 1
	goto MossdeepCity_EventScript_ChallengeBall1_1


Route127_EventScript_ChallengeBall1::
# 375 "data/challenge_balls.pory"
	lock
# 376 "data/challenge_balls.pory"
	msgbox Route127_EventScript_ChallengeBall1_Text_0, MSGBOX_YESNO
# 377 "data/challenge_balls.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route127_EventScript_ChallengeBall1_2
Route127_EventScript_ChallengeBall1_1:
# 394 "data/challenge_balls.pory"
	release
	return

Route127_EventScript_ChallengeBall1_2:
# 378 "data/challenge_balls.pory"
	setflag FLAG_NO_CATCHING
# 379 "data/challenge_balls.pory"
	setflag FLAG_NO_RUNNING
# 380 "data/challenge_balls.pory"
	setflag FLAG_SMART_WILD_AI
# 381 "data/challenge_balls.pory"
	setweather WEATHER_RAIN
# 382 "data/challenge_balls.pory"
	doweather
# 383 "data/challenge_balls.pory"
	delay 60
# 384 "data/challenge_balls.pory"
	setwildbattle SPECIES_KINGDRA, 54, ITEM_NONE, 1, SPECIES_CACTURNE, 54, ITEM_NONE, 2, MOVE_DRAGON_DANCE, MOVE_DRAGON_PULSE, MOVE_SURF, MOVE_FOCUS_ENERGY, MOVE_SPIKY_SHIELD, MOVE_RAIN_DANCE, MOVE_NEEDLE_ARM, MOVE_NIGHT_SLASH
# 385 "data/challenge_balls.pory"
	dowildbattle
# 386 "data/challenge_balls.pory"
	resetweather
# 387 "data/challenge_balls.pory"
	delay 60
# 388 "data/challenge_balls.pory"
	clearflag FLAG_NO_CATCHING
# 389 "data/challenge_balls.pory"
	clearflag FLAG_NO_RUNNING
# 390 "data/challenge_balls.pory"
	clearflag FLAG_SMART_WILD_AI
# 391 "data/challenge_balls.pory"
	finditem ITEM_SUPER_ROD, 1
# 392 "data/challenge_balls.pory"
	setwildbattle SPECIES_BULBASAUR, 1
	goto Route127_EventScript_ChallengeBall1_1


Route132_EventScript_ChallengeBall1::
# 398 "data/challenge_balls.pory"
	lock
# 399 "data/challenge_balls.pory"
	msgbox Route132_EventScript_ChallengeBall1_Text_0, MSGBOX_YESNO
# 400 "data/challenge_balls.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route132_EventScript_ChallengeBall1_2
Route132_EventScript_ChallengeBall1_1:
# 417 "data/challenge_balls.pory"
	release
	return

Route132_EventScript_ChallengeBall1_2:
# 401 "data/challenge_balls.pory"
	setflag FLAG_NO_CATCHING
# 402 "data/challenge_balls.pory"
	setflag FLAG_NO_RUNNING
# 403 "data/challenge_balls.pory"
	setflag FLAG_SMART_WILD_AI
# 404 "data/challenge_balls.pory"
	setweather WEATHER_SNOW
# 405 "data/challenge_balls.pory"
	doweather
# 406 "data/challenge_balls.pory"
	delay 60
# 407 "data/challenge_balls.pory"
	setwildbattle SPECIES_VANILLUXE, 57, ITEM_NONE, 0, SPECIES_TREVENANT_EMERIBIAN, 57, ITEM_NONE, 0, MOVE_FREEZE_DRY, MOVE_AURORA_VEIL, MOVE_HYPER_VOICE, MOVE_FLASH_CANNON, MOVE_SPIRIT_BREAK, MOVE_HORN_LEECH, MOVE_INGRAIN, MOVE_LEECH_SEED
# 408 "data/challenge_balls.pory"
	dowildbattle
# 409 "data/challenge_balls.pory"
	resetweather
# 410 "data/challenge_balls.pory"
	delay 60
# 411 "data/challenge_balls.pory"
	clearflag FLAG_NO_CATCHING
# 412 "data/challenge_balls.pory"
	clearflag FLAG_NO_RUNNING
# 413 "data/challenge_balls.pory"
	clearflag FLAG_SMART_WILD_AI
# 414 "data/challenge_balls.pory"
	finditem ITEM_SUPER_ROD, 1
# 415 "data/challenge_balls.pory"
	setwildbattle SPECIES_BULBASAUR, 1
	goto Route132_EventScript_ChallengeBall1_1


Route106_EventScript_ChallengeBall1_Text_0:
# 3 "data/challenge_balls.pory"
	.string "You feel grass growing beneath the\n"
	.string "sand.\p"
	.string "Reach out for the item?$"

GraniteCave_B1F_EventScript_ChallengeBall1_Text_0:
# 23 "data/challenge_balls.pory"
	.string "You feel a drip from the ceiling.\p"
	.string "Reach out for the item?$"

GraniteCave_B2F_EventScript_ChallengeBall1_Text_0:
# 42 "data/challenge_balls.pory"
	.string "You sense an enemy in a defensive\n"
	.string "position.\p"
	.string "Reach out for the item?$"

Route109_EventScript_ChallengeBall1_Text_0:
# 61 "data/challenge_balls.pory"
	.string "Enemies are clearly lying in wait.\p"
	.string "Reach out for the item?$"

Route103_EventScript_ChallengeBall1_Text_0:
# 80 "data/challenge_balls.pory"
	.string "You sense some real horsepower in wait.\p"
	.string "Reach out for the item?$"

Route110_EventScript_ChallengeBall1_Text_0:
# 99 "data/challenge_balls.pory"
	.string "You feel a circle of mysticism around.\p"
	.string "Reach out for the item?$"

Route110_EventScript_ChallengeBall2_Text_0:
# 119 "data/challenge_balls.pory"
	.string "You sense a drought approaching\n"
	.string "quickly.\p"
	.string "Reach out for the item?$"

Route117_EventScript_ChallengeBall1_Text_0:
# 138 "data/challenge_balls.pory"
	.string "You sense a drought approaching.\p"
	.string "Reach out for the item?$"

Route112_EventScript_ChallengeBall1_Text_0:
# 157 "data/challenge_balls.pory"
	.string "You see an enemy waiting in an\n"
	.string "offensive position.\p"
	.string "Reach out for the item?$"

Route113_EventScript_ChallengeBall1_Text_0:
# 176 "data/challenge_balls.pory"
	.string "You feel a magical aura.\p"
	.string "Reach out for the item?$"

Route113_EventScript_ChallengeBall2_Text_0:
# 196 "data/challenge_balls.pory"
	.string "You feel a trickster's presence.\p"
	.string "Reach out for the item?$"

Route114_EventScript_ChallengeBall1_Text_0:
# 216 "data/challenge_balls.pory"
	.string "You see clouds forming above.\p"
	.string "Reach out for the item?$"

MeteorFalls_EventScript_ChallengeBall1_Text_0:
# 239 "data/challenge_balls.pory"
	.string "You feel static running across the\n"
	.string "ground.\p"
	.string "Reach out for the item?$"

Route118_EventScript_ChallengeBall1_Text_0:
# 259 "data/challenge_balls.pory"
	.string "You sense enemies with sharp claws\n"
	.string "ready to strike.\p"
	.string "Reach out for the item?$"

Route120_EventScript_ChallengeBall1_Text_0:
# 297 "data/challenge_balls.pory"
	.string "After trudging through the mud you\n"
	.string "sense enemies nearby.\p"
	.string "Reach out for the item?$"

MtPyre_Exterior_EventScript_ChallengeBall1_Text_0:
# 316 "data/challenge_balls.pory"
	.string "A strong wind blows against you.\p"
	.string "Reach out for the item?$"

LilycoveCity_EventScript_ChallengeBall1_Text_0:
# 336 "data/challenge_balls.pory"
	.string "You feel a wondrous sensation as you\n"
	.string "approach.\p"
	.string "Reach out for the item?$"

MossdeepCity_EventScript_ChallengeBall1_Text_0:
# 356 "data/challenge_balls.pory"
	.string "You feel a magical sensation as you\n"
	.string "approach.\p"
	.string "Reach out for the item?$"

Route127_EventScript_ChallengeBall1_Text_0:
# 376 "data/challenge_balls.pory"
	.string "You sense an imminent downpour.\p"
	.string "Reach out for the item?$"

Route132_EventScript_ChallengeBall1_Text_0:
# 399 "data/challenge_balls.pory"
	.string "You see stray snowflakes falling.\p"
	.string "Reach out for the item?$"
