BygoneVault_R2_MapScripts::
# 2 "data/maps/BygoneVault_R2/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_LOAD
# 69 "data/maps/BygoneVault_R2/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 85 "data/maps/BygoneVault_R2/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 103 "data/maps/BygoneVault_R2/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_LOAD:
# 3 "data/maps/BygoneVault_R2/scripts.pory"
	goto_if_set FLAG_EXP_1_BYGONE_VAULT_RIGHT_SWITCH, BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_LOAD_2
BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 56 "data/maps/BygoneVault_R2/scripts.pory"
	goto_if_set FLAG_EXP_1_BYGONE_VAULT_RIGHT_PUZZLE_COMPLETE, BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_LOAD_4
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

BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_LOAD_4:
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
	return

BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 70 "data/maps/BygoneVault_R2/scripts.pory"
	setflag FLAG_TEMP_8
# 71 "data/maps/BygoneVault_R2/scripts.pory"
	goto_if_set FLAG_EXP_1_BYGONE_VAULT_RIGHT_SWITCH, BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 74 "data/maps/BygoneVault_R2/scripts.pory"
	goto_if_set FLAG_EXP_1_BYGONE_VAULT_MAIN_DOOR_OPEN, BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 77 "data/maps/BygoneVault_R2/scripts.pory"
	goto_if_set FLAG_PLAY_AS_FIRST_MON_IN_PARTY, BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 81 "data/maps/BygoneVault_R2/scripts.pory"
	goto_if_unset FLAG_EXP_1_BYGONE_VAULT_RIGHT_PUZZLE_COMPLETE, BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_TRANSITION_11
	return

BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 72 "data/maps/BygoneVault_R2/scripts.pory"
	setflag FLAG_TEMP_1
	goto BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 75 "data/maps/BygoneVault_R2/scripts.pory"
	setflag FLAG_TEMP_5
	goto BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 78 "data/maps/BygoneVault_R2/scripts.pory"
	clearflag FLAG_TEMP_8
# 79 "data/maps/BygoneVault_R2/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_UP
	goto BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_TRANSITION_7

BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 82 "data/maps/BygoneVault_R2/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_RIGHT
	return

BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_TRANSITION_11:
# 81 "data/maps/BygoneVault_R2/scripts.pory"
	goto_if_set FLAG_EXP_1_BYGONE_VAULT_RIGHT_SWITCH, BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_TRANSITION_10
	return

BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 86 "data/maps/BygoneVault_R2/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0
	.2byte 0

BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0:
# 87 "data/maps/BygoneVault_R2/scripts.pory"
	setvar VAR_TEMP_0, 1
# 88 "data/maps/BygoneVault_R2/scripts.pory"
	checkplayergender
# 89 "data/maps/BygoneVault_R2/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0_2
BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0_1:
# 92 "data/maps/BygoneVault_R2/scripts.pory"
	goto_if_set FLAG_PLAY_AS_FIRST_MON_IN_PARTY, BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0_5
BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0_4:
# 95 "data/maps/BygoneVault_R2/scripts.pory"
	goto_if_unset FLAG_EXP_1_BYGONE_VAULT_RIGHT_PUZZLE_COMPLETE, BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0_8
	return

BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0_2:
# 90 "data/maps/BygoneVault_R2/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_MAY_NORMAL
	goto BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0_1

BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0_5:
# 93 "data/maps/BygoneVault_R2/scripts.pory"
	turnobject 2, DIR_NORTH
	goto BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0_4

BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0_7:
# 96 "data/maps/BygoneVault_R2/scripts.pory"
	callnative SaveFirstLiveMonToVar
# 97 "data/maps/BygoneVault_R2/scripts.pory"
	copyvar VAR_OBJ_GFX_ID_1, VAR_RESULT
# 98 "data/maps/BygoneVault_R2/scripts.pory"
	turnobject 2, DIR_EAST
# 99 "data/maps/BygoneVault_R2/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_WEST
	return

BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0_8:
# 95 "data/maps/BygoneVault_R2/scripts.pory"
	goto_if_set FLAG_EXP_1_BYGONE_VAULT_RIGHT_SWITCH, BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0_7
	return

BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 104 "data/maps/BygoneVault_R2/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 105 "data/maps/BygoneVault_R2/scripts.pory"
	setvar VAR_TEMP_1, 1
# 106 "data/maps/BygoneVault_R2/scripts.pory"
	goto_if_unset FLAG_EXP_1_BYGONE_VAULT_RIGHT_PUZZLE_COMPLETE, BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_2
	return

BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_1:
# 107 "data/maps/BygoneVault_R2/scripts.pory"
	goto BygoneVault_R2_PuzzlePostScript
	return

BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_2:
# 106 "data/maps/BygoneVault_R2/scripts.pory"
	goto_if_set FLAG_EXP_1_BYGONE_VAULT_RIGHT_SWITCH, BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_1
	return


BygoneVault_R2_Redd::
# 115 "data/maps/BygoneVault_R2/scripts.pory"
	faceplayer
# 116 "data/maps/BygoneVault_R2/scripts.pory"
	goto_if_set FLAG_TEMP_6, BygoneVault_R2_Redd_2
BygoneVault_R2_Redd_1:
# 119 "data/maps/BygoneVault_R2/scripts.pory"
	goto_if_set FLAG_EXP_1_BYGONE_VAULT_RIGHT_PUZZLE_COMPLETE, BygoneVault_R2_Redd_5
# 124 "data/maps/BygoneVault_R2/scripts.pory"
	speakername CommonText_Redd
# 125 "data/maps/BygoneVault_R2/scripts.pory"
	msgbox BygoneVault_R2_Redd_Text_1, MSGBOX_DEFAULT
# 131 "data/maps/BygoneVault_R2/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceUp
# 132 "data/maps/BygoneVault_R2/scripts.pory"
	waitmovement 0
# 133 "data/maps/BygoneVault_R2/scripts.pory"
	msgbox BygoneVault_R2_Redd_Text_2, MSGBOX_DEFAULT
# 138 "data/maps/BygoneVault_R2/scripts.pory"
	goto_if_set FLAG_TEMP_7, BygoneVault_R2_Redd_8
# 143 "data/maps/BygoneVault_R2/scripts.pory"
	faceplayer
BygoneVault_R2_Redd_7:
# 145 "data/maps/BygoneVault_R2/scripts.pory"
	setflag FLAG_TEMP_6
# 146 "data/maps/BygoneVault_R2/scripts.pory"
	goto BygoneVault_R2_Redd2
	return

BygoneVault_R2_Redd_2:
# 117 "data/maps/BygoneVault_R2/scripts.pory"
	goto BygoneVault_R2_Redd2
	goto BygoneVault_R2_Redd_1

BygoneVault_R2_Redd_5:
# 120 "data/maps/BygoneVault_R2/scripts.pory"
	speakername CommonText_Redd
# 121 "data/maps/BygoneVault_R2/scripts.pory"
	msgbox BygoneVault_R2_Redd_Text_0, MSGBOX_AUTOCLOSE
	end

BygoneVault_R2_Redd_8:
# 139 "data/maps/BygoneVault_R2/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceRight
# 140 "data/maps/BygoneVault_R2/scripts.pory"
	clearflag FLAG_TEMP_7
	goto BygoneVault_R2_Redd_7


BygoneVault_R2_Redd2::
# 150 "data/maps/BygoneVault_R2/scripts.pory"
	speakername CommonText_Redd
# 151 "data/maps/BygoneVault_R2/scripts.pory"
	msgbox BygoneVault_R2_Redd2_Text_0, MSGBOX_YESNO
# 152 "data/maps/BygoneVault_R2/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne BygoneVault_R2_Redd2_2
BygoneVault_R2_Redd2_1:
# 160 "data/maps/BygoneVault_R2/scripts.pory"
	closemessage
	return

BygoneVault_R2_Redd2_2:
# 153 "data/maps/BygoneVault_R2/scripts.pory"
	msgbox BygoneVault_R2_Redd2_Text_1, MSGBOX_DEFAULT
# 154 "data/maps/BygoneVault_R2/scripts.pory"
	closemessage
# 155 "data/maps/BygoneVault_R2/scripts.pory"
	setflag FLAG_BLOCK_PLAYER_ACTIONS
# 156 "data/maps/BygoneVault_R2/scripts.pory"
	setflag FLAG_PLAY_AS_FIRST_MON_IN_PARTY
# 157 "data/maps/BygoneVault_R2/scripts.pory"
	setflag FLAG_SEMI_PERM_HIDE_FOLLOWER
# 158 "data/maps/BygoneVault_R2/scripts.pory"
	warpsilent MAP_BYGONE_VAULT_R2, 9, 10
	goto BygoneVault_R2_Redd2_1


BygoneVault_R2_StartPuzzle::
# 164 "data/maps/BygoneVault_R2/scripts.pory"
	applymovement 2, Common_Movement_FaceRight
# 165 "data/maps/BygoneVault_R2/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 166 "data/maps/BygoneVault_R2/scripts.pory"
	waitmovement 0
# 167 "data/maps/BygoneVault_R2/scripts.pory"
	goto_if_set FLAG_TEMP_6, BygoneVault_R2_StartPuzzle_1
# 171 "data/maps/BygoneVault_R2/scripts.pory"
	setflag FLAG_TEMP_7
# 172 "data/maps/BygoneVault_R2/scripts.pory"
	goto BygoneVault_R2_Redd
	return

BygoneVault_R2_StartPuzzle_1:
# 168 "data/maps/BygoneVault_R2/scripts.pory"
	goto BygoneVault_R2_Redd2
	return


BygoneVault_R2_AbandonPuzzle::
# 177 "data/maps/BygoneVault_R2/scripts.pory"
	goto_if_unset FLAG_EXP_1_BYGONE_VAULT_RIGHT_PUZZLE_COMPLETE, BygoneVault_R2_AbandonPuzzle_4
BygoneVault_R2_AbandonPuzzle_3:
# 182 "data/maps/BygoneVault_R2/scripts.pory"
	msgbox BygoneVault_R2_AbandonPuzzle_Text_1, MSGBOX_YESNO
# 183 "data/maps/BygoneVault_R2/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne BygoneVault_R2_AbandonPuzzle_7
BygoneVault_R2_AbandonPuzzle_1:
# 191 "data/maps/BygoneVault_R2/scripts.pory"
	closemessage
	return

BygoneVault_R2_AbandonPuzzle_2:
# 178 "data/maps/BygoneVault_R2/scripts.pory"
	msgbox BygoneVault_R2_AbandonPuzzle_Text_0, MSGBOX_AUTOCLOSE
	goto BygoneVault_R2_AbandonPuzzle_1

BygoneVault_R2_AbandonPuzzle_4:
# 177 "data/maps/BygoneVault_R2/scripts.pory"
	goto_if_set FLAG_EXP_1_BYGONE_VAULT_RIGHT_SWITCH, BygoneVault_R2_AbandonPuzzle_2
	goto BygoneVault_R2_AbandonPuzzle_3

BygoneVault_R2_AbandonPuzzle_7:
# 184 "data/maps/BygoneVault_R2/scripts.pory"
	clearflag FLAG_BLOCK_PLAYER_ACTIONS
# 185 "data/maps/BygoneVault_R2/scripts.pory"
	clearflag FLAG_PLAY_AS_FIRST_MON_IN_PARTY
# 186 "data/maps/BygoneVault_R2/scripts.pory"
	clearflag FLAG_SEMI_PERM_HIDE_FOLLOWER
# 187 "data/maps/BygoneVault_R2/scripts.pory"
	closemessage
# 188 "data/maps/BygoneVault_R2/scripts.pory"
	warpsilent MAP_BYGONE_VAULT_R2, 9, 13
	goto BygoneVault_R2_AbandonPuzzle_1


BygoneVault_R2_FinishPuzzle::
# 195 "data/maps/BygoneVault_R2/scripts.pory"
	clearflag FLAG_BLOCK_PLAYER_ACTIONS
# 196 "data/maps/BygoneVault_R2/scripts.pory"
	clearflag FLAG_PLAY_AS_FIRST_MON_IN_PARTY
# 197 "data/maps/BygoneVault_R2/scripts.pory"
	clearflag FLAG_SEMI_PERM_HIDE_FOLLOWER
# 198 "data/maps/BygoneVault_R2/scripts.pory"
	warpsilent MAP_BYGONE_VAULT_R2, 9, 13
	return


BygoneVault_R2_PuzzlePostScript::
# 202 "data/maps/BygoneVault_R2/scripts.pory"
	speakername CommonText_Redd
# 203 "data/maps/BygoneVault_R2/scripts.pory"
	msgbox BygoneVault_R2_PuzzlePostScript_Text_0, MSGBOX_AUTOCLOSE
# 206 "data/maps/BygoneVault_R2/scripts.pory"
	addobject 4
# 207 "data/maps/BygoneVault_R2/scripts.pory"
	delay 30
# 208 "data/maps/BygoneVault_R2/scripts.pory"
	applymovement 4, Common_Movement_WalkRight2
# 209 "data/maps/BygoneVault_R2/scripts.pory"
	waitmovement 0
# 210 "data/maps/BygoneVault_R2/scripts.pory"
	delay 20
# 211 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 5, 13, 0x241, TRUE
# 212 "data/maps/BygoneVault_R2/scripts.pory"
	special DrawWholeMapView
# 213 "data/maps/BygoneVault_R2/scripts.pory"
	playse SE_SWITCH
# 214 "data/maps/BygoneVault_R2/scripts.pory"
	waitse
# 215 "data/maps/BygoneVault_R2/scripts.pory"
	speakername CommonText_Redd
# 216 "data/maps/BygoneVault_R2/scripts.pory"
	msgbox BygoneVault_R2_PuzzlePostScript_Text_1, MSGBOX_AUTOCLOSE
# 217 "data/maps/BygoneVault_R2/scripts.pory"
	setvar VAR_0x8004, 1
# 218 "data/maps/BygoneVault_R2/scripts.pory"
	setvar VAR_0x8005, 1
# 219 "data/maps/BygoneVault_R2/scripts.pory"
	setvar VAR_0x8006, 12
# 220 "data/maps/BygoneVault_R2/scripts.pory"
	setvar VAR_0x8007, 2
# 221 "data/maps/BygoneVault_R2/scripts.pory"
	special ShakeCamera
# 222 "data/maps/BygoneVault_R2/scripts.pory"
	waitstate
# 223 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 6, 11, 0x01B, TRUE
# 224 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 6, 12, 0x03A, TRUE
# 225 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 6, 13, 0x001, FALSE
# 226 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 6, 14, 0x001, FALSE
# 227 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 6, 15, 0x001, FALSE
# 228 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 6, 16, 0x01B, TRUE
# 229 "data/maps/BygoneVault_R2/scripts.pory"
	special DrawWholeMapView
# 230 "data/maps/BygoneVault_R2/scripts.pory"
	playse SE_LAVARIDGE_FALL_WARP
# 231 "data/maps/BygoneVault_R2/scripts.pory"
	waitse
# 232 "data/maps/BygoneVault_R2/scripts.pory"
	applymovement 2, Common_Movement_FaceLeft
# 233 "data/maps/BygoneVault_R2/scripts.pory"
	waitmovement 0
# 234 "data/maps/BygoneVault_R2/scripts.pory"
	playse SE_PIN
# 235 "data/maps/BygoneVault_R2/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 236 "data/maps/BygoneVault_R2/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 237 "data/maps/BygoneVault_R2/scripts.pory"
	delay 60
# 238 "data/maps/BygoneVault_R2/scripts.pory"
	speakername CommonText_Redd
# 239 "data/maps/BygoneVault_R2/scripts.pory"
	msgbox BygoneVault_R2_PuzzlePostScript_Text_2, MSGBOX_AUTOCLOSE
# 243 "data/maps/BygoneVault_R2/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceRight
# 244 "data/maps/BygoneVault_R2/scripts.pory"
	speakername CommonText_Redd
# 245 "data/maps/BygoneVault_R2/scripts.pory"
	msgbox BygoneVault_R2_PuzzlePostScript_Text_3, MSGBOX_AUTOCLOSE
# 248 "data/maps/BygoneVault_R2/scripts.pory"
	setflag FLAG_EXP_1_BYGONE_VAULT_RIGHT_PUZZLE_COMPLETE
# 249 "data/maps/BygoneVault_R2/scripts.pory"
	warpsilent MAP_BYGONE_VAULT_R2, 9, 13
	return


BygoneVault_R2_Sign::
# 254 "data/maps/BygoneVault_R2/scripts.pory"
	msgbox BygoneVault_R2_Sign_Text_0, MSGBOX_SIGN
	return


BygoneVault_R2_Lever1::
# 258 "data/maps/BygoneVault_R2/scripts.pory"
	goto_if_unset FLAG_TEMP_2, BygoneVault_R2_Lever1_2
# 309 "data/maps/BygoneVault_R2/scripts.pory"
	msgbox Text_FlippedSwitch, MSGBOX_AUTOCLOSE
BygoneVault_R2_Lever1_1:
# 311 "data/maps/BygoneVault_R2/scripts.pory"
	closemessage
	return

BygoneVault_R2_Lever1_2:
# 259 "data/maps/BygoneVault_R2/scripts.pory"
	msgbox Text_FlipSwitch, MSGBOX_YESNO
# 260 "data/maps/BygoneVault_R2/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne BygoneVault_R2_Lever1_5
	goto BygoneVault_R2_Lever1_1

BygoneVault_R2_Lever1_5:
# 261 "data/maps/BygoneVault_R2/scripts.pory"
	closemessage
# 262 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 13, 2, 0x241, TRUE
# 263 "data/maps/BygoneVault_R2/scripts.pory"
	special DrawWholeMapView
# 264 "data/maps/BygoneVault_R2/scripts.pory"
	playse SE_SWITCH
# 265 "data/maps/BygoneVault_R2/scripts.pory"
	waitse
# 266 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 2, 2, 0x06B, FALSE
# 267 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 3, 3, 0x06B, FALSE
# 268 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 10, 3, 0x06B, FALSE
# 269 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 12, 3, 0x06B, FALSE
# 270 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 7, 4, 0x06B, FALSE
# 271 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 5, 5, 0x06B, FALSE
# 272 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 14, 5, 0x06B, FALSE
# 273 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 4, 6, 0x06B, FALSE
# 274 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 2, 7, 0x06B, FALSE
# 275 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 9, 7, 0x06B, FALSE
# 276 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 6, 8, 0x06B, FALSE
# 277 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 13, 8, 0x06B, FALSE
# 278 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 3, 9, 0x06B, FALSE
# 279 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 7, 10, 0x06B, FALSE
# 281 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 4, 2, 0x073, FALSE
# 282 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 8, 2, 0x073, FALSE
# 283 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 11, 2, 0x073, FALSE
# 284 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 2, 3, 0x073, FALSE
# 285 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 10, 4, 0x073, FALSE
# 286 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 14, 4, 0x073, FALSE
# 287 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 8, 5, 0x073, FALSE
# 288 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 12, 5, 0x073, FALSE
# 289 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 1, 6, 0x073, FALSE
# 290 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 4, 7, 0x073, FALSE
# 291 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 13, 7, 0x073, FALSE
# 292 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 10, 8, 0x073, FALSE
# 293 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 4, 9, 0x073, FALSE
# 294 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 12, 9, 0x073, FALSE
# 295 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 8, 10, 0x073, FALSE
# 297 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 14, 3, 0x06C, TRUE
# 298 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 5, 4, 0x06C, TRUE
# 299 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 3, 5, 0x06C, TRUE
# 300 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 6, 7, 0x06C, TRUE
# 301 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 11, 7, 0x06C, TRUE
# 302 "data/maps/BygoneVault_R2/scripts.pory"
	special DrawWholeMapView
# 303 "data/maps/BygoneVault_R2/scripts.pory"
	playse SE_M_SELF_DESTRUCT
# 304 "data/maps/BygoneVault_R2/scripts.pory"
	waitse
# 305 "data/maps/BygoneVault_R2/scripts.pory"
	setflag FLAG_TEMP_2
	goto BygoneVault_R2_Lever1_1


BygoneVault_R2_Lever2::
# 315 "data/maps/BygoneVault_R2/scripts.pory"
	goto_if_unset FLAG_TEMP_3, BygoneVault_R2_Lever2_2
# 351 "data/maps/BygoneVault_R2/scripts.pory"
	msgbox Text_FlippedSwitch, MSGBOX_AUTOCLOSE
BygoneVault_R2_Lever2_1:
# 353 "data/maps/BygoneVault_R2/scripts.pory"
	closemessage
	return

BygoneVault_R2_Lever2_2:
# 316 "data/maps/BygoneVault_R2/scripts.pory"
	msgbox Text_FlipSwitch, MSGBOX_YESNO
# 317 "data/maps/BygoneVault_R2/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne BygoneVault_R2_Lever2_5
	goto BygoneVault_R2_Lever2_1

BygoneVault_R2_Lever2_5:
# 318 "data/maps/BygoneVault_R2/scripts.pory"
	closemessage
# 319 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 1, 3, 0x241, TRUE
# 320 "data/maps/BygoneVault_R2/scripts.pory"
	special DrawWholeMapView
# 321 "data/maps/BygoneVault_R2/scripts.pory"
	playse SE_SWITCH
# 322 "data/maps/BygoneVault_R2/scripts.pory"
	waitse
# 323 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 4, 2, 0x06B, FALSE
# 324 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 8, 2, 0x06B, FALSE
# 325 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 11, 2, 0x06B, FALSE
# 326 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 2, 3, 0x06B, FALSE
# 327 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 10, 4, 0x06B, FALSE
# 328 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 14, 4, 0x06B, FALSE
# 329 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 8, 5, 0x06B, FALSE
# 330 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 12, 5, 0x06B, FALSE
# 331 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 1, 6, 0x06B, FALSE
# 332 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 4, 7, 0x06B, FALSE
# 333 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 13, 7, 0x06B, FALSE
# 334 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 10, 8, 0x06B, FALSE
# 335 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 4, 9, 0x06B, FALSE
# 336 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 12, 9, 0x06B, FALSE
# 337 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 8, 10, 0x06B, FALSE
# 339 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 14, 3, 0x073, FALSE
# 340 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 5, 4, 0x073, FALSE
# 341 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 3, 5, 0x073, FALSE
# 342 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 6, 7, 0x073, FALSE
# 343 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 11, 7, 0x073, FALSE
# 344 "data/maps/BygoneVault_R2/scripts.pory"
	special DrawWholeMapView
# 345 "data/maps/BygoneVault_R2/scripts.pory"
	playse SE_M_SELF_DESTRUCT
# 346 "data/maps/BygoneVault_R2/scripts.pory"
	waitse
# 347 "data/maps/BygoneVault_R2/scripts.pory"
	setflag FLAG_TEMP_3
	goto BygoneVault_R2_Lever2_1


BygoneVault_R2_Lever3::
# 357 "data/maps/BygoneVault_R2/scripts.pory"
	goto_if_unset FLAG_TEMP_4, BygoneVault_R2_Lever3_2
# 389 "data/maps/BygoneVault_R2/scripts.pory"
	msgbox Text_FlippedSwitch, MSGBOX_AUTOCLOSE
BygoneVault_R2_Lever3_1:
# 391 "data/maps/BygoneVault_R2/scripts.pory"
	closemessage
	return

BygoneVault_R2_Lever3_2:
# 358 "data/maps/BygoneVault_R2/scripts.pory"
	msgbox Text_FlipSwitch, MSGBOX_YESNO
# 359 "data/maps/BygoneVault_R2/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne BygoneVault_R2_Lever3_5
	goto BygoneVault_R2_Lever3_1

BygoneVault_R2_Lever3_5:
# 360 "data/maps/BygoneVault_R2/scripts.pory"
	closemessage
# 361 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 6, 6, 0x241, TRUE
# 362 "data/maps/BygoneVault_R2/scripts.pory"
	special DrawWholeMapView
# 363 "data/maps/BygoneVault_R2/scripts.pory"
	playse SE_SWITCH
# 364 "data/maps/BygoneVault_R2/scripts.pory"
	waitse
# 365 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 14, 3, 0x06B, FALSE
# 366 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 5, 4, 0x06B, FALSE
# 367 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 3, 5, 0x06B, FALSE
# 368 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 6, 7, 0x06B, FALSE
# 369 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 11, 7, 0x06B, FALSE
# 370 "data/maps/BygoneVault_R2/scripts.pory"
	special DrawWholeMapView
# 371 "data/maps/BygoneVault_R2/scripts.pory"
	playse SE_M_SELF_DESTRUCT
# 372 "data/maps/BygoneVault_R2/scripts.pory"
	waitse
# 373 "data/maps/BygoneVault_R2/scripts.pory"
	delay 20
# 374 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 2, 8, 0x001, FALSE
# 375 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 2, 9, 0x001, FALSE
# 376 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 2, 10, 0x001, FALSE
# 377 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 3, 10, 0x080, TRUE
# 378 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 4, 10, 0x081, TRUE
# 379 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 5, 10, 0x082, TRUE
# 380 "data/maps/BygoneVault_R2/scripts.pory"
	special DrawWholeMapView
# 381 "data/maps/BygoneVault_R2/scripts.pory"
	playse SE_M_EXPLOSION
# 382 "data/maps/BygoneVault_R2/scripts.pory"
	waitse
# 383 "data/maps/BygoneVault_R2/scripts.pory"
	delay 10
# 384 "data/maps/BygoneVault_R2/scripts.pory"
	setflag FLAG_TEMP_4
# 385 "data/maps/BygoneVault_R2/scripts.pory"
	setflag FLAG_EXP_1_BYGONE_VAULT_RIGHT_SWITCH
	goto BygoneVault_R2_Lever3_1


BygoneVault_R2_Lever4::
# 395 "data/maps/BygoneVault_R2/scripts.pory"
	msgbox Text_FlippedSwitch, MSGBOX_AUTOCLOSE
	return


BygoneVault_R2_Redd_Text_0:
# 121 "data/maps/BygoneVault_R2/scripts.pory"
	.string "Back to the main chamber now, right?$"

BygoneVault_R2_Redd_Text_1:
# 125 "data/maps/BygoneVault_R2/scripts.pory"
	.string "Yo, {PLAYER}!\p"
	.string "This room seems weird, and I bet that we\n"
	.string "aren't going to get through this\l"
	.string "without figuring out its secrets.\p"
	.string "Or at least, that's the feel I get\n"
	.string "from the inscription over there.$"

BygoneVault_R2_Redd_Text_2:
# 133 "data/maps/BygoneVault_R2/scripts.pory"
	.string "The little entrance here seems like\n"
	.string "its key.\p"
	.string "It's too small for one of us to fit\n"
	.string "through, but I bet a Pokémon could\l"
	.string "fit in there.$"

BygoneVault_R2_Redd2_Text_0:
# 151 "data/maps/BygoneVault_R2/scripts.pory"
	.string "Want to give it a try?$"

BygoneVault_R2_Redd2_Text_1:
# 153 "data/maps/BygoneVault_R2/scripts.pory"
	.string "Alright! Give it a shot!$"

BygoneVault_R2_AbandonPuzzle_Text_0:
# 178 "data/maps/BygoneVault_R2/scripts.pory"
	.string "It seems as though your Pokémon\n"
	.string "doesn't want to return yet.$"

BygoneVault_R2_AbandonPuzzle_Text_1:
# 182 "data/maps/BygoneVault_R2/scripts.pory"
	.string "Do you want to abandon the puzzle?$"

BygoneVault_R2_PuzzlePostScript_Text_0:
# 203 "data/maps/BygoneVault_R2/scripts.pory"
	.string "Huh. I guess that does it?\p"
	.string "But your Pokémon, where did it get\noff to?\p"
	.string "You lost track of it too, right?$"

BygoneVault_R2_PuzzlePostScript_Text_1:
# 216 "data/maps/BygoneVault_R2/scripts.pory"
	.string "What was that?$"

BygoneVault_R2_PuzzlePostScript_Text_2:
# 239 "data/maps/BygoneVault_R2/scripts.pory"
	.string "Attaboy!\p"
	.string "You really are raising your Pokémon\n"
	.string "well if they can do that on their\l"
	.string "own, {PLAYER}!$"

BygoneVault_R2_PuzzlePostScript_Text_3:
# 245 "data/maps/BygoneVault_R2/scripts.pory"
	.string "That's gotta be what we needed.\p"
	.string "This dungeon won't last long\n"
	.string "against us!$"

BygoneVault_R2_Sign_Text_0:
# 254 "data/maps/BygoneVault_R2/scripts.pory"
	.string "When the floor has been restored\nThy path shall be revealed$"
