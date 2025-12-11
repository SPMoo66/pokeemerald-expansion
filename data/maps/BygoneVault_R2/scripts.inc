BygoneVault_R2_MapScripts::
# 2 "data/maps/BygoneVault_R2/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_LOAD
# 58 "data/maps/BygoneVault_R2/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BygoneVault_R2_MapScripts_MAP_SCRIPT_ON_TRANSITION
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
	return


BygoneVault_R2_StartPuzzle::
# 64 "data/maps/BygoneVault_R2/scripts.pory"
	setflag FLAG_BLOCK_PLAYER_ACTIONS
# 65 "data/maps/BygoneVault_R2/scripts.pory"
	setflag FLAG_PLAY_AS_FIRST_MON_IN_PARTY
# 66 "data/maps/BygoneVault_R2/scripts.pory"
	setflag FLAG_SEMI_PERM_HIDE_FOLLOWER
# 67 "data/maps/BygoneVault_R2/scripts.pory"
	warpsilent MAP_BYGONE_VAULT_R2, 9, 10
	return


BygoneVault_R2_AbandonPuzzle::
# 71 "data/maps/BygoneVault_R2/scripts.pory"
	msgbox BygoneVault_R2_AbandonPuzzle_Text_0, MSGBOX_YESNO
# 72 "data/maps/BygoneVault_R2/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne BygoneVault_R2_AbandonPuzzle_1
	return

BygoneVault_R2_AbandonPuzzle_1:
# 73 "data/maps/BygoneVault_R2/scripts.pory"
	clearflag FLAG_BLOCK_PLAYER_ACTIONS
# 74 "data/maps/BygoneVault_R2/scripts.pory"
	clearflag FLAG_PLAY_AS_FIRST_MON_IN_PARTY
# 75 "data/maps/BygoneVault_R2/scripts.pory"
	clearflag FLAG_SEMI_PERM_HIDE_FOLLOWER
# 76 "data/maps/BygoneVault_R2/scripts.pory"
	warpsilent MAP_BYGONE_VAULT_R2, 9, 13
	return


BygoneVault_R2_FinishPuzzle::
# 81 "data/maps/BygoneVault_R2/scripts.pory"
	clearflag FLAG_BLOCK_PLAYER_ACTIONS
# 82 "data/maps/BygoneVault_R2/scripts.pory"
	clearflag FLAG_PLAY_AS_FIRST_MON_IN_PARTY
# 83 "data/maps/BygoneVault_R2/scripts.pory"
	clearflag FLAG_SEMI_PERM_HIDE_FOLLOWER
	return


BygoneVault_R2_Sign::
# 87 "data/maps/BygoneVault_R2/scripts.pory"
	msgbox BygoneVault_R2_Sign_Text_0, MSGBOX_SIGN
	return


BygoneVault_R2_Lever1::
# 91 "data/maps/BygoneVault_R2/scripts.pory"
	goto_if_unset FLAG_TEMP_2, BygoneVault_R2_Lever1_1
# 142 "data/maps/BygoneVault_R2/scripts.pory"
	msgbox Text_FlippedSwitch, MSGBOX_AUTOCLOSE
	return

BygoneVault_R2_Lever1_1:
# 92 "data/maps/BygoneVault_R2/scripts.pory"
	msgbox Text_FlipSwitch, MSGBOX_YESNO
# 93 "data/maps/BygoneVault_R2/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne BygoneVault_R2_Lever1_4
	return

BygoneVault_R2_Lever1_4:
# 94 "data/maps/BygoneVault_R2/scripts.pory"
	closemessage
# 95 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 13, 2, 0x241, TRUE
# 96 "data/maps/BygoneVault_R2/scripts.pory"
	special DrawWholeMapView
# 97 "data/maps/BygoneVault_R2/scripts.pory"
	playse SE_SWITCH
# 98 "data/maps/BygoneVault_R2/scripts.pory"
	waitse
# 99 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 2, 2, 0x06B, FALSE
# 100 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 3, 3, 0x06B, FALSE
# 101 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 10, 3, 0x06B, FALSE
# 102 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 12, 3, 0x06B, FALSE
# 103 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 7, 4, 0x06B, FALSE
# 104 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 5, 5, 0x06B, FALSE
# 105 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 14, 5, 0x06B, FALSE
# 106 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 4, 6, 0x06B, FALSE
# 107 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 2, 7, 0x06B, FALSE
# 108 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 9, 7, 0x06B, FALSE
# 109 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 6, 8, 0x06B, FALSE
# 110 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 13, 8, 0x06B, FALSE
# 111 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 3, 9, 0x06B, FALSE
# 112 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 7, 10, 0x06B, FALSE
# 114 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 4, 2, 0x073, FALSE
# 115 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 8, 2, 0x073, FALSE
# 116 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 11, 2, 0x073, FALSE
# 117 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 2, 3, 0x073, FALSE
# 118 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 10, 4, 0x073, FALSE
# 119 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 14, 4, 0x073, FALSE
# 120 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 8, 5, 0x073, FALSE
# 121 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 12, 5, 0x073, FALSE
# 122 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 1, 6, 0x073, FALSE
# 123 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 4, 7, 0x073, FALSE
# 124 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 13, 7, 0x073, FALSE
# 125 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 10, 8, 0x073, FALSE
# 126 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 4, 9, 0x073, FALSE
# 127 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 12, 9, 0x073, FALSE
# 128 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 8, 10, 0x073, FALSE
# 130 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 14, 3, 0x06C, TRUE
# 131 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 5, 4, 0x06C, TRUE
# 132 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 3, 5, 0x06C, TRUE
# 133 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 6, 7, 0x06C, TRUE
# 134 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 11, 7, 0x06C, TRUE
# 135 "data/maps/BygoneVault_R2/scripts.pory"
	special DrawWholeMapView
# 136 "data/maps/BygoneVault_R2/scripts.pory"
	playse SE_M_SELF_DESTRUCT
# 137 "data/maps/BygoneVault_R2/scripts.pory"
	waitse
# 138 "data/maps/BygoneVault_R2/scripts.pory"
	setflag FLAG_TEMP_2
	return


BygoneVault_R2_Lever2::
# 147 "data/maps/BygoneVault_R2/scripts.pory"
	goto_if_unset FLAG_TEMP_3, BygoneVault_R2_Lever2_1
# 183 "data/maps/BygoneVault_R2/scripts.pory"
	msgbox Text_FlippedSwitch, MSGBOX_AUTOCLOSE
	return

BygoneVault_R2_Lever2_1:
# 148 "data/maps/BygoneVault_R2/scripts.pory"
	msgbox Text_FlipSwitch, MSGBOX_YESNO
# 149 "data/maps/BygoneVault_R2/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne BygoneVault_R2_Lever2_4
	return

BygoneVault_R2_Lever2_4:
# 150 "data/maps/BygoneVault_R2/scripts.pory"
	closemessage
# 151 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 1, 3, 0x241, TRUE
# 152 "data/maps/BygoneVault_R2/scripts.pory"
	special DrawWholeMapView
# 153 "data/maps/BygoneVault_R2/scripts.pory"
	playse SE_SWITCH
# 154 "data/maps/BygoneVault_R2/scripts.pory"
	waitse
# 155 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 4, 2, 0x06B, FALSE
# 156 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 8, 2, 0x06B, FALSE
# 157 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 11, 2, 0x06B, FALSE
# 158 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 2, 3, 0x06B, FALSE
# 159 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 10, 4, 0x06B, FALSE
# 160 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 14, 4, 0x06B, FALSE
# 161 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 8, 5, 0x06B, FALSE
# 162 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 12, 5, 0x06B, FALSE
# 163 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 1, 6, 0x06B, FALSE
# 164 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 4, 7, 0x06B, FALSE
# 165 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 13, 7, 0x06B, FALSE
# 166 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 10, 8, 0x06B, FALSE
# 167 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 4, 9, 0x06B, FALSE
# 168 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 12, 9, 0x06B, FALSE
# 169 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 8, 10, 0x06B, FALSE
# 171 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 14, 3, 0x073, FALSE
# 172 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 5, 4, 0x073, FALSE
# 173 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 3, 5, 0x073, FALSE
# 174 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 6, 7, 0x073, FALSE
# 175 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 11, 7, 0x073, FALSE
# 176 "data/maps/BygoneVault_R2/scripts.pory"
	special DrawWholeMapView
# 177 "data/maps/BygoneVault_R2/scripts.pory"
	playse SE_M_SELF_DESTRUCT
# 178 "data/maps/BygoneVault_R2/scripts.pory"
	waitse
# 179 "data/maps/BygoneVault_R2/scripts.pory"
	setflag FLAG_TEMP_3
	return


BygoneVault_R2_Lever3::
# 188 "data/maps/BygoneVault_R2/scripts.pory"
	goto_if_unset FLAG_TEMP_4, BygoneVault_R2_Lever3_1
# 219 "data/maps/BygoneVault_R2/scripts.pory"
	msgbox Text_FlippedSwitch, MSGBOX_AUTOCLOSE
	return

BygoneVault_R2_Lever3_1:
# 189 "data/maps/BygoneVault_R2/scripts.pory"
	msgbox Text_FlipSwitch, MSGBOX_YESNO
# 190 "data/maps/BygoneVault_R2/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne BygoneVault_R2_Lever3_4
	return

BygoneVault_R2_Lever3_4:
# 191 "data/maps/BygoneVault_R2/scripts.pory"
	closemessage
# 192 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 6, 6, 0x241, TRUE
# 193 "data/maps/BygoneVault_R2/scripts.pory"
	special DrawWholeMapView
# 194 "data/maps/BygoneVault_R2/scripts.pory"
	playse SE_SWITCH
# 195 "data/maps/BygoneVault_R2/scripts.pory"
	waitse
# 196 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 14, 3, 0x06B, FALSE
# 197 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 5, 4, 0x06B, FALSE
# 198 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 3, 5, 0x06B, FALSE
# 199 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 6, 7, 0x06B, FALSE
# 200 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 11, 7, 0x06B, FALSE
# 201 "data/maps/BygoneVault_R2/scripts.pory"
	special DrawWholeMapView
# 202 "data/maps/BygoneVault_R2/scripts.pory"
	playse SE_M_SELF_DESTRUCT
# 203 "data/maps/BygoneVault_R2/scripts.pory"
	waitse
# 204 "data/maps/BygoneVault_R2/scripts.pory"
	delay 20
# 205 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 2, 8, 0x001, FALSE
# 206 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 2, 9, 0x001, FALSE
# 207 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 2, 10, 0x001, FALSE
# 208 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 3, 10, 0x080, TRUE
# 209 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 4, 10, 0x081, TRUE
# 210 "data/maps/BygoneVault_R2/scripts.pory"
	setmetatile 5, 10, 0x082, TRUE
# 211 "data/maps/BygoneVault_R2/scripts.pory"
	special DrawWholeMapView
# 212 "data/maps/BygoneVault_R2/scripts.pory"
	playse SE_M_EXPLOSION
# 213 "data/maps/BygoneVault_R2/scripts.pory"
	waitse
# 214 "data/maps/BygoneVault_R2/scripts.pory"
	delay 10
# 215 "data/maps/BygoneVault_R2/scripts.pory"
	setflag FLAG_TEMP_4
	return


BygoneVault_R2_AbandonPuzzle_Text_0:
# 71 "data/maps/BygoneVault_R2/scripts.pory"
	.string "Do you want to abandon the puzzle?$"

BygoneVault_R2_Sign_Text_0:
# 87 "data/maps/BygoneVault_R2/scripts.pory"
	.string "When the floor has been restored\nThy path shall be revealed$"
