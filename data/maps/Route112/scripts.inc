# 1 "data/maps/Route112/scripts.pory"

# 2 "data/maps/Route112/scripts.pory"
Route112_MapScripts::
# 3 "data/maps/Route112/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route112_OnTransition
# 4 "data/maps/Route112/scripts.pory"
	.byte 0
# 5 "data/maps/Route112/scripts.pory"

# 6 "data/maps/Route112/scripts.pory"
Route112_OnTransition:
# 7 "data/maps/Route112/scripts.pory"
	setflag FLAG_TEMP_1
# 8 "data/maps/Route112/scripts.pory"
	call_if_eq VAR_EMERALBODY_RIVAL_STATE, 7, EventScript_Clear_FlagTemp1
# 9 "data/maps/Route112/scripts.pory"
	clearflag FLAG_FORCE_MIRAGE_TOWER_VISIBLE
# 10 "data/maps/Route112/scripts.pory"
	setvar VAR_JAGGED_PASS_ASH_WEATHER, 0
# 11 "data/maps/Route112/scripts.pory"
	end
# 12 "data/maps/Route112/scripts.pory"

# 13 "data/maps/Route112/scripts.pory"
Route112_EventScript_MagmaGrunts::
# 14 "data/maps/Route112/scripts.pory"
	lockall
# 15 "data/maps/Route112/scripts.pory"
	delay 40
# 16 "data/maps/Route112/scripts.pory"
	applymovement LOCALID_ROUTE112_GRUNT_1, Common_Movement_WalkInPlaceFasterRight
# 17 "data/maps/Route112/scripts.pory"
	waitmovement 0
# 18 "data/maps/Route112/scripts.pory"
	delay 20
# 19 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_LeaderGoingToAwakenThing, MSGBOX_DEFAULT
# 20 "data/maps/Route112/scripts.pory"
	closemessage
# 21 "data/maps/Route112/scripts.pory"
	applymovement LOCALID_ROUTE112_GRUNT_1, Common_Movement_FaceOriginalDirection
# 22 "data/maps/Route112/scripts.pory"
	waitmovement 0
# 23 "data/maps/Route112/scripts.pory"
	delay 40
# 24 "data/maps/Route112/scripts.pory"
	applymovement LOCALID_ROUTE112_GRUNT_2, Common_Movement_WalkInPlaceFasterLeft
# 25 "data/maps/Route112/scripts.pory"
	waitmovement 0
# 26 "data/maps/Route112/scripts.pory"
	delay 20
# 27 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_YeahWeNeedMeteorite, MSGBOX_DEFAULT
# 28 "data/maps/Route112/scripts.pory"
	closemessage
# 29 "data/maps/Route112/scripts.pory"
	applymovement LOCALID_ROUTE112_GRUNT_2, Common_Movement_FaceOriginalDirection
# 30 "data/maps/Route112/scripts.pory"
	waitmovement 0
# 31 "data/maps/Route112/scripts.pory"
	delay 40
# 32 "data/maps/Route112/scripts.pory"
	applymovement LOCALID_ROUTE112_GRUNT_1, Common_Movement_WalkInPlaceFasterRight
# 33 "data/maps/Route112/scripts.pory"
	waitmovement 0
# 34 "data/maps/Route112/scripts.pory"
	delay 20
# 35 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_OhThatsWhyCrewWentToFallarbor, MSGBOX_DEFAULT
# 36 "data/maps/Route112/scripts.pory"
	closemessage
# 37 "data/maps/Route112/scripts.pory"
	applymovement LOCALID_ROUTE112_GRUNT_1, Common_Movement_FaceOriginalDirection
# 38 "data/maps/Route112/scripts.pory"
	waitmovement 0
# 39 "data/maps/Route112/scripts.pory"
	delay 40
# 40 "data/maps/Route112/scripts.pory"
	applymovement LOCALID_ROUTE112_GRUNT_2, Common_Movement_WalkInPlaceFasterLeft
# 41 "data/maps/Route112/scripts.pory"
	waitmovement 0
# 42 "data/maps/Route112/scripts.pory"
	delay 20
# 43 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_CantLetAnyonePassUntilTheyreBack, MSGBOX_DEFAULT
# 44 "data/maps/Route112/scripts.pory"
	closemessage
# 45 "data/maps/Route112/scripts.pory"
	applymovement LOCALID_ROUTE112_GRUNT_2, Common_Movement_FaceOriginalDirection
# 46 "data/maps/Route112/scripts.pory"
	waitmovement 0
# 47 "data/maps/Route112/scripts.pory"
	releaseall
# 48 "data/maps/Route112/scripts.pory"
	end
# 49 "data/maps/Route112/scripts.pory"

# 50 "data/maps/Route112/scripts.pory"
Route112_EventScript_MtChimneyCableCarSign::
# 51 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_MtChimneyCableCarSign, MSGBOX_SIGN
# 52 "data/maps/Route112/scripts.pory"
	end
# 53 "data/maps/Route112/scripts.pory"

# 54 "data/maps/Route112/scripts.pory"
Route112_EventScript_MtChimneySign::
# 55 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_MtChimneySign, MSGBOX_SIGN
# 56 "data/maps/Route112/scripts.pory"
	end
# 57 "data/maps/Route112/scripts.pory"

# 58 "data/maps/Route112/scripts.pory"
Route112_EventScript_RouteSignLavaridge::
# 59 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_RouteSignLavaridge, MSGBOX_SIGN
# 60 "data/maps/Route112/scripts.pory"
	end
# 61 "data/maps/Route112/scripts.pory"

# 62 "data/maps/Route112/scripts.pory"
Route112_EventScript_Hiker::
# 63 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_NotEasyToGetBackToLavaridge, MSGBOX_NPC
# 64 "data/maps/Route112/scripts.pory"
	end
# 65 "data/maps/Route112/scripts.pory"

# 66 "data/maps/Route112/scripts.pory"
Route112_EventScript_Brice::
# 67 "data/maps/Route112/scripts.pory"
	trainerbattle_single TRAINER_BRICE, Route112_Text_BriceIntro, Route112_Text_BriceDefeat
# 68 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_BricePostBattle, MSGBOX_AUTOCLOSE
# 69 "data/maps/Route112/scripts.pory"
	end
# 70 "data/maps/Route112/scripts.pory"

# 71 "data/maps/Route112/scripts.pory"
Route112_EventScript_Trent::
# 72 "data/maps/Route112/scripts.pory"
	trainerbattle_single TRAINER_TRENT_1, Route112_Text_TrentIntro, Route112_Text_TrentDefeat, Route112_EventScript_RegisterTrent
# 73 "data/maps/Route112/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 74 "data/maps/Route112/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route112_EventScript_RematchTrent
# 75 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_TrentPostBattle, MSGBOX_DEFAULT
# 76 "data/maps/Route112/scripts.pory"
	release
# 77 "data/maps/Route112/scripts.pory"
	end
# 78 "data/maps/Route112/scripts.pory"

# 79 "data/maps/Route112/scripts.pory"
Route112_EventScript_RegisterTrent::
# 80 "data/maps/Route112/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 81 "data/maps/Route112/scripts.pory"
	waitmovement 0
# 82 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_TrentRegister, MSGBOX_DEFAULT
# 83 "data/maps/Route112/scripts.pory"
	register_matchcall TRAINER_TRENT_1
# 84 "data/maps/Route112/scripts.pory"
	release
# 85 "data/maps/Route112/scripts.pory"
	end
# 86 "data/maps/Route112/scripts.pory"

# 87 "data/maps/Route112/scripts.pory"
Route112_EventScript_RematchTrent::
# 88 "data/maps/Route112/scripts.pory"
	trainerbattle_rematch TRAINER_TRENT_1, Route112_Text_TrentRematchIntro, Route112_Text_TrentRematchDefeat
# 89 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_TrentRematchPostBattle, MSGBOX_AUTOCLOSE
# 90 "data/maps/Route112/scripts.pory"
	end
# 91 "data/maps/Route112/scripts.pory"

# 92 "data/maps/Route112/scripts.pory"
Route112_EventScript_Larry::
# 93 "data/maps/Route112/scripts.pory"
	trainerbattle_single TRAINER_LARRY, Route112_Text_LarryIntro, Route112_Text_LarryDefeat
# 94 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_LarryPostBattle, MSGBOX_AUTOCLOSE
# 95 "data/maps/Route112/scripts.pory"
	end
# 96 "data/maps/Route112/scripts.pory"

# 97 "data/maps/Route112/scripts.pory"
Route112_EventScript_Carol::
# 98 "data/maps/Route112/scripts.pory"
	trainerbattle_single TRAINER_CAROL, Route112_Text_CarolIntro, Route112_Text_CarolDefeat
# 99 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_CarolPostBattle, MSGBOX_AUTOCLOSE
# 100 "data/maps/Route112/scripts.pory"
	end
# 101 "data/maps/Route112/scripts.pory"

# 102 "data/maps/Route112/scripts.pory"
Route112_EventScript_Bryant::
# 103 "data/maps/Route112/scripts.pory"
	trainerbattle_single TRAINER_BRYANT, Route112_Text_BryantIntro, Route112_Text_BryantDefeat
# 104 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_BryantPostBattle, MSGBOX_AUTOCLOSE
# 105 "data/maps/Route112/scripts.pory"
	end
# 106 "data/maps/Route112/scripts.pory"

# 107 "data/maps/Route112/scripts.pory"
Route112_EventScript_Shayla::
# 108 "data/maps/Route112/scripts.pory"
	trainerbattle_single TRAINER_SHAYLA, Route112_Text_ShaylaIntro, Route112_Text_ShaylaDefeat
# 109 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_ShaylaPostBattle, MSGBOX_AUTOCLOSE
# 110 "data/maps/Route112/scripts.pory"
	end
# 111 "data/maps/Route112/scripts.pory"

# 112 "data/maps/Route112/scripts.pory"
Route112_Text_LeaderGoingToAwakenThing:
# 113 "data/maps/Route112/scripts.pory"
	.string "Hey, man, is our leader really going\n"
# 114 "data/maps/Route112/scripts.pory"
	.string "to awaken that thing?$"
# 115 "data/maps/Route112/scripts.pory"

# 116 "data/maps/Route112/scripts.pory"
Route112_Text_YeahWeNeedMeteorite:
# 117 "data/maps/Route112/scripts.pory"
	.string "Sounds like it, yeah. But I heard\n"
# 118 "data/maps/Route112/scripts.pory"
	.string "we need a Meteorite to do it.$"
# 119 "data/maps/Route112/scripts.pory"

# 120 "data/maps/Route112/scripts.pory"
Route112_Text_OhThatsWhyCrewWentToFallarbor:
# 121 "data/maps/Route112/scripts.pory"
	.string "Oh, I get it now. That's why the rest\n"
# 122 "data/maps/Route112/scripts.pory"
	.string "of the crew went out to Fallarbor.$"
# 123 "data/maps/Route112/scripts.pory"

# 124 "data/maps/Route112/scripts.pory"
Route112_Text_CantLetAnyonePassUntilTheyreBack:
# 125 "data/maps/Route112/scripts.pory"
	.string "You got it. And until they come back,\n"
# 126 "data/maps/Route112/scripts.pory"
	.string "we're not to let anyone pass, right.$"
# 127 "data/maps/Route112/scripts.pory"

# 128 "data/maps/Route112/scripts.pory"
Route112_Text_NotEasyToGetBackToLavaridge:
# 129 "data/maps/Route112/scripts.pory"
	.string "Eh, I'd like to get to Mauville, but if\n"
# 130 "data/maps/Route112/scripts.pory"
	.string "I went down these ledges, it'd be no\l"
# 131 "data/maps/Route112/scripts.pory"
	.string "easy matter to get back to Lavaridge.$"
# 132 "data/maps/Route112/scripts.pory"

# 133 "data/maps/Route112/scripts.pory"
Route112_Text_MtChimneyCableCarSign:
# 134 "data/maps/Route112/scripts.pory"
	.string "Mt. Chimney Cable Car\n"
# 135 "data/maps/Route112/scripts.pory"
	.string "“A short walk {UP_ARROW} way!”$"
# 136 "data/maps/Route112/scripts.pory"

# 137 "data/maps/Route112/scripts.pory"
Route112_Text_MtChimneySign:
# 138 "data/maps/Route112/scripts.pory"
	.string "Mt. Chimney\p"
# 139 "data/maps/Route112/scripts.pory"
	.string "“For Lavaridge Town or the summit,\n"
# 140 "data/maps/Route112/scripts.pory"
	.string "please take the Cable Car.”$"
# 141 "data/maps/Route112/scripts.pory"

# 142 "data/maps/Route112/scripts.pory"
Route112_Text_RouteSignLavaridge:
# 143 "data/maps/Route112/scripts.pory"
	.string "Route 112\n"
# 144 "data/maps/Route112/scripts.pory"
	.string "{LEFT_ARROW} Lavaridge Town$"
