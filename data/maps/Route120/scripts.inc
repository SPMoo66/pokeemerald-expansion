# 1 "data/maps/Route120/scripts.pory"

# 2 "data/maps/Route120/scripts.pory"
Route120_MapScripts::
# 3 "data/maps/Route120/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route120_OnResume
# 4 "data/maps/Route120/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route120_OnTransition
# 5 "data/maps/Route120/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route120_OnLoad
# 6 "data/maps/Route120/scripts.pory"
	.byte 0
# 7 "data/maps/Route120/scripts.pory"

# 8 "data/maps/Route120/scripts.pory"
Route120_OnResume:
# 9 "data/maps/Route120/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, Route120_EventScript_RemoveKecleonObject
# 10 "data/maps/Route120/scripts.pory"
	end
# 11 "data/maps/Route120/scripts.pory"

# 12 "data/maps/Route120/scripts.pory"
Route120_EventScript_RemoveKecleonObject::
# 13 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_0x8009, 0, Route120_EventScript_RemoveBridgeKecleon
# 14 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_0x8009, 1, Route120_EventScript_RemoveKecleon
# 15 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_0x8009, 2, Route120_EventScript_RemoveKecleon
# 16 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_0x8009, 3, Route120_EventScript_RemoveKecleon
# 17 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_0x8009, 4, Route120_EventScript_RemoveKecleon
# 18 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_0x8009, 5, Route120_EventScript_RemoveKecleon
# 19 "data/maps/Route120/scripts.pory"
	return
# 20 "data/maps/Route120/scripts.pory"

# 21 "data/maps/Route120/scripts.pory"
Route120_EventScript_RemoveBridgeKecleon::
# 22 "data/maps/Route120/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 23 "data/maps/Route120/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
# 24 "data/maps/Route120/scripts.pory"
	removeobject LOCALID_BRIDGE_KECLEON
# 25 "data/maps/Route120/scripts.pory"
	removeobject LOCALID_BRIDGE_KECLEON_SHADOW
# 26 "data/maps/Route120/scripts.pory"
	return
# 27 "data/maps/Route120/scripts.pory"

# 28 "data/maps/Route120/scripts.pory"
Route120_EventScript_RemoveKecleon::
# 29 "data/maps/Route120/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 30 "data/maps/Route120/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
# 31 "data/maps/Route120/scripts.pory"
	removeobject VAR_LAST_TALKED
# 32 "data/maps/Route120/scripts.pory"
	return
# 33 "data/maps/Route120/scripts.pory"

# 34 "data/maps/Route120/scripts.pory"
Route120_OnLoad:
# 35 "data/maps/Route120/scripts.pory"
	call_if_unset FLAG_REGI_DOORS_OPENED, Route120_EventScript_CloseAncientTomb
# 36 "data/maps/Route120/scripts.pory"
	call_if_set FLAG_RECEIVED_DEVON_SCOPE, Route120_EventScript_SetBridgeClearMetatiles
# 37 "data/maps/Route120/scripts.pory"
	call_if_unset FLAG_RECEIVED_DEVON_SCOPE, Route120_EventScript_SetBridgeKecleonMovement
# 38 "data/maps/Route120/scripts.pory"
	call_if_set FLAG_BADGE08_GET, Route120_EventScript_OpenZarudeArea
# 39 "data/maps/Route120/scripts.pory"
	end
# 40 "data/maps/Route120/scripts.pory"

# 41 "data/maps/Route120/scripts.pory"
Route120_EventScript_CloseAncientTomb::
# 42 "data/maps/Route120/scripts.pory"
	setmetatile 7, 54, METATILE_General_RockWall_RockBase, TRUE
# 43 "data/maps/Route120/scripts.pory"
	setmetatile 7, 55, METATILE_General_RockWall_SandBase, TRUE
# 44 "data/maps/Route120/scripts.pory"
	return
# 45 "data/maps/Route120/scripts.pory"

# 46 "data/maps/Route120/scripts.pory"
Route120_EventScript_SetBridgeClearMetatiles::
# 47 "data/maps/Route120/scripts.pory"
	setmetatile 13, 15, METATILE_Fortree_WoodBridge1_Top, FALSE
# 48 "data/maps/Route120/scripts.pory"
	setmetatile 12, 16, METATILE_Fortree_WoodBridge1_Bottom, FALSE
# 49 "data/maps/Route120/scripts.pory"
	setmetatile 12, 17, METATILE_General_ReflectiveWater, FALSE
# 50 "data/maps/Route120/scripts.pory"
	setmetatile 13, 17, METATILE_General_ReflectiveWater, FALSE
# 51 "data/maps/Route120/scripts.pory"
	return
# 52 "data/maps/Route120/scripts.pory"

# 53 "data/maps/Route120/scripts.pory"
Route120_EventScript_SetBridgeKecleonMovement::
# 54 "data/maps/Route120/scripts.pory"
	setobjectmovementtype LOCALID_BRIDGE_KECLEON_SHADOW, MOVEMENT_TYPE_FACE_RIGHT
# 55 "data/maps/Route120/scripts.pory"
	return
# 56 "data/maps/Route120/scripts.pory"

# 57 "data/maps/Route120/scripts.pory"
Route120_EventScript_OpenZarudeArea::
# 58 "data/maps/Route120/scripts.pory"
	setmetatile 30, 2, 0x305, FALSE
# 59 "data/maps/Route120/scripts.pory"
	setmetatile 31, 2, 0x305, FALSE
# 60 "data/maps/Route120/scripts.pory"
	setmetatile 30, 1, 0x2FD, FALSE
# 61 "data/maps/Route120/scripts.pory"
	setmetatile 31, 1, 0x2FD, FALSE
# 62 "data/maps/Route120/scripts.pory"
	return
# 63 "data/maps/Route120/scripts.pory"

# 64 "data/maps/Route120/scripts.pory"
Route120_OnTransition:
# 65 "data/maps/Route120/scripts.pory"
	call GabbyAndTy_EventScript_UpdateLocation
# 66 "data/maps/Route120/scripts.pory"
	call Route120_EventScript_SetWeather
# 67 "data/maps/Route120/scripts.pory"
	call Common_EventScript_SetupEmRivalGfxId
# 68 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_ROUTE120_STATE, 1, Route120_EventScript_HideRival
# 69 "data/maps/Route120/scripts.pory"
	end
# 70 "data/maps/Route120/scripts.pory"

# 71 "data/maps/Route120/scripts.pory"
Route120_EventScript_SetWeather::
# 72 "data/maps/Route120/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 73 "data/maps/Route120/scripts.pory"
	goto_if_le VAR_TEMP_1, 14, Route120_EventScript_SetSunnyWeather
# 74 "data/maps/Route120/scripts.pory"
	goto_if_le VAR_TEMP_1, 60, Route120_EventScript_TrySetRainyWeather
# 75 "data/maps/Route120/scripts.pory"
	goto_if_ge VAR_TEMP_1, 61, Route120_EventScript_SetCloudyWeather
# 76 "data/maps/Route120/scripts.pory"
	return
# 77 "data/maps/Route120/scripts.pory"

# 78 "data/maps/Route120/scripts.pory"
Route120_EventScript_SetCloudyWeather::
# 79 "data/maps/Route120/scripts.pory"
	setweather WEATHER_SUNNY_CLOUDS
# 80 "data/maps/Route120/scripts.pory"
	return
# 81 "data/maps/Route120/scripts.pory"

# 82 "data/maps/Route120/scripts.pory"
Route120_EventScript_SetSunnyWeather::
# 83 "data/maps/Route120/scripts.pory"
	setweather WEATHER_SUNNY
# 84 "data/maps/Route120/scripts.pory"
	return
# 85 "data/maps/Route120/scripts.pory"

# 86 "data/maps/Route120/scripts.pory"
Route120_EventScript_TrySetRainyWeather::
# 87 "data/maps/Route120/scripts.pory"
	goto_if_le VAR_TEMP_0, 7, Route120_EventScript_SetRainyWeather
# 88 "data/maps/Route120/scripts.pory"
	goto_if_le VAR_TEMP_0, 19, Route120_EventScript_SetSunnyWeather
# 89 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_SetRainyWeather
# 90 "data/maps/Route120/scripts.pory"
	end
# 91 "data/maps/Route120/scripts.pory"

# 92 "data/maps/Route120/scripts.pory"
Route120_EventScript_SetRainyWeather::
# 93 "data/maps/Route120/scripts.pory"
	setweather WEATHER_RAIN
# 94 "data/maps/Route120/scripts.pory"
	return
# 95 "data/maps/Route120/scripts.pory"
	
# 96 "data/maps/Route120/scripts.pory"
Route120_EventScript_HideRival:
# 97 "data/maps/Route120/scripts.pory"
	setflag FLAG_TEMP_2
# 98 "data/maps/Route120/scripts.pory"
	return
# 99 "data/maps/Route120/scripts.pory"
	
# 100 "data/maps/Route120/scripts.pory"
Route120_EventScript_BerryBeauty::
# 101 "data/maps/Route120/scripts.pory"
	lock
# 102 "data/maps/Route120/scripts.pory"
	faceplayer
# 103 "data/maps/Route120/scripts.pory"
	dotimebasedevents
# 104 "data/maps/Route120/scripts.pory"
	goto_if_set FLAG_DAILY_ROUTE_120_RECEIVED_BERRY, Route120_EventScript_ReceivedBerry
# 105 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_BerriesExpressionOfLoveIsntIt, MSGBOX_YESNO
# 106 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_RESULT, YES, Route120_EventScript_BerryLove
# 107 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_RESULT, NO, Route120_EventScript_BerryNotLove
# 108 "data/maps/Route120/scripts.pory"
	specialvar VAR_RESULT, GetPlayerTrainerIdOnesDigit
# 109 "data/maps/Route120/scripts.pory"
	switch VAR_RESULT
# 110 "data/maps/Route120/scripts.pory"
	case 0, Route120_EventScript_GiveFigyBerry
# 111 "data/maps/Route120/scripts.pory"
	case 5, Route120_EventScript_GiveFigyBerry
# 112 "data/maps/Route120/scripts.pory"
	case 1, Route120_EventScript_GiveWikiBerry
# 113 "data/maps/Route120/scripts.pory"
	case 6, Route120_EventScript_GiveWikiBerry
# 114 "data/maps/Route120/scripts.pory"
	case 2, Route120_EventScript_GiveMagoBerry
# 115 "data/maps/Route120/scripts.pory"
	case 7, Route120_EventScript_GiveMagoBerry
# 116 "data/maps/Route120/scripts.pory"
	case 3, Route120_EventScript_GiveAguavBerry
# 117 "data/maps/Route120/scripts.pory"
	case 8, Route120_EventScript_GiveAguavBerry
# 118 "data/maps/Route120/scripts.pory"
	case 4, Route120_EventScript_GiveIapapaBerry
# 119 "data/maps/Route120/scripts.pory"
	case 9, Route120_EventScript_GiveIapapaBerry
# 120 "data/maps/Route120/scripts.pory"
	end
# 121 "data/maps/Route120/scripts.pory"

# 122 "data/maps/Route120/scripts.pory"
Route120_EventScript_GiveFigyBerry::
# 123 "data/maps/Route120/scripts.pory"
	setvar VAR_0x8004, ITEM_FIGY_BERRY
# 124 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_GiveBerry
# 125 "data/maps/Route120/scripts.pory"
	end
# 126 "data/maps/Route120/scripts.pory"

# 127 "data/maps/Route120/scripts.pory"
Route120_EventScript_GiveWikiBerry::
# 128 "data/maps/Route120/scripts.pory"
	setvar VAR_0x8004, ITEM_WIKI_BERRY
# 129 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_GiveBerry
# 130 "data/maps/Route120/scripts.pory"
	end
# 131 "data/maps/Route120/scripts.pory"

# 132 "data/maps/Route120/scripts.pory"
Route120_EventScript_GiveMagoBerry::
# 133 "data/maps/Route120/scripts.pory"
	setvar VAR_0x8004, ITEM_MAGO_BERRY
# 134 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_GiveBerry
# 135 "data/maps/Route120/scripts.pory"
	end
# 136 "data/maps/Route120/scripts.pory"

# 137 "data/maps/Route120/scripts.pory"
Route120_EventScript_GiveAguavBerry::
# 138 "data/maps/Route120/scripts.pory"
	setvar VAR_0x8004, ITEM_AGUAV_BERRY
# 139 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_GiveBerry
# 140 "data/maps/Route120/scripts.pory"
	end
# 141 "data/maps/Route120/scripts.pory"

# 142 "data/maps/Route120/scripts.pory"
Route120_EventScript_GiveIapapaBerry::
# 143 "data/maps/Route120/scripts.pory"
	setvar VAR_0x8004, ITEM_IAPAPA_BERRY
# 144 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_GiveBerry
# 145 "data/maps/Route120/scripts.pory"
	end
# 146 "data/maps/Route120/scripts.pory"

# 147 "data/maps/Route120/scripts.pory"
Route120_EventScript_GiveBerry::
# 148 "data/maps/Route120/scripts.pory"
	giveitem VAR_0x8004
# 149 "data/maps/Route120/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 150 "data/maps/Route120/scripts.pory"
	setflag FLAG_DAILY_ROUTE_120_RECEIVED_BERRY
# 151 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_BerryIsRareRaiseItWithCare, MSGBOX_DEFAULT
# 152 "data/maps/Route120/scripts.pory"
	release
# 153 "data/maps/Route120/scripts.pory"
	end
# 154 "data/maps/Route120/scripts.pory"

# 155 "data/maps/Route120/scripts.pory"
Route120_EventScript_ReceivedBerry::
# 156 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_IllGetMoreBerriesFromBerryMaster, MSGBOX_DEFAULT
# 157 "data/maps/Route120/scripts.pory"
	release
# 158 "data/maps/Route120/scripts.pory"
	end
# 159 "data/maps/Route120/scripts.pory"

# 160 "data/maps/Route120/scripts.pory"
Route120_EventScript_BerryLove::
# 161 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_YesYouUnderstand, MSGBOX_DEFAULT
# 162 "data/maps/Route120/scripts.pory"
	return
# 163 "data/maps/Route120/scripts.pory"

# 164 "data/maps/Route120/scripts.pory"
Route120_EventScript_BerryNotLove::
# 165 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_MakeYourOwnImpressions, MSGBOX_DEFAULT
# 166 "data/maps/Route120/scripts.pory"
	return
# 167 "data/maps/Route120/scripts.pory"

# 168 "data/maps/Route120/scripts.pory"
Route120_EventScript_Steven::
# 169 "data/maps/Route120/scripts.pory"
	lock
# 170 "data/maps/Route120/scripts.pory"
	faceplayer
# 171 "data/maps/Route120/scripts.pory"
	goto_if_set FLAG_NOT_READY_FOR_BATTLE_ROUTE_120, Route120_EventScript_StevenAskReadyForBattle
# 172 "data/maps/Route120/scripts.pory"
	speakername (CommonText_Steven)
# 173 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenGreeting, MSGBOX_YESNO
# 174 "data/maps/Route120/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route120_EventScript_StevenNotReady
# 175 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_StevenBattleKecleon
# 176 "data/maps/Route120/scripts.pory"
	end
# 177 "data/maps/Route120/scripts.pory"

# 178 "data/maps/Route120/scripts.pory"
Route120_EventScript_StevenNotReady::
# 179 "data/maps/Route120/scripts.pory"
	speakername (CommonText_Steven)
# 180 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenIllWaitHere, MSGBOX_DEFAULT
# 181 "data/maps/Route120/scripts.pory"
	setflag FLAG_NOT_READY_FOR_BATTLE_ROUTE_120
# 182 "data/maps/Route120/scripts.pory"
	release
# 183 "data/maps/Route120/scripts.pory"
	end
# 184 "data/maps/Route120/scripts.pory"

# 185 "data/maps/Route120/scripts.pory"
Route120_EventScript_StevenAskReadyForBattle::
# 186 "data/maps/Route120/scripts.pory"
	speakername (CommonText_Steven)
# 187 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenReadyForBattle, MSGBOX_YESNO
# 188 "data/maps/Route120/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route120_EventScript_StevenNotReady
# 189 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_StevenBattleKecleon
# 190 "data/maps/Route120/scripts.pory"
	end
# 191 "data/maps/Route120/scripts.pory"

# 192 "data/maps/Route120/scripts.pory"
Route120_EventScript_StevenBattleKecleon::
# 193 "data/maps/Route120/scripts.pory"
	speakername (CommonText_Steven)
# 194 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenShowMeYourPower, MSGBOX_DEFAULT
# 195 "data/maps/Route120/scripts.pory"
	closemessage
# 196 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, Route120_EventScript_PlayerApproachKecleonNorth
# 197 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, Route120_EventScript_PlayerApproachKecleonWest
# 198 "data/maps/Route120/scripts.pory"
	applymovement LOCALID_ROUTE120_STEVEN, Common_Movement_WalkInPlaceFasterLeft
# 199 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 200 "data/maps/Route120/scripts.pory"
	delay 20
# 201 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenUsedDevonScope, MSGBOX_DEFAULT
# 202 "data/maps/Route120/scripts.pory"
	closemessage
# 203 "data/maps/Route120/scripts.pory"
	applymovement LOCALID_BRIDGE_KECLEON, Common_Movement_WalkInPlaceFasterRight
# 204 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 205 "data/maps/Route120/scripts.pory"
	applymovement LOCALID_BRIDGE_KECLEON, Movement_KecleonAppears
# 206 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 207 "data/maps/Route120/scripts.pory"
	waitse
# 208 "data/maps/Route120/scripts.pory"
	playmoncry SPECIES_KECLEON, CRY_MODE_ENCOUNTER
# 209 "data/maps/Route120/scripts.pory"
	delay 40
# 210 "data/maps/Route120/scripts.pory"
	waitmoncry
# 211 "data/maps/Route120/scripts.pory"
	setwildbattle SPECIES_KECLEON, 35
# 212 "data/maps/Route120/scripts.pory"
	setvar VAR_0x8009, 0
# 213 "data/maps/Route120/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 214 "data/maps/Route120/scripts.pory"
	dowildbattle
# 215 "data/maps/Route120/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 216 "data/maps/Route120/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 217 "data/maps/Route120/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, Route120_EventScript_RemoveBridgeKecleonPostBattle
# 218 "data/maps/Route120/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, Route120_EventScript_RemoveBridgeKecleonPostBattle
# 219 "data/maps/Route120/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, Route120_EventScript_RemoveBridgeKecleonPostBattle
# 220 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_StevenGiveDeconScope
# 221 "data/maps/Route120/scripts.pory"
	end
# 222 "data/maps/Route120/scripts.pory"

# 223 "data/maps/Route120/scripts.pory"
Route120_EventScript_RemoveBridgeKecleonPostBattle::
# 224 "data/maps/Route120/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 225 "data/maps/Route120/scripts.pory"
	removeobject LOCALID_BRIDGE_KECLEON
# 226 "data/maps/Route120/scripts.pory"
	removeobject LOCALID_BRIDGE_KECLEON_SHADOW
# 227 "data/maps/Route120/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 228 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_StevenGiveDeconScope
# 229 "data/maps/Route120/scripts.pory"
	end
# 230 "data/maps/Route120/scripts.pory"

# 231 "data/maps/Route120/scripts.pory"
Route120_EventScript_StevenGiveDeconScope::
# 232 "data/maps/Route120/scripts.pory"
	applymovement LOCALID_ROUTE120_STEVEN, Common_Movement_WalkInPlaceFasterDown
# 233 "data/maps/Route120/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 234 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 235 "data/maps/Route120/scripts.pory"
	speakername (CommonText_Steven)
# 236 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenGiveDevonScope, MSGBOX_DEFAULT
# 237 "data/maps/Route120/scripts.pory"
	closemessage
# 238 "data/maps/Route120/scripts.pory"
	giveitem ITEM_DEVON_SCOPE
# 239 "data/maps/Route120/scripts.pory"
	setflag FLAG_RECEIVED_DEVON_SCOPE
# 240 "data/maps/Route120/scripts.pory"
	speakername (CommonText_Steven)
# 241 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenGoodbye, MSGBOX_DEFAULT
# 242 "data/maps/Route120/scripts.pory"
	closemessage
# 243 "data/maps/Route120/scripts.pory"
	applymovement LOCALID_ROUTE120_STEVEN, Common_Movement_WalkInPlaceFasterDown
# 244 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 245 "data/maps/Route120/scripts.pory"
	delay 50
# 246 "data/maps/Route120/scripts.pory"
	setfieldeffectargument 0, 1
# 247 "data/maps/Route120/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 248 "data/maps/Route120/scripts.pory"
	delay 15
# 249 "data/maps/Route120/scripts.pory"
	removeobject LOCALID_ROUTE120_STEVEN
# 250 "data/maps/Route120/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 251 "data/maps/Route120/scripts.pory"
	setmetatile 13, 15, METATILE_Fortree_WoodBridge1_Top, FALSE
# 252 "data/maps/Route120/scripts.pory"
	setmetatile 12, 16, METATILE_Fortree_WoodBridge1_Bottom, FALSE
# 253 "data/maps/Route120/scripts.pory"
	setmetatile 12, 17, METATILE_General_ReflectiveWater, FALSE
# 254 "data/maps/Route120/scripts.pory"
	setmetatile 13, 17, METATILE_General_ReflectiveWater, FALSE
# 255 "data/maps/Route120/scripts.pory"
	special DrawWholeMapView
# 256 "data/maps/Route120/scripts.pory"
	release
# 257 "data/maps/Route120/scripts.pory"
	end
# 258 "data/maps/Route120/scripts.pory"

# 259 "data/maps/Route120/scripts.pory"
Route120_EventScript_PlayerApproachKecleonNorth::
# 260 "data/maps/Route120/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 261 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 262 "data/maps/Route120/scripts.pory"
	return
# 263 "data/maps/Route120/scripts.pory"

# 264 "data/maps/Route120/scripts.pory"
Route120_EventScript_PlayerApproachKecleonWest::
# 265 "data/maps/Route120/scripts.pory"
	applymovement LOCALID_PLAYER, Route120_Movement_ApproachKecleonWest
# 266 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 267 "data/maps/Route120/scripts.pory"
	return
# 268 "data/maps/Route120/scripts.pory"

# 269 "data/maps/Route120/scripts.pory"
Route120_Movement_ApproachKecleonWest:
# 270 "data/maps/Route120/scripts.pory"
	walk_down
# 271 "data/maps/Route120/scripts.pory"
	walk_left
# 272 "data/maps/Route120/scripts.pory"
	step_end
# 273 "data/maps/Route120/scripts.pory"

# 274 "data/maps/Route120/scripts.pory"
Route120_EventScript_BridgeKecleon::
# 275 "data/maps/Route120/scripts.pory"
	msgbox Kecleon_Text_SomethingUnseeable, MSGBOX_NPC
# 276 "data/maps/Route120/scripts.pory"
	end
# 277 "data/maps/Route120/scripts.pory"

# 278 "data/maps/Route120/scripts.pory"
Route120_EventScript_RouteSignFortree::
# 279 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_RouteSignFortree, MSGBOX_SIGN
# 280 "data/maps/Route120/scripts.pory"
	end
# 281 "data/maps/Route120/scripts.pory"

# 282 "data/maps/Route120/scripts.pory"
Route120_EventScript_RouteSign121::
# 283 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_RouteSign121, MSGBOX_SIGN
# 284 "data/maps/Route120/scripts.pory"
	end
# 285 "data/maps/Route120/scripts.pory"

# 286 "data/maps/Route120/scripts.pory"
Route120_EventScript_Colin::
# 287 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_COLIN, Route120_Text_ColinIntro, Route120_Text_ColinDefeat
# 288 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_ColinPostBattle, MSGBOX_AUTOCLOSE
# 289 "data/maps/Route120/scripts.pory"
	end
# 290 "data/maps/Route120/scripts.pory"

# 291 "data/maps/Route120/scripts.pory"
Route120_EventScript_Robert::
# 292 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_ROBERT_1, Route120_Text_RobertIntro, Route120_Text_RobertDefeat, Route120_EventScript_RegisterRobert
# 293 "data/maps/Route120/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 294 "data/maps/Route120/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route120_EventScript_RematchRobert
# 295 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_RobertPostBattle, MSGBOX_DEFAULT
# 296 "data/maps/Route120/scripts.pory"
	release
# 297 "data/maps/Route120/scripts.pory"
	end
# 298 "data/maps/Route120/scripts.pory"

# 299 "data/maps/Route120/scripts.pory"
Route120_EventScript_RegisterRobert::
# 300 "data/maps/Route120/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 301 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 302 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_RobertRegister, MSGBOX_DEFAULT
# 303 "data/maps/Route120/scripts.pory"
	register_matchcall TRAINER_ROBERT_1
# 304 "data/maps/Route120/scripts.pory"
	release
# 305 "data/maps/Route120/scripts.pory"
	end
# 306 "data/maps/Route120/scripts.pory"

# 307 "data/maps/Route120/scripts.pory"
Route120_EventScript_RematchRobert::
# 308 "data/maps/Route120/scripts.pory"
	trainerbattle_rematch TRAINER_ROBERT_1, Route120_Text_RobertRematchIntro, Route120_Text_RobertRematchDefeat
# 309 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_RobertPostRematch, MSGBOX_AUTOCLOSE
# 310 "data/maps/Route120/scripts.pory"
	end
# 311 "data/maps/Route120/scripts.pory"

# 312 "data/maps/Route120/scripts.pory"
Route120_EventScript_Lorenzo::
# 313 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_LORENZO, Route120_Text_LorenzoIntro, Route120_Text_LorenzoDefeat
# 314 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_LorenzoPostBattle, MSGBOX_AUTOCLOSE
# 315 "data/maps/Route120/scripts.pory"
	end
# 316 "data/maps/Route120/scripts.pory"

# 317 "data/maps/Route120/scripts.pory"
Route120_EventScript_Jenna::
# 318 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_JENNA, Route120_Text_JennaIntro, Route120_Text_JennaDefeat
# 319 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_JennaPostBattle, MSGBOX_AUTOCLOSE
# 320 "data/maps/Route120/scripts.pory"
	end
# 321 "data/maps/Route120/scripts.pory"

# 322 "data/maps/Route120/scripts.pory"
Route120_EventScript_Jeffrey::
# 323 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_JEFFREY_1, Route120_Text_JeffreyIntro, Route120_Text_JeffreyDefeat, Route120_EventScript_RegisterJeffrey
# 324 "data/maps/Route120/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 325 "data/maps/Route120/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route120_EventScript_RematchJeffrey
# 326 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_JeffreyPostBattle, MSGBOX_DEFAULT
# 327 "data/maps/Route120/scripts.pory"
	release
# 328 "data/maps/Route120/scripts.pory"
	end
# 329 "data/maps/Route120/scripts.pory"

# 330 "data/maps/Route120/scripts.pory"
Route120_EventScript_RegisterJeffrey::
# 331 "data/maps/Route120/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 332 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 333 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_JeffreyRegister, MSGBOX_DEFAULT
# 334 "data/maps/Route120/scripts.pory"
	register_matchcall TRAINER_JEFFREY_1
# 335 "data/maps/Route120/scripts.pory"
	release
# 336 "data/maps/Route120/scripts.pory"
	end
# 337 "data/maps/Route120/scripts.pory"

# 338 "data/maps/Route120/scripts.pory"
Route120_EventScript_RematchJeffrey::
# 339 "data/maps/Route120/scripts.pory"
	trainerbattle_rematch TRAINER_JEFFREY_1, Route120_Text_JeffreyRematchIntro, Route120_Text_JeffreyRematchDefeat
# 340 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_JeffreyPostRematch, MSGBOX_AUTOCLOSE
# 341 "data/maps/Route120/scripts.pory"
	end
# 342 "data/maps/Route120/scripts.pory"

# 343 "data/maps/Route120/scripts.pory"
Route120_EventScript_Jennifer::
# 344 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_JENNIFER, Route120_Text_JenniferIntro, Route120_Text_JenniferDefeat
# 345 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_JenniferPostBattle, MSGBOX_AUTOCLOSE
# 346 "data/maps/Route120/scripts.pory"
	end
# 347 "data/maps/Route120/scripts.pory"

# 348 "data/maps/Route120/scripts.pory"
Route120_EventScript_Chip::
# 349 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_CHIP, Route120_Text_ChipIntro, Route120_Text_ChipDefeat
# 350 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_ChipPostBattle, MSGBOX_AUTOCLOSE
# 351 "data/maps/Route120/scripts.pory"
	end
# 352 "data/maps/Route120/scripts.pory"

# 353 "data/maps/Route120/scripts.pory"
Route120_EventScript_Clarissa::
# 354 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_CLARISSA, Route120_Text_ClarissaIntro, Route120_Text_ClarissaDefeat
# 355 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_ClarissaPostBattle, MSGBOX_AUTOCLOSE
# 356 "data/maps/Route120/scripts.pory"
	end
# 357 "data/maps/Route120/scripts.pory"

# 358 "data/maps/Route120/scripts.pory"
Route120_EventScript_Angelica::
# 359 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_ANGELICA, Route120_Text_AngelicaIntro, Route120_Text_AngelicaDefeat
# 360 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_AngelicaPostBattle, MSGBOX_AUTOCLOSE
# 361 "data/maps/Route120/scripts.pory"
	end
# 362 "data/maps/Route120/scripts.pory"

# 363 "data/maps/Route120/scripts.pory"
Route120_EventScript_Keigo::
# 364 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_KEIGO, Route120_Text_KeigoIntro, Route120_Text_KeigoDefeat
# 365 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_KeigoPostBattle, MSGBOX_AUTOCLOSE
# 366 "data/maps/Route120/scripts.pory"
	end
# 367 "data/maps/Route120/scripts.pory"

# 368 "data/maps/Route120/scripts.pory"
Route120_EventScript_Riley::
# 369 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_RILEY, Route120_Text_RileyIntro, Route120_Text_RileyDefeat
# 370 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_RileyPostBattle, MSGBOX_AUTOCLOSE
# 371 "data/maps/Route120/scripts.pory"
	end
# 372 "data/maps/Route120/scripts.pory"

# 373 "data/maps/Route120/scripts.pory"
Route120_EventScript_Leonel::
# 374 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_LEONEL, Route120_Text_LeonelIntro, Route120_Text_LeonelDefeat
# 375 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_LeonelPostBattle, MSGBOX_AUTOCLOSE
# 376 "data/maps/Route120/scripts.pory"
	end
# 377 "data/maps/Route120/scripts.pory"

# 378 "data/maps/Route120/scripts.pory"
Route120_EventScript_Callie::
# 379 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_CALLIE, Route120_Text_CallieIntro, Route120_Text_CallieDefeat
# 380 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_CalliePostBattle, MSGBOX_AUTOCLOSE
# 381 "data/maps/Route120/scripts.pory"
	end
# 382 "data/maps/Route120/scripts.pory"

# 383 "data/maps/Route120/scripts.pory"
Route120_Text_StevenGreeting:
# 384 "data/maps/Route120/scripts.pory"
	.string "Hm? {PLAYER}{KUN}, hi.\n"
# 385 "data/maps/Route120/scripts.pory"
	.string "It's been a while.\p"
# 386 "data/maps/Route120/scripts.pory"
	.string "There's something here that you can't\n"
# 387 "data/maps/Route120/scripts.pory"
	.string "see, right?\p"
# 388 "data/maps/Route120/scripts.pory"
	.string "Now, if I were to use this device on\n"
# 389 "data/maps/Route120/scripts.pory"
	.string "the invisible obstacle…\p"
# 390 "data/maps/Route120/scripts.pory"
	.string "No, no. Rather than describing it,\n"
# 391 "data/maps/Route120/scripts.pory"
	.string "I should just show you.\l"
# 392 "data/maps/Route120/scripts.pory"
	.string "That would be more fun.\p"
# 393 "data/maps/Route120/scripts.pory"
	.string "{PLAYER}{KUN}, are your Pokémon ready for\n"
# 394 "data/maps/Route120/scripts.pory"
	.string "battle?$"
# 395 "data/maps/Route120/scripts.pory"

# 396 "data/maps/Route120/scripts.pory"
Route120_Text_StevenIllWaitHere:
# 397 "data/maps/Route120/scripts.pory"
	.string "No?\p"
# 398 "data/maps/Route120/scripts.pory"
	.string "I'll wait here, so you can get ready.$"
# 399 "data/maps/Route120/scripts.pory"

# 400 "data/maps/Route120/scripts.pory"
Route120_Text_StevenReadyForBattle:
# 401 "data/maps/Route120/scripts.pory"
	.string "{PLAYER}{KUN}, are your Pokémon\n"
# 402 "data/maps/Route120/scripts.pory"
	.string "ready for battle?$"
# 403 "data/maps/Route120/scripts.pory"

# 404 "data/maps/Route120/scripts.pory"
Route120_Text_StevenShowMeYourPower:
# 405 "data/maps/Route120/scripts.pory"
	.string "{PLAYER}{KUN}, show me your true\n"
# 406 "data/maps/Route120/scripts.pory"
	.string "power as a Trainer!$"
# 407 "data/maps/Route120/scripts.pory"

# 408 "data/maps/Route120/scripts.pory"
Route120_Text_StevenUsedDevonScope:
# 409 "data/maps/Route120/scripts.pory"
	.string "Steven used the Devon Scope.\p"
# 410 "data/maps/Route120/scripts.pory"
	.string "An invisible Pokémon became completely\n"
# 411 "data/maps/Route120/scripts.pory"
	.string "visible!\p"
# 412 "data/maps/Route120/scripts.pory"
	.string "The startled Pokémon attacked!$"
# 413 "data/maps/Route120/scripts.pory"

# 414 "data/maps/Route120/scripts.pory"
Route120_Text_StevenGiveDevonScope:
# 415 "data/maps/Route120/scripts.pory"
	.string "I see…\n"
# 416 "data/maps/Route120/scripts.pory"
	.string "Your battle style is intriguing.\p"
# 417 "data/maps/Route120/scripts.pory"
	.string "Your Pokémon have obviously grown\n"
# 418 "data/maps/Route120/scripts.pory"
	.string "since I first met you in Dewford.\p"
# 419 "data/maps/Route120/scripts.pory"
	.string "I'd like you to have this\n"
# 420 "data/maps/Route120/scripts.pory"
	.string "Devon Scope.\p"
# 421 "data/maps/Route120/scripts.pory"
	.string "Who knows, there may be other\n"
# 422 "data/maps/Route120/scripts.pory"
	.string "concealed Pokémon.$"
# 423 "data/maps/Route120/scripts.pory"

# 424 "data/maps/Route120/scripts.pory"
Route120_Text_StevenGoodbye:
# 425 "data/maps/Route120/scripts.pory"
	.string "{PLAYER}{KUN}.\p"
# 426 "data/maps/Route120/scripts.pory"
	.string "I enjoy seeing Pokémon and Trainers\n"
# 427 "data/maps/Route120/scripts.pory"
	.string "who strive together.\p"
# 428 "data/maps/Route120/scripts.pory"
	.string "I think you're doing great.\p"
# 429 "data/maps/Route120/scripts.pory"
	.string "Well, let's meet again somewhere.$"
# 430 "data/maps/Route120/scripts.pory"

# 431 "data/maps/Route120/scripts.pory"
Kecleon_Text_SomethingUnseeable:
# 432 "data/maps/Route120/scripts.pory"
	.string "Something unseeable is in the way.$"
# 433 "data/maps/Route120/scripts.pory"

# 434 "data/maps/Route120/scripts.pory"
Kecleon_Text_WantToUseDevonScope:
# 435 "data/maps/Route120/scripts.pory"
	.string "Something unseeable is in the way.\p"
# 436 "data/maps/Route120/scripts.pory"
	.string "Want to use the Devon Scope?$"
# 437 "data/maps/Route120/scripts.pory"

# 438 "data/maps/Route120/scripts.pory"
Kecleon_Text_UseDevonScopeMonAttacked:
# 439 "data/maps/Route120/scripts.pory"
	.string "{PLAYER} used the Devon Scope.\p"
# 440 "data/maps/Route120/scripts.pory"
	.string "An invisible Pokémon became completely\n"
# 441 "data/maps/Route120/scripts.pory"
	.string "visible!\p"
# 442 "data/maps/Route120/scripts.pory"
	.string "The startled Pokémon attacked!$"
# 443 "data/maps/Route120/scripts.pory"

# 444 "data/maps/Route120/scripts.pory"
Route120_Text_RouteSignFortree:
# 445 "data/maps/Route120/scripts.pory"
	.string "Route 120\n"
# 446 "data/maps/Route120/scripts.pory"
	.string "{LEFT_ARROW} Fortree City$"
# 447 "data/maps/Route120/scripts.pory"

# 448 "data/maps/Route120/scripts.pory"
Route120_Text_RouteSign121:
# 449 "data/maps/Route120/scripts.pory"
	.string "{RIGHT_ARROW} Route 121\n"
# 450 "data/maps/Route120/scripts.pory"
	.string "{LEFT_ARROW} Route 120$"

RealmsFrayIntroEvent::
# 454 "data/maps/Route120/scripts.pory"
	lock
# 455 "data/maps/Route120/scripts.pory"
	special SpawnCameraObject
# 456 "data/maps/Route120/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp2
# 457 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 458 "data/maps/Route120/scripts.pory"
	applymovement RIVAL_ROUTE120, Rival_RealmsFray_Move1
# 459 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 460 "data/maps/Route120/scripts.pory"
	setvar VAR_ROUTE120_STATE, 1
# 461 "data/maps/Route120/scripts.pory"
	hideobjectat RIVAL_ROUTE120, MAP_ROUTE120
# 462 "data/maps/Route120/scripts.pory"
	removeobject RIVAL_ROUTE120
# 463 "data/maps/Route120/scripts.pory"
	setflag FLAG_TEMP_2
# 464 "data/maps/Route120/scripts.pory"
	delay 20
# 465 "data/maps/Route120/scripts.pory"
	playse SE_PIN
# 466 "data/maps/Route120/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 467 "data/maps/Route120/scripts.pory"
	delay 20
# 468 "data/maps/Route120/scripts.pory"
	waitse
# 469 "data/maps/Route120/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown2
# 470 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 471 "data/maps/Route120/scripts.pory"
	special RemoveCameraObject
# 472 "data/maps/Route120/scripts.pory"
	release
	end


# 476 "data/maps/Route120/scripts.pory"
Rival_RealmsFray_Move1:
# 477 "data/maps/Route120/scripts.pory"
	delay_16
# 477 "data/maps/Route120/scripts.pory"
	delay_16
# 477 "data/maps/Route120/scripts.pory"
	delay_16
# 478 "data/maps/Route120/scripts.pory"
	face_down
# 479 "data/maps/Route120/scripts.pory"
	delay_16
# 479 "data/maps/Route120/scripts.pory"
	delay_16
# 479 "data/maps/Route120/scripts.pory"
	delay_16
# 480 "data/maps/Route120/scripts.pory"
	walk_up
	step_end

Route120_Portal::
# 484 "data/maps/Route120/scripts.pory"
	warp MAP_REALMS_FRAY, 0
	return

