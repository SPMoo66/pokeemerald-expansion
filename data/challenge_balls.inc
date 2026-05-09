Route106_EventScript_ChallengeBall1::
# 2 "data/challenge_balls.pory"
	lock
# 3 "data/challenge_balls.pory"
	msgbox Route106_EventScript_ChallengeBall1_Text_0, MSGBOX_YESNO
# 4 "data/challenge_balls.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route106_EventScript_ChallengeBall1_2
Route106_EventScript_ChallengeBall1_1:
# 17 "data/challenge_balls.pory"
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
	setstartingstatus STARTING_STATUS_GRASSY_TERRAIN_TEMPORARY
# 9 "data/challenge_balls.pory"
	setwildbattle SPECIES_GLOOM_EMERIBIAN, 17, ITEM_NONE, 0, SPECIES_SKIDDO_EMERIBIAN, 17, ITEM_NONE, 2, MOVE_MEGA_DRAIN, MOVE_SOAK, MOVE_LIFE_DEW, MOVE_BUBBLE_BEAM, MOVE_TRAILBLAZE, MOVE_INGRAIN, MOVE_GROWL, MOVE_CAMOUFLAGE
# 10 "data/challenge_balls.pory"
	dowildbattle
# 11 "data/challenge_balls.pory"
	clearflag FLAG_NO_CATCHING
# 12 "data/challenge_balls.pory"
	clearflag FLAG_NO_RUNNING
# 13 "data/challenge_balls.pory"
	clearflag FLAG_SMART_WILD_AI
# 14 "data/challenge_balls.pory"
	finditem ITEM_ESCAPE_ROPE, 1
# 15 "data/challenge_balls.pory"
	setwildbattle SPECIES_BULBASAUR, 1
	goto Route106_EventScript_ChallengeBall1_1


GraniteCave_B1F_EventScript_ChallengeBall1::
# 21 "data/challenge_balls.pory"
	lock
# 22 "data/challenge_balls.pory"
	msgbox GraniteCave_B1F_EventScript_ChallengeBall1_Text_0, MSGBOX_YESNO
# 23 "data/challenge_balls.pory"
	compare VAR_RESULT, 1
	goto_if_eq GraniteCave_B1F_EventScript_ChallengeBall1_2
GraniteCave_B1F_EventScript_ChallengeBall1_1:
# 36 "data/challenge_balls.pory"
	release
	return

GraniteCave_B1F_EventScript_ChallengeBall1_2:
# 24 "data/challenge_balls.pory"
	setflag FLAG_NO_CATCHING
# 25 "data/challenge_balls.pory"
	setflag FLAG_NO_RUNNING
# 26 "data/challenge_balls.pory"
	setflag FLAG_SMART_WILD_AI
# 27 "data/challenge_balls.pory"
	settotemboost 1, 1
# 28 "data/challenge_balls.pory"
	setwildbattle SPECIES_LUVDISC, 18, ITEM_NONE, 1, SPECIES_POLIWHIRL, 18, ITEM_NONE, 2, MOVE_AQUA_JET, MOVE_ICY_WIND, MOVE_RAIN_DANCE, MOVE_WHIRLPOOL, MOVE_CHILLING_WATER, MOVE_MUD_SHOT, MOVE_LOW_SWEEP, MOVE_SWIFT
# 29 "data/challenge_balls.pory"
	dowildbattle
# 30 "data/challenge_balls.pory"
	clearflag FLAG_NO_CATCHING
# 31 "data/challenge_balls.pory"
	clearflag FLAG_NO_RUNNING
# 32 "data/challenge_balls.pory"
	clearflag FLAG_SMART_WILD_AI
# 33 "data/challenge_balls.pory"
	finditem ITEM_GOOD_ROD, 1
# 34 "data/challenge_balls.pory"
	setwildbattle SPECIES_BULBASAUR, 1
	goto GraniteCave_B1F_EventScript_ChallengeBall1_1


GraniteCave_B2F_EventScript_ChallengeBall1::
# 40 "data/challenge_balls.pory"
	lock
# 41 "data/challenge_balls.pory"
	msgbox GraniteCave_B2F_EventScript_ChallengeBall1_Text_0, MSGBOX_YESNO
# 42 "data/challenge_balls.pory"
	compare VAR_RESULT, 1
	goto_if_eq GraniteCave_B2F_EventScript_ChallengeBall1_2
GraniteCave_B2F_EventScript_ChallengeBall1_1:
# 55 "data/challenge_balls.pory"
	release
	return

GraniteCave_B2F_EventScript_ChallengeBall1_2:
# 43 "data/challenge_balls.pory"
	setflag FLAG_NO_CATCHING
# 44 "data/challenge_balls.pory"
	setflag FLAG_NO_RUNNING
# 45 "data/challenge_balls.pory"
	setflag FLAG_SMART_WILD_AI
# 46 "data/challenge_balls.pory"
	settotemboost 1, 0, 1, 0, 0, 1
# 47 "data/challenge_balls.pory"
	setwildbattle SPECIES_ARIADOS_EMERIBIAN, 28, ITEM_NONE, 0, SPECIES_SMOOCHUM, 28, ITEM_NONE, 0, MOVE_THUNDER_FANG, MOVE_POISON_STING, MOVE_HONE_CLAWS, MOVE_CONSTRICT, MOVE_DRAINING_KISS, MOVE_ICY_WIND, MOVE_CONFUSION, MOVE_WATER_PULSE
# 48 "data/challenge_balls.pory"
	dowildbattle
# 49 "data/challenge_balls.pory"
	clearflag FLAG_NO_CATCHING
# 50 "data/challenge_balls.pory"
	clearflag FLAG_NO_RUNNING
# 51 "data/challenge_balls.pory"
	clearflag FLAG_SMART_WILD_AI
# 52 "data/challenge_balls.pory"
	finditem ITEM_EXPERT_BELT, 1
# 53 "data/challenge_balls.pory"
	setwildbattle SPECIES_BULBASAUR, 1
	goto GraniteCave_B2F_EventScript_ChallengeBall1_1


Route109_EventScript_ChallengeBall1::
# 59 "data/challenge_balls.pory"
	lock
# 60 "data/challenge_balls.pory"
	msgbox Route109_EventScript_ChallengeBall1_Text_0, MSGBOX_YESNO
# 61 "data/challenge_balls.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route109_EventScript_ChallengeBall1_2
Route109_EventScript_ChallengeBall1_1:
# 74 "data/challenge_balls.pory"
	release
	return

Route109_EventScript_ChallengeBall1_2:
# 62 "data/challenge_balls.pory"
	setflag FLAG_NO_CATCHING
# 63 "data/challenge_balls.pory"
	setflag FLAG_NO_RUNNING
# 64 "data/challenge_balls.pory"
	setflag FLAG_SMART_WILD_AI
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
# 93 "data/challenge_balls.pory"
	release
	return

Route103_EventScript_ChallengeBall1_2:
# 81 "data/challenge_balls.pory"
	setflag FLAG_NO_CATCHING
# 82 "data/challenge_balls.pory"
	setflag FLAG_NO_RUNNING
# 83 "data/challenge_balls.pory"
	setflag FLAG_SMART_WILD_AI
# 84 "data/challenge_balls.pory"
	settotemboost 3, 0, 0, 1
# 85 "data/challenge_balls.pory"
	setwildbattle SPECIES_JIGGLYPUFF, 23, ITEM_NONE, 2, SPECIES_MUDBRAY, 23, ITEM_NONE, 1, MOVE_HELPING_HAND, MOVE_AMNESIA, MOVE_DRAINING_KISS, MOVE_DISABLE, MOVE_BULLDOZE, MOVE_ROCK_SMASH, MOVE_SMACK_DOWN, MOVE_STOMP
# 86 "data/challenge_balls.pory"
	dowildbattle
# 87 "data/challenge_balls.pory"
	clearflag FLAG_NO_CATCHING
# 88 "data/challenge_balls.pory"
	clearflag FLAG_NO_RUNNING
# 89 "data/challenge_balls.pory"
	clearflag FLAG_SMART_WILD_AI
# 90 "data/challenge_balls.pory"
	finditem ITEM_BRIGHT_POWDER, 1
# 91 "data/challenge_balls.pory"
	setwildbattle SPECIES_BULBASAUR, 1
	goto Route103_EventScript_ChallengeBall1_1


Route110_EventScript_ChallengeBall1::
# 97 "data/challenge_balls.pory"
	lock
# 98 "data/challenge_balls.pory"
	msgbox Route110_EventScript_ChallengeBall1_Text_0, MSGBOX_YESNO
# 99 "data/challenge_balls.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route110_EventScript_ChallengeBall1_2
Route110_EventScript_ChallengeBall1_1:
# 112 "data/challenge_balls.pory"
	release
	return

Route110_EventScript_ChallengeBall1_2:
# 100 "data/challenge_balls.pory"
	setflag FLAG_NO_CATCHING
# 101 "data/challenge_balls.pory"
	setflag FLAG_NO_RUNNING
# 102 "data/challenge_balls.pory"
	setflag FLAG_SMART_WILD_AI
# 103 "data/challenge_balls.pory"
	setstartingstatus STARTING_STATUS_PSYCHIC_TERRAIN_TEMPORARY
# 104 "data/challenge_balls.pory"
	setwildbattle SPECIES_GOTHORITA, 24, ITEM_NONE, 1, SPECIES_RIBOMBEE, 24, ITEM_NONE, 1, MOVE_CALM_MIND, MOVE_FLATTER, MOVE_PSYBEAM, MOVE_GRASS_KNOT, MOVE_NATURE_POWER, MOVE_SECRET_POWER, MOVE_STICKY_WEB, MOVE_DRAINING_KISS
# 105 "data/challenge_balls.pory"
	dowildbattle
# 106 "data/challenge_balls.pory"
	clearflag FLAG_NO_CATCHING
# 107 "data/challenge_balls.pory"
	clearflag FLAG_NO_RUNNING
# 108 "data/challenge_balls.pory"
	clearflag FLAG_SMART_WILD_AI
# 109 "data/challenge_balls.pory"
	finditem ITEM_WIDE_LENS, 1
# 110 "data/challenge_balls.pory"
	setwildbattle SPECIES_BULBASAUR, 1
	goto Route110_EventScript_ChallengeBall1_1


Route110_EventScript_ChallengeBall2::
# 116 "data/challenge_balls.pory"
	lock
# 117 "data/challenge_balls.pory"
	msgbox Route110_EventScript_ChallengeBall2_Text_0, MSGBOX_YESNO
# 118 "data/challenge_balls.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route110_EventScript_ChallengeBall2_2
Route110_EventScript_ChallengeBall2_1:
# 131 "data/challenge_balls.pory"
	release
	return

Route110_EventScript_ChallengeBall2_2:
# 119 "data/challenge_balls.pory"
	setflag FLAG_NO_CATCHING
# 120 "data/challenge_balls.pory"
	setflag FLAG_NO_RUNNING
# 121 "data/challenge_balls.pory"
	setflag FLAG_SMART_WILD_AI
# 122 "data/challenge_balls.pory"
	settotemboost 1, 0, 0, 3
# 123 "data/challenge_balls.pory"
	setwildbattle SPECIES_TORKOAL, 37, ITEM_NONE, 1, SPECIES_WHIMSICOTT, 37, ITEM_NONE, 2, MOVE_STEALTH_ROCK, MOVE_FLAME_CHARGE, MOVE_CURSE, MOVE_ROCK_TOMB, MOVE_TAILWIND, MOVE_GROWTH, MOVE_COTTON_SPORE, MOVE_GRASS_KNOT
# 124 "data/challenge_balls.pory"
	dowildbattle
# 125 "data/challenge_balls.pory"
	clearflag FLAG_NO_CATCHING
# 126 "data/challenge_balls.pory"
	clearflag FLAG_NO_RUNNING
# 127 "data/challenge_balls.pory"
	clearflag FLAG_SMART_WILD_AI
# 128 "data/challenge_balls.pory"
	finditem ITEM_ZOOM_LENS, 1
# 129 "data/challenge_balls.pory"
	setwildbattle SPECIES_BULBASAUR, 1
	goto Route110_EventScript_ChallengeBall2_1


Route117_EventScript_ChallengeBall1::
# 135 "data/challenge_balls.pory"
	lock
# 136 "data/challenge_balls.pory"
	msgbox Route117_EventScript_ChallengeBall1_Text_0, MSGBOX_YESNO
# 137 "data/challenge_balls.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route117_EventScript_ChallengeBall1_2
Route117_EventScript_ChallengeBall1_1:
# 150 "data/challenge_balls.pory"
	release
	return

Route117_EventScript_ChallengeBall1_2:
# 138 "data/challenge_balls.pory"
	setflag FLAG_NO_CATCHING
# 139 "data/challenge_balls.pory"
	setflag FLAG_NO_RUNNING
# 140 "data/challenge_balls.pory"
	setflag FLAG_SMART_WILD_AI
# 141 "data/challenge_balls.pory"
	settotemboost 1, 0, 0, 1
# 142 "data/challenge_balls.pory"
	setwildbattle SPECIES_CHERRIM, 27, ITEM_NONE, 0, SPECIES_BRELOOM_FRIBIAN, 27, ITEM_NONE, 1, MOVE_GROWTH, MOVE_TRAILBLAZE, MOVE_GRASSY_TERRAIN, MOVE_HEAL_PULSE, MOVE_MACH_PUNCH, MOVE_BULLET_SEED, MOVE_BULLDOZE, MOVE_HEADBUTT
# 143 "data/challenge_balls.pory"
	dowildbattle
# 144 "data/challenge_balls.pory"
	clearflag FLAG_NO_CATCHING
# 145 "data/challenge_balls.pory"
	clearflag FLAG_NO_RUNNING
# 146 "data/challenge_balls.pory"
	clearflag FLAG_SMART_WILD_AI
# 147 "data/challenge_balls.pory"
	finditem ITEM_LUCKY_EGG, 1
# 148 "data/challenge_balls.pory"
	setwildbattle SPECIES_BULBASAUR, 1
	goto Route117_EventScript_ChallengeBall1_1


Route112_EventScript_ChallengeBall1::
# 154 "data/challenge_balls.pory"
	lock
# 155 "data/challenge_balls.pory"
	msgbox Route112_EventScript_ChallengeBall1_Text_0, MSGBOX_YESNO
# 156 "data/challenge_balls.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route112_EventScript_ChallengeBall1_2
Route112_EventScript_ChallengeBall1_1:
# 169 "data/challenge_balls.pory"
	release
	return

Route112_EventScript_ChallengeBall1_2:
# 157 "data/challenge_balls.pory"
	setflag FLAG_NO_CATCHING
# 158 "data/challenge_balls.pory"
	setflag FLAG_NO_RUNNING
# 159 "data/challenge_balls.pory"
	setflag FLAG_SMART_WILD_AI
# 160 "data/challenge_balls.pory"
	settotemboost 1, 1
# 161 "data/challenge_balls.pory"
	setwildbattle SPECIES_OINKOLOGNE_F, 29, ITEM_NONE, 0, SPECIES_SKIPLOOM_EMERIBIAN, 29, ITEM_NONE, 2, MOVE_HEADBUTT, MOVE_STOMPING_TANTRUM, MOVE_TRAILBLAZE, MOVE_CURSE, MOVE_ICY_WIND, MOVE_ROUND, MOVE_DRAINING_KISS, MOVE_SING
# 162 "data/challenge_balls.pory"
	dowildbattle
# 163 "data/challenge_balls.pory"
	clearflag FLAG_NO_CATCHING
# 164 "data/challenge_balls.pory"
	clearflag FLAG_NO_RUNNING
# 165 "data/challenge_balls.pory"
	clearflag FLAG_SMART_WILD_AI
# 166 "data/challenge_balls.pory"
	finditem ITEM_LOADED_DICE, 1
# 167 "data/challenge_balls.pory"
	setwildbattle SPECIES_BULBASAUR, 1
	goto Route112_EventScript_ChallengeBall1_1


Route113_EventScript_ChallengeBall1::
# 173 "data/challenge_balls.pory"
	lock
# 174 "data/challenge_balls.pory"
	msgbox Route113_EventScript_ChallengeBall1_Text_0, MSGBOX_YESNO
# 175 "data/challenge_balls.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route113_EventScript_ChallengeBall1_2
Route113_EventScript_ChallengeBall1_1:
# 188 "data/challenge_balls.pory"
	release
	return

Route113_EventScript_ChallengeBall1_2:
# 176 "data/challenge_balls.pory"
	setflag FLAG_NO_CATCHING
# 177 "data/challenge_balls.pory"
	setflag FLAG_NO_RUNNING
# 178 "data/challenge_balls.pory"
	setflag FLAG_SMART_WILD_AI
# 179 "data/challenge_balls.pory"
	setstartingstatus STARTING_STATUS_MAGIC_ROOM_TEMPORARY
# 180 "data/challenge_balls.pory"
	setwildbattle SPECIES_ZANGOOSE, 31, ITEM_NONE, 1, SPECIES_SEVIPER, 31, ITEM_NONE, 2, MOVE_QUICK_ATTACK, MOVE_NIGHT_SLASH, MOVE_DOUBLE_KICK, MOVE_HONE_CLAWS, MOVE_BREAKING_SWIPE, MOVE_ASSURANCE, MOVE_POISON_FANG, MOVE_LICK
# 181 "data/challenge_balls.pory"
	dowildbattle
# 182 "data/challenge_balls.pory"
	clearflag FLAG_NO_CATCHING
# 183 "data/challenge_balls.pory"
	clearflag FLAG_NO_RUNNING
# 184 "data/challenge_balls.pory"
	clearflag FLAG_SMART_WILD_AI
# 185 "data/challenge_balls.pory"
	finditem ITEM_WISE_GLASSES, 1
# 186 "data/challenge_balls.pory"
	setwildbattle SPECIES_BULBASAUR, 1
	goto Route113_EventScript_ChallengeBall1_1


Route113_EventScript_ChallengeBall2::
# 192 "data/challenge_balls.pory"
	lock
# 193 "data/challenge_balls.pory"
	msgbox Route113_EventScript_ChallengeBall2_Text_0, MSGBOX_YESNO
# 194 "data/challenge_balls.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route113_EventScript_ChallengeBall2_2
Route113_EventScript_ChallengeBall2_1:
# 207 "data/challenge_balls.pory"
	release
	return

Route113_EventScript_ChallengeBall2_2:
# 195 "data/challenge_balls.pory"
	setflag FLAG_NO_CATCHING
# 196 "data/challenge_balls.pory"
	setflag FLAG_NO_RUNNING
# 197 "data/challenge_balls.pory"
	setflag FLAG_SMART_WILD_AI
# 198 "data/challenge_balls.pory"
	setstartingstatus STARTING_STATUS_TRICK_ROOM_TEMPORARY
# 199 "data/challenge_balls.pory"
	setwildbattle SPECIES_CLODSIRE, 31, ITEM_NONE, 1, SPECIES_QUAGSIRE, 31, ITEM_NONE, 2, MOVE_ACID_SPRAY, MOVE_CHILLING_WATER, MOVE_HELPING_HAND, MOVE_LOW_KICK, MOVE_SURF, MOVE_ENDURE, MOVE_RAIN_DANCE, MOVE_TOXIC_SPIKES
# 200 "data/challenge_balls.pory"
	dowildbattle
# 201 "data/challenge_balls.pory"
	clearflag FLAG_NO_CATCHING
# 202 "data/challenge_balls.pory"
	clearflag FLAG_NO_RUNNING
# 203 "data/challenge_balls.pory"
	clearflag FLAG_SMART_WILD_AI
# 204 "data/challenge_balls.pory"
	finditem ITEM_MUSCLE_BAND, 1
# 205 "data/challenge_balls.pory"
	setwildbattle SPECIES_BULBASAUR, 1
	goto Route113_EventScript_ChallengeBall2_1


Route114_EventScript_ChallengeBall1::
# 211 "data/challenge_balls.pory"
	lock
# 212 "data/challenge_balls.pory"
	msgbox Route114_EventScript_ChallengeBall1_Text_0, MSGBOX_YESNO
# 213 "data/challenge_balls.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route114_EventScript_ChallengeBall1_2
Route114_EventScript_ChallengeBall1_1:
# 229 "data/challenge_balls.pory"
	release
	return

Route114_EventScript_ChallengeBall1_2:
# 214 "data/challenge_balls.pory"
	setflag FLAG_NO_CATCHING
# 215 "data/challenge_balls.pory"
	setflag FLAG_NO_RUNNING
# 216 "data/challenge_balls.pory"
	setflag FLAG_SMART_WILD_AI
# 217 "data/challenge_balls.pory"
	call WeatherScript_SetAndDo_Rain
# 218 "data/challenge_balls.pory"
	delay 60
# 219 "data/challenge_balls.pory"
	setwildbattle SPECIES_LUDICOLO, 32, ITEM_NONE, 1, SPECIES_ARMALDO, 32, ITEM_NONE, 2, MOVE_FAKE_OUT, MOVE_MEGA_DRAIN, MOVE_ASTONISH, MOVE_ENCORE, MOVE_X_SCISSOR, MOVE_ROCK_TOMB, MOVE_SHADOW_CLAW, MOVE_BODY_SLAM
# 220 "data/challenge_balls.pory"
	dowildbattle
# 221 "data/challenge_balls.pory"
	resetweather
# 222 "data/challenge_balls.pory"
	delay 60
# 223 "data/challenge_balls.pory"
	clearflag FLAG_NO_CATCHING
# 224 "data/challenge_balls.pory"
	clearflag FLAG_NO_RUNNING
# 225 "data/challenge_balls.pory"
	clearflag FLAG_SMART_WILD_AI
# 226 "data/challenge_balls.pory"
	finditem ITEM_SUPER_ROD, 1
# 227 "data/challenge_balls.pory"
	setwildbattle SPECIES_BULBASAUR, 1
	goto Route114_EventScript_ChallengeBall1_1


MeteorFalls_EventScript_ChallengeBall1::
# 233 "data/challenge_balls.pory"
	lock
# 234 "data/challenge_balls.pory"
	msgbox MeteorFalls_EventScript_ChallengeBall1_Text_0, MSGBOX_YESNO
# 235 "data/challenge_balls.pory"
	compare VAR_RESULT, 1
	goto_if_eq MeteorFalls_EventScript_ChallengeBall1_2
MeteorFalls_EventScript_ChallengeBall1_1:
# 248 "data/challenge_balls.pory"
	release
	return

MeteorFalls_EventScript_ChallengeBall1_2:
# 236 "data/challenge_balls.pory"
	setflag FLAG_NO_CATCHING
# 237 "data/challenge_balls.pory"
	setflag FLAG_NO_RUNNING
# 238 "data/challenge_balls.pory"
	setflag FLAG_SMART_WILD_AI
# 239 "data/challenge_balls.pory"
	setstartingstatus STARTING_STATUS_ELECTRIC_TERRAIN_TEMPORARY
# 240 "data/challenge_balls.pory"
	setwildbattle SPECIES_FLOETTE, 32, ITEM_NONE, 2, SPECIES_BELLIBOLT, 32, ITEM_NONE, 0, MOVE_NATURE_POWER, MOVE_SECRET_POWER, MOVE_MAGICAL_LEAF, MOVE_DRAINING_KISS, MOVE_VOLT_SWITCH, MOVE_CHILLING_WATER, MOVE_ACID_SPRAY, MOVE_MUD_SLAP
# 241 "data/challenge_balls.pory"
	dowildbattle
# 242 "data/challenge_balls.pory"
	clearflag FLAG_NO_CATCHING
# 243 "data/challenge_balls.pory"
	clearflag FLAG_NO_RUNNING
# 244 "data/challenge_balls.pory"
	clearflag FLAG_SMART_WILD_AI
# 245 "data/challenge_balls.pory"
	finditem ITEM_ASSAULT_VEST, 1
# 246 "data/challenge_balls.pory"
	setwildbattle SPECIES_BULBASAUR, 1
	goto MeteorFalls_EventScript_ChallengeBall1_1


Route118_EventScript_ChallengeBall1::
# 252 "data/challenge_balls.pory"
	lock
# 253 "data/challenge_balls.pory"
	msgbox Route118_EventScript_ChallengeBall1_Text_0, MSGBOX_YESNO
# 254 "data/challenge_balls.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route118_EventScript_ChallengeBall1_2
Route118_EventScript_ChallengeBall1_1:
# 267 "data/challenge_balls.pory"
	release
	return

Route118_EventScript_ChallengeBall1_2:
# 255 "data/challenge_balls.pory"
	setflag FLAG_NO_CATCHING
# 256 "data/challenge_balls.pory"
	setflag FLAG_NO_RUNNING
# 257 "data/challenge_balls.pory"
	setflag FLAG_SMART_WILD_AI
# 258 "data/challenge_balls.pory"
	settotemboost 1, 0, 1, 0, 0, 1
# 259 "data/challenge_balls.pory"
	setwildbattle SPECIES_FEAROW, 38, ITEM_NONE, 2, SPECIES_ABSOL, 38, ITEM_NONE, 1, MOVE_FOCUS_ENERGY, MOVE_DRILL_RUN, MOVE_DRILL_PECK, MOVE_STEEL_WING, MOVE_NIGHT_SLASH, MOVE_DETECT, MOVE_SHADOW_CLAW, MOVE_THUNDER_WAVE
# 260 "data/challenge_balls.pory"
	dowildbattle
# 261 "data/challenge_balls.pory"
	clearflag FLAG_NO_CATCHING
# 262 "data/challenge_balls.pory"
	clearflag FLAG_NO_RUNNING
# 263 "data/challenge_balls.pory"
	clearflag FLAG_SMART_WILD_AI
# 264 "data/challenge_balls.pory"
	finditem ITEM_SCOPE_LENS, 1
# 265 "data/challenge_balls.pory"
	setwildbattle SPECIES_BULBASAUR, 1
	goto Route118_EventScript_ChallengeBall1_1


Route123_EventScript_ChallengeBall1::
# 271 "data/challenge_balls.pory"
	lock
# 272 "data/challenge_balls.pory"
	msgbox Route118_EventScript_ChallengeBall1_Text_0, MSGBOX_YESNO
# 273 "data/challenge_balls.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route123_EventScript_ChallengeBall1_2
Route123_EventScript_ChallengeBall1_1:
# 286 "data/challenge_balls.pory"
	release
	return

Route123_EventScript_ChallengeBall1_2:
# 274 "data/challenge_balls.pory"
	setflag FLAG_NO_CATCHING
# 275 "data/challenge_balls.pory"
	setflag FLAG_NO_RUNNING
# 276 "data/challenge_balls.pory"
	setflag FLAG_SMART_WILD_AI
# 277 "data/challenge_balls.pory"
	settotemboost 1, 1
# 278 "data/challenge_balls.pory"
	setwildbattle SPECIES_TITANEON, 40, ITEM_NONE, 2, SPECIES_NINETALES_EMERIBIAN, 40, ITEM_NONE, 0, MOVE_HEAL_ORDER, MOVE_PARABOLIC_CHARGE, MOVE_METAL_CLAW, MOVE_HELPING_HAND, MOVE_FLAME_BURST, MOVE_FIRE_SPIN, MOVE_WILL_O_WISP, MOVE_HEX
# 279 "data/challenge_balls.pory"
	dowildbattle
# 280 "data/challenge_balls.pory"
	clearflag FLAG_NO_CATCHING
# 281 "data/challenge_balls.pory"
	clearflag FLAG_NO_RUNNING
# 282 "data/challenge_balls.pory"
	clearflag FLAG_SMART_WILD_AI
# 283 "data/challenge_balls.pory"
	finditem ITEM_LEFTOVERS, 1
# 284 "data/challenge_balls.pory"
	setwildbattle SPECIES_BULBASAUR, 1
	goto Route123_EventScript_ChallengeBall1_1


Route120_EventScript_ChallengeBall1::
# 290 "data/challenge_balls.pory"
	lock
# 291 "data/challenge_balls.pory"
	msgbox Route120_EventScript_ChallengeBall1_Text_0, MSGBOX_YESNO
# 292 "data/challenge_balls.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route120_EventScript_ChallengeBall1_2
Route120_EventScript_ChallengeBall1_1:
# 305 "data/challenge_balls.pory"
	release
	return

Route120_EventScript_ChallengeBall1_2:
# 293 "data/challenge_balls.pory"
	setflag FLAG_NO_CATCHING
# 294 "data/challenge_balls.pory"
	setflag FLAG_NO_RUNNING
# 295 "data/challenge_balls.pory"
	setflag FLAG_SMART_WILD_AI
# 296 "data/challenge_balls.pory"
	settotemboost 1, 0, 1, 0, 0, 1
# 297 "data/challenge_balls.pory"
	setwildbattle SPECIES_WUGTRIO, 42, ITEM_NONE, 0, SPECIES_SLOWKING_GALAR, 42, ITEM_NONE, 1, MOVE_FLATTER, MOVE_TRIPLE_DIVE, MOVE_SUCKER_PUNCH, MOVE_HELPING_HAND, MOVE_SCALD, MOVE_PSYCHIC, MOVE_SLUDGE_BOMB, MOVE_SLACK_OFF
# 298 "data/challenge_balls.pory"
	dowildbattle
# 299 "data/challenge_balls.pory"
	clearflag FLAG_NO_CATCHING
# 300 "data/challenge_balls.pory"
	clearflag FLAG_NO_RUNNING
# 301 "data/challenge_balls.pory"
	clearflag FLAG_SMART_WILD_AI
# 302 "data/challenge_balls.pory"
	finditem ITEM_HEAVY_DUTY_BOOTS, 1
# 303 "data/challenge_balls.pory"
	setwildbattle SPECIES_BULBASAUR, 1
	goto Route120_EventScript_ChallengeBall1_1


MtPyre_Exterior_EventScript_ChallengeBall1::
# 309 "data/challenge_balls.pory"
	lock
# 310 "data/challenge_balls.pory"
	msgbox MtPyre_Exterior_EventScript_ChallengeBall1_Text_0, MSGBOX_YESNO
# 311 "data/challenge_balls.pory"
	compare VAR_RESULT, 1
	goto_if_eq MtPyre_Exterior_EventScript_ChallengeBall1_2
MtPyre_Exterior_EventScript_ChallengeBall1_1:
# 324 "data/challenge_balls.pory"
	release
	return

MtPyre_Exterior_EventScript_ChallengeBall1_2:
# 312 "data/challenge_balls.pory"
	setflag FLAG_NO_CATCHING
# 313 "data/challenge_balls.pory"
	setflag FLAG_NO_RUNNING
# 314 "data/challenge_balls.pory"
	setflag FLAG_SMART_WILD_AI
# 315 "data/challenge_balls.pory"
	setstartingstatus STARTING_STATUS_TAILWIND_OPPONENT_TEMPORARY
# 316 "data/challenge_balls.pory"
	setwildbattle SPECIES_GOLEM_FRIBIAN, 46, ITEM_NONE, 2, SPECIES_NOCTOWL_EMERIBIAN, 46, ITEM_NONE, 2, MOVE_EARTHQUAKE, MOVE_FLAME_WHEEL, MOVE_SHADOW_PUNCH, MOVE_ROCK_BLAST, MOVE_HYPNOSIS, MOVE_NIGHT_DAZE, MOVE_EXTRASENSORY, MOVE_AIR_SLASH
# 317 "data/challenge_balls.pory"
	dowildbattle
# 318 "data/challenge_balls.pory"
	clearflag FLAG_NO_CATCHING
# 319 "data/challenge_balls.pory"
	clearflag FLAG_NO_RUNNING
# 320 "data/challenge_balls.pory"
	clearflag FLAG_SMART_WILD_AI
# 321 "data/challenge_balls.pory"
	finditem ITEM_BLACK_SLUDGE, 1
# 322 "data/challenge_balls.pory"
	setwildbattle SPECIES_BULBASAUR, 1
	goto MtPyre_Exterior_EventScript_ChallengeBall1_1


LilycoveCity_EventScript_ChallengeBall1::
# 328 "data/challenge_balls.pory"
	lock
# 329 "data/challenge_balls.pory"
	msgbox LilycoveCity_EventScript_ChallengeBall1_Text_0, MSGBOX_YESNO
# 330 "data/challenge_balls.pory"
	compare VAR_RESULT, 1
	goto_if_eq LilycoveCity_EventScript_ChallengeBall1_2
LilycoveCity_EventScript_ChallengeBall1_1:
# 343 "data/challenge_balls.pory"
	release
	return

LilycoveCity_EventScript_ChallengeBall1_2:
# 331 "data/challenge_balls.pory"
	setflag FLAG_NO_CATCHING
# 332 "data/challenge_balls.pory"
	setflag FLAG_NO_RUNNING
# 333 "data/challenge_balls.pory"
	setflag FLAG_SMART_WILD_AI
# 334 "data/challenge_balls.pory"
	setstartingstatus STARTING_STATUS_WONDER_ROOM_TEMPORARY
# 335 "data/challenge_balls.pory"
	setwildbattle SPECIES_ELDEGOSS, 48, ITEM_NONE, 0, SPECIES_MALAMAR, 48, ITEM_NONE, 0, MOVE_COTTON_GUARD, MOVE_GIGA_DRAIN, MOVE_LIGHT_SCREEN, MOVE_POLLEN_PUFF, MOVE_SUPERPOWER, MOVE_STORED_POWER, MOVE_AERIAL_ACE, MOVE_PROTECT
# 336 "data/challenge_balls.pory"
	dowildbattle
# 337 "data/challenge_balls.pory"
	clearflag FLAG_NO_CATCHING
# 338 "data/challenge_balls.pory"
	clearflag FLAG_NO_RUNNING
# 339 "data/challenge_balls.pory"
	clearflag FLAG_SMART_WILD_AI
# 340 "data/challenge_balls.pory"
	finditem ITEM_ROCKY_HELMET, 1
# 341 "data/challenge_balls.pory"
	setwildbattle SPECIES_BULBASAUR, 1
	goto LilycoveCity_EventScript_ChallengeBall1_1


MossdeepCity_EventScript_ChallengeBall1::
# 347 "data/challenge_balls.pory"
	lock
# 348 "data/challenge_balls.pory"
	msgbox MossdeepCity_EventScript_ChallengeBall1_Text_0, MSGBOX_YESNO
# 349 "data/challenge_balls.pory"
	compare VAR_RESULT, 1
	goto_if_eq MossdeepCity_EventScript_ChallengeBall1_2
MossdeepCity_EventScript_ChallengeBall1_1:
# 362 "data/challenge_balls.pory"
	release
	return

MossdeepCity_EventScript_ChallengeBall1_2:
# 350 "data/challenge_balls.pory"
	setflag FLAG_NO_CATCHING
# 351 "data/challenge_balls.pory"
	setflag FLAG_NO_RUNNING
# 352 "data/challenge_balls.pory"
	setflag FLAG_SMART_WILD_AI
# 353 "data/challenge_balls.pory"
	setstartingstatus STARTING_STATUS_MAGIC_ROOM_TEMPORARY
# 354 "data/challenge_balls.pory"
	setwildbattle SPECIES_CONTAGEON, 53, ITEM_NONE, 2, SPECIES_SLAKING, 53, ITEM_NONE, 0, MOVE_PROTECT, MOVE_DIRE_CLAW, MOVE_SPECTRAL_THIEF, MOVE_TAUNT, MOVE_BODY_SLAM, MOVE_HAMMER_ARM, MOVE_PLAY_ROUGH, MOVE_SHADOW_CLAW
# 355 "data/challenge_balls.pory"
	dowildbattle
# 356 "data/challenge_balls.pory"
	clearflag FLAG_NO_CATCHING
# 357 "data/challenge_balls.pory"
	clearflag FLAG_NO_RUNNING
# 358 "data/challenge_balls.pory"
	clearflag FLAG_SMART_WILD_AI
# 359 "data/challenge_balls.pory"
	finditem ITEM_FOCUS_SASH, 1
# 360 "data/challenge_balls.pory"
	setwildbattle SPECIES_BULBASAUR, 1
	goto MossdeepCity_EventScript_ChallengeBall1_1


Route127_EventScript_ChallengeBall1::
# 366 "data/challenge_balls.pory"
	lock
# 367 "data/challenge_balls.pory"
	msgbox Route127_EventScript_ChallengeBall1_Text_0, MSGBOX_YESNO
# 368 "data/challenge_balls.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route127_EventScript_ChallengeBall1_2
Route127_EventScript_ChallengeBall1_1:
# 384 "data/challenge_balls.pory"
	release
	return

Route127_EventScript_ChallengeBall1_2:
# 369 "data/challenge_balls.pory"
	setflag FLAG_NO_CATCHING
# 370 "data/challenge_balls.pory"
	setflag FLAG_NO_RUNNING
# 371 "data/challenge_balls.pory"
	setflag FLAG_SMART_WILD_AI
# 372 "data/challenge_balls.pory"
	call WeatherScript_SetAndDo_Rain
# 373 "data/challenge_balls.pory"
	delay 60
# 374 "data/challenge_balls.pory"
	setwildbattle SPECIES_KINGDRA, 55, ITEM_NONE, 1, SPECIES_CACTURNE, 55, ITEM_NONE, 2, MOVE_DRAGON_DANCE, MOVE_DRAGON_PULSE, MOVE_SURF, MOVE_FOCUS_ENERGY, MOVE_SPIKY_SHIELD, MOVE_RAIN_DANCE, MOVE_NEEDLE_ARM, MOVE_NIGHT_SLASH
# 375 "data/challenge_balls.pory"
	dowildbattle
# 376 "data/challenge_balls.pory"
	resetweather
# 377 "data/challenge_balls.pory"
	delay 60
# 378 "data/challenge_balls.pory"
	clearflag FLAG_NO_CATCHING
# 379 "data/challenge_balls.pory"
	clearflag FLAG_NO_RUNNING
# 380 "data/challenge_balls.pory"
	clearflag FLAG_SMART_WILD_AI
# 381 "data/challenge_balls.pory"
	finditem ITEM_LIFE_ORB, 1
# 382 "data/challenge_balls.pory"
	setwildbattle SPECIES_BULBASAUR, 1
	goto Route127_EventScript_ChallengeBall1_1


Route132_EventScript_ChallengeBall1::
# 388 "data/challenge_balls.pory"
	lock
# 389 "data/challenge_balls.pory"
	msgbox Route132_EventScript_ChallengeBall1_Text_0, MSGBOX_YESNO
# 390 "data/challenge_balls.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route132_EventScript_ChallengeBall1_2
Route132_EventScript_ChallengeBall1_1:
# 406 "data/challenge_balls.pory"
	release
	return

Route132_EventScript_ChallengeBall1_2:
# 391 "data/challenge_balls.pory"
	setflag FLAG_NO_CATCHING
# 392 "data/challenge_balls.pory"
	setflag FLAG_NO_RUNNING
# 393 "data/challenge_balls.pory"
	setflag FLAG_SMART_WILD_AI
# 394 "data/challenge_balls.pory"
	call WeatherScript_SetAndDo_Snow
# 395 "data/challenge_balls.pory"
	delay 60
# 396 "data/challenge_balls.pory"
	setwildbattle SPECIES_VANILLUXE, 57, ITEM_NONE, 0, SPECIES_TREVENANT_EMERIBIAN, 57, ITEM_NONE, 0, MOVE_FREEZE_DRY, MOVE_AURORA_VEIL, MOVE_HYPER_VOICE, MOVE_FLASH_CANNON, MOVE_SPIRIT_BREAK, MOVE_HORN_LEECH, MOVE_INGRAIN, MOVE_LEECH_SEED
# 397 "data/challenge_balls.pory"
	dowildbattle
# 398 "data/challenge_balls.pory"
	resetweather
# 399 "data/challenge_balls.pory"
	delay 60
# 400 "data/challenge_balls.pory"
	clearflag FLAG_NO_CATCHING
# 401 "data/challenge_balls.pory"
	clearflag FLAG_NO_RUNNING
# 402 "data/challenge_balls.pory"
	clearflag FLAG_SMART_WILD_AI
# 403 "data/challenge_balls.pory"
	finditem ITEM_CHOICE_BAND, 1
# 404 "data/challenge_balls.pory"
	setwildbattle SPECIES_BULBASAUR, 1
	goto Route132_EventScript_ChallengeBall1_1


Route133_EventScript_ChallengeBall1::
# 410 "data/challenge_balls.pory"
	lock
# 411 "data/challenge_balls.pory"
	msgbox Route133_EventScript_ChallengeBall1_Text_0, MSGBOX_YESNO
# 412 "data/challenge_balls.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route133_EventScript_ChallengeBall1_2
Route133_EventScript_ChallengeBall1_1:
# 428 "data/challenge_balls.pory"
	release
	return

Route133_EventScript_ChallengeBall1_2:
# 413 "data/challenge_balls.pory"
	setflag FLAG_NO_CATCHING
# 414 "data/challenge_balls.pory"
	setflag FLAG_NO_RUNNING
# 415 "data/challenge_balls.pory"
	setflag FLAG_SMART_WILD_AI
# 416 "data/challenge_balls.pory"
	call WeatherScript_SetAndDo_Drought
# 417 "data/challenge_balls.pory"
	delay 60
# 418 "data/challenge_balls.pory"
	setwildbattle SPECIES_SOLFLORA, 57, ITEM_NONE, 0, SPECIES_SCREAM_TAIL, 57, ITEM_NONE, 0, MOVE_TORCH_SONG, MOVE_DAZZLING_GLEAM, MOVE_SOLAR_BEAM, MOVE_TRAILBLAZE, MOVE_PLAY_ROUGH, MOVE_PSYCHIC_FANGS, MOVE_CRUNCH, MOVE_GYRO_BALL
# 419 "data/challenge_balls.pory"
	dowildbattle
# 420 "data/challenge_balls.pory"
	resetweather
# 421 "data/challenge_balls.pory"
	delay 60
# 422 "data/challenge_balls.pory"
	clearflag FLAG_NO_CATCHING
# 423 "data/challenge_balls.pory"
	clearflag FLAG_NO_RUNNING
# 424 "data/challenge_balls.pory"
	clearflag FLAG_SMART_WILD_AI
# 425 "data/challenge_balls.pory"
	finditem ITEM_CHOICE_SCARF, 1
# 426 "data/challenge_balls.pory"
	setwildbattle SPECIES_BULBASAUR, 1
	goto Route133_EventScript_ChallengeBall1_1


Route134_EventScript_ChallengeBall1::
# 432 "data/challenge_balls.pory"
	lock
# 433 "data/challenge_balls.pory"
	msgbox Route134_EventScript_ChallengeBall1_Text_0, MSGBOX_YESNO
# 434 "data/challenge_balls.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route134_EventScript_ChallengeBall1_2
Route134_EventScript_ChallengeBall1_1:
# 447 "data/challenge_balls.pory"
	release
	return

Route134_EventScript_ChallengeBall1_2:
# 435 "data/challenge_balls.pory"
	setflag FLAG_NO_CATCHING
# 436 "data/challenge_balls.pory"
	setflag FLAG_NO_RUNNING
# 437 "data/challenge_balls.pory"
	setflag FLAG_SMART_WILD_AI
# 438 "data/challenge_balls.pory"
	setstartingstatus STARTING_STATUS_ELECTRIC_TERRAIN_TEMPORARY
# 439 "data/challenge_balls.pory"
	setwildbattle SPECIES_SAWSBUCK, 57, ITEM_NONE, 2, SPECIES_IRON_HANDS, 57, ITEM_NONE, 0, MOVE_NATURE_POWER, MOVE_HORN_LEECH, MOVE_ZEN_HEADBUTT, MOVE_BODY_SLAM, MOVE_WILD_CHARGE, MOVE_CLOSE_COMBAT, MOVE_HEAVY_SLAM, MOVE_FAKE_OUT
# 440 "data/challenge_balls.pory"
	dowildbattle
# 441 "data/challenge_balls.pory"
	clearflag FLAG_NO_CATCHING
# 442 "data/challenge_balls.pory"
	clearflag FLAG_NO_RUNNING
# 443 "data/challenge_balls.pory"
	clearflag FLAG_SMART_WILD_AI
# 444 "data/challenge_balls.pory"
	finditem ITEM_CHOICE_SPECS, 1
# 445 "data/challenge_balls.pory"
	setwildbattle SPECIES_BULBASAUR, 1
	goto Route134_EventScript_ChallengeBall1_1


Route119_EventScript_ChallengeBall1::
# 451 "data/challenge_balls.pory"
	lock
# 452 "data/challenge_balls.pory"
	msgbox Route119_EventScript_ChallengeBall1_Text_0, MSGBOX_YESNO
# 453 "data/challenge_balls.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route119_EventScript_ChallengeBall1_2
Route119_EventScript_ChallengeBall1_1:
# 466 "data/challenge_balls.pory"
	release
	return

Route119_EventScript_ChallengeBall1_2:
# 454 "data/challenge_balls.pory"
	setflag FLAG_NO_CATCHING
# 455 "data/challenge_balls.pory"
	setflag FLAG_NO_RUNNING
# 456 "data/challenge_balls.pory"
	setflag FLAG_SMART_WILD_AI
# 457 "data/challenge_balls.pory"
	settotemboost 1, 0, 1, 0, 0, 1
# 458 "data/challenge_balls.pory"
	setwildbattle SPECIES_KINGAMBIT, 60, ITEM_NONE, 0, SPECIES_LOPUNNY_EMERIBIAN, 60, ITEM_NONE, 2, MOVE_KOWTOW_CLEAVE, MOVE_IRON_HEAD, MOVE_IRON_DEFENSE, MOVE_SHADOW_CLAW, MOVE_SUPERPOWER, MOVE_ICE_HAMMER, MOVE_ME_FIRST, MOVE_STRENGTH
# 459 "data/challenge_balls.pory"
	dowildbattle
# 460 "data/challenge_balls.pory"
	clearflag FLAG_NO_CATCHING
# 461 "data/challenge_balls.pory"
	clearflag FLAG_NO_RUNNING
# 462 "data/challenge_balls.pory"
	clearflag FLAG_SMART_WILD_AI
# 463 "data/challenge_balls.pory"
	finditem ITEM_WEAKNESS_POLICY, 1
# 464 "data/challenge_balls.pory"
	setwildbattle SPECIES_BULBASAUR, 1
	goto Route119_EventScript_ChallengeBall1_1


Route106_EventScript_ChallengeBall1_Text_0:
# 3 "data/challenge_balls.pory"
	.string "You feel grass growing beneath the\n"
	.string "sand.\p"
	.string "Reach out for the item?$"

GraniteCave_B1F_EventScript_ChallengeBall1_Text_0:
# 22 "data/challenge_balls.pory"
	.string "You feel a drip from the ceiling.\p"
	.string "Reach out for the item?$"

GraniteCave_B2F_EventScript_ChallengeBall1_Text_0:
# 41 "data/challenge_balls.pory"
	.string "You sense an enemy in a defensive\n"
	.string "position.\p"
	.string "Reach out for the item?$"

Route109_EventScript_ChallengeBall1_Text_0:
# 60 "data/challenge_balls.pory"
	.string "Enemies are clearly lying in wait.\p"
	.string "Reach out for the item?$"

Route103_EventScript_ChallengeBall1_Text_0:
# 79 "data/challenge_balls.pory"
	.string "You sense some real horsepower in wait.\p"
	.string "Reach out for the item?$"

Route110_EventScript_ChallengeBall1_Text_0:
# 98 "data/challenge_balls.pory"
	.string "You feel a circle of mysticism around.\p"
	.string "Reach out for the item?$"

Route110_EventScript_ChallengeBall2_Text_0:
# 117 "data/challenge_balls.pory"
	.string "You sense a drought approaching\n"
	.string "quickly.\p"
	.string "Reach out for the item?$"

Route117_EventScript_ChallengeBall1_Text_0:
# 136 "data/challenge_balls.pory"
	.string "You sense a drought approaching.\p"
	.string "Reach out for the item?$"

Route112_EventScript_ChallengeBall1_Text_0:
# 155 "data/challenge_balls.pory"
	.string "You see an enemy waiting in an\n"
	.string "offensive position.\p"
	.string "Reach out for the item?$"

Route113_EventScript_ChallengeBall1_Text_0:
# 174 "data/challenge_balls.pory"
	.string "You feel a magical aura.\p"
	.string "Reach out for the item?$"

Route113_EventScript_ChallengeBall2_Text_0:
# 193 "data/challenge_balls.pory"
	.string "You feel a trickster's presence.\p"
	.string "Reach out for the item?$"

Route114_EventScript_ChallengeBall1_Text_0:
# 212 "data/challenge_balls.pory"
	.string "You see clouds forming above.\p"
	.string "Reach out for the item?$"

MeteorFalls_EventScript_ChallengeBall1_Text_0:
# 234 "data/challenge_balls.pory"
	.string "You feel static running across the\n"
	.string "ground.\p"
	.string "Reach out for the item?$"

Route118_EventScript_ChallengeBall1_Text_0:
# 253 "data/challenge_balls.pory"
	.string "You sense enemies with sharp claws\n"
	.string "ready to strike.\p"
	.string "Reach out for the item?$"

Route120_EventScript_ChallengeBall1_Text_0:
# 291 "data/challenge_balls.pory"
	.string "After trudging through the mud you\n"
	.string "sense enemies nearby.\p"
	.string "Reach out for the item?$"

MtPyre_Exterior_EventScript_ChallengeBall1_Text_0:
# 310 "data/challenge_balls.pory"
	.string "A strong wind blows against you.\p"
	.string "Reach out for the item?$"

LilycoveCity_EventScript_ChallengeBall1_Text_0:
# 329 "data/challenge_balls.pory"
	.string "You feel a wondrous sensation as you\n"
	.string "approach.\p"
	.string "Reach out for the item?$"

MossdeepCity_EventScript_ChallengeBall1_Text_0:
# 348 "data/challenge_balls.pory"
	.string "You feel a magical sensation as you\n"
	.string "approach.\p"
	.string "Reach out for the item?$"

Route127_EventScript_ChallengeBall1_Text_0:
# 367 "data/challenge_balls.pory"
	.string "You sense an imminent downpour.\p"
	.string "Reach out for the item?$"

Route132_EventScript_ChallengeBall1_Text_0:
# 389 "data/challenge_balls.pory"
	.string "You see stray snowflakes falling.\p"
	.string "Reach out for the item?$"

Route133_EventScript_ChallengeBall1_Text_0:
# 411 "data/challenge_balls.pory"
	.string "You enter an area lacking in humidity.\p"
	.string "Reach out for the item?$"

Route134_EventScript_ChallengeBall1_Text_0:
# 433 "data/challenge_balls.pory"
	.string "An electric current runs through the\n"
	.string "sand.\p"
	.string "Reach out for the item?$"

Route119_EventScript_ChallengeBall1_Text_0:
# 452 "data/challenge_balls.pory"
	.string "Enemies manipulating their own power\n"
	.string "are near.\p"
	.string "Reach out for the item?$"
