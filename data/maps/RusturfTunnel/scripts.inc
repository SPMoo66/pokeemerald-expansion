# 1 "data/maps/RusturfTunnel/scripts.pory"

# 2 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_MapScripts::
# 3 "data/maps/RusturfTunnel/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RusturfTunnel_OnTransition
# 4 "data/maps/RusturfTunnel/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, RusturfTunnel_OnFrame
# 5 "data/maps/RusturfTunnel/scripts.pory"
	.byte 0
# 6 "data/maps/RusturfTunnel/scripts.pory"

# 7 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_OnFrame:
# 8 "data/maps/RusturfTunnel/scripts.pory"
	map_script_2 VAR_RUSTURF_TUNNEL_STATE, 4, RusturfTunnel_EventScript_ClearTunnelScene
# 9 "data/maps/RusturfTunnel/scripts.pory"
	map_script_2 VAR_RUSTURF_TUNNEL_STATE, 5, RusturfTunnel_EventScript_ClearTunnelScene
# 10 "data/maps/RusturfTunnel/scripts.pory"
	.2byte 0
# 11 "data/maps/RusturfTunnel/scripts.pory"

# 12 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_OnTransition:
# 13 "data/maps/RusturfTunnel/scripts.pory"
	setflag FLAG_TEMP_2
# 14 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_EMERALBODY_RIVAL_STATE, 3, RusturfTunnel_EventScript_ShowRivals
# 15 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_RUSTURF_TUNNEL_STATE, 2, RusturfTunnel_EventScript_SetAquaGruntAndPeekoPos
# 16 "data/maps/RusturfTunnel/scripts.pory"
	end
# 17 "data/maps/RusturfTunnel/scripts.pory"

# 18 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_ShowRivals::
# 19 "data/maps/RusturfTunnel/scripts.pory"
	clearflag FLAG_TEMP_2
# 20 "data/maps/RusturfTunnel/scripts.pory"
	return
# 21 "data/maps/RusturfTunnel/scripts.pory"

# 22 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_SetAquaGruntAndPeekoPos::
# 23 "data/maps/RusturfTunnel/scripts.pory"
	setobjectxyperm LOCALID_RUSTURF_TUNNEL_PEEKO, 13, 4
# 24 "data/maps/RusturfTunnel/scripts.pory"
	setobjectxyperm LOCALID_RUSTURF_TUNNEL_GRUNT, 13, 5
# 25 "data/maps/RusturfTunnel/scripts.pory"
	return
# 26 "data/maps/RusturfTunnel/scripts.pory"

# 27 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_Wanda::
# 28 "data/maps/RusturfTunnel/scripts.pory"
	lock
# 29 "data/maps/RusturfTunnel/scripts.pory"
	faceplayer
# 30 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_BoyfriendOnOtherSideOfRock, MSGBOX_DEFAULT
# 31 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 32 "data/maps/RusturfTunnel/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 33 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 34 "data/maps/RusturfTunnel/scripts.pory"
	release
# 35 "data/maps/RusturfTunnel/scripts.pory"
	end
# 36 "data/maps/RusturfTunnel/scripts.pory"

# 37 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_WandasBoyfriend::
# 38 "data/maps/RusturfTunnel/scripts.pory"
	lock
# 39 "data/maps/RusturfTunnel/scripts.pory"
	faceplayer
# 40 "data/maps/RusturfTunnel/scripts.pory"
	goto_if_set FLAG_TEMP_1, RusturfTunnel_EventScript_AlreadySpokenTo
# 41 "data/maps/RusturfTunnel/scripts.pory"
	setflag FLAG_TEMP_1
# 42 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_WhyCantTheyKeepDigging, MSGBOX_DEFAULT
# 43 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 44 "data/maps/RusturfTunnel/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 45 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 46 "data/maps/RusturfTunnel/scripts.pory"
	release
# 47 "data/maps/RusturfTunnel/scripts.pory"
	end
# 48 "data/maps/RusturfTunnel/scripts.pory"

# 49 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_AlreadySpokenTo::
# 50 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_ToGetToVerdanturf, MSGBOX_DEFAULT
# 51 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 52 "data/maps/RusturfTunnel/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 53 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 54 "data/maps/RusturfTunnel/scripts.pory"
	release
# 55 "data/maps/RusturfTunnel/scripts.pory"
	end
# 56 "data/maps/RusturfTunnel/scripts.pory"

# 57 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_ClearTunnelScene::
# 58 "data/maps/RusturfTunnel/scripts.pory"
	lockall
# 59 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, RusturfTunnel_EventScript_FaceWandasBoyfriend1
# 60 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RusturfTunnel_EventScript_FaceWandasBoyfriend2
# 61 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, RusturfTunnel_EventScript_FaceWandasBoyfriend3
# 62 "data/maps/RusturfTunnel/scripts.pory"
	call RusturfTunnel_EventScript_WandasBoyfriendNotice
# 63 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_YouShatteredBoulderTakeHM, MSGBOX_DEFAULT
# 64 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RusturfTunnel_EventScript_WandasBoyfriendApproachPlayer
# 65 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, RusturfTunnel_EventScript_WandasBoyfriendApproachPlayer
# 66 "data/maps/RusturfTunnel/scripts.pory"
	giveitem ITEM_HM_STRENGTH
# 67 "data/maps/RusturfTunnel/scripts.pory"
	setflag FLAG_RECEIVED_HM_STRENGTH
# 68 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_ExplainStrength, MSGBOX_DEFAULT
# 69 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 70 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, RusturfTunnel_EventScript_BoyfriendApproachWanda1
# 71 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RusturfTunnel_EventScript_BoyfriendApproachWanda2
# 72 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, RusturfTunnel_EventScript_BoyfriendApproachWanda3
# 73 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_WandaReunion, MSGBOX_DEFAULT
# 74 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 75 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, RusturfTunnel_EventScript_WandaAndBoyfriendExit1
# 76 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RusturfTunnel_EventScript_WandaAndBoyfriendExit
# 77 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, RusturfTunnel_EventScript_WandaAndBoyfriendExit
# 78 "data/maps/RusturfTunnel/scripts.pory"
	call RusturfTunnel_EventScript_SetRusturfTunnelOpen
# 79 "data/maps/RusturfTunnel/scripts.pory"
	releaseall
# 80 "data/maps/RusturfTunnel/scripts.pory"
	end
# 81 "data/maps/RusturfTunnel/scripts.pory"

# 82 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_BoyfriendApproachWanda1::
# 83 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_PLAYER, RusturfTunnel_Movement_PlayerWatchBoyfriend1
# 84 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDAS_BF, RusturfTunnel_Movement_BoyfriendApproachWanda1
# 85 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 86 "data/maps/RusturfTunnel/scripts.pory"
	return
# 87 "data/maps/RusturfTunnel/scripts.pory"

# 88 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_BoyfriendApproachWanda2::
# 89 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_PLAYER, RusturfTunnel_Movement_PlayerWatchBoyfriend
# 90 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDAS_BF, RusturfTunnel_Movement_BoyfriendApproachWanda
# 91 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 92 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDA, Common_Movement_WalkInPlaceFasterDown
# 93 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 94 "data/maps/RusturfTunnel/scripts.pory"
	return
# 95 "data/maps/RusturfTunnel/scripts.pory"

# 96 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_BoyfriendApproachWanda3::
# 97 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_PLAYER, RusturfTunnel_Movement_PlayerWatchBoyfriend
# 98 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDAS_BF, RusturfTunnel_Movement_BoyfriendApproachWanda
# 99 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 100 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDA, Common_Movement_WalkInPlaceFasterDown
# 101 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 102 "data/maps/RusturfTunnel/scripts.pory"
	return
# 103 "data/maps/RusturfTunnel/scripts.pory"

# 104 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_FaceWandasBoyfriend1::
# 105 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDAS_BF, Common_Movement_WalkInPlaceFasterUp
# 106 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 107 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 108 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 109 "data/maps/RusturfTunnel/scripts.pory"
	return
# 110 "data/maps/RusturfTunnel/scripts.pory"

# 111 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_FaceWandasBoyfriend2::
# 112 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDAS_BF, RusturfTunnel_Movement_BoyfriendFaceRight
# 113 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 114 "data/maps/RusturfTunnel/scripts.pory"
	return
# 115 "data/maps/RusturfTunnel/scripts.pory"

# 116 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_FaceWandasBoyfriend3::
# 117 "data/maps/RusturfTunnel/scripts.pory"
	return
# 118 "data/maps/RusturfTunnel/scripts.pory"

# 119 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_WandasBoyfriendApproachPlayer::
# 120 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 121 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDAS_BF, Common_Movement_WalkRight
# 122 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 123 "data/maps/RusturfTunnel/scripts.pory"
	return
# 124 "data/maps/RusturfTunnel/scripts.pory"

# 125 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_WandaAndBoyfriendExit1::
# 126 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDA, RusturfTunnel_Movement_WandaExit
# 127 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDAS_BF, RusturfTunnel_Movement_WandasBoyfriendExit1
# 128 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 129 "data/maps/RusturfTunnel/scripts.pory"
	return
# 130 "data/maps/RusturfTunnel/scripts.pory"

# 131 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_WandaAndBoyfriendExit::
# 132 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_PLAYER, RusturfTunnel_Movement_PlayerWatchWandaExit
# 133 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDA, RusturfTunnel_Movement_WandaExit
# 134 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDAS_BF, RusturfTunnel_Movement_WandasBoyfriendExit
# 135 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 136 "data/maps/RusturfTunnel/scripts.pory"
	return
# 137 "data/maps/RusturfTunnel/scripts.pory"

# 138 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_WandasBoyfriendNotice::
# 139 "data/maps/RusturfTunnel/scripts.pory"
	playse SE_PIN
# 140 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDAS_BF, Common_Movement_ExclamationMark
# 141 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 142 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDAS_BF, Common_Movement_Delay48
# 143 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 144 "data/maps/RusturfTunnel/scripts.pory"
	return
# 145 "data/maps/RusturfTunnel/scripts.pory"

# 146 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_WandaExit:
# 147 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 148 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 149 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 150 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 151 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 152 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 153 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 154 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 155 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 156 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 157 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 158 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 159 "data/maps/RusturfTunnel/scripts.pory"

# 160 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_PlayerWatchWandaExit:
# 161 "data/maps/RusturfTunnel/scripts.pory"
	delay_8
# 162 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_up
# 163 "data/maps/RusturfTunnel/scripts.pory"
	delay_16
# 164 "data/maps/RusturfTunnel/scripts.pory"
	delay_16
# 165 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_right
# 166 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 167 "data/maps/RusturfTunnel/scripts.pory"

# 168 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_PlayerWatchBoyfriend1:
# 169 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 170 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_right
# 171 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 172 "data/maps/RusturfTunnel/scripts.pory"

# 173 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_PlayerWatchBoyfriend:
# 174 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 175 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_left
# 176 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 177 "data/maps/RusturfTunnel/scripts.pory"

# 178 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_BoyfriendFaceRight:
# 179 "data/maps/RusturfTunnel/scripts.pory"
	walk_up
# 180 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_right
# 181 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 182 "data/maps/RusturfTunnel/scripts.pory"

# 183 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_WandasBoyfriendExit1:
# 184 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 185 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 186 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 187 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 188 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 189 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 190 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 191 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 192 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 193 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 194 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 195 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 196 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 197 "data/maps/RusturfTunnel/scripts.pory"

# 198 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_WandasBoyfriendExit:
# 199 "data/maps/RusturfTunnel/scripts.pory"
	walk_up
# 200 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 201 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 202 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 203 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 204 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 205 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 206 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 207 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 208 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 209 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 210 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 211 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 212 "data/maps/RusturfTunnel/scripts.pory"

# 213 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_BoyfriendApproachWanda1:
# 214 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_fast_up
# 215 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_fast_up
# 216 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_up
# 217 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_right
# 218 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 219 "data/maps/RusturfTunnel/scripts.pory"

# 220 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_BoyfriendApproachWanda:
# 221 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_fast_right
# 222 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_fast_right
# 223 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_right
# 224 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_up
# 225 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 226 "data/maps/RusturfTunnel/scripts.pory"

# 227 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_TunnelBlockagePos1::
# 228 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_TEMP_1, 1
# 229 "data/maps/RusturfTunnel/scripts.pory"
	end
# 230 "data/maps/RusturfTunnel/scripts.pory"

# 231 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_TunnelBlockagePos2::
# 232 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_TEMP_1, 2
# 233 "data/maps/RusturfTunnel/scripts.pory"
	end
# 234 "data/maps/RusturfTunnel/scripts.pory"

# 235 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_TunnelBlockagePos3::
# 236 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_TEMP_1, 3
# 237 "data/maps/RusturfTunnel/scripts.pory"
	end
# 238 "data/maps/RusturfTunnel/scripts.pory"

# 239 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_AquaGruntBackUp::
# 240 "data/maps/RusturfTunnel/scripts.pory"
	lockall
# 241 "data/maps/RusturfTunnel/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 242 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_ComeAndGetSome, MSGBOX_DEFAULT
# 243 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 244 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_GRUNT, RusturfTunnel_Movement_GruntAndPeekoBackUp
# 245 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_PEEKO, RusturfTunnel_Movement_GruntAndPeekoBackUp
# 246 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 247 "data/maps/RusturfTunnel/scripts.pory"
	copyobjectxytoperm LOCALID_RUSTURF_TUNNEL_GRUNT
# 248 "data/maps/RusturfTunnel/scripts.pory"
	copyobjectxytoperm LOCALID_RUSTURF_TUNNEL_PEEKO
# 249 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_RUSTURF_TUNNEL_STATE, 3
# 250 "data/maps/RusturfTunnel/scripts.pory"
	releaseall
# 251 "data/maps/RusturfTunnel/scripts.pory"
	end
# 252 "data/maps/RusturfTunnel/scripts.pory"

# 253 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_GruntAndPeekoBackUp:
# 254 "data/maps/RusturfTunnel/scripts.pory"
	lock_facing_direction
# 255 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 256 "data/maps/RusturfTunnel/scripts.pory"
	unlock_facing_direction
# 257 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 258 "data/maps/RusturfTunnel/scripts.pory"

# 259 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_Peeko::
# 260 "data/maps/RusturfTunnel/scripts.pory"
	lock
# 261 "data/maps/RusturfTunnel/scripts.pory"
	faceplayer
# 262 "data/maps/RusturfTunnel/scripts.pory"
	waitse
# 263 "data/maps/RusturfTunnel/scripts.pory"
	playmoncry SPECIES_WINGULL, CRY_MODE_NORMAL
# 264 "data/maps/RusturfTunnel/scripts.pory"
	speakername (CommonText_Peeko)
# 265 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_Peeko, MSGBOX_DEFAULT
# 266 "data/maps/RusturfTunnel/scripts.pory"
	waitmoncry
# 267 "data/maps/RusturfTunnel/scripts.pory"
	release
# 268 "data/maps/RusturfTunnel/scripts.pory"
	end
# 269 "data/maps/RusturfTunnel/scripts.pory"

# 270 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_Grunt::
# 271 "data/maps/RusturfTunnel/scripts.pory"
	lock
# 272 "data/maps/RusturfTunnel/scripts.pory"
	faceplayer
# 273 "data/maps/RusturfTunnel/scripts.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 274 "data/maps/RusturfTunnel/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 275 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_GruntIntro, MSGBOX_DEFAULT
# 276 "data/maps/RusturfTunnel/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_RUSTURF_TUNNEL, RusturfTunnel_Text_GruntDefeat
# 277 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_GruntTakePackage, MSGBOX_DEFAULT
# 278 "data/maps/RusturfTunnel/scripts.pory"
	giveitem ITEM_DEVON_PARTS
# 279 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 280 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_PLAYER, RusturfTunnel_Movement_PushPlayerAsideForGrunt
# 281 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_GRUNT, RusturfTunnel_Movement_GruntEscape
# 282 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 283 "data/maps/RusturfTunnel/scripts.pory"
	removeobject LOCALID_RUSTURF_TUNNEL_GRUNT
# 284 "data/maps/RusturfTunnel/scripts.pory"
	delay 50
# 285 "data/maps/RusturfTunnel/scripts.pory"
	addobject LOCALID_RUSTURF_TUNNEL_BRINEY
# 286 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_BRINEY, Common_Movement_WalkRight7
# 287 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 288 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_PLAYER, RusturfTunnel_Movement_PlayerMoveAsideForBriney
# 289 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_BRINEY, RusturfTunnel_Movement_BrineyApproachPeeko2
# 290 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 291 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_PeekoGladToSeeYouSafe, MSGBOX_DEFAULT
# 292 "data/maps/RusturfTunnel/scripts.pory"
	playfanfare MUS_HG_DEX_RATING_6
# 293 "data/maps/RusturfTunnel/scripts.pory"
	waitfanfare
# 294 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_BRINEY, Common_Movement_FacePlayer
# 295 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 296 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_ThankYouLetsGoHomePeeko, MSGBOX_DEFAULT
# 297 "data/maps/RusturfTunnel/scripts.pory"
	speakername (CommonText_Peeko)
# 298 "data/maps/RusturfTunnel/scripts.pory"
	message RusturfTunnel_Text_Peeko2
# 299 "data/maps/RusturfTunnel/scripts.pory"
	waitmessage
# 300 "data/maps/RusturfTunnel/scripts.pory"
	waitse
# 301 "data/maps/RusturfTunnel/scripts.pory"
	playmoncry SPECIES_WINGULL, CRY_MODE_NORMAL
# 302 "data/maps/RusturfTunnel/scripts.pory"
	waitbuttonpress
# 303 "data/maps/RusturfTunnel/scripts.pory"
	waitmoncry
# 304 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 305 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_PLAYER, RusturfTunnel_Movement_PlayerWatchBrineyExit
# 306 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_BRINEY, Common_Movement_WalkLeft11
# 307 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_PEEKO, Common_Movement_WalkLeft9
# 308 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 309 "data/maps/RusturfTunnel/scripts.pory"
	removeobject LOCALID_RUSTURF_TUNNEL_BRINEY
# 310 "data/maps/RusturfTunnel/scripts.pory"
	removeobject LOCALID_RUSTURF_TUNNEL_PEEKO
# 311 "data/maps/RusturfTunnel/scripts.pory"
	clearflag FLAG_DEVON_GOODS_STOLEN
# 312 "data/maps/RusturfTunnel/scripts.pory"
	setflag FLAG_RECOVERED_DEVON_GOODS
# 313 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 4
# 314 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_BRINEY_HOUSE_STATE, 1
# 315 "data/maps/RusturfTunnel/scripts.pory"
	setflag FLAG_HIDE_ROUTE_116_MR_BRINEY
# 316 "data/maps/RusturfTunnel/scripts.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 317 "data/maps/RusturfTunnel/scripts.pory"
	release
# 318 "data/maps/RusturfTunnel/scripts.pory"
	end
# 319 "data/maps/RusturfTunnel/scripts.pory"

# 320 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_PushPlayerAsideForGrunt:
# 321 "data/maps/RusturfTunnel/scripts.pory"
	face_down
# 322 "data/maps/RusturfTunnel/scripts.pory"
	lock_facing_direction
# 323 "data/maps/RusturfTunnel/scripts.pory"
	walk_up
# 324 "data/maps/RusturfTunnel/scripts.pory"
	unlock_facing_direction
# 325 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_left
# 326 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 327 "data/maps/RusturfTunnel/scripts.pory"

# 328 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_PlayerMoveAsideForBriney:
# 329 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 330 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_up
# 331 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 332 "data/maps/RusturfTunnel/scripts.pory"

# 333 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_GruntEscape:
# 334 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 335 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 336 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 337 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
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
	step_end
# 344 "data/maps/RusturfTunnel/scripts.pory"

# 345 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_PlayerWatchBrineyExit:
# 346 "data/maps/RusturfTunnel/scripts.pory"
	delay_16
# 347 "data/maps/RusturfTunnel/scripts.pory"
	delay_8
# 348 "data/maps/RusturfTunnel/scripts.pory"
	delay_4
# 349 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_left
# 350 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 351 "data/maps/RusturfTunnel/scripts.pory"

# 352 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_BrineyApproachPeeko2:
# 353 "data/maps/RusturfTunnel/scripts.pory"
	delay_16
# 354 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 355 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 356 "data/maps/RusturfTunnel/scripts.pory"

# 357 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_Mike::
# 358 "data/maps/RusturfTunnel/scripts.pory"
	trainerbattle_single TRAINER_MIKE_2, RusturfTunnel_Text_MikeIntro, RusturfTunnel_Text_MikeDefeat
# 359 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_MikePostBattle, MSGBOX_AUTOCLOSE
# 360 "data/maps/RusturfTunnel/scripts.pory"
	end
# 361 "data/maps/RusturfTunnel/scripts.pory"

# 362 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_ComeAndGetSome:
# 363 "data/maps/RusturfTunnel/scripts.pory"
	.string "What, are you coming?\n"
# 364 "data/maps/RusturfTunnel/scripts.pory"
	.string "Come and get some, then!$"
# 365 "data/maps/RusturfTunnel/scripts.pory"

# 366 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_Peeko:
# 367 "data/maps/RusturfTunnel/scripts.pory"
	.string "Pii pihyoh!$"
# 368 "data/maps/RusturfTunnel/scripts.pory"

# 369 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_GruntIntro:
# 370 "data/maps/RusturfTunnel/scripts.pory"
	.string "Grah, keelhaul it all!\p"
# 371 "data/maps/RusturfTunnel/scripts.pory"
	.string "That hostage Pokémon turned out to\n"
# 372 "data/maps/RusturfTunnel/scripts.pory"
	.string "be worthless!\p"
# 373 "data/maps/RusturfTunnel/scripts.pory"
	.string "And to think I made a getaway…\n"
# 374 "data/maps/RusturfTunnel/scripts.pory"
	.string "In this tunnel to nowhere!\p"
# 375 "data/maps/RusturfTunnel/scripts.pory"
	.string "Hey! You!\n"
# 376 "data/maps/RusturfTunnel/scripts.pory"
	.string "So you want to battle me?$"
# 377 "data/maps/RusturfTunnel/scripts.pory"

# 378 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_GruntDefeat:
# 379 "data/maps/RusturfTunnel/scripts.pory"
	.string "Urrrggh! My career in crime comes to\n"
# 380 "data/maps/RusturfTunnel/scripts.pory"
	.string "a dead end!$"
# 381 "data/maps/RusturfTunnel/scripts.pory"

# 382 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_GruntTakePackage:
# 383 "data/maps/RusturfTunnel/scripts.pory"
	.string "This is plain not right…\p"
# 384 "data/maps/RusturfTunnel/scripts.pory"
	.string "The Boss told me this would be a\n"
# 385 "data/maps/RusturfTunnel/scripts.pory"
	.string "slick-and-easy job to pull.\p"
# 386 "data/maps/RusturfTunnel/scripts.pory"
	.string "All I had to do was steal some package\n"
# 387 "data/maps/RusturfTunnel/scripts.pory"
	.string "from Devon.\p"
# 388 "data/maps/RusturfTunnel/scripts.pory"
	.string "Tch!\n"
# 389 "data/maps/RusturfTunnel/scripts.pory"
	.string "You want it back that badly, take it!$"
# 390 "data/maps/RusturfTunnel/scripts.pory"

# 391 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_PeekoGladToSeeYouSafe:
# 392 "data/maps/RusturfTunnel/scripts.pory"
	.string "Peeko!\n"
# 393 "data/maps/RusturfTunnel/scripts.pory"
	.string "Am I glad to see you're safe!$"
# 394 "data/maps/RusturfTunnel/scripts.pory"

# 395 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_ThankYouLetsGoHomePeeko:
# 396 "data/maps/RusturfTunnel/scripts.pory"
	.string "Peeko owes her life to you!\p"
# 397 "data/maps/RusturfTunnel/scripts.pory"
	.string "They call me Mr. Briney.\n"
# 398 "data/maps/RusturfTunnel/scripts.pory"
	.string "And, you are?\p"
# 399 "data/maps/RusturfTunnel/scripts.pory"
	.string "… … … … … … … …\n"
# 400 "data/maps/RusturfTunnel/scripts.pory"
	.string "… … … … … … … …\p"
# 401 "data/maps/RusturfTunnel/scripts.pory"
	.string "Ah, so you are {PLAYER}{KUN}!\n"
# 402 "data/maps/RusturfTunnel/scripts.pory"
	.string "I sincerely thank you!\p"
# 403 "data/maps/RusturfTunnel/scripts.pory"
	.string "Now, if there's anything that troubles\n"
# 404 "data/maps/RusturfTunnel/scripts.pory"
	.string "you, don't hesitate to tell me!\p"
# 405 "data/maps/RusturfTunnel/scripts.pory"
	.string "You can usually find me in my cottage\n"
# 406 "data/maps/RusturfTunnel/scripts.pory"
	.string "by the sea near Petalburg Woods.\p"
# 407 "data/maps/RusturfTunnel/scripts.pory"
	.string "Come, Peeko, we should make our way\n"
# 408 "data/maps/RusturfTunnel/scripts.pory"
	.string "home.$"
# 409 "data/maps/RusturfTunnel/scripts.pory"

# 410 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_Peeko2:
# 411 "data/maps/RusturfTunnel/scripts.pory"
	.string "Pihyoh!$"
# 412 "data/maps/RusturfTunnel/scripts.pory"

# 413 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_WhyCantTheyKeepDigging:
# 414 "data/maps/RusturfTunnel/scripts.pory"
	.string "… …\p"
# 415 "data/maps/RusturfTunnel/scripts.pory"
	.string "Why can't they keep digging?\n"
# 416 "data/maps/RusturfTunnel/scripts.pory"
	.string "Is the bedrock too hard?\p"
# 417 "data/maps/RusturfTunnel/scripts.pory"
	.string "My beloved awaits me in Verdanturf\n"
# 418 "data/maps/RusturfTunnel/scripts.pory"
	.string "Town just beyond here…\p"
# 419 "data/maps/RusturfTunnel/scripts.pory"
	.string "If Rustboro and Verdanturf were\n"
# 420 "data/maps/RusturfTunnel/scripts.pory"
	.string "joined by this tunnel, I could visit\l"
# 421 "data/maps/RusturfTunnel/scripts.pory"
	.string "her every day…\p"
# 422 "data/maps/RusturfTunnel/scripts.pory"
	.string "But this…\n"
# 423 "data/maps/RusturfTunnel/scripts.pory"
	.string "What am I to do?$"
# 424 "data/maps/RusturfTunnel/scripts.pory"

# 425 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_ToGetToVerdanturf:
# 426 "data/maps/RusturfTunnel/scripts.pory"
	.string "To get from Rustboro to Verdanturf,\n"
# 427 "data/maps/RusturfTunnel/scripts.pory"
	.string "you need to go to Dewford, then pass\l"
# 428 "data/maps/RusturfTunnel/scripts.pory"
	.string "through Slateport and Mauville…$"
# 429 "data/maps/RusturfTunnel/scripts.pory"

# 430 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_YouShatteredBoulderTakeHM:
# 431 "data/maps/RusturfTunnel/scripts.pory"
	.string "Wow! You shattered that boulder\n"
# 432 "data/maps/RusturfTunnel/scripts.pory"
	.string "blocking the way.\p"
# 433 "data/maps/RusturfTunnel/scripts.pory"
	.string "To show you how much I appreciate it,\n"
# 434 "data/maps/RusturfTunnel/scripts.pory"
	.string "I'd like you to have this HM.$"
# 435 "data/maps/RusturfTunnel/scripts.pory"

# 436 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_ExplainStrength:
# 437 "data/maps/RusturfTunnel/scripts.pory"
	.string "That HM contains Strength.\p"
# 438 "data/maps/RusturfTunnel/scripts.pory"
	.string "If a muscular Pokémon were to learn\n"
# 439 "data/maps/RusturfTunnel/scripts.pory"
	.string "that, it would be able to move even\l"
# 440 "data/maps/RusturfTunnel/scripts.pory"
	.string "large boulders.$"
# 441 "data/maps/RusturfTunnel/scripts.pory"

# 442 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_WandaReunion:
# 443 "data/maps/RusturfTunnel/scripts.pory"
	.string "Wanda!\n"
# 444 "data/maps/RusturfTunnel/scripts.pory"
	.string "Now I can see you anytime!\p"
# 445 "data/maps/RusturfTunnel/scripts.pory"
	.string "Wanda: That's…wonderful.\p"
# 446 "data/maps/RusturfTunnel/scripts.pory"
	.string "Please, take some rest at my home.$"
# 447 "data/maps/RusturfTunnel/scripts.pory"

# 448 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_BoyfriendOnOtherSideOfRock:
# 449 "data/maps/RusturfTunnel/scripts.pory"
	.string "On the other side of this rock…\n"
# 450 "data/maps/RusturfTunnel/scripts.pory"
	.string "My boyfriend is there.\p"
# 451 "data/maps/RusturfTunnel/scripts.pory"
	.string "He… He's not just digging the tunnel\n"
# 452 "data/maps/RusturfTunnel/scripts.pory"
	.string "to come see me.\p"
# 453 "data/maps/RusturfTunnel/scripts.pory"
	.string "He works his hands raw and rough\n"
# 454 "data/maps/RusturfTunnel/scripts.pory"
	.string "for the benefit of everyone.$"
# 455 "data/maps/RusturfTunnel/scripts.pory"

# 456 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_MikeIntro:
# 457 "data/maps/RusturfTunnel/scripts.pory"
	.string "What do you call a wild man up in the\n"
# 458 "data/maps/RusturfTunnel/scripts.pory"
	.string "mountains? A mountain man, right?\p"
# 459 "data/maps/RusturfTunnel/scripts.pory"
	.string "So why don't they call a Pokémon in\n"
# 460 "data/maps/RusturfTunnel/scripts.pory"
	.string "the mountains a mountain Pokémon?$"
# 461 "data/maps/RusturfTunnel/scripts.pory"

# 462 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_MikeDefeat:
# 463 "data/maps/RusturfTunnel/scripts.pory"
	.string "My Pokémon…\n"
# 464 "data/maps/RusturfTunnel/scripts.pory"
	.string "Ran out of power…$"
# 465 "data/maps/RusturfTunnel/scripts.pory"

# 466 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_MikePostBattle:
# 467 "data/maps/RusturfTunnel/scripts.pory"
	.string "They halted development here to\n"
# 468 "data/maps/RusturfTunnel/scripts.pory"
	.string "protect Pokémon, right?\l"
# 469 "data/maps/RusturfTunnel/scripts.pory"
	.string "There's a feel-good story!$"
