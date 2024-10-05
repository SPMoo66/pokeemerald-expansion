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
	speakername (CommonText_Steven)
# 169 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenGreeting, MSGBOX_YESNO
# 170 "data/maps/Route120/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route120_EventScript_StevenNotReady
# 171 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_StevenBattleKecleon
# 172 "data/maps/Route120/scripts.pory"
	end
# 173 "data/maps/Route120/scripts.pory"

# 174 "data/maps/Route120/scripts.pory"
Route120_EventScript_StevenNotReady::
# 175 "data/maps/Route120/scripts.pory"
	speakername (CommonText_Steven)
# 176 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenIllWaitHere, MSGBOX_DEFAULT
# 177 "data/maps/Route120/scripts.pory"
	setflag FLAG_NOT_READY_FOR_BATTLE_ROUTE_120
# 178 "data/maps/Route120/scripts.pory"
	release
# 179 "data/maps/Route120/scripts.pory"
	end
# 180 "data/maps/Route120/scripts.pory"

# 181 "data/maps/Route120/scripts.pory"
Route120_EventScript_StevenAskReadyForBattle::
# 182 "data/maps/Route120/scripts.pory"
	speakername (CommonText_Steven)
# 183 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenReadyForBattle, MSGBOX_YESNO
# 184 "data/maps/Route120/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route120_EventScript_StevenNotReady
# 185 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_StevenBattleKecleon
# 186 "data/maps/Route120/scripts.pory"
	end
# 187 "data/maps/Route120/scripts.pory"

# 188 "data/maps/Route120/scripts.pory"
Route120_EventScript_StevenBattleKecleon::
# 189 "data/maps/Route120/scripts.pory"
	speakername (CommonText_Steven)
# 190 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenShowMeYourPower, MSGBOX_DEFAULT
# 191 "data/maps/Route120/scripts.pory"
	closemessage
# 192 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, Route120_EventScript_PlayerApproachKecleonNorth
# 193 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, Route120_EventScript_PlayerApproachKecleonWest
# 194 "data/maps/Route120/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceFasterLeft
# 195 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 196 "data/maps/Route120/scripts.pory"
	delay 20
# 197 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenUsedDevonScope, MSGBOX_DEFAULT
# 198 "data/maps/Route120/scripts.pory"
	closemessage
# 199 "data/maps/Route120/scripts.pory"
	applymovement LOCALID_BRIDGE_KECLEON, Common_Movement_WalkInPlaceFasterRight
# 200 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 201 "data/maps/Route120/scripts.pory"
	applymovement LOCALID_BRIDGE_KECLEON, Movement_KecleonAppears
# 202 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 203 "data/maps/Route120/scripts.pory"
	waitse
# 204 "data/maps/Route120/scripts.pory"
	playmoncry SPECIES_KECLEON, CRY_MODE_ENCOUNTER
# 205 "data/maps/Route120/scripts.pory"
	delay 40
# 206 "data/maps/Route120/scripts.pory"
	waitmoncry
# 207 "data/maps/Route120/scripts.pory"
	setwildbattle SPECIES_KECLEON, 35
# 208 "data/maps/Route120/scripts.pory"
	setvar VAR_0x8009, 0
# 209 "data/maps/Route120/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 210 "data/maps/Route120/scripts.pory"
	dowildbattle
# 211 "data/maps/Route120/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 212 "data/maps/Route120/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 213 "data/maps/Route120/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, Route120_EventScript_RemoveBridgeKecleonPostBattle
# 214 "data/maps/Route120/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, Route120_EventScript_RemoveBridgeKecleonPostBattle
# 215 "data/maps/Route120/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, Route120_EventScript_RemoveBridgeKecleonPostBattle
# 216 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_StevenGiveDeconScope
# 217 "data/maps/Route120/scripts.pory"
	end
# 218 "data/maps/Route120/scripts.pory"

# 219 "data/maps/Route120/scripts.pory"
Route120_EventScript_RemoveBridgeKecleonPostBattle::
# 220 "data/maps/Route120/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 221 "data/maps/Route120/scripts.pory"
	removeobject LOCALID_BRIDGE_KECLEON
# 222 "data/maps/Route120/scripts.pory"
	removeobject LOCALID_BRIDGE_KECLEON_SHADOW
# 223 "data/maps/Route120/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 224 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_StevenGiveDeconScope
# 225 "data/maps/Route120/scripts.pory"
	end
# 226 "data/maps/Route120/scripts.pory"

# 227 "data/maps/Route120/scripts.pory"
Route120_EventScript_StevenGiveDeconScope::
# 228 "data/maps/Route120/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceFasterDown
# 229 "data/maps/Route120/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 230 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 231 "data/maps/Route120/scripts.pory"
	speakername (CommonText_Steven)
# 232 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenGiveDevonScope, MSGBOX_DEFAULT
# 233 "data/maps/Route120/scripts.pory"
	closemessage
# 234 "data/maps/Route120/scripts.pory"
	giveitem ITEM_DEVON_SCOPE
# 235 "data/maps/Route120/scripts.pory"
	setflag FLAG_RECEIVED_DEVON_SCOPE
# 236 "data/maps/Route120/scripts.pory"
	speakername (CommonText_Steven)
# 237 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenGoodbye, MSGBOX_DEFAULT
# 238 "data/maps/Route120/scripts.pory"
	closemessage
# 239 "data/maps/Route120/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceFasterDown
# 240 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 241 "data/maps/Route120/scripts.pory"
	delay 50
# 242 "data/maps/Route120/scripts.pory"
	setfieldeffectargument 0, 1
# 243 "data/maps/Route120/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 244 "data/maps/Route120/scripts.pory"
	delay 15
# 245 "data/maps/Route120/scripts.pory"
	removeobject LOCALID_STEVEN
# 246 "data/maps/Route120/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 247 "data/maps/Route120/scripts.pory"
	setmetatile 13, 15, METATILE_Fortree_WoodBridge1_Top, FALSE
# 248 "data/maps/Route120/scripts.pory"
	setmetatile 12, 16, METATILE_Fortree_WoodBridge1_Bottom, FALSE
# 249 "data/maps/Route120/scripts.pory"
	setmetatile 12, 17, METATILE_General_ReflectiveWater, FALSE
# 250 "data/maps/Route120/scripts.pory"
	setmetatile 13, 17, METATILE_General_ReflectiveWater, FALSE
# 251 "data/maps/Route120/scripts.pory"
	special DrawWholeMapView
# 252 "data/maps/Route120/scripts.pory"
	release
# 253 "data/maps/Route120/scripts.pory"
	end
# 254 "data/maps/Route120/scripts.pory"

# 255 "data/maps/Route120/scripts.pory"
Route120_EventScript_PlayerApproachKecleonNorth::
# 256 "data/maps/Route120/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 257 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 258 "data/maps/Route120/scripts.pory"
	return
# 259 "data/maps/Route120/scripts.pory"

# 260 "data/maps/Route120/scripts.pory"
Route120_EventScript_PlayerApproachKecleonWest::
# 261 "data/maps/Route120/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route120_Movement_ApproachKecleonWest
# 262 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 263 "data/maps/Route120/scripts.pory"
	return
# 264 "data/maps/Route120/scripts.pory"

# 265 "data/maps/Route120/scripts.pory"
Route120_Movement_ApproachKecleonWest:
# 266 "data/maps/Route120/scripts.pory"
	walk_down
# 267 "data/maps/Route120/scripts.pory"
	walk_left
# 268 "data/maps/Route120/scripts.pory"
	step_end
# 269 "data/maps/Route120/scripts.pory"

# 270 "data/maps/Route120/scripts.pory"
Route120_EventScript_BridgeKecleon::
# 271 "data/maps/Route120/scripts.pory"
	msgbox Kecleon_Text_SomethingUnseeable, MSGBOX_NPC
# 272 "data/maps/Route120/scripts.pory"
	end
# 273 "data/maps/Route120/scripts.pory"

# 274 "data/maps/Route120/scripts.pory"
Route120_EventScript_RouteSignFortree::
# 275 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_RouteSignFortree, MSGBOX_SIGN
# 276 "data/maps/Route120/scripts.pory"
	end
# 277 "data/maps/Route120/scripts.pory"

# 278 "data/maps/Route120/scripts.pory"
Route120_EventScript_RouteSign121::
# 279 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_RouteSign121, MSGBOX_SIGN
# 280 "data/maps/Route120/scripts.pory"
	end
# 281 "data/maps/Route120/scripts.pory"

# 282 "data/maps/Route120/scripts.pory"
Route120_EventScript_Colin::
# 283 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_COLIN, Route120_Text_ColinIntro, Route120_Text_ColinDefeat
# 284 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_ColinPostBattle, MSGBOX_AUTOCLOSE
# 285 "data/maps/Route120/scripts.pory"
	end
# 286 "data/maps/Route120/scripts.pory"

# 287 "data/maps/Route120/scripts.pory"
Route120_EventScript_Robert::
# 288 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_ROBERT_1, Route120_Text_RobertIntro, Route120_Text_RobertDefeat, Route120_EventScript_RegisterRobert
# 289 "data/maps/Route120/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 290 "data/maps/Route120/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route120_EventScript_RematchRobert
# 291 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_RobertPostBattle, MSGBOX_DEFAULT
# 292 "data/maps/Route120/scripts.pory"
	release
# 293 "data/maps/Route120/scripts.pory"
	end
# 294 "data/maps/Route120/scripts.pory"

# 295 "data/maps/Route120/scripts.pory"
Route120_EventScript_RegisterRobert::
# 296 "data/maps/Route120/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 297 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 298 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_RobertRegister, MSGBOX_DEFAULT
# 299 "data/maps/Route120/scripts.pory"
	register_matchcall TRAINER_ROBERT_1
# 300 "data/maps/Route120/scripts.pory"
	release
# 301 "data/maps/Route120/scripts.pory"
	end
# 302 "data/maps/Route120/scripts.pory"

# 303 "data/maps/Route120/scripts.pory"
Route120_EventScript_RematchRobert::
# 304 "data/maps/Route120/scripts.pory"
	trainerbattle_rematch TRAINER_ROBERT_1, Route120_Text_RobertRematchIntro, Route120_Text_RobertRematchDefeat
# 305 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_RobertPostRematch, MSGBOX_AUTOCLOSE
# 306 "data/maps/Route120/scripts.pory"
	end
# 307 "data/maps/Route120/scripts.pory"

# 308 "data/maps/Route120/scripts.pory"
Route120_EventScript_Lorenzo::
# 309 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_LORENZO, Route120_Text_LorenzoIntro, Route120_Text_LorenzoDefeat
# 310 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_LorenzoPostBattle, MSGBOX_AUTOCLOSE
# 311 "data/maps/Route120/scripts.pory"
	end
# 312 "data/maps/Route120/scripts.pory"

# 313 "data/maps/Route120/scripts.pory"
Route120_EventScript_Jenna::
# 314 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_JENNA, Route120_Text_JennaIntro, Route120_Text_JennaDefeat
# 315 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_JennaPostBattle, MSGBOX_AUTOCLOSE
# 316 "data/maps/Route120/scripts.pory"
	end
# 317 "data/maps/Route120/scripts.pory"

# 318 "data/maps/Route120/scripts.pory"
Route120_EventScript_Jeffrey::
# 319 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_JEFFREY_1, Route120_Text_JeffreyIntro, Route120_Text_JeffreyDefeat, Route120_EventScript_RegisterJeffrey
# 320 "data/maps/Route120/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 321 "data/maps/Route120/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route120_EventScript_RematchJeffrey
# 322 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_JeffreyPostBattle, MSGBOX_DEFAULT
# 323 "data/maps/Route120/scripts.pory"
	release
# 324 "data/maps/Route120/scripts.pory"
	end
# 325 "data/maps/Route120/scripts.pory"

# 326 "data/maps/Route120/scripts.pory"
Route120_EventScript_RegisterJeffrey::
# 327 "data/maps/Route120/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 328 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 329 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_JeffreyRegister, MSGBOX_DEFAULT
# 330 "data/maps/Route120/scripts.pory"
	register_matchcall TRAINER_JEFFREY_1
# 331 "data/maps/Route120/scripts.pory"
	release
# 332 "data/maps/Route120/scripts.pory"
	end
# 333 "data/maps/Route120/scripts.pory"

# 334 "data/maps/Route120/scripts.pory"
Route120_EventScript_RematchJeffrey::
# 335 "data/maps/Route120/scripts.pory"
	trainerbattle_rematch TRAINER_JEFFREY_1, Route120_Text_JeffreyRematchIntro, Route120_Text_JeffreyRematchDefeat
# 336 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_JeffreyPostRematch, MSGBOX_AUTOCLOSE
# 337 "data/maps/Route120/scripts.pory"
	end
# 338 "data/maps/Route120/scripts.pory"

# 339 "data/maps/Route120/scripts.pory"
Route120_EventScript_Jennifer::
# 340 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_JENNIFER, Route120_Text_JenniferIntro, Route120_Text_JenniferDefeat
# 341 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_JenniferPostBattle, MSGBOX_AUTOCLOSE
# 342 "data/maps/Route120/scripts.pory"
	end
# 343 "data/maps/Route120/scripts.pory"

# 344 "data/maps/Route120/scripts.pory"
Route120_EventScript_Chip::
# 345 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_CHIP, Route120_Text_ChipIntro, Route120_Text_ChipDefeat
# 346 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_ChipPostBattle, MSGBOX_AUTOCLOSE
# 347 "data/maps/Route120/scripts.pory"
	end
# 348 "data/maps/Route120/scripts.pory"

# 349 "data/maps/Route120/scripts.pory"
Route120_EventScript_Clarissa::
# 350 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_CLARISSA, Route120_Text_ClarissaIntro, Route120_Text_ClarissaDefeat
# 351 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_ClarissaPostBattle, MSGBOX_AUTOCLOSE
# 352 "data/maps/Route120/scripts.pory"
	end
# 353 "data/maps/Route120/scripts.pory"

# 354 "data/maps/Route120/scripts.pory"
Route120_EventScript_Angelica::
# 355 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_ANGELICA, Route120_Text_AngelicaIntro, Route120_Text_AngelicaDefeat
# 356 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_AngelicaPostBattle, MSGBOX_AUTOCLOSE
# 357 "data/maps/Route120/scripts.pory"
	end
# 358 "data/maps/Route120/scripts.pory"

# 359 "data/maps/Route120/scripts.pory"
Route120_EventScript_Keigo::
# 360 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_KEIGO, Route120_Text_KeigoIntro, Route120_Text_KeigoDefeat
# 361 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_KeigoPostBattle, MSGBOX_AUTOCLOSE
# 362 "data/maps/Route120/scripts.pory"
	end
# 363 "data/maps/Route120/scripts.pory"

# 364 "data/maps/Route120/scripts.pory"
Route120_EventScript_Riley::
# 365 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_RILEY, Route120_Text_RileyIntro, Route120_Text_RileyDefeat
# 366 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_RileyPostBattle, MSGBOX_AUTOCLOSE
# 367 "data/maps/Route120/scripts.pory"
	end
# 368 "data/maps/Route120/scripts.pory"

# 369 "data/maps/Route120/scripts.pory"
Route120_EventScript_Leonel::
# 370 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_LEONEL, Route120_Text_LeonelIntro, Route120_Text_LeonelDefeat
# 371 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_LeonelPostBattle, MSGBOX_AUTOCLOSE
# 372 "data/maps/Route120/scripts.pory"
	end
# 373 "data/maps/Route120/scripts.pory"

# 374 "data/maps/Route120/scripts.pory"
Route120_EventScript_Callie::
# 375 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_CALLIE, Route120_Text_CallieIntro, Route120_Text_CallieDefeat
# 376 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_CalliePostBattle, MSGBOX_AUTOCLOSE
# 377 "data/maps/Route120/scripts.pory"
	end
# 378 "data/maps/Route120/scripts.pory"

# 379 "data/maps/Route120/scripts.pory"
Route120_Text_StevenGreeting:
# 380 "data/maps/Route120/scripts.pory"
	.string "Hm? {PLAYER}{KUN}, hi.\n"
# 381 "data/maps/Route120/scripts.pory"
	.string "It's been a while.\p"
# 382 "data/maps/Route120/scripts.pory"
	.string "There's something here that you can't\n"
# 383 "data/maps/Route120/scripts.pory"
	.string "see, right?\p"
# 384 "data/maps/Route120/scripts.pory"
	.string "Now, if I were to use this device on\n"
# 385 "data/maps/Route120/scripts.pory"
	.string "the invisible obstacle…\p"
# 386 "data/maps/Route120/scripts.pory"
	.string "No, no. Rather than describing it,\n"
# 387 "data/maps/Route120/scripts.pory"
	.string "I should just show you.\l"
# 388 "data/maps/Route120/scripts.pory"
	.string "That would be more fun.\p"
# 389 "data/maps/Route120/scripts.pory"
	.string "{PLAYER}{KUN}, are your Pokémon ready for\n"
# 390 "data/maps/Route120/scripts.pory"
	.string "battle?$"
# 391 "data/maps/Route120/scripts.pory"

# 392 "data/maps/Route120/scripts.pory"
Route120_Text_StevenIllWaitHere:
# 393 "data/maps/Route120/scripts.pory"
	.string "No?\p"
# 394 "data/maps/Route120/scripts.pory"
	.string "I'll wait here, so you can get ready.$"
# 395 "data/maps/Route120/scripts.pory"

# 396 "data/maps/Route120/scripts.pory"
Route120_Text_StevenReadyForBattle:
# 397 "data/maps/Route120/scripts.pory"
	.string "{PLAYER}{KUN}, are your Pokémon\n"
# 398 "data/maps/Route120/scripts.pory"
	.string "ready for battle?$"
# 399 "data/maps/Route120/scripts.pory"

# 400 "data/maps/Route120/scripts.pory"
Route120_Text_StevenShowMeYourPower:
# 401 "data/maps/Route120/scripts.pory"
	.string "{PLAYER}{KUN}, show me your true\n"
# 402 "data/maps/Route120/scripts.pory"
	.string "power as a Trainer!$"
# 403 "data/maps/Route120/scripts.pory"

# 404 "data/maps/Route120/scripts.pory"
Route120_Text_StevenUsedDevonScope:
# 405 "data/maps/Route120/scripts.pory"
	.string "Steven used the Devon Scope.\p"
# 406 "data/maps/Route120/scripts.pory"
	.string "An invisible Pokémon became completely\n"
# 407 "data/maps/Route120/scripts.pory"
	.string "visible!\p"
# 408 "data/maps/Route120/scripts.pory"
	.string "The startled Pokémon attacked!$"
# 409 "data/maps/Route120/scripts.pory"

# 410 "data/maps/Route120/scripts.pory"
Route120_Text_StevenGiveDevonScope:
# 411 "data/maps/Route120/scripts.pory"
	.string "I see…\n"
# 412 "data/maps/Route120/scripts.pory"
	.string "Your battle style is intriguing.\p"
# 413 "data/maps/Route120/scripts.pory"
	.string "Your Pokémon have obviously grown\n"
# 414 "data/maps/Route120/scripts.pory"
	.string "since I first met you in Dewford.\p"
# 415 "data/maps/Route120/scripts.pory"
	.string "I'd like you to have this\n"
# 416 "data/maps/Route120/scripts.pory"
	.string "Devon Scope.\p"
# 417 "data/maps/Route120/scripts.pory"
	.string "Who knows, there may be other\n"
# 418 "data/maps/Route120/scripts.pory"
	.string "concealed Pokémon.$"
# 419 "data/maps/Route120/scripts.pory"

# 420 "data/maps/Route120/scripts.pory"
Route120_Text_StevenGoodbye:
# 421 "data/maps/Route120/scripts.pory"
	.string "{PLAYER}{KUN}.\p"
# 422 "data/maps/Route120/scripts.pory"
	.string "I enjoy seeing Pokémon and Trainers\n"
# 423 "data/maps/Route120/scripts.pory"
	.string "who strive together.\p"
# 424 "data/maps/Route120/scripts.pory"
	.string "I think you're doing great.\p"
# 425 "data/maps/Route120/scripts.pory"
	.string "Well, let's meet again somewhere.$"
# 426 "data/maps/Route120/scripts.pory"

# 427 "data/maps/Route120/scripts.pory"
Kecleon_Text_SomethingUnseeable:
# 428 "data/maps/Route120/scripts.pory"
	.string "Something unseeable is in the way.$"
# 429 "data/maps/Route120/scripts.pory"

# 430 "data/maps/Route120/scripts.pory"
Kecleon_Text_WantToUseDevonScope:
# 431 "data/maps/Route120/scripts.pory"
	.string "Something unseeable is in the way.\p"
# 432 "data/maps/Route120/scripts.pory"
	.string "Want to use the Devon Scope?$"
# 433 "data/maps/Route120/scripts.pory"

# 434 "data/maps/Route120/scripts.pory"
Kecleon_Text_UseDevonScopeMonAttacked:
# 435 "data/maps/Route120/scripts.pory"
	.string "{PLAYER} used the Devon Scope.\p"
# 436 "data/maps/Route120/scripts.pory"
	.string "An invisible Pokémon became completely\n"
# 437 "data/maps/Route120/scripts.pory"
	.string "visible!\p"
# 438 "data/maps/Route120/scripts.pory"
	.string "The startled Pokémon attacked!$"
# 439 "data/maps/Route120/scripts.pory"

# 440 "data/maps/Route120/scripts.pory"
Route120_Text_RouteSignFortree:
# 441 "data/maps/Route120/scripts.pory"
	.string "Route 120\n"
# 442 "data/maps/Route120/scripts.pory"
	.string "{LEFT_ARROW} Fortree City$"
# 443 "data/maps/Route120/scripts.pory"

# 444 "data/maps/Route120/scripts.pory"
Route120_Text_RouteSign121:
# 445 "data/maps/Route120/scripts.pory"
	.string "{RIGHT_ARROW} Route 121\n"
# 446 "data/maps/Route120/scripts.pory"
	.string "{LEFT_ARROW} Route 120$"

RealmsFrayIntroEvent::
# 452 "data/maps/Route120/scripts.pory"
	lock
# 453 "data/maps/Route120/scripts.pory"
	special SpawnCameraObject
# 454 "data/maps/Route120/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp2
# 455 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 456 "data/maps/Route120/scripts.pory"
	applymovement 46, Rival_RealmsFray_Move1
# 457 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 458 "data/maps/Route120/scripts.pory"
	setvar VAR_ROUTE120_STATE, 1
# 459 "data/maps/Route120/scripts.pory"
	hideobjectat 46, MAP_ROUTE120
# 460 "data/maps/Route120/scripts.pory"
	removeobject 46
# 461 "data/maps/Route120/scripts.pory"
	setflag FLAG_TEMP_2
# 462 "data/maps/Route120/scripts.pory"
	delay 20
# 463 "data/maps/Route120/scripts.pory"
	playse SE_PIN
# 464 "data/maps/Route120/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 465 "data/maps/Route120/scripts.pory"
	delay 20
# 466 "data/maps/Route120/scripts.pory"
	waitse
# 467 "data/maps/Route120/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown2
# 468 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 469 "data/maps/Route120/scripts.pory"
	special RemoveCameraObject
# 470 "data/maps/Route120/scripts.pory"
	release
	end


# 474 "data/maps/Route120/scripts.pory"
Rival_RealmsFray_Move1:
# 475 "data/maps/Route120/scripts.pory"
	delay_16
# 475 "data/maps/Route120/scripts.pory"
	delay_16
# 475 "data/maps/Route120/scripts.pory"
	delay_16
# 476 "data/maps/Route120/scripts.pory"
	face_down
# 477 "data/maps/Route120/scripts.pory"
	delay_16
# 477 "data/maps/Route120/scripts.pory"
	delay_16
# 477 "data/maps/Route120/scripts.pory"
	delay_16
# 478 "data/maps/Route120/scripts.pory"
	walk_up
	step_end

Route120_Portal::
# 482 "data/maps/Route120/scripts.pory"
	warp MAP_REALMS_FRAY, 0
	return

