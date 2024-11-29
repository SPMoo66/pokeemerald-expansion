# 1 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 2 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
.set LOCALID_AIDE, 1
# 3 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
.set LOCALID_BIRCH, 2
# 4 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
.set LOCALID_RIVAL, 3
# 5 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
.set LOCALID_BALL_CYNDAQUIL, 4
# 6 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
.set LOCALID_BALL_TOTODILE, 5
# 7 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
.set LOCALID_BALL_CHIKORITA, 6
# 8 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 9 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_MapScripts::
# 10 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_ProfessorBirchsLab_OnTransition
# 11 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LittlerootTown_ProfessorBirchsLab_OnWarp
# 12 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_ProfessorBirchsLab_OnFrame
# 13 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.byte 0
# 14 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 15 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ State descriptions for VAR_DEX_UPGRADE_JOHTO_STARTER_STATE
# 16 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ 1: Beat Elite Four, Dex upgrade ready
# 17 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ 2: Received National Dex
# 18 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ 3: Left lab after receiving National Dex
# 19 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ 4: Entered lab after catching all Hoenn mons
# 20 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ 5: Birch told player to choose Johto starter
# 21 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ 6: Chose Johto starter
# 22 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 23 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ State descriptions for VAR_BIRCH_LAB_STATE
# 24 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ 1: Never occurs
# 25 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ 2: Chose starter
# 26 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ 3: Received starter in lab
# 27 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ 4: Defeated rival on Route 103
# 28 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ 5: Received pokedex
# 29 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 30 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_OnTransition:
# 31 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_TEMP_1
# 32 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_TEMP_2
# 33 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 34 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call ProfBirch_EventScript_UpdateLocation
# 35 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_EMERALBODY_RIVAL_STATE, 1, LittlerootTown_ProfessorBirchsLab_EventScript_ShowSakura
# 36 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_set FLAG_TERA_ENABLED, LittlerootTown_ProfessorBirchsLab_EventScript_ShowRowanAide
# 37 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6, LittlerootTown_ProfessorBirchsLab_EventScript_SetAfterJohtoStarterLayout
# 38 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 4, LittlerootTown_ProfessorBirchsLab_EventScript_SetJohtoStarterLayout
# 39 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 3, LittlerootTown_ProfessorBirchsLab_EventScript_CheckReadyForJohtoStarter
# 40 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 41 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 42 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_ShowSakura::
# 43 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	clearflag FLAG_TEMP_1
# 44 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 45 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 46 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_ShowRowanAide::
# 47 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	clearflag FLAG_TEMP_2
# 48 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 49 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 50 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_CheckReadyForJohtoStarter::
# 51 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	specialvar VAR_RESULT, HasAllHoennMons
# 52 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, LittlerootTown_ProfessorBirchsLab_EventScript_SetReadyForJohtoStarter
# 53 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectmovementtype LOCALID_RIVAL, MOVEMENT_TYPE_WANDER_UP_AND_DOWN
# 54 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 5, 10
# 55 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 56 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 57 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SetReadyForJohtoStarter::
# 58 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 4
# 59 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_SetJohtoStarterLayout
# 60 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 61 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SetJohtoStarterLayout::
# 62 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setmaplayoutindex LAYOUT_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB_WITH_TABLE
# 63 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 64 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 65 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SetAfterJohtoStarterLayout::
# 66 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setmaplayoutindex LAYOUT_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB_WITH_TABLE
# 67 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectmovementtype LOCALID_RIVAL, MOVEMENT_TYPE_WANDER_UP_AND_DOWN
# 68 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 5, 10
# 69 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 70 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 71 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_OnWarp:
# 72 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_BIRCH_LAB_STATE, 2, LittlerootTown_ProfessorBirchsLab_EventScript_SetPlayerPosForReceiveStarter
# 73 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_ProfessorBirchsLab_EventScript_SetObjectPosForDexUpgrade
# 74 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2, LittlerootTown_ProfessorBirchsLab_EventScript_SetObjectPosForDexUpgrade
# 75 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 3, LittlerootTown_ProfessorBirchsLab_EventScript_AddRivalObject
# 76 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6, LittlerootTown_ProfessorBirchsLab_EventScript_AddRivalObject
# 77 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 4, LittlerootTown_ProfessorBirchsLab_EventScript_SetObjectPosForJohtoStarters
# 78 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 5, LittlerootTown_ProfessorBirchsLab_EventScript_SetObjectPosForJohtoStarters
# 79 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.2byte 0
# 80 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 81 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SetPlayerPosForReceiveStarter::
# 82 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 83 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 84 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 85 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SetObjectPosForDexUpgrade::
# 86 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 87 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addobject LOCALID_BIRCH
# 88 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addobject LOCALID_RIVAL
# 89 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject LOCALID_RIVAL, DIR_NORTH
# 90 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxy LOCALID_RIVAL, 5, 5
# 91 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject LOCALID_BIRCH, DIR_SOUTH
# 92 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxy LOCALID_BIRCH, 6, 4
# 93 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject LOCALID_AIDE, DIR_EAST
# 94 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxy LOCALID_AIDE, 10, 10
# 95 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 96 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 97 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_AddRivalObject::
# 98 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addobject LOCALID_RIVAL
# 99 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 100 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 101 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SetObjectPosForJohtoStarters::
# 102 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addobject LOCALID_BALL_CYNDAQUIL
# 103 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addobject LOCALID_BALL_TOTODILE
# 104 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addobject LOCALID_BALL_CHIKORITA
# 105 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addobject LOCALID_RIVAL
# 106 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject LOCALID_BALL_CYNDAQUIL, DIR_SOUTH
# 107 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxy LOCALID_BALL_CYNDAQUIL, 8, 4
# 108 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject LOCALID_BALL_TOTODILE, DIR_SOUTH
# 109 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxy LOCALID_BALL_TOTODILE, 9, 4
# 110 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject LOCALID_BALL_CHIKORITA, DIR_SOUTH
# 111 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxy LOCALID_BALL_CHIKORITA, 10, 4
# 112 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject LOCALID_BIRCH, DIR_SOUTH
# 113 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxy LOCALID_BIRCH, 6, 4
# 114 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject LOCALID_RIVAL, DIR_EAST
# 115 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxy LOCALID_RIVAL, 5, 5
# 116 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 117 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 118 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_OnFrame:
# 119 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_BIRCH_LAB_STATE, 2, LittlerootTown_ProfessorBirchsLab_EventScript_GiveStarterEvent
# 120 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_BIRCH_LAB_STATE, 4, LittlerootTown_ProfessorBirchsLab_EventScript_GivePokedexEvent
# 121 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_ProfessorBirchsLab_EventScript_UpgradeToNationalDex
# 122 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 4, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseJohtoStarter
# 123 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.2byte 0
# 124 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 125 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ The starter is technically given prior to this on Route 101 by special ChooseStarter
# 126 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ This is just where the game tells you its yours and lets you nickname it
# 127 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GiveStarterEvent::
# 128 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 129 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 130 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	speakername CommonText_Birch
# 131 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_LikeYouToHavePokemon
# 132 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	speakername NULL
# 133 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	message LittlerootTown_ProfessorBirchsLab_Text_LikeYouToHavePokemon2
# 134 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 135 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 136 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitfanfare
# 137 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	speakername CommonText_Birch
# 138 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_WhyNotGiveNicknameToMon, MSGBOX_YESNO
# 139 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, YES, LittlerootTown_ProfessorBirchsLab_EventScript_NicknameStarter
# 140 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_AgreeToSeeRival
# 141 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 142 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 143 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_NicknameStarter::
# 144 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_0x8004, 0
# 145 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 146 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_AgreeToSeeRival
# 147 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 148 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 149 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_AgreeToSeeRival::
# 150 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_MightBeGoodIdeaToGoSeeRival, MSGBOX_DEFAULT
# 151 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_GetRivalToTeachYou, MSGBOX_DEFAULT
# 152 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
# 153 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BOY
# 154 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 3
# 155 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 156 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 157 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 158 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GivePokedexEvent::
# 159 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 160 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_ProfessorBirchsLab_Movement_PlayerEnterLabForPokedex
# 161 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 162 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_GivePokedex
# 163 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 164 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 165 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Movement_PlayerEnterLabForPokedex:
# 166 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 167 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 168 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 169 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 170 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 171 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 172 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 173 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	step_end
# 174 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 175 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_UpgradeToNationalDex::
# 176 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 177 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 30
# 178 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	speakername CommonText_Birch
# 179 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_OtherRegionsUpgradeToNational, MSGBOX_DEFAULT
# 180 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 181 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_BIRCH, LittlerootTown_ProfessorBirchsLab_Movement_BirchRetrievePokedexes
# 182 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 183 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 20
# 184 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playse SE_CLICK
# 185 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 10
# 186 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playse SE_CLICK
# 187 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 10
# 188 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playse SE_CLICK
# 189 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 10
# 190 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playse SE_CLICK
# 191 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 20
# 192 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterRight
# 193 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 194 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 195 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	checkplayergender
# 196 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_ProfessorBirchsLab_EventScript_MayUpgradeComment
# 197 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_ProfessorBirchsLab_EventScript_BrendanUpgradeComment
# 198 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playse SE_PC_ON
# 199 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitse
# 200 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 20
# 201 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_BIRCH, LittlerootTown_ProfessorBirchsLab_Movement_BirchReturnPokedex
# 202 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 203 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterUp
# 204 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 205 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 206 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	speakername CommonText_Birch
# 207 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_OkayAllDone, MSGBOX_DEFAULT
# 208 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 209 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	message LittlerootTown_ProfessorBirchsLab_Text_PokedexUpgradedToNational
# 210 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 211 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitfanfare
# 212 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 213 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	special EnableNationalPokedex
# 214 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	speakername CommonText_Birch
# 215 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting2, MSGBOX_DEFAULT
# 216 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 217 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH
# 218 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_RIVAL
# 219 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2
# 220 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_SCOTT_BF_CALL_STEP_COUNTER, 0
# 221 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_SCOTT_CALL_BATTLE_FRONTIER
# 222 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 223 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 224 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 225 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_MayUpgradeComment::
# 226 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	speakername CommonText_May
# 227 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_MayUpgradeSoCool, MSGBOX_DEFAULT
# 228 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 229 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 230 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 231 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_BrendanUpgradeComment::
# 232 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	speakername CommonText_Brendan
# 233 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BrendanYouCanThankMe, MSGBOX_DEFAULT
# 234 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 235 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 236 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 237 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Movement_BirchRetrievePokedexes:
# 238 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_left
# 239 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_in_place_faster_down
# 240 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay_16
# 241 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay_16
# 242 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_right
# 243 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_in_place_faster_down
# 244 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay_16
# 245 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay_16
# 246 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_right
# 247 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_down
# 248 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_down
# 249 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_down
# 250 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_down
# 251 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_right
# 252 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_right
# 253 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_right
# 254 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_in_place_faster_up
# 255 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	step_end
# 256 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 257 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Movement_BirchReturnPokedex:
# 258 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_left
# 259 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_left
# 260 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_left
# 261 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 262 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 263 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 264 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 265 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_left
# 266 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_in_place_faster_down
# 267 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	step_end
# 268 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 269 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_ChooseJohtoStarter::
# 270 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 271 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_ProfessorBirchsLab_Movement_PlayerEnterLabForPokedex
# 272 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 273 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	speakername CommonText_Birch
# 274 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_CompletedDexChoosePokemon, MSGBOX_DEFAULT
# 275 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 5
# 276 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 277 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 278 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 279 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Aide::
# 280 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lock
# 281 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	faceplayer
# 282 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_ge VAR_BIRCH_LAB_STATE, 3, LittlerootTown_ProfessorBirchsLab_EventScript_AideReceivedStarter
# 283 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_set FLAG_BIRCH_AIDE_MET, LittlerootTown_ProfessorBirchsLab_EventScript_AideAlreadyMet
# 284 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BirchAwayOnFieldwork, MSGBOX_DEFAULT
# 285 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_BIRCH_AIDE_MET
# 286 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 287 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 288 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 289 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_AideAlreadyMet::
# 290 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BirchIsntOneForDeskWork, MSGBOX_DEFAULT
# 291 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 292 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 293 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 294 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_AideReceivedStarter::
# 295 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BirchEnjoysRivalsHelpToo, MSGBOX_DEFAULT
# 296 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 297 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 298 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 299 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Cyndaquil::
# 300 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 301 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6, LittlerootTown_ProfessorBirchsLab_EventScript_AlreadyChoseJohtoStarter
# 302 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterRight
# 303 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 304 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_CYNDAQUIL, 10, 3
# 305 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	speakername CommonText_Birch
# 306 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_YoullTakeCyndaquil, MSGBOX_YESNO
# 307 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_TakeYourTime
# 308 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_GiveCyndaquil
# 309 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 310 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 311 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Totodile::
# 312 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 313 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6, LittlerootTown_ProfessorBirchsLab_EventScript_AlreadyChoseJohtoStarter
# 314 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterRight
# 315 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 316 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_TOTODILE, 10, 3
# 317 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	speakername CommonText_Birch
# 318 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_YoullTakeTotodile, MSGBOX_YESNO
# 319 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_TakeYourTime
# 320 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_GiveTotodile
# 321 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 322 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 323 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Chikorita::
# 324 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 325 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6, LittlerootTown_ProfessorBirchsLab_EventScript_AlreadyChoseJohtoStarter
# 326 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterRight
# 327 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 328 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_CHIKORITA, 10, 3
# 329 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	speakername CommonText_Birch
# 330 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_YoullTakeChikorita, MSGBOX_YESNO
# 331 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_TakeYourTime
# 332 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_GiveChikorita
# 333 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 334 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 335 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_AlreadyChoseJohtoStarter::
# 336 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BetterLeaveOthersAlone, MSGBOX_DEFAULT
# 337 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 338 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 339 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 340 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_TakeYourTime::
# 341 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 342 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_TakeYourTimeAllInvaluable, MSGBOX_DEFAULT
# 343 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 344 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 345 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 346 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GiveCyndaquil::
# 347 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CYNDAQUIL
# 348 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_CYNDAQUIL
# 349 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_CYNDAQUIL, 5
# 350 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, LittlerootTown_ProfessorBirchsLab_EventScript_SendCyndaquilToParty
# 351 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, LittlerootTown_ProfessorBirchsLab_EventScript_SendCyndaquilToPC
# 352 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 353 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 354 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 355 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 356 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SendCyndaquilToParty::
# 357 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter
# 358 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject LOCALID_BALL_CYNDAQUIL
# 359 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 360 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter2
# 361 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 362 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 363 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter2
# 364 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 365 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 366 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SendCyndaquilToPC::
# 367 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter
# 368 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject LOCALID_BALL_CYNDAQUIL
# 369 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 370 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_CyndaquilTransferredToPC
# 371 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 372 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_CyndaquilTransferredToPC
# 373 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 374 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 375 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_CyndaquilTransferredToPC::
# 376 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_TransferredToPC
# 377 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter2
# 378 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 379 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 380 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter2::
# 381 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 382 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	speakername CommonText_Birch
# 383 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting, MSGBOX_DEFAULT
# 384 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6
# 385 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 386 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 387 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 388 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GiveTotodile::
# 389 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_TOTODILE
# 390 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_TOTODILE
# 391 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_TOTODILE, 5
# 392 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, LittlerootTown_ProfessorBirchsLab_EventScript_SendTotodileToParty
# 393 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, LittlerootTown_ProfessorBirchsLab_EventScript_SendTotodileToPC
# 394 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 395 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 396 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 397 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 398 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SendTotodileToParty::
# 399 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter
# 400 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject LOCALID_BALL_TOTODILE
# 401 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 402 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter2
# 403 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 404 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 405 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter2
# 406 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 407 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 408 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SendTotodileToPC::
# 409 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter
# 410 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject LOCALID_BALL_TOTODILE
# 411 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 412 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_TotodileTransferredToPC
# 413 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 414 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_TotodileTransferredToPC
# 415 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 416 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 417 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_TotodileTransferredToPC::
# 418 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_TransferredToPC
# 419 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter2
# 420 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 421 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 422 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GiveChikorita::
# 423 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CHIKORITA
# 424 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_CHIKORITA
# 425 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_CHIKORITA, 5
# 426 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, LittlerootTown_ProfessorBirchsLab_EventScript_SendChikoritaToParty
# 427 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, LittlerootTown_ProfessorBirchsLab_EventScript_SendChikoritaToPC
# 428 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 429 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 430 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 431 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 432 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SendChikoritaToParty::
# 433 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter
# 434 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject LOCALID_BALL_CHIKORITA
# 435 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 436 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter2
# 437 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 438 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 439 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter2
# 440 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 441 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 442 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SendChikoritaToPC::
# 443 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter
# 444 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject LOCALID_BALL_CHIKORITA
# 445 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 446 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_ChikoritaTransferredToPC
# 447 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 448 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChikoritaTransferredToPC
# 449 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 450 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 451 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_ChikoritaTransferredToPC::
# 452 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_TransferredToPC
# 453 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter2
# 454 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 455 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 456 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter::
# 457 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 458 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	message LittlerootTown_ProfessorBirchsLab_Text_ReceivedJohtoStarter
# 459 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 460 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitfanfare
# 461 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 462 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 463 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Birch::
# 464 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lock
# 465 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	faceplayer
# 466 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 5, LittlerootTown_ProfessorBirchsLab_EventScript_CanHaveAnyOneOfRarePokemon
# 467 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2, LittlerootTown_ProfessorBirchsLab_EventScript_GrassyPatchWaiting
# 468 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_unset FLAG_HAS_MATCH_CALL, LittlerootTown_ProfessorBirchsLab_EventScript_TryRatePokedexOrRegister
# 469 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_unset FLAG_ENABLE_PROF_BIRCH_MATCH_CALL, EventScript_RegisterProfBirch
# 470 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_TryRatePokedexOrRegister
# 471 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 472 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 473 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_CanHaveAnyOneOfRarePokemon::
# 474 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	speakername CommonText_Birch
# 475 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_CanHaveAnyOneOfRarePokemon, MSGBOX_DEFAULT
# 476 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 477 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 478 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 479 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GrassyPatchWaiting::
# 480 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	speakername CommonText_Birch
# 481 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting2, MSGBOX_DEFAULT
# 482 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 483 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 484 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 485 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_TryRatePokedexOrRegister::
# 486 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_unset FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_UNKNOWN_0x380, ProfBirch_EventScript_RatePokedexOrRegister
# 487 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 3, ProfBirch_EventScript_RatePokedexOrRegister
# 488 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6, ProfBirch_EventScript_RatePokedexOrRegister
# 489 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_BIRCH_LAB_STATE, 5, LittlerootTown_ProfessorBirchsLab_EventScript_PokemonAwait
# 490 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	speakername CommonText_Birch
# 491 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BirchRivalGoneHome, MSGBOX_DEFAULT
# 492 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 493 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 494 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 495 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
EventScript_RegisterProfBirch::
# 496 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	speakername CommonText_Birch
# 497 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox MatchCall_Text_BirchRegisterCall, MSGBOX_DEFAULT
# 498 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 499 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 30
# 500 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 501 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox MatchCall_Text_RegisteredBirch, MSGBOX_DEFAULT
# 502 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitfanfare
# 503 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 504 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 30
# 505 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_ENABLE_PROF_BIRCH_MATCH_CALL
# 506 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_REGISTER_BIRCH_STATE, 2
# 507 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 508 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 509 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 510 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GivePokedex::
# 511 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	speakername CommonText_Birch
# 512 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_HeardYouBeatRival, MSGBOX_DEFAULT
# 513 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_CABLE_CLUB_TUTORIAL_STATE, 1
# 514 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 515 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_ProfessorBirchsLab_Movement_RivalApproachPlayer
# 516 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 517 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 518 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 519 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	checkplayergender
# 520 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_ProfessorBirchsLab_EventScript_MayGivePokeBalls
# 521 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_ProfessorBirchsLab_EventScript_BrendanGivePokeBalls
# 522 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 5
# 523 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_ADVENTURE_STARTED
# 524 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_OLDALE_TOWN_STATE, 1
# 525 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 4
# 526 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 3
# 527 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 528 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 529 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 530 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_MayGivePokeBalls::
# 531 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	speakername CommonText_May
# 532 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_MayGotPokedexTooTakeThese, MSGBOX_DEFAULT
# 533 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 534 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
# 535 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, LittlerootTown_ProfessorBirchsLab_EventScript_MayNoRoomForPokeBalls
# 536 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	speakername CommonText_May
# 537 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_CatchCutePokemonWithPokeBalls, MSGBOX_DEFAULT
# 538 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_RESULT, 0
# 539 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 540 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 541 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_BrendanGivePokeBalls::
# 542 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	speakername CommonText_Brendan
# 543 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BrendanGotPokedexTooTakeThese, MSGBOX_DEFAULT
# 544 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 545 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
# 546 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, LittlerootTown_ProfessorBirchsLab_EventScript_BrendanNoRoomForPokeBalls
# 547 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	speakername CommonText_Brendan
# 548 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_CatchCoolPokemonWithPokeBalls, MSGBOX_DEFAULT
# 549 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_RESULT, 1
# 550 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 551 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 552 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_PokemonAwait::
# 553 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	speakername CommonText_Birch
# 554 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_CountlessPokemonAwait, MSGBOX_DEFAULT
# 555 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 556 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 557 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 558 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_MayNoRoomForPokeBalls::
# 559 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	speakername CommonText_May
# 560 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_OhYourBagsFull, MSGBOX_DEFAULT
# 561 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 562 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 563 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_BrendanNoRoomForPokeBalls::
# 564 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	speakername CommonText_Brendan
# 565 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_HeyYourBagsFull, MSGBOX_DEFAULT
# 566 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 567 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 568 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Movement_RivalApproachPlayer:
# 569 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_down
# 570 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_in_place_faster_left
# 571 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	step_end
# 572 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 573 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Machine::
# 574 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_SeriousLookingMachine, MSGBOX_SIGN
# 575 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 576 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 577 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Rival::
# 578 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lock
# 579 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	faceplayer
# 580 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 5, LittlerootTown_ProfessorBirchsLab_EventScript_RivalFuturePlans
# 581 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6, LittlerootTown_ProfessorBirchsLab_EventScript_RivalHaveYouGoneToBattleFrontier
# 582 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2, LittlerootTown_ProfessorBirchsLab_EventScript_RivalTakeBreakFromFieldwork
# 583 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	checkplayergender
# 584 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_ProfessorBirchsLab_EventScript_MayWhereShouldIGoNext
# 585 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_ProfessorBirchsLab_EventScript_BrendanWhereShouldIGoNext
# 586 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 587 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 588 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 589 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_MayWhereShouldIGoNext::
# 590 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	speakername CommonText_May
# 591 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_MayWhereShouldIGoNext, MSGBOX_DEFAULT
# 592 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 593 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 594 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_BrendanWhereShouldIGoNext::
# 595 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	speakername CommonText_Brendan
# 596 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BrendanWhereShouldIGoNext, MSGBOX_DEFAULT
# 597 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 598 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 599 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_RivalFuturePlans::
# 600 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	checkplayergender
# 601 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_ProfessorBirchsLab_EventScript_MayWhatNextImStayingHere
# 602 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_ProfessorBirchsLab_EventScript_BrendanPreferCollectingSlowly
# 603 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 604 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 605 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 606 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_MayWhatNextImStayingHere::
# 607 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	speakername CommonText_May
# 608 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_MayWhatNextImStayingHere, MSGBOX_DEFAULT
# 609 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 610 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 611 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_BrendanPreferCollectingSlowly:
# 612 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	speakername CommonText_Brendan
# 613 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BrendanPreferCollectingSlowly, MSGBOX_DEFAULT
# 614 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 615 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 616 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_RivalHaveYouGoneToBattleFrontier::
# 617 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	checkplayergender
# 618 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_ProfessorBirchsLab_EventScript_MayHaveYouGoneToBattleFrontier
# 619 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_ProfessorBirchsLab_EventScript_BrendanHaveYouGoneToBattleFrontier
# 620 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 621 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 622 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 623 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_MayHaveYouGoneToBattleFrontier::
# 624 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	speakername CommonText_May
# 625 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_MayHaveYouGoneToBattleFrontier, MSGBOX_DEFAULT
# 626 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 627 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 628 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_BrendanHaveYouGoneToBattleFrontier::
# 629 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	speakername CommonText_Brendan
# 630 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BrendanHaveYouGoneToBattleFrontier, MSGBOX_DEFAULT
# 631 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 632 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 633 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_RivalTakeBreakFromFieldwork::
# 634 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	checkplayergender
# 635 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_ProfessorBirchsLab_EventScript_MayTakeBreakFromFieldwork
# 636 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_ProfessorBirchsLab_EventScript_BrendanTakeBreakFromFieldwork
# 637 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 638 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 639 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 640 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_MayTakeBreakFromFieldwork::
# 641 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	speakername CommonText_May
# 642 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_MayTakeBreakFromFieldwork, MSGBOX_DEFAULT
# 643 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 644 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 645 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_BrendanTakeBreakFromFieldwork::
# 646 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	speakername CommonText_Brendan
# 647 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BrendanTakeBreakFromFieldwork, MSGBOX_DEFAULT
# 648 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 649 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 650 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_PC::
# 651 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_PCUsedForResearch, MSGBOX_SIGN
# 652 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 653 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 654 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Bookshelf::
# 655 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_CrammedWithBooksOnPokemon, MSGBOX_SIGN
# 656 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 657 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 658 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Book::
# 659 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BookTooHardToRead, MSGBOX_SIGN
# 660 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 661 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 662 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_ScottAboardSSTidalCall::
# 663 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 664 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	pokenavcall LittlerootTown_ProfessorBirchsLab_Text_ScottAboardSSTidalCall
# 665 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 666 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	clearflag FLAG_SCOTT_CALL_BATTLE_FRONTIER
# 667 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 668 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 669 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 670 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BirchAwayOnFieldwork:
# 671 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Hunh? Prof. Birch?\p"
# 672 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "The Prof's away on fieldwork.\n"
# 673 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Ergo, he isn't here.\p"
# 674 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Oh, let me explain what fieldwork is.\p"
# 675 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It is to study things in the natural\n"
# 676 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "environment, like fields and mountains,\l"
# 677 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "instead of a laboratory.\p"
# 678 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "The Prof isn't one for doing desk work.\n"
# 679 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "He's the type of person who would\l"
# 680 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "rather go outside and experience\l"
# 681 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "things than read about them here.$"
# 682 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 683 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BirchIsntOneForDeskWork:
# 684 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "The Prof isn't one for doing desk work.\n"
# 685 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "He's the type of person who would\l"
# 686 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "rather go outside and experience\l"
# 687 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "things than read about them here.$"
# 688 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 689 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BirchEnjoysRivalsHelpToo:
# 690 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Prof. Birch is studying the habitats\n"
# 691 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "and distribution of Pokémon.\p"
# 692 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "The Prof enjoys {RIVAL}'s help, too.\n"
# 693 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "There's a lot of love there.$"
# 694 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 695 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_LikeYouToHavePokemon:
# 696 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "So, {PLAYER}{KUN}.\p"
# 697 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I've heard so much about you from\n"
# 698 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "your father.\p"
# 699 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I've heard that you don't have your\n"
# 700 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "own Pokémon yet.\p"
# 701 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "But the way you battled earlier,\n"
# 702 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "you pulled it off with aplomb!\p"
# 703 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I guess you have your father's blood\n"
# 704 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "in your veins after all!\p"
# 705 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Oh, yes. As thanks for rescuing me,\n"
# 706 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'd like you to have the Pokémon you\l"
# 707 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "used earlier.$"
# 708 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 709 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_LikeYouToHavePokemon2:
# 710 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{PLAYER} received the {STR_VAR_1}!$"
# 711 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 712 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_WhyNotGiveNicknameToMon:
# 713 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "While you're at it, why not give a\n"
# 714 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "nickname to that {STR_VAR_1}?$"
# 715 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 716 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_MightBeGoodIdeaToGoSeeRival:
# 717 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "If you work at Pokémon and gain\n"
# 718 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "experience, I think you'll make\l"
# 719 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "an extremely good Trainer.\p"
# 720 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "My kid, {RIVAL}, is also studying\n"
# 721 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Pokémon while helping me out.\p"
# 722 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{PLAYER}{KUN}, go see {RIVAL}.$"
# 723 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 724 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_GetRivalToTeachYou:
# 725 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Get {RIVAL} to teach you what it\n"
# 726 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "means to be a Trainer.\p"
# 727 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Here, take some Poké Balls too.\p"
# 728 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{RIVAL} always carries at least\n"
# 729 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "two Pokémon with them.$"
# 730 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 731 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BirchRivalGoneHome:
# 732 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{RIVAL}?\n"
# 733 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Gone home, I think.\p"
# 734 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Or maybe that kid's scrabbling around\n"
# 735 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "in tall grass again somewhere…\p"
# 736 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "If you or your Pokémon get tired,\n"
# 737 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "you should get some rest at home.$"
# 738 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 739 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_HeardYouBeatRival:
# 740 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Oh, hi, {PLAYER}{KUN}!\p"
# 741 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I heard you beat {RIVAL} on\n"
# 742 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "your first try. That's excellent!\p"
# 743 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{RIVAL}'s been helping with my research\n"
# 744 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "for a long time.\p"
# 745 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{RIVAL} has an extensive history as\n"
# 746 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "a Trainer already.$"
# 747 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 748 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_CountlessPokemonAwait:
# 749 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Countless Pokémon await you!\p"
# 750 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Argh, I'm getting the itch to get out\n"
# 751 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "and do fieldwork again!$"
# 752 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 753 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_MayGotPokedexTooTakeThese:
# 754 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Oh, wow, {PLAYER}{KUN}!\n"
# 755 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You've got a Pokédex, too!\p"
# 756 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "That's great! Just like me!\n"
# 757 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I've got something for you, too!$"
# 758 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 759 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_CatchCutePokemonWithPokeBalls:
# 760 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It's fun if you can get a lot of\n"
# 761 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Pokémon!\p"
# 762 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'm going to look all over the place\n"
# 763 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "because I want different Pokémon.\p"
# 764 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "If I find any cute Pokémon, I'll catch\n"
# 765 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "them with Poké Balls!$"
# 766 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 767 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_OhYourBagsFull:
# 768 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Oh? Your Bag's full.$"
# 769 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 770 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_MayWhereShouldIGoNext:
# 771 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I wonder where I should go look for\n"
# 772 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Pokémon next?$"
# 773 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 774 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BrendanGotPokedexTooTakeThese:
# 775 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Huh…\n"
# 776 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "So you've got a Pokédex, too.\p"
# 777 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Well then, here.\n"
# 778 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'll give you these.$"
# 779 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 780 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_CatchCoolPokemonWithPokeBalls:
# 781 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You know it's more fun to\n"
# 782 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "have a whole bunch of Pokémon.\p"
# 783 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'm going to explore all over the place\n"
# 784 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "to find different Pokémon.\p"
# 785 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "If I find any cool Pokémon, you bet\n"
# 786 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'll try to get them with Poké Balls.$"
# 787 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 788 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_HeyYourBagsFull:
# 789 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Hey, your Bag's full.$"
# 790 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 791 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BrendanWhereShouldIGoNext:
# 792 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Where should I look for\n"
# 793 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Pokémon next…$"
# 794 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 795 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_SeriousLookingMachine:
# 796 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It's a serious-looking machine.\n"
# 797 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "The Prof must use this for research.$"
# 798 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 799 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_PCUsedForResearch:
# 800 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It's a PC used for research.\n"
# 801 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Better not mess around with it.$"
# 802 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 803 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_CrammedWithBooksOnPokemon:
# 804 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It's crammed with books on Pokémon.$"
# 805 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 806 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BookTooHardToRead:
# 807 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It's a book that's too hard to read.$"
# 808 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 809 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_OtherRegionsUpgradeToNational:
# 810 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Now…\p"
# 811 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{PLAYER}{KUN} and {RIVAL}, I've had the two\n"
# 812 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "of you help me study Pokémon.\p"
# 813 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Thanks to your help, new facts\n"
# 814 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "are coming to light.\p"
# 815 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It appears that in the Hoenn region,\n"
# 816 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "there are also Pokémon from other\l"
# 817 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "regions.\p"
# 818 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It goes to show how rich and varied\n"
# 819 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "the natural environments of Hoenn\l"
# 820 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "happen to be.\p"
# 821 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "That's why I think it's necessary for\n"
# 822 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "me to upgrade your Pokédex to\l"
# 823 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "the National Mode.\p"
# 824 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Here, let me see your Pokédex units.$"
# 825 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 826 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_MayUpgradeSoCool:
# 827 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Eheheh!\p"
# 828 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It's so cool that even my Pokédex\n"
# 829 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "is getting updated!\p"
# 830 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It's because you went out and caught\n"
# 831 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "so many Pokémon, {PLAYER}{KUN}!$"
# 832 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 833 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BrendanYouCanThankMe:
# 834 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I went out all over Hoenn\n"
# 835 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "and checked out Pokémon.\p"
# 836 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You can thank me for getting\n"
# 837 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "the National Mode Pokédex.\p"
# 838 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Yep, you're lucky, {PLAYER}!$"
# 839 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 840 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_OkayAllDone:
# 841 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Okay, all done!$"
# 842 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 843 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_PokedexUpgradedToNational:
# 844 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{PLAYER}'s Pokédex was upgraded\n"
# 845 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "to the National Mode!$"
# 846 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 847 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting2:
# 848 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "But listen.\n"
# 849 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You've become the Champion,\l"
# 850 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "but your Pokémon journey isn't over.\p"
# 851 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "There is no end to the road\n"
# 852 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "that is Pokémon.\p"
# 853 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Somewhere, there is a grassy patch\n"
# 854 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "that's waiting for you!$"
# 855 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 856 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_MayTakeBreakFromFieldwork:
# 857 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I think I'll take a short break\n"
# 858 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "from fieldwork.\p"
# 859 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I think I'll help the Prof here for\n"
# 860 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "a while.$"
# 861 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 862 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BrendanTakeBreakFromFieldwork:
# 863 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "For the time being,\n"
# 864 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'm taking a break from fieldwork.\p"
# 865 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'll be helping out the Prof here\n"
# 866 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "for a while.$"
# 867 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 868 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_CompletedDexChoosePokemon:
# 869 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Oh, {PLAYER}{KUN}!\n"
# 870 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Let's have a look at your Pokédex.\p"
# 871 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "… … … … … …\n"
# 872 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "… … … … … …\p"
# 873 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Yes, there's no doubt about it.\p"
# 874 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You really have completed the Hoenn\n"
# 875 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "region's Pokédex.\p"
# 876 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "That's more than just impressive.\p"
# 877 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I have a gift for you.\p"
# 878 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Consider it my show of appreciation\n"
# 879 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "for the fantastic work you've done.\p"
# 880 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "My gift is a rare Pokémon only found\n"
# 881 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "in another region!\p"
# 882 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You can have any one of these\n"
# 883 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "three Pokémon!$"
# 884 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 885 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_CanHaveAnyOneOfRarePokemon:
# 886 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "These are rare Pokémon only found\n"
# 887 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "in another region!\p"
# 888 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You can have any one of these\n"
# 889 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "three Pokémon!$"
# 890 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 891 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_YoullTakeCyndaquil:
# 892 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "The Fire Pokémon\n"
# 893 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Cyndaquil caught your eye!\p"
# 894 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You're as sharp as ever!\p"
# 895 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "So the Cyndaquil is your choice?$"
# 896 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 897 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_YoullTakeTotodile:
# 898 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "The Water Pokémon\n"
# 899 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Totodile is your choice!\p"
# 900 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You know how to pick a good one.\p"
# 901 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "So, you'll take the Totodile?$"
# 902 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 903 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_YoullTakeChikorita:
# 904 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "The Grass Pokémon\n"
# 905 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Chikorita is your choice!\p"
# 906 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You sure know what you're doing.\p"
# 907 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "So, you'll take the Chikorita?$"
# 908 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 909 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_TakeYourTimeAllInvaluable:
# 910 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Take your time before you decide.\n"
# 911 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "They're all invaluable Pokémon.$"
# 912 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 913 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_ReceivedJohtoStarter:
# 914 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{PLAYER} received the {STR_VAR_1}\n"
# 915 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "from Prof. Birch!$"
# 916 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 917 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting:
# 918 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Listen, {PLAYER}{KUN}.\n"
# 919 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You've completed the Hoenn Pokédex,\l"
# 920 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "but your Pokémon journey isn't over.\p"
# 921 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "There is no end to the road\n"
# 922 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "that is Pokémon.\p"
# 923 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Somewhere, there is a grassy patch\n"
# 924 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "that's waiting for you!$"
# 925 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 926 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BetterLeaveOthersAlone:
# 927 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You received the promised Pokémon.\n"
# 928 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Better leave the others alone.$"
# 929 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 930 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_MayWhatNextImStayingHere:
# 931 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{PLAYER}{KUN}, after this…\n"
# 932 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "What are you going to do?\p"
# 933 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Are you going to keep battling\n"
# 934 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "and sharpening your skills?\p"
# 935 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Or are you going to try filling\n"
# 936 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "the National Pokédex?\p"
# 937 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'm staying here to help the Prof.$"
# 938 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 939 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BrendanPreferCollectingSlowly:
# 940 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Rather than collecting\n"
# 941 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Pokémon, I prefer slowly and \l"
# 942 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "steadily raising the one I chose.$"
# 943 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 944 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_MayHaveYouGoneToBattleFrontier:
# 945 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Oh, hi, {PLAYER}{KUN}!\n"
# 946 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Have you gone to that place,\l"
# 947 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "the Battle Frontier?$"
# 948 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 949 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BrendanHaveYouGoneToBattleFrontier:
# 950 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Hey, {PLAYER}!\n"
# 951 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Have you gone out to that place,\l"
# 952 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "the Battle Frontier?$"
# 953 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 954 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_ScottAboardSSTidalCall:
# 955 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "… … … … … …\n"
# 956 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "… … … … … Beep!\p"
# 957 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Scott: Hi, hi, {PLAYER}!\n"
# 958 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It's me, Scott.\p"
# 959 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'm aboard the S.S. Tidal now.\n"
# 960 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It feels great to be on the sea!\p"
# 961 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "By the way…\p"
# 962 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "There's this place that I'd like to\n"
# 963 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "invite you to for a visit.\p"
# 964 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "If you're interested, board a ferry\n"
# 965 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "at either Slateport or Lilycove.\p"
# 966 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'll fill you in on the details when\n"
# 967 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "we meet. I'll be waiting!\p"
# 968 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "… … … … … …\n"
# 969 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "… … … … … Click!$"

Sakura_Town01::
# 973 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	faceplayer
# 974 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lock
# 975 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	speakername CommonText_Sakura
# 976 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Town01_SakuraText
# 977 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
	end


LittlerootTown_ProfessorBirchsLab_EventScript_ExpCharmBox::
# 982 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lock
# 983 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	checkitem ITEM_EXP_CHARM
# 984 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne LittlerootTown_ProfessorBirchsLab_EventScript_ExpCharmBox_2
# 992 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ExpCharmBox_Text_2
# 993 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ExpCharmBox_Text_3, MSGBOX_YESNO
# 994 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_ExpCharmBox_7
LittlerootTown_ProfessorBirchsLab_EventScript_ExpCharmBox_1:
# 998 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 999 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
	return

LittlerootTown_ProfessorBirchsLab_EventScript_ExpCharmBox_2:
# 985 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ExpCharmBox_Text_0, MSGBOX_YESNO
# 986 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_ExpCharmBox_5
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ExpCharmBox_1

LittlerootTown_ProfessorBirchsLab_EventScript_ExpCharmBox_5:
# 987 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeitem ITEM_EXP_CHARM
# 988 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ExpCharmBox_Text_1
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ExpCharmBox_1

LittlerootTown_ProfessorBirchsLab_EventScript_ExpCharmBox_7:
# 995 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	giveitem ITEM_EXP_CHARM
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ExpCharmBox_1


LittlerootTown_ProfessorBirchsLab_EventScript_ExpCharmBox_Text_0:
# 985 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Return the Exp. Charm to the box?$"

LittlerootTown_ProfessorBirchsLab_EventScript_ExpCharmBox_Text_1:
# 988 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "The Exp. Charm was returned to the box.$"

LittlerootTown_ProfessorBirchsLab_EventScript_ExpCharmBox_Text_2:
# 992 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "There's an Exp. Charm in the box!$"

LittlerootTown_ProfessorBirchsLab_EventScript_ExpCharmBox_Text_3:
# 993 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "WARNING: The game is not balanced\n"
	.string "around the use of the Exp. Charm.\p"
	.string "Take the Exp. Charm anyway?$"
