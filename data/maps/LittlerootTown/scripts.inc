# 1 "data/maps/LittlerootTown/scripts.pory"

# 2 "data/maps/LittlerootTown/scripts.pory"
.set LOCALID_TWIN, 1
# 3 "data/maps/LittlerootTown/scripts.pory"
.set LOCALID_MOM, 4
# 4 "data/maps/LittlerootTown/scripts.pory"
.set LOCALID_RIVAL, 7
# 5 "data/maps/LittlerootTown/scripts.pory"
.set LOCALID_BIRCH, 8
# 6 "data/maps/LittlerootTown/scripts.pory"

# 7 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_MapScripts::
# 8 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_OnTransition
# 9 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_OnFrame
# 10 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LittlerootTown_OnWarp
# 11 "data/maps/LittlerootTown/scripts.pory"
	.byte 0
# 12 "data/maps/LittlerootTown/scripts.pory"

# 13 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_TOWN_STATE
# 14 "data/maps/LittlerootTown/scripts.pory"
	@ 1: Met Rival
# 15 "data/maps/LittlerootTown/scripts.pory"
	@ 2: Saving Birch
# 16 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Received Pokedex
# 17 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Received Running Shoes
# 18 "data/maps/LittlerootTown/scripts.pory"

# 19 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_INTRO_STATE
# 20 "data/maps/LittlerootTown/scripts.pory"
	@ 1: In truck male
# 21 "data/maps/LittlerootTown/scripts.pory"
	@ 2: In truck female
# 22 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Entered house
# 23 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Told to go set clock
# 24 "data/maps/LittlerootTown/scripts.pory"
	@ 5: Entered 2F to set clock
# 25 "data/maps/LittlerootTown/scripts.pory"
	@ 6: Set clock
# 26 "data/maps/LittlerootTown/scripts.pory"
	@ 7: Told to go meet rival
# 27 "data/maps/LittlerootTown/scripts.pory"

# 28 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_HOUSES_STATE_MAY
# 29 "data/maps/LittlerootTown/scripts.pory"
	@                    and VAR_LITTLEROOT_HOUSES_STATE_BRENDAN
# 30 "data/maps/LittlerootTown/scripts.pory"
	@ 1: On Truck (and is corresponding gender)
# 31 "data/maps/LittlerootTown/scripts.pory"
	@ 2: Met Rival's Mom (and is corresponding gender)
# 32 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Entered Hall of Fame
# 33 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Completed Lati TV / SS Ticket event
# 34 "data/maps/LittlerootTown/scripts.pory"
	@ 5: Exited house after above event
# 35 "data/maps/LittlerootTown/scripts.pory"

# 36 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_RIVAL_STATE
# 37 "data/maps/LittlerootTown/scripts.pory"
	@ 1: Never occurs
# 38 "data/maps/LittlerootTown/scripts.pory"
	@ 2: Entered Rival's bedroom
# 39 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Met Rival
# 40 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Received Pokedex
# 41 "data/maps/LittlerootTown/scripts.pory"

# 42 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_EMERALBODY_RIVAL_STATE
# 43 "data/maps/LittlerootTown/scripts.pory"
	@ 1: Set after scene outside Birch's Lab
# 44 "data/maps/LittlerootTown/scripts.pory"
	@ 2: Set after rival fight in Petalburg City
# 45 "data/maps/LittlerootTown/scripts.pory"

# 46 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnTransition:
# 47 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_VISITED_LITTLEROOT_TOWN
# 48 "data/maps/LittlerootTown/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 49 "data/maps/LittlerootTown/scripts.pory"
	call Common_EventScript_SetupEmRivalGfxId
# 50 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 2, LittlerootTown_EventScript_MoveMomToMaysDoor
# 51 "data/maps/LittlerootTown/scripts.pory"
	call_if_unset FLAG_RESCUED_BIRCH, LittlerootTown_EventScript_SetTwinPos
# 52 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_TOWN_STATE, 3, LittlerootTown_EventScript_SetMomStandingInFrontOfDoorPos
# 53 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_HOUSES_STATE_MAY, 4, LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent
# 54 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 4, LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent
# 55 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_OLDALE_RIVAL_STATE, 1, LittlerootTown_EventScript_MoveRivalFromOldale
# 56 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_RIVAL_STATE, 3, LittlerootTown_EventScript_SetRivalLeftForRoute103
# 57 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_HideMapNamePopup
# 58 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2, LittlerootTown_EventScript_LeftLabAfterDexUpgrade
# 59 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_TEMP_1
# 60 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_TEMP_2
# 61 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_EMERALBODY_RIVAL_STATE, 1, LittlerootTown_EventScript_ShowBaron
# 62 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_EMERALBODY_RIVAL_STATE, 0, LittlerootTown_EventScript_ShowRivalCheck
# 63 "data/maps/LittlerootTown/scripts.pory"
	end
# 64 "data/maps/LittlerootTown/scripts.pory"

# 65 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_ShowBaron::
# 66 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_TEMP_1
# 67 "data/maps/LittlerootTown/scripts.pory"
	return
# 68 "data/maps/LittlerootTown/scripts.pory"

# 69 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_ShowRivalCheck::
# 70 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_BIRCH_LAB_STATE, 3, LittlerootTown_EventScript_ShowRival
# 71 "data/maps/LittlerootTown/scripts.pory"
	return
# 72 "data/maps/LittlerootTown/scripts.pory"
	
# 73 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_ShowRival::
# 74 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_TEMP_2
# 75 "data/maps/LittlerootTown/scripts.pory"
	return
# 76 "data/maps/LittlerootTown/scripts.pory"

# 77 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_LeftLabAfterDexUpgrade::
# 78 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 3
# 79 "data/maps/LittlerootTown/scripts.pory"
	return
# 80 "data/maps/LittlerootTown/scripts.pory"

# 81 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_HideMapNamePopup::
# 82 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 83 "data/maps/LittlerootTown/scripts.pory"
	return
# 84 "data/maps/LittlerootTown/scripts.pory"

# 85 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalLeftForRoute103::
# 86 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_RIVAL_LEFT_FOR_ROUTE103
# 87 "data/maps/LittlerootTown/scripts.pory"
	return
# 88 "data/maps/LittlerootTown/scripts.pory"

# 89 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MoveRivalFromOldale::
# 90 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_OLDALE_RIVAL_STATE, 2
# 91 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_OLDALE_TOWN_RIVAL
# 92 "data/maps/LittlerootTown/scripts.pory"
	return
# 93 "data/maps/LittlerootTown/scripts.pory"

# 94 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent::
# 95 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 5
# 96 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 5
# 97 "data/maps/LittlerootTown/scripts.pory"
	return
# 98 "data/maps/LittlerootTown/scripts.pory"

# 99 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MoveMomToMaysDoor::
# 100 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_MOM, 14, 8
# 101 "data/maps/LittlerootTown/scripts.pory"
	return
# 102 "data/maps/LittlerootTown/scripts.pory"

# 103 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetTwinPos::
# 104 "data/maps/LittlerootTown/scripts.pory"
	goto_if_eq VAR_LITTLEROOT_TOWN_STATE, 0, LittlerootTown_EventScript_SetTwinGuardingRoutePos
# 105 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_TWIN, 10, 1
# 106 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_TWIN, MOVEMENT_TYPE_FACE_UP
# 107 "data/maps/LittlerootTown/scripts.pory"
	return
# 108 "data/maps/LittlerootTown/scripts.pory"

# 109 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetTwinGuardingRoutePos::
# 110 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_TWIN, 7, 2
# 111 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_TWIN, MOVEMENT_TYPE_FACE_DOWN
# 112 "data/maps/LittlerootTown/scripts.pory"
	return
# 113 "data/maps/LittlerootTown/scripts.pory"

# 114 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetMomStandingInFrontOfDoorPos::
# 115 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
# 116 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_DOWN
# 117 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 118 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetMomInFrontOfDoorMale
# 119 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetMomInFrontOfDoorFemale
# 120 "data/maps/LittlerootTown/scripts.pory"
	return
# 121 "data/maps/LittlerootTown/scripts.pory"

# 122 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetMomInFrontOfDoorMale::
# 123 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_MOM, 5, 9
# 124 "data/maps/LittlerootTown/scripts.pory"
	return
# 125 "data/maps/LittlerootTown/scripts.pory"

# 126 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetMomInFrontOfDoorFemale::
# 127 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_MOM, 14, 9
# 128 "data/maps/LittlerootTown/scripts.pory"
	return
# 129 "data/maps/LittlerootTown/scripts.pory"

# 130 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnFrame:
# 131 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 1, LittlerootTown_EventScript_StepOffTruckMale
# 132 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 2, LittlerootTown_EventScript_StepOffTruckFemale
# 133 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_BeginDexUpgradeScene
# 134 "data/maps/LittlerootTown/scripts.pory"
	.2byte 0
# 135 "data/maps/LittlerootTown/scripts.pory"

# 136 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_StepOffTruckMale::
# 137 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 138 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8004, 5
# 139 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8005, 8
# 140 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GoInsideWithMom
# 141 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_TRUCK
# 142 "data/maps/LittlerootTown/scripts.pory"
	warpsilent MAP_LITTLEROOT_TOWN_BRENDANS_HOUSE_1F, 8, 8
# 143 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 144 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 145 "data/maps/LittlerootTown/scripts.pory"
	end
# 146 "data/maps/LittlerootTown/scripts.pory"

# 147 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_StepOffTruckFemale::
# 148 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 149 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8004, 14
# 150 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8005, 8
# 151 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GoInsideWithMom
# 152 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_TRUCK
# 153 "data/maps/LittlerootTown/scripts.pory"
	warpsilent MAP_LITTLEROOT_TOWN_MAYS_HOUSE_1F, 2, 8
# 154 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 155 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 156 "data/maps/LittlerootTown/scripts.pory"
	end
# 157 "data/maps/LittlerootTown/scripts.pory"

# 158 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoInsideWithMom::
# 159 "data/maps/LittlerootTown/scripts.pory"
	delay 15
# 160 "data/maps/LittlerootTown/scripts.pory"
	playse SE_LEDGE
# 161 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PlayerStepOffTruck
# 162 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 163 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 164 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 165 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_MOM
# 166 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkDown
# 167 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 168 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 169 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 170 "data/maps/LittlerootTown/scripts.pory"
	delay 10
# 171 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerAtTruck
# 172 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 173 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_OurNewHomeLetsGoInside, MSGBOX_DEFAULT
# 174 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 175 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachDoor
# 176 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PlayerApproachDoor
# 177 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 178 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 179 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 180 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomEnterHouse
# 181 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp2
# 182 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 183 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
# 184 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 3
# 185 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, 0
# 186 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 187 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 188 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_FAT_MAN
# 189 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 190 "data/maps/LittlerootTown/scripts.pory"
	return
# 191 "data/maps/LittlerootTown/scripts.pory"

# 192 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerAtTruck:
# 193 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 194 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_left
# 195 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 196 "data/maps/LittlerootTown/scripts.pory"

# 197 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachDoor:
# 198 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 199 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 200 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 201 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 202 "data/maps/LittlerootTown/scripts.pory"

# 203 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomEnterHouse:
# 204 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 205 "data/maps/LittlerootTown/scripts.pory"
	set_invisible
# 206 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 207 "data/maps/LittlerootTown/scripts.pory"

# 208 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PlayerApproachDoor:
# 209 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 210 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 211 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 212 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 213 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 214 "data/maps/LittlerootTown/scripts.pory"

# 215 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PlayerStepOffTruck:
# 216 "data/maps/LittlerootTown/scripts.pory"
	jump_right
# 217 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 218 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 219 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 220 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 221 "data/maps/LittlerootTown/scripts.pory"

# 222 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BeginDexUpgradeScene::
# 223 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 224 "data/maps/LittlerootTown/scripts.pory"
	playse SE_PIN
# 225 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_ExclamationMark
# 226 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 227 "data/maps/LittlerootTown/scripts.pory"
	delay 80
# 228 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_BirchSomethingToShowYouAtLab, MSGBOX_DEFAULT
# 229 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 230 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_RIVAL
# 231 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH
# 232 "data/maps/LittlerootTown/scripts.pory"
	delay 20
# 233 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 234 "data/maps/LittlerootTown/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB, 6, 5
# 235 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 236 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 237 "data/maps/LittlerootTown/scripts.pory"
	end
# 238 "data/maps/LittlerootTown/scripts.pory"

# 239 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnWarp:
# 240 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_SetRivalBirchPosForDexUpgrade
# 241 "data/maps/LittlerootTown/scripts.pory"
	.2byte 0
# 242 "data/maps/LittlerootTown/scripts.pory"

# 243 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgrade::
# 244 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_BIRCH
# 245 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_RIVAL
# 246 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 247 "data/maps/LittlerootTown/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeMale
# 248 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeFemale
# 249 "data/maps/LittlerootTown/scripts.pory"
	end
# 250 "data/maps/LittlerootTown/scripts.pory"

# 251 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeMale::
# 252 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_RIVAL, 6, 10
# 253 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_BIRCH, 5, 10
# 254 "data/maps/LittlerootTown/scripts.pory"
	end
# 255 "data/maps/LittlerootTown/scripts.pory"

# 256 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeFemale::
# 257 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_RIVAL, 13, 10
# 258 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_BIRCH, 14, 10
# 259 "data/maps/LittlerootTown/scripts.pory"
	end
# 260 "data/maps/LittlerootTown/scripts.pory"

# 261 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_FatMan::
# 262 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanUsePCToStoreItems, MSGBOX_NPC
# 263 "data/maps/LittlerootTown/scripts.pory"
	end
# 264 "data/maps/LittlerootTown/scripts.pory"

# 265 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Boy::
# 266 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_BirchSpendsDaysInLab, MSGBOX_NPC
# 267 "data/maps/LittlerootTown/scripts.pory"
	end
# 268 "data/maps/LittlerootTown/scripts.pory"

# 269 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Twin::
# 270 "data/maps/LittlerootTown/scripts.pory"
	lock
# 271 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 272 "data/maps/LittlerootTown/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, LittlerootTown_EventScript_GoodLuck
# 273 "data/maps/LittlerootTown/scripts.pory"
	goto_if_set FLAG_RESCUED_BIRCH, LittlerootTown_EventScript_YouSavedBirch
# 274 "data/maps/LittlerootTown/scripts.pory"
	goto_if_ne VAR_LITTLEROOT_TOWN_STATE, 0, LittlerootTown_EventScript_GoSaveBirch
# 275 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut, MSGBOX_DEFAULT
# 276 "data/maps/LittlerootTown/scripts.pory"
	release
# 277 "data/maps/LittlerootTown/scripts.pory"
	end
# 278 "data/maps/LittlerootTown/scripts.pory"

# 279 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoSaveBirch::
# 280 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 281 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanYouGoSeeWhatsHappening, MSGBOX_DEFAULT
# 282 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 283 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_FaceOriginalDirection
# 284 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 285 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 286 "data/maps/LittlerootTown/scripts.pory"
	release
# 287 "data/maps/LittlerootTown/scripts.pory"
	end
# 288 "data/maps/LittlerootTown/scripts.pory"

# 289 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_YouSavedBirch::
# 290 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 291 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_YouSavedBirch, MSGBOX_DEFAULT
# 292 "data/maps/LittlerootTown/scripts.pory"
	release
# 293 "data/maps/LittlerootTown/scripts.pory"
	end
# 294 "data/maps/LittlerootTown/scripts.pory"

# 295 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoodLuck::
# 296 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_GoodLuckCatchingPokemon, MSGBOX_DEFAULT
# 297 "data/maps/LittlerootTown/scripts.pory"
	release
# 298 "data/maps/LittlerootTown/scripts.pory"
	end
# 299 "data/maps/LittlerootTown/scripts.pory"

# 300 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerLeft::
# 301 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 302 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinApproachPlayerLeft
# 303 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 304 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemon
# 305 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinReturnLeft
# 306 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 307 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 308 "data/maps/LittlerootTown/scripts.pory"
	end
# 309 "data/maps/LittlerootTown/scripts.pory"

# 310 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_DangerousWithoutPokemon::
# 311 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut, MSGBOX_DEFAULT
# 312 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 313 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinPushPlayerFromRoute
# 314 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PushPlayerBackFromRoute
# 315 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 316 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_DangerousIfYouDontHavePokemon, MSGBOX_DEFAULT
# 317 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 318 "data/maps/LittlerootTown/scripts.pory"
	return
# 319 "data/maps/LittlerootTown/scripts.pory"

# 320 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinApproachPlayerLeft:
# 321 "data/maps/LittlerootTown/scripts.pory"
	face_right
# 322 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 323 "data/maps/LittlerootTown/scripts.pory"
	disable_jump_landing_ground_effect
# 324 "data/maps/LittlerootTown/scripts.pory"
	jump_in_place_right
# 325 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 326 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 327 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 328 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 329 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 330 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 331 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 332 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_left
# 333 "data/maps/LittlerootTown/scripts.pory"
	face_down
# 334 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 335 "data/maps/LittlerootTown/scripts.pory"

# 336 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinPushPlayerFromRoute:
# 337 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 338 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 339 "data/maps/LittlerootTown/scripts.pory"

# 340 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinReturnLeft:
# 341 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 342 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 343 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 344 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 345 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 346 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 347 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 348 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 349 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_down
# 350 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 351 "data/maps/LittlerootTown/scripts.pory"

# 352 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PushPlayerBackFromRoute:
# 353 "data/maps/LittlerootTown/scripts.pory"
	lock_facing_direction
# 354 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 355 "data/maps/LittlerootTown/scripts.pory"
	unlock_facing_direction
# 356 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 357 "data/maps/LittlerootTown/scripts.pory"

# 358 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerRight::
# 359 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 360 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinApproachPlayerRight
# 361 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 362 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemon
# 363 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinReturnRight
# 364 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 365 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 366 "data/maps/LittlerootTown/scripts.pory"
	end
# 367 "data/maps/LittlerootTown/scripts.pory"

# 368 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinApproachPlayerRight:
# 369 "data/maps/LittlerootTown/scripts.pory"
	face_right
# 370 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 371 "data/maps/LittlerootTown/scripts.pory"
	disable_jump_landing_ground_effect
# 372 "data/maps/LittlerootTown/scripts.pory"
	jump_in_place_right
# 373 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 374 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 375 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 376 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 377 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 378 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 379 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 380 "data/maps/LittlerootTown/scripts.pory"
	face_down
# 381 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 382 "data/maps/LittlerootTown/scripts.pory"

# 383 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinReturnRight:
# 384 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 385 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 386 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 387 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 388 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 389 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_down
# 390 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 391 "data/maps/LittlerootTown/scripts.pory"

# 392 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoSaveBirchTrigger::
# 393 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 394 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_WalkInPlaceFasterRight
# 395 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 396 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 397 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 398 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 399 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanYouGoSeeWhatsHappening, MSGBOX_DEFAULT
# 400 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 401 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_FaceOriginalDirection
# 402 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 403 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 404 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 405 "data/maps/LittlerootTown/scripts.pory"
	end
# 406 "data/maps/LittlerootTown/scripts.pory"

# 407 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_TownSign::
# 408 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_TownSign, MSGBOX_SIGN
# 409 "data/maps/LittlerootTown/scripts.pory"
	end
# 410 "data/maps/LittlerootTown/scripts.pory"

# 411 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BirchsLabSign::
# 412 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsLab, MSGBOX_SIGN
# 413 "data/maps/LittlerootTown/scripts.pory"
	end
# 414 "data/maps/LittlerootTown/scripts.pory"

# 415 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BrendansHouseSign::
# 416 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 417 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 418 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_PlayersHouseSignMale
# 419 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_BirchsHouseSignFemale
# 420 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 421 "data/maps/LittlerootTown/scripts.pory"
	end
# 422 "data/maps/LittlerootTown/scripts.pory"

# 423 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_PlayersHouseSignMale::
# 424 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_PlayersHouse, MSGBOX_DEFAULT
# 425 "data/maps/LittlerootTown/scripts.pory"
	return
# 426 "data/maps/LittlerootTown/scripts.pory"

# 427 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BirchsHouseSignFemale::
# 428 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsHouse, MSGBOX_DEFAULT
# 429 "data/maps/LittlerootTown/scripts.pory"
	return
# 430 "data/maps/LittlerootTown/scripts.pory"

# 431 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MaysHouseSign::
# 432 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 433 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 434 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_BirchsHouseSignMale
# 435 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_PlayersHouseSignFemale
# 436 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 437 "data/maps/LittlerootTown/scripts.pory"
	end
# 438 "data/maps/LittlerootTown/scripts.pory"

# 439 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BirchsHouseSignMale::
# 440 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsHouse, MSGBOX_DEFAULT
# 441 "data/maps/LittlerootTown/scripts.pory"
	return
# 442 "data/maps/LittlerootTown/scripts.pory"

# 443 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_PlayersHouseSignFemale::
# 444 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_PlayersHouse, MSGBOX_DEFAULT
# 445 "data/maps/LittlerootTown/scripts.pory"
	return
# 446 "data/maps/LittlerootTown/scripts.pory"

# 447 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger0::
# 448 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 449 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 0
# 450 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_MOM, 10, 9
# 451 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 452 "data/maps/LittlerootTown/scripts.pory"
	end
# 453 "data/maps/LittlerootTown/scripts.pory"

# 454 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger1::
# 455 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 456 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 1
# 457 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_MOM, 11, 9
# 458 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 459 "data/maps/LittlerootTown/scripts.pory"
	end
# 460 "data/maps/LittlerootTown/scripts.pory"

# 461 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger2::
# 462 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 463 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 2
# 464 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 465 "data/maps/LittlerootTown/scripts.pory"
	end
# 466 "data/maps/LittlerootTown/scripts.pory"

# 467 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger3::
# 468 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 469 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 3
# 470 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 471 "data/maps/LittlerootTown/scripts.pory"
	end
# 472 "data/maps/LittlerootTown/scripts.pory"

# 473 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger4::
# 474 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 475 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 4
# 476 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 477 "data/maps/LittlerootTown/scripts.pory"
	end
# 478 "data/maps/LittlerootTown/scripts.pory"

# 479 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger5::
# 480 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 481 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 5
# 482 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 483 "data/maps/LittlerootTown/scripts.pory"
	end
# 484 "data/maps/LittlerootTown/scripts.pory"

# 485 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger::
# 486 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 487 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomNoticePlayerMale
# 488 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomNoticePlayerFemale
# 489 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 490 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetHomeDoorCoordsMale
# 491 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetHomeDoorCoordsFemale
# 492 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_WaitPlayer, MSGBOX_DEFAULT
# 493 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 494 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 495 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomApproachPlayerMale
# 496 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomApproachPlayerFemale
# 497 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GiveRunningShoes
# 498 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 499 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomReturnHomeMale
# 500 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomReturnHomeFemale
# 501 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetReceivedRunningShoes
# 502 "data/maps/LittlerootTown/scripts.pory"
	end
# 503 "data/maps/LittlerootTown/scripts.pory"

# 504 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetHomeDoorCoordsMale::
# 505 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8009, 5
# 506 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x800A, 8
# 507 "data/maps/LittlerootTown/scripts.pory"
	return
# 508 "data/maps/LittlerootTown/scripts.pory"

# 509 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetHomeDoorCoordsFemale::
# 510 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8009, 14
# 511 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x800A, 8
# 512 "data/maps/LittlerootTown/scripts.pory"
	return
# 513 "data/maps/LittlerootTown/scripts.pory"

# 514 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomNoticePlayerMale::
# 515 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceFasterRight
# 516 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 517 "data/maps/LittlerootTown/scripts.pory"
	return
# 518 "data/maps/LittlerootTown/scripts.pory"

# 519 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomNoticePlayerFemale::
# 520 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceFasterLeft
# 521 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 522 "data/maps/LittlerootTown/scripts.pory"
	return
# 523 "data/maps/LittlerootTown/scripts.pory"

# 524 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale::
# 525 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomApproachPlayer0
# 526 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomApproachPlayer1
# 527 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomApproachPlayerMale2
# 528 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomApproachPlayerMale3
# 529 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomApproachPlayerMale4
# 530 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomApproachPlayerMale5
# 531 "data/maps/LittlerootTown/scripts.pory"
	return
# 532 "data/maps/LittlerootTown/scripts.pory"

# 533 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale::
# 534 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomApproachPlayer0
# 535 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomApproachPlayer1
# 536 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomApproachPlayerFemale2
# 537 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomApproachPlayerFemale3
# 538 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomApproachPlayerFemale4
# 539 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomApproachPlayerFemale5
# 540 "data/maps/LittlerootTown/scripts.pory"
	return
# 541 "data/maps/LittlerootTown/scripts.pory"

# 542 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayer0::
# 543 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 544 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 545 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkUp6
# 546 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 547 "data/maps/LittlerootTown/scripts.pory"
	return
# 548 "data/maps/LittlerootTown/scripts.pory"

# 549 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayer1::
# 550 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 551 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 552 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkUp6
# 553 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 554 "data/maps/LittlerootTown/scripts.pory"
	return
# 555 "data/maps/LittlerootTown/scripts.pory"

# 556 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale2::
# 557 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 558 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 559 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale2
# 560 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 561 "data/maps/LittlerootTown/scripts.pory"
	return
# 562 "data/maps/LittlerootTown/scripts.pory"

# 563 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale3::
# 564 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 565 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 566 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale3
# 567 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 568 "data/maps/LittlerootTown/scripts.pory"
	return
# 569 "data/maps/LittlerootTown/scripts.pory"

# 570 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale4::
# 571 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 572 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 573 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale4
# 574 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 575 "data/maps/LittlerootTown/scripts.pory"
	return
# 576 "data/maps/LittlerootTown/scripts.pory"

# 577 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale5::
# 578 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 579 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 580 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale5
# 581 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 582 "data/maps/LittlerootTown/scripts.pory"
	return
# 583 "data/maps/LittlerootTown/scripts.pory"

# 584 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale2::
# 585 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 586 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 587 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale2
# 588 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 589 "data/maps/LittlerootTown/scripts.pory"
	return
# 590 "data/maps/LittlerootTown/scripts.pory"

# 591 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale3::
# 592 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 593 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 594 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale3
# 595 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 596 "data/maps/LittlerootTown/scripts.pory"
	return
# 597 "data/maps/LittlerootTown/scripts.pory"

# 598 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale4::
# 599 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 600 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 601 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale4
# 602 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 603 "data/maps/LittlerootTown/scripts.pory"
	return
# 604 "data/maps/LittlerootTown/scripts.pory"

# 605 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale5::
# 606 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 607 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 608 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale5
# 609 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 610 "data/maps/LittlerootTown/scripts.pory"
	return
# 611 "data/maps/LittlerootTown/scripts.pory"

# 612 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale::
# 613 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomReturnHome0
# 614 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomReturnHome1
# 615 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomReturnHomeMale2
# 616 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomReturnHomeMale3
# 617 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomReturnHomeMale4
# 618 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomReturnHomeMale5
# 619 "data/maps/LittlerootTown/scripts.pory"
	return
# 620 "data/maps/LittlerootTown/scripts.pory"

# 621 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale::
# 622 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomReturnHome0
# 623 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomReturnHome1
# 624 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomReturnHomeFemale2
# 625 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomReturnHomeFemale3
# 626 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomReturnHomeFemale4
# 627 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomReturnHomeFemale5
# 628 "data/maps/LittlerootTown/scripts.pory"
	return
# 629 "data/maps/LittlerootTown/scripts.pory"

# 630 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHome0::
# 631 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHome0
# 632 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 633 "data/maps/LittlerootTown/scripts.pory"
	return
# 634 "data/maps/LittlerootTown/scripts.pory"

# 635 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHome1::
# 636 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHome1
# 637 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 638 "data/maps/LittlerootTown/scripts.pory"
	return
# 639 "data/maps/LittlerootTown/scripts.pory"

# 640 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale2::
# 641 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale2
# 642 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 643 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 644 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 645 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkUp
# 646 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 647 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 648 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 649 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 650 "data/maps/LittlerootTown/scripts.pory"
	return
# 651 "data/maps/LittlerootTown/scripts.pory"

# 652 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale3::
# 653 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale3
# 654 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 655 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 656 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 657 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkUp
# 658 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 659 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 660 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 661 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 662 "data/maps/LittlerootTown/scripts.pory"
	return
# 663 "data/maps/LittlerootTown/scripts.pory"

# 664 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale4::
# 665 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale4
# 666 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 667 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 668 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 669 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkUp
# 670 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 671 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 672 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 673 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 674 "data/maps/LittlerootTown/scripts.pory"
	return
# 675 "data/maps/LittlerootTown/scripts.pory"

# 676 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale5::
# 677 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale5
# 678 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 679 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 680 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 681 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkUp
# 682 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 683 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 684 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 685 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 686 "data/maps/LittlerootTown/scripts.pory"
	return
# 687 "data/maps/LittlerootTown/scripts.pory"

# 688 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale2::
# 689 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale2
# 690 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 691 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 692 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 693 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkUp
# 694 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 695 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 696 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 697 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 698 "data/maps/LittlerootTown/scripts.pory"
	return
# 699 "data/maps/LittlerootTown/scripts.pory"

# 700 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale3::
# 701 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale3
# 702 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 703 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 704 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 705 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkUp
# 706 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 707 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 708 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 709 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 710 "data/maps/LittlerootTown/scripts.pory"
	return
# 711 "data/maps/LittlerootTown/scripts.pory"

# 712 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale4::
# 713 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale4
# 714 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 715 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 716 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 717 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkUp
# 718 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 719 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 720 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 721 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 722 "data/maps/LittlerootTown/scripts.pory"
	return
# 723 "data/maps/LittlerootTown/scripts.pory"

# 724 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale5::
# 725 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale5
# 726 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 727 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 728 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 729 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkUp
# 730 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 731 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 732 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 733 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 734 "data/maps/LittlerootTown/scripts.pory"
	return
# 735 "data/maps/LittlerootTown/scripts.pory"

# 736 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale2:
# 737 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 738 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 739 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 740 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 741 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 742 "data/maps/LittlerootTown/scripts.pory"

# 743 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale3:
# 744 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 745 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 746 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 747 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 748 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 749 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 750 "data/maps/LittlerootTown/scripts.pory"

# 751 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale4:
# 752 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 753 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 754 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 755 "data/maps/LittlerootTown/scripts.pory"

# 756 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale5:
# 757 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 758 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 759 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 760 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 761 "data/maps/LittlerootTown/scripts.pory"

# 762 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale2:
# 763 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 764 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 765 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 766 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 767 "data/maps/LittlerootTown/scripts.pory"

# 768 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale3:
# 769 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 770 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 771 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 772 "data/maps/LittlerootTown/scripts.pory"

# 773 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale4:
# 774 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 775 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 776 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 777 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 778 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 779 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 780 "data/maps/LittlerootTown/scripts.pory"

# 781 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale5:
# 782 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 783 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 784 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 785 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 786 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 787 "data/maps/LittlerootTown/scripts.pory"

# 788 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHome0:
# 789 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 790 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 791 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 792 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 793 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 794 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 795 "data/maps/LittlerootTown/scripts.pory"

# 796 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHome1:
# 797 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 798 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 799 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 800 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 801 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 802 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 803 "data/maps/LittlerootTown/scripts.pory"

# 804 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale2:
# 805 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 806 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 807 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 808 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 809 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 810 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 811 "data/maps/LittlerootTown/scripts.pory"

# 812 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale3:
# 813 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 814 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 815 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 816 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 817 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 818 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 819 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 820 "data/maps/LittlerootTown/scripts.pory"

# 821 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale4:
# 822 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 823 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 824 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 825 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 826 "data/maps/LittlerootTown/scripts.pory"

# 827 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale5:
# 828 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 829 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 830 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 831 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 832 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 833 "data/maps/LittlerootTown/scripts.pory"

# 834 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale2:
# 835 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 836 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 837 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 838 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 839 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 840 "data/maps/LittlerootTown/scripts.pory"

# 841 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale3:
# 842 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 843 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 844 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 845 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 846 "data/maps/LittlerootTown/scripts.pory"

# 847 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale4:
# 848 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 849 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 850 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 851 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 852 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 853 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 854 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 855 "data/maps/LittlerootTown/scripts.pory"

# 856 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale5:
# 857 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 858 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 859 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 860 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 861 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 862 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 863 "data/maps/LittlerootTown/scripts.pory"

# 864 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Mom::
# 865 "data/maps/LittlerootTown/scripts.pory"
	lock
# 866 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 867 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 868 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetHomeDoorCoordsMale
# 869 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetHomeDoorCoordsFemale
# 870 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GiveRunningShoes
# 871 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceFasterUp
# 872 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 873 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 874 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 875 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkUp
# 876 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 877 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 878 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 879 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 880 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetReceivedRunningShoes
# 881 "data/maps/LittlerootTown/scripts.pory"
	end
# 882 "data/maps/LittlerootTown/scripts.pory"

# 883 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetReceivedRunningShoes::
# 884 "data/maps/LittlerootTown/scripts.pory"
	removeobject LOCALID_MOM
# 885 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 4
# 886 "data/maps/LittlerootTown/scripts.pory"
	release
# 887 "data/maps/LittlerootTown/scripts.pory"
	end
# 888 "data/maps/LittlerootTown/scripts.pory"

# 889 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoes::
# 890 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_WearTheseRunningShoes, MSGBOX_DEFAULT
# 891 "data/maps/LittlerootTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 892 "data/maps/LittlerootTown/scripts.pory"
	message LittlerootTown_Text_SwitchShoesWithRunningShoes
# 893 "data/maps/LittlerootTown/scripts.pory"
	waitfanfare
# 894 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ExplainRunningShoes, MSGBOX_DEFAULT
# 895 "data/maps/LittlerootTown/scripts.pory"
	giveitem ITEM_OLD_ROD
# 896 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ComeHomeIfAnythingHappens, MSGBOX_DEFAULT
# 897 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 898 "data/maps/LittlerootTown/scripts.pory"
	delay 30
# 899 "data/maps/LittlerootTown/scripts.pory"
	return
# 900 "data/maps/LittlerootTown/scripts.pory"

# 901 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_OurNewHomeLetsGoInside:
# 902 "data/maps/LittlerootTown/scripts.pory"
	.string "Mom: {PLAYER}, we're here, honey!\p"
# 903 "data/maps/LittlerootTown/scripts.pory"
	.string "It must be tiring riding with our things\n"
# 904 "data/maps/LittlerootTown/scripts.pory"
	.string "in the moving truck.\p"
# 905 "data/maps/LittlerootTown/scripts.pory"
	.string "Well, this is Littleroot Town.\p"
# 906 "data/maps/LittlerootTown/scripts.pory"
	.string "How do you like it?\n"
# 907 "data/maps/LittlerootTown/scripts.pory"
	.string "This is our new home!\p"
# 908 "data/maps/LittlerootTown/scripts.pory"
	.string "It has a quaint feel, but it seems to be\n"
# 909 "data/maps/LittlerootTown/scripts.pory"
	.string "an easy place to live, don't you think?\p"
# 910 "data/maps/LittlerootTown/scripts.pory"
	.string "And, you get your own room, {PLAYER}!\n"
# 911 "data/maps/LittlerootTown/scripts.pory"
	.string "Let's go inside.$"
# 912 "data/maps/LittlerootTown/scripts.pory"

# 913 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_WaitPlayer:
# 914 "data/maps/LittlerootTown/scripts.pory"
	.string "Mom: Wait, {PLAYER}!$"
# 915 "data/maps/LittlerootTown/scripts.pory"

# 916 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_WearTheseRunningShoes:
# 917 "data/maps/LittlerootTown/scripts.pory"
	.string "Mom: {PLAYER}! {PLAYER}! Did you\n"
# 918 "data/maps/LittlerootTown/scripts.pory"
	.string "introduce yourself to Prof. Birch?\p"
# 919 "data/maps/LittlerootTown/scripts.pory"
	.string "Oh! What an adorable Pokémon!\n"
# 920 "data/maps/LittlerootTown/scripts.pory"
	.string "You got it from Prof. Birch. How nice!\p"
# 921 "data/maps/LittlerootTown/scripts.pory"
	.string "You're your father's child, all right.\n"
# 922 "data/maps/LittlerootTown/scripts.pory"
	.string "You look good together with Pokémon!\p"
# 923 "data/maps/LittlerootTown/scripts.pory"
	.string "Here, honey! If you're going out on an\n"
# 924 "data/maps/LittlerootTown/scripts.pory"
	.string "adventure, wear these new shoes I got\l"
# 925 "data/maps/LittlerootTown/scripts.pory"
	.string "for you!$"
# 926 "data/maps/LittlerootTown/scripts.pory"

# 927 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_SwitchShoesWithRunningShoes:
# 928 "data/maps/LittlerootTown/scripts.pory"
	.string "{PLAYER} switched shoes with the\n"
# 929 "data/maps/LittlerootTown/scripts.pory"
	.string "new pair from Mom!$"
# 930 "data/maps/LittlerootTown/scripts.pory"

# 931 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ExplainRunningShoes:
# 932 "data/maps/LittlerootTown/scripts.pory"
	.string "Mom: {PLAYER}, those shoes look so\n"
# 933 "data/maps/LittlerootTown/scripts.pory"
	.string "stylish on you!\p"
# 934 "data/maps/LittlerootTown/scripts.pory"
	.string "Oh!\n"
# 935 "data/maps/LittlerootTown/scripts.pory"
	.string "Let me give you your old fishing rod.$"
# 936 "data/maps/LittlerootTown/scripts.pory"

# 937 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ComeHomeIfAnythingHappens:
# 938 "data/maps/LittlerootTown/scripts.pory"
	.string "… … … … … … … …\n"
# 939 "data/maps/LittlerootTown/scripts.pory"
	.string "… … … … … … … …\p"
# 940 "data/maps/LittlerootTown/scripts.pory"
	.string "To think that you have your very own\n"
# 941 "data/maps/LittlerootTown/scripts.pory"
	.string "Pokémon now…\l"
# 942 "data/maps/LittlerootTown/scripts.pory"
	.string "Your father will be overjoyed.\p"
# 943 "data/maps/LittlerootTown/scripts.pory"
	.string "…But please be careful.\n"
# 944 "data/maps/LittlerootTown/scripts.pory"
	.string "If anything happens, you can come home.\p"
# 945 "data/maps/LittlerootTown/scripts.pory"
	.string "Go on, go get them, honey!$"
# 946 "data/maps/LittlerootTown/scripts.pory"

# 947 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_CanUsePCToStoreItems:
# 948 "data/maps/LittlerootTown/scripts.pory"
	.string "Experts have said that we could\n"
# 949 "data/maps/LittlerootTown/scripts.pory"
	.string "be living inside of a simulation.\p"
# 950 "data/maps/LittlerootTown/scripts.pory"
	.string "The power of science is staggering!$"
# 951 "data/maps/LittlerootTown/scripts.pory"

# 952 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_BirchSpendsDaysInLab:
# 953 "data/maps/LittlerootTown/scripts.pory"
	.string "Prof. Birch spends days in his Lab\n"
# 954 "data/maps/LittlerootTown/scripts.pory"
	.string "studying, then he'll suddenly go out in\l"
# 955 "data/maps/LittlerootTown/scripts.pory"
	.string "the wild to do more research…\p"
# 956 "data/maps/LittlerootTown/scripts.pory"
	.string "When does Prof. Birch spend time\n"
# 957 "data/maps/LittlerootTown/scripts.pory"
	.string "at home?$"
# 958 "data/maps/LittlerootTown/scripts.pory"

# 959 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut:
# 960 "data/maps/LittlerootTown/scripts.pory"
	.string "Um, um, um!\p"
# 961 "data/maps/LittlerootTown/scripts.pory"
	.string "If you go outside and go in the grass,\n"
# 962 "data/maps/LittlerootTown/scripts.pory"
	.string "wild Pokémon will jump out!$"
# 963 "data/maps/LittlerootTown/scripts.pory"

# 964 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_DangerousIfYouDontHavePokemon:
# 965 "data/maps/LittlerootTown/scripts.pory"
	.string "It's dangerous if you don't have\n"
# 966 "data/maps/LittlerootTown/scripts.pory"
	.string "your own Pokémon.$"
# 967 "data/maps/LittlerootTown/scripts.pory"

# 968 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_CanYouGoSeeWhatsHappening:
# 969 "data/maps/LittlerootTown/scripts.pory"
	.string "Um, hi!\p"
# 970 "data/maps/LittlerootTown/scripts.pory"
	.string "There are scary Pokémon outside!\n"
# 971 "data/maps/LittlerootTown/scripts.pory"
	.string "I can hear their cries!\p"
# 972 "data/maps/LittlerootTown/scripts.pory"
	.string "I want to go see what's going on,\n"
# 973 "data/maps/LittlerootTown/scripts.pory"
	.string "but I don't have any Pokémon…\p"
# 974 "data/maps/LittlerootTown/scripts.pory"
	.string "Can you go see what's happening\n"
# 975 "data/maps/LittlerootTown/scripts.pory"
	.string "for me?$"
# 976 "data/maps/LittlerootTown/scripts.pory"

# 977 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_YouSavedBirch:
# 978 "data/maps/LittlerootTown/scripts.pory"
	.string "You saved Prof. Birch!\n"
# 979 "data/maps/LittlerootTown/scripts.pory"
	.string "I'm so glad!$"
# 980 "data/maps/LittlerootTown/scripts.pory"

# 981 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_GoodLuckCatchingPokemon:
# 982 "data/maps/LittlerootTown/scripts.pory"
	.string "Are you going to catch Pokémon?\n"
# 983 "data/maps/LittlerootTown/scripts.pory"
	.string "Good luck!$"
# 984 "data/maps/LittlerootTown/scripts.pory"

# 985 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_TownSign:
# 986 "data/maps/LittlerootTown/scripts.pory"
	.string "Littleroot Town\n"
# 987 "data/maps/LittlerootTown/scripts.pory"
	.string "“A town that can't be shaded any hue.”$"
# 988 "data/maps/LittlerootTown/scripts.pory"

# 989 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ProfBirchsLab:
# 990 "data/maps/LittlerootTown/scripts.pory"
	.string "Prof. Birch's Pokémon Lab$"
# 991 "data/maps/LittlerootTown/scripts.pory"

# 992 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_PlayersHouse:
# 993 "data/maps/LittlerootTown/scripts.pory"
	.string "{PLAYER}'s House$"
# 994 "data/maps/LittlerootTown/scripts.pory"

# 995 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ProfBirchsHouse:
# 996 "data/maps/LittlerootTown/scripts.pory"
	.string "Prof. Birch's House$"
# 997 "data/maps/LittlerootTown/scripts.pory"

# 998 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_BirchSomethingToShowYouAtLab:
# 999 "data/maps/LittlerootTown/scripts.pory"
	.string "Prof. Birch: Well, well, {PLAYER}{KUN}!\n"
# 1000 "data/maps/LittlerootTown/scripts.pory"
	.string "That was good work out there!\p"
# 1001 "data/maps/LittlerootTown/scripts.pory"
	.string "I knew there was something special\n"
# 1002 "data/maps/LittlerootTown/scripts.pory"
	.string "about you when I first saw you,\l"
# 1003 "data/maps/LittlerootTown/scripts.pory"
	.string "but I never expected this.\p"
# 1004 "data/maps/LittlerootTown/scripts.pory"
	.string "Oh, yes. Do you still have the Pokédex\n"
# 1005 "data/maps/LittlerootTown/scripts.pory"
	.string "I gave you?\p"
# 1006 "data/maps/LittlerootTown/scripts.pory"
	.string "I have something to show you.\n"
# 1007 "data/maps/LittlerootTown/scripts.pory"
	.string "Let's go to my Lab.$"

Baron_Town01::
# 1014 "data/maps/LittlerootTown/scripts.pory"
	lock
# 1015 "data/maps/LittlerootTown/scripts.pory"
	applymovement 9, Baron_Town01_Move
# 1016 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 1017 "data/maps/LittlerootTown/scripts.pory"
	applymovement 9, Baron_Town01_Move
# 1018 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 1019 "data/maps/LittlerootTown/scripts.pory"
	msgbox Baron_Town01_Text_0
# 1020 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 1021 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 1022 "data/maps/LittlerootTown/scripts.pory"
	playse SE_PIN
# 1023 "data/maps/LittlerootTown/scripts.pory"
	applymovement 9, Common_Movement_ExclamationMark
# 1024 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 1025 "data/maps/LittlerootTown/scripts.pory"
	delay 60
# 1026 "data/maps/LittlerootTown/scripts.pory"
	msgbox Baron_Town01_Text_1
# 1027 "data/maps/LittlerootTown/scripts.pory"
	applymovement 9, Common_Movement_FaceLeft
# 1028 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 1029 "data/maps/LittlerootTown/scripts.pory"
	release
	end


# 1033 "data/maps/LittlerootTown/scripts.pory"
Baron_Town01_Move:
# 1034 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_left
# 1035 "data/maps/LittlerootTown/scripts.pory"
	delay_16
	step_end

Rival_Scene01::
# 1039 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_BIRCH_LAB_STATE, 3
	goto_if_eq Rival_Scene01_2
Rival_Scene01_1:
# 1075 "data/maps/LittlerootTown/scripts.pory"
	release
	end

Rival_Scene01_2:
# 1040 "data/maps/LittlerootTown/scripts.pory"
	lock
# 1041 "data/maps/LittlerootTown/scripts.pory"
	call Common_EventScript_PlayEmRivalBgm
# 1042 "data/maps/LittlerootTown/scripts.pory"
	playse SE_PIN
# 1043 "data/maps/LittlerootTown/scripts.pory"
	applymovement 10, Rival_Scene01_Move1
# 1044 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 1045 "data/maps/LittlerootTown/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 1046 "data/maps/LittlerootTown/scripts.pory"
	switch VAR_TEMP_1
# 1047 "data/maps/LittlerootTown/scripts.pory"
	case 17, Rival_Scene01_6
Rival_Scene01_4:
# 1052 "data/maps/LittlerootTown/scripts.pory"
	switch VAR_EMERALBODY_RIVAL
# 1053 "data/maps/LittlerootTown/scripts.pory"
	case 1, Rival_Scene01_9
# 1055 "data/maps/LittlerootTown/scripts.pory"
	case 2, Rival_Scene01_10
# 1057 "data/maps/LittlerootTown/scripts.pory"
	case 3, Rival_Scene01_11
# 1059 "data/maps/LittlerootTown/scripts.pory"
	case 4, Rival_Scene01_12
# 1062 "data/maps/LittlerootTown/scripts.pory"
	msgbox Rival_Scene01_Text_4
Rival_Scene01_7:
# 1064 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 1065 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_EMERALBODY_RIVAL_STATE, 1
# 1066 "data/maps/LittlerootTown/scripts.pory"
	fadescreen FADE_TO_BLACK
# 1067 "data/maps/LittlerootTown/scripts.pory"
	fadedefaultbgm
# 1068 "data/maps/LittlerootTown/scripts.pory"
	applymovement 10, Rival_Scene01_Move2
# 1069 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 1070 "data/maps/LittlerootTown/scripts.pory"
	removeobject 10
# 1071 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_TEMP_1
# 1072 "data/maps/LittlerootTown/scripts.pory"
	addobject 9
# 1073 "data/maps/LittlerootTown/scripts.pory"
	fadescreen FADE_FROM_BLACK
	goto Rival_Scene01_1

Rival_Scene01_6:
# 1048 "data/maps/LittlerootTown/scripts.pory"
	applymovement 10, Rival_Scene01_Move1b
# 1049 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
	goto Rival_Scene01_4

Rival_Scene01_9:
# 1054 "data/maps/LittlerootTown/scripts.pory"
	msgbox Rival_Scene01_Text_0
	goto Rival_Scene01_7

Rival_Scene01_10:
# 1056 "data/maps/LittlerootTown/scripts.pory"
	msgbox Rival_Scene01_Text_1
	goto Rival_Scene01_7

Rival_Scene01_11:
# 1058 "data/maps/LittlerootTown/scripts.pory"
	msgbox Rival_Scene01_Text_2
	goto Rival_Scene01_7

Rival_Scene01_12:
# 1060 "data/maps/LittlerootTown/scripts.pory"
	msgbox Rival_Scene01_Text_3
	goto Rival_Scene01_7


# 1079 "data/maps/LittlerootTown/scripts.pory"
Rival_Scene01_Move1:
# 1080 "data/maps/LittlerootTown/scripts.pory"
	emote_exclamation_mark
# 1081 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 1081 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 1081 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 1081 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 1082 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1082 "data/maps/LittlerootTown/scripts.pory"
	walk_left
	step_end

# 1085 "data/maps/LittlerootTown/scripts.pory"
Rival_Scene01_Move1b:
# 1086 "data/maps/LittlerootTown/scripts.pory"
	face_up
	step_end

# 1089 "data/maps/LittlerootTown/scripts.pory"
Rival_Scene01_Move2:
# 1090 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_down
# 1090 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_down
# 1090 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_down
# 1090 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_down
# 1090 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_down
# 1090 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_down
# 1090 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_down
	step_end

Baron_Town01_Text_0:
# 1019 "data/maps/LittlerootTown/scripts.pory"
	.string "Baron: Left foot... Right foot..\nLeft foot.. Right foot...$"

Baron_Town01_Text_1:
# 1026 "data/maps/LittlerootTown/scripts.pory"
	.string "O- Oh, there you are... {PLAYER},\n"
	.string "right?\n"
	.string "I didn't notice you there.\p"
	.string "When I was told about... this control\n"
	.string "system... I didn't think...\p"
	.string "Well, I assumed it would be like a pop-up\n"
	.string "book where all the pixel sprites sprung\l"
	.string "up in a 3D area you walked around in.\p"
	.string "I didn't think it'd LITERALLY be a\n"
	.string "system for mapping perception of 2D\l"
	.string "pixel art worlds into your head to walk\l"
	.string "around in.\p"
	.string "Technology is...\p"
	.string "Technology can be incredible and very\n"
	.string "scary at times.$"

Rival_Scene01_Text_0:
# 1054 "data/maps/LittlerootTown/scripts.pory"
	.string "Harper:$"

Rival_Scene01_Text_1:
# 1056 "data/maps/LittlerootTown/scripts.pory"
	.string "Jakson:$"

Rival_Scene01_Text_2:
# 1058 "data/maps/LittlerootTown/scripts.pory"
	.string "Redd:$"

Rival_Scene01_Text_3:
# 1060 "data/maps/LittlerootTown/scripts.pory"
	.string "Sakura:$"

Rival_Scene01_Text_4:
# 1062 "data/maps/LittlerootTown/scripts.pory"
	.string "Baron:$"
