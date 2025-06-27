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
	setflag FLAG_TEMP_1
# 10 "data/maps/Route118/scripts.pory"
	call GabbyAndTy_EventScript_UpdateLocation
# 11 "data/maps/Route118/scripts.pory"
	call_if_eq VAR_SHOULD_END_ABNORMAL_WEATHER, 1, EventScript_HideMapNamePopup
# 12 "data/maps/Route118/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_118_EAST, AbnormalWeather_StartGroudonWeather
# 13 "data/maps/Route118/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_118_WEST, AbnormalWeather_StartGroudonWeather
# 14 "data/maps/Route118/scripts.pory"
	call_if_eq VAR_EMERALBODY_RIVAL_STATE, 9, EventScript_Clear_FlagTemp1 @ Show Rivals
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
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 46 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 47 "data/maps/Route118/scripts.pory"
	applymovement LOCALID_ROUTE118_STEVEN, Common_Movement_WalkLeft
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
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
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
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 64 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 65 "data/maps/Route118/scripts.pory"
	applymovement LOCALID_ROUTE118_STEVEN, Common_Movement_WalkRight
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
	applymovement LOCALID_ROUTE118_STEVEN, Route118_Movement_StevenJumpLedge
# 73 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 74 "data/maps/Route118/scripts.pory"
	delay 30
# 75 "data/maps/Route118/scripts.pory"
	speakername (CommonText_Steven)
# 76 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_StevenQuestions, MSGBOX_DEFAULT
# 77 "data/maps/Route118/scripts.pory"
	closemessage
# 78 "data/maps/Route118/scripts.pory"
	call_if_eq VAR_0x8008, 0, Route118_EventScript_StevenExit0
# 79 "data/maps/Route118/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route118_EventScript_StevenExit1
# 80 "data/maps/Route118/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route118_EventScript_StevenExit2
# 81 "data/maps/Route118/scripts.pory"
	setvar VAR_ROUTE118_STATE, 1
# 82 "data/maps/Route118/scripts.pory"
	removeobject LOCALID_ROUTE118_STEVEN
# 83 "data/maps/Route118/scripts.pory"
	releaseall
# 84 "data/maps/Route118/scripts.pory"
	end
# 85 "data/maps/Route118/scripts.pory"

# 86 "data/maps/Route118/scripts.pory"
Route118_EventScript_StevenExit0::
# 87 "data/maps/Route118/scripts.pory"
	applymovement LOCALID_PLAYER, Route118_Movement_PlayerWatchStevenExit
# 88 "data/maps/Route118/scripts.pory"
	applymovement LOCALID_ROUTE118_STEVEN, Common_Movement_WalkRight10
# 89 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 90 "data/maps/Route118/scripts.pory"
	return
# 91 "data/maps/Route118/scripts.pory"

# 92 "data/maps/Route118/scripts.pory"
Route118_EventScript_StevenExit1::
# 93 "data/maps/Route118/scripts.pory"
	applymovement LOCALID_PLAYER, Route118_Movement_PlayerWatchStevenExit
# 94 "data/maps/Route118/scripts.pory"
	applymovement LOCALID_ROUTE118_STEVEN, Common_Movement_WalkRight9
# 95 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 96 "data/maps/Route118/scripts.pory"
	return
# 97 "data/maps/Route118/scripts.pory"

# 98 "data/maps/Route118/scripts.pory"
Route118_EventScript_StevenExit2::
# 99 "data/maps/Route118/scripts.pory"
	applymovement LOCALID_PLAYER, Route118_Movement_PlayerWatchStevenExit
# 100 "data/maps/Route118/scripts.pory"
	applymovement LOCALID_ROUTE118_STEVEN, Common_Movement_WalkRight8
# 101 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 102 "data/maps/Route118/scripts.pory"
	return
# 103 "data/maps/Route118/scripts.pory"

# 104 "data/maps/Route118/scripts.pory"
Route118_Movement_PlayerWatchStevenExit:
# 105 "data/maps/Route118/scripts.pory"
	delay_16
# 106 "data/maps/Route118/scripts.pory"
	walk_in_place_faster_right
# 107 "data/maps/Route118/scripts.pory"
	step_end
# 108 "data/maps/Route118/scripts.pory"

# 109 "data/maps/Route118/scripts.pory"
Route118_Movement_StevenJumpLedge:
# 110 "data/maps/Route118/scripts.pory"
	jump_2_down
# 111 "data/maps/Route118/scripts.pory"
	delay_16
# 112 "data/maps/Route118/scripts.pory"
	walk_down
# 113 "data/maps/Route118/scripts.pory"
	step_end
# 114 "data/maps/Route118/scripts.pory"

# 115 "data/maps/Route118/scripts.pory"
Route118_EventScript_Rose::
# 116 "data/maps/Route118/scripts.pory"
	trainerbattle_single TRAINER_ROSE_1, Route118_Text_RoseIntro, Route118_Text_RoseDefeat, Route118_EventScript_RegisterRose
# 117 "data/maps/Route118/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 118 "data/maps/Route118/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route118_EventScript_RematchRose
# 119 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_RosePostBattle, MSGBOX_DEFAULT
# 120 "data/maps/Route118/scripts.pory"
	release
# 121 "data/maps/Route118/scripts.pory"
	end
# 122 "data/maps/Route118/scripts.pory"

# 123 "data/maps/Route118/scripts.pory"
Route118_EventScript_RegisterRose::
# 124 "data/maps/Route118/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 125 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 126 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_RoseRegister, MSGBOX_DEFAULT
# 127 "data/maps/Route118/scripts.pory"
	register_matchcall TRAINER_ROSE_1
# 128 "data/maps/Route118/scripts.pory"
	release
# 129 "data/maps/Route118/scripts.pory"
	end
# 130 "data/maps/Route118/scripts.pory"

# 131 "data/maps/Route118/scripts.pory"
Route118_EventScript_RematchRose::
# 132 "data/maps/Route118/scripts.pory"
	trainerbattle_rematch TRAINER_ROSE_1, Route118_Text_RoseRematchIntro, Route118_Text_RoseRematchDefeat
# 133 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_RosePostRematch, MSGBOX_AUTOCLOSE
# 134 "data/maps/Route118/scripts.pory"
	end
# 135 "data/maps/Route118/scripts.pory"

# 136 "data/maps/Route118/scripts.pory"
Route118_EventScript_Barny::
# 137 "data/maps/Route118/scripts.pory"
	trainerbattle_single TRAINER_BARNY, Route118_Text_BarnyIntro, Route118_Text_BarnyDefeat
# 138 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_BarnyPostBattle, MSGBOX_AUTOCLOSE
# 139 "data/maps/Route118/scripts.pory"
	end
# 140 "data/maps/Route118/scripts.pory"

# 141 "data/maps/Route118/scripts.pory"
Route118_EventScript_Wade::
# 142 "data/maps/Route118/scripts.pory"
	trainerbattle_single TRAINER_WADE, Route118_Text_WadeIntro, Route118_Text_WadeDefeat
# 143 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_WadePostBattle, MSGBOX_AUTOCLOSE
# 144 "data/maps/Route118/scripts.pory"
	end
# 145 "data/maps/Route118/scripts.pory"

# 146 "data/maps/Route118/scripts.pory"
Route118_EventScript_Dalton::
# 147 "data/maps/Route118/scripts.pory"
	trainerbattle_single TRAINER_DALTON_1, Route118_Text_DaltonIntro, Route118_Text_DaltonDefeat, Route118_EventScript_RegisterDalton
# 148 "data/maps/Route118/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 149 "data/maps/Route118/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route118_EventScript_RematchDalton
# 150 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_DaltonPostBattle, MSGBOX_DEFAULT
# 151 "data/maps/Route118/scripts.pory"
	release
# 152 "data/maps/Route118/scripts.pory"
	end
# 153 "data/maps/Route118/scripts.pory"

# 154 "data/maps/Route118/scripts.pory"
Route118_EventScript_RegisterDalton::
# 155 "data/maps/Route118/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 156 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 157 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_DaltonRegister, MSGBOX_DEFAULT
# 158 "data/maps/Route118/scripts.pory"
	register_matchcall TRAINER_DALTON_1
# 159 "data/maps/Route118/scripts.pory"
	release
# 160 "data/maps/Route118/scripts.pory"
	end
# 161 "data/maps/Route118/scripts.pory"

# 162 "data/maps/Route118/scripts.pory"
Route118_EventScript_RematchDalton::
# 163 "data/maps/Route118/scripts.pory"
	trainerbattle_rematch TRAINER_DALTON_1, Route118_Text_DaltonRematchIntro, Route118_Text_DaltonRematchDefeat
# 164 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_DaltonPostRematch, MSGBOX_AUTOCLOSE
# 165 "data/maps/Route118/scripts.pory"
	end
# 166 "data/maps/Route118/scripts.pory"

# 167 "data/maps/Route118/scripts.pory"
Route118_EventScript_Perry::
# 168 "data/maps/Route118/scripts.pory"
	trainerbattle_single TRAINER_PERRY, Route118_Text_PerryIntro, Route118_Text_PerryDefeat
# 169 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_PerryPostBattle, MSGBOX_AUTOCLOSE
# 170 "data/maps/Route118/scripts.pory"
	end
# 171 "data/maps/Route118/scripts.pory"

# 172 "data/maps/Route118/scripts.pory"
Route118_EventScript_Chester::
# 173 "data/maps/Route118/scripts.pory"
	trainerbattle_single TRAINER_CHESTER, Route118_Text_ChesterIntro, Route118_Text_ChesterDefeat
# 174 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_ChesterPostBattle, MSGBOX_AUTOCLOSE
# 175 "data/maps/Route118/scripts.pory"
	end
# 176 "data/maps/Route118/scripts.pory"

# 177 "data/maps/Route118/scripts.pory"
Route118_EventScript_Deandre::
# 178 "data/maps/Route118/scripts.pory"
	trainerbattle_single TRAINER_DEANDRE, Route118_Text_DeandreIntro, Route118_Text_DeandreDefeat
# 179 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_DeandrePostBattle, MSGBOX_AUTOCLOSE
# 180 "data/maps/Route118/scripts.pory"
	end
# 181 "data/maps/Route118/scripts.pory"

# 182 "data/maps/Route118/scripts.pory"
Route118_Text_StevenQuestions:
# 183 "data/maps/Route118/scripts.pory"
	.string "Hi, {PLAYER}{KUN}!\p"
# 184 "data/maps/Route118/scripts.pory"
	.string "It's me, Steven!\n"
# 185 "data/maps/Route118/scripts.pory"
	.string "We met in the cave near Dewford.\p"
# 186 "data/maps/Route118/scripts.pory"
	.string "Have you met many kinds of Pokémon\n"
# 187 "data/maps/Route118/scripts.pory"
	.string "since I last saw you?\p"
# 188 "data/maps/Route118/scripts.pory"
	.string "There are many, many kinds of Pokémon\n"
# 189 "data/maps/Route118/scripts.pory"
	.string "in this wide world of ours.\p"
# 190 "data/maps/Route118/scripts.pory"
	.string "If you wanted to raise only your\n"
# 191 "data/maps/Route118/scripts.pory"
	.string "favorites, that's fine.\p"
# 192 "data/maps/Route118/scripts.pory"
	.string "Perhaps you find it more fun to raise\n"
# 193 "data/maps/Route118/scripts.pory"
	.string "all sorts of Pokémon.\p"
# 194 "data/maps/Route118/scripts.pory"
	.string "As a Trainer of Pokémon,\n"
# 195 "data/maps/Route118/scripts.pory"
	.string "what do you think?\p"
# 196 "data/maps/Route118/scripts.pory"
	.string "Of course, it's not any of my business.\p"
# 197 "data/maps/Route118/scripts.pory"
	.string "It would be nice if we were to meet\n"
# 198 "data/maps/Route118/scripts.pory"
	.string "again somewhere.$"
# 199 "data/maps/Route118/scripts.pory"

# 200 "data/maps/Route118/scripts.pory"
Route118_Text_TryYourLuckFishing:
# 201 "data/maps/Route118/scripts.pory"
	.string "Wherever there's water, try your luck\n"
# 202 "data/maps/Route118/scripts.pory"
	.string "at fishing.$"
# 203 "data/maps/Route118/scripts.pory"

# 204 "data/maps/Route118/scripts.pory"
Route118_Text_CanCrossRiversWithSurf:
# 205 "data/maps/Route118/scripts.pory"
	.string "Even if there isn't a boat, you can\n"
# 206 "data/maps/Route118/scripts.pory"
	.string "cross rivers and the sea if you have\l"
# 207 "data/maps/Route118/scripts.pory"
	.string "a Pokémon that knows Surf.\p"
# 208 "data/maps/Route118/scripts.pory"
	.string "Pokémon can be counted on to do so\n"
# 209 "data/maps/Route118/scripts.pory"
	.string "much!$"
# 210 "data/maps/Route118/scripts.pory"

# 211 "data/maps/Route118/scripts.pory"
Route118_Text_RouteSignMauville:
# 212 "data/maps/Route118/scripts.pory"
	.string "Route 118\n"
# 213 "data/maps/Route118/scripts.pory"
	.string "{LEFT_ARROW} Mauville City$"
# 214 "data/maps/Route118/scripts.pory"

# 215 "data/maps/Route118/scripts.pory"
Route118_Text_RouteSign119:
# 216 "data/maps/Route118/scripts.pory"
	.string "Route 118\n"
# 217 "data/maps/Route118/scripts.pory"
	.string "{UP_ARROW} Route 119$"

TrainerTipsSurfSprinting::
# 222 "data/maps/Route118/scripts.pory"
	msgbox TrainerTipsSurfSprinting_Text_0, MSGBOX_SIGN
	return


TrainerTipsSurfSprinting_Text_0:
# 222 "data/maps/Route118/scripts.pory"
	.string "Trainer Tips\p"
	.string "While surfing, hold {B_BUTTON} to move faster.$"
