# 1 "data/maps/RusturfTunnel/scripts.pory"

# 2 "data/maps/RusturfTunnel/scripts.pory"
.equ LOCALID_WANDAS_BF, 1
# 3 "data/maps/RusturfTunnel/scripts.pory"
.set LOCALID_BRINEY, 5
# 4 "data/maps/RusturfTunnel/scripts.pory"
.set LOCALID_GRUNT, 6
# 5 "data/maps/RusturfTunnel/scripts.pory"
.set LOCALID_PEEKO, 7
# 6 "data/maps/RusturfTunnel/scripts.pory"
.equ LOCALID_WANDA, 10
# 7 "data/maps/RusturfTunnel/scripts.pory"

# 8 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_MapScripts::
# 9 "data/maps/RusturfTunnel/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RusturfTunnel_OnTransition
# 10 "data/maps/RusturfTunnel/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, RusturfTunnel_OnFrame
# 11 "data/maps/RusturfTunnel/scripts.pory"
	.byte 0
# 12 "data/maps/RusturfTunnel/scripts.pory"

# 13 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_OnFrame:
# 14 "data/maps/RusturfTunnel/scripts.pory"
	map_script_2 VAR_RUSTURF_TUNNEL_STATE, 4, RusturfTunnel_EventScript_ClearTunnelScene
# 15 "data/maps/RusturfTunnel/scripts.pory"
	map_script_2 VAR_RUSTURF_TUNNEL_STATE, 5, RusturfTunnel_EventScript_ClearTunnelScene
# 16 "data/maps/RusturfTunnel/scripts.pory"
	.2byte 0
# 17 "data/maps/RusturfTunnel/scripts.pory"

# 18 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_OnTransition:
# 19 "data/maps/RusturfTunnel/scripts.pory"
	setflag FLAG_TEMP_2
# 20 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_EMERALBODY_RIVAL_STATE, 3, RusturfTunnel_EventScript_ShowRivals
# 21 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_RUSTURF_TUNNEL_STATE, 2, RusturfTunnel_EventScript_SetAquaGruntAndPeekoPos
# 22 "data/maps/RusturfTunnel/scripts.pory"
	end
# 23 "data/maps/RusturfTunnel/scripts.pory"

# 24 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_ShowRivals::
# 25 "data/maps/RusturfTunnel/scripts.pory"
	clearflag FLAG_TEMP_2
# 26 "data/maps/RusturfTunnel/scripts.pory"
	return
# 27 "data/maps/RusturfTunnel/scripts.pory"

# 28 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_SetAquaGruntAndPeekoPos::
# 29 "data/maps/RusturfTunnel/scripts.pory"
	setobjectxyperm LOCALID_PEEKO, 13, 4
# 30 "data/maps/RusturfTunnel/scripts.pory"
	setobjectxyperm LOCALID_GRUNT, 13, 5
# 31 "data/maps/RusturfTunnel/scripts.pory"
	return
# 32 "data/maps/RusturfTunnel/scripts.pory"

# 33 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_Wanda::
# 34 "data/maps/RusturfTunnel/scripts.pory"
	lock
# 35 "data/maps/RusturfTunnel/scripts.pory"
	faceplayer
# 36 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_BoyfriendOnOtherSideOfRock, MSGBOX_DEFAULT
# 37 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 38 "data/maps/RusturfTunnel/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 39 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 40 "data/maps/RusturfTunnel/scripts.pory"
	release
# 41 "data/maps/RusturfTunnel/scripts.pory"
	end
# 42 "data/maps/RusturfTunnel/scripts.pory"

# 43 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_WandasBoyfriend::
# 44 "data/maps/RusturfTunnel/scripts.pory"
	lock
# 45 "data/maps/RusturfTunnel/scripts.pory"
	faceplayer
# 46 "data/maps/RusturfTunnel/scripts.pory"
	goto_if_set FLAG_TEMP_1, RusturfTunnel_EventScript_AlreadySpokenTo
# 47 "data/maps/RusturfTunnel/scripts.pory"
	setflag FLAG_TEMP_1
# 48 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_WhyCantTheyKeepDigging, MSGBOX_DEFAULT
# 49 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 50 "data/maps/RusturfTunnel/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 51 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 52 "data/maps/RusturfTunnel/scripts.pory"
	release
# 53 "data/maps/RusturfTunnel/scripts.pory"
	end
# 54 "data/maps/RusturfTunnel/scripts.pory"

# 55 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_AlreadySpokenTo::
# 56 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_ToGetToVerdanturf, MSGBOX_DEFAULT
# 57 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 58 "data/maps/RusturfTunnel/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 59 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 60 "data/maps/RusturfTunnel/scripts.pory"
	release
# 61 "data/maps/RusturfTunnel/scripts.pory"
	end
# 62 "data/maps/RusturfTunnel/scripts.pory"

# 63 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_ClearTunnelScene::
# 64 "data/maps/RusturfTunnel/scripts.pory"
	lockall
# 65 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, RusturfTunnel_EventScript_FaceWandasBoyfriend1
# 66 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RusturfTunnel_EventScript_FaceWandasBoyfriend2
# 67 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, RusturfTunnel_EventScript_FaceWandasBoyfriend3
# 68 "data/maps/RusturfTunnel/scripts.pory"
	call RusturfTunnel_EventScript_WandasBoyfriendNotice
# 69 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_YouShatteredBoulderTakeHM, MSGBOX_DEFAULT
# 70 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RusturfTunnel_EventScript_WandasBoyfriendApproachPlayer
# 71 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, RusturfTunnel_EventScript_WandasBoyfriendApproachPlayer
# 72 "data/maps/RusturfTunnel/scripts.pory"
	giveitem ITEM_HM_STRENGTH
# 73 "data/maps/RusturfTunnel/scripts.pory"
	setflag FLAG_RECEIVED_HM_STRENGTH
# 74 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_ExplainStrength, MSGBOX_DEFAULT
# 75 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 76 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, RusturfTunnel_EventScript_BoyfriendApproachWanda1
# 77 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RusturfTunnel_EventScript_BoyfriendApproachWanda2
# 78 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, RusturfTunnel_EventScript_BoyfriendApproachWanda3
# 79 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_WandaReunion, MSGBOX_DEFAULT
# 80 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 81 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, RusturfTunnel_EventScript_WandaAndBoyfriendExit1
# 82 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RusturfTunnel_EventScript_WandaAndBoyfriendExit
# 83 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, RusturfTunnel_EventScript_WandaAndBoyfriendExit
# 84 "data/maps/RusturfTunnel/scripts.pory"
	call RusturfTunnel_EventScript_SetRusturfTunnelOpen
# 85 "data/maps/RusturfTunnel/scripts.pory"
	releaseall
# 86 "data/maps/RusturfTunnel/scripts.pory"
	end
# 87 "data/maps/RusturfTunnel/scripts.pory"

# 88 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_BoyfriendApproachWanda1::
# 89 "data/maps/RusturfTunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RusturfTunnel_Movement_PlayerWatchBoyfriend1
# 90 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_WANDAS_BF, RusturfTunnel_Movement_BoyfriendApproachWanda1
# 91 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 92 "data/maps/RusturfTunnel/scripts.pory"
	return
# 93 "data/maps/RusturfTunnel/scripts.pory"

# 94 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_BoyfriendApproachWanda2::
# 95 "data/maps/RusturfTunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RusturfTunnel_Movement_PlayerWatchBoyfriend
# 96 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_WANDAS_BF, RusturfTunnel_Movement_BoyfriendApproachWanda
# 97 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 98 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_WANDA, Common_Movement_WalkInPlaceFasterDown
# 99 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 100 "data/maps/RusturfTunnel/scripts.pory"
	return
# 101 "data/maps/RusturfTunnel/scripts.pory"

# 102 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_BoyfriendApproachWanda3::
# 103 "data/maps/RusturfTunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RusturfTunnel_Movement_PlayerWatchBoyfriend
# 104 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_WANDAS_BF, RusturfTunnel_Movement_BoyfriendApproachWanda
# 105 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 106 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_WANDA, Common_Movement_WalkInPlaceFasterDown
# 107 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 108 "data/maps/RusturfTunnel/scripts.pory"
	return
# 109 "data/maps/RusturfTunnel/scripts.pory"

# 110 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_FaceWandasBoyfriend1::
# 111 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_WANDAS_BF, Common_Movement_WalkInPlaceFasterUp
# 112 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 113 "data/maps/RusturfTunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 114 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 115 "data/maps/RusturfTunnel/scripts.pory"
	return
# 116 "data/maps/RusturfTunnel/scripts.pory"

# 117 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_FaceWandasBoyfriend2::
# 118 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_WANDAS_BF, RusturfTunnel_Movement_BoyfriendFaceRight
# 119 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 120 "data/maps/RusturfTunnel/scripts.pory"
	return
# 121 "data/maps/RusturfTunnel/scripts.pory"

# 122 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_FaceWandasBoyfriend3::
# 123 "data/maps/RusturfTunnel/scripts.pory"
	return
# 124 "data/maps/RusturfTunnel/scripts.pory"

# 125 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_WandasBoyfriendApproachPlayer::
# 126 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 127 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_WANDAS_BF, Common_Movement_WalkRight
# 128 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 129 "data/maps/RusturfTunnel/scripts.pory"
	return
# 130 "data/maps/RusturfTunnel/scripts.pory"

# 131 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_WandaAndBoyfriendExit1::
# 132 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_WANDA, RusturfTunnel_Movement_WandaExit
# 133 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_WANDAS_BF, RusturfTunnel_Movement_WandasBoyfriendExit1
# 134 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 135 "data/maps/RusturfTunnel/scripts.pory"
	return
# 136 "data/maps/RusturfTunnel/scripts.pory"

# 137 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_WandaAndBoyfriendExit::
# 138 "data/maps/RusturfTunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RusturfTunnel_Movement_PlayerWatchWandaExit
# 139 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_WANDA, RusturfTunnel_Movement_WandaExit
# 140 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_WANDAS_BF, RusturfTunnel_Movement_WandasBoyfriendExit
# 141 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 142 "data/maps/RusturfTunnel/scripts.pory"
	return
# 143 "data/maps/RusturfTunnel/scripts.pory"

# 144 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_WandasBoyfriendNotice::
# 145 "data/maps/RusturfTunnel/scripts.pory"
	playse SE_PIN
# 146 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_WANDAS_BF, Common_Movement_ExclamationMark
# 147 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 148 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_WANDAS_BF, Common_Movement_Delay48
# 149 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 150 "data/maps/RusturfTunnel/scripts.pory"
	return
# 151 "data/maps/RusturfTunnel/scripts.pory"

# 152 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_WandaExit:
# 153 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 154 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 155 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 156 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 157 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 158 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 159 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 160 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 161 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 162 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 163 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 164 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 165 "data/maps/RusturfTunnel/scripts.pory"

# 166 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_PlayerWatchWandaExit:
# 167 "data/maps/RusturfTunnel/scripts.pory"
	delay_8
# 168 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_up
# 169 "data/maps/RusturfTunnel/scripts.pory"
	delay_16
# 170 "data/maps/RusturfTunnel/scripts.pory"
	delay_16
# 171 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_right
# 172 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 173 "data/maps/RusturfTunnel/scripts.pory"

# 174 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_PlayerWatchBoyfriend1:
# 175 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 176 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_right
# 177 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 178 "data/maps/RusturfTunnel/scripts.pory"

# 179 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_PlayerWatchBoyfriend:
# 180 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 181 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_left
# 182 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 183 "data/maps/RusturfTunnel/scripts.pory"

# 184 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_BoyfriendFaceRight:
# 185 "data/maps/RusturfTunnel/scripts.pory"
	walk_up
# 186 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_right
# 187 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 188 "data/maps/RusturfTunnel/scripts.pory"

# 189 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_WandasBoyfriendExit1:
# 190 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 191 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 192 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 193 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 194 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 195 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 196 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 197 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 198 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 199 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 200 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 201 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 202 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 203 "data/maps/RusturfTunnel/scripts.pory"

# 204 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_WandasBoyfriendExit:
# 205 "data/maps/RusturfTunnel/scripts.pory"
	walk_up
# 206 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 207 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 208 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 209 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 210 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 211 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 212 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 213 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 214 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 215 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 216 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 217 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 218 "data/maps/RusturfTunnel/scripts.pory"

# 219 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_BoyfriendApproachWanda1:
# 220 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_fast_up
# 221 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_fast_up
# 222 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_up
# 223 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_right
# 224 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 225 "data/maps/RusturfTunnel/scripts.pory"

# 226 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_BoyfriendApproachWanda:
# 227 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_fast_right
# 228 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_fast_right
# 229 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_right
# 230 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_up
# 231 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 232 "data/maps/RusturfTunnel/scripts.pory"

# 233 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_TunnelBlockagePos1::
# 234 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_TEMP_1, 1
# 235 "data/maps/RusturfTunnel/scripts.pory"
	end
# 236 "data/maps/RusturfTunnel/scripts.pory"

# 237 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_TunnelBlockagePos2::
# 238 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_TEMP_1, 2
# 239 "data/maps/RusturfTunnel/scripts.pory"
	end
# 240 "data/maps/RusturfTunnel/scripts.pory"

# 241 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_TunnelBlockagePos3::
# 242 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_TEMP_1, 3
# 243 "data/maps/RusturfTunnel/scripts.pory"
	end
# 244 "data/maps/RusturfTunnel/scripts.pory"

# 245 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_AquaGruntBackUp::
# 246 "data/maps/RusturfTunnel/scripts.pory"
	lockall
# 247 "data/maps/RusturfTunnel/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 248 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_ComeAndGetSome, MSGBOX_DEFAULT
# 249 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 250 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_GRUNT, RusturfTunnel_Movement_GruntAndPeekoBackUp
# 251 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_PEEKO, RusturfTunnel_Movement_GruntAndPeekoBackUp
# 252 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 253 "data/maps/RusturfTunnel/scripts.pory"
	copyobjectxytoperm LOCALID_GRUNT
# 254 "data/maps/RusturfTunnel/scripts.pory"
	copyobjectxytoperm LOCALID_PEEKO
# 255 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_RUSTURF_TUNNEL_STATE, 3
# 256 "data/maps/RusturfTunnel/scripts.pory"
	releaseall
# 257 "data/maps/RusturfTunnel/scripts.pory"
	end
# 258 "data/maps/RusturfTunnel/scripts.pory"

# 259 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_GruntAndPeekoBackUp:
# 260 "data/maps/RusturfTunnel/scripts.pory"
	lock_facing_direction
# 261 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 262 "data/maps/RusturfTunnel/scripts.pory"
	unlock_facing_direction
# 263 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 264 "data/maps/RusturfTunnel/scripts.pory"

# 265 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_Peeko::
# 266 "data/maps/RusturfTunnel/scripts.pory"
	lock
# 267 "data/maps/RusturfTunnel/scripts.pory"
	faceplayer
# 268 "data/maps/RusturfTunnel/scripts.pory"
	waitse
# 269 "data/maps/RusturfTunnel/scripts.pory"
	playmoncry SPECIES_WINGULL, CRY_MODE_NORMAL
# 270 "data/maps/RusturfTunnel/scripts.pory"
	speakername (CommonText_Peeko)
# 271 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_Peeko, MSGBOX_DEFAULT
# 272 "data/maps/RusturfTunnel/scripts.pory"
	waitmoncry
# 273 "data/maps/RusturfTunnel/scripts.pory"
	release
# 274 "data/maps/RusturfTunnel/scripts.pory"
	end
# 275 "data/maps/RusturfTunnel/scripts.pory"

# 276 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_Grunt::
# 277 "data/maps/RusturfTunnel/scripts.pory"
	lock
# 278 "data/maps/RusturfTunnel/scripts.pory"
	faceplayer
# 279 "data/maps/RusturfTunnel/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 280 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_GruntIntro, MSGBOX_DEFAULT
# 281 "data/maps/RusturfTunnel/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_RUSTURF_TUNNEL, RusturfTunnel_Text_GruntDefeat
# 282 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_GruntTakePackage, MSGBOX_DEFAULT
# 283 "data/maps/RusturfTunnel/scripts.pory"
	giveitem ITEM_DEVON_PARTS
# 284 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 285 "data/maps/RusturfTunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RusturfTunnel_Movement_PushPlayerAsideForGrunt
# 286 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_GRUNT, RusturfTunnel_Movement_GruntEscape
# 287 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 288 "data/maps/RusturfTunnel/scripts.pory"
	removeobject LOCALID_GRUNT
# 289 "data/maps/RusturfTunnel/scripts.pory"
	delay 50
# 290 "data/maps/RusturfTunnel/scripts.pory"
	addobject LOCALID_BRINEY
# 291 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_BRINEY, Common_Movement_WalkRight7
# 292 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 293 "data/maps/RusturfTunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RusturfTunnel_Movement_PlayerMoveAsideForBriney
# 294 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_BRINEY, RusturfTunnel_Movement_BrineyApproachPeeko2
# 295 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 296 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_PeekoGladToSeeYouSafe, MSGBOX_DEFAULT
# 297 "data/maps/RusturfTunnel/scripts.pory"
	playfanfare MUS_HG_DEX_RATING_6
# 298 "data/maps/RusturfTunnel/scripts.pory"
	waitfanfare
# 299 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_BRINEY, Common_Movement_FacePlayer
# 300 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 301 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_ThankYouLetsGoHomePeeko, MSGBOX_DEFAULT
# 302 "data/maps/RusturfTunnel/scripts.pory"
	speakername (CommonText_Peeko)
# 303 "data/maps/RusturfTunnel/scripts.pory"
	message RusturfTunnel_Text_Peeko2
# 304 "data/maps/RusturfTunnel/scripts.pory"
	waitmessage
# 305 "data/maps/RusturfTunnel/scripts.pory"
	waitse
# 306 "data/maps/RusturfTunnel/scripts.pory"
	playmoncry SPECIES_WINGULL, CRY_MODE_NORMAL
# 307 "data/maps/RusturfTunnel/scripts.pory"
	waitbuttonpress
# 308 "data/maps/RusturfTunnel/scripts.pory"
	waitmoncry
# 309 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 310 "data/maps/RusturfTunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RusturfTunnel_Movement_PlayerWatchBrineyExit
# 311 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_BRINEY, Common_Movement_WalkLeft11
# 312 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_PEEKO, Common_Movement_WalkLeft9
# 313 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 314 "data/maps/RusturfTunnel/scripts.pory"
	removeobject LOCALID_BRINEY
# 315 "data/maps/RusturfTunnel/scripts.pory"
	removeobject LOCALID_PEEKO
# 316 "data/maps/RusturfTunnel/scripts.pory"
	clearflag FLAG_DEVON_GOODS_STOLEN
# 317 "data/maps/RusturfTunnel/scripts.pory"
	setflag FLAG_RECOVERED_DEVON_GOODS
# 318 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 4
# 319 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_BRINEY_HOUSE_STATE, 1
# 320 "data/maps/RusturfTunnel/scripts.pory"
	setflag FLAG_HIDE_ROUTE_116_MR_BRINEY
# 321 "data/maps/RusturfTunnel/scripts.pory"
	release
# 322 "data/maps/RusturfTunnel/scripts.pory"
	end
# 323 "data/maps/RusturfTunnel/scripts.pory"

# 324 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_PushPlayerAsideForGrunt:
# 325 "data/maps/RusturfTunnel/scripts.pory"
	face_down
# 326 "data/maps/RusturfTunnel/scripts.pory"
	lock_facing_direction
# 327 "data/maps/RusturfTunnel/scripts.pory"
	walk_up
# 328 "data/maps/RusturfTunnel/scripts.pory"
	unlock_facing_direction
# 329 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_left
# 330 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 331 "data/maps/RusturfTunnel/scripts.pory"

# 332 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_PlayerMoveAsideForBriney:
# 333 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 334 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_up
# 335 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 336 "data/maps/RusturfTunnel/scripts.pory"

# 337 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_GruntEscape:
# 338 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 339 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 340 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 341 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 342 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 343 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 344 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 345 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 346 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 347 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 348 "data/maps/RusturfTunnel/scripts.pory"

# 349 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_PlayerWatchBrineyExit:
# 350 "data/maps/RusturfTunnel/scripts.pory"
	delay_16
# 351 "data/maps/RusturfTunnel/scripts.pory"
	delay_8
# 352 "data/maps/RusturfTunnel/scripts.pory"
	delay_4
# 353 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_left
# 354 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 355 "data/maps/RusturfTunnel/scripts.pory"

# 356 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_BrineyApproachPeeko2:
# 357 "data/maps/RusturfTunnel/scripts.pory"
	delay_16
# 358 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 359 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 360 "data/maps/RusturfTunnel/scripts.pory"

# 361 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_Mike::
# 362 "data/maps/RusturfTunnel/scripts.pory"
	trainerbattle_single TRAINER_MIKE_2, RusturfTunnel_Text_MikeIntro, RusturfTunnel_Text_MikeDefeat
# 363 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_MikePostBattle, MSGBOX_AUTOCLOSE
# 364 "data/maps/RusturfTunnel/scripts.pory"
	end
# 365 "data/maps/RusturfTunnel/scripts.pory"

# 366 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_ComeAndGetSome:
# 367 "data/maps/RusturfTunnel/scripts.pory"
	.string "What, are you coming?\n"
# 368 "data/maps/RusturfTunnel/scripts.pory"
	.string "Come and get some, then!$"
# 369 "data/maps/RusturfTunnel/scripts.pory"

# 370 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_Peeko:
# 371 "data/maps/RusturfTunnel/scripts.pory"
	.string "Pii pihyoh!$"
# 372 "data/maps/RusturfTunnel/scripts.pory"

# 373 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_GruntIntro:
# 374 "data/maps/RusturfTunnel/scripts.pory"
	.string "Grah, keelhaul it all!\p"
# 375 "data/maps/RusturfTunnel/scripts.pory"
	.string "That hostage Pokémon turned out to\n"
# 376 "data/maps/RusturfTunnel/scripts.pory"
	.string "be worthless!\p"
# 377 "data/maps/RusturfTunnel/scripts.pory"
	.string "And to think I made a getaway…\n"
# 378 "data/maps/RusturfTunnel/scripts.pory"
	.string "In this tunnel to nowhere!\p"
# 379 "data/maps/RusturfTunnel/scripts.pory"
	.string "Hey! You!\n"
# 380 "data/maps/RusturfTunnel/scripts.pory"
	.string "So you want to battle me?$"
# 381 "data/maps/RusturfTunnel/scripts.pory"

# 382 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_GruntDefeat:
# 383 "data/maps/RusturfTunnel/scripts.pory"
	.string "Urrrggh! My career in crime comes to\n"
# 384 "data/maps/RusturfTunnel/scripts.pory"
	.string "a dead end!$"
# 385 "data/maps/RusturfTunnel/scripts.pory"

# 386 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_GruntTakePackage:
# 387 "data/maps/RusturfTunnel/scripts.pory"
	.string "This is plain not right…\p"
# 388 "data/maps/RusturfTunnel/scripts.pory"
	.string "The Boss told me this would be a\n"
# 389 "data/maps/RusturfTunnel/scripts.pory"
	.string "slick-and-easy job to pull.\p"
# 390 "data/maps/RusturfTunnel/scripts.pory"
	.string "All I had to do was steal some package\n"
# 391 "data/maps/RusturfTunnel/scripts.pory"
	.string "from Devon.\p"
# 392 "data/maps/RusturfTunnel/scripts.pory"
	.string "Tch!\n"
# 393 "data/maps/RusturfTunnel/scripts.pory"
	.string "You want it back that badly, take it!$"
# 394 "data/maps/RusturfTunnel/scripts.pory"

# 395 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_PeekoGladToSeeYouSafe:
# 396 "data/maps/RusturfTunnel/scripts.pory"
	.string "Peeko!\n"
# 397 "data/maps/RusturfTunnel/scripts.pory"
	.string "Am I glad to see you're safe!$"
# 398 "data/maps/RusturfTunnel/scripts.pory"

# 399 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_ThankYouLetsGoHomePeeko:
# 400 "data/maps/RusturfTunnel/scripts.pory"
	.string "Peeko owes her life to you!\p"
# 401 "data/maps/RusturfTunnel/scripts.pory"
	.string "They call me Mr. Briney.\n"
# 402 "data/maps/RusturfTunnel/scripts.pory"
	.string "And, you are?\p"
# 403 "data/maps/RusturfTunnel/scripts.pory"
	.string "… … … … … … … …\n"
# 404 "data/maps/RusturfTunnel/scripts.pory"
	.string "… … … … … … … …\p"
# 405 "data/maps/RusturfTunnel/scripts.pory"
	.string "Ah, so you are {PLAYER}{KUN}!\n"
# 406 "data/maps/RusturfTunnel/scripts.pory"
	.string "I sincerely thank you!\p"
# 407 "data/maps/RusturfTunnel/scripts.pory"
	.string "Now, if there's anything that troubles\n"
# 408 "data/maps/RusturfTunnel/scripts.pory"
	.string "you, don't hesitate to tell me!\p"
# 409 "data/maps/RusturfTunnel/scripts.pory"
	.string "You can usually find me in my cottage\n"
# 410 "data/maps/RusturfTunnel/scripts.pory"
	.string "by the sea near Petalburg Woods.\p"
# 411 "data/maps/RusturfTunnel/scripts.pory"
	.string "Come, Peeko, we should make our way\n"
# 412 "data/maps/RusturfTunnel/scripts.pory"
	.string "home.$"
# 413 "data/maps/RusturfTunnel/scripts.pory"

# 414 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_Peeko2:
# 415 "data/maps/RusturfTunnel/scripts.pory"
	.string "Pihyoh!$"
# 416 "data/maps/RusturfTunnel/scripts.pory"

# 417 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_WhyCantTheyKeepDigging:
# 418 "data/maps/RusturfTunnel/scripts.pory"
	.string "… …\p"
# 419 "data/maps/RusturfTunnel/scripts.pory"
	.string "Why can't they keep digging?\n"
# 420 "data/maps/RusturfTunnel/scripts.pory"
	.string "Is the bedrock too hard?\p"
# 421 "data/maps/RusturfTunnel/scripts.pory"
	.string "My beloved awaits me in Verdanturf\n"
# 422 "data/maps/RusturfTunnel/scripts.pory"
	.string "Town just beyond here…\p"
# 423 "data/maps/RusturfTunnel/scripts.pory"
	.string "If Rustboro and Verdanturf were\n"
# 424 "data/maps/RusturfTunnel/scripts.pory"
	.string "joined by this tunnel, I could visit\l"
# 425 "data/maps/RusturfTunnel/scripts.pory"
	.string "her every day…\p"
# 426 "data/maps/RusturfTunnel/scripts.pory"
	.string "But this…\n"
# 427 "data/maps/RusturfTunnel/scripts.pory"
	.string "What am I to do?$"
# 428 "data/maps/RusturfTunnel/scripts.pory"

# 429 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_ToGetToVerdanturf:
# 430 "data/maps/RusturfTunnel/scripts.pory"
	.string "To get from Rustboro to Verdanturf,\n"
# 431 "data/maps/RusturfTunnel/scripts.pory"
	.string "you need to go to Dewford, then pass\l"
# 432 "data/maps/RusturfTunnel/scripts.pory"
	.string "through Slateport and Mauville…$"
# 433 "data/maps/RusturfTunnel/scripts.pory"

# 434 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_YouShatteredBoulderTakeHM:
# 435 "data/maps/RusturfTunnel/scripts.pory"
	.string "Wow! You shattered that boulder\n"
# 436 "data/maps/RusturfTunnel/scripts.pory"
	.string "blocking the way.\p"
# 437 "data/maps/RusturfTunnel/scripts.pory"
	.string "To show you how much I appreciate it,\n"
# 438 "data/maps/RusturfTunnel/scripts.pory"
	.string "I'd like you to have this HM.$"
# 439 "data/maps/RusturfTunnel/scripts.pory"

# 440 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_ExplainStrength:
# 441 "data/maps/RusturfTunnel/scripts.pory"
	.string "That HM contains Strength.\p"
# 442 "data/maps/RusturfTunnel/scripts.pory"
	.string "If a muscular Pokémon were to learn\n"
# 443 "data/maps/RusturfTunnel/scripts.pory"
	.string "that, it would be able to move even\l"
# 444 "data/maps/RusturfTunnel/scripts.pory"
	.string "large boulders.$"
# 445 "data/maps/RusturfTunnel/scripts.pory"

# 446 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_WandaReunion:
# 447 "data/maps/RusturfTunnel/scripts.pory"
	.string "Wanda!\n"
# 448 "data/maps/RusturfTunnel/scripts.pory"
	.string "Now I can see you anytime!\p"
# 449 "data/maps/RusturfTunnel/scripts.pory"
	.string "Wanda: That's…wonderful.\p"
# 450 "data/maps/RusturfTunnel/scripts.pory"
	.string "Please, take some rest at my home.$"
# 451 "data/maps/RusturfTunnel/scripts.pory"

# 452 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_BoyfriendOnOtherSideOfRock:
# 453 "data/maps/RusturfTunnel/scripts.pory"
	.string "On the other side of this rock…\n"
# 454 "data/maps/RusturfTunnel/scripts.pory"
	.string "My boyfriend is there.\p"
# 455 "data/maps/RusturfTunnel/scripts.pory"
	.string "He… He's not just digging the tunnel\n"
# 456 "data/maps/RusturfTunnel/scripts.pory"
	.string "to come see me.\p"
# 457 "data/maps/RusturfTunnel/scripts.pory"
	.string "He works his hands raw and rough\n"
# 458 "data/maps/RusturfTunnel/scripts.pory"
	.string "for the benefit of everyone.$"
# 459 "data/maps/RusturfTunnel/scripts.pory"

# 460 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_MikeIntro:
# 461 "data/maps/RusturfTunnel/scripts.pory"
	.string "What do you call a wild man up in the\n"
# 462 "data/maps/RusturfTunnel/scripts.pory"
	.string "mountains? A mountain man, right?\p"
# 463 "data/maps/RusturfTunnel/scripts.pory"
	.string "So why don't they call a Pokémon in\n"
# 464 "data/maps/RusturfTunnel/scripts.pory"
	.string "the mountains a mountain Pokémon?$"
# 465 "data/maps/RusturfTunnel/scripts.pory"

# 466 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_MikeDefeat:
# 467 "data/maps/RusturfTunnel/scripts.pory"
	.string "My Pokémon…\n"
# 468 "data/maps/RusturfTunnel/scripts.pory"
	.string "Ran out of power…$"
# 469 "data/maps/RusturfTunnel/scripts.pory"

# 470 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_MikePostBattle:
# 471 "data/maps/RusturfTunnel/scripts.pory"
	.string "They halted development here to\n"
# 472 "data/maps/RusturfTunnel/scripts.pory"
	.string "protect Pokémon, right?\l"
# 473 "data/maps/RusturfTunnel/scripts.pory"
	.string "There's a feel-good story!$"
