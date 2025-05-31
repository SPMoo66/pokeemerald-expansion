# 1 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_MapScripts::
# 3 "data/maps/PetalburgCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, PetalburgCity_Gym_OnLoad
# 4 "data/maps/PetalburgCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PetalburgCity_Gym_OnTransition
# 5 "data/maps/PetalburgCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PetalburgCity_Gym_OnWarp
# 6 "data/maps/PetalburgCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PetalburgCity_Gym_OnFrame
# 7 "data/maps/PetalburgCity_Gym/scripts.pory"
	.byte 0
# 8 "data/maps/PetalburgCity_Gym/scripts.pory"

# 9 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_OnLoad:
# 10 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_PETALBURG_GYM_STATE, 6, PetalburgCity_Gym_EventScript_OpenUnlockedDoors
# 11 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_ge VAR_PETALBURG_GYM_STATE, 7, PetalburgCity_Gym_EventScript_UnlockAllDoors
# 12 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 13 "data/maps/PetalburgCity_Gym/scripts.pory"

# 14 "data/maps/PetalburgCity_Gym/scripts.pory"
@ NOTE: Strength and OHKO rooms are misleading. Both are more accurately Critical-Hit
# 15 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenUnlockedDoors::
# 16 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 1
# 17 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenGymEntranceDoors
# 18 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_defeated TRAINER_RANDALL, PetalburgCity_Gym_EventScript_OpenSpeedRoomDoors
# 19 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_defeated TRAINER_MARY, PetalburgCity_Gym_EventScript_OpenAccuracyRoomDoors
# 20 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_defeated TRAINER_PARKER, PetalburgCity_Gym_EventScript_OpenConfusionRoomDoors
# 21 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_defeated TRAINER_ALEXIA, PetalburgCity_Gym_EventScript_OpenDefenseRoomDoors
# 22 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_defeated TRAINER_GEORGE, PetalburgCity_Gym_EventScript_OpenRecoveryRoomDoors
# 23 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_defeated TRAINER_JODY, PetalburgCity_Gym_EventScript_OpenStrengthRoomDoors
# 24 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_defeated TRAINER_BERKE, PetalburgCity_Gym_EventScript_OpenOHKORoomDoors
# 25 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 26 "data/maps/PetalburgCity_Gym/scripts.pory"

# 27 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_UnlockAllDoors::
# 28 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 1
# 29 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenGymEntranceDoors
# 30 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenSpeedRoomDoors
# 31 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenAccuracyRoomDoors
# 32 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenConfusionRoomDoors
# 33 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenDefenseRoomDoors
# 34 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenRecoveryRoomDoors
# 35 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenStrengthRoomDoors
# 36 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenOHKORoomDoors
# 37 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 38 "data/maps/PetalburgCity_Gym/scripts.pory"

# 39 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_OnTransition:
# 40 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_PETALBURG_GYM_STATE, 1, PetalburgCity_Gym_EventScript_MoveWallyToEntrance
# 41 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_lt VAR_PETALBURG_GYM_STATE, 6, PetalburgCity_Gym_EventScript_MoveNormanToEntrance
# 42 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_set FLAG_SYS_GAME_CLEAR, PetalburgCity_Gym_EventScript_CheckNormanForRematch
# 43 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 44 "data/maps/PetalburgCity_Gym/scripts.pory"

# 45 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_MoveWallyToEntrance::
# 46 "data/maps/PetalburgCity_Gym/scripts.pory"
	setobjectxyperm LOCALID_PETALBURG_GYM_WALLY, 5, 108
# 47 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 48 "data/maps/PetalburgCity_Gym/scripts.pory"

# 49 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_MoveNormanToEntrance::
# 50 "data/maps/PetalburgCity_Gym/scripts.pory"
	setobjectxyperm LOCALID_PETALBURG_GYM_NORMAN, 4, 107
# 51 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 52 "data/maps/PetalburgCity_Gym/scripts.pory"

# 53 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_CheckNormanForRematch::
# 54 "data/maps/PetalburgCity_Gym/scripts.pory"
	setorcopyvar VAR_TRAINER_BATTLE_OPPONENT_A, TRAINER_NORMAN_1
# 55 "data/maps/PetalburgCity_Gym/scripts.pory"
	specialvar VAR_RESULT, IsTrainerReadyForRematch
# 56 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, PetalburgCity_Gym_EventScript_DontMoveNormanToFront
# 57 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_PETALBURG_GYM_STATE, 8, PetalburgCity_Gym_EventScript_DontMoveNormanToFront
# 58 "data/maps/PetalburgCity_Gym/scripts.pory"
	setobjectxyperm LOCALID_PETALBURG_GYM_NORMAN, 4, 107
# 59 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 60 "data/maps/PetalburgCity_Gym/scripts.pory"

# 61 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_DontMoveNormanToFront::
# 62 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 8
# 63 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 64 "data/maps/PetalburgCity_Gym/scripts.pory"

# 65 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_OnWarp:
# 66 "data/maps/PetalburgCity_Gym/scripts.pory"
	map_script_2 VAR_PETALBURG_GYM_STATE, 1, PetalburgCity_Gym_EventScript_TurnPlayerNorth
# 67 "data/maps/PetalburgCity_Gym/scripts.pory"
	.2byte 0
# 68 "data/maps/PetalburgCity_Gym/scripts.pory"

# 69 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_TurnPlayerNorth::
# 70 "data/maps/PetalburgCity_Gym/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 71 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 72 "data/maps/PetalburgCity_Gym/scripts.pory"

# 73 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_OnFrame:
# 74 "data/maps/PetalburgCity_Gym/scripts.pory"
	map_script_2 VAR_PETALBURG_GYM_STATE, 1, PetalburgCity_Gym_EventScript_ReturnFromWallyTutorial
# 75 "data/maps/PetalburgCity_Gym/scripts.pory"
	.2byte 0
# 76 "data/maps/PetalburgCity_Gym/scripts.pory"

# 77 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ReturnFromWallyTutorial::
# 78 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 79 "data/maps/PetalburgCity_Gym/scripts.pory"
	speakername (CommonText_Dad)
# 80 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadSoDidItWorkOut, MSGBOX_DEFAULT
# 81 "data/maps/PetalburgCity_Gym/scripts.pory"
	speakername (CommonText_Wally)
# 82 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WallyThankYouBye, MSGBOX_DEFAULT
# 83 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 84 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 85 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLY, PetalburgCity_Gym_Movement_WallyExitGym
# 86 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 87 "data/maps/PetalburgCity_Gym/scripts.pory"
	playse SE_EXIT
# 88 "data/maps/PetalburgCity_Gym/scripts.pory"
	removeobject LOCALID_PETALBURG_GYM_WALLY
# 89 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_CITY_WALLY
# 90 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 30
# 91 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 92 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 93 "data/maps/PetalburgCity_Gym/scripts.pory"
	speakername (CommonText_Dad)
# 94 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadGoCollectBadges, MSGBOX_DEFAULT
# 95 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 96 "data/maps/PetalburgCity_Gym/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 97 "data/maps/PetalburgCity_Gym/scripts.pory"
	message PetalburgCity_Gym_Text_PokevialGet
# 98 "data/maps/PetalburgCity_Gym/scripts.pory"
    additem ITEM_POKEVIAL
# 99 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitfanfare
# 100 "data/maps/PetalburgCity_Gym/scripts.pory"
	speakername (CommonText_Dad)
# 101 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadPokevial, MSGBOX_DEFAULT
# 102 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 2
# 103 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 104 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 105 "data/maps/PetalburgCity_Gym/scripts.pory"

# 106 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyExitGym:
# 107 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 108 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 109 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 110 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 111 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 112 "data/maps/PetalburgCity_Gym/scripts.pory"

# 113 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Norman::
# 114 "data/maps/PetalburgCity_Gym/scripts.pory"
	lock
# 115 "data/maps/PetalburgCity_Gym/scripts.pory"
	faceplayer
# 116 "data/maps/PetalburgCity_Gym/scripts.pory"
	switch VAR_PETALBURG_GYM_STATE
# 117 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 2, PetalburgCity_Gym_EventScript_NormanNoBadges
# 118 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 3, PetalburgCity_Gym_EventScript_NormanOneBadge
# 119 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 4, PetalburgCity_Gym_EventScript_NormanTwoBadges
# 120 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 5, PetalburgCity_Gym_EventScript_NormanThreeBadges
# 121 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 6, PetalburgCity_Gym_EventScript_NormanBattle
# 122 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 7, PetalburgCity_Gym_EventScript_NormanPostBattle
# 123 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 8, PetalburgCity_Gym_EventScript_NormanRematch
# 124 "data/maps/PetalburgCity_Gym/scripts.pory"
	speakername (CommonText_Dad)
# 125 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadYoureHereWithYourPokemon, MSGBOX_DEFAULT
# 126 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 127 "data/maps/PetalburgCity_Gym/scripts.pory"
	switch VAR_FACING
# 128 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_SOUTH, PetalburgCity_Gym_EventScript_BeginWallyTutorialSouth
# 129 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_NORTH, PetalburgCity_Gym_EventScript_BeginWallyTutorialNorth
# 130 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_WEST, PetalburgCity_Gym_EventScript_BeginWallyTutorialWest
# 131 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_EAST, PetalburgCity_Gym_EventScript_BeginWallyTutorialEast
# 132 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 133 "data/maps/PetalburgCity_Gym/scripts.pory"

# 134 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorialSouth::
# 135 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 0
# 136 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial
# 137 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 138 "data/maps/PetalburgCity_Gym/scripts.pory"

# 139 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorialNorth::
# 140 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 141 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial
# 142 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 143 "data/maps/PetalburgCity_Gym/scripts.pory"

# 144 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorialWest::
# 145 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 2
# 146 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial
# 147 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 148 "data/maps/PetalburgCity_Gym/scripts.pory"

# 149 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorialEast::
# 150 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 3
# 151 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial
# 152 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 153 "data/maps/PetalburgCity_Gym/scripts.pory"

# 154 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorial::
# 155 "data/maps/PetalburgCity_Gym/scripts.pory"
	addobject LOCALID_PETALBURG_GYM_WALLY
# 156 "data/maps/PetalburgCity_Gym/scripts.pory"
	playse SE_DOOR
# 157 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_Gym_EventScript_WallyArriveSouth
# 158 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_WallyArriveNorth
# 159 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_WallyArriveWestEast
# 160 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_WallyArriveWestEast
# 161 "data/maps/PetalburgCity_Gym/scripts.pory"
	speakername (CommonText_Q)
# 162 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WallyIdLikeAPokemon, MSGBOX_DEFAULT
# 163 "data/maps/PetalburgCity_Gym/scripts.pory"
	speakername (CommonText_Dad)
# 164 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadOhYoureWallyRight, MSGBOX_DEFAULT
# 165 "data/maps/PetalburgCity_Gym/scripts.pory"
	speakername (CommonText_Wally)
# 166 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WallyIveNeverCaughtAPokemon, MSGBOX_DEFAULT
# 167 "data/maps/PetalburgCity_Gym/scripts.pory"
	speakername (CommonText_Dad)
# 168 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadHmISee, MSGBOX_DEFAULT
# 169 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_Gym_EventScript_NormanAddressPlayerSouth
# 170 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_NormanAddressPlayerNorth
# 171 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_NormanAddressPlayerWest
# 172 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_NormanAddressPlayerEast
# 173 "data/maps/PetalburgCity_Gym/scripts.pory"
	speakername (CommonText_Dad)
# 174 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadPlayerGoWithWally, MSGBOX_DEFAULT
# 175 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_Gym_EventScript_NormanAddressWallySouth
# 176 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_NormanAddressWallyNorth
# 177 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_NormanAddressWallyWest
# 178 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_NormanAddressWallyEast
# 179 "data/maps/PetalburgCity_Gym/scripts.pory"
	speakername (CommonText_Dad)
# 180 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_IllLoanYouMyZigzagoon, MSGBOX_DEFAULT
# 181 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 182 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WallyReceivedAZigzagoon, MSGBOX_DEFAULT
# 183 "data/maps/PetalburgCity_Gym/scripts.pory"
	speakername (CommonText_Wally)
# 184 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WallyThankYou, MSGBOX_DEFAULT
# 185 "data/maps/PetalburgCity_Gym/scripts.pory"
	speakername (CommonText_Dad)
# 186 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_AndDadGivesPokeBall, MSGBOX_DEFAULT
# 187 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 188 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WallyReceivedAPokeball, MSGBOX_DEFAULT
# 189 "data/maps/PetalburgCity_Gym/scripts.pory"
	speakername (CommonText_Wally)
# 190 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WallyOhWowThankYou, MSGBOX_DEFAULT
# 191 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_Gym_EventScript_NormanFaceDoorSouth
# 192 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_NormanFaceDoorNorth
# 193 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_Gym_EventScript_WallyFacePlayer
# 194 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_WallyFaceDown
# 195 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_WallyFacePlayer
# 196 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_WallyFacePlayer
# 197 "data/maps/PetalburgCity_Gym/scripts.pory"
	speakername (CommonText_Wally)
# 198 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WouldYouReallyComeWithMe, MSGBOX_DEFAULT
# 199 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 200 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 201 "data/maps/PetalburgCity_Gym/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 202 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_Gym_EventScript_ExitGymWithWallySouth
# 203 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_ExitGymWithWallyNorth
# 204 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_ExitGymWithWallyWest
# 205 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_ExitGymWithWallyEast
# 206 "data/maps/PetalburgCity_Gym/scripts.pory"
	removeobject LOCALID_PETALBURG_GYM_WALLY
# 207 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_CITY_WALLYS_MOM
# 208 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 1
# 209 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 2
# 210 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_PETALBURG_CITY_WALLY
# 211 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_PETALBURG_GYM_WALLY
# 212 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_RIVAL
# 213 "data/maps/PetalburgCity_Gym/scripts.pory"
	special InitBirchState
# 214 "data/maps/PetalburgCity_Gym/scripts.pory"
	warp MAP_PETALBURG_CITY, 15, 8
# 215 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitstate
# 216 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 217 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 218 "data/maps/PetalburgCity_Gym/scripts.pory"

# 219 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallyArriveSouth::
# 220 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 221 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLY, PetalburgCity_Gym_Movement_WallyArrive
# 222 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 223 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 224 "data/maps/PetalburgCity_Gym/scripts.pory"

# 225 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallyArriveNorth::
# 226 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLY, PetalburgCity_Gym_Movement_WallyArriveNorth
# 227 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 228 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterRight
# 229 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 230 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 231 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 232 "data/maps/PetalburgCity_Gym/scripts.pory"

# 233 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallyArriveWestEast::
# 234 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 235 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 236 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLY, PetalburgCity_Gym_Movement_WallyArrive
# 237 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 238 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 239 "data/maps/PetalburgCity_Gym/scripts.pory"

# 240 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallySouth::
# 241 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 242 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLY, PetalburgCity_Gym_Movement_WallyExitSouthWest
# 243 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallySouth
# 244 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 245 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 246 "data/maps/PetalburgCity_Gym/scripts.pory"

# 247 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallyNorth::
# 248 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLY, PetalburgCity_Gym_Movement_WallyExitNorth
# 249 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallyNorth
# 250 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 251 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 252 "data/maps/PetalburgCity_Gym/scripts.pory"

# 253 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallyWest::
# 254 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLY, PetalburgCity_Gym_Movement_WallyExitSouthWest
# 255 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallyWest
# 256 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 257 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 258 "data/maps/PetalburgCity_Gym/scripts.pory"

# 259 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallyEast::
# 260 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLY, PetalburgCity_Gym_Movement_WallyExitEast
# 261 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallyEast
# 262 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 263 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 264 "data/maps/PetalburgCity_Gym/scripts.pory"

# 265 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressPlayerSouth::
# 266 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterUp
# 267 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 268 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 269 "data/maps/PetalburgCity_Gym/scripts.pory"

# 270 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressPlayerNorth::
# 271 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 272 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 273 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 274 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 275 "data/maps/PetalburgCity_Gym/scripts.pory"

# 276 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressPlayerWest::
# 277 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterRight
# 278 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 279 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 280 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 281 "data/maps/PetalburgCity_Gym/scripts.pory"

# 282 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressPlayerEast::
# 283 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterLeft
# 284 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 285 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 286 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 287 "data/maps/PetalburgCity_Gym/scripts.pory"

# 288 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressWallySouth::
# 289 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 290 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 291 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 292 "data/maps/PetalburgCity_Gym/scripts.pory"

# 293 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressWallyNorth::
# 294 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterRight
# 295 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 296 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 297 "data/maps/PetalburgCity_Gym/scripts.pory"

# 298 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressWallyWest::
# 299 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 300 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 301 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 302 "data/maps/PetalburgCity_Gym/scripts.pory"

# 303 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressWallyEast::
# 304 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 305 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 306 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 307 "data/maps/PetalburgCity_Gym/scripts.pory"

# 308 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallyFacePlayer::
# 309 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLY, Common_Movement_FacePlayer
# 310 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 311 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 312 "data/maps/PetalburgCity_Gym/scripts.pory"

# 313 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallyFaceDown::
# 314 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLY, Common_Movement_WalkInPlaceFasterDown
# 315 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 316 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 317 "data/maps/PetalburgCity_Gym/scripts.pory"

# 318 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanNoBadges::
# 319 "data/maps/PetalburgCity_Gym/scripts.pory"
	speakername (CommonText_Dad)
# 320 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_NormanGoToRustboro, MSGBOX_DEFAULT
# 321 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 322 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 323 "data/maps/PetalburgCity_Gym/scripts.pory"

# 324 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanOneBadge::
# 325 "data/maps/PetalburgCity_Gym/scripts.pory"
	speakername (CommonText_Dad)
# 326 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_NormanGoToDewford, MSGBOX_DEFAULT
# 327 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 328 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 329 "data/maps/PetalburgCity_Gym/scripts.pory"

# 330 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanTwoBadges::
# 331 "data/maps/PetalburgCity_Gym/scripts.pory"
	speakername (CommonText_Dad)
# 332 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_YouHaveGottenStronger, MSGBOX_DEFAULT
# 333 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 334 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 335 "data/maps/PetalburgCity_Gym/scripts.pory"

# 336 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanThreeBadges::
# 337 "data/maps/PetalburgCity_Gym/scripts.pory"
	speakername (CommonText_Dad)
# 338 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_YouHaveGottenStronger, MSGBOX_DEFAULT
# 339 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 340 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 341 "data/maps/PetalburgCity_Gym/scripts.pory"

# 342 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanFaceDoorSouth::
# 343 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 344 "data/maps/PetalburgCity_Gym/scripts.pory"

# 345 "data/maps/PetalburgCity_Gym/scripts.pory"
@ For all other NormanFaceDoorX, Norman is already facing the door from NormanAddressWallyX
# 346 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanFaceDoorNorth::
# 347 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 348 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 349 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 350 "data/maps/PetalburgCity_Gym/scripts.pory"

# 351 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ShouldGiveEnigmaBerry::
# 352 "data/maps/PetalburgCity_Gym/scripts.pory"
	specialvar VAR_RESULT, IsEnigmaBerryValid
# 353 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, PetalburgCity_Gym_EventScript_DontGiveEnigmaBerry
# 354 "data/maps/PetalburgCity_Gym/scripts.pory"
	checkitem ITEM_ENIGMA_BERRY_E_READER
# 355 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, PetalburgCity_Gym_EventScript_DontGiveEnigmaBerry
# 356 "data/maps/PetalburgCity_Gym/scripts.pory"
	checkpcitem ITEM_ENIGMA_BERRY_E_READER
# 357 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, PetalburgCity_Gym_EventScript_DontGiveEnigmaBerry
# 358 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_ENIGMA_BERRY_AVAILABLE, 0, PetalburgCity_Gym_EventScript_DontGiveEnigmaBerry
# 359 "data/maps/PetalburgCity_Gym/scripts.pory"
	speakername (CommonText_Dad)
# 360 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GiveEnigmaBerry, MSGBOX_DEFAULT
# 361 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_RESULT, TRUE
# 362 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 363 "data/maps/PetalburgCity_Gym/scripts.pory"

# 364 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_DontGiveEnigmaBerry::
# 365 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_RESULT, FALSE
# 366 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 367 "data/maps/PetalburgCity_Gym/scripts.pory"

# 368 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GiveEnigmaBerry::
# 369 "data/maps/PetalburgCity_Gym/scripts.pory"
	giveitem ITEM_ENIGMA_BERRY_E_READER
# 370 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 371 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_ENIGMA_BERRY_AVAILABLE, 0
# 372 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 373 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 374 "data/maps/PetalburgCity_Gym/scripts.pory"

# 375 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadArrivesNorth::
# 376 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 377 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_WallysDadArrives
# 378 "data/maps/PetalburgCity_Gym/scripts.pory"

# 379 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadArrivesEast::
# 380 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 2
# 381 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_WallysDadArrives
# 382 "data/maps/PetalburgCity_Gym/scripts.pory"

# 383 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadArrivesWest::
# 384 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 3
# 385 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_WallysDadArrives
# 386 "data/maps/PetalburgCity_Gym/scripts.pory"

# 387 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadArrives::
# 388 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadEnterGym
# 389 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 390 "data/maps/PetalburgCity_Gym/scripts.pory"
	playse SE_PIN
# 391 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLYS_DAD, Common_Movement_ExclamationMark
# 392 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 393 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLYS_DAD, Common_Movement_Delay48
# 394 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 395 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 10
# 396 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_WallysDadApproachPlayerNorth
# 397 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_WallysDadApproachPlayerEast
# 398 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_WallysDadApproachPlayerWest
# 399 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_PleaseComeWithMe, MSGBOX_DEFAULT
# 400 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 401 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 20
# 402 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_WallysDadFaceNormanNorth
# 403 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_WallysDadFaceNormanEast
# 404 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_WallysDadFaceNormanWest
# 405 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_LetMeBorrowPlayer, MSGBOX_DEFAULT
# 406 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 407 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 408 "data/maps/PetalburgCity_Gym/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 409 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_ExitGymWithWallysDadNorth
# 410 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_ExitGymWithWallysDadEast
# 411 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_ExitGymWithWallysDadWest
# 412 "data/maps/PetalburgCity_Gym/scripts.pory"
	removeobject LOCALID_PETALBURG_GYM_WALLYS_DAD
# 413 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 4
# 414 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_PETALBURG_CITY_WALLYS_DAD
# 415 "data/maps/PetalburgCity_Gym/scripts.pory"
	warp MAP_PETALBURG_CITY, 15, 8
# 416 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitstate
# 417 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 418 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 419 "data/maps/PetalburgCity_Gym/scripts.pory"

# 420 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadFaceNormanNorth::
# 421 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLYS_DAD, Common_Movement_WalkInPlaceFasterUp
# 422 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 423 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 424 "data/maps/PetalburgCity_Gym/scripts.pory"

# 425 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadFaceNormanEast::
# 426 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLYS_DAD, Common_Movement_WalkInPlaceFasterRight
# 427 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 428 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 429 "data/maps/PetalburgCity_Gym/scripts.pory"

# 430 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadFaceNormanWest::
# 431 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLYS_DAD, Common_Movement_WalkInPlaceFasterLeft
# 432 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 433 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 434 "data/maps/PetalburgCity_Gym/scripts.pory"

# 435 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadApproachPlayerNorth::
# 436 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadApproachPlayerNorth
# 437 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 438 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 439 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterLeft
# 440 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 441 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 442 "data/maps/PetalburgCity_Gym/scripts.pory"

# 443 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadApproachPlayerEast::
# 444 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadApproachPlayerEast
# 445 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 446 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 447 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 448 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 449 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 450 "data/maps/PetalburgCity_Gym/scripts.pory"

# 451 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadApproachPlayerWest::
# 452 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadApproachPlayerWest
# 453 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 454 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 455 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 456 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 457 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 458 "data/maps/PetalburgCity_Gym/scripts.pory"

# 459 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallysDadNorth::
# 460 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadExitNorth
# 461 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 462 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallysDadNorth
# 463 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 464 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 465 "data/maps/PetalburgCity_Gym/scripts.pory"

# 466 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallysDadEast::
# 467 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadExitEast
# 468 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallysDadEast
# 469 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 470 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 471 "data/maps/PetalburgCity_Gym/scripts.pory"

# 472 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallysDadWest::
# 473 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadExitWest
# 474 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallysDadWest
# 475 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 476 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 477 "data/maps/PetalburgCity_Gym/scripts.pory"

# 478 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadExitNorth:
# 479 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 480 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 481 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 482 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 483 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 484 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 485 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 486 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 487 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 488 "data/maps/PetalburgCity_Gym/scripts.pory"
	set_invisible
# 489 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 490 "data/maps/PetalburgCity_Gym/scripts.pory"

# 491 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadExitEast:
# 492 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 493 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 494 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 495 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 496 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 497 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 498 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 499 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 500 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 501 "data/maps/PetalburgCity_Gym/scripts.pory"
	set_invisible
# 502 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 503 "data/maps/PetalburgCity_Gym/scripts.pory"

# 504 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadExitWest:
# 505 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 506 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 507 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 508 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 509 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 510 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 511 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 512 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 513 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 514 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 515 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 516 "data/maps/PetalburgCity_Gym/scripts.pory"
	set_invisible
# 517 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 518 "data/maps/PetalburgCity_Gym/scripts.pory"

# 519 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallysDadNorth:
# 520 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 521 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 522 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 523 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 524 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 525 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 526 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 527 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 528 "data/maps/PetalburgCity_Gym/scripts.pory"

# 529 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallysDadEast:
# 530 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 531 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 532 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 533 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 534 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 535 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 536 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 537 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 538 "data/maps/PetalburgCity_Gym/scripts.pory"

# 539 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallysDadWest:
# 540 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 541 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 542 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 543 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 544 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 545 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 546 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 547 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 548 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 549 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 550 "data/maps/PetalburgCity_Gym/scripts.pory"

# 551 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadEnterGym:
# 552 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 553 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 554 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_right
# 555 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 556 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_left
# 557 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 558 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 559 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 560 "data/maps/PetalburgCity_Gym/scripts.pory"

# 561 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadApproachPlayerNorth:
# 562 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 563 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 564 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 565 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 566 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 567 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_right
# 568 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 569 "data/maps/PetalburgCity_Gym/scripts.pory"

# 570 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadApproachPlayerEast:
# 571 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 572 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 573 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 574 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 575 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 576 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 577 "data/maps/PetalburgCity_Gym/scripts.pory"

# 578 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadApproachPlayerWest:
# 579 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 580 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 581 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 582 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 583 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 584 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 585 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 586 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 587 "data/maps/PetalburgCity_Gym/scripts.pory"

# 588 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyArriveNorth:
# 589 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 590 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 591 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 592 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 593 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 594 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 595 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 596 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 597 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_left
# 598 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 599 "data/maps/PetalburgCity_Gym/scripts.pory"

# 600 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyArrive:
# 601 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 602 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 603 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 604 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 605 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 606 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 607 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 608 "data/maps/PetalburgCity_Gym/scripts.pory"

# 609 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyExitNorth:
# 610 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 611 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 612 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 613 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 614 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 615 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 616 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 617 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 618 "data/maps/PetalburgCity_Gym/scripts.pory"

# 619 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyExitEast:
# 620 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 621 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 622 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 623 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 624 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 625 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 626 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 627 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 628 "data/maps/PetalburgCity_Gym/scripts.pory"

# 629 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyExitSouthWest:
# 630 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 631 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 632 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 633 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 634 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 635 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 636 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 637 "data/maps/PetalburgCity_Gym/scripts.pory"

# 638 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallyNorth:
# 639 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 640 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 641 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 642 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 643 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 644 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 645 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 646 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 647 "data/maps/PetalburgCity_Gym/scripts.pory"

# 648 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallySouth:
# 649 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 650 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 651 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 652 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 653 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 654 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 655 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 656 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 657 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 658 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 659 "data/maps/PetalburgCity_Gym/scripts.pory"

# 660 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallyWest:
# 661 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 662 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 663 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 664 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 665 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 666 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 667 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 668 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 669 "data/maps/PetalburgCity_Gym/scripts.pory"

# 670 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallyEast:
# 671 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_down
# 672 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 673 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 674 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 675 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 676 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 677 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 678 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 679 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 680 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 681 "data/maps/PetalburgCity_Gym/scripts.pory"

# 682 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SpeedRoomDoor::
# 683 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 684 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_lt VAR_PETALBURG_GYM_STATE, 6, PetalburgCity_Gym_EventScript_DoorLocked
# 685 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 686 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 85
# 687 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_EnterRoom
# 688 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 689 "data/maps/PetalburgCity_Gym/scripts.pory"

# 690 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_EnterRoom::
# 691 "data/maps/PetalburgCity_Gym/scripts.pory"
	warpdoor MAP_PETALBURG_CITY_GYM, VAR_0x8008, VAR_0x8009
# 692 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitstate
# 693 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 694 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 695 "data/maps/PetalburgCity_Gym/scripts.pory"

# 696 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_DontEnterRoom::
# 697 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 698 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 699 "data/maps/PetalburgCity_Gym/scripts.pory"

# 700 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_DoorLocked::
# 701 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DoorAppearsLocked, MSGBOX_DEFAULT
# 702 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 703 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 704 "data/maps/PetalburgCity_Gym/scripts.pory"

# 705 "data/maps/PetalburgCity_Gym/scripts.pory"
@ VAR_0x8008 and VAR_0x8009 below are the x and y coordinates of the warp
# 706 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_AccuracyRoomDoor::
# 707 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 708 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_lt VAR_PETALBURG_GYM_STATE, 6, PetalburgCity_Gym_EventScript_DoorLocked
# 709 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 710 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 98
# 711 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_EnterRoom
# 712 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 713 "data/maps/PetalburgCity_Gym/scripts.pory"

# 714 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ConfusionRoomDoor::
# 715 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 716 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_RANDALL, PetalburgCity_Gym_EventScript_DoorLocked
# 717 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 718 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 46
# 719 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_EnterRoom
# 720 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 721 "data/maps/PetalburgCity_Gym/scripts.pory"

# 722 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftDefenseRoomDoor::
# 723 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 724 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_RANDALL, PetalburgCity_Gym_EventScript_DoorLocked
# 725 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 726 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 59
# 727 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_EnterRoom
# 728 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 729 "data/maps/PetalburgCity_Gym/scripts.pory"

# 730 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightDefenseRoomDoor::
# 731 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 732 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_MARY, PetalburgCity_Gym_EventScript_DoorLocked
# 733 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 734 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 59
# 735 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_EnterRoom
# 736 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 737 "data/maps/PetalburgCity_Gym/scripts.pory"

# 738 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RecoveryRoomDoor::
# 739 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 740 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_MARY, PetalburgCity_Gym_EventScript_DoorLocked
# 741 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 742 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 72
# 743 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_EnterRoom
# 744 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 745 "data/maps/PetalburgCity_Gym/scripts.pory"

# 746 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftStrengthRoomDoor::
# 747 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 748 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_PARKER, PetalburgCity_Gym_EventScript_DoorLocked
# 749 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 750 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 20
# 751 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_EnterRoom
# 752 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 753 "data/maps/PetalburgCity_Gym/scripts.pory"

# 754 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightStrengthRoomDoor::
# 755 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 756 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_ALEXIA, PetalburgCity_Gym_EventScript_DoorLocked
# 757 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 758 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 20
# 759 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_EnterRoom
# 760 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 761 "data/maps/PetalburgCity_Gym/scripts.pory"

# 762 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftOHKORoomDoor::
# 763 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 764 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_ALEXIA, PetalburgCity_Gym_EventScript_DoorLocked
# 765 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 766 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 33
# 767 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_EnterRoom
# 768 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 769 "data/maps/PetalburgCity_Gym/scripts.pory"

# 770 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightOHKORoomDoor::
# 771 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 772 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_GEORGE, PetalburgCity_Gym_EventScript_DoorLocked
# 773 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 774 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 33
# 775 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_EnterRoom
# 776 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 777 "data/maps/PetalburgCity_Gym/scripts.pory"

# 778 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftGymLeadersRoomDoor::
# 779 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 780 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_JODY, PetalburgCity_Gym_EventScript_DoorLocked
# 781 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 782 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 7
# 783 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_EnterRoom
# 784 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 785 "data/maps/PetalburgCity_Gym/scripts.pory"

# 786 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightGymLeadersRoomDoor::
# 787 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 788 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_BERKE, PetalburgCity_Gym_EventScript_DoorLocked
# 789 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 790 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 7
# 791 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_EnterRoom
# 792 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 793 "data/maps/PetalburgCity_Gym/scripts.pory"

# 794 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Randall::
# 795 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_RANDALL, PetalburgCity_Gym_Text_RandallIntro, PetalburgCity_Gym_Text_RandallDefeat, PetalburgCity_Gym_EventScript_SlideOpenSpeedRoomDoors
# 796 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_RandallPostBadge
# 797 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_RandallPostBattle, MSGBOX_AUTOCLOSE
# 798 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 799 "data/maps/PetalburgCity_Gym/scripts.pory"

# 800 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenSpeedRoomDoors::
# 801 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 802 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenSpeedRoomDoors
# 803 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 804 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 805 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 806 "data/maps/PetalburgCity_Gym/scripts.pory"

# 807 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RandallPostBadge::
# 808 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_RandallPostBadge, MSGBOX_NPC
# 809 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 810 "data/maps/PetalburgCity_Gym/scripts.pory"

# 811 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Parker::
# 812 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_PARKER, PetalburgCity_Gym_Text_ParkerIntro, PetalburgCity_Gym_Text_ParkerDefeat, PetalburgCity_Gym_EventScript_SlideOpenConfusionRoomDoors
# 813 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_ParkerPostBadge
# 814 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_ParkerPostBattle, MSGBOX_AUTOCLOSE
# 815 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 816 "data/maps/PetalburgCity_Gym/scripts.pory"

# 817 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenConfusionRoomDoors::
# 818 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 819 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenConfusionRoomDoors
# 820 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 821 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 822 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 823 "data/maps/PetalburgCity_Gym/scripts.pory"

# 824 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ParkerPostBadge::
# 825 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_ParkerPostBadge, MSGBOX_NPC
# 826 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 827 "data/maps/PetalburgCity_Gym/scripts.pory"

# 828 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_George::
# 829 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_GEORGE, PetalburgCity_Gym_Text_GeorgeIntro, PetalburgCity_Gym_Text_GeorgeDefeat, PetalburgCity_Gym_EventScript_SlideOpenRecoveryRoomDoors
# 830 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_GeorgePostBadge
# 831 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GeorgePostBattle, MSGBOX_AUTOCLOSE
# 832 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 833 "data/maps/PetalburgCity_Gym/scripts.pory"

# 834 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenRecoveryRoomDoors::
# 835 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 836 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenRecoveryRoomDoors
# 837 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 838 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 839 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 840 "data/maps/PetalburgCity_Gym/scripts.pory"

# 841 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GeorgePostBadge::
# 842 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GeorgePostBadge, MSGBOX_NPC
# 843 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 844 "data/maps/PetalburgCity_Gym/scripts.pory"

# 845 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Berke::
# 846 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_BERKE, PetalburgCity_Gym_Text_BerkeIntro, PetalburgCity_Gym_Text_BerkeDefeat, PetalburgCity_Gym_EventScript_SlideOpenOHKORoomDoors
# 847 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_BerkePostBadge
# 848 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_BerkePostBattle, MSGBOX_AUTOCLOSE
# 849 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 850 "data/maps/PetalburgCity_Gym/scripts.pory"

# 851 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenOHKORoomDoors::
# 852 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 853 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenOHKORoomDoors
# 854 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 855 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 856 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 857 "data/maps/PetalburgCity_Gym/scripts.pory"

# 858 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BerkePostBadge::
# 859 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_BerkePostBadge, MSGBOX_NPC
# 860 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 861 "data/maps/PetalburgCity_Gym/scripts.pory"

# 862 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Mary::
# 863 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_MARY, PetalburgCity_Gym_Text_MaryIntro, PetalburgCity_Gym_Text_MaryDefeat, PetalburgCity_Gym_EventScript_SlideOpenAccuracyRoomDoors
# 864 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_MaryPostBadge
# 865 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_MaryPostBattle, MSGBOX_AUTOCLOSE
# 866 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 867 "data/maps/PetalburgCity_Gym/scripts.pory"

# 868 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenAccuracyRoomDoors::
# 869 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 870 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenAccuracyRoomDoors
# 871 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 872 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 873 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 874 "data/maps/PetalburgCity_Gym/scripts.pory"

# 875 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_MaryPostBadge::
# 876 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_MaryPostBadge, MSGBOX_NPC
# 877 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 878 "data/maps/PetalburgCity_Gym/scripts.pory"

# 879 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Alexia::
# 880 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_ALEXIA, PetalburgCity_Gym_Text_AlexiaIntro, PetalburgCity_Gym_Text_AlexiaDefeat, PetalburgCity_Gym_EventScript_SlideOpenDefenseRoomDoors
# 881 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_AlexiaPostBadge
# 882 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_AlexiaPostBattle, MSGBOX_AUTOCLOSE
# 883 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 884 "data/maps/PetalburgCity_Gym/scripts.pory"

# 885 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenDefenseRoomDoors::
# 886 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 887 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenDefenseRoomDoors
# 888 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 889 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 890 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 891 "data/maps/PetalburgCity_Gym/scripts.pory"

# 892 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_AlexiaPostBadge::
# 893 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_AlexiaPostBadge, MSGBOX_NPC
# 894 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 895 "data/maps/PetalburgCity_Gym/scripts.pory"

# 896 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Jody::
# 897 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_JODY, PetalburgCity_Gym_Text_JodyIntro, PetalburgCity_Gym_Text_JodyDefeat, PetalburgCity_Gym_EventScript_SlideOpenStrengthRoomDoors
# 898 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_JodyPostBadge
# 899 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_JodyPostBattle, MSGBOX_AUTOCLOSE
# 900 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 901 "data/maps/PetalburgCity_Gym/scripts.pory"

# 902 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenStrengthRoomDoors::
# 903 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 904 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenStrengthRoomDoors
# 905 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 906 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 907 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 908 "data/maps/PetalburgCity_Gym/scripts.pory"

# 909 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_JodyPostBadge::
# 910 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_JodyPostBadge, MSGBOX_NPC
# 911 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 912 "data/maps/PetalburgCity_Gym/scripts.pory"

# 913 "data/maps/PetalburgCity_Gym/scripts.pory"
@ VAR_0x8004 below is the room number
# 914 "data/maps/PetalburgCity_Gym/scripts.pory"
@ VAR_0x8005 below is 0 when the door should be slid open and 1 when it should be unlocked immediately
# 915 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenGymEntranceDoors::
# 916 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 1
# 917 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 918 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 919 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetEntranceRoomDoorMetatiles
# 920 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 921 "data/maps/PetalburgCity_Gym/scripts.pory"

# 922 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenSpeedRoomDoors::
# 923 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 2
# 924 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 925 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 926 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetSpeedRoomDoorMetatiles
# 927 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 928 "data/maps/PetalburgCity_Gym/scripts.pory"

# 929 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenAccuracyRoomDoors::
# 930 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 3
# 931 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 932 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 933 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetAccuracyRoomDoorMetatiles
# 934 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 935 "data/maps/PetalburgCity_Gym/scripts.pory"

# 936 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenConfusionRoomDoors::
# 937 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 4
# 938 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 939 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 940 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetConfusionRoomDoorMetatiles
# 941 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 942 "data/maps/PetalburgCity_Gym/scripts.pory"

# 943 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenDefenseRoomDoors::
# 944 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 5
# 945 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 946 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 947 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetDefenseRoomDoorMetatiles
# 948 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 949 "data/maps/PetalburgCity_Gym/scripts.pory"

# 950 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenRecoveryRoomDoors::
# 951 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 6
# 952 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 953 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 954 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetRecoveryRoomDoorMetatiles
# 955 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 956 "data/maps/PetalburgCity_Gym/scripts.pory"

# 957 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenStrengthRoomDoors::
# 958 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 7
# 959 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 960 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 961 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetStrengthRoomDoorMetatiles
# 962 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 963 "data/maps/PetalburgCity_Gym/scripts.pory"

# 964 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenOHKORoomDoors::
# 965 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 8
# 966 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 967 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 968 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetOHKORoomDoorMetatiles
# 969 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 970 "data/maps/PetalburgCity_Gym/scripts.pory"

# 971 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetEntranceRoomDoorMetatiles::
# 972 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 85, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 973 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 85, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 974 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 98, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 975 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 98, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 976 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 977 "data/maps/PetalburgCity_Gym/scripts.pory"

# 978 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetSpeedRoomDoorMetatiles::
# 979 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 46, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 980 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 46, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 981 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 59, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 982 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 59, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 983 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 984 "data/maps/PetalburgCity_Gym/scripts.pory"

# 985 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetAccuracyRoomDoorMetatiles::
# 986 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 59, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 987 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 59, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 988 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 72, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 989 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 72, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 990 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 991 "data/maps/PetalburgCity_Gym/scripts.pory"

# 992 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetConfusionRoomDoorMetatiles::
# 993 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 20, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 994 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 20, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 995 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 996 "data/maps/PetalburgCity_Gym/scripts.pory"

# 997 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetDefenseRoomDoorMetatiles::
# 998 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 20, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 999 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 20, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1000 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 33, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1001 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 33, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1002 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1003 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1004 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetRecoveryRoomDoorMetatiles::
# 1005 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 33, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1006 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 33, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1007 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1008 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1009 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetStrengthRoomDoorMetatiles::
# 1010 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 7, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1011 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 7, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1012 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1013 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1014 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetOHKORoomDoorMetatiles::
# 1015 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 7, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1016 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 7, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1017 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1018 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1019 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenRoomDoors::
# 1020 "data/maps/PetalburgCity_Gym/scripts.pory"
	special PetalburgGymSlideOpenRoomDoors
# 1021 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitstate
# 1022 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1023 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1024 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_UnlockRoomDoors::
# 1025 "data/maps/PetalburgCity_Gym/scripts.pory"
	special PetalburgGymUnlockRoomDoors
# 1026 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1027 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1028 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GymGuide::
# 1029 "data/maps/PetalburgCity_Gym/scripts.pory"
	lock
# 1030 "data/maps/PetalburgCity_Gym/scripts.pory"
	faceplayer
# 1031 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_GymGuidePostVictory
# 1032 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 1033 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 1034 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1035 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1036 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GymGuidePostVictory::
# 1037 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 1038 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 1039 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1040 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1041 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadYoureHereWithYourPokemon:
# 1042 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hm?\p"
# 1043 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Well, if it isn't {PLAYER}!\n"
# 1044 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "So you're all finished moving in?\p"
# 1045 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'm surprised that you managed to\n"
# 1046 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "get here by yourself.\p"
# 1047 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Oh, I see.\n"
# 1048 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You're with your Pokémon.\p"
# 1049 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hm… Then I guess you're going to\n"
# 1050 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "become a Trainer like me, {PLAYER}.\p"
# 1051 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "That's great news!\n"
# 1052 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'll be looking forward to it!$"
# 1053 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1054 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WallyIdLikeAPokemon:
# 1055 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Um… I…\n"
# 1056 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'd like to get a Pokémon, please…$"
# 1057 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1058 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadOhYoureWallyRight:
# 1059 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hm? You're… Uh… Oh, right.\n"
# 1060 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You're Wally, right?$"
# 1061 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1062 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WallyIveNeverCaughtAPokemon:
# 1063 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'm going to go stay with my\n"
# 1064 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "relatives in Verdanturf Town.\p"
# 1065 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I thought I would be lonely by myself,\n"
# 1066 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "so I wanted to take a Pokémon along.\p"
# 1067 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But I've never caught a Pokémon before.\n"
# 1068 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I don't know how…$"
# 1069 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1070 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadHmISee:
# 1071 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hm. I see.$"
# 1072 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1073 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadPlayerGoWithWally:
# 1074 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}, you heard that, right?\p"
# 1075 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Go with Wally and make sure that he\n"
# 1076 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "safely catches a Pokémon.$"
# 1077 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1078 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_IllLoanYouMyZigzagoon:
# 1079 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Wally, here, I'll loan you my Pokémon.$"
# 1080 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1081 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WallyReceivedAZigzagoon:
# 1082 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Wally received a Zigzagoon!$"
# 1083 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1084 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WallyThankYou:
# 1085 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Oh, wow!\n"
# 1086 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "A Pokémon!$"
# 1087 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1088 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_AndDadGivesPokeBall:
# 1089 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hm. I'll give you a Poké Ball, too.\n"
# 1090 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Go for it!$"
# 1091 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1092 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WallyReceivedAPokeball:
# 1093 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Wally received a Poké Ball!$"
# 1094 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1095 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WallyOhWowThankYou:
# 1096 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Oh, wow!\n"
# 1097 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Thank you!$"
# 1098 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1099 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WouldYouReallyComeWithMe:
# 1100 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}… Would you really come\n"
# 1101 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "with me?$"
# 1102 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1103 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadSoDidItWorkOut:
# 1104 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "So, did it work out?$"
# 1105 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1106 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WallyThankYouBye:
# 1107 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Thank you, yes, it did.\n"
# 1108 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Here's your Pokémon back.\p"
# 1109 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}, thank you for coming along\n"
# 1110 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "with me.\p"
# 1111 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You two are why I was able to catch\n"
# 1112 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "my Pokémon.\p"
# 1113 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I promise I'll take really good\n"
# 1114 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "care of it.\p"
# 1115 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Oh! My mom's waiting for me,\n"
# 1116 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "so I have to go!\p"
# 1117 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Bye, {PLAYER}!$"
# 1118 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1119 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadGoCollectBadges:
# 1120 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Now…\p"
# 1121 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}, if you want to become a\n"
# 1122 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "strong Trainer, here's my advice.\p"
# 1123 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Head for Rustboro City beyond this\n"
# 1124 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "town.\p"
# 1125 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "There, you should challenge\n"
# 1126 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the Gym Leader, Roxanne.\p"
# 1127 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "After her, go on to other Pokémon\n"
# 1128 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Gyms and defeat their Leaders.\p"
# 1129 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Collect Badges from them,\n"
# 1130 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "understood?\p"
# 1131 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Of course, I'm a Gym Leader, too.\n"
# 1132 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "We'll battle one day, {PLAYER}.\p"
# 1133 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But that's only after you become\n"
# 1134 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "stronger.\p"
# 1135 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Before you go, take this.$"
# 1136 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1137 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_PokevialGet:
# 1138 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Obtained a Pokévial from Dad!$"
# 1139 "data/maps/PetalburgCity_Gym/scripts.pory"
	
# 1140 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadPokevial:
# 1141 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "That's a Pokévial. Each dose\n"
# 1142 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "from it will let you heal your\l"
# 1143 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Pokémon to full while on the road.\p"
# 1144 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Any Pokémon Center will refill it\n"
# 1145 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "for you. It only holds one dose\l"
# 1146 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "for now, but I'm sure you'll find\l"
# 1147 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "ways to expand it on your journey.$"
# 1148 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1149 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanGoToRustboro:
# 1150 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hm? Aren't you going to the\n"
# 1151 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Pokémon Gym in Rustboro City?\p"
# 1152 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "There's no challenge for me to\n"
# 1153 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "battle a greenhorn Trainer.\p"
# 1154 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}, I want you to challenge me\n"
# 1155 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "when you become a lot stronger.\p"
# 1156 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'll battle you, {PLAYER}, when you\n"
# 1157 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "can show me four Gym Badges, okay?$"
# 1158 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1159 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanGoToDewford:
# 1160 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I see… So, you've beaten\n"
# 1161 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the Gym Leader in Rustboro City.\p"
# 1162 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But there are many more Trainers\n"
# 1163 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "who are stronger than you, {PLAYER}.\p"
# 1164 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Across the sea in Dewford Town is a\n"
# 1165 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Gym Leader named Brawly.\p"
# 1166 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You should go challenge him.$"
# 1167 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1168 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_YouHaveGottenStronger:
# 1169 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hm… {PLAYER}, you have gotten\n"
# 1170 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "stronger.\p"
# 1171 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I can tell by the number of Badges\n"
# 1172 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "that you've earned.$"
# 1173 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1174 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_PleaseComeWithMe:
# 1175 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Ah, there you are, {PLAYER}{KUN}!\p"
# 1176 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Please come with me.\n"
# 1177 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I have something I want you to have.$"
# 1178 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1179 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_LetMeBorrowPlayer:
# 1180 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Norman, you don't mind, do you?\p"
# 1181 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Let me borrow your {PLAYER}{KUN} for\n"
# 1182 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "a minute or two.$"
# 1183 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1184 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_RandallIntro:
# 1185 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The ability to attack before the\n"
# 1186 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "opponent…\p"
# 1187 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Just that alone puts me at a great\n"
# 1188 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "advantage, don't you agree?$"
# 1189 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1190 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_RandallDefeat:
# 1191 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "That was a magnificent battle!$"
# 1192 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1193 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_RandallPostBattle:
# 1194 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Go on to the next room where a new\n"
# 1195 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "challenge awaits you.\p"
# 1196 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "At the left is the Confusion Room.\p"
# 1197 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The right door leads to the Defense\n"
# 1198 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Room.$"
# 1199 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1200 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_RandallPostBadge:
# 1201 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Whomever you beat, and whomever you\n"
# 1202 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "may lose to, you never shirk from\l"
# 1203 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "training yourself and your Pokémon.\p"
# 1204 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "That's what I think being a\n"
# 1205 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Gym Leader is all about.$"
# 1206 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1207 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ParkerIntro:
# 1208 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "This is the Confusion Room.\p"
# 1209 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Let me see how well bonded you are\n"
# 1210 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "with your Pokémon!$"
# 1211 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1212 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ParkerDefeat:
# 1213 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I couldn't confuse your team enough…\n"
# 1214 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You share a strong bond together.$"
# 1215 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1216 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ParkerPostBattle:
# 1217 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The next room is the Strength Room.\n"
# 1218 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Can you withstand brute force?$"
# 1219 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1220 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ParkerPostBadge:
# 1221 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "After you beat our Leader, the\n"
# 1222 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "training has become a lot tougher.$"
# 1223 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1224 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GeorgeIntro:
# 1225 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Just when you think you're going to\n"
# 1226 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "win, your opponent restores HP…\p"
# 1227 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Can you just imagine how awful that\n"
# 1228 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "must feel?\p"
# 1229 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'll show you exactly how awful it\n"
# 1230 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "feels!$"
# 1231 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1232 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GeorgeDefeat:
# 1233 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I couldn't restore HP enough…\n"
# 1234 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "What Attack power…$"
# 1235 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1236 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GeorgePostBattle:
# 1237 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I should have expected no less from\n"
# 1238 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "our Leader's kid.\p"
# 1239 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "No, wait! A Trainer's abilities are\n"
# 1240 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "earned only through effort.\p"
# 1241 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I lost because my own efforts\n"
# 1242 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "weren't enough.\p"
# 1243 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Go on! The One-hit KO Room is next.$"
# 1244 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1245 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GeorgePostBadge:
# 1246 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'm going to keep training at Gyms.\n"
# 1247 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "One day, I'll become a Leader.$"
# 1248 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1249 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_BerkeIntro:
# 1250 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'm not going to take it easy just\n"
# 1251 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "because you're our Leader's kid.\p"
# 1252 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'll show you how horrid it is for\n"
# 1253 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "a Pokémon to take a critical hit!$"
# 1254 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1255 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_BerkeDefeat:
# 1256 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Your power…\n"
# 1257 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You're the real deal.$"
# 1258 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1259 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_BerkePostBattle:
# 1260 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Your father really is strong.\n"
# 1261 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "He's a Trainer worth my respect.\p"
# 1262 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "And, I sense the same glow coming\n"
# 1263 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "from you as your father.\p"
# 1264 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I hope that you'll stage a terrific\n"
# 1265 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "battle with your father!$"
# 1266 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1267 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_BerkePostBadge:
# 1268 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Since your dad became the Leader,\n"
# 1269 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the Trainers of Petalburg City have\l"
# 1270 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "become a lot tougher.$"
# 1271 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1272 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_MaryIntro:
# 1273 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Giggle…\n"
# 1274 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "This is the Accuracy Room.\p"
# 1275 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "It's pretty nasty when every attack\n"
# 1276 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "lands without fail.$"
# 1277 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1278 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_MaryDefeat:
# 1279 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You were a cut above me…$"
# 1280 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1281 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_MaryPostBattle:
# 1282 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "There are some even stronger\n"
# 1283 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Trainers waiting for you.\p"
# 1284 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The left is the Defense Room, and\n"
# 1285 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the right is the Recovery Room.\p"
# 1286 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Your Pokémon's Attack power will be\n"
# 1287 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "on trial either way.$"
# 1288 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1289 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_MaryPostBadge:
# 1290 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you know what we're trying to\n"
# 1291 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "achieve as Trainers?\p"
# 1292 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "We're striving to become soul mates\n"
# 1293 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "with our Pokémon.$"
# 1294 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1295 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_AlexiaIntro:
# 1296 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The higher the Defense, the more\n"
# 1297 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "reckless I can be in attack.$"
# 1298 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1299 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_AlexiaDefeat:
# 1300 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Our defenses weren't enough…$"
# 1301 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1302 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_AlexiaPostBattle:
# 1303 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I think you've taught me a valuable\n"
# 1304 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "lesson here.\p"
# 1305 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Now, go on! The left door goes to\n"
# 1306 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the Strength Room.\p"
# 1307 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The right door opens to\n"
# 1308 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the One-hit KO Room.\p"
# 1309 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Both of them have Trainers who are\n"
# 1310 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "skilled at offense.$"
# 1311 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1312 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_AlexiaPostBadge:
# 1313 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hi! Have you tried using Surf?$"
# 1314 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1315 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_JodyIntro:
# 1316 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Our Gym Leader told us to go all out\n"
# 1317 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "and beat you.\p"
# 1318 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Even if you happen to be the\n"
# 1319 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Leader's kid!$"
# 1320 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1321 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_JodyDefeat:
# 1322 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But… I went all out!$"
# 1323 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1324 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_JodyPostBattle:
# 1325 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The way you use your Pokémon…\n"
# 1326 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "It's like your father's style.\p"
# 1327 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Go on through! The Gym Leader, your\n"
# 1328 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "father, is waiting!$"
# 1329 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1330 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_JodyPostBadge:
# 1331 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Sure, it's fine to make your Pokémon\n"
# 1332 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "stronger.\p"
# 1333 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But what decides the winner?\p"
# 1334 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Why, it's the feelings Trainers have\n"
# 1335 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "for their Pokémon.$"
# 1336 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1337 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DoorAppearsLocked:
# 1338 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "This door appears to be locked\n"
# 1339 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "right now…$"
