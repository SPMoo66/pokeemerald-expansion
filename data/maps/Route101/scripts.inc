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
	speakername CommonText_Q
# 9 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_HelpMe, MSGBOX_DEFAULT
# 10 "data/maps/Route101/scripts.pory"
	closemessage
# 11 "data/maps/Route101/scripts.pory"
	setobjectxy LOCALID_BIRCH, 0, 15
# 12 "data/maps/Route101/scripts.pory"
	setobjectxy LOCALID_ZIGZAGOON, 0, 16
# 13 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_EnterScene
# 14 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BIRCH, Route101_Movement_BirchRunAway1
# 15 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ZIGZAGOON, Route101_Movement_ZigzagoonChase1
# 16 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 17 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ZIGZAGOON, Route101_Movement_ZigzagoonChaseInCircles
# 18 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BIRCH, Route101_Movement_BirchRunInCircles
# 19 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 20 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterRight
# 21 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 22 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ZIGZAGOON, Route101_Movement_ZigzagoonFaceBirch
# 23 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BIRCH, Route101_Movement_BirchFaceZigzagoon
# 24 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 25 "data/maps/Route101/scripts.pory"
	speakername CommonText_Birch
# 26 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_PleaseHelp, MSGBOX_DEFAULT
# 27 "data/maps/Route101/scripts.pory"
	closemessage
# 28 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 2
# 29 "data/maps/Route101/scripts.pory"
	releaseall
# 30 "data/maps/Route101/scripts.pory"
	end
# 31 "data/maps/Route101/scripts.pory"

# 32 "data/maps/Route101/scripts.pory"
Route101_EventScript_PreventExitSouth::
# 33 "data/maps/Route101/scripts.pory"
	lockall
# 34 "data/maps/Route101/scripts.pory"
	speakername CommonText_Birch
# 35 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_DontLeaveMe, MSGBOX_DEFAULT
# 36 "data/maps/Route101/scripts.pory"
	closemessage
# 37 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 38 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 39 "data/maps/Route101/scripts.pory"
	releaseall
# 40 "data/maps/Route101/scripts.pory"
	end
# 41 "data/maps/Route101/scripts.pory"

# 42 "data/maps/Route101/scripts.pory"
Route101_EventScript_PreventExitWest::
# 43 "data/maps/Route101/scripts.pory"
	lockall
# 44 "data/maps/Route101/scripts.pory"
	speakername CommonText_Birch
# 45 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_DontLeaveMe, MSGBOX_DEFAULT
# 46 "data/maps/Route101/scripts.pory"
	closemessage
# 47 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 48 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 49 "data/maps/Route101/scripts.pory"
	releaseall
# 50 "data/maps/Route101/scripts.pory"
	end
# 51 "data/maps/Route101/scripts.pory"

# 52 "data/maps/Route101/scripts.pory"
Route101_EventScript_PreventExitNorth::
# 53 "data/maps/Route101/scripts.pory"
	lockall
# 54 "data/maps/Route101/scripts.pory"
	speakername CommonText_Birch
# 55 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_DontLeaveMe, MSGBOX_DEFAULT
# 56 "data/maps/Route101/scripts.pory"
	closemessage
# 57 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 58 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 59 "data/maps/Route101/scripts.pory"
	releaseall
# 60 "data/maps/Route101/scripts.pory"
	end
# 61 "data/maps/Route101/scripts.pory"

# 62 "data/maps/Route101/scripts.pory"
Route101_Movement_ZigzagoonChaseInCircles:
# 63 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 64 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 65 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 66 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 67 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 68 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 69 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 70 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 71 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 72 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 73 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 74 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 75 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 76 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 77 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 78 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 79 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 80 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 81 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 82 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 83 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 84 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 85 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 86 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 87 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 88 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 89 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 90 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 91 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 92 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 93 "data/maps/Route101/scripts.pory"
	step_end
# 94 "data/maps/Route101/scripts.pory"

# 95 "data/maps/Route101/scripts.pory"
Route101_Movement_ZigzagoonChase1:
# 96 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 97 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 98 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 99 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 100 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 101 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 102 "data/maps/Route101/scripts.pory"
	step_end
# 103 "data/maps/Route101/scripts.pory"

# 104 "data/maps/Route101/scripts.pory"
Route101_Movement_ZigzagoonFaceBirch:
# 105 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 106 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 107 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 108 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 109 "data/maps/Route101/scripts.pory"
	step_end
# 110 "data/maps/Route101/scripts.pory"

# 111 "data/maps/Route101/scripts.pory"
Route101_Movement_EnterScene:
# 112 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 113 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 114 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 115 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 116 "data/maps/Route101/scripts.pory"
	walk_in_place_faster_left
# 117 "data/maps/Route101/scripts.pory"
	step_end
# 118 "data/maps/Route101/scripts.pory"

# 119 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchRunInCircles:
# 120 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 121 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 122 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 123 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 124 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 125 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 126 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 127 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 128 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 129 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 130 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 131 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 132 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 133 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 134 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 135 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 136 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 137 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 138 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 139 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 140 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 141 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 142 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 143 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 144 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 145 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 146 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 147 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 148 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 149 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 150 "data/maps/Route101/scripts.pory"
	step_end
# 151 "data/maps/Route101/scripts.pory"

# 152 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchRunAway1:
# 153 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 154 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 155 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 156 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 157 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 158 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 159 "data/maps/Route101/scripts.pory"
	step_end
# 160 "data/maps/Route101/scripts.pory"

# 161 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchFaceZigzagoon:
# 162 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 163 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 164 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 165 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 166 "data/maps/Route101/scripts.pory"
	step_end
# 167 "data/maps/Route101/scripts.pory"

# 168 "data/maps/Route101/scripts.pory"
Route101_EventScript_Youngster::
# 169 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_TakeTiredPokemonToPokeCenter, MSGBOX_NPC
# 170 "data/maps/Route101/scripts.pory"
	end
# 171 "data/maps/Route101/scripts.pory"

# 172 "data/maps/Route101/scripts.pory"
Route101_EventScript_Boy::
# 173 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_WildPokemonInTallGrass, MSGBOX_NPC
# 174 "data/maps/Route101/scripts.pory"
	end
# 175 "data/maps/Route101/scripts.pory"

# 176 "data/maps/Route101/scripts.pory"
Route101_EventScript_RouteSign::
# 177 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_RouteSign, MSGBOX_SIGN
# 178 "data/maps/Route101/scripts.pory"
	end
# 179 "data/maps/Route101/scripts.pory"

# 180 "data/maps/Route101/scripts.pory"
Route101_EventScript_BirchsBag::
# 181 "data/maps/Route101/scripts.pory"
	lock
# 182 "data/maps/Route101/scripts.pory"
	faceplayer
# 183 "data/maps/Route101/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 184 "data/maps/Route101/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 185 "data/maps/Route101/scripts.pory"
	fadescreen FADE_TO_BLACK
# 186 "data/maps/Route101/scripts.pory"
	removeobject LOCALID_ZIGZAGOON
# 187 "data/maps/Route101/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 6, 13
# 188 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 189 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 190 "data/maps/Route101/scripts.pory"
	special ChooseStarter
# 191 "data/maps/Route101/scripts.pory"
	waitstate
# 192 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkRight
# 193 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 194 "data/maps/Route101/scripts.pory"
	speakername CommonText_Birch
# 195 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_YouSavedMe, MSGBOX_DEFAULT
# 196 "data/maps/Route101/scripts.pory"
	special HealPlayerParty
# 197 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 198 "data/maps/Route101/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_BIRCH
# 199 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 200 "data/maps/Route101/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 2
# 201 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 202 "data/maps/Route101/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 203 "data/maps/Route101/scripts.pory"
	checkplayergender
# 204 "data/maps/Route101/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 205 "data/maps/Route101/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
# 206 "data/maps/Route101/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB, 6, 5
# 207 "data/maps/Route101/scripts.pory"
	waitstate
# 208 "data/maps/Route101/scripts.pory"
	release
# 209 "data/maps/Route101/scripts.pory"
	end
# 210 "data/maps/Route101/scripts.pory"

# 211 "data/maps/Route101/scripts.pory"
Route101_EventScript_HideMayInBedroom::
# 212 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
# 213 "data/maps/Route101/scripts.pory"
	return
# 214 "data/maps/Route101/scripts.pory"

# 215 "data/maps/Route101/scripts.pory"
Route101_EventScript_HideBrendanInBedroom::
# 216 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
# 217 "data/maps/Route101/scripts.pory"
	return
# 218 "data/maps/Route101/scripts.pory"

# 219 "data/maps/Route101/scripts.pory"
Route101_Text_HelpMe:
# 220 "data/maps/Route101/scripts.pory"
	.string "H-help me!$"
# 221 "data/maps/Route101/scripts.pory"

# 222 "data/maps/Route101/scripts.pory"
Route101_Text_PleaseHelp:
# 223 "data/maps/Route101/scripts.pory"
	.string "Hello! You over there!\n"
# 224 "data/maps/Route101/scripts.pory"
	.string "Please! Help!\p"
# 225 "data/maps/Route101/scripts.pory"
	.string "In my Bag!\n"
# 226 "data/maps/Route101/scripts.pory"
	.string "There's a Poké Ball!$"
# 227 "data/maps/Route101/scripts.pory"

# 228 "data/maps/Route101/scripts.pory"
Route101_Text_DontLeaveMe:
# 229 "data/maps/Route101/scripts.pory"
	.string "Wh-Where are you going?!\n"
# 230 "data/maps/Route101/scripts.pory"
	.string "Don't leave me like this!$"
# 231 "data/maps/Route101/scripts.pory"

# 232 "data/maps/Route101/scripts.pory"
Route101_Text_YouSavedMe:
# 233 "data/maps/Route101/scripts.pory"
	.string "Prof. Birch: Whew…\p"
# 234 "data/maps/Route101/scripts.pory"
	.string "I was in the tall grass studying wild\n"
# 235 "data/maps/Route101/scripts.pory"
	.string "Pokémon when I was jumped.\p"
# 236 "data/maps/Route101/scripts.pory"
	.string "You saved me.\n"
# 237 "data/maps/Route101/scripts.pory"
	.string "Thanks a lot!\p"
# 238 "data/maps/Route101/scripts.pory"
	.string "Oh?\p"
# 239 "data/maps/Route101/scripts.pory"
	.string "Hi, you're {PLAYER}{KUN}!\p"
# 240 "data/maps/Route101/scripts.pory"
	.string "This is not the place to chat, so come\n"
# 241 "data/maps/Route101/scripts.pory"
	.string "by my Pokémon Lab later, okay?$"
# 242 "data/maps/Route101/scripts.pory"

# 243 "data/maps/Route101/scripts.pory"
Route101_Text_TakeTiredPokemonToPokeCenter:
# 244 "data/maps/Route101/scripts.pory"
	.string "If Pokémon get tired, take them to\n"
# 245 "data/maps/Route101/scripts.pory"
	.string "a Pokémon Center.\p"
# 246 "data/maps/Route101/scripts.pory"
	.string "There's a Pokémon Center in Oldale\n"
# 247 "data/maps/Route101/scripts.pory"
	.string "Town right close by.$"
# 248 "data/maps/Route101/scripts.pory"

# 249 "data/maps/Route101/scripts.pory"
Route101_Text_WildPokemonInTallGrass:
# 250 "data/maps/Route101/scripts.pory"
	.string "Wild Pokémon will jump out at you in\n"
# 251 "data/maps/Route101/scripts.pory"
	.string "tall grass.\p"
# 252 "data/maps/Route101/scripts.pory"
	.string "If you want to catch Pokémon, you have\n"
# 253 "data/maps/Route101/scripts.pory"
	.string "to go into the tall grass and search.$"
# 254 "data/maps/Route101/scripts.pory"

# 255 "data/maps/Route101/scripts.pory"
Route101_Text_RouteSign:
# 256 "data/maps/Route101/scripts.pory"
	.string "Route 101\n"
# 257 "data/maps/Route101/scripts.pory"
	.string "{UP_ARROW} Oldale Town$"

Route101_PichuGift::
# 264 "data/maps/Route101/scripts.pory"
	lock
# 265 "data/maps/Route101/scripts.pory"
	playbgm MUS_HG_SPIKY_EARED_PICHU, FALSE
# 266 "data/maps/Route101/scripts.pory"
	addobject 7
# 267 "data/maps/Route101/scripts.pory"
	addobject 8
# 268 "data/maps/Route101/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 269 "data/maps/Route101/scripts.pory"
	switch VAR_TEMP_1
# 270 "data/maps/Route101/scripts.pory"
	case 2, Route101_PichuGift_3
# 273 "data/maps/Route101/scripts.pory"
	case 3, Route101_PichuGift_4
# 276 "data/maps/Route101/scripts.pory"
	case 4, Route101_PichuGift_5
# 279 "data/maps/Route101/scripts.pory"
	case 5, Route101_PichuGift_6
Route101_PichuGift_1:
# 284 "data/maps/Route101/scripts.pory"
	applymovement 7, CynthiaMoveRight
# 285 "data/maps/Route101/scripts.pory"
	applymovement 8, PichuMoveRight
# 286 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 287 "data/maps/Route101/scripts.pory"
	playse SE_LEDGE
# 288 "data/maps/Route101/scripts.pory"
	applymovement 7, CynthiaMoveRight2
# 289 "data/maps/Route101/scripts.pory"
	applymovement 8, PichuMoveRight2
# 290 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 291 "data/maps/Route101/scripts.pory"
	playfanfare MUS_HG_RECEIVE_POKEMON
# 292 "data/maps/Route101/scripts.pory"
	msgbox Route101_PichuGift_Text_0
# 293 "data/maps/Route101/scripts.pory"
	waitfanfare
# 294 "data/maps/Route101/scripts.pory"
	closemessage
# 295 "data/maps/Route101/scripts.pory"
	givemon SPECIES_PICHU_SPIKY_EARED, 5, ITEM_ORAN_BERRY
# 296 "data/maps/Route101/scripts.pory"
	playse SE_LEDGE
# 297 "data/maps/Route101/scripts.pory"
	applymovement 8, PichuDisappear
# 298 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 299 "data/maps/Route101/scripts.pory"
	removeobject 8
# 300 "data/maps/Route101/scripts.pory"
	compare VAR_TEMP_1, 5
	goto_if_ne Route101_PichuGift_8
Route101_PichuGift_7:
# 311 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 312 "data/maps/Route101/scripts.pory"
	playse SE_LEDGE
# 313 "data/maps/Route101/scripts.pory"
	applymovement 7, CynthiaLedgeLeave
# 314 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 315 "data/maps/Route101/scripts.pory"
	removeobject 7
# 317 "data/maps/Route101/scripts.pory"
	fadedefaultbgm
# 318 "data/maps/Route101/scripts.pory"
	release
	return

Route101_PichuGift_3:
# 271 "data/maps/Route101/scripts.pory"
	setobjectxy 7, 2, 2
# 272 "data/maps/Route101/scripts.pory"
	setobjectxy 8, 2, 3
	goto Route101_PichuGift_1

Route101_PichuGift_4:
# 274 "data/maps/Route101/scripts.pory"
	setobjectxy 7, 2, 3
# 275 "data/maps/Route101/scripts.pory"
	setobjectxy 8, 2, 4
	goto Route101_PichuGift_1

Route101_PichuGift_5:
# 277 "data/maps/Route101/scripts.pory"
	setobjectxy 7, 2, 4
# 278 "data/maps/Route101/scripts.pory"
	setobjectxy 8, 2, 5
	goto Route101_PichuGift_1

Route101_PichuGift_6:
# 280 "data/maps/Route101/scripts.pory"
	setobjectxy 7, 2, 5
# 281 "data/maps/Route101/scripts.pory"
	setobjectxy 8, 2, 4
	goto Route101_PichuGift_1

Route101_PichuGift_8:
# 301 "data/maps/Route101/scripts.pory"
	switch VAR_TEMP_1
# 302 "data/maps/Route101/scripts.pory"
	case 2, Route101_PichuGift_11
# 304 "data/maps/Route101/scripts.pory"
	case 3, Route101_PichuGift_12
# 306 "data/maps/Route101/scripts.pory"
	case 4, Route101_PichuGift_13
	goto Route101_PichuGift_7

Route101_PichuGift_11:
# 303 "data/maps/Route101/scripts.pory"
	applymovement 7, CynthiaDown3
	goto Route101_PichuGift_7

Route101_PichuGift_12:
# 305 "data/maps/Route101/scripts.pory"
	applymovement 7, Common_Movement_WalkDown2
	goto Route101_PichuGift_7

Route101_PichuGift_13:
# 307 "data/maps/Route101/scripts.pory"
	applymovement 7, Common_Movement_WalkDown
	goto Route101_PichuGift_7


# 321 "data/maps/Route101/scripts.pory"
CynthiaMoveRight:
# 322 "data/maps/Route101/scripts.pory"
	walk_right
# 322 "data/maps/Route101/scripts.pory"
	walk_right
# 322 "data/maps/Route101/scripts.pory"
	walk_right
# 322 "data/maps/Route101/scripts.pory"
	walk_right
# 322 "data/maps/Route101/scripts.pory"
	walk_right
# 323 "data/maps/Route101/scripts.pory"
	emote_question_mark
# 324 "data/maps/Route101/scripts.pory"
	delay_16
# 324 "data/maps/Route101/scripts.pory"
	delay_16
# 324 "data/maps/Route101/scripts.pory"
	delay_16
# 324 "data/maps/Route101/scripts.pory"
	delay_16
# 325 "data/maps/Route101/scripts.pory"
	walk_right
# 326 "data/maps/Route101/scripts.pory"
	face_left
	step_end

# 329 "data/maps/Route101/scripts.pory"
PichuMoveRight:
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
# 331 "data/maps/Route101/scripts.pory"
	walk_right
# 331 "data/maps/Route101/scripts.pory"
	walk_right
# 332 "data/maps/Route101/scripts.pory"
	delay_16
# 332 "data/maps/Route101/scripts.pory"
	delay_16
# 332 "data/maps/Route101/scripts.pory"
	delay_16
# 332 "data/maps/Route101/scripts.pory"
	delay_16
	step_end

# 335 "data/maps/Route101/scripts.pory"
CynthiaMoveRight2:
# 336 "data/maps/Route101/scripts.pory"
	delay_16
# 336 "data/maps/Route101/scripts.pory"
	delay_16
# 336 "data/maps/Route101/scripts.pory"
	delay_16
# 337 "data/maps/Route101/scripts.pory"
	walk_right
# 337 "data/maps/Route101/scripts.pory"
	walk_right
	step_end

# 340 "data/maps/Route101/scripts.pory"
PichuMoveRight2:
# 341 "data/maps/Route101/scripts.pory"
	jump_in_place_right
# 342 "data/maps/Route101/scripts.pory"
	delay_4
# 343 "data/maps/Route101/scripts.pory"
	face_up
# 344 "data/maps/Route101/scripts.pory"
	delay_4
# 345 "data/maps/Route101/scripts.pory"
	face_left
# 346 "data/maps/Route101/scripts.pory"
	delay_4
# 347 "data/maps/Route101/scripts.pory"
	face_down
# 348 "data/maps/Route101/scripts.pory"
	delay_4
# 349 "data/maps/Route101/scripts.pory"
	face_right
# 350 "data/maps/Route101/scripts.pory"
	delay_16
# 351 "data/maps/Route101/scripts.pory"
	walk_right
# 351 "data/maps/Route101/scripts.pory"
	walk_right
# 351 "data/maps/Route101/scripts.pory"
	walk_right
# 351 "data/maps/Route101/scripts.pory"
	walk_right
	step_end

# 354 "data/maps/Route101/scripts.pory"
PichuDisappear:
# 355 "data/maps/Route101/scripts.pory"
	jump_in_place_right
# 356 "data/maps/Route101/scripts.pory"
	delay_16
# 357 "data/maps/Route101/scripts.pory"
	delay_8
# 358 "data/maps/Route101/scripts.pory"
	set_invisible
	step_end

# 361 "data/maps/Route101/scripts.pory"
CynthiaDown3:
# 362 "data/maps/Route101/scripts.pory"
	walk_down
# 362 "data/maps/Route101/scripts.pory"
	walk_down
# 362 "data/maps/Route101/scripts.pory"
	walk_down
	step_end

# 365 "data/maps/Route101/scripts.pory"
CynthiaLedgeLeave:
# 366 "data/maps/Route101/scripts.pory"
	jump_2_down
# 367 "data/maps/Route101/scripts.pory"
	walk_down
# 367 "data/maps/Route101/scripts.pory"
	walk_down
# 367 "data/maps/Route101/scripts.pory"
	walk_down
# 367 "data/maps/Route101/scripts.pory"
	walk_down
# 368 "data/maps/Route101/scripts.pory"
	set_invisible
	step_end

Route101_MapScripts::
# 372 "data/maps/Route101/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route101_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 380 "data/maps/Route101/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route101_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Route101_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 373 "data/maps/Route101/scripts.pory"
	setflag FLAG_TEMP_1
# 374 "data/maps/Route101/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 1
	goto_if_eq Route101_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
Route101_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 377 "data/maps/Route101/scripts.pory"
	call ProfBirch_EventScript_UpdateLocation
	return

Route101_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 375 "data/maps/Route101/scripts.pory"
	clearflag FLAG_TEMP_1
	goto Route101_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

Route101_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 381 "data/maps/Route101/scripts.pory"
	map_script_2 VAR_ROUTE101_STATE, 0, Route101_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

Route101_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 382 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 383 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 1
	return


Jakson_Town01::
# 389 "data/maps/Route101/scripts.pory"
	faceplayer
# 390 "data/maps/Route101/scripts.pory"
	lock
# 391 "data/maps/Route101/scripts.pory"
	speakername CommonText_Jakson
# 392 "data/maps/Route101/scripts.pory"
	msgbox Jakson_Town01_Text_0
# 393 "data/maps/Route101/scripts.pory"
	release
	end


Redd_Town01::
# 398 "data/maps/Route101/scripts.pory"
	lock
# 399 "data/maps/Route101/scripts.pory"
	speakername CommonText_Redd
# 400 "data/maps/Route101/scripts.pory"
	msgbox Redd_Town01_Text_0
# 401 "data/maps/Route101/scripts.pory"
	release
	end


Route101_PichuGift_Text_0:
# 292 "data/maps/Route101/scripts.pory"
	.string "Pichu joined {PLAYER}!$"

Jakson_Town01_Text_0:
# 392 "data/maps/Route101/scripts.pory"
	.string "{PLAYER}, how are you handling the\n"
	.string "game so far?\p"
	.string "If you've never played this sort of\n"
	.string "game before it can mess with your head.\p"
	.string "Just let me know if anything seems too\n"
	.string "off and we can try and adjust your\l"
	.string "settings so you can adjust your own\l"
	.string "brain to… all this more easily.\p"
	.string "That includes… stuff not related to\n"
	.string "controls and everything.\p"
	.string "I threw this mod pack together in a few\n"
	.string "days with the new release, so there\l"
	.string "might be a few… unforeseen bugs lurking\l"
	.string "around the corner.\p"
	.string "If it does all work, I hope you enjoy the\n"
	.string "tweaks to the base game, too.$"

Redd_Town01_Text_0:
# 400 "data/maps/Route101/scripts.pory"
	.string "There's so many different sorts of\n"
	.string "Pokémon here…\p"
	.string "Though I guess it's really just\n"
	.string "Generation 1 through 9 Pokémon.\p"
	.string "It is retro, sort of. Maybe I got too\n"
	.string "used to Gen 1 'mons from the remake?\p"
	.string "Ah, screw it. It's Pokémon in the end.\n"
	.string "I'm sure I can find a Pikachu or a\l"
	.string "Charmander around here somewhere.$"
