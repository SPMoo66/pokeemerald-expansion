# 1 "data/maps/Route118/scripts.pory"

# 2 "data/maps/Route118/scripts.pory"
Route118_MapScripts::
# 3 "data/maps/Route118/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route118_OnTransition
# 4 "data/maps/Route118/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route118_OnLoad
# 5 "data/maps/Route118/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route118_OnFrame
# 6 "data/maps/Route118/scripts.pory"
	.byte 0
# 7 "data/maps/Route118/scripts.pory"

# 8 "data/maps/Route118/scripts.pory"
Route118_OnTransition:
# 9 "data/maps/Route118/scripts.pory"
	call GabbyAndTy_EventScript_UpdateLocation
# 10 "data/maps/Route118/scripts.pory"
	call_if_eq VAR_SHOULD_END_ABNORMAL_WEATHER, 1, EventScript_HideMapNamePopup
# 11 "data/maps/Route118/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_118_EAST, AbnormalWeather_StartGroudonWeather
# 12 "data/maps/Route118/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_118_WEST, AbnormalWeather_StartGroudonWeather
# 13 "data/maps/Route118/scripts.pory"
	end
# 14 "data/maps/Route118/scripts.pory"

# 15 "data/maps/Route118/scripts.pory"
Route118_OnLoad:
# 16 "data/maps/Route118/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_118_EAST, AbnormalWeather_EventScript_PlaceTilesRoute118East
# 17 "data/maps/Route118/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_118_WEST, AbnormalWeather_EventScript_PlaceTilesRoute118West
# 18 "data/maps/Route118/scripts.pory"
	end
# 19 "data/maps/Route118/scripts.pory"

# 20 "data/maps/Route118/scripts.pory"
Route118_OnFrame:
# 21 "data/maps/Route118/scripts.pory"
	map_script_2 VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_EndEventAndCleanup_1
# 22 "data/maps/Route118/scripts.pory"
	.2byte 0
# 23 "data/maps/Route118/scripts.pory"

# 24 "data/maps/Route118/scripts.pory"
Route118_EventScript_GoodRodFisherman::
# 25 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_TryYourLuckFishing, MSGBOX_NPC
# 26 "data/maps/Route118/scripts.pory"
	end
# 27 "data/maps/Route118/scripts.pory"

# 28 "data/maps/Route118/scripts.pory"
Route118_EventScript_Girl::
# 29 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_CanCrossRiversWithSurf, MSGBOX_NPC
# 30 "data/maps/Route118/scripts.pory"
	end
# 31 "data/maps/Route118/scripts.pory"

# 32 "data/maps/Route118/scripts.pory"
Route118_EventScript_RouteSignMauville::
# 33 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_RouteSignMauville, MSGBOX_SIGN
# 34 "data/maps/Route118/scripts.pory"
	end
# 35 "data/maps/Route118/scripts.pory"

# 36 "data/maps/Route118/scripts.pory"
Route118_EventScript_RouteSign119::
# 37 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_RouteSign119, MSGBOX_SIGN
# 38 "data/maps/Route118/scripts.pory"
	end
# 39 "data/maps/Route118/scripts.pory"

# 40 "data/maps/Route118/scripts.pory"
Route118_EventScript_StevenTrigger0::
# 41 "data/maps/Route118/scripts.pory"
	lockall
# 42 "data/maps/Route118/scripts.pory"
	setvar VAR_0x8008, 0
# 43 "data/maps/Route118/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 44 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 45 "data/maps/Route118/scripts.pory"
	applymovement LOCALID_ROUTE118_STEVEN, Common_Movement_WalkLeft
# 46 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 47 "data/maps/Route118/scripts.pory"
	goto Route118_EventScript_StevenTrigger
# 48 "data/maps/Route118/scripts.pory"
	end
# 49 "data/maps/Route118/scripts.pory"

# 50 "data/maps/Route118/scripts.pory"
Route118_EventScript_StevenTrigger1::
# 51 "data/maps/Route118/scripts.pory"
	lockall
# 52 "data/maps/Route118/scripts.pory"
	setvar VAR_0x8008, 1
# 53 "data/maps/Route118/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 54 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 55 "data/maps/Route118/scripts.pory"
	goto Route118_EventScript_StevenTrigger
# 56 "data/maps/Route118/scripts.pory"
	end
# 57 "data/maps/Route118/scripts.pory"

# 58 "data/maps/Route118/scripts.pory"
Route118_EventScript_StevenTrigger2::
# 59 "data/maps/Route118/scripts.pory"
	lockall
# 60 "data/maps/Route118/scripts.pory"
	setvar VAR_0x8008, 2
# 61 "data/maps/Route118/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 62 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 63 "data/maps/Route118/scripts.pory"
	applymovement LOCALID_ROUTE118_STEVEN, Common_Movement_WalkRight
# 64 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 65 "data/maps/Route118/scripts.pory"
	goto Route118_EventScript_StevenTrigger
# 66 "data/maps/Route118/scripts.pory"
	end
# 67 "data/maps/Route118/scripts.pory"

# 68 "data/maps/Route118/scripts.pory"
Route118_EventScript_StevenTrigger::
# 69 "data/maps/Route118/scripts.pory"
	playse SE_LEDGE
# 70 "data/maps/Route118/scripts.pory"
	applymovement LOCALID_ROUTE118_STEVEN, Route118_Movement_StevenJumpLedge
# 71 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 72 "data/maps/Route118/scripts.pory"
	delay 30
# 73 "data/maps/Route118/scripts.pory"
	speakername (CommonText_Steven)
# 74 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_StevenQuestions, MSGBOX_DEFAULT
# 75 "data/maps/Route118/scripts.pory"
	closemessage
# 76 "data/maps/Route118/scripts.pory"
	call_if_eq VAR_0x8008, 0, Route118_EventScript_StevenExit0
# 77 "data/maps/Route118/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route118_EventScript_StevenExit1
# 78 "data/maps/Route118/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route118_EventScript_StevenExit2
# 79 "data/maps/Route118/scripts.pory"
	setvar VAR_ROUTE118_STATE, 1
# 80 "data/maps/Route118/scripts.pory"
	removeobject LOCALID_ROUTE118_STEVEN
# 81 "data/maps/Route118/scripts.pory"
	releaseall
# 82 "data/maps/Route118/scripts.pory"
	end
# 83 "data/maps/Route118/scripts.pory"

# 84 "data/maps/Route118/scripts.pory"
Route118_EventScript_StevenExit0::
# 85 "data/maps/Route118/scripts.pory"
	applymovement LOCALID_PLAYER, Route118_Movement_PlayerWatchStevenExit
# 86 "data/maps/Route118/scripts.pory"
	applymovement LOCALID_ROUTE118_STEVEN, Common_Movement_WalkRight10
# 87 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 88 "data/maps/Route118/scripts.pory"
	return
# 89 "data/maps/Route118/scripts.pory"

# 90 "data/maps/Route118/scripts.pory"
Route118_EventScript_StevenExit1::
# 91 "data/maps/Route118/scripts.pory"
	applymovement LOCALID_PLAYER, Route118_Movement_PlayerWatchStevenExit
# 92 "data/maps/Route118/scripts.pory"
	applymovement LOCALID_ROUTE118_STEVEN, Common_Movement_WalkRight9
# 93 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 94 "data/maps/Route118/scripts.pory"
	return
# 95 "data/maps/Route118/scripts.pory"

# 96 "data/maps/Route118/scripts.pory"
Route118_EventScript_StevenExit2::
# 97 "data/maps/Route118/scripts.pory"
	applymovement LOCALID_PLAYER, Route118_Movement_PlayerWatchStevenExit
# 98 "data/maps/Route118/scripts.pory"
	applymovement LOCALID_ROUTE118_STEVEN, Common_Movement_WalkRight8
# 99 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 100 "data/maps/Route118/scripts.pory"
	return
# 101 "data/maps/Route118/scripts.pory"

# 102 "data/maps/Route118/scripts.pory"
Route118_Movement_PlayerWatchStevenExit:
# 103 "data/maps/Route118/scripts.pory"
	delay_16
# 104 "data/maps/Route118/scripts.pory"
	walk_in_place_faster_right
# 105 "data/maps/Route118/scripts.pory"
	step_end
# 106 "data/maps/Route118/scripts.pory"

# 107 "data/maps/Route118/scripts.pory"
Route118_Movement_StevenJumpLedge:
# 108 "data/maps/Route118/scripts.pory"
	jump_2_down
# 109 "data/maps/Route118/scripts.pory"
	delay_16
# 110 "data/maps/Route118/scripts.pory"
	walk_down
# 111 "data/maps/Route118/scripts.pory"
	step_end
# 112 "data/maps/Route118/scripts.pory"

# 113 "data/maps/Route118/scripts.pory"
Route118_EventScript_Rose::
# 114 "data/maps/Route118/scripts.pory"
	trainerbattle_single TRAINER_ROSE_1, Route118_Text_RoseIntro, Route118_Text_RoseDefeat, Route118_EventScript_RegisterRose
# 115 "data/maps/Route118/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 116 "data/maps/Route118/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route118_EventScript_RematchRose
# 117 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_RosePostBattle, MSGBOX_DEFAULT
# 118 "data/maps/Route118/scripts.pory"
	release
# 119 "data/maps/Route118/scripts.pory"
	end
# 120 "data/maps/Route118/scripts.pory"

# 121 "data/maps/Route118/scripts.pory"
Route118_EventScript_RegisterRose::
# 122 "data/maps/Route118/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 123 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 124 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_RoseRegister, MSGBOX_DEFAULT
# 125 "data/maps/Route118/scripts.pory"
	register_matchcall TRAINER_ROSE_1
# 126 "data/maps/Route118/scripts.pory"
	release
# 127 "data/maps/Route118/scripts.pory"
	end
# 128 "data/maps/Route118/scripts.pory"

# 129 "data/maps/Route118/scripts.pory"
Route118_EventScript_RematchRose::
# 130 "data/maps/Route118/scripts.pory"
	trainerbattle_rematch TRAINER_ROSE_1, Route118_Text_RoseRematchIntro, Route118_Text_RoseRematchDefeat
# 131 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_RosePostRematch, MSGBOX_AUTOCLOSE
# 132 "data/maps/Route118/scripts.pory"
	end
# 133 "data/maps/Route118/scripts.pory"

# 134 "data/maps/Route118/scripts.pory"
Route118_EventScript_Barny::
# 135 "data/maps/Route118/scripts.pory"
	trainerbattle_single TRAINER_BARNY, Route118_Text_BarnyIntro, Route118_Text_BarnyDefeat
# 136 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_BarnyPostBattle, MSGBOX_AUTOCLOSE
# 137 "data/maps/Route118/scripts.pory"
	end
# 138 "data/maps/Route118/scripts.pory"

# 139 "data/maps/Route118/scripts.pory"
Route118_EventScript_Wade::
# 140 "data/maps/Route118/scripts.pory"
	trainerbattle_single TRAINER_WADE, Route118_Text_WadeIntro, Route118_Text_WadeDefeat
# 141 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_WadePostBattle, MSGBOX_AUTOCLOSE
# 142 "data/maps/Route118/scripts.pory"
	end
# 143 "data/maps/Route118/scripts.pory"

# 144 "data/maps/Route118/scripts.pory"
Route118_EventScript_Dalton::
# 145 "data/maps/Route118/scripts.pory"
	trainerbattle_single TRAINER_DALTON_1, Route118_Text_DaltonIntro, Route118_Text_DaltonDefeat, Route118_EventScript_RegisterDalton
# 146 "data/maps/Route118/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 147 "data/maps/Route118/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route118_EventScript_RematchDalton
# 148 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_DaltonPostBattle, MSGBOX_DEFAULT
# 149 "data/maps/Route118/scripts.pory"
	release
# 150 "data/maps/Route118/scripts.pory"
	end
# 151 "data/maps/Route118/scripts.pory"

# 152 "data/maps/Route118/scripts.pory"
Route118_EventScript_RegisterDalton::
# 153 "data/maps/Route118/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 154 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 155 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_DaltonRegister, MSGBOX_DEFAULT
# 156 "data/maps/Route118/scripts.pory"
	register_matchcall TRAINER_DALTON_1
# 157 "data/maps/Route118/scripts.pory"
	release
# 158 "data/maps/Route118/scripts.pory"
	end
# 159 "data/maps/Route118/scripts.pory"

# 160 "data/maps/Route118/scripts.pory"
Route118_EventScript_RematchDalton::
# 161 "data/maps/Route118/scripts.pory"
	trainerbattle_rematch TRAINER_DALTON_1, Route118_Text_DaltonRematchIntro, Route118_Text_DaltonRematchDefeat
# 162 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_DaltonPostRematch, MSGBOX_AUTOCLOSE
# 163 "data/maps/Route118/scripts.pory"
	end
# 164 "data/maps/Route118/scripts.pory"

# 165 "data/maps/Route118/scripts.pory"
Route118_EventScript_Perry::
# 166 "data/maps/Route118/scripts.pory"
	trainerbattle_single TRAINER_PERRY, Route118_Text_PerryIntro, Route118_Text_PerryDefeat
# 167 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_PerryPostBattle, MSGBOX_AUTOCLOSE
# 168 "data/maps/Route118/scripts.pory"
	end
# 169 "data/maps/Route118/scripts.pory"

# 170 "data/maps/Route118/scripts.pory"
Route118_EventScript_Chester::
# 171 "data/maps/Route118/scripts.pory"
	trainerbattle_single TRAINER_CHESTER, Route118_Text_ChesterIntro, Route118_Text_ChesterDefeat
# 172 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_ChesterPostBattle, MSGBOX_AUTOCLOSE
# 173 "data/maps/Route118/scripts.pory"
	end
# 174 "data/maps/Route118/scripts.pory"

# 175 "data/maps/Route118/scripts.pory"
Route118_EventScript_Deandre::
# 176 "data/maps/Route118/scripts.pory"
	trainerbattle_single TRAINER_DEANDRE, Route118_Text_DeandreIntro, Route118_Text_DeandreDefeat
# 177 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_DeandrePostBattle, MSGBOX_AUTOCLOSE
# 178 "data/maps/Route118/scripts.pory"
	end
# 179 "data/maps/Route118/scripts.pory"

# 180 "data/maps/Route118/scripts.pory"
Route118_Text_StevenQuestions:
# 181 "data/maps/Route118/scripts.pory"
	.string "Hi, {PLAYER}{KUN}!\p"
# 182 "data/maps/Route118/scripts.pory"
	.string "It's me, Steven!\n"
# 183 "data/maps/Route118/scripts.pory"
	.string "We met in the cave near Dewford.\p"
# 184 "data/maps/Route118/scripts.pory"
	.string "Have you met many kinds of Pokémon\n"
# 185 "data/maps/Route118/scripts.pory"
	.string "since I last saw you?\p"
# 186 "data/maps/Route118/scripts.pory"
	.string "There are many, many kinds of Pokémon\n"
# 187 "data/maps/Route118/scripts.pory"
	.string "in this wide world of ours.\p"
# 188 "data/maps/Route118/scripts.pory"
	.string "If you wanted to raise only your\n"
# 189 "data/maps/Route118/scripts.pory"
	.string "favorites, that's fine.\p"
# 190 "data/maps/Route118/scripts.pory"
	.string "Perhaps you find it more fun to raise\n"
# 191 "data/maps/Route118/scripts.pory"
	.string "all sorts of Pokémon.\p"
# 192 "data/maps/Route118/scripts.pory"
	.string "As a Trainer of Pokémon,\n"
# 193 "data/maps/Route118/scripts.pory"
	.string "what do you think?\p"
# 194 "data/maps/Route118/scripts.pory"
	.string "Of course, it's not any of my business.\p"
# 195 "data/maps/Route118/scripts.pory"
	.string "It would be nice if we were to meet\n"
# 196 "data/maps/Route118/scripts.pory"
	.string "again somewhere.$"
# 197 "data/maps/Route118/scripts.pory"

# 198 "data/maps/Route118/scripts.pory"
Route118_Text_TryYourLuckFishing:
# 199 "data/maps/Route118/scripts.pory"
	.string "Wherever there's water, try your luck\n"
# 200 "data/maps/Route118/scripts.pory"
	.string "at fishing.$"
# 201 "data/maps/Route118/scripts.pory"

# 202 "data/maps/Route118/scripts.pory"
Route118_Text_CanCrossRiversWithSurf:
# 203 "data/maps/Route118/scripts.pory"
	.string "Even if there isn't a boat, you can\n"
# 204 "data/maps/Route118/scripts.pory"
	.string "cross rivers and the sea if you have\l"
# 205 "data/maps/Route118/scripts.pory"
	.string "a Pokémon that knows Surf.\p"
# 206 "data/maps/Route118/scripts.pory"
	.string "Pokémon can be counted on to do so\n"
# 207 "data/maps/Route118/scripts.pory"
	.string "much!$"
# 208 "data/maps/Route118/scripts.pory"

# 209 "data/maps/Route118/scripts.pory"
Route118_Text_RouteSignMauville:
# 210 "data/maps/Route118/scripts.pory"
	.string "Route 118\n"
# 211 "data/maps/Route118/scripts.pory"
	.string "{LEFT_ARROW} Mauville City$"
# 212 "data/maps/Route118/scripts.pory"

# 213 "data/maps/Route118/scripts.pory"
Route118_Text_RouteSign119:
# 214 "data/maps/Route118/scripts.pory"
	.string "Route 118\n"
# 215 "data/maps/Route118/scripts.pory"
	.string "{UP_ARROW} Route 119$"

TrainerTipsSurfSprinting::
# 220 "data/maps/Route118/scripts.pory"
	msgbox TrainerTipsSurfSprinting_Text_0, MSGBOX_SIGN
	return


TrainerTipsSurfSprinting_Text_0:
# 220 "data/maps/Route118/scripts.pory"
	.string "Trainer Tips\p"
	.string "While surfing, hold {B_BUTTON} to move faster.$"
