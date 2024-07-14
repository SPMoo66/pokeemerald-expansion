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
	speakername (CommonText_Wally)
# 58 "data/maps/PetalburgCity/scripts.pory"
	msgbox Route102_Text_WatchMeCatchPokemon, MSGBOX_DEFAULT
# 59 "data/maps/PetalburgCity/scripts.pory"
	special StartWallyTutorialBattle
# 60 "data/maps/PetalburgCity/scripts.pory"
	waitstate
# 61 "data/maps/PetalburgCity/scripts.pory"
	speakername (CommonText_Wally)
# 62 "data/maps/PetalburgCity/scripts.pory"
	msgbox Route102_Text_WallyIDidIt, MSGBOX_DEFAULT
# 63 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceFasterLeft, MAP_PETALBURG_CITY
# 64 "data/maps/PetalburgCity/scripts.pory"
	waitmovement LOCALID_WALLY, MAP_PETALBURG_CITY
# 65 "data/maps/PetalburgCity/scripts.pory"
	speakername (CommonText_Wally)
# 66 "data/maps/PetalburgCity/scripts.pory"
	msgbox Route102_Text_LetsGoBack, MSGBOX_DEFAULT
# 67 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 68 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 69 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 3
# 70 "data/maps/PetalburgCity/scripts.pory"
	fadedefaultbgm
# 71 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 72 "data/maps/PetalburgCity/scripts.pory"
	special LoadPlayerParty
# 73 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 1
# 74 "data/maps/PetalburgCity/scripts.pory"
	warp MAP_PETALBURG_CITY_GYM, 4, 108
# 75 "data/maps/PetalburgCity/scripts.pory"
	waitstate
# 76 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 77 "data/maps/PetalburgCity/scripts.pory"
	end
# 78 "data/maps/PetalburgCity/scripts.pory"

# 79 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WalkToWallyHouse::
# 80 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 81 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 82 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Movement_WalkToWallyHouseWallysDad
# 83 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_WalkToWallyHousePlayer
# 84 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 85 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8004, 7
# 86 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8005, 5
# 87 "data/maps/PetalburgCity/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 88 "data/maps/PetalburgCity/scripts.pory"
	waitdooranim
# 89 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, Common_Movement_EnterHouse
# 90 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp2
# 91 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 92 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_CITY_WALLYS_DAD
# 93 "data/maps/PetalburgCity/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_PETALBURG_CITY
# 94 "data/maps/PetalburgCity/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 95 "data/maps/PetalburgCity/scripts.pory"
	waitdooranim
# 96 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 97 "data/maps/PetalburgCity/scripts.pory"
	fadedefaultbgm
# 98 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 99 "data/maps/PetalburgCity/scripts.pory"
	warp MAP_PETALBURG_CITY_WALLYS_HOUSE, 2, 4
# 100 "data/maps/PetalburgCity/scripts.pory"
	waitstate
# 101 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 102 "data/maps/PetalburgCity/scripts.pory"
	end
# 103 "data/maps/PetalburgCity/scripts.pory"

# 104 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Boy::
# 105 "data/maps/PetalburgCity/scripts.pory"
	lock
# 106 "data/maps/PetalburgCity/scripts.pory"
	faceplayer
# 107 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WaterReflection, MSGBOX_DEFAULT
# 108 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 109 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_BOY, Common_Movement_FaceOriginalDirection
# 110 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 111 "data/maps/PetalburgCity/scripts.pory"
	release
# 112 "data/maps/PetalburgCity/scripts.pory"
	end
# 113 "data/maps/PetalburgCity/scripts.pory"

# 114 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallysMom::
# 115 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WhereIsWally, MSGBOX_NPC
# 116 "data/maps/PetalburgCity/scripts.pory"
	end
# 117 "data/maps/PetalburgCity/scripts.pory"

# 118 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkToWallyHousePlayer:
# 119 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 120 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 121 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 122 "data/maps/PetalburgCity/scripts.pory"
	walk_down
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
	walk_left
# 129 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 130 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 131 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 132 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 133 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 134 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 135 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 136 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 137 "data/maps/PetalburgCity/scripts.pory"

# 138 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkToWallyHouseWallysDad:
# 139 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 140 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 141 "data/maps/PetalburgCity/scripts.pory"
	walk_down
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
	walk_left
# 148 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 149 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 150 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 151 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 152 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 153 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 154 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 155 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 156 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 157 "data/maps/PetalburgCity/scripts.pory"

# 158 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WallyTutorialPlayer:
# 159 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 160 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 161 "data/maps/PetalburgCity/scripts.pory"
	walk_down
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
	walk_up
# 189 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 190 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_right
# 191 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 192 "data/maps/PetalburgCity/scripts.pory"

# 193 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WallyTutorialWally:
# 194 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 195 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 196 "data/maps/PetalburgCity/scripts.pory"
	walk_down
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
	walk_up
# 223 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 224 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 225 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 226 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 227 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 228 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 229 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_right
# 230 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 231 "data/maps/PetalburgCity/scripts.pory"

# 232 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_GymSign::
# 233 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_GymSign, MSGBOX_SIGN
# 234 "data/maps/PetalburgCity/scripts.pory"
	end
# 235 "data/maps/PetalburgCity/scripts.pory"

# 236 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_CitySign::
# 237 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_CitySign, MSGBOX_SIGN
# 238 "data/maps/PetalburgCity/scripts.pory"
	end
# 239 "data/maps/PetalburgCity/scripts.pory"

# 240 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Gentleman::
# 241 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_FullPartyExplanation, MSGBOX_NPC
# 242 "data/maps/PetalburgCity/scripts.pory"
	end
# 243 "data/maps/PetalburgCity/scripts.pory"

# 244 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallyHouseSign::
# 245 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WallyHouseSign, MSGBOX_SIGN
# 246 "data/maps/PetalburgCity/scripts.pory"
	end
# 247 "data/maps/PetalburgCity/scripts.pory"

# 248 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer0::
# 249 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 250 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 0
# 251 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 252 "data/maps/PetalburgCity/scripts.pory"
	end
# 253 "data/maps/PetalburgCity/scripts.pory"

# 254 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer1::
# 255 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 256 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 1
# 257 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 258 "data/maps/PetalburgCity/scripts.pory"
	end
# 259 "data/maps/PetalburgCity/scripts.pory"

# 260 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer2::
# 261 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 262 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 2
# 263 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 264 "data/maps/PetalburgCity/scripts.pory"
	end
# 265 "data/maps/PetalburgCity/scripts.pory"

# 266 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer3::
# 267 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 268 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 3
# 269 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 270 "data/maps/PetalburgCity/scripts.pory"
	end
# 271 "data/maps/PetalburgCity/scripts.pory"

# 272 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer::
# 273 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_FacePlayer
# 274 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 275 "data/maps/PetalburgCity/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 276 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 277 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_ExclamationMark
# 278 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 279 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_Delay48
# 280 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 281 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_BoyApproachPlayer0
# 282 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_BoyApproachPlayer1
# 283 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_BoyApproachPlayer2
# 284 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_BoyApproachPlayer3
# 285 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouRookieTrainer, MSGBOX_DEFAULT
# 286 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 287 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_LeadPlayerToGym0
# 288 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_LeadPlayerToGym1
# 289 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_LeadPlayerToGym2
# 290 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_LeadPlayerToGym3
# 291 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ThisIsPetalburgGym, MSGBOX_DEFAULT
# 292 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_WalkInPlaceFasterRight
# 293 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 294 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 295 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ThisIsGymSign, MSGBOX_DEFAULT
# 296 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 297 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkAway
# 298 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 299 "data/maps/PetalburgCity/scripts.pory"
	fadedefaultbgm
# 300 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 301 "data/maps/PetalburgCity/scripts.pory"
	end
# 302 "data/maps/PetalburgCity/scripts.pory"

# 303 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer0::
# 304 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer0
# 305 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 306 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 307 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 308 "data/maps/PetalburgCity/scripts.pory"
	return
# 309 "data/maps/PetalburgCity/scripts.pory"

# 310 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer1::
# 311 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_WalkRight2
# 312 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 313 "data/maps/PetalburgCity/scripts.pory"
	return
# 314 "data/maps/PetalburgCity/scripts.pory"

# 315 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer2::
# 316 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer2
# 317 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 318 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 319 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 320 "data/maps/PetalburgCity/scripts.pory"
	return
# 321 "data/maps/PetalburgCity/scripts.pory"

# 322 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer3::
# 323 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer3
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
PetalburgCity_EventScript_LeadPlayerToGym0::
# 330 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym0
# 331 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym0
# 332 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 333 "data/maps/PetalburgCity/scripts.pory"
	return
# 334 "data/maps/PetalburgCity/scripts.pory"

# 335 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym1::
# 336 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym1
# 337 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym1
# 338 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 339 "data/maps/PetalburgCity/scripts.pory"
	return
# 340 "data/maps/PetalburgCity/scripts.pory"

# 341 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym2::
# 342 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym2
# 343 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym2
# 344 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 345 "data/maps/PetalburgCity/scripts.pory"
	return
# 346 "data/maps/PetalburgCity/scripts.pory"

# 347 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym3::
# 348 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym3
# 349 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym3
# 350 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 351 "data/maps/PetalburgCity/scripts.pory"
	return
# 352 "data/maps/PetalburgCity/scripts.pory"

# 353 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer0:
# 354 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 355 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 356 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 357 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 358 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 359 "data/maps/PetalburgCity/scripts.pory"

# 360 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer2:
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
PetalburgCity_Movement_BoyApproachPlayer3:
# 368 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 369 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 370 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 371 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 372 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 373 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 374 "data/maps/PetalburgCity/scripts.pory"

# 375 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym0:
# 376 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 377 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 378 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 379 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 380 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 381 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 382 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 383 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 384 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 385 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 386 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 387 "data/maps/PetalburgCity/scripts.pory"

# 388 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym1:
# 389 "data/maps/PetalburgCity/scripts.pory"
	walk_down
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
	walk_right
# 396 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 397 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 398 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 399 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 400 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 401 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 402 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 403 "data/maps/PetalburgCity/scripts.pory"

# 404 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym2:
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
	walk_right
# 411 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 412 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 413 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 414 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 415 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 416 "data/maps/PetalburgCity/scripts.pory"

# 417 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym3:
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
	walk_right
# 425 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 426 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 427 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 428 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 429 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 430 "data/maps/PetalburgCity/scripts.pory"

# 431 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkAway:
# 432 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 433 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 434 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 435 "data/maps/PetalburgCity/scripts.pory"
	walk_left
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
	step_end
# 445 "data/maps/PetalburgCity/scripts.pory"

# 446 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym0:
# 447 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 448 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 449 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 450 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 451 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 452 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 453 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 454 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 455 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 456 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 457 "data/maps/PetalburgCity/scripts.pory"

# 458 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym1:
# 459 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 460 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 461 "data/maps/PetalburgCity/scripts.pory"
	walk_down
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
	walk_right
# 468 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 469 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 470 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 471 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 472 "data/maps/PetalburgCity/scripts.pory"

# 473 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym2:
# 474 "data/maps/PetalburgCity/scripts.pory"
	walk_up
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
	walk_right
# 482 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 483 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 484 "data/maps/PetalburgCity/scripts.pory"

# 485 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym3:
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
	walk_up
# 496 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 497 "data/maps/PetalburgCity/scripts.pory"

# 498 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott0::
# 499 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 500 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_SCOTT
# 501 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 0
# 502 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_SCOTT, 13, 10
# 503 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 504 "data/maps/PetalburgCity/scripts.pory"
	end
# 505 "data/maps/PetalburgCity/scripts.pory"

# 506 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott1::
# 507 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 508 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_SCOTT
# 509 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 1
# 510 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_SCOTT, 13, 11
# 511 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 512 "data/maps/PetalburgCity/scripts.pory"
	end
# 513 "data/maps/PetalburgCity/scripts.pory"

# 514 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott2::
# 515 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 516 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_SCOTT
# 517 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 2
# 518 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_SCOTT, 13, 12
# 519 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 520 "data/maps/PetalburgCity/scripts.pory"
	end
# 521 "data/maps/PetalburgCity/scripts.pory"

# 522 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott3::
# 523 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 524 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_SCOTT
# 525 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 3
# 526 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_SCOTT, 13, 13
# 527 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 528 "data/maps/PetalburgCity/scripts.pory"
	end
# 529 "data/maps/PetalburgCity/scripts.pory"

# 530 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott::
# 531 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_WalkLeft4
# 532 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 533 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 534 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_ExclamationMark
# 535 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 536 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_Delay48
# 537 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 538 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_WalkLeft4
# 539 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 540 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 541 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 542 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_SCOTT_STATE, 1
# 543 "data/maps/PetalburgCity/scripts.pory"
	speakername (CommonText_Q)
# 544 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouATrainer, MSGBOX_DEFAULT
# 545 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 546 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_WalkInPlaceFasterRight
# 547 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 548 "data/maps/PetalburgCity/scripts.pory"
	delay 30
# 549 "data/maps/PetalburgCity/scripts.pory"
	speakername (CommonText_Q)
# 550 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WellMaybeNot, MSGBOX_DEFAULT
# 551 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 552 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_WalkInPlaceFasterLeft
# 553 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 554 "data/maps/PetalburgCity/scripts.pory"
	delay 30
# 555 "data/maps/PetalburgCity/scripts.pory"
	speakername (CommonText_Q)
# 556 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ImLookingForTalentedTrainers, MSGBOX_DEFAULT
# 557 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 558 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_ScottExit0
# 559 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_ScottExit1
# 560 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_ScottExit2
# 561 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_ScottExit3
# 562 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_SCOTT_PETALBURG_ENCOUNTER, 1
# 563 "data/maps/PetalburgCity/scripts.pory"
	removeobject LOCALID_SCOTT
# 564 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 565 "data/maps/PetalburgCity/scripts.pory"
	end
# 566 "data/maps/PetalburgCity/scripts.pory"

# 567 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit0::
# 568 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit0
# 569 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit0
# 570 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 571 "data/maps/PetalburgCity/scripts.pory"
	return
# 572 "data/maps/PetalburgCity/scripts.pory"

# 573 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit1::
# 574 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit1
# 575 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit1
# 576 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 577 "data/maps/PetalburgCity/scripts.pory"
	return
# 578 "data/maps/PetalburgCity/scripts.pory"

# 579 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit2::
# 580 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit2
# 581 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit2
# 582 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 583 "data/maps/PetalburgCity/scripts.pory"
	return
# 584 "data/maps/PetalburgCity/scripts.pory"

# 585 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit3::
# 586 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit3
# 587 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit3
# 588 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 589 "data/maps/PetalburgCity/scripts.pory"
	return
# 590 "data/maps/PetalburgCity/scripts.pory"

# 591 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit0:
# 592 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 593 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 594 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 595 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 596 "data/maps/PetalburgCity/scripts.pory"
	walk_left
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
	step_end
# 606 "data/maps/PetalburgCity/scripts.pory"

# 607 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit0:
# 608 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 609 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 610 "data/maps/PetalburgCity/scripts.pory"
	delay_16
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
PetalburgCity_Movement_ScottExit1:
# 617 "data/maps/PetalburgCity/scripts.pory"
	walk_down
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
	walk_left
# 629 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 630 "data/maps/PetalburgCity/scripts.pory"

# 631 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit1:
# 632 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 633 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
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
PetalburgCity_Movement_ScottExit2:
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
PetalburgCity_Movement_PlayerWatchScottExit2:
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
PetalburgCity_Movement_ScottExit3:
# 663 "data/maps/PetalburgCity/scripts.pory"
	walk_up
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
PetalburgCity_Movement_PlayerWatchScottExit3:
# 678 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 679 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
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
PetalburgCity_EventScript_GymBoy::
# 686 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouRookieTrainer, MSGBOX_NPC
# 687 "data/maps/PetalburgCity/scripts.pory"
	end
# 688 "data/maps/PetalburgCity/scripts.pory"

# 689 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WhereIsWally:
# 690 "data/maps/PetalburgCity/scripts.pory"
	.string "Where has our Wally gone?\p"
# 691 "data/maps/PetalburgCity/scripts.pory"
	.string "We have to leave for Verdanturf Town\n"
# 692 "data/maps/PetalburgCity/scripts.pory"
	.string "very soon…$"
# 693 "data/maps/PetalburgCity/scripts.pory"

# 694 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_AreYouRookieTrainer:
# 695 "data/maps/PetalburgCity/scripts.pory"
	.string "Hiya! Are you maybe…\n"
# 696 "data/maps/PetalburgCity/scripts.pory"
	.string "A rookie Trainer?\p"
# 697 "data/maps/PetalburgCity/scripts.pory"
	.string "Do you know what Pokémon Trainers\n"
# 698 "data/maps/PetalburgCity/scripts.pory"
	.string "do when they reach a new town?\p"
# 699 "data/maps/PetalburgCity/scripts.pory"
	.string "They first check what kind of Gym\n"
# 700 "data/maps/PetalburgCity/scripts.pory"
	.string "is in the town.$"
# 701 "data/maps/PetalburgCity/scripts.pory"

# 702 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ThisIsPetalburgGym:
# 703 "data/maps/PetalburgCity/scripts.pory"
	.string "See? This is Petalburg City's Gym.$"
# 704 "data/maps/PetalburgCity/scripts.pory"

# 705 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ThisIsGymSign:
# 706 "data/maps/PetalburgCity/scripts.pory"
	.string "This is the Gym's sign. Look for it\n"
# 707 "data/maps/PetalburgCity/scripts.pory"
	.string "whenever you're looking for a Gym.$"
# 708 "data/maps/PetalburgCity/scripts.pory"

# 709 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WaterReflection:
# 710 "data/maps/PetalburgCity/scripts.pory"
	.string "My face is reflected in the water.\p"
# 711 "data/maps/PetalburgCity/scripts.pory"
	.string "It's a shining grin full of hope…\p"
# 712 "data/maps/PetalburgCity/scripts.pory"
	.string "Or it could be a look of somber silence\n"
# 713 "data/maps/PetalburgCity/scripts.pory"
	.string "struggling with fear…\p"
# 714 "data/maps/PetalburgCity/scripts.pory"
	.string "What do you see reflected in your face?$"
# 715 "data/maps/PetalburgCity/scripts.pory"

# 716 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_FullPartyExplanation:
# 717 "data/maps/PetalburgCity/scripts.pory"
	.string "Let's say you have six Pokémon.\n"
# 718 "data/maps/PetalburgCity/scripts.pory"
	.string "If you catch another one…\p"
# 719 "data/maps/PetalburgCity/scripts.pory"
	.string "It is automatically sent to a Storage\n"
# 720 "data/maps/PetalburgCity/scripts.pory"
	.string "Box over a PC connection.$"
# 721 "data/maps/PetalburgCity/scripts.pory"

# 722 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_GymSign:
# 723 "data/maps/PetalburgCity/scripts.pory"
	.string "Petalburg City Pokémon Gym\n"
# 724 "data/maps/PetalburgCity/scripts.pory"
	.string "Leader: Norman\l"
# 725 "data/maps/PetalburgCity/scripts.pory"
	.string "“A man in pursuit of power!”$"
# 726 "data/maps/PetalburgCity/scripts.pory"

# 727 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_CitySign:
# 728 "data/maps/PetalburgCity/scripts.pory"
	.string "Petalburg City\n"
# 729 "data/maps/PetalburgCity/scripts.pory"
	.string "“Where people mingle with nature.”$"
# 730 "data/maps/PetalburgCity/scripts.pory"

# 731 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WallyHouseSign:
# 732 "data/maps/PetalburgCity/scripts.pory"
	.string "Wally's House$"
# 733 "data/maps/PetalburgCity/scripts.pory"

# 734 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_AreYouATrainer:
# 735 "data/maps/PetalburgCity/scripts.pory"
	.string "Excuse me!\p"
# 736 "data/maps/PetalburgCity/scripts.pory"
	.string "Let me guess, from the way you're\n"
# 737 "data/maps/PetalburgCity/scripts.pory"
	.string "dressed, are you a Pokémon Trainer?$"
# 738 "data/maps/PetalburgCity/scripts.pory"

# 739 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WellMaybeNot:
# 740 "data/maps/PetalburgCity/scripts.pory"
	.string "… … … … … …\p"
# 741 "data/maps/PetalburgCity/scripts.pory"
	.string "Well, maybe not.\n"
# 742 "data/maps/PetalburgCity/scripts.pory"
	.string "Your clothes aren't all that dirty.\p"
# 743 "data/maps/PetalburgCity/scripts.pory"
	.string "You're either a rookie Trainer,\n"
# 744 "data/maps/PetalburgCity/scripts.pory"
	.string "or maybe you're just an ordinary kid.$"
# 745 "data/maps/PetalburgCity/scripts.pory"

# 746 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ImLookingForTalentedTrainers:
# 747 "data/maps/PetalburgCity/scripts.pory"
	.string "I'm roaming the land in search of\n"
# 748 "data/maps/PetalburgCity/scripts.pory"
	.string "talented Trainers.\p"
# 749 "data/maps/PetalburgCity/scripts.pory"
	.string "I'm sorry to have taken your time.$"

Rival_Scene02::
# 755 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 1
	goto_if_eq Rival_Scene02_2
Rival_Scene02_1:
# 804 "data/maps/PetalburgCity/scripts.pory"
	release
	end

Rival_Scene02_2:
# 756 "data/maps/PetalburgCity/scripts.pory"
	lock
# 757 "data/maps/PetalburgCity/scripts.pory"
	call Common_EventScript_PlayEmRivalBgm
# 758 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 759 "data/maps/PetalburgCity/scripts.pory"
	applymovement 10, Common_Movement_ExclamationMark
# 760 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 761 "data/maps/PetalburgCity/scripts.pory"
	delay 60
# 762 "data/maps/PetalburgCity/scripts.pory"
	applymovement 10, Common_Movement_WalkRight2
# 763 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 764 "data/maps/PetalburgCity/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 765 "data/maps/PetalburgCity/scripts.pory"
	switch VAR_TEMP_1
# 766 "data/maps/PetalburgCity/scripts.pory"
	case 16, Rival_Scene02_6
# 769 "data/maps/PetalburgCity/scripts.pory"
	case 17, Rival_Scene02_7
# 772 "data/maps/PetalburgCity/scripts.pory"
	case 19, Rival_Scene02_8
Rival_Scene02_4:
# 777 "data/maps/PetalburgCity/scripts.pory"
	applymovement 10, Common_Movement_WalkRight2
# 778 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 779 "data/maps/PetalburgCity/scripts.pory"
	call GetRivalForNameBox
# 780 "data/maps/PetalburgCity/scripts.pory"
	switch VAR_EMERALBODY_RIVAL
# 781 "data/maps/PetalburgCity/scripts.pory"
	case 1, Rival_Scene02_11
# 783 "data/maps/PetalburgCity/scripts.pory"
	case 2, Rival_Scene02_12
# 785 "data/maps/PetalburgCity/scripts.pory"
	case 3, Rival_Scene02_13
# 787 "data/maps/PetalburgCity/scripts.pory"
	case 4, Rival_Scene02_14
# 790 "data/maps/PetalburgCity/scripts.pory"
	msgbox Scene02_BaronText_PreBattle
Rival_Scene02_9:
# 792 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 794 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_EMERALBODY_RIVAL_STATE, 2
# 795 "data/maps/PetalburgCity/scripts.pory"
	fadedefaultbgm
# 796 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_TEMP_1, 16
	goto_if_eq Rival_Scene02_17
Rival_Scene02_16:
# 800 "data/maps/PetalburgCity/scripts.pory"
	applymovement 10, Common_Movement_WalkLeft7
# 801 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 802 "data/maps/PetalburgCity/scripts.pory"
	removeobject 10
	goto Rival_Scene02_1

Rival_Scene02_6:
# 767 "data/maps/PetalburgCity/scripts.pory"
	applymovement 10, Common_Movement_WalkUp2
# 768 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
	goto Rival_Scene02_4

Rival_Scene02_7:
# 770 "data/maps/PetalburgCity/scripts.pory"
	applymovement 10, Common_Movement_WalkUp
# 771 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
	goto Rival_Scene02_4

Rival_Scene02_8:
# 773 "data/maps/PetalburgCity/scripts.pory"
	applymovement 10, Common_Movement_WalkDown
# 774 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
	goto Rival_Scene02_4

Rival_Scene02_11:
# 782 "data/maps/PetalburgCity/scripts.pory"
	msgbox Scene02_HarperText_PreBattle
	goto Rival_Scene02_9

Rival_Scene02_12:
# 784 "data/maps/PetalburgCity/scripts.pory"
	msgbox Scene02_JaksonText_PreBattle
	goto Rival_Scene02_9

Rival_Scene02_13:
# 786 "data/maps/PetalburgCity/scripts.pory"
	msgbox Scene02_ReddText_PreBattle
	goto Rival_Scene02_9

Rival_Scene02_14:
# 788 "data/maps/PetalburgCity/scripts.pory"
	msgbox Scene02_SakuraText_PreBattle
	goto Rival_Scene02_9

Rival_Scene02_17:
# 797 "data/maps/PetalburgCity/scripts.pory"
	applymovement 10, Common_Movement_WalkDown
# 798 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
	goto Rival_Scene02_16


PetalburgCity_EventScript_Simulation::
# 809 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_Simulation_Text_0, MSGBOX_NPC
	return


PetalburgCity_EventScript_Simulation_Text_0:
# 809 "data/maps/PetalburgCity/scripts.pory"
	.string "I heard there's a realistic computer\n"
	.string "simulation out there.\n"
	.string "If you lose a Pokémon battle in it, you\l"
	.string "lose one in real life!\n"
	.string "That's just too scary.$"
