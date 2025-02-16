# 1 "data/maps/PetalburgCity/scripts.pory"

# 2 "data/maps/PetalburgCity/scripts.pory"
.set LOCALID_WALLY, 2
# 3 "data/maps/PetalburgCity/scripts.pory"
.set LOCALID_BOY, 3
# 4 "data/maps/PetalburgCity/scripts.pory"
.set LOCALID_WALLYS_DAD, 5
# 5 "data/maps/PetalburgCity/scripts.pory"
.set LOCALID_GYM_BOY, 8
# 6 "data/maps/PetalburgCity/scripts.pory"
.set LOCALID_SCOTT, 9
# 7 "data/maps/PetalburgCity/scripts.pory"
.set RIVAL_PETALBURG, 10
# 8 "data/maps/PetalburgCity/scripts.pory"

# 9 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_MapScripts::
# 10 "data/maps/PetalburgCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PetalburgCity_OnTransition
# 11 "data/maps/PetalburgCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PetalburgCity_OnFrame
# 12 "data/maps/PetalburgCity/scripts.pory"
	.byte 0
# 13 "data/maps/PetalburgCity/scripts.pory"

# 14 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_OnTransition:
# 15 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_VISITED_PETALBURG_CITY
# 16 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_TEMP_1
# 17 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_TEMP_2
# 18 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_PETALBURG_CITY_STATE, 0, PetalburgCity_EventScript_MoveGymBoyToWestEntrance
# 19 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_PETALBURG_CITY_STATE, 2, PetalburgCity_EventScript_DisableMapNameAndMusic
# 20 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_PETALBURG_CITY_STATE, 4, PetalburgCity_EventScript_DisableMapNameAndMusic
# 21 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_PETALBURG_GYM_STATE, 8, PetalburgCity_EventScript_SetGymDoorsUnlocked
# 22 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_EMERALBODY_RIVAL_STATE, 1, PetalburgCity_EventScript_ShowRival
# 23 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_EMERALBODY_RIVAL_STATE, 2, PetalburgCity_EventScript_ShowRivals
# 24 "data/maps/PetalburgCity/scripts.pory"
	call Common_EventScript_SetupEmRivalGfxId
# 25 "data/maps/PetalburgCity/scripts.pory"
	end
# 26 "data/maps/PetalburgCity/scripts.pory"

# 27 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowRival:
# 28 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_TEMP_1
# 29 "data/maps/PetalburgCity/scripts.pory"
	return
# 30 "data/maps/PetalburgCity/scripts.pory"

# 31 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowRivals:
# 32 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_TEMP_2
# 33 "data/maps/PetalburgCity/scripts.pory"
	return
# 34 "data/maps/PetalburgCity/scripts.pory"

# 35 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_MoveGymBoyToWestEntrance::
# 36 "data/maps/PetalburgCity/scripts.pory"
	setobjectxyperm LOCALID_GYM_BOY, 5, 11
# 37 "data/maps/PetalburgCity/scripts.pory"
	return
# 38 "data/maps/PetalburgCity/scripts.pory"

# 39 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_DisableMapNameAndMusic::
# 40 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 41 "data/maps/PetalburgCity/scripts.pory"
	savebgm MUS_FOLLOW_ME
# 42 "data/maps/PetalburgCity/scripts.pory"
	return
# 43 "data/maps/PetalburgCity/scripts.pory"

# 44 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_SetGymDoorsUnlocked::
# 45 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 7
# 46 "data/maps/PetalburgCity/scripts.pory"
	return
# 47 "data/maps/PetalburgCity/scripts.pory"

# 48 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_OnFrame:
# 49 "data/maps/PetalburgCity/scripts.pory"
	map_script_2 VAR_PETALBURG_CITY_STATE, 2, PetalburgCity_EventScript_WallyTutorial
# 50 "data/maps/PetalburgCity/scripts.pory"
	map_script_2 VAR_PETALBURG_CITY_STATE, 4, PetalburgCity_EventScript_WalkToWallyHouse
# 51 "data/maps/PetalburgCity/scripts.pory"
	.2byte 0
# 52 "data/maps/PetalburgCity/scripts.pory"

# 53 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallyTutorial::
# 54 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 55 "data/maps/PetalburgCity/scripts.pory"
	special SavePlayerParty
# 56 "data/maps/PetalburgCity/scripts.pory"
	special LoadWallyZigzagoon
# 57 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Movement_WallyTutorialWally
# 58 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_WallyTutorialPlayer
# 59 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 60 "data/maps/PetalburgCity/scripts.pory"
	speakername (CommonText_Wally)
# 61 "data/maps/PetalburgCity/scripts.pory"
	msgbox Route102_Text_WatchMeCatchPokemon, MSGBOX_DEFAULT
# 62 "data/maps/PetalburgCity/scripts.pory"
	special StartWallyTutorialBattle
# 63 "data/maps/PetalburgCity/scripts.pory"
	waitstate
# 64 "data/maps/PetalburgCity/scripts.pory"
	speakername (CommonText_Wally)
# 65 "data/maps/PetalburgCity/scripts.pory"
	msgbox Route102_Text_WallyIDidIt, MSGBOX_DEFAULT
# 66 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceFasterLeft, MAP_PETALBURG_CITY
# 67 "data/maps/PetalburgCity/scripts.pory"
	waitmovement LOCALID_WALLY, MAP_PETALBURG_CITY
# 68 "data/maps/PetalburgCity/scripts.pory"
	speakername (CommonText_Wally)
# 69 "data/maps/PetalburgCity/scripts.pory"
	msgbox Route102_Text_LetsGoBack, MSGBOX_DEFAULT
# 70 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 71 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 72 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 3
# 73 "data/maps/PetalburgCity/scripts.pory"
	fadedefaultbgm
# 74 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 75 "data/maps/PetalburgCity/scripts.pory"
	special LoadPlayerParty
# 76 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 1
# 77 "data/maps/PetalburgCity/scripts.pory"
	warp MAP_PETALBURG_CITY_GYM, 4, 108
# 78 "data/maps/PetalburgCity/scripts.pory"
	waitstate
# 79 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 80 "data/maps/PetalburgCity/scripts.pory"
	end
# 81 "data/maps/PetalburgCity/scripts.pory"

# 82 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WalkToWallyHouse::
# 83 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 84 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 85 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Movement_WalkToWallyHouseWallysDad
# 86 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_WalkToWallyHousePlayer
# 87 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 88 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8004, 7
# 89 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8005, 5
# 90 "data/maps/PetalburgCity/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 91 "data/maps/PetalburgCity/scripts.pory"
	waitdooranim
# 92 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, Common_Movement_EnterHouse
# 93 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp2
# 94 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 95 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_CITY_WALLYS_DAD
# 96 "data/maps/PetalburgCity/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_PETALBURG_CITY
# 97 "data/maps/PetalburgCity/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 98 "data/maps/PetalburgCity/scripts.pory"
	waitdooranim
# 99 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 100 "data/maps/PetalburgCity/scripts.pory"
	fadedefaultbgm
# 101 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 102 "data/maps/PetalburgCity/scripts.pory"
	warp MAP_PETALBURG_CITY_WALLYS_HOUSE, 2, 4
# 103 "data/maps/PetalburgCity/scripts.pory"
	waitstate
# 104 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 105 "data/maps/PetalburgCity/scripts.pory"
	end
# 106 "data/maps/PetalburgCity/scripts.pory"

# 107 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Boy::
# 108 "data/maps/PetalburgCity/scripts.pory"
	lock
# 109 "data/maps/PetalburgCity/scripts.pory"
	faceplayer
# 110 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WaterReflection, MSGBOX_DEFAULT
# 111 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 112 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_BOY, Common_Movement_FaceOriginalDirection
# 113 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 114 "data/maps/PetalburgCity/scripts.pory"
	release
# 115 "data/maps/PetalburgCity/scripts.pory"
	end
# 116 "data/maps/PetalburgCity/scripts.pory"

# 117 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallysMom::
# 118 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WhereIsWally, MSGBOX_NPC
# 119 "data/maps/PetalburgCity/scripts.pory"
	end
# 120 "data/maps/PetalburgCity/scripts.pory"

# 121 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkToWallyHousePlayer:
# 122 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 123 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 124 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 125 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 126 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 127 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 128 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 129 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 130 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 131 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 132 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 133 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 134 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 135 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 136 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 137 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 138 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 139 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 140 "data/maps/PetalburgCity/scripts.pory"

# 141 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkToWallyHouseWallysDad:
# 142 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 143 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 144 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 145 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 146 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 147 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 148 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 149 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 150 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 151 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 152 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 153 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 154 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 155 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 156 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 157 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 158 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 159 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 160 "data/maps/PetalburgCity/scripts.pory"

# 161 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WallyTutorialPlayer:
# 162 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 163 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 164 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 165 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 166 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 167 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 168 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 169 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 170 "data/maps/PetalburgCity/scripts.pory"
	walk_down
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
	walk_right
# 181 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 182 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 183 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 184 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 185 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 186 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 187 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 188 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 189 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 190 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 191 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 192 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 193 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_right
# 194 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 195 "data/maps/PetalburgCity/scripts.pory"

# 196 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WallyTutorialWally:
# 197 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 198 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 199 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 200 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 201 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 202 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 203 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 204 "data/maps/PetalburgCity/scripts.pory"
	walk_down
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
	walk_right
# 215 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 216 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 217 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 218 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 219 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 220 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 221 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 222 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 223 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 224 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 225 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 226 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 227 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 228 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 229 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 230 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 231 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 232 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_right
# 233 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 234 "data/maps/PetalburgCity/scripts.pory"

# 235 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_GymSign::
# 236 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_GymSign, MSGBOX_SIGN
# 237 "data/maps/PetalburgCity/scripts.pory"
	end
# 238 "data/maps/PetalburgCity/scripts.pory"

# 239 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_CitySign::
# 240 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_CitySign, MSGBOX_SIGN
# 241 "data/maps/PetalburgCity/scripts.pory"
	end
# 242 "data/maps/PetalburgCity/scripts.pory"

# 243 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Gentleman::
# 244 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_FullPartyExplanation, MSGBOX_NPC
# 245 "data/maps/PetalburgCity/scripts.pory"
	end
# 246 "data/maps/PetalburgCity/scripts.pory"

# 247 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallyHouseSign::
# 248 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WallyHouseSign, MSGBOX_SIGN
# 249 "data/maps/PetalburgCity/scripts.pory"
	end
# 250 "data/maps/PetalburgCity/scripts.pory"

# 251 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer0::
# 252 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 253 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 0
# 254 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 255 "data/maps/PetalburgCity/scripts.pory"
	end
# 256 "data/maps/PetalburgCity/scripts.pory"

# 257 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer1::
# 258 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 259 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 1
# 260 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 261 "data/maps/PetalburgCity/scripts.pory"
	end
# 262 "data/maps/PetalburgCity/scripts.pory"

# 263 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer2::
# 264 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 265 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 2
# 266 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 267 "data/maps/PetalburgCity/scripts.pory"
	end
# 268 "data/maps/PetalburgCity/scripts.pory"

# 269 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer3::
# 270 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 271 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 3
# 272 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 273 "data/maps/PetalburgCity/scripts.pory"
	end
# 274 "data/maps/PetalburgCity/scripts.pory"

# 275 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer::
# 276 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_FacePlayer
# 277 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 278 "data/maps/PetalburgCity/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 279 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 280 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_ExclamationMark
# 281 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 282 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_Delay48
# 283 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 284 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_BoyApproachPlayer0
# 285 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_BoyApproachPlayer1
# 286 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_BoyApproachPlayer2
# 287 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_BoyApproachPlayer3
# 288 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouRookieTrainer, MSGBOX_DEFAULT
# 289 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 290 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_LeadPlayerToGym0
# 291 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_LeadPlayerToGym1
# 292 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_LeadPlayerToGym2
# 293 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_LeadPlayerToGym3
# 294 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ThisIsPetalburgGym, MSGBOX_DEFAULT
# 295 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_WalkInPlaceFasterRight
# 296 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 297 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 298 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ThisIsGymSign, MSGBOX_DEFAULT
# 299 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 300 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkAway
# 301 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 302 "data/maps/PetalburgCity/scripts.pory"
	fadedefaultbgm
# 303 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 304 "data/maps/PetalburgCity/scripts.pory"
	end
# 305 "data/maps/PetalburgCity/scripts.pory"

# 306 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer0::
# 307 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer0
# 308 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 309 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 310 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 311 "data/maps/PetalburgCity/scripts.pory"
	return
# 312 "data/maps/PetalburgCity/scripts.pory"

# 313 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer1::
# 314 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_WalkRight2
# 315 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 316 "data/maps/PetalburgCity/scripts.pory"
	return
# 317 "data/maps/PetalburgCity/scripts.pory"

# 318 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer2::
# 319 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer2
# 320 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 321 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 322 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 323 "data/maps/PetalburgCity/scripts.pory"
	return
# 324 "data/maps/PetalburgCity/scripts.pory"

# 325 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer3::
# 326 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer3
# 327 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 328 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 329 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 330 "data/maps/PetalburgCity/scripts.pory"
	return
# 331 "data/maps/PetalburgCity/scripts.pory"

# 332 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym0::
# 333 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym0
# 334 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym0
# 335 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 336 "data/maps/PetalburgCity/scripts.pory"
	return
# 337 "data/maps/PetalburgCity/scripts.pory"

# 338 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym1::
# 339 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym1
# 340 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym1
# 341 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 342 "data/maps/PetalburgCity/scripts.pory"
	return
# 343 "data/maps/PetalburgCity/scripts.pory"

# 344 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym2::
# 345 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym2
# 346 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym2
# 347 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 348 "data/maps/PetalburgCity/scripts.pory"
	return
# 349 "data/maps/PetalburgCity/scripts.pory"

# 350 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym3::
# 351 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym3
# 352 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym3
# 353 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 354 "data/maps/PetalburgCity/scripts.pory"
	return
# 355 "data/maps/PetalburgCity/scripts.pory"

# 356 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer0:
# 357 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 358 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 359 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 360 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 361 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 362 "data/maps/PetalburgCity/scripts.pory"

# 363 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer2:
# 364 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 365 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 366 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 367 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 368 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 369 "data/maps/PetalburgCity/scripts.pory"

# 370 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer3:
# 371 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 372 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 373 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 374 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 375 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 376 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 377 "data/maps/PetalburgCity/scripts.pory"

# 378 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym0:
# 379 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 380 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 381 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 382 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 383 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 384 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 385 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 386 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 387 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 388 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 389 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 390 "data/maps/PetalburgCity/scripts.pory"

# 391 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym1:
# 392 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 393 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 394 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 395 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 396 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 397 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 398 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 399 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 400 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 401 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 402 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 403 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 404 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 405 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 406 "data/maps/PetalburgCity/scripts.pory"

# 407 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym2:
# 408 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 409 "data/maps/PetalburgCity/scripts.pory"
	walk_right
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
	walk_up
# 416 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 417 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 418 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 419 "data/maps/PetalburgCity/scripts.pory"

# 420 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym3:
# 421 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 422 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 423 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 424 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 425 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 426 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 427 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 428 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 429 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 430 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 431 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 432 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 433 "data/maps/PetalburgCity/scripts.pory"

# 434 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkAway:
# 435 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 436 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 437 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 438 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 439 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 440 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 441 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 442 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 443 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 444 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 445 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 446 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 447 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 448 "data/maps/PetalburgCity/scripts.pory"

# 449 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym0:
# 450 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 451 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 452 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 453 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 454 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 455 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 456 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 457 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 458 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 459 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 460 "data/maps/PetalburgCity/scripts.pory"

# 461 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym1:
# 462 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 463 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 464 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 465 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 466 "data/maps/PetalburgCity/scripts.pory"
	walk_right
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
	walk_up
# 473 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 474 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 475 "data/maps/PetalburgCity/scripts.pory"

# 476 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym2:
# 477 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 478 "data/maps/PetalburgCity/scripts.pory"
	walk_right
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
	walk_up
# 486 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 487 "data/maps/PetalburgCity/scripts.pory"

# 488 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym3:
# 489 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 490 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 491 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 492 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 493 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 494 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 495 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 496 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 497 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 498 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 499 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 500 "data/maps/PetalburgCity/scripts.pory"

# 501 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott0::
# 502 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 503 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_SCOTT
# 504 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 0
# 505 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_SCOTT, 13, 10
# 506 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 507 "data/maps/PetalburgCity/scripts.pory"
	end
# 508 "data/maps/PetalburgCity/scripts.pory"

# 509 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott1::
# 510 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 511 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_SCOTT
# 512 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 1
# 513 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_SCOTT, 13, 11
# 514 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 515 "data/maps/PetalburgCity/scripts.pory"
	end
# 516 "data/maps/PetalburgCity/scripts.pory"

# 517 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott2::
# 518 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 519 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_SCOTT
# 520 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 2
# 521 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_SCOTT, 13, 12
# 522 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 523 "data/maps/PetalburgCity/scripts.pory"
	end
# 524 "data/maps/PetalburgCity/scripts.pory"

# 525 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott3::
# 526 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 527 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_SCOTT
# 528 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 3
# 529 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_SCOTT, 13, 13
# 530 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 531 "data/maps/PetalburgCity/scripts.pory"
	end
# 532 "data/maps/PetalburgCity/scripts.pory"

# 533 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott::
# 534 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_WalkLeft4
# 535 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 536 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 537 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_ExclamationMark
# 538 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 539 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_Delay48
# 540 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 541 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_WalkLeft4
# 542 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 543 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 544 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 545 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_SCOTT_STATE, 1
# 546 "data/maps/PetalburgCity/scripts.pory"
	speakername (CommonText_Q)
# 547 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouATrainer, MSGBOX_DEFAULT
# 548 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 549 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_WalkInPlaceFasterRight
# 550 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 551 "data/maps/PetalburgCity/scripts.pory"
	delay 30
# 552 "data/maps/PetalburgCity/scripts.pory"
	speakername (CommonText_Q)
# 553 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WellMaybeNot, MSGBOX_DEFAULT
# 554 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 555 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_WalkInPlaceFasterLeft
# 556 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 557 "data/maps/PetalburgCity/scripts.pory"
	delay 30
# 558 "data/maps/PetalburgCity/scripts.pory"
	speakername (CommonText_Q)
# 559 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ImLookingForTalentedTrainers, MSGBOX_DEFAULT
# 560 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 561 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_ScottExit0
# 562 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_ScottExit1
# 563 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_ScottExit2
# 564 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_ScottExit3
# 565 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_SCOTT_PETALBURG_ENCOUNTER, 1
# 566 "data/maps/PetalburgCity/scripts.pory"
	removeobject LOCALID_SCOTT
# 567 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 568 "data/maps/PetalburgCity/scripts.pory"
	end
# 569 "data/maps/PetalburgCity/scripts.pory"

# 570 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit0::
# 571 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit0
# 572 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit0
# 573 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 574 "data/maps/PetalburgCity/scripts.pory"
	return
# 575 "data/maps/PetalburgCity/scripts.pory"

# 576 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit1::
# 577 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit1
# 578 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_BoyWalkAway
# 579 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 580 "data/maps/PetalburgCity/scripts.pory"
	return
# 581 "data/maps/PetalburgCity/scripts.pory"

# 582 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit2::
# 583 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit2
# 584 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_BoyWalkAway
# 585 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 586 "data/maps/PetalburgCity/scripts.pory"
	return
# 587 "data/maps/PetalburgCity/scripts.pory"

# 588 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit3::
# 589 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit3
# 590 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit3
# 591 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 592 "data/maps/PetalburgCity/scripts.pory"
	return
# 593 "data/maps/PetalburgCity/scripts.pory"

# 594 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit0:
# 595 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 596 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 597 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 598 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 599 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 600 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 601 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 602 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 603 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 604 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 605 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 606 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 607 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 608 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 609 "data/maps/PetalburgCity/scripts.pory"

# 610 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit0:
# 611 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 612 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 613 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 614 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 615 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 616 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 617 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 618 "data/maps/PetalburgCity/scripts.pory"

# 619 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit1:
# 620 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 621 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 622 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 623 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 624 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 625 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 626 "data/maps/PetalburgCity/scripts.pory"

# 627 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit2:
# 628 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 629 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 630 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 631 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 632 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 633 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 634 "data/maps/PetalburgCity/scripts.pory"

# 635 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit3:
# 636 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 637 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 638 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 639 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 640 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 641 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 642 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 643 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 644 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 645 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 646 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 647 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 648 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 649 "data/maps/PetalburgCity/scripts.pory"

# 650 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit3:
# 651 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 652 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 653 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 654 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 655 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 656 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 657 "data/maps/PetalburgCity/scripts.pory"

# 658 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_GymBoy::
# 659 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouRookieTrainer, MSGBOX_NPC
# 660 "data/maps/PetalburgCity/scripts.pory"
	end
# 661 "data/maps/PetalburgCity/scripts.pory"

# 662 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WhereIsWally:
# 663 "data/maps/PetalburgCity/scripts.pory"
	.string "Where has our Wally gone?\p"
# 664 "data/maps/PetalburgCity/scripts.pory"
	.string "We have to leave for Verdanturf Town\n"
# 665 "data/maps/PetalburgCity/scripts.pory"
	.string "very soon…$"
# 666 "data/maps/PetalburgCity/scripts.pory"

# 667 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_AreYouRookieTrainer:
# 668 "data/maps/PetalburgCity/scripts.pory"
	.string "Hiya! Are you maybe…\n"
# 669 "data/maps/PetalburgCity/scripts.pory"
	.string "A rookie Trainer?\p"
# 670 "data/maps/PetalburgCity/scripts.pory"
	.string "Do you know what Pokémon Trainers\n"
# 671 "data/maps/PetalburgCity/scripts.pory"
	.string "do when they reach a new town?\p"
# 672 "data/maps/PetalburgCity/scripts.pory"
	.string "They first check what kind of Gym\n"
# 673 "data/maps/PetalburgCity/scripts.pory"
	.string "is in the town.$"
# 674 "data/maps/PetalburgCity/scripts.pory"

# 675 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ThisIsPetalburgGym:
# 676 "data/maps/PetalburgCity/scripts.pory"
	.string "See? This is Petalburg City's Gym.$"
# 677 "data/maps/PetalburgCity/scripts.pory"

# 678 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ThisIsGymSign:
# 679 "data/maps/PetalburgCity/scripts.pory"
	.string "This is the Gym's sign. Look for it\n"
# 680 "data/maps/PetalburgCity/scripts.pory"
	.string "whenever you're looking for a Gym.$"
# 681 "data/maps/PetalburgCity/scripts.pory"

# 682 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WaterReflection:
# 683 "data/maps/PetalburgCity/scripts.pory"
	.string "My face is reflected in the water.\p"
# 684 "data/maps/PetalburgCity/scripts.pory"
	.string "It's a shining grin full of hope…\p"
# 685 "data/maps/PetalburgCity/scripts.pory"
	.string "Or it could be a look of somber silence\n"
# 686 "data/maps/PetalburgCity/scripts.pory"
	.string "struggling with fear…\p"
# 687 "data/maps/PetalburgCity/scripts.pory"
	.string "What do you see reflected in your face?$"
# 688 "data/maps/PetalburgCity/scripts.pory"

# 689 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_FullPartyExplanation:
# 690 "data/maps/PetalburgCity/scripts.pory"
	.string "Let's say you have six Pokémon.\n"
# 691 "data/maps/PetalburgCity/scripts.pory"
	.string "If you catch another one…\p"
# 692 "data/maps/PetalburgCity/scripts.pory"
	.string "It is automatically sent to a Storage\n"
# 693 "data/maps/PetalburgCity/scripts.pory"
	.string "Box over a PC connection.$"
# 694 "data/maps/PetalburgCity/scripts.pory"

# 695 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_GymSign:
# 696 "data/maps/PetalburgCity/scripts.pory"
	.string "Petalburg City Pokémon Gym\n"
# 697 "data/maps/PetalburgCity/scripts.pory"
	.string "Leader: Norman\l"
# 698 "data/maps/PetalburgCity/scripts.pory"
	.string "“A man in pursuit of power!”$"
# 699 "data/maps/PetalburgCity/scripts.pory"

# 700 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_CitySign:
# 701 "data/maps/PetalburgCity/scripts.pory"
	.string "Petalburg City\n"
# 702 "data/maps/PetalburgCity/scripts.pory"
	.string "“Where people mingle with nature.”$"
# 703 "data/maps/PetalburgCity/scripts.pory"

# 704 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WallyHouseSign:
# 705 "data/maps/PetalburgCity/scripts.pory"
	.string "Wally's House$"
# 706 "data/maps/PetalburgCity/scripts.pory"

# 707 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_AreYouATrainer:
# 708 "data/maps/PetalburgCity/scripts.pory"
	.string "Excuse me!\p"
# 709 "data/maps/PetalburgCity/scripts.pory"
	.string "Let me guess, from the way you're\n"
# 710 "data/maps/PetalburgCity/scripts.pory"
	.string "dressed, are you a Pokémon Trainer?$"
# 711 "data/maps/PetalburgCity/scripts.pory"

# 712 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WellMaybeNot:
# 713 "data/maps/PetalburgCity/scripts.pory"
	.string "… … … … … …\p"
# 714 "data/maps/PetalburgCity/scripts.pory"
	.string "Well, maybe not.\n"
# 715 "data/maps/PetalburgCity/scripts.pory"
	.string "Your clothes aren't all that dirty.\p"
# 716 "data/maps/PetalburgCity/scripts.pory"
	.string "You're either a rookie Trainer,\n"
# 717 "data/maps/PetalburgCity/scripts.pory"
	.string "or maybe you're just an ordinary kid.$"
# 718 "data/maps/PetalburgCity/scripts.pory"

# 719 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ImLookingForTalentedTrainers:
# 720 "data/maps/PetalburgCity/scripts.pory"
	.string "I'm roaming the land in search of\n"
# 721 "data/maps/PetalburgCity/scripts.pory"
	.string "talented Trainers.\p"
# 722 "data/maps/PetalburgCity/scripts.pory"
	.string "I'm sorry to have taken your time.$"

PetalburgCity_EventScript_Simulation::
# 726 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_Simulation_Text_0, MSGBOX_NPC
	return


PetalburgCity_EventScript_WallyBattle::
# 732 "data/maps/PetalburgCity/scripts.pory"
	lock
# 733 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 734 "data/maps/PetalburgCity/scripts.pory"
	speakername CommonText_Q
# 735 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_WallyBattle_Text_0
# 736 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 737 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 738 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 739 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_WALLY
# 740 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_WALLY, 15, 12
# 741 "data/maps/PetalburgCity/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 742 "data/maps/PetalburgCity/scripts.pory"
	switch VAR_TEMP_0
# 743 "data/maps/PetalburgCity/scripts.pory"
	case 4, PetalburgCity_EventScript_WallyBattle_3
# 745 "data/maps/PetalburgCity/scripts.pory"
	case 5, PetalburgCity_EventScript_WallyBattle_4
# 747 "data/maps/PetalburgCity/scripts.pory"
	case 6, PetalburgCity_EventScript_WallyBattle_5
# 749 "data/maps/PetalburgCity/scripts.pory"
	case 7, PetalburgCity_EventScript_WallyBattle_6
PetalburgCity_EventScript_WallyBattle_1:
# 753 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 754 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceUp
# 755 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 756 "data/maps/PetalburgCity/scripts.pory"
	delay 50
# 757 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkUp3
# 758 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 759 "data/maps/PetalburgCity/scripts.pory"
	speakername CommonText_Wally
# 760 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_WallyBattle_Text_1
# 767 "data/maps/PetalburgCity/scripts.pory"
	trainerbattle_no_intro TRAINER_WALLY_PETALBURG, PetalburgCity_EventScript_WallyBattle_Text_2
# 768 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_WallyBattle_Text_3
# 773 "data/maps/PetalburgCity/scripts.pory"
	fadescreen FADE_TO_BLACK
# 774 "data/maps/PetalburgCity/scripts.pory"
	removeobject LOCALID_WALLY
# 775 "data/maps/PetalburgCity/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 776 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 6
# 777 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 778 "data/maps/PetalburgCity/scripts.pory"
	release
	return

PetalburgCity_EventScript_WallyBattle_3:
# 744 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkLeft11
	goto PetalburgCity_EventScript_WallyBattle_1

PetalburgCity_EventScript_WallyBattle_4:
# 746 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkLeft10
	goto PetalburgCity_EventScript_WallyBattle_1

PetalburgCity_EventScript_WallyBattle_5:
# 748 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkLeft9
	goto PetalburgCity_EventScript_WallyBattle_1

PetalburgCity_EventScript_WallyBattle_6:
# 750 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkLeft8
	goto PetalburgCity_EventScript_WallyBattle_1


PetalburgCity_EventScript_Simulation_Text_0:
# 726 "data/maps/PetalburgCity/scripts.pory"
	.string "I heard there's a realistic computer\n"
	.string "simulation out there.\p"
	.string "If you lose a Pokémon battle in it, you\n"
	.string "lose one in real life!\p"
	.string "That's just too scary.$"

PetalburgCity_EventScript_WallyBattle_Text_0:
# 735 "data/maps/PetalburgCity/scripts.pory"
	.string "{PLAYER}! Please wait!$"

PetalburgCity_EventScript_WallyBattle_Text_1:
# 760 "data/maps/PetalburgCity/scripts.pory"
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
# 767 "data/maps/PetalburgCity/scripts.pory"
	.string "Ah…\nI think I see now…$"

PetalburgCity_EventScript_WallyBattle_Text_3:
# 768 "data/maps/PetalburgCity/scripts.pory"
	.string "{PLAYER}, you're strong.\p"
	.string "You're really strong.\p"
	.string "Thank you for the battle.\n"
	.string "I have a long way to go, but I hope I can\l"
	.string "be up there on the stage with you some\l"
	.string "day.\p"
	.string "I'll be back, and I'll give you a\n"
	.string "challenge you won't forget!$"
