# 1 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 2 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
.set LOCALID_ATTENDANT_SINGLES, 1
# 3 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
.set LOCALID_ATTENDANT_DOUBLES, 5
# 4 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 5 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_MapScripts::
# 6 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattleFactoryLobby_OnFrame
# 7 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattleFactoryLobby_OnWarp
# 8 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.byte 0
# 9 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 10 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_OnWarp:
# 11 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, BattleFrontier_BattleFactoryLobby_EventScript_TurnPlayerNorth
# 12 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.2byte 0
# 13 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 14 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_TurnPlayerNorth::
# 15 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	setvar VAR_TEMP_1, 1
# 16 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 17 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	end
# 18 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 19 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_OnFrame:
# 20 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, 0, BattleFrontier_BattleFactoryLobby_EventScript_GetChallengeStatus
# 21 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING, BattleFrontier_BattleFactoryLobby_EventScript_QuitWithoutSaving
# 22 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_PAUSED, BattleFrontier_BattleFactoryLobby_EventScript_ResumeChallenge
# 23 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_WON, BattleFrontier_BattleFactoryLobby_EventScript_WonChallenge
# 24 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_LOST, BattleFrontier_BattleFactoryLobby_EventScript_LostChallenge
# 25 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.2byte 0
# 26 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 27 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_GetChallengeStatus::
# 28 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	frontier_getstatus
# 29 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	end
# 30 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 31 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_QuitWithoutSaving::
# 32 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	lockall
# 33 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_DidntSaveBeforeQuitting, MSGBOX_DEFAULT
# 34 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	closemessage
# 35 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	factory_setswapped
# 36 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	factory_set FACTORY_DATA_WIN_STREAK_SWAPS, 0
# 37 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	factory_set FACTORY_DATA_WIN_STREAK, 0
# 38 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	factory_set FACTORY_DATA_WIN_STREAK_ACTIVE, FALSE
# 39 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 40 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 41 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	releaseall
# 42 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	end
# 43 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 44 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_WonChallenge::
# 45 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	lockall
# 46 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	frontier_isbrain
# 47 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_BattleFactoryLobby_EventScript_DefeatedFactoryHead
# 48 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_CongratsSevenWins, MSGBOX_DEFAULT
# 49 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	waitmessage
# 50 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_GiveBattlePoints
# 51 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 52 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_DefeatedFactoryHead::
# 53 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_CongratsForDefeatingHead, MSGBOX_DEFAULT
# 54 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	waitmessage
# 55 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_GiveBattlePoints::
# 56 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_AwardBattlePoints, MSGBOX_DEFAULT
# 57 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	frontier_givepoints
# 58 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	setflag FLAG_EMIB_DEMO_1
# 59 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_Text_ObtainedXBattlePoints, MSGBOX_GETPOINTS
# 60 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	message BattleFrontier_BattleFactoryLobby_Text_ExchangeMonsAndSave
# 61 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	waitmessage
# 62 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	frontier_checkairshow
# 63 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	special LoadPlayerParty
# 64 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	callnative UpdateFollowingPokemon
# 65 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	factory_save 0
# 66 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	playse SE_SAVE
# 67 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	waitse
# 68 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_AskRecordBattle
# 69 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	end
# 70 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 71 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_LostChallenge::
# 72 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	lockall
# 73 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	message BattleFrontier_BattleFactoryLobby_Text_ReturnMonsSaveResults
# 74 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	waitmessage
# 75 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	frontier_checkairshow
# 76 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	special LoadPlayerParty
# 77 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	callnative UpdateFollowingPokemon
# 78 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	factory_set FACTORY_DATA_WIN_STREAK_ACTIVE, FALSE
# 79 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	factory_save 0
# 80 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	playse SE_SAVE
# 81 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	waitse
# 82 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 83 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_AskRecordBattle::
# 84 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	call BattleFrontier_EventScript_GetCantRecordBattle
# 85 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_BattleFactoryLobby_EventScript_EndRecordBattle
# 86 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	message BattleFrontier_BattleFactoryLobby_Text_RecordLastMatch
# 87 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	waitmessage
# 88 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	multichoicedefault 20, 8, MULTI_YESNO, 1, FALSE
# 89 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	switch VAR_RESULT
# 90 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	case 1, BattleFrontier_BattleFactoryLobby_EventScript_EndRecordBattle
# 91 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	case 0, BattleFrontier_BattleFactoryLobby_EventScript_RecordBattle
# 92 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleFactoryLobby_EventScript_EndRecordBattle
# 93 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 94 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_RecordBattle::
# 95 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	call BattleFrontier_EventScript_SaveBattle
# 96 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_EndRecordBattle::
# 97 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_LookForwardToNextVisit, MSGBOX_DEFAULT
# 98 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	closemessage
# 99 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 100 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	releaseall
# 101 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	end
# 102 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 103 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_ResumeChallenge::
# 104 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	lockall
# 105 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	message BattleFrontier_BattleFactoryLobby_Text_WaitingForYouToResume
# 106 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	waitmessage
# 107 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	factory_save CHALLENGE_STATUS_SAVING
# 108 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	playse SE_SAVE
# 109 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	waitse
# 110 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 111 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 112 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	setvar VAR_0x8006, 2
# 113 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_EnterChallenge
# 114 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 115 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_SinglesAttendant::
# 116 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	lock
# 117 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	faceplayer
# 118 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	setvar VAR_FRONTIER_FACILITY, FRONTIER_FACILITY_FACTORY
# 119 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
# 120 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_Attendant
# 121 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	end
# 122 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 123 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_DoublesAttendant::
# 124 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	setvar VAR_FRONTIER_FACILITY, FRONTIER_FACILITY_FACTORY
# 125 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES
# 126 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_Attendant
# 127 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	end
# 128 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 129 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_Attendant::
# 130 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	special SavePlayerParty
# 131 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES, BattleFrontier_BattleFactoryLobby_EventScript_WelcomeForSingleBattle
# 132 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES, BattleFrontier_BattleFactoryLobby_EventScript_WelcomeForDoubleBattle
# 133 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_AskTakeChallenge::
# 134 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES, BattleFrontier_BattleFactoryLobby_EventScript_TakeSinglesChallenge
# 135 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES, BattleFrontier_BattleFactoryLobby_EventScript_TakeDoublesChallenge
# 136 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	waitmessage
# 137 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	multichoice 17, 6, MULTI_CHALLENGEINFO, FALSE
# 138 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	switch VAR_RESULT
# 139 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	case 0, BattleFrontier_BattleFactoryLobby_EventScript_TryEnterChallenge
# 140 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	case 1, BattleFrontier_BattleFactoryLobby_EventScript_ExplainChallenge
# 141 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	case 2, BattleFrontier_BattleFactoryLobby_EventScript_CancelChallenge
# 142 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleFactoryLobby_EventScript_CancelChallenge
# 143 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 144 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_TryEnterChallenge::
# 145 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	message BattleFrontier_BattleFactoryLobby_Text_WhichLevelMode
# 146 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	waitmessage
# 147 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	multichoice 17, 6, MULTI_LEVEL_MODE, FALSE
# 148 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	switch VAR_RESULT
# 149 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	case FRONTIER_LVL_TENT, BattleFrontier_BattleFactoryLobby_EventScript_CancelChallenge
# 150 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleFactoryLobby_EventScript_CancelChallenge
# 151 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, VAR_RESULT
# 152 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_OkayToSaveBeforeChallenge, MSGBOX_YESNO
# 153 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	switch VAR_RESULT
# 154 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	case NO, BattleFrontier_BattleFactoryLobby_EventScript_LoadPartyAndCancelChallenge
# 155 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	case YES, BattleFrontier_BattleFactoryLobby_EventScript_SaveBeforeChallenge
# 156 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleFactoryLobby_EventScript_LoadPartyAndCancelChallenge
# 157 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 158 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_SaveBeforeChallenge::
# 159 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 160 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	factory_init
# 161 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING
# 162 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	factory_set FACTORY_DATA_WIN_STREAK_ACTIVE, TRUE
# 163 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 164 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	closemessage
# 165 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	delay 2
# 166 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	call Common_EventScript_SaveGame
# 167 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 168 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattleFactoryLobby_EventScript_CancelChallengeSaveFailed
# 169 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	setvar VAR_0x8006, 0
# 170 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_EnterChallenge::
# 171 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	special SavePlayerParty
# 172 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_StepThisWay, MSGBOX_DEFAULT
# 173 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	closemessage
# 174 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES, BattleFrontier_BattleFactoryLobby_EventScript_TalkedToSinglesAttendant
# 175 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES, BattleFrontier_BattleFactoryLobby_EventScript_TalkedToDoublesAttendant
# 176 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	applymovement VAR_LAST_TALKED, BattleFrontier_BattleFactoryLobby_Movement_AttendantEnterDoor
# 177 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp4
# 178 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	waitmovement 0
# 179 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_FACTORY_PRE_BATTLE_ROOM, 8, 13
# 180 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 181 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	waitstate
# 182 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	end
# 183 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 184 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_TalkedToSinglesAttendant::
# 185 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_ATTENDANT_SINGLES
# 186 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	return
# 187 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 188 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_TalkedToDoublesAttendant::
# 189 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_ATTENDANT_DOUBLES
# 190 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	return
# 191 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 192 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_ExplainChallenge::
# 193 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES, BattleFrontier_BattleFactoryLobby_EventScript_ExplainSinglesChallenge
# 194 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES, BattleFrontier_BattleFactoryLobby_EventScript_ExplainDoublesChallenge
# 195 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_AskTakeChallenge
# 196 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 197 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_CancelChallengeSaveFailed::
# 198 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 199 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_CancelChallenge
# 200 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 201 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_LoadPartyAndCancelChallenge::
# 202 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	special LoadPlayerParty
# 203 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	callnative UpdateFollowingPokemon
# 204 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_CancelChallenge::
# 205 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_LookForwardToNextVisit, MSGBOX_DEFAULT
# 206 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	release
# 207 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	end
# 208 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 209 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Movement_AttendantEnterDoor:
# 210 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	walk_up
# 211 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	walk_up
# 212 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	walk_up
# 213 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	set_invisible
# 214 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	step_end
# 215 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 216 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_WelcomeForSingleBattle::
# 217 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_WelcomeForSingleBattle, MSGBOX_DEFAULT
# 218 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	return
# 219 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 220 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_WelcomeForDoubleBattle::
# 221 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_WelcomeForDoubleBattle, MSGBOX_DEFAULT
# 222 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	return
# 223 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 224 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_TakeSinglesChallenge::
# 225 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	message BattleFrontier_BattleFactoryLobby_Text_TakeSinglesChallenge
# 226 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	return
# 227 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 228 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_TakeDoublesChallenge::
# 229 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	message BattleFrontier_BattleFactoryLobby_Text_TakeDoublesChallenge
# 230 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	return
# 231 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 232 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_ExplainSinglesChallenge::
# 233 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_ExplainSinglesChallenge, MSGBOX_DEFAULT
# 234 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	return
# 235 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 236 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_ExplainDoublesChallenge::
# 237 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_ExplainDoublesChallenge, MSGBOX_DEFAULT
# 238 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	return
# 239 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 240 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_ShowSinglesResults::
# 241 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	lockall
# 242 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	frontier_results FRONTIER_FACILITY_FACTORY, FRONTIER_MODE_SINGLES
# 243 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	waitbuttonpress
# 244 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	special RemoveRecordsWindow
# 245 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	releaseall
# 246 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	end
# 247 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 248 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_ShowDoublesResults::
# 249 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	lockall
# 250 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	frontier_results FRONTIER_FACILITY_FACTORY, FRONTIER_MODE_DOUBLES
# 251 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	waitbuttonpress
# 252 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	special RemoveRecordsWindow
# 253 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	releaseall
# 254 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	end
# 255 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 256 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_Woman::
# 257 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_NeedKnowledgeOfMonsMoves, MSGBOX_NPC
# 258 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	end
# 259 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 260 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_Camper::
# 261 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_SwappedForWeakMon, MSGBOX_NPC
# 262 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	end
# 263 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 264 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_Picnicker::
# 265 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	lock
# 266 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_NeedToCheckOpponentsMons, MSGBOX_DEFAULT
# 267 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	release
# 268 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	end
# 269 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 270 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_FatMan::
# 271 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_CantFigureOutStaffHints, MSGBOX_NPC
# 272 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	end
# 273 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 274 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_RulesBoard::
# 275 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	lockall
# 276 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_RulesAreListed, MSGBOX_DEFAULT
# 277 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard
# 278 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	end
# 279 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 280 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard::
# 281 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	message BattleFrontier_BattleFactoryLobby_Text_ReadWhichHeading
# 282 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	waitmessage
# 283 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	multichoice 17, 0, MULTI_BATTLE_FACTORY_RULES, FALSE
# 284 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	switch VAR_RESULT
# 285 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	case 0, BattleFrontier_BattleFactoryLobby_EventScript_RulesBasics
# 286 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	case 1, BattleFrontier_BattleFactoryLobby_EventScript_RulesSwapPartner
# 287 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	case 2, BattleFrontier_BattleFactoryLobby_EventScript_RulesSwapNumber
# 288 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	case 3, BattleFrontier_BattleFactoryLobby_EventScript_RulesSwapNotes
# 289 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	case 4, BattleFrontier_BattleFactoryLobby_EventScript_RulesOpenLv
# 290 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	case 5, BattleFrontier_BattleFactoryLobby_EventScript_ExitRules
# 291 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleFactoryLobby_EventScript_ExitRules
# 292 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	end
# 293 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 294 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_RulesBasics::
# 295 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_ExplainBasicRules, MSGBOX_DEFAULT
# 296 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard
# 297 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	end
# 298 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 299 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_RulesSwapPartner::
# 300 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_ExplainSwapPartnerRules, MSGBOX_DEFAULT
# 301 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard
# 302 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	end
# 303 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 304 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_RulesSwapNumber::
# 305 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_ExplainSwapNumberRules, MSGBOX_DEFAULT
# 306 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard
# 307 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	end
# 308 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 309 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_RulesSwapNotes::
# 310 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_ExplainSwapNotesRules, MSGBOX_DEFAULT
# 311 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard
# 312 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	end
# 313 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 314 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_RulesOpenLv::
# 315 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_ExplainOpenLvRules, MSGBOX_DEFAULT
# 316 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard
# 317 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	end
# 318 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 319 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_ExitRules::
# 320 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	releaseall
# 321 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	end
# 322 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 323 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_WelcomeForSingleBattle:
# 324 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Where the intelligence of Trainers\n"
# 325 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "is put to the test!\p"
# 326 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Welcome to the Battle Factory!\p"
# 327 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "I am your guide to the Battle Swap\n"
# 328 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Single Tournament.$"
# 329 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 330 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_TakeSinglesChallenge:
# 331 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Would you like to take the Battle\n"
# 332 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Swap Single challenge?$"
# 333 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 334 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_ExplainSinglesChallenge:
# 335 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "The Battle Swap Single Tournament\n"
# 336 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "is a Single Battle competition using\l"
# 337 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "only rental Pokémon.\p"
# 338 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "First, you will be loaned three\n"
# 339 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Pokémon specifically for this event.\p"
# 340 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Using the supplied rental Pokémon,\n"
# 341 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "you must conduct a Single Battle.\p"
# 342 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "If you win, you are permitted to trade\n"
# 343 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "one of your rental Pokémon.\p"
# 344 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Repeat this cycle of battling and\n"
# 345 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "trading--if you win seven times in\l"
# 346 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "a row, you will earn Battle Points.\p"
# 347 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "If you want to interrupt your\n"
# 348 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "challenge, please save the game.\p"
# 349 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "If you don't save, you will be\n"
# 350 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "disqualified from your challenge.$"
# 351 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 352 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_LookForwardToNextVisit:
# 353 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "We look forward to your next visit.$"
# 354 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 355 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_WhichLevelMode:
# 356 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Which level do you wish to challenge?\n"
# 357 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Level 50 or Open Level?$"
# 358 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 359 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_OkayToSaveBeforeChallenge:
# 360 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Before you begin your challenge,\n"
# 361 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "I need to save the game. Is that okay?$"
# 362 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 363 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_StepThisWay:
# 364 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Please step this way.$"
# 365 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 366 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_ReturnMonsSaveResults:
# 367 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Thank you for participating!\p"
# 368 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "I will return your Pokémon in exchange\n"
# 369 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "for our rental Pokémon.\p"
# 370 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "I must also save the event results.\n"
# 371 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Please wait.$"
# 372 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 373 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_CongratsSevenWins:
# 374 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Congratulations! You've won seven\n"
# 375 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "straight Battle Swap matches!$"
# 376 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 377 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_WaitingForYouToResume:
# 378 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "We've been waiting for you!\p"
# 379 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Before we resume your challenge,\n"
# 380 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "I must save the game.$"
# 381 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 382 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_DidntSaveBeforeQuitting:
# 383 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "I'm sorry to say this, but you didn't\n"
# 384 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "save before you quit playing last time.\p"
# 385 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "As a result, you have been disqualified\n"
# 386 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "from your challenge.$"
# 387 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 388 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_WelcomeForDoubleBattle:
# 389 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Where the intelligence of Trainers\n"
# 390 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "is put to the test!\p"
# 391 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Welcome to the Battle Factory!\p"
# 392 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "I am your guide to the Battle Swap\n"
# 393 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Double Tournament.$"
# 394 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 395 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_TakeDoublesChallenge:
# 396 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Would you like to take the Battle\n"
# 397 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Swap Double challenge?$"
# 398 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 399 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_ExplainDoublesChallenge:
# 400 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "The Battle Swap Double Tournament\n"
# 401 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "is a Double Battle competition using\l"
# 402 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "only rental Pokémon.\p"
# 403 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "First, you will be loaned three\n"
# 404 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Pokémon specifically for this event.\p"
# 405 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Using the supplied rental Pokémon,\n"
# 406 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "you must conduct a Double Battle.\p"
# 407 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "If you win, you are permitted to trade\n"
# 408 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "one of your rental Pokémon.\p"
# 409 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Repeat this cycle of battling and\n"
# 410 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "trading--if you win seven times in\l"
# 411 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "a row, you will earn Battle Points.\p"
# 412 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "If you want to interrupt your\n"
# 413 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "challenge, please save the game.\p"
# 414 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "If you don't save before interrupting,\n"
# 415 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "you will be disqualified.$"
# 416 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 417 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_CongratsForDefeatingHead:
# 418 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Congratulations for defeating\n"
# 419 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "the Factory Head and winning\l"
# 420 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "seven matches in a row!$"
# 421 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 422 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_AwardBattlePoints:
# 423 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "In recognition of your wealth of\n"
# 424 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "knowledge and keen intelligence,\l"
# 425 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "we award you these Battle Point(s).$"
# 426 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 427 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_ExchangeMonsAndSave:
# 428 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Let me exchange your Pokémon\n"
# 429 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "for our rental Pokémon.\p"
# 430 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "I need to save the battle data,\n"
# 431 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "so please wait.$"
# 432 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 433 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_RecordLastMatch:
# 434 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Would you like to record your last\n"
# 435 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Battle Factory match on your\l"
# 436 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Frontier Pass?$"
# 437 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 438 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_NeedKnowledgeOfMonsMoves:
# 439 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Hi!\n"
# 440 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "You, there!\p"
# 441 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Are you thinking that the events here\n"
# 442 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "are easy since you don't need to have\l"
# 443 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "a raised team of Pokémon?\p"
# 444 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "I wouldn't be too sure about winning\n"
# 445 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "that easily.\p"
# 446 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "If you don't have thorough knowledge\n"
# 447 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "about Pokémon and their moves,\l"
# 448 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "it will be tough to keep winning.$"
# 449 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 450 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_SwappedForWeakMon:
# 451 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "I swapped for a weak Pokémon…\n"
# 452 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "I thought it was a good kind to have…\p"
# 453 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "They wiped the floor with us…$"
# 454 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 455 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_NeedToCheckOpponentsMons:
# 456 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Things haven't been going my way\n"
# 457 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "at all.\p"
# 458 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "You need to check your opponent's\n"
# 459 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Pokémon during battle to see if\l"
# 460 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "they're any good.$"
# 461 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 462 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_CantFigureOutStaffHints:
# 463 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "You know how the staff here give you\n"
# 464 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "a few hints about your next opponent?\p"
# 465 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Well, I'm a full-grown man, but I have\n"
# 466 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "trouble figuring out their hints.$"
# 467 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 468 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_RulesAreListed:
# 469 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "The Battle Swap rules are listed.$"
# 470 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 471 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_ReadWhichHeading:
# 472 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Which heading do you want to read?$"
# 473 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 474 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_ExplainBasicRules:
# 475 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "In a Battle Swap event, you may use\n"
# 476 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "only four Pokémon.\p"
# 477 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Whether you are renting or swapping,\n"
# 478 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "your team may not have two or more\l"
# 479 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "of the same Pokémon.$"
# 480 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 481 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_ExplainSwapPartnerRules:
# 482 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "You may swap Pokémon only with\n"
# 483 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "the Trainer you have just defeated.\p"
# 484 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "You may swap for only those Pokémon\n"
# 485 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "used by the beaten Trainer.$"
# 486 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 487 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_ExplainSwapNumberRules:
# 488 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "After every battle you win, you may\n"
# 489 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "swap for one of your defeated\l"
# 490 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "opponent's Pokémon.\p"
# 491 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "You will not be able to swap Pokémon\n"
# 492 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "with the seventh Trainer in the event.$"
# 493 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 494 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_ExplainSwapNotesRules:
# 495 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "There are two key points to be aware\n"
# 496 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "of when swapping Pokémon.\p"
# 497 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "First, when swapping, you can't check\n"
# 498 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "the stats of the Pokémon you are\l"
# 499 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "about to receive.\p"
# 500 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Second, the Pokémon on your team\n"
# 501 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "are lined up in sequence, depending on\l"
# 502 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "the order in which you rented them.\p"
# 503 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "This sequence remains unchanged\n"
# 504 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "even when swaps are made.$"
# 505 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 506 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_ExplainOpenLvRules:
# 507 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "In the Open Level, the rental Pokémon\n"
# 508 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "and the opposing Trainers' Pokémon\l"
# 509 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "are all Level 100.$"
# 510 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 511 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_Balls::
# 512 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	lockall
# 513 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_Balls, MSGBOX_DEFAULT
# 514 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	closemessage
# 515 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	releaseall
# 516 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	end
# 517 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 518 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_Balls:
# 519 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Pokéballs are laid out with Rental\n"
# 520 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Pokémon inside.$"

BattleFrontier_BattleFactoryLobby_EventScript_Vending::
# 524 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_EventScript_Vending_Text_0
# 525 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_EventScript_Vending_Text_1
# 526 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	special ShowBattlePointsWindow
# 527 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	dynmultichoice 0, 5, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, BattleFrontier_BattleFactoryLobby_EventScript_Vending_Text_2, BattleFrontier_BattleFactoryLobby_EventScript_Vending_Text_3, BattleFrontier_BattleFactoryLobby_EventScript_Vending_Text_4
# 528 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	switch VAR_RESULT
# 529 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	case 0, BattleFrontier_BattleFactoryLobby_EventScript_Vending_3
# 538 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	case 1, BattleFrontier_BattleFactoryLobby_EventScript_Vending_4
# 547 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	case 2, BattleFrontier_BattleFactoryLobby_EventScript_Vending_5
# 557 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	closemessage
# 558 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	special CloseBattlePointsWindow
	end

BattleFrontier_BattleFactoryLobby_EventScript_Vending_1:
# 561 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	special TakeFrontierBattlePoints
# 562 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	special UpdateBattlePointsWindow
# 563 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_EventScript_Vending_Text_5
# 564 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	closemessage
# 565 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	special CloseBattlePointsWindow
	return

BattleFrontier_BattleFactoryLobby_EventScript_Vending_3:
# 530 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	specialvar VAR_TEMP_1, GetFrontierBattlePoints
# 531 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_ge BattleFrontier_BattleFactoryLobby_EventScript_Vending_7
# 536 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_NotEnoughBP
	goto BattleFrontier_BattleFactoryLobby_EventScript_Vending_1

BattleFrontier_BattleFactoryLobby_EventScript_Vending_4:
# 539 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	specialvar VAR_TEMP_1, GetFrontierBattlePoints
# 540 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	compare VAR_TEMP_1, 3
	goto_if_ge BattleFrontier_BattleFactoryLobby_EventScript_Vending_10
# 545 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_NotEnoughBP
	goto BattleFrontier_BattleFactoryLobby_EventScript_Vending_1

BattleFrontier_BattleFactoryLobby_EventScript_Vending_5:
# 548 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	specialvar VAR_TEMP_1, GetFrontierBattlePoints
# 549 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	compare VAR_TEMP_1, 5
	goto_if_ge BattleFrontier_BattleFactoryLobby_EventScript_Vending_13
# 554 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_NotEnoughBP
	goto BattleFrontier_BattleFactoryLobby_EventScript_Vending_1

BattleFrontier_BattleFactoryLobby_EventScript_Vending_7:
# 532 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	special GiveRandomDemoSpeciesCommon
# 533 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	setvar VAR_0x8004, 2
	goto BattleFrontier_BattleFactoryLobby_EventScript_Vending_1

BattleFrontier_BattleFactoryLobby_EventScript_Vending_10:
# 541 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	special GiveRandomDemoSpeciesRare
# 542 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	setvar VAR_0x8004, 3
	goto BattleFrontier_BattleFactoryLobby_EventScript_Vending_1

BattleFrontier_BattleFactoryLobby_EventScript_Vending_13:
# 550 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	special GiveRandomDemoSpeciesLegendary
# 551 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	setvar VAR_0x8004, 5
	goto BattleFrontier_BattleFactoryLobby_EventScript_Vending_1


BattleFrontier_BattleFactoryLobby_EventScript_NotEnoughBP::
# 569 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_EventScript_NotEnoughBP_Text_0
# 570 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	closemessage
# 571 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	special CloseBattlePointsWindow
	return


BattleFrontier_BattleFactoryLobby_EventScript_Vending_Text_0:
# 524 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "It's a vending machine for Pokémon!$"

BattleFrontier_BattleFactoryLobby_EventScript_Vending_Text_1:
# 525 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Would you like to spend BP to obtain a\n"
	.string "Pokémon?$"

BattleFrontier_BattleFactoryLobby_EventScript_Vending_Text_2:
# 527 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Common Species{CLEAR_TO 0x66}2BP$"

BattleFrontier_BattleFactoryLobby_EventScript_Vending_Text_3:
# 527 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Rare Species{CLEAR_TO 0x66}3BP$"

BattleFrontier_BattleFactoryLobby_EventScript_Vending_Text_4:
# 527 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Legendary Species{CLEAR_TO 0x66}5BP$"

BattleFrontier_BattleFactoryLobby_EventScript_Vending_Text_5:
# 563 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Got {STR_VAR_1}!$"

BattleFrontier_BattleFactoryLobby_EventScript_NotEnoughBP_Text_0:
# 569 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "You don't have enough BP to make that\n"
	.string "purchase.$"
