# 1 "data/maps/PetalburgCity/scripts.pory"

# 2 "data/maps/PetalburgCity/scripts.pory"
.set RIVAL_PETALBURG, 10
# 3 "data/maps/PetalburgCity/scripts.pory"

# 4 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_MapScripts::
# 5 "data/maps/PetalburgCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PetalburgCity_OnTransition
# 6 "data/maps/PetalburgCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PetalburgCity_OnFrame
# 7 "data/maps/PetalburgCity/scripts.pory"
	.byte 0
# 8 "data/maps/PetalburgCity/scripts.pory"

# 9 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_OnTransition:
# 10 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_VISITED_PETALBURG_CITY
# 11 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_TEMP_1
# 12 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_TEMP_2
# 13 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_TEMP_3
# 14 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_PETALBURG_CITY_STATE, 0, PetalburgCity_EventScript_MoveGymBoyToWestEntrance
# 15 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_PETALBURG_CITY_STATE, 2, PetalburgCity_EventScript_DisableMapNameAndMusic
# 16 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_PETALBURG_CITY_STATE, 4, PetalburgCity_EventScript_DisableMapNameAndMusic
# 17 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_PETALBURG_GYM_STATE, 8, PetalburgCity_EventScript_SetGymDoorsUnlocked
# 18 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_EMERALBODY_RIVAL_STATE, 1, EventScript_Clear_FlagTemp1 @ Show Rival
# 19 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_EMERALBODY_RIVAL_STATE, 2, EventScript_Clear_FlagTemp2 @ Show Rivals
# 20 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_EMERALBODY_RIVAL_STATE, 8, EventScript_Clear_FlagTemp3 @ Show Rivals
# 21 "data/maps/PetalburgCity/scripts.pory"
	call Common_EventScript_SetupEmRivalGfxId
# 22 "data/maps/PetalburgCity/scripts.pory"
	end
# 23 "data/maps/PetalburgCity/scripts.pory"

# 24 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_MoveGymBoyToWestEntrance::
# 25 "data/maps/PetalburgCity/scripts.pory"
	setobjectxyperm LOCALID_GYM_BOY, 5, 11
# 26 "data/maps/PetalburgCity/scripts.pory"
	return
# 27 "data/maps/PetalburgCity/scripts.pory"

# 28 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_DisableMapNameAndMusic::
# 29 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 30 "data/maps/PetalburgCity/scripts.pory"
	savebgm MUS_FOLLOW_ME
# 31 "data/maps/PetalburgCity/scripts.pory"
	return
# 32 "data/maps/PetalburgCity/scripts.pory"

# 33 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_SetGymDoorsUnlocked::
# 34 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 7
# 35 "data/maps/PetalburgCity/scripts.pory"
	return
# 36 "data/maps/PetalburgCity/scripts.pory"

# 37 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_OnFrame:
# 38 "data/maps/PetalburgCity/scripts.pory"
	map_script_2 VAR_PETALBURG_CITY_STATE, 2, PetalburgCity_EventScript_WallyTutorial
# 39 "data/maps/PetalburgCity/scripts.pory"
	map_script_2 VAR_PETALBURG_CITY_STATE, 4, PetalburgCity_EventScript_WalkToWallyHouse
# 40 "data/maps/PetalburgCity/scripts.pory"
	.2byte 0
# 41 "data/maps/PetalburgCity/scripts.pory"

# 42 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallyTutorial::
# 43 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 44 "data/maps/PetalburgCity/scripts.pory"
	special SavePlayerParty
# 45 "data/maps/PetalburgCity/scripts.pory"
	special LoadWallyZigzagoon
# 46 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_WALLY, PetalburgCity_Movement_WallyTutorialWally
# 47 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_WallyTutorialPlayer
# 48 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 49 "data/maps/PetalburgCity/scripts.pory"
	speakername (CommonText_Wally)
# 50 "data/maps/PetalburgCity/scripts.pory"
	msgbox Route102_Text_WatchMeCatchPokemon, MSGBOX_DEFAULT
# 51 "data/maps/PetalburgCity/scripts.pory"
	special StartWallyTutorialBattle
# 52 "data/maps/PetalburgCity/scripts.pory"
	waitstate
# 53 "data/maps/PetalburgCity/scripts.pory"
	speakername (CommonText_Wally)
# 54 "data/maps/PetalburgCity/scripts.pory"
	msgbox Route102_Text_WallyIDidIt, MSGBOX_DEFAULT
# 55 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_WALLY, Common_Movement_WalkInPlaceFasterLeft, MAP_PETALBURG_CITY
# 56 "data/maps/PetalburgCity/scripts.pory"
	waitmovement LOCALID_PETALBURG_WALLY, MAP_PETALBURG_CITY
# 57 "data/maps/PetalburgCity/scripts.pory"
	speakername (CommonText_Wally)
# 58 "data/maps/PetalburgCity/scripts.pory"
	msgbox Route102_Text_LetsGoBack, MSGBOX_DEFAULT
# 59 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 60 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 61 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 3
# 62 "data/maps/PetalburgCity/scripts.pory"
	fadedefaultbgm
# 63 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 64 "data/maps/PetalburgCity/scripts.pory"
	special LoadPlayerParty
# 65 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 1
# 66 "data/maps/PetalburgCity/scripts.pory"
	warp MAP_PETALBURG_CITY_GYM, 4, 108
# 67 "data/maps/PetalburgCity/scripts.pory"
	waitstate
# 68 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 69 "data/maps/PetalburgCity/scripts.pory"
	end
# 70 "data/maps/PetalburgCity/scripts.pory"

# 71 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WalkToWallyHouse::
# 72 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 73 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 74 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_WALLYS_DAD, PetalburgCity_Movement_WalkToWallyHouseWallysDad
# 75 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_WalkToWallyHousePlayer
# 76 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 77 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8004, 7
# 78 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8005, 5
# 79 "data/maps/PetalburgCity/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 80 "data/maps/PetalburgCity/scripts.pory"
	waitdooranim
# 81 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_WALLYS_DAD, Common_Movement_EnterHouse
# 82 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp2
# 83 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 84 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_CITY_WALLYS_DAD
# 85 "data/maps/PetalburgCity/scripts.pory"
	hideobjectat LOCALID_PLAYER, MAP_PETALBURG_CITY
# 86 "data/maps/PetalburgCity/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 87 "data/maps/PetalburgCity/scripts.pory"
	waitdooranim
# 88 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 89 "data/maps/PetalburgCity/scripts.pory"
	fadedefaultbgm
# 90 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 91 "data/maps/PetalburgCity/scripts.pory"
	warp MAP_PETALBURG_CITY_WALLYS_HOUSE, 2, 4
# 92 "data/maps/PetalburgCity/scripts.pory"
	waitstate
# 93 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 94 "data/maps/PetalburgCity/scripts.pory"
	end
# 95 "data/maps/PetalburgCity/scripts.pory"

# 96 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Boy::
# 97 "data/maps/PetalburgCity/scripts.pory"
	lock
# 98 "data/maps/PetalburgCity/scripts.pory"
	faceplayer
# 99 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WaterReflection, MSGBOX_DEFAULT
# 100 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 101 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_BOY, Common_Movement_FaceOriginalDirection
# 102 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 103 "data/maps/PetalburgCity/scripts.pory"
	release
# 104 "data/maps/PetalburgCity/scripts.pory"
	end
# 105 "data/maps/PetalburgCity/scripts.pory"

# 106 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallysMom::
# 107 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WhereIsWally, MSGBOX_NPC
# 108 "data/maps/PetalburgCity/scripts.pory"
	end
# 109 "data/maps/PetalburgCity/scripts.pory"

# 110 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkToWallyHousePlayer:
# 111 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 112 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 113 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 114 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 115 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 116 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 117 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 118 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 119 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 120 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 121 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 122 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 123 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 124 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 125 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 126 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 127 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 128 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 129 "data/maps/PetalburgCity/scripts.pory"

# 130 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkToWallyHouseWallysDad:
# 131 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 132 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 133 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 134 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 135 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 136 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 137 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 138 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 139 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 140 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 141 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 142 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 143 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 144 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 145 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 146 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 147 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 148 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 149 "data/maps/PetalburgCity/scripts.pory"

# 150 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WallyTutorialPlayer:
# 151 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 152 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 153 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 154 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 155 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 156 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 157 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 158 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 159 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 160 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 161 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 162 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 163 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 164 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 165 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 166 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 167 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 168 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 169 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 170 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 171 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 172 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 173 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 174 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 175 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 176 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 177 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 178 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 179 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 180 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 181 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 182 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_right
# 183 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 184 "data/maps/PetalburgCity/scripts.pory"

# 185 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WallyTutorialWally:
# 186 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 187 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 188 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 189 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 190 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 191 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 192 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 193 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 194 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 195 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 196 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 197 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 198 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 199 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 200 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 201 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 202 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 203 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 204 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 205 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 206 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 207 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 208 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 209 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 210 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 211 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 212 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 213 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 214 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 215 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 216 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 217 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 218 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 219 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 220 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 221 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_right
# 222 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 223 "data/maps/PetalburgCity/scripts.pory"

# 224 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_GymSign::
# 225 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_GymSign, MSGBOX_SIGN
# 226 "data/maps/PetalburgCity/scripts.pory"
	end
# 227 "data/maps/PetalburgCity/scripts.pory"

# 228 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_CitySign::
# 229 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_CitySign, MSGBOX_SIGN
# 230 "data/maps/PetalburgCity/scripts.pory"
	end
# 231 "data/maps/PetalburgCity/scripts.pory"

# 232 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Gentleman::
# 233 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_FullPartyExplanation, MSGBOX_NPC
# 234 "data/maps/PetalburgCity/scripts.pory"
	end
# 235 "data/maps/PetalburgCity/scripts.pory"

# 236 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallyHouseSign::
# 237 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WallyHouseSign, MSGBOX_SIGN
# 238 "data/maps/PetalburgCity/scripts.pory"
	end
# 239 "data/maps/PetalburgCity/scripts.pory"

# 240 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer0::
# 241 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 242 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 0
# 243 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 244 "data/maps/PetalburgCity/scripts.pory"
	end
# 245 "data/maps/PetalburgCity/scripts.pory"

# 246 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer1::
# 247 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 248 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 1
# 249 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 250 "data/maps/PetalburgCity/scripts.pory"
	end
# 251 "data/maps/PetalburgCity/scripts.pory"

# 252 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer2::
# 253 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 254 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 2
# 255 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 256 "data/maps/PetalburgCity/scripts.pory"
	end
# 257 "data/maps/PetalburgCity/scripts.pory"

# 258 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer3::
# 259 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 260 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 3
# 261 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 262 "data/maps/PetalburgCity/scripts.pory"
	end
# 263 "data/maps/PetalburgCity/scripts.pory"

# 264 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer::
# 265 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_FacePlayer
# 266 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 267 "data/maps/PetalburgCity/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 268 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 269 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_ExclamationMark
# 270 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 271 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_Delay48
# 272 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 273 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_BoyApproachPlayer0
# 274 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_BoyApproachPlayer1
# 275 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_BoyApproachPlayer2
# 276 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_BoyApproachPlayer3
# 277 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouRookieTrainer, MSGBOX_DEFAULT
# 278 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 279 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_LeadPlayerToGym0
# 280 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_LeadPlayerToGym1
# 281 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_LeadPlayerToGym2
# 282 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_LeadPlayerToGym3
# 283 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ThisIsPetalburgGym, MSGBOX_DEFAULT
# 284 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_WalkInPlaceFasterRight
# 285 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 286 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 287 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ThisIsGymSign, MSGBOX_DEFAULT
# 288 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 289 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkAway
# 290 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 291 "data/maps/PetalburgCity/scripts.pory"
	fadedefaultbgm
# 292 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 293 "data/maps/PetalburgCity/scripts.pory"
	end
# 294 "data/maps/PetalburgCity/scripts.pory"

# 295 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer0::
# 296 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer0
# 297 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 298 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 299 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 300 "data/maps/PetalburgCity/scripts.pory"
	return
# 301 "data/maps/PetalburgCity/scripts.pory"

# 302 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer1::
# 303 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_WalkRight2
# 304 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 305 "data/maps/PetalburgCity/scripts.pory"
	return
# 306 "data/maps/PetalburgCity/scripts.pory"

# 307 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer2::
# 308 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer2
# 309 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 310 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 311 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 312 "data/maps/PetalburgCity/scripts.pory"
	return
# 313 "data/maps/PetalburgCity/scripts.pory"

# 314 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer3::
# 315 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer3
# 316 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 317 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 318 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 319 "data/maps/PetalburgCity/scripts.pory"
	return
# 320 "data/maps/PetalburgCity/scripts.pory"

# 321 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym0::
# 322 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym0
# 323 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym0
# 324 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 325 "data/maps/PetalburgCity/scripts.pory"
	return
# 326 "data/maps/PetalburgCity/scripts.pory"

# 327 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym1::
# 328 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym1
# 329 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym1
# 330 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 331 "data/maps/PetalburgCity/scripts.pory"
	return
# 332 "data/maps/PetalburgCity/scripts.pory"

# 333 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym2::
# 334 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym2
# 335 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym2
# 336 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 337 "data/maps/PetalburgCity/scripts.pory"
	return
# 338 "data/maps/PetalburgCity/scripts.pory"

# 339 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym3::
# 340 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym3
# 341 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym3
# 342 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 343 "data/maps/PetalburgCity/scripts.pory"
	return
# 344 "data/maps/PetalburgCity/scripts.pory"

# 345 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer0:
# 346 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 347 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 348 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 349 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 350 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 351 "data/maps/PetalburgCity/scripts.pory"

# 352 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer2:
# 353 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 354 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 355 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 356 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 357 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 358 "data/maps/PetalburgCity/scripts.pory"

# 359 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer3:
# 360 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 361 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 362 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 363 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 364 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 365 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 366 "data/maps/PetalburgCity/scripts.pory"

# 367 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym0:
# 368 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 369 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 370 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 371 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 372 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 373 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 374 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 375 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 376 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 377 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 378 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 379 "data/maps/PetalburgCity/scripts.pory"

# 380 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym1:
# 381 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 382 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 383 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 384 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 385 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 386 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 387 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 388 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 389 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 390 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 391 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 392 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 393 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 394 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 395 "data/maps/PetalburgCity/scripts.pory"

# 396 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym2:
# 397 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 398 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 399 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 400 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 401 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 402 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 403 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 404 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 405 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 406 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 407 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 408 "data/maps/PetalburgCity/scripts.pory"

# 409 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym3:
# 410 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 411 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 412 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 413 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 414 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 415 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 416 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 417 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 418 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 419 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 420 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 421 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 422 "data/maps/PetalburgCity/scripts.pory"

# 423 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkAway:
# 424 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 425 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 426 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 427 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 428 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 429 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 430 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 431 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 432 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 433 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 434 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 435 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 436 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 437 "data/maps/PetalburgCity/scripts.pory"

# 438 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym0:
# 439 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 440 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 441 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 442 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 443 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 444 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 445 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 446 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 447 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 448 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 449 "data/maps/PetalburgCity/scripts.pory"

# 450 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym1:
# 451 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 452 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 453 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 454 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 455 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 456 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 457 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 458 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 459 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 460 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 461 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 462 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 463 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 464 "data/maps/PetalburgCity/scripts.pory"

# 465 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym2:
# 466 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 467 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 468 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 469 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 470 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 471 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 472 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 473 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 474 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 475 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 476 "data/maps/PetalburgCity/scripts.pory"

# 477 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym3:
# 478 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 479 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 480 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 481 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 482 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 483 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 484 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 485 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 486 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 487 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 488 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 489 "data/maps/PetalburgCity/scripts.pory"

# 490 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott0::
# 491 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 492 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_PETALBURG_SCOTT
# 493 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 0
# 494 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_PETALBURG_SCOTT, 13, 10
# 495 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 496 "data/maps/PetalburgCity/scripts.pory"
	end
# 497 "data/maps/PetalburgCity/scripts.pory"

# 498 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott1::
# 499 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 500 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_PETALBURG_SCOTT
# 501 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 1
# 502 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_PETALBURG_SCOTT, 13, 11
# 503 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 504 "data/maps/PetalburgCity/scripts.pory"
	end
# 505 "data/maps/PetalburgCity/scripts.pory"

# 506 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott2::
# 507 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 508 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_PETALBURG_SCOTT
# 509 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 2
# 510 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_PETALBURG_SCOTT, 13, 12
# 511 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 512 "data/maps/PetalburgCity/scripts.pory"
	end
# 513 "data/maps/PetalburgCity/scripts.pory"

# 514 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott3::
# 515 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 516 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_PETALBURG_SCOTT
# 517 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 3
# 518 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_PETALBURG_SCOTT, 13, 13
# 519 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 520 "data/maps/PetalburgCity/scripts.pory"
	end
# 521 "data/maps/PetalburgCity/scripts.pory"

# 522 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott::
# 523 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, Common_Movement_WalkLeft4
# 524 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 525 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 526 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, Common_Movement_ExclamationMark
# 527 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 528 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, Common_Movement_Delay48
# 529 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 530 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, Common_Movement_WalkLeft4
# 531 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 532 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 533 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 534 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_SCOTT_STATE, 1
# 535 "data/maps/PetalburgCity/scripts.pory"
	speakername (CommonText_Q)
# 536 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouATrainer, MSGBOX_DEFAULT
# 537 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 538 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, Common_Movement_WalkInPlaceFasterRight
# 539 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 540 "data/maps/PetalburgCity/scripts.pory"
	delay 30
# 541 "data/maps/PetalburgCity/scripts.pory"
	speakername (CommonText_Q)
# 542 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WellMaybeNot, MSGBOX_DEFAULT
# 543 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 544 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, Common_Movement_WalkInPlaceFasterLeft
# 545 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 546 "data/maps/PetalburgCity/scripts.pory"
	delay 30
# 547 "data/maps/PetalburgCity/scripts.pory"
	speakername (CommonText_Q)
# 548 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ImLookingForTalentedTrainers, MSGBOX_DEFAULT
# 549 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 550 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_ScottExit0
# 551 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_ScottExit1
# 552 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_ScottExit2
# 553 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_ScottExit3
# 554 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_SCOTT_PETALBURG_ENCOUNTER, 1
# 555 "data/maps/PetalburgCity/scripts.pory"
	removeobject LOCALID_PETALBURG_SCOTT
# 556 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 557 "data/maps/PetalburgCity/scripts.pory"
	end
# 558 "data/maps/PetalburgCity/scripts.pory"

# 559 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit0::
# 560 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit0
# 561 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, PetalburgCity_Movement_ScottExit0
# 562 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 563 "data/maps/PetalburgCity/scripts.pory"
	return
# 564 "data/maps/PetalburgCity/scripts.pory"

# 565 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit1::
# 566 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit1
# 567 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, PetalburgCity_Movement_BoyWalkAway
# 568 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 569 "data/maps/PetalburgCity/scripts.pory"
	return
# 570 "data/maps/PetalburgCity/scripts.pory"

# 571 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit2::
# 572 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit2
# 573 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, PetalburgCity_Movement_BoyWalkAway
# 574 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 575 "data/maps/PetalburgCity/scripts.pory"
	return
# 576 "data/maps/PetalburgCity/scripts.pory"

# 577 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit3::
# 578 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit3
# 579 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, PetalburgCity_Movement_ScottExit3
# 580 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 581 "data/maps/PetalburgCity/scripts.pory"
	return
# 582 "data/maps/PetalburgCity/scripts.pory"

# 583 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit0:
# 584 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 585 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 586 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 587 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 588 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 589 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 590 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 591 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 592 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 593 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 594 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 595 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 596 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 597 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 598 "data/maps/PetalburgCity/scripts.pory"

# 599 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit0:
# 600 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 601 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 602 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 603 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 604 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 605 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 606 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 607 "data/maps/PetalburgCity/scripts.pory"

# 608 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit1:
# 609 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 610 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 611 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 612 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 613 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 614 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 615 "data/maps/PetalburgCity/scripts.pory"

# 616 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit2:
# 617 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 618 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 619 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 620 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 621 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 622 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 623 "data/maps/PetalburgCity/scripts.pory"

# 624 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit3:
# 625 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 626 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 627 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 628 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 629 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 630 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 631 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 632 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 633 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 634 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 635 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 636 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 637 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 638 "data/maps/PetalburgCity/scripts.pory"

# 639 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit3:
# 640 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 641 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 642 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 643 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 644 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 645 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 646 "data/maps/PetalburgCity/scripts.pory"

# 647 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_GymBoy::
# 648 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouRookieTrainer, MSGBOX_NPC
# 649 "data/maps/PetalburgCity/scripts.pory"
	end
# 650 "data/maps/PetalburgCity/scripts.pory"

# 651 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WhereIsWally:
# 652 "data/maps/PetalburgCity/scripts.pory"
	.string "Where has our Wally gone?\p"
# 653 "data/maps/PetalburgCity/scripts.pory"
	.string "We have to leave for Verdanturf Town\n"
# 654 "data/maps/PetalburgCity/scripts.pory"
	.string "very soon…$"
# 655 "data/maps/PetalburgCity/scripts.pory"

# 656 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_AreYouRookieTrainer:
# 657 "data/maps/PetalburgCity/scripts.pory"
	.string "Hiya! Are you maybe…\n"
# 658 "data/maps/PetalburgCity/scripts.pory"
	.string "A rookie Trainer?\p"
# 659 "data/maps/PetalburgCity/scripts.pory"
	.string "Do you know what Pokémon Trainers\n"
# 660 "data/maps/PetalburgCity/scripts.pory"
	.string "do when they reach a new town?\p"
# 661 "data/maps/PetalburgCity/scripts.pory"
	.string "They first check what kind of Gym\n"
# 662 "data/maps/PetalburgCity/scripts.pory"
	.string "is in the town.$"
# 663 "data/maps/PetalburgCity/scripts.pory"

# 664 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ThisIsPetalburgGym:
# 665 "data/maps/PetalburgCity/scripts.pory"
	.string "See? This is Petalburg City's Gym.$"
# 666 "data/maps/PetalburgCity/scripts.pory"

# 667 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ThisIsGymSign:
# 668 "data/maps/PetalburgCity/scripts.pory"
	.string "This is the Gym's sign. Look for it\n"
# 669 "data/maps/PetalburgCity/scripts.pory"
	.string "whenever you're looking for a Gym.$"
# 670 "data/maps/PetalburgCity/scripts.pory"

# 671 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WaterReflection:
# 672 "data/maps/PetalburgCity/scripts.pory"
	.string "My face is reflected in the water.\p"
# 673 "data/maps/PetalburgCity/scripts.pory"
	.string "It's a shining grin full of hope…\p"
# 674 "data/maps/PetalburgCity/scripts.pory"
	.string "Or it could be a look of somber silence\n"
# 675 "data/maps/PetalburgCity/scripts.pory"
	.string "struggling with fear…\p"
# 676 "data/maps/PetalburgCity/scripts.pory"
	.string "What do you see reflected in your face?$"
# 677 "data/maps/PetalburgCity/scripts.pory"

# 678 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_FullPartyExplanation:
# 679 "data/maps/PetalburgCity/scripts.pory"
	.string "Let's say you have six Pokémon.\n"
# 680 "data/maps/PetalburgCity/scripts.pory"
	.string "If you catch another one…\p"
# 681 "data/maps/PetalburgCity/scripts.pory"
	.string "It is automatically sent to a Storage\n"
# 682 "data/maps/PetalburgCity/scripts.pory"
	.string "Box over a PC connection.$"
# 683 "data/maps/PetalburgCity/scripts.pory"

# 684 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_GymSign:
# 685 "data/maps/PetalburgCity/scripts.pory"
	.string "Petalburg City Pokémon Gym\n"
# 686 "data/maps/PetalburgCity/scripts.pory"
	.string "Leader: Norman\l"
# 687 "data/maps/PetalburgCity/scripts.pory"
	.string "“A man in pursuit of power!”$"
# 688 "data/maps/PetalburgCity/scripts.pory"

# 689 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_CitySign:
# 690 "data/maps/PetalburgCity/scripts.pory"
	.string "Petalburg City\n"
# 691 "data/maps/PetalburgCity/scripts.pory"
	.string "“Where people mingle with nature.”$"
# 692 "data/maps/PetalburgCity/scripts.pory"

# 693 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WallyHouseSign:
# 694 "data/maps/PetalburgCity/scripts.pory"
	.string "Wally's House$"
# 695 "data/maps/PetalburgCity/scripts.pory"

# 696 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_AreYouATrainer:
# 697 "data/maps/PetalburgCity/scripts.pory"
	.string "Excuse me!\p"
# 698 "data/maps/PetalburgCity/scripts.pory"
	.string "Let me guess, from the way you're\n"
# 699 "data/maps/PetalburgCity/scripts.pory"
	.string "dressed, are you a Pokémon Trainer?$"
# 700 "data/maps/PetalburgCity/scripts.pory"

# 701 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WellMaybeNot:
# 702 "data/maps/PetalburgCity/scripts.pory"
	.string "… … … … … …\p"
# 703 "data/maps/PetalburgCity/scripts.pory"
	.string "Well, maybe not.\n"
# 704 "data/maps/PetalburgCity/scripts.pory"
	.string "Your clothes aren't all that dirty.\p"
# 705 "data/maps/PetalburgCity/scripts.pory"
	.string "You're either a rookie Trainer,\n"
# 706 "data/maps/PetalburgCity/scripts.pory"
	.string "or maybe you're just an ordinary kid.$"
# 707 "data/maps/PetalburgCity/scripts.pory"

# 708 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ImLookingForTalentedTrainers:
# 709 "data/maps/PetalburgCity/scripts.pory"
	.string "I'm roaming the land in search of\n"
# 710 "data/maps/PetalburgCity/scripts.pory"
	.string "talented Trainers.\p"
# 711 "data/maps/PetalburgCity/scripts.pory"
	.string "I'm sorry to have taken your time.$"

PetalburgCity_EventScript_Simulation::
# 715 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_Simulation_Text_0, MSGBOX_NPC
	return


PetalburgCity_EventScript_WallyBattle::
# 721 "data/maps/PetalburgCity/scripts.pory"
	lock
# 722 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 723 "data/maps/PetalburgCity/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 724 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_TEMP_0, 15
	goto_if_lt PetalburgCity_EventScript_WallyBattle_2
# 752 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_PETALBURG_WALLY
# 753 "data/maps/PetalburgCity/scripts.pory"
	playbgm MUS_DP_RIVAL, FALSE
# 754 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceLeft
# 755 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_TEMP_1, 17
	goto_if_eq PetalburgCity_EventScript_WallyBattle_12
# 759 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_WALLY, Common_Movement_WalkDown8
PetalburgCity_EventScript_WallyBattle_11:
# 761 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 762 "data/maps/PetalburgCity/scripts.pory"
	switch VAR_TEMP_0
# 763 "data/maps/PetalburgCity/scripts.pory"
	case 19, PetalburgCity_EventScript_WallyBattle_17
# 765 "data/maps/PetalburgCity/scripts.pory"
	case 20, PetalburgCity_EventScript_WallyBattle_18
# 767 "data/maps/PetalburgCity/scripts.pory"
	case 21, PetalburgCity_EventScript_WallyBattle_19
PetalburgCity_EventScript_WallyBattle_15:
# 770 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
PetalburgCity_EventScript_WallyBattle_1:
# 772 "data/maps/PetalburgCity/scripts.pory"
	speakername CommonText_Wally
# 773 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_WallyBattle_Text_1
# 780 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_SYS_SET_BATTLE_BGM
# 781 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_BATTLE_BGM, MUS_HG_VS_WILD
# 782 "data/maps/PetalburgCity/scripts.pory"
	trainerbattle_no_intro TRAINER_WALLY_PETALBURG, PetalburgCity_EventScript_WallyBattle_Text_2
# 783 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_WallyBattle_Text_3
# 788 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 789 "data/maps/PetalburgCity/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 790 "data/maps/PetalburgCity/scripts.pory"
	removeobject LOCALID_PETALBURG_WALLY
# 791 "data/maps/PetalburgCity/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 792 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 6
# 793 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 794 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_CANT_USE_FLY
# 795 "data/maps/PetalburgCity/scripts.pory"
	fadedefaultbgm
# 796 "data/maps/PetalburgCity/scripts.pory"
	release
	return

PetalburgCity_EventScript_WallyBattle_2:
# 725 "data/maps/PetalburgCity/scripts.pory"
	speakername CommonText_Q
# 726 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_WallyBattle_Text_0
# 727 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 728 "data/maps/PetalburgCity/scripts.pory"
	playbgm MUS_DP_RIVAL, FALSE
# 729 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 730 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 731 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_PETALBURG_WALLY
# 732 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_PETALBURG_WALLY, 15, 12
# 733 "data/maps/PetalburgCity/scripts.pory"
	switch VAR_TEMP_0
# 734 "data/maps/PetalburgCity/scripts.pory"
	case 4, PetalburgCity_EventScript_WallyBattle_7
# 736 "data/maps/PetalburgCity/scripts.pory"
	case 5, PetalburgCity_EventScript_WallyBattle_8
# 738 "data/maps/PetalburgCity/scripts.pory"
	case 6, PetalburgCity_EventScript_WallyBattle_9
# 740 "data/maps/PetalburgCity/scripts.pory"
	case 7, PetalburgCity_EventScript_WallyBattle_10
PetalburgCity_EventScript_WallyBattle_5:
# 744 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 745 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_WALLY, Common_Movement_WalkInPlaceUp
# 746 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 747 "data/maps/PetalburgCity/scripts.pory"
	delay 50
# 748 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_WALLY, Common_Movement_WalkUp3
# 749 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
	goto PetalburgCity_EventScript_WallyBattle_1

PetalburgCity_EventScript_WallyBattle_7:
# 735 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_WALLY, Common_Movement_WalkLeft11
	goto PetalburgCity_EventScript_WallyBattle_5

PetalburgCity_EventScript_WallyBattle_8:
# 737 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_WALLY, Common_Movement_WalkLeft10
	goto PetalburgCity_EventScript_WallyBattle_5

PetalburgCity_EventScript_WallyBattle_9:
# 739 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_WALLY, Common_Movement_WalkLeft9
	goto PetalburgCity_EventScript_WallyBattle_5

PetalburgCity_EventScript_WallyBattle_10:
# 741 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_WALLY, Common_Movement_WalkLeft8
	goto PetalburgCity_EventScript_WallyBattle_5

PetalburgCity_EventScript_WallyBattle_12:
# 756 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_WALLY, Common_Movement_WalkDown7
	goto PetalburgCity_EventScript_WallyBattle_11

PetalburgCity_EventScript_WallyBattle_17:
# 764 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_WALLY, Common_Movement_WalkRight3
	goto PetalburgCity_EventScript_WallyBattle_15

PetalburgCity_EventScript_WallyBattle_18:
# 766 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_WALLY, Common_Movement_WalkRight4
	goto PetalburgCity_EventScript_WallyBattle_15

PetalburgCity_EventScript_WallyBattle_19:
# 768 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_WALLY, Common_Movement_WalkRight5
	goto PetalburgCity_EventScript_WallyBattle_15


PetalburgCity_EventScript_Simulation_Text_0:
# 715 "data/maps/PetalburgCity/scripts.pory"
	.string "I heard there's a realistic computer\n"
	.string "simulation out there.\p"
	.string "If you lose a Pokémon battle in it, you\n"
	.string "lose one in real life!\p"
	.string "That's just too scary.$"

PetalburgCity_EventScript_WallyBattle_Text_0:
# 726 "data/maps/PetalburgCity/scripts.pory"
	.string "{PLAYER}! Please wait!$"

PetalburgCity_EventScript_WallyBattle_Text_1:
# 773 "data/maps/PetalburgCity/scripts.pory"
	.string "I… … … … …\p"
	.string "I've heard about the things you've\n"
	.string "done.\p"
	.string "The people you've helped, the bad ones\n"
	.string "you've driven off.\p"
	.string "{PLAYER}, I don't want to just sit\n"
	.string "around and wait.\p"
	.string "I don't want to be overshadowed any\n"
	.string "longer!\p"
	.string "{PLAYER}, please battle me now and\n"
	.string "see how far I've come.\p"
	.string "I'll sit at home no longer!$"

PetalburgCity_EventScript_WallyBattle_Text_2:
# 782 "data/maps/PetalburgCity/scripts.pory"
	.string "Ah…\nI think I see now…$"

PetalburgCity_EventScript_WallyBattle_Text_3:
# 783 "data/maps/PetalburgCity/scripts.pory"
	.string "{PLAYER}, you're strong.\p"
	.string "You're really strong.\p"
	.string "Thank you for the battle.\n"
	.string "I have a long way to go, but I hope I can\l"
	.string "be up there on the stage with you some\l"
	.string "day.\p"
	.string "I'll be back, and I'll give you a\n"
	.string "challenge you won't forget!$"
