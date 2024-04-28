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
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_WalkInsideHousePlayer
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
PetalburgCity_Movement_WalkInsideHousePlayer:
# 136 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 137 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 138 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 139 "data/maps/PetalburgCity/scripts.pory"

# 140 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkToWallyHouseWallysDad:
# 141 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 142 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 143 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 144 "data/maps/PetalburgCity/scripts.pory"
	walk_left
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
	walk_up
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
	step_end
# 159 "data/maps/PetalburgCity/scripts.pory"

# 160 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkInsideHouseWallysDad:
# 161 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 162 "data/maps/PetalburgCity/scripts.pory"
	set_invisible
# 163 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 164 "data/maps/PetalburgCity/scripts.pory"

# 165 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WallyTutorialPlayer:
# 166 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 167 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 168 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 169 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 170 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 171 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 172 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 173 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 174 "data/maps/PetalburgCity/scripts.pory"
	walk_down
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
	walk_right
# 192 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 193 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 194 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 195 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 196 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 197 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_right
# 198 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 199 "data/maps/PetalburgCity/scripts.pory"

# 200 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WallyTutorialWally:
# 201 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 202 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 203 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 204 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 205 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 206 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 207 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 208 "data/maps/PetalburgCity/scripts.pory"
	walk_down
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
	walk_right
# 226 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 227 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 228 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 229 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 230 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 231 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 232 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 233 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 234 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 235 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 236 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_right
# 237 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 238 "data/maps/PetalburgCity/scripts.pory"

# 239 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_GymSign::
# 240 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_GymSign, MSGBOX_SIGN
# 241 "data/maps/PetalburgCity/scripts.pory"
	end
# 242 "data/maps/PetalburgCity/scripts.pory"

# 243 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_CitySign::
# 244 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_CitySign, MSGBOX_SIGN
# 245 "data/maps/PetalburgCity/scripts.pory"
	end
# 246 "data/maps/PetalburgCity/scripts.pory"

# 247 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Gentleman::
# 248 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_FullPartyExplanation, MSGBOX_NPC
# 249 "data/maps/PetalburgCity/scripts.pory"
	end
# 250 "data/maps/PetalburgCity/scripts.pory"

# 251 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallyHouseSign::
# 252 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WallyHouseSign, MSGBOX_SIGN
# 253 "data/maps/PetalburgCity/scripts.pory"
	end
# 254 "data/maps/PetalburgCity/scripts.pory"

# 255 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer0::
# 256 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 257 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 0
# 258 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 259 "data/maps/PetalburgCity/scripts.pory"
	end
# 260 "data/maps/PetalburgCity/scripts.pory"

# 261 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer1::
# 262 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 263 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 1
# 264 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 265 "data/maps/PetalburgCity/scripts.pory"
	end
# 266 "data/maps/PetalburgCity/scripts.pory"

# 267 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer2::
# 268 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 269 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 2
# 270 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 271 "data/maps/PetalburgCity/scripts.pory"
	end
# 272 "data/maps/PetalburgCity/scripts.pory"

# 273 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer3::
# 274 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 275 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 3
# 276 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 277 "data/maps/PetalburgCity/scripts.pory"
	end
# 278 "data/maps/PetalburgCity/scripts.pory"

# 279 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer::
# 280 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_FacePlayer
# 281 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 282 "data/maps/PetalburgCity/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 283 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 284 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_ExclamationMark
# 285 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 286 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_Delay48
# 287 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 288 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_BoyApproachPlayer0
# 289 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_BoyApproachPlayer1
# 290 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_BoyApproachPlayer2
# 291 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_BoyApproachPlayer3
# 292 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouRookieTrainer, MSGBOX_DEFAULT
# 293 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 294 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_LeadPlayerToGym0
# 295 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_LeadPlayerToGym1
# 296 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_LeadPlayerToGym2
# 297 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_LeadPlayerToGym3
# 298 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ThisIsPetalburgGym, MSGBOX_DEFAULT
# 299 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_WalkInPlaceFasterRight
# 300 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 301 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 302 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ThisIsGymSign, MSGBOX_DEFAULT
# 303 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 304 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkAway
# 305 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 306 "data/maps/PetalburgCity/scripts.pory"
	fadedefaultbgm
# 307 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 308 "data/maps/PetalburgCity/scripts.pory"
	end
# 309 "data/maps/PetalburgCity/scripts.pory"

# 310 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer0::
# 311 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer0
# 312 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 313 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 314 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 315 "data/maps/PetalburgCity/scripts.pory"
	return
# 316 "data/maps/PetalburgCity/scripts.pory"

# 317 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer1::
# 318 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer1
# 319 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 320 "data/maps/PetalburgCity/scripts.pory"
	return
# 321 "data/maps/PetalburgCity/scripts.pory"

# 322 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer2::
# 323 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer2
# 324 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 325 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 326 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 327 "data/maps/PetalburgCity/scripts.pory"
	return
# 328 "data/maps/PetalburgCity/scripts.pory"

# 329 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer3::
# 330 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer3
# 331 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 332 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 333 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 334 "data/maps/PetalburgCity/scripts.pory"
	return
# 335 "data/maps/PetalburgCity/scripts.pory"

# 336 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym0::
# 337 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym0
# 338 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym0
# 339 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 340 "data/maps/PetalburgCity/scripts.pory"
	return
# 341 "data/maps/PetalburgCity/scripts.pory"

# 342 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym1::
# 343 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym1
# 344 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym1
# 345 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 346 "data/maps/PetalburgCity/scripts.pory"
	return
# 347 "data/maps/PetalburgCity/scripts.pory"

# 348 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym2::
# 349 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym2
# 350 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym2
# 351 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 352 "data/maps/PetalburgCity/scripts.pory"
	return
# 353 "data/maps/PetalburgCity/scripts.pory"

# 354 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym3::
# 355 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym3
# 356 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym3
# 357 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 358 "data/maps/PetalburgCity/scripts.pory"
	return
# 359 "data/maps/PetalburgCity/scripts.pory"

# 360 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer0:
# 361 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 362 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 363 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 364 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 365 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 366 "data/maps/PetalburgCity/scripts.pory"

# 367 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer1:
# 368 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 369 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 370 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 371 "data/maps/PetalburgCity/scripts.pory"

# 372 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer2:
# 373 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 374 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 375 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 376 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 377 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 378 "data/maps/PetalburgCity/scripts.pory"

# 379 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer3:
# 380 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 381 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 382 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 383 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 384 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 385 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 386 "data/maps/PetalburgCity/scripts.pory"

# 387 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym0:
# 388 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 389 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 390 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 391 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 392 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 393 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 394 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 395 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 396 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 397 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 398 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 399 "data/maps/PetalburgCity/scripts.pory"

# 400 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym1:
# 401 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 402 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 403 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 404 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 405 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 406 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 407 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 408 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 409 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 410 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 411 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 412 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 413 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 414 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 415 "data/maps/PetalburgCity/scripts.pory"

# 416 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym2:
# 417 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 418 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 419 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 420 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 421 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 422 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 423 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 424 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 425 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 426 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 427 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 428 "data/maps/PetalburgCity/scripts.pory"

# 429 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym3:
# 430 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 431 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 432 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 433 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 434 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 435 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 436 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 437 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 438 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 439 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 440 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 441 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 442 "data/maps/PetalburgCity/scripts.pory"

# 443 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkAway:
# 444 "data/maps/PetalburgCity/scripts.pory"
	walk_down
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
	walk_left
# 452 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 453 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 454 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 455 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 456 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 457 "data/maps/PetalburgCity/scripts.pory"

# 458 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym0:
# 459 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 460 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 461 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 462 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 463 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 464 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 465 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 466 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 467 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 468 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 469 "data/maps/PetalburgCity/scripts.pory"

# 470 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym1:
# 471 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 472 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 473 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 474 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 475 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 476 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 477 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 478 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 479 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 480 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 481 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 482 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 483 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 484 "data/maps/PetalburgCity/scripts.pory"

# 485 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym2:
# 486 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 487 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 488 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 489 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 490 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 491 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 492 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 493 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 494 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 495 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 496 "data/maps/PetalburgCity/scripts.pory"

# 497 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym3:
# 498 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 499 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 500 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 501 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 502 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 503 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 504 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 505 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 506 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 507 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 508 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 509 "data/maps/PetalburgCity/scripts.pory"

# 510 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott0::
# 511 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 512 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_SCOTT
# 513 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 0
# 514 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_SCOTT, 13, 10
# 515 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 516 "data/maps/PetalburgCity/scripts.pory"
	end
# 517 "data/maps/PetalburgCity/scripts.pory"

# 518 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott1::
# 519 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 520 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_SCOTT
# 521 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 1
# 522 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_SCOTT, 13, 11
# 523 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 524 "data/maps/PetalburgCity/scripts.pory"
	end
# 525 "data/maps/PetalburgCity/scripts.pory"

# 526 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott2::
# 527 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 528 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_SCOTT
# 529 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 2
# 530 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_SCOTT, 13, 12
# 531 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 532 "data/maps/PetalburgCity/scripts.pory"
	end
# 533 "data/maps/PetalburgCity/scripts.pory"

# 534 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott3::
# 535 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 536 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_SCOTT
# 537 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 3
# 538 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_SCOTT, 13, 13
# 539 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 540 "data/maps/PetalburgCity/scripts.pory"
	end
# 541 "data/maps/PetalburgCity/scripts.pory"

# 542 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott::
# 543 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottStartWalkLeft
# 544 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 545 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 546 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_ExclamationMark
# 547 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 548 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_Delay48
# 549 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 550 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottApproachPlayer
# 551 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 552 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 553 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 554 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_SCOTT_STATE, 1
# 555 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouATrainer, MSGBOX_DEFAULT
# 556 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 557 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_WalkInPlaceFasterRight
# 558 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 559 "data/maps/PetalburgCity/scripts.pory"
	delay 30
# 560 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WellMaybeNot, MSGBOX_DEFAULT
# 561 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 562 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_WalkInPlaceFasterLeft
# 563 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 564 "data/maps/PetalburgCity/scripts.pory"
	delay 30
# 565 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ImLookingForTalentedTrainers, MSGBOX_DEFAULT
# 566 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 567 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_ScottExit0
# 568 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_ScottExit1
# 569 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_ScottExit2
# 570 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_ScottExit3
# 571 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_SCOTT_PETALBURG_ENCOUNTER, 1
# 572 "data/maps/PetalburgCity/scripts.pory"
	removeobject LOCALID_SCOTT
# 573 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 574 "data/maps/PetalburgCity/scripts.pory"
	end
# 575 "data/maps/PetalburgCity/scripts.pory"

# 576 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit0::
# 577 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit0
# 578 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit0
# 579 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 580 "data/maps/PetalburgCity/scripts.pory"
	return
# 581 "data/maps/PetalburgCity/scripts.pory"

# 582 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit1::
# 583 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit1
# 584 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit1
# 585 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 586 "data/maps/PetalburgCity/scripts.pory"
	return
# 587 "data/maps/PetalburgCity/scripts.pory"

# 588 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit2::
# 589 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit2
# 590 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit2
# 591 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 592 "data/maps/PetalburgCity/scripts.pory"
	return
# 593 "data/maps/PetalburgCity/scripts.pory"

# 594 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit3::
# 595 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit3
# 596 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit3
# 597 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 598 "data/maps/PetalburgCity/scripts.pory"
	return
# 599 "data/maps/PetalburgCity/scripts.pory"

# 600 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottStartWalkLeft:
# 601 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 602 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 603 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 604 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 605 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 606 "data/maps/PetalburgCity/scripts.pory"

# 607 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottApproachPlayer:
# 608 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 609 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 610 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 611 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 612 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 613 "data/maps/PetalburgCity/scripts.pory"

# 614 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit0:
# 615 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 616 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 617 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 618 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 619 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 620 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 621 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 622 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 623 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 624 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 625 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 626 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 627 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 628 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 629 "data/maps/PetalburgCity/scripts.pory"

# 630 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit0:
# 631 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 632 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 633 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 634 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 635 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 636 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 637 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 638 "data/maps/PetalburgCity/scripts.pory"

# 639 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit1:
# 640 "data/maps/PetalburgCity/scripts.pory"
	walk_down
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
	walk_left
# 649 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 650 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 651 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 652 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 653 "data/maps/PetalburgCity/scripts.pory"

# 654 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit1:
# 655 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 656 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 657 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 658 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 659 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 660 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 661 "data/maps/PetalburgCity/scripts.pory"

# 662 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit2:
# 663 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 664 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 665 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 666 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 667 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 668 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 669 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 670 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 671 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 672 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 673 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 674 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 675 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 676 "data/maps/PetalburgCity/scripts.pory"

# 677 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit2:
# 678 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 679 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 680 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 681 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 682 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 683 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 684 "data/maps/PetalburgCity/scripts.pory"

# 685 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit3:
# 686 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 687 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 688 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 689 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 690 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 691 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 692 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 693 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 694 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 695 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 696 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 697 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 698 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 699 "data/maps/PetalburgCity/scripts.pory"

# 700 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit3:
# 701 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 702 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 703 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 704 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 705 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 706 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 707 "data/maps/PetalburgCity/scripts.pory"

# 708 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_GymBoy::
# 709 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouRookieTrainer, MSGBOX_NPC
# 710 "data/maps/PetalburgCity/scripts.pory"
	end
# 711 "data/maps/PetalburgCity/scripts.pory"

# 712 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WhereIsWally:
# 713 "data/maps/PetalburgCity/scripts.pory"
	.string "Where has our Wally gone?\p"
# 714 "data/maps/PetalburgCity/scripts.pory"
	.string "We have to leave for Verdanturf Town\n"
# 715 "data/maps/PetalburgCity/scripts.pory"
	.string "very soon…$"
# 716 "data/maps/PetalburgCity/scripts.pory"

# 717 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_AreYouRookieTrainer:
# 718 "data/maps/PetalburgCity/scripts.pory"
	.string "Hiya! Are you maybe…\n"
# 719 "data/maps/PetalburgCity/scripts.pory"
	.string "A rookie Trainer?\p"
# 720 "data/maps/PetalburgCity/scripts.pory"
	.string "Do you know what Pokémon Trainers\n"
# 721 "data/maps/PetalburgCity/scripts.pory"
	.string "do when they reach a new town?\p"
# 722 "data/maps/PetalburgCity/scripts.pory"
	.string "They first check what kind of Gym\n"
# 723 "data/maps/PetalburgCity/scripts.pory"
	.string "is in the town.$"
# 724 "data/maps/PetalburgCity/scripts.pory"

# 725 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ThisIsPetalburgGym:
# 726 "data/maps/PetalburgCity/scripts.pory"
	.string "See? This is Petalburg City's Gym.$"
# 727 "data/maps/PetalburgCity/scripts.pory"

# 728 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ThisIsGymSign:
# 729 "data/maps/PetalburgCity/scripts.pory"
	.string "This is the Gym's sign. Look for it\n"
# 730 "data/maps/PetalburgCity/scripts.pory"
	.string "whenever you're looking for a Gym.$"
# 731 "data/maps/PetalburgCity/scripts.pory"

# 732 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WaterReflection:
# 733 "data/maps/PetalburgCity/scripts.pory"
	.string "My face is reflected in the water.\p"
# 734 "data/maps/PetalburgCity/scripts.pory"
	.string "It's a shining grin full of hope…\p"
# 735 "data/maps/PetalburgCity/scripts.pory"
	.string "Or it could be a look of somber silence\n"
# 736 "data/maps/PetalburgCity/scripts.pory"
	.string "struggling with fear…\p"
# 737 "data/maps/PetalburgCity/scripts.pory"
	.string "What do you see reflected in your face?$"
# 738 "data/maps/PetalburgCity/scripts.pory"

# 739 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_FullPartyExplanation:
# 740 "data/maps/PetalburgCity/scripts.pory"
	.string "Let's say you have six Pokémon.\n"
# 741 "data/maps/PetalburgCity/scripts.pory"
	.string "If you catch another one…\p"
# 742 "data/maps/PetalburgCity/scripts.pory"
	.string "It is automatically sent to a Storage\n"
# 743 "data/maps/PetalburgCity/scripts.pory"
	.string "Box over a PC connection.$"
# 744 "data/maps/PetalburgCity/scripts.pory"

# 745 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_GymSign:
# 746 "data/maps/PetalburgCity/scripts.pory"
	.string "Petalburg City Pokémon Gym\n"
# 747 "data/maps/PetalburgCity/scripts.pory"
	.string "Leader: Norman\l"
# 748 "data/maps/PetalburgCity/scripts.pory"
	.string "“A man in pursuit of power!”$"
# 749 "data/maps/PetalburgCity/scripts.pory"

# 750 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_CitySign:
# 751 "data/maps/PetalburgCity/scripts.pory"
	.string "Petalburg City\n"
# 752 "data/maps/PetalburgCity/scripts.pory"
	.string "“Where people mingle with nature.”$"
# 753 "data/maps/PetalburgCity/scripts.pory"

# 754 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WallyHouseSign:
# 755 "data/maps/PetalburgCity/scripts.pory"
	.string "Wally's House$"
# 756 "data/maps/PetalburgCity/scripts.pory"

# 757 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_AreYouATrainer:
# 758 "data/maps/PetalburgCity/scripts.pory"
	.string "Excuse me!\p"
# 759 "data/maps/PetalburgCity/scripts.pory"
	.string "Let me guess, from the way you're\n"
# 760 "data/maps/PetalburgCity/scripts.pory"
	.string "dressed, are you a Pokémon Trainer?$"
# 761 "data/maps/PetalburgCity/scripts.pory"

# 762 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WellMaybeNot:
# 763 "data/maps/PetalburgCity/scripts.pory"
	.string "… … … … … …\p"
# 764 "data/maps/PetalburgCity/scripts.pory"
	.string "Well, maybe not.\n"
# 765 "data/maps/PetalburgCity/scripts.pory"
	.string "Your clothes aren't all that dirty.\p"
# 766 "data/maps/PetalburgCity/scripts.pory"
	.string "You're either a rookie Trainer,\n"
# 767 "data/maps/PetalburgCity/scripts.pory"
	.string "or maybe you're just an ordinary kid.$"
# 768 "data/maps/PetalburgCity/scripts.pory"

# 769 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ImLookingForTalentedTrainers:
# 770 "data/maps/PetalburgCity/scripts.pory"
	.string "I'm roaming the land in search of\n"
# 771 "data/maps/PetalburgCity/scripts.pory"
	.string "talented Trainers.\p"
# 772 "data/maps/PetalburgCity/scripts.pory"
	.string "I'm sorry to have taken your time.$"

Rival_Scene02::
# 778 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 1
	goto_if_eq Rival_Scene02_2
Rival_Scene02_1:
# 825 "data/maps/PetalburgCity/scripts.pory"
	release
	end

Rival_Scene02_2:
# 779 "data/maps/PetalburgCity/scripts.pory"
	lock
# 780 "data/maps/PetalburgCity/scripts.pory"
	call Common_EventScript_PlayEmRivalBgm
# 781 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 782 "data/maps/PetalburgCity/scripts.pory"
	applymovement 10, Common_Movement_ExclamationMark
# 783 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 784 "data/maps/PetalburgCity/scripts.pory"
	delay 60
# 785 "data/maps/PetalburgCity/scripts.pory"
	applymovement 10, Rival_Scene02_Move1
# 786 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 787 "data/maps/PetalburgCity/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 788 "data/maps/PetalburgCity/scripts.pory"
	switch VAR_TEMP_1
# 789 "data/maps/PetalburgCity/scripts.pory"
	case 16, Rival_Scene02_6
# 792 "data/maps/PetalburgCity/scripts.pory"
	case 17, Rival_Scene02_7
# 795 "data/maps/PetalburgCity/scripts.pory"
	case 19, Rival_Scene02_8
Rival_Scene02_4:
# 800 "data/maps/PetalburgCity/scripts.pory"
	applymovement 10, Rival_Scene02_Move1
# 801 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 802 "data/maps/PetalburgCity/scripts.pory"
	switch VAR_EMERALBODY_RIVAL
# 803 "data/maps/PetalburgCity/scripts.pory"
	case 1, Rival_Scene02_11
# 805 "data/maps/PetalburgCity/scripts.pory"
	case 2, Rival_Scene02_12
# 807 "data/maps/PetalburgCity/scripts.pory"
	case 3, Rival_Scene02_13
# 809 "data/maps/PetalburgCity/scripts.pory"
	case 4, Rival_Scene02_14
# 812 "data/maps/PetalburgCity/scripts.pory"
	msgbox Rival_Scene02_Text_4
Rival_Scene02_9:
# 814 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 815 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_EMERALBODY_RIVAL_STATE, 2
# 816 "data/maps/PetalburgCity/scripts.pory"
	fadedefaultbgm
# 817 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_TEMP_1, 16
	goto_if_eq Rival_Scene02_17
Rival_Scene02_16:
# 821 "data/maps/PetalburgCity/scripts.pory"
	applymovement 10, Rival_Scene02_Move2
# 822 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 823 "data/maps/PetalburgCity/scripts.pory"
	removeobject 10
	goto Rival_Scene02_1

Rival_Scene02_6:
# 790 "data/maps/PetalburgCity/scripts.pory"
	applymovement 10, Common_Movement_WalkUp2
# 791 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
	goto Rival_Scene02_4

Rival_Scene02_7:
# 793 "data/maps/PetalburgCity/scripts.pory"
	applymovement 10, Common_Movement_WalkUp
# 794 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
	goto Rival_Scene02_4

Rival_Scene02_8:
# 796 "data/maps/PetalburgCity/scripts.pory"
	applymovement 10, Rival_Scene02_Move1d
# 797 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
	goto Rival_Scene02_4

Rival_Scene02_11:
# 804 "data/maps/PetalburgCity/scripts.pory"
	msgbox Rival_Scene02_Text_0
	goto Rival_Scene02_9

Rival_Scene02_12:
# 806 "data/maps/PetalburgCity/scripts.pory"
	msgbox Rival_Scene02_Text_1
	goto Rival_Scene02_9

Rival_Scene02_13:
# 808 "data/maps/PetalburgCity/scripts.pory"
	msgbox Rival_Scene02_Text_2
	goto Rival_Scene02_9

Rival_Scene02_14:
# 810 "data/maps/PetalburgCity/scripts.pory"
	msgbox Rival_Scene02_Text_3
	goto Rival_Scene02_9

Rival_Scene02_17:
# 818 "data/maps/PetalburgCity/scripts.pory"
	applymovement 10, Rival_Scene02_Move1d
# 819 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
	goto Rival_Scene02_16


# 829 "data/maps/PetalburgCity/scripts.pory"
Rival_Scene02_Move1:
# 830 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 830 "data/maps/PetalburgCity/scripts.pory"
	walk_right
	step_end

# 833 "data/maps/PetalburgCity/scripts.pory"
Rival_Scene02_Move1d:
# 834 "data/maps/PetalburgCity/scripts.pory"
	walk_down
	step_end

# 837 "data/maps/PetalburgCity/scripts.pory"
Rival_Scene02_Move2:
# 838 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 838 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 838 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 838 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 838 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 838 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 838 "data/maps/PetalburgCity/scripts.pory"
	walk_left
	step_end

Rival_Scene02_Text_0:
# 804 "data/maps/PetalburgCity/scripts.pory"
	.string "Harper:$"

Rival_Scene02_Text_1:
# 806 "data/maps/PetalburgCity/scripts.pory"
	.string "Jakson:$"

Rival_Scene02_Text_2:
# 808 "data/maps/PetalburgCity/scripts.pory"
	.string "Redd:$"

Rival_Scene02_Text_3:
# 810 "data/maps/PetalburgCity/scripts.pory"
	.string "Sakura:$"

Rival_Scene02_Text_4:
# 812 "data/maps/PetalburgCity/scripts.pory"
	.string "Baron:$"
