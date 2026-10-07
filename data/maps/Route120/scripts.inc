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
	setflag FLAG_TEMP_1
# 66 "data/maps/Route120/scripts.pory"
	call GabbyAndTy_EventScript_UpdateLocation
# 67 "data/maps/Route120/scripts.pory"
	call Route120_EventScript_SetWeather
# 68 "data/maps/Route120/scripts.pory"
	call AllRivalsGraphicsMusicRandomize
# 69 "data/maps/Route120/scripts.pory"
	call Common_EventScript_SetupEmRivalGfxId
# 70 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_ROUTE120_STATE, 1, Route120_EventScript_HideRival
# 71 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_EMERALBODY_RIVAL_STATE, 10, EventScript_Clear_FlagTemp1 @ Show Rivals
# 72 "data/maps/Route120/scripts.pory"
	end
# 73 "data/maps/Route120/scripts.pory"

# 74 "data/maps/Route120/scripts.pory"
Route120_EventScript_SetWeather::
# 75 "data/maps/Route120/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 76 "data/maps/Route120/scripts.pory"
	goto_if_le VAR_TEMP_1, 14, Route120_EventScript_SetSunnyWeather
# 77 "data/maps/Route120/scripts.pory"
	goto_if_le VAR_TEMP_1, 60, Route120_EventScript_TrySetRainyWeather
# 78 "data/maps/Route120/scripts.pory"
	goto_if_ge VAR_TEMP_1, 61, Route120_EventScript_SetCloudyWeather
# 79 "data/maps/Route120/scripts.pory"
	return
# 80 "data/maps/Route120/scripts.pory"

# 81 "data/maps/Route120/scripts.pory"
Route120_EventScript_SetCloudyWeather::
# 82 "data/maps/Route120/scripts.pory"
	setweather WEATHER_SUNNY_CLOUDS
# 83 "data/maps/Route120/scripts.pory"
	return
# 84 "data/maps/Route120/scripts.pory"

# 85 "data/maps/Route120/scripts.pory"
Route120_EventScript_SetSunnyWeather::
# 86 "data/maps/Route120/scripts.pory"
	setweather WEATHER_SUNNY
# 87 "data/maps/Route120/scripts.pory"
	return
# 88 "data/maps/Route120/scripts.pory"

# 89 "data/maps/Route120/scripts.pory"
Route120_EventScript_TrySetRainyWeather::
# 90 "data/maps/Route120/scripts.pory"
	goto_if_le VAR_TEMP_0, 7, Route120_EventScript_SetRainyWeather
# 91 "data/maps/Route120/scripts.pory"
	goto_if_le VAR_TEMP_0, 19, Route120_EventScript_SetSunnyWeather
# 92 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_SetRainyWeather
# 93 "data/maps/Route120/scripts.pory"
	end
# 94 "data/maps/Route120/scripts.pory"

# 95 "data/maps/Route120/scripts.pory"
Route120_EventScript_SetRainyWeather::
# 96 "data/maps/Route120/scripts.pory"
	setweather WEATHER_RAIN
# 97 "data/maps/Route120/scripts.pory"
	return
# 98 "data/maps/Route120/scripts.pory"
	
# 99 "data/maps/Route120/scripts.pory"
Route120_EventScript_HideRival:
# 100 "data/maps/Route120/scripts.pory"
	setflag FLAG_TEMP_2
# 101 "data/maps/Route120/scripts.pory"
	return
# 102 "data/maps/Route120/scripts.pory"
	
# 103 "data/maps/Route120/scripts.pory"
Route120_EventScript_BerryBeauty::
# 104 "data/maps/Route120/scripts.pory"
	lock
# 105 "data/maps/Route120/scripts.pory"
	faceplayer
# 106 "data/maps/Route120/scripts.pory"
	dotimebasedevents
# 107 "data/maps/Route120/scripts.pory"
	goto_if_set FLAG_DAILY_ROUTE_120_RECEIVED_BERRY, Route120_EventScript_ReceivedBerry
# 108 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_BerriesExpressionOfLoveIsntIt, MSGBOX_YESNO
# 109 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_RESULT, YES, Route120_EventScript_BerryLove
# 110 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_RESULT, NO, Route120_EventScript_BerryNotLove
# 111 "data/maps/Route120/scripts.pory"
	specialvar VAR_RESULT, GetPlayerTrainerIdOnesDigit
# 112 "data/maps/Route120/scripts.pory"
	switch VAR_RESULT
# 113 "data/maps/Route120/scripts.pory"
	case 0, Route120_EventScript_GiveFigyBerry
# 114 "data/maps/Route120/scripts.pory"
	case 5, Route120_EventScript_GiveFigyBerry
# 115 "data/maps/Route120/scripts.pory"
	case 1, Route120_EventScript_GiveWikiBerry
# 116 "data/maps/Route120/scripts.pory"
	case 6, Route120_EventScript_GiveWikiBerry
# 117 "data/maps/Route120/scripts.pory"
	case 2, Route120_EventScript_GiveMagoBerry
# 118 "data/maps/Route120/scripts.pory"
	case 7, Route120_EventScript_GiveMagoBerry
# 119 "data/maps/Route120/scripts.pory"
	case 3, Route120_EventScript_GiveAguavBerry
# 120 "data/maps/Route120/scripts.pory"
	case 8, Route120_EventScript_GiveAguavBerry
# 121 "data/maps/Route120/scripts.pory"
	case 4, Route120_EventScript_GiveIapapaBerry
# 122 "data/maps/Route120/scripts.pory"
	case 9, Route120_EventScript_GiveIapapaBerry
# 123 "data/maps/Route120/scripts.pory"
	end
# 124 "data/maps/Route120/scripts.pory"

# 125 "data/maps/Route120/scripts.pory"
Route120_EventScript_GiveFigyBerry::
# 126 "data/maps/Route120/scripts.pory"
	setvar VAR_0x8004, ITEM_FIGY_BERRY
# 127 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_GiveBerry
# 128 "data/maps/Route120/scripts.pory"
	end
# 129 "data/maps/Route120/scripts.pory"

# 130 "data/maps/Route120/scripts.pory"
Route120_EventScript_GiveWikiBerry::
# 131 "data/maps/Route120/scripts.pory"
	setvar VAR_0x8004, ITEM_WIKI_BERRY
# 132 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_GiveBerry
# 133 "data/maps/Route120/scripts.pory"
	end
# 134 "data/maps/Route120/scripts.pory"

# 135 "data/maps/Route120/scripts.pory"
Route120_EventScript_GiveMagoBerry::
# 136 "data/maps/Route120/scripts.pory"
	setvar VAR_0x8004, ITEM_MAGO_BERRY
# 137 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_GiveBerry
# 138 "data/maps/Route120/scripts.pory"
	end
# 139 "data/maps/Route120/scripts.pory"

# 140 "data/maps/Route120/scripts.pory"
Route120_EventScript_GiveAguavBerry::
# 141 "data/maps/Route120/scripts.pory"
	setvar VAR_0x8004, ITEM_AGUAV_BERRY
# 142 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_GiveBerry
# 143 "data/maps/Route120/scripts.pory"
	end
# 144 "data/maps/Route120/scripts.pory"

# 145 "data/maps/Route120/scripts.pory"
Route120_EventScript_GiveIapapaBerry::
# 146 "data/maps/Route120/scripts.pory"
	setvar VAR_0x8004, ITEM_IAPAPA_BERRY
# 147 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_GiveBerry
# 148 "data/maps/Route120/scripts.pory"
	end
# 149 "data/maps/Route120/scripts.pory"

# 150 "data/maps/Route120/scripts.pory"
Route120_EventScript_GiveBerry::
# 151 "data/maps/Route120/scripts.pory"
	giveitem VAR_0x8004
# 152 "data/maps/Route120/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 153 "data/maps/Route120/scripts.pory"
	setflag FLAG_DAILY_ROUTE_120_RECEIVED_BERRY
# 154 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_BerryIsRareRaiseItWithCare, MSGBOX_DEFAULT
# 155 "data/maps/Route120/scripts.pory"
	release
# 156 "data/maps/Route120/scripts.pory"
	end
# 157 "data/maps/Route120/scripts.pory"

# 158 "data/maps/Route120/scripts.pory"
Route120_EventScript_ReceivedBerry::
# 159 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_IllGetMoreBerriesFromBerryMaster, MSGBOX_DEFAULT
# 160 "data/maps/Route120/scripts.pory"
	release
# 161 "data/maps/Route120/scripts.pory"
	end
# 162 "data/maps/Route120/scripts.pory"

# 163 "data/maps/Route120/scripts.pory"
Route120_EventScript_BerryLove::
# 164 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_YesYouUnderstand, MSGBOX_DEFAULT
# 165 "data/maps/Route120/scripts.pory"
	return
# 166 "data/maps/Route120/scripts.pory"

# 167 "data/maps/Route120/scripts.pory"
Route120_EventScript_BerryNotLove::
# 168 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_MakeYourOwnImpressions, MSGBOX_DEFAULT
# 169 "data/maps/Route120/scripts.pory"
	return
# 170 "data/maps/Route120/scripts.pory"

# 171 "data/maps/Route120/scripts.pory"
Route120_EventScript_Steven::
# 172 "data/maps/Route120/scripts.pory"
	lock
# 173 "data/maps/Route120/scripts.pory"
	faceplayer
# 174 "data/maps/Route120/scripts.pory"
	goto_if_set FLAG_NOT_READY_FOR_BATTLE_ROUTE_120, Route120_EventScript_StevenAskReadyForBattle
# 175 "data/maps/Route120/scripts.pory"
	speakername (CommonText_Steven)
# 176 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenGreeting, MSGBOX_YESNO
# 177 "data/maps/Route120/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route120_EventScript_StevenNotReady
# 178 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_StevenBattleKecleon
# 179 "data/maps/Route120/scripts.pory"
	end
# 180 "data/maps/Route120/scripts.pory"

# 181 "data/maps/Route120/scripts.pory"
Route120_EventScript_StevenNotReady::
# 182 "data/maps/Route120/scripts.pory"
	speakername (CommonText_Steven)
# 183 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenIllWaitHere, MSGBOX_DEFAULT
# 184 "data/maps/Route120/scripts.pory"
	setflag FLAG_NOT_READY_FOR_BATTLE_ROUTE_120
# 185 "data/maps/Route120/scripts.pory"
	release
# 186 "data/maps/Route120/scripts.pory"
	end
# 187 "data/maps/Route120/scripts.pory"

# 188 "data/maps/Route120/scripts.pory"
Route120_EventScript_StevenAskReadyForBattle::
# 189 "data/maps/Route120/scripts.pory"
	speakername (CommonText_Steven)
# 190 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenReadyForBattle, MSGBOX_YESNO
# 191 "data/maps/Route120/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route120_EventScript_StevenNotReady
# 192 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_StevenBattleKecleon
# 193 "data/maps/Route120/scripts.pory"
	end
# 194 "data/maps/Route120/scripts.pory"

# 195 "data/maps/Route120/scripts.pory"
Route120_EventScript_StevenBattleKecleon::
# 196 "data/maps/Route120/scripts.pory"
	speakername (CommonText_Steven)
# 197 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenShowMeYourPower, MSGBOX_DEFAULT
# 198 "data/maps/Route120/scripts.pory"
	closemessage
# 199 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, Route120_EventScript_PlayerApproachKecleonNorth
# 200 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, Route120_EventScript_PlayerApproachKecleonWest
# 201 "data/maps/Route120/scripts.pory"
	applymovement LOCALID_ROUTE120_STEVEN, Common_Movement_WalkInPlaceFasterLeft
# 202 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 203 "data/maps/Route120/scripts.pory"
	delay 20
# 204 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenUsedDevonScope, MSGBOX_DEFAULT
# 205 "data/maps/Route120/scripts.pory"
	closemessage
# 206 "data/maps/Route120/scripts.pory"
	applymovement LOCALID_BRIDGE_KECLEON, Common_Movement_WalkInPlaceFasterRight
# 207 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 208 "data/maps/Route120/scripts.pory"
	applymovement LOCALID_BRIDGE_KECLEON, Movement_KecleonAppears
# 209 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 210 "data/maps/Route120/scripts.pory"
	waitse
# 211 "data/maps/Route120/scripts.pory"
	playmoncry SPECIES_KECLEON, CRY_MODE_ENCOUNTER
# 212 "data/maps/Route120/scripts.pory"
	delay 40
# 213 "data/maps/Route120/scripts.pory"
	waitmoncry
# 214 "data/maps/Route120/scripts.pory"
	setwildbattle SPECIES_KECLEON, 35
# 215 "data/maps/Route120/scripts.pory"
	setvar VAR_0x8009, 0
# 216 "data/maps/Route120/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 217 "data/maps/Route120/scripts.pory"
	dowildbattle
# 218 "data/maps/Route120/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 219 "data/maps/Route120/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 220 "data/maps/Route120/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, Route120_EventScript_RemoveBridgeKecleonPostBattle
# 221 "data/maps/Route120/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, Route120_EventScript_RemoveBridgeKecleonPostBattle
# 222 "data/maps/Route120/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, Route120_EventScript_RemoveBridgeKecleonPostBattle
# 223 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_StevenGiveDeconScope
# 224 "data/maps/Route120/scripts.pory"
	end
# 225 "data/maps/Route120/scripts.pory"

# 226 "data/maps/Route120/scripts.pory"
Route120_EventScript_RemoveBridgeKecleonPostBattle::
# 227 "data/maps/Route120/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 228 "data/maps/Route120/scripts.pory"
	removeobject LOCALID_BRIDGE_KECLEON
# 229 "data/maps/Route120/scripts.pory"
	removeobject LOCALID_BRIDGE_KECLEON_SHADOW
# 230 "data/maps/Route120/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 231 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_StevenGiveDeconScope
# 232 "data/maps/Route120/scripts.pory"
	end
# 233 "data/maps/Route120/scripts.pory"

# 234 "data/maps/Route120/scripts.pory"
Route120_EventScript_StevenGiveDeconScope::
# 235 "data/maps/Route120/scripts.pory"
	applymovement LOCALID_ROUTE120_STEVEN, Common_Movement_WalkInPlaceFasterDown
# 236 "data/maps/Route120/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 237 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 238 "data/maps/Route120/scripts.pory"
	speakername (CommonText_Steven)
# 239 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenGiveDevonScope, MSGBOX_DEFAULT
# 240 "data/maps/Route120/scripts.pory"
	closemessage
# 241 "data/maps/Route120/scripts.pory"
	giveitem ITEM_DEVON_SCOPE
# 242 "data/maps/Route120/scripts.pory"
	setflag FLAG_RECEIVED_DEVON_SCOPE
# 243 "data/maps/Route120/scripts.pory"
	speakername (CommonText_Steven)
# 244 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenGoodbye, MSGBOX_DEFAULT
# 245 "data/maps/Route120/scripts.pory"
	closemessage
# 246 "data/maps/Route120/scripts.pory"
	applymovement LOCALID_ROUTE120_STEVEN, Common_Movement_WalkInPlaceFasterDown
# 247 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 248 "data/maps/Route120/scripts.pory"
	delay 50
# 249 "data/maps/Route120/scripts.pory"
	setfieldeffectargument 0, 1
# 250 "data/maps/Route120/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 251 "data/maps/Route120/scripts.pory"
	delay 15
# 252 "data/maps/Route120/scripts.pory"
	removeobject LOCALID_ROUTE120_STEVEN
# 253 "data/maps/Route120/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 254 "data/maps/Route120/scripts.pory"
	setmetatile 13, 15, METATILE_Fortree_WoodBridge1_Top, FALSE
# 255 "data/maps/Route120/scripts.pory"
	setmetatile 12, 16, METATILE_Fortree_WoodBridge1_Bottom, FALSE
# 256 "data/maps/Route120/scripts.pory"
	setmetatile 12, 17, METATILE_General_ReflectiveWater, FALSE
# 257 "data/maps/Route120/scripts.pory"
	setmetatile 13, 17, METATILE_General_ReflectiveWater, FALSE
# 258 "data/maps/Route120/scripts.pory"
	special DrawWholeMapView
# 259 "data/maps/Route120/scripts.pory"
	release
# 260 "data/maps/Route120/scripts.pory"
	end
# 261 "data/maps/Route120/scripts.pory"

# 262 "data/maps/Route120/scripts.pory"
Route120_EventScript_PlayerApproachKecleonNorth::
# 263 "data/maps/Route120/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 264 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 265 "data/maps/Route120/scripts.pory"
	return
# 266 "data/maps/Route120/scripts.pory"

# 267 "data/maps/Route120/scripts.pory"
Route120_EventScript_PlayerApproachKecleonWest::
# 268 "data/maps/Route120/scripts.pory"
	applymovement LOCALID_PLAYER, Route120_Movement_ApproachKecleonWest
# 269 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 270 "data/maps/Route120/scripts.pory"
	return
# 271 "data/maps/Route120/scripts.pory"

# 272 "data/maps/Route120/scripts.pory"
Route120_Movement_ApproachKecleonWest:
# 273 "data/maps/Route120/scripts.pory"
	walk_down
# 274 "data/maps/Route120/scripts.pory"
	walk_left
# 275 "data/maps/Route120/scripts.pory"
	step_end
# 276 "data/maps/Route120/scripts.pory"

# 277 "data/maps/Route120/scripts.pory"
Route120_EventScript_BridgeKecleon::
# 278 "data/maps/Route120/scripts.pory"
	msgbox Kecleon_Text_SomethingUnseeable, MSGBOX_NPC
# 279 "data/maps/Route120/scripts.pory"
	end
# 280 "data/maps/Route120/scripts.pory"

# 281 "data/maps/Route120/scripts.pory"
Route120_EventScript_RouteSignFortree::
# 282 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_RouteSignFortree, MSGBOX_SIGN
# 283 "data/maps/Route120/scripts.pory"
	end
# 284 "data/maps/Route120/scripts.pory"

# 285 "data/maps/Route120/scripts.pory"
Route120_EventScript_RouteSign121::
# 286 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_RouteSign121, MSGBOX_SIGN
# 287 "data/maps/Route120/scripts.pory"
	end
# 288 "data/maps/Route120/scripts.pory"

# 289 "data/maps/Route120/scripts.pory"
Route120_EventScript_Colin::
# 290 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_COLIN, Route120_Text_ColinIntro, Route120_Text_ColinDefeat
# 291 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_ColinPostBattle, MSGBOX_AUTOCLOSE
# 292 "data/maps/Route120/scripts.pory"
	end
# 293 "data/maps/Route120/scripts.pory"

# 294 "data/maps/Route120/scripts.pory"
Route120_EventScript_Robert::
# 295 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_ROBERT_1, Route120_Text_RobertIntro, Route120_Text_RobertDefeat, Route120_EventScript_RegisterRobert
# 296 "data/maps/Route120/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 297 "data/maps/Route120/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route120_EventScript_RematchRobert
# 298 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_RobertPostBattle, MSGBOX_DEFAULT
# 299 "data/maps/Route120/scripts.pory"
	release
# 300 "data/maps/Route120/scripts.pory"
	end
# 301 "data/maps/Route120/scripts.pory"

# 302 "data/maps/Route120/scripts.pory"
Route120_EventScript_RegisterRobert::
# 303 "data/maps/Route120/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 304 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 305 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_RobertRegister, MSGBOX_DEFAULT
# 306 "data/maps/Route120/scripts.pory"
	register_matchcall TRAINER_ROBERT_1
# 307 "data/maps/Route120/scripts.pory"
	release
# 308 "data/maps/Route120/scripts.pory"
	end
# 309 "data/maps/Route120/scripts.pory"

# 310 "data/maps/Route120/scripts.pory"
Route120_EventScript_RematchRobert::
# 311 "data/maps/Route120/scripts.pory"
	trainerbattle_rematch TRAINER_ROBERT_1, Route120_Text_RobertRematchIntro, Route120_Text_RobertRematchDefeat
# 312 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_RobertPostRematch, MSGBOX_AUTOCLOSE
# 313 "data/maps/Route120/scripts.pory"
	end
# 314 "data/maps/Route120/scripts.pory"

# 315 "data/maps/Route120/scripts.pory"
Route120_EventScript_Lorenzo::
# 316 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_LORENZO, Route120_Text_LorenzoIntro, Route120_Text_LorenzoDefeat
# 317 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_LorenzoPostBattle, MSGBOX_AUTOCLOSE
# 318 "data/maps/Route120/scripts.pory"
	end
# 319 "data/maps/Route120/scripts.pory"

# 320 "data/maps/Route120/scripts.pory"
Route120_EventScript_Jenna::
# 321 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_JENNA, Route120_Text_JennaIntro, Route120_Text_JennaDefeat
# 322 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_JennaPostBattle, MSGBOX_AUTOCLOSE
# 323 "data/maps/Route120/scripts.pory"
	end
# 324 "data/maps/Route120/scripts.pory"

# 325 "data/maps/Route120/scripts.pory"
Route120_EventScript_Jeffrey::
# 326 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_JEFFREY_1, Route120_Text_JeffreyIntro, Route120_Text_JeffreyDefeat, Route120_EventScript_RegisterJeffrey
# 327 "data/maps/Route120/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 328 "data/maps/Route120/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route120_EventScript_RematchJeffrey
# 329 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_JeffreyPostBattle, MSGBOX_DEFAULT
# 330 "data/maps/Route120/scripts.pory"
	release
# 331 "data/maps/Route120/scripts.pory"
	end
# 332 "data/maps/Route120/scripts.pory"

# 333 "data/maps/Route120/scripts.pory"
Route120_EventScript_RegisterJeffrey::
# 334 "data/maps/Route120/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 335 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 336 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_JeffreyRegister, MSGBOX_DEFAULT
# 337 "data/maps/Route120/scripts.pory"
	register_matchcall TRAINER_JEFFREY_1
# 338 "data/maps/Route120/scripts.pory"
	release
# 339 "data/maps/Route120/scripts.pory"
	end
# 340 "data/maps/Route120/scripts.pory"

# 341 "data/maps/Route120/scripts.pory"
Route120_EventScript_RematchJeffrey::
# 342 "data/maps/Route120/scripts.pory"
	trainerbattle_rematch TRAINER_JEFFREY_1, Route120_Text_JeffreyRematchIntro, Route120_Text_JeffreyRematchDefeat
# 343 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_JeffreyPostRematch, MSGBOX_AUTOCLOSE
# 344 "data/maps/Route120/scripts.pory"
	end
# 345 "data/maps/Route120/scripts.pory"

# 346 "data/maps/Route120/scripts.pory"
Route120_EventScript_Jennifer::
# 347 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_JENNIFER, Route120_Text_JenniferIntro, Route120_Text_JenniferDefeat
# 348 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_JenniferPostBattle, MSGBOX_AUTOCLOSE
# 349 "data/maps/Route120/scripts.pory"
	end
# 350 "data/maps/Route120/scripts.pory"

# 351 "data/maps/Route120/scripts.pory"
Route120_EventScript_Chip::
# 352 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_CHIP, Route120_Text_ChipIntro, Route120_Text_ChipDefeat
# 353 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_ChipPostBattle, MSGBOX_AUTOCLOSE
# 354 "data/maps/Route120/scripts.pory"
	end
# 355 "data/maps/Route120/scripts.pory"

# 356 "data/maps/Route120/scripts.pory"
Route120_EventScript_Clarissa::
# 357 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_CLARISSA, Route120_Text_ClarissaIntro, Route120_Text_ClarissaDefeat
# 358 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_ClarissaPostBattle, MSGBOX_AUTOCLOSE
# 359 "data/maps/Route120/scripts.pory"
	end
# 360 "data/maps/Route120/scripts.pory"

# 361 "data/maps/Route120/scripts.pory"
Route120_EventScript_Angelica::
# 362 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_ANGELICA, Route120_Text_AngelicaIntro, Route120_Text_AngelicaDefeat
# 363 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_AngelicaPostBattle, MSGBOX_AUTOCLOSE
# 364 "data/maps/Route120/scripts.pory"
	end
# 365 "data/maps/Route120/scripts.pory"

# 366 "data/maps/Route120/scripts.pory"
Route120_EventScript_Keigo::
# 367 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_KEIGO, Route120_Text_KeigoIntro, Route120_Text_KeigoDefeat
# 368 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_KeigoPostBattle, MSGBOX_AUTOCLOSE
# 369 "data/maps/Route120/scripts.pory"
	end
# 370 "data/maps/Route120/scripts.pory"

# 371 "data/maps/Route120/scripts.pory"
Route120_EventScript_Riley::
# 372 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_RILEY, Route120_Text_RileyIntro, Route120_Text_RileyDefeat
# 373 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_RileyPostBattle, MSGBOX_AUTOCLOSE
# 374 "data/maps/Route120/scripts.pory"
	end
# 375 "data/maps/Route120/scripts.pory"

# 376 "data/maps/Route120/scripts.pory"
Route120_EventScript_Leonel::
# 377 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_LEONEL, Route120_Text_LeonelIntro, Route120_Text_LeonelDefeat
# 378 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_LeonelPostBattle, MSGBOX_AUTOCLOSE
# 379 "data/maps/Route120/scripts.pory"
	end
# 380 "data/maps/Route120/scripts.pory"

# 381 "data/maps/Route120/scripts.pory"
Route120_EventScript_Callie::
# 382 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_CALLIE, Route120_Text_CallieIntro, Route120_Text_CallieDefeat
# 383 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_CalliePostBattle, MSGBOX_AUTOCLOSE
# 384 "data/maps/Route120/scripts.pory"
	end
# 385 "data/maps/Route120/scripts.pory"

# 386 "data/maps/Route120/scripts.pory"
Route120_Text_StevenGreeting:
# 387 "data/maps/Route120/scripts.pory"
	.string "Hm? {PLAYER}{KUN}, hi.\n"
# 388 "data/maps/Route120/scripts.pory"
	.string "It's been a while.\p"
# 389 "data/maps/Route120/scripts.pory"
	.string "There's something here that you can't\n"
# 390 "data/maps/Route120/scripts.pory"
	.string "see, right?\p"
# 391 "data/maps/Route120/scripts.pory"
	.string "Now, if I were to use this device on\n"
# 392 "data/maps/Route120/scripts.pory"
	.string "the invisible obstacle…\p"
# 393 "data/maps/Route120/scripts.pory"
	.string "No, no. Rather than describing it,\n"
# 394 "data/maps/Route120/scripts.pory"
	.string "I should just show you.\l"
# 395 "data/maps/Route120/scripts.pory"
	.string "That would be more fun.\p"
# 396 "data/maps/Route120/scripts.pory"
	.string "{PLAYER}{KUN}, are your Pokémon ready for\n"
# 397 "data/maps/Route120/scripts.pory"
	.string "battle?$"
# 398 "data/maps/Route120/scripts.pory"

# 399 "data/maps/Route120/scripts.pory"
Route120_Text_StevenIllWaitHere:
# 400 "data/maps/Route120/scripts.pory"
	.string "No?\p"
# 401 "data/maps/Route120/scripts.pory"
	.string "I'll wait here, so you can get ready.$"
# 402 "data/maps/Route120/scripts.pory"

# 403 "data/maps/Route120/scripts.pory"
Route120_Text_StevenReadyForBattle:
# 404 "data/maps/Route120/scripts.pory"
	.string "{PLAYER}{KUN}, are your Pokémon\n"
# 405 "data/maps/Route120/scripts.pory"
	.string "ready for battle?$"
# 406 "data/maps/Route120/scripts.pory"

# 407 "data/maps/Route120/scripts.pory"
Route120_Text_StevenShowMeYourPower:
# 408 "data/maps/Route120/scripts.pory"
	.string "{PLAYER}{KUN}, show me your true\n"
# 409 "data/maps/Route120/scripts.pory"
	.string "power as a Trainer!$"
# 410 "data/maps/Route120/scripts.pory"

# 411 "data/maps/Route120/scripts.pory"
Route120_Text_StevenUsedDevonScope:
# 412 "data/maps/Route120/scripts.pory"
	.string "Steven used the Devon Scope.\p"
# 413 "data/maps/Route120/scripts.pory"
	.string "An invisible Pokémon became completely\n"
# 414 "data/maps/Route120/scripts.pory"
	.string "visible!\p"
# 415 "data/maps/Route120/scripts.pory"
	.string "The startled Pokémon attacked!$"
# 416 "data/maps/Route120/scripts.pory"

# 417 "data/maps/Route120/scripts.pory"
Route120_Text_StevenGiveDevonScope:
# 418 "data/maps/Route120/scripts.pory"
	.string "I see…\n"
# 419 "data/maps/Route120/scripts.pory"
	.string "Your battle style is intriguing.\p"
# 420 "data/maps/Route120/scripts.pory"
	.string "Your Pokémon have obviously grown\n"
# 421 "data/maps/Route120/scripts.pory"
	.string "since I first met you in Dewford.\p"
# 422 "data/maps/Route120/scripts.pory"
	.string "I'd like you to have this\n"
# 423 "data/maps/Route120/scripts.pory"
	.string "Devon Scope.\p"
# 424 "data/maps/Route120/scripts.pory"
	.string "Who knows, there may be other\n"
# 425 "data/maps/Route120/scripts.pory"
	.string "concealed Pokémon.$"
# 426 "data/maps/Route120/scripts.pory"

# 427 "data/maps/Route120/scripts.pory"
Route120_Text_StevenGoodbye:
# 428 "data/maps/Route120/scripts.pory"
	.string "{PLAYER}{KUN}.\p"
# 429 "data/maps/Route120/scripts.pory"
	.string "I enjoy seeing Pokémon and Trainers\n"
# 430 "data/maps/Route120/scripts.pory"
	.string "who strive together.\p"
# 431 "data/maps/Route120/scripts.pory"
	.string "I think you're doing great.\p"
# 432 "data/maps/Route120/scripts.pory"
	.string "Well, let's meet again somewhere.$"
# 433 "data/maps/Route120/scripts.pory"

# 434 "data/maps/Route120/scripts.pory"
Kecleon_Text_SomethingUnseeable:
# 435 "data/maps/Route120/scripts.pory"
	.string "Something unseeable is in the way.$"
# 436 "data/maps/Route120/scripts.pory"

# 437 "data/maps/Route120/scripts.pory"
Kecleon_Text_WantToUseDevonScope:
# 438 "data/maps/Route120/scripts.pory"
	.string "Something unseeable is in the way.\p"
# 439 "data/maps/Route120/scripts.pory"
	.string "Want to use the Devon Scope?$"
# 440 "data/maps/Route120/scripts.pory"

# 441 "data/maps/Route120/scripts.pory"
Kecleon_Text_UseDevonScopeMonAttacked:
# 442 "data/maps/Route120/scripts.pory"
	.string "{PLAYER} used the Devon Scope.\p"
# 443 "data/maps/Route120/scripts.pory"
	.string "An invisible Pokémon became completely\n"
# 444 "data/maps/Route120/scripts.pory"
	.string "visible!\p"
# 445 "data/maps/Route120/scripts.pory"
	.string "The startled Pokémon attacked!$"
# 446 "data/maps/Route120/scripts.pory"

# 447 "data/maps/Route120/scripts.pory"
Route120_Text_RouteSignFortree:
# 448 "data/maps/Route120/scripts.pory"
	.string "Route 120\n"
# 449 "data/maps/Route120/scripts.pory"
	.string "{LEFT_ARROW} Fortree City$"
# 450 "data/maps/Route120/scripts.pory"

# 451 "data/maps/Route120/scripts.pory"
Route120_Text_RouteSign121:
# 452 "data/maps/Route120/scripts.pory"
	.string "{RIGHT_ARROW} Route 121\n"
# 453 "data/maps/Route120/scripts.pory"
	.string "{LEFT_ARROW} Route 120$"

RealmsFrayIntroEvent::
# 457 "data/maps/Route120/scripts.pory"
	lock
# 458 "data/maps/Route120/scripts.pory"
	special SpawnCameraObject
# 459 "data/maps/Route120/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp2
# 460 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 461 "data/maps/Route120/scripts.pory"
	applymovement RIVAL_ROUTE120, Rival_RealmsFray_Move1
# 462 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 463 "data/maps/Route120/scripts.pory"
	setvar VAR_ROUTE120_STATE, 1
# 464 "data/maps/Route120/scripts.pory"
	hideobjectat RIVAL_ROUTE120, MAP_ROUTE120
# 465 "data/maps/Route120/scripts.pory"
	removeobject RIVAL_ROUTE120
# 466 "data/maps/Route120/scripts.pory"
	setflag FLAG_TEMP_2
# 467 "data/maps/Route120/scripts.pory"
	delay 20
# 468 "data/maps/Route120/scripts.pory"
	playse SE_PIN
# 469 "data/maps/Route120/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 470 "data/maps/Route120/scripts.pory"
	delay 20
# 471 "data/maps/Route120/scripts.pory"
	waitse
# 472 "data/maps/Route120/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown2
# 473 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 474 "data/maps/Route120/scripts.pory"
	special RemoveCameraObject
# 475 "data/maps/Route120/scripts.pory"
	release
	end


# 479 "data/maps/Route120/scripts.pory"
Rival_RealmsFray_Move1:
# 480 "data/maps/Route120/scripts.pory"
	delay_16
# 480 "data/maps/Route120/scripts.pory"
	delay_16
# 480 "data/maps/Route120/scripts.pory"
	delay_16
# 481 "data/maps/Route120/scripts.pory"
	face_down
# 482 "data/maps/Route120/scripts.pory"
	delay_16
# 482 "data/maps/Route120/scripts.pory"
	delay_16
# 482 "data/maps/Route120/scripts.pory"
	delay_16
# 483 "data/maps/Route120/scripts.pory"
	walk_up
	step_end

Route120_Portal::
# 487 "data/maps/Route120/scripts.pory"
	warp MAP_REALMS_FRAY, 0
# 488 "data/maps/Route120/scripts.pory"
	waitstate
	return

