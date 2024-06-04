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

# 8 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_MapScripts::
# 9 "data/maps/PetalburgCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PetalburgCity_OnTransition
# 10 "data/maps/PetalburgCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PetalburgCity_OnFrame
# 11 "data/maps/PetalburgCity/scripts.pory"
	.byte 0
# 12 "data/maps/PetalburgCity/scripts.pory"

# 13 "data/maps/PetalburgCity/scripts.pory"
	@ State descriptions for VAR_EMERALBODY_RIVAL_STATE
# 14 "data/maps/PetalburgCity/scripts.pory"
	@ 1: Set after scene outside Birch's Lab
# 15 "data/maps/PetalburgCity/scripts.pory"
	@ 2: Set after rival fight in Petalburg City
# 16 "data/maps/PetalburgCity/scripts.pory"

# 17 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_OnTransition:
# 18 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_VISITED_PETALBURG_CITY
# 19 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_TEMP_1
# 20 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_PETALBURG_CITY_STATE, 0, PetalburgCity_EventScript_MoveGymBoyToWestEntrance
# 21 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_PETALBURG_CITY_STATE, 2, PetalburgCity_EventScript_DisableMapNameAndMusic
# 22 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_PETALBURG_CITY_STATE, 4, PetalburgCity_EventScript_DisableMapNameAndMusic
# 23 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_PETALBURG_GYM_STATE, 8, PetalburgCity_EventScript_SetGymDoorsUnlocked
# 24 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_EMERALBODY_RIVAL_STATE, 1, PetalburgCity_EventScript_ShowRival
# 25 "data/maps/PetalburgCity/scripts.pory"
	call Common_EventScript_SetupEmRivalGfxId
# 26 "data/maps/PetalburgCity/scripts.pory"
	end
# 27 "data/maps/PetalburgCity/scripts.pory"

# 28 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowRival:
# 29 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_TEMP_1
# 30 "data/maps/PetalburgCity/scripts.pory"
	return
# 31 "data/maps/PetalburgCity/scripts.pory"

# 32 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_MoveGymBoyToWestEntrance::
# 33 "data/maps/PetalburgCity/scripts.pory"
	setobjectxyperm LOCALID_GYM_BOY, 5, 11
# 34 "data/maps/PetalburgCity/scripts.pory"
	return
# 35 "data/maps/PetalburgCity/scripts.pory"

# 36 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_DisableMapNameAndMusic::
# 37 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 38 "data/maps/PetalburgCity/scripts.pory"
	savebgm MUS_FOLLOW_ME
# 39 "data/maps/PetalburgCity/scripts.pory"
	return
# 40 "data/maps/PetalburgCity/scripts.pory"

# 41 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_SetGymDoorsUnlocked::
# 42 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 7
# 43 "data/maps/PetalburgCity/scripts.pory"
	return
# 44 "data/maps/PetalburgCity/scripts.pory"

# 45 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_OnFrame:
# 46 "data/maps/PetalburgCity/scripts.pory"
	map_script_2 VAR_PETALBURG_CITY_STATE, 2, PetalburgCity_EventScript_WallyTutorial
# 47 "data/maps/PetalburgCity/scripts.pory"
	map_script_2 VAR_PETALBURG_CITY_STATE, 4, PetalburgCity_EventScript_WalkToWallyHouse
# 48 "data/maps/PetalburgCity/scripts.pory"
	.2byte 0
# 49 "data/maps/PetalburgCity/scripts.pory"

# 50 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallyTutorial::
# 51 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 52 "data/maps/PetalburgCity/scripts.pory"
	special SavePlayerParty
# 53 "data/maps/PetalburgCity/scripts.pory"
	special LoadWallyZigzagoon
# 54 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Movement_WallyTutorialWally
# 55 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_WallyTutorialPlayer
# 56 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 57 "data/maps/PetalburgCity/scripts.pory"
	msgbox Route102_Text_WatchMeCatchPokemon, MSGBOX_DEFAULT
# 58 "data/maps/PetalburgCity/scripts.pory"
	special StartWallyTutorialBattle
# 59 "data/maps/PetalburgCity/scripts.pory"
	waitstate
# 60 "data/maps/PetalburgCity/scripts.pory"
	msgbox Route102_Text_WallyIDidIt, MSGBOX_DEFAULT
# 61 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceFasterLeft, MAP_PETALBURG_CITY
# 62 "data/maps/PetalburgCity/scripts.pory"
	waitmovement LOCALID_WALLY, MAP_PETALBURG_CITY
# 63 "data/maps/PetalburgCity/scripts.pory"
	msgbox Route102_Text_LetsGoBack, MSGBOX_DEFAULT
# 64 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 65 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 66 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 3
# 67 "data/maps/PetalburgCity/scripts.pory"
	fadedefaultbgm
# 68 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 69 "data/maps/PetalburgCity/scripts.pory"
	special LoadPlayerParty
# 70 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 1
# 71 "data/maps/PetalburgCity/scripts.pory"
	warp MAP_PETALBURG_CITY_GYM, 4, 108
# 72 "data/maps/PetalburgCity/scripts.pory"
	waitstate
# 73 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 74 "data/maps/PetalburgCity/scripts.pory"
	end
# 75 "data/maps/PetalburgCity/scripts.pory"

# 76 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WalkToWallyHouse::
# 77 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 78 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 79 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Movement_WalkToWallyHouseWallysDad
# 80 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_WalkToWallyHousePlayer
# 81 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 82 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8004, 7
# 83 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8005, 5
# 84 "data/maps/PetalburgCity/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 85 "data/maps/PetalburgCity/scripts.pory"
	waitdooranim
# 86 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Movement_WalkInsideHouseWallysDad
# 87 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp2
# 88 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 89 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_CITY_WALLYS_DAD
# 90 "data/maps/PetalburgCity/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_PETALBURG_CITY
# 91 "data/maps/PetalburgCity/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 92 "data/maps/PetalburgCity/scripts.pory"
	waitdooranim
# 93 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 94 "data/maps/PetalburgCity/scripts.pory"
	fadedefaultbgm
# 95 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 96 "data/maps/PetalburgCity/scripts.pory"
	warp MAP_PETALBURG_CITY_WALLYS_HOUSE, 2, 4
# 97 "data/maps/PetalburgCity/scripts.pory"
	waitstate
# 98 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 99 "data/maps/PetalburgCity/scripts.pory"
	end
# 100 "data/maps/PetalburgCity/scripts.pory"

# 101 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Boy::
# 102 "data/maps/PetalburgCity/scripts.pory"
	lock
# 103 "data/maps/PetalburgCity/scripts.pory"
	faceplayer
# 104 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WaterReflection, MSGBOX_DEFAULT
# 105 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 106 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_BOY, Common_Movement_FaceOriginalDirection
# 107 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 108 "data/maps/PetalburgCity/scripts.pory"
	release
# 109 "data/maps/PetalburgCity/scripts.pory"
	end
# 110 "data/maps/PetalburgCity/scripts.pory"

# 111 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallysMom::
# 112 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WhereIsWally, MSGBOX_NPC
# 113 "data/maps/PetalburgCity/scripts.pory"
	end
# 114 "data/maps/PetalburgCity/scripts.pory"

# 115 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkToWallyHousePlayer:
# 116 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 117 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 118 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 119 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 120 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 121 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 122 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 123 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 124 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 125 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 126 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 127 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 128 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 129 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 130 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 131 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 132 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 133 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 134 "data/maps/PetalburgCity/scripts.pory"

# 135 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkToWallyHouseWallysDad:
# 136 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 137 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 138 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 139 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 140 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 141 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 142 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 143 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 144 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 145 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 146 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 147 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 148 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 149 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 150 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 151 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 152 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 153 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 154 "data/maps/PetalburgCity/scripts.pory"

# 155 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkInsideHouseWallysDad:
# 156 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 157 "data/maps/PetalburgCity/scripts.pory"
	set_invisible
# 158 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 159 "data/maps/PetalburgCity/scripts.pory"

# 160 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WallyTutorialPlayer:
# 161 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 162 "data/maps/PetalburgCity/scripts.pory"
	walk_down
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
	walk_up
# 191 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 192 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_right
# 193 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 194 "data/maps/PetalburgCity/scripts.pory"

# 195 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WallyTutorialWally:
# 196 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 197 "data/maps/PetalburgCity/scripts.pory"
	walk_down
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
	walk_up
# 225 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 226 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 227 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 228 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 229 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 230 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 231 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_right
# 232 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 233 "data/maps/PetalburgCity/scripts.pory"

# 234 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_GymSign::
# 235 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_GymSign, MSGBOX_SIGN
# 236 "data/maps/PetalburgCity/scripts.pory"
	end
# 237 "data/maps/PetalburgCity/scripts.pory"

# 238 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_CitySign::
# 239 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_CitySign, MSGBOX_SIGN
# 240 "data/maps/PetalburgCity/scripts.pory"
	end
# 241 "data/maps/PetalburgCity/scripts.pory"

# 242 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Gentleman::
# 243 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_FullPartyExplanation, MSGBOX_NPC
# 244 "data/maps/PetalburgCity/scripts.pory"
	end
# 245 "data/maps/PetalburgCity/scripts.pory"

# 246 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallyHouseSign::
# 247 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WallyHouseSign, MSGBOX_SIGN
# 248 "data/maps/PetalburgCity/scripts.pory"
	end
# 249 "data/maps/PetalburgCity/scripts.pory"

# 250 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer0::
# 251 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 252 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 0
# 253 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 254 "data/maps/PetalburgCity/scripts.pory"
	end
# 255 "data/maps/PetalburgCity/scripts.pory"

# 256 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer1::
# 257 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 258 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 1
# 259 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 260 "data/maps/PetalburgCity/scripts.pory"
	end
# 261 "data/maps/PetalburgCity/scripts.pory"

# 262 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer2::
# 263 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 264 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 2
# 265 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 266 "data/maps/PetalburgCity/scripts.pory"
	end
# 267 "data/maps/PetalburgCity/scripts.pory"

# 268 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer3::
# 269 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 270 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 3
# 271 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 272 "data/maps/PetalburgCity/scripts.pory"
	end
# 273 "data/maps/PetalburgCity/scripts.pory"

# 274 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer::
# 275 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_FacePlayer
# 276 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 277 "data/maps/PetalburgCity/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 278 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 279 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_ExclamationMark
# 280 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 281 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_Delay48
# 282 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 283 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_BoyApproachPlayer0
# 284 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_BoyApproachPlayer1
# 285 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_BoyApproachPlayer2
# 286 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_BoyApproachPlayer3
# 287 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouRookieTrainer, MSGBOX_DEFAULT
# 288 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 289 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_LeadPlayerToGym0
# 290 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_LeadPlayerToGym1
# 291 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_LeadPlayerToGym2
# 292 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_LeadPlayerToGym3
# 293 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ThisIsPetalburgGym, MSGBOX_DEFAULT
# 294 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_WalkInPlaceFasterRight
# 295 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 296 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 297 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ThisIsGymSign, MSGBOX_DEFAULT
# 298 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 299 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkAway
# 300 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 301 "data/maps/PetalburgCity/scripts.pory"
	fadedefaultbgm
# 302 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 303 "data/maps/PetalburgCity/scripts.pory"
	end
# 304 "data/maps/PetalburgCity/scripts.pory"

# 305 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer0::
# 306 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer0
# 307 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 308 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 309 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 310 "data/maps/PetalburgCity/scripts.pory"
	return
# 311 "data/maps/PetalburgCity/scripts.pory"

# 312 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer1::
# 313 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer1
# 314 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 315 "data/maps/PetalburgCity/scripts.pory"
	return
# 316 "data/maps/PetalburgCity/scripts.pory"

# 317 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer2::
# 318 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer2
# 319 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 320 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 321 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 322 "data/maps/PetalburgCity/scripts.pory"
	return
# 323 "data/maps/PetalburgCity/scripts.pory"

# 324 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer3::
# 325 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer3
# 326 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 327 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 328 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 329 "data/maps/PetalburgCity/scripts.pory"
	return
# 330 "data/maps/PetalburgCity/scripts.pory"

# 331 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym0::
# 332 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym0
# 333 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym0
# 334 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 335 "data/maps/PetalburgCity/scripts.pory"
	return
# 336 "data/maps/PetalburgCity/scripts.pory"

# 337 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym1::
# 338 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym1
# 339 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym1
# 340 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 341 "data/maps/PetalburgCity/scripts.pory"
	return
# 342 "data/maps/PetalburgCity/scripts.pory"

# 343 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym2::
# 344 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym2
# 345 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym2
# 346 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 347 "data/maps/PetalburgCity/scripts.pory"
	return
# 348 "data/maps/PetalburgCity/scripts.pory"

# 349 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym3::
# 350 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym3
# 351 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym3
# 352 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 353 "data/maps/PetalburgCity/scripts.pory"
	return
# 354 "data/maps/PetalburgCity/scripts.pory"

# 355 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer0:
# 356 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 357 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 358 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 359 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 360 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 361 "data/maps/PetalburgCity/scripts.pory"

# 362 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer1:
# 363 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 364 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 365 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 366 "data/maps/PetalburgCity/scripts.pory"

# 367 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer2:
# 368 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 369 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 370 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 371 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 372 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 373 "data/maps/PetalburgCity/scripts.pory"

# 374 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer3:
# 375 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 376 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 377 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 378 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 379 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 380 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 381 "data/maps/PetalburgCity/scripts.pory"

# 382 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym0:
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
	walk_right
# 392 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 393 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 394 "data/maps/PetalburgCity/scripts.pory"

# 395 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym1:
# 396 "data/maps/PetalburgCity/scripts.pory"
	walk_down
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
	walk_right
# 405 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 406 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 407 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 408 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 409 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 410 "data/maps/PetalburgCity/scripts.pory"

# 411 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym2:
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
	walk_right
# 418 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 419 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 420 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 421 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 422 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 423 "data/maps/PetalburgCity/scripts.pory"

# 424 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym3:
# 425 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 426 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 427 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 428 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 429 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 430 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 431 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 432 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 433 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 434 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 435 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 436 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 437 "data/maps/PetalburgCity/scripts.pory"

# 438 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkAway:
# 439 "data/maps/PetalburgCity/scripts.pory"
	walk_down
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
	walk_left
# 448 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 449 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 450 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 451 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 452 "data/maps/PetalburgCity/scripts.pory"

# 453 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym0:
# 454 "data/maps/PetalburgCity/scripts.pory"
	walk_down
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
	walk_right
# 462 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 463 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 464 "data/maps/PetalburgCity/scripts.pory"

# 465 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym1:
# 466 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 467 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 468 "data/maps/PetalburgCity/scripts.pory"
	walk_down
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
	walk_right
# 475 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 476 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 477 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 478 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 479 "data/maps/PetalburgCity/scripts.pory"

# 480 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym2:
# 481 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 482 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 483 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 484 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 485 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 486 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 487 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 488 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 489 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 490 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 491 "data/maps/PetalburgCity/scripts.pory"

# 492 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym3:
# 493 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 494 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 495 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 496 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 497 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 498 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 499 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 500 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 501 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 502 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 503 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 504 "data/maps/PetalburgCity/scripts.pory"

# 505 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott0::
# 506 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 507 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_SCOTT
# 508 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 0
# 509 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_SCOTT, 13, 10
# 510 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 511 "data/maps/PetalburgCity/scripts.pory"
	end
# 512 "data/maps/PetalburgCity/scripts.pory"

# 513 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott1::
# 514 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 515 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_SCOTT
# 516 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 1
# 517 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_SCOTT, 13, 11
# 518 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 519 "data/maps/PetalburgCity/scripts.pory"
	end
# 520 "data/maps/PetalburgCity/scripts.pory"

# 521 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott2::
# 522 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 523 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_SCOTT
# 524 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 2
# 525 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_SCOTT, 13, 12
# 526 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 527 "data/maps/PetalburgCity/scripts.pory"
	end
# 528 "data/maps/PetalburgCity/scripts.pory"

# 529 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott3::
# 530 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 531 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_SCOTT
# 532 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 3
# 533 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_SCOTT, 13, 13
# 534 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 535 "data/maps/PetalburgCity/scripts.pory"
	end
# 536 "data/maps/PetalburgCity/scripts.pory"

# 537 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott::
# 538 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottStartWalkLeft
# 539 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 540 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 541 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_ExclamationMark
# 542 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 543 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_Delay48
# 544 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 545 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottStartWalkLeft
# 546 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 547 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 548 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 549 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_SCOTT_STATE, 1
# 550 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouATrainer, MSGBOX_DEFAULT
# 551 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 552 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_WalkInPlaceFasterRight
# 553 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 554 "data/maps/PetalburgCity/scripts.pory"
	delay 30
# 555 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WellMaybeNot, MSGBOX_DEFAULT
# 556 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 557 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_WalkInPlaceFasterLeft
# 558 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 559 "data/maps/PetalburgCity/scripts.pory"
	delay 30
# 560 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ImLookingForTalentedTrainers, MSGBOX_DEFAULT
# 561 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 562 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_ScottExit0
# 563 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_ScottExit1
# 564 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_ScottExit2
# 565 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_ScottExit3
# 566 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_SCOTT_PETALBURG_ENCOUNTER, 1
# 567 "data/maps/PetalburgCity/scripts.pory"
	removeobject LOCALID_SCOTT
# 568 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 569 "data/maps/PetalburgCity/scripts.pory"
	end
# 570 "data/maps/PetalburgCity/scripts.pory"

# 571 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit0::
# 572 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit0
# 573 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit0
# 574 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 575 "data/maps/PetalburgCity/scripts.pory"
	return
# 576 "data/maps/PetalburgCity/scripts.pory"

# 577 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit1::
# 578 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit1
# 579 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit1
# 580 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 581 "data/maps/PetalburgCity/scripts.pory"
	return
# 582 "data/maps/PetalburgCity/scripts.pory"

# 583 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit2::
# 584 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit2
# 585 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit2
# 586 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 587 "data/maps/PetalburgCity/scripts.pory"
	return
# 588 "data/maps/PetalburgCity/scripts.pory"

# 589 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit3::
# 590 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit3
# 591 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit3
# 592 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 593 "data/maps/PetalburgCity/scripts.pory"
	return
# 594 "data/maps/PetalburgCity/scripts.pory"

# 595 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottStartWalkLeft:
# 596 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 597 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 598 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 599 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 600 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 601 "data/maps/PetalburgCity/scripts.pory"

# 602 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit0:
# 603 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 604 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 605 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 606 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 607 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 608 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 609 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 610 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 611 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 612 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 613 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 614 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 615 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 616 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 617 "data/maps/PetalburgCity/scripts.pory"

# 618 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit0:
# 619 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 620 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 621 "data/maps/PetalburgCity/scripts.pory"
	delay_16
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
PetalburgCity_Movement_ScottExit1:
# 628 "data/maps/PetalburgCity/scripts.pory"
	walk_down
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
	walk_left
# 638 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 639 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 640 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 641 "data/maps/PetalburgCity/scripts.pory"

# 642 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit1:
# 643 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 644 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 645 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 646 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 647 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 648 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 649 "data/maps/PetalburgCity/scripts.pory"

# 650 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit2:
# 651 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 652 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 653 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 654 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 655 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 656 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 657 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 658 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 659 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 660 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 661 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 662 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 663 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 664 "data/maps/PetalburgCity/scripts.pory"

# 665 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit2:
# 666 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 667 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 668 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 669 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 670 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 671 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 672 "data/maps/PetalburgCity/scripts.pory"

# 673 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit3:
# 674 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 675 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 676 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 677 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 678 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 679 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 680 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 681 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 682 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 683 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 684 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 685 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 686 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 687 "data/maps/PetalburgCity/scripts.pory"

# 688 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit3:
# 689 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 690 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 691 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 692 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 693 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 694 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 695 "data/maps/PetalburgCity/scripts.pory"

# 696 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_GymBoy::
# 697 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouRookieTrainer, MSGBOX_NPC
# 698 "data/maps/PetalburgCity/scripts.pory"
	end
# 699 "data/maps/PetalburgCity/scripts.pory"

# 700 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WhereIsWally:
# 701 "data/maps/PetalburgCity/scripts.pory"
	.string "Where has our Wally gone?\p"
# 702 "data/maps/PetalburgCity/scripts.pory"
	.string "We have to leave for Verdanturf Town\n"
# 703 "data/maps/PetalburgCity/scripts.pory"
	.string "very soon…$"
# 704 "data/maps/PetalburgCity/scripts.pory"

# 705 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_AreYouRookieTrainer:
# 706 "data/maps/PetalburgCity/scripts.pory"
	.string "Hiya! Are you maybe…\n"
# 707 "data/maps/PetalburgCity/scripts.pory"
	.string "A rookie Trainer?\p"
# 708 "data/maps/PetalburgCity/scripts.pory"
	.string "Do you know what Pokémon Trainers\n"
# 709 "data/maps/PetalburgCity/scripts.pory"
	.string "do when they reach a new town?\p"
# 710 "data/maps/PetalburgCity/scripts.pory"
	.string "They first check what kind of Gym\n"
# 711 "data/maps/PetalburgCity/scripts.pory"
	.string "is in the town.$"
# 712 "data/maps/PetalburgCity/scripts.pory"

# 713 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ThisIsPetalburgGym:
# 714 "data/maps/PetalburgCity/scripts.pory"
	.string "See? This is Petalburg City's Gym.$"
# 715 "data/maps/PetalburgCity/scripts.pory"

# 716 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ThisIsGymSign:
# 717 "data/maps/PetalburgCity/scripts.pory"
	.string "This is the Gym's sign. Look for it\n"
# 718 "data/maps/PetalburgCity/scripts.pory"
	.string "whenever you're looking for a Gym.$"
# 719 "data/maps/PetalburgCity/scripts.pory"

# 720 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WaterReflection:
# 721 "data/maps/PetalburgCity/scripts.pory"
	.string "My face is reflected in the water.\p"
# 722 "data/maps/PetalburgCity/scripts.pory"
	.string "It's a shining grin full of hope…\p"
# 723 "data/maps/PetalburgCity/scripts.pory"
	.string "Or it could be a look of somber silence\n"
# 724 "data/maps/PetalburgCity/scripts.pory"
	.string "struggling with fear…\p"
# 725 "data/maps/PetalburgCity/scripts.pory"
	.string "What do you see reflected in your face?$"
# 726 "data/maps/PetalburgCity/scripts.pory"

# 727 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_FullPartyExplanation:
# 728 "data/maps/PetalburgCity/scripts.pory"
	.string "Let's say you have six Pokémon.\n"
# 729 "data/maps/PetalburgCity/scripts.pory"
	.string "If you catch another one…\p"
# 730 "data/maps/PetalburgCity/scripts.pory"
	.string "It is automatically sent to a Storage\n"
# 731 "data/maps/PetalburgCity/scripts.pory"
	.string "Box over a PC connection.$"
# 732 "data/maps/PetalburgCity/scripts.pory"

# 733 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_GymSign:
# 734 "data/maps/PetalburgCity/scripts.pory"
	.string "Petalburg City Pokémon Gym\n"
# 735 "data/maps/PetalburgCity/scripts.pory"
	.string "Leader: Norman\l"
# 736 "data/maps/PetalburgCity/scripts.pory"
	.string "“A man in pursuit of power!”$"
# 737 "data/maps/PetalburgCity/scripts.pory"

# 738 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_CitySign:
# 739 "data/maps/PetalburgCity/scripts.pory"
	.string "Petalburg City\n"
# 740 "data/maps/PetalburgCity/scripts.pory"
	.string "“Where people mingle with nature.”$"
# 741 "data/maps/PetalburgCity/scripts.pory"

# 742 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WallyHouseSign:
# 743 "data/maps/PetalburgCity/scripts.pory"
	.string "Wally's House$"
# 744 "data/maps/PetalburgCity/scripts.pory"

# 745 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_AreYouATrainer:
# 746 "data/maps/PetalburgCity/scripts.pory"
	.string "Excuse me!\p"
# 747 "data/maps/PetalburgCity/scripts.pory"
	.string "Let me guess, from the way you're\n"
# 748 "data/maps/PetalburgCity/scripts.pory"
	.string "dressed, are you a Pokémon Trainer?$"
# 749 "data/maps/PetalburgCity/scripts.pory"

# 750 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WellMaybeNot:
# 751 "data/maps/PetalburgCity/scripts.pory"
	.string "… … … … … …\p"
# 752 "data/maps/PetalburgCity/scripts.pory"
	.string "Well, maybe not.\n"
# 753 "data/maps/PetalburgCity/scripts.pory"
	.string "Your clothes aren't all that dirty.\p"
# 754 "data/maps/PetalburgCity/scripts.pory"
	.string "You're either a rookie Trainer,\n"
# 755 "data/maps/PetalburgCity/scripts.pory"
	.string "or maybe you're just an ordinary kid.$"
# 756 "data/maps/PetalburgCity/scripts.pory"

# 757 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ImLookingForTalentedTrainers:
# 758 "data/maps/PetalburgCity/scripts.pory"
	.string "I'm roaming the land in search of\n"
# 759 "data/maps/PetalburgCity/scripts.pory"
	.string "talented Trainers.\p"
# 760 "data/maps/PetalburgCity/scripts.pory"
	.string "I'm sorry to have taken your time.$"

Rival_Scene02::
# 766 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 1
	goto_if_eq Rival_Scene02_2
Rival_Scene02_1:
# 813 "data/maps/PetalburgCity/scripts.pory"
	release
	end

Rival_Scene02_2:
# 767 "data/maps/PetalburgCity/scripts.pory"
	lock
# 768 "data/maps/PetalburgCity/scripts.pory"
	call Common_EventScript_PlayEmRivalBgm
# 769 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 770 "data/maps/PetalburgCity/scripts.pory"
	applymovement 10, Common_Movement_ExclamationMark
# 771 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 772 "data/maps/PetalburgCity/scripts.pory"
	delay 60
# 773 "data/maps/PetalburgCity/scripts.pory"
	applymovement 10, Rival_Scene02_Move1
# 774 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 775 "data/maps/PetalburgCity/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 776 "data/maps/PetalburgCity/scripts.pory"
	switch VAR_TEMP_1
# 777 "data/maps/PetalburgCity/scripts.pory"
	case 16, Rival_Scene02_6
# 780 "data/maps/PetalburgCity/scripts.pory"
	case 17, Rival_Scene02_7
# 783 "data/maps/PetalburgCity/scripts.pory"
	case 19, Rival_Scene02_8
Rival_Scene02_4:
# 788 "data/maps/PetalburgCity/scripts.pory"
	applymovement 10, Rival_Scene02_Move1
# 789 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 790 "data/maps/PetalburgCity/scripts.pory"
	switch VAR_EMERALBODY_RIVAL
# 791 "data/maps/PetalburgCity/scripts.pory"
	case 1, Rival_Scene02_11
# 793 "data/maps/PetalburgCity/scripts.pory"
	case 2, Rival_Scene02_12
# 795 "data/maps/PetalburgCity/scripts.pory"
	case 3, Rival_Scene02_13
# 797 "data/maps/PetalburgCity/scripts.pory"
	case 4, Rival_Scene02_14
# 800 "data/maps/PetalburgCity/scripts.pory"
	msgbox Rival_Scene02_Text_4
Rival_Scene02_9:
# 802 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 803 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_EMERALBODY_RIVAL_STATE, 2
# 804 "data/maps/PetalburgCity/scripts.pory"
	fadedefaultbgm
# 805 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_TEMP_1, 16
	goto_if_eq Rival_Scene02_17
Rival_Scene02_16:
# 809 "data/maps/PetalburgCity/scripts.pory"
	applymovement 10, Rival_Scene02_Move2
# 810 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 811 "data/maps/PetalburgCity/scripts.pory"
	removeobject 10
	goto Rival_Scene02_1

Rival_Scene02_6:
# 778 "data/maps/PetalburgCity/scripts.pory"
	applymovement 10, Common_Movement_WalkUp2
# 779 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
	goto Rival_Scene02_4

Rival_Scene02_7:
# 781 "data/maps/PetalburgCity/scripts.pory"
	applymovement 10, Common_Movement_WalkUp
# 782 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
	goto Rival_Scene02_4

Rival_Scene02_8:
# 784 "data/maps/PetalburgCity/scripts.pory"
	applymovement 10, Common_Movement_WalkDown
# 785 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
	goto Rival_Scene02_4

Rival_Scene02_11:
# 792 "data/maps/PetalburgCity/scripts.pory"
	msgbox Rival_Scene02_Text_0
	goto Rival_Scene02_9

Rival_Scene02_12:
# 794 "data/maps/PetalburgCity/scripts.pory"
	msgbox Rival_Scene02_Text_1
	goto Rival_Scene02_9

Rival_Scene02_13:
# 796 "data/maps/PetalburgCity/scripts.pory"
	msgbox Rival_Scene02_Text_2
	goto Rival_Scene02_9

Rival_Scene02_14:
# 798 "data/maps/PetalburgCity/scripts.pory"
	msgbox Rival_Scene02_Text_3
	goto Rival_Scene02_9

Rival_Scene02_17:
# 806 "data/maps/PetalburgCity/scripts.pory"
	applymovement 10, Common_Movement_WalkDown
# 807 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
	goto Rival_Scene02_16


# 817 "data/maps/PetalburgCity/scripts.pory"
Rival_Scene02_Move1:
# 818 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 818 "data/maps/PetalburgCity/scripts.pory"
	walk_right
	step_end

# 821 "data/maps/PetalburgCity/scripts.pory"
Rival_Scene02_Move2:
# 822 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 822 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 822 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 822 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 822 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 822 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 822 "data/maps/PetalburgCity/scripts.pory"
	walk_left
	step_end

Rival_Scene02_Text_0:
# 792 "data/maps/PetalburgCity/scripts.pory"
	.string "Harper:$"

Rival_Scene02_Text_1:
# 794 "data/maps/PetalburgCity/scripts.pory"
	.string "Jakson:$"

Rival_Scene02_Text_2:
# 796 "data/maps/PetalburgCity/scripts.pory"
	.string "Redd:$"

Rival_Scene02_Text_3:
# 798 "data/maps/PetalburgCity/scripts.pory"
	.string "Sakura:$"

Rival_Scene02_Text_4:
# 800 "data/maps/PetalburgCity/scripts.pory"
	.string "Baron:$"
