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
	call_if_set FLAG_BADGE08_GET, Route120_EventScript_OpenZarudeArea
# 43 "data/maps/Route120/scripts.pory"
	end
# 44 "data/maps/Route120/scripts.pory"

# 45 "data/maps/Route120/scripts.pory"
Route120_EventScript_CloseAncientTomb::
# 46 "data/maps/Route120/scripts.pory"
	setmetatile 7, 54, METATILE_General_RockWall_RockBase, TRUE
# 47 "data/maps/Route120/scripts.pory"
	setmetatile 7, 55, METATILE_General_RockWall_SandBase, TRUE
# 48 "data/maps/Route120/scripts.pory"
	return
# 49 "data/maps/Route120/scripts.pory"

# 50 "data/maps/Route120/scripts.pory"
Route120_EventScript_SetBridgeClearMetatiles::
# 51 "data/maps/Route120/scripts.pory"
	setmetatile 13, 15, METATILE_Fortree_WoodBridge1_Top, FALSE
# 52 "data/maps/Route120/scripts.pory"
	setmetatile 12, 16, METATILE_Fortree_WoodBridge1_Bottom, FALSE
# 53 "data/maps/Route120/scripts.pory"
	setmetatile 12, 17, METATILE_General_ReflectiveWater, FALSE
# 54 "data/maps/Route120/scripts.pory"
	setmetatile 13, 17, METATILE_General_ReflectiveWater, FALSE
# 55 "data/maps/Route120/scripts.pory"
	return
# 56 "data/maps/Route120/scripts.pory"

# 57 "data/maps/Route120/scripts.pory"
Route120_EventScript_SetBridgeKecleonMovement::
# 58 "data/maps/Route120/scripts.pory"
	setobjectmovementtype LOCALID_BRIDGE_KECLEON_SHADOW, MOVEMENT_TYPE_FACE_RIGHT
# 59 "data/maps/Route120/scripts.pory"
	return
# 60 "data/maps/Route120/scripts.pory"

# 61 "data/maps/Route120/scripts.pory"
Route120_EventScript_OpenZarudeArea::
# 62 "data/maps/Route120/scripts.pory"
	setmetatile 30, 2, 0x305, FALSE
# 63 "data/maps/Route120/scripts.pory"
	setmetatile 31, 2, 0x305, FALSE
# 64 "data/maps/Route120/scripts.pory"
	setmetatile 30, 1, 0x2FD, FALSE
# 65 "data/maps/Route120/scripts.pory"
	setmetatile 31, 1, 0x2FD, FALSE
# 66 "data/maps/Route120/scripts.pory"
	return
# 67 "data/maps/Route120/scripts.pory"

# 68 "data/maps/Route120/scripts.pory"
Route120_OnTransition:
# 69 "data/maps/Route120/scripts.pory"
	call GabbyAndTy_EventScript_UpdateLocation
# 70 "data/maps/Route120/scripts.pory"
	call Route120_EventScript_SetWeather
# 71 "data/maps/Route120/scripts.pory"
	call Common_EventScript_SetupEmRivalGfxId
# 72 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_ROUTE120_STATE, 1, Route120_EventScript_HideRival
# 73 "data/maps/Route120/scripts.pory"
	end
# 74 "data/maps/Route120/scripts.pory"

# 75 "data/maps/Route120/scripts.pory"
Route120_EventScript_SetWeather::
# 76 "data/maps/Route120/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 77 "data/maps/Route120/scripts.pory"
	goto_if_le VAR_TEMP_1, 14, Route120_EventScript_SetSunnyWeather
# 78 "data/maps/Route120/scripts.pory"
	goto_if_le VAR_TEMP_1, 60, Route120_EventScript_TrySetRainyWeather
# 79 "data/maps/Route120/scripts.pory"
	goto_if_ge VAR_TEMP_1, 61, Route120_EventScript_SetCloudyWeather
# 80 "data/maps/Route120/scripts.pory"
	return
# 81 "data/maps/Route120/scripts.pory"

# 82 "data/maps/Route120/scripts.pory"
Route120_EventScript_SetCloudyWeather::
# 83 "data/maps/Route120/scripts.pory"
	setweather WEATHER_SUNNY_CLOUDS
# 84 "data/maps/Route120/scripts.pory"
	return
# 85 "data/maps/Route120/scripts.pory"

# 86 "data/maps/Route120/scripts.pory"
Route120_EventScript_SetSunnyWeather::
# 87 "data/maps/Route120/scripts.pory"
	setweather WEATHER_SUNNY
# 88 "data/maps/Route120/scripts.pory"
	return
# 89 "data/maps/Route120/scripts.pory"

# 90 "data/maps/Route120/scripts.pory"
Route120_EventScript_TrySetRainyWeather::
# 91 "data/maps/Route120/scripts.pory"
	goto_if_le VAR_TEMP_0, 7, Route120_EventScript_SetRainyWeather
# 92 "data/maps/Route120/scripts.pory"
	goto_if_le VAR_TEMP_0, 19, Route120_EventScript_SetSunnyWeather
# 93 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_SetRainyWeather
# 94 "data/maps/Route120/scripts.pory"
	end
# 95 "data/maps/Route120/scripts.pory"

# 96 "data/maps/Route120/scripts.pory"
Route120_EventScript_SetRainyWeather::
# 97 "data/maps/Route120/scripts.pory"
	setweather WEATHER_RAIN
# 98 "data/maps/Route120/scripts.pory"
	return
# 99 "data/maps/Route120/scripts.pory"
	
# 100 "data/maps/Route120/scripts.pory"
Route120_EventScript_HideRival:
# 101 "data/maps/Route120/scripts.pory"
	setflag FLAG_TEMP_2
# 102 "data/maps/Route120/scripts.pory"
	return
# 103 "data/maps/Route120/scripts.pory"
	
# 104 "data/maps/Route120/scripts.pory"
Route120_EventScript_BerryBeauty::
# 105 "data/maps/Route120/scripts.pory"
	lock
# 106 "data/maps/Route120/scripts.pory"
	faceplayer
# 107 "data/maps/Route120/scripts.pory"
	dotimebasedevents
# 108 "data/maps/Route120/scripts.pory"
	goto_if_set FLAG_DAILY_ROUTE_120_RECEIVED_BERRY, Route120_EventScript_ReceivedBerry
# 109 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_BerriesExpressionOfLoveIsntIt, MSGBOX_YESNO
# 110 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_RESULT, YES, Route120_EventScript_BerryLove
# 111 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_RESULT, NO, Route120_EventScript_BerryNotLove
# 112 "data/maps/Route120/scripts.pory"
	specialvar VAR_RESULT, GetPlayerTrainerIdOnesDigit
# 113 "data/maps/Route120/scripts.pory"
	switch VAR_RESULT
# 114 "data/maps/Route120/scripts.pory"
	case 0, Route120_EventScript_GiveFigyBerry
# 115 "data/maps/Route120/scripts.pory"
	case 5, Route120_EventScript_GiveFigyBerry
# 116 "data/maps/Route120/scripts.pory"
	case 1, Route120_EventScript_GiveWikiBerry
# 117 "data/maps/Route120/scripts.pory"
	case 6, Route120_EventScript_GiveWikiBerry
# 118 "data/maps/Route120/scripts.pory"
	case 2, Route120_EventScript_GiveMagoBerry
# 119 "data/maps/Route120/scripts.pory"
	case 7, Route120_EventScript_GiveMagoBerry
# 120 "data/maps/Route120/scripts.pory"
	case 3, Route120_EventScript_GiveAguavBerry
# 121 "data/maps/Route120/scripts.pory"
	case 8, Route120_EventScript_GiveAguavBerry
# 122 "data/maps/Route120/scripts.pory"
	case 4, Route120_EventScript_GiveIapapaBerry
# 123 "data/maps/Route120/scripts.pory"
	case 9, Route120_EventScript_GiveIapapaBerry
# 124 "data/maps/Route120/scripts.pory"
	end
# 125 "data/maps/Route120/scripts.pory"

# 126 "data/maps/Route120/scripts.pory"
Route120_EventScript_GiveFigyBerry::
# 127 "data/maps/Route120/scripts.pory"
	setvar VAR_0x8004, ITEM_FIGY_BERRY
# 128 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_GiveBerry
# 129 "data/maps/Route120/scripts.pory"
	end
# 130 "data/maps/Route120/scripts.pory"

# 131 "data/maps/Route120/scripts.pory"
Route120_EventScript_GiveWikiBerry::
# 132 "data/maps/Route120/scripts.pory"
	setvar VAR_0x8004, ITEM_WIKI_BERRY
# 133 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_GiveBerry
# 134 "data/maps/Route120/scripts.pory"
	end
# 135 "data/maps/Route120/scripts.pory"

# 136 "data/maps/Route120/scripts.pory"
Route120_EventScript_GiveMagoBerry::
# 137 "data/maps/Route120/scripts.pory"
	setvar VAR_0x8004, ITEM_MAGO_BERRY
# 138 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_GiveBerry
# 139 "data/maps/Route120/scripts.pory"
	end
# 140 "data/maps/Route120/scripts.pory"

# 141 "data/maps/Route120/scripts.pory"
Route120_EventScript_GiveAguavBerry::
# 142 "data/maps/Route120/scripts.pory"
	setvar VAR_0x8004, ITEM_AGUAV_BERRY
# 143 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_GiveBerry
# 144 "data/maps/Route120/scripts.pory"
	end
# 145 "data/maps/Route120/scripts.pory"

# 146 "data/maps/Route120/scripts.pory"
Route120_EventScript_GiveIapapaBerry::
# 147 "data/maps/Route120/scripts.pory"
	setvar VAR_0x8004, ITEM_IAPAPA_BERRY
# 148 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_GiveBerry
# 149 "data/maps/Route120/scripts.pory"
	end
# 150 "data/maps/Route120/scripts.pory"

# 151 "data/maps/Route120/scripts.pory"
Route120_EventScript_GiveBerry::
# 152 "data/maps/Route120/scripts.pory"
	giveitem VAR_0x8004
# 153 "data/maps/Route120/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 154 "data/maps/Route120/scripts.pory"
	setflag FLAG_DAILY_ROUTE_120_RECEIVED_BERRY
# 155 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_BerryIsRareRaiseItWithCare, MSGBOX_DEFAULT
# 156 "data/maps/Route120/scripts.pory"
	release
# 157 "data/maps/Route120/scripts.pory"
	end
# 158 "data/maps/Route120/scripts.pory"

# 159 "data/maps/Route120/scripts.pory"
Route120_EventScript_ReceivedBerry::
# 160 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_IllGetMoreBerriesFromBerryMaster, MSGBOX_DEFAULT
# 161 "data/maps/Route120/scripts.pory"
	release
# 162 "data/maps/Route120/scripts.pory"
	end
# 163 "data/maps/Route120/scripts.pory"

# 164 "data/maps/Route120/scripts.pory"
Route120_EventScript_BerryLove::
# 165 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_YesYouUnderstand, MSGBOX_DEFAULT
# 166 "data/maps/Route120/scripts.pory"
	return
# 167 "data/maps/Route120/scripts.pory"

# 168 "data/maps/Route120/scripts.pory"
Route120_EventScript_BerryNotLove::
# 169 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_MakeYourOwnImpressions, MSGBOX_DEFAULT
# 170 "data/maps/Route120/scripts.pory"
	return
# 171 "data/maps/Route120/scripts.pory"

# 172 "data/maps/Route120/scripts.pory"
Route120_EventScript_Steven::
# 173 "data/maps/Route120/scripts.pory"
	lock
# 174 "data/maps/Route120/scripts.pory"
	faceplayer
# 175 "data/maps/Route120/scripts.pory"
	goto_if_set FLAG_NOT_READY_FOR_BATTLE_ROUTE_120, Route120_EventScript_StevenAskReadyForBattle
# 176 "data/maps/Route120/scripts.pory"
	speakername (CommonText_Steven)
# 177 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenGreeting, MSGBOX_YESNO
# 178 "data/maps/Route120/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route120_EventScript_StevenNotReady
# 179 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_StevenBattleKecleon
# 180 "data/maps/Route120/scripts.pory"
	end
# 181 "data/maps/Route120/scripts.pory"

# 182 "data/maps/Route120/scripts.pory"
Route120_EventScript_StevenNotReady::
# 183 "data/maps/Route120/scripts.pory"
	speakername (CommonText_Steven)
# 184 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenIllWaitHere, MSGBOX_DEFAULT
# 185 "data/maps/Route120/scripts.pory"
	setflag FLAG_NOT_READY_FOR_BATTLE_ROUTE_120
# 186 "data/maps/Route120/scripts.pory"
	release
# 187 "data/maps/Route120/scripts.pory"
	end
# 188 "data/maps/Route120/scripts.pory"

# 189 "data/maps/Route120/scripts.pory"
Route120_EventScript_StevenAskReadyForBattle::
# 190 "data/maps/Route120/scripts.pory"
	speakername (CommonText_Steven)
# 191 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenReadyForBattle, MSGBOX_YESNO
# 192 "data/maps/Route120/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route120_EventScript_StevenNotReady
# 193 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_StevenBattleKecleon
# 194 "data/maps/Route120/scripts.pory"
	end
# 195 "data/maps/Route120/scripts.pory"

# 196 "data/maps/Route120/scripts.pory"
Route120_EventScript_StevenBattleKecleon::
# 197 "data/maps/Route120/scripts.pory"
	speakername (CommonText_Steven)
# 198 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenShowMeYourPower, MSGBOX_DEFAULT
# 199 "data/maps/Route120/scripts.pory"
	closemessage
# 200 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, Route120_EventScript_PlayerApproachKecleonNorth
# 201 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, Route120_EventScript_PlayerApproachKecleonWest
# 202 "data/maps/Route120/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceFasterLeft
# 203 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 204 "data/maps/Route120/scripts.pory"
	delay 20
# 205 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenUsedDevonScope, MSGBOX_DEFAULT
# 206 "data/maps/Route120/scripts.pory"
	closemessage
# 207 "data/maps/Route120/scripts.pory"
	applymovement LOCALID_BRIDGE_KECLEON, Common_Movement_WalkInPlaceFasterRight
# 208 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 209 "data/maps/Route120/scripts.pory"
	applymovement LOCALID_BRIDGE_KECLEON, Movement_KecleonAppears
# 210 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 211 "data/maps/Route120/scripts.pory"
	waitse
# 212 "data/maps/Route120/scripts.pory"
	playmoncry SPECIES_KECLEON, CRY_MODE_ENCOUNTER
# 213 "data/maps/Route120/scripts.pory"
	delay 40
# 214 "data/maps/Route120/scripts.pory"
	waitmoncry
# 215 "data/maps/Route120/scripts.pory"
	setwildbattle SPECIES_KECLEON, 35
# 216 "data/maps/Route120/scripts.pory"
	setvar VAR_0x8009, 0
# 217 "data/maps/Route120/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 218 "data/maps/Route120/scripts.pory"
	dowildbattle
# 219 "data/maps/Route120/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 220 "data/maps/Route120/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 221 "data/maps/Route120/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, Route120_EventScript_RemoveBridgeKecleonPostBattle
# 222 "data/maps/Route120/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, Route120_EventScript_RemoveBridgeKecleonPostBattle
# 223 "data/maps/Route120/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, Route120_EventScript_RemoveBridgeKecleonPostBattle
# 224 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_StevenGiveDeconScope
# 225 "data/maps/Route120/scripts.pory"
	end
# 226 "data/maps/Route120/scripts.pory"

# 227 "data/maps/Route120/scripts.pory"
Route120_EventScript_RemoveBridgeKecleonPostBattle::
# 228 "data/maps/Route120/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 229 "data/maps/Route120/scripts.pory"
	removeobject LOCALID_BRIDGE_KECLEON
# 230 "data/maps/Route120/scripts.pory"
	removeobject LOCALID_BRIDGE_KECLEON_SHADOW
# 231 "data/maps/Route120/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 232 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_StevenGiveDeconScope
# 233 "data/maps/Route120/scripts.pory"
	end
# 234 "data/maps/Route120/scripts.pory"

# 235 "data/maps/Route120/scripts.pory"
Route120_EventScript_StevenGiveDeconScope::
# 236 "data/maps/Route120/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceFasterDown
# 237 "data/maps/Route120/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 238 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 239 "data/maps/Route120/scripts.pory"
	speakername (CommonText_Steven)
# 240 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenGiveDevonScope, MSGBOX_DEFAULT
# 241 "data/maps/Route120/scripts.pory"
	closemessage
# 242 "data/maps/Route120/scripts.pory"
	giveitem ITEM_DEVON_SCOPE
# 243 "data/maps/Route120/scripts.pory"
	setflag FLAG_RECEIVED_DEVON_SCOPE
# 244 "data/maps/Route120/scripts.pory"
	speakername (CommonText_Steven)
# 245 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenGoodbye, MSGBOX_DEFAULT
# 246 "data/maps/Route120/scripts.pory"
	closemessage
# 247 "data/maps/Route120/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceFasterDown
# 248 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 249 "data/maps/Route120/scripts.pory"
	delay 50
# 250 "data/maps/Route120/scripts.pory"
	setfieldeffectargument 0, 1
# 251 "data/maps/Route120/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 252 "data/maps/Route120/scripts.pory"
	delay 15
# 253 "data/maps/Route120/scripts.pory"
	removeobject LOCALID_STEVEN
# 254 "data/maps/Route120/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 255 "data/maps/Route120/scripts.pory"
	setmetatile 13, 15, METATILE_Fortree_WoodBridge1_Top, FALSE
# 256 "data/maps/Route120/scripts.pory"
	setmetatile 12, 16, METATILE_Fortree_WoodBridge1_Bottom, FALSE
# 257 "data/maps/Route120/scripts.pory"
	setmetatile 12, 17, METATILE_General_ReflectiveWater, FALSE
# 258 "data/maps/Route120/scripts.pory"
	setmetatile 13, 17, METATILE_General_ReflectiveWater, FALSE
# 259 "data/maps/Route120/scripts.pory"
	special DrawWholeMapView
# 260 "data/maps/Route120/scripts.pory"
	release
# 261 "data/maps/Route120/scripts.pory"
	end
# 262 "data/maps/Route120/scripts.pory"

# 263 "data/maps/Route120/scripts.pory"
Route120_EventScript_PlayerApproachKecleonNorth::
# 264 "data/maps/Route120/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 265 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 266 "data/maps/Route120/scripts.pory"
	return
# 267 "data/maps/Route120/scripts.pory"

# 268 "data/maps/Route120/scripts.pory"
Route120_EventScript_PlayerApproachKecleonWest::
# 269 "data/maps/Route120/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route120_Movement_ApproachKecleonWest
# 270 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 271 "data/maps/Route120/scripts.pory"
	return
# 272 "data/maps/Route120/scripts.pory"

# 273 "data/maps/Route120/scripts.pory"
Route120_Movement_ApproachKecleonWest:
# 274 "data/maps/Route120/scripts.pory"
	walk_down
# 275 "data/maps/Route120/scripts.pory"
	walk_left
# 276 "data/maps/Route120/scripts.pory"
	step_end
# 277 "data/maps/Route120/scripts.pory"

# 278 "data/maps/Route120/scripts.pory"
Route120_EventScript_BridgeKecleon::
# 279 "data/maps/Route120/scripts.pory"
	msgbox Kecleon_Text_SomethingUnseeable, MSGBOX_NPC
# 280 "data/maps/Route120/scripts.pory"
	end
# 281 "data/maps/Route120/scripts.pory"

# 282 "data/maps/Route120/scripts.pory"
Route120_EventScript_RouteSignFortree::
# 283 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_RouteSignFortree, MSGBOX_SIGN
# 284 "data/maps/Route120/scripts.pory"
	end
# 285 "data/maps/Route120/scripts.pory"

# 286 "data/maps/Route120/scripts.pory"
Route120_EventScript_RouteSign121::
# 287 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_RouteSign121, MSGBOX_SIGN
# 288 "data/maps/Route120/scripts.pory"
	end
# 289 "data/maps/Route120/scripts.pory"

# 290 "data/maps/Route120/scripts.pory"
Route120_EventScript_Colin::
# 291 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_COLIN, Route120_Text_ColinIntro, Route120_Text_ColinDefeat
# 292 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_ColinPostBattle, MSGBOX_AUTOCLOSE
# 293 "data/maps/Route120/scripts.pory"
	end
# 294 "data/maps/Route120/scripts.pory"

# 295 "data/maps/Route120/scripts.pory"
Route120_EventScript_Robert::
# 296 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_ROBERT_1, Route120_Text_RobertIntro, Route120_Text_RobertDefeat, Route120_EventScript_RegisterRobert
# 297 "data/maps/Route120/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 298 "data/maps/Route120/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route120_EventScript_RematchRobert
# 299 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_RobertPostBattle, MSGBOX_DEFAULT
# 300 "data/maps/Route120/scripts.pory"
	release
# 301 "data/maps/Route120/scripts.pory"
	end
# 302 "data/maps/Route120/scripts.pory"

# 303 "data/maps/Route120/scripts.pory"
Route120_EventScript_RegisterRobert::
# 304 "data/maps/Route120/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 305 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 306 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_RobertRegister, MSGBOX_DEFAULT
# 307 "data/maps/Route120/scripts.pory"
	register_matchcall TRAINER_ROBERT_1
# 308 "data/maps/Route120/scripts.pory"
	release
# 309 "data/maps/Route120/scripts.pory"
	end
# 310 "data/maps/Route120/scripts.pory"

# 311 "data/maps/Route120/scripts.pory"
Route120_EventScript_RematchRobert::
# 312 "data/maps/Route120/scripts.pory"
	trainerbattle_rematch TRAINER_ROBERT_1, Route120_Text_RobertRematchIntro, Route120_Text_RobertRematchDefeat
# 313 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_RobertPostRematch, MSGBOX_AUTOCLOSE
# 314 "data/maps/Route120/scripts.pory"
	end
# 315 "data/maps/Route120/scripts.pory"

# 316 "data/maps/Route120/scripts.pory"
Route120_EventScript_Lorenzo::
# 317 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_LORENZO, Route120_Text_LorenzoIntro, Route120_Text_LorenzoDefeat
# 318 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_LorenzoPostBattle, MSGBOX_AUTOCLOSE
# 319 "data/maps/Route120/scripts.pory"
	end
# 320 "data/maps/Route120/scripts.pory"

# 321 "data/maps/Route120/scripts.pory"
Route120_EventScript_Jenna::
# 322 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_JENNA, Route120_Text_JennaIntro, Route120_Text_JennaDefeat
# 323 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_JennaPostBattle, MSGBOX_AUTOCLOSE
# 324 "data/maps/Route120/scripts.pory"
	end
# 325 "data/maps/Route120/scripts.pory"

# 326 "data/maps/Route120/scripts.pory"
Route120_EventScript_Jeffrey::
# 327 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_JEFFREY_1, Route120_Text_JeffreyIntro, Route120_Text_JeffreyDefeat, Route120_EventScript_RegisterJeffrey
# 328 "data/maps/Route120/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 329 "data/maps/Route120/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route120_EventScript_RematchJeffrey
# 330 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_JeffreyPostBattle, MSGBOX_DEFAULT
# 331 "data/maps/Route120/scripts.pory"
	release
# 332 "data/maps/Route120/scripts.pory"
	end
# 333 "data/maps/Route120/scripts.pory"

# 334 "data/maps/Route120/scripts.pory"
Route120_EventScript_RegisterJeffrey::
# 335 "data/maps/Route120/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 336 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 337 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_JeffreyRegister, MSGBOX_DEFAULT
# 338 "data/maps/Route120/scripts.pory"
	register_matchcall TRAINER_JEFFREY_1
# 339 "data/maps/Route120/scripts.pory"
	release
# 340 "data/maps/Route120/scripts.pory"
	end
# 341 "data/maps/Route120/scripts.pory"

# 342 "data/maps/Route120/scripts.pory"
Route120_EventScript_RematchJeffrey::
# 343 "data/maps/Route120/scripts.pory"
	trainerbattle_rematch TRAINER_JEFFREY_1, Route120_Text_JeffreyRematchIntro, Route120_Text_JeffreyRematchDefeat
# 344 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_JeffreyPostRematch, MSGBOX_AUTOCLOSE
# 345 "data/maps/Route120/scripts.pory"
	end
# 346 "data/maps/Route120/scripts.pory"

# 347 "data/maps/Route120/scripts.pory"
Route120_EventScript_Jennifer::
# 348 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_JENNIFER, Route120_Text_JenniferIntro, Route120_Text_JenniferDefeat
# 349 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_JenniferPostBattle, MSGBOX_AUTOCLOSE
# 350 "data/maps/Route120/scripts.pory"
	end
# 351 "data/maps/Route120/scripts.pory"

# 352 "data/maps/Route120/scripts.pory"
Route120_EventScript_Chip::
# 353 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_CHIP, Route120_Text_ChipIntro, Route120_Text_ChipDefeat
# 354 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_ChipPostBattle, MSGBOX_AUTOCLOSE
# 355 "data/maps/Route120/scripts.pory"
	end
# 356 "data/maps/Route120/scripts.pory"

# 357 "data/maps/Route120/scripts.pory"
Route120_EventScript_Clarissa::
# 358 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_CLARISSA, Route120_Text_ClarissaIntro, Route120_Text_ClarissaDefeat
# 359 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_ClarissaPostBattle, MSGBOX_AUTOCLOSE
# 360 "data/maps/Route120/scripts.pory"
	end
# 361 "data/maps/Route120/scripts.pory"

# 362 "data/maps/Route120/scripts.pory"
Route120_EventScript_Angelica::
# 363 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_ANGELICA, Route120_Text_AngelicaIntro, Route120_Text_AngelicaDefeat
# 364 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_AngelicaPostBattle, MSGBOX_AUTOCLOSE
# 365 "data/maps/Route120/scripts.pory"
	end
# 366 "data/maps/Route120/scripts.pory"

# 367 "data/maps/Route120/scripts.pory"
Route120_EventScript_Keigo::
# 368 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_KEIGO, Route120_Text_KeigoIntro, Route120_Text_KeigoDefeat
# 369 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_KeigoPostBattle, MSGBOX_AUTOCLOSE
# 370 "data/maps/Route120/scripts.pory"
	end
# 371 "data/maps/Route120/scripts.pory"

# 372 "data/maps/Route120/scripts.pory"
Route120_EventScript_Riley::
# 373 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_RILEY, Route120_Text_RileyIntro, Route120_Text_RileyDefeat
# 374 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_RileyPostBattle, MSGBOX_AUTOCLOSE
# 375 "data/maps/Route120/scripts.pory"
	end
# 376 "data/maps/Route120/scripts.pory"

# 377 "data/maps/Route120/scripts.pory"
Route120_EventScript_Leonel::
# 378 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_LEONEL, Route120_Text_LeonelIntro, Route120_Text_LeonelDefeat
# 379 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_LeonelPostBattle, MSGBOX_AUTOCLOSE
# 380 "data/maps/Route120/scripts.pory"
	end
# 381 "data/maps/Route120/scripts.pory"

# 382 "data/maps/Route120/scripts.pory"
Route120_EventScript_Callie::
# 383 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_CALLIE, Route120_Text_CallieIntro, Route120_Text_CallieDefeat
# 384 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_CalliePostBattle, MSGBOX_AUTOCLOSE
# 385 "data/maps/Route120/scripts.pory"
	end
# 386 "data/maps/Route120/scripts.pory"

# 387 "data/maps/Route120/scripts.pory"
Route120_Text_StevenGreeting:
# 388 "data/maps/Route120/scripts.pory"
	.string "Hm? {PLAYER}{KUN}, hi.\n"
# 389 "data/maps/Route120/scripts.pory"
	.string "It's been a while.\p"
# 390 "data/maps/Route120/scripts.pory"
	.string "There's something here that you can't\n"
# 391 "data/maps/Route120/scripts.pory"
	.string "see, right?\p"
# 392 "data/maps/Route120/scripts.pory"
	.string "Now, if I were to use this device on\n"
# 393 "data/maps/Route120/scripts.pory"
	.string "the invisible obstacle…\p"
# 394 "data/maps/Route120/scripts.pory"
	.string "No, no. Rather than describing it,\n"
# 395 "data/maps/Route120/scripts.pory"
	.string "I should just show you.\l"
# 396 "data/maps/Route120/scripts.pory"
	.string "That would be more fun.\p"
# 397 "data/maps/Route120/scripts.pory"
	.string "{PLAYER}{KUN}, are your Pokémon ready for\n"
# 398 "data/maps/Route120/scripts.pory"
	.string "battle?$"
# 399 "data/maps/Route120/scripts.pory"

# 400 "data/maps/Route120/scripts.pory"
Route120_Text_StevenIllWaitHere:
# 401 "data/maps/Route120/scripts.pory"
	.string "No?\p"
# 402 "data/maps/Route120/scripts.pory"
	.string "I'll wait here, so you can get ready.$"
# 403 "data/maps/Route120/scripts.pory"

# 404 "data/maps/Route120/scripts.pory"
Route120_Text_StevenReadyForBattle:
# 405 "data/maps/Route120/scripts.pory"
	.string "{PLAYER}{KUN}, are your Pokémon\n"
# 406 "data/maps/Route120/scripts.pory"
	.string "ready for battle?$"
# 407 "data/maps/Route120/scripts.pory"

# 408 "data/maps/Route120/scripts.pory"
Route120_Text_StevenShowMeYourPower:
# 409 "data/maps/Route120/scripts.pory"
	.string "{PLAYER}{KUN}, show me your true\n"
# 410 "data/maps/Route120/scripts.pory"
	.string "power as a Trainer!$"
# 411 "data/maps/Route120/scripts.pory"

# 412 "data/maps/Route120/scripts.pory"
Route120_Text_StevenUsedDevonScope:
# 413 "data/maps/Route120/scripts.pory"
	.string "Steven used the Devon Scope.\p"
# 414 "data/maps/Route120/scripts.pory"
	.string "An invisible Pokémon became completely\n"
# 415 "data/maps/Route120/scripts.pory"
	.string "visible!\p"
# 416 "data/maps/Route120/scripts.pory"
	.string "The startled Pokémon attacked!$"
# 417 "data/maps/Route120/scripts.pory"

# 418 "data/maps/Route120/scripts.pory"
Route120_Text_StevenGiveDevonScope:
# 419 "data/maps/Route120/scripts.pory"
	.string "I see…\n"
# 420 "data/maps/Route120/scripts.pory"
	.string "Your battle style is intriguing.\p"
# 421 "data/maps/Route120/scripts.pory"
	.string "Your Pokémon have obviously grown\n"
# 422 "data/maps/Route120/scripts.pory"
	.string "since I first met you in Dewford.\p"
# 423 "data/maps/Route120/scripts.pory"
	.string "I'd like you to have this\n"
# 424 "data/maps/Route120/scripts.pory"
	.string "Devon Scope.\p"
# 425 "data/maps/Route120/scripts.pory"
	.string "Who knows, there may be other\n"
# 426 "data/maps/Route120/scripts.pory"
	.string "concealed Pokémon.$"
# 427 "data/maps/Route120/scripts.pory"

# 428 "data/maps/Route120/scripts.pory"
Route120_Text_StevenGoodbye:
# 429 "data/maps/Route120/scripts.pory"
	.string "{PLAYER}{KUN}.\p"
# 430 "data/maps/Route120/scripts.pory"
	.string "I enjoy seeing Pokémon and Trainers\n"
# 431 "data/maps/Route120/scripts.pory"
	.string "who strive together.\p"
# 432 "data/maps/Route120/scripts.pory"
	.string "I think you're doing great.\p"
# 433 "data/maps/Route120/scripts.pory"
	.string "Well, let's meet again somewhere.$"
# 434 "data/maps/Route120/scripts.pory"

# 435 "data/maps/Route120/scripts.pory"
Kecleon_Text_SomethingUnseeable:
# 436 "data/maps/Route120/scripts.pory"
	.string "Something unseeable is in the way.$"
# 437 "data/maps/Route120/scripts.pory"

# 438 "data/maps/Route120/scripts.pory"
Kecleon_Text_WantToUseDevonScope:
# 439 "data/maps/Route120/scripts.pory"
	.string "Something unseeable is in the way.\p"
# 440 "data/maps/Route120/scripts.pory"
	.string "Want to use the Devon Scope?$"
# 441 "data/maps/Route120/scripts.pory"

# 442 "data/maps/Route120/scripts.pory"
Kecleon_Text_UseDevonScopeMonAttacked:
# 443 "data/maps/Route120/scripts.pory"
	.string "{PLAYER} used the Devon Scope.\p"
# 444 "data/maps/Route120/scripts.pory"
	.string "An invisible Pokémon became completely\n"
# 445 "data/maps/Route120/scripts.pory"
	.string "visible!\p"
# 446 "data/maps/Route120/scripts.pory"
	.string "The startled Pokémon attacked!$"
# 447 "data/maps/Route120/scripts.pory"

# 448 "data/maps/Route120/scripts.pory"
Route120_Text_RouteSignFortree:
# 449 "data/maps/Route120/scripts.pory"
	.string "Route 120\n"
# 450 "data/maps/Route120/scripts.pory"
	.string "{LEFT_ARROW} Fortree City$"
# 451 "data/maps/Route120/scripts.pory"

# 452 "data/maps/Route120/scripts.pory"
Route120_Text_RouteSign121:
# 453 "data/maps/Route120/scripts.pory"
	.string "{RIGHT_ARROW} Route 121\n"
# 454 "data/maps/Route120/scripts.pory"
	.string "{LEFT_ARROW} Route 120$"

RealmsFrayIntroEvent::
# 460 "data/maps/Route120/scripts.pory"
	lock
# 461 "data/maps/Route120/scripts.pory"
	special SpawnCameraObject
# 462 "data/maps/Route120/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp2
# 463 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 464 "data/maps/Route120/scripts.pory"
	applymovement 46, Rival_RealmsFray_Move1
# 465 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 466 "data/maps/Route120/scripts.pory"
	setvar VAR_ROUTE120_STATE, 1
# 467 "data/maps/Route120/scripts.pory"
	hideobjectat 46, MAP_ROUTE120
# 468 "data/maps/Route120/scripts.pory"
	removeobject 46
# 469 "data/maps/Route120/scripts.pory"
	setflag FLAG_TEMP_2
# 470 "data/maps/Route120/scripts.pory"
	delay 20
# 471 "data/maps/Route120/scripts.pory"
	playse SE_PIN
# 472 "data/maps/Route120/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 473 "data/maps/Route120/scripts.pory"
	delay 20
# 474 "data/maps/Route120/scripts.pory"
	waitse
# 475 "data/maps/Route120/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown2
# 476 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 477 "data/maps/Route120/scripts.pory"
	special RemoveCameraObject
# 478 "data/maps/Route120/scripts.pory"
	release
	end


# 482 "data/maps/Route120/scripts.pory"
Rival_RealmsFray_Move1:
# 483 "data/maps/Route120/scripts.pory"
	delay_16
# 483 "data/maps/Route120/scripts.pory"
	delay_16
# 483 "data/maps/Route120/scripts.pory"
	delay_16
# 484 "data/maps/Route120/scripts.pory"
	face_down
# 485 "data/maps/Route120/scripts.pory"
	delay_16
# 485 "data/maps/Route120/scripts.pory"
	delay_16
# 485 "data/maps/Route120/scripts.pory"
	delay_16
# 486 "data/maps/Route120/scripts.pory"
	walk_up
	step_end

Route120_Portal::
# 490 "data/maps/Route120/scripts.pory"
	warp MAP_REALMS_FRAY, 0
	return

