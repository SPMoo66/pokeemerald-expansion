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
	setflag FLAG_TEMP_2
# 21 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_PETALBURG_CITY_STATE, 0, PetalburgCity_EventScript_MoveGymBoyToWestEntrance
# 22 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_PETALBURG_CITY_STATE, 2, PetalburgCity_EventScript_DisableMapNameAndMusic
# 23 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_PETALBURG_CITY_STATE, 4, PetalburgCity_EventScript_DisableMapNameAndMusic
# 24 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_PETALBURG_GYM_STATE, 8, PetalburgCity_EventScript_SetGymDoorsUnlocked
# 25 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_EMERALBODY_RIVAL_STATE, 1, PetalburgCity_EventScript_ShowRival
# 26 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_EMERALBODY_RIVAL_STATE, 2, PetalburgCity_EventScript_ShowRivals
# 27 "data/maps/PetalburgCity/scripts.pory"
	call Common_EventScript_SetupEmRivalGfxId
# 28 "data/maps/PetalburgCity/scripts.pory"
	end
# 29 "data/maps/PetalburgCity/scripts.pory"

# 30 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowRival:
# 31 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_TEMP_1
# 32 "data/maps/PetalburgCity/scripts.pory"
	return
# 33 "data/maps/PetalburgCity/scripts.pory"

# 34 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowRivals:
# 35 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_TEMP_2
# 36 "data/maps/PetalburgCity/scripts.pory"
	return
# 37 "data/maps/PetalburgCity/scripts.pory"

# 38 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_MoveGymBoyToWestEntrance::
# 39 "data/maps/PetalburgCity/scripts.pory"
	setobjectxyperm LOCALID_GYM_BOY, 5, 11
# 40 "data/maps/PetalburgCity/scripts.pory"
	return
# 41 "data/maps/PetalburgCity/scripts.pory"

# 42 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_DisableMapNameAndMusic::
# 43 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 44 "data/maps/PetalburgCity/scripts.pory"
	savebgm MUS_FOLLOW_ME
# 45 "data/maps/PetalburgCity/scripts.pory"
	return
# 46 "data/maps/PetalburgCity/scripts.pory"

# 47 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_SetGymDoorsUnlocked::
# 48 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 7
# 49 "data/maps/PetalburgCity/scripts.pory"
	return
# 50 "data/maps/PetalburgCity/scripts.pory"

# 51 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_OnFrame:
# 52 "data/maps/PetalburgCity/scripts.pory"
	map_script_2 VAR_PETALBURG_CITY_STATE, 2, PetalburgCity_EventScript_WallyTutorial
# 53 "data/maps/PetalburgCity/scripts.pory"
	map_script_2 VAR_PETALBURG_CITY_STATE, 4, PetalburgCity_EventScript_WalkToWallyHouse
# 54 "data/maps/PetalburgCity/scripts.pory"
	.2byte 0
# 55 "data/maps/PetalburgCity/scripts.pory"

# 56 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallyTutorial::
# 57 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 58 "data/maps/PetalburgCity/scripts.pory"
	special SavePlayerParty
# 59 "data/maps/PetalburgCity/scripts.pory"
	special LoadWallyZigzagoon
# 60 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Movement_WallyTutorialWally
# 61 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_WallyTutorialPlayer
# 62 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 63 "data/maps/PetalburgCity/scripts.pory"
	speakername (CommonText_Wally)
# 64 "data/maps/PetalburgCity/scripts.pory"
	msgbox Route102_Text_WatchMeCatchPokemon, MSGBOX_DEFAULT
# 65 "data/maps/PetalburgCity/scripts.pory"
	special StartWallyTutorialBattle
# 66 "data/maps/PetalburgCity/scripts.pory"
	waitstate
# 67 "data/maps/PetalburgCity/scripts.pory"
	speakername (CommonText_Wally)
# 68 "data/maps/PetalburgCity/scripts.pory"
	msgbox Route102_Text_WallyIDidIt, MSGBOX_DEFAULT
# 69 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceFasterLeft, MAP_PETALBURG_CITY
# 70 "data/maps/PetalburgCity/scripts.pory"
	waitmovement LOCALID_WALLY, MAP_PETALBURG_CITY
# 71 "data/maps/PetalburgCity/scripts.pory"
	speakername (CommonText_Wally)
# 72 "data/maps/PetalburgCity/scripts.pory"
	msgbox Route102_Text_LetsGoBack, MSGBOX_DEFAULT
# 73 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 74 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 75 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 3
# 76 "data/maps/PetalburgCity/scripts.pory"
	fadedefaultbgm
# 77 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 78 "data/maps/PetalburgCity/scripts.pory"
	special LoadPlayerParty
# 79 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 1
# 80 "data/maps/PetalburgCity/scripts.pory"
	warp MAP_PETALBURG_CITY_GYM, 4, 108
# 81 "data/maps/PetalburgCity/scripts.pory"
	waitstate
# 82 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 83 "data/maps/PetalburgCity/scripts.pory"
	end
# 84 "data/maps/PetalburgCity/scripts.pory"

# 85 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WalkToWallyHouse::
# 86 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 87 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 88 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Movement_WalkToWallyHouseWallysDad
# 89 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_WalkToWallyHousePlayer
# 90 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 91 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8004, 7
# 92 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8005, 5
# 93 "data/maps/PetalburgCity/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 94 "data/maps/PetalburgCity/scripts.pory"
	waitdooranim
# 95 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, Common_Movement_EnterHouse
# 96 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp2
# 97 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 98 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_CITY_WALLYS_DAD
# 99 "data/maps/PetalburgCity/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_PETALBURG_CITY
# 100 "data/maps/PetalburgCity/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 101 "data/maps/PetalburgCity/scripts.pory"
	waitdooranim
# 102 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 103 "data/maps/PetalburgCity/scripts.pory"
	fadedefaultbgm
# 104 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 105 "data/maps/PetalburgCity/scripts.pory"
	warp MAP_PETALBURG_CITY_WALLYS_HOUSE, 2, 4
# 106 "data/maps/PetalburgCity/scripts.pory"
	waitstate
# 107 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 108 "data/maps/PetalburgCity/scripts.pory"
	end
# 109 "data/maps/PetalburgCity/scripts.pory"

# 110 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Boy::
# 111 "data/maps/PetalburgCity/scripts.pory"
	lock
# 112 "data/maps/PetalburgCity/scripts.pory"
	faceplayer
# 113 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WaterReflection, MSGBOX_DEFAULT
# 114 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 115 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_BOY, Common_Movement_FaceOriginalDirection
# 116 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 117 "data/maps/PetalburgCity/scripts.pory"
	release
# 118 "data/maps/PetalburgCity/scripts.pory"
	end
# 119 "data/maps/PetalburgCity/scripts.pory"

# 120 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallysMom::
# 121 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WhereIsWally, MSGBOX_NPC
# 122 "data/maps/PetalburgCity/scripts.pory"
	end
# 123 "data/maps/PetalburgCity/scripts.pory"

# 124 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkToWallyHousePlayer:
# 125 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 126 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 127 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 128 "data/maps/PetalburgCity/scripts.pory"
	walk_down
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
	walk_left
# 135 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 136 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 137 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 138 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 139 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 140 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 141 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 142 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 143 "data/maps/PetalburgCity/scripts.pory"

# 144 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkToWallyHouseWallysDad:
# 145 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 146 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 147 "data/maps/PetalburgCity/scripts.pory"
	walk_down
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
	walk_left
# 154 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 155 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 156 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 157 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 158 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 159 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 160 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 161 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 162 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 163 "data/maps/PetalburgCity/scripts.pory"

# 164 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WallyTutorialPlayer:
# 165 "data/maps/PetalburgCity/scripts.pory"
	delay_8
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
	walk_down
# 172 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 173 "data/maps/PetalburgCity/scripts.pory"
	walk_down
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
	walk_right
# 192 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 193 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 194 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 195 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 196 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_right
# 197 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 198 "data/maps/PetalburgCity/scripts.pory"

# 199 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WallyTutorialWally:
# 200 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 201 "data/maps/PetalburgCity/scripts.pory"
	walk_down
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
	walk_right
# 226 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 227 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 228 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 229 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 230 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 231 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 232 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 233 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 234 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 235 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_right
# 236 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 237 "data/maps/PetalburgCity/scripts.pory"

# 238 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_GymSign::
# 239 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_GymSign, MSGBOX_SIGN
# 240 "data/maps/PetalburgCity/scripts.pory"
	end
# 241 "data/maps/PetalburgCity/scripts.pory"

# 242 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_CitySign::
# 243 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_CitySign, MSGBOX_SIGN
# 244 "data/maps/PetalburgCity/scripts.pory"
	end
# 245 "data/maps/PetalburgCity/scripts.pory"

# 246 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Gentleman::
# 247 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_FullPartyExplanation, MSGBOX_NPC
# 248 "data/maps/PetalburgCity/scripts.pory"
	end
# 249 "data/maps/PetalburgCity/scripts.pory"

# 250 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallyHouseSign::
# 251 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WallyHouseSign, MSGBOX_SIGN
# 252 "data/maps/PetalburgCity/scripts.pory"
	end
# 253 "data/maps/PetalburgCity/scripts.pory"

# 254 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer0::
# 255 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 256 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 0
# 257 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 258 "data/maps/PetalburgCity/scripts.pory"
	end
# 259 "data/maps/PetalburgCity/scripts.pory"

# 260 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer1::
# 261 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 262 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 1
# 263 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 264 "data/maps/PetalburgCity/scripts.pory"
	end
# 265 "data/maps/PetalburgCity/scripts.pory"

# 266 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer2::
# 267 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 268 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 2
# 269 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 270 "data/maps/PetalburgCity/scripts.pory"
	end
# 271 "data/maps/PetalburgCity/scripts.pory"

# 272 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer3::
# 273 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 274 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 3
# 275 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 276 "data/maps/PetalburgCity/scripts.pory"
	end
# 277 "data/maps/PetalburgCity/scripts.pory"

# 278 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer::
# 279 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_FacePlayer
# 280 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 281 "data/maps/PetalburgCity/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 282 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 283 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_ExclamationMark
# 284 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 285 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_Delay48
# 286 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 287 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_BoyApproachPlayer0
# 288 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_BoyApproachPlayer1
# 289 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_BoyApproachPlayer2
# 290 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_BoyApproachPlayer3
# 291 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouRookieTrainer, MSGBOX_DEFAULT
# 292 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 293 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_LeadPlayerToGym0
# 294 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_LeadPlayerToGym1
# 295 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_LeadPlayerToGym2
# 296 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_LeadPlayerToGym3
# 297 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ThisIsPetalburgGym, MSGBOX_DEFAULT
# 298 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_WalkInPlaceFasterRight
# 299 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 300 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 301 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ThisIsGymSign, MSGBOX_DEFAULT
# 302 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 303 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkAway
# 304 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 305 "data/maps/PetalburgCity/scripts.pory"
	fadedefaultbgm
# 306 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 307 "data/maps/PetalburgCity/scripts.pory"
	end
# 308 "data/maps/PetalburgCity/scripts.pory"

# 309 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer0::
# 310 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer0
# 311 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 312 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 313 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 314 "data/maps/PetalburgCity/scripts.pory"
	return
# 315 "data/maps/PetalburgCity/scripts.pory"

# 316 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer1::
# 317 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_WalkRight2
# 318 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 319 "data/maps/PetalburgCity/scripts.pory"
	return
# 320 "data/maps/PetalburgCity/scripts.pory"

# 321 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer2::
# 322 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer2
# 323 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 324 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 325 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 326 "data/maps/PetalburgCity/scripts.pory"
	return
# 327 "data/maps/PetalburgCity/scripts.pory"

# 328 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer3::
# 329 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer3
# 330 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 331 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 332 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 333 "data/maps/PetalburgCity/scripts.pory"
	return
# 334 "data/maps/PetalburgCity/scripts.pory"

# 335 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym0::
# 336 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym0
# 337 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym0
# 338 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 339 "data/maps/PetalburgCity/scripts.pory"
	return
# 340 "data/maps/PetalburgCity/scripts.pory"

# 341 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym1::
# 342 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym1
# 343 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym1
# 344 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 345 "data/maps/PetalburgCity/scripts.pory"
	return
# 346 "data/maps/PetalburgCity/scripts.pory"

# 347 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym2::
# 348 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym2
# 349 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym2
# 350 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 351 "data/maps/PetalburgCity/scripts.pory"
	return
# 352 "data/maps/PetalburgCity/scripts.pory"

# 353 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym3::
# 354 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym3
# 355 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym3
# 356 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 357 "data/maps/PetalburgCity/scripts.pory"
	return
# 358 "data/maps/PetalburgCity/scripts.pory"

# 359 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer0:
# 360 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 361 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 362 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 363 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 364 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 365 "data/maps/PetalburgCity/scripts.pory"

# 366 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer2:
# 367 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 368 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 369 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 370 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 371 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 372 "data/maps/PetalburgCity/scripts.pory"

# 373 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer3:
# 374 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 375 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 376 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 377 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 378 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 379 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 380 "data/maps/PetalburgCity/scripts.pory"

# 381 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym0:
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
	walk_up
# 390 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 391 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 392 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 393 "data/maps/PetalburgCity/scripts.pory"

# 394 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym1:
# 395 "data/maps/PetalburgCity/scripts.pory"
	walk_down
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
	walk_right
# 402 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 403 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 404 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 405 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 406 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 407 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 408 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 409 "data/maps/PetalburgCity/scripts.pory"

# 410 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym2:
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
	walk_right
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
PetalburgCity_Movement_BoyWalkToGym3:
# 424 "data/maps/PetalburgCity/scripts.pory"
	walk_right
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
	walk_up
# 432 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 433 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 434 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 435 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 436 "data/maps/PetalburgCity/scripts.pory"

# 437 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkAway:
# 438 "data/maps/PetalburgCity/scripts.pory"
	walk_down
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
	walk_left
# 448 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 449 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 450 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 451 "data/maps/PetalburgCity/scripts.pory"

# 452 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym0:
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
	step_end
# 463 "data/maps/PetalburgCity/scripts.pory"

# 464 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym1:
# 465 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 466 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 467 "data/maps/PetalburgCity/scripts.pory"
	walk_down
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
	walk_right
# 475 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 476 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 477 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 478 "data/maps/PetalburgCity/scripts.pory"

# 479 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym2:
# 480 "data/maps/PetalburgCity/scripts.pory"
	walk_up
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
	walk_right
# 487 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 488 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 489 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 490 "data/maps/PetalburgCity/scripts.pory"

# 491 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym3:
# 492 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 493 "data/maps/PetalburgCity/scripts.pory"
	walk_right
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
	walk_up
# 501 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 502 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 503 "data/maps/PetalburgCity/scripts.pory"

# 504 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott0::
# 505 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 506 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_SCOTT
# 507 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 0
# 508 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_SCOTT, 13, 10
# 509 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 510 "data/maps/PetalburgCity/scripts.pory"
	end
# 511 "data/maps/PetalburgCity/scripts.pory"

# 512 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott1::
# 513 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 514 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_SCOTT
# 515 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 1
# 516 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_SCOTT, 13, 11
# 517 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 518 "data/maps/PetalburgCity/scripts.pory"
	end
# 519 "data/maps/PetalburgCity/scripts.pory"

# 520 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott2::
# 521 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 522 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_SCOTT
# 523 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 2
# 524 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_SCOTT, 13, 12
# 525 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 526 "data/maps/PetalburgCity/scripts.pory"
	end
# 527 "data/maps/PetalburgCity/scripts.pory"

# 528 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott3::
# 529 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 530 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_SCOTT
# 531 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 3
# 532 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_SCOTT, 13, 13
# 533 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 534 "data/maps/PetalburgCity/scripts.pory"
	end
# 535 "data/maps/PetalburgCity/scripts.pory"

# 536 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott::
# 537 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_WalkLeft4
# 538 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 539 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 540 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_ExclamationMark
# 541 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 542 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_Delay48
# 543 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 544 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_WalkLeft4
# 545 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 546 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 547 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 548 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_SCOTT_STATE, 1
# 549 "data/maps/PetalburgCity/scripts.pory"
	speakername (CommonText_Q)
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
	speakername (CommonText_Q)
# 556 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WellMaybeNot, MSGBOX_DEFAULT
# 557 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 558 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_WalkInPlaceFasterLeft
# 559 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 560 "data/maps/PetalburgCity/scripts.pory"
	delay 30
# 561 "data/maps/PetalburgCity/scripts.pory"
	speakername (CommonText_Q)
# 562 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ImLookingForTalentedTrainers, MSGBOX_DEFAULT
# 563 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 564 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_ScottExit0
# 565 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_ScottExit1
# 566 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_ScottExit2
# 567 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_ScottExit3
# 568 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_SCOTT_PETALBURG_ENCOUNTER, 1
# 569 "data/maps/PetalburgCity/scripts.pory"
	removeobject LOCALID_SCOTT
# 570 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 571 "data/maps/PetalburgCity/scripts.pory"
	end
# 572 "data/maps/PetalburgCity/scripts.pory"

# 573 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit0::
# 574 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit0
# 575 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit0
# 576 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 577 "data/maps/PetalburgCity/scripts.pory"
	return
# 578 "data/maps/PetalburgCity/scripts.pory"

# 579 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit1::
# 580 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit1
# 581 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_BoyWalkAway
# 582 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 583 "data/maps/PetalburgCity/scripts.pory"
	return
# 584 "data/maps/PetalburgCity/scripts.pory"

# 585 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit2::
# 586 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit2
# 587 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_BoyWalkAway
# 588 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 589 "data/maps/PetalburgCity/scripts.pory"
	return
# 590 "data/maps/PetalburgCity/scripts.pory"

# 591 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit3::
# 592 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit3
# 593 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit3
# 594 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 595 "data/maps/PetalburgCity/scripts.pory"
	return
# 596 "data/maps/PetalburgCity/scripts.pory"

# 597 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit0:
# 598 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 599 "data/maps/PetalburgCity/scripts.pory"
	walk_down
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
	walk_left
# 609 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 610 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 611 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 612 "data/maps/PetalburgCity/scripts.pory"

# 613 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit0:
# 614 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 615 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 616 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 617 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 618 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 619 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 620 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 621 "data/maps/PetalburgCity/scripts.pory"

# 622 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit1:
# 623 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 624 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 625 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 626 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 627 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 628 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 629 "data/maps/PetalburgCity/scripts.pory"

# 630 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit2:
# 631 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 632 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 633 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 634 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 635 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 636 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 637 "data/maps/PetalburgCity/scripts.pory"

# 638 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit3:
# 639 "data/maps/PetalburgCity/scripts.pory"
	walk_up
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
	walk_left
# 649 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 650 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 651 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 652 "data/maps/PetalburgCity/scripts.pory"

# 653 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit3:
# 654 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 655 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 656 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 657 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 658 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 659 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 660 "data/maps/PetalburgCity/scripts.pory"

# 661 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_GymBoy::
# 662 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouRookieTrainer, MSGBOX_NPC
# 663 "data/maps/PetalburgCity/scripts.pory"
	end
# 664 "data/maps/PetalburgCity/scripts.pory"

# 665 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WhereIsWally:
# 666 "data/maps/PetalburgCity/scripts.pory"
	.string "Where has our Wally gone?\p"
# 667 "data/maps/PetalburgCity/scripts.pory"
	.string "We have to leave for Verdanturf Town\n"
# 668 "data/maps/PetalburgCity/scripts.pory"
	.string "very soon…$"
# 669 "data/maps/PetalburgCity/scripts.pory"

# 670 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_AreYouRookieTrainer:
# 671 "data/maps/PetalburgCity/scripts.pory"
	.string "Hiya! Are you maybe…\n"
# 672 "data/maps/PetalburgCity/scripts.pory"
	.string "A rookie Trainer?\p"
# 673 "data/maps/PetalburgCity/scripts.pory"
	.string "Do you know what Pokémon Trainers\n"
# 674 "data/maps/PetalburgCity/scripts.pory"
	.string "do when they reach a new town?\p"
# 675 "data/maps/PetalburgCity/scripts.pory"
	.string "They first check what kind of Gym\n"
# 676 "data/maps/PetalburgCity/scripts.pory"
	.string "is in the town.$"
# 677 "data/maps/PetalburgCity/scripts.pory"

# 678 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ThisIsPetalburgGym:
# 679 "data/maps/PetalburgCity/scripts.pory"
	.string "See? This is Petalburg City's Gym.$"
# 680 "data/maps/PetalburgCity/scripts.pory"

# 681 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ThisIsGymSign:
# 682 "data/maps/PetalburgCity/scripts.pory"
	.string "This is the Gym's sign. Look for it\n"
# 683 "data/maps/PetalburgCity/scripts.pory"
	.string "whenever you're looking for a Gym.$"
# 684 "data/maps/PetalburgCity/scripts.pory"

# 685 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WaterReflection:
# 686 "data/maps/PetalburgCity/scripts.pory"
	.string "My face is reflected in the water.\p"
# 687 "data/maps/PetalburgCity/scripts.pory"
	.string "It's a shining grin full of hope…\p"
# 688 "data/maps/PetalburgCity/scripts.pory"
	.string "Or it could be a look of somber silence\n"
# 689 "data/maps/PetalburgCity/scripts.pory"
	.string "struggling with fear…\p"
# 690 "data/maps/PetalburgCity/scripts.pory"
	.string "What do you see reflected in your face?$"
# 691 "data/maps/PetalburgCity/scripts.pory"

# 692 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_FullPartyExplanation:
# 693 "data/maps/PetalburgCity/scripts.pory"
	.string "Let's say you have six Pokémon.\n"
# 694 "data/maps/PetalburgCity/scripts.pory"
	.string "If you catch another one…\p"
# 695 "data/maps/PetalburgCity/scripts.pory"
	.string "It is automatically sent to a Storage\n"
# 696 "data/maps/PetalburgCity/scripts.pory"
	.string "Box over a PC connection.$"
# 697 "data/maps/PetalburgCity/scripts.pory"

# 698 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_GymSign:
# 699 "data/maps/PetalburgCity/scripts.pory"
	.string "Petalburg City Pokémon Gym\n"
# 700 "data/maps/PetalburgCity/scripts.pory"
	.string "Leader: Norman\l"
# 701 "data/maps/PetalburgCity/scripts.pory"
	.string "“A man in pursuit of power!”$"
# 702 "data/maps/PetalburgCity/scripts.pory"

# 703 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_CitySign:
# 704 "data/maps/PetalburgCity/scripts.pory"
	.string "Petalburg City\n"
# 705 "data/maps/PetalburgCity/scripts.pory"
	.string "“Where people mingle with nature.”$"
# 706 "data/maps/PetalburgCity/scripts.pory"

# 707 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WallyHouseSign:
# 708 "data/maps/PetalburgCity/scripts.pory"
	.string "Wally's House$"
# 709 "data/maps/PetalburgCity/scripts.pory"

# 710 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_AreYouATrainer:
# 711 "data/maps/PetalburgCity/scripts.pory"
	.string "Excuse me!\p"
# 712 "data/maps/PetalburgCity/scripts.pory"
	.string "Let me guess, from the way you're\n"
# 713 "data/maps/PetalburgCity/scripts.pory"
	.string "dressed, are you a Pokémon Trainer?$"
# 714 "data/maps/PetalburgCity/scripts.pory"

# 715 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WellMaybeNot:
# 716 "data/maps/PetalburgCity/scripts.pory"
	.string "… … … … … …\p"
# 717 "data/maps/PetalburgCity/scripts.pory"
	.string "Well, maybe not.\n"
# 718 "data/maps/PetalburgCity/scripts.pory"
	.string "Your clothes aren't all that dirty.\p"
# 719 "data/maps/PetalburgCity/scripts.pory"
	.string "You're either a rookie Trainer,\n"
# 720 "data/maps/PetalburgCity/scripts.pory"
	.string "or maybe you're just an ordinary kid.$"
# 721 "data/maps/PetalburgCity/scripts.pory"

# 722 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ImLookingForTalentedTrainers:
# 723 "data/maps/PetalburgCity/scripts.pory"
	.string "I'm roaming the land in search of\n"
# 724 "data/maps/PetalburgCity/scripts.pory"
	.string "talented Trainers.\p"
# 725 "data/maps/PetalburgCity/scripts.pory"
	.string "I'm sorry to have taken your time.$"

Rival_Scene02::
# 731 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 1
	goto_if_eq Rival_Scene02_2
Rival_Scene02_1:
# 780 "data/maps/PetalburgCity/scripts.pory"
	release
	end

Rival_Scene02_2:
# 732 "data/maps/PetalburgCity/scripts.pory"
	lock
# 733 "data/maps/PetalburgCity/scripts.pory"
	call Common_EventScript_PlayEmRivalBgm
# 734 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 735 "data/maps/PetalburgCity/scripts.pory"
	applymovement 10, Common_Movement_ExclamationMark
# 736 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 737 "data/maps/PetalburgCity/scripts.pory"
	delay 60
# 738 "data/maps/PetalburgCity/scripts.pory"
	applymovement 10, Common_Movement_WalkRight2
# 739 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 740 "data/maps/PetalburgCity/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 741 "data/maps/PetalburgCity/scripts.pory"
	switch VAR_TEMP_1
# 742 "data/maps/PetalburgCity/scripts.pory"
	case 16, Rival_Scene02_6
# 745 "data/maps/PetalburgCity/scripts.pory"
	case 17, Rival_Scene02_7
# 748 "data/maps/PetalburgCity/scripts.pory"
	case 19, Rival_Scene02_8
Rival_Scene02_4:
# 753 "data/maps/PetalburgCity/scripts.pory"
	applymovement 10, Common_Movement_WalkRight2
# 754 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 755 "data/maps/PetalburgCity/scripts.pory"
	call GetRivalForNameBox
# 756 "data/maps/PetalburgCity/scripts.pory"
	switch VAR_EMERALBODY_RIVAL
# 757 "data/maps/PetalburgCity/scripts.pory"
	case 1, Rival_Scene02_11
# 759 "data/maps/PetalburgCity/scripts.pory"
	case 2, Rival_Scene02_12
# 761 "data/maps/PetalburgCity/scripts.pory"
	case 3, Rival_Scene02_13
# 763 "data/maps/PetalburgCity/scripts.pory"
	case 4, Rival_Scene02_14
# 766 "data/maps/PetalburgCity/scripts.pory"
	msgbox Scene02_BaronText_PreBattle
Rival_Scene02_9:
# 768 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 770 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_EMERALBODY_RIVAL_STATE, 2
# 771 "data/maps/PetalburgCity/scripts.pory"
	fadedefaultbgm
# 772 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_TEMP_1, 16
	goto_if_eq Rival_Scene02_17
Rival_Scene02_16:
# 776 "data/maps/PetalburgCity/scripts.pory"
	applymovement 10, Common_Movement_WalkLeft7
# 777 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 778 "data/maps/PetalburgCity/scripts.pory"
	removeobject 10
	goto Rival_Scene02_1

Rival_Scene02_6:
# 743 "data/maps/PetalburgCity/scripts.pory"
	applymovement 10, Common_Movement_WalkUp2
# 744 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
	goto Rival_Scene02_4

Rival_Scene02_7:
# 746 "data/maps/PetalburgCity/scripts.pory"
	applymovement 10, Common_Movement_WalkUp
# 747 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
	goto Rival_Scene02_4

Rival_Scene02_8:
# 749 "data/maps/PetalburgCity/scripts.pory"
	applymovement 10, Common_Movement_WalkDown
# 750 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
	goto Rival_Scene02_4

Rival_Scene02_11:
# 758 "data/maps/PetalburgCity/scripts.pory"
	msgbox Scene02_HarperText_PreBattle
	goto Rival_Scene02_9

Rival_Scene02_12:
# 760 "data/maps/PetalburgCity/scripts.pory"
	msgbox Scene02_JaksonText_PreBattle
	goto Rival_Scene02_9

Rival_Scene02_13:
# 762 "data/maps/PetalburgCity/scripts.pory"
	msgbox Scene02_ReddText_PreBattle
	goto Rival_Scene02_9

Rival_Scene02_14:
# 764 "data/maps/PetalburgCity/scripts.pory"
	msgbox Scene02_SakuraText_PreBattle
	goto Rival_Scene02_9

Rival_Scene02_17:
# 773 "data/maps/PetalburgCity/scripts.pory"
	applymovement 10, Common_Movement_WalkDown
# 774 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
	goto Rival_Scene02_16


PetalburgCity_EventScript_Simulation::
# 785 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_Simulation_Text_0, MSGBOX_NPC
	return


PetalburgCity_EventScript_WallyBattle::
# 791 "data/maps/PetalburgCity/scripts.pory"
	speakername CommonText_Q
# 792 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_WallyBattle_Text_0
# 793 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 794 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 795 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 796 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_WALLY
# 797 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_WALLY, 15, 12
# 798 "data/maps/PetalburgCity/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 799 "data/maps/PetalburgCity/scripts.pory"
	switch VAR_TEMP_0
# 800 "data/maps/PetalburgCity/scripts.pory"
	case 4, PetalburgCity_EventScript_WallyBattle_3
# 802 "data/maps/PetalburgCity/scripts.pory"
	case 5, PetalburgCity_EventScript_WallyBattle_4
# 804 "data/maps/PetalburgCity/scripts.pory"
	case 6, PetalburgCity_EventScript_WallyBattle_5
# 806 "data/maps/PetalburgCity/scripts.pory"
	case 7, PetalburgCity_EventScript_WallyBattle_6
PetalburgCity_EventScript_WallyBattle_1:
# 810 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 811 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceUp
# 812 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 813 "data/maps/PetalburgCity/scripts.pory"
	delay 50
# 814 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkUp3
# 815 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 816 "data/maps/PetalburgCity/scripts.pory"
	speakername CommonText_Wally
# 817 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_WallyBattle_Text_1
# 824 "data/maps/PetalburgCity/scripts.pory"
	trainerbattle_no_intro TRAINER_WALLY_PETALBURG, PetalburgCity_EventScript_WallyBattle_Text_2
# 825 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_WallyBattle_Text_3
# 830 "data/maps/PetalburgCity/scripts.pory"
	fadescreen FADE_TO_BLACK
# 831 "data/maps/PetalburgCity/scripts.pory"
	removeobject LOCALID_WALLY
# 832 "data/maps/PetalburgCity/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 833 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 6
	return

PetalburgCity_EventScript_WallyBattle_3:
# 801 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkLeft11
	goto PetalburgCity_EventScript_WallyBattle_1

PetalburgCity_EventScript_WallyBattle_4:
# 803 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkLeft10
	goto PetalburgCity_EventScript_WallyBattle_1

PetalburgCity_EventScript_WallyBattle_5:
# 805 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkLeft9
	goto PetalburgCity_EventScript_WallyBattle_1

PetalburgCity_EventScript_WallyBattle_6:
# 807 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkLeft8
	goto PetalburgCity_EventScript_WallyBattle_1


PetalburgCity_EventScript_Simulation_Text_0:
# 785 "data/maps/PetalburgCity/scripts.pory"
	.string "I heard there's a realistic computer\n"
	.string "simulation out there.\p"
	.string "If you lose a Pokémon battle in it, you\n"
	.string "lose one in real life!\p"
	.string "That's just too scary.$"

PetalburgCity_EventScript_WallyBattle_Text_0:
# 792 "data/maps/PetalburgCity/scripts.pory"
	.string "{PLAYER}! Please wait!$"

PetalburgCity_EventScript_WallyBattle_Text_1:
# 817 "data/maps/PetalburgCity/scripts.pory"
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
# 824 "data/maps/PetalburgCity/scripts.pory"
	.string "Ah…\nI think I see now…$"

PetalburgCity_EventScript_WallyBattle_Text_3:
# 825 "data/maps/PetalburgCity/scripts.pory"
	.string "{PLAYER}, you're strong.\p"
	.string "You're really strong.\p"
	.string "Thank you for the battle.\n"
	.string "I have a long way to go, but I hope I can\l"
	.string "be up there on the stage with you some\l"
	.string "day.\p"
	.string "I'll be back, and I'll give you a\n"
	.string "challenge you won't forget!$"
