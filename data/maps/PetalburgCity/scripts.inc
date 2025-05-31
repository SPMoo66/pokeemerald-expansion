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
	call_if_eq VAR_PETALBURG_CITY_STATE, 0, PetalburgCity_EventScript_MoveGymBoyToWestEntrance
# 14 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_PETALBURG_CITY_STATE, 2, PetalburgCity_EventScript_DisableMapNameAndMusic
# 15 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_PETALBURG_CITY_STATE, 4, PetalburgCity_EventScript_DisableMapNameAndMusic
# 16 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_PETALBURG_GYM_STATE, 8, PetalburgCity_EventScript_SetGymDoorsUnlocked
# 17 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_EMERALBODY_RIVAL_STATE, 1, EventScript_Clear_FlagTemp1 @ Show Rival
# 18 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_EMERALBODY_RIVAL_STATE, 2, EventScript_Clear_FlagTemp2 @ Show Rivals
# 19 "data/maps/PetalburgCity/scripts.pory"
	call Common_EventScript_SetupEmRivalGfxId
# 20 "data/maps/PetalburgCity/scripts.pory"
	end
# 21 "data/maps/PetalburgCity/scripts.pory"

# 22 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_MoveGymBoyToWestEntrance::
# 23 "data/maps/PetalburgCity/scripts.pory"
	setobjectxyperm LOCALID_GYM_BOY, 5, 11
# 24 "data/maps/PetalburgCity/scripts.pory"
	return
# 25 "data/maps/PetalburgCity/scripts.pory"

# 26 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_DisableMapNameAndMusic::
# 27 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 28 "data/maps/PetalburgCity/scripts.pory"
	savebgm MUS_FOLLOW_ME
# 29 "data/maps/PetalburgCity/scripts.pory"
	return
# 30 "data/maps/PetalburgCity/scripts.pory"

# 31 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_SetGymDoorsUnlocked::
# 32 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 7
# 33 "data/maps/PetalburgCity/scripts.pory"
	return
# 34 "data/maps/PetalburgCity/scripts.pory"

# 35 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_OnFrame:
# 36 "data/maps/PetalburgCity/scripts.pory"
	map_script_2 VAR_PETALBURG_CITY_STATE, 2, PetalburgCity_EventScript_WallyTutorial
# 37 "data/maps/PetalburgCity/scripts.pory"
	map_script_2 VAR_PETALBURG_CITY_STATE, 4, PetalburgCity_EventScript_WalkToWallyHouse
# 38 "data/maps/PetalburgCity/scripts.pory"
	.2byte 0
# 39 "data/maps/PetalburgCity/scripts.pory"

# 40 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallyTutorial::
# 41 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 42 "data/maps/PetalburgCity/scripts.pory"
	special SavePlayerParty
# 43 "data/maps/PetalburgCity/scripts.pory"
	special LoadWallyZigzagoon
# 44 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_WALLY, PetalburgCity_Movement_WallyTutorialWally
# 45 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_WallyTutorialPlayer
# 46 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 47 "data/maps/PetalburgCity/scripts.pory"
	speakername (CommonText_Wally)
# 48 "data/maps/PetalburgCity/scripts.pory"
	msgbox Route102_Text_WatchMeCatchPokemon, MSGBOX_DEFAULT
# 49 "data/maps/PetalburgCity/scripts.pory"
	special StartWallyTutorialBattle
# 50 "data/maps/PetalburgCity/scripts.pory"
	waitstate
# 51 "data/maps/PetalburgCity/scripts.pory"
	speakername (CommonText_Wally)
# 52 "data/maps/PetalburgCity/scripts.pory"
	msgbox Route102_Text_WallyIDidIt, MSGBOX_DEFAULT
# 53 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_WALLY, Common_Movement_WalkInPlaceFasterLeft, MAP_PETALBURG_CITY
# 54 "data/maps/PetalburgCity/scripts.pory"
	waitmovement LOCALID_PETALBURG_WALLY, MAP_PETALBURG_CITY
# 55 "data/maps/PetalburgCity/scripts.pory"
	speakername (CommonText_Wally)
# 56 "data/maps/PetalburgCity/scripts.pory"
	msgbox Route102_Text_LetsGoBack, MSGBOX_DEFAULT
# 57 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 58 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 59 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 3
# 60 "data/maps/PetalburgCity/scripts.pory"
	fadedefaultbgm
# 61 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 62 "data/maps/PetalburgCity/scripts.pory"
	special LoadPlayerParty
# 63 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 1
# 64 "data/maps/PetalburgCity/scripts.pory"
	warp MAP_PETALBURG_CITY_GYM, 4, 108
# 65 "data/maps/PetalburgCity/scripts.pory"
	waitstate
# 66 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 67 "data/maps/PetalburgCity/scripts.pory"
	end
# 68 "data/maps/PetalburgCity/scripts.pory"

# 69 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WalkToWallyHouse::
# 70 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 71 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 72 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_WALLYS_DAD, PetalburgCity_Movement_WalkToWallyHouseWallysDad
# 73 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_WalkToWallyHousePlayer
# 74 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 75 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8004, 7
# 76 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8005, 5
# 77 "data/maps/PetalburgCity/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 78 "data/maps/PetalburgCity/scripts.pory"
	waitdooranim
# 79 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_WALLYS_DAD, Common_Movement_EnterHouse
# 80 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp2
# 81 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 82 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_CITY_WALLYS_DAD
# 83 "data/maps/PetalburgCity/scripts.pory"
	hideobjectat LOCALID_PLAYER, MAP_PETALBURG_CITY
# 84 "data/maps/PetalburgCity/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 85 "data/maps/PetalburgCity/scripts.pory"
	waitdooranim
# 86 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 87 "data/maps/PetalburgCity/scripts.pory"
	fadedefaultbgm
# 88 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 89 "data/maps/PetalburgCity/scripts.pory"
	warp MAP_PETALBURG_CITY_WALLYS_HOUSE, 2, 4
# 90 "data/maps/PetalburgCity/scripts.pory"
	waitstate
# 91 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 92 "data/maps/PetalburgCity/scripts.pory"
	end
# 93 "data/maps/PetalburgCity/scripts.pory"

# 94 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Boy::
# 95 "data/maps/PetalburgCity/scripts.pory"
	lock
# 96 "data/maps/PetalburgCity/scripts.pory"
	faceplayer
# 97 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WaterReflection, MSGBOX_DEFAULT
# 98 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 99 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_BOY, Common_Movement_FaceOriginalDirection
# 100 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 101 "data/maps/PetalburgCity/scripts.pory"
	release
# 102 "data/maps/PetalburgCity/scripts.pory"
	end
# 103 "data/maps/PetalburgCity/scripts.pory"

# 104 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallysMom::
# 105 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WhereIsWally, MSGBOX_NPC
# 106 "data/maps/PetalburgCity/scripts.pory"
	end
# 107 "data/maps/PetalburgCity/scripts.pory"

# 108 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkToWallyHousePlayer:
# 109 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 110 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 111 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 112 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 113 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 114 "data/maps/PetalburgCity/scripts.pory"
	walk_left
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
	walk_up
# 122 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 123 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 124 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 125 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 126 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 127 "data/maps/PetalburgCity/scripts.pory"

# 128 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkToWallyHouseWallysDad:
# 129 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 130 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 131 "data/maps/PetalburgCity/scripts.pory"
	walk_down
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
	walk_left
# 138 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 139 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 140 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 141 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 142 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 143 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 144 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 145 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 146 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 147 "data/maps/PetalburgCity/scripts.pory"

# 148 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WallyTutorialPlayer:
# 149 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 150 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 151 "data/maps/PetalburgCity/scripts.pory"
	walk_down
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
	walk_right
# 159 "data/maps/PetalburgCity/scripts.pory"
	walk_right
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
	walk_up
# 179 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 180 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_right
# 181 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 182 "data/maps/PetalburgCity/scripts.pory"

# 183 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WallyTutorialWally:
# 184 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 185 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 186 "data/maps/PetalburgCity/scripts.pory"
	walk_down
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
	walk_right
# 193 "data/maps/PetalburgCity/scripts.pory"
	walk_right
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
	walk_up
# 213 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 214 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 215 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 216 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 217 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 218 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 219 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_right
# 220 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 221 "data/maps/PetalburgCity/scripts.pory"

# 222 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_GymSign::
# 223 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_GymSign, MSGBOX_SIGN
# 224 "data/maps/PetalburgCity/scripts.pory"
	end
# 225 "data/maps/PetalburgCity/scripts.pory"

# 226 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_CitySign::
# 227 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_CitySign, MSGBOX_SIGN
# 228 "data/maps/PetalburgCity/scripts.pory"
	end
# 229 "data/maps/PetalburgCity/scripts.pory"

# 230 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Gentleman::
# 231 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_FullPartyExplanation, MSGBOX_NPC
# 232 "data/maps/PetalburgCity/scripts.pory"
	end
# 233 "data/maps/PetalburgCity/scripts.pory"

# 234 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallyHouseSign::
# 235 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WallyHouseSign, MSGBOX_SIGN
# 236 "data/maps/PetalburgCity/scripts.pory"
	end
# 237 "data/maps/PetalburgCity/scripts.pory"

# 238 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer0::
# 239 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 240 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 0
# 241 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 242 "data/maps/PetalburgCity/scripts.pory"
	end
# 243 "data/maps/PetalburgCity/scripts.pory"

# 244 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer1::
# 245 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 246 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 1
# 247 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 248 "data/maps/PetalburgCity/scripts.pory"
	end
# 249 "data/maps/PetalburgCity/scripts.pory"

# 250 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer2::
# 251 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 252 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 2
# 253 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 254 "data/maps/PetalburgCity/scripts.pory"
	end
# 255 "data/maps/PetalburgCity/scripts.pory"

# 256 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer3::
# 257 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 258 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 3
# 259 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 260 "data/maps/PetalburgCity/scripts.pory"
	end
# 261 "data/maps/PetalburgCity/scripts.pory"

# 262 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer::
# 263 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_FacePlayer
# 264 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 265 "data/maps/PetalburgCity/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 266 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 267 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_ExclamationMark
# 268 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 269 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_Delay48
# 270 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 271 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_BoyApproachPlayer0
# 272 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_BoyApproachPlayer1
# 273 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_BoyApproachPlayer2
# 274 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_BoyApproachPlayer3
# 275 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouRookieTrainer, MSGBOX_DEFAULT
# 276 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 277 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_LeadPlayerToGym0
# 278 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_LeadPlayerToGym1
# 279 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_LeadPlayerToGym2
# 280 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_LeadPlayerToGym3
# 281 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ThisIsPetalburgGym, MSGBOX_DEFAULT
# 282 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_WalkInPlaceFasterRight
# 283 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 284 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 285 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ThisIsGymSign, MSGBOX_DEFAULT
# 286 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 287 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkAway
# 288 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 289 "data/maps/PetalburgCity/scripts.pory"
	fadedefaultbgm
# 290 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 291 "data/maps/PetalburgCity/scripts.pory"
	end
# 292 "data/maps/PetalburgCity/scripts.pory"

# 293 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer0::
# 294 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer0
# 295 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 296 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 297 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 298 "data/maps/PetalburgCity/scripts.pory"
	return
# 299 "data/maps/PetalburgCity/scripts.pory"

# 300 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer1::
# 301 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_WalkRight2
# 302 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 303 "data/maps/PetalburgCity/scripts.pory"
	return
# 304 "data/maps/PetalburgCity/scripts.pory"

# 305 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer2::
# 306 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer2
# 307 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 308 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 309 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 310 "data/maps/PetalburgCity/scripts.pory"
	return
# 311 "data/maps/PetalburgCity/scripts.pory"

# 312 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer3::
# 313 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer3
# 314 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 315 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 316 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 317 "data/maps/PetalburgCity/scripts.pory"
	return
# 318 "data/maps/PetalburgCity/scripts.pory"

# 319 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym0::
# 320 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym0
# 321 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym0
# 322 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 323 "data/maps/PetalburgCity/scripts.pory"
	return
# 324 "data/maps/PetalburgCity/scripts.pory"

# 325 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym1::
# 326 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym1
# 327 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym1
# 328 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 329 "data/maps/PetalburgCity/scripts.pory"
	return
# 330 "data/maps/PetalburgCity/scripts.pory"

# 331 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym2::
# 332 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym2
# 333 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym2
# 334 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 335 "data/maps/PetalburgCity/scripts.pory"
	return
# 336 "data/maps/PetalburgCity/scripts.pory"

# 337 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym3::
# 338 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym3
# 339 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym3
# 340 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 341 "data/maps/PetalburgCity/scripts.pory"
	return
# 342 "data/maps/PetalburgCity/scripts.pory"

# 343 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer0:
# 344 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 345 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 346 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 347 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 348 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 349 "data/maps/PetalburgCity/scripts.pory"

# 350 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer2:
# 351 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 352 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 353 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 354 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 355 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 356 "data/maps/PetalburgCity/scripts.pory"

# 357 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer3:
# 358 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 359 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 360 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 361 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 362 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 363 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 364 "data/maps/PetalburgCity/scripts.pory"

# 365 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym0:
# 366 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 367 "data/maps/PetalburgCity/scripts.pory"
	walk_right
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
	walk_up
# 374 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 375 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 376 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 377 "data/maps/PetalburgCity/scripts.pory"

# 378 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym1:
# 379 "data/maps/PetalburgCity/scripts.pory"
	walk_down
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
	walk_right
# 387 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 388 "data/maps/PetalburgCity/scripts.pory"
	walk_up
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
PetalburgCity_Movement_BoyWalkToGym2:
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
	walk_right
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
PetalburgCity_Movement_BoyWalkToGym3:
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
	walk_up
# 417 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 418 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 419 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 420 "data/maps/PetalburgCity/scripts.pory"

# 421 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkAway:
# 422 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 423 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 424 "data/maps/PetalburgCity/scripts.pory"
	walk_left
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
	step_end
# 435 "data/maps/PetalburgCity/scripts.pory"

# 436 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym0:
# 437 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 438 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 439 "data/maps/PetalburgCity/scripts.pory"
	walk_right
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
	walk_up
# 446 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 447 "data/maps/PetalburgCity/scripts.pory"

# 448 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym1:
# 449 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 450 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 451 "data/maps/PetalburgCity/scripts.pory"
	walk_down
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
	walk_right
# 459 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 460 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 461 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 462 "data/maps/PetalburgCity/scripts.pory"

# 463 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym2:
# 464 "data/maps/PetalburgCity/scripts.pory"
	walk_up
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
	step_end
# 474 "data/maps/PetalburgCity/scripts.pory"

# 475 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym3:
# 476 "data/maps/PetalburgCity/scripts.pory"
	walk_up
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
	walk_right
# 483 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 484 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 485 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 486 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 487 "data/maps/PetalburgCity/scripts.pory"

# 488 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott0::
# 489 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 490 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_PETALBURG_SCOTT
# 491 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 0
# 492 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_PETALBURG_SCOTT, 13, 10
# 493 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 494 "data/maps/PetalburgCity/scripts.pory"
	end
# 495 "data/maps/PetalburgCity/scripts.pory"

# 496 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott1::
# 497 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 498 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_PETALBURG_SCOTT
# 499 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 1
# 500 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_PETALBURG_SCOTT, 13, 11
# 501 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 502 "data/maps/PetalburgCity/scripts.pory"
	end
# 503 "data/maps/PetalburgCity/scripts.pory"

# 504 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott2::
# 505 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 506 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_PETALBURG_SCOTT
# 507 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 2
# 508 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_PETALBURG_SCOTT, 13, 12
# 509 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 510 "data/maps/PetalburgCity/scripts.pory"
	end
# 511 "data/maps/PetalburgCity/scripts.pory"

# 512 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott3::
# 513 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 514 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_PETALBURG_SCOTT
# 515 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 3
# 516 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_PETALBURG_SCOTT, 13, 13
# 517 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 518 "data/maps/PetalburgCity/scripts.pory"
	end
# 519 "data/maps/PetalburgCity/scripts.pory"

# 520 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott::
# 521 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, Common_Movement_WalkLeft4
# 522 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 523 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 524 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, Common_Movement_ExclamationMark
# 525 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 526 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, Common_Movement_Delay48
# 527 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 528 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, Common_Movement_WalkLeft4
# 529 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 530 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 531 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 532 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_SCOTT_STATE, 1
# 533 "data/maps/PetalburgCity/scripts.pory"
	speakername (CommonText_Q)
# 534 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouATrainer, MSGBOX_DEFAULT
# 535 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 536 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, Common_Movement_WalkInPlaceFasterRight
# 537 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 538 "data/maps/PetalburgCity/scripts.pory"
	delay 30
# 539 "data/maps/PetalburgCity/scripts.pory"
	speakername (CommonText_Q)
# 540 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WellMaybeNot, MSGBOX_DEFAULT
# 541 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 542 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, Common_Movement_WalkInPlaceFasterLeft
# 543 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 544 "data/maps/PetalburgCity/scripts.pory"
	delay 30
# 545 "data/maps/PetalburgCity/scripts.pory"
	speakername (CommonText_Q)
# 546 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ImLookingForTalentedTrainers, MSGBOX_DEFAULT
# 547 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 548 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_ScottExit0
# 549 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_ScottExit1
# 550 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_ScottExit2
# 551 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_ScottExit3
# 552 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_SCOTT_PETALBURG_ENCOUNTER, 1
# 553 "data/maps/PetalburgCity/scripts.pory"
	removeobject LOCALID_PETALBURG_SCOTT
# 554 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 555 "data/maps/PetalburgCity/scripts.pory"
	end
# 556 "data/maps/PetalburgCity/scripts.pory"

# 557 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit0::
# 558 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit0
# 559 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, PetalburgCity_Movement_ScottExit0
# 560 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 561 "data/maps/PetalburgCity/scripts.pory"
	return
# 562 "data/maps/PetalburgCity/scripts.pory"

# 563 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit1::
# 564 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit1
# 565 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, PetalburgCity_Movement_BoyWalkAway
# 566 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 567 "data/maps/PetalburgCity/scripts.pory"
	return
# 568 "data/maps/PetalburgCity/scripts.pory"

# 569 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit2::
# 570 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit2
# 571 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, PetalburgCity_Movement_BoyWalkAway
# 572 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 573 "data/maps/PetalburgCity/scripts.pory"
	return
# 574 "data/maps/PetalburgCity/scripts.pory"

# 575 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit3::
# 576 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit3
# 577 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, PetalburgCity_Movement_ScottExit3
# 578 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 579 "data/maps/PetalburgCity/scripts.pory"
	return
# 580 "data/maps/PetalburgCity/scripts.pory"

# 581 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit0:
# 582 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 583 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 584 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 585 "data/maps/PetalburgCity/scripts.pory"
	walk_left
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
	step_end
# 596 "data/maps/PetalburgCity/scripts.pory"

# 597 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit0:
# 598 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 599 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 600 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 601 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 602 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 603 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 604 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 605 "data/maps/PetalburgCity/scripts.pory"

# 606 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit1:
# 607 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 608 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 609 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 610 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 611 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 612 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 613 "data/maps/PetalburgCity/scripts.pory"

# 614 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit2:
# 615 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 616 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
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
PetalburgCity_Movement_ScottExit3:
# 623 "data/maps/PetalburgCity/scripts.pory"
	walk_up
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
	step_end
# 636 "data/maps/PetalburgCity/scripts.pory"

# 637 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit3:
# 638 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 639 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 640 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 641 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 642 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 643 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 644 "data/maps/PetalburgCity/scripts.pory"

# 645 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_GymBoy::
# 646 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouRookieTrainer, MSGBOX_NPC
# 647 "data/maps/PetalburgCity/scripts.pory"
	end
# 648 "data/maps/PetalburgCity/scripts.pory"

# 649 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WhereIsWally:
# 650 "data/maps/PetalburgCity/scripts.pory"
	.string "Where has our Wally gone?\p"
# 651 "data/maps/PetalburgCity/scripts.pory"
	.string "We have to leave for Verdanturf Town\n"
# 652 "data/maps/PetalburgCity/scripts.pory"
	.string "very soon…$"
# 653 "data/maps/PetalburgCity/scripts.pory"

# 654 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_AreYouRookieTrainer:
# 655 "data/maps/PetalburgCity/scripts.pory"
	.string "Hiya! Are you maybe…\n"
# 656 "data/maps/PetalburgCity/scripts.pory"
	.string "A rookie Trainer?\p"
# 657 "data/maps/PetalburgCity/scripts.pory"
	.string "Do you know what Pokémon Trainers\n"
# 658 "data/maps/PetalburgCity/scripts.pory"
	.string "do when they reach a new town?\p"
# 659 "data/maps/PetalburgCity/scripts.pory"
	.string "They first check what kind of Gym\n"
# 660 "data/maps/PetalburgCity/scripts.pory"
	.string "is in the town.$"
# 661 "data/maps/PetalburgCity/scripts.pory"

# 662 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ThisIsPetalburgGym:
# 663 "data/maps/PetalburgCity/scripts.pory"
	.string "See? This is Petalburg City's Gym.$"
# 664 "data/maps/PetalburgCity/scripts.pory"

# 665 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ThisIsGymSign:
# 666 "data/maps/PetalburgCity/scripts.pory"
	.string "This is the Gym's sign. Look for it\n"
# 667 "data/maps/PetalburgCity/scripts.pory"
	.string "whenever you're looking for a Gym.$"
# 668 "data/maps/PetalburgCity/scripts.pory"

# 669 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WaterReflection:
# 670 "data/maps/PetalburgCity/scripts.pory"
	.string "My face is reflected in the water.\p"
# 671 "data/maps/PetalburgCity/scripts.pory"
	.string "It's a shining grin full of hope…\p"
# 672 "data/maps/PetalburgCity/scripts.pory"
	.string "Or it could be a look of somber silence\n"
# 673 "data/maps/PetalburgCity/scripts.pory"
	.string "struggling with fear…\p"
# 674 "data/maps/PetalburgCity/scripts.pory"
	.string "What do you see reflected in your face?$"
# 675 "data/maps/PetalburgCity/scripts.pory"

# 676 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_FullPartyExplanation:
# 677 "data/maps/PetalburgCity/scripts.pory"
	.string "Let's say you have six Pokémon.\n"
# 678 "data/maps/PetalburgCity/scripts.pory"
	.string "If you catch another one…\p"
# 679 "data/maps/PetalburgCity/scripts.pory"
	.string "It is automatically sent to a Storage\n"
# 680 "data/maps/PetalburgCity/scripts.pory"
	.string "Box over a PC connection.$"
# 681 "data/maps/PetalburgCity/scripts.pory"

# 682 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_GymSign:
# 683 "data/maps/PetalburgCity/scripts.pory"
	.string "Petalburg City Pokémon Gym\n"
# 684 "data/maps/PetalburgCity/scripts.pory"
	.string "Leader: Norman\l"
# 685 "data/maps/PetalburgCity/scripts.pory"
	.string "“A man in pursuit of power!”$"
# 686 "data/maps/PetalburgCity/scripts.pory"

# 687 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_CitySign:
# 688 "data/maps/PetalburgCity/scripts.pory"
	.string "Petalburg City\n"
# 689 "data/maps/PetalburgCity/scripts.pory"
	.string "“Where people mingle with nature.”$"
# 690 "data/maps/PetalburgCity/scripts.pory"

# 691 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WallyHouseSign:
# 692 "data/maps/PetalburgCity/scripts.pory"
	.string "Wally's House$"
# 693 "data/maps/PetalburgCity/scripts.pory"

# 694 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_AreYouATrainer:
# 695 "data/maps/PetalburgCity/scripts.pory"
	.string "Excuse me!\p"
# 696 "data/maps/PetalburgCity/scripts.pory"
	.string "Let me guess, from the way you're\n"
# 697 "data/maps/PetalburgCity/scripts.pory"
	.string "dressed, are you a Pokémon Trainer?$"
# 698 "data/maps/PetalburgCity/scripts.pory"

# 699 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WellMaybeNot:
# 700 "data/maps/PetalburgCity/scripts.pory"
	.string "… … … … … …\p"
# 701 "data/maps/PetalburgCity/scripts.pory"
	.string "Well, maybe not.\n"
# 702 "data/maps/PetalburgCity/scripts.pory"
	.string "Your clothes aren't all that dirty.\p"
# 703 "data/maps/PetalburgCity/scripts.pory"
	.string "You're either a rookie Trainer,\n"
# 704 "data/maps/PetalburgCity/scripts.pory"
	.string "or maybe you're just an ordinary kid.$"
# 705 "data/maps/PetalburgCity/scripts.pory"

# 706 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ImLookingForTalentedTrainers:
# 707 "data/maps/PetalburgCity/scripts.pory"
	.string "I'm roaming the land in search of\n"
# 708 "data/maps/PetalburgCity/scripts.pory"
	.string "talented Trainers.\p"
# 709 "data/maps/PetalburgCity/scripts.pory"
	.string "I'm sorry to have taken your time.$"

PetalburgCity_EventScript_Simulation::
# 713 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_Simulation_Text_0, MSGBOX_NPC
	return


PetalburgCity_EventScript_WallyBattle::
# 719 "data/maps/PetalburgCity/scripts.pory"
	lock
# 720 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 721 "data/maps/PetalburgCity/scripts.pory"
	speakername CommonText_Q
# 722 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_WallyBattle_Text_0
# 723 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 724 "data/maps/PetalburgCity/scripts.pory"
	playbgm MUS_DP_RIVAL, FALSE
# 725 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 726 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 727 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_PETALBURG_WALLY
# 728 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_PETALBURG_WALLY, 15, 12
# 729 "data/maps/PetalburgCity/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 730 "data/maps/PetalburgCity/scripts.pory"
	switch VAR_TEMP_0
# 731 "data/maps/PetalburgCity/scripts.pory"
	case 4, PetalburgCity_EventScript_WallyBattle_3
# 733 "data/maps/PetalburgCity/scripts.pory"
	case 5, PetalburgCity_EventScript_WallyBattle_4
# 735 "data/maps/PetalburgCity/scripts.pory"
	case 6, PetalburgCity_EventScript_WallyBattle_5
# 737 "data/maps/PetalburgCity/scripts.pory"
	case 7, PetalburgCity_EventScript_WallyBattle_6
PetalburgCity_EventScript_WallyBattle_1:
# 741 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 742 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_WALLY, Common_Movement_WalkInPlaceUp
# 743 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 744 "data/maps/PetalburgCity/scripts.pory"
	delay 50
# 745 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_WALLY, Common_Movement_WalkUp3
# 746 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 747 "data/maps/PetalburgCity/scripts.pory"
	speakername CommonText_Wally
# 748 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_WallyBattle_Text_1
# 755 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_SYS_SET_BATTLE_BGM
# 756 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_BATTLE_BGM, MUS_HG_VS_WILD
# 757 "data/maps/PetalburgCity/scripts.pory"
	trainerbattle_no_intro TRAINER_WALLY_PETALBURG, PetalburgCity_EventScript_WallyBattle_Text_2
# 758 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_WallyBattle_Text_3
# 763 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 764 "data/maps/PetalburgCity/scripts.pory"
	fadescreen FADE_TO_BLACK
# 765 "data/maps/PetalburgCity/scripts.pory"
	removeobject LOCALID_PETALBURG_WALLY
# 766 "data/maps/PetalburgCity/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 767 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 6
# 768 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 769 "data/maps/PetalburgCity/scripts.pory"
	fadedefaultbgm
# 770 "data/maps/PetalburgCity/scripts.pory"
	release
	return

PetalburgCity_EventScript_WallyBattle_3:
# 732 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_WALLY, Common_Movement_WalkLeft11
	goto PetalburgCity_EventScript_WallyBattle_1

PetalburgCity_EventScript_WallyBattle_4:
# 734 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_WALLY, Common_Movement_WalkLeft10
	goto PetalburgCity_EventScript_WallyBattle_1

PetalburgCity_EventScript_WallyBattle_5:
# 736 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_WALLY, Common_Movement_WalkLeft9
	goto PetalburgCity_EventScript_WallyBattle_1

PetalburgCity_EventScript_WallyBattle_6:
# 738 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_WALLY, Common_Movement_WalkLeft8
	goto PetalburgCity_EventScript_WallyBattle_1


PetalburgCity_EventScript_Simulation_Text_0:
# 713 "data/maps/PetalburgCity/scripts.pory"
	.string "I heard there's a realistic computer\n"
	.string "simulation out there.\p"
	.string "If you lose a Pokémon battle in it, you\n"
	.string "lose one in real life!\p"
	.string "That's just too scary.$"

PetalburgCity_EventScript_WallyBattle_Text_0:
# 722 "data/maps/PetalburgCity/scripts.pory"
	.string "{PLAYER}! Please wait!$"

PetalburgCity_EventScript_WallyBattle_Text_1:
# 748 "data/maps/PetalburgCity/scripts.pory"
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
# 757 "data/maps/PetalburgCity/scripts.pory"
	.string "Ah…\nI think I see now…$"

PetalburgCity_EventScript_WallyBattle_Text_3:
# 758 "data/maps/PetalburgCity/scripts.pory"
	.string "{PLAYER}, you're strong.\p"
	.string "You're really strong.\p"
	.string "Thank you for the battle.\n"
	.string "I have a long way to go, but I hope I can\l"
	.string "be up there on the stage with you some\l"
	.string "day.\p"
	.string "I'll be back, and I'll give you a\n"
	.string "challenge you won't forget!$"
