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
	msgbox Route118_Text_TryYourLuckFishing, MSGBOX_NPC
# 28 "data/maps/Route118/scripts.pory"
	end
# 29 "data/maps/Route118/scripts.pory"

# 30 "data/maps/Route118/scripts.pory"
Route118_EventScript_Girl::
# 31 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_CanCrossRiversWithSurf, MSGBOX_NPC
# 32 "data/maps/Route118/scripts.pory"
	end
# 33 "data/maps/Route118/scripts.pory"

# 34 "data/maps/Route118/scripts.pory"
Route118_EventScript_RouteSignMauville::
# 35 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_RouteSignMauville, MSGBOX_SIGN
# 36 "data/maps/Route118/scripts.pory"
	end
# 37 "data/maps/Route118/scripts.pory"

# 38 "data/maps/Route118/scripts.pory"
Route118_EventScript_RouteSign119::
# 39 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_RouteSign119, MSGBOX_SIGN
# 40 "data/maps/Route118/scripts.pory"
	end
# 41 "data/maps/Route118/scripts.pory"

# 42 "data/maps/Route118/scripts.pory"
Route118_EventScript_StevenTrigger0::
# 43 "data/maps/Route118/scripts.pory"
	lockall
# 44 "data/maps/Route118/scripts.pory"
	setvar VAR_0x8008, 0
# 45 "data/maps/Route118/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 46 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 47 "data/maps/Route118/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_WalkLeft
# 48 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 49 "data/maps/Route118/scripts.pory"
	goto Route118_EventScript_StevenTrigger
# 50 "data/maps/Route118/scripts.pory"
	end
# 51 "data/maps/Route118/scripts.pory"

# 52 "data/maps/Route118/scripts.pory"
Route118_EventScript_StevenTrigger1::
# 53 "data/maps/Route118/scripts.pory"
	lockall
# 54 "data/maps/Route118/scripts.pory"
	setvar VAR_0x8008, 1
# 55 "data/maps/Route118/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 56 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 57 "data/maps/Route118/scripts.pory"
	goto Route118_EventScript_StevenTrigger
# 58 "data/maps/Route118/scripts.pory"
	end
# 59 "data/maps/Route118/scripts.pory"

# 60 "data/maps/Route118/scripts.pory"
Route118_EventScript_StevenTrigger2::
# 61 "data/maps/Route118/scripts.pory"
	lockall
# 62 "data/maps/Route118/scripts.pory"
	setvar VAR_0x8008, 2
# 63 "data/maps/Route118/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 64 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 65 "data/maps/Route118/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_WalkRight
# 66 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 67 "data/maps/Route118/scripts.pory"
	goto Route118_EventScript_StevenTrigger
# 68 "data/maps/Route118/scripts.pory"
	end
# 69 "data/maps/Route118/scripts.pory"

# 70 "data/maps/Route118/scripts.pory"
Route118_EventScript_StevenTrigger::
# 71 "data/maps/Route118/scripts.pory"
	playse SE_LEDGE
# 72 "data/maps/Route118/scripts.pory"
	applymovement LOCALID_STEVEN, Route118_Movement_StevenJumpLedge
# 73 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 74 "data/maps/Route118/scripts.pory"
	delay 30
# 75 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_StevenQuestions, MSGBOX_DEFAULT
# 76 "data/maps/Route118/scripts.pory"
	closemessage
# 77 "data/maps/Route118/scripts.pory"
	call_if_eq VAR_0x8008, 0, Route118_EventScript_StevenExit0
# 78 "data/maps/Route118/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route118_EventScript_StevenExit1
# 79 "data/maps/Route118/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route118_EventScript_StevenExit2
# 80 "data/maps/Route118/scripts.pory"
	setvar VAR_ROUTE118_STATE, 1
# 81 "data/maps/Route118/scripts.pory"
	removeobject LOCALID_STEVEN
# 82 "data/maps/Route118/scripts.pory"
	releaseall
# 83 "data/maps/Route118/scripts.pory"
	end
# 84 "data/maps/Route118/scripts.pory"

# 85 "data/maps/Route118/scripts.pory"
Route118_EventScript_StevenExit0::
# 86 "data/maps/Route118/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route118_Movement_PlayerWatchStevenExit
# 87 "data/maps/Route118/scripts.pory"
	applymovement LOCALID_STEVEN, Route118_Movement_StevenExit0
# 88 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 89 "data/maps/Route118/scripts.pory"
	return
# 90 "data/maps/Route118/scripts.pory"

# 91 "data/maps/Route118/scripts.pory"
Route118_EventScript_StevenExit1::
# 92 "data/maps/Route118/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route118_Movement_PlayerWatchStevenExit
# 93 "data/maps/Route118/scripts.pory"
	applymovement LOCALID_STEVEN, Route118_Movement_StevenExit1
# 94 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 95 "data/maps/Route118/scripts.pory"
	return
# 96 "data/maps/Route118/scripts.pory"

# 97 "data/maps/Route118/scripts.pory"
Route118_EventScript_StevenExit2::
# 98 "data/maps/Route118/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route118_Movement_PlayerWatchStevenExit
# 99 "data/maps/Route118/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_WalkRight8
# 100 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 101 "data/maps/Route118/scripts.pory"
	return
# 102 "data/maps/Route118/scripts.pory"

# 103 "data/maps/Route118/scripts.pory"
Route118_Movement_PlayerWatchStevenExit:
# 104 "data/maps/Route118/scripts.pory"
	delay_16
# 105 "data/maps/Route118/scripts.pory"
	walk_in_place_faster_right
# 106 "data/maps/Route118/scripts.pory"
	step_end
# 107 "data/maps/Route118/scripts.pory"

# 108 "data/maps/Route118/scripts.pory"
Route118_Movement_StevenJumpLedge:
# 109 "data/maps/Route118/scripts.pory"
	jump_2_down
# 110 "data/maps/Route118/scripts.pory"
	delay_16
# 111 "data/maps/Route118/scripts.pory"
	walk_down
# 112 "data/maps/Route118/scripts.pory"
	step_end
# 113 "data/maps/Route118/scripts.pory"

# 114 "data/maps/Route118/scripts.pory"
Route118_Movement_StevenExit0:
# 115 "data/maps/Route118/scripts.pory"
	walk_right
# 116 "data/maps/Route118/scripts.pory"
	walk_right
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
	step_end
# 126 "data/maps/Route118/scripts.pory"

# 127 "data/maps/Route118/scripts.pory"
Route118_Movement_StevenExit1:
# 128 "data/maps/Route118/scripts.pory"
	walk_right
# 129 "data/maps/Route118/scripts.pory"
	walk_right
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
	step_end
# 138 "data/maps/Route118/scripts.pory"

# 139 "data/maps/Route118/scripts.pory"
Route118_EventScript_Rose::
# 140 "data/maps/Route118/scripts.pory"
	trainerbattle_single TRAINER_ROSE_1, Route118_Text_RoseIntro, Route118_Text_RoseDefeat, Route118_EventScript_RegisterRose
# 141 "data/maps/Route118/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 142 "data/maps/Route118/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route118_EventScript_RematchRose
# 143 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_RosePostBattle, MSGBOX_DEFAULT
# 144 "data/maps/Route118/scripts.pory"
	release
# 145 "data/maps/Route118/scripts.pory"
	end
# 146 "data/maps/Route118/scripts.pory"

# 147 "data/maps/Route118/scripts.pory"
Route118_EventScript_RegisterRose::
# 148 "data/maps/Route118/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 149 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 150 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_RoseRegister, MSGBOX_DEFAULT
# 151 "data/maps/Route118/scripts.pory"
	register_matchcall TRAINER_ROSE_1
# 152 "data/maps/Route118/scripts.pory"
	release
# 153 "data/maps/Route118/scripts.pory"
	end
# 154 "data/maps/Route118/scripts.pory"

# 155 "data/maps/Route118/scripts.pory"
Route118_EventScript_RematchRose::
# 156 "data/maps/Route118/scripts.pory"
	trainerbattle_rematch TRAINER_ROSE_1, Route118_Text_RoseRematchIntro, Route118_Text_RoseRematchDefeat
# 157 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_RosePostRematch, MSGBOX_AUTOCLOSE
# 158 "data/maps/Route118/scripts.pory"
	end
# 159 "data/maps/Route118/scripts.pory"

# 160 "data/maps/Route118/scripts.pory"
Route118_EventScript_Barny::
# 161 "data/maps/Route118/scripts.pory"
	trainerbattle_single TRAINER_BARNY, Route118_Text_BarnyIntro, Route118_Text_BarnyDefeat
# 162 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_BarnyPostBattle, MSGBOX_AUTOCLOSE
# 163 "data/maps/Route118/scripts.pory"
	end
# 164 "data/maps/Route118/scripts.pory"

# 165 "data/maps/Route118/scripts.pory"
Route118_EventScript_Wade::
# 166 "data/maps/Route118/scripts.pory"
	trainerbattle_single TRAINER_WADE, Route118_Text_WadeIntro, Route118_Text_WadeDefeat
# 167 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_WadePostBattle, MSGBOX_AUTOCLOSE
# 168 "data/maps/Route118/scripts.pory"
	end
# 169 "data/maps/Route118/scripts.pory"

# 170 "data/maps/Route118/scripts.pory"
Route118_EventScript_Dalton::
# 171 "data/maps/Route118/scripts.pory"
	trainerbattle_single TRAINER_DALTON_1, Route118_Text_DaltonIntro, Route118_Text_DaltonDefeat, Route118_EventScript_RegisterDalton
# 172 "data/maps/Route118/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 173 "data/maps/Route118/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route118_EventScript_RematchDalton
# 174 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_DaltonPostBattle, MSGBOX_DEFAULT
# 175 "data/maps/Route118/scripts.pory"
	release
# 176 "data/maps/Route118/scripts.pory"
	end
# 177 "data/maps/Route118/scripts.pory"

# 178 "data/maps/Route118/scripts.pory"
Route118_EventScript_RegisterDalton::
# 179 "data/maps/Route118/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 180 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 181 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_DaltonRegister, MSGBOX_DEFAULT
# 182 "data/maps/Route118/scripts.pory"
	register_matchcall TRAINER_DALTON_1
# 183 "data/maps/Route118/scripts.pory"
	release
# 184 "data/maps/Route118/scripts.pory"
	end
# 185 "data/maps/Route118/scripts.pory"

# 186 "data/maps/Route118/scripts.pory"
Route118_EventScript_RematchDalton::
# 187 "data/maps/Route118/scripts.pory"
	trainerbattle_rematch TRAINER_DALTON_1, Route118_Text_DaltonRematchIntro, Route118_Text_DaltonRematchDefeat
# 188 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_DaltonPostRematch, MSGBOX_AUTOCLOSE
# 189 "data/maps/Route118/scripts.pory"
	end
# 190 "data/maps/Route118/scripts.pory"

# 191 "data/maps/Route118/scripts.pory"
Route118_EventScript_Perry::
# 192 "data/maps/Route118/scripts.pory"
	trainerbattle_single TRAINER_PERRY, Route118_Text_PerryIntro, Route118_Text_PerryDefeat
# 193 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_PerryPostBattle, MSGBOX_AUTOCLOSE
# 194 "data/maps/Route118/scripts.pory"
	end
# 195 "data/maps/Route118/scripts.pory"

# 196 "data/maps/Route118/scripts.pory"
Route118_EventScript_Chester::
# 197 "data/maps/Route118/scripts.pory"
	trainerbattle_single TRAINER_CHESTER, Route118_Text_ChesterIntro, Route118_Text_ChesterDefeat
# 198 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_ChesterPostBattle, MSGBOX_AUTOCLOSE
# 199 "data/maps/Route118/scripts.pory"
	end
# 200 "data/maps/Route118/scripts.pory"

# 201 "data/maps/Route118/scripts.pory"
Route118_EventScript_Deandre::
# 202 "data/maps/Route118/scripts.pory"
	trainerbattle_single TRAINER_DEANDRE, Route118_Text_DeandreIntro, Route118_Text_DeandreDefeat
# 203 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_DeandrePostBattle, MSGBOX_AUTOCLOSE
# 204 "data/maps/Route118/scripts.pory"
	end
# 205 "data/maps/Route118/scripts.pory"

# 206 "data/maps/Route118/scripts.pory"
Route118_Text_StevenQuestions:
# 207 "data/maps/Route118/scripts.pory"
	.string "Steven: Hi, {PLAYER}{KUN}!\p"
# 208 "data/maps/Route118/scripts.pory"
	.string "It's me, Steven!\n"
# 209 "data/maps/Route118/scripts.pory"
	.string "We met in the cave near Dewford.\p"
# 210 "data/maps/Route118/scripts.pory"
	.string "Have you met many kinds of Pokémon\n"
# 211 "data/maps/Route118/scripts.pory"
	.string "since I last saw you?\p"
# 212 "data/maps/Route118/scripts.pory"
	.string "There are many, many kinds of Pokémon\n"
# 213 "data/maps/Route118/scripts.pory"
	.string "in this wide world of ours.\p"
# 214 "data/maps/Route118/scripts.pory"
	.string "If you wanted to raise only your\n"
# 215 "data/maps/Route118/scripts.pory"
	.string "favorites, that's fine.\p"
# 216 "data/maps/Route118/scripts.pory"
	.string "Perhaps you find it more fun to raise\n"
# 217 "data/maps/Route118/scripts.pory"
	.string "all sorts of Pokémon.\p"
# 218 "data/maps/Route118/scripts.pory"
	.string "As a Trainer of Pokémon,\n"
# 219 "data/maps/Route118/scripts.pory"
	.string "what do you think?\p"
# 220 "data/maps/Route118/scripts.pory"
	.string "Of course, it's not any of my business.\p"
# 221 "data/maps/Route118/scripts.pory"
	.string "It would be nice if we were to meet\n"
# 222 "data/maps/Route118/scripts.pory"
	.string "again somewhere.$"
# 223 "data/maps/Route118/scripts.pory"

# 224 "data/maps/Route118/scripts.pory"
Route118_Text_TryYourLuckFishing:
# 225 "data/maps/Route118/scripts.pory"
	.string "Wherever there's water, try your luck\n"
# 226 "data/maps/Route118/scripts.pory"
	.string "at fishing.$"
# 227 "data/maps/Route118/scripts.pory"

# 228 "data/maps/Route118/scripts.pory"
Route118_Text_CanCrossRiversWithSurf:
# 229 "data/maps/Route118/scripts.pory"
	.string "Even if there isn't a boat, you can\n"
# 230 "data/maps/Route118/scripts.pory"
	.string "cross rivers and the sea if you have\l"
# 231 "data/maps/Route118/scripts.pory"
	.string "a Pokémon that knows Surf.\p"
# 232 "data/maps/Route118/scripts.pory"
	.string "Pokémon can be counted on to do so\n"
# 233 "data/maps/Route118/scripts.pory"
	.string "much!$"
# 234 "data/maps/Route118/scripts.pory"

# 235 "data/maps/Route118/scripts.pory"
Route118_Text_RouteSignMauville:
# 236 "data/maps/Route118/scripts.pory"
	.string "Route 118\n"
# 237 "data/maps/Route118/scripts.pory"
	.string "{LEFT_ARROW} Mauville City$"
# 238 "data/maps/Route118/scripts.pory"

# 239 "data/maps/Route118/scripts.pory"
Route118_Text_RouteSign119:
# 240 "data/maps/Route118/scripts.pory"
	.string "Route 118\n"
# 241 "data/maps/Route118/scripts.pory"
	.string "{UP_ARROW} Route 119$"

Route118_EventScript_ChallengeBall1::
# 245 "data/maps/Route118/scripts.pory"
	lock
# 246 "data/maps/Route118/scripts.pory"
	msgbox Route118_EventScript_ChallengeBall1_Text_0, MSGBOX_YESNO
# 247 "data/maps/Route118/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route118_EventScript_ChallengeBall1_2
Route118_EventScript_ChallengeBall1_1:
# 260 "data/maps/Route118/scripts.pory"
	release
	return

Route118_EventScript_ChallengeBall1_2:
# 248 "data/maps/Route118/scripts.pory"
	setflag FLAG_NO_CATCHING
# 249 "data/maps/Route118/scripts.pory"
	setflag FLAG_NO_RUNNING
# 250 "data/maps/Route118/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 251 "data/maps/Route118/scripts.pory"
	settotemboost 1, 0, 1, 0, 0, 1
# 252 "data/maps/Route118/scripts.pory"
	setwildbattle SPECIES_FEAROW, 37, ITEM_NONE, 2, SPECIES_ABSOL, 37, ITEM_NONE, 1, MOVE_FOCUS_ENERGY, MOVE_DRILL_RUN, MOVE_DRILL_PECK, MOVE_STEEL_WING, MOVE_NIGHT_SLASH, MOVE_DETECT, MOVE_SHADOW_CLAW, MOVE_THUNDER_WAVE
# 253 "data/maps/Route118/scripts.pory"
	dowildbattle
# 254 "data/maps/Route118/scripts.pory"
	clearflag FLAG_NO_CATCHING
# 255 "data/maps/Route118/scripts.pory"
	clearflag FLAG_NO_RUNNING
# 256 "data/maps/Route118/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 257 "data/maps/Route118/scripts.pory"
	finditem ITEM_SCOPE_LENS, 1
# 258 "data/maps/Route118/scripts.pory"
	setwildbattle SPECIES_BULBASAUR, 1
	goto Route118_EventScript_ChallengeBall1_1


TrainerTipsSurfSprinting::
# 264 "data/maps/Route118/scripts.pory"
	msgbox TrainerTipsSurfSprinting_Text_0, MSGBOX_SIGN
	return


Route118_EventScript_ChallengeBall1_Text_0:
# 246 "data/maps/Route118/scripts.pory"
	.string "You sense enemies with sharp claws\n"
	.string "ready to strike.\p"
	.string "Reach out for the item?$"

TrainerTipsSurfSprinting_Text_0:
# 264 "data/maps/Route118/scripts.pory"
	.string "Trainer Tips\p"
	.string "While surfing, hold the B button to move\n"
	.string "faster.$"
