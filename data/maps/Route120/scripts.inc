# 1 "data/maps/Route120/scripts.pory"

# 2 "data/maps/Route120/scripts.pory"
.set LOCALID_BRIDGE_KECLEON, 30
# 3 "data/maps/Route120/scripts.pory"
.set LOCALID_STEVEN, 31
# 4 "data/maps/Route120/scripts.pory"
.set LOCALID_BRIDGE_KECLEON_SHADOW, 36  @ They use a second object which is identical to Kecleon but has a reflection palette tag for the bridge shadow
# 5 "data/maps/Route120/scripts.pory"

# 6 "data/maps/Route120/scripts.pory"
Route120_MapScripts::
# 7 "data/maps/Route120/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route120_OnResume
# 8 "data/maps/Route120/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route120_OnTransition
# 9 "data/maps/Route120/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route120_OnLoad
# 10 "data/maps/Route120/scripts.pory"
	.byte 0
# 11 "data/maps/Route120/scripts.pory"

# 12 "data/maps/Route120/scripts.pory"
Route120_OnResume:
# 13 "data/maps/Route120/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, Route120_EventScript_RemoveKecleonObject
# 14 "data/maps/Route120/scripts.pory"
	end
# 15 "data/maps/Route120/scripts.pory"

# 16 "data/maps/Route120/scripts.pory"
Route120_EventScript_RemoveKecleonObject::
# 17 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_0x8009, 0, Route120_EventScript_RemoveBridgeKecleon
# 18 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_0x8009, 1, Route120_EventScript_RemoveKecleon
# 19 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_0x8009, 2, Route120_EventScript_RemoveKecleon
# 20 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_0x8009, 3, Route120_EventScript_RemoveKecleon
# 21 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_0x8009, 4, Route120_EventScript_RemoveKecleon
# 22 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_0x8009, 5, Route120_EventScript_RemoveKecleon
# 23 "data/maps/Route120/scripts.pory"
	return
# 24 "data/maps/Route120/scripts.pory"

# 25 "data/maps/Route120/scripts.pory"
Route120_EventScript_RemoveBridgeKecleon::
# 26 "data/maps/Route120/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 27 "data/maps/Route120/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
# 28 "data/maps/Route120/scripts.pory"
	removeobject LOCALID_BRIDGE_KECLEON
# 29 "data/maps/Route120/scripts.pory"
	removeobject LOCALID_BRIDGE_KECLEON_SHADOW
# 30 "data/maps/Route120/scripts.pory"
	return
# 31 "data/maps/Route120/scripts.pory"

# 32 "data/maps/Route120/scripts.pory"
Route120_EventScript_RemoveKecleon::
# 33 "data/maps/Route120/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 34 "data/maps/Route120/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
# 35 "data/maps/Route120/scripts.pory"
	removeobject VAR_LAST_TALKED
# 36 "data/maps/Route120/scripts.pory"
	return
# 37 "data/maps/Route120/scripts.pory"

# 38 "data/maps/Route120/scripts.pory"
Route120_OnLoad:
# 39 "data/maps/Route120/scripts.pory"
	call_if_unset FLAG_REGI_DOORS_OPENED, Route120_EventScript_CloseAncientTomb
# 40 "data/maps/Route120/scripts.pory"
	call_if_set FLAG_RECEIVED_DEVON_SCOPE, Route120_EventScript_SetBridgeClearMetatiles
# 41 "data/maps/Route120/scripts.pory"
	call_if_unset FLAG_RECEIVED_DEVON_SCOPE, Route120_EventScript_SetBridgeKecleonMovement
# 42 "data/maps/Route120/scripts.pory"
	end
# 43 "data/maps/Route120/scripts.pory"

# 44 "data/maps/Route120/scripts.pory"
Route120_EventScript_CloseAncientTomb::
# 45 "data/maps/Route120/scripts.pory"
	setmetatile 7, 54, METATILE_General_RockWall_RockBase, TRUE
# 46 "data/maps/Route120/scripts.pory"
	setmetatile 7, 55, METATILE_General_RockWall_SandBase, TRUE
# 47 "data/maps/Route120/scripts.pory"
	return
# 48 "data/maps/Route120/scripts.pory"

# 49 "data/maps/Route120/scripts.pory"
Route120_EventScript_SetBridgeClearMetatiles::
# 50 "data/maps/Route120/scripts.pory"
	setmetatile 13, 15, METATILE_Fortree_WoodBridge1_Top, FALSE
# 51 "data/maps/Route120/scripts.pory"
	setmetatile 12, 16, METATILE_Fortree_WoodBridge1_Bottom, FALSE
# 52 "data/maps/Route120/scripts.pory"
	setmetatile 12, 17, METATILE_General_ReflectiveWater, FALSE
# 53 "data/maps/Route120/scripts.pory"
	setmetatile 13, 17, METATILE_General_ReflectiveWater, FALSE
# 54 "data/maps/Route120/scripts.pory"
	return
# 55 "data/maps/Route120/scripts.pory"

# 56 "data/maps/Route120/scripts.pory"
Route120_EventScript_SetBridgeKecleonMovement::
# 57 "data/maps/Route120/scripts.pory"
	setobjectmovementtype LOCALID_BRIDGE_KECLEON_SHADOW, MOVEMENT_TYPE_FACE_RIGHT
# 58 "data/maps/Route120/scripts.pory"
	return
# 59 "data/maps/Route120/scripts.pory"

# 60 "data/maps/Route120/scripts.pory"
Route120_OnTransition:
# 61 "data/maps/Route120/scripts.pory"
	call GabbyAndTy_EventScript_UpdateLocation
# 62 "data/maps/Route120/scripts.pory"
	call Route120_EventScript_SetWeather
# 63 "data/maps/Route120/scripts.pory"
	call Common_EventScript_SetupEmRivalGfxId
# 64 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_ROUTE120_STATE, 1, Route120_EventScript_HideRival
# 65 "data/maps/Route120/scripts.pory"
	end
# 66 "data/maps/Route120/scripts.pory"

# 67 "data/maps/Route120/scripts.pory"
Route120_EventScript_SetWeather::
# 68 "data/maps/Route120/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 69 "data/maps/Route120/scripts.pory"
	goto_if_le VAR_TEMP_1, 14, Route120_EventScript_SetSunnyWeather
# 70 "data/maps/Route120/scripts.pory"
	goto_if_le VAR_TEMP_1, 60, Route120_EventScript_TrySetRainyWeather
# 71 "data/maps/Route120/scripts.pory"
	goto_if_ge VAR_TEMP_1, 61, Route120_EventScript_SetCloudyWeather
# 72 "data/maps/Route120/scripts.pory"
	return
# 73 "data/maps/Route120/scripts.pory"

# 74 "data/maps/Route120/scripts.pory"
Route120_EventScript_SetCloudyWeather::
# 75 "data/maps/Route120/scripts.pory"
	setweather WEATHER_SUNNY_CLOUDS
# 76 "data/maps/Route120/scripts.pory"
	return
# 77 "data/maps/Route120/scripts.pory"

# 78 "data/maps/Route120/scripts.pory"
Route120_EventScript_SetSunnyWeather::
# 79 "data/maps/Route120/scripts.pory"
	setweather WEATHER_SUNNY
# 80 "data/maps/Route120/scripts.pory"
	return
# 81 "data/maps/Route120/scripts.pory"

# 82 "data/maps/Route120/scripts.pory"
Route120_EventScript_TrySetRainyWeather::
# 83 "data/maps/Route120/scripts.pory"
	goto_if_le VAR_TEMP_0, 7, Route120_EventScript_SetRainyWeather
# 84 "data/maps/Route120/scripts.pory"
	goto_if_le VAR_TEMP_0, 19, Route120_EventScript_SetSunnyWeather
# 85 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_SetRainyWeather
# 86 "data/maps/Route120/scripts.pory"
	end
# 87 "data/maps/Route120/scripts.pory"

# 88 "data/maps/Route120/scripts.pory"
Route120_EventScript_SetRainyWeather::
# 89 "data/maps/Route120/scripts.pory"
	setweather WEATHER_RAIN
# 90 "data/maps/Route120/scripts.pory"
	return
# 91 "data/maps/Route120/scripts.pory"
	
# 92 "data/maps/Route120/scripts.pory"
Route120_EventScript_HideRival:
# 93 "data/maps/Route120/scripts.pory"
	setflag FLAG_TEMP_2
# 94 "data/maps/Route120/scripts.pory"
	return
# 95 "data/maps/Route120/scripts.pory"
	
# 96 "data/maps/Route120/scripts.pory"
Route120_EventScript_BerryBeauty::
# 97 "data/maps/Route120/scripts.pory"
	lock
# 98 "data/maps/Route120/scripts.pory"
	faceplayer
# 99 "data/maps/Route120/scripts.pory"
	dotimebasedevents
# 100 "data/maps/Route120/scripts.pory"
	goto_if_set FLAG_DAILY_ROUTE_120_RECEIVED_BERRY, Route120_EventScript_ReceivedBerry
# 101 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_BerriesExpressionOfLoveIsntIt, MSGBOX_YESNO
# 102 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_RESULT, YES, Route120_EventScript_BerryLove
# 103 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_RESULT, NO, Route120_EventScript_BerryNotLove
# 104 "data/maps/Route120/scripts.pory"
	specialvar VAR_RESULT, GetPlayerTrainerIdOnesDigit
# 105 "data/maps/Route120/scripts.pory"
	switch VAR_RESULT
# 106 "data/maps/Route120/scripts.pory"
	case 0, Route120_EventScript_GiveFigyBerry
# 107 "data/maps/Route120/scripts.pory"
	case 5, Route120_EventScript_GiveFigyBerry
# 108 "data/maps/Route120/scripts.pory"
	case 1, Route120_EventScript_GiveWikiBerry
# 109 "data/maps/Route120/scripts.pory"
	case 6, Route120_EventScript_GiveWikiBerry
# 110 "data/maps/Route120/scripts.pory"
	case 2, Route120_EventScript_GiveMagoBerry
# 111 "data/maps/Route120/scripts.pory"
	case 7, Route120_EventScript_GiveMagoBerry
# 112 "data/maps/Route120/scripts.pory"
	case 3, Route120_EventScript_GiveAguavBerry
# 113 "data/maps/Route120/scripts.pory"
	case 8, Route120_EventScript_GiveAguavBerry
# 114 "data/maps/Route120/scripts.pory"
	case 4, Route120_EventScript_GiveIapapaBerry
# 115 "data/maps/Route120/scripts.pory"
	case 9, Route120_EventScript_GiveIapapaBerry
# 116 "data/maps/Route120/scripts.pory"
	end
# 117 "data/maps/Route120/scripts.pory"

# 118 "data/maps/Route120/scripts.pory"
Route120_EventScript_GiveFigyBerry::
# 119 "data/maps/Route120/scripts.pory"
	setvar VAR_0x8004, ITEM_FIGY_BERRY
# 120 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_GiveBerry
# 121 "data/maps/Route120/scripts.pory"
	end
# 122 "data/maps/Route120/scripts.pory"

# 123 "data/maps/Route120/scripts.pory"
Route120_EventScript_GiveWikiBerry::
# 124 "data/maps/Route120/scripts.pory"
	setvar VAR_0x8004, ITEM_WIKI_BERRY
# 125 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_GiveBerry
# 126 "data/maps/Route120/scripts.pory"
	end
# 127 "data/maps/Route120/scripts.pory"

# 128 "data/maps/Route120/scripts.pory"
Route120_EventScript_GiveMagoBerry::
# 129 "data/maps/Route120/scripts.pory"
	setvar VAR_0x8004, ITEM_MAGO_BERRY
# 130 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_GiveBerry
# 131 "data/maps/Route120/scripts.pory"
	end
# 132 "data/maps/Route120/scripts.pory"

# 133 "data/maps/Route120/scripts.pory"
Route120_EventScript_GiveAguavBerry::
# 134 "data/maps/Route120/scripts.pory"
	setvar VAR_0x8004, ITEM_AGUAV_BERRY
# 135 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_GiveBerry
# 136 "data/maps/Route120/scripts.pory"
	end
# 137 "data/maps/Route120/scripts.pory"

# 138 "data/maps/Route120/scripts.pory"
Route120_EventScript_GiveIapapaBerry::
# 139 "data/maps/Route120/scripts.pory"
	setvar VAR_0x8004, ITEM_IAPAPA_BERRY
# 140 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_GiveBerry
# 141 "data/maps/Route120/scripts.pory"
	end
# 142 "data/maps/Route120/scripts.pory"

# 143 "data/maps/Route120/scripts.pory"
Route120_EventScript_GiveBerry::
# 144 "data/maps/Route120/scripts.pory"
	giveitem VAR_0x8004
# 145 "data/maps/Route120/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 146 "data/maps/Route120/scripts.pory"
	setflag FLAG_DAILY_ROUTE_120_RECEIVED_BERRY
# 147 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_BerryIsRareRaiseItWithCare, MSGBOX_DEFAULT
# 148 "data/maps/Route120/scripts.pory"
	release
# 149 "data/maps/Route120/scripts.pory"
	end
# 150 "data/maps/Route120/scripts.pory"

# 151 "data/maps/Route120/scripts.pory"
Route120_EventScript_ReceivedBerry::
# 152 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_IllGetMoreBerriesFromBerryMaster, MSGBOX_DEFAULT
# 153 "data/maps/Route120/scripts.pory"
	release
# 154 "data/maps/Route120/scripts.pory"
	end
# 155 "data/maps/Route120/scripts.pory"

# 156 "data/maps/Route120/scripts.pory"
Route120_EventScript_BerryLove::
# 157 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_YesYouUnderstand, MSGBOX_DEFAULT
# 158 "data/maps/Route120/scripts.pory"
	return
# 159 "data/maps/Route120/scripts.pory"

# 160 "data/maps/Route120/scripts.pory"
Route120_EventScript_BerryNotLove::
# 161 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_MakeYourOwnImpressions, MSGBOX_DEFAULT
# 162 "data/maps/Route120/scripts.pory"
	return
# 163 "data/maps/Route120/scripts.pory"

# 164 "data/maps/Route120/scripts.pory"
Route120_EventScript_Steven::
# 165 "data/maps/Route120/scripts.pory"
	lock
# 166 "data/maps/Route120/scripts.pory"
	faceplayer
# 167 "data/maps/Route120/scripts.pory"
	goto_if_set FLAG_NOT_READY_FOR_BATTLE_ROUTE_120, Route120_EventScript_StevenAskReadyForBattle
# 168 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenGreeting, MSGBOX_YESNO
# 169 "data/maps/Route120/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route120_EventScript_StevenNotReady
# 170 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_StevenBattleKecleon
# 171 "data/maps/Route120/scripts.pory"
	end
# 172 "data/maps/Route120/scripts.pory"

# 173 "data/maps/Route120/scripts.pory"
Route120_EventScript_StevenNotReady::
# 174 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenIllWaitHere, MSGBOX_DEFAULT
# 175 "data/maps/Route120/scripts.pory"
	setflag FLAG_NOT_READY_FOR_BATTLE_ROUTE_120
# 176 "data/maps/Route120/scripts.pory"
	release
# 177 "data/maps/Route120/scripts.pory"
	end
# 178 "data/maps/Route120/scripts.pory"

# 179 "data/maps/Route120/scripts.pory"
Route120_EventScript_StevenAskReadyForBattle::
# 180 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenReadyForBattle, MSGBOX_YESNO
# 181 "data/maps/Route120/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route120_EventScript_StevenNotReady
# 182 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_StevenBattleKecleon
# 183 "data/maps/Route120/scripts.pory"
	end
# 184 "data/maps/Route120/scripts.pory"

# 185 "data/maps/Route120/scripts.pory"
Route120_EventScript_StevenBattleKecleon::
# 186 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenShowMeYourPower, MSGBOX_DEFAULT
# 187 "data/maps/Route120/scripts.pory"
	closemessage
# 188 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, Route120_EventScript_PlayerApproachKecleonNorth
# 189 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, Route120_EventScript_PlayerApproachKecleonWest
# 190 "data/maps/Route120/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceFasterLeft
# 191 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 192 "data/maps/Route120/scripts.pory"
	delay 20
# 193 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenUsedDevonScope, MSGBOX_DEFAULT
# 194 "data/maps/Route120/scripts.pory"
	closemessage
# 195 "data/maps/Route120/scripts.pory"
	applymovement LOCALID_BRIDGE_KECLEON, Common_Movement_WalkInPlaceFasterRight
# 196 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 197 "data/maps/Route120/scripts.pory"
	applymovement LOCALID_BRIDGE_KECLEON, Movement_KecleonAppears
# 198 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 199 "data/maps/Route120/scripts.pory"
	waitse
# 200 "data/maps/Route120/scripts.pory"
	playmoncry SPECIES_KECLEON, CRY_MODE_ENCOUNTER
# 201 "data/maps/Route120/scripts.pory"
	delay 40
# 202 "data/maps/Route120/scripts.pory"
	waitmoncry
# 203 "data/maps/Route120/scripts.pory"
	setwildbattle SPECIES_KECLEON, 30
# 204 "data/maps/Route120/scripts.pory"
	setvar VAR_0x8009, 0
# 205 "data/maps/Route120/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 206 "data/maps/Route120/scripts.pory"
	dowildbattle
# 207 "data/maps/Route120/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 208 "data/maps/Route120/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 209 "data/maps/Route120/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, Route120_EventScript_RemoveBridgeKecleonPostBattle
# 210 "data/maps/Route120/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, Route120_EventScript_RemoveBridgeKecleonPostBattle
# 211 "data/maps/Route120/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, Route120_EventScript_RemoveBridgeKecleonPostBattle
# 212 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_StevenGiveDeconScope
# 213 "data/maps/Route120/scripts.pory"
	end
# 214 "data/maps/Route120/scripts.pory"

# 215 "data/maps/Route120/scripts.pory"
Route120_EventScript_RemoveBridgeKecleonPostBattle::
# 216 "data/maps/Route120/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 217 "data/maps/Route120/scripts.pory"
	removeobject LOCALID_BRIDGE_KECLEON
# 218 "data/maps/Route120/scripts.pory"
	removeobject LOCALID_BRIDGE_KECLEON_SHADOW
# 219 "data/maps/Route120/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 220 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_StevenGiveDeconScope
# 221 "data/maps/Route120/scripts.pory"
	end
# 222 "data/maps/Route120/scripts.pory"

# 223 "data/maps/Route120/scripts.pory"
Route120_EventScript_StevenGiveDeconScope::
# 224 "data/maps/Route120/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceFasterDown
# 225 "data/maps/Route120/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 226 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 227 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenGiveDevonScope, MSGBOX_DEFAULT
# 228 "data/maps/Route120/scripts.pory"
	giveitem ITEM_DEVON_SCOPE
# 229 "data/maps/Route120/scripts.pory"
	setflag FLAG_RECEIVED_DEVON_SCOPE
# 230 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenGoodbye, MSGBOX_DEFAULT
# 231 "data/maps/Route120/scripts.pory"
	closemessage
# 232 "data/maps/Route120/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceFasterDown
# 233 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 234 "data/maps/Route120/scripts.pory"
	delay 50
# 235 "data/maps/Route120/scripts.pory"
	setfieldeffectargument 0, 1
# 236 "data/maps/Route120/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 237 "data/maps/Route120/scripts.pory"
	delay 15
# 238 "data/maps/Route120/scripts.pory"
	removeobject LOCALID_STEVEN
# 239 "data/maps/Route120/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 240 "data/maps/Route120/scripts.pory"
	setmetatile 13, 15, METATILE_Fortree_WoodBridge1_Top, FALSE
# 241 "data/maps/Route120/scripts.pory"
	setmetatile 12, 16, METATILE_Fortree_WoodBridge1_Bottom, FALSE
# 242 "data/maps/Route120/scripts.pory"
	setmetatile 12, 17, METATILE_General_ReflectiveWater, FALSE
# 243 "data/maps/Route120/scripts.pory"
	setmetatile 13, 17, METATILE_General_ReflectiveWater, FALSE
# 244 "data/maps/Route120/scripts.pory"
	special DrawWholeMapView
# 245 "data/maps/Route120/scripts.pory"
	release
# 246 "data/maps/Route120/scripts.pory"
	end
# 247 "data/maps/Route120/scripts.pory"

# 248 "data/maps/Route120/scripts.pory"
Route120_EventScript_PlayerApproachKecleonNorth::
# 249 "data/maps/Route120/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 250 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 251 "data/maps/Route120/scripts.pory"
	return
# 252 "data/maps/Route120/scripts.pory"

# 253 "data/maps/Route120/scripts.pory"
Route120_EventScript_PlayerApproachKecleonWest::
# 254 "data/maps/Route120/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route120_Movement_ApproachKecleonWest
# 255 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 256 "data/maps/Route120/scripts.pory"
	return
# 257 "data/maps/Route120/scripts.pory"

# 258 "data/maps/Route120/scripts.pory"
Route120_Movement_ApproachKecleonWest:
# 259 "data/maps/Route120/scripts.pory"
	walk_down
# 260 "data/maps/Route120/scripts.pory"
	walk_left
# 261 "data/maps/Route120/scripts.pory"
	step_end
# 262 "data/maps/Route120/scripts.pory"

# 263 "data/maps/Route120/scripts.pory"
Route120_EventScript_BridgeKecleon::
# 264 "data/maps/Route120/scripts.pory"
	msgbox Kecleon_Text_SomethingUnseeable, MSGBOX_NPC
# 265 "data/maps/Route120/scripts.pory"
	end
# 266 "data/maps/Route120/scripts.pory"

# 267 "data/maps/Route120/scripts.pory"
Route120_EventScript_RouteSignFortree::
# 268 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_RouteSignFortree, MSGBOX_SIGN
# 269 "data/maps/Route120/scripts.pory"
	end
# 270 "data/maps/Route120/scripts.pory"

# 271 "data/maps/Route120/scripts.pory"
Route120_EventScript_RouteSign121::
# 272 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_RouteSign121, MSGBOX_SIGN
# 273 "data/maps/Route120/scripts.pory"
	end
# 274 "data/maps/Route120/scripts.pory"

# 275 "data/maps/Route120/scripts.pory"
Route120_EventScript_Colin::
# 276 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_COLIN, Route120_Text_ColinIntro, Route120_Text_ColinDefeat
# 277 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_ColinPostBattle, MSGBOX_AUTOCLOSE
# 278 "data/maps/Route120/scripts.pory"
	end
# 279 "data/maps/Route120/scripts.pory"

# 280 "data/maps/Route120/scripts.pory"
Route120_EventScript_Robert::
# 281 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_ROBERT_1, Route120_Text_RobertIntro, Route120_Text_RobertDefeat, Route120_EventScript_RegisterRobert
# 282 "data/maps/Route120/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 283 "data/maps/Route120/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route120_EventScript_RematchRobert
# 284 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_RobertPostBattle, MSGBOX_DEFAULT
# 285 "data/maps/Route120/scripts.pory"
	release
# 286 "data/maps/Route120/scripts.pory"
	end
# 287 "data/maps/Route120/scripts.pory"

# 288 "data/maps/Route120/scripts.pory"
Route120_EventScript_RegisterRobert::
# 289 "data/maps/Route120/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 290 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 291 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_RobertRegister, MSGBOX_DEFAULT
# 292 "data/maps/Route120/scripts.pory"
	register_matchcall TRAINER_ROBERT_1
# 293 "data/maps/Route120/scripts.pory"
	release
# 294 "data/maps/Route120/scripts.pory"
	end
# 295 "data/maps/Route120/scripts.pory"

# 296 "data/maps/Route120/scripts.pory"
Route120_EventScript_RematchRobert::
# 297 "data/maps/Route120/scripts.pory"
	trainerbattle_rematch TRAINER_ROBERT_1, Route120_Text_RobertRematchIntro, Route120_Text_RobertRematchDefeat
# 298 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_RobertPostRematch, MSGBOX_AUTOCLOSE
# 299 "data/maps/Route120/scripts.pory"
	end
# 300 "data/maps/Route120/scripts.pory"

# 301 "data/maps/Route120/scripts.pory"
Route120_EventScript_Lorenzo::
# 302 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_LORENZO, Route120_Text_LorenzoIntro, Route120_Text_LorenzoDefeat
# 303 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_LorenzoPostBattle, MSGBOX_AUTOCLOSE
# 304 "data/maps/Route120/scripts.pory"
	end
# 305 "data/maps/Route120/scripts.pory"

# 306 "data/maps/Route120/scripts.pory"
Route120_EventScript_Jenna::
# 307 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_JENNA, Route120_Text_JennaIntro, Route120_Text_JennaDefeat
# 308 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_JennaPostBattle, MSGBOX_AUTOCLOSE
# 309 "data/maps/Route120/scripts.pory"
	end
# 310 "data/maps/Route120/scripts.pory"

# 311 "data/maps/Route120/scripts.pory"
Route120_EventScript_Jeffrey::
# 312 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_JEFFREY_1, Route120_Text_JeffreyIntro, Route120_Text_JeffreyDefeat, Route120_EventScript_RegisterJeffrey
# 313 "data/maps/Route120/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 314 "data/maps/Route120/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route120_EventScript_RematchJeffrey
# 315 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_JeffreyPostBattle, MSGBOX_DEFAULT
# 316 "data/maps/Route120/scripts.pory"
	release
# 317 "data/maps/Route120/scripts.pory"
	end
# 318 "data/maps/Route120/scripts.pory"

# 319 "data/maps/Route120/scripts.pory"
Route120_EventScript_RegisterJeffrey::
# 320 "data/maps/Route120/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 321 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 322 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_JeffreyRegister, MSGBOX_DEFAULT
# 323 "data/maps/Route120/scripts.pory"
	register_matchcall TRAINER_JEFFREY_1
# 324 "data/maps/Route120/scripts.pory"
	release
# 325 "data/maps/Route120/scripts.pory"
	end
# 326 "data/maps/Route120/scripts.pory"

# 327 "data/maps/Route120/scripts.pory"
Route120_EventScript_RematchJeffrey::
# 328 "data/maps/Route120/scripts.pory"
	trainerbattle_rematch TRAINER_JEFFREY_1, Route120_Text_JeffreyRematchIntro, Route120_Text_JeffreyRematchDefeat
# 329 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_JeffreyPostRematch, MSGBOX_AUTOCLOSE
# 330 "data/maps/Route120/scripts.pory"
	end
# 331 "data/maps/Route120/scripts.pory"

# 332 "data/maps/Route120/scripts.pory"
Route120_EventScript_Jennifer::
# 333 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_JENNIFER, Route120_Text_JenniferIntro, Route120_Text_JenniferDefeat
# 334 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_JenniferPostBattle, MSGBOX_AUTOCLOSE
# 335 "data/maps/Route120/scripts.pory"
	end
# 336 "data/maps/Route120/scripts.pory"

# 337 "data/maps/Route120/scripts.pory"
Route120_EventScript_Chip::
# 338 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_CHIP, Route120_Text_ChipIntro, Route120_Text_ChipDefeat
# 339 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_ChipPostBattle, MSGBOX_AUTOCLOSE
# 340 "data/maps/Route120/scripts.pory"
	end
# 341 "data/maps/Route120/scripts.pory"

# 342 "data/maps/Route120/scripts.pory"
Route120_EventScript_Clarissa::
# 343 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_CLARISSA, Route120_Text_ClarissaIntro, Route120_Text_ClarissaDefeat
# 344 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_ClarissaPostBattle, MSGBOX_AUTOCLOSE
# 345 "data/maps/Route120/scripts.pory"
	end
# 346 "data/maps/Route120/scripts.pory"

# 347 "data/maps/Route120/scripts.pory"
Route120_EventScript_Angelica::
# 348 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_ANGELICA, Route120_Text_AngelicaIntro, Route120_Text_AngelicaDefeat
# 349 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_AngelicaPostBattle, MSGBOX_AUTOCLOSE
# 350 "data/maps/Route120/scripts.pory"
	end
# 351 "data/maps/Route120/scripts.pory"

# 352 "data/maps/Route120/scripts.pory"
Route120_EventScript_Keigo::
# 353 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_KEIGO, Route120_Text_KeigoIntro, Route120_Text_KeigoDefeat
# 354 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_KeigoPostBattle, MSGBOX_AUTOCLOSE
# 355 "data/maps/Route120/scripts.pory"
	end
# 356 "data/maps/Route120/scripts.pory"

# 357 "data/maps/Route120/scripts.pory"
Route120_EventScript_Riley::
# 358 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_RILEY, Route120_Text_RileyIntro, Route120_Text_RileyDefeat
# 359 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_RileyPostBattle, MSGBOX_AUTOCLOSE
# 360 "data/maps/Route120/scripts.pory"
	end
# 361 "data/maps/Route120/scripts.pory"

# 362 "data/maps/Route120/scripts.pory"
Route120_EventScript_Leonel::
# 363 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_LEONEL, Route120_Text_LeonelIntro, Route120_Text_LeonelDefeat
# 364 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_LeonelPostBattle, MSGBOX_AUTOCLOSE
# 365 "data/maps/Route120/scripts.pory"
	end
# 366 "data/maps/Route120/scripts.pory"

# 367 "data/maps/Route120/scripts.pory"
Route120_EventScript_Callie::
# 368 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_CALLIE, Route120_Text_CallieIntro, Route120_Text_CallieDefeat
# 369 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_CalliePostBattle, MSGBOX_AUTOCLOSE
# 370 "data/maps/Route120/scripts.pory"
	end
# 371 "data/maps/Route120/scripts.pory"

# 372 "data/maps/Route120/scripts.pory"
Route120_Text_StevenGreeting:
# 373 "data/maps/Route120/scripts.pory"
	.string "Steven: Hm? {PLAYER}{KUN}, hi.\n"
# 374 "data/maps/Route120/scripts.pory"
	.string "It's been a while.\p"
# 375 "data/maps/Route120/scripts.pory"
	.string "There's something here that you can't\n"
# 376 "data/maps/Route120/scripts.pory"
	.string "see, right?\p"
# 377 "data/maps/Route120/scripts.pory"
	.string "Now, if I were to use this device on\n"
# 378 "data/maps/Route120/scripts.pory"
	.string "the invisible obstacle…\p"
# 379 "data/maps/Route120/scripts.pory"
	.string "No, no. Rather than describing it,\n"
# 380 "data/maps/Route120/scripts.pory"
	.string "I should just show you.\l"
# 381 "data/maps/Route120/scripts.pory"
	.string "That would be more fun.\p"
# 382 "data/maps/Route120/scripts.pory"
	.string "{PLAYER}{KUN}, are your Pokémon ready for\n"
# 383 "data/maps/Route120/scripts.pory"
	.string "battle?$"
# 384 "data/maps/Route120/scripts.pory"

# 385 "data/maps/Route120/scripts.pory"
Route120_Text_StevenIllWaitHere:
# 386 "data/maps/Route120/scripts.pory"
	.string "Steven: No?\p"
# 387 "data/maps/Route120/scripts.pory"
	.string "I'll wait here, so you can get ready.$"
# 388 "data/maps/Route120/scripts.pory"

# 389 "data/maps/Route120/scripts.pory"
Route120_Text_StevenReadyForBattle:
# 390 "data/maps/Route120/scripts.pory"
	.string "Steven: {PLAYER}{KUN}, are your Pokémon\n"
# 391 "data/maps/Route120/scripts.pory"
	.string "ready for battle?$"
# 392 "data/maps/Route120/scripts.pory"

# 393 "data/maps/Route120/scripts.pory"
Route120_Text_StevenShowMeYourPower:
# 394 "data/maps/Route120/scripts.pory"
	.string "Steven: {PLAYER}{KUN}, show me your true\n"
# 395 "data/maps/Route120/scripts.pory"
	.string "power as a Trainer!$"
# 396 "data/maps/Route120/scripts.pory"

# 397 "data/maps/Route120/scripts.pory"
Route120_Text_StevenUsedDevonScope:
# 398 "data/maps/Route120/scripts.pory"
	.string "Steven used the Devon Scope.\p"
# 399 "data/maps/Route120/scripts.pory"
	.string "An invisible Pokémon became completely\n"
# 400 "data/maps/Route120/scripts.pory"
	.string "visible!\p"
# 401 "data/maps/Route120/scripts.pory"
	.string "The startled Pokémon attacked!$"
# 402 "data/maps/Route120/scripts.pory"

# 403 "data/maps/Route120/scripts.pory"
Route120_Text_StevenGiveDevonScope:
# 404 "data/maps/Route120/scripts.pory"
	.string "Steven: I see…\n"
# 405 "data/maps/Route120/scripts.pory"
	.string "Your battle style is intriguing.\p"
# 406 "data/maps/Route120/scripts.pory"
	.string "Your Pokémon have obviously grown\n"
# 407 "data/maps/Route120/scripts.pory"
	.string "since I first met you in Dewford.\p"
# 408 "data/maps/Route120/scripts.pory"
	.string "I'd like you to have this\n"
# 409 "data/maps/Route120/scripts.pory"
	.string "Devon Scope.\p"
# 410 "data/maps/Route120/scripts.pory"
	.string "Who knows, there may be other\n"
# 411 "data/maps/Route120/scripts.pory"
	.string "concealed Pokémon.$"
# 412 "data/maps/Route120/scripts.pory"

# 413 "data/maps/Route120/scripts.pory"
Route120_Text_StevenGoodbye:
# 414 "data/maps/Route120/scripts.pory"
	.string "Steven: {PLAYER}{KUN}.\p"
# 415 "data/maps/Route120/scripts.pory"
	.string "I enjoy seeing Pokémon and Trainers\n"
# 416 "data/maps/Route120/scripts.pory"
	.string "who strive together.\p"
# 417 "data/maps/Route120/scripts.pory"
	.string "I think you're doing great.\p"
# 418 "data/maps/Route120/scripts.pory"
	.string "Well, let's meet again somewhere.$"
# 419 "data/maps/Route120/scripts.pory"

# 420 "data/maps/Route120/scripts.pory"
Kecleon_Text_SomethingUnseeable:
# 421 "data/maps/Route120/scripts.pory"
	.string "Something unseeable is in the way.$"
# 422 "data/maps/Route120/scripts.pory"

# 423 "data/maps/Route120/scripts.pory"
Kecleon_Text_WantToUseDevonScope:
# 424 "data/maps/Route120/scripts.pory"
	.string "Something unseeable is in the way.\p"
# 425 "data/maps/Route120/scripts.pory"
	.string "Want to use the Devon Scope?$"
# 426 "data/maps/Route120/scripts.pory"

# 427 "data/maps/Route120/scripts.pory"
Kecleon_Text_UseDevonScopeMonAttacked:
# 428 "data/maps/Route120/scripts.pory"
	.string "{PLAYER} used the Devon Scope.\p"
# 429 "data/maps/Route120/scripts.pory"
	.string "An invisible Pokémon became completely\n"
# 430 "data/maps/Route120/scripts.pory"
	.string "visible!\p"
# 431 "data/maps/Route120/scripts.pory"
	.string "The startled Pokémon attacked!$"
# 432 "data/maps/Route120/scripts.pory"

# 433 "data/maps/Route120/scripts.pory"
Route120_Text_RouteSignFortree:
# 434 "data/maps/Route120/scripts.pory"
	.string "Route 120\n"
# 435 "data/maps/Route120/scripts.pory"
	.string "{LEFT_ARROW} Fortree City$"
# 436 "data/maps/Route120/scripts.pory"

# 437 "data/maps/Route120/scripts.pory"
Route120_Text_RouteSign121:
# 438 "data/maps/Route120/scripts.pory"
	.string "{RIGHT_ARROW} Route 121\n"
# 439 "data/maps/Route120/scripts.pory"
	.string "{LEFT_ARROW} Route 120$"

RealmsFrayIntroEvent::
# 445 "data/maps/Route120/scripts.pory"
	lock
# 446 "data/maps/Route120/scripts.pory"
	special SpawnCameraObject
# 447 "data/maps/Route120/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp2
# 448 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 449 "data/maps/Route120/scripts.pory"
	applymovement 46, Rival_RealmsFray_Move1
# 450 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 451 "data/maps/Route120/scripts.pory"
	setvar VAR_ROUTE120_STATE, 1
# 452 "data/maps/Route120/scripts.pory"
	hideobjectat 46, MAP_ROUTE120
# 453 "data/maps/Route120/scripts.pory"
	removeobject 46
# 454 "data/maps/Route120/scripts.pory"
	setflag FLAG_TEMP_2
# 455 "data/maps/Route120/scripts.pory"
	delay 20
# 456 "data/maps/Route120/scripts.pory"
	playse SE_PIN
# 457 "data/maps/Route120/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 458 "data/maps/Route120/scripts.pory"
	delay 20
# 459 "data/maps/Route120/scripts.pory"
	waitse
# 460 "data/maps/Route120/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown2
# 461 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 462 "data/maps/Route120/scripts.pory"
	special RemoveCameraObject
# 463 "data/maps/Route120/scripts.pory"
	release
	end


# 467 "data/maps/Route120/scripts.pory"
Rival_RealmsFray_Move1:
# 468 "data/maps/Route120/scripts.pory"
	delay_16
# 468 "data/maps/Route120/scripts.pory"
	delay_16
# 468 "data/maps/Route120/scripts.pory"
	delay_16
# 469 "data/maps/Route120/scripts.pory"
	face_down
# 470 "data/maps/Route120/scripts.pory"
	delay_16
# 470 "data/maps/Route120/scripts.pory"
	delay_16
# 470 "data/maps/Route120/scripts.pory"
	delay_16
# 471 "data/maps/Route120/scripts.pory"
	walk_up
	step_end

Route120_Portal::
# 475 "data/maps/Route120/scripts.pory"
	warp MAP_REALMS_FRAY, 0
	return

