# 1 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2 "data/maps/PetalburgCity_Gym/scripts.pory"
.set LOCALID_NORMAN, 1
# 3 "data/maps/PetalburgCity_Gym/scripts.pory"
.set LOCALID_WALLY, 10
# 4 "data/maps/PetalburgCity_Gym/scripts.pory"
.set LOCALID_WALLYS_DAD, 11
# 5 "data/maps/PetalburgCity_Gym/scripts.pory"

# 6 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_MapScripts::
# 7 "data/maps/PetalburgCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, PetalburgCity_Gym_OnLoad
# 8 "data/maps/PetalburgCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PetalburgCity_Gym_OnTransition
# 9 "data/maps/PetalburgCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PetalburgCity_Gym_OnWarp
# 10 "data/maps/PetalburgCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PetalburgCity_Gym_OnFrame
# 11 "data/maps/PetalburgCity_Gym/scripts.pory"
	.byte 0
# 12 "data/maps/PetalburgCity_Gym/scripts.pory"

# 13 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_OnLoad:
# 14 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_PETALBURG_GYM_STATE, 6, PetalburgCity_Gym_EventScript_OpenUnlockedDoors
# 15 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_ge VAR_PETALBURG_GYM_STATE, 7, PetalburgCity_Gym_EventScript_UnlockAllDoors
# 16 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 17 "data/maps/PetalburgCity_Gym/scripts.pory"

# 18 "data/maps/PetalburgCity_Gym/scripts.pory"
@ NOTE: Strength and OHKO rooms are misleading. Both are more accurately Critical-Hit
# 19 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenUnlockedDoors::
# 20 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 1
# 21 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenGymEntranceDoors
# 22 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_defeated TRAINER_RANDALL, PetalburgCity_Gym_EventScript_OpenSpeedRoomDoors
# 23 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_defeated TRAINER_MARY, PetalburgCity_Gym_EventScript_OpenAccuracyRoomDoors
# 24 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_defeated TRAINER_PARKER, PetalburgCity_Gym_EventScript_OpenConfusionRoomDoors
# 25 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_defeated TRAINER_ALEXIA, PetalburgCity_Gym_EventScript_OpenDefenseRoomDoors
# 26 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_defeated TRAINER_GEORGE, PetalburgCity_Gym_EventScript_OpenRecoveryRoomDoors
# 27 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_defeated TRAINER_JODY, PetalburgCity_Gym_EventScript_OpenStrengthRoomDoors
# 28 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_defeated TRAINER_BERKE, PetalburgCity_Gym_EventScript_OpenOHKORoomDoors
# 29 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 30 "data/maps/PetalburgCity_Gym/scripts.pory"

# 31 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_UnlockAllDoors::
# 32 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 1
# 33 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenGymEntranceDoors
# 34 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenSpeedRoomDoors
# 35 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenAccuracyRoomDoors
# 36 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenConfusionRoomDoors
# 37 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenDefenseRoomDoors
# 38 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenRecoveryRoomDoors
# 39 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenStrengthRoomDoors
# 40 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenOHKORoomDoors
# 41 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 42 "data/maps/PetalburgCity_Gym/scripts.pory"

# 43 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_OnTransition:
# 44 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_PETALBURG_GYM_STATE, 1, PetalburgCity_Gym_EventScript_MoveWallyToEntrance
# 45 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_lt VAR_PETALBURG_GYM_STATE, 6, PetalburgCity_Gym_EventScript_MoveNormanToEntrance
# 46 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_set FLAG_SYS_GAME_CLEAR, PetalburgCity_Gym_EventScript_CheckNormanForRematch
# 47 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 48 "data/maps/PetalburgCity_Gym/scripts.pory"

# 49 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_MoveWallyToEntrance::
# 50 "data/maps/PetalburgCity_Gym/scripts.pory"
	setobjectxyperm LOCALID_WALLY, 5, 108
# 51 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 52 "data/maps/PetalburgCity_Gym/scripts.pory"

# 53 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_MoveNormanToEntrance::
# 54 "data/maps/PetalburgCity_Gym/scripts.pory"
	setobjectxyperm LOCALID_NORMAN, 4, 107
# 55 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 56 "data/maps/PetalburgCity_Gym/scripts.pory"

# 57 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_CheckNormanForRematch::
# 58 "data/maps/PetalburgCity_Gym/scripts.pory"
	setorcopyvar VAR_TRAINER_BATTLE_OPPONENT_A, TRAINER_NORMAN_1
# 59 "data/maps/PetalburgCity_Gym/scripts.pory"
	specialvar VAR_RESULT, IsTrainerReadyForRematch
# 60 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, PetalburgCity_Gym_EventScript_DontMoveNormanToFront
# 61 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_PETALBURG_GYM_STATE, 8, PetalburgCity_Gym_EventScript_DontMoveNormanToFront
# 62 "data/maps/PetalburgCity_Gym/scripts.pory"
	setobjectxyperm LOCALID_NORMAN, 4, 107
# 63 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 64 "data/maps/PetalburgCity_Gym/scripts.pory"

# 65 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_DontMoveNormanToFront::
# 66 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 8
# 67 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 68 "data/maps/PetalburgCity_Gym/scripts.pory"

# 69 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_OnWarp:
# 70 "data/maps/PetalburgCity_Gym/scripts.pory"
	map_script_2 VAR_PETALBURG_GYM_STATE, 1, PetalburgCity_Gym_EventScript_TurnPlayerNorth
# 71 "data/maps/PetalburgCity_Gym/scripts.pory"
	.2byte 0
# 72 "data/maps/PetalburgCity_Gym/scripts.pory"

# 73 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_TurnPlayerNorth::
# 74 "data/maps/PetalburgCity_Gym/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 75 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 76 "data/maps/PetalburgCity_Gym/scripts.pory"

# 77 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_OnFrame:
# 78 "data/maps/PetalburgCity_Gym/scripts.pory"
	map_script_2 VAR_PETALBURG_GYM_STATE, 1, PetalburgCity_Gym_EventScript_ReturnFromWallyTutorial
# 79 "data/maps/PetalburgCity_Gym/scripts.pory"
	.2byte 0
# 80 "data/maps/PetalburgCity_Gym/scripts.pory"

# 81 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ReturnFromWallyTutorial::
# 82 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 83 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadSoDidItWorkOut, MSGBOX_DEFAULT
# 84 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WallyThankYouBye, MSGBOX_DEFAULT
# 85 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 86 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 87 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyExitGym
# 88 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 89 "data/maps/PetalburgCity_Gym/scripts.pory"
	playse SE_EXIT
# 90 "data/maps/PetalburgCity_Gym/scripts.pory"
	removeobject LOCALID_WALLY
# 91 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_CITY_WALLY
# 92 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 30
# 93 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 94 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 95 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadGoCollectBadges, MSGBOX_DEFAULT
# 96 "data/maps/PetalburgCity_Gym/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 97 "data/maps/PetalburgCity_Gym/scripts.pory"
	message PetalburgCity_Gym_Text_PokevialGet
# 98 "data/maps/PetalburgCity_Gym/scripts.pory"
    additem ITEM_POKEVIAL
# 99 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitfanfare
# 100 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadPokevial, MSGBOX_DEFAULT
# 101 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 2
# 102 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 103 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 104 "data/maps/PetalburgCity_Gym/scripts.pory"

# 105 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyExitGym:
# 106 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 107 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 108 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 109 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 110 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 111 "data/maps/PetalburgCity_Gym/scripts.pory"

# 112 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Norman::
# 113 "data/maps/PetalburgCity_Gym/scripts.pory"
	lock
# 114 "data/maps/PetalburgCity_Gym/scripts.pory"
	faceplayer
# 115 "data/maps/PetalburgCity_Gym/scripts.pory"
	switch VAR_PETALBURG_GYM_STATE
# 116 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 2, PetalburgCity_Gym_EventScript_NormanNoBadges
# 117 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 3, PetalburgCity_Gym_EventScript_NormanOneBadge
# 118 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 4, PetalburgCity_Gym_EventScript_NormanTwoBadges
# 119 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 5, PetalburgCity_Gym_EventScript_NormanThreeBadges
# 120 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 6, PetalburgCity_Gym_EventScript_NormanBattle
# 121 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 7, PetalburgCity_Gym_EventScript_NormanPostBattle
# 122 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 8, PetalburgCity_Gym_EventScript_NormanRematch
# 123 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadYoureHereWithYourPokemon, MSGBOX_DEFAULT
# 124 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 125 "data/maps/PetalburgCity_Gym/scripts.pory"
	switch VAR_FACING
# 126 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_SOUTH, PetalburgCity_Gym_EventScript_BeginWallyTutorialSouth
# 127 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_NORTH, PetalburgCity_Gym_EventScript_BeginWallyTutorialNorth
# 128 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_WEST, PetalburgCity_Gym_EventScript_BeginWallyTutorialWest
# 129 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_EAST, PetalburgCity_Gym_EventScript_BeginWallyTutorialEast
# 130 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 131 "data/maps/PetalburgCity_Gym/scripts.pory"

# 132 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorialSouth::
# 133 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 0
# 134 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial
# 135 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 136 "data/maps/PetalburgCity_Gym/scripts.pory"

# 137 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorialNorth::
# 138 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 139 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial
# 140 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 141 "data/maps/PetalburgCity_Gym/scripts.pory"

# 142 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorialWest::
# 143 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 2
# 144 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial
# 145 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 146 "data/maps/PetalburgCity_Gym/scripts.pory"

# 147 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorialEast::
# 148 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 3
# 149 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial
# 150 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 151 "data/maps/PetalburgCity_Gym/scripts.pory"

# 152 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorial::
# 153 "data/maps/PetalburgCity_Gym/scripts.pory"
	addobject LOCALID_WALLY
# 154 "data/maps/PetalburgCity_Gym/scripts.pory"
	playse SE_DOOR
# 155 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_Gym_EventScript_WallyArriveSouth
# 156 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_WallyArriveNorth
# 157 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_WallyArriveWestEast
# 158 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_WallyArriveWestEast
# 159 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WallyIdLikeAPokemon, MSGBOX_DEFAULT
# 160 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadOhYoureWallyRight, MSGBOX_DEFAULT
# 161 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WallyIveNeverCaughtAPokemon, MSGBOX_DEFAULT
# 162 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadHmISee, MSGBOX_DEFAULT
# 163 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_Gym_EventScript_NormanAddressPlayerSouth
# 164 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_NormanAddressPlayerNorth
# 165 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_NormanAddressPlayerWest
# 166 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_NormanAddressPlayerEast
# 167 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadPlayerGoWithWally, MSGBOX_DEFAULT
# 168 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_Gym_EventScript_NormanAddressWallySouth
# 169 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_NormanAddressWallyNorth
# 170 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_NormanAddressWallyWest
# 171 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_NormanAddressWallyEast
# 172 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_IllLoanYouMyZigzagoon, MSGBOX_DEFAULT
# 173 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WallyThankYouAndDadGivesPokeBall, MSGBOX_DEFAULT
# 174 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WallyOhWowThankYou, MSGBOX_DEFAULT
# 175 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_Gym_EventScript_NormanFaceDoorSouth
# 176 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_NormanFaceDoorNorth
# 177 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_NormanFaceDoorWest
# 178 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_NormanFaceDoorEast
# 179 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_Gym_EventScript_WallyFacePlayer
# 180 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_WallyFaceDown
# 181 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_WallyFacePlayer
# 182 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_WallyFacePlayer
# 183 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WouldYouReallyComeWithMe, MSGBOX_DEFAULT
# 184 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 185 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 186 "data/maps/PetalburgCity_Gym/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 187 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_Gym_EventScript_ExitGymWithWallySouth
# 188 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_ExitGymWithWallyNorth
# 189 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_ExitGymWithWallyWest
# 190 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_ExitGymWithWallyEast
# 191 "data/maps/PetalburgCity_Gym/scripts.pory"
	removeobject LOCALID_WALLY
# 192 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_CITY_WALLYS_MOM
# 193 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 1
# 194 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 2
# 195 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_PETALBURG_CITY_WALLY
# 196 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_PETALBURG_GYM_WALLY
# 197 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_RIVAL
# 198 "data/maps/PetalburgCity_Gym/scripts.pory"
	special InitBirchState
# 199 "data/maps/PetalburgCity_Gym/scripts.pory"
	warp MAP_PETALBURG_CITY, 15, 8
# 200 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitstate
# 201 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 202 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 203 "data/maps/PetalburgCity_Gym/scripts.pory"

# 204 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallyArriveSouth::
# 205 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 206 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyArrive
# 207 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 208 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 209 "data/maps/PetalburgCity_Gym/scripts.pory"

# 210 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallyArriveNorth::
# 211 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyArriveNorth
# 212 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 213 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterRight
# 214 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 215 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 216 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 217 "data/maps/PetalburgCity_Gym/scripts.pory"

# 218 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallyArriveWestEast::
# 219 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 220 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 221 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyArrive
# 222 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 223 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 224 "data/maps/PetalburgCity_Gym/scripts.pory"

# 225 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallySouth::
# 226 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 227 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyExitSouthWest
# 228 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallySouth
# 229 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 230 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 231 "data/maps/PetalburgCity_Gym/scripts.pory"

# 232 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallyNorth::
# 233 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyExitNorth
# 234 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallyNorth
# 235 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 236 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 237 "data/maps/PetalburgCity_Gym/scripts.pory"

# 238 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallyWest::
# 239 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyExitSouthWest
# 240 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallyWest
# 241 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 242 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 243 "data/maps/PetalburgCity_Gym/scripts.pory"

# 244 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallyEast::
# 245 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyExitEast
# 246 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallyEast
# 247 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 248 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 249 "data/maps/PetalburgCity_Gym/scripts.pory"

# 250 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressPlayerSouth::
# 251 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterUp
# 252 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 253 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 254 "data/maps/PetalburgCity_Gym/scripts.pory"

# 255 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressPlayerNorth::
# 256 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 257 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 258 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 259 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 260 "data/maps/PetalburgCity_Gym/scripts.pory"

# 261 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressPlayerWest::
# 262 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterRight
# 263 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 264 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 265 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 266 "data/maps/PetalburgCity_Gym/scripts.pory"

# 267 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressPlayerEast::
# 268 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterLeft
# 269 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 270 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 271 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 272 "data/maps/PetalburgCity_Gym/scripts.pory"

# 273 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressWallySouth::
# 274 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 275 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 276 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 277 "data/maps/PetalburgCity_Gym/scripts.pory"

# 278 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressWallyNorth::
# 279 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterRight
# 280 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 281 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 282 "data/maps/PetalburgCity_Gym/scripts.pory"

# 283 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressWallyWest::
# 284 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 285 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 286 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 287 "data/maps/PetalburgCity_Gym/scripts.pory"

# 288 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressWallyEast::
# 289 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 290 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 291 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 292 "data/maps/PetalburgCity_Gym/scripts.pory"

# 293 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallyFacePlayer::
# 294 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_FacePlayer
# 295 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 296 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 297 "data/maps/PetalburgCity_Gym/scripts.pory"

# 298 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallyFaceDown::
# 299 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceFasterDown
# 300 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 301 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 302 "data/maps/PetalburgCity_Gym/scripts.pory"

# 303 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanNoBadges::
# 304 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_NormanGoToRustboro, MSGBOX_DEFAULT
# 305 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 306 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 307 "data/maps/PetalburgCity_Gym/scripts.pory"

# 308 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanOneBadge::
# 309 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_NormanGoToDewford, MSGBOX_DEFAULT
# 310 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 311 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 312 "data/maps/PetalburgCity_Gym/scripts.pory"

# 313 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanTwoBadges::
# 314 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_YouHaveGottenStronger, MSGBOX_DEFAULT
# 315 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 316 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 317 "data/maps/PetalburgCity_Gym/scripts.pory"

# 318 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanThreeBadges::
# 319 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_YouHaveGottenStronger, MSGBOX_DEFAULT
# 320 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 321 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 322 "data/maps/PetalburgCity_Gym/scripts.pory"

# 323 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanFaceDoorSouth::
# 324 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 325 "data/maps/PetalburgCity_Gym/scripts.pory"

# 326 "data/maps/PetalburgCity_Gym/scripts.pory"
@ For all other NormanFaceDoorX, Norman is already facing the door from NormanAddressWallyX
# 327 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanFaceDoorNorth::
# 328 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 329 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 330 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 331 "data/maps/PetalburgCity_Gym/scripts.pory"

# 332 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanFaceDoorWest::
# 333 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 334 "data/maps/PetalburgCity_Gym/scripts.pory"

# 335 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanFaceDoorEast::
# 336 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 337 "data/maps/PetalburgCity_Gym/scripts.pory"

# 338 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanPostBattle::
# 339 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_ShouldGiveEnigmaBerry
# 340 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, PetalburgCity_Gym_EventScript_GiveEnigmaBerry
# 341 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_FACADE, PetalburgCity_Gym_EventScript_GiveFacade2
# 342 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, PetalburgCity_Gym_EventScript_NoAmountOfTrainingIsEnough
# 343 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadGoingToKeepTraining, MSGBOX_DEFAULT
# 344 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 345 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 346 "data/maps/PetalburgCity_Gym/scripts.pory"

# 347 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GiveFacade2::
# 348 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_GiveFacade
# 349 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 350 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 351 "data/maps/PetalburgCity_Gym/scripts.pory"

# 352 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanRematch::
# 353 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_NORMAN_1, PetalburgCity_Gym_Text_NormanPreRematch, PetalburgCity_Gym_Text_NormanRematchDefeat, PetalburgCity_Gym_Text_NormanRematchNeedTwoMons
# 354 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_NormanPostRematch, MSGBOX_AUTOCLOSE
# 355 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 356 "data/maps/PetalburgCity_Gym/scripts.pory"

# 357 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ShouldGiveEnigmaBerry::
# 358 "data/maps/PetalburgCity_Gym/scripts.pory"
	specialvar VAR_RESULT, IsEnigmaBerryValid
# 359 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, PetalburgCity_Gym_EventScript_DontGiveEnigmaBerry
# 360 "data/maps/PetalburgCity_Gym/scripts.pory"
	checkitem ITEM_ENIGMA_BERRY_E_READER
# 361 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, PetalburgCity_Gym_EventScript_DontGiveEnigmaBerry
# 362 "data/maps/PetalburgCity_Gym/scripts.pory"
	checkpcitem ITEM_ENIGMA_BERRY_E_READER
# 363 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, PetalburgCity_Gym_EventScript_DontGiveEnigmaBerry
# 364 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_ENIGMA_BERRY_AVAILABLE, 0, PetalburgCity_Gym_EventScript_DontGiveEnigmaBerry
# 365 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GiveEnigmaBerry, MSGBOX_DEFAULT
# 366 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_RESULT, TRUE
# 367 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 368 "data/maps/PetalburgCity_Gym/scripts.pory"

# 369 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_DontGiveEnigmaBerry::
# 370 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_RESULT, FALSE
# 371 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 372 "data/maps/PetalburgCity_Gym/scripts.pory"

# 373 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GiveEnigmaBerry::
# 374 "data/maps/PetalburgCity_Gym/scripts.pory"
	giveitem ITEM_ENIGMA_BERRY_E_READER
# 375 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 376 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_ENIGMA_BERRY_AVAILABLE, 0
# 377 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 378 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 379 "data/maps/PetalburgCity_Gym/scripts.pory"

# 380 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanBattle::
# 381 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_NormanIntro, MSGBOX_DEFAULT
# 382 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_NORMAN_1, PetalburgCity_Gym_Text_NormanDefeat
# 383 "data/maps/PetalburgCity_Gym/scripts.pory"
	message PetalburgCity_Gym_Text_ReceivedBalanceBadge
# 384 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmessage
# 385 "data/maps/PetalburgCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 386 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_ExplainBalanceBadgeTakeThis, MSGBOX_DEFAULT
# 387 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_PETALBURG_GYM
# 388 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 7
# 389 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_BADGE05_GET
# 390 "data/maps/PetalburgCity_Gym/scripts.pory"
	special ResetHealLocationFromDewford
# 391 "data/maps/PetalburgCity_Gym/scripts.pory"
	call EventScript_HideMrBriney
# 392 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_HIDE_MAUVILLE_GYM_WATTSON
# 393 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_MAUVILLE_CITY_WATTSON
# 394 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 5
# 395 "data/maps/PetalburgCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 396 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_DEWFORD_HALL_SLUDGE_BOMB_MAN
# 397 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_UnlockAllDoors
# 398 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 399 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_GiveFacade
# 400 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 30
# 401 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadHappyAndSad, MSGBOX_DEFAULT
# 402 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 403 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 40
# 404 "data/maps/PetalburgCity_Gym/scripts.pory"
	playse SE_DOOR
# 405 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 10
# 406 "data/maps/PetalburgCity_Gym/scripts.pory"
	addobject LOCALID_WALLYS_DAD
# 407 "data/maps/PetalburgCity_Gym/scripts.pory"
	switch VAR_FACING
# 408 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_NORTH, PetalburgCity_Gym_EventScript_WallysDadArrivesNorth
# 409 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_WEST, PetalburgCity_Gym_EventScript_WallysDadArrivesWest
# 410 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_EAST, PetalburgCity_Gym_EventScript_WallysDadArrivesEast
# 411 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 412 "data/maps/PetalburgCity_Gym/scripts.pory"

# 413 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GiveFacade::
# 414 "data/maps/PetalburgCity_Gym/scripts.pory"
	giveitem ITEM_TM_FACADE
# 415 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
# 416 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_FACADE
# 417 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_ExplainFacade, MSGBOX_DEFAULT
# 418 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 419 "data/maps/PetalburgCity_Gym/scripts.pory"

# 420 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadArrivesNorth::
# 421 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 422 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_WallysDadArrives
# 423 "data/maps/PetalburgCity_Gym/scripts.pory"

# 424 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadArrivesEast::
# 425 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 2
# 426 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_WallysDadArrives
# 427 "data/maps/PetalburgCity_Gym/scripts.pory"

# 428 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadArrivesWest::
# 429 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 3
# 430 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_WallysDadArrives
# 431 "data/maps/PetalburgCity_Gym/scripts.pory"

# 432 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadArrives::
# 433 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadEnterGym
# 434 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 435 "data/maps/PetalburgCity_Gym/scripts.pory"
	playse SE_PIN
# 436 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, Common_Movement_ExclamationMark
# 437 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 438 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, Common_Movement_Delay48
# 439 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 440 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 10
# 441 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_WallysDadApproachPlayerNorth
# 442 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_WallysDadApproachPlayerEast
# 443 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_WallysDadApproachPlayerWest
# 444 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_PleaseComeWithMe, MSGBOX_DEFAULT
# 445 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 446 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 20
# 447 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_WallysDadFaceNormanNorth
# 448 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_WallysDadFaceNormanEast
# 449 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_WallysDadFaceNormanWest
# 450 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_LetMeBorrowPlayer, MSGBOX_DEFAULT
# 451 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 452 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 453 "data/maps/PetalburgCity_Gym/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 454 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_ExitGymWithWallysDadNorth
# 455 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_ExitGymWithWallysDadEast
# 456 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_ExitGymWithWallysDadWest
# 457 "data/maps/PetalburgCity_Gym/scripts.pory"
	removeobject LOCALID_WALLYS_DAD
# 458 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 4
# 459 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_PETALBURG_CITY_WALLYS_DAD
# 460 "data/maps/PetalburgCity_Gym/scripts.pory"
	warp MAP_PETALBURG_CITY, 15, 8
# 461 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitstate
# 462 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 463 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 464 "data/maps/PetalburgCity_Gym/scripts.pory"

# 465 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadFaceNormanNorth::
# 466 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, Common_Movement_WalkInPlaceFasterUp
# 467 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 468 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 469 "data/maps/PetalburgCity_Gym/scripts.pory"

# 470 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadFaceNormanEast::
# 471 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, Common_Movement_WalkInPlaceFasterRight
# 472 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 473 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 474 "data/maps/PetalburgCity_Gym/scripts.pory"

# 475 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadFaceNormanWest::
# 476 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, Common_Movement_WalkInPlaceFasterLeft
# 477 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 478 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 479 "data/maps/PetalburgCity_Gym/scripts.pory"

# 480 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadApproachPlayerNorth::
# 481 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadApproachPlayerNorth
# 482 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 483 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 484 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterLeft
# 485 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 486 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 487 "data/maps/PetalburgCity_Gym/scripts.pory"

# 488 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadApproachPlayerEast::
# 489 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadApproachPlayerEast
# 490 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 491 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 492 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 493 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 494 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 495 "data/maps/PetalburgCity_Gym/scripts.pory"

# 496 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadApproachPlayerWest::
# 497 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadApproachPlayerWest
# 498 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 499 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 500 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 501 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 502 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 503 "data/maps/PetalburgCity_Gym/scripts.pory"

# 504 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallysDadNorth::
# 505 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadExitNorth
# 506 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 507 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallysDadNorth
# 508 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 509 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 510 "data/maps/PetalburgCity_Gym/scripts.pory"

# 511 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallysDadEast::
# 512 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadExitEast
# 513 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallysDadEast
# 514 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 515 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 516 "data/maps/PetalburgCity_Gym/scripts.pory"

# 517 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallysDadWest::
# 518 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadExitWest
# 519 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallysDadWest
# 520 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 521 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 522 "data/maps/PetalburgCity_Gym/scripts.pory"

# 523 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadExitNorth:
# 524 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 525 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 526 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 527 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 528 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 529 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 530 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 531 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 532 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 533 "data/maps/PetalburgCity_Gym/scripts.pory"
	set_invisible
# 534 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 535 "data/maps/PetalburgCity_Gym/scripts.pory"

# 536 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadExitEast:
# 537 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 538 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 539 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 540 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 541 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 542 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 543 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 544 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 545 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 546 "data/maps/PetalburgCity_Gym/scripts.pory"
	set_invisible
# 547 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 548 "data/maps/PetalburgCity_Gym/scripts.pory"

# 549 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadExitWest:
# 550 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 551 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 552 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 553 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 554 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 555 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 556 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 557 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 558 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 559 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 560 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 561 "data/maps/PetalburgCity_Gym/scripts.pory"
	set_invisible
# 562 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 563 "data/maps/PetalburgCity_Gym/scripts.pory"

# 564 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallysDadNorth:
# 565 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 566 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 567 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 568 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 569 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 570 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 571 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 572 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 573 "data/maps/PetalburgCity_Gym/scripts.pory"

# 574 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallysDadEast:
# 575 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 576 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 577 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 578 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 579 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 580 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 581 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 582 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 583 "data/maps/PetalburgCity_Gym/scripts.pory"

# 584 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallysDadWest:
# 585 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 586 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 587 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 588 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 589 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 590 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 591 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 592 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 593 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 594 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 595 "data/maps/PetalburgCity_Gym/scripts.pory"

# 596 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadEnterGym:
# 597 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 598 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 599 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_right
# 600 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 601 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_left
# 602 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 603 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 604 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 605 "data/maps/PetalburgCity_Gym/scripts.pory"

# 606 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadApproachPlayerNorth:
# 607 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 608 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 609 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 610 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 611 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 612 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_right
# 613 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 614 "data/maps/PetalburgCity_Gym/scripts.pory"

# 615 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadApproachPlayerEast:
# 616 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 617 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 618 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 619 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 620 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 621 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 622 "data/maps/PetalburgCity_Gym/scripts.pory"

# 623 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadApproachPlayerWest:
# 624 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 625 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 626 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 627 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 628 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 629 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 630 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 631 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 632 "data/maps/PetalburgCity_Gym/scripts.pory"

# 633 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyArriveNorth:
# 634 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 635 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 636 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 637 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 638 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 639 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 640 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 641 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 642 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_left
# 643 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 644 "data/maps/PetalburgCity_Gym/scripts.pory"

# 645 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyArrive:
# 646 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 647 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 648 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 649 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 650 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 651 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 652 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 653 "data/maps/PetalburgCity_Gym/scripts.pory"

# 654 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyExitNorth:
# 655 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 656 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 657 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 658 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 659 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 660 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 661 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 662 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 663 "data/maps/PetalburgCity_Gym/scripts.pory"

# 664 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyExitEast:
# 665 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 666 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 667 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 668 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 669 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 670 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 671 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 672 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 673 "data/maps/PetalburgCity_Gym/scripts.pory"

# 674 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyExitSouthWest:
# 675 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 676 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 677 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 678 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 679 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 680 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 681 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 682 "data/maps/PetalburgCity_Gym/scripts.pory"

# 683 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallyNorth:
# 684 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 685 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 686 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 687 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 688 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 689 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 690 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 691 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 692 "data/maps/PetalburgCity_Gym/scripts.pory"

# 693 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallySouth:
# 694 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 695 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 696 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 697 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 698 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 699 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 700 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 701 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 702 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 703 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 704 "data/maps/PetalburgCity_Gym/scripts.pory"

# 705 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallyWest:
# 706 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 707 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 708 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 709 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 710 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 711 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 712 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 713 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 714 "data/maps/PetalburgCity_Gym/scripts.pory"

# 715 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallyEast:
# 716 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_down
# 717 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 718 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 719 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 720 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 721 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 722 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 723 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 724 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 725 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 726 "data/maps/PetalburgCity_Gym/scripts.pory"

# 727 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NoAmountOfTrainingIsEnough::
# 728 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadNoAmountOfTrainingIsEnough, MSGBOX_DEFAULT
# 729 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 730 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 731 "data/maps/PetalburgCity_Gym/scripts.pory"

# 732 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SpeedRoomDoor::
# 733 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 734 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_lt VAR_PETALBURG_GYM_STATE, 6, PetalburgCity_Gym_EventScript_DoorLocked
# 735 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 736 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 85
# 737 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterSpeedRoom, MSGBOX_YESNO
# 738 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 739 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 740 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 741 "data/maps/PetalburgCity_Gym/scripts.pory"

# 742 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_EnterRoom::
# 743 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 744 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 30
# 745 "data/maps/PetalburgCity_Gym/scripts.pory"
	warpdoor MAP_PETALBURG_CITY_GYM, VAR_0x8008, VAR_0x8009
# 746 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitstate
# 747 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 748 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 749 "data/maps/PetalburgCity_Gym/scripts.pory"

# 750 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_DontEnterRoom::
# 751 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 752 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 753 "data/maps/PetalburgCity_Gym/scripts.pory"

# 754 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_DoorLocked::
# 755 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DoorAppearsLocked, MSGBOX_DEFAULT
# 756 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 757 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 758 "data/maps/PetalburgCity_Gym/scripts.pory"

# 759 "data/maps/PetalburgCity_Gym/scripts.pory"
@ VAR_0x8008 and VAR_0x8009 below are the x and y coordinates of the warp
# 760 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_AccuracyRoomDoor::
# 761 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 762 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_lt VAR_PETALBURG_GYM_STATE, 6, PetalburgCity_Gym_EventScript_DoorLocked
# 763 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 764 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 98
# 765 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterAccuracyRoom, MSGBOX_YESNO
# 766 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 767 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 768 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 769 "data/maps/PetalburgCity_Gym/scripts.pory"

# 770 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ConfusionRoomDoor::
# 771 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 772 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_RANDALL, PetalburgCity_Gym_EventScript_DoorLocked
# 773 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 774 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 46
# 775 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterConfusionRoom, MSGBOX_YESNO
# 776 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 777 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 778 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 779 "data/maps/PetalburgCity_Gym/scripts.pory"

# 780 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftDefenseRoomDoor::
# 781 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 782 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_RANDALL, PetalburgCity_Gym_EventScript_DoorLocked
# 783 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 784 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 59
# 785 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterDefenseRoom, MSGBOX_YESNO
# 786 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 787 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 788 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 789 "data/maps/PetalburgCity_Gym/scripts.pory"

# 790 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightDefenseRoomDoor::
# 791 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 792 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_MARY, PetalburgCity_Gym_EventScript_DoorLocked
# 793 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 794 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 59
# 795 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterDefenseRoom, MSGBOX_YESNO
# 796 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 797 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 798 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 799 "data/maps/PetalburgCity_Gym/scripts.pory"

# 800 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RecoveryRoomDoor::
# 801 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 802 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_MARY, PetalburgCity_Gym_EventScript_DoorLocked
# 803 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 804 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 72
# 805 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterRecoveryRoom, MSGBOX_YESNO
# 806 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 807 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 808 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 809 "data/maps/PetalburgCity_Gym/scripts.pory"

# 810 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftStrengthRoomDoor::
# 811 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 812 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_PARKER, PetalburgCity_Gym_EventScript_DoorLocked
# 813 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 814 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 20
# 815 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterStrengthRoom, MSGBOX_YESNO
# 816 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 817 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 818 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 819 "data/maps/PetalburgCity_Gym/scripts.pory"

# 820 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightStrengthRoomDoor::
# 821 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 822 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_ALEXIA, PetalburgCity_Gym_EventScript_DoorLocked
# 823 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 824 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 20
# 825 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterStrengthRoom, MSGBOX_YESNO
# 826 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 827 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 828 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 829 "data/maps/PetalburgCity_Gym/scripts.pory"

# 830 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftOHKORoomDoor::
# 831 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 832 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_ALEXIA, PetalburgCity_Gym_EventScript_DoorLocked
# 833 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 834 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 33
# 835 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterOHKORoom, MSGBOX_YESNO
# 836 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 837 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 838 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 839 "data/maps/PetalburgCity_Gym/scripts.pory"

# 840 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightOHKORoomDoor::
# 841 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 842 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_GEORGE, PetalburgCity_Gym_EventScript_DoorLocked
# 843 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 844 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 33
# 845 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterOHKORoom, MSGBOX_YESNO
# 846 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 847 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 848 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 849 "data/maps/PetalburgCity_Gym/scripts.pory"

# 850 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftGymLeadersRoomDoor::
# 851 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 852 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_JODY, PetalburgCity_Gym_EventScript_DoorLocked
# 853 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 854 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 7
# 855 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterGymLeadersRoom, MSGBOX_YESNO
# 856 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 857 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 858 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 859 "data/maps/PetalburgCity_Gym/scripts.pory"

# 860 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightGymLeadersRoomDoor::
# 861 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 862 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_BERKE, PetalburgCity_Gym_EventScript_DoorLocked
# 863 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 864 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 7
# 865 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterGymLeadersRoom, MSGBOX_YESNO
# 866 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 867 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 868 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 869 "data/maps/PetalburgCity_Gym/scripts.pory"

# 870 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Randall::
# 871 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_RANDALL, PetalburgCity_Gym_Text_RandallIntro, PetalburgCity_Gym_Text_RandallDefeat, PetalburgCity_Gym_EventScript_SlideOpenSpeedRoomDoors
# 872 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_RandallPostBadge
# 873 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_RandallPostBattle, MSGBOX_AUTOCLOSE
# 874 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 875 "data/maps/PetalburgCity_Gym/scripts.pory"

# 876 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenSpeedRoomDoors::
# 877 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 878 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenSpeedRoomDoors
# 879 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 880 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 881 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 882 "data/maps/PetalburgCity_Gym/scripts.pory"

# 883 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RandallPostBadge::
# 884 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_RandallPostBadge, MSGBOX_NPC
# 885 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 886 "data/maps/PetalburgCity_Gym/scripts.pory"

# 887 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Parker::
# 888 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_PARKER, PetalburgCity_Gym_Text_ParkerIntro, PetalburgCity_Gym_Text_ParkerDefeat, PetalburgCity_Gym_EventScript_SlideOpenConfusionRoomDoors
# 889 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_ParkerPostBadge
# 890 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_ParkerPostBattle, MSGBOX_AUTOCLOSE
# 891 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 892 "data/maps/PetalburgCity_Gym/scripts.pory"

# 893 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenConfusionRoomDoors::
# 894 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 895 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenConfusionRoomDoors
# 896 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 897 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 898 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 899 "data/maps/PetalburgCity_Gym/scripts.pory"

# 900 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ParkerPostBadge::
# 901 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_ParkerPostBadge, MSGBOX_NPC
# 902 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 903 "data/maps/PetalburgCity_Gym/scripts.pory"

# 904 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_George::
# 905 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_GEORGE, PetalburgCity_Gym_Text_GeorgeIntro, PetalburgCity_Gym_Text_GeorgeDefeat, PetalburgCity_Gym_EventScript_SlideOpenRecoveryRoomDoors
# 906 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_GeorgePostBadge
# 907 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GeorgePostBattle, MSGBOX_AUTOCLOSE
# 908 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 909 "data/maps/PetalburgCity_Gym/scripts.pory"

# 910 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenRecoveryRoomDoors::
# 911 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 912 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenRecoveryRoomDoors
# 913 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 914 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 915 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 916 "data/maps/PetalburgCity_Gym/scripts.pory"

# 917 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GeorgePostBadge::
# 918 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GeorgePostBadge, MSGBOX_NPC
# 919 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 920 "data/maps/PetalburgCity_Gym/scripts.pory"

# 921 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Berke::
# 922 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_BERKE, PetalburgCity_Gym_Text_BerkeIntro, PetalburgCity_Gym_Text_BerkeDefeat, PetalburgCity_Gym_EventScript_SlideOpenOHKORoomDoors
# 923 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_BerkePostBadge
# 924 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_BerkePostBattle, MSGBOX_AUTOCLOSE
# 925 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 926 "data/maps/PetalburgCity_Gym/scripts.pory"

# 927 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenOHKORoomDoors::
# 928 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 929 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenOHKORoomDoors
# 930 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 931 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 932 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 933 "data/maps/PetalburgCity_Gym/scripts.pory"

# 934 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BerkePostBadge::
# 935 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_BerkePostBadge, MSGBOX_NPC
# 936 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 937 "data/maps/PetalburgCity_Gym/scripts.pory"

# 938 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Mary::
# 939 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_MARY, PetalburgCity_Gym_Text_MaryIntro, PetalburgCity_Gym_Text_MaryDefeat, PetalburgCity_Gym_EventScript_SlideOpenAccuracyRoomDoors
# 940 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_MaryPostBadge
# 941 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_MaryPostBattle, MSGBOX_AUTOCLOSE
# 942 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 943 "data/maps/PetalburgCity_Gym/scripts.pory"

# 944 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenAccuracyRoomDoors::
# 945 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 946 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenAccuracyRoomDoors
# 947 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 948 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 949 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 950 "data/maps/PetalburgCity_Gym/scripts.pory"

# 951 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_MaryPostBadge::
# 952 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_MaryPostBadge, MSGBOX_NPC
# 953 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 954 "data/maps/PetalburgCity_Gym/scripts.pory"

# 955 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Alexia::
# 956 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_ALEXIA, PetalburgCity_Gym_Text_AlexiaIntro, PetalburgCity_Gym_Text_AlexiaDefeat, PetalburgCity_Gym_EventScript_SlideOpenDefenseRoomDoors
# 957 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_AlexiaPostBadge
# 958 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_AlexiaPostBattle, MSGBOX_AUTOCLOSE
# 959 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 960 "data/maps/PetalburgCity_Gym/scripts.pory"

# 961 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenDefenseRoomDoors::
# 962 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 963 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenDefenseRoomDoors
# 964 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 965 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 966 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 967 "data/maps/PetalburgCity_Gym/scripts.pory"

# 968 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_AlexiaPostBadge::
# 969 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_AlexiaPostBadge, MSGBOX_NPC
# 970 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 971 "data/maps/PetalburgCity_Gym/scripts.pory"

# 972 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Jody::
# 973 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_JODY, PetalburgCity_Gym_Text_JodyIntro, PetalburgCity_Gym_Text_JodyDefeat, PetalburgCity_Gym_EventScript_SlideOpenStrengthRoomDoors
# 974 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_JodyPostBadge
# 975 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_JodyPostBattle, MSGBOX_AUTOCLOSE
# 976 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 977 "data/maps/PetalburgCity_Gym/scripts.pory"

# 978 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenStrengthRoomDoors::
# 979 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 980 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenStrengthRoomDoors
# 981 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 982 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 983 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 984 "data/maps/PetalburgCity_Gym/scripts.pory"

# 985 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_JodyPostBadge::
# 986 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_JodyPostBadge, MSGBOX_NPC
# 987 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 988 "data/maps/PetalburgCity_Gym/scripts.pory"

# 989 "data/maps/PetalburgCity_Gym/scripts.pory"
@ VAR_0x8004 below is the room number
# 990 "data/maps/PetalburgCity_Gym/scripts.pory"
@ VAR_0x8005 below is 0 when the door should be slid open and 1 when it should be unlocked immediately
# 991 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenGymEntranceDoors::
# 992 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 1
# 993 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 994 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 995 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetEntranceRoomDoorMetatiles
# 996 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 997 "data/maps/PetalburgCity_Gym/scripts.pory"

# 998 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenSpeedRoomDoors::
# 999 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 2
# 1000 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1001 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1002 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetSpeedRoomDoorMetatiles
# 1003 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1004 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1005 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenAccuracyRoomDoors::
# 1006 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 3
# 1007 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1008 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1009 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetAccuracyRoomDoorMetatiles
# 1010 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1011 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1012 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenConfusionRoomDoors::
# 1013 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 4
# 1014 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1015 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1016 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetConfusionRoomDoorMetatiles
# 1017 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1018 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1019 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenDefenseRoomDoors::
# 1020 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 5
# 1021 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1022 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1023 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetDefenseRoomDoorMetatiles
# 1024 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1025 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1026 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenRecoveryRoomDoors::
# 1027 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 6
# 1028 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1029 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1030 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetRecoveryRoomDoorMetatiles
# 1031 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1032 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1033 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenStrengthRoomDoors::
# 1034 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 7
# 1035 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1036 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1037 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetStrengthRoomDoorMetatiles
# 1038 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1039 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1040 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenOHKORoomDoors::
# 1041 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 8
# 1042 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1043 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1044 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetOHKORoomDoorMetatiles
# 1045 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1046 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1047 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetEntranceRoomDoorMetatiles::
# 1048 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 85, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1049 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 85, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1050 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 98, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1051 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 98, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1052 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1053 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1054 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetSpeedRoomDoorMetatiles::
# 1055 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 46, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1056 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 46, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1057 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 59, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1058 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 59, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1059 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1060 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1061 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetAccuracyRoomDoorMetatiles::
# 1062 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 59, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1063 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 59, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1064 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 72, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1065 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 72, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1066 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1067 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1068 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetConfusionRoomDoorMetatiles::
# 1069 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 20, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1070 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 20, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1071 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1072 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1073 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetDefenseRoomDoorMetatiles::
# 1074 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 20, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1075 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 20, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1076 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 33, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1077 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 33, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1078 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1079 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1080 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetRecoveryRoomDoorMetatiles::
# 1081 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 33, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1082 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 33, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1083 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1084 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1085 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetStrengthRoomDoorMetatiles::
# 1086 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 7, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1087 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 7, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1088 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1089 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1090 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetOHKORoomDoorMetatiles::
# 1091 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 7, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1092 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 7, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1093 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1094 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1095 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenRoomDoors::
# 1096 "data/maps/PetalburgCity_Gym/scripts.pory"
	special PetalburgGymSlideOpenRoomDoors
# 1097 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitstate
# 1098 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1099 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1100 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_UnlockRoomDoors::
# 1101 "data/maps/PetalburgCity_Gym/scripts.pory"
	special PetalburgGymUnlockRoomDoors
# 1102 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1103 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1104 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GymGuide::
# 1105 "data/maps/PetalburgCity_Gym/scripts.pory"
	lock
# 1106 "data/maps/PetalburgCity_Gym/scripts.pory"
	faceplayer
# 1107 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_GymGuidePostVictory
# 1108 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 1109 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 1110 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1111 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1112 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GymGuidePostVictory::
# 1113 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 1114 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 1115 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1116 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1117 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftGymStatue::
# 1118 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 1119 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, PetalburgCity_Gym_EventScript_GymStatueCertified
# 1120 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_GymStatue
# 1121 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1122 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1123 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightGymStatue::
# 1124 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 1125 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, PetalburgCity_Gym_EventScript_GymStatueCertified
# 1126 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_GymStatue
# 1127 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1128 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1129 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GymStatueCertified::
# 1130 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 1131 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 1132 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1133 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1134 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GymStatue::
# 1135 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 1136 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 1137 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1138 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1139 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadYoureHereWithYourPokemon:
# 1140 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: Hm?\p"
# 1141 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Well, if it isn't {PLAYER}!\n"
# 1142 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "So you're all finished moving in?\p"
# 1143 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'm surprised that you managed to\n"
# 1144 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "get here by yourself.\p"
# 1145 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Oh, I see.\n"
# 1146 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You're with your Pokémon.\p"
# 1147 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hm… Then I guess you're going to\n"
# 1148 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "become a Trainer like me, {PLAYER}.\p"
# 1149 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "That's great news!\n"
# 1150 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'll be looking forward to it!$"
# 1151 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1152 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WallyIdLikeAPokemon:
# 1153 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Um… I…\n"
# 1154 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'd like to get a Pokémon, please…$"
# 1155 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1156 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadOhYoureWallyRight:
# 1157 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: Hm? You're… Uh… Oh, right.\n"
# 1158 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You're Wally, right?$"
# 1159 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1160 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WallyIveNeverCaughtAPokemon:
# 1161 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Wally: I'm going to go stay with my\n"
# 1162 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "relatives in Verdanturf Town.\p"
# 1163 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I thought I would be lonely by myself,\n"
# 1164 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "so I wanted to take a Pokémon along.\p"
# 1165 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But I've never caught a Pokémon before.\n"
# 1166 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I don't know how…$"
# 1167 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1168 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadHmISee:
# 1169 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: Hm. I see.$"
# 1170 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1171 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadPlayerGoWithWally:
# 1172 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: {PLAYER}, you heard that,\n"
# 1173 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "right?\p"
# 1174 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Go with Wally and make sure that he\n"
# 1175 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "safely catches a Pokémon.$"
# 1176 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1177 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_IllLoanYouMyZigzagoon:
# 1178 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Wally, here, I'll loan you my Pokémon.\p"
# 1179 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Wally received a Zigzagoon!$"
# 1180 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1181 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WallyThankYouAndDadGivesPokeBall:
# 1182 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Wally: Oh, wow!\n"
# 1183 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "A Pokémon!\p"
# 1184 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: Hm. I'll give you a Poké Ball, too.\n"
# 1185 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Go for it!\p"
# 1186 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Wally received a Poké Ball!$"
# 1187 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1188 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WallyOhWowThankYou:
# 1189 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Wally: Oh, wow!\n"
# 1190 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Thank you!$"
# 1191 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1192 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WouldYouReallyComeWithMe:
# 1193 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}… Would you really come\n"
# 1194 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "with me?$"
# 1195 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1196 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadSoDidItWorkOut:
# 1197 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: So, did it work out?$"
# 1198 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1199 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WallyThankYouBye:
# 1200 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Wally: Thank you, yes, it did.\n"
# 1201 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Here's your Pokémon back.\p"
# 1202 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}, thank you for coming along\n"
# 1203 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "with me.\p"
# 1204 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You two are why I was able to catch\n"
# 1205 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "my Pokémon.\p"
# 1206 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I promise I'll take really good\n"
# 1207 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "care of it.\p"
# 1208 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Oh! My mom's waiting for me,\n"
# 1209 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "so I have to go!\p"
# 1210 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Bye, {PLAYER}!$"
# 1211 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1212 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadGoCollectBadges:
# 1213 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: Now…\p"
# 1214 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}, if you want to become a\n"
# 1215 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "strong Trainer, here's my advice.\p"
# 1216 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Head for Rustboro City beyond this\n"
# 1217 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "town.\p"
# 1218 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "There, you should challenge\n"
# 1219 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the Gym Leader, Roxanne.\p"
# 1220 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "After her, go on to other Pokémon\n"
# 1221 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Gyms and defeat their Leaders.\p"
# 1222 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Collect Badges from them,\n"
# 1223 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "understood?\p"
# 1224 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Of course, I'm a Gym Leader, too.\n"
# 1225 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "We'll battle one day, {PLAYER}.\p"
# 1226 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But that's only after you become\n"
# 1227 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "stronger.\p"
# 1228 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Before you go, take this.$"
# 1229 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1230 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_PokevialGet:
# 1231 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Obtained a Pokévial from Dad!$"
# 1232 "data/maps/PetalburgCity_Gym/scripts.pory"
	
# 1233 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadPokevial:
# 1234 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: That's a Pokévial. Each dose\n"
# 1235 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "from it will let you heal your\l"
# 1236 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Pokémon to full while on the road.\p"
# 1237 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Any Pokémon Center will refill it\n"
# 1238 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "for you. It only holds one dose\l"
# 1239 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "for now, but I'm sure you'll find\l"
# 1240 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "ways to expand it on your journey.$"
# 1241 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1242 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanGoToRustboro:
# 1243 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: Hm? Aren't you going to the\n"
# 1244 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Pokémon Gym in Rustboro City?\p"
# 1245 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "There's no challenge for me to\n"
# 1246 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "battle a greenhorn Trainer.\p"
# 1247 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}, I want you to challenge me\n"
# 1248 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "when you become a lot stronger.\p"
# 1249 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'll battle you, {PLAYER}, when you\n"
# 1250 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "can show me four Gym Badges, okay?$"
# 1251 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1252 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanGoToDewford:
# 1253 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: I see… So, you've beaten\n"
# 1254 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the Gym Leader in Rustboro City.\p"
# 1255 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But there are many more Trainers\n"
# 1256 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "who are stronger than you, {PLAYER}.\p"
# 1257 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Across the sea in Dewford Town is a\n"
# 1258 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Gym Leader named Brawly.\p"
# 1259 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You should go challenge him.$"
# 1260 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1261 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_YouHaveGottenStronger:
# 1262 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: Hm… {PLAYER}, you have gotten\n"
# 1263 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "stronger.\p"
# 1264 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I can tell by the number of Badges\n"
# 1265 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "that you've earned.$"
# 1266 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1267 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanIntro:
# 1268 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: Hm…\n"
# 1269 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "So, you did get four Gym Badges.\p"
# 1270 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Fine, as I promised, we will have\n"
# 1271 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "a Pokémon battle.\p"
# 1272 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}…\p"
# 1273 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'm so happy that I can have\n"
# 1274 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "a real battle with my own child.\p"
# 1275 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But, a battle is a battle!\p"
# 1276 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I will do everything in my power as\n"
# 1277 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "a Gym Leader to win.\p"
# 1278 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}, you'd better give it your\n"
# 1279 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "best shot, too!$"
# 1280 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1281 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanDefeat:
# 1282 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "…\p"
# 1283 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I… I can't…\p"
# 1284 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I can't believe it. {PLAYER}…\p"
# 1285 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I lost to {PLAYER}?\p"
# 1286 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But, rules are rules!\n"
# 1287 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Here, take this.$"
# 1288 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1289 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ReceivedBalanceBadge:
# 1290 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER} received the Balance Badge\n"
# 1291 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "from Dad!$"
# 1292 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1293 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ExplainBalanceBadgeTakeThis:
# 1294 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: With that Badge, the Defense\n"
# 1295 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "of all your Pokémon will increase.\p"
# 1296 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Pokémon that know the HM move Surf\n"
# 1297 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "will be able to travel over water.\p"
# 1298 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "This is my gift to you. {PLAYER}, I'm\n"
# 1299 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "sure you can use it correctly.$"
# 1300 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1301 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ExplainFacade:
# 1302 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: TM42 contains Facade.\p"
# 1303 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "It doubles the power of moves if\n"
# 1304 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the Pokémon is poisoned, paralyzed,\l"
# 1305 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "or burned.\p"
# 1306 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "It might be able to turn a bad\n"
# 1307 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "situation into an advantage.$"
# 1308 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1309 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadHappyAndSad:
# 1310 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: As the Gym Leader, I can't\n"
# 1311 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "express how upset I am…\p"
# 1312 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But as a father, it makes me both\n"
# 1313 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "happy and a little sad. It's odd…$"
# 1314 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1315 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_PleaseComeWithMe:
# 1316 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Ah, there you are, {PLAYER}{KUN}!\p"
# 1317 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Please come with me.\n"
# 1318 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I have something I want you to have.$"
# 1319 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1320 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_LetMeBorrowPlayer:
# 1321 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Norman, you don't mind, do you?\p"
# 1322 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Let me borrow your {PLAYER}{KUN} for\n"
# 1323 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "a minute or two.$"
# 1324 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1325 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadGoingToKeepTraining:
# 1326 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: {PLAYER}, you should go visit\n"
# 1327 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "your mother every so often.\p"
# 1328 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'm going to stay here and redouble\n"
# 1329 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "my training.\p"
# 1330 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "It would bother me as a Trainer to\n"
# 1331 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "not avenge my loss to you, {PLAYER}!$"
# 1332 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1333 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadNoAmountOfTrainingIsEnough:
# 1334 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: {PLAYER}, how are things going?\p"
# 1335 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The world of Pokémon is deep.\p"
# 1336 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I honestly think that no amount of\n"
# 1337 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "training would ever be enough.$"
# 1338 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1339 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GymGuideAdvice:
# 1340 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hey, how's it going, Champion-\n"
# 1341 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "bound {PLAYER}?\p"
# 1342 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The doors in this Gym open when you\n"
# 1343 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "beat the awaiting Trainers.\p"
# 1344 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Whoops! The doors in this room are\n"
# 1345 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "already open, so don't attack me!\p"
# 1346 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The Trainers of Petalburg Gym\n"
# 1347 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "use all kinds of items.\p"
# 1348 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The door at the left leads to\n"
# 1349 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the Speed Room.\p"
# 1350 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The door at the right leads to\n"
# 1351 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the Accuracy Room.\p"
# 1352 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The room's name will be on\n"
# 1353 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the door, so choose carefully.\p"
# 1354 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Once you've chosen the door…\n"
# 1355 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Well, hey, go for it!$"
# 1356 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1357 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GymGuidePostVictory:
# 1358 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}! Whoa! You've overcome even\n"
# 1359 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "your own father!\p"
# 1360 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Like, whoa!\n"
# 1361 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "What a stunning turn of events!$"
# 1362 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1363 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_RandallIntro:
# 1364 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The ability to attack before the\n"
# 1365 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "opponent…\p"
# 1366 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Just that alone puts me at a great\n"
# 1367 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "advantage, don't you agree?$"
# 1368 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1369 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_RandallDefeat:
# 1370 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "That was a magnificent battle!$"
# 1371 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1372 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_RandallPostBattle:
# 1373 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Go on to the next room where a new\n"
# 1374 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "challenge awaits you.\p"
# 1375 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "At the left is the Confusion Room.\p"
# 1376 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The right door leads to the Defense\n"
# 1377 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Room.$"
# 1378 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1379 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_RandallPostBadge:
# 1380 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Whomever you beat, and whomever you\n"
# 1381 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "may lose to, you never shirk from\l"
# 1382 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "training yourself and your Pokémon.\p"
# 1383 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "That's what I think being a\n"
# 1384 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Gym Leader is all about.$"
# 1385 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1386 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ParkerIntro:
# 1387 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "This is the Confusion Room.\p"
# 1388 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Let me see how well bonded you are\n"
# 1389 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "with your Pokémon!$"
# 1390 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1391 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ParkerDefeat:
# 1392 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I couldn't confuse your team enough…\n"
# 1393 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You share a strong bond together.$"
# 1394 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1395 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ParkerPostBattle:
# 1396 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The next room is the Strength Room.\n"
# 1397 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Can you withstand brute force?$"
# 1398 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1399 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ParkerPostBadge:
# 1400 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "After you beat our Leader, the\n"
# 1401 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "training has become a lot tougher.$"
# 1402 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1403 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GeorgeIntro:
# 1404 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Just when you think you're going to\n"
# 1405 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "win, your opponent restores HP…\p"
# 1406 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Can you just imagine how awful that\n"
# 1407 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "must feel?\p"
# 1408 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'll show you exactly how awful it\n"
# 1409 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "feels!$"
# 1410 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1411 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GeorgeDefeat:
# 1412 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I couldn't restore HP enough…\n"
# 1413 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "What Attack power…$"
# 1414 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1415 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GeorgePostBattle:
# 1416 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I should have expected no less from\n"
# 1417 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "our Leader's kid.\p"
# 1418 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "No, wait! A Trainer's abilities are\n"
# 1419 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "earned only through effort.\p"
# 1420 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I lost because my own efforts\n"
# 1421 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "weren't enough.\p"
# 1422 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Go on! The One-hit KO Room is next.$"
# 1423 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1424 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GeorgePostBadge:
# 1425 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'm going to keep training at Gyms.\n"
# 1426 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "One day, I'll become a Leader.$"
# 1427 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1428 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_BerkeIntro:
# 1429 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'm not going to take it easy just\n"
# 1430 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "because you're our Leader's kid.\p"
# 1431 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'll show you how horrid it is for\n"
# 1432 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "a Pokémon to take a critical hit!$"
# 1433 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1434 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_BerkeDefeat:
# 1435 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Your power…\n"
# 1436 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You're the real deal.$"
# 1437 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1438 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_BerkePostBattle:
# 1439 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Your father really is strong.\n"
# 1440 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "He's a Trainer worth my respect.\p"
# 1441 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "And, I sense the same glow coming\n"
# 1442 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "from you as your father.\p"
# 1443 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I hope that you'll stage a terrific\n"
# 1444 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "battle with your father!$"
# 1445 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1446 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_BerkePostBadge:
# 1447 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Since your dad became the Leader,\n"
# 1448 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the Trainers of Petalburg City have\l"
# 1449 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "become a lot tougher.$"
# 1450 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1451 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_MaryIntro:
# 1452 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Giggle…\n"
# 1453 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "This is the Accuracy Room.\p"
# 1454 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "It's pretty nasty when every attack\n"
# 1455 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "lands without fail.$"
# 1456 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1457 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_MaryDefeat:
# 1458 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You were a cut above me…$"
# 1459 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1460 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_MaryPostBattle:
# 1461 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "There are some even stronger\n"
# 1462 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Trainers waiting for you.\p"
# 1463 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The left is the Defense Room, and\n"
# 1464 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the right is the Recovery Room.\p"
# 1465 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Your Pokémon's Attack power will be\n"
# 1466 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "on trial either way.$"
# 1467 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1468 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_MaryPostBadge:
# 1469 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you know what we're trying to\n"
# 1470 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "achieve as Trainers?\p"
# 1471 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "We're striving to become soul mates\n"
# 1472 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "with our Pokémon.$"
# 1473 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1474 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_AlexiaIntro:
# 1475 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The higher the Defense, the more\n"
# 1476 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "reckless I can be in attack.$"
# 1477 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1478 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_AlexiaDefeat:
# 1479 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Our defenses weren't enough…$"
# 1480 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1481 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_AlexiaPostBattle:
# 1482 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I think you've taught me a valuable\n"
# 1483 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "lesson here.\p"
# 1484 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Now, go on! The left door goes to\n"
# 1485 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the Strength Room.\p"
# 1486 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The right door opens to\n"
# 1487 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the One-hit KO Room.\p"
# 1488 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Both of them have Trainers who are\n"
# 1489 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "skilled at offense.$"
# 1490 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1491 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_AlexiaPostBadge:
# 1492 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hi! Have you tried using Surf?$"
# 1493 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1494 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_JodyIntro:
# 1495 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Our Gym Leader told us to go all out\n"
# 1496 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "and beat you.\p"
# 1497 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Even if you happen to be the\n"
# 1498 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Leader's kid!$"
# 1499 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1500 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_JodyDefeat:
# 1501 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But… I went all out!$"
# 1502 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1503 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_JodyPostBattle:
# 1504 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The way you use your Pokémon…\n"
# 1505 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "It's like your father's style.\p"
# 1506 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Go on through! The Gym Leader, your\n"
# 1507 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "father, is waiting!$"
# 1508 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1509 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_JodyPostBadge:
# 1510 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Sure, it's fine to make your Pokémon\n"
# 1511 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "stronger.\p"
# 1512 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But what decides the winner?\p"
# 1513 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Why, it's the feelings Trainers have\n"
# 1514 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "for their Pokémon.$"
# 1515 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1516 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DoorAppearsLocked:
# 1517 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "This door appears to be locked\n"
# 1518 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "right now…$"
# 1519 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1520 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterSpeedRoom:
# 1521 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“Speed Room,” the sign says.\p"
# 1522 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1523 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1524 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterAccuracyRoom:
# 1525 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“Accuracy Room,” the sign says.\p"
# 1526 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1527 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1528 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterConfusionRoom:
# 1529 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“Confusion Room,” the sign says.\p"
# 1530 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1531 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1532 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterDefenseRoom:
# 1533 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“Defense Room,” the sign says.\p"
# 1534 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1535 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1536 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterRecoveryRoom:
# 1537 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“Recovery Room,” the sign says.\p"
# 1538 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1539 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1540 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterStrengthRoom:
# 1541 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“Strength Room,” the sign says.\p"
# 1542 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1543 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1544 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterOHKORoom:
# 1545 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“One-hit KO Room,” the sign says.\p"
# 1546 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1547 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1548 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterGymLeadersRoom:
# 1549 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“Gym Leader's Room\p"
# 1550 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“See for yourself what Pokémon await\n"
# 1551 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "you!” the sign says.\p"
# 1552 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1553 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1554 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GymStatue:
# 1555 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Petalburg City Pokémon Gym$"
# 1556 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1557 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GymStatueCertified:
# 1558 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Petalburg City Pokémon Gym\p"
# 1559 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Norman's certified Trainers:\n"
# 1560 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}$"
# 1561 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1562 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanPreRematch:
# 1563 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: {PLAYER}…\n"
# 1564 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I had a feeling that you would come.\p"
# 1565 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I would never refuse to accept\n"
# 1566 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "a challenge from you.\p"
# 1567 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You do understand, don't you?\p"
# 1568 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Inside a Gym, it doesn't matter that\n"
# 1569 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "we are a parent and child.\p"
# 1570 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "…No, because we are parent and child,\n"
# 1571 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "we owe it to each other to do the best\l"
# 1572 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "we can. Isn't that right, {PLAYER}?$"
# 1573 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1574 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanRematchDefeat:
# 1575 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Uh… Haha…\n"
# 1576 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Maybe that was going too hard…$"
# 1577 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1578 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanPostRematch:
# 1579 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: {PLAYER}…\n"
# 1580 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "What is your dream?\p"
# 1581 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "My dream…\n"
# 1582 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hahaha…\l"
# 1583 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "It has already come true, actually.$"
# 1584 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1585 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanRematchNeedTwoMons:
# 1586 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: {PLAYER}…\n"
# 1587 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I had a feeling that you would come.\p"
# 1588 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I would never refuse to accept\n"
# 1589 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "a challenge from you.\p"
# 1590 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You do understand, don't you?\p"
# 1591 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Inside a Gym, it doesn't matter that\n"
# 1592 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "we are a parent and child.\p"
# 1593 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hm? Wait a second, {PLAYER}.\p"
# 1594 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you only have one Pokémon that is\n"
# 1595 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "capable of battle?\p"
# 1596 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Sorry, but you'll have to come back\n"
# 1597 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "with at least two Pokémon.$"
