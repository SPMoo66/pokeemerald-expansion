BygoneVault_R2_MapScripts::
# 2 "data/maps/BygoneVault_R2/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_LOAD
# 58 "data/maps/BygoneVault_R2/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 71 "data/maps/BygoneVault_R2/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_LOAD:
# 3 "data/maps/BygoneVault_R2/scripts.pory"
	goto_if_set FLAG_EXP_1_BYGONE_VAULT_RIGHT_SWITCH, BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_LOAD_1:
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
# 48 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 5, 13, 0x241, TRUE
# 50 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 2, 8, 0x001, FALSE
# 51 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 2, 9, 0x001, FALSE
# 52 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 2, 10, 0x001, FALSE
# 53 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 3, 10, 0x080, TRUE
# 54 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 4, 10, 0x081, TRUE
# 55 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 5, 10, 0x082, TRUE
	return

BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 59 "data/maps/BygoneVault_R2/scripts.pory"
	setflag FLAG_TEMP_8
# 60 "data/maps/BygoneVault_R2/scripts.pory"
	goto_if_set FLAG_EXP_1_BYGONE_VAULT_RIGHT_SWITCH, BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 63 "data/maps/BygoneVault_R2/scripts.pory"
	goto_if_set FLAG_EXP_1_BYGONE_VAULT_MAIN_DOOR_OPEN, BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 66 "data/maps/BygoneVault_R2/scripts.pory"
	goto_if_set FLAG_PLAY_AS_FIRST_MON_IN_PARTY, BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
	return

BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 61 "data/maps/BygoneVault_R2/scripts.pory"
	setflag FLAG_TEMP_1
	goto BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 64 "data/maps/BygoneVault_R2/scripts.pory"
	setflag FLAG_TEMP_5
	goto BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 67 "data/maps/BygoneVault_R2/scripts.pory"
	clearflag FLAG_TEMP_8
# 68 "data/maps/BygoneVault_R2/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_UP
	return

BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 72 "data/maps/BygoneVault_R2/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0
	.2byte 0

BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0:
# 73 "data/maps/BygoneVault_R2/scripts.pory"
	setvar VAR_TEMP_0, 1
# 74 "data/maps/BygoneVault_R2/scripts.pory"
	checkplayergender
# 75 "data/maps/BygoneVault_R2/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0_2
BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0_1:
# 78 "data/maps/BygoneVault_R2/scripts.pory"
	goto_if_set FLAG_PLAY_AS_FIRST_MON_IN_PARTY, BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0_4
	return

BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0_2:
# 76 "data/maps/BygoneVault_R2/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_MAY_NORMAL
	goto BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0_1

BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0_4:
# 79 "data/maps/BygoneVault_R2/scripts.pory"
	turnobject 2, DIR_NORTH
	return


BygoneVault_R2_Redd::
# 87 "data/maps/BygoneVault_R2/scripts.pory"
	faceplayer
# 88 "data/maps/BygoneVault_R2/scripts.pory"
	goto_if_set FLAG_TEMP_6, BygoneVault_R2_Redd_2
BygoneVault_R2_Redd_1:
# 91 "data/maps/BygoneVault_R2/scripts.pory"
	speakername CommonText_Redd
# 92 "data/maps/BygoneVault_R2/scripts.pory"
	msgbox BygoneVault_R2_Redd_Text_0, MSGBOX_DEFAULT
# 98 "data/maps/BygoneVault_R2/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceUp
# 99 "data/maps/BygoneVault_R2/scripts.pory"
	waitmovement 0
# 100 "data/maps/BygoneVault_R2/scripts.pory"
	msgbox BygoneVault_R2_Redd_Text_1, MSGBOX_DEFAULT
# 105 "data/maps/BygoneVault_R2/scripts.pory"
	goto_if_set FLAG_TEMP_7, BygoneVault_R2_Redd_5
# 110 "data/maps/BygoneVault_R2/scripts.pory"
	faceplayer
BygoneVault_R2_Redd_4:
# 112 "data/maps/BygoneVault_R2/scripts.pory"
	setflag FLAG_TEMP_6
# 113 "data/maps/BygoneVault_R2/scripts.pory"
	goto BygoneVault_R2_Redd2
	return

BygoneVault_R2_Redd_2:
# 89 "data/maps/BygoneVault_R2/scripts.pory"
	goto BygoneVault_R2_Redd2
	goto BygoneVault_R2_Redd_1

BygoneVault_R2_Redd_5:
# 106 "data/maps/BygoneVault_R2/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceRight
# 107 "data/maps/BygoneVault_R2/scripts.pory"
	clearflag FLAG_TEMP_7
	goto BygoneVault_R2_Redd_4


BygoneVault_R2_Redd2::
# 117 "data/maps/BygoneVault_R2/scripts.pory"
	speakername CommonText_Redd
# 118 "data/maps/BygoneVault_R2/scripts.pory"
	msgbox BygoneVault_R2_Redd2_Text_0, MSGBOX_YESNO
# 119 "data/maps/BygoneVault_R2/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne BygoneVault_R2_Redd2_2
BygoneVault_R2_Redd2_1:
# 127 "data/maps/BygoneVault_R2/scripts.pory"
	closemessage
	return

BygoneVault_R2_Redd2_2:
# 120 "data/maps/BygoneVault_R2/scripts.pory"
	msgbox BygoneVault_R2_Redd2_Text_1, MSGBOX_DEFAULT
# 121 "data/maps/BygoneVault_R2/scripts.pory"
	closemessage
# 122 "data/maps/BygoneVault_R2/scripts.pory"
	setflag FLAG_BLOCK_PLAYER_ACTIONS
# 123 "data/maps/BygoneVault_R2/scripts.pory"
	setflag FLAG_PLAY_AS_FIRST_MON_IN_PARTY
# 124 "data/maps/BygoneVault_R2/scripts.pory"
	setflag FLAG_SEMI_PERM_HIDE_FOLLOWER
# 125 "data/maps/BygoneVault_R2/scripts.pory"
	warpsilent MAP_BYGONE_VAULT_R2, 9, 10
	goto BygoneVault_R2_Redd2_1


BygoneVault_R2_StartPuzzle::
# 131 "data/maps/BygoneVault_R2/scripts.pory"
	applymovement 2, Common_Movement_FaceRight
# 132 "data/maps/BygoneVault_R2/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 133 "data/maps/BygoneVault_R2/scripts.pory"
	waitmovement 0
# 134 "data/maps/BygoneVault_R2/scripts.pory"
	goto_if_set FLAG_TEMP_6, BygoneVault_R2_StartPuzzle_1
# 138 "data/maps/BygoneVault_R2/scripts.pory"
	setflag FLAG_TEMP_7
# 139 "data/maps/BygoneVault_R2/scripts.pory"
	goto BygoneVault_R2_Redd
	return

BygoneVault_R2_StartPuzzle_1:
# 135 "data/maps/BygoneVault_R2/scripts.pory"
	goto BygoneVault_R2_Redd2
	return


BygoneVault_R2_AbandonPuzzle::
# 144 "data/maps/BygoneVault_R2/scripts.pory"
	msgbox BygoneVault_R2_AbandonPuzzle_Text_0, MSGBOX_YESNO
# 145 "data/maps/BygoneVault_R2/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne BygoneVault_R2_AbandonPuzzle_2
BygoneVault_R2_AbandonPuzzle_1:
# 152 "data/maps/BygoneVault_R2/scripts.pory"
	closemessage
	return

BygoneVault_R2_AbandonPuzzle_2:
# 146 "data/maps/BygoneVault_R2/scripts.pory"
	clearflag FLAG_BLOCK_PLAYER_ACTIONS
# 147 "data/maps/BygoneVault_R2/scripts.pory"
	clearflag FLAG_PLAY_AS_FIRST_MON_IN_PARTY
# 148 "data/maps/BygoneVault_R2/scripts.pory"
	clearflag FLAG_SEMI_PERM_HIDE_FOLLOWER
# 149 "data/maps/BygoneVault_R2/scripts.pory"
	closemessage
# 150 "data/maps/BygoneVault_R2/scripts.pory"
	warpsilent MAP_BYGONE_VAULT_R2, 9, 13
	goto BygoneVault_R2_AbandonPuzzle_1


BygoneVault_R2_FinishPuzzle::
# 156 "data/maps/BygoneVault_R2/scripts.pory"
	clearflag FLAG_BLOCK_PLAYER_ACTIONS
# 157 "data/maps/BygoneVault_R2/scripts.pory"
	clearflag FLAG_PLAY_AS_FIRST_MON_IN_PARTY
# 158 "data/maps/BygoneVault_R2/scripts.pory"
	clearflag FLAG_SEMI_PERM_HIDE_FOLLOWER
	return


BygoneVault_R2_Sign::
# 162 "data/maps/BygoneVault_R2/scripts.pory"
	msgbox BygoneVault_R2_Sign_Text_0, MSGBOX_SIGN
	return


BygoneVault_R2_Lever1::
# 166 "data/maps/BygoneVault_R2/scripts.pory"
	goto_if_unset FLAG_TEMP_2, BygoneVault_R2_Lever1_2
# 217 "data/maps/BygoneVault_R2/scripts.pory"
	msgbox Text_FlippedSwitch, MSGBOX_AUTOCLOSE
BygoneVault_R2_Lever1_1:
# 219 "data/maps/BygoneVault_R2/scripts.pory"
	closemessage
	return

BygoneVault_R2_Lever1_2:
# 167 "data/maps/BygoneVault_R2/scripts.pory"
	msgbox Text_FlipSwitch, MSGBOX_YESNO
# 168 "data/maps/BygoneVault_R2/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne BygoneVault_R2_Lever1_5
	goto BygoneVault_R2_Lever1_1

BygoneVault_R2_Lever1_5:
# 169 "data/maps/BygoneVault_R2/scripts.pory"
	closemessage
# 170 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 13, 2, 0x241, TRUE
# 171 "data/maps/BygoneVault_R2/scripts.pory"
	special DrawWholeMapView
# 172 "data/maps/BygoneVault_R2/scripts.pory"
	playse SE_SWITCH
# 173 "data/maps/BygoneVault_R2/scripts.pory"
	waitse
# 174 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 2, 2, 0x06B, FALSE
# 175 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 3, 3, 0x06B, FALSE
# 176 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 10, 3, 0x06B, FALSE
# 177 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 12, 3, 0x06B, FALSE
# 178 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 7, 4, 0x06B, FALSE
# 179 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 5, 5, 0x06B, FALSE
# 180 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 14, 5, 0x06B, FALSE
# 181 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 4, 6, 0x06B, FALSE
# 182 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 2, 7, 0x06B, FALSE
# 183 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 9, 7, 0x06B, FALSE
# 184 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 6, 8, 0x06B, FALSE
# 185 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 13, 8, 0x06B, FALSE
# 186 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 3, 9, 0x06B, FALSE
# 187 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 7, 10, 0x06B, FALSE
# 189 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 4, 2, 0x073, FALSE
# 190 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 8, 2, 0x073, FALSE
# 191 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 11, 2, 0x073, FALSE
# 192 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 2, 3, 0x073, FALSE
# 193 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 10, 4, 0x073, FALSE
# 194 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 14, 4, 0x073, FALSE
# 195 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 8, 5, 0x073, FALSE
# 196 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 12, 5, 0x073, FALSE
# 197 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 1, 6, 0x073, FALSE
# 198 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 4, 7, 0x073, FALSE
# 199 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 13, 7, 0x073, FALSE
# 200 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 10, 8, 0x073, FALSE
# 201 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 4, 9, 0x073, FALSE
# 202 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 12, 9, 0x073, FALSE
# 203 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 8, 10, 0x073, FALSE
# 205 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 14, 3, 0x06C, TRUE
# 206 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 5, 4, 0x06C, TRUE
# 207 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 3, 5, 0x06C, TRUE
# 208 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 6, 7, 0x06C, TRUE
# 209 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 11, 7, 0x06C, TRUE
# 210 "data/maps/BygoneVault_R2/scripts.pory"
	special DrawWholeMapView
# 211 "data/maps/BygoneVault_R2/scripts.pory"
	playse SE_M_SELF_DESTRUCT
# 212 "data/maps/BygoneVault_R2/scripts.pory"
	waitse
# 213 "data/maps/BygoneVault_R2/scripts.pory"
	setflag FLAG_TEMP_2
	goto BygoneVault_R2_Lever1_1


BygoneVault_R2_Lever2::
# 223 "data/maps/BygoneVault_R2/scripts.pory"
	goto_if_unset FLAG_TEMP_3, BygoneVault_R2_Lever2_2
# 259 "data/maps/BygoneVault_R2/scripts.pory"
	msgbox Text_FlippedSwitch, MSGBOX_AUTOCLOSE
BygoneVault_R2_Lever2_1:
# 261 "data/maps/BygoneVault_R2/scripts.pory"
	closemessage
	return

BygoneVault_R2_Lever2_2:
# 224 "data/maps/BygoneVault_R2/scripts.pory"
	msgbox Text_FlipSwitch, MSGBOX_YESNO
# 225 "data/maps/BygoneVault_R2/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne BygoneVault_R2_Lever2_5
	goto BygoneVault_R2_Lever2_1

BygoneVault_R2_Lever2_5:
# 226 "data/maps/BygoneVault_R2/scripts.pory"
	closemessage
# 227 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 1, 3, 0x241, TRUE
# 228 "data/maps/BygoneVault_R2/scripts.pory"
	special DrawWholeMapView
# 229 "data/maps/BygoneVault_R2/scripts.pory"
	playse SE_SWITCH
# 230 "data/maps/BygoneVault_R2/scripts.pory"
	waitse
# 231 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 4, 2, 0x06B, FALSE
# 232 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 8, 2, 0x06B, FALSE
# 233 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 11, 2, 0x06B, FALSE
# 234 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 2, 3, 0x06B, FALSE
# 235 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 10, 4, 0x06B, FALSE
# 236 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 14, 4, 0x06B, FALSE
# 237 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 8, 5, 0x06B, FALSE
# 238 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 12, 5, 0x06B, FALSE
# 239 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 1, 6, 0x06B, FALSE
# 240 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 4, 7, 0x06B, FALSE
# 241 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 13, 7, 0x06B, FALSE
# 242 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 10, 8, 0x06B, FALSE
# 243 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 4, 9, 0x06B, FALSE
# 244 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 12, 9, 0x06B, FALSE
# 245 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 8, 10, 0x06B, FALSE
# 247 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 14, 3, 0x073, FALSE
# 248 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 5, 4, 0x073, FALSE
# 249 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 3, 5, 0x073, FALSE
# 250 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 6, 7, 0x073, FALSE
# 251 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 11, 7, 0x073, FALSE
# 252 "data/maps/BygoneVault_R2/scripts.pory"
	special DrawWholeMapView
# 253 "data/maps/BygoneVault_R2/scripts.pory"
	playse SE_M_SELF_DESTRUCT
# 254 "data/maps/BygoneVault_R2/scripts.pory"
	waitse
# 255 "data/maps/BygoneVault_R2/scripts.pory"
	setflag FLAG_TEMP_3
	goto BygoneVault_R2_Lever2_1


BygoneVault_R2_Lever3::
# 265 "data/maps/BygoneVault_R2/scripts.pory"
	goto_if_unset FLAG_TEMP_4, BygoneVault_R2_Lever3_2
# 296 "data/maps/BygoneVault_R2/scripts.pory"
	msgbox Text_FlippedSwitch, MSGBOX_AUTOCLOSE
BygoneVault_R2_Lever3_1:
# 298 "data/maps/BygoneVault_R2/scripts.pory"
	closemessage
	return

BygoneVault_R2_Lever3_2:
# 266 "data/maps/BygoneVault_R2/scripts.pory"
	msgbox Text_FlipSwitch, MSGBOX_YESNO
# 267 "data/maps/BygoneVault_R2/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne BygoneVault_R2_Lever3_5
	goto BygoneVault_R2_Lever3_1

BygoneVault_R2_Lever3_5:
# 268 "data/maps/BygoneVault_R2/scripts.pory"
	closemessage
# 269 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 6, 6, 0x241, TRUE
# 270 "data/maps/BygoneVault_R2/scripts.pory"
	special DrawWholeMapView
# 271 "data/maps/BygoneVault_R2/scripts.pory"
	playse SE_SWITCH
# 272 "data/maps/BygoneVault_R2/scripts.pory"
	waitse
# 273 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 14, 3, 0x06B, FALSE
# 274 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 5, 4, 0x06B, FALSE
# 275 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 3, 5, 0x06B, FALSE
# 276 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 6, 7, 0x06B, FALSE
# 277 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 11, 7, 0x06B, FALSE
# 278 "data/maps/BygoneVault_R2/scripts.pory"
	special DrawWholeMapView
# 279 "data/maps/BygoneVault_R2/scripts.pory"
	playse SE_M_SELF_DESTRUCT
# 280 "data/maps/BygoneVault_R2/scripts.pory"
	waitse
# 281 "data/maps/BygoneVault_R2/scripts.pory"
	delay 20
# 282 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 2, 8, 0x001, FALSE
# 283 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 2, 9, 0x001, FALSE
# 284 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 2, 10, 0x001, FALSE
# 285 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 3, 10, 0x080, TRUE
# 286 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 4, 10, 0x081, TRUE
# 287 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 5, 10, 0x082, TRUE
# 288 "data/maps/BygoneVault_R2/scripts.pory"
	special DrawWholeMapView
# 289 "data/maps/BygoneVault_R2/scripts.pory"
	playse SE_M_EXPLOSION
# 290 "data/maps/BygoneVault_R2/scripts.pory"
	waitse
# 291 "data/maps/BygoneVault_R2/scripts.pory"
	delay 10
# 292 "data/maps/BygoneVault_R2/scripts.pory"
	setflag FLAG_TEMP_4
	goto BygoneVault_R2_Lever3_1


BygoneVault_R2_Redd_Text_0:
# 92 "data/maps/BygoneVault_R2/scripts.pory"
	.string "Yo, {PLAYER}!\p"
	.string "This room seems weird, and I bet that we\n"
	.string "aren't going to get through this\l"
	.string "without figuring out its secrets.\p"
	.string "Or at least, that's the feel I get\n"
	.string "from the inscription over there.$"

BygoneVault_R2_Redd_Text_1:
# 100 "data/maps/BygoneVault_R2/scripts.pory"
	.string "The little entrance here seems like\n"
	.string "its key.\p"
	.string "It's too small for one of us to fit\n"
	.string "through, but I bet a Pokémon could\l"
	.string "fit in there.$"

BygoneVault_R2_Redd2_Text_0:
# 118 "data/maps/BygoneVault_R2/scripts.pory"
	.string "Want to give it a try?$"

BygoneVault_R2_Redd2_Text_1:
# 120 "data/maps/BygoneVault_R2/scripts.pory"
	.string "Alright! Give it a shot!$"

BygoneVault_R2_AbandonPuzzle_Text_0:
# 144 "data/maps/BygoneVault_R2/scripts.pory"
	.string "Do you want to abandon the puzzle?$"

BygoneVault_R2_Sign_Text_0:
# 162 "data/maps/BygoneVault_R2/scripts.pory"
	.string "When the floor has been restored\nThy path shall be revealed$"
