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
	setwildbattle SPECIES_OINKOLOGNE_F, 29, ITEM_NONE, 0, SPECIES_SKIPLOOM_EMERIBIAN, 29, ITEM_NONE, 2, MOVE_HEADBUTT, MOVE_STOMPING_TANTRUM, MOVE_TRAILBLAZE, MOVE_CURSE, MOVE_ICY_WIND, MOVE_ROUND, MOVE_DRAINING_KISS, MOVE_SING
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
# 233 "data/challenge_balls.pory"
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
	call WeatherScript_SetAndDo_Rain
# 222 "data/challenge_balls.pory"
	delay 60
# 223 "data/challenge_balls.pory"
	setwildbattle SPECIES_LUDICOLO, 32, ITEM_NONE, 1, SPECIES_ARMALDO, 32, ITEM_NONE, 2, MOVE_FAKE_OUT, MOVE_MEGA_DRAIN, MOVE_ASTONISH, MOVE_ENCORE, MOVE_X_SCISSOR, MOVE_ROCK_TOMB, MOVE_SHADOW_CLAW, MOVE_BODY_SLAM
# 224 "data/challenge_balls.pory"
	dowildbattle
# 225 "data/challenge_balls.pory"
	resetweather
# 226 "data/challenge_balls.pory"
	delay 60
# 227 "data/challenge_balls.pory"
	clearflag FLAG_NO_CATCHING
# 228 "data/challenge_balls.pory"
	clearflag FLAG_NO_RUNNING
# 229 "data/challenge_balls.pory"
	clearflag FLAG_SMART_WILD_AI
# 230 "data/challenge_balls.pory"
	finditem ITEM_SUPER_ROD, 1
# 231 "data/challenge_balls.pory"
	setwildbattle SPECIES_BULBASAUR, 1
	goto Route114_EventScript_ChallengeBall1_1


MeteorFalls_EventScript_ChallengeBall1::
# 237 "data/challenge_balls.pory"
	lock
# 238 "data/challenge_balls.pory"
	msgbox MeteorFalls_EventScript_ChallengeBall1_Text_0, MSGBOX_YESNO
# 239 "data/challenge_balls.pory"
	compare VAR_RESULT, 1
	goto_if_eq MeteorFalls_EventScript_ChallengeBall1_2
MeteorFalls_EventScript_ChallengeBall1_1:
# 253 "data/challenge_balls.pory"
	release
	return

MeteorFalls_EventScript_ChallengeBall1_2:
# 240 "data/challenge_balls.pory"
	setflag FLAG_NO_CATCHING
# 241 "data/challenge_balls.pory"
	setflag FLAG_NO_RUNNING
# 242 "data/challenge_balls.pory"
	setflag FLAG_SMART_WILD_AI
# 243 "data/challenge_balls.pory"
	setvar VAR_STARTING_STATUS, 1
# 244 "data/challenge_balls.pory"
	setwildbattle SPECIES_FLOETTE, 32, ITEM_NONE, 2, SPECIES_BELLIBOLT, 32, ITEM_NONE, 0, MOVE_NATURE_POWER, MOVE_SECRET_POWER, MOVE_MAGICAL_LEAF, MOVE_DRAINING_KISS, MOVE_VOLT_SWITCH, MOVE_CHILLING_WATER, MOVE_ACID_SPRAY, MOVE_MUD_SLAP
# 245 "data/challenge_balls.pory"
	dowildbattle
# 246 "data/challenge_balls.pory"
	setvar VAR_STARTING_STATUS, 0
# 247 "data/challenge_balls.pory"
	clearflag FLAG_NO_CATCHING
# 248 "data/challenge_balls.pory"
	clearflag FLAG_NO_RUNNING
# 249 "data/challenge_balls.pory"
	clearflag FLAG_SMART_WILD_AI
# 250 "data/challenge_balls.pory"
	finditem ITEM_ASSAULT_VEST, 1
# 251 "data/challenge_balls.pory"
	setwildbattle SPECIES_BULBASAUR, 1
	goto MeteorFalls_EventScript_ChallengeBall1_1


Route118_EventScript_ChallengeBall1::
# 257 "data/challenge_balls.pory"
	lock
# 258 "data/challenge_balls.pory"
	msgbox Route118_EventScript_ChallengeBall1_Text_0, MSGBOX_YESNO
# 259 "data/challenge_balls.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route118_EventScript_ChallengeBall1_2
Route118_EventScript_ChallengeBall1_1:
# 272 "data/challenge_balls.pory"
	release
	return

Route118_EventScript_ChallengeBall1_2:
# 260 "data/challenge_balls.pory"
	setflag FLAG_NO_CATCHING
# 261 "data/challenge_balls.pory"
	setflag FLAG_NO_RUNNING
# 262 "data/challenge_balls.pory"
	setflag FLAG_SMART_WILD_AI
# 263 "data/challenge_balls.pory"
	settotemboost 1, 0, 1, 0, 0, 1
# 264 "data/challenge_balls.pory"
	setwildbattle SPECIES_FEAROW, 37, ITEM_NONE, 2, SPECIES_ABSOL, 37, ITEM_NONE, 1, MOVE_FOCUS_ENERGY, MOVE_DRILL_RUN, MOVE_DRILL_PECK, MOVE_STEEL_WING, MOVE_NIGHT_SLASH, MOVE_DETECT, MOVE_SHADOW_CLAW, MOVE_THUNDER_WAVE
# 265 "data/challenge_balls.pory"
	dowildbattle
# 266 "data/challenge_balls.pory"
	clearflag FLAG_NO_CATCHING
# 267 "data/challenge_balls.pory"
	clearflag FLAG_NO_RUNNING
# 268 "data/challenge_balls.pory"
	clearflag FLAG_SMART_WILD_AI
# 269 "data/challenge_balls.pory"
	finditem ITEM_SCOPE_LENS, 1
# 270 "data/challenge_balls.pory"
	setwildbattle SPECIES_BULBASAUR, 1
	goto Route118_EventScript_ChallengeBall1_1


Route123_EventScript_ChallengeBall1::
# 276 "data/challenge_balls.pory"
	lock
# 277 "data/challenge_balls.pory"
	msgbox Route118_EventScript_ChallengeBall1_Text_0, MSGBOX_YESNO
# 278 "data/challenge_balls.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route123_EventScript_ChallengeBall1_2
Route123_EventScript_ChallengeBall1_1:
# 291 "data/challenge_balls.pory"
	release
	return

Route123_EventScript_ChallengeBall1_2:
# 279 "data/challenge_balls.pory"
	setflag FLAG_NO_CATCHING
# 280 "data/challenge_balls.pory"
	setflag FLAG_NO_RUNNING
# 281 "data/challenge_balls.pory"
	setflag FLAG_SMART_WILD_AI
# 282 "data/challenge_balls.pory"
	settotemboost 1, 1
# 283 "data/challenge_balls.pory"
	setwildbattle SPECIES_TITANEON, 39, ITEM_NONE, 2, SPECIES_NINETALES_EMERIBIAN, 39, ITEM_NONE, 0, MOVE_HEAL_ORDER, MOVE_PARABOLIC_CHARGE, MOVE_METAL_CLAW, MOVE_HELPING_HAND, MOVE_FLAME_BURST, MOVE_FIRE_SPIN, MOVE_WILL_O_WISP, MOVE_HEX
# 284 "data/challenge_balls.pory"
	dowildbattle
# 285 "data/challenge_balls.pory"
	clearflag FLAG_NO_CATCHING
# 286 "data/challenge_balls.pory"
	clearflag FLAG_NO_RUNNING
# 287 "data/challenge_balls.pory"
	clearflag FLAG_SMART_WILD_AI
# 288 "data/challenge_balls.pory"
	finditem ITEM_LEFTOVERS, 1
# 289 "data/challenge_balls.pory"
	setwildbattle SPECIES_BULBASAUR, 1
	goto Route123_EventScript_ChallengeBall1_1


Route120_EventScript_ChallengeBall1::
# 295 "data/challenge_balls.pory"
	lock
# 296 "data/challenge_balls.pory"
	msgbox Route120_EventScript_ChallengeBall1_Text_0, MSGBOX_YESNO
# 297 "data/challenge_balls.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route120_EventScript_ChallengeBall1_2
Route120_EventScript_ChallengeBall1_1:
# 310 "data/challenge_balls.pory"
	release
	return

Route120_EventScript_ChallengeBall1_2:
# 298 "data/challenge_balls.pory"
	setflag FLAG_NO_CATCHING
# 299 "data/challenge_balls.pory"
	setflag FLAG_NO_RUNNING
# 300 "data/challenge_balls.pory"
	setflag FLAG_SMART_WILD_AI
# 301 "data/challenge_balls.pory"
	settotemboost 1, 0, 1, 0, 0, 1
# 302 "data/challenge_balls.pory"
	setwildbattle SPECIES_WUGTRIO, 41, ITEM_NONE, 0, SPECIES_SLOWKING_GALAR, 41, ITEM_NONE, 1, MOVE_FLATTER, MOVE_TRIPLE_DIVE, MOVE_SUCKER_PUNCH, MOVE_HELPING_HAND, MOVE_SCALD, MOVE_PSYCHIC, MOVE_SLUDGE_BOMB, MOVE_SLACK_OFF
# 303 "data/challenge_balls.pory"
	dowildbattle
# 304 "data/challenge_balls.pory"
	clearflag FLAG_NO_CATCHING
# 305 "data/challenge_balls.pory"
	clearflag FLAG_NO_RUNNING
# 306 "data/challenge_balls.pory"
	clearflag FLAG_SMART_WILD_AI
# 307 "data/challenge_balls.pory"
	finditem ITEM_HEAVY_DUTY_BOOTS, 1
# 308 "data/challenge_balls.pory"
	setwildbattle SPECIES_BULBASAUR, 1
	goto Route120_EventScript_ChallengeBall1_1


MtPyre_Exterior_EventScript_ChallengeBall1::
# 314 "data/challenge_balls.pory"
	lock
# 315 "data/challenge_balls.pory"
	msgbox MtPyre_Exterior_EventScript_ChallengeBall1_Text_0, MSGBOX_YESNO
# 316 "data/challenge_balls.pory"
	compare VAR_RESULT, 1
	goto_if_eq MtPyre_Exterior_EventScript_ChallengeBall1_2
MtPyre_Exterior_EventScript_ChallengeBall1_1:
# 330 "data/challenge_balls.pory"
	release
	return

MtPyre_Exterior_EventScript_ChallengeBall1_2:
# 317 "data/challenge_balls.pory"
	setflag FLAG_NO_CATCHING
# 318 "data/challenge_balls.pory"
	setflag FLAG_NO_RUNNING
# 319 "data/challenge_balls.pory"
	setflag FLAG_SMART_WILD_AI
# 320 "data/challenge_balls.pory"
	setvar VAR_STARTING_STATUS, 9
# 321 "data/challenge_balls.pory"
	setwildbattle SPECIES_GOLEM_FRIBIAN, 43, ITEM_NONE, 2, SPECIES_NOCTOWL_EMERIBIAN, 43, ITEM_NONE, 2, MOVE_EARTHQUAKE, MOVE_FLAME_WHEEL, MOVE_SHADOW_PUNCH, MOVE_ROCK_BLAST, MOVE_HYPNOSIS, MOVE_NIGHT_DAZE, MOVE_EXTRASENSORY, MOVE_AIR_SLASH
# 322 "data/challenge_balls.pory"
	dowildbattle
# 323 "data/challenge_balls.pory"
	setvar VAR_STARTING_STATUS, 0
# 324 "data/challenge_balls.pory"
	clearflag FLAG_NO_CATCHING
# 325 "data/challenge_balls.pory"
	clearflag FLAG_NO_RUNNING
# 326 "data/challenge_balls.pory"
	clearflag FLAG_SMART_WILD_AI
# 327 "data/challenge_balls.pory"
	finditem ITEM_BLACK_SLUDGE, 1
# 328 "data/challenge_balls.pory"
	setwildbattle SPECIES_BULBASAUR, 1
	goto MtPyre_Exterior_EventScript_ChallengeBall1_1


LilycoveCity_EventScript_ChallengeBall1::
# 334 "data/challenge_balls.pory"
	lock
# 335 "data/challenge_balls.pory"
	msgbox LilycoveCity_EventScript_ChallengeBall1_Text_0, MSGBOX_YESNO
# 336 "data/challenge_balls.pory"
	compare VAR_RESULT, 1
	goto_if_eq LilycoveCity_EventScript_ChallengeBall1_2
LilycoveCity_EventScript_ChallengeBall1_1:
# 350 "data/challenge_balls.pory"
	release
	return

LilycoveCity_EventScript_ChallengeBall1_2:
# 337 "data/challenge_balls.pory"
	setflag FLAG_NO_CATCHING
# 338 "data/challenge_balls.pory"
	setflag FLAG_NO_RUNNING
# 339 "data/challenge_balls.pory"
	setflag FLAG_SMART_WILD_AI
# 340 "data/challenge_balls.pory"
	setvar VAR_STARTING_STATUS, 7
# 341 "data/challenge_balls.pory"
	setwildbattle SPECIES_ELDEGOSS, 44, ITEM_NONE, 0, SPECIES_MALAMAR, 44, ITEM_NONE, 0, MOVE_COTTON_GUARD, MOVE_GIGA_DRAIN, MOVE_LIGHT_SCREEN, MOVE_POLLEN_PUFF, MOVE_SUPERPOWER, MOVE_STORED_POWER, MOVE_AERIAL_ACE, MOVE_PROTECT
# 342 "data/challenge_balls.pory"
	dowildbattle
# 343 "data/challenge_balls.pory"
	setvar VAR_STARTING_STATUS, 0
# 344 "data/challenge_balls.pory"
	clearflag FLAG_NO_CATCHING
# 345 "data/challenge_balls.pory"
	clearflag FLAG_NO_RUNNING
# 346 "data/challenge_balls.pory"
	clearflag FLAG_SMART_WILD_AI
# 347 "data/challenge_balls.pory"
	finditem ITEM_ROCKY_HELMET, 1
# 348 "data/challenge_balls.pory"
	setwildbattle SPECIES_BULBASAUR, 1
	goto LilycoveCity_EventScript_ChallengeBall1_1


MossdeepCity_EventScript_ChallengeBall1::
# 354 "data/challenge_balls.pory"
	lock
# 355 "data/challenge_balls.pory"
	msgbox MossdeepCity_EventScript_ChallengeBall1_Text_0, MSGBOX_YESNO
# 356 "data/challenge_balls.pory"
	compare VAR_RESULT, 1
	goto_if_eq MossdeepCity_EventScript_ChallengeBall1_2
MossdeepCity_EventScript_ChallengeBall1_1:
# 370 "data/challenge_balls.pory"
	release
	return

MossdeepCity_EventScript_ChallengeBall1_2:
# 357 "data/challenge_balls.pory"
	setflag FLAG_NO_CATCHING
# 358 "data/challenge_balls.pory"
	setflag FLAG_NO_RUNNING
# 359 "data/challenge_balls.pory"
	setflag FLAG_SMART_WILD_AI
# 360 "data/challenge_balls.pory"
	setvar VAR_STARTING_STATUS, 6
# 361 "data/challenge_balls.pory"
	setwildbattle SPECIES_CONTAGEON, 52, ITEM_NONE, 2, SPECIES_SLAKING, 52, ITEM_NONE, 0, MOVE_PROTECT, MOVE_DIRE_CLAW, MOVE_SPECTRAL_THIEF, MOVE_TAUNT, MOVE_BODY_SLAM, MOVE_HAMMER_ARM, MOVE_PLAY_ROUGH, MOVE_SHADOW_CLAW
# 362 "data/challenge_balls.pory"
	dowildbattle
# 363 "data/challenge_balls.pory"
	setvar VAR_STARTING_STATUS, 0
# 364 "data/challenge_balls.pory"
	clearflag FLAG_NO_CATCHING
# 365 "data/challenge_balls.pory"
	clearflag FLAG_NO_RUNNING
# 366 "data/challenge_balls.pory"
	clearflag FLAG_SMART_WILD_AI
# 367 "data/challenge_balls.pory"
	finditem ITEM_FOCUS_SASH, 1
# 368 "data/challenge_balls.pory"
	setwildbattle SPECIES_BULBASAUR, 1
	goto MossdeepCity_EventScript_ChallengeBall1_1


Route127_EventScript_ChallengeBall1::
# 374 "data/challenge_balls.pory"
	lock
# 375 "data/challenge_balls.pory"
	msgbox Route127_EventScript_ChallengeBall1_Text_0, MSGBOX_YESNO
# 376 "data/challenge_balls.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route127_EventScript_ChallengeBall1_2
Route127_EventScript_ChallengeBall1_1:
# 392 "data/challenge_balls.pory"
	release
	return

Route127_EventScript_ChallengeBall1_2:
# 377 "data/challenge_balls.pory"
	setflag FLAG_NO_CATCHING
# 378 "data/challenge_balls.pory"
	setflag FLAG_NO_RUNNING
# 379 "data/challenge_balls.pory"
	setflag FLAG_SMART_WILD_AI
# 380 "data/challenge_balls.pory"
	call WeatherScript_SetAndDo_Rain
# 381 "data/challenge_balls.pory"
	delay 60
# 382 "data/challenge_balls.pory"
	setwildbattle SPECIES_KINGDRA, 54, ITEM_NONE, 1, SPECIES_CACTURNE, 54, ITEM_NONE, 2, MOVE_DRAGON_DANCE, MOVE_DRAGON_PULSE, MOVE_SURF, MOVE_FOCUS_ENERGY, MOVE_SPIKY_SHIELD, MOVE_RAIN_DANCE, MOVE_NEEDLE_ARM, MOVE_NIGHT_SLASH
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
	finditem ITEM_LIFE_ORB, 1
# 390 "data/challenge_balls.pory"
	setwildbattle SPECIES_BULBASAUR, 1
	goto Route127_EventScript_ChallengeBall1_1


Route132_EventScript_ChallengeBall1::
# 396 "data/challenge_balls.pory"
	lock
# 397 "data/challenge_balls.pory"
	msgbox Route132_EventScript_ChallengeBall1_Text_0, MSGBOX_YESNO
# 398 "data/challenge_balls.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route132_EventScript_ChallengeBall1_2
Route132_EventScript_ChallengeBall1_1:
# 414 "data/challenge_balls.pory"
	release
	return

Route132_EventScript_ChallengeBall1_2:
# 399 "data/challenge_balls.pory"
	setflag FLAG_NO_CATCHING
# 400 "data/challenge_balls.pory"
	setflag FLAG_NO_RUNNING
# 401 "data/challenge_balls.pory"
	setflag FLAG_SMART_WILD_AI
# 402 "data/challenge_balls.pory"
	call WeatherScript_SetAndDo_Snow
# 403 "data/challenge_balls.pory"
	delay 60
# 404 "data/challenge_balls.pory"
	setwildbattle SPECIES_VANILLUXE, 57, ITEM_NONE, 0, SPECIES_TREVENANT_EMERIBIAN, 57, ITEM_NONE, 0, MOVE_FREEZE_DRY, MOVE_AURORA_VEIL, MOVE_HYPER_VOICE, MOVE_FLASH_CANNON, MOVE_SPIRIT_BREAK, MOVE_HORN_LEECH, MOVE_INGRAIN, MOVE_LEECH_SEED
# 405 "data/challenge_balls.pory"
	dowildbattle
# 406 "data/challenge_balls.pory"
	resetweather
# 407 "data/challenge_balls.pory"
	delay 60
# 408 "data/challenge_balls.pory"
	clearflag FLAG_NO_CATCHING
# 409 "data/challenge_balls.pory"
	clearflag FLAG_NO_RUNNING
# 410 "data/challenge_balls.pory"
	clearflag FLAG_SMART_WILD_AI
# 411 "data/challenge_balls.pory"
	finditem ITEM_CHOICE_BAND, 1
# 412 "data/challenge_balls.pory"
	setwildbattle SPECIES_BULBASAUR, 1
	goto Route132_EventScript_ChallengeBall1_1


Route133_EventScript_ChallengeBall1::
# 418 "data/challenge_balls.pory"
	lock
# 419 "data/challenge_balls.pory"
	msgbox Route133_EventScript_ChallengeBall1_Text_0, MSGBOX_YESNO
# 420 "data/challenge_balls.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route133_EventScript_ChallengeBall1_2
Route133_EventScript_ChallengeBall1_1:
# 436 "data/challenge_balls.pory"
	release
	return

Route133_EventScript_ChallengeBall1_2:
# 421 "data/challenge_balls.pory"
	setflag FLAG_NO_CATCHING
# 422 "data/challenge_balls.pory"
	setflag FLAG_NO_RUNNING
# 423 "data/challenge_balls.pory"
	setflag FLAG_SMART_WILD_AI
# 424 "data/challenge_balls.pory"
	call WeatherScript_SetAndDo_Drought
# 425 "data/challenge_balls.pory"
	delay 60
# 426 "data/challenge_balls.pory"
	setwildbattle SPECIES_SOLFLORA, 57, ITEM_NONE, 0, SPECIES_SCREAM_TAIL, 57, ITEM_NONE, 0, MOVE_TORCH_SONG, MOVE_DAZZLING_GLEAM, MOVE_SOLAR_BEAM, MOVE_TRAILBLAZE, MOVE_PLAY_ROUGH, MOVE_PSYCHIC_FANGS, MOVE_CRUNCH, MOVE_GYRO_BALL
# 427 "data/challenge_balls.pory"
	dowildbattle
# 428 "data/challenge_balls.pory"
	resetweather
# 429 "data/challenge_balls.pory"
	delay 60
# 430 "data/challenge_balls.pory"
	clearflag FLAG_NO_CATCHING
# 431 "data/challenge_balls.pory"
	clearflag FLAG_NO_RUNNING
# 432 "data/challenge_balls.pory"
	clearflag FLAG_SMART_WILD_AI
# 433 "data/challenge_balls.pory"
	finditem ITEM_CHOICE_SCARF, 1
# 434 "data/challenge_balls.pory"
	setwildbattle SPECIES_BULBASAUR, 1
	goto Route133_EventScript_ChallengeBall1_1


Route134_EventScript_ChallengeBall1::
# 440 "data/challenge_balls.pory"
	lock
# 441 "data/challenge_balls.pory"
	msgbox Route134_EventScript_ChallengeBall1_Text_0, MSGBOX_YESNO
# 442 "data/challenge_balls.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route134_EventScript_ChallengeBall1_2
Route134_EventScript_ChallengeBall1_1:
# 456 "data/challenge_balls.pory"
	release
	return

Route134_EventScript_ChallengeBall1_2:
# 443 "data/challenge_balls.pory"
	setflag FLAG_NO_CATCHING
# 444 "data/challenge_balls.pory"
	setflag FLAG_NO_RUNNING
# 445 "data/challenge_balls.pory"
	setflag FLAG_SMART_WILD_AI
# 446 "data/challenge_balls.pory"
	setvar VAR_STARTING_STATUS, 1
# 447 "data/challenge_balls.pory"
	setwildbattle SPECIES_SAWSBUCK, 57, ITEM_NONE, 2, SPECIES_IRON_HANDS, 57, ITEM_NONE, 0, MOVE_NATURE_POWER, MOVE_HORN_LEECH, MOVE_ZEN_HEADBUTT, MOVE_BODY_SLAM, MOVE_WILD_CHARGE, MOVE_CLOSE_COMBAT, MOVE_HEAVY_SLAM, MOVE_FAKE_OUT
# 448 "data/challenge_balls.pory"
	dowildbattle
# 449 "data/challenge_balls.pory"
	setvar VAR_STARTING_STATUS, 0
# 450 "data/challenge_balls.pory"
	clearflag FLAG_NO_CATCHING
# 451 "data/challenge_balls.pory"
	clearflag FLAG_NO_RUNNING
# 452 "data/challenge_balls.pory"
	clearflag FLAG_SMART_WILD_AI
# 453 "data/challenge_balls.pory"
	finditem ITEM_CHOICE_SPECS, 1
# 454 "data/challenge_balls.pory"
	setwildbattle SPECIES_BULBASAUR, 1
	goto Route134_EventScript_ChallengeBall1_1


Route119_EventScript_ChallengeBall1::
# 460 "data/challenge_balls.pory"
	lock
# 461 "data/challenge_balls.pory"
	msgbox Route119_EventScript_ChallengeBall1_Text_0, MSGBOX_YESNO
# 462 "data/challenge_balls.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route119_EventScript_ChallengeBall1_2
Route119_EventScript_ChallengeBall1_1:
# 475 "data/challenge_balls.pory"
	release
	return

Route119_EventScript_ChallengeBall1_2:
# 463 "data/challenge_balls.pory"
	setflag FLAG_NO_CATCHING
# 464 "data/challenge_balls.pory"
	setflag FLAG_NO_RUNNING
# 465 "data/challenge_balls.pory"
	setflag FLAG_SMART_WILD_AI
# 466 "data/challenge_balls.pory"
	settotemboost 1, 0, 1, 0, 0, 1
# 467 "data/challenge_balls.pory"
	setwildbattle SPECIES_KINGAMBIT, 60, ITEM_NONE, 0, SPECIES_LOPUNNY_EMERIBIAN, 60, ITEM_NONE, 2, MOVE_KOWTOW_CLEAVE, MOVE_IRON_HEAD, MOVE_IRON_DEFENSE, MOVE_SHADOW_CLAW, MOVE_SUPERPOWER, MOVE_ICE_HAMMER, MOVE_ME_FIRST, MOVE_STRENGTH
# 468 "data/challenge_balls.pory"
	dowildbattle
# 469 "data/challenge_balls.pory"
	clearflag FLAG_NO_CATCHING
# 470 "data/challenge_balls.pory"
	clearflag FLAG_NO_RUNNING
# 471 "data/challenge_balls.pory"
	clearflag FLAG_SMART_WILD_AI
# 472 "data/challenge_balls.pory"
	finditem ITEM_WEAKNESS_POLICY, 1
# 473 "data/challenge_balls.pory"
	setwildbattle SPECIES_BULBASAUR, 1
	goto Route119_EventScript_ChallengeBall1_1


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
# 238 "data/challenge_balls.pory"
	.string "You feel static running across the\n"
	.string "ground.\p"
	.string "Reach out for the item?$"

Route118_EventScript_ChallengeBall1_Text_0:
# 258 "data/challenge_balls.pory"
	.string "You sense enemies with sharp claws\n"
	.string "ready to strike.\p"
	.string "Reach out for the item?$"

Route120_EventScript_ChallengeBall1_Text_0:
# 296 "data/challenge_balls.pory"
	.string "After trudging through the mud you\n"
	.string "sense enemies nearby.\p"
	.string "Reach out for the item?$"

MtPyre_Exterior_EventScript_ChallengeBall1_Text_0:
# 315 "data/challenge_balls.pory"
	.string "A strong wind blows against you.\p"
	.string "Reach out for the item?$"

LilycoveCity_EventScript_ChallengeBall1_Text_0:
# 335 "data/challenge_balls.pory"
	.string "You feel a wondrous sensation as you\n"
	.string "approach.\p"
	.string "Reach out for the item?$"

MossdeepCity_EventScript_ChallengeBall1_Text_0:
# 355 "data/challenge_balls.pory"
	.string "You feel a magical sensation as you\n"
	.string "approach.\p"
	.string "Reach out for the item?$"

Route127_EventScript_ChallengeBall1_Text_0:
# 375 "data/challenge_balls.pory"
	.string "You sense an imminent downpour.\p"
	.string "Reach out for the item?$"

Route132_EventScript_ChallengeBall1_Text_0:
# 397 "data/challenge_balls.pory"
	.string "You see stray snowflakes falling.\p"
	.string "Reach out for the item?$"

Route133_EventScript_ChallengeBall1_Text_0:
# 419 "data/challenge_balls.pory"
	.string "You enter an area lacking in humidity.\p"
	.string "Reach out for the item?$"

Route134_EventScript_ChallengeBall1_Text_0:
# 441 "data/challenge_balls.pory"
	.string "An electric current runs through the\n"
	.string "sand.\p"
	.string "Reach out for the item?$"

Route119_EventScript_ChallengeBall1_Text_0:
# 461 "data/challenge_balls.pory"
	.string "Enemies manipulating their own power\n"
	.string "are near.\p"
	.string "Reach out for the item?$"
