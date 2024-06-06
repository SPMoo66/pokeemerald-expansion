# 1 "data/maps/Route118/scripts.pory"

# 2 "data/maps/Route118/scripts.pory"
.set LOCALID_STEVEN, 19
# 3 "data/maps/Route118/scripts.pory"

# 4 "data/maps/Route118/scripts.pory"
Route118_MapScripts::
# 5 "data/maps/Route118/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route118_OnTransition
# 6 "data/maps/Route118/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route118_OnLoad
# 7 "data/maps/Route118/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route118_OnFrame
# 8 "data/maps/Route118/scripts.pory"
	.byte 0
# 9 "data/maps/Route118/scripts.pory"

# 10 "data/maps/Route118/scripts.pory"
Route118_OnTransition:
# 11 "data/maps/Route118/scripts.pory"
	call GabbyAndTy_EventScript_UpdateLocation
# 12 "data/maps/Route118/scripts.pory"
	call_if_eq VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_HideMapNamePopup
# 13 "data/maps/Route118/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_118_EAST, AbnormalWeather_StartGroudonWeather
# 14 "data/maps/Route118/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_118_WEST, AbnormalWeather_StartGroudonWeather
# 15 "data/maps/Route118/scripts.pory"
	end
# 16 "data/maps/Route118/scripts.pory"

# 17 "data/maps/Route118/scripts.pory"
Route118_OnLoad:
# 18 "data/maps/Route118/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_118_EAST, AbnormalWeather_EventScript_PlaceTilesRoute118East
# 19 "data/maps/Route118/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_118_WEST, AbnormalWeather_EventScript_PlaceTilesRoute118West
# 20 "data/maps/Route118/scripts.pory"
	end
# 21 "data/maps/Route118/scripts.pory"

# 22 "data/maps/Route118/scripts.pory"
Route118_OnFrame:
# 23 "data/maps/Route118/scripts.pory"
	map_script_2 VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_EndEventAndCleanup_1
# 24 "data/maps/Route118/scripts.pory"
	.2byte 0
# 25 "data/maps/Route118/scripts.pory"

# 26 "data/maps/Route118/scripts.pory"
Route118_EventScript_GoodRodFisherman::
# 27 "data/maps/Route118/scripts.pory"
	lock
# 28 "data/maps/Route118/scripts.pory"
	faceplayer
# 29 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_TryYourLuckFishing, MSGBOX_DEFAULT
# 30 "data/maps/Route118/scripts.pory"
	end
# 31 "data/maps/Route118/scripts.pory"

# 32 "data/maps/Route118/scripts.pory"
Route118_EventScript_Girl::
# 33 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_CanCrossRiversWithSurf, MSGBOX_NPC
# 34 "data/maps/Route118/scripts.pory"
	end
# 35 "data/maps/Route118/scripts.pory"

# 36 "data/maps/Route118/scripts.pory"
Route118_EventScript_RouteSignMauville::
# 37 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_RouteSignMauville, MSGBOX_SIGN
# 38 "data/maps/Route118/scripts.pory"
	end
# 39 "data/maps/Route118/scripts.pory"

# 40 "data/maps/Route118/scripts.pory"
Route118_EventScript_RouteSign119::
# 41 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_RouteSign119, MSGBOX_SIGN
# 42 "data/maps/Route118/scripts.pory"
	end
# 43 "data/maps/Route118/scripts.pory"

# 44 "data/maps/Route118/scripts.pory"
Route118_EventScript_StevenTrigger0::
# 45 "data/maps/Route118/scripts.pory"
	lockall
# 46 "data/maps/Route118/scripts.pory"
	setvar VAR_0x8008, 0
# 47 "data/maps/Route118/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 48 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 49 "data/maps/Route118/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_WalkLeft
# 50 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 51 "data/maps/Route118/scripts.pory"
	goto Route118_EventScript_StevenTrigger
# 52 "data/maps/Route118/scripts.pory"
	end
# 53 "data/maps/Route118/scripts.pory"

# 54 "data/maps/Route118/scripts.pory"
Route118_EventScript_StevenTrigger1::
# 55 "data/maps/Route118/scripts.pory"
	lockall
# 56 "data/maps/Route118/scripts.pory"
	setvar VAR_0x8008, 1
# 57 "data/maps/Route118/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 58 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 59 "data/maps/Route118/scripts.pory"
	goto Route118_EventScript_StevenTrigger
# 60 "data/maps/Route118/scripts.pory"
	end
# 61 "data/maps/Route118/scripts.pory"

# 62 "data/maps/Route118/scripts.pory"
Route118_EventScript_StevenTrigger2::
# 63 "data/maps/Route118/scripts.pory"
	lockall
# 64 "data/maps/Route118/scripts.pory"
	setvar VAR_0x8008, 2
# 65 "data/maps/Route118/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 66 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 67 "data/maps/Route118/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_WalkRight
# 68 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 69 "data/maps/Route118/scripts.pory"
	goto Route118_EventScript_StevenTrigger
# 70 "data/maps/Route118/scripts.pory"
	end
# 71 "data/maps/Route118/scripts.pory"

# 72 "data/maps/Route118/scripts.pory"
Route118_EventScript_StevenTrigger::
# 73 "data/maps/Route118/scripts.pory"
	playse SE_LEDGE
# 74 "data/maps/Route118/scripts.pory"
	applymovement LOCALID_STEVEN, Route118_Movement_StevenJumpLedge
# 75 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 76 "data/maps/Route118/scripts.pory"
	delay 30
# 77 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_StevenQuestions, MSGBOX_DEFAULT
# 78 "data/maps/Route118/scripts.pory"
	closemessage
# 79 "data/maps/Route118/scripts.pory"
	call_if_eq VAR_0x8008, 0, Route118_EventScript_StevenExit0
# 80 "data/maps/Route118/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route118_EventScript_StevenExit1
# 81 "data/maps/Route118/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route118_EventScript_StevenExit2
# 82 "data/maps/Route118/scripts.pory"
	setvar VAR_ROUTE118_STATE, 1
# 83 "data/maps/Route118/scripts.pory"
	removeobject LOCALID_STEVEN
# 84 "data/maps/Route118/scripts.pory"
	releaseall
# 85 "data/maps/Route118/scripts.pory"
	end
# 86 "data/maps/Route118/scripts.pory"

# 87 "data/maps/Route118/scripts.pory"
Route118_EventScript_StevenExit0::
# 88 "data/maps/Route118/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route118_Movement_PlayerWatchStevenExit
# 89 "data/maps/Route118/scripts.pory"
	applymovement LOCALID_STEVEN, Route118_Movement_StevenExit0
# 90 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 91 "data/maps/Route118/scripts.pory"
	return
# 92 "data/maps/Route118/scripts.pory"

# 93 "data/maps/Route118/scripts.pory"
Route118_EventScript_StevenExit1::
# 94 "data/maps/Route118/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route118_Movement_PlayerWatchStevenExit
# 95 "data/maps/Route118/scripts.pory"
	applymovement LOCALID_STEVEN, Route118_Movement_StevenExit1
# 96 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 97 "data/maps/Route118/scripts.pory"
	return
# 98 "data/maps/Route118/scripts.pory"

# 99 "data/maps/Route118/scripts.pory"
Route118_EventScript_StevenExit2::
# 100 "data/maps/Route118/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route118_Movement_PlayerWatchStevenExit
# 101 "data/maps/Route118/scripts.pory"
	applymovement LOCALID_STEVEN, Route118_Movement_StevenExit2
# 102 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 103 "data/maps/Route118/scripts.pory"
	return
# 104 "data/maps/Route118/scripts.pory"

# 105 "data/maps/Route118/scripts.pory"
Route118_Movement_PlayerWatchStevenExit:
# 106 "data/maps/Route118/scripts.pory"
	delay_16
# 107 "data/maps/Route118/scripts.pory"
	walk_in_place_faster_right
# 108 "data/maps/Route118/scripts.pory"
	step_end
# 109 "data/maps/Route118/scripts.pory"

# 110 "data/maps/Route118/scripts.pory"
Route118_Movement_StevenJumpLedge:
# 111 "data/maps/Route118/scripts.pory"
	jump_2_down
# 112 "data/maps/Route118/scripts.pory"
	delay_16
# 113 "data/maps/Route118/scripts.pory"
	walk_down
# 114 "data/maps/Route118/scripts.pory"
	step_end
# 115 "data/maps/Route118/scripts.pory"

# 116 "data/maps/Route118/scripts.pory"
Route118_Movement_StevenExit0:
# 117 "data/maps/Route118/scripts.pory"
	walk_right
# 118 "data/maps/Route118/scripts.pory"
	walk_right
# 119 "data/maps/Route118/scripts.pory"
	walk_right
# 120 "data/maps/Route118/scripts.pory"
	walk_right
# 121 "data/maps/Route118/scripts.pory"
	walk_right
# 122 "data/maps/Route118/scripts.pory"
	walk_right
# 123 "data/maps/Route118/scripts.pory"
	walk_right
# 124 "data/maps/Route118/scripts.pory"
	walk_right
# 125 "data/maps/Route118/scripts.pory"
	walk_right
# 126 "data/maps/Route118/scripts.pory"
	walk_right
# 127 "data/maps/Route118/scripts.pory"
	step_end
# 128 "data/maps/Route118/scripts.pory"

# 129 "data/maps/Route118/scripts.pory"
Route118_Movement_StevenExit1:
# 130 "data/maps/Route118/scripts.pory"
	walk_right
# 131 "data/maps/Route118/scripts.pory"
	walk_right
# 132 "data/maps/Route118/scripts.pory"
	walk_right
# 133 "data/maps/Route118/scripts.pory"
	walk_right
# 134 "data/maps/Route118/scripts.pory"
	walk_right
# 135 "data/maps/Route118/scripts.pory"
	walk_right
# 136 "data/maps/Route118/scripts.pory"
	walk_right
# 137 "data/maps/Route118/scripts.pory"
	walk_right
# 138 "data/maps/Route118/scripts.pory"
	walk_right
# 139 "data/maps/Route118/scripts.pory"
	step_end
# 140 "data/maps/Route118/scripts.pory"

# 141 "data/maps/Route118/scripts.pory"
Route118_Movement_StevenExit2:
# 142 "data/maps/Route118/scripts.pory"
	walk_right
# 143 "data/maps/Route118/scripts.pory"
	walk_right
# 144 "data/maps/Route118/scripts.pory"
	walk_right
# 145 "data/maps/Route118/scripts.pory"
	walk_right
# 146 "data/maps/Route118/scripts.pory"
	walk_right
# 147 "data/maps/Route118/scripts.pory"
	walk_right
# 148 "data/maps/Route118/scripts.pory"
	walk_right
# 149 "data/maps/Route118/scripts.pory"
	walk_right
# 150 "data/maps/Route118/scripts.pory"
	step_end
# 151 "data/maps/Route118/scripts.pory"

# 152 "data/maps/Route118/scripts.pory"
Route118_EventScript_Rose::
# 153 "data/maps/Route118/scripts.pory"
	trainerbattle_single TRAINER_ROSE_1, Route118_Text_RoseIntro, Route118_Text_RoseDefeat, Route118_EventScript_RegisterRose
# 154 "data/maps/Route118/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 155 "data/maps/Route118/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route118_EventScript_RematchRose
# 156 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_RosePostBattle, MSGBOX_DEFAULT
# 157 "data/maps/Route118/scripts.pory"
	release
# 158 "data/maps/Route118/scripts.pory"
	end
# 159 "data/maps/Route118/scripts.pory"

# 160 "data/maps/Route118/scripts.pory"
Route118_EventScript_RegisterRose::
# 161 "data/maps/Route118/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 162 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 163 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_RoseRegister, MSGBOX_DEFAULT
# 164 "data/maps/Route118/scripts.pory"
	register_matchcall TRAINER_ROSE_1
# 165 "data/maps/Route118/scripts.pory"
	release
# 166 "data/maps/Route118/scripts.pory"
	end
# 167 "data/maps/Route118/scripts.pory"

# 168 "data/maps/Route118/scripts.pory"
Route118_EventScript_RematchRose::
# 169 "data/maps/Route118/scripts.pory"
	trainerbattle_rematch TRAINER_ROSE_1, Route118_Text_RoseRematchIntro, Route118_Text_RoseRematchDefeat
# 170 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_RosePostRematch, MSGBOX_AUTOCLOSE
# 171 "data/maps/Route118/scripts.pory"
	end
# 172 "data/maps/Route118/scripts.pory"

# 173 "data/maps/Route118/scripts.pory"
Route118_EventScript_Barny::
# 174 "data/maps/Route118/scripts.pory"
	trainerbattle_single TRAINER_BARNY, Route118_Text_BarnyIntro, Route118_Text_BarnyDefeat
# 175 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_BarnyPostBattle, MSGBOX_AUTOCLOSE
# 176 "data/maps/Route118/scripts.pory"
	end
# 177 "data/maps/Route118/scripts.pory"

# 178 "data/maps/Route118/scripts.pory"
Route118_EventScript_Wade::
# 179 "data/maps/Route118/scripts.pory"
	trainerbattle_single TRAINER_WADE, Route118_Text_WadeIntro, Route118_Text_WadeDefeat
# 180 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_WadePostBattle, MSGBOX_AUTOCLOSE
# 181 "data/maps/Route118/scripts.pory"
	end
# 182 "data/maps/Route118/scripts.pory"

# 183 "data/maps/Route118/scripts.pory"
Route118_EventScript_Dalton::
# 184 "data/maps/Route118/scripts.pory"
	trainerbattle_single TRAINER_DALTON_1, Route118_Text_DaltonIntro, Route118_Text_DaltonDefeat, Route118_EventScript_RegisterDalton
# 185 "data/maps/Route118/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 186 "data/maps/Route118/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route118_EventScript_RematchDalton
# 187 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_DaltonPostBattle, MSGBOX_DEFAULT
# 188 "data/maps/Route118/scripts.pory"
	release
# 189 "data/maps/Route118/scripts.pory"
	end
# 190 "data/maps/Route118/scripts.pory"

# 191 "data/maps/Route118/scripts.pory"
Route118_EventScript_RegisterDalton::
# 192 "data/maps/Route118/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 193 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 194 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_DaltonRegister, MSGBOX_DEFAULT
# 195 "data/maps/Route118/scripts.pory"
	register_matchcall TRAINER_DALTON_1
# 196 "data/maps/Route118/scripts.pory"
	release
# 197 "data/maps/Route118/scripts.pory"
	end
# 198 "data/maps/Route118/scripts.pory"

# 199 "data/maps/Route118/scripts.pory"
Route118_EventScript_RematchDalton::
# 200 "data/maps/Route118/scripts.pory"
	trainerbattle_rematch TRAINER_DALTON_1, Route118_Text_DaltonRematchIntro, Route118_Text_DaltonRematchDefeat
# 201 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_DaltonPostRematch, MSGBOX_AUTOCLOSE
# 202 "data/maps/Route118/scripts.pory"
	end
# 203 "data/maps/Route118/scripts.pory"

# 204 "data/maps/Route118/scripts.pory"
Route118_EventScript_Perry::
# 205 "data/maps/Route118/scripts.pory"
	trainerbattle_single TRAINER_PERRY, Route118_Text_PerryIntro, Route118_Text_PerryDefeat
# 206 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_PerryPostBattle, MSGBOX_AUTOCLOSE
# 207 "data/maps/Route118/scripts.pory"
	end
# 208 "data/maps/Route118/scripts.pory"

# 209 "data/maps/Route118/scripts.pory"
Route118_EventScript_Chester::
# 210 "data/maps/Route118/scripts.pory"
	trainerbattle_single TRAINER_CHESTER, Route118_Text_ChesterIntro, Route118_Text_ChesterDefeat
# 211 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_ChesterPostBattle, MSGBOX_AUTOCLOSE
# 212 "data/maps/Route118/scripts.pory"
	end
# 213 "data/maps/Route118/scripts.pory"

# 214 "data/maps/Route118/scripts.pory"
Route118_EventScript_Deandre::
# 215 "data/maps/Route118/scripts.pory"
	trainerbattle_single TRAINER_DEANDRE, Route118_Text_DeandreIntro, Route118_Text_DeandreDefeat
# 216 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_DeandrePostBattle, MSGBOX_AUTOCLOSE
# 217 "data/maps/Route118/scripts.pory"
	end
# 218 "data/maps/Route118/scripts.pory"

# 219 "data/maps/Route118/scripts.pory"
Route118_Text_StevenQuestions:
# 220 "data/maps/Route118/scripts.pory"
	.string "Steven: Hi, {PLAYER}{KUN}!\p"
# 221 "data/maps/Route118/scripts.pory"
	.string "It's me, Steven!\n"
# 222 "data/maps/Route118/scripts.pory"
	.string "We met in the cave near Dewford.\p"
# 223 "data/maps/Route118/scripts.pory"
	.string "Have you met many kinds of Pokémon\n"
# 224 "data/maps/Route118/scripts.pory"
	.string "since I last saw you?\p"
# 225 "data/maps/Route118/scripts.pory"
	.string "There are many, many kinds of Pokémon\n"
# 226 "data/maps/Route118/scripts.pory"
	.string "in this wide world of ours.\p"
# 227 "data/maps/Route118/scripts.pory"
	.string "If you wanted to raise only your\n"
# 228 "data/maps/Route118/scripts.pory"
	.string "favorites, that's fine.\p"
# 229 "data/maps/Route118/scripts.pory"
	.string "Perhaps you find it more fun to raise\n"
# 230 "data/maps/Route118/scripts.pory"
	.string "all sorts of Pokémon.\p"
# 231 "data/maps/Route118/scripts.pory"
	.string "As a Trainer of Pokémon,\n"
# 232 "data/maps/Route118/scripts.pory"
	.string "what do you think?\p"
# 233 "data/maps/Route118/scripts.pory"
	.string "Of course, it's not any of my business.\p"
# 234 "data/maps/Route118/scripts.pory"
	.string "It would be nice if we were to meet\n"
# 235 "data/maps/Route118/scripts.pory"
	.string "again somewhere.$"
# 236 "data/maps/Route118/scripts.pory"

# 237 "data/maps/Route118/scripts.pory"
Route118_Text_TryYourLuckFishing:
# 238 "data/maps/Route118/scripts.pory"
	.string "Wherever there's water, try your luck\n"
# 239 "data/maps/Route118/scripts.pory"
	.string "at fishing.$"
# 240 "data/maps/Route118/scripts.pory"

# 241 "data/maps/Route118/scripts.pory"
Route118_Text_CanCrossRiversWithSurf:
# 242 "data/maps/Route118/scripts.pory"
	.string "Even if there isn't a boat, you can\n"
# 243 "data/maps/Route118/scripts.pory"
	.string "cross rivers and the sea if you have\l"
# 244 "data/maps/Route118/scripts.pory"
	.string "a Pokémon that knows Surf.\p"
# 245 "data/maps/Route118/scripts.pory"
	.string "Pokémon can be counted on to do so\n"
# 246 "data/maps/Route118/scripts.pory"
	.string "much!$"
# 247 "data/maps/Route118/scripts.pory"

# 248 "data/maps/Route118/scripts.pory"
Route118_Text_RouteSignMauville:
# 249 "data/maps/Route118/scripts.pory"
	.string "Route 118\n"
# 250 "data/maps/Route118/scripts.pory"
	.string "{LEFT_ARROW} Mauville City$"
# 251 "data/maps/Route118/scripts.pory"

# 252 "data/maps/Route118/scripts.pory"
Route118_Text_RouteSign119:
# 253 "data/maps/Route118/scripts.pory"
	.string "Route 118\n"
# 254 "data/maps/Route118/scripts.pory"
	.string "{UP_ARROW} Route 119$"

Route118_EventScript_ChallengeBall1::
# 258 "data/maps/Route118/scripts.pory"
	lock
# 259 "data/maps/Route118/scripts.pory"
	msgbox Route118_EventScript_ChallengeBall1_Text_0, MSGBOX_YESNO
# 260 "data/maps/Route118/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route118_EventScript_ChallengeBall1_2
Route118_EventScript_ChallengeBall1_1:
# 272 "data/maps/Route118/scripts.pory"
	release
	return

Route118_EventScript_ChallengeBall1_2:
# 261 "data/maps/Route118/scripts.pory"
	setflag FLAG_NO_CATCHING
# 262 "data/maps/Route118/scripts.pory"
	setflag FLAG_NO_RUNNING
# 263 "data/maps/Route118/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 264 "data/maps/Route118/scripts.pory"
	settotemboost 1, 0, 1, 0, 0, 1
# 265 "data/maps/Route118/scripts.pory"
	setwildbattle SPECIES_FEAROW, 33, ITEM_NONE, 2, SPECIES_ABSOL, 33, ITEM_NONE, 1, MOVE_FOCUS_ENERGY, MOVE_DRILL_RUN, MOVE_DRILL_PECK, MOVE_STEEL_WING, MOVE_NIGHT_SLASH, MOVE_DETECT, MOVE_SHADOW_CLAW, MOVE_THUNDER_WAVE
# 266 "data/maps/Route118/scripts.pory"
	dowildbattle
# 267 "data/maps/Route118/scripts.pory"
	clearflag FLAG_NO_CATCHING
# 268 "data/maps/Route118/scripts.pory"
	clearflag FLAG_NO_RUNNING
# 269 "data/maps/Route118/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 270 "data/maps/Route118/scripts.pory"
	finditem ITEM_SCOPE_LENS, 1
	goto Route118_EventScript_ChallengeBall1_1


Route118_EventScript_ChallengeBall1_Text_0:
# 259 "data/maps/Route118/scripts.pory"
	.string "You sense enemies with sharp claws\n"
	.string "ready to strike.\p"
	.string "Reach out for the item?$"
