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
	setflag FLAG_TEMP_3
# 34 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 35 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call ProfBirch_EventScript_UpdateLocation
# 36 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_EMERALBODY_RIVAL_STATE, 1, LittlerootTown_ProfessorBirchsLab_EventScript_ShowSakura
# 37 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_set FLAG_TERA_ENABLED, LittlerootTown_ProfessorBirchsLab_EventScript_ShowRowanAide
# 38 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_ge VAR_SKY_PILLAR_STATE, 2, LittlerootTown_ProfessorBirchsLab_EventScript_ShowBianca
# 39 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6, LittlerootTown_ProfessorBirchsLab_EventScript_SetAfterJohtoStarterLayout
# 40 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 4, LittlerootTown_ProfessorBirchsLab_EventScript_SetJohtoStarterLayout
# 41 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 3, LittlerootTown_ProfessorBirchsLab_EventScript_CheckReadyForJohtoStarter
# 42 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 43 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 44 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_ShowSakura::
# 45 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	clearflag FLAG_TEMP_1
# 46 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 47 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 48 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_ShowRowanAide::
# 49 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	clearflag FLAG_TEMP_2
# 50 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 51 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 52 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_CheckReadyForJohtoStarter::
# 53 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	specialvar VAR_RESULT, HasAllHoennMons
# 54 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, LittlerootTown_ProfessorBirchsLab_EventScript_SetReadyForJohtoStarter
# 55 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectmovementtype LOCALID_RIVAL, MOVEMENT_TYPE_WANDER_UP_AND_DOWN
# 56 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 5, 10
# 57 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 58 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 59 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SetReadyForJohtoStarter::
# 60 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 4
# 61 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_SetJohtoStarterLayout
# 62 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 63 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SetJohtoStarterLayout::
# 64 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setmaplayoutindex LAYOUT_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB_WITH_TABLE
# 65 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 66 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 67 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SetAfterJohtoStarterLayout::
# 68 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setmaplayoutindex LAYOUT_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB_WITH_TABLE
# 69 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectmovementtype LOCALID_RIVAL, MOVEMENT_TYPE_WANDER_UP_AND_DOWN
# 70 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 5, 10
# 71 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 72 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 73 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_OnWarp:
# 74 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_BIRCH_LAB_STATE, 2, LittlerootTown_ProfessorBirchsLab_EventScript_SetPlayerPosForReceiveStarter
# 75 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_ProfessorBirchsLab_EventScript_SetObjectPosForDexUpgrade
# 76 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2, LittlerootTown_ProfessorBirchsLab_EventScript_SetObjectPosForDexUpgrade
# 77 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 3, LittlerootTown_ProfessorBirchsLab_EventScript_AddRivalObject
# 78 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6, LittlerootTown_ProfessorBirchsLab_EventScript_AddRivalObject
# 79 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 4, LittlerootTown_ProfessorBirchsLab_EventScript_SetObjectPosForJohtoStarters
# 80 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 5, LittlerootTown_ProfessorBirchsLab_EventScript_SetObjectPosForJohtoStarters
# 81 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.2byte 0
# 82 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 83 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SetPlayerPosForReceiveStarter::
# 84 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 85 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 86 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 87 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SetObjectPosForDexUpgrade::
# 88 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 89 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addobject LOCALID_BIRCH
# 90 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addobject LOCALID_RIVAL
# 91 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject LOCALID_RIVAL, DIR_NORTH
# 92 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxy LOCALID_RIVAL, 5, 5
# 93 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject LOCALID_BIRCH, DIR_SOUTH
# 94 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxy LOCALID_BIRCH, 6, 4
# 95 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject LOCALID_AIDE, DIR_EAST
# 96 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxy LOCALID_AIDE, 10, 10
# 97 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 98 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 99 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_AddRivalObject::
# 100 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addobject LOCALID_RIVAL
# 101 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 102 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 103 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SetObjectPosForJohtoStarters::
# 104 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addobject LOCALID_BALL_CYNDAQUIL
# 105 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addobject LOCALID_BALL_TOTODILE
# 106 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addobject LOCALID_BALL_CHIKORITA
# 107 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addobject LOCALID_RIVAL
# 108 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject LOCALID_BALL_CYNDAQUIL, DIR_SOUTH
# 109 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxy LOCALID_BALL_CYNDAQUIL, 8, 4
# 110 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject LOCALID_BALL_TOTODILE, DIR_SOUTH
# 111 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxy LOCALID_BALL_TOTODILE, 9, 4
# 112 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject LOCALID_BALL_CHIKORITA, DIR_SOUTH
# 113 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxy LOCALID_BALL_CHIKORITA, 10, 4
# 114 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject LOCALID_BIRCH, DIR_SOUTH
# 115 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxy LOCALID_BIRCH, 6, 4
# 116 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject LOCALID_RIVAL, DIR_EAST
# 117 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxy LOCALID_RIVAL, 5, 5
# 118 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 119 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 120 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_OnFrame:
# 121 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_BIRCH_LAB_STATE, 2, LittlerootTown_ProfessorBirchsLab_EventScript_GiveStarterEvent
# 122 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_BIRCH_LAB_STATE, 4, LittlerootTown_ProfessorBirchsLab_EventScript_GivePokedexEvent
# 123 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_ProfessorBirchsLab_EventScript_UpgradeToNationalDex
# 124 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_TEMP_2, 1, LittlerootTown_ProfessorBirchsLab_EventScript_Bianca
# 125 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 4, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseJohtoStarter
# 126 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.2byte 0
# 127 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 128 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ The starter is technically given prior to this on Route 101 by special ChooseStarter
# 129 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ This is just where the game tells you its yours and lets you nickname it
# 130 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GiveStarterEvent::
# 131 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 132 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 133 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	speakername CommonText_Birch
# 134 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_LikeYouToHavePokemon
# 135 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	speakername NULL
# 136 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	message LittlerootTown_ProfessorBirchsLab_Text_LikeYouToHavePokemon2
# 137 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 138 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 139 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitfanfare
# 140 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	speakername CommonText_Birch
# 141 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_WhyNotGiveNicknameToMon, MSGBOX_YESNO
# 142 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, YES, LittlerootTown_ProfessorBirchsLab_EventScript_NicknameStarter
# 143 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_AgreeToSeeRival
# 144 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 145 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 146 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_NicknameStarter::
# 147 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_0x8004, 0
# 148 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 149 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_AgreeToSeeRival
# 150 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 151 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 152 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_AgreeToSeeRival::
# 153 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_MightBeGoodIdeaToGoSeeRival, MSGBOX_DEFAULT
# 154 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_GetRivalToTeachYou, MSGBOX_DEFAULT
# 155 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
# 156 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BOY
# 157 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 3
# 158 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 159 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 160 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 161 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GivePokedexEvent::
# 162 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 163 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_ProfessorBirchsLab_Movement_PlayerEnterLabForPokedex
# 164 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 165 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_GivePokedex
# 166 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 167 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 168 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Movement_PlayerEnterLabForPokedex:
# 169 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 170 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 171 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 172 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 173 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 174 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 175 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 176 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	step_end
# 177 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 178 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_UpgradeToNationalDex::
# 179 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 180 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 30
# 181 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	speakername CommonText_Birch
# 182 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_OtherRegionsUpgradeToNational, MSGBOX_DEFAULT
# 183 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 184 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_BIRCH, LittlerootTown_ProfessorBirchsLab_Movement_BirchRetrievePokedexes
# 185 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 186 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 20
# 187 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playse SE_CLICK
# 188 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 10
# 189 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playse SE_CLICK
# 190 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 10
# 191 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playse SE_CLICK
# 192 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 10
# 193 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playse SE_CLICK
# 194 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 20
# 195 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterRight
# 196 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 197 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 198 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	checkplayergender
# 199 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_ProfessorBirchsLab_EventScript_MayUpgradeComment
# 200 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_ProfessorBirchsLab_EventScript_BrendanUpgradeComment
# 201 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playse SE_PC_ON
# 202 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitse
# 203 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 20
# 204 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_BIRCH, LittlerootTown_ProfessorBirchsLab_Movement_BirchReturnPokedex
# 205 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 206 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterUp
# 207 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 208 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 209 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	speakername CommonText_Birch
# 210 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_OkayAllDone, MSGBOX_DEFAULT
# 211 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 212 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	message LittlerootTown_ProfessorBirchsLab_Text_PokedexUpgradedToNational
# 213 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 214 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitfanfare
# 215 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 216 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	special EnableNationalPokedex
# 217 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	speakername CommonText_Birch
# 218 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting2, MSGBOX_DEFAULT
# 219 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 220 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH
# 221 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_RIVAL
# 222 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2
# 223 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_SCOTT_BF_CALL_STEP_COUNTER, 0
# 224 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_SCOTT_CALL_BATTLE_FRONTIER
# 225 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 226 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 227 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 228 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_MayUpgradeComment::
# 229 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	speakername CommonText_May
# 230 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_MayUpgradeSoCool, MSGBOX_DEFAULT
# 231 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 232 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 233 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 234 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_BrendanUpgradeComment::
# 235 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	speakername CommonText_Brendan
# 236 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BrendanYouCanThankMe, MSGBOX_DEFAULT
# 237 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 238 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 239 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 240 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Movement_BirchRetrievePokedexes:
# 241 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_left
# 242 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_in_place_faster_down
# 243 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay_16
# 244 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay_16
# 245 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_right
# 246 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_in_place_faster_down
# 247 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay_16
# 248 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay_16
# 249 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_right
# 250 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_down
# 251 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_down
# 252 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_down
# 253 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_down
# 254 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_right
# 255 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_right
# 256 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_right
# 257 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_in_place_faster_up
# 258 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	step_end
# 259 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 260 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Movement_BirchReturnPokedex:
# 261 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_left
# 262 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_left
# 263 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_left
# 264 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 265 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 266 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 267 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 268 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_left
# 269 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_in_place_faster_down
# 270 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	step_end
# 271 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 272 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_ChooseJohtoStarter::
# 273 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 274 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_ProfessorBirchsLab_Movement_PlayerEnterLabForPokedex
# 275 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 276 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	speakername CommonText_Birch
# 277 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_CompletedDexChoosePokemon, MSGBOX_DEFAULT
# 278 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 5
# 279 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 280 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 281 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 282 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Aide::
# 283 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lock
# 284 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	faceplayer
# 285 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_ge VAR_BIRCH_LAB_STATE, 3, LittlerootTown_ProfessorBirchsLab_EventScript_AideReceivedStarter
# 286 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_set FLAG_BIRCH_AIDE_MET, LittlerootTown_ProfessorBirchsLab_EventScript_AideAlreadyMet
# 287 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BirchAwayOnFieldwork, MSGBOX_DEFAULT
# 288 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_BIRCH_AIDE_MET
# 289 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 290 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 291 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 292 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_AideAlreadyMet::
# 293 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BirchIsntOneForDeskWork, MSGBOX_DEFAULT
# 294 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 295 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 296 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 297 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_AideReceivedStarter::
# 298 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BirchEnjoysRivalsHelpToo, MSGBOX_DEFAULT
# 299 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 300 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 301 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 302 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Cyndaquil::
# 303 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 304 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6, LittlerootTown_ProfessorBirchsLab_EventScript_AlreadyChoseJohtoStarter
# 305 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterRight
# 306 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 307 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_CYNDAQUIL, 10, 3
# 308 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	speakername CommonText_Birch
# 309 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_YoullTakeCyndaquil, MSGBOX_YESNO
# 310 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_TakeYourTime
# 311 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_GiveCyndaquil
# 312 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 313 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 314 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Totodile::
# 315 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 316 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6, LittlerootTown_ProfessorBirchsLab_EventScript_AlreadyChoseJohtoStarter
# 317 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterRight
# 318 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 319 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_TOTODILE, 10, 3
# 320 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	speakername CommonText_Birch
# 321 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_YoullTakeTotodile, MSGBOX_YESNO
# 322 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_TakeYourTime
# 323 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_GiveTotodile
# 324 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 325 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 326 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Chikorita::
# 327 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 328 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6, LittlerootTown_ProfessorBirchsLab_EventScript_AlreadyChoseJohtoStarter
# 329 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterRight
# 330 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 331 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_CHIKORITA, 10, 3
# 332 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	speakername CommonText_Birch
# 333 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_YoullTakeChikorita, MSGBOX_YESNO
# 334 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_TakeYourTime
# 335 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_GiveChikorita
# 336 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 337 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 338 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_AlreadyChoseJohtoStarter::
# 339 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BetterLeaveOthersAlone, MSGBOX_DEFAULT
# 340 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 341 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 342 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 343 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_TakeYourTime::
# 344 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 345 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_TakeYourTimeAllInvaluable, MSGBOX_DEFAULT
# 346 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 347 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 348 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 349 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GiveCyndaquil::
# 350 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CYNDAQUIL
# 351 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_CYNDAQUIL
# 352 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_CYNDAQUIL, 5
# 353 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, LittlerootTown_ProfessorBirchsLab_EventScript_SendCyndaquilToParty
# 354 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, LittlerootTown_ProfessorBirchsLab_EventScript_SendCyndaquilToPC
# 355 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 356 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 357 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 358 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 359 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SendCyndaquilToParty::
# 360 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter
# 361 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject LOCALID_BALL_CYNDAQUIL
# 362 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 363 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter2
# 364 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 365 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 366 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter2
# 367 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 368 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 369 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SendCyndaquilToPC::
# 370 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter
# 371 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject LOCALID_BALL_CYNDAQUIL
# 372 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 373 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_CyndaquilTransferredToPC
# 374 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 375 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_CyndaquilTransferredToPC
# 376 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 377 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 378 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_CyndaquilTransferredToPC::
# 379 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_TransferredToPC
# 380 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter2
# 381 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 382 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 383 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter2::
# 384 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 385 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	speakername CommonText_Birch
# 386 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting, MSGBOX_DEFAULT
# 387 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6
# 388 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 389 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 390 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 391 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GiveTotodile::
# 392 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_TOTODILE
# 393 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_TOTODILE
# 394 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_TOTODILE, 5
# 395 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, LittlerootTown_ProfessorBirchsLab_EventScript_SendTotodileToParty
# 396 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, LittlerootTown_ProfessorBirchsLab_EventScript_SendTotodileToPC
# 397 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 398 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 399 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 400 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 401 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SendTotodileToParty::
# 402 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter
# 403 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject LOCALID_BALL_TOTODILE
# 404 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 405 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter2
# 406 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 407 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 408 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter2
# 409 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 410 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 411 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SendTotodileToPC::
# 412 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter
# 413 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject LOCALID_BALL_TOTODILE
# 414 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 415 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_TotodileTransferredToPC
# 416 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 417 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_TotodileTransferredToPC
# 418 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 419 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 420 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_TotodileTransferredToPC::
# 421 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_TransferredToPC
# 422 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter2
# 423 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 424 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 425 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GiveChikorita::
# 426 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CHIKORITA
# 427 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_CHIKORITA
# 428 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_CHIKORITA, 5
# 429 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, LittlerootTown_ProfessorBirchsLab_EventScript_SendChikoritaToParty
# 430 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, LittlerootTown_ProfessorBirchsLab_EventScript_SendChikoritaToPC
# 431 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 432 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 433 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 434 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 435 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SendChikoritaToParty::
# 436 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter
# 437 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject LOCALID_BALL_CHIKORITA
# 438 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 439 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter2
# 440 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 441 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 442 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter2
# 443 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 444 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 445 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SendChikoritaToPC::
# 446 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter
# 447 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject LOCALID_BALL_CHIKORITA
# 448 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 449 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_ChikoritaTransferredToPC
# 450 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 451 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChikoritaTransferredToPC
# 452 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 453 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 454 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_ChikoritaTransferredToPC::
# 455 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_TransferredToPC
# 456 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter2
# 457 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 458 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 459 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter::
# 460 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 461 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	message LittlerootTown_ProfessorBirchsLab_Text_ReceivedJohtoStarter
# 462 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 463 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitfanfare
# 464 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 465 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 466 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Birch::
# 467 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lock
# 468 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	faceplayer
# 469 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 5, LittlerootTown_ProfessorBirchsLab_EventScript_CanHaveAnyOneOfRarePokemon
# 470 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2, LittlerootTown_ProfessorBirchsLab_EventScript_GrassyPatchWaiting
# 471 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_unset FLAG_HAS_MATCH_CALL, LittlerootTown_ProfessorBirchsLab_EventScript_TryRatePokedexOrRegister
# 472 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_unset FLAG_ENABLE_PROF_BIRCH_MATCH_CALL, EventScript_RegisterProfBirch
# 473 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_TryRatePokedexOrRegister
# 474 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 475 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 476 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_CanHaveAnyOneOfRarePokemon::
# 477 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	speakername CommonText_Birch
# 478 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_CanHaveAnyOneOfRarePokemon, MSGBOX_DEFAULT
# 479 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 480 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 481 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 482 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GrassyPatchWaiting::
# 483 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	speakername CommonText_Birch
# 484 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting2, MSGBOX_DEFAULT
# 485 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 486 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 487 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 488 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_TryRatePokedexOrRegister::
# 489 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_unset FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_UNKNOWN_0x380, ProfBirch_EventScript_RatePokedexOrRegister
# 490 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 3, ProfBirch_EventScript_RatePokedexOrRegister
# 491 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6, ProfBirch_EventScript_RatePokedexOrRegister
# 492 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_BIRCH_LAB_STATE, 5, LittlerootTown_ProfessorBirchsLab_EventScript_PokemonAwait
# 493 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	speakername CommonText_Birch
# 494 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BirchRivalGoneHome, MSGBOX_DEFAULT
# 495 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 496 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 497 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 498 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
EventScript_RegisterProfBirch::
# 499 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	speakername CommonText_Birch
# 500 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox MatchCall_Text_BirchRegisterCall, MSGBOX_DEFAULT
# 501 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 502 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 30
# 503 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 504 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	bufferstring STR_VAR_2, CommonText_Birch
# 505 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_RegisteredInPokenav_OneInput, MSGBOX_DEFAULT
# 506 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitfanfare
# 507 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 508 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 30
# 509 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_ENABLE_PROF_BIRCH_MATCH_CALL
# 510 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_REGISTER_BIRCH_STATE, 2
# 511 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 512 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 513 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 514 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GivePokedex::
# 515 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	speakername CommonText_Birch
# 516 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_HeardYouBeatRival, MSGBOX_DEFAULT
# 517 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_CABLE_CLUB_TUTORIAL_STATE, 1
# 518 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 519 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_ProfessorBirchsLab_Movement_RivalApproachPlayer
# 520 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 521 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 522 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 523 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	checkplayergender
# 524 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_ProfessorBirchsLab_EventScript_MayGivePokeBalls
# 525 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_ProfessorBirchsLab_EventScript_BrendanGivePokeBalls
# 526 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 5
# 527 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_ADVENTURE_STARTED
# 528 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_OLDALE_TOWN_STATE, 1
# 529 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 4
# 530 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 3
# 531 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 532 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 533 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 534 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_MayGivePokeBalls::
# 535 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	speakername CommonText_May
# 536 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_MayGotPokedexTooTakeThese, MSGBOX_DEFAULT
# 537 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 538 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
# 539 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, LittlerootTown_ProfessorBirchsLab_EventScript_MayNoRoomForPokeBalls
# 540 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	speakername CommonText_May
# 541 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_CatchCutePokemonWithPokeBalls, MSGBOX_DEFAULT
# 542 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_RESULT, 0
# 543 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 544 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 545 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_BrendanGivePokeBalls::
# 546 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	speakername CommonText_Brendan
# 547 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BrendanGotPokedexTooTakeThese, MSGBOX_DEFAULT
# 548 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 549 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
# 550 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, LittlerootTown_ProfessorBirchsLab_EventScript_BrendanNoRoomForPokeBalls
# 551 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	speakername CommonText_Brendan
# 552 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_CatchCoolPokemonWithPokeBalls, MSGBOX_DEFAULT
# 553 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_RESULT, 1
# 554 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 555 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 556 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_PokemonAwait::
# 557 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	speakername CommonText_Birch
# 558 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_CountlessPokemonAwait, MSGBOX_DEFAULT
# 559 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 560 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 561 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 562 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_MayNoRoomForPokeBalls::
# 563 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	speakername CommonText_May
# 564 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_OhYourBagsFull, MSGBOX_DEFAULT
# 565 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 566 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 567 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_BrendanNoRoomForPokeBalls::
# 568 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	speakername CommonText_Brendan
# 569 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_HeyYourBagsFull, MSGBOX_DEFAULT
# 570 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 571 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 572 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Movement_RivalApproachPlayer:
# 573 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_down
# 574 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_in_place_faster_left
# 575 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	step_end
# 576 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 577 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Machine::
# 578 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_SeriousLookingMachine, MSGBOX_SIGN
# 579 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 580 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 581 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Rival::
# 582 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lock
# 583 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	faceplayer
# 584 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 5, LittlerootTown_ProfessorBirchsLab_EventScript_RivalFuturePlans
# 585 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6, LittlerootTown_ProfessorBirchsLab_EventScript_RivalHaveYouGoneToBattleFrontier
# 586 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2, LittlerootTown_ProfessorBirchsLab_EventScript_RivalTakeBreakFromFieldwork
# 587 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	checkplayergender
# 588 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_ProfessorBirchsLab_EventScript_MayWhereShouldIGoNext
# 589 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_ProfessorBirchsLab_EventScript_BrendanWhereShouldIGoNext
# 590 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 591 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 592 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 593 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_MayWhereShouldIGoNext::
# 594 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	speakername CommonText_May
# 595 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_MayWhereShouldIGoNext, MSGBOX_DEFAULT
# 596 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 597 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 598 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_BrendanWhereShouldIGoNext::
# 599 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	speakername CommonText_Brendan
# 600 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BrendanWhereShouldIGoNext, MSGBOX_DEFAULT
# 601 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 602 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 603 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_RivalFuturePlans::
# 604 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	checkplayergender
# 605 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_ProfessorBirchsLab_EventScript_MayWhatNextImStayingHere
# 606 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_ProfessorBirchsLab_EventScript_BrendanPreferCollectingSlowly
# 607 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 608 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 609 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 610 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_MayWhatNextImStayingHere::
# 611 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	speakername CommonText_May
# 612 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_MayWhatNextImStayingHere, MSGBOX_DEFAULT
# 613 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 614 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 615 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_BrendanPreferCollectingSlowly:
# 616 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	speakername CommonText_Brendan
# 617 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BrendanPreferCollectingSlowly, MSGBOX_DEFAULT
# 618 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 619 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 620 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_RivalHaveYouGoneToBattleFrontier::
# 621 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	checkplayergender
# 622 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_ProfessorBirchsLab_EventScript_MayHaveYouGoneToBattleFrontier
# 623 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_ProfessorBirchsLab_EventScript_BrendanHaveYouGoneToBattleFrontier
# 624 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 625 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 626 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 627 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_MayHaveYouGoneToBattleFrontier::
# 628 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	speakername CommonText_May
# 629 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_MayHaveYouGoneToBattleFrontier, MSGBOX_DEFAULT
# 630 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 631 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 632 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_BrendanHaveYouGoneToBattleFrontier::
# 633 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	speakername CommonText_Brendan
# 634 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BrendanHaveYouGoneToBattleFrontier, MSGBOX_DEFAULT
# 635 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 636 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 637 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_RivalTakeBreakFromFieldwork::
# 638 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	checkplayergender
# 639 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_ProfessorBirchsLab_EventScript_MayTakeBreakFromFieldwork
# 640 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_ProfessorBirchsLab_EventScript_BrendanTakeBreakFromFieldwork
# 641 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 642 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 643 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 644 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_MayTakeBreakFromFieldwork::
# 645 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	speakername CommonText_May
# 646 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_MayTakeBreakFromFieldwork, MSGBOX_DEFAULT
# 647 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 648 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 649 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_BrendanTakeBreakFromFieldwork::
# 650 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	speakername CommonText_Brendan
# 651 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BrendanTakeBreakFromFieldwork, MSGBOX_DEFAULT
# 652 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 653 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 654 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_PC::
# 655 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_PCUsedForResearch, MSGBOX_SIGN
# 656 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 657 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 658 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Bookshelf::
# 659 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_CrammedWithBooksOnPokemon, MSGBOX_SIGN
# 660 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 661 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 662 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Book::
# 663 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BookTooHardToRead, MSGBOX_SIGN
# 664 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 665 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 666 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_ScottAboardSSTidalCall::
# 667 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 668 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	pokenavcall LittlerootTown_ProfessorBirchsLab_Text_ScottAboardSSTidalCall
# 669 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 670 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	clearflag FLAG_SCOTT_CALL_BATTLE_FRONTIER
# 671 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 672 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 673 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 674 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BirchAwayOnFieldwork:
# 675 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Hunh? Prof. Birch?\p"
# 676 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "The Prof's away on fieldwork.\n"
# 677 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Ergo, he isn't here.\p"
# 678 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Oh, let me explain what fieldwork is.\p"
# 679 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It is to study things in the natural\n"
# 680 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "environment, like fields and mountains,\l"
# 681 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "instead of a laboratory.\p"
# 682 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "The Prof isn't one for doing desk work.\n"
# 683 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "He's the type of person who would\l"
# 684 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "rather go outside and experience\l"
# 685 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "things than read about them here.$"
# 686 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 687 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BirchIsntOneForDeskWork:
# 688 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "The Prof isn't one for doing desk work.\n"
# 689 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "He's the type of person who would\l"
# 690 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "rather go outside and experience\l"
# 691 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "things than read about them here.$"
# 692 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 693 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BirchEnjoysRivalsHelpToo:
# 694 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Prof. Birch is studying the habitats\n"
# 695 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "and distribution of Pokémon.\p"
# 696 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "The Prof enjoys {RIVAL}'s help, too.\n"
# 697 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "There's a lot of love there.$"
# 698 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 699 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_LikeYouToHavePokemon:
# 700 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "So, {PLAYER}{KUN}.\p"
# 701 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I've heard so much about you from\n"
# 702 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "your father.\p"
# 703 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I've heard that you don't have your\n"
# 704 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "own Pokémon yet.\p"
# 705 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "But the way you battled earlier,\n"
# 706 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "you pulled it off with aplomb!\p"
# 707 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I guess you have your father's blood\n"
# 708 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "in your veins after all!\p"
# 709 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Oh, yes. As thanks for rescuing me,\n"
# 710 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'd like you to have the Pokémon you\l"
# 711 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "used earlier.$"
# 712 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 713 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_LikeYouToHavePokemon2:
# 714 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{PLAYER} received the {STR_VAR_1}!$"
# 715 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 716 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_WhyNotGiveNicknameToMon:
# 717 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "While you're at it, why not give a\n"
# 718 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "nickname to that {STR_VAR_1}?$"
# 719 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 720 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_MightBeGoodIdeaToGoSeeRival:
# 721 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "If you work at Pokémon and gain\n"
# 722 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "experience, I think you'll make\l"
# 723 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "an extremely good Trainer.\p"
# 724 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "My kid, {RIVAL}, is also studying\n"
# 725 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Pokémon while helping me out.\p"
# 726 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{PLAYER}{KUN}, go see {RIVAL}.$"
# 727 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 728 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_GetRivalToTeachYou:
# 729 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Get {RIVAL} to teach you what it\n"
# 730 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "means to be a Trainer.\p"
# 731 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Here, take some Poké Balls too.\p"
# 732 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{RIVAL} always carries at least\n"
# 733 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "two Pokémon with them.$"
# 734 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 735 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BirchRivalGoneHome:
# 736 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{RIVAL}?\n"
# 737 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Gone home, I think.\p"
# 738 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Or maybe that kid's scrabbling around\n"
# 739 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "in tall grass again somewhere…\p"
# 740 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "If you or your Pokémon get tired,\n"
# 741 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "you should get some rest at home.$"
# 742 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 743 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_HeardYouBeatRival:
# 744 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Oh, hi, {PLAYER}{KUN}!\p"
# 745 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I heard you beat {RIVAL} on\n"
# 746 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "your first try. That's excellent!\p"
# 747 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{RIVAL}'s been helping with my research\n"
# 748 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "for a long time.\p"
# 749 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{RIVAL} has an extensive history as\n"
# 750 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "a Trainer already.$"
# 751 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 752 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_CountlessPokemonAwait:
# 753 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Countless Pokémon await you!\p"
# 754 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Argh, I'm getting the itch to get out\n"
# 755 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "and do fieldwork again!$"
# 756 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 757 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_MayGotPokedexTooTakeThese:
# 758 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Oh, wow, {PLAYER}{KUN}!\n"
# 759 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You've got a Pokédex, too!\p"
# 760 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "That's great! Just like me!\n"
# 761 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I've got something for you, too!$"
# 762 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 763 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_CatchCutePokemonWithPokeBalls:
# 764 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It's fun if you can get a lot of\n"
# 765 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Pokémon!\p"
# 766 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'm going to look all over the place\n"
# 767 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "because I want different Pokémon.\p"
# 768 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "If I find any cute Pokémon, I'll catch\n"
# 769 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "them with Poké Balls!$"
# 770 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 771 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_OhYourBagsFull:
# 772 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Oh? Your Bag's full.$"
# 773 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 774 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_MayWhereShouldIGoNext:
# 775 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I wonder where I should go look for\n"
# 776 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Pokémon next?$"
# 777 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 778 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BrendanGotPokedexTooTakeThese:
# 779 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Huh…\n"
# 780 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "So you've got a Pokédex, too.\p"
# 781 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Well then, here.\n"
# 782 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'll give you these.$"
# 783 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 784 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_CatchCoolPokemonWithPokeBalls:
# 785 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You know it's more fun to\n"
# 786 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "have a whole bunch of Pokémon.\p"
# 787 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'm going to explore all over the place\n"
# 788 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "to find different Pokémon.\p"
# 789 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "If I find any cool Pokémon, you bet\n"
# 790 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'll try to get them with Poké Balls.$"
# 791 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 792 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_HeyYourBagsFull:
# 793 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Hey, your Bag's full.$"
# 794 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 795 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BrendanWhereShouldIGoNext:
# 796 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Where should I look for\n"
# 797 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Pokémon next…$"
# 798 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 799 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_SeriousLookingMachine:
# 800 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It's a serious-looking machine.\n"
# 801 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "The Prof must use this for research.$"
# 802 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 803 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_PCUsedForResearch:
# 804 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It's a PC used for research.\n"
# 805 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Better not mess around with it.$"
# 806 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 807 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_CrammedWithBooksOnPokemon:
# 808 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It's crammed with books on Pokémon.$"
# 809 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 810 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BookTooHardToRead:
# 811 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It's a book that's too hard to read.$"
# 812 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 813 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_OtherRegionsUpgradeToNational:
# 814 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Now…\p"
# 815 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{PLAYER}{KUN} and {RIVAL}, I've had the two\n"
# 816 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "of you help me study Pokémon.\p"
# 817 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Thanks to your help, new facts\n"
# 818 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "are coming to light.\p"
# 819 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It appears that in the Hoenn region,\n"
# 820 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "there are also Pokémon from other\l"
# 821 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "regions.\p"
# 822 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It goes to show how rich and varied\n"
# 823 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "the natural environments of Hoenn\l"
# 824 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "happen to be.\p"
# 825 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "That's why I think it's necessary for\n"
# 826 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "me to upgrade your Pokédex to\l"
# 827 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "the National Mode.\p"
# 828 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Here, let me see your Pokédex units.$"
# 829 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 830 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_MayUpgradeSoCool:
# 831 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Eheheh!\p"
# 832 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It's so cool that even my Pokédex\n"
# 833 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "is getting updated!\p"
# 834 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It's because you went out and caught\n"
# 835 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "so many Pokémon, {PLAYER}{KUN}!$"
# 836 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 837 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BrendanYouCanThankMe:
# 838 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I went out all over Hoenn\n"
# 839 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "and checked out Pokémon.\p"
# 840 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You can thank me for getting\n"
# 841 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "the National Mode Pokédex.\p"
# 842 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Yep, you're lucky, {PLAYER}!$"
# 843 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 844 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_OkayAllDone:
# 845 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Okay, all done!$"
# 846 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 847 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_PokedexUpgradedToNational:
# 848 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{PLAYER}'s Pokédex was upgraded\n"
# 849 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "to the National Mode!$"
# 850 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 851 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting2:
# 852 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "But listen.\n"
# 853 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You've become the Champion,\l"
# 854 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "but your Pokémon journey isn't over.\p"
# 855 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "There is no end to the road\n"
# 856 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "that is Pokémon.\p"
# 857 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Somewhere, there is a grassy patch\n"
# 858 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "that's waiting for you!$"
# 859 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 860 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_MayTakeBreakFromFieldwork:
# 861 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I think I'll take a short break\n"
# 862 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "from fieldwork.\p"
# 863 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I think I'll help the Prof here for\n"
# 864 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "a while.$"
# 865 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 866 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BrendanTakeBreakFromFieldwork:
# 867 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "For the time being,\n"
# 868 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'm taking a break from fieldwork.\p"
# 869 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'll be helping out the Prof here\n"
# 870 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "for a while.$"
# 871 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 872 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_CompletedDexChoosePokemon:
# 873 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Oh, {PLAYER}{KUN}!\n"
# 874 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Let's have a look at your Pokédex.\p"
# 875 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "… … … … … …\n"
# 876 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "… … … … … …\p"
# 877 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Yes, there's no doubt about it.\p"
# 878 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You really have completed the Hoenn\n"
# 879 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "region's Pokédex.\p"
# 880 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "That's more than just impressive.\p"
# 881 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I have a gift for you.\p"
# 882 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Consider it my show of appreciation\n"
# 883 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "for the fantastic work you've done.\p"
# 884 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "My gift is a rare Pokémon only found\n"
# 885 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "in another region!\p"
# 886 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You can have any one of these\n"
# 887 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "three Pokémon!$"
# 888 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 889 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_CanHaveAnyOneOfRarePokemon:
# 890 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "These are rare Pokémon only found\n"
# 891 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "in another region!\p"
# 892 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You can have any one of these\n"
# 893 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "three Pokémon!$"
# 894 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 895 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_YoullTakeCyndaquil:
# 896 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "The Fire Pokémon\n"
# 897 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Cyndaquil caught your eye!\p"
# 898 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You're as sharp as ever!\p"
# 899 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "So the Cyndaquil is your choice?$"
# 900 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 901 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_YoullTakeTotodile:
# 902 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "The Water Pokémon\n"
# 903 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Totodile is your choice!\p"
# 904 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You know how to pick a good one.\p"
# 905 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "So, you'll take the Totodile?$"
# 906 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 907 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_YoullTakeChikorita:
# 908 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "The Grass Pokémon\n"
# 909 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Chikorita is your choice!\p"
# 910 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You sure know what you're doing.\p"
# 911 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "So, you'll take the Chikorita?$"
# 912 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 913 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_TakeYourTimeAllInvaluable:
# 914 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Take your time before you decide.\n"
# 915 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "They're all invaluable Pokémon.$"
# 916 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 917 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_ReceivedJohtoStarter:
# 918 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{PLAYER} received the {STR_VAR_1}\n"
# 919 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "from Prof. Birch!$"
# 920 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 921 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting:
# 922 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Listen, {PLAYER}{KUN}.\n"
# 923 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You've completed the Hoenn Pokédex,\l"
# 924 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "but your Pokémon journey isn't over.\p"
# 925 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "There is no end to the road\n"
# 926 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "that is Pokémon.\p"
# 927 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Somewhere, there is a grassy patch\n"
# 928 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "that's waiting for you!$"
# 929 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 930 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BetterLeaveOthersAlone:
# 931 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You received the promised Pokémon.\n"
# 932 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Better leave the others alone.$"
# 933 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 934 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_MayWhatNextImStayingHere:
# 935 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{PLAYER}{KUN}, after this…\n"
# 936 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "What are you going to do?\p"
# 937 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Are you going to keep battling\n"
# 938 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "and sharpening your skills?\p"
# 939 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Or are you going to try filling\n"
# 940 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "the National Pokédex?\p"
# 941 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'm staying here to help the Prof.$"
# 942 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 943 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BrendanPreferCollectingSlowly:
# 944 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Rather than collecting\n"
# 945 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Pokémon, I prefer slowly and \l"
# 946 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "steadily raising the one I chose.$"
# 947 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 948 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_MayHaveYouGoneToBattleFrontier:
# 949 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Oh, hi, {PLAYER}{KUN}!\n"
# 950 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Have you gone to that place,\l"
# 951 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "the Battle Frontier?$"
# 952 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 953 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BrendanHaveYouGoneToBattleFrontier:
# 954 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Hey, {PLAYER}!\n"
# 955 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Have you gone out to that place,\l"
# 956 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "the Battle Frontier?$"
# 957 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 958 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_ScottAboardSSTidalCall:
# 959 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "… … … … … …\n"
# 960 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "… … … … … Beep!\p"
# 961 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Scott: Hi, hi, {PLAYER}!\n"
# 962 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It's me, Scott.\p"
# 963 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'm aboard the S.S. Tidal now.\n"
# 964 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It feels great to be on the sea!\p"
# 965 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "By the way…\p"
# 966 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "There's this place that I'd like to\n"
# 967 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "invite you to for a visit.\p"
# 968 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "If you're interested, board a ferry\n"
# 969 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "at either Slateport or Lilycove.\p"
# 970 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'll fill you in on the details when\n"
# 971 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "we meet. I'll be waiting!\p"
# 972 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "… … … … … …\n"
# 973 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "… … … … … Click!$"

LittlerootTown_ProfessorBirchsLab_EventScript_ShowBianca::
# 979 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_unset FLAG_VICTINI_READY, LittlerootTown_ProfessorBirchsLab_EventScript_ShowBianca_1
	return

LittlerootTown_ProfessorBirchsLab_EventScript_ShowBianca_1:
# 980 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	clearflag FLAG_TEMP_3
# 981 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_TEMP_2, 1
	return


LittlerootTown_ProfessorBirchsLab_EventScript_Bianca::
# 986 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 987 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 20
# 988 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement 9, Common_Movement_WalkInPlaceDown
# 989 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 990 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	speakername CommonText_Bianca
# 991 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_Bianca_Text_0
# 992 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 993 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp2
# 994 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 995 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	speakername CommonText_Bianca
# 996 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_Bianca_Text_1
# 1004 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 1005 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_VICTINI_READY
# 1006 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement 9, Common_Movement_WalkRight
# 1007 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 1008 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement 9, Common_Movement_WalkDown3
# 1009 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 1010 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 10
# 1011 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playse SE_EXIT
# 1012 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject 9
# 1013 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_TEMP_3
# 1014 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_TEMP_2, 0
# 1015 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 30
# 1016 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
	return


LittlerootTown_ProfessorBirchsLab_EventScript_ExpCharmBox::
# 1020 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lock
# 1021 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	checkitem ITEM_EXP_CHARM
# 1022 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne LittlerootTown_ProfessorBirchsLab_EventScript_ExpCharmBox_2
# 1030 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ExpCharmBox_Text_2
# 1031 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ExpCharmBox_Text_3, MSGBOX_YESNO
# 1032 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_ExpCharmBox_7
LittlerootTown_ProfessorBirchsLab_EventScript_ExpCharmBox_1:
# 1036 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 1037 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
	return

LittlerootTown_ProfessorBirchsLab_EventScript_ExpCharmBox_2:
# 1023 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ExpCharmBox_Text_0, MSGBOX_YESNO
# 1024 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_ExpCharmBox_5
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ExpCharmBox_1

LittlerootTown_ProfessorBirchsLab_EventScript_ExpCharmBox_5:
# 1025 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeitem ITEM_EXP_CHARM
# 1026 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ExpCharmBox_Text_1
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ExpCharmBox_1

LittlerootTown_ProfessorBirchsLab_EventScript_ExpCharmBox_7:
# 1033 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	giveitem ITEM_EXP_CHARM
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ExpCharmBox_1


LittlerootTown_ProfessorBirchsLab_EventScript_Bianca_Text_0:
# 991 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Oh, hi {PLAYER}!$"

LittlerootTown_ProfessorBirchsLab_EventScript_Bianca_Text_1:
# 996 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It's been a while since I last saw you,\n"
	.string "but I've heard you've been doing great\l"
	.string "things!\p"
	.string "I was just here visiting your local\n"
	.string "Professor.\p"
	.string "We were just talking about Pokémon like\n"
	.string "the ones you just fought off!\p"
	.string "The ones that are really, really strong!\p"
	.string "In my home region of Unova, there's one\n"
	.string "that's said to appear near lighthouses.\p"
	.string "Do you know of any lighthouses in\n"
	.string "Hoenn?\l"
	.string "Maybe you could find one like that\l"
	.string "there, hehe!\p"
	.string "Anyway, I've got to get going.\n"
	.string "I hope we can see each other again\l"
	.string "while I'm visiting!\p"
	.string "Bye-bye!$"

LittlerootTown_ProfessorBirchsLab_EventScript_ExpCharmBox_Text_0:
# 1023 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Return the Exp. Charm to the box?$"

LittlerootTown_ProfessorBirchsLab_EventScript_ExpCharmBox_Text_1:
# 1026 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "The Exp. Charm was returned to the box.$"

LittlerootTown_ProfessorBirchsLab_EventScript_ExpCharmBox_Text_2:
# 1030 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "There's an Exp. Charm in the box!$"

LittlerootTown_ProfessorBirchsLab_EventScript_ExpCharmBox_Text_3:
# 1031 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "WARNING: The game is not balanced\n"
	.string "around the use of the Exp. Charm.\p"
	.string "Take the Exp. Charm anyway?$"
