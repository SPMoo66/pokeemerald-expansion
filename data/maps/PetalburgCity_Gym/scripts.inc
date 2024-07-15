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
	speakername (CommonText_Dad)
# 84 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadSoDidItWorkOut, MSGBOX_DEFAULT
# 85 "data/maps/PetalburgCity_Gym/scripts.pory"
	speakername (CommonText_Wally)
# 86 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WallyThankYouBye, MSGBOX_DEFAULT
# 87 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 88 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 89 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyExitGym
# 90 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 91 "data/maps/PetalburgCity_Gym/scripts.pory"
	playse SE_EXIT
# 92 "data/maps/PetalburgCity_Gym/scripts.pory"
	removeobject LOCALID_WALLY
# 93 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_CITY_WALLY
# 94 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 30
# 95 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 96 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 97 "data/maps/PetalburgCity_Gym/scripts.pory"
	speakername (CommonText_Dad)
# 98 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadGoCollectBadges, MSGBOX_DEFAULT
# 99 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 100 "data/maps/PetalburgCity_Gym/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 101 "data/maps/PetalburgCity_Gym/scripts.pory"
	message PetalburgCity_Gym_Text_PokevialGet
# 102 "data/maps/PetalburgCity_Gym/scripts.pory"
    additem ITEM_POKEVIAL
# 103 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitfanfare
# 104 "data/maps/PetalburgCity_Gym/scripts.pory"
	speakername (CommonText_Dad)
# 105 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadPokevial, MSGBOX_DEFAULT
# 106 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 2
# 107 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 108 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 109 "data/maps/PetalburgCity_Gym/scripts.pory"

# 110 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyExitGym:
# 111 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 112 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 113 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 114 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 115 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 116 "data/maps/PetalburgCity_Gym/scripts.pory"

# 117 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Norman::
# 118 "data/maps/PetalburgCity_Gym/scripts.pory"
	lock
# 119 "data/maps/PetalburgCity_Gym/scripts.pory"
	faceplayer
# 120 "data/maps/PetalburgCity_Gym/scripts.pory"
	switch VAR_PETALBURG_GYM_STATE
# 121 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 2, PetalburgCity_Gym_EventScript_NormanNoBadges
# 122 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 3, PetalburgCity_Gym_EventScript_NormanOneBadge
# 123 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 4, PetalburgCity_Gym_EventScript_NormanTwoBadges
# 124 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 5, PetalburgCity_Gym_EventScript_NormanThreeBadges
# 125 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 6, PetalburgCity_Gym_EventScript_NormanBattle
# 126 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 7, PetalburgCity_Gym_EventScript_NormanPostBattle
# 127 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 8, PetalburgCity_Gym_EventScript_NormanRematch
# 128 "data/maps/PetalburgCity_Gym/scripts.pory"
	speakername (CommonText_Dad)
# 129 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadYoureHereWithYourPokemon, MSGBOX_DEFAULT
# 130 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 131 "data/maps/PetalburgCity_Gym/scripts.pory"
	switch VAR_FACING
# 132 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_SOUTH, PetalburgCity_Gym_EventScript_BeginWallyTutorialSouth
# 133 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_NORTH, PetalburgCity_Gym_EventScript_BeginWallyTutorialNorth
# 134 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_WEST, PetalburgCity_Gym_EventScript_BeginWallyTutorialWest
# 135 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_EAST, PetalburgCity_Gym_EventScript_BeginWallyTutorialEast
# 136 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 137 "data/maps/PetalburgCity_Gym/scripts.pory"

# 138 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorialSouth::
# 139 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 0
# 140 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial
# 141 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 142 "data/maps/PetalburgCity_Gym/scripts.pory"

# 143 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorialNorth::
# 144 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 145 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial
# 146 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 147 "data/maps/PetalburgCity_Gym/scripts.pory"

# 148 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorialWest::
# 149 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 2
# 150 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial
# 151 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 152 "data/maps/PetalburgCity_Gym/scripts.pory"

# 153 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorialEast::
# 154 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 3
# 155 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial
# 156 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 157 "data/maps/PetalburgCity_Gym/scripts.pory"

# 158 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorial::
# 159 "data/maps/PetalburgCity_Gym/scripts.pory"
	addobject LOCALID_WALLY
# 160 "data/maps/PetalburgCity_Gym/scripts.pory"
	playse SE_DOOR
# 161 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_Gym_EventScript_WallyArriveSouth
# 162 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_WallyArriveNorth
# 163 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_WallyArriveWestEast
# 164 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_WallyArriveWestEast
# 165 "data/maps/PetalburgCity_Gym/scripts.pory"
	speakername (CommonText_Q)
# 166 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WallyIdLikeAPokemon, MSGBOX_DEFAULT
# 167 "data/maps/PetalburgCity_Gym/scripts.pory"
	speakername (CommonText_Dad)
# 168 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadOhYoureWallyRight, MSGBOX_DEFAULT
# 169 "data/maps/PetalburgCity_Gym/scripts.pory"
	speakername (CommonText_Wally)
# 170 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WallyIveNeverCaughtAPokemon, MSGBOX_DEFAULT
# 171 "data/maps/PetalburgCity_Gym/scripts.pory"
	speakername (CommonText_Dad)
# 172 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadHmISee, MSGBOX_DEFAULT
# 173 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_Gym_EventScript_NormanAddressPlayerSouth
# 174 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_NormanAddressPlayerNorth
# 175 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_NormanAddressPlayerWest
# 176 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_NormanAddressPlayerEast
# 177 "data/maps/PetalburgCity_Gym/scripts.pory"
	speakername (CommonText_Dad)
# 178 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadPlayerGoWithWally, MSGBOX_DEFAULT
# 179 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_Gym_EventScript_NormanAddressWallySouth
# 180 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_NormanAddressWallyNorth
# 181 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_NormanAddressWallyWest
# 182 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_NormanAddressWallyEast
# 183 "data/maps/PetalburgCity_Gym/scripts.pory"
	speakername (CommonText_Dad)
# 184 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_IllLoanYouMyZigzagoon, MSGBOX_DEFAULT
# 185 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 186 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WallyReceivedAZigzagoon, MSGBOX_DEFAULT
# 187 "data/maps/PetalburgCity_Gym/scripts.pory"
	speakername (CommonText_Wally)
# 188 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WallyThankYou, MSGBOX_DEFAULT
# 189 "data/maps/PetalburgCity_Gym/scripts.pory"
	speakername (CommonText_Dad)
# 190 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_AndDadGivesPokeBall, MSGBOX_DEFAULT
# 191 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 192 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WallyReceivedAPokeball, MSGBOX_DEFAULT
# 193 "data/maps/PetalburgCity_Gym/scripts.pory"
	speakername (CommonText_Wally)
# 194 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WallyOhWowThankYou, MSGBOX_DEFAULT
# 195 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_Gym_EventScript_NormanFaceDoorSouth
# 196 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_NormanFaceDoorNorth
# 197 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_NormanFaceDoorWest
# 198 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_NormanFaceDoorEast
# 199 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_Gym_EventScript_WallyFacePlayer
# 200 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_WallyFaceDown
# 201 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_WallyFacePlayer
# 202 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_WallyFacePlayer
# 203 "data/maps/PetalburgCity_Gym/scripts.pory"
	speakername (CommonText_Wally)
# 204 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WouldYouReallyComeWithMe, MSGBOX_DEFAULT
# 205 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 206 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 207 "data/maps/PetalburgCity_Gym/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 208 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_Gym_EventScript_ExitGymWithWallySouth
# 209 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_ExitGymWithWallyNorth
# 210 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_ExitGymWithWallyWest
# 211 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_ExitGymWithWallyEast
# 212 "data/maps/PetalburgCity_Gym/scripts.pory"
	removeobject LOCALID_WALLY
# 213 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_CITY_WALLYS_MOM
# 214 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 1
# 215 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 2
# 216 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_PETALBURG_CITY_WALLY
# 217 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_PETALBURG_GYM_WALLY
# 218 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_RIVAL
# 219 "data/maps/PetalburgCity_Gym/scripts.pory"
	special InitBirchState
# 220 "data/maps/PetalburgCity_Gym/scripts.pory"
	warp MAP_PETALBURG_CITY, 15, 8
# 221 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitstate
# 222 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 223 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 224 "data/maps/PetalburgCity_Gym/scripts.pory"

# 225 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallyArriveSouth::
# 226 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 227 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyArrive
# 228 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 229 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 230 "data/maps/PetalburgCity_Gym/scripts.pory"

# 231 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallyArriveNorth::
# 232 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyArriveNorth
# 233 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 234 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterRight
# 235 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 236 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 237 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 238 "data/maps/PetalburgCity_Gym/scripts.pory"

# 239 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallyArriveWestEast::
# 240 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 241 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 242 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyArrive
# 243 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 244 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 245 "data/maps/PetalburgCity_Gym/scripts.pory"

# 246 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallySouth::
# 247 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 248 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyExitSouthWest
# 249 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallySouth
# 250 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 251 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 252 "data/maps/PetalburgCity_Gym/scripts.pory"

# 253 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallyNorth::
# 254 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyExitNorth
# 255 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallyNorth
# 256 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 257 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 258 "data/maps/PetalburgCity_Gym/scripts.pory"

# 259 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallyWest::
# 260 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyExitSouthWest
# 261 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallyWest
# 262 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 263 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 264 "data/maps/PetalburgCity_Gym/scripts.pory"

# 265 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallyEast::
# 266 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyExitEast
# 267 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallyEast
# 268 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 269 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 270 "data/maps/PetalburgCity_Gym/scripts.pory"

# 271 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressPlayerSouth::
# 272 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterUp
# 273 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 274 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 275 "data/maps/PetalburgCity_Gym/scripts.pory"

# 276 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressPlayerNorth::
# 277 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 278 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 279 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 280 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 281 "data/maps/PetalburgCity_Gym/scripts.pory"

# 282 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressPlayerWest::
# 283 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterRight
# 284 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 285 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 286 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 287 "data/maps/PetalburgCity_Gym/scripts.pory"

# 288 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressPlayerEast::
# 289 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterLeft
# 290 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 291 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 292 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 293 "data/maps/PetalburgCity_Gym/scripts.pory"

# 294 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressWallySouth::
# 295 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 296 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 297 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 298 "data/maps/PetalburgCity_Gym/scripts.pory"

# 299 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressWallyNorth::
# 300 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterRight
# 301 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 302 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 303 "data/maps/PetalburgCity_Gym/scripts.pory"

# 304 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressWallyWest::
# 305 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 306 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 307 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 308 "data/maps/PetalburgCity_Gym/scripts.pory"

# 309 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressWallyEast::
# 310 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 311 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 312 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 313 "data/maps/PetalburgCity_Gym/scripts.pory"

# 314 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallyFacePlayer::
# 315 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_FacePlayer
# 316 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 317 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 318 "data/maps/PetalburgCity_Gym/scripts.pory"

# 319 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallyFaceDown::
# 320 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceFasterDown
# 321 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 322 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 323 "data/maps/PetalburgCity_Gym/scripts.pory"

# 324 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanNoBadges::
# 325 "data/maps/PetalburgCity_Gym/scripts.pory"
	speakername (CommonText_Wally)
# 326 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_NormanGoToRustboro, MSGBOX_DEFAULT
# 327 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 328 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 329 "data/maps/PetalburgCity_Gym/scripts.pory"

# 330 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanOneBadge::
# 331 "data/maps/PetalburgCity_Gym/scripts.pory"
	speakername (CommonText_Wally)
# 332 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_NormanGoToDewford, MSGBOX_DEFAULT
# 333 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 334 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 335 "data/maps/PetalburgCity_Gym/scripts.pory"

# 336 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanTwoBadges::
# 337 "data/maps/PetalburgCity_Gym/scripts.pory"
	speakername (CommonText_Wally)
# 338 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_YouHaveGottenStronger, MSGBOX_DEFAULT
# 339 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 340 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 341 "data/maps/PetalburgCity_Gym/scripts.pory"

# 342 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanThreeBadges::
# 343 "data/maps/PetalburgCity_Gym/scripts.pory"
	speakername (CommonText_Wally)
# 344 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_YouHaveGottenStronger, MSGBOX_DEFAULT
# 345 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 346 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 347 "data/maps/PetalburgCity_Gym/scripts.pory"

# 348 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanFaceDoorSouth::
# 349 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 350 "data/maps/PetalburgCity_Gym/scripts.pory"

# 351 "data/maps/PetalburgCity_Gym/scripts.pory"
@ For all other NormanFaceDoorX, Norman is already facing the door from NormanAddressWallyX
# 352 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanFaceDoorNorth::
# 353 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 354 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 355 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 356 "data/maps/PetalburgCity_Gym/scripts.pory"

# 357 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanFaceDoorWest::
# 358 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 359 "data/maps/PetalburgCity_Gym/scripts.pory"

# 360 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanFaceDoorEast::
# 361 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 362 "data/maps/PetalburgCity_Gym/scripts.pory"

# 363 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanPostBattle::
# 364 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_ShouldGiveEnigmaBerry
# 365 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, PetalburgCity_Gym_EventScript_GiveEnigmaBerry
# 366 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_FACADE, PetalburgCity_Gym_EventScript_GiveFacade2
# 367 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, PetalburgCity_Gym_EventScript_NoAmountOfTrainingIsEnough
# 368 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadGoingToKeepTraining, MSGBOX_DEFAULT
# 369 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 370 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 371 "data/maps/PetalburgCity_Gym/scripts.pory"

# 372 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GiveFacade2::
# 373 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_GiveFacade
# 374 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 375 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 376 "data/maps/PetalburgCity_Gym/scripts.pory"

# 377 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanRematch::
# 378 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_NORMAN_1, PetalburgCity_Gym_Text_NormanPreRematch, PetalburgCity_Gym_Text_NormanRematchDefeat, PetalburgCity_Gym_Text_NormanRematchNeedTwoMons
# 379 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_NormanPostRematch, MSGBOX_AUTOCLOSE
# 380 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 381 "data/maps/PetalburgCity_Gym/scripts.pory"

# 382 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ShouldGiveEnigmaBerry::
# 383 "data/maps/PetalburgCity_Gym/scripts.pory"
	specialvar VAR_RESULT, IsEnigmaBerryValid
# 384 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, PetalburgCity_Gym_EventScript_DontGiveEnigmaBerry
# 385 "data/maps/PetalburgCity_Gym/scripts.pory"
	checkitem ITEM_ENIGMA_BERRY_E_READER
# 386 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, PetalburgCity_Gym_EventScript_DontGiveEnigmaBerry
# 387 "data/maps/PetalburgCity_Gym/scripts.pory"
	checkpcitem ITEM_ENIGMA_BERRY_E_READER
# 388 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, PetalburgCity_Gym_EventScript_DontGiveEnigmaBerry
# 389 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_ENIGMA_BERRY_AVAILABLE, 0, PetalburgCity_Gym_EventScript_DontGiveEnigmaBerry
# 390 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GiveEnigmaBerry, MSGBOX_DEFAULT
# 391 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_RESULT, TRUE
# 392 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 393 "data/maps/PetalburgCity_Gym/scripts.pory"

# 394 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_DontGiveEnigmaBerry::
# 395 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_RESULT, FALSE
# 396 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 397 "data/maps/PetalburgCity_Gym/scripts.pory"

# 398 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GiveEnigmaBerry::
# 399 "data/maps/PetalburgCity_Gym/scripts.pory"
	giveitem ITEM_ENIGMA_BERRY_E_READER
# 400 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 401 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_ENIGMA_BERRY_AVAILABLE, 0
# 402 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 403 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 404 "data/maps/PetalburgCity_Gym/scripts.pory"

# 405 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanBattle::
# 406 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_NormanIntro, MSGBOX_DEFAULT
# 407 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_NORMAN_1, PetalburgCity_Gym_Text_NormanDefeat
# 408 "data/maps/PetalburgCity_Gym/scripts.pory"
	message PetalburgCity_Gym_Text_ReceivedBalanceBadge
# 409 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmessage
# 410 "data/maps/PetalburgCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 411 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_ExplainBalanceBadgeTakeThis, MSGBOX_DEFAULT
# 412 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_PETALBURG_GYM
# 413 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 7
# 414 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_BADGE05_GET
# 415 "data/maps/PetalburgCity_Gym/scripts.pory"
	special ResetHealLocationFromDewford
# 416 "data/maps/PetalburgCity_Gym/scripts.pory"
	call EventScript_HideMrBriney
# 417 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_HIDE_MAUVILLE_GYM_WATTSON
# 418 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_MAUVILLE_CITY_WATTSON
# 419 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 5
# 420 "data/maps/PetalburgCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 421 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_UnlockAllDoors
# 422 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 423 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_GiveFacade
# 424 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 10
# 425 "data/maps/PetalburgCity_Gym/scripts.pory"
	speakername (CommonText_Dad)
# 426 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadPokevial2, MSGBOX_DEFAULT
# 427 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 428 "data/maps/PetalburgCity_Gym/scripts.pory"
	pokevialincreasesize
# 429 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox Text_PokevialSizeIncrease, MSGBOX_DEFAULT
# 430 "data/maps/PetalburgCity_Gym/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 431 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitfanfare
# 432 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 433 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 20
# 434 "data/maps/PetalburgCity_Gym/scripts.pory"
	speakername (CommonText_Dad)
# 435 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadHappyAndSad, MSGBOX_DEFAULT
# 436 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 437 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 30
# 438 "data/maps/PetalburgCity_Gym/scripts.pory"
	playse SE_DOOR
# 439 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 10
# 440 "data/maps/PetalburgCity_Gym/scripts.pory"
	addobject LOCALID_WALLYS_DAD
# 441 "data/maps/PetalburgCity_Gym/scripts.pory"
	switch VAR_FACING
# 442 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_NORTH, PetalburgCity_Gym_EventScript_WallysDadArrivesNorth
# 443 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_WEST, PetalburgCity_Gym_EventScript_WallysDadArrivesWest
# 444 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_EAST, PetalburgCity_Gym_EventScript_WallysDadArrivesEast
# 445 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 446 "data/maps/PetalburgCity_Gym/scripts.pory"

# 447 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GiveFacade::
# 448 "data/maps/PetalburgCity_Gym/scripts.pory"
	giveitem ITEM_TM_FACADE
# 449 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
# 450 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_FACADE
# 451 "data/maps/PetalburgCity_Gym/scripts.pory"
	speakername (CommonText_Dad)
# 452 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_ExplainFacade, MSGBOX_DEFAULT
# 453 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 454 "data/maps/PetalburgCity_Gym/scripts.pory"

# 455 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadArrivesNorth::
# 456 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 457 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_WallysDadArrives
# 458 "data/maps/PetalburgCity_Gym/scripts.pory"

# 459 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadArrivesEast::
# 460 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 2
# 461 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_WallysDadArrives
# 462 "data/maps/PetalburgCity_Gym/scripts.pory"

# 463 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadArrivesWest::
# 464 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 3
# 465 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_WallysDadArrives
# 466 "data/maps/PetalburgCity_Gym/scripts.pory"

# 467 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadArrives::
# 468 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadEnterGym
# 469 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 470 "data/maps/PetalburgCity_Gym/scripts.pory"
	playse SE_PIN
# 471 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, Common_Movement_ExclamationMark
# 472 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 473 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, Common_Movement_Delay48
# 474 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 475 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 10
# 476 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_WallysDadApproachPlayerNorth
# 477 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_WallysDadApproachPlayerEast
# 478 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_WallysDadApproachPlayerWest
# 479 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_PleaseComeWithMe, MSGBOX_DEFAULT
# 480 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 481 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 20
# 482 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_WallysDadFaceNormanNorth
# 483 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_WallysDadFaceNormanEast
# 484 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_WallysDadFaceNormanWest
# 485 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_LetMeBorrowPlayer, MSGBOX_DEFAULT
# 486 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 487 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 488 "data/maps/PetalburgCity_Gym/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 489 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_ExitGymWithWallysDadNorth
# 490 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_ExitGymWithWallysDadEast
# 491 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_ExitGymWithWallysDadWest
# 492 "data/maps/PetalburgCity_Gym/scripts.pory"
	removeobject LOCALID_WALLYS_DAD
# 493 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 4
# 494 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_PETALBURG_CITY_WALLYS_DAD
# 495 "data/maps/PetalburgCity_Gym/scripts.pory"
	warp MAP_PETALBURG_CITY, 15, 8
# 496 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitstate
# 497 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 498 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 499 "data/maps/PetalburgCity_Gym/scripts.pory"

# 500 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadFaceNormanNorth::
# 501 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, Common_Movement_WalkInPlaceFasterUp
# 502 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 503 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 504 "data/maps/PetalburgCity_Gym/scripts.pory"

# 505 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadFaceNormanEast::
# 506 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, Common_Movement_WalkInPlaceFasterRight
# 507 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 508 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 509 "data/maps/PetalburgCity_Gym/scripts.pory"

# 510 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadFaceNormanWest::
# 511 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, Common_Movement_WalkInPlaceFasterLeft
# 512 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 513 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 514 "data/maps/PetalburgCity_Gym/scripts.pory"

# 515 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadApproachPlayerNorth::
# 516 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadApproachPlayerNorth
# 517 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 518 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 519 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterLeft
# 520 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 521 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 522 "data/maps/PetalburgCity_Gym/scripts.pory"

# 523 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadApproachPlayerEast::
# 524 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadApproachPlayerEast
# 525 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 526 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 527 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 528 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 529 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 530 "data/maps/PetalburgCity_Gym/scripts.pory"

# 531 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadApproachPlayerWest::
# 532 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadApproachPlayerWest
# 533 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 534 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 535 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 536 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 537 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 538 "data/maps/PetalburgCity_Gym/scripts.pory"

# 539 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallysDadNorth::
# 540 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadExitNorth
# 541 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 542 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallysDadNorth
# 543 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 544 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 545 "data/maps/PetalburgCity_Gym/scripts.pory"

# 546 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallysDadEast::
# 547 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadExitEast
# 548 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallysDadEast
# 549 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 550 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 551 "data/maps/PetalburgCity_Gym/scripts.pory"

# 552 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallysDadWest::
# 553 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadExitWest
# 554 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallysDadWest
# 555 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 556 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 557 "data/maps/PetalburgCity_Gym/scripts.pory"

# 558 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadExitNorth:
# 559 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 560 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 561 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 562 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 563 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 564 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 565 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 566 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 567 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 568 "data/maps/PetalburgCity_Gym/scripts.pory"
	set_invisible
# 569 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 570 "data/maps/PetalburgCity_Gym/scripts.pory"

# 571 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadExitEast:
# 572 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 573 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 574 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 575 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 576 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 577 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 578 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 579 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 580 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 581 "data/maps/PetalburgCity_Gym/scripts.pory"
	set_invisible
# 582 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 583 "data/maps/PetalburgCity_Gym/scripts.pory"

# 584 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadExitWest:
# 585 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 586 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 587 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 588 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 589 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 590 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 591 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 592 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 593 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 594 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 595 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 596 "data/maps/PetalburgCity_Gym/scripts.pory"
	set_invisible
# 597 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 598 "data/maps/PetalburgCity_Gym/scripts.pory"

# 599 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallysDadNorth:
# 600 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 601 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 602 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 603 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 604 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 605 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 606 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 607 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 608 "data/maps/PetalburgCity_Gym/scripts.pory"

# 609 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallysDadEast:
# 610 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 611 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 612 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 613 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 614 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 615 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 616 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 617 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 618 "data/maps/PetalburgCity_Gym/scripts.pory"

# 619 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallysDadWest:
# 620 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 621 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 622 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 623 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 624 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 625 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 626 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 627 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 628 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 629 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 630 "data/maps/PetalburgCity_Gym/scripts.pory"

# 631 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadEnterGym:
# 632 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 633 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 634 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_right
# 635 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 636 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_left
# 637 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 638 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 639 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 640 "data/maps/PetalburgCity_Gym/scripts.pory"

# 641 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadApproachPlayerNorth:
# 642 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 643 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 644 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 645 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 646 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 647 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_right
# 648 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 649 "data/maps/PetalburgCity_Gym/scripts.pory"

# 650 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadApproachPlayerEast:
# 651 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 652 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 653 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 654 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 655 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 656 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 657 "data/maps/PetalburgCity_Gym/scripts.pory"

# 658 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadApproachPlayerWest:
# 659 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 660 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 661 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 662 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 663 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 664 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 665 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 666 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 667 "data/maps/PetalburgCity_Gym/scripts.pory"

# 668 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyArriveNorth:
# 669 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 670 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 671 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 672 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 673 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 674 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 675 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 676 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 677 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_left
# 678 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 679 "data/maps/PetalburgCity_Gym/scripts.pory"

# 680 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyArrive:
# 681 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 682 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 683 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 684 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 685 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 686 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 687 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 688 "data/maps/PetalburgCity_Gym/scripts.pory"

# 689 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyExitNorth:
# 690 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 691 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 692 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 693 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 694 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 695 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 696 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 697 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 698 "data/maps/PetalburgCity_Gym/scripts.pory"

# 699 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyExitEast:
# 700 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 701 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 702 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 703 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 704 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 705 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 706 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 707 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 708 "data/maps/PetalburgCity_Gym/scripts.pory"

# 709 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyExitSouthWest:
# 710 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 711 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 712 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 713 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 714 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 715 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 716 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 717 "data/maps/PetalburgCity_Gym/scripts.pory"

# 718 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallyNorth:
# 719 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 720 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 721 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 722 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 723 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 724 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 725 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 726 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 727 "data/maps/PetalburgCity_Gym/scripts.pory"

# 728 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallySouth:
# 729 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 730 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 731 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 732 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 733 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 734 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 735 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 736 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 737 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 738 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 739 "data/maps/PetalburgCity_Gym/scripts.pory"

# 740 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallyWest:
# 741 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 742 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 743 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 744 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 745 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 746 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 747 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 748 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 749 "data/maps/PetalburgCity_Gym/scripts.pory"

# 750 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallyEast:
# 751 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_down
# 752 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 753 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 754 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 755 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 756 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 757 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 758 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 759 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 760 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 761 "data/maps/PetalburgCity_Gym/scripts.pory"

# 762 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NoAmountOfTrainingIsEnough::
# 763 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadNoAmountOfTrainingIsEnough, MSGBOX_DEFAULT
# 764 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 765 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 766 "data/maps/PetalburgCity_Gym/scripts.pory"

# 767 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SpeedRoomDoor::
# 768 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 769 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_lt VAR_PETALBURG_GYM_STATE, 6, PetalburgCity_Gym_EventScript_DoorLocked
# 770 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 771 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 85
# 772 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterSpeedRoom, MSGBOX_YESNO
# 773 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 774 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 775 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 776 "data/maps/PetalburgCity_Gym/scripts.pory"

# 777 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_EnterRoom::
# 778 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 779 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 30
# 780 "data/maps/PetalburgCity_Gym/scripts.pory"
	warpdoor MAP_PETALBURG_CITY_GYM, VAR_0x8008, VAR_0x8009
# 781 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitstate
# 782 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 783 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 784 "data/maps/PetalburgCity_Gym/scripts.pory"

# 785 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_DontEnterRoom::
# 786 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 787 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 788 "data/maps/PetalburgCity_Gym/scripts.pory"

# 789 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_DoorLocked::
# 790 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DoorAppearsLocked, MSGBOX_DEFAULT
# 791 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 792 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 793 "data/maps/PetalburgCity_Gym/scripts.pory"

# 794 "data/maps/PetalburgCity_Gym/scripts.pory"
@ VAR_0x8008 and VAR_0x8009 below are the x and y coordinates of the warp
# 795 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_AccuracyRoomDoor::
# 796 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 797 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_lt VAR_PETALBURG_GYM_STATE, 6, PetalburgCity_Gym_EventScript_DoorLocked
# 798 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 799 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 98
# 800 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterAccuracyRoom, MSGBOX_YESNO
# 801 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 802 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 803 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 804 "data/maps/PetalburgCity_Gym/scripts.pory"

# 805 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ConfusionRoomDoor::
# 806 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 807 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_RANDALL, PetalburgCity_Gym_EventScript_DoorLocked
# 808 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 809 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 46
# 810 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterConfusionRoom, MSGBOX_YESNO
# 811 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 812 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 813 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 814 "data/maps/PetalburgCity_Gym/scripts.pory"

# 815 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftDefenseRoomDoor::
# 816 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 817 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_RANDALL, PetalburgCity_Gym_EventScript_DoorLocked
# 818 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 819 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 59
# 820 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterDefenseRoom, MSGBOX_YESNO
# 821 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 822 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 823 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 824 "data/maps/PetalburgCity_Gym/scripts.pory"

# 825 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightDefenseRoomDoor::
# 826 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 827 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_MARY, PetalburgCity_Gym_EventScript_DoorLocked
# 828 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 829 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 59
# 830 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterDefenseRoom, MSGBOX_YESNO
# 831 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 832 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 833 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 834 "data/maps/PetalburgCity_Gym/scripts.pory"

# 835 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RecoveryRoomDoor::
# 836 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 837 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_MARY, PetalburgCity_Gym_EventScript_DoorLocked
# 838 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 839 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 72
# 840 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterRecoveryRoom, MSGBOX_YESNO
# 841 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 842 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 843 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 844 "data/maps/PetalburgCity_Gym/scripts.pory"

# 845 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftStrengthRoomDoor::
# 846 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 847 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_PARKER, PetalburgCity_Gym_EventScript_DoorLocked
# 848 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 849 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 20
# 850 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterStrengthRoom, MSGBOX_YESNO
# 851 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 852 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 853 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 854 "data/maps/PetalburgCity_Gym/scripts.pory"

# 855 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightStrengthRoomDoor::
# 856 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 857 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_ALEXIA, PetalburgCity_Gym_EventScript_DoorLocked
# 858 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 859 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 20
# 860 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterStrengthRoom, MSGBOX_YESNO
# 861 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 862 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 863 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 864 "data/maps/PetalburgCity_Gym/scripts.pory"

# 865 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftOHKORoomDoor::
# 866 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 867 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_ALEXIA, PetalburgCity_Gym_EventScript_DoorLocked
# 868 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 869 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 33
# 870 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterOHKORoom, MSGBOX_YESNO
# 871 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 872 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 873 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 874 "data/maps/PetalburgCity_Gym/scripts.pory"

# 875 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightOHKORoomDoor::
# 876 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 877 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_GEORGE, PetalburgCity_Gym_EventScript_DoorLocked
# 878 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 879 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 33
# 880 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterOHKORoom, MSGBOX_YESNO
# 881 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 882 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 883 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 884 "data/maps/PetalburgCity_Gym/scripts.pory"

# 885 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftGymLeadersRoomDoor::
# 886 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 887 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_JODY, PetalburgCity_Gym_EventScript_DoorLocked
# 888 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 889 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 7
# 890 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterGymLeadersRoom, MSGBOX_YESNO
# 891 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 892 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 893 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 894 "data/maps/PetalburgCity_Gym/scripts.pory"

# 895 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightGymLeadersRoomDoor::
# 896 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 897 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_BERKE, PetalburgCity_Gym_EventScript_DoorLocked
# 898 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 899 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 7
# 900 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterGymLeadersRoom, MSGBOX_YESNO
# 901 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 902 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 903 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 904 "data/maps/PetalburgCity_Gym/scripts.pory"

# 905 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Randall::
# 906 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_RANDALL, PetalburgCity_Gym_Text_RandallIntro, PetalburgCity_Gym_Text_RandallDefeat, PetalburgCity_Gym_EventScript_SlideOpenSpeedRoomDoors
# 907 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_RandallPostBadge
# 908 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_RandallPostBattle, MSGBOX_AUTOCLOSE
# 909 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 910 "data/maps/PetalburgCity_Gym/scripts.pory"

# 911 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenSpeedRoomDoors::
# 912 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 913 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenSpeedRoomDoors
# 914 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 915 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 916 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 917 "data/maps/PetalburgCity_Gym/scripts.pory"

# 918 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RandallPostBadge::
# 919 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_RandallPostBadge, MSGBOX_NPC
# 920 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 921 "data/maps/PetalburgCity_Gym/scripts.pory"

# 922 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Parker::
# 923 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_PARKER, PetalburgCity_Gym_Text_ParkerIntro, PetalburgCity_Gym_Text_ParkerDefeat, PetalburgCity_Gym_EventScript_SlideOpenConfusionRoomDoors
# 924 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_ParkerPostBadge
# 925 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_ParkerPostBattle, MSGBOX_AUTOCLOSE
# 926 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 927 "data/maps/PetalburgCity_Gym/scripts.pory"

# 928 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenConfusionRoomDoors::
# 929 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 930 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenConfusionRoomDoors
# 931 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 932 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 933 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 934 "data/maps/PetalburgCity_Gym/scripts.pory"

# 935 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ParkerPostBadge::
# 936 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_ParkerPostBadge, MSGBOX_NPC
# 937 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 938 "data/maps/PetalburgCity_Gym/scripts.pory"

# 939 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_George::
# 940 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_GEORGE, PetalburgCity_Gym_Text_GeorgeIntro, PetalburgCity_Gym_Text_GeorgeDefeat, PetalburgCity_Gym_EventScript_SlideOpenRecoveryRoomDoors
# 941 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_GeorgePostBadge
# 942 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GeorgePostBattle, MSGBOX_AUTOCLOSE
# 943 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 944 "data/maps/PetalburgCity_Gym/scripts.pory"

# 945 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenRecoveryRoomDoors::
# 946 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 947 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenRecoveryRoomDoors
# 948 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 949 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 950 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 951 "data/maps/PetalburgCity_Gym/scripts.pory"

# 952 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GeorgePostBadge::
# 953 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GeorgePostBadge, MSGBOX_NPC
# 954 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 955 "data/maps/PetalburgCity_Gym/scripts.pory"

# 956 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Berke::
# 957 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_BERKE, PetalburgCity_Gym_Text_BerkeIntro, PetalburgCity_Gym_Text_BerkeDefeat, PetalburgCity_Gym_EventScript_SlideOpenOHKORoomDoors
# 958 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_BerkePostBadge
# 959 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_BerkePostBattle, MSGBOX_AUTOCLOSE
# 960 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 961 "data/maps/PetalburgCity_Gym/scripts.pory"

# 962 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenOHKORoomDoors::
# 963 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 964 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenOHKORoomDoors
# 965 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 966 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 967 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 968 "data/maps/PetalburgCity_Gym/scripts.pory"

# 969 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BerkePostBadge::
# 970 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_BerkePostBadge, MSGBOX_NPC
# 971 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 972 "data/maps/PetalburgCity_Gym/scripts.pory"

# 973 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Mary::
# 974 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_MARY, PetalburgCity_Gym_Text_MaryIntro, PetalburgCity_Gym_Text_MaryDefeat, PetalburgCity_Gym_EventScript_SlideOpenAccuracyRoomDoors
# 975 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_MaryPostBadge
# 976 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_MaryPostBattle, MSGBOX_AUTOCLOSE
# 977 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 978 "data/maps/PetalburgCity_Gym/scripts.pory"

# 979 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenAccuracyRoomDoors::
# 980 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 981 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenAccuracyRoomDoors
# 982 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 983 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 984 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 985 "data/maps/PetalburgCity_Gym/scripts.pory"

# 986 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_MaryPostBadge::
# 987 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_MaryPostBadge, MSGBOX_NPC
# 988 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 989 "data/maps/PetalburgCity_Gym/scripts.pory"

# 990 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Alexia::
# 991 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_ALEXIA, PetalburgCity_Gym_Text_AlexiaIntro, PetalburgCity_Gym_Text_AlexiaDefeat, PetalburgCity_Gym_EventScript_SlideOpenDefenseRoomDoors
# 992 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_AlexiaPostBadge
# 993 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_AlexiaPostBattle, MSGBOX_AUTOCLOSE
# 994 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 995 "data/maps/PetalburgCity_Gym/scripts.pory"

# 996 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenDefenseRoomDoors::
# 997 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 998 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenDefenseRoomDoors
# 999 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 1000 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 1001 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1002 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1003 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_AlexiaPostBadge::
# 1004 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_AlexiaPostBadge, MSGBOX_NPC
# 1005 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1006 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1007 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Jody::
# 1008 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_JODY, PetalburgCity_Gym_Text_JodyIntro, PetalburgCity_Gym_Text_JodyDefeat, PetalburgCity_Gym_EventScript_SlideOpenStrengthRoomDoors
# 1009 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_JodyPostBadge
# 1010 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_JodyPostBattle, MSGBOX_AUTOCLOSE
# 1011 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1012 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1013 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenStrengthRoomDoors::
# 1014 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 1015 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenStrengthRoomDoors
# 1016 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 1017 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 1018 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1019 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1020 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_JodyPostBadge::
# 1021 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_JodyPostBadge, MSGBOX_NPC
# 1022 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1023 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1024 "data/maps/PetalburgCity_Gym/scripts.pory"
@ VAR_0x8004 below is the room number
# 1025 "data/maps/PetalburgCity_Gym/scripts.pory"
@ VAR_0x8005 below is 0 when the door should be slid open and 1 when it should be unlocked immediately
# 1026 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenGymEntranceDoors::
# 1027 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 1
# 1028 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1029 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1030 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetEntranceRoomDoorMetatiles
# 1031 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1032 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1033 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenSpeedRoomDoors::
# 1034 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 2
# 1035 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1036 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1037 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetSpeedRoomDoorMetatiles
# 1038 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1039 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1040 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenAccuracyRoomDoors::
# 1041 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 3
# 1042 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1043 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1044 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetAccuracyRoomDoorMetatiles
# 1045 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1046 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1047 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenConfusionRoomDoors::
# 1048 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 4
# 1049 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1050 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1051 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetConfusionRoomDoorMetatiles
# 1052 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1053 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1054 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenDefenseRoomDoors::
# 1055 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 5
# 1056 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1057 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1058 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetDefenseRoomDoorMetatiles
# 1059 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1060 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1061 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenRecoveryRoomDoors::
# 1062 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 6
# 1063 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1064 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1065 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetRecoveryRoomDoorMetatiles
# 1066 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1067 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1068 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenStrengthRoomDoors::
# 1069 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 7
# 1070 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1071 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1072 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetStrengthRoomDoorMetatiles
# 1073 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1074 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1075 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenOHKORoomDoors::
# 1076 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 8
# 1077 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1078 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1079 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetOHKORoomDoorMetatiles
# 1080 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1081 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1082 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetEntranceRoomDoorMetatiles::
# 1083 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 85, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1084 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 85, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1085 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 98, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1086 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 98, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1087 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1088 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1089 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetSpeedRoomDoorMetatiles::
# 1090 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 46, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1091 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 46, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1092 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 59, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1093 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 59, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1094 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1095 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1096 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetAccuracyRoomDoorMetatiles::
# 1097 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 59, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1098 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 59, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1099 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 72, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1100 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 72, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1101 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1102 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1103 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetConfusionRoomDoorMetatiles::
# 1104 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 20, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1105 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 20, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1106 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1107 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1108 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetDefenseRoomDoorMetatiles::
# 1109 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 20, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1110 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 20, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1111 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 33, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1112 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 33, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1113 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1114 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1115 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetRecoveryRoomDoorMetatiles::
# 1116 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 33, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1117 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 33, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1118 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1119 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1120 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetStrengthRoomDoorMetatiles::
# 1121 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 7, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1122 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 7, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1123 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1124 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1125 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetOHKORoomDoorMetatiles::
# 1126 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 7, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1127 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 7, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1128 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1129 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1130 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenRoomDoors::
# 1131 "data/maps/PetalburgCity_Gym/scripts.pory"
	special PetalburgGymSlideOpenRoomDoors
# 1132 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitstate
# 1133 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1134 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1135 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_UnlockRoomDoors::
# 1136 "data/maps/PetalburgCity_Gym/scripts.pory"
	special PetalburgGymUnlockRoomDoors
# 1137 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1138 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1139 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GymGuide::
# 1140 "data/maps/PetalburgCity_Gym/scripts.pory"
	lock
# 1141 "data/maps/PetalburgCity_Gym/scripts.pory"
	faceplayer
# 1142 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_GymGuidePostVictory
# 1143 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 1144 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 1145 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1146 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1147 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GymGuidePostVictory::
# 1148 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 1149 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 1150 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1151 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1152 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftGymStatue::
# 1153 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 1154 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, PetalburgCity_Gym_EventScript_GymStatueCertified
# 1155 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_GymStatue
# 1156 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1157 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1158 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightGymStatue::
# 1159 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 1160 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, PetalburgCity_Gym_EventScript_GymStatueCertified
# 1161 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_GymStatue
# 1162 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1163 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1164 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GymStatueCertified::
# 1165 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 1166 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 1167 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1168 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1169 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GymStatue::
# 1170 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 1171 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 1172 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1173 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1174 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadYoureHereWithYourPokemon:
# 1175 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hm?\p"
# 1176 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Well, if it isn't {PLAYER}!\n"
# 1177 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "So you're all finished moving in?\p"
# 1178 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'm surprised that you managed to\n"
# 1179 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "get here by yourself.\p"
# 1180 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Oh, I see.\n"
# 1181 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You're with your Pokémon.\p"
# 1182 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hm… Then I guess you're going to\n"
# 1183 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "become a Trainer like me, {PLAYER}.\p"
# 1184 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "That's great news!\n"
# 1185 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'll be looking forward to it!$"
# 1186 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1187 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WallyIdLikeAPokemon:
# 1188 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Um… I…\n"
# 1189 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'd like to get a Pokémon, please…$"
# 1190 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1191 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadOhYoureWallyRight:
# 1192 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hm? You're… Uh… Oh, right.\n"
# 1193 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You're Wally, right?$"
# 1194 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1195 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WallyIveNeverCaughtAPokemon:
# 1196 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'm going to go stay with my\n"
# 1197 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "relatives in Verdanturf Town.\p"
# 1198 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I thought I would be lonely by myself,\n"
# 1199 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "so I wanted to take a Pokémon along.\p"
# 1200 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But I've never caught a Pokémon before.\n"
# 1201 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I don't know how…$"
# 1202 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1203 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadHmISee:
# 1204 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hm. I see.$"
# 1205 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1206 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadPlayerGoWithWally:
# 1207 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}, you heard that, right?\p"
# 1208 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Go with Wally and make sure that he\n"
# 1209 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "safely catches a Pokémon.$"
# 1210 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1211 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_IllLoanYouMyZigzagoon:
# 1212 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Wally, here, I'll loan you my Pokémon.$"
# 1213 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1214 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WallyReceivedAZigzagoon:
# 1215 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Wally received a Zigzagoon!$"
# 1216 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1217 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WallyThankYou:
# 1218 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Oh, wow!\n"
# 1219 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "A Pokémon!$"
# 1220 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1221 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_AndDadGivesPokeBall:
# 1222 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hm. I'll give you a Poké Ball, too.\n"
# 1223 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Go for it!$"
# 1224 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1225 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WallyReceivedAPokeball:
# 1226 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Wally received a Poké Ball!$"
# 1227 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1228 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WallyOhWowThankYou:
# 1229 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Oh, wow!\n"
# 1230 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Thank you!$"
# 1231 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1232 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WouldYouReallyComeWithMe:
# 1233 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}… Would you really come\n"
# 1234 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "with me?$"
# 1235 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1236 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadSoDidItWorkOut:
# 1237 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "So, did it work out?$"
# 1238 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1239 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WallyThankYouBye:
# 1240 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Thank you, yes, it did.\n"
# 1241 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Here's your Pokémon back.\p"
# 1242 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}, thank you for coming along\n"
# 1243 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "with me.\p"
# 1244 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You two are why I was able to catch\n"
# 1245 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "my Pokémon.\p"
# 1246 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I promise I'll take really good\n"
# 1247 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "care of it.\p"
# 1248 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Oh! My mom's waiting for me,\n"
# 1249 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "so I have to go!\p"
# 1250 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Bye, {PLAYER}!$"
# 1251 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1252 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadGoCollectBadges:
# 1253 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Now…\p"
# 1254 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}, if you want to become a\n"
# 1255 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "strong Trainer, here's my advice.\p"
# 1256 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Head for Rustboro City beyond this\n"
# 1257 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "town.\p"
# 1258 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "There, you should challenge\n"
# 1259 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the Gym Leader, Roxanne.\p"
# 1260 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "After her, go on to other Pokémon\n"
# 1261 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Gyms and defeat their Leaders.\p"
# 1262 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Collect Badges from them,\n"
# 1263 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "understood?\p"
# 1264 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Of course, I'm a Gym Leader, too.\n"
# 1265 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "We'll battle one day, {PLAYER}.\p"
# 1266 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But that's only after you become\n"
# 1267 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "stronger.\p"
# 1268 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Before you go, take this.$"
# 1269 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1270 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_PokevialGet:
# 1271 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Obtained a Pokévial from Dad!$"
# 1272 "data/maps/PetalburgCity_Gym/scripts.pory"
	
# 1273 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadPokevial:
# 1274 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "That's a Pokévial. Each dose\n"
# 1275 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "from it will let you heal your\l"
# 1276 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Pokémon to full while on the road.\p"
# 1277 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Any Pokémon Center will refill it\n"
# 1278 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "for you. It only holds one dose\l"
# 1279 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "for now, but I'm sure you'll find\l"
# 1280 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "ways to expand it on your journey.$"
# 1281 "data/maps/PetalburgCity_Gym/scripts.pory"
	
# 1282 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadPokevial2:
# 1283 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Wait, what's this?\p"
# 1284 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You still haven't gotten any\n"
# 1285 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "additional doses for your Pokevial\l"
# 1286 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "yet?\p"
# 1287 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I suppose since you beat me, I\n"
# 1288 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "should award another to you.$"
# 1289 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1290 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanGoToRustboro:
# 1291 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hm? Aren't you going to the\n"
# 1292 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Pokémon Gym in Rustboro City?\p"
# 1293 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "There's no challenge for me to\n"
# 1294 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "battle a greenhorn Trainer.\p"
# 1295 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}, I want you to challenge me\n"
# 1296 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "when you become a lot stronger.\p"
# 1297 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'll battle you, {PLAYER}, when you\n"
# 1298 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "can show me four Gym Badges, okay?$"
# 1299 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1300 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanGoToDewford:
# 1301 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I see… So, you've beaten\n"
# 1302 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the Gym Leader in Rustboro City.\p"
# 1303 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But there are many more Trainers\n"
# 1304 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "who are stronger than you, {PLAYER}.\p"
# 1305 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Across the sea in Dewford Town is a\n"
# 1306 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Gym Leader named Brawly.\p"
# 1307 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You should go challenge him.$"
# 1308 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1309 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_YouHaveGottenStronger:
# 1310 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hm… {PLAYER}, you have gotten\n"
# 1311 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "stronger.\p"
# 1312 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I can tell by the number of Badges\n"
# 1313 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "that you've earned.$"
# 1314 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1315 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanIntro:
# 1316 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hm…\n"
# 1317 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "So, you did get four Gym Badges.\p"
# 1318 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Fine, as I promised, we will have\n"
# 1319 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "a Pokémon battle.\p"
# 1320 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}…\p"
# 1321 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'm so happy that I can have\n"
# 1322 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "a real battle with my own child.\p"
# 1323 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But, a battle is a battle!\p"
# 1324 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I will do everything in my power as\n"
# 1325 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "a Gym Leader to win.\p"
# 1326 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}, you'd better give it your\n"
# 1327 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "best shot, too!$"
# 1328 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1329 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanDefeat:
# 1330 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "…\p"
# 1331 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I… I can't…\p"
# 1332 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I can't believe it. {PLAYER}…\p"
# 1333 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I lost to {PLAYER}?\p"
# 1334 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But, rules are rules!\n"
# 1335 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Here, take this.$"
# 1336 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1337 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ReceivedBalanceBadge:
# 1338 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER} received the Balance Badge\n"
# 1339 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "from Dad!$"
# 1340 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1341 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ExplainBalanceBadgeTakeThis:
# 1342 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "With that Badge, the Defense of\n"
# 1343 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "all your Pokémon will increase.\p"
# 1344 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Pokémon that know the HM move Surf\n"
# 1345 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "will be able to travel over water.\p"
# 1346 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "This is my gift to you. {PLAYER}, I'm\n"
# 1347 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "sure you can use it correctly.$"
# 1348 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1349 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ExplainFacade:
# 1350 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "TM42 contains Facade.\p"
# 1351 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "It doubles the power of moves if\n"
# 1352 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the Pokémon is poisoned, paralyzed,\l"
# 1353 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "or burned.\p"
# 1354 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "It might be able to turn a bad\n"
# 1355 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "situation into an advantage.$"
# 1356 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1357 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadHappyAndSad:
# 1358 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "As the Gym Leader, I can't\n"
# 1359 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "express how upset I am…\p"
# 1360 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But as a father, it makes me both\n"
# 1361 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "happy and a little sad. It's odd…$"
# 1362 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1363 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_PleaseComeWithMe:
# 1364 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Ah, there you are, {PLAYER}{KUN}!\p"
# 1365 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Please come with me.\n"
# 1366 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I have something I want you to have.$"
# 1367 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1368 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_LetMeBorrowPlayer:
# 1369 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Norman, you don't mind, do you?\p"
# 1370 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Let me borrow your {PLAYER}{KUN} for\n"
# 1371 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "a minute or two.$"
# 1372 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1373 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadGoingToKeepTraining:
# 1374 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}, you should go visit your\n"
# 1375 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "mother every so often.\p"
# 1376 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'm going to stay here and redouble\n"
# 1377 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "my training.\p"
# 1378 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "It would bother me as a Trainer to\n"
# 1379 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "not avenge my loss to you, {PLAYER}!$"
# 1380 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1381 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadNoAmountOfTrainingIsEnough:
# 1382 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}, how are things going?\p"
# 1383 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The world of Pokémon is deep.\p"
# 1384 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I honestly think that no amount of\n"
# 1385 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "training would ever be enough.$"
# 1386 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1387 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GymGuideAdvice:
# 1388 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hey, how's it going, Champion-\n"
# 1389 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "bound {PLAYER}?\p"
# 1390 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The doors in this Gym open when you\n"
# 1391 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "beat the awaiting Trainers.\p"
# 1392 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Whoops! The doors in this room are\n"
# 1393 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "already open, so don't attack me!\p"
# 1394 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The Trainers of Petalburg Gym\n"
# 1395 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "use all kinds of items.\p"
# 1396 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The door at the left leads to\n"
# 1397 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the Speed Room.\p"
# 1398 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The door at the right leads to\n"
# 1399 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the Accuracy Room.\p"
# 1400 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The room's name will be on\n"
# 1401 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the door, so choose carefully.\p"
# 1402 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Once you've chosen the door…\n"
# 1403 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Well, hey, go for it!$"
# 1404 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1405 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GymGuidePostVictory:
# 1406 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}! Whoa! You've overcome even\n"
# 1407 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "your own father!\p"
# 1408 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Like, whoa!\n"
# 1409 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "What a stunning turn of events!$"
# 1410 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1411 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_RandallIntro:
# 1412 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The ability to attack before the\n"
# 1413 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "opponent…\p"
# 1414 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Just that alone puts me at a great\n"
# 1415 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "advantage, don't you agree?$"
# 1416 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1417 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_RandallDefeat:
# 1418 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "That was a magnificent battle!$"
# 1419 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1420 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_RandallPostBattle:
# 1421 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Go on to the next room where a new\n"
# 1422 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "challenge awaits you.\p"
# 1423 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "At the left is the Confusion Room.\p"
# 1424 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The right door leads to the Defense\n"
# 1425 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Room.$"
# 1426 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1427 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_RandallPostBadge:
# 1428 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Whomever you beat, and whomever you\n"
# 1429 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "may lose to, you never shirk from\l"
# 1430 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "training yourself and your Pokémon.\p"
# 1431 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "That's what I think being a\n"
# 1432 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Gym Leader is all about.$"
# 1433 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1434 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ParkerIntro:
# 1435 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "This is the Confusion Room.\p"
# 1436 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Let me see how well bonded you are\n"
# 1437 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "with your Pokémon!$"
# 1438 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1439 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ParkerDefeat:
# 1440 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I couldn't confuse your team enough…\n"
# 1441 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You share a strong bond together.$"
# 1442 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1443 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ParkerPostBattle:
# 1444 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The next room is the Strength Room.\n"
# 1445 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Can you withstand brute force?$"
# 1446 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1447 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ParkerPostBadge:
# 1448 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "After you beat our Leader, the\n"
# 1449 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "training has become a lot tougher.$"
# 1450 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1451 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GeorgeIntro:
# 1452 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Just when you think you're going to\n"
# 1453 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "win, your opponent restores HP…\p"
# 1454 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Can you just imagine how awful that\n"
# 1455 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "must feel?\p"
# 1456 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'll show you exactly how awful it\n"
# 1457 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "feels!$"
# 1458 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1459 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GeorgeDefeat:
# 1460 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I couldn't restore HP enough…\n"
# 1461 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "What Attack power…$"
# 1462 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1463 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GeorgePostBattle:
# 1464 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I should have expected no less from\n"
# 1465 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "our Leader's kid.\p"
# 1466 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "No, wait! A Trainer's abilities are\n"
# 1467 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "earned only through effort.\p"
# 1468 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I lost because my own efforts\n"
# 1469 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "weren't enough.\p"
# 1470 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Go on! The One-hit KO Room is next.$"
# 1471 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1472 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GeorgePostBadge:
# 1473 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'm going to keep training at Gyms.\n"
# 1474 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "One day, I'll become a Leader.$"
# 1475 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1476 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_BerkeIntro:
# 1477 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'm not going to take it easy just\n"
# 1478 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "because you're our Leader's kid.\p"
# 1479 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'll show you how horrid it is for\n"
# 1480 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "a Pokémon to take a critical hit!$"
# 1481 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1482 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_BerkeDefeat:
# 1483 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Your power…\n"
# 1484 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You're the real deal.$"
# 1485 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1486 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_BerkePostBattle:
# 1487 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Your father really is strong.\n"
# 1488 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "He's a Trainer worth my respect.\p"
# 1489 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "And, I sense the same glow coming\n"
# 1490 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "from you as your father.\p"
# 1491 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I hope that you'll stage a terrific\n"
# 1492 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "battle with your father!$"
# 1493 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1494 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_BerkePostBadge:
# 1495 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Since your dad became the Leader,\n"
# 1496 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the Trainers of Petalburg City have\l"
# 1497 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "become a lot tougher.$"
# 1498 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1499 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_MaryIntro:
# 1500 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Giggle…\n"
# 1501 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "This is the Accuracy Room.\p"
# 1502 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "It's pretty nasty when every attack\n"
# 1503 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "lands without fail.$"
# 1504 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1505 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_MaryDefeat:
# 1506 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You were a cut above me…$"
# 1507 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1508 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_MaryPostBattle:
# 1509 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "There are some even stronger\n"
# 1510 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Trainers waiting for you.\p"
# 1511 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The left is the Defense Room, and\n"
# 1512 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the right is the Recovery Room.\p"
# 1513 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Your Pokémon's Attack power will be\n"
# 1514 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "on trial either way.$"
# 1515 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1516 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_MaryPostBadge:
# 1517 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you know what we're trying to\n"
# 1518 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "achieve as Trainers?\p"
# 1519 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "We're striving to become soul mates\n"
# 1520 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "with our Pokémon.$"
# 1521 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1522 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_AlexiaIntro:
# 1523 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The higher the Defense, the more\n"
# 1524 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "reckless I can be in attack.$"
# 1525 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1526 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_AlexiaDefeat:
# 1527 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Our defenses weren't enough…$"
# 1528 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1529 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_AlexiaPostBattle:
# 1530 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I think you've taught me a valuable\n"
# 1531 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "lesson here.\p"
# 1532 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Now, go on! The left door goes to\n"
# 1533 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the Strength Room.\p"
# 1534 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The right door opens to\n"
# 1535 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the One-hit KO Room.\p"
# 1536 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Both of them have Trainers who are\n"
# 1537 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "skilled at offense.$"
# 1538 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1539 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_AlexiaPostBadge:
# 1540 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hi! Have you tried using Surf?$"
# 1541 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1542 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_JodyIntro:
# 1543 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Our Gym Leader told us to go all out\n"
# 1544 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "and beat you.\p"
# 1545 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Even if you happen to be the\n"
# 1546 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Leader's kid!$"
# 1547 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1548 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_JodyDefeat:
# 1549 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But… I went all out!$"
# 1550 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1551 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_JodyPostBattle:
# 1552 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The way you use your Pokémon…\n"
# 1553 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "It's like your father's style.\p"
# 1554 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Go on through! The Gym Leader, your\n"
# 1555 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "father, is waiting!$"
# 1556 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1557 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_JodyPostBadge:
# 1558 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Sure, it's fine to make your Pokémon\n"
# 1559 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "stronger.\p"
# 1560 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But what decides the winner?\p"
# 1561 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Why, it's the feelings Trainers have\n"
# 1562 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "for their Pokémon.$"
# 1563 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1564 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DoorAppearsLocked:
# 1565 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "This door appears to be locked\n"
# 1566 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "right now…$"
# 1567 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1568 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterSpeedRoom:
# 1569 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“Speed Room,” the sign says.\p"
# 1570 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1571 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1572 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterAccuracyRoom:
# 1573 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“Accuracy Room,” the sign says.\p"
# 1574 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1575 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1576 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterConfusionRoom:
# 1577 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“Confusion Room,” the sign says.\p"
# 1578 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1579 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1580 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterDefenseRoom:
# 1581 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“Defense Room,” the sign says.\p"
# 1582 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1583 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1584 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterRecoveryRoom:
# 1585 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“Recovery Room,” the sign says.\p"
# 1586 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1587 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1588 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterStrengthRoom:
# 1589 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“Strength Room,” the sign says.\p"
# 1590 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1591 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1592 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterOHKORoom:
# 1593 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“One-hit KO Room,” the sign says.\p"
# 1594 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1595 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1596 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterGymLeadersRoom:
# 1597 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“Gym Leader's Room\p"
# 1598 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“See for yourself what Pokémon await\n"
# 1599 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "you!” the sign says.\p"
# 1600 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1601 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1602 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GymStatue:
# 1603 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Petalburg City Pokémon Gym$"
# 1604 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1605 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GymStatueCertified:
# 1606 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Petalburg City Pokémon Gym\p"
# 1607 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Norman's certified Trainers:\n"
# 1608 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}$"
# 1609 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1610 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanPreRematch:
# 1611 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}…\n"
# 1612 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I had a feeling that you would come.\p"
# 1613 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I would never refuse to accept\n"
# 1614 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "a challenge from you.\p"
# 1615 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You do understand, don't you?\p"
# 1616 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Inside a Gym, it doesn't matter that\n"
# 1617 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "we are a parent and child.\p"
# 1618 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "…No, because we are parent and child,\n"
# 1619 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "we owe it to each other to do the best\l"
# 1620 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "we can. Isn't that right, {PLAYER}?$"
# 1621 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1622 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanRematchDefeat:
# 1623 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Uh… Haha…\n"
# 1624 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Maybe that was going too hard…$"
# 1625 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1626 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanPostRematch:
# 1627 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}…\n"
# 1628 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "What is your dream?\p"
# 1629 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "My dream…\n"
# 1630 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hahaha…\l"
# 1631 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "It has already come true, actually.$"
# 1632 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1633 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanRematchNeedTwoMons:
# 1634 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}…\n"
# 1635 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I had a feeling that you would come.\p"
# 1636 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I would never refuse to accept\n"
# 1637 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "a challenge from you.\p"
# 1638 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You do understand, don't you?\p"
# 1639 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Inside a Gym, it doesn't matter that\n"
# 1640 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "we are a parent and child.\p"
# 1641 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hm? Wait a second, {PLAYER}.\p"
# 1642 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you only have one Pokémon that is\n"
# 1643 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "capable of battle?\p"
# 1644 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Sorry, but you'll have to come back\n"
# 1645 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "with at least two Pokémon.$"
