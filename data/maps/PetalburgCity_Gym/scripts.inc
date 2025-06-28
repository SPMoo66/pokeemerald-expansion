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
	closemessage
# 103 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_set FLAG_EMIB_DEMO_2, PetalburgCity_Gym_EventScript_BonusDose
# 104 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 2
# 105 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 106 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 107 "data/maps/PetalburgCity_Gym/scripts.pory"

# 108 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BonusDose::
# 109 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 30
# 110 "data/maps/PetalburgCity_Gym/scripts.pory"
	speakername (CommonText_Dad)
# 111 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadBonusDose, MSGBOX_DEFAULT
# 112 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 113 "data/maps/PetalburgCity_Gym/scripts.pory"
	pokevialincreasesize
# 114 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox Text_PokevialSizeIncrease, MSGBOX_DEFAULT
# 115 "data/maps/PetalburgCity_Gym/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 116 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitfanfare
# 117 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 118 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 20
# 119 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 120 "data/maps/PetalburgCity_Gym/scripts.pory"

# 121 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyExitGym:
# 122 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 123 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 124 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 125 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 126 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 127 "data/maps/PetalburgCity_Gym/scripts.pory"

# 128 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Norman::
# 129 "data/maps/PetalburgCity_Gym/scripts.pory"
	lock
# 130 "data/maps/PetalburgCity_Gym/scripts.pory"
	faceplayer
# 131 "data/maps/PetalburgCity_Gym/scripts.pory"
	switch VAR_PETALBURG_GYM_STATE
# 132 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 2, PetalburgCity_Gym_EventScript_NormanNoBadges
# 133 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 3, PetalburgCity_Gym_EventScript_NormanOneBadge
# 134 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 4, PetalburgCity_Gym_EventScript_NormanTwoBadges
# 135 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 5, PetalburgCity_Gym_EventScript_NormanThreeBadges
# 136 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 6, PetalburgCity_Gym_EventScript_NormanBattle
# 137 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 7, PetalburgCity_Gym_EventScript_NormanPostBattle
# 138 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 8, PetalburgCity_Gym_EventScript_NormanRematch
# 139 "data/maps/PetalburgCity_Gym/scripts.pory"
	speakername (CommonText_Dad)
# 140 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadYoureHereWithYourPokemon, MSGBOX_DEFAULT
# 141 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 142 "data/maps/PetalburgCity_Gym/scripts.pory"
	switch VAR_FACING
# 143 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_SOUTH, PetalburgCity_Gym_EventScript_BeginWallyTutorialSouth
# 144 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_NORTH, PetalburgCity_Gym_EventScript_BeginWallyTutorialNorth
# 145 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_WEST, PetalburgCity_Gym_EventScript_BeginWallyTutorialWest
# 146 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_EAST, PetalburgCity_Gym_EventScript_BeginWallyTutorialEast
# 147 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 148 "data/maps/PetalburgCity_Gym/scripts.pory"

# 149 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorialSouth::
# 150 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 0
# 151 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial
# 152 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 153 "data/maps/PetalburgCity_Gym/scripts.pory"

# 154 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorialNorth::
# 155 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 156 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial
# 157 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 158 "data/maps/PetalburgCity_Gym/scripts.pory"

# 159 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorialWest::
# 160 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 2
# 161 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial
# 162 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 163 "data/maps/PetalburgCity_Gym/scripts.pory"

# 164 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorialEast::
# 165 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 3
# 166 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial
# 167 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 168 "data/maps/PetalburgCity_Gym/scripts.pory"

# 169 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorial::
# 170 "data/maps/PetalburgCity_Gym/scripts.pory"
	addobject LOCALID_PETALBURG_GYM_WALLY
# 171 "data/maps/PetalburgCity_Gym/scripts.pory"
	playse SE_DOOR
# 172 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_Gym_EventScript_WallyArriveSouth
# 173 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_WallyArriveNorth
# 174 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_WallyArriveWestEast
# 175 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_WallyArriveWestEast
# 176 "data/maps/PetalburgCity_Gym/scripts.pory"
	speakername (CommonText_Q)
# 177 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WallyIdLikeAPokemon, MSGBOX_DEFAULT
# 178 "data/maps/PetalburgCity_Gym/scripts.pory"
	speakername (CommonText_Dad)
# 179 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadOhYoureWallyRight, MSGBOX_DEFAULT
# 180 "data/maps/PetalburgCity_Gym/scripts.pory"
	speakername (CommonText_Wally)
# 181 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WallyIveNeverCaughtAPokemon, MSGBOX_DEFAULT
# 182 "data/maps/PetalburgCity_Gym/scripts.pory"
	speakername (CommonText_Dad)
# 183 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadHmISee, MSGBOX_DEFAULT
# 184 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_Gym_EventScript_NormanAddressPlayerSouth
# 185 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_NormanAddressPlayerNorth
# 186 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_NormanAddressPlayerWest
# 187 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_NormanAddressPlayerEast
# 188 "data/maps/PetalburgCity_Gym/scripts.pory"
	speakername (CommonText_Dad)
# 189 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadPlayerGoWithWally, MSGBOX_DEFAULT
# 190 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_Gym_EventScript_NormanAddressWallySouth
# 191 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_NormanAddressWallyNorth
# 192 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_NormanAddressWallyWest
# 193 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_NormanAddressWallyEast
# 194 "data/maps/PetalburgCity_Gym/scripts.pory"
	speakername (CommonText_Dad)
# 195 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_IllLoanYouMyZigzagoon, MSGBOX_DEFAULT
# 196 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 197 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WallyReceivedAZigzagoon, MSGBOX_DEFAULT
# 198 "data/maps/PetalburgCity_Gym/scripts.pory"
	speakername (CommonText_Wally)
# 199 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WallyThankYou, MSGBOX_DEFAULT
# 200 "data/maps/PetalburgCity_Gym/scripts.pory"
	speakername (CommonText_Dad)
# 201 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_AndDadGivesPokeBall, MSGBOX_DEFAULT
# 202 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 203 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WallyReceivedAPokeball, MSGBOX_DEFAULT
# 204 "data/maps/PetalburgCity_Gym/scripts.pory"
	speakername (CommonText_Wally)
# 205 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WallyOhWowThankYou, MSGBOX_DEFAULT
# 206 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_Gym_EventScript_NormanFaceDoorSouth
# 207 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_NormanFaceDoorNorth
# 208 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_Gym_EventScript_WallyFacePlayer
# 209 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_WallyFaceDown
# 210 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_WallyFacePlayer
# 211 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_WallyFacePlayer
# 212 "data/maps/PetalburgCity_Gym/scripts.pory"
	speakername (CommonText_Wally)
# 213 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WouldYouReallyComeWithMe, MSGBOX_DEFAULT
# 214 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 215 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 216 "data/maps/PetalburgCity_Gym/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 217 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_Gym_EventScript_ExitGymWithWallySouth
# 218 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_ExitGymWithWallyNorth
# 219 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_ExitGymWithWallyWest
# 220 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_ExitGymWithWallyEast
# 221 "data/maps/PetalburgCity_Gym/scripts.pory"
	removeobject LOCALID_PETALBURG_GYM_WALLY
# 222 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_CITY_WALLYS_MOM
# 223 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 1
# 224 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 2
# 225 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_PETALBURG_CITY_WALLY
# 226 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_PETALBURG_GYM_WALLY
# 227 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_RIVAL
# 228 "data/maps/PetalburgCity_Gym/scripts.pory"
	special InitBirchState
# 229 "data/maps/PetalburgCity_Gym/scripts.pory"
	warp MAP_PETALBURG_CITY, 15, 8
# 230 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitstate
# 231 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 232 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 233 "data/maps/PetalburgCity_Gym/scripts.pory"

# 234 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallyArriveSouth::
# 235 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 236 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLY, PetalburgCity_Gym_Movement_WallyArrive
# 237 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 238 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 239 "data/maps/PetalburgCity_Gym/scripts.pory"

# 240 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallyArriveNorth::
# 241 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLY, PetalburgCity_Gym_Movement_WallyArriveNorth
# 242 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 243 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterRight
# 244 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 245 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 246 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 247 "data/maps/PetalburgCity_Gym/scripts.pory"

# 248 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallyArriveWestEast::
# 249 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 250 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 251 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLY, PetalburgCity_Gym_Movement_WallyArrive
# 252 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 253 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 254 "data/maps/PetalburgCity_Gym/scripts.pory"

# 255 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallySouth::
# 256 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 257 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLY, PetalburgCity_Gym_Movement_WallyExitSouthWest
# 258 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallySouth
# 259 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 260 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 261 "data/maps/PetalburgCity_Gym/scripts.pory"

# 262 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallyNorth::
# 263 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLY, PetalburgCity_Gym_Movement_WallyExitNorth
# 264 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallyNorth
# 265 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 266 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 267 "data/maps/PetalburgCity_Gym/scripts.pory"

# 268 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallyWest::
# 269 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLY, PetalburgCity_Gym_Movement_WallyExitSouthWest
# 270 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallyWest
# 271 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 272 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 273 "data/maps/PetalburgCity_Gym/scripts.pory"

# 274 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallyEast::
# 275 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLY, PetalburgCity_Gym_Movement_WallyExitEast
# 276 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallyEast
# 277 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 278 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 279 "data/maps/PetalburgCity_Gym/scripts.pory"

# 280 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressPlayerSouth::
# 281 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterUp
# 282 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 283 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 284 "data/maps/PetalburgCity_Gym/scripts.pory"

# 285 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressPlayerNorth::
# 286 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 287 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 288 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 289 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 290 "data/maps/PetalburgCity_Gym/scripts.pory"

# 291 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressPlayerWest::
# 292 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterRight
# 293 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 294 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 295 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 296 "data/maps/PetalburgCity_Gym/scripts.pory"

# 297 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressPlayerEast::
# 298 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterLeft
# 299 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 300 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 301 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 302 "data/maps/PetalburgCity_Gym/scripts.pory"

# 303 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressWallySouth::
# 304 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 305 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 306 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 307 "data/maps/PetalburgCity_Gym/scripts.pory"

# 308 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressWallyNorth::
# 309 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterRight
# 310 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 311 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 312 "data/maps/PetalburgCity_Gym/scripts.pory"

# 313 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressWallyWest::
# 314 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 315 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 316 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 317 "data/maps/PetalburgCity_Gym/scripts.pory"

# 318 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressWallyEast::
# 319 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 320 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 321 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 322 "data/maps/PetalburgCity_Gym/scripts.pory"

# 323 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallyFacePlayer::
# 324 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLY, Common_Movement_FacePlayer
# 325 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 326 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 327 "data/maps/PetalburgCity_Gym/scripts.pory"

# 328 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallyFaceDown::
# 329 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLY, Common_Movement_WalkInPlaceFasterDown
# 330 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 331 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 332 "data/maps/PetalburgCity_Gym/scripts.pory"

# 333 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanNoBadges::
# 334 "data/maps/PetalburgCity_Gym/scripts.pory"
	speakername (CommonText_Dad)
# 335 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_NormanGoToRustboro, MSGBOX_DEFAULT
# 336 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 337 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 338 "data/maps/PetalburgCity_Gym/scripts.pory"

# 339 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanOneBadge::
# 340 "data/maps/PetalburgCity_Gym/scripts.pory"
	speakername (CommonText_Dad)
# 341 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_NormanGoToDewford, MSGBOX_DEFAULT
# 342 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 343 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 344 "data/maps/PetalburgCity_Gym/scripts.pory"

# 345 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanTwoBadges::
# 346 "data/maps/PetalburgCity_Gym/scripts.pory"
	speakername (CommonText_Dad)
# 347 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_YouHaveGottenStronger, MSGBOX_DEFAULT
# 348 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 349 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 350 "data/maps/PetalburgCity_Gym/scripts.pory"

# 351 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanThreeBadges::
# 352 "data/maps/PetalburgCity_Gym/scripts.pory"
	speakername (CommonText_Dad)
# 353 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_YouHaveGottenStronger, MSGBOX_DEFAULT
# 354 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 355 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 356 "data/maps/PetalburgCity_Gym/scripts.pory"

# 357 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanFaceDoorSouth::
# 358 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 359 "data/maps/PetalburgCity_Gym/scripts.pory"

# 360 "data/maps/PetalburgCity_Gym/scripts.pory"
@ For all other NormanFaceDoorX, Norman is already facing the door from NormanAddressWallyX
# 361 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanFaceDoorNorth::
# 362 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 363 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 364 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 365 "data/maps/PetalburgCity_Gym/scripts.pory"

# 366 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ShouldGiveEnigmaBerry::
# 367 "data/maps/PetalburgCity_Gym/scripts.pory"
	specialvar VAR_RESULT, IsEnigmaBerryValid
# 368 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, PetalburgCity_Gym_EventScript_DontGiveEnigmaBerry
# 369 "data/maps/PetalburgCity_Gym/scripts.pory"
	checkitem ITEM_ENIGMA_BERRY_E_READER
# 370 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, PetalburgCity_Gym_EventScript_DontGiveEnigmaBerry
# 371 "data/maps/PetalburgCity_Gym/scripts.pory"
	checkpcitem ITEM_ENIGMA_BERRY_E_READER
# 372 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, PetalburgCity_Gym_EventScript_DontGiveEnigmaBerry
# 373 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_ENIGMA_BERRY_AVAILABLE, 0, PetalburgCity_Gym_EventScript_DontGiveEnigmaBerry
# 374 "data/maps/PetalburgCity_Gym/scripts.pory"
	speakername (CommonText_Dad)
# 375 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GiveEnigmaBerry, MSGBOX_DEFAULT
# 376 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_RESULT, TRUE
# 377 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 378 "data/maps/PetalburgCity_Gym/scripts.pory"

# 379 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_DontGiveEnigmaBerry::
# 380 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_RESULT, FALSE
# 381 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 382 "data/maps/PetalburgCity_Gym/scripts.pory"

# 383 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GiveEnigmaBerry::
# 384 "data/maps/PetalburgCity_Gym/scripts.pory"
	giveitem ITEM_ENIGMA_BERRY_E_READER
# 385 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 386 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_ENIGMA_BERRY_AVAILABLE, 0
# 387 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 388 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 389 "data/maps/PetalburgCity_Gym/scripts.pory"

# 390 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadArrivesNorth::
# 391 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 392 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_WallysDadArrives
# 393 "data/maps/PetalburgCity_Gym/scripts.pory"

# 394 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadArrivesEast::
# 395 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 2
# 396 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_WallysDadArrives
# 397 "data/maps/PetalburgCity_Gym/scripts.pory"

# 398 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadArrivesWest::
# 399 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 3
# 400 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_WallysDadArrives
# 401 "data/maps/PetalburgCity_Gym/scripts.pory"

# 402 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadArrives::
# 403 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadEnterGym
# 404 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 405 "data/maps/PetalburgCity_Gym/scripts.pory"
	playse SE_PIN
# 406 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLYS_DAD, Common_Movement_ExclamationMark
# 407 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 408 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLYS_DAD, Common_Movement_Delay48
# 409 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 410 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 10
# 411 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_WallysDadApproachPlayerNorth
# 412 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_WallysDadApproachPlayerEast
# 413 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_WallysDadApproachPlayerWest
# 414 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_PleaseComeWithMe, MSGBOX_DEFAULT
# 415 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 416 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 20
# 417 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_WallysDadFaceNormanNorth
# 418 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_WallysDadFaceNormanEast
# 419 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_WallysDadFaceNormanWest
# 420 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_LetMeBorrowPlayer, MSGBOX_DEFAULT
# 421 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 422 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 423 "data/maps/PetalburgCity_Gym/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 424 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_ExitGymWithWallysDadNorth
# 425 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_ExitGymWithWallysDadEast
# 426 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_ExitGymWithWallysDadWest
# 427 "data/maps/PetalburgCity_Gym/scripts.pory"
	removeobject LOCALID_PETALBURG_GYM_WALLYS_DAD
# 428 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 4
# 429 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_PETALBURG_CITY_WALLYS_DAD
# 430 "data/maps/PetalburgCity_Gym/scripts.pory"
	warp MAP_PETALBURG_CITY, 15, 8
# 431 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitstate
# 432 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 433 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 434 "data/maps/PetalburgCity_Gym/scripts.pory"

# 435 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadFaceNormanNorth::
# 436 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLYS_DAD, Common_Movement_WalkInPlaceFasterUp
# 437 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 438 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 439 "data/maps/PetalburgCity_Gym/scripts.pory"

# 440 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadFaceNormanEast::
# 441 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLYS_DAD, Common_Movement_WalkInPlaceFasterRight
# 442 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 443 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 444 "data/maps/PetalburgCity_Gym/scripts.pory"

# 445 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadFaceNormanWest::
# 446 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLYS_DAD, Common_Movement_WalkInPlaceFasterLeft
# 447 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 448 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 449 "data/maps/PetalburgCity_Gym/scripts.pory"

# 450 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadApproachPlayerNorth::
# 451 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadApproachPlayerNorth
# 452 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 453 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 454 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterLeft
# 455 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 456 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 457 "data/maps/PetalburgCity_Gym/scripts.pory"

# 458 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadApproachPlayerEast::
# 459 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadApproachPlayerEast
# 460 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 461 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 462 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 463 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 464 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 465 "data/maps/PetalburgCity_Gym/scripts.pory"

# 466 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadApproachPlayerWest::
# 467 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadApproachPlayerWest
# 468 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 469 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 470 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 471 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 472 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 473 "data/maps/PetalburgCity_Gym/scripts.pory"

# 474 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallysDadNorth::
# 475 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadExitNorth
# 476 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 477 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallysDadNorth
# 478 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 479 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 480 "data/maps/PetalburgCity_Gym/scripts.pory"

# 481 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallysDadEast::
# 482 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadExitEast
# 483 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallysDadEast
# 484 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 485 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 486 "data/maps/PetalburgCity_Gym/scripts.pory"

# 487 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallysDadWest::
# 488 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadExitWest
# 489 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallysDadWest
# 490 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 491 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 492 "data/maps/PetalburgCity_Gym/scripts.pory"

# 493 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadExitNorth:
# 494 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 495 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 496 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 497 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 498 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 499 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 500 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 501 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 502 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 503 "data/maps/PetalburgCity_Gym/scripts.pory"
	set_invisible
# 504 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 505 "data/maps/PetalburgCity_Gym/scripts.pory"

# 506 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadExitEast:
# 507 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 508 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
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
PetalburgCity_Gym_Movement_WallysDadExitWest:
# 520 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 521 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 522 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 523 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 524 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 525 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 526 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 527 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 528 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 529 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 530 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 531 "data/maps/PetalburgCity_Gym/scripts.pory"
	set_invisible
# 532 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 533 "data/maps/PetalburgCity_Gym/scripts.pory"

# 534 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallysDadNorth:
# 535 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 536 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 537 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 538 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 539 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 540 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 541 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 542 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 543 "data/maps/PetalburgCity_Gym/scripts.pory"

# 544 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallysDadEast:
# 545 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 546 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 547 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 548 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 549 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 550 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 551 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 552 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 553 "data/maps/PetalburgCity_Gym/scripts.pory"

# 554 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallysDadWest:
# 555 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 556 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 557 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 558 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 559 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 560 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 561 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 562 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 563 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 564 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 565 "data/maps/PetalburgCity_Gym/scripts.pory"

# 566 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadEnterGym:
# 567 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 568 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 569 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_right
# 570 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 571 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_left
# 572 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 573 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 574 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 575 "data/maps/PetalburgCity_Gym/scripts.pory"

# 576 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadApproachPlayerNorth:
# 577 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 578 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 579 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 580 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 581 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 582 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_right
# 583 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 584 "data/maps/PetalburgCity_Gym/scripts.pory"

# 585 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadApproachPlayerEast:
# 586 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 587 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 588 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 589 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 590 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 591 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 592 "data/maps/PetalburgCity_Gym/scripts.pory"

# 593 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadApproachPlayerWest:
# 594 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 595 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 596 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 597 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 598 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 599 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 600 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 601 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 602 "data/maps/PetalburgCity_Gym/scripts.pory"

# 603 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyArriveNorth:
# 604 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 605 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 606 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 607 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 608 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 609 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 610 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 611 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 612 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_left
# 613 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 614 "data/maps/PetalburgCity_Gym/scripts.pory"

# 615 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyArrive:
# 616 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 617 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 618 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 619 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 620 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 621 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 622 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 623 "data/maps/PetalburgCity_Gym/scripts.pory"

# 624 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyExitNorth:
# 625 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 626 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 627 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 628 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 629 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 630 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 631 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 632 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 633 "data/maps/PetalburgCity_Gym/scripts.pory"

# 634 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyExitEast:
# 635 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 636 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 637 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 638 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 639 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 640 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 641 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 642 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 643 "data/maps/PetalburgCity_Gym/scripts.pory"

# 644 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyExitSouthWest:
# 645 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 646 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 647 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 648 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 649 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 650 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 651 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 652 "data/maps/PetalburgCity_Gym/scripts.pory"

# 653 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallyNorth:
# 654 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 655 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 656 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 657 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 658 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 659 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 660 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 661 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 662 "data/maps/PetalburgCity_Gym/scripts.pory"

# 663 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallySouth:
# 664 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 665 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 666 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 667 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 668 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 669 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 670 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 671 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 672 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 673 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 674 "data/maps/PetalburgCity_Gym/scripts.pory"

# 675 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallyWest:
# 676 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 677 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 678 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 679 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 680 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 681 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 682 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 683 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 684 "data/maps/PetalburgCity_Gym/scripts.pory"

# 685 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallyEast:
# 686 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_down
# 687 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 688 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 689 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 690 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 691 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 692 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 693 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 694 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 695 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 696 "data/maps/PetalburgCity_Gym/scripts.pory"

# 697 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SpeedRoomDoor::
# 698 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 699 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_lt VAR_PETALBURG_GYM_STATE, 6, PetalburgCity_Gym_EventScript_DoorLocked
# 700 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 701 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 85
# 702 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_EnterRoom
# 703 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 704 "data/maps/PetalburgCity_Gym/scripts.pory"

# 705 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_EnterRoom::
# 706 "data/maps/PetalburgCity_Gym/scripts.pory"
	warpdoor MAP_PETALBURG_CITY_GYM, VAR_0x8008, VAR_0x8009
# 707 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitstate
# 708 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 709 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 710 "data/maps/PetalburgCity_Gym/scripts.pory"

# 711 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_DontEnterRoom::
# 712 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 713 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 714 "data/maps/PetalburgCity_Gym/scripts.pory"

# 715 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_DoorLocked::
# 716 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DoorAppearsLocked, MSGBOX_DEFAULT
# 717 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 718 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 719 "data/maps/PetalburgCity_Gym/scripts.pory"

# 720 "data/maps/PetalburgCity_Gym/scripts.pory"
@ VAR_0x8008 and VAR_0x8009 below are the x and y coordinates of the warp
# 721 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_AccuracyRoomDoor::
# 722 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 723 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_lt VAR_PETALBURG_GYM_STATE, 6, PetalburgCity_Gym_EventScript_DoorLocked
# 724 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 725 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 98
# 726 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_EnterRoom
# 727 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 728 "data/maps/PetalburgCity_Gym/scripts.pory"

# 729 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ConfusionRoomDoor::
# 730 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 731 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_RANDALL, PetalburgCity_Gym_EventScript_DoorLocked
# 732 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 733 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 46
# 734 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_EnterRoom
# 735 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 736 "data/maps/PetalburgCity_Gym/scripts.pory"

# 737 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftDefenseRoomDoor::
# 738 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 739 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_RANDALL, PetalburgCity_Gym_EventScript_DoorLocked
# 740 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 741 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 59
# 742 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_EnterRoom
# 743 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 744 "data/maps/PetalburgCity_Gym/scripts.pory"

# 745 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightDefenseRoomDoor::
# 746 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 747 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_MARY, PetalburgCity_Gym_EventScript_DoorLocked
# 748 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 749 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 59
# 750 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_EnterRoom
# 751 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 752 "data/maps/PetalburgCity_Gym/scripts.pory"

# 753 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RecoveryRoomDoor::
# 754 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 755 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_MARY, PetalburgCity_Gym_EventScript_DoorLocked
# 756 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 757 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 72
# 758 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_EnterRoom
# 759 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 760 "data/maps/PetalburgCity_Gym/scripts.pory"

# 761 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftStrengthRoomDoor::
# 762 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 763 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_PARKER, PetalburgCity_Gym_EventScript_DoorLocked
# 764 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 765 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 20
# 766 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_EnterRoom
# 767 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 768 "data/maps/PetalburgCity_Gym/scripts.pory"

# 769 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightStrengthRoomDoor::
# 770 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 771 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_ALEXIA, PetalburgCity_Gym_EventScript_DoorLocked
# 772 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 773 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 20
# 774 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_EnterRoom
# 775 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 776 "data/maps/PetalburgCity_Gym/scripts.pory"

# 777 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftOHKORoomDoor::
# 778 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 779 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_ALEXIA, PetalburgCity_Gym_EventScript_DoorLocked
# 780 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 781 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 33
# 782 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_EnterRoom
# 783 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 784 "data/maps/PetalburgCity_Gym/scripts.pory"

# 785 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightOHKORoomDoor::
# 786 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 787 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_GEORGE, PetalburgCity_Gym_EventScript_DoorLocked
# 788 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 789 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 33
# 790 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_EnterRoom
# 791 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 792 "data/maps/PetalburgCity_Gym/scripts.pory"

# 793 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftGymLeadersRoomDoor::
# 794 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 795 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_JODY, PetalburgCity_Gym_EventScript_DoorLocked
# 796 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 797 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 7
# 798 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_EnterRoom
# 799 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 800 "data/maps/PetalburgCity_Gym/scripts.pory"

# 801 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightGymLeadersRoomDoor::
# 802 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 803 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_BERKE, PetalburgCity_Gym_EventScript_DoorLocked
# 804 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 805 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 7
# 806 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_EnterRoom
# 807 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 808 "data/maps/PetalburgCity_Gym/scripts.pory"

# 809 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Randall::
# 810 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_RANDALL, PetalburgCity_Gym_Text_RandallIntro, PetalburgCity_Gym_Text_RandallDefeat, PetalburgCity_Gym_EventScript_SlideOpenSpeedRoomDoors
# 811 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_RandallPostBadge
# 812 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_RandallPostBattle, MSGBOX_AUTOCLOSE
# 813 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 814 "data/maps/PetalburgCity_Gym/scripts.pory"

# 815 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenSpeedRoomDoors::
# 816 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 817 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenSpeedRoomDoors
# 818 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 819 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 820 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 821 "data/maps/PetalburgCity_Gym/scripts.pory"

# 822 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RandallPostBadge::
# 823 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_RandallPostBadge, MSGBOX_NPC
# 824 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 825 "data/maps/PetalburgCity_Gym/scripts.pory"

# 826 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Parker::
# 827 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_PARKER, PetalburgCity_Gym_Text_ParkerIntro, PetalburgCity_Gym_Text_ParkerDefeat, PetalburgCity_Gym_EventScript_SlideOpenConfusionRoomDoors
# 828 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_ParkerPostBadge
# 829 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_ParkerPostBattle, MSGBOX_AUTOCLOSE
# 830 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 831 "data/maps/PetalburgCity_Gym/scripts.pory"

# 832 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenConfusionRoomDoors::
# 833 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 834 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenConfusionRoomDoors
# 835 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 836 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 837 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 838 "data/maps/PetalburgCity_Gym/scripts.pory"

# 839 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ParkerPostBadge::
# 840 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_ParkerPostBadge, MSGBOX_NPC
# 841 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 842 "data/maps/PetalburgCity_Gym/scripts.pory"

# 843 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_George::
# 844 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_GEORGE, PetalburgCity_Gym_Text_GeorgeIntro, PetalburgCity_Gym_Text_GeorgeDefeat, PetalburgCity_Gym_EventScript_SlideOpenRecoveryRoomDoors
# 845 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_GeorgePostBadge
# 846 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GeorgePostBattle, MSGBOX_AUTOCLOSE
# 847 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 848 "data/maps/PetalburgCity_Gym/scripts.pory"

# 849 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenRecoveryRoomDoors::
# 850 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 851 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenRecoveryRoomDoors
# 852 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 853 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 854 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 855 "data/maps/PetalburgCity_Gym/scripts.pory"

# 856 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GeorgePostBadge::
# 857 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GeorgePostBadge, MSGBOX_NPC
# 858 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 859 "data/maps/PetalburgCity_Gym/scripts.pory"

# 860 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Berke::
# 861 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_BERKE, PetalburgCity_Gym_Text_BerkeIntro, PetalburgCity_Gym_Text_BerkeDefeat, PetalburgCity_Gym_EventScript_SlideOpenOHKORoomDoors
# 862 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_BerkePostBadge
# 863 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_BerkePostBattle, MSGBOX_AUTOCLOSE
# 864 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 865 "data/maps/PetalburgCity_Gym/scripts.pory"

# 866 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenOHKORoomDoors::
# 867 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 868 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenOHKORoomDoors
# 869 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 870 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 871 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 872 "data/maps/PetalburgCity_Gym/scripts.pory"

# 873 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BerkePostBadge::
# 874 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_BerkePostBadge, MSGBOX_NPC
# 875 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 876 "data/maps/PetalburgCity_Gym/scripts.pory"

# 877 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Mary::
# 878 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_MARY, PetalburgCity_Gym_Text_MaryIntro, PetalburgCity_Gym_Text_MaryDefeat, PetalburgCity_Gym_EventScript_SlideOpenAccuracyRoomDoors
# 879 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_MaryPostBadge
# 880 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_MaryPostBattle, MSGBOX_AUTOCLOSE
# 881 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 882 "data/maps/PetalburgCity_Gym/scripts.pory"

# 883 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenAccuracyRoomDoors::
# 884 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 885 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenAccuracyRoomDoors
# 886 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 887 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 888 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 889 "data/maps/PetalburgCity_Gym/scripts.pory"

# 890 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_MaryPostBadge::
# 891 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_MaryPostBadge, MSGBOX_NPC
# 892 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 893 "data/maps/PetalburgCity_Gym/scripts.pory"

# 894 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Alexia::
# 895 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_ALEXIA, PetalburgCity_Gym_Text_AlexiaIntro, PetalburgCity_Gym_Text_AlexiaDefeat, PetalburgCity_Gym_EventScript_SlideOpenDefenseRoomDoors
# 896 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_AlexiaPostBadge
# 897 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_AlexiaPostBattle, MSGBOX_AUTOCLOSE
# 898 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 899 "data/maps/PetalburgCity_Gym/scripts.pory"

# 900 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenDefenseRoomDoors::
# 901 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 902 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenDefenseRoomDoors
# 903 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 904 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 905 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 906 "data/maps/PetalburgCity_Gym/scripts.pory"

# 907 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_AlexiaPostBadge::
# 908 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_AlexiaPostBadge, MSGBOX_NPC
# 909 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 910 "data/maps/PetalburgCity_Gym/scripts.pory"

# 911 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Jody::
# 912 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_JODY, PetalburgCity_Gym_Text_JodyIntro, PetalburgCity_Gym_Text_JodyDefeat, PetalburgCity_Gym_EventScript_SlideOpenStrengthRoomDoors
# 913 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_JodyPostBadge
# 914 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_JodyPostBattle, MSGBOX_AUTOCLOSE
# 915 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 916 "data/maps/PetalburgCity_Gym/scripts.pory"

# 917 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenStrengthRoomDoors::
# 918 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 919 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenStrengthRoomDoors
# 920 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 921 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 922 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 923 "data/maps/PetalburgCity_Gym/scripts.pory"

# 924 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_JodyPostBadge::
# 925 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_JodyPostBadge, MSGBOX_NPC
# 926 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 927 "data/maps/PetalburgCity_Gym/scripts.pory"

# 928 "data/maps/PetalburgCity_Gym/scripts.pory"
@ VAR_0x8004 below is the room number
# 929 "data/maps/PetalburgCity_Gym/scripts.pory"
@ VAR_0x8005 below is 0 when the door should be slid open and 1 when it should be unlocked immediately
# 930 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenGymEntranceDoors::
# 931 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 1
# 932 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 933 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 934 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetEntranceRoomDoorMetatiles
# 935 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 936 "data/maps/PetalburgCity_Gym/scripts.pory"

# 937 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenSpeedRoomDoors::
# 938 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 2
# 939 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 940 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 941 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetSpeedRoomDoorMetatiles
# 942 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 943 "data/maps/PetalburgCity_Gym/scripts.pory"

# 944 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenAccuracyRoomDoors::
# 945 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 3
# 946 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 947 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 948 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetAccuracyRoomDoorMetatiles
# 949 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 950 "data/maps/PetalburgCity_Gym/scripts.pory"

# 951 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenConfusionRoomDoors::
# 952 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 4
# 953 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 954 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 955 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetConfusionRoomDoorMetatiles
# 956 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 957 "data/maps/PetalburgCity_Gym/scripts.pory"

# 958 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenDefenseRoomDoors::
# 959 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 5
# 960 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 961 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 962 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetDefenseRoomDoorMetatiles
# 963 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 964 "data/maps/PetalburgCity_Gym/scripts.pory"

# 965 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenRecoveryRoomDoors::
# 966 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 6
# 967 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 968 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 969 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetRecoveryRoomDoorMetatiles
# 970 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 971 "data/maps/PetalburgCity_Gym/scripts.pory"

# 972 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenStrengthRoomDoors::
# 973 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 7
# 974 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 975 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 976 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetStrengthRoomDoorMetatiles
# 977 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 978 "data/maps/PetalburgCity_Gym/scripts.pory"

# 979 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenOHKORoomDoors::
# 980 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 8
# 981 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 982 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 983 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetOHKORoomDoorMetatiles
# 984 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 985 "data/maps/PetalburgCity_Gym/scripts.pory"

# 986 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetEntranceRoomDoorMetatiles::
# 987 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 85, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 988 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 85, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 989 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 98, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 990 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 98, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 991 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 992 "data/maps/PetalburgCity_Gym/scripts.pory"

# 993 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetSpeedRoomDoorMetatiles::
# 994 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 46, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 995 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 46, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 996 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 59, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 997 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 59, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 998 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 999 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1000 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetAccuracyRoomDoorMetatiles::
# 1001 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 59, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1002 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 59, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1003 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 72, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1004 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 72, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1005 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1006 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1007 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetConfusionRoomDoorMetatiles::
# 1008 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 20, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1009 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 20, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1010 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1011 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1012 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetDefenseRoomDoorMetatiles::
# 1013 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 20, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1014 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 20, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1015 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 33, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1016 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 33, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1017 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1018 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1019 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetRecoveryRoomDoorMetatiles::
# 1020 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 33, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1021 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 33, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1022 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1023 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1024 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetStrengthRoomDoorMetatiles::
# 1025 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 7, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1026 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 7, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1027 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1028 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1029 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetOHKORoomDoorMetatiles::
# 1030 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 7, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1031 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 7, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1032 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1033 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1034 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenRoomDoors::
# 1035 "data/maps/PetalburgCity_Gym/scripts.pory"
	special PetalburgGymSlideOpenRoomDoors
# 1036 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitstate
# 1037 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1038 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1039 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_UnlockRoomDoors::
# 1040 "data/maps/PetalburgCity_Gym/scripts.pory"
	special PetalburgGymUnlockRoomDoors
# 1041 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1042 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1043 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GymGuide::
# 1044 "data/maps/PetalburgCity_Gym/scripts.pory"
	lock
# 1045 "data/maps/PetalburgCity_Gym/scripts.pory"
	faceplayer
# 1046 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_GymGuidePostVictory
# 1047 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 1048 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 1049 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1050 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1051 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GymGuidePostVictory::
# 1052 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 1053 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 1054 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1055 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1056 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadYoureHereWithYourPokemon:
# 1057 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hm?\p"
# 1058 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Well, if it isn't {PLAYER}!\n"
# 1059 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "So you're all finished moving in?\p"
# 1060 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'm surprised that you managed to\n"
# 1061 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "get here by yourself.\p"
# 1062 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Oh, I see.\n"
# 1063 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You're with your Pokémon.\p"
# 1064 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hm… Then I guess you're going to\n"
# 1065 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "become a Trainer like me, {PLAYER}.\p"
# 1066 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "That's great news!\n"
# 1067 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'll be looking forward to it!$"
# 1068 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1069 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WallyIdLikeAPokemon:
# 1070 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Um… I…\n"
# 1071 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'd like to get a Pokémon, please…$"
# 1072 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1073 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadOhYoureWallyRight:
# 1074 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hm? You're… Uh… Oh, right.\n"
# 1075 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You're Wally, right?$"
# 1076 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1077 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WallyIveNeverCaughtAPokemon:
# 1078 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'm going to go stay with my\n"
# 1079 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "relatives in Verdanturf Town.\p"
# 1080 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I thought I would be lonely by myself,\n"
# 1081 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "so I wanted to take a Pokémon along.\p"
# 1082 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But I've never caught a Pokémon before.\n"
# 1083 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I don't know how…$"
# 1084 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1085 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadHmISee:
# 1086 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hm. I see.$"
# 1087 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1088 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadPlayerGoWithWally:
# 1089 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}, you heard that, right?\p"
# 1090 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Go with Wally and make sure that he\n"
# 1091 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "safely catches a Pokémon.$"
# 1092 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1093 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_IllLoanYouMyZigzagoon:
# 1094 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Wally, here, I'll loan you my Pokémon.$"
# 1095 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1096 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WallyReceivedAZigzagoon:
# 1097 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Wally received a Zigzagoon!$"
# 1098 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1099 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WallyThankYou:
# 1100 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Oh, wow!\n"
# 1101 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "A Pokémon!$"
# 1102 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1103 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_AndDadGivesPokeBall:
# 1104 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hm. I'll give you a Poké Ball, too.\n"
# 1105 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Go for it!$"
# 1106 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1107 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WallyReceivedAPokeball:
# 1108 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Wally received a Poké Ball!$"
# 1109 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1110 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WallyOhWowThankYou:
# 1111 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Oh, wow!\n"
# 1112 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Thank you!$"
# 1113 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1114 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WouldYouReallyComeWithMe:
# 1115 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}… Would you really come\n"
# 1116 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "with me?$"
# 1117 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1118 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadSoDidItWorkOut:
# 1119 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "So, did it work out?$"
# 1120 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1121 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WallyThankYouBye:
# 1122 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Thank you, yes, it did.\n"
# 1123 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Here's your Pokémon back.\p"
# 1124 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}, thank you for coming along\n"
# 1125 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "with me.\p"
# 1126 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You two are why I was able to catch\n"
# 1127 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "my Pokémon.\p"
# 1128 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I promise I'll take really good\n"
# 1129 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "care of it.\p"
# 1130 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Oh! My mom's waiting for me,\n"
# 1131 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "so I have to go!\p"
# 1132 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Bye, {PLAYER}!$"
# 1133 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1134 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadGoCollectBadges:
# 1135 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Now…\p"
# 1136 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}, if you want to become a\n"
# 1137 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "strong Trainer, here's my advice.\p"
# 1138 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Head for Rustboro City beyond this\n"
# 1139 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "town.\p"
# 1140 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "There, you should challenge\n"
# 1141 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the Gym Leader, Roxanne.\p"
# 1142 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "After her, go on to other Pokémon\n"
# 1143 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Gyms and defeat their Leaders.\p"
# 1144 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Collect Badges from them,\n"
# 1145 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "understood?\p"
# 1146 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Of course, I'm a Gym Leader, too.\n"
# 1147 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "We'll battle one day, {PLAYER}.\p"
# 1148 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But that's only after you become\n"
# 1149 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "stronger.\p"
# 1150 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Before you go, take this.$"
# 1151 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1152 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_PokevialGet:
# 1153 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Obtained a Pokévial from Dad!$"
# 1154 "data/maps/PetalburgCity_Gym/scripts.pory"
	
# 1155 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadPokevial:
# 1156 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "That's a Pokévial. Each dose\n"
# 1157 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "from it will let you heal your\l"
# 1158 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Pokémon to full while on the road.\p"
# 1159 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Any Pokémon Center will refill it\n"
# 1160 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "for you. It only holds one dose\l"
# 1161 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "for now, but I'm sure you'll find\l"
# 1162 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "ways to expand it on your journey.$"
# 1163 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1164 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadBonusDose:
# 1165 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Oh?\p"
# 1166 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You've got a look in your eye.\n"
# 1167 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Like that wasn't enough for you.\p"
# 1168 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "It seems like you might have a bit more\n"
# 1169 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "experience than I thought, so here, I'll\l"
# 1170 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "give you another dose right away.$"
# 1171 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1172 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanGoToRustboro:
# 1173 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hm? Aren't you going to the\n"
# 1174 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Pokémon Gym in Rustboro City?\p"
# 1175 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "There's no challenge for me to\n"
# 1176 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "battle a greenhorn Trainer.\p"
# 1177 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}, I want you to challenge me\n"
# 1178 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "when you become a lot stronger.\p"
# 1179 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'll battle you, {PLAYER}, when you\n"
# 1180 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "can show me four Gym Badges, okay?$"
# 1181 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1182 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanGoToDewford:
# 1183 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I see… So, you've beaten\n"
# 1184 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the Gym Leader in Rustboro City.\p"
# 1185 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But there are many more Trainers\n"
# 1186 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "who are stronger than you, {PLAYER}.\p"
# 1187 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Across the sea in Dewford Town is a\n"
# 1188 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Gym Leader named Brawly.\p"
# 1189 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You should go challenge him.$"
# 1190 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1191 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_YouHaveGottenStronger:
# 1192 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hm… {PLAYER}, you have gotten\n"
# 1193 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "stronger.\p"
# 1194 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I can tell by the number of Badges\n"
# 1195 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "that you've earned.$"
# 1196 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1197 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_PleaseComeWithMe:
# 1198 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Ah, there you are, {PLAYER}{KUN}!\p"
# 1199 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Please come with me.\n"
# 1200 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I have something I want you to have.$"
# 1201 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1202 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_LetMeBorrowPlayer:
# 1203 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Norman, you don't mind, do you?\p"
# 1204 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Let me borrow your {PLAYER}{KUN} for\n"
# 1205 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "a minute or two.$"
# 1206 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1207 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_RandallIntro:
# 1208 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The ability to attack before the\n"
# 1209 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "opponent…\p"
# 1210 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Just that alone puts me at a great\n"
# 1211 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "advantage, don't you agree?$"
# 1212 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1213 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_RandallDefeat:
# 1214 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "That was a magnificent battle!$"
# 1215 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1216 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_RandallPostBattle:
# 1217 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Go on to the next room where a new\n"
# 1218 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "challenge awaits you.\p"
# 1219 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "At the left is the Confusion Room.\p"
# 1220 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The right door leads to the Defense\n"
# 1221 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Room.$"
# 1222 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1223 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_RandallPostBadge:
# 1224 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Whomever you beat, and whomever you\n"
# 1225 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "may lose to, you never shirk from\l"
# 1226 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "training yourself and your Pokémon.\p"
# 1227 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "That's what I think being a\n"
# 1228 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Gym Leader is all about.$"
# 1229 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1230 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ParkerIntro:
# 1231 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "This is the Confusion Room.\p"
# 1232 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Let me see how well bonded you are\n"
# 1233 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "with your Pokémon!$"
# 1234 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1235 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ParkerDefeat:
# 1236 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I couldn't confuse your team enough…\n"
# 1237 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You share a strong bond together.$"
# 1238 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1239 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ParkerPostBattle:
# 1240 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The next room is the Strength Room.\n"
# 1241 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Can you withstand brute force?$"
# 1242 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1243 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ParkerPostBadge:
# 1244 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "After you beat our Leader, the\n"
# 1245 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "training has become a lot tougher.$"
# 1246 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1247 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GeorgeIntro:
# 1248 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Just when you think you're going to\n"
# 1249 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "win, your opponent restores HP…\p"
# 1250 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Can you just imagine how awful that\n"
# 1251 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "must feel?\p"
# 1252 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'll show you exactly how awful it\n"
# 1253 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "feels!$"
# 1254 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1255 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GeorgeDefeat:
# 1256 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I couldn't restore HP enough…\n"
# 1257 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "What Attack power…$"
# 1258 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1259 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GeorgePostBattle:
# 1260 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I should have expected no less from\n"
# 1261 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "our Leader's kid.\p"
# 1262 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "No, wait! A Trainer's abilities are\n"
# 1263 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "earned only through effort.\p"
# 1264 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I lost because my own efforts\n"
# 1265 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "weren't enough.\p"
# 1266 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Go on! The One-hit KO Room is next.$"
# 1267 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1268 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GeorgePostBadge:
# 1269 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'm going to keep training at Gyms.\n"
# 1270 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "One day, I'll become a Leader.$"
# 1271 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1272 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_BerkeIntro:
# 1273 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'm not going to take it easy just\n"
# 1274 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "because you're our Leader's kid.\p"
# 1275 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'll show you how horrid it is for\n"
# 1276 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "a Pokémon to take a critical hit!$"
# 1277 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1278 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_BerkeDefeat:
# 1279 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Your power…\n"
# 1280 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You're the real deal.$"
# 1281 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1282 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_BerkePostBattle:
# 1283 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Your father really is strong.\n"
# 1284 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "He's a Trainer worth my respect.\p"
# 1285 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "And, I sense the same glow coming\n"
# 1286 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "from you as your father.\p"
# 1287 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I hope that you'll stage a terrific\n"
# 1288 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "battle with your father!$"
# 1289 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1290 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_BerkePostBadge:
# 1291 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Since your dad became the Leader,\n"
# 1292 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the Trainers of Petalburg City have\l"
# 1293 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "become a lot tougher.$"
# 1294 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1295 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_MaryIntro:
# 1296 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Giggle…\n"
# 1297 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "This is the Accuracy Room.\p"
# 1298 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "It's pretty nasty when every attack\n"
# 1299 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "lands without fail.$"
# 1300 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1301 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_MaryDefeat:
# 1302 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You were a cut above me…$"
# 1303 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1304 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_MaryPostBattle:
# 1305 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "There are some even stronger\n"
# 1306 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Trainers waiting for you.\p"
# 1307 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The left is the Defense Room, and\n"
# 1308 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the right is the Recovery Room.\p"
# 1309 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Your Pokémon's Attack power will be\n"
# 1310 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "on trial either way.$"
# 1311 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1312 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_MaryPostBadge:
# 1313 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you know what we're trying to\n"
# 1314 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "achieve as Trainers?\p"
# 1315 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "We're striving to become soul mates\n"
# 1316 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "with our Pokémon.$"
# 1317 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1318 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_AlexiaIntro:
# 1319 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The higher the Defense, the more\n"
# 1320 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "reckless I can be in attack.$"
# 1321 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1322 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_AlexiaDefeat:
# 1323 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Our defenses weren't enough…$"
# 1324 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1325 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_AlexiaPostBattle:
# 1326 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I think you've taught me a valuable\n"
# 1327 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "lesson here.\p"
# 1328 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Now, go on! The left door goes to\n"
# 1329 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the Strength Room.\p"
# 1330 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The right door opens to\n"
# 1331 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the One-hit KO Room.\p"
# 1332 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Both of them have Trainers who are\n"
# 1333 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "skilled at offense.$"
# 1334 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1335 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_AlexiaPostBadge:
# 1336 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hi! Have you tried using Surf?$"
# 1337 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1338 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_JodyIntro:
# 1339 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Our Gym Leader told us to go all out\n"
# 1340 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "and beat you.\p"
# 1341 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Even if you happen to be the\n"
# 1342 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Leader's kid!$"
# 1343 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1344 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_JodyDefeat:
# 1345 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But… I went all out!$"
# 1346 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1347 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_JodyPostBattle:
# 1348 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The way you use your Pokémon…\n"
# 1349 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "It's like your father's style.\p"
# 1350 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Go on through! The Gym Leader, your\n"
# 1351 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "father, is waiting!$"
# 1352 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1353 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_JodyPostBadge:
# 1354 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Sure, it's fine to make your Pokémon\n"
# 1355 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "stronger.\p"
# 1356 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But what decides the winner?\p"
# 1357 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Why, it's the feelings Trainers have\n"
# 1358 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "for their Pokémon.$"
# 1359 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1360 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DoorAppearsLocked:
# 1361 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "This door appears to be locked\n"
# 1362 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "right now…$"
