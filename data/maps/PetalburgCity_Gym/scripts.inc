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
	call IncreasePokevialSize
# 113 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 114 "data/maps/PetalburgCity_Gym/scripts.pory"

# 115 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyExitGym:
# 116 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 117 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 118 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 119 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 120 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 121 "data/maps/PetalburgCity_Gym/scripts.pory"

# 122 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Norman::
# 123 "data/maps/PetalburgCity_Gym/scripts.pory"
	lock
# 124 "data/maps/PetalburgCity_Gym/scripts.pory"
	faceplayer
# 125 "data/maps/PetalburgCity_Gym/scripts.pory"
	switch VAR_PETALBURG_GYM_STATE
# 126 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 2, PetalburgCity_Gym_EventScript_NormanNoBadges
# 127 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 3, PetalburgCity_Gym_EventScript_NormanOneBadge
# 128 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 4, PetalburgCity_Gym_EventScript_NormanTwoBadges
# 129 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 5, PetalburgCity_Gym_EventScript_NormanThreeBadges
# 130 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 6, PetalburgCity_Gym_EventScript_NormanBattle
# 131 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 7, PetalburgCity_Gym_EventScript_NormanPostBattle
# 132 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 8, PetalburgCity_Gym_EventScript_NormanRematch
# 133 "data/maps/PetalburgCity_Gym/scripts.pory"
	speakername (CommonText_Dad)
# 134 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadYoureHereWithYourPokemon, MSGBOX_DEFAULT
# 135 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 136 "data/maps/PetalburgCity_Gym/scripts.pory"
	switch VAR_FACING
# 137 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_SOUTH, PetalburgCity_Gym_EventScript_BeginWallyTutorialSouth
# 138 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_NORTH, PetalburgCity_Gym_EventScript_BeginWallyTutorialNorth
# 139 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_WEST, PetalburgCity_Gym_EventScript_BeginWallyTutorialWest
# 140 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_EAST, PetalburgCity_Gym_EventScript_BeginWallyTutorialEast
# 141 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 142 "data/maps/PetalburgCity_Gym/scripts.pory"

# 143 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorialSouth::
# 144 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 0
# 145 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial
# 146 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 147 "data/maps/PetalburgCity_Gym/scripts.pory"

# 148 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorialNorth::
# 149 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 150 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial
# 151 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 152 "data/maps/PetalburgCity_Gym/scripts.pory"

# 153 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorialWest::
# 154 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 2
# 155 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial
# 156 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 157 "data/maps/PetalburgCity_Gym/scripts.pory"

# 158 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorialEast::
# 159 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 3
# 160 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial
# 161 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 162 "data/maps/PetalburgCity_Gym/scripts.pory"

# 163 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorial::
# 164 "data/maps/PetalburgCity_Gym/scripts.pory"
	addobject LOCALID_PETALBURG_GYM_WALLY
# 165 "data/maps/PetalburgCity_Gym/scripts.pory"
	playse SE_DOOR
# 166 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_Gym_EventScript_WallyArriveSouth
# 167 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_WallyArriveNorth
# 168 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_WallyArriveWestEast
# 169 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_WallyArriveWestEast
# 170 "data/maps/PetalburgCity_Gym/scripts.pory"
	speakername (CommonText_Q)
# 171 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WallyIdLikeAPokemon, MSGBOX_DEFAULT
# 172 "data/maps/PetalburgCity_Gym/scripts.pory"
	speakername (CommonText_Dad)
# 173 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadOhYoureWallyRight, MSGBOX_DEFAULT
# 174 "data/maps/PetalburgCity_Gym/scripts.pory"
	speakername (CommonText_Wally)
# 175 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WallyIveNeverCaughtAPokemon, MSGBOX_DEFAULT
# 176 "data/maps/PetalburgCity_Gym/scripts.pory"
	speakername (CommonText_Dad)
# 177 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadHmISee, MSGBOX_DEFAULT
# 178 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_Gym_EventScript_NormanAddressPlayerSouth
# 179 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_NormanAddressPlayerNorth
# 180 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_NormanAddressPlayerWest
# 181 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_NormanAddressPlayerEast
# 182 "data/maps/PetalburgCity_Gym/scripts.pory"
	speakername (CommonText_Dad)
# 183 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadPlayerGoWithWally, MSGBOX_DEFAULT
# 184 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_Gym_EventScript_NormanAddressWallySouth
# 185 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_NormanAddressWallyNorth
# 186 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_NormanAddressWallyWest
# 187 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_NormanAddressWallyEast
# 188 "data/maps/PetalburgCity_Gym/scripts.pory"
	speakername (CommonText_Dad)
# 189 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_IllLoanYouMyZigzagoon, MSGBOX_DEFAULT
# 190 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 191 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WallyReceivedAZigzagoon, MSGBOX_DEFAULT
# 192 "data/maps/PetalburgCity_Gym/scripts.pory"
	speakername (CommonText_Wally)
# 193 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WallyThankYou, MSGBOX_DEFAULT
# 194 "data/maps/PetalburgCity_Gym/scripts.pory"
	speakername (CommonText_Dad)
# 195 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_AndDadGivesPokeBall, MSGBOX_DEFAULT
# 196 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 197 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WallyReceivedAPokeball, MSGBOX_DEFAULT
# 198 "data/maps/PetalburgCity_Gym/scripts.pory"
	speakername (CommonText_Wally)
# 199 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WallyOhWowThankYou, MSGBOX_DEFAULT
# 200 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_Gym_EventScript_NormanFaceDoorSouth
# 201 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_NormanFaceDoorNorth
# 202 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_Gym_EventScript_WallyFacePlayer
# 203 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_WallyFaceDown
# 204 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_WallyFacePlayer
# 205 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_WallyFacePlayer
# 206 "data/maps/PetalburgCity_Gym/scripts.pory"
	speakername (CommonText_Wally)
# 207 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WouldYouReallyComeWithMe, MSGBOX_DEFAULT
# 208 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 209 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 210 "data/maps/PetalburgCity_Gym/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 211 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_Gym_EventScript_ExitGymWithWallySouth
# 212 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_ExitGymWithWallyNorth
# 213 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_ExitGymWithWallyWest
# 214 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_ExitGymWithWallyEast
# 215 "data/maps/PetalburgCity_Gym/scripts.pory"
	removeobject LOCALID_PETALBURG_GYM_WALLY
# 216 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_CITY_WALLYS_MOM
# 217 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 1
# 218 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 2
# 219 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_PETALBURG_CITY_WALLY
# 220 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_PETALBURG_GYM_WALLY
# 221 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_RIVAL
# 222 "data/maps/PetalburgCity_Gym/scripts.pory"
	special InitBirchState
# 223 "data/maps/PetalburgCity_Gym/scripts.pory"
	warp MAP_PETALBURG_CITY, 15, 8
# 224 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitstate
# 225 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 226 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 227 "data/maps/PetalburgCity_Gym/scripts.pory"

# 228 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallyArriveSouth::
# 229 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 230 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLY, PetalburgCity_Gym_Movement_WallyArrive
# 231 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 232 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 233 "data/maps/PetalburgCity_Gym/scripts.pory"

# 234 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallyArriveNorth::
# 235 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLY, PetalburgCity_Gym_Movement_WallyArriveNorth
# 236 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 237 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterRight
# 238 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 239 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 240 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 241 "data/maps/PetalburgCity_Gym/scripts.pory"

# 242 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallyArriveWestEast::
# 243 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 244 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 245 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLY, PetalburgCity_Gym_Movement_WallyArrive
# 246 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 247 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 248 "data/maps/PetalburgCity_Gym/scripts.pory"

# 249 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallySouth::
# 250 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 251 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLY, PetalburgCity_Gym_Movement_WallyExitSouthWest
# 252 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallySouth
# 253 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 254 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 255 "data/maps/PetalburgCity_Gym/scripts.pory"

# 256 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallyNorth::
# 257 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLY, PetalburgCity_Gym_Movement_WallyExitNorth
# 258 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallyNorth
# 259 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 260 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 261 "data/maps/PetalburgCity_Gym/scripts.pory"

# 262 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallyWest::
# 263 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLY, PetalburgCity_Gym_Movement_WallyExitSouthWest
# 264 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallyWest
# 265 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 266 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 267 "data/maps/PetalburgCity_Gym/scripts.pory"

# 268 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallyEast::
# 269 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLY, PetalburgCity_Gym_Movement_WallyExitEast
# 270 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallyEast
# 271 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 272 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 273 "data/maps/PetalburgCity_Gym/scripts.pory"

# 274 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressPlayerSouth::
# 275 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterUp
# 276 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 277 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 278 "data/maps/PetalburgCity_Gym/scripts.pory"

# 279 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressPlayerNorth::
# 280 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 281 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 282 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 283 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 284 "data/maps/PetalburgCity_Gym/scripts.pory"

# 285 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressPlayerWest::
# 286 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterRight
# 287 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 288 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 289 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 290 "data/maps/PetalburgCity_Gym/scripts.pory"

# 291 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressPlayerEast::
# 292 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterLeft
# 293 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 294 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 295 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 296 "data/maps/PetalburgCity_Gym/scripts.pory"

# 297 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressWallySouth::
# 298 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 299 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 300 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 301 "data/maps/PetalburgCity_Gym/scripts.pory"

# 302 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressWallyNorth::
# 303 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterRight
# 304 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 305 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 306 "data/maps/PetalburgCity_Gym/scripts.pory"

# 307 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressWallyWest::
# 308 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 309 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 310 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 311 "data/maps/PetalburgCity_Gym/scripts.pory"

# 312 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressWallyEast::
# 313 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 314 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 315 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 316 "data/maps/PetalburgCity_Gym/scripts.pory"

# 317 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallyFacePlayer::
# 318 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLY, Common_Movement_FacePlayer
# 319 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 320 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 321 "data/maps/PetalburgCity_Gym/scripts.pory"

# 322 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallyFaceDown::
# 323 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLY, Common_Movement_WalkInPlaceFasterDown
# 324 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 325 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 326 "data/maps/PetalburgCity_Gym/scripts.pory"

# 327 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanNoBadges::
# 328 "data/maps/PetalburgCity_Gym/scripts.pory"
	speakername (CommonText_Dad)
# 329 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_NormanGoToRustboro, MSGBOX_DEFAULT
# 330 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 331 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 332 "data/maps/PetalburgCity_Gym/scripts.pory"

# 333 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanOneBadge::
# 334 "data/maps/PetalburgCity_Gym/scripts.pory"
	speakername (CommonText_Dad)
# 335 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_NormanGoToDewford, MSGBOX_DEFAULT
# 336 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 337 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 338 "data/maps/PetalburgCity_Gym/scripts.pory"

# 339 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanTwoBadges::
# 340 "data/maps/PetalburgCity_Gym/scripts.pory"
	speakername (CommonText_Dad)
# 341 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_YouHaveGottenStronger, MSGBOX_DEFAULT
# 342 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 343 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 344 "data/maps/PetalburgCity_Gym/scripts.pory"

# 345 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanThreeBadges::
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
PetalburgCity_Gym_EventScript_NormanFaceDoorSouth::
# 352 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 353 "data/maps/PetalburgCity_Gym/scripts.pory"

# 354 "data/maps/PetalburgCity_Gym/scripts.pory"
@ For all other NormanFaceDoorX, Norman is already facing the door from NormanAddressWallyX
# 355 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanFaceDoorNorth::
# 356 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 357 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 358 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 359 "data/maps/PetalburgCity_Gym/scripts.pory"

# 360 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ShouldGiveEnigmaBerry::
# 361 "data/maps/PetalburgCity_Gym/scripts.pory"
	specialvar VAR_RESULT, IsEnigmaBerryValid
# 362 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, PetalburgCity_Gym_EventScript_DontGiveEnigmaBerry
# 363 "data/maps/PetalburgCity_Gym/scripts.pory"
	checkitem ITEM_ENIGMA_BERRY_E_READER
# 364 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, PetalburgCity_Gym_EventScript_DontGiveEnigmaBerry
# 365 "data/maps/PetalburgCity_Gym/scripts.pory"
	checkpcitem ITEM_ENIGMA_BERRY_E_READER
# 366 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, PetalburgCity_Gym_EventScript_DontGiveEnigmaBerry
# 367 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_ENIGMA_BERRY_AVAILABLE, 0, PetalburgCity_Gym_EventScript_DontGiveEnigmaBerry
# 368 "data/maps/PetalburgCity_Gym/scripts.pory"
	speakername (CommonText_Dad)
# 369 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GiveEnigmaBerry, MSGBOX_DEFAULT
# 370 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_RESULT, TRUE
# 371 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 372 "data/maps/PetalburgCity_Gym/scripts.pory"

# 373 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_DontGiveEnigmaBerry::
# 374 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_RESULT, FALSE
# 375 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 376 "data/maps/PetalburgCity_Gym/scripts.pory"

# 377 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GiveEnigmaBerry::
# 378 "data/maps/PetalburgCity_Gym/scripts.pory"
	giveitem ITEM_ENIGMA_BERRY_E_READER
# 379 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 380 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_ENIGMA_BERRY_AVAILABLE, 0
# 381 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 382 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 383 "data/maps/PetalburgCity_Gym/scripts.pory"

# 384 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadArrivesNorth::
# 385 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 386 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_WallysDadArrives
# 387 "data/maps/PetalburgCity_Gym/scripts.pory"

# 388 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadArrivesEast::
# 389 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 2
# 390 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_WallysDadArrives
# 391 "data/maps/PetalburgCity_Gym/scripts.pory"

# 392 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadArrivesWest::
# 393 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 3
# 394 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_WallysDadArrives
# 395 "data/maps/PetalburgCity_Gym/scripts.pory"

# 396 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadArrives::
# 397 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadEnterGym
# 398 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 399 "data/maps/PetalburgCity_Gym/scripts.pory"
	playse SE_PIN
# 400 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLYS_DAD, Common_Movement_ExclamationMark
# 401 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 402 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLYS_DAD, Common_Movement_Delay48
# 403 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 404 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 10
# 405 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_WallysDadApproachPlayerNorth
# 406 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_WallysDadApproachPlayerEast
# 407 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_WallysDadApproachPlayerWest
# 408 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_PleaseComeWithMe, MSGBOX_DEFAULT
# 409 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 410 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 20
# 411 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_WallysDadFaceNormanNorth
# 412 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_WallysDadFaceNormanEast
# 413 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_WallysDadFaceNormanWest
# 414 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_LetMeBorrowPlayer, MSGBOX_DEFAULT
# 415 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 416 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 417 "data/maps/PetalburgCity_Gym/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 418 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_ExitGymWithWallysDadNorth
# 419 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_ExitGymWithWallysDadEast
# 420 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_ExitGymWithWallysDadWest
# 421 "data/maps/PetalburgCity_Gym/scripts.pory"
	removeobject LOCALID_PETALBURG_GYM_WALLYS_DAD
# 422 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 4
# 423 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_PETALBURG_CITY_WALLYS_DAD
# 424 "data/maps/PetalburgCity_Gym/scripts.pory"
	warp MAP_PETALBURG_CITY, 15, 8
# 425 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitstate
# 426 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 427 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 428 "data/maps/PetalburgCity_Gym/scripts.pory"

# 429 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadFaceNormanNorth::
# 430 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLYS_DAD, Common_Movement_WalkInPlaceFasterUp
# 431 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 432 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 433 "data/maps/PetalburgCity_Gym/scripts.pory"

# 434 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadFaceNormanEast::
# 435 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLYS_DAD, Common_Movement_WalkInPlaceFasterRight
# 436 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 437 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 438 "data/maps/PetalburgCity_Gym/scripts.pory"

# 439 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadFaceNormanWest::
# 440 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLYS_DAD, Common_Movement_WalkInPlaceFasterLeft
# 441 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 442 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 443 "data/maps/PetalburgCity_Gym/scripts.pory"

# 444 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadApproachPlayerNorth::
# 445 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadApproachPlayerNorth
# 446 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 447 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 448 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterLeft
# 449 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 450 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 451 "data/maps/PetalburgCity_Gym/scripts.pory"

# 452 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadApproachPlayerEast::
# 453 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadApproachPlayerEast
# 454 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 455 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 456 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 457 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 458 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 459 "data/maps/PetalburgCity_Gym/scripts.pory"

# 460 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadApproachPlayerWest::
# 461 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadApproachPlayerWest
# 462 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 463 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 464 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 465 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 466 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 467 "data/maps/PetalburgCity_Gym/scripts.pory"

# 468 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallysDadNorth::
# 469 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadExitNorth
# 470 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 471 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallysDadNorth
# 472 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 473 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 474 "data/maps/PetalburgCity_Gym/scripts.pory"

# 475 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallysDadEast::
# 476 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadExitEast
# 477 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallysDadEast
# 478 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 479 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 480 "data/maps/PetalburgCity_Gym/scripts.pory"

# 481 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallysDadWest::
# 482 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadExitWest
# 483 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallysDadWest
# 484 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 485 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 486 "data/maps/PetalburgCity_Gym/scripts.pory"

# 487 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadExitNorth:
# 488 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 489 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 490 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 491 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 492 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 493 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 494 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 495 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 496 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 497 "data/maps/PetalburgCity_Gym/scripts.pory"
	set_invisible
# 498 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 499 "data/maps/PetalburgCity_Gym/scripts.pory"

# 500 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadExitEast:
# 501 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 502 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 503 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 504 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 505 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 506 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 507 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 508 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 509 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 510 "data/maps/PetalburgCity_Gym/scripts.pory"
	set_invisible
# 511 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 512 "data/maps/PetalburgCity_Gym/scripts.pory"

# 513 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadExitWest:
# 514 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 515 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 516 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 517 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 518 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 519 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 520 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 521 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 522 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 523 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 524 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 525 "data/maps/PetalburgCity_Gym/scripts.pory"
	set_invisible
# 526 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 527 "data/maps/PetalburgCity_Gym/scripts.pory"

# 528 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallysDadNorth:
# 529 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 530 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 531 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 532 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 533 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 534 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 535 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 536 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 537 "data/maps/PetalburgCity_Gym/scripts.pory"

# 538 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallysDadEast:
# 539 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 540 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 541 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 542 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 543 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 544 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 545 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 546 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 547 "data/maps/PetalburgCity_Gym/scripts.pory"

# 548 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallysDadWest:
# 549 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 550 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 551 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 552 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
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
	step_end
# 559 "data/maps/PetalburgCity_Gym/scripts.pory"

# 560 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadEnterGym:
# 561 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 562 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 563 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_right
# 564 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 565 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_left
# 566 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 567 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 568 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 569 "data/maps/PetalburgCity_Gym/scripts.pory"

# 570 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadApproachPlayerNorth:
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
	walk_in_place_faster_right
# 577 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 578 "data/maps/PetalburgCity_Gym/scripts.pory"

# 579 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadApproachPlayerEast:
# 580 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 581 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 582 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 583 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 584 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 585 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 586 "data/maps/PetalburgCity_Gym/scripts.pory"

# 587 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadApproachPlayerWest:
# 588 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 589 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 590 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 591 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 592 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 593 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 594 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 595 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 596 "data/maps/PetalburgCity_Gym/scripts.pory"

# 597 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyArriveNorth:
# 598 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 599 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 600 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 601 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 602 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 603 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 604 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 605 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 606 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_left
# 607 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 608 "data/maps/PetalburgCity_Gym/scripts.pory"

# 609 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyArrive:
# 610 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 611 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 612 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 613 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 614 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 615 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 616 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 617 "data/maps/PetalburgCity_Gym/scripts.pory"

# 618 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyExitNorth:
# 619 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 620 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 621 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 622 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 623 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 624 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 625 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 626 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 627 "data/maps/PetalburgCity_Gym/scripts.pory"

# 628 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyExitEast:
# 629 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 630 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 631 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
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
PetalburgCity_Gym_Movement_WallyExitSouthWest:
# 639 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 640 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 641 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 642 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 643 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 644 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 645 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 646 "data/maps/PetalburgCity_Gym/scripts.pory"

# 647 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallyNorth:
# 648 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 649 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 650 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 651 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 652 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 653 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 654 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 655 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 656 "data/maps/PetalburgCity_Gym/scripts.pory"

# 657 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallySouth:
# 658 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 659 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 660 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 661 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 662 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 663 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 664 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 665 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 666 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 667 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 668 "data/maps/PetalburgCity_Gym/scripts.pory"

# 669 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallyWest:
# 670 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 671 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 672 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 673 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 674 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 675 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 676 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 677 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 678 "data/maps/PetalburgCity_Gym/scripts.pory"

# 679 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallyEast:
# 680 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_down
# 681 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 682 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 683 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 684 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 685 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 686 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 687 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 688 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 689 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 690 "data/maps/PetalburgCity_Gym/scripts.pory"

# 691 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SpeedRoomDoor::
# 692 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 693 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_lt VAR_PETALBURG_GYM_STATE, 6, PetalburgCity_Gym_EventScript_DoorLocked
# 694 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 695 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 85
# 696 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_EnterRoom
# 697 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 698 "data/maps/PetalburgCity_Gym/scripts.pory"

# 699 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_EnterRoom::
# 700 "data/maps/PetalburgCity_Gym/scripts.pory"
	warpdoor MAP_PETALBURG_CITY_GYM, VAR_0x8008, VAR_0x8009
# 701 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitstate
# 702 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 703 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 704 "data/maps/PetalburgCity_Gym/scripts.pory"

# 705 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_DontEnterRoom::
# 706 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 707 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 708 "data/maps/PetalburgCity_Gym/scripts.pory"

# 709 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_DoorLocked::
# 710 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DoorAppearsLocked, MSGBOX_DEFAULT
# 711 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 712 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 713 "data/maps/PetalburgCity_Gym/scripts.pory"

# 714 "data/maps/PetalburgCity_Gym/scripts.pory"
@ VAR_0x8008 and VAR_0x8009 below are the x and y coordinates of the warp
# 715 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_AccuracyRoomDoor::
# 716 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 717 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_lt VAR_PETALBURG_GYM_STATE, 6, PetalburgCity_Gym_EventScript_DoorLocked
# 718 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 719 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 98
# 720 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_EnterRoom
# 721 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 722 "data/maps/PetalburgCity_Gym/scripts.pory"

# 723 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ConfusionRoomDoor::
# 724 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 725 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_RANDALL, PetalburgCity_Gym_EventScript_DoorLocked
# 726 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 727 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 46
# 728 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_EnterRoom
# 729 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 730 "data/maps/PetalburgCity_Gym/scripts.pory"

# 731 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftDefenseRoomDoor::
# 732 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 733 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_RANDALL, PetalburgCity_Gym_EventScript_DoorLocked
# 734 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 735 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 59
# 736 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_EnterRoom
# 737 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 738 "data/maps/PetalburgCity_Gym/scripts.pory"

# 739 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightDefenseRoomDoor::
# 740 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 741 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_MARY, PetalburgCity_Gym_EventScript_DoorLocked
# 742 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 743 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 59
# 744 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_EnterRoom
# 745 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 746 "data/maps/PetalburgCity_Gym/scripts.pory"

# 747 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RecoveryRoomDoor::
# 748 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 749 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_MARY, PetalburgCity_Gym_EventScript_DoorLocked
# 750 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 751 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 72
# 752 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_EnterRoom
# 753 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 754 "data/maps/PetalburgCity_Gym/scripts.pory"

# 755 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftStrengthRoomDoor::
# 756 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 757 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_PARKER, PetalburgCity_Gym_EventScript_DoorLocked
# 758 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 759 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 20
# 760 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_EnterRoom
# 761 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 762 "data/maps/PetalburgCity_Gym/scripts.pory"

# 763 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightStrengthRoomDoor::
# 764 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 765 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_ALEXIA, PetalburgCity_Gym_EventScript_DoorLocked
# 766 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 767 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 20
# 768 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_EnterRoom
# 769 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 770 "data/maps/PetalburgCity_Gym/scripts.pory"

# 771 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftOHKORoomDoor::
# 772 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 773 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_ALEXIA, PetalburgCity_Gym_EventScript_DoorLocked
# 774 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 775 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 33
# 776 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_EnterRoom
# 777 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 778 "data/maps/PetalburgCity_Gym/scripts.pory"

# 779 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightOHKORoomDoor::
# 780 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 781 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_GEORGE, PetalburgCity_Gym_EventScript_DoorLocked
# 782 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 783 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 33
# 784 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_EnterRoom
# 785 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 786 "data/maps/PetalburgCity_Gym/scripts.pory"

# 787 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftGymLeadersRoomDoor::
# 788 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 789 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_JODY, PetalburgCity_Gym_EventScript_DoorLocked
# 790 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 791 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 7
# 792 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_EnterRoom
# 793 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 794 "data/maps/PetalburgCity_Gym/scripts.pory"

# 795 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightGymLeadersRoomDoor::
# 796 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 797 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_BERKE, PetalburgCity_Gym_EventScript_DoorLocked
# 798 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 799 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 7
# 800 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_EnterRoom
# 801 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 802 "data/maps/PetalburgCity_Gym/scripts.pory"

# 803 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Randall::
# 804 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_RANDALL, PetalburgCity_Gym_Text_RandallIntro, PetalburgCity_Gym_Text_RandallDefeat, PetalburgCity_Gym_EventScript_SlideOpenSpeedRoomDoors
# 805 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_RandallPostBadge
# 806 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_RandallPostBattle, MSGBOX_AUTOCLOSE
# 807 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 808 "data/maps/PetalburgCity_Gym/scripts.pory"

# 809 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenSpeedRoomDoors::
# 810 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 811 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenSpeedRoomDoors
# 812 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 813 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 814 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 815 "data/maps/PetalburgCity_Gym/scripts.pory"

# 816 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RandallPostBadge::
# 817 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_RandallPostBadge, MSGBOX_NPC
# 818 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 819 "data/maps/PetalburgCity_Gym/scripts.pory"

# 820 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Parker::
# 821 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_PARKER, PetalburgCity_Gym_Text_ParkerIntro, PetalburgCity_Gym_Text_ParkerDefeat, PetalburgCity_Gym_EventScript_SlideOpenConfusionRoomDoors
# 822 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_ParkerPostBadge
# 823 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_ParkerPostBattle, MSGBOX_AUTOCLOSE
# 824 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 825 "data/maps/PetalburgCity_Gym/scripts.pory"

# 826 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenConfusionRoomDoors::
# 827 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 828 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenConfusionRoomDoors
# 829 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 830 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 831 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 832 "data/maps/PetalburgCity_Gym/scripts.pory"

# 833 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ParkerPostBadge::
# 834 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_ParkerPostBadge, MSGBOX_NPC
# 835 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 836 "data/maps/PetalburgCity_Gym/scripts.pory"

# 837 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_George::
# 838 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_GEORGE, PetalburgCity_Gym_Text_GeorgeIntro, PetalburgCity_Gym_Text_GeorgeDefeat, PetalburgCity_Gym_EventScript_SlideOpenRecoveryRoomDoors
# 839 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_GeorgePostBadge
# 840 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GeorgePostBattle, MSGBOX_AUTOCLOSE
# 841 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 842 "data/maps/PetalburgCity_Gym/scripts.pory"

# 843 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenRecoveryRoomDoors::
# 844 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 845 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenRecoveryRoomDoors
# 846 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 847 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 848 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 849 "data/maps/PetalburgCity_Gym/scripts.pory"

# 850 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GeorgePostBadge::
# 851 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GeorgePostBadge, MSGBOX_NPC
# 852 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 853 "data/maps/PetalburgCity_Gym/scripts.pory"

# 854 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Berke::
# 855 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_BERKE, PetalburgCity_Gym_Text_BerkeIntro, PetalburgCity_Gym_Text_BerkeDefeat, PetalburgCity_Gym_EventScript_SlideOpenOHKORoomDoors
# 856 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_BerkePostBadge
# 857 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_BerkePostBattle, MSGBOX_AUTOCLOSE
# 858 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 859 "data/maps/PetalburgCity_Gym/scripts.pory"

# 860 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenOHKORoomDoors::
# 861 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 862 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenOHKORoomDoors
# 863 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 864 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 865 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 866 "data/maps/PetalburgCity_Gym/scripts.pory"

# 867 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BerkePostBadge::
# 868 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_BerkePostBadge, MSGBOX_NPC
# 869 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 870 "data/maps/PetalburgCity_Gym/scripts.pory"

# 871 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Mary::
# 872 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_MARY, PetalburgCity_Gym_Text_MaryIntro, PetalburgCity_Gym_Text_MaryDefeat, PetalburgCity_Gym_EventScript_SlideOpenAccuracyRoomDoors
# 873 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_MaryPostBadge
# 874 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_MaryPostBattle, MSGBOX_AUTOCLOSE
# 875 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 876 "data/maps/PetalburgCity_Gym/scripts.pory"

# 877 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenAccuracyRoomDoors::
# 878 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 879 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenAccuracyRoomDoors
# 880 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 881 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 882 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 883 "data/maps/PetalburgCity_Gym/scripts.pory"

# 884 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_MaryPostBadge::
# 885 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_MaryPostBadge, MSGBOX_NPC
# 886 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 887 "data/maps/PetalburgCity_Gym/scripts.pory"

# 888 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Alexia::
# 889 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_ALEXIA, PetalburgCity_Gym_Text_AlexiaIntro, PetalburgCity_Gym_Text_AlexiaDefeat, PetalburgCity_Gym_EventScript_SlideOpenDefenseRoomDoors
# 890 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_AlexiaPostBadge
# 891 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_AlexiaPostBattle, MSGBOX_AUTOCLOSE
# 892 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 893 "data/maps/PetalburgCity_Gym/scripts.pory"

# 894 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenDefenseRoomDoors::
# 895 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 896 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenDefenseRoomDoors
# 897 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 898 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 899 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 900 "data/maps/PetalburgCity_Gym/scripts.pory"

# 901 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_AlexiaPostBadge::
# 902 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_AlexiaPostBadge, MSGBOX_NPC
# 903 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 904 "data/maps/PetalburgCity_Gym/scripts.pory"

# 905 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Jody::
# 906 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_JODY, PetalburgCity_Gym_Text_JodyIntro, PetalburgCity_Gym_Text_JodyDefeat, PetalburgCity_Gym_EventScript_SlideOpenStrengthRoomDoors
# 907 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_JodyPostBadge
# 908 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_JodyPostBattle, MSGBOX_AUTOCLOSE
# 909 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 910 "data/maps/PetalburgCity_Gym/scripts.pory"

# 911 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenStrengthRoomDoors::
# 912 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 913 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenStrengthRoomDoors
# 914 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 915 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 916 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 917 "data/maps/PetalburgCity_Gym/scripts.pory"

# 918 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_JodyPostBadge::
# 919 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_JodyPostBadge, MSGBOX_NPC
# 920 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 921 "data/maps/PetalburgCity_Gym/scripts.pory"

# 922 "data/maps/PetalburgCity_Gym/scripts.pory"
@ VAR_0x8004 below is the room number
# 923 "data/maps/PetalburgCity_Gym/scripts.pory"
@ VAR_0x8005 below is 0 when the door should be slid open and 1 when it should be unlocked immediately
# 924 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenGymEntranceDoors::
# 925 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 1
# 926 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 927 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 928 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetEntranceRoomDoorMetatiles
# 929 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 930 "data/maps/PetalburgCity_Gym/scripts.pory"

# 931 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenSpeedRoomDoors::
# 932 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 2
# 933 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 934 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 935 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetSpeedRoomDoorMetatiles
# 936 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 937 "data/maps/PetalburgCity_Gym/scripts.pory"

# 938 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenAccuracyRoomDoors::
# 939 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 3
# 940 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 941 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 942 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetAccuracyRoomDoorMetatiles
# 943 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 944 "data/maps/PetalburgCity_Gym/scripts.pory"

# 945 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenConfusionRoomDoors::
# 946 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 4
# 947 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 948 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 949 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetConfusionRoomDoorMetatiles
# 950 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 951 "data/maps/PetalburgCity_Gym/scripts.pory"

# 952 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenDefenseRoomDoors::
# 953 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 5
# 954 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 955 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 956 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetDefenseRoomDoorMetatiles
# 957 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 958 "data/maps/PetalburgCity_Gym/scripts.pory"

# 959 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenRecoveryRoomDoors::
# 960 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 6
# 961 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 962 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 963 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetRecoveryRoomDoorMetatiles
# 964 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 965 "data/maps/PetalburgCity_Gym/scripts.pory"

# 966 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenStrengthRoomDoors::
# 967 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 7
# 968 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 969 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 970 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetStrengthRoomDoorMetatiles
# 971 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 972 "data/maps/PetalburgCity_Gym/scripts.pory"

# 973 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenOHKORoomDoors::
# 974 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 8
# 975 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 976 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 977 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetOHKORoomDoorMetatiles
# 978 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 979 "data/maps/PetalburgCity_Gym/scripts.pory"

# 980 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetEntranceRoomDoorMetatiles::
# 981 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 85, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 982 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 85, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 983 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 98, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 984 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 98, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 985 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 986 "data/maps/PetalburgCity_Gym/scripts.pory"

# 987 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetSpeedRoomDoorMetatiles::
# 988 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 46, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 989 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 46, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 990 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 59, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 991 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 59, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 992 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 993 "data/maps/PetalburgCity_Gym/scripts.pory"

# 994 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetAccuracyRoomDoorMetatiles::
# 995 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 59, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 996 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 59, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 997 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 72, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 998 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 72, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 999 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1000 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1001 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetConfusionRoomDoorMetatiles::
# 1002 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 20, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1003 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 20, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1004 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1005 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1006 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetDefenseRoomDoorMetatiles::
# 1007 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 20, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1008 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 20, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1009 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 33, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1010 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 33, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1011 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1012 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1013 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetRecoveryRoomDoorMetatiles::
# 1014 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 33, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1015 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 33, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1016 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1017 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1018 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetStrengthRoomDoorMetatiles::
# 1019 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 7, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1020 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 7, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1021 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1022 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1023 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetOHKORoomDoorMetatiles::
# 1024 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 7, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1025 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 7, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1026 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1027 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1028 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenRoomDoors::
# 1029 "data/maps/PetalburgCity_Gym/scripts.pory"
	special PetalburgGymSlideOpenRoomDoors
# 1030 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitstate
# 1031 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1032 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1033 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_UnlockRoomDoors::
# 1034 "data/maps/PetalburgCity_Gym/scripts.pory"
	special PetalburgGymUnlockRoomDoors
# 1035 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1036 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1037 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GymGuide::
# 1038 "data/maps/PetalburgCity_Gym/scripts.pory"
	lock
# 1039 "data/maps/PetalburgCity_Gym/scripts.pory"
	faceplayer
# 1040 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_GymGuidePostVictory
# 1041 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 1042 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 1043 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1044 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1045 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GymGuidePostVictory::
# 1046 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 1047 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 1048 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1049 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1050 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadYoureHereWithYourPokemon:
# 1051 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hm?\p"
# 1052 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Well, if it isn't {PLAYER}!\n"
# 1053 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "So you're all finished moving in?\p"
# 1054 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'm surprised that you managed to\n"
# 1055 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "get here by yourself.\p"
# 1056 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Oh, I see.\n"
# 1057 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You're with your Pokémon.\p"
# 1058 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hm… Then I guess you're going to\n"
# 1059 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "become a Trainer like me, {PLAYER}.\p"
# 1060 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "That's great news!\n"
# 1061 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'll be looking forward to it!$"
# 1062 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1063 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WallyIdLikeAPokemon:
# 1064 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Um… I…\n"
# 1065 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'd like to get a Pokémon, please…$"
# 1066 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1067 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadOhYoureWallyRight:
# 1068 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hm? You're… Uh… Oh, right.\n"
# 1069 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You're Wally, right?$"
# 1070 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1071 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WallyIveNeverCaughtAPokemon:
# 1072 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'm going to go stay with my\n"
# 1073 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "relatives in Verdanturf Town.\p"
# 1074 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I thought I would be lonely by myself,\n"
# 1075 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "so I wanted to take a Pokémon along.\p"
# 1076 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But I've never caught a Pokémon before.\n"
# 1077 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I don't know how…$"
# 1078 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1079 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadHmISee:
# 1080 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hm. I see.$"
# 1081 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1082 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadPlayerGoWithWally:
# 1083 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}, you heard that, right?\p"
# 1084 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Go with Wally and make sure that he\n"
# 1085 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "safely catches a Pokémon.$"
# 1086 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1087 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_IllLoanYouMyZigzagoon:
# 1088 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Wally, here, I'll loan you my Pokémon.$"
# 1089 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1090 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WallyReceivedAZigzagoon:
# 1091 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Wally received a Zigzagoon!$"
# 1092 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1093 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WallyThankYou:
# 1094 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Oh, wow!\n"
# 1095 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "A Pokémon!$"
# 1096 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1097 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_AndDadGivesPokeBall:
# 1098 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hm. I'll give you a Poké Ball, too.\n"
# 1099 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Go for it!$"
# 1100 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1101 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WallyReceivedAPokeball:
# 1102 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Wally received a Poké Ball!$"
# 1103 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1104 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WallyOhWowThankYou:
# 1105 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Oh, wow!\n"
# 1106 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Thank you!$"
# 1107 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1108 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WouldYouReallyComeWithMe:
# 1109 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}… Would you really come\n"
# 1110 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "with me?$"
# 1111 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1112 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadSoDidItWorkOut:
# 1113 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "So, did it work out?$"
# 1114 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1115 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WallyThankYouBye:
# 1116 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Thank you, yes, it did.\n"
# 1117 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Here's your Pokémon back.\p"
# 1118 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}, thank you for coming along\n"
# 1119 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "with me.\p"
# 1120 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You two are why I was able to catch\n"
# 1121 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "my Pokémon.\p"
# 1122 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I promise I'll take really good\n"
# 1123 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "care of it.\p"
# 1124 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Oh! My mom's waiting for me,\n"
# 1125 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "so I have to go!\p"
# 1126 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Bye, {PLAYER}!$"
# 1127 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1128 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadGoCollectBadges:
# 1129 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Now…\p"
# 1130 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}, if you want to become a\n"
# 1131 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "strong Trainer, here's my advice.\p"
# 1132 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Head for Rustboro City beyond this\n"
# 1133 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "town.\p"
# 1134 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "There, you should challenge\n"
# 1135 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the Gym Leader, Roxanne.\p"
# 1136 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "After her, go on to other Pokémon\n"
# 1137 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Gyms and defeat their Leaders.\p"
# 1138 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Collect Badges from them,\n"
# 1139 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "understood?\p"
# 1140 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Of course, I'm a Gym Leader, too.\n"
# 1141 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "We'll battle one day, {PLAYER}.\p"
# 1142 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But that's only after you become\n"
# 1143 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "stronger.\p"
# 1144 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Before you go, take this.$"
# 1145 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1146 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_PokevialGet:
# 1147 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Obtained a Pokévial from Dad!$"
# 1148 "data/maps/PetalburgCity_Gym/scripts.pory"
	
# 1149 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadPokevial:
# 1150 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "That's a Pokévial. Each dose\n"
# 1151 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "from it will let you heal your\l"
# 1152 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Pokémon to full while on the road.\p"
# 1153 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Any Pokémon Center will refill it\n"
# 1154 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "for you. It only holds one dose\l"
# 1155 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "for now, but I'm sure you'll find\l"
# 1156 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "ways to expand it on your journey.$"
# 1157 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1158 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadBonusDose:
# 1159 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Oh?\p"
# 1160 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You've got a look in your eye.\n"
# 1161 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Like that wasn't enough for you.\p"
# 1162 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "It seems like you might have a bit more\n"
# 1163 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "experience than I thought, so here, I'll\l"
# 1164 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "give you another dose right away.$"
# 1165 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1166 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanGoToRustboro:
# 1167 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hm? Aren't you going to the\n"
# 1168 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Pokémon Gym in Rustboro City?\p"
# 1169 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "There's no challenge for me to\n"
# 1170 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "battle a greenhorn Trainer.\p"
# 1171 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}, I want you to challenge me\n"
# 1172 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "when you become a lot stronger.\p"
# 1173 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'll battle you, {PLAYER}, when you\n"
# 1174 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "can show me four Gym Badges, okay?$"
# 1175 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1176 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanGoToDewford:
# 1177 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I see… So, you've beaten\n"
# 1178 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the Gym Leader in Rustboro City.\p"
# 1179 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But there are many more Trainers\n"
# 1180 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "who are stronger than you, {PLAYER}.\p"
# 1181 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Across the sea in Dewford Town is a\n"
# 1182 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Gym Leader named Brawly.\p"
# 1183 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You should go challenge him.$"
# 1184 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1185 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_YouHaveGottenStronger:
# 1186 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hm… {PLAYER}, you have gotten\n"
# 1187 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "stronger.\p"
# 1188 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I can tell by the number of Badges\n"
# 1189 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "that you've earned.$"
# 1190 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1191 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_PleaseComeWithMe:
# 1192 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Ah, there you are, {PLAYER}{KUN}!\p"
# 1193 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Please come with me.\n"
# 1194 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I have something I want you to have.$"
# 1195 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1196 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_LetMeBorrowPlayer:
# 1197 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Norman, you don't mind, do you?\p"
# 1198 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Let me borrow your {PLAYER}{KUN} for\n"
# 1199 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "a minute or two.$"
# 1200 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1201 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_RandallIntro:
# 1202 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The ability to attack before the\n"
# 1203 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "opponent…\p"
# 1204 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Just that alone puts me at a great\n"
# 1205 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "advantage, don't you agree?$"
# 1206 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1207 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_RandallDefeat:
# 1208 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "That was a magnificent battle!$"
# 1209 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1210 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_RandallPostBattle:
# 1211 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Go on to the next room where a new\n"
# 1212 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "challenge awaits you.\p"
# 1213 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "At the left is the Confusion Room.\p"
# 1214 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The right door leads to the Defense\n"
# 1215 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Room.$"
# 1216 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1217 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_RandallPostBadge:
# 1218 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Whomever you beat, and whomever you\n"
# 1219 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "may lose to, you never shirk from\l"
# 1220 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "training yourself and your Pokémon.\p"
# 1221 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "That's what I think being a\n"
# 1222 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Gym Leader is all about.$"
# 1223 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1224 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ParkerIntro:
# 1225 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "This is the Confusion Room.\p"
# 1226 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Let me see how well bonded you are\n"
# 1227 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "with your Pokémon!$"
# 1228 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1229 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ParkerDefeat:
# 1230 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I couldn't confuse your team enough…\n"
# 1231 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You share a strong bond together.$"
# 1232 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1233 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ParkerPostBattle:
# 1234 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The next room is the Strength Room.\n"
# 1235 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Can you withstand brute force?$"
# 1236 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1237 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ParkerPostBadge:
# 1238 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "After you beat our Leader, the\n"
# 1239 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "training has become a lot tougher.$"
# 1240 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1241 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GeorgeIntro:
# 1242 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Just when you think you're going to\n"
# 1243 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "win, your opponent restores HP…\p"
# 1244 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Can you just imagine how awful that\n"
# 1245 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "must feel?\p"
# 1246 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'll show you exactly how awful it\n"
# 1247 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "feels!$"
# 1248 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1249 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GeorgeDefeat:
# 1250 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I couldn't restore HP enough…\n"
# 1251 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "What Attack power…$"
# 1252 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1253 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GeorgePostBattle:
# 1254 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I should have expected no less from\n"
# 1255 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "our Leader's kid.\p"
# 1256 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "No, wait! A Trainer's abilities are\n"
# 1257 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "earned only through effort.\p"
# 1258 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I lost because my own efforts\n"
# 1259 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "weren't enough.\p"
# 1260 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Go on! The One-hit KO Room is next.$"
# 1261 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1262 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GeorgePostBadge:
# 1263 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'm going to keep training at Gyms.\n"
# 1264 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "One day, I'll become a Leader.$"
# 1265 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1266 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_BerkeIntro:
# 1267 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'm not going to take it easy just\n"
# 1268 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "because you're our Leader's kid.\p"
# 1269 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'll show you how horrid it is for\n"
# 1270 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "a Pokémon to take a critical hit!$"
# 1271 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1272 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_BerkeDefeat:
# 1273 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Your power…\n"
# 1274 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You're the real deal.$"
# 1275 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1276 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_BerkePostBattle:
# 1277 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Your father really is strong.\n"
# 1278 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "He's a Trainer worth my respect.\p"
# 1279 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "And, I sense the same glow coming\n"
# 1280 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "from you as your father.\p"
# 1281 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I hope that you'll stage a terrific\n"
# 1282 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "battle with your father!$"
# 1283 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1284 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_BerkePostBadge:
# 1285 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Since your dad became the Leader,\n"
# 1286 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the Trainers of Petalburg City have\l"
# 1287 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "become a lot tougher.$"
# 1288 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1289 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_MaryIntro:
# 1290 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Giggle…\n"
# 1291 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "This is the Accuracy Room.\p"
# 1292 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "It's pretty nasty when every attack\n"
# 1293 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "lands without fail.$"
# 1294 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1295 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_MaryDefeat:
# 1296 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You were a cut above me…$"
# 1297 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1298 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_MaryPostBattle:
# 1299 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "There are some even stronger\n"
# 1300 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Trainers waiting for you.\p"
# 1301 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The left is the Defense Room, and\n"
# 1302 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the right is the Recovery Room.\p"
# 1303 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Your Pokémon's Attack power will be\n"
# 1304 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "on trial either way.$"
# 1305 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1306 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_MaryPostBadge:
# 1307 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you know what we're trying to\n"
# 1308 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "achieve as Trainers?\p"
# 1309 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "We're striving to become soul mates\n"
# 1310 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "with our Pokémon.$"
# 1311 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1312 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_AlexiaIntro:
# 1313 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The higher the Defense, the more\n"
# 1314 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "reckless I can be in attack.$"
# 1315 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1316 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_AlexiaDefeat:
# 1317 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Our defenses weren't enough…$"
# 1318 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1319 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_AlexiaPostBattle:
# 1320 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I think you've taught me a valuable\n"
# 1321 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "lesson here.\p"
# 1322 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Now, go on! The left door goes to\n"
# 1323 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the Strength Room.\p"
# 1324 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The right door opens to\n"
# 1325 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the One-hit KO Room.\p"
# 1326 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Both of them have Trainers who are\n"
# 1327 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "skilled at offense.$"
# 1328 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1329 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_AlexiaPostBadge:
# 1330 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hi! Have you tried using Surf?$"
# 1331 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1332 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_JodyIntro:
# 1333 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Our Gym Leader told us to go all out\n"
# 1334 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "and beat you.\p"
# 1335 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Even if you happen to be the\n"
# 1336 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Leader's kid!$"
# 1337 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1338 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_JodyDefeat:
# 1339 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But… I went all out!$"
# 1340 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1341 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_JodyPostBattle:
# 1342 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The way you use your Pokémon…\n"
# 1343 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "It's like your father's style.\p"
# 1344 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Go on through! The Gym Leader, your\n"
# 1345 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "father, is waiting!$"
# 1346 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1347 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_JodyPostBadge:
# 1348 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Sure, it's fine to make your Pokémon\n"
# 1349 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "stronger.\p"
# 1350 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But what decides the winner?\p"
# 1351 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Why, it's the feelings Trainers have\n"
# 1352 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "for their Pokémon.$"
# 1353 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1354 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DoorAppearsLocked:
# 1355 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "This door appears to be locked\n"
# 1356 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "right now…$"
