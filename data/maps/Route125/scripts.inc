# 1 "data/maps/Route125/scripts.pory"

# 2 "data/maps/Route125/scripts.pory"
Route125_MapScripts::
# 3 "data/maps/Route125/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route125_OnTransition
# 4 "data/maps/Route125/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route125_OnLoad
# 5 "data/maps/Route125/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route125_OnFrame
# 6 "data/maps/Route125/scripts.pory"
	.byte 0
# 7 "data/maps/Route125/scripts.pory"

# 8 "data/maps/Route125/scripts.pory"
Route125_OnTransition:
# 9 "data/maps/Route125/scripts.pory"
	setflag FLAG_TEMP_1
# 10 "data/maps/Route125/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather
# 11 "data/maps/Route125/scripts.pory"
	call_if_eq VAR_SHOULD_END_ABNORMAL_WEATHER, 1, EventScript_HideMapNamePopup
# 12 "data/maps/Route125/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_125_WEST, AbnormalWeather_StartKyogreWeather
# 13 "data/maps/Route125/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_125_EAST, AbnormalWeather_StartKyogreWeather
# 14 "data/maps/Route125/scripts.pory"
	call_if_eq VAR_EMERALBODY_RIVAL_STATE, 12, EventScript_Clear_FlagTemp1
# 15 "data/maps/Route125/scripts.pory"
	end
# 16 "data/maps/Route125/scripts.pory"

# 17 "data/maps/Route125/scripts.pory"
Route125_OnLoad:
# 18 "data/maps/Route125/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_125_WEST, AbnormalWeather_EventScript_PlaceTilesRoute125West
# 19 "data/maps/Route125/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_125_EAST, AbnormalWeather_EventScript_PlaceTilesRoute125East
# 20 "data/maps/Route125/scripts.pory"
	end
# 21 "data/maps/Route125/scripts.pory"

# 22 "data/maps/Route125/scripts.pory"
Route125_OnFrame:
# 23 "data/maps/Route125/scripts.pory"
	map_script_2 VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_EndEventAndCleanup_1
# 24 "data/maps/Route125/scripts.pory"
	.2byte 0
# 25 "data/maps/Route125/scripts.pory"

# 26 "data/maps/Route125/scripts.pory"
Route125_EventScript_Nolen::
# 27 "data/maps/Route125/scripts.pory"
	trainerbattle_single TRAINER_NOLEN, Route125_Text_NolenIntro, Route125_Text_NolenDefeat
# 28 "data/maps/Route125/scripts.pory"
	msgbox Route125_Text_NolenPostBattle, MSGBOX_AUTOCLOSE
# 29 "data/maps/Route125/scripts.pory"
	end
# 30 "data/maps/Route125/scripts.pory"

# 31 "data/maps/Route125/scripts.pory"
Route125_EventScript_Stan::
# 32 "data/maps/Route125/scripts.pory"
	trainerbattle_single TRAINER_STAN, Route125_Text_StanIntro, Route125_Text_StanDefeat
# 33 "data/maps/Route125/scripts.pory"
	msgbox Route125_Text_StanPostBattle, MSGBOX_AUTOCLOSE
# 34 "data/maps/Route125/scripts.pory"
	end
# 35 "data/maps/Route125/scripts.pory"

# 36 "data/maps/Route125/scripts.pory"
Route125_EventScript_Tanya::
# 37 "data/maps/Route125/scripts.pory"
	trainerbattle_single TRAINER_TANYA, Route125_Text_TanyaIntro, Route125_Text_TanyaDefeat
# 38 "data/maps/Route125/scripts.pory"
	msgbox Route125_Text_TanyaPostBattle, MSGBOX_AUTOCLOSE
# 39 "data/maps/Route125/scripts.pory"
	end
# 40 "data/maps/Route125/scripts.pory"

# 41 "data/maps/Route125/scripts.pory"
Route125_EventScript_Sharon::
# 42 "data/maps/Route125/scripts.pory"
	trainerbattle_single TRAINER_SHARON, Route125_Text_SharonIntro, Route125_Text_SharonDefeat
# 43 "data/maps/Route125/scripts.pory"
	msgbox Route125_Text_SharonPostBattle, MSGBOX_AUTOCLOSE
# 44 "data/maps/Route125/scripts.pory"
	end
# 45 "data/maps/Route125/scripts.pory"

# 46 "data/maps/Route125/scripts.pory"
Route125_EventScript_Ernest::
# 47 "data/maps/Route125/scripts.pory"
	trainerbattle_single TRAINER_ERNEST_1, Route125_Text_ErnestIntro, Route125_Text_ErnestDefeat, Route125_EventScript_RegisterErnest
# 48 "data/maps/Route125/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 49 "data/maps/Route125/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route125_EventScript_RematchErnest
# 50 "data/maps/Route125/scripts.pory"
	msgbox Route125_Text_ErnestPostBattle, MSGBOX_DEFAULT
# 51 "data/maps/Route125/scripts.pory"
	release
# 52 "data/maps/Route125/scripts.pory"
	end
# 53 "data/maps/Route125/scripts.pory"

# 54 "data/maps/Route125/scripts.pory"
Route125_EventScript_RegisterErnest::
# 55 "data/maps/Route125/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 56 "data/maps/Route125/scripts.pory"
	waitmovement 0
# 57 "data/maps/Route125/scripts.pory"
	msgbox Route125_Text_ErnestRegister, MSGBOX_DEFAULT
# 58 "data/maps/Route125/scripts.pory"
	register_matchcall TRAINER_ERNEST_1
# 59 "data/maps/Route125/scripts.pory"
	release
# 60 "data/maps/Route125/scripts.pory"
	end
# 61 "data/maps/Route125/scripts.pory"

# 62 "data/maps/Route125/scripts.pory"
Route125_EventScript_RematchErnest::
# 63 "data/maps/Route125/scripts.pory"
	trainerbattle_rematch TRAINER_ERNEST_1, Route125_Text_ErnestRematchIntro, Route125_Text_ErnestRematchDefeat
# 64 "data/maps/Route125/scripts.pory"
	msgbox Route125_Text_ErnestRematchPostBattle, MSGBOX_AUTOCLOSE
# 65 "data/maps/Route125/scripts.pory"
	end
# 66 "data/maps/Route125/scripts.pory"

# 67 "data/maps/Route125/scripts.pory"
Route125_EventScript_Kim::
# 68 "data/maps/Route125/scripts.pory"
	trainerbattle_double TRAINER_KIM_AND_IRIS, Route125_Text_KimIntro, Route125_Text_KimDefeat, Route125_Text_KimNotEnoughMons
# 69 "data/maps/Route125/scripts.pory"
	msgbox Route125_Text_KimPostBattle, MSGBOX_AUTOCLOSE
# 70 "data/maps/Route125/scripts.pory"
	end
# 71 "data/maps/Route125/scripts.pory"

# 72 "data/maps/Route125/scripts.pory"
Route125_EventScript_Iris::
# 73 "data/maps/Route125/scripts.pory"
	trainerbattle_double TRAINER_KIM_AND_IRIS, Route125_Text_IrisIntro, Route125_Text_IrisDefeat, Route125_Text_IrisNotEnoughMons
# 74 "data/maps/Route125/scripts.pory"
	msgbox Route125_Text_IrisPostBattle, MSGBOX_AUTOCLOSE
# 75 "data/maps/Route125/scripts.pory"
	end
# 76 "data/maps/Route125/scripts.pory"

# 77 "data/maps/Route125/scripts.pory"
Route125_EventScript_Presley::
# 78 "data/maps/Route125/scripts.pory"
	trainerbattle_single TRAINER_PRESLEY, Route125_Text_PresleyIntro, Route125_Text_PresleyDefeat
# 79 "data/maps/Route125/scripts.pory"
	msgbox Route125_Text_PresleyPostBattle, MSGBOX_AUTOCLOSE
# 80 "data/maps/Route125/scripts.pory"
	end
# 81 "data/maps/Route125/scripts.pory"

# 82 "data/maps/Route125/scripts.pory"
Route125_EventScript_Auron::
# 83 "data/maps/Route125/scripts.pory"
	trainerbattle_single TRAINER_AURON, Route125_Text_AuronIntro, Route125_Text_AuronDefeat
# 84 "data/maps/Route125/scripts.pory"
	msgbox Route125_Text_AuronPostBattle, MSGBOX_AUTOCLOSE
# 85 "data/maps/Route125/scripts.pory"
	end

Route125_EventScript_WatchGentleman::
# 89 "data/maps/Route125/scripts.pory"
	lock
# 90 "data/maps/Route125/scripts.pory"
	faceplayer
# 91 "data/maps/Route125/scripts.pory"
	msgbox Route125_EventScript_WatchGentleman_Text_0, MSGBOX_YESNO
# 92 "data/maps/Route125/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route125_EventScript_WatchGentleman_2
# 101 "data/maps/Route125/scripts.pory"
	msgbox Route125_EventScript_WatchGentleman_Text_1
Route125_EventScript_WatchGentleman_1:
# 103 "data/maps/Route125/scripts.pory"
	releaseall
	end

Route125_EventScript_WatchGentleman_2:
# 93 "data/maps/Route125/scripts.pory"
	checkplayergender
# 94 "data/maps/Route125/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 95 "data/maps/Route125/scripts.pory"
	incrementgamestat GAME_STAT_CHECKED_CLOCK
# 96 "data/maps/Route125/scripts.pory"
	fadescreen FADE_TO_BLACK
# 97 "data/maps/Route125/scripts.pory"
	special Special_ViewWallClock
# 98 "data/maps/Route125/scripts.pory"
	waitstate
	goto Route125_EventScript_WatchGentleman_1


Route125_EventScript_WatchGentleman_Text_0:
# 91 "data/maps/Route125/scripts.pory"
	.string "Could you check my watch and set it for\n"
	.string "me if it's not the correct time?$"

Route125_EventScript_WatchGentleman_Text_1:
# 101 "data/maps/Route125/scripts.pory"
	.string "Well then...$"
