# 1 "data/maps/Route101/scripts.pory"

# 2 "data/maps/Route101/scripts.pory"
Route101_EventScript_StartBirchRescue::
# 3 "data/maps/Route101/scripts.pory"
	lockall
# 4 "data/maps/Route101/scripts.pory"
	playbgm MUS_HELP, TRUE
# 5 "data/maps/Route101/scripts.pory"
	speakername CommonText_Q
# 6 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_HelpMe, MSGBOX_DEFAULT
# 7 "data/maps/Route101/scripts.pory"
	closemessage
# 8 "data/maps/Route101/scripts.pory"
	setobjectxy LOCALID_ROUTE101_BIRCH, 0, 15
# 9 "data/maps/Route101/scripts.pory"
	setobjectxy LOCALID_ROUTE101_ZIGZAGOON, 0, 16
# 10 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_PLAYER, Route101_Movement_EnterScene
# 11 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_BIRCH, Route101_Movement_BirchRunAway1
# 12 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_ZIGZAGOON, Route101_Movement_ZigzagoonChase1
# 13 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 14 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_ZIGZAGOON, Route101_Movement_ZigzagoonChaseInCircles
# 15 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_BIRCH, Route101_Movement_BirchRunInCircles
# 16 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 17 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_BIRCH, Common_Movement_WalkInPlaceFasterRight
# 18 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 19 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_ZIGZAGOON, Route101_Movement_ZigzagoonFaceBirch
# 20 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_BIRCH, Route101_Movement_BirchFaceZigzagoon
# 21 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 22 "data/maps/Route101/scripts.pory"
	speakername CommonText_Birch
# 23 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_PleaseHelp, MSGBOX_DEFAULT
# 24 "data/maps/Route101/scripts.pory"
	closemessage
# 25 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 2
# 26 "data/maps/Route101/scripts.pory"
	releaseall
# 27 "data/maps/Route101/scripts.pory"
	end
# 28 "data/maps/Route101/scripts.pory"

# 29 "data/maps/Route101/scripts.pory"
Route101_EventScript_PreventExitSouth::
# 30 "data/maps/Route101/scripts.pory"
	lockall
# 31 "data/maps/Route101/scripts.pory"
	speakername CommonText_Birch
# 32 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_DontLeaveMe, MSGBOX_DEFAULT
# 33 "data/maps/Route101/scripts.pory"
	closemessage
# 34 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
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
	speakername CommonText_Birch
# 42 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_DontLeaveMe, MSGBOX_DEFAULT
# 43 "data/maps/Route101/scripts.pory"
	closemessage
# 44 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight
# 45 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 46 "data/maps/Route101/scripts.pory"
	releaseall
# 47 "data/maps/Route101/scripts.pory"
	end
# 48 "data/maps/Route101/scripts.pory"

# 49 "data/maps/Route101/scripts.pory"
Route101_EventScript_PreventExitNorth::
# 50 "data/maps/Route101/scripts.pory"
	lockall
# 51 "data/maps/Route101/scripts.pory"
	speakername CommonText_Birch
# 52 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_DontLeaveMe, MSGBOX_DEFAULT
# 53 "data/maps/Route101/scripts.pory"
	closemessage
# 54 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 55 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 56 "data/maps/Route101/scripts.pory"
	releaseall
# 57 "data/maps/Route101/scripts.pory"
	end
# 58 "data/maps/Route101/scripts.pory"

# 59 "data/maps/Route101/scripts.pory"
Route101_Movement_ZigzagoonChaseInCircles:
# 60 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 61 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 62 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 63 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 64 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 65 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 66 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 67 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 68 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 69 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 70 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 71 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 72 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 73 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 74 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 75 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 76 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 77 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 78 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 79 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 80 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 81 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 82 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 83 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 84 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 85 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 86 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 87 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 88 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 89 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 90 "data/maps/Route101/scripts.pory"
	step_end
# 91 "data/maps/Route101/scripts.pory"

# 92 "data/maps/Route101/scripts.pory"
Route101_Movement_ZigzagoonChase1:
# 93 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 94 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 95 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 96 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 97 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 98 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 99 "data/maps/Route101/scripts.pory"
	step_end
# 100 "data/maps/Route101/scripts.pory"

# 101 "data/maps/Route101/scripts.pory"
Route101_Movement_ZigzagoonFaceBirch:
# 102 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 103 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 104 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 105 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 106 "data/maps/Route101/scripts.pory"
	step_end
# 107 "data/maps/Route101/scripts.pory"

# 108 "data/maps/Route101/scripts.pory"
Route101_Movement_EnterScene:
# 109 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 110 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 111 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 112 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 113 "data/maps/Route101/scripts.pory"
	walk_in_place_faster_left
# 114 "data/maps/Route101/scripts.pory"
	step_end
# 115 "data/maps/Route101/scripts.pory"

# 116 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchRunInCircles:
# 117 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 118 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 119 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 120 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 121 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 122 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 123 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 124 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 125 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 126 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 127 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 128 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 129 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 130 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 131 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 132 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 133 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 134 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 135 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 136 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 137 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 138 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 139 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 140 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 141 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 142 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 143 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 144 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 145 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 146 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 147 "data/maps/Route101/scripts.pory"
	step_end
# 148 "data/maps/Route101/scripts.pory"

# 149 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchRunAway1:
# 150 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 151 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 152 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 153 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 154 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 155 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 156 "data/maps/Route101/scripts.pory"
	step_end
# 157 "data/maps/Route101/scripts.pory"

# 158 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchFaceZigzagoon:
# 159 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 160 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 161 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 162 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 163 "data/maps/Route101/scripts.pory"
	step_end
# 164 "data/maps/Route101/scripts.pory"

# 165 "data/maps/Route101/scripts.pory"
Route101_EventScript_Youngster::
# 166 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_TakeTiredPokemonToPokeCenter, MSGBOX_NPC
# 167 "data/maps/Route101/scripts.pory"
	end
# 168 "data/maps/Route101/scripts.pory"

# 169 "data/maps/Route101/scripts.pory"
Route101_EventScript_Boy::
# 170 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_WildPokemonInTallGrass, MSGBOX_NPC
# 171 "data/maps/Route101/scripts.pory"
	end
# 172 "data/maps/Route101/scripts.pory"

# 173 "data/maps/Route101/scripts.pory"
Route101_EventScript_RouteSign::
# 174 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_RouteSign, MSGBOX_SIGN
# 175 "data/maps/Route101/scripts.pory"
	end
# 176 "data/maps/Route101/scripts.pory"

# 177 "data/maps/Route101/scripts.pory"
Route101_EventScript_BirchsBag::
# 178 "data/maps/Route101/scripts.pory"
	lock
# 179 "data/maps/Route101/scripts.pory"
	faceplayer
# 180 "data/maps/Route101/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 181 "data/maps/Route101/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 182 "data/maps/Route101/scripts.pory"
	fadescreen FADE_TO_BLACK
# 183 "data/maps/Route101/scripts.pory"
	removeobject LOCALID_ROUTE101_ZIGZAGOON
# 184 "data/maps/Route101/scripts.pory"
	setobjectxy LOCALID_PLAYER, 6, 13
# 185 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 186 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 187 "data/maps/Route101/scripts.pory"
	special ChooseStarter
# 188 "data/maps/Route101/scripts.pory"
	waitstate
# 189 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_BIRCH, Common_Movement_WalkRight
# 190 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 191 "data/maps/Route101/scripts.pory"
	speakername CommonText_Birch
# 192 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_YouSavedMe, MSGBOX_DEFAULT
# 193 "data/maps/Route101/scripts.pory"
	special HealPlayerParty
# 194 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 195 "data/maps/Route101/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_BIRCH
# 196 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 197 "data/maps/Route101/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 2
# 198 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 199 "data/maps/Route101/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 200 "data/maps/Route101/scripts.pory"
	checkplayergender
# 201 "data/maps/Route101/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 202 "data/maps/Route101/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
# 203 "data/maps/Route101/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB, 6, 5
# 204 "data/maps/Route101/scripts.pory"
	waitstate
# 205 "data/maps/Route101/scripts.pory"
	release
# 206 "data/maps/Route101/scripts.pory"
	end
# 207 "data/maps/Route101/scripts.pory"

# 208 "data/maps/Route101/scripts.pory"
Route101_EventScript_HideMayInBedroom::
# 209 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
# 210 "data/maps/Route101/scripts.pory"
	return
# 211 "data/maps/Route101/scripts.pory"

# 212 "data/maps/Route101/scripts.pory"
Route101_EventScript_HideBrendanInBedroom::
# 213 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
# 214 "data/maps/Route101/scripts.pory"
	return
# 215 "data/maps/Route101/scripts.pory"

# 216 "data/maps/Route101/scripts.pory"
Route101_Text_HelpMe:
# 217 "data/maps/Route101/scripts.pory"
	.string "H-help me!$"
# 218 "data/maps/Route101/scripts.pory"

# 219 "data/maps/Route101/scripts.pory"
Route101_Text_PleaseHelp:
# 220 "data/maps/Route101/scripts.pory"
	.string "Hello! You over there!\n"
# 221 "data/maps/Route101/scripts.pory"
	.string "Please! Help!\p"
# 222 "data/maps/Route101/scripts.pory"
	.string "In my Bag!\n"
# 223 "data/maps/Route101/scripts.pory"
	.string "There's a Poké Ball!$"
# 224 "data/maps/Route101/scripts.pory"

# 225 "data/maps/Route101/scripts.pory"
Route101_Text_DontLeaveMe:
# 226 "data/maps/Route101/scripts.pory"
	.string "Wh-Where are you going?!\n"
# 227 "data/maps/Route101/scripts.pory"
	.string "Don't leave me like this!$"
# 228 "data/maps/Route101/scripts.pory"

# 229 "data/maps/Route101/scripts.pory"
Route101_Text_YouSavedMe:
# 230 "data/maps/Route101/scripts.pory"
	.string "Whew…\p"
# 231 "data/maps/Route101/scripts.pory"
	.string "I was in the tall grass studying wild\n"
# 232 "data/maps/Route101/scripts.pory"
	.string "Pokémon when I was jumped.\p"
# 233 "data/maps/Route101/scripts.pory"
	.string "You saved me.\n"
# 234 "data/maps/Route101/scripts.pory"
	.string "Thanks a lot!\p"
# 235 "data/maps/Route101/scripts.pory"
	.string "Oh?\p"
# 236 "data/maps/Route101/scripts.pory"
	.string "Hi, you're {PLAYER}{KUN}!\p"
# 237 "data/maps/Route101/scripts.pory"
	.string "This is not the place to chat, so come\n"
# 238 "data/maps/Route101/scripts.pory"
	.string "by my Pokémon Lab later, okay?$"
# 239 "data/maps/Route101/scripts.pory"

# 240 "data/maps/Route101/scripts.pory"
Route101_Text_TakeTiredPokemonToPokeCenter:
# 241 "data/maps/Route101/scripts.pory"
	.string "If Pokémon get tired, take them to\n"
# 242 "data/maps/Route101/scripts.pory"
	.string "a Pokémon Center.\p"
# 243 "data/maps/Route101/scripts.pory"
	.string "There's a Pokémon Center in Oldale\n"
# 244 "data/maps/Route101/scripts.pory"
	.string "Town right close by.$"
# 245 "data/maps/Route101/scripts.pory"

# 246 "data/maps/Route101/scripts.pory"
Route101_Text_WildPokemonInTallGrass:
# 247 "data/maps/Route101/scripts.pory"
	.string "Wild Pokémon will jump out at you in\n"
# 248 "data/maps/Route101/scripts.pory"
	.string "tall grass.\p"
# 249 "data/maps/Route101/scripts.pory"
	.string "If you want to catch Pokémon, you have\n"
# 250 "data/maps/Route101/scripts.pory"
	.string "to go into the tall grass and search.$"
# 251 "data/maps/Route101/scripts.pory"

# 252 "data/maps/Route101/scripts.pory"
Route101_Text_RouteSign:
# 253 "data/maps/Route101/scripts.pory"
	.string "Route 101\n"
# 254 "data/maps/Route101/scripts.pory"
	.string "{UP_ARROW} Oldale Town$"

Route101_PichuGift::
# 261 "data/maps/Route101/scripts.pory"
	lock
# 262 "data/maps/Route101/scripts.pory"
	playbgm MUS_HG_SPIKY_EARED_PICHU, FALSE
# 263 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 264 "data/maps/Route101/scripts.pory"
	addobject 7
# 265 "data/maps/Route101/scripts.pory"
	addobject 8
# 266 "data/maps/Route101/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 267 "data/maps/Route101/scripts.pory"
	switch VAR_TEMP_1
# 268 "data/maps/Route101/scripts.pory"
	case 2, Route101_PichuGift_3
# 271 "data/maps/Route101/scripts.pory"
	case 3, Route101_PichuGift_4
# 274 "data/maps/Route101/scripts.pory"
	case 4, Route101_PichuGift_5
# 277 "data/maps/Route101/scripts.pory"
	case 5, Route101_PichuGift_6
Route101_PichuGift_1:
# 282 "data/maps/Route101/scripts.pory"
	applymovement 7, BiancaMoveRight
# 283 "data/maps/Route101/scripts.pory"
	applymovement 8, PichuMoveRight
# 284 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 285 "data/maps/Route101/scripts.pory"
	playse SE_LEDGE
# 286 "data/maps/Route101/scripts.pory"
	applymovement 7, BiancaMoveRight2
# 287 "data/maps/Route101/scripts.pory"
	applymovement 8, PichuMoveRight2
# 288 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 289 "data/maps/Route101/scripts.pory"
	speakername CommonText_Q
# 290 "data/maps/Route101/scripts.pory"
	msgbox Route101_PichuGift_Text_0
# 294 "data/maps/Route101/scripts.pory"
	closemessage
# 295 "data/maps/Route101/scripts.pory"
	playse SE_LEDGE
# 296 "data/maps/Route101/scripts.pory"
	applymovement 8, PichuJump
# 297 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 298 "data/maps/Route101/scripts.pory"
	playse SE_LEDGE
# 299 "data/maps/Route101/scripts.pory"
	applymovement 8, PichuJump
# 300 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 301 "data/maps/Route101/scripts.pory"
	compare VAR_TEMP_1, 5
	goto_if_eq Route101_PichuGift_8
# 305 "data/maps/Route101/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceDown
Route101_PichuGift_7:
# 307 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 308 "data/maps/Route101/scripts.pory"
	speakername CommonText_Q
# 309 "data/maps/Route101/scripts.pory"
	msgbox Route101_PichuGift_Text_1
# 313 "data/maps/Route101/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceRight
# 314 "data/maps/Route101/scripts.pory"
	msgbox Route101_PichuGift_Text_2
# 317 "data/maps/Route101/scripts.pory"
	closemessage
# 318 "data/maps/Route101/scripts.pory"
	playfanfare MUS_HG_RECEIVE_POKEMON
# 319 "data/maps/Route101/scripts.pory"
	msgbox Route101_PichuGift_Text_3
# 320 "data/maps/Route101/scripts.pory"
	waitfanfare
# 321 "data/maps/Route101/scripts.pory"
	closemessage
# 322 "data/maps/Route101/scripts.pory"
	givemon SPECIES_PICHU_SPIKY_EARED, 5, ITEM_ORAN_BERRY
# 323 "data/maps/Route101/scripts.pory"
	playse SE_LEDGE
# 324 "data/maps/Route101/scripts.pory"
	applymovement 8, PichuDisappear
# 325 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 326 "data/maps/Route101/scripts.pory"
	removeobject 8
# 327 "data/maps/Route101/scripts.pory"
	delay 20
# 328 "data/maps/Route101/scripts.pory"
	speakername CommonText_Bianca
# 329 "data/maps/Route101/scripts.pory"
	msgbox Route101_PichuGift_Text_4
# 333 "data/maps/Route101/scripts.pory"
	closemessage
# 334 "data/maps/Route101/scripts.pory"
	compare VAR_TEMP_1, 5
	goto_if_ne Route101_PichuGift_12
Route101_PichuGift_11:
# 345 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 346 "data/maps/Route101/scripts.pory"
	playse SE_LEDGE
# 347 "data/maps/Route101/scripts.pory"
	applymovement 7, BiancaLedgeLeave
# 348 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 349 "data/maps/Route101/scripts.pory"
	removeobject 7
# 350 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 4
# 351 "data/maps/Route101/scripts.pory"
	fadedefaultbgm
# 352 "data/maps/Route101/scripts.pory"
	release
	return

Route101_PichuGift_3:
# 269 "data/maps/Route101/scripts.pory"
	setobjectxy 7, 2, 2
# 270 "data/maps/Route101/scripts.pory"
	setobjectxy 8, 2, 3
	goto Route101_PichuGift_1

Route101_PichuGift_4:
# 272 "data/maps/Route101/scripts.pory"
	setobjectxy 7, 2, 3
# 273 "data/maps/Route101/scripts.pory"
	setobjectxy 8, 2, 4
	goto Route101_PichuGift_1

Route101_PichuGift_5:
# 275 "data/maps/Route101/scripts.pory"
	setobjectxy 7, 2, 4
# 276 "data/maps/Route101/scripts.pory"
	setobjectxy 8, 2, 5
	goto Route101_PichuGift_1

Route101_PichuGift_6:
# 278 "data/maps/Route101/scripts.pory"
	setobjectxy 7, 2, 5
# 279 "data/maps/Route101/scripts.pory"
	setobjectxy 8, 2, 4
	goto Route101_PichuGift_1

Route101_PichuGift_8:
# 302 "data/maps/Route101/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceUp
	goto Route101_PichuGift_7

Route101_PichuGift_12:
# 335 "data/maps/Route101/scripts.pory"
	switch VAR_TEMP_1
# 336 "data/maps/Route101/scripts.pory"
	case 2, Route101_PichuGift_15
# 338 "data/maps/Route101/scripts.pory"
	case 3, Route101_PichuGift_16
# 340 "data/maps/Route101/scripts.pory"
	case 4, Route101_PichuGift_17
	goto Route101_PichuGift_11

Route101_PichuGift_15:
# 337 "data/maps/Route101/scripts.pory"
	applymovement 7, Common_Movement_WalkDown3
	goto Route101_PichuGift_11

Route101_PichuGift_16:
# 339 "data/maps/Route101/scripts.pory"
	applymovement 7, Common_Movement_WalkDown2
	goto Route101_PichuGift_11

Route101_PichuGift_17:
# 341 "data/maps/Route101/scripts.pory"
	applymovement 7, Common_Movement_WalkDown
	goto Route101_PichuGift_11


# 355 "data/maps/Route101/scripts.pory"
BiancaMoveRight:
# 356 "data/maps/Route101/scripts.pory"
	walk_right
# 356 "data/maps/Route101/scripts.pory"
	walk_right
# 356 "data/maps/Route101/scripts.pory"
	walk_right
# 356 "data/maps/Route101/scripts.pory"
	walk_right
# 356 "data/maps/Route101/scripts.pory"
	walk_right
# 357 "data/maps/Route101/scripts.pory"
	emote_question_mark
# 358 "data/maps/Route101/scripts.pory"
	delay_16
# 358 "data/maps/Route101/scripts.pory"
	delay_16
# 358 "data/maps/Route101/scripts.pory"
	delay_16
# 358 "data/maps/Route101/scripts.pory"
	delay_16
# 359 "data/maps/Route101/scripts.pory"
	walk_right
# 360 "data/maps/Route101/scripts.pory"
	face_left
	step_end

# 363 "data/maps/Route101/scripts.pory"
PichuMoveRight:
# 364 "data/maps/Route101/scripts.pory"
	delay_16
# 364 "data/maps/Route101/scripts.pory"
	delay_16
# 364 "data/maps/Route101/scripts.pory"
	delay_16
# 365 "data/maps/Route101/scripts.pory"
	walk_right
# 365 "data/maps/Route101/scripts.pory"
	walk_right
# 365 "data/maps/Route101/scripts.pory"
	walk_right
# 365 "data/maps/Route101/scripts.pory"
	walk_right
# 366 "data/maps/Route101/scripts.pory"
	delay_16
# 366 "data/maps/Route101/scripts.pory"
	delay_16
# 366 "data/maps/Route101/scripts.pory"
	delay_16
# 366 "data/maps/Route101/scripts.pory"
	delay_16
	step_end

# 369 "data/maps/Route101/scripts.pory"
BiancaMoveRight2:
# 370 "data/maps/Route101/scripts.pory"
	delay_16
# 370 "data/maps/Route101/scripts.pory"
	delay_16
# 370 "data/maps/Route101/scripts.pory"
	delay_16
# 371 "data/maps/Route101/scripts.pory"
	walk_right
# 371 "data/maps/Route101/scripts.pory"
	walk_right
	step_end

# 374 "data/maps/Route101/scripts.pory"
PichuMoveRight2:
# 375 "data/maps/Route101/scripts.pory"
	jump_in_place_right
# 376 "data/maps/Route101/scripts.pory"
	delay_4
# 377 "data/maps/Route101/scripts.pory"
	face_up
# 378 "data/maps/Route101/scripts.pory"
	delay_4
# 379 "data/maps/Route101/scripts.pory"
	face_left
# 380 "data/maps/Route101/scripts.pory"
	delay_4
# 381 "data/maps/Route101/scripts.pory"
	face_down
# 382 "data/maps/Route101/scripts.pory"
	delay_4
# 383 "data/maps/Route101/scripts.pory"
	face_right
# 384 "data/maps/Route101/scripts.pory"
	delay_16
# 385 "data/maps/Route101/scripts.pory"
	walk_right
# 385 "data/maps/Route101/scripts.pory"
	walk_right
# 385 "data/maps/Route101/scripts.pory"
	walk_right
# 385 "data/maps/Route101/scripts.pory"
	walk_right
	step_end

# 388 "data/maps/Route101/scripts.pory"
PichuJump:
# 389 "data/maps/Route101/scripts.pory"
	jump_in_place_right
	step_end

# 392 "data/maps/Route101/scripts.pory"
PichuDisappear:
# 393 "data/maps/Route101/scripts.pory"
	jump_in_place_right
# 394 "data/maps/Route101/scripts.pory"
	delay_16
# 395 "data/maps/Route101/scripts.pory"
	delay_8
# 396 "data/maps/Route101/scripts.pory"
	set_invisible
	step_end

# 399 "data/maps/Route101/scripts.pory"
BiancaLedgeLeave:
# 400 "data/maps/Route101/scripts.pory"
	jump_2_down
# 401 "data/maps/Route101/scripts.pory"
	walk_down
# 401 "data/maps/Route101/scripts.pory"
	walk_down
# 401 "data/maps/Route101/scripts.pory"
	walk_down
# 401 "data/maps/Route101/scripts.pory"
	walk_down
# 402 "data/maps/Route101/scripts.pory"
	set_invisible
	step_end

Route101_MapScripts::
# 406 "data/maps/Route101/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route101_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 414 "data/maps/Route101/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route101_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Route101_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 407 "data/maps/Route101/scripts.pory"
	setflag FLAG_TEMP_1
# 408 "data/maps/Route101/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 1
	goto_if_eq Route101_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
Route101_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 411 "data/maps/Route101/scripts.pory"
	call ProfBirch_EventScript_UpdateLocation
	return

Route101_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 409 "data/maps/Route101/scripts.pory"
	clearflag FLAG_TEMP_1
	goto Route101_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

Route101_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 415 "data/maps/Route101/scripts.pory"
	map_script_2 VAR_ROUTE101_STATE, 0, Route101_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

Route101_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 416 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 417 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 1
	return


Route101_PichuGift_Text_0:
# 290 "data/maps/Route101/scripts.pory"
	.string "Hello there.\n"
	.string "If you're coming from the direction of\l"
	.string "Littleroot Town you must be a newer\l"
	.string "trainer!\p"
	.string "Aww, the start of a new journey is so\n"
	.string "wonderful.\p"
	.string "I still remember when I…$"

Route101_PichuGift_Text_1:
# 309 "data/maps/Route101/scripts.pory"
	.string "Hey, hey, you!\n"
	.string "Take it easy, now!\l"
	.string "… … …\l"
	.string "Unless…$"

Route101_PichuGift_Text_2:
# 314 "data/maps/Route101/scripts.pory"
	.string "This Pichu had taken a liking to me when\n"
	.string "I arrived here in Hoenn, but now it\l"
	.string "seems like they might prefer you…\p"
	.string "How would you like to take them with\n"
	.string "you?\p"
	.string "You would like that, right?!$"

Route101_PichuGift_Text_3:
# 319 "data/maps/Route101/scripts.pory"
	.string "Pichu joined {PLAYER}!$"

Route101_PichuGift_Text_4:
# 329 "data/maps/Route101/scripts.pory"
	.string "Oh! Right!\n"
	.string "My name is Bianca.\p"
	.string "I'll be in Hoenn for a while, so I hope we\n"
	.string "get to meet again, {PLAYER}!\l"
	.string "Bye-bye!$"
