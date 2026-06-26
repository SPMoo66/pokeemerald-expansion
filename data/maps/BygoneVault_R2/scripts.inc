BygoneVault_R2_MapScripts::
# 2 "data/maps/BygoneVault_R2/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_LOAD
# 72 "data/maps/BygoneVault_R2/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 92 "data/maps/BygoneVault_R2/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 110 "data/maps/BygoneVault_R2/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_LOAD:
# 3 "data/maps/BygoneVault_R2/scripts.pory"
	goto_if_set FLAG_EXP_1_BYGONE_VAULT_RIGHT_SWITCH, BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_LOAD_2
BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 56 "data/maps/BygoneVault_R2/scripts.pory"
	goto_if_set FLAG_EXP_1_BYGONE_VAULT_RIGHT_PUZZLE_COMPLETE, BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_LOAD_5
BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_LOAD_4:
# 68 "data/maps/BygoneVault_R2/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 41
	goto_if_eq BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_LOAD_7
	return

BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 5 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 2, 2, 0x06B, FALSE
# 6 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 3, 3, 0x06B, FALSE
# 7 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 10, 3, 0x06B, FALSE
# 8 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 12, 3, 0x06B, FALSE
# 9 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 7, 4, 0x06B, FALSE
# 10 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 5, 5, 0x06B, FALSE
# 11 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 14, 5, 0x06B, FALSE
# 12 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 4, 6, 0x06B, FALSE
# 13 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 2, 7, 0x06B, FALSE
# 14 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 9, 7, 0x06B, FALSE
# 15 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 6, 8, 0x06B, FALSE
# 16 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 13, 8, 0x06B, FALSE
# 17 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 3, 9, 0x06B, FALSE
# 18 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 7, 10, 0x06B, FALSE
# 21 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 4, 2, 0x06B, FALSE
# 22 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 8, 2, 0x06B, FALSE
# 23 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 11, 2, 0x06B, FALSE
# 24 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 2, 3, 0x06B, FALSE
# 25 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 10, 4, 0x06B, FALSE
# 26 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 14, 4, 0x06B, FALSE
# 27 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 8, 5, 0x06B, FALSE
# 28 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 12, 5, 0x06B, FALSE
# 29 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 1, 6, 0x06B, FALSE
# 30 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 4, 7, 0x06B, FALSE
# 31 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 13, 7, 0x06B, FALSE
# 32 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 10, 8, 0x06B, FALSE
# 33 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 4, 9, 0x06B, FALSE
# 34 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 12, 9, 0x06B, FALSE
# 35 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 8, 10, 0x06B, FALSE
# 38 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 14, 3, 0x06B, FALSE
# 39 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 5, 4, 0x06B, FALSE
# 40 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 3, 5, 0x06B, FALSE
# 41 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 6, 7, 0x06B, FALSE
# 42 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 11, 7, 0x06B, FALSE
# 45 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 13, 2, 0x241, TRUE
# 46 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 1, 3, 0x241, TRUE
# 47 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 6, 6, 0x241, TRUE
# 49 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 2, 8, 0x001, FALSE
# 50 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 2, 9, 0x001, FALSE
# 51 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 2, 10, 0x001, FALSE
# 52 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 3, 10, 0x080, TRUE
# 53 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 4, 10, 0x081, TRUE
# 54 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 5, 10, 0x082, TRUE
	goto BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_LOAD_1

BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_LOAD_5:
# 58 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 5, 13, 0x241, TRUE
# 61 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 6, 11, 0x01B, TRUE
# 62 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 6, 12, 0x03A, TRUE
# 63 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 6, 13, 0x001, FALSE
# 64 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 6, 14, 0x001, FALSE
# 65 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 6, 15, 0x001, FALSE
# 66 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 6, 16, 0x01B, TRUE
	goto BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_LOAD_4

BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_LOAD_7:
# 69 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 11, 7, 0x073, FALSE
	return

BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 73 "data/maps/BygoneVault_R2/scripts.pory"
	setflag FLAG_TEMP_8
# 74 "data/maps/BygoneVault_R2/scripts.pory"
	setflag FLAG_TEMP_9
# 75 "data/maps/BygoneVault_R2/scripts.pory"
	goto_if_set FLAG_EXP_1_BYGONE_VAULT_RIGHT_SWITCH, BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 78 "data/maps/BygoneVault_R2/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 42
	goto_if_ne BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 81 "data/maps/BygoneVault_R2/scripts.pory"
	goto_if_set FLAG_PLAY_AS_FIRST_MON_IN_PARTY, BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 85 "data/maps/BygoneVault_R2/scripts.pory"
	goto_if_unset FLAG_EXP_1_BYGONE_VAULT_RIGHT_PUZZLE_COMPLETE, BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_TRANSITION_12
BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 88 "data/maps/BygoneVault_R2/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 41
	goto_if_eq BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_TRANSITION_15
	return

BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 76 "data/maps/BygoneVault_R2/scripts.pory"
	setflag FLAG_TEMP_1
	goto BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 79 "data/maps/BygoneVault_R2/scripts.pory"
	setflag FLAG_TEMP_5
	goto BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 82 "data/maps/BygoneVault_R2/scripts.pory"
	clearflag FLAG_TEMP_8
# 83 "data/maps/BygoneVault_R2/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_UP
	goto BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_TRANSITION_7

BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_TRANSITION_11:
# 86 "data/maps/BygoneVault_R2/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_RIGHT
	goto BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_TRANSITION_10

BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_TRANSITION_12:
# 85 "data/maps/BygoneVault_R2/scripts.pory"
	goto_if_set FLAG_EXP_1_BYGONE_VAULT_RIGHT_SWITCH, BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_TRANSITION_11
	goto BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_TRANSITION_10

BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_TRANSITION_15:
# 89 "data/maps/BygoneVault_R2/scripts.pory"
	clearflag FLAG_TEMP_9
	return

BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 93 "data/maps/BygoneVault_R2/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0
	.2byte 0

BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0:
# 94 "data/maps/BygoneVault_R2/scripts.pory"
	setvar VAR_TEMP_0, 1
# 95 "data/maps/BygoneVault_R2/scripts.pory"
	checkplayergender
# 96 "data/maps/BygoneVault_R2/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0_2
BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0_1:
# 99 "data/maps/BygoneVault_R2/scripts.pory"
	goto_if_set FLAG_PLAY_AS_FIRST_MON_IN_PARTY, BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0_5
BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0_4:
# 102 "data/maps/BygoneVault_R2/scripts.pory"
	goto_if_unset FLAG_EXP_1_BYGONE_VAULT_RIGHT_PUZZLE_COMPLETE, BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0_8
	return

BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0_2:
# 97 "data/maps/BygoneVault_R2/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_MAY_NORMAL
	goto BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0_1

BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0_5:
# 100 "data/maps/BygoneVault_R2/scripts.pory"
	turnobject 2, DIR_NORTH
	goto BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0_4

BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0_7:
# 103 "data/maps/BygoneVault_R2/scripts.pory"
	callnative SaveFirstLiveMonToVar
# 104 "data/maps/BygoneVault_R2/scripts.pory"
	copyvar VAR_OBJ_GFX_ID_1, VAR_RESULT
# 105 "data/maps/BygoneVault_R2/scripts.pory"
	turnobject 2, DIR_EAST
# 106 "data/maps/BygoneVault_R2/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_WEST
	return

BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0_8:
# 102 "data/maps/BygoneVault_R2/scripts.pory"
	goto_if_set FLAG_EXP_1_BYGONE_VAULT_RIGHT_SWITCH, BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0_7
	return

BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 111 "data/maps/BygoneVault_R2/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 112 "data/maps/BygoneVault_R2/scripts.pory"
	setvar VAR_TEMP_1, 1
# 113 "data/maps/BygoneVault_R2/scripts.pory"
	goto_if_unset FLAG_EXP_1_BYGONE_VAULT_RIGHT_PUZZLE_COMPLETE, BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_2
	return

BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_1:
# 114 "data/maps/BygoneVault_R2/scripts.pory"
	goto BygoneVault_R2_PuzzlePostScript
	return

BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_2:
# 113 "data/maps/BygoneVault_R2/scripts.pory"
	goto_if_set FLAG_EXP_1_BYGONE_VAULT_RIGHT_SWITCH, BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_1
	return


BygoneVault_R2_Redd::
# 122 "data/maps/BygoneVault_R2/scripts.pory"
	faceplayer
# 123 "data/maps/BygoneVault_R2/scripts.pory"
	goto_if_set FLAG_TEMP_6, BygoneVault_R2_Redd_2
BygoneVault_R2_Redd_1:
# 126 "data/maps/BygoneVault_R2/scripts.pory"
	goto_if_set FLAG_EXP_1_BYGONE_VAULT_RIGHT_PUZZLE_COMPLETE, BygoneVault_R2_Redd_5
# 131 "data/maps/BygoneVault_R2/scripts.pory"
	speakername CommonText_Redd
# 132 "data/maps/BygoneVault_R2/scripts.pory"
	msgbox BygoneVault_R2_Redd_Text_1, MSGBOX_DEFAULT
# 138 "data/maps/BygoneVault_R2/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceUp
# 139 "data/maps/BygoneVault_R2/scripts.pory"
	waitmovement 0
# 140 "data/maps/BygoneVault_R2/scripts.pory"
	msgbox BygoneVault_R2_Redd_Text_2, MSGBOX_DEFAULT
# 145 "data/maps/BygoneVault_R2/scripts.pory"
	goto_if_set FLAG_TEMP_7, BygoneVault_R2_Redd_8
# 150 "data/maps/BygoneVault_R2/scripts.pory"
	faceplayer
BygoneVault_R2_Redd_7:
# 152 "data/maps/BygoneVault_R2/scripts.pory"
	setflag FLAG_TEMP_6
# 153 "data/maps/BygoneVault_R2/scripts.pory"
	goto BygoneVault_R2_Redd2
	return

BygoneVault_R2_Redd_2:
# 124 "data/maps/BygoneVault_R2/scripts.pory"
	goto BygoneVault_R2_Redd2
	goto BygoneVault_R2_Redd_1

BygoneVault_R2_Redd_5:
# 127 "data/maps/BygoneVault_R2/scripts.pory"
	speakername CommonText_Redd
# 128 "data/maps/BygoneVault_R2/scripts.pory"
	msgbox BygoneVault_R2_Redd_Text_0, MSGBOX_AUTOCLOSE
	end

BygoneVault_R2_Redd_8:
# 146 "data/maps/BygoneVault_R2/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceRight
# 147 "data/maps/BygoneVault_R2/scripts.pory"
	clearflag FLAG_TEMP_7
	goto BygoneVault_R2_Redd_7


BygoneVault_R2_Redd2::
# 157 "data/maps/BygoneVault_R2/scripts.pory"
	speakername CommonText_Redd
# 158 "data/maps/BygoneVault_R2/scripts.pory"
	msgbox BygoneVault_R2_Redd2_Text_0, MSGBOX_YESNO
# 159 "data/maps/BygoneVault_R2/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne BygoneVault_R2_Redd2_2
BygoneVault_R2_Redd2_1:
# 168 "data/maps/BygoneVault_R2/scripts.pory"
	closemessage
	return

BygoneVault_R2_Redd2_2:
# 160 "data/maps/BygoneVault_R2/scripts.pory"
	msgbox BygoneVault_R2_Redd2_Text_1, MSGBOX_DEFAULT
# 161 "data/maps/BygoneVault_R2/scripts.pory"
	closemessage
# 162 "data/maps/BygoneVault_R2/scripts.pory"
	setflag FLAG_BLOCK_PLAYER_ACTIONS
# 163 "data/maps/BygoneVault_R2/scripts.pory"
	setflag FLAG_PLAY_AS_FIRST_MON_IN_PARTY
# 164 "data/maps/BygoneVault_R2/scripts.pory"
	setflag FLAG_SEMI_PERM_HIDE_FOLLOWER
# 165 "data/maps/BygoneVault_R2/scripts.pory"
	warpsilent MAP_BYGONE_VAULT_R2, 9, 10
# 166 "data/maps/BygoneVault_R2/scripts.pory"
	waitstate
	goto BygoneVault_R2_Redd2_1


BygoneVault_R2_StartPuzzle::
# 172 "data/maps/BygoneVault_R2/scripts.pory"
	applymovement 2, Common_Movement_FaceRight
# 173 "data/maps/BygoneVault_R2/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 174 "data/maps/BygoneVault_R2/scripts.pory"
	waitmovement 0
# 175 "data/maps/BygoneVault_R2/scripts.pory"
	goto_if_set FLAG_TEMP_6, BygoneVault_R2_StartPuzzle_1
# 179 "data/maps/BygoneVault_R2/scripts.pory"
	setflag FLAG_TEMP_7
# 180 "data/maps/BygoneVault_R2/scripts.pory"
	goto BygoneVault_R2_Redd
	return

BygoneVault_R2_StartPuzzle_1:
# 176 "data/maps/BygoneVault_R2/scripts.pory"
	goto BygoneVault_R2_Redd2
	return


BygoneVault_R2_AbandonPuzzle::
# 185 "data/maps/BygoneVault_R2/scripts.pory"
	goto_if_unset FLAG_EXP_1_BYGONE_VAULT_RIGHT_PUZZLE_COMPLETE, BygoneVault_R2_AbandonPuzzle_4
BygoneVault_R2_AbandonPuzzle_3:
# 190 "data/maps/BygoneVault_R2/scripts.pory"
	msgbox BygoneVault_R2_AbandonPuzzle_Text_1, MSGBOX_YESNO
# 191 "data/maps/BygoneVault_R2/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne BygoneVault_R2_AbandonPuzzle_7
BygoneVault_R2_AbandonPuzzle_1:
# 199 "data/maps/BygoneVault_R2/scripts.pory"
	closemessage
	return

BygoneVault_R2_AbandonPuzzle_2:
# 186 "data/maps/BygoneVault_R2/scripts.pory"
	msgbox BygoneVault_R2_AbandonPuzzle_Text_0, MSGBOX_AUTOCLOSE
	goto BygoneVault_R2_AbandonPuzzle_1

BygoneVault_R2_AbandonPuzzle_4:
# 185 "data/maps/BygoneVault_R2/scripts.pory"
	goto_if_set FLAG_EXP_1_BYGONE_VAULT_RIGHT_SWITCH, BygoneVault_R2_AbandonPuzzle_2
	goto BygoneVault_R2_AbandonPuzzle_3

BygoneVault_R2_AbandonPuzzle_7:
# 192 "data/maps/BygoneVault_R2/scripts.pory"
	clearflag FLAG_BLOCK_PLAYER_ACTIONS
# 193 "data/maps/BygoneVault_R2/scripts.pory"
	clearflag FLAG_PLAY_AS_FIRST_MON_IN_PARTY
# 194 "data/maps/BygoneVault_R2/scripts.pory"
	clearflag FLAG_SEMI_PERM_HIDE_FOLLOWER
# 195 "data/maps/BygoneVault_R2/scripts.pory"
	closemessage
# 196 "data/maps/BygoneVault_R2/scripts.pory"
	warpsilent MAP_BYGONE_VAULT_R2, 9, 13
	goto BygoneVault_R2_AbandonPuzzle_1


BygoneVault_R2_FinishPuzzle::
# 203 "data/maps/BygoneVault_R2/scripts.pory"
	clearflag FLAG_BLOCK_PLAYER_ACTIONS
# 204 "data/maps/BygoneVault_R2/scripts.pory"
	clearflag FLAG_PLAY_AS_FIRST_MON_IN_PARTY
# 205 "data/maps/BygoneVault_R2/scripts.pory"
	clearflag FLAG_SEMI_PERM_HIDE_FOLLOWER
# 206 "data/maps/BygoneVault_R2/scripts.pory"
	warpsilent MAP_BYGONE_VAULT_R2, 9, 13
# 207 "data/maps/BygoneVault_R2/scripts.pory"
	waitstate
	return


BygoneVault_R2_PuzzlePostScript::
# 211 "data/maps/BygoneVault_R2/scripts.pory"
	speakername CommonText_Redd
# 212 "data/maps/BygoneVault_R2/scripts.pory"
	msgbox BygoneVault_R2_PuzzlePostScript_Text_0, MSGBOX_AUTOCLOSE
# 215 "data/maps/BygoneVault_R2/scripts.pory"
	addobject 4
# 216 "data/maps/BygoneVault_R2/scripts.pory"
	delay 30
# 217 "data/maps/BygoneVault_R2/scripts.pory"
	applymovement 4, Common_Movement_WalkRight2
# 218 "data/maps/BygoneVault_R2/scripts.pory"
	waitmovement 0
# 219 "data/maps/BygoneVault_R2/scripts.pory"
	delay 20
# 220 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 5, 13, 0x241, TRUE
# 221 "data/maps/BygoneVault_R2/scripts.pory"
	special DrawWholeMapView
# 222 "data/maps/BygoneVault_R2/scripts.pory"
	playse SE_SWITCH
# 223 "data/maps/BygoneVault_R2/scripts.pory"
	waitse
# 224 "data/maps/BygoneVault_R2/scripts.pory"
	speakername CommonText_Redd
# 225 "data/maps/BygoneVault_R2/scripts.pory"
	msgbox BygoneVault_R2_PuzzlePostScript_Text_1, MSGBOX_AUTOCLOSE
# 226 "data/maps/BygoneVault_R2/scripts.pory"
	setvar VAR_0x8004, 1
# 227 "data/maps/BygoneVault_R2/scripts.pory"
	setvar VAR_0x8005, 1
# 228 "data/maps/BygoneVault_R2/scripts.pory"
	setvar VAR_0x8006, 12
# 229 "data/maps/BygoneVault_R2/scripts.pory"
	setvar VAR_0x8007, 2
# 230 "data/maps/BygoneVault_R2/scripts.pory"
	special ShakeCamera
# 231 "data/maps/BygoneVault_R2/scripts.pory"
	waitstate
# 232 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 6, 11, 0x01B, TRUE
# 233 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 6, 12, 0x03A, TRUE
# 234 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 6, 13, 0x001, FALSE
# 235 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 6, 14, 0x001, FALSE
# 236 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 6, 15, 0x001, FALSE
# 237 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 6, 16, 0x01B, TRUE
# 238 "data/maps/BygoneVault_R2/scripts.pory"
	special DrawWholeMapView
# 239 "data/maps/BygoneVault_R2/scripts.pory"
	playse SE_LAVARIDGE_FALL_WARP
# 240 "data/maps/BygoneVault_R2/scripts.pory"
	waitse
# 241 "data/maps/BygoneVault_R2/scripts.pory"
	applymovement 2, Common_Movement_FaceLeft
# 242 "data/maps/BygoneVault_R2/scripts.pory"
	waitmovement 0
# 243 "data/maps/BygoneVault_R2/scripts.pory"
	playse SE_PIN
# 244 "data/maps/BygoneVault_R2/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 245 "data/maps/BygoneVault_R2/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 246 "data/maps/BygoneVault_R2/scripts.pory"
	delay 60
# 247 "data/maps/BygoneVault_R2/scripts.pory"
	speakername CommonText_Redd
# 248 "data/maps/BygoneVault_R2/scripts.pory"
	msgbox BygoneVault_R2_PuzzlePostScript_Text_2, MSGBOX_AUTOCLOSE
# 252 "data/maps/BygoneVault_R2/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceRight
# 253 "data/maps/BygoneVault_R2/scripts.pory"
	speakername CommonText_Redd
# 254 "data/maps/BygoneVault_R2/scripts.pory"
	msgbox BygoneVault_R2_PuzzlePostScript_Text_3, MSGBOX_AUTOCLOSE
# 257 "data/maps/BygoneVault_R2/scripts.pory"
	setflag FLAG_EXP_1_BYGONE_VAULT_RIGHT_PUZZLE_COMPLETE
# 258 "data/maps/BygoneVault_R2/scripts.pory"
	warpsilent MAP_BYGONE_VAULT_R2, 9, 13
# 259 "data/maps/BygoneVault_R2/scripts.pory"
	waitstate
	return


BygoneVault_R2_Sign::
# 264 "data/maps/BygoneVault_R2/scripts.pory"
	msgbox BygoneVault_R2_Sign_Text_0, MSGBOX_SIGN
	return


BygoneVault_R2_Lever1::
# 268 "data/maps/BygoneVault_R2/scripts.pory"
	goto_if_unset FLAG_TEMP_2, BygoneVault_R2_Lever1_2
# 319 "data/maps/BygoneVault_R2/scripts.pory"
	msgbox Text_FlippedSwitch, MSGBOX_AUTOCLOSE
BygoneVault_R2_Lever1_1:
# 321 "data/maps/BygoneVault_R2/scripts.pory"
	closemessage
	return

BygoneVault_R2_Lever1_2:
# 269 "data/maps/BygoneVault_R2/scripts.pory"
	msgbox Text_FlipSwitch, MSGBOX_YESNO
# 270 "data/maps/BygoneVault_R2/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne BygoneVault_R2_Lever1_5
	goto BygoneVault_R2_Lever1_1

BygoneVault_R2_Lever1_5:
# 271 "data/maps/BygoneVault_R2/scripts.pory"
	closemessage
# 272 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 13, 2, 0x241, TRUE
# 273 "data/maps/BygoneVault_R2/scripts.pory"
	special DrawWholeMapView
# 274 "data/maps/BygoneVault_R2/scripts.pory"
	playse SE_SWITCH
# 275 "data/maps/BygoneVault_R2/scripts.pory"
	waitse
# 276 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 2, 2, 0x06B, FALSE
# 277 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 3, 3, 0x06B, FALSE
# 278 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 10, 3, 0x06B, FALSE
# 279 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 12, 3, 0x06B, FALSE
# 280 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 7, 4, 0x06B, FALSE
# 281 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 5, 5, 0x06B, FALSE
# 282 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 14, 5, 0x06B, FALSE
# 283 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 4, 6, 0x06B, FALSE
# 284 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 2, 7, 0x06B, FALSE
# 285 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 9, 7, 0x06B, FALSE
# 286 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 6, 8, 0x06B, FALSE
# 287 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 13, 8, 0x06B, FALSE
# 288 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 3, 9, 0x06B, FALSE
# 289 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 7, 10, 0x06B, FALSE
# 291 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 4, 2, 0x073, FALSE
# 292 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 8, 2, 0x073, FALSE
# 293 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 11, 2, 0x073, FALSE
# 294 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 2, 3, 0x073, FALSE
# 295 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 10, 4, 0x073, FALSE
# 296 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 14, 4, 0x073, FALSE
# 297 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 8, 5, 0x073, FALSE
# 298 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 12, 5, 0x073, FALSE
# 299 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 1, 6, 0x073, FALSE
# 300 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 4, 7, 0x073, FALSE
# 301 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 13, 7, 0x073, FALSE
# 302 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 10, 8, 0x073, FALSE
# 303 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 4, 9, 0x073, FALSE
# 304 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 12, 9, 0x073, FALSE
# 305 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 8, 10, 0x073, FALSE
# 307 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 14, 3, 0x06C, TRUE
# 308 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 5, 4, 0x06C, TRUE
# 309 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 3, 5, 0x06C, TRUE
# 310 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 6, 7, 0x06C, TRUE
# 311 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 11, 7, 0x06C, TRUE
# 312 "data/maps/BygoneVault_R2/scripts.pory"
	special DrawWholeMapView
# 313 "data/maps/BygoneVault_R2/scripts.pory"
	playse SE_M_SELF_DESTRUCT
# 314 "data/maps/BygoneVault_R2/scripts.pory"
	waitse
# 315 "data/maps/BygoneVault_R2/scripts.pory"
	setflag FLAG_TEMP_2
	goto BygoneVault_R2_Lever1_1


BygoneVault_R2_Lever2::
# 325 "data/maps/BygoneVault_R2/scripts.pory"
	goto_if_unset FLAG_TEMP_3, BygoneVault_R2_Lever2_2
# 361 "data/maps/BygoneVault_R2/scripts.pory"
	msgbox Text_FlippedSwitch, MSGBOX_AUTOCLOSE
BygoneVault_R2_Lever2_1:
# 363 "data/maps/BygoneVault_R2/scripts.pory"
	closemessage
	return

BygoneVault_R2_Lever2_2:
# 326 "data/maps/BygoneVault_R2/scripts.pory"
	msgbox Text_FlipSwitch, MSGBOX_YESNO
# 327 "data/maps/BygoneVault_R2/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne BygoneVault_R2_Lever2_5
	goto BygoneVault_R2_Lever2_1

BygoneVault_R2_Lever2_5:
# 328 "data/maps/BygoneVault_R2/scripts.pory"
	closemessage
# 329 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 1, 3, 0x241, TRUE
# 330 "data/maps/BygoneVault_R2/scripts.pory"
	special DrawWholeMapView
# 331 "data/maps/BygoneVault_R2/scripts.pory"
	playse SE_SWITCH
# 332 "data/maps/BygoneVault_R2/scripts.pory"
	waitse
# 333 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 4, 2, 0x06B, FALSE
# 334 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 8, 2, 0x06B, FALSE
# 335 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 11, 2, 0x06B, FALSE
# 336 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 2, 3, 0x06B, FALSE
# 337 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 10, 4, 0x06B, FALSE
# 338 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 14, 4, 0x06B, FALSE
# 339 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 8, 5, 0x06B, FALSE
# 340 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 12, 5, 0x06B, FALSE
# 341 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 1, 6, 0x06B, FALSE
# 342 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 4, 7, 0x06B, FALSE
# 343 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 13, 7, 0x06B, FALSE
# 344 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 10, 8, 0x06B, FALSE
# 345 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 4, 9, 0x06B, FALSE
# 346 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 12, 9, 0x06B, FALSE
# 347 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 8, 10, 0x06B, FALSE
# 349 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 14, 3, 0x073, FALSE
# 350 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 5, 4, 0x073, FALSE
# 351 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 3, 5, 0x073, FALSE
# 352 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 6, 7, 0x073, FALSE
# 353 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 11, 7, 0x073, FALSE
# 354 "data/maps/BygoneVault_R2/scripts.pory"
	special DrawWholeMapView
# 355 "data/maps/BygoneVault_R2/scripts.pory"
	playse SE_M_SELF_DESTRUCT
# 356 "data/maps/BygoneVault_R2/scripts.pory"
	waitse
# 357 "data/maps/BygoneVault_R2/scripts.pory"
	setflag FLAG_TEMP_3
	goto BygoneVault_R2_Lever2_1


BygoneVault_R2_Lever3::
# 367 "data/maps/BygoneVault_R2/scripts.pory"
	goto_if_unset FLAG_TEMP_4, BygoneVault_R2_Lever3_2
# 399 "data/maps/BygoneVault_R2/scripts.pory"
	msgbox Text_FlippedSwitch, MSGBOX_AUTOCLOSE
BygoneVault_R2_Lever3_1:
# 401 "data/maps/BygoneVault_R2/scripts.pory"
	closemessage
	return

BygoneVault_R2_Lever3_2:
# 368 "data/maps/BygoneVault_R2/scripts.pory"
	msgbox Text_FlipSwitch, MSGBOX_YESNO
# 369 "data/maps/BygoneVault_R2/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne BygoneVault_R2_Lever3_5
	goto BygoneVault_R2_Lever3_1

BygoneVault_R2_Lever3_5:
# 370 "data/maps/BygoneVault_R2/scripts.pory"
	closemessage
# 371 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 6, 6, 0x241, TRUE
# 372 "data/maps/BygoneVault_R2/scripts.pory"
	special DrawWholeMapView
# 373 "data/maps/BygoneVault_R2/scripts.pory"
	playse SE_SWITCH
# 374 "data/maps/BygoneVault_R2/scripts.pory"
	waitse
# 375 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 14, 3, 0x06B, FALSE
# 376 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 5, 4, 0x06B, FALSE
# 377 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 3, 5, 0x06B, FALSE
# 378 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 6, 7, 0x06B, FALSE
# 379 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 11, 7, 0x06B, FALSE
# 380 "data/maps/BygoneVault_R2/scripts.pory"
	special DrawWholeMapView
# 381 "data/maps/BygoneVault_R2/scripts.pory"
	playse SE_M_SELF_DESTRUCT
# 382 "data/maps/BygoneVault_R2/scripts.pory"
	waitse
# 383 "data/maps/BygoneVault_R2/scripts.pory"
	delay 20
# 384 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 2, 8, 0x001, FALSE
# 385 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 2, 9, 0x001, FALSE
# 386 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 2, 10, 0x001, FALSE
# 387 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 3, 10, 0x080, TRUE
# 388 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 4, 10, 0x081, TRUE
# 389 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 5, 10, 0x082, TRUE
# 390 "data/maps/BygoneVault_R2/scripts.pory"
	special DrawWholeMapView
# 391 "data/maps/BygoneVault_R2/scripts.pory"
	playse SE_M_EXPLOSION
# 392 "data/maps/BygoneVault_R2/scripts.pory"
	waitse
# 393 "data/maps/BygoneVault_R2/scripts.pory"
	delay 10
# 394 "data/maps/BygoneVault_R2/scripts.pory"
	setflag FLAG_TEMP_4
# 395 "data/maps/BygoneVault_R2/scripts.pory"
	setflag FLAG_EXP_1_BYGONE_VAULT_RIGHT_SWITCH
	goto BygoneVault_R2_Lever3_1


BygoneVault_R2_Lever4::
# 405 "data/maps/BygoneVault_R2/scripts.pory"
	msgbox Text_FlippedSwitch, MSGBOX_AUTOCLOSE
	return


BygoneVault_R2_Redd_Text_0:
# 128 "data/maps/BygoneVault_R2/scripts.pory"
	.string "Back to the main chamber now, right?$"

BygoneVault_R2_Redd_Text_1:
# 132 "data/maps/BygoneVault_R2/scripts.pory"
	.string "Yo, {PLAYER}!\p"
	.string "This room seems weird, and I bet that we\n"
	.string "aren't going to get through this\l"
	.string "without figuring out its secrets.\p"
	.string "Or at least, that's the feel I get\n"
	.string "from the inscription over there.$"

BygoneVault_R2_Redd_Text_2:
# 140 "data/maps/BygoneVault_R2/scripts.pory"
	.string "The little entrance here seems like\n"
	.string "its key.\p"
	.string "It's too small for one of us to fit\n"
	.string "through, but I bet a Pokémon could\l"
	.string "fit in there.$"

BygoneVault_R2_Redd2_Text_0:
# 158 "data/maps/BygoneVault_R2/scripts.pory"
	.string "Want to give it a try?$"

BygoneVault_R2_Redd2_Text_1:
# 160 "data/maps/BygoneVault_R2/scripts.pory"
	.string "Alright! Give it a shot!$"

BygoneVault_R2_AbandonPuzzle_Text_0:
# 186 "data/maps/BygoneVault_R2/scripts.pory"
	.string "It seems as though your Pokémon\n"
	.string "doesn't want to return yet.$"

BygoneVault_R2_AbandonPuzzle_Text_1:
# 190 "data/maps/BygoneVault_R2/scripts.pory"
	.string "Do you want to abandon the puzzle?$"

BygoneVault_R2_PuzzlePostScript_Text_0:
# 212 "data/maps/BygoneVault_R2/scripts.pory"
	.string "Huh. I guess that does it?\p"
	.string "But your Pokémon, where did it get\noff to?\p"
	.string "You lost track of it too, right?$"

BygoneVault_R2_PuzzlePostScript_Text_1:
# 225 "data/maps/BygoneVault_R2/scripts.pory"
	.string "What was that?$"

BygoneVault_R2_PuzzlePostScript_Text_2:
# 248 "data/maps/BygoneVault_R2/scripts.pory"
	.string "Attaboy!\p"
	.string "You really are raising your Pokémon\n"
	.string "well if they can do that on their\l"
	.string "own, {PLAYER}!$"

BygoneVault_R2_PuzzlePostScript_Text_3:
# 254 "data/maps/BygoneVault_R2/scripts.pory"
	.string "That's gotta be what we needed.\p"
	.string "This dungeon won't last long\n"
	.string "against us!$"

BygoneVault_R2_Sign_Text_0:
# 264 "data/maps/BygoneVault_R2/scripts.pory"
	.string "When the floor has been restored\nThy path shall be revealed$"
