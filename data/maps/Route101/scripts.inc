# 1 "data/maps/Route101/scripts.pory"

# 2 "data/maps/Route101/scripts.pory"
.set LOCALID_BIRCH, 2
# 3 "data/maps/Route101/scripts.pory"
.set LOCALID_ZIGZAGOON, 4
# 4 "data/maps/Route101/scripts.pory"

# 5 "data/maps/Route101/scripts.pory"
Route101_EventScript_StartBirchRescue::
# 6 "data/maps/Route101/scripts.pory"
	lockall
# 7 "data/maps/Route101/scripts.pory"
	playbgm MUS_HELP, TRUE
# 8 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_HelpMe, MSGBOX_DEFAULT
# 9 "data/maps/Route101/scripts.pory"
	closemessage
# 10 "data/maps/Route101/scripts.pory"
	setobjectxy LOCALID_BIRCH, 0, 15
# 11 "data/maps/Route101/scripts.pory"
	setobjectxy LOCALID_ZIGZAGOON, 0, 16
# 12 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_EnterScene
# 13 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BIRCH, Route101_Movement_BirchRunAway1
# 14 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ZIGZAGOON, Route101_Movement_ZigzagoonChase1
# 15 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 16 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ZIGZAGOON, Route101_Movement_ZigzagoonChaseInCircles
# 17 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BIRCH, Route101_Movement_BirchRunInCircles
# 18 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 19 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterRight
# 20 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 21 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ZIGZAGOON, Route101_Movement_ZigzagoonFaceBirch
# 22 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BIRCH, Route101_Movement_BirchFaceZigzagoon
# 23 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 24 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_PleaseHelp, MSGBOX_DEFAULT
# 25 "data/maps/Route101/scripts.pory"
	closemessage
# 26 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 2
# 27 "data/maps/Route101/scripts.pory"
	releaseall
# 28 "data/maps/Route101/scripts.pory"
	end
# 29 "data/maps/Route101/scripts.pory"

# 30 "data/maps/Route101/scripts.pory"
Route101_EventScript_PreventExitSouth::
# 31 "data/maps/Route101/scripts.pory"
	lockall
# 32 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_DontLeaveMe, MSGBOX_DEFAULT
# 33 "data/maps/Route101/scripts.pory"
	closemessage
# 34 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 35 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 36 "data/maps/Route101/scripts.pory"
	releaseall
# 37 "data/maps/Route101/scripts.pory"
	end
# 38 "data/maps/Route101/scripts.pory"

# 39 "data/maps/Route101/scripts.pory"
Route101_EventScript_PreventExitWest::
# 40 "data/maps/Route101/scripts.pory"
	lockall
# 41 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_DontLeaveMe, MSGBOX_DEFAULT
# 42 "data/maps/Route101/scripts.pory"
	closemessage
# 43 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 44 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 45 "data/maps/Route101/scripts.pory"
	releaseall
# 46 "data/maps/Route101/scripts.pory"
	end
# 47 "data/maps/Route101/scripts.pory"

# 48 "data/maps/Route101/scripts.pory"
Route101_EventScript_PreventExitNorth::
# 49 "data/maps/Route101/scripts.pory"
	lockall
# 50 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_DontLeaveMe, MSGBOX_DEFAULT
# 51 "data/maps/Route101/scripts.pory"
	closemessage
# 52 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 53 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 54 "data/maps/Route101/scripts.pory"
	releaseall
# 55 "data/maps/Route101/scripts.pory"
	end
# 56 "data/maps/Route101/scripts.pory"

# 57 "data/maps/Route101/scripts.pory"
Route101_Movement_ZigzagoonChaseInCircles:
# 58 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 59 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 60 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 61 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 62 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 63 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 64 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 65 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 66 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 67 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 68 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 69 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 70 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 71 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 72 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 73 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 74 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 75 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 76 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 77 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 78 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 79 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 80 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 81 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 82 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 83 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 84 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 85 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 86 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 87 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 88 "data/maps/Route101/scripts.pory"
	step_end
# 89 "data/maps/Route101/scripts.pory"

# 90 "data/maps/Route101/scripts.pory"
Route101_Movement_ZigzagoonChase1:
# 91 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 92 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 93 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 94 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 95 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 96 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 97 "data/maps/Route101/scripts.pory"
	step_end
# 98 "data/maps/Route101/scripts.pory"

# 99 "data/maps/Route101/scripts.pory"
Route101_Movement_ZigzagoonFaceBirch:
# 100 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 101 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 102 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 103 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 104 "data/maps/Route101/scripts.pory"
	step_end
# 105 "data/maps/Route101/scripts.pory"

# 106 "data/maps/Route101/scripts.pory"
Route101_Movement_EnterScene:
# 107 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 108 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 109 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 110 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 111 "data/maps/Route101/scripts.pory"
	walk_in_place_faster_left
# 112 "data/maps/Route101/scripts.pory"
	step_end
# 113 "data/maps/Route101/scripts.pory"

# 114 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchRunInCircles:
# 115 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 116 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 117 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 118 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 119 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 120 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 121 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 122 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 123 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 124 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 125 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 126 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 127 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 128 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 129 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 130 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 131 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 132 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 133 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 134 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 135 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 136 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 137 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 138 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 139 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 140 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 141 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 142 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 143 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 144 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 145 "data/maps/Route101/scripts.pory"
	step_end
# 146 "data/maps/Route101/scripts.pory"

# 147 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchRunAway1:
# 148 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 149 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 150 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 151 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 152 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 153 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 154 "data/maps/Route101/scripts.pory"
	step_end
# 155 "data/maps/Route101/scripts.pory"

# 156 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchFaceZigzagoon:
# 157 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 158 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 159 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 160 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 161 "data/maps/Route101/scripts.pory"
	step_end
# 162 "data/maps/Route101/scripts.pory"

# 163 "data/maps/Route101/scripts.pory"
Route101_EventScript_Youngster::
# 164 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_TakeTiredPokemonToPokeCenter, MSGBOX_NPC
# 165 "data/maps/Route101/scripts.pory"
	end
# 166 "data/maps/Route101/scripts.pory"

# 167 "data/maps/Route101/scripts.pory"
Route101_EventScript_Boy::
# 168 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_WildPokemonInTallGrass, MSGBOX_NPC
# 169 "data/maps/Route101/scripts.pory"
	end
# 170 "data/maps/Route101/scripts.pory"

# 171 "data/maps/Route101/scripts.pory"
Route101_EventScript_RouteSign::
# 172 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_RouteSign, MSGBOX_SIGN
# 173 "data/maps/Route101/scripts.pory"
	end
# 174 "data/maps/Route101/scripts.pory"

# 175 "data/maps/Route101/scripts.pory"
Route101_EventScript_BirchsBag::
# 176 "data/maps/Route101/scripts.pory"
	lock
# 177 "data/maps/Route101/scripts.pory"
	faceplayer
# 178 "data/maps/Route101/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 179 "data/maps/Route101/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 180 "data/maps/Route101/scripts.pory"
	fadescreen FADE_TO_BLACK
# 181 "data/maps/Route101/scripts.pory"
	removeobject LOCALID_ZIGZAGOON
# 182 "data/maps/Route101/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 6, 13
# 183 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 184 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 185 "data/maps/Route101/scripts.pory"
	special ChooseStarter
# 186 "data/maps/Route101/scripts.pory"
	waitstate
# 187 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkRight
# 188 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 189 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_YouSavedMe, MSGBOX_DEFAULT
# 190 "data/maps/Route101/scripts.pory"
	special HealPlayerParty
# 191 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 192 "data/maps/Route101/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_BIRCH
# 193 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 194 "data/maps/Route101/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 2
# 195 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 196 "data/maps/Route101/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 197 "data/maps/Route101/scripts.pory"
	checkplayergender
# 198 "data/maps/Route101/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 199 "data/maps/Route101/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
# 200 "data/maps/Route101/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB, 6, 5
# 201 "data/maps/Route101/scripts.pory"
	waitstate
# 202 "data/maps/Route101/scripts.pory"
	release
# 203 "data/maps/Route101/scripts.pory"
	end
# 204 "data/maps/Route101/scripts.pory"

# 205 "data/maps/Route101/scripts.pory"
Route101_EventScript_HideMayInBedroom::
# 206 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
# 207 "data/maps/Route101/scripts.pory"
	return
# 208 "data/maps/Route101/scripts.pory"

# 209 "data/maps/Route101/scripts.pory"
Route101_EventScript_HideBrendanInBedroom::
# 210 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
# 211 "data/maps/Route101/scripts.pory"
	return
# 212 "data/maps/Route101/scripts.pory"

# 213 "data/maps/Route101/scripts.pory"
Route101_Text_HelpMe:
# 214 "data/maps/Route101/scripts.pory"
	.string "H-help me!$"
# 215 "data/maps/Route101/scripts.pory"

# 216 "data/maps/Route101/scripts.pory"
Route101_Text_PleaseHelp:
# 217 "data/maps/Route101/scripts.pory"
	.string "Hello! You over there!\n"
# 218 "data/maps/Route101/scripts.pory"
	.string "Please! Help!\p"
# 219 "data/maps/Route101/scripts.pory"
	.string "In my Bag!\n"
# 220 "data/maps/Route101/scripts.pory"
	.string "There's a Poké Ball!$"
# 221 "data/maps/Route101/scripts.pory"

# 222 "data/maps/Route101/scripts.pory"
Route101_Text_DontLeaveMe:
# 223 "data/maps/Route101/scripts.pory"
	.string "Wh-Where are you going?!\n"
# 224 "data/maps/Route101/scripts.pory"
	.string "Don't leave me like this!$"
# 225 "data/maps/Route101/scripts.pory"

# 226 "data/maps/Route101/scripts.pory"
Route101_Text_YouSavedMe:
# 227 "data/maps/Route101/scripts.pory"
	.string "Prof. Birch: Whew…\p"
# 228 "data/maps/Route101/scripts.pory"
	.string "I was in the tall grass studying wild\n"
# 229 "data/maps/Route101/scripts.pory"
	.string "Pokémon when I was jumped.\p"
# 230 "data/maps/Route101/scripts.pory"
	.string "You saved me.\n"
# 231 "data/maps/Route101/scripts.pory"
	.string "Thanks a lot!\p"
# 232 "data/maps/Route101/scripts.pory"
	.string "Oh?\p"
# 233 "data/maps/Route101/scripts.pory"
	.string "Hi, you're {PLAYER}{KUN}!\p"
# 234 "data/maps/Route101/scripts.pory"
	.string "This is not the place to chat, so come\n"
# 235 "data/maps/Route101/scripts.pory"
	.string "by my Pokémon Lab later, okay?$"
# 236 "data/maps/Route101/scripts.pory"

# 237 "data/maps/Route101/scripts.pory"
Route101_Text_TakeTiredPokemonToPokeCenter:
# 238 "data/maps/Route101/scripts.pory"
	.string "If Pokémon get tired, take them to\n"
# 239 "data/maps/Route101/scripts.pory"
	.string "a Pokémon Center.\p"
# 240 "data/maps/Route101/scripts.pory"
	.string "There's a Pokémon Center in Oldale\n"
# 241 "data/maps/Route101/scripts.pory"
	.string "Town right close by.$"
# 242 "data/maps/Route101/scripts.pory"

# 243 "data/maps/Route101/scripts.pory"
Route101_Text_WildPokemonInTallGrass:
# 244 "data/maps/Route101/scripts.pory"
	.string "Wild Pokémon will jump out at you in\n"
# 245 "data/maps/Route101/scripts.pory"
	.string "tall grass.\p"
# 246 "data/maps/Route101/scripts.pory"
	.string "If you want to catch Pokémon, you have\n"
# 247 "data/maps/Route101/scripts.pory"
	.string "to go into the tall grass and search.$"
# 248 "data/maps/Route101/scripts.pory"

# 249 "data/maps/Route101/scripts.pory"
Route101_Text_RouteSign:
# 250 "data/maps/Route101/scripts.pory"
	.string "Route 101\n"
# 251 "data/maps/Route101/scripts.pory"
	.string "{UP_ARROW} Oldale Town$"

Route101_PichuGift::
# 258 "data/maps/Route101/scripts.pory"
	lock
# 259 "data/maps/Route101/scripts.pory"
	playbgm MUS_HG_SPIKY_EARED_PICHU, FALSE
# 260 "data/maps/Route101/scripts.pory"
	addobject 7
# 261 "data/maps/Route101/scripts.pory"
	addobject 8
# 262 "data/maps/Route101/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 263 "data/maps/Route101/scripts.pory"
	switch VAR_TEMP_1
# 264 "data/maps/Route101/scripts.pory"
	case 2, Route101_PichuGift_3
# 267 "data/maps/Route101/scripts.pory"
	case 3, Route101_PichuGift_4
# 270 "data/maps/Route101/scripts.pory"
	case 4, Route101_PichuGift_5
# 273 "data/maps/Route101/scripts.pory"
	case 5, Route101_PichuGift_6
Route101_PichuGift_1:
# 278 "data/maps/Route101/scripts.pory"
	applymovement 7, CynthiaMoveRight
# 279 "data/maps/Route101/scripts.pory"
	applymovement 8, PichuMoveRight
# 280 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 281 "data/maps/Route101/scripts.pory"
	playse SE_LEDGE
# 282 "data/maps/Route101/scripts.pory"
	applymovement 7, CynthiaMoveRight2
# 283 "data/maps/Route101/scripts.pory"
	applymovement 8, PichuMoveRight2
# 284 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 285 "data/maps/Route101/scripts.pory"
	playfanfare MUS_HG_RECEIVE_POKEMON
# 286 "data/maps/Route101/scripts.pory"
	msgbox Route101_PichuGift_Text_0
# 287 "data/maps/Route101/scripts.pory"
	waitfanfare
# 288 "data/maps/Route101/scripts.pory"
	closemessage
# 289 "data/maps/Route101/scripts.pory"
	givemon SPECIES_PICHU_SPIKY_EARED, 5, ITEM_ORAN_BERRY
# 290 "data/maps/Route101/scripts.pory"
	playse SE_LEDGE
# 291 "data/maps/Route101/scripts.pory"
	applymovement 8, PichuDisappear
# 292 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 293 "data/maps/Route101/scripts.pory"
	removeobject 8
# 294 "data/maps/Route101/scripts.pory"
	compare VAR_TEMP_1, 5
	goto_if_ne Route101_PichuGift_8
Route101_PichuGift_7:
# 305 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 306 "data/maps/Route101/scripts.pory"
	playse SE_LEDGE
# 307 "data/maps/Route101/scripts.pory"
	applymovement 7, CynthiaLedgeLeave
# 308 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 309 "data/maps/Route101/scripts.pory"
	removeobject 7
# 311 "data/maps/Route101/scripts.pory"
	fadedefaultbgm
# 312 "data/maps/Route101/scripts.pory"
	release
	return

Route101_PichuGift_3:
# 265 "data/maps/Route101/scripts.pory"
	setobjectxy 7, 2, 2
# 266 "data/maps/Route101/scripts.pory"
	setobjectxy 8, 2, 3
	goto Route101_PichuGift_1

Route101_PichuGift_4:
# 268 "data/maps/Route101/scripts.pory"
	setobjectxy 7, 2, 3
# 269 "data/maps/Route101/scripts.pory"
	setobjectxy 8, 2, 4
	goto Route101_PichuGift_1

Route101_PichuGift_5:
# 271 "data/maps/Route101/scripts.pory"
	setobjectxy 7, 2, 4
# 272 "data/maps/Route101/scripts.pory"
	setobjectxy 8, 2, 5
	goto Route101_PichuGift_1

Route101_PichuGift_6:
# 274 "data/maps/Route101/scripts.pory"
	setobjectxy 7, 2, 5
# 275 "data/maps/Route101/scripts.pory"
	setobjectxy 8, 2, 4
	goto Route101_PichuGift_1

Route101_PichuGift_8:
# 295 "data/maps/Route101/scripts.pory"
	switch VAR_TEMP_1
# 296 "data/maps/Route101/scripts.pory"
	case 2, Route101_PichuGift_11
# 298 "data/maps/Route101/scripts.pory"
	case 3, Route101_PichuGift_12
# 300 "data/maps/Route101/scripts.pory"
	case 4, Route101_PichuGift_13
	goto Route101_PichuGift_7

Route101_PichuGift_11:
# 297 "data/maps/Route101/scripts.pory"
	applymovement 7, CynthiaDown3
	goto Route101_PichuGift_7

Route101_PichuGift_12:
# 299 "data/maps/Route101/scripts.pory"
	applymovement 7, CynthiaDown2
	goto Route101_PichuGift_7

Route101_PichuGift_13:
# 301 "data/maps/Route101/scripts.pory"
	applymovement 7, CynthiaDown1
	goto Route101_PichuGift_7


# 315 "data/maps/Route101/scripts.pory"
CynthiaMoveRight:
# 316 "data/maps/Route101/scripts.pory"
	walk_right
# 316 "data/maps/Route101/scripts.pory"
	walk_right
# 316 "data/maps/Route101/scripts.pory"
	walk_right
# 316 "data/maps/Route101/scripts.pory"
	walk_right
# 316 "data/maps/Route101/scripts.pory"
	walk_right
# 317 "data/maps/Route101/scripts.pory"
	emote_question_mark
# 318 "data/maps/Route101/scripts.pory"
	delay_16
# 318 "data/maps/Route101/scripts.pory"
	delay_16
# 318 "data/maps/Route101/scripts.pory"
	delay_16
# 318 "data/maps/Route101/scripts.pory"
	delay_16
# 319 "data/maps/Route101/scripts.pory"
	walk_right
# 320 "data/maps/Route101/scripts.pory"
	face_left
	step_end

# 323 "data/maps/Route101/scripts.pory"
PichuMoveRight:
# 324 "data/maps/Route101/scripts.pory"
	delay_16
# 324 "data/maps/Route101/scripts.pory"
	delay_16
# 324 "data/maps/Route101/scripts.pory"
	delay_16
# 325 "data/maps/Route101/scripts.pory"
	walk_right
# 325 "data/maps/Route101/scripts.pory"
	walk_right
# 325 "data/maps/Route101/scripts.pory"
	walk_right
# 325 "data/maps/Route101/scripts.pory"
	walk_right
# 326 "data/maps/Route101/scripts.pory"
	delay_16
# 326 "data/maps/Route101/scripts.pory"
	delay_16
# 326 "data/maps/Route101/scripts.pory"
	delay_16
# 326 "data/maps/Route101/scripts.pory"
	delay_16
	step_end

# 329 "data/maps/Route101/scripts.pory"
CynthiaMoveRight2:
# 330 "data/maps/Route101/scripts.pory"
	delay_16
# 330 "data/maps/Route101/scripts.pory"
	delay_16
# 330 "data/maps/Route101/scripts.pory"
	delay_16
# 331 "data/maps/Route101/scripts.pory"
	walk_right
# 331 "data/maps/Route101/scripts.pory"
	walk_right
	step_end

# 334 "data/maps/Route101/scripts.pory"
PichuMoveRight2:
# 335 "data/maps/Route101/scripts.pory"
	jump_in_place_right
# 336 "data/maps/Route101/scripts.pory"
	delay_4
# 337 "data/maps/Route101/scripts.pory"
	face_up
# 338 "data/maps/Route101/scripts.pory"
	delay_4
# 339 "data/maps/Route101/scripts.pory"
	face_left
# 340 "data/maps/Route101/scripts.pory"
	delay_4
# 341 "data/maps/Route101/scripts.pory"
	face_down
# 342 "data/maps/Route101/scripts.pory"
	delay_4
# 343 "data/maps/Route101/scripts.pory"
	face_right
# 344 "data/maps/Route101/scripts.pory"
	delay_16
# 345 "data/maps/Route101/scripts.pory"
	walk_right
# 345 "data/maps/Route101/scripts.pory"
	walk_right
# 345 "data/maps/Route101/scripts.pory"
	walk_right
# 345 "data/maps/Route101/scripts.pory"
	walk_right
	step_end

# 348 "data/maps/Route101/scripts.pory"
PichuDisappear:
# 349 "data/maps/Route101/scripts.pory"
	jump_in_place_right
# 350 "data/maps/Route101/scripts.pory"
	delay_16
# 351 "data/maps/Route101/scripts.pory"
	delay_8
# 352 "data/maps/Route101/scripts.pory"
	set_invisible
	step_end

# 355 "data/maps/Route101/scripts.pory"
CynthiaDown3:
# 356 "data/maps/Route101/scripts.pory"
	walk_down
# 356 "data/maps/Route101/scripts.pory"
	walk_down
# 356 "data/maps/Route101/scripts.pory"
	walk_down
	step_end

# 359 "data/maps/Route101/scripts.pory"
CynthiaDown2:
# 360 "data/maps/Route101/scripts.pory"
	walk_down
# 360 "data/maps/Route101/scripts.pory"
	walk_down
	step_end

# 363 "data/maps/Route101/scripts.pory"
CynthiaDown1:
# 364 "data/maps/Route101/scripts.pory"
	walk_down
	step_end

# 367 "data/maps/Route101/scripts.pory"
CynthiaLedgeLeave:
# 368 "data/maps/Route101/scripts.pory"
	jump_2_down
# 369 "data/maps/Route101/scripts.pory"
	walk_down
# 369 "data/maps/Route101/scripts.pory"
	walk_down
# 369 "data/maps/Route101/scripts.pory"
	walk_down
# 369 "data/maps/Route101/scripts.pory"
	walk_down
# 370 "data/maps/Route101/scripts.pory"
	set_invisible
	step_end

Route101_MapScripts::
# 374 "data/maps/Route101/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route101_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 382 "data/maps/Route101/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route101_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Route101_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 375 "data/maps/Route101/scripts.pory"
	setflag FLAG_TEMP_1
# 376 "data/maps/Route101/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 1
	goto_if_eq Route101_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
Route101_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 379 "data/maps/Route101/scripts.pory"
	call ProfBirch_EventScript_UpdateLocation
	return

Route101_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 377 "data/maps/Route101/scripts.pory"
	clearflag FLAG_TEMP_1
	goto Route101_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

Route101_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 383 "data/maps/Route101/scripts.pory"
	map_script_2 VAR_ROUTE101_STATE, 0, Route101_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

Route101_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 384 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 385 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 1
	return


Jakson_Town01::
# 391 "data/maps/Route101/scripts.pory"
	faceplayer
# 392 "data/maps/Route101/scripts.pory"
	lock
# 393 "data/maps/Route101/scripts.pory"
	msgbox Jakson_Town01_Text_0
# 394 "data/maps/Route101/scripts.pory"
	release
	end


Redd_Town01::
# 399 "data/maps/Route101/scripts.pory"
	lock
# 400 "data/maps/Route101/scripts.pory"
	msgbox Redd_Town01_Text_0
# 401 "data/maps/Route101/scripts.pory"
	release
	end


Route101_PichuGift_Text_0:
# 286 "data/maps/Route101/scripts.pory"
	.string "Pichu joined {PLAYER}!$"

Jakson_Town01_Text_0:
# 393 "data/maps/Route101/scripts.pory"
	.string "Jakson: {PLAYER}, how are you\n"
	.string "handling the game so far?\p"
	.string "If you've never played this sort of\n"
	.string "game before it can mess with your head.\p"
	.string "Just let me know if anything seems too\n"
	.string "off and we can try and adjust your\l"
	.string "settings so you can adjust your own\l"
	.string "brain to... all this more easily.\p"
	.string "That includes... stuff not related to\n"
	.string "controls and everything.\p"
	.string "I threw this mod pack together in a few\n"
	.string "days with the new release, so there\l"
	.string "might be a few... unforeseen bugs\l"
	.string "lurking around the corner.\p"
	.string "If it does all work, I hope you enjoy the\n"
	.string "tweaks to the base game, too.$"

Redd_Town01_Text_0:
# 400 "data/maps/Route101/scripts.pory"
	.string "Redd: There's so many different sorts\n"
	.string "of Pokémon here...\p"
	.string "Though I guess it's really just\n"
	.string "Generation 1 through 9 Pokémon.\p"
	.string "It is retro, sort of. Maybe I got too\n"
	.string "used to Gen 1 'mons from the remake?\p"
	.string "Ah, screw it. It's Pokémon in the end.\n"
	.string "I'm sure I can find a Pikachu or a\l"
	.string "Charmander around here somewhere.$"
