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
	call Common_EventScript_SetupEmRivalGfxId
# 69 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_ROUTE120_STATE, 1, Route120_EventScript_HideRival
# 70 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_EMERALBODY_RIVAL_STATE, 10, EventScript_Clear_FlagTemp1 @ Show Rivals
# 71 "data/maps/Route120/scripts.pory"
	end
# 72 "data/maps/Route120/scripts.pory"

# 73 "data/maps/Route120/scripts.pory"
Route120_EventScript_SetWeather::
# 74 "data/maps/Route120/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 75 "data/maps/Route120/scripts.pory"
	goto_if_le VAR_TEMP_1, 14, Route120_EventScript_SetSunnyWeather
# 76 "data/maps/Route120/scripts.pory"
	goto_if_le VAR_TEMP_1, 60, Route120_EventScript_TrySetRainyWeather
# 77 "data/maps/Route120/scripts.pory"
	goto_if_ge VAR_TEMP_1, 61, Route120_EventScript_SetCloudyWeather
# 78 "data/maps/Route120/scripts.pory"
	return
# 79 "data/maps/Route120/scripts.pory"

# 80 "data/maps/Route120/scripts.pory"
Route120_EventScript_SetCloudyWeather::
# 81 "data/maps/Route120/scripts.pory"
	setweather WEATHER_SUNNY_CLOUDS
# 82 "data/maps/Route120/scripts.pory"
	return
# 83 "data/maps/Route120/scripts.pory"

# 84 "data/maps/Route120/scripts.pory"
Route120_EventScript_SetSunnyWeather::
# 85 "data/maps/Route120/scripts.pory"
	setweather WEATHER_SUNNY
# 86 "data/maps/Route120/scripts.pory"
	return
# 87 "data/maps/Route120/scripts.pory"

# 88 "data/maps/Route120/scripts.pory"
Route120_EventScript_TrySetRainyWeather::
# 89 "data/maps/Route120/scripts.pory"
	goto_if_le VAR_TEMP_0, 7, Route120_EventScript_SetRainyWeather
# 90 "data/maps/Route120/scripts.pory"
	goto_if_le VAR_TEMP_0, 19, Route120_EventScript_SetSunnyWeather
# 91 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_SetRainyWeather
# 92 "data/maps/Route120/scripts.pory"
	end
# 93 "data/maps/Route120/scripts.pory"

# 94 "data/maps/Route120/scripts.pory"
Route120_EventScript_SetRainyWeather::
# 95 "data/maps/Route120/scripts.pory"
	setweather WEATHER_RAIN
# 96 "data/maps/Route120/scripts.pory"
	return
# 97 "data/maps/Route120/scripts.pory"
	
# 98 "data/maps/Route120/scripts.pory"
Route120_EventScript_HideRival:
# 99 "data/maps/Route120/scripts.pory"
	setflag FLAG_TEMP_2
# 100 "data/maps/Route120/scripts.pory"
	return
# 101 "data/maps/Route120/scripts.pory"
	
# 102 "data/maps/Route120/scripts.pory"
Route120_EventScript_BerryBeauty::
# 103 "data/maps/Route120/scripts.pory"
	lock
# 104 "data/maps/Route120/scripts.pory"
	faceplayer
# 105 "data/maps/Route120/scripts.pory"
	dotimebasedevents
# 106 "data/maps/Route120/scripts.pory"
	goto_if_set FLAG_DAILY_ROUTE_120_RECEIVED_BERRY, Route120_EventScript_ReceivedBerry
# 107 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_BerriesExpressionOfLoveIsntIt, MSGBOX_YESNO
# 108 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_RESULT, YES, Route120_EventScript_BerryLove
# 109 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_RESULT, NO, Route120_EventScript_BerryNotLove
# 110 "data/maps/Route120/scripts.pory"
	specialvar VAR_RESULT, GetPlayerTrainerIdOnesDigit
# 111 "data/maps/Route120/scripts.pory"
	switch VAR_RESULT
# 112 "data/maps/Route120/scripts.pory"
	case 0, Route120_EventScript_GiveFigyBerry
# 113 "data/maps/Route120/scripts.pory"
	case 5, Route120_EventScript_GiveFigyBerry
# 114 "data/maps/Route120/scripts.pory"
	case 1, Route120_EventScript_GiveWikiBerry
# 115 "data/maps/Route120/scripts.pory"
	case 6, Route120_EventScript_GiveWikiBerry
# 116 "data/maps/Route120/scripts.pory"
	case 2, Route120_EventScript_GiveMagoBerry
# 117 "data/maps/Route120/scripts.pory"
	case 7, Route120_EventScript_GiveMagoBerry
# 118 "data/maps/Route120/scripts.pory"
	case 3, Route120_EventScript_GiveAguavBerry
# 119 "data/maps/Route120/scripts.pory"
	case 8, Route120_EventScript_GiveAguavBerry
# 120 "data/maps/Route120/scripts.pory"
	case 4, Route120_EventScript_GiveIapapaBerry
# 121 "data/maps/Route120/scripts.pory"
	case 9, Route120_EventScript_GiveIapapaBerry
# 122 "data/maps/Route120/scripts.pory"
	end
# 123 "data/maps/Route120/scripts.pory"

# 124 "data/maps/Route120/scripts.pory"
Route120_EventScript_GiveFigyBerry::
# 125 "data/maps/Route120/scripts.pory"
	setvar VAR_0x8004, ITEM_FIGY_BERRY
# 126 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_GiveBerry
# 127 "data/maps/Route120/scripts.pory"
	end
# 128 "data/maps/Route120/scripts.pory"

# 129 "data/maps/Route120/scripts.pory"
Route120_EventScript_GiveWikiBerry::
# 130 "data/maps/Route120/scripts.pory"
	setvar VAR_0x8004, ITEM_WIKI_BERRY
# 131 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_GiveBerry
# 132 "data/maps/Route120/scripts.pory"
	end
# 133 "data/maps/Route120/scripts.pory"

# 134 "data/maps/Route120/scripts.pory"
Route120_EventScript_GiveMagoBerry::
# 135 "data/maps/Route120/scripts.pory"
	setvar VAR_0x8004, ITEM_MAGO_BERRY
# 136 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_GiveBerry
# 137 "data/maps/Route120/scripts.pory"
	end
# 138 "data/maps/Route120/scripts.pory"

# 139 "data/maps/Route120/scripts.pory"
Route120_EventScript_GiveAguavBerry::
# 140 "data/maps/Route120/scripts.pory"
	setvar VAR_0x8004, ITEM_AGUAV_BERRY
# 141 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_GiveBerry
# 142 "data/maps/Route120/scripts.pory"
	end
# 143 "data/maps/Route120/scripts.pory"

# 144 "data/maps/Route120/scripts.pory"
Route120_EventScript_GiveIapapaBerry::
# 145 "data/maps/Route120/scripts.pory"
	setvar VAR_0x8004, ITEM_IAPAPA_BERRY
# 146 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_GiveBerry
# 147 "data/maps/Route120/scripts.pory"
	end
# 148 "data/maps/Route120/scripts.pory"

# 149 "data/maps/Route120/scripts.pory"
Route120_EventScript_GiveBerry::
# 150 "data/maps/Route120/scripts.pory"
	giveitem VAR_0x8004
# 151 "data/maps/Route120/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 152 "data/maps/Route120/scripts.pory"
	setflag FLAG_DAILY_ROUTE_120_RECEIVED_BERRY
# 153 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_BerryIsRareRaiseItWithCare, MSGBOX_DEFAULT
# 154 "data/maps/Route120/scripts.pory"
	release
# 155 "data/maps/Route120/scripts.pory"
	end
# 156 "data/maps/Route120/scripts.pory"

# 157 "data/maps/Route120/scripts.pory"
Route120_EventScript_ReceivedBerry::
# 158 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_IllGetMoreBerriesFromBerryMaster, MSGBOX_DEFAULT
# 159 "data/maps/Route120/scripts.pory"
	release
# 160 "data/maps/Route120/scripts.pory"
	end
# 161 "data/maps/Route120/scripts.pory"

# 162 "data/maps/Route120/scripts.pory"
Route120_EventScript_BerryLove::
# 163 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_YesYouUnderstand, MSGBOX_DEFAULT
# 164 "data/maps/Route120/scripts.pory"
	return
# 165 "data/maps/Route120/scripts.pory"

# 166 "data/maps/Route120/scripts.pory"
Route120_EventScript_BerryNotLove::
# 167 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_MakeYourOwnImpressions, MSGBOX_DEFAULT
# 168 "data/maps/Route120/scripts.pory"
	return
# 169 "data/maps/Route120/scripts.pory"

# 170 "data/maps/Route120/scripts.pory"
Route120_EventScript_Steven::
# 171 "data/maps/Route120/scripts.pory"
	lock
# 172 "data/maps/Route120/scripts.pory"
	faceplayer
# 173 "data/maps/Route120/scripts.pory"
	goto_if_set FLAG_NOT_READY_FOR_BATTLE_ROUTE_120, Route120_EventScript_StevenAskReadyForBattle
# 174 "data/maps/Route120/scripts.pory"
	speakername (CommonText_Steven)
# 175 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenGreeting, MSGBOX_YESNO
# 176 "data/maps/Route120/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route120_EventScript_StevenNotReady
# 177 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_StevenBattleKecleon
# 178 "data/maps/Route120/scripts.pory"
	end
# 179 "data/maps/Route120/scripts.pory"

# 180 "data/maps/Route120/scripts.pory"
Route120_EventScript_StevenNotReady::
# 181 "data/maps/Route120/scripts.pory"
	speakername (CommonText_Steven)
# 182 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenIllWaitHere, MSGBOX_DEFAULT
# 183 "data/maps/Route120/scripts.pory"
	setflag FLAG_NOT_READY_FOR_BATTLE_ROUTE_120
# 184 "data/maps/Route120/scripts.pory"
	release
# 185 "data/maps/Route120/scripts.pory"
	end
# 186 "data/maps/Route120/scripts.pory"

# 187 "data/maps/Route120/scripts.pory"
Route120_EventScript_StevenAskReadyForBattle::
# 188 "data/maps/Route120/scripts.pory"
	speakername (CommonText_Steven)
# 189 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenReadyForBattle, MSGBOX_YESNO
# 190 "data/maps/Route120/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route120_EventScript_StevenNotReady
# 191 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_StevenBattleKecleon
# 192 "data/maps/Route120/scripts.pory"
	end
# 193 "data/maps/Route120/scripts.pory"

# 194 "data/maps/Route120/scripts.pory"
Route120_EventScript_StevenBattleKecleon::
# 195 "data/maps/Route120/scripts.pory"
	speakername (CommonText_Steven)
# 196 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenShowMeYourPower, MSGBOX_DEFAULT
# 197 "data/maps/Route120/scripts.pory"
	closemessage
# 198 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, Route120_EventScript_PlayerApproachKecleonNorth
# 199 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, Route120_EventScript_PlayerApproachKecleonWest
# 200 "data/maps/Route120/scripts.pory"
	applymovement LOCALID_ROUTE120_STEVEN, Common_Movement_WalkInPlaceFasterLeft
# 201 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 202 "data/maps/Route120/scripts.pory"
	delay 20
# 203 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenUsedDevonScope, MSGBOX_DEFAULT
# 204 "data/maps/Route120/scripts.pory"
	closemessage
# 205 "data/maps/Route120/scripts.pory"
	applymovement LOCALID_BRIDGE_KECLEON, Common_Movement_WalkInPlaceFasterRight
# 206 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 207 "data/maps/Route120/scripts.pory"
	applymovement LOCALID_BRIDGE_KECLEON, Movement_KecleonAppears
# 208 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 209 "data/maps/Route120/scripts.pory"
	waitse
# 210 "data/maps/Route120/scripts.pory"
	playmoncry SPECIES_KECLEON, CRY_MODE_ENCOUNTER
# 211 "data/maps/Route120/scripts.pory"
	delay 40
# 212 "data/maps/Route120/scripts.pory"
	waitmoncry
# 213 "data/maps/Route120/scripts.pory"
	setwildbattle SPECIES_KECLEON, 35
# 214 "data/maps/Route120/scripts.pory"
	setvar VAR_0x8009, 0
# 215 "data/maps/Route120/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 216 "data/maps/Route120/scripts.pory"
	dowildbattle
# 217 "data/maps/Route120/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 218 "data/maps/Route120/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 219 "data/maps/Route120/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, Route120_EventScript_RemoveBridgeKecleonPostBattle
# 220 "data/maps/Route120/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, Route120_EventScript_RemoveBridgeKecleonPostBattle
# 221 "data/maps/Route120/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, Route120_EventScript_RemoveBridgeKecleonPostBattle
# 222 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_StevenGiveDeconScope
# 223 "data/maps/Route120/scripts.pory"
	end
# 224 "data/maps/Route120/scripts.pory"

# 225 "data/maps/Route120/scripts.pory"
Route120_EventScript_RemoveBridgeKecleonPostBattle::
# 226 "data/maps/Route120/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 227 "data/maps/Route120/scripts.pory"
	removeobject LOCALID_BRIDGE_KECLEON
# 228 "data/maps/Route120/scripts.pory"
	removeobject LOCALID_BRIDGE_KECLEON_SHADOW
# 229 "data/maps/Route120/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 230 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_StevenGiveDeconScope
# 231 "data/maps/Route120/scripts.pory"
	end
# 232 "data/maps/Route120/scripts.pory"

# 233 "data/maps/Route120/scripts.pory"
Route120_EventScript_StevenGiveDeconScope::
# 234 "data/maps/Route120/scripts.pory"
	applymovement LOCALID_ROUTE120_STEVEN, Common_Movement_WalkInPlaceFasterDown
# 235 "data/maps/Route120/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 236 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 237 "data/maps/Route120/scripts.pory"
	speakername (CommonText_Steven)
# 238 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenGiveDevonScope, MSGBOX_DEFAULT
# 239 "data/maps/Route120/scripts.pory"
	closemessage
# 240 "data/maps/Route120/scripts.pory"
	giveitem ITEM_DEVON_SCOPE
# 241 "data/maps/Route120/scripts.pory"
	setflag FLAG_RECEIVED_DEVON_SCOPE
# 242 "data/maps/Route120/scripts.pory"
	speakername (CommonText_Steven)
# 243 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenGoodbye, MSGBOX_DEFAULT
# 244 "data/maps/Route120/scripts.pory"
	closemessage
# 245 "data/maps/Route120/scripts.pory"
	applymovement LOCALID_ROUTE120_STEVEN, Common_Movement_WalkInPlaceFasterDown
# 246 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 247 "data/maps/Route120/scripts.pory"
	delay 50
# 248 "data/maps/Route120/scripts.pory"
	setfieldeffectargument 0, 1
# 249 "data/maps/Route120/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 250 "data/maps/Route120/scripts.pory"
	delay 15
# 251 "data/maps/Route120/scripts.pory"
	removeobject LOCALID_ROUTE120_STEVEN
# 252 "data/maps/Route120/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 253 "data/maps/Route120/scripts.pory"
	setmetatile 13, 15, METATILE_Fortree_WoodBridge1_Top, FALSE
# 254 "data/maps/Route120/scripts.pory"
	setmetatile 12, 16, METATILE_Fortree_WoodBridge1_Bottom, FALSE
# 255 "data/maps/Route120/scripts.pory"
	setmetatile 12, 17, METATILE_General_ReflectiveWater, FALSE
# 256 "data/maps/Route120/scripts.pory"
	setmetatile 13, 17, METATILE_General_ReflectiveWater, FALSE
# 257 "data/maps/Route120/scripts.pory"
	special DrawWholeMapView
# 258 "data/maps/Route120/scripts.pory"
	release
# 259 "data/maps/Route120/scripts.pory"
	end
# 260 "data/maps/Route120/scripts.pory"

# 261 "data/maps/Route120/scripts.pory"
Route120_EventScript_PlayerApproachKecleonNorth::
# 262 "data/maps/Route120/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 263 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 264 "data/maps/Route120/scripts.pory"
	return
# 265 "data/maps/Route120/scripts.pory"

# 266 "data/maps/Route120/scripts.pory"
Route120_EventScript_PlayerApproachKecleonWest::
# 267 "data/maps/Route120/scripts.pory"
	applymovement LOCALID_PLAYER, Route120_Movement_ApproachKecleonWest
# 268 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 269 "data/maps/Route120/scripts.pory"
	return
# 270 "data/maps/Route120/scripts.pory"

# 271 "data/maps/Route120/scripts.pory"
Route120_Movement_ApproachKecleonWest:
# 272 "data/maps/Route120/scripts.pory"
	walk_down
# 273 "data/maps/Route120/scripts.pory"
	walk_left
# 274 "data/maps/Route120/scripts.pory"
	step_end
# 275 "data/maps/Route120/scripts.pory"

# 276 "data/maps/Route120/scripts.pory"
Route120_EventScript_BridgeKecleon::
# 277 "data/maps/Route120/scripts.pory"
	msgbox Kecleon_Text_SomethingUnseeable, MSGBOX_NPC
# 278 "data/maps/Route120/scripts.pory"
	end
# 279 "data/maps/Route120/scripts.pory"

# 280 "data/maps/Route120/scripts.pory"
Route120_EventScript_RouteSignFortree::
# 281 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_RouteSignFortree, MSGBOX_SIGN
# 282 "data/maps/Route120/scripts.pory"
	end
# 283 "data/maps/Route120/scripts.pory"

# 284 "data/maps/Route120/scripts.pory"
Route120_EventScript_RouteSign121::
# 285 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_RouteSign121, MSGBOX_SIGN
# 286 "data/maps/Route120/scripts.pory"
	end
# 287 "data/maps/Route120/scripts.pory"

# 288 "data/maps/Route120/scripts.pory"
Route120_EventScript_Colin::
# 289 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_COLIN, Route120_Text_ColinIntro, Route120_Text_ColinDefeat
# 290 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_ColinPostBattle, MSGBOX_AUTOCLOSE
# 291 "data/maps/Route120/scripts.pory"
	end
# 292 "data/maps/Route120/scripts.pory"

# 293 "data/maps/Route120/scripts.pory"
Route120_EventScript_Robert::
# 294 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_ROBERT_1, Route120_Text_RobertIntro, Route120_Text_RobertDefeat, Route120_EventScript_RegisterRobert
# 295 "data/maps/Route120/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 296 "data/maps/Route120/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route120_EventScript_RematchRobert
# 297 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_RobertPostBattle, MSGBOX_DEFAULT
# 298 "data/maps/Route120/scripts.pory"
	release
# 299 "data/maps/Route120/scripts.pory"
	end
# 300 "data/maps/Route120/scripts.pory"

# 301 "data/maps/Route120/scripts.pory"
Route120_EventScript_RegisterRobert::
# 302 "data/maps/Route120/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 303 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 304 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_RobertRegister, MSGBOX_DEFAULT
# 305 "data/maps/Route120/scripts.pory"
	register_matchcall TRAINER_ROBERT_1
# 306 "data/maps/Route120/scripts.pory"
	release
# 307 "data/maps/Route120/scripts.pory"
	end
# 308 "data/maps/Route120/scripts.pory"

# 309 "data/maps/Route120/scripts.pory"
Route120_EventScript_RematchRobert::
# 310 "data/maps/Route120/scripts.pory"
	trainerbattle_rematch TRAINER_ROBERT_1, Route120_Text_RobertRematchIntro, Route120_Text_RobertRematchDefeat
# 311 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_RobertPostRematch, MSGBOX_AUTOCLOSE
# 312 "data/maps/Route120/scripts.pory"
	end
# 313 "data/maps/Route120/scripts.pory"

# 314 "data/maps/Route120/scripts.pory"
Route120_EventScript_Lorenzo::
# 315 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_LORENZO, Route120_Text_LorenzoIntro, Route120_Text_LorenzoDefeat
# 316 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_LorenzoPostBattle, MSGBOX_AUTOCLOSE
# 317 "data/maps/Route120/scripts.pory"
	end
# 318 "data/maps/Route120/scripts.pory"

# 319 "data/maps/Route120/scripts.pory"
Route120_EventScript_Jenna::
# 320 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_JENNA, Route120_Text_JennaIntro, Route120_Text_JennaDefeat
# 321 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_JennaPostBattle, MSGBOX_AUTOCLOSE
# 322 "data/maps/Route120/scripts.pory"
	end
# 323 "data/maps/Route120/scripts.pory"

# 324 "data/maps/Route120/scripts.pory"
Route120_EventScript_Jeffrey::
# 325 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_JEFFREY_1, Route120_Text_JeffreyIntro, Route120_Text_JeffreyDefeat, Route120_EventScript_RegisterJeffrey
# 326 "data/maps/Route120/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 327 "data/maps/Route120/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route120_EventScript_RematchJeffrey
# 328 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_JeffreyPostBattle, MSGBOX_DEFAULT
# 329 "data/maps/Route120/scripts.pory"
	release
# 330 "data/maps/Route120/scripts.pory"
	end
# 331 "data/maps/Route120/scripts.pory"

# 332 "data/maps/Route120/scripts.pory"
Route120_EventScript_RegisterJeffrey::
# 333 "data/maps/Route120/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 334 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 335 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_JeffreyRegister, MSGBOX_DEFAULT
# 336 "data/maps/Route120/scripts.pory"
	register_matchcall TRAINER_JEFFREY_1
# 337 "data/maps/Route120/scripts.pory"
	release
# 338 "data/maps/Route120/scripts.pory"
	end
# 339 "data/maps/Route120/scripts.pory"

# 340 "data/maps/Route120/scripts.pory"
Route120_EventScript_RematchJeffrey::
# 341 "data/maps/Route120/scripts.pory"
	trainerbattle_rematch TRAINER_JEFFREY_1, Route120_Text_JeffreyRematchIntro, Route120_Text_JeffreyRematchDefeat
# 342 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_JeffreyPostRematch, MSGBOX_AUTOCLOSE
# 343 "data/maps/Route120/scripts.pory"
	end
# 344 "data/maps/Route120/scripts.pory"

# 345 "data/maps/Route120/scripts.pory"
Route120_EventScript_Jennifer::
# 346 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_JENNIFER, Route120_Text_JenniferIntro, Route120_Text_JenniferDefeat
# 347 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_JenniferPostBattle, MSGBOX_AUTOCLOSE
# 348 "data/maps/Route120/scripts.pory"
	end
# 349 "data/maps/Route120/scripts.pory"

# 350 "data/maps/Route120/scripts.pory"
Route120_EventScript_Chip::
# 351 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_CHIP, Route120_Text_ChipIntro, Route120_Text_ChipDefeat
# 352 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_ChipPostBattle, MSGBOX_AUTOCLOSE
# 353 "data/maps/Route120/scripts.pory"
	end
# 354 "data/maps/Route120/scripts.pory"

# 355 "data/maps/Route120/scripts.pory"
Route120_EventScript_Clarissa::
# 356 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_CLARISSA, Route120_Text_ClarissaIntro, Route120_Text_ClarissaDefeat
# 357 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_ClarissaPostBattle, MSGBOX_AUTOCLOSE
# 358 "data/maps/Route120/scripts.pory"
	end
# 359 "data/maps/Route120/scripts.pory"

# 360 "data/maps/Route120/scripts.pory"
Route120_EventScript_Angelica::
# 361 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_ANGELICA, Route120_Text_AngelicaIntro, Route120_Text_AngelicaDefeat
# 362 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_AngelicaPostBattle, MSGBOX_AUTOCLOSE
# 363 "data/maps/Route120/scripts.pory"
	end
# 364 "data/maps/Route120/scripts.pory"

# 365 "data/maps/Route120/scripts.pory"
Route120_EventScript_Keigo::
# 366 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_KEIGO, Route120_Text_KeigoIntro, Route120_Text_KeigoDefeat
# 367 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_KeigoPostBattle, MSGBOX_AUTOCLOSE
# 368 "data/maps/Route120/scripts.pory"
	end
# 369 "data/maps/Route120/scripts.pory"

# 370 "data/maps/Route120/scripts.pory"
Route120_EventScript_Riley::
# 371 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_RILEY, Route120_Text_RileyIntro, Route120_Text_RileyDefeat
# 372 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_RileyPostBattle, MSGBOX_AUTOCLOSE
# 373 "data/maps/Route120/scripts.pory"
	end
# 374 "data/maps/Route120/scripts.pory"

# 375 "data/maps/Route120/scripts.pory"
Route120_EventScript_Leonel::
# 376 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_LEONEL, Route120_Text_LeonelIntro, Route120_Text_LeonelDefeat
# 377 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_LeonelPostBattle, MSGBOX_AUTOCLOSE
# 378 "data/maps/Route120/scripts.pory"
	end
# 379 "data/maps/Route120/scripts.pory"

# 380 "data/maps/Route120/scripts.pory"
Route120_EventScript_Callie::
# 381 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_CALLIE, Route120_Text_CallieIntro, Route120_Text_CallieDefeat
# 382 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_CalliePostBattle, MSGBOX_AUTOCLOSE
# 383 "data/maps/Route120/scripts.pory"
	end
# 384 "data/maps/Route120/scripts.pory"

# 385 "data/maps/Route120/scripts.pory"
Route120_Text_StevenGreeting:
# 386 "data/maps/Route120/scripts.pory"
	.string "Hm? {PLAYER}{KUN}, hi.\n"
# 387 "data/maps/Route120/scripts.pory"
	.string "It's been a while.\p"
# 388 "data/maps/Route120/scripts.pory"
	.string "There's something here that you can't\n"
# 389 "data/maps/Route120/scripts.pory"
	.string "see, right?\p"
# 390 "data/maps/Route120/scripts.pory"
	.string "Now, if I were to use this device on\n"
# 391 "data/maps/Route120/scripts.pory"
	.string "the invisible obstacle…\p"
# 392 "data/maps/Route120/scripts.pory"
	.string "No, no. Rather than describing it,\n"
# 393 "data/maps/Route120/scripts.pory"
	.string "I should just show you.\l"
# 394 "data/maps/Route120/scripts.pory"
	.string "That would be more fun.\p"
# 395 "data/maps/Route120/scripts.pory"
	.string "{PLAYER}{KUN}, are your Pokémon ready for\n"
# 396 "data/maps/Route120/scripts.pory"
	.string "battle?$"
# 397 "data/maps/Route120/scripts.pory"

# 398 "data/maps/Route120/scripts.pory"
Route120_Text_StevenIllWaitHere:
# 399 "data/maps/Route120/scripts.pory"
	.string "No?\p"
# 400 "data/maps/Route120/scripts.pory"
	.string "I'll wait here, so you can get ready.$"
# 401 "data/maps/Route120/scripts.pory"

# 402 "data/maps/Route120/scripts.pory"
Route120_Text_StevenReadyForBattle:
# 403 "data/maps/Route120/scripts.pory"
	.string "{PLAYER}{KUN}, are your Pokémon\n"
# 404 "data/maps/Route120/scripts.pory"
	.string "ready for battle?$"
# 405 "data/maps/Route120/scripts.pory"

# 406 "data/maps/Route120/scripts.pory"
Route120_Text_StevenShowMeYourPower:
# 407 "data/maps/Route120/scripts.pory"
	.string "{PLAYER}{KUN}, show me your true\n"
# 408 "data/maps/Route120/scripts.pory"
	.string "power as a Trainer!$"
# 409 "data/maps/Route120/scripts.pory"

# 410 "data/maps/Route120/scripts.pory"
Route120_Text_StevenUsedDevonScope:
# 411 "data/maps/Route120/scripts.pory"
	.string "Steven used the Devon Scope.\p"
# 412 "data/maps/Route120/scripts.pory"
	.string "An invisible Pokémon became completely\n"
# 413 "data/maps/Route120/scripts.pory"
	.string "visible!\p"
# 414 "data/maps/Route120/scripts.pory"
	.string "The startled Pokémon attacked!$"
# 415 "data/maps/Route120/scripts.pory"

# 416 "data/maps/Route120/scripts.pory"
Route120_Text_StevenGiveDevonScope:
# 417 "data/maps/Route120/scripts.pory"
	.string "I see…\n"
# 418 "data/maps/Route120/scripts.pory"
	.string "Your battle style is intriguing.\p"
# 419 "data/maps/Route120/scripts.pory"
	.string "Your Pokémon have obviously grown\n"
# 420 "data/maps/Route120/scripts.pory"
	.string "since I first met you in Dewford.\p"
# 421 "data/maps/Route120/scripts.pory"
	.string "I'd like you to have this\n"
# 422 "data/maps/Route120/scripts.pory"
	.string "Devon Scope.\p"
# 423 "data/maps/Route120/scripts.pory"
	.string "Who knows, there may be other\n"
# 424 "data/maps/Route120/scripts.pory"
	.string "concealed Pokémon.$"
# 425 "data/maps/Route120/scripts.pory"

# 426 "data/maps/Route120/scripts.pory"
Route120_Text_StevenGoodbye:
# 427 "data/maps/Route120/scripts.pory"
	.string "{PLAYER}{KUN}.\p"
# 428 "data/maps/Route120/scripts.pory"
	.string "I enjoy seeing Pokémon and Trainers\n"
# 429 "data/maps/Route120/scripts.pory"
	.string "who strive together.\p"
# 430 "data/maps/Route120/scripts.pory"
	.string "I think you're doing great.\p"
# 431 "data/maps/Route120/scripts.pory"
	.string "Well, let's meet again somewhere.$"
# 432 "data/maps/Route120/scripts.pory"

# 433 "data/maps/Route120/scripts.pory"
Kecleon_Text_SomethingUnseeable:
# 434 "data/maps/Route120/scripts.pory"
	.string "Something unseeable is in the way.$"
# 435 "data/maps/Route120/scripts.pory"

# 436 "data/maps/Route120/scripts.pory"
Kecleon_Text_WantToUseDevonScope:
# 437 "data/maps/Route120/scripts.pory"
	.string "Something unseeable is in the way.\p"
# 438 "data/maps/Route120/scripts.pory"
	.string "Want to use the Devon Scope?$"
# 439 "data/maps/Route120/scripts.pory"

# 440 "data/maps/Route120/scripts.pory"
Kecleon_Text_UseDevonScopeMonAttacked:
# 441 "data/maps/Route120/scripts.pory"
	.string "{PLAYER} used the Devon Scope.\p"
# 442 "data/maps/Route120/scripts.pory"
	.string "An invisible Pokémon became completely\n"
# 443 "data/maps/Route120/scripts.pory"
	.string "visible!\p"
# 444 "data/maps/Route120/scripts.pory"
	.string "The startled Pokémon attacked!$"
# 445 "data/maps/Route120/scripts.pory"

# 446 "data/maps/Route120/scripts.pory"
Route120_Text_RouteSignFortree:
# 447 "data/maps/Route120/scripts.pory"
	.string "Route 120\n"
# 448 "data/maps/Route120/scripts.pory"
	.string "{LEFT_ARROW} Fortree City$"
# 449 "data/maps/Route120/scripts.pory"

# 450 "data/maps/Route120/scripts.pory"
Route120_Text_RouteSign121:
# 451 "data/maps/Route120/scripts.pory"
	.string "{RIGHT_ARROW} Route 121\n"
# 452 "data/maps/Route120/scripts.pory"
	.string "{LEFT_ARROW} Route 120$"

RealmsFrayIntroEvent::
# 456 "data/maps/Route120/scripts.pory"
	lock
# 457 "data/maps/Route120/scripts.pory"
	special SpawnCameraObject
# 458 "data/maps/Route120/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp2
# 459 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 460 "data/maps/Route120/scripts.pory"
	applymovement RIVAL_ROUTE120, Rival_RealmsFray_Move1
# 461 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 462 "data/maps/Route120/scripts.pory"
	setvar VAR_ROUTE120_STATE, 1
# 463 "data/maps/Route120/scripts.pory"
	hideobjectat RIVAL_ROUTE120, MAP_ROUTE120
# 464 "data/maps/Route120/scripts.pory"
	removeobject RIVAL_ROUTE120
# 465 "data/maps/Route120/scripts.pory"
	setflag FLAG_TEMP_2
# 466 "data/maps/Route120/scripts.pory"
	delay 20
# 467 "data/maps/Route120/scripts.pory"
	playse SE_PIN
# 468 "data/maps/Route120/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 469 "data/maps/Route120/scripts.pory"
	delay 20
# 470 "data/maps/Route120/scripts.pory"
	waitse
# 471 "data/maps/Route120/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown2
# 472 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 473 "data/maps/Route120/scripts.pory"
	special RemoveCameraObject
# 474 "data/maps/Route120/scripts.pory"
	release
	end


# 478 "data/maps/Route120/scripts.pory"
Rival_RealmsFray_Move1:
# 479 "data/maps/Route120/scripts.pory"
	delay_16
# 479 "data/maps/Route120/scripts.pory"
	delay_16
# 479 "data/maps/Route120/scripts.pory"
	delay_16
# 480 "data/maps/Route120/scripts.pory"
	face_down
# 481 "data/maps/Route120/scripts.pory"
	delay_16
# 481 "data/maps/Route120/scripts.pory"
	delay_16
# 481 "data/maps/Route120/scripts.pory"
	delay_16
# 482 "data/maps/Route120/scripts.pory"
	walk_up
	step_end

Route120_Portal::
# 486 "data/maps/Route120/scripts.pory"
	warp MAP_REALMS_FRAY, 0
	return

