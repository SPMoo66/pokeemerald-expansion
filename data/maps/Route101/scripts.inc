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
	.string "Whew…\p"
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
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 267 "data/maps/Route101/scripts.pory"
	addobject 7
# 268 "data/maps/Route101/scripts.pory"
	addobject 8
# 269 "data/maps/Route101/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 270 "data/maps/Route101/scripts.pory"
	switch VAR_TEMP_1
# 271 "data/maps/Route101/scripts.pory"
	case 2, Route101_PichuGift_3
# 274 "data/maps/Route101/scripts.pory"
	case 3, Route101_PichuGift_4
# 277 "data/maps/Route101/scripts.pory"
	case 4, Route101_PichuGift_5
# 280 "data/maps/Route101/scripts.pory"
	case 5, Route101_PichuGift_6
Route101_PichuGift_1:
# 285 "data/maps/Route101/scripts.pory"
	applymovement 7, BiancaMoveRight
# 286 "data/maps/Route101/scripts.pory"
	applymovement 8, PichuMoveRight
# 287 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 288 "data/maps/Route101/scripts.pory"
	playse SE_LEDGE
# 289 "data/maps/Route101/scripts.pory"
	applymovement 7, BiancaMoveRight2
# 290 "data/maps/Route101/scripts.pory"
	applymovement 8, PichuMoveRight2
# 291 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 292 "data/maps/Route101/scripts.pory"
	speakername CommonText_Q
# 293 "data/maps/Route101/scripts.pory"
	msgbox Route101_PichuGift_Text_0
# 297 "data/maps/Route101/scripts.pory"
	closemessage
# 298 "data/maps/Route101/scripts.pory"
	playse SE_LEDGE
# 299 "data/maps/Route101/scripts.pory"
	applymovement 8, PichuJump
# 300 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 301 "data/maps/Route101/scripts.pory"
	playse SE_LEDGE
# 302 "data/maps/Route101/scripts.pory"
	applymovement 8, PichuJump
# 303 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 304 "data/maps/Route101/scripts.pory"
	compare VAR_TEMP_1, 5
	goto_if_eq Route101_PichuGift_8
# 308 "data/maps/Route101/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceDown
Route101_PichuGift_7:
# 310 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 311 "data/maps/Route101/scripts.pory"
	speakername CommonText_Q
# 312 "data/maps/Route101/scripts.pory"
	msgbox Route101_PichuGift_Text_1
# 316 "data/maps/Route101/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceRight
# 317 "data/maps/Route101/scripts.pory"
	msgbox Route101_PichuGift_Text_2
# 320 "data/maps/Route101/scripts.pory"
	closemessage
# 321 "data/maps/Route101/scripts.pory"
	playfanfare MUS_HG_RECEIVE_POKEMON
# 322 "data/maps/Route101/scripts.pory"
	msgbox Route101_PichuGift_Text_3
# 323 "data/maps/Route101/scripts.pory"
	waitfanfare
# 324 "data/maps/Route101/scripts.pory"
	closemessage
# 325 "data/maps/Route101/scripts.pory"
	givemon SPECIES_PICHU_SPIKY_EARED, 5, ITEM_ORAN_BERRY
# 326 "data/maps/Route101/scripts.pory"
	playse SE_LEDGE
# 327 "data/maps/Route101/scripts.pory"
	applymovement 8, PichuDisappear
# 328 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 329 "data/maps/Route101/scripts.pory"
	removeobject 8
# 330 "data/maps/Route101/scripts.pory"
	delay 20
# 331 "data/maps/Route101/scripts.pory"
	speakername CommonText_Bianca
# 332 "data/maps/Route101/scripts.pory"
	msgbox Route101_PichuGift_Text_4
# 336 "data/maps/Route101/scripts.pory"
	closemessage
# 337 "data/maps/Route101/scripts.pory"
	compare VAR_TEMP_1, 5
	goto_if_ne Route101_PichuGift_12
Route101_PichuGift_11:
# 348 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 349 "data/maps/Route101/scripts.pory"
	playse SE_LEDGE
# 350 "data/maps/Route101/scripts.pory"
	applymovement 7, BiancaLedgeLeave
# 351 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 352 "data/maps/Route101/scripts.pory"
	removeobject 7
# 353 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 4
# 354 "data/maps/Route101/scripts.pory"
	fadedefaultbgm
# 355 "data/maps/Route101/scripts.pory"
	release
	return

Route101_PichuGift_3:
# 272 "data/maps/Route101/scripts.pory"
	setobjectxy 7, 2, 2
# 273 "data/maps/Route101/scripts.pory"
	setobjectxy 8, 2, 3
	goto Route101_PichuGift_1

Route101_PichuGift_4:
# 275 "data/maps/Route101/scripts.pory"
	setobjectxy 7, 2, 3
# 276 "data/maps/Route101/scripts.pory"
	setobjectxy 8, 2, 4
	goto Route101_PichuGift_1

Route101_PichuGift_5:
# 278 "data/maps/Route101/scripts.pory"
	setobjectxy 7, 2, 4
# 279 "data/maps/Route101/scripts.pory"
	setobjectxy 8, 2, 5
	goto Route101_PichuGift_1

Route101_PichuGift_6:
# 281 "data/maps/Route101/scripts.pory"
	setobjectxy 7, 2, 5
# 282 "data/maps/Route101/scripts.pory"
	setobjectxy 8, 2, 4
	goto Route101_PichuGift_1

Route101_PichuGift_8:
# 305 "data/maps/Route101/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceUp
	goto Route101_PichuGift_7

Route101_PichuGift_12:
# 338 "data/maps/Route101/scripts.pory"
	switch VAR_TEMP_1
# 339 "data/maps/Route101/scripts.pory"
	case 2, Route101_PichuGift_15
# 341 "data/maps/Route101/scripts.pory"
	case 3, Route101_PichuGift_16
# 343 "data/maps/Route101/scripts.pory"
	case 4, Route101_PichuGift_17
	goto Route101_PichuGift_11

Route101_PichuGift_15:
# 340 "data/maps/Route101/scripts.pory"
	applymovement 7, Common_Movement_WalkDown3
	goto Route101_PichuGift_11

Route101_PichuGift_16:
# 342 "data/maps/Route101/scripts.pory"
	applymovement 7, Common_Movement_WalkDown2
	goto Route101_PichuGift_11

Route101_PichuGift_17:
# 344 "data/maps/Route101/scripts.pory"
	applymovement 7, Common_Movement_WalkDown
	goto Route101_PichuGift_11


# 358 "data/maps/Route101/scripts.pory"
BiancaMoveRight:
# 359 "data/maps/Route101/scripts.pory"
	walk_right
# 359 "data/maps/Route101/scripts.pory"
	walk_right
# 359 "data/maps/Route101/scripts.pory"
	walk_right
# 359 "data/maps/Route101/scripts.pory"
	walk_right
# 359 "data/maps/Route101/scripts.pory"
	walk_right
# 360 "data/maps/Route101/scripts.pory"
	emote_question_mark
# 361 "data/maps/Route101/scripts.pory"
	delay_16
# 361 "data/maps/Route101/scripts.pory"
	delay_16
# 361 "data/maps/Route101/scripts.pory"
	delay_16
# 361 "data/maps/Route101/scripts.pory"
	delay_16
# 362 "data/maps/Route101/scripts.pory"
	walk_right
# 363 "data/maps/Route101/scripts.pory"
	face_left
	step_end

# 366 "data/maps/Route101/scripts.pory"
PichuMoveRight:
# 367 "data/maps/Route101/scripts.pory"
	delay_16
# 367 "data/maps/Route101/scripts.pory"
	delay_16
# 367 "data/maps/Route101/scripts.pory"
	delay_16
# 368 "data/maps/Route101/scripts.pory"
	walk_right
# 368 "data/maps/Route101/scripts.pory"
	walk_right
# 368 "data/maps/Route101/scripts.pory"
	walk_right
# 368 "data/maps/Route101/scripts.pory"
	walk_right
# 369 "data/maps/Route101/scripts.pory"
	delay_16
# 369 "data/maps/Route101/scripts.pory"
	delay_16
# 369 "data/maps/Route101/scripts.pory"
	delay_16
# 369 "data/maps/Route101/scripts.pory"
	delay_16
	step_end

# 372 "data/maps/Route101/scripts.pory"
BiancaMoveRight2:
# 373 "data/maps/Route101/scripts.pory"
	delay_16
# 373 "data/maps/Route101/scripts.pory"
	delay_16
# 373 "data/maps/Route101/scripts.pory"
	delay_16
# 374 "data/maps/Route101/scripts.pory"
	walk_right
# 374 "data/maps/Route101/scripts.pory"
	walk_right
	step_end

# 377 "data/maps/Route101/scripts.pory"
PichuMoveRight2:
# 378 "data/maps/Route101/scripts.pory"
	jump_in_place_right
# 379 "data/maps/Route101/scripts.pory"
	delay_4
# 380 "data/maps/Route101/scripts.pory"
	face_up
# 381 "data/maps/Route101/scripts.pory"
	delay_4
# 382 "data/maps/Route101/scripts.pory"
	face_left
# 383 "data/maps/Route101/scripts.pory"
	delay_4
# 384 "data/maps/Route101/scripts.pory"
	face_down
# 385 "data/maps/Route101/scripts.pory"
	delay_4
# 386 "data/maps/Route101/scripts.pory"
	face_right
# 387 "data/maps/Route101/scripts.pory"
	delay_16
# 388 "data/maps/Route101/scripts.pory"
	walk_right
# 388 "data/maps/Route101/scripts.pory"
	walk_right
# 388 "data/maps/Route101/scripts.pory"
	walk_right
# 388 "data/maps/Route101/scripts.pory"
	walk_right
	step_end

# 391 "data/maps/Route101/scripts.pory"
PichuJump:
# 392 "data/maps/Route101/scripts.pory"
	jump_in_place_right
	step_end

# 395 "data/maps/Route101/scripts.pory"
PichuDisappear:
# 396 "data/maps/Route101/scripts.pory"
	jump_in_place_right
# 397 "data/maps/Route101/scripts.pory"
	delay_16
# 398 "data/maps/Route101/scripts.pory"
	delay_8
# 399 "data/maps/Route101/scripts.pory"
	set_invisible
	step_end

# 402 "data/maps/Route101/scripts.pory"
BiancaLedgeLeave:
# 403 "data/maps/Route101/scripts.pory"
	jump_2_down
# 404 "data/maps/Route101/scripts.pory"
	walk_down
# 404 "data/maps/Route101/scripts.pory"
	walk_down
# 404 "data/maps/Route101/scripts.pory"
	walk_down
# 404 "data/maps/Route101/scripts.pory"
	walk_down
# 405 "data/maps/Route101/scripts.pory"
	set_invisible
	step_end

Route101_MapScripts::
# 409 "data/maps/Route101/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route101_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 417 "data/maps/Route101/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route101_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Route101_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 410 "data/maps/Route101/scripts.pory"
	setflag FLAG_TEMP_1
# 411 "data/maps/Route101/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 1
	goto_if_eq Route101_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
Route101_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 414 "data/maps/Route101/scripts.pory"
	call ProfBirch_EventScript_UpdateLocation
	return

Route101_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 412 "data/maps/Route101/scripts.pory"
	clearflag FLAG_TEMP_1
	goto Route101_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

Route101_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 418 "data/maps/Route101/scripts.pory"
	map_script_2 VAR_ROUTE101_STATE, 0, Route101_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

Route101_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 419 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 420 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 1
	return


Jakson_Town01::
# 426 "data/maps/Route101/scripts.pory"
	faceplayer
# 427 "data/maps/Route101/scripts.pory"
	lock
# 428 "data/maps/Route101/scripts.pory"
	speakername CommonText_Jakson
# 429 "data/maps/Route101/scripts.pory"
	msgbox Town01_JaksonText
# 430 "data/maps/Route101/scripts.pory"
	release
	end


Redd_Town01::
# 435 "data/maps/Route101/scripts.pory"
	lock
# 436 "data/maps/Route101/scripts.pory"
	speakername CommonText_Redd
# 437 "data/maps/Route101/scripts.pory"
	msgbox Town01_ReddText
# 438 "data/maps/Route101/scripts.pory"
	release
	end


Route101_PichuGift_Text_0:
# 293 "data/maps/Route101/scripts.pory"
	.string "Hello there.\n"
	.string "If you're coming from the direction of\l"
	.string "Littleroot Town you must be a newer\l"
	.string "trainer!\p"
	.string "Aww, the start of a new journey is so\n"
	.string "wonderful.\p"
	.string "I still remember when I…$"

Route101_PichuGift_Text_1:
# 312 "data/maps/Route101/scripts.pory"
	.string "Hey, hey, you!\n"
	.string "Take it easy, now!\l"
	.string "… … …\l"
	.string "Unless…$"

Route101_PichuGift_Text_2:
# 317 "data/maps/Route101/scripts.pory"
	.string "This Pichu had taken a liking to me when\n"
	.string "I arrived here in Hoenn, but now it\l"
	.string "seems like they might prefer you…\p"
	.string "How would you like to take them with\n"
	.string "you?\p"
	.string "You would like that, right?!$"

Route101_PichuGift_Text_3:
# 322 "data/maps/Route101/scripts.pory"
	.string "Pichu joined {PLAYER}!$"

Route101_PichuGift_Text_4:
# 332 "data/maps/Route101/scripts.pory"
	.string "Oh! Right!\n"
	.string "My name is Bianca.\p"
	.string "I'll be in Hoenn for a while, so I hope we\n"
	.string "get to meet again, {PLAYER}!\l"
	.string "Bye-bye!$"
