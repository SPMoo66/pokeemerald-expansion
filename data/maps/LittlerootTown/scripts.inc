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
.set BARON_LITTLEROOT, 9
# 7 "data/maps/LittlerootTown/scripts.pory"
.set RIVAL_LITTLEROOT, 10
# 8 "data/maps/LittlerootTown/scripts.pory"

# 9 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_MapScripts::
# 10 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_OnTransition
# 11 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_OnFrame
# 12 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LittlerootTown_OnWarp
# 13 "data/maps/LittlerootTown/scripts.pory"
	.byte 0
# 14 "data/maps/LittlerootTown/scripts.pory"

# 15 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_TOWN_STATE
# 16 "data/maps/LittlerootTown/scripts.pory"
	@ 1: Met Rival
# 17 "data/maps/LittlerootTown/scripts.pory"
	@ 2: Saving Birch
# 18 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Received Pokedex
# 19 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Received Running Shoes
# 20 "data/maps/LittlerootTown/scripts.pory"

# 21 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_INTRO_STATE
# 22 "data/maps/LittlerootTown/scripts.pory"
	@ 1: In truck male
# 23 "data/maps/LittlerootTown/scripts.pory"
	@ 2: In truck female
# 24 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Entered house
# 25 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Told to go set clock
# 26 "data/maps/LittlerootTown/scripts.pory"
	@ 5: Entered 2F to set clock
# 27 "data/maps/LittlerootTown/scripts.pory"
	@ 6: Set clock
# 28 "data/maps/LittlerootTown/scripts.pory"
	@ 7: Told to go meet rival
# 29 "data/maps/LittlerootTown/scripts.pory"

# 30 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_HOUSES_STATE_MAY
# 31 "data/maps/LittlerootTown/scripts.pory"
	@                    and VAR_LITTLEROOT_HOUSES_STATE_BRENDAN
# 32 "data/maps/LittlerootTown/scripts.pory"
	@ 1: On Truck (and is corresponding gender)
# 33 "data/maps/LittlerootTown/scripts.pory"
	@ 2: Met Rival's Mom (and is corresponding gender)
# 34 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Entered Hall of Fame
# 35 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Completed Lati TV / SS Ticket event
# 36 "data/maps/LittlerootTown/scripts.pory"
	@ 5: Exited house after above event
# 37 "data/maps/LittlerootTown/scripts.pory"

# 38 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_RIVAL_STATE
# 39 "data/maps/LittlerootTown/scripts.pory"
	@ 1: Never occurs
# 40 "data/maps/LittlerootTown/scripts.pory"
	@ 2: Entered Rival's bedroom
# 41 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Met Rival
# 42 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Received Pokedex
# 43 "data/maps/LittlerootTown/scripts.pory"

# 44 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_EMERALBODY_RIVAL_STATE
# 45 "data/maps/LittlerootTown/scripts.pory"
	@ 1: Set after scene outside Birch's Lab
# 46 "data/maps/LittlerootTown/scripts.pory"
	@ 2: Set after rival fight in Petalburg City
# 47 "data/maps/LittlerootTown/scripts.pory"

# 48 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnTransition:
# 49 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_VISITED_LITTLEROOT_TOWN
# 50 "data/maps/LittlerootTown/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 51 "data/maps/LittlerootTown/scripts.pory"
	call Common_EventScript_SetupEmRivalGfxId
# 52 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 2, LittlerootTown_EventScript_MoveMomToMaysDoor
# 53 "data/maps/LittlerootTown/scripts.pory"
	call_if_unset FLAG_RESCUED_BIRCH, LittlerootTown_EventScript_SetTwinPos
# 54 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_TOWN_STATE, 3, LittlerootTown_EventScript_SetMomStandingInFrontOfDoorPos
# 55 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_HOUSES_STATE_MAY, 4, LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent
# 56 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 4, LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent
# 57 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_OLDALE_RIVAL_STATE, 1, LittlerootTown_EventScript_MoveRivalFromOldale
# 58 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_RIVAL_STATE, 3, LittlerootTown_EventScript_SetRivalLeftForRoute103
# 59 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, EventScript_HideMapNamePopup
# 60 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2, LittlerootTown_EventScript_LeftLabAfterDexUpgrade
# 61 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_TEMP_1
# 62 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_TEMP_2
# 63 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_EMERALBODY_RIVAL_STATE, 1, LittlerootTown_EventScript_ShowBaron
# 64 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_EMERALBODY_RIVAL_STATE, 0, LittlerootTown_EventScript_ShowRivalCheck
# 65 "data/maps/LittlerootTown/scripts.pory"
	end
# 66 "data/maps/LittlerootTown/scripts.pory"

# 67 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_ShowBaron::
# 68 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_TEMP_1
# 69 "data/maps/LittlerootTown/scripts.pory"
	return
# 70 "data/maps/LittlerootTown/scripts.pory"

# 71 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_ShowRivalCheck::
# 72 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_BIRCH_LAB_STATE, 3, LittlerootTown_EventScript_ShowRival
# 73 "data/maps/LittlerootTown/scripts.pory"
	return
# 74 "data/maps/LittlerootTown/scripts.pory"
	
# 75 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_ShowRival::
# 76 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_TEMP_2
# 77 "data/maps/LittlerootTown/scripts.pory"
	return
# 78 "data/maps/LittlerootTown/scripts.pory"

# 79 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_LeftLabAfterDexUpgrade::
# 80 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 3
# 81 "data/maps/LittlerootTown/scripts.pory"
	return
# 82 "data/maps/LittlerootTown/scripts.pory"

# 83 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalLeftForRoute103::
# 84 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_RIVAL_LEFT_FOR_ROUTE103
# 85 "data/maps/LittlerootTown/scripts.pory"
	return
# 86 "data/maps/LittlerootTown/scripts.pory"

# 87 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MoveRivalFromOldale::
# 88 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_OLDALE_RIVAL_STATE, 2
# 89 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_OLDALE_TOWN_RIVAL
# 90 "data/maps/LittlerootTown/scripts.pory"
	return
# 91 "data/maps/LittlerootTown/scripts.pory"

# 92 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent::
# 93 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 5
# 94 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 5
# 95 "data/maps/LittlerootTown/scripts.pory"
	return
# 96 "data/maps/LittlerootTown/scripts.pory"

# 97 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MoveMomToMaysDoor::
# 98 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_MOM, 14, 8
# 99 "data/maps/LittlerootTown/scripts.pory"
	return
# 100 "data/maps/LittlerootTown/scripts.pory"

# 101 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetTwinPos::
# 102 "data/maps/LittlerootTown/scripts.pory"
	goto_if_eq VAR_LITTLEROOT_TOWN_STATE, 0, LittlerootTown_EventScript_SetTwinGuardingRoutePos
# 103 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_TWIN, 10, 1
# 104 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_TWIN, MOVEMENT_TYPE_FACE_UP
# 105 "data/maps/LittlerootTown/scripts.pory"
	return
# 106 "data/maps/LittlerootTown/scripts.pory"

# 107 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetTwinGuardingRoutePos::
# 108 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_TWIN, 7, 2
# 109 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_TWIN, MOVEMENT_TYPE_FACE_DOWN
# 110 "data/maps/LittlerootTown/scripts.pory"
	return
# 111 "data/maps/LittlerootTown/scripts.pory"

# 112 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetMomStandingInFrontOfDoorPos::
# 113 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
# 114 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_DOWN
# 115 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 116 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetMomInFrontOfDoorMale
# 117 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetMomInFrontOfDoorFemale
# 118 "data/maps/LittlerootTown/scripts.pory"
	return
# 119 "data/maps/LittlerootTown/scripts.pory"

# 120 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetMomInFrontOfDoorMale::
# 121 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_MOM, 5, 9
# 122 "data/maps/LittlerootTown/scripts.pory"
	return
# 123 "data/maps/LittlerootTown/scripts.pory"

# 124 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetMomInFrontOfDoorFemale::
# 125 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_MOM, 14, 9
# 126 "data/maps/LittlerootTown/scripts.pory"
	return
# 127 "data/maps/LittlerootTown/scripts.pory"

# 128 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnFrame:
# 129 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 1, LittlerootTown_EventScript_StepOffTruckMale
# 130 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 2, LittlerootTown_EventScript_StepOffTruckFemale
# 131 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_BeginDexUpgradeScene
# 132 "data/maps/LittlerootTown/scripts.pory"
	.2byte 0
# 133 "data/maps/LittlerootTown/scripts.pory"

# 134 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_StepOffTruckMale::
# 135 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 136 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8004, 5
# 137 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8005, 8
# 138 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GoInsideWithMom
# 139 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_TRUCK
# 140 "data/maps/LittlerootTown/scripts.pory"
	warpsilent MAP_LITTLEROOT_TOWN_BRENDANS_HOUSE_1F, 8, 8
# 141 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 142 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 143 "data/maps/LittlerootTown/scripts.pory"
	end
# 144 "data/maps/LittlerootTown/scripts.pory"

# 145 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_StepOffTruckFemale::
# 146 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 147 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8004, 14
# 148 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8005, 8
# 149 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GoInsideWithMom
# 150 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_TRUCK
# 151 "data/maps/LittlerootTown/scripts.pory"
	warpsilent MAP_LITTLEROOT_TOWN_MAYS_HOUSE_1F, 2, 8
# 152 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 153 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 154 "data/maps/LittlerootTown/scripts.pory"
	end
# 155 "data/maps/LittlerootTown/scripts.pory"

# 156 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoInsideWithMom::
# 157 "data/maps/LittlerootTown/scripts.pory"
	delay 15
# 158 "data/maps/LittlerootTown/scripts.pory"
	playse SE_LEDGE
# 159 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PlayerStepOffTruck
# 160 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 161 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 162 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 163 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_MOM
# 164 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkDown
# 165 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 166 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 167 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 168 "data/maps/LittlerootTown/scripts.pory"
	delay 10
# 169 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerAtTruck
# 170 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 171 "data/maps/LittlerootTown/scripts.pory"
	speakername CommonText_Mom
# 172 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_OurNewHomeLetsGoInside, MSGBOX_DEFAULT
# 173 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 174 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachDoor
# 175 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PlayerApproachDoor
# 176 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 177 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 178 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 179 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_EnterHouse
# 180 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp2
# 181 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 182 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
# 183 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 3
# 184 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, 0
# 185 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 186 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 187 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_FAT_MAN
# 188 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 189 "data/maps/LittlerootTown/scripts.pory"
	return
# 190 "data/maps/LittlerootTown/scripts.pory"

# 191 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerAtTruck:
# 192 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 193 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_left
# 194 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 195 "data/maps/LittlerootTown/scripts.pory"

# 196 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachDoor:
# 197 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 198 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 199 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 200 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 201 "data/maps/LittlerootTown/scripts.pory"

# 202 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PlayerApproachDoor:
# 203 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 204 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 205 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 206 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 207 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 208 "data/maps/LittlerootTown/scripts.pory"

# 209 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PlayerStepOffTruck:
# 210 "data/maps/LittlerootTown/scripts.pory"
	jump_right
# 211 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 212 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 213 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 214 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 215 "data/maps/LittlerootTown/scripts.pory"

# 216 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BeginDexUpgradeScene::
# 217 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 218 "data/maps/LittlerootTown/scripts.pory"
	playse SE_PIN
# 219 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_ExclamationMark
# 220 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 221 "data/maps/LittlerootTown/scripts.pory"
	delay 80
# 222 "data/maps/LittlerootTown/scripts.pory"
	speakername CommonText_Birch
# 223 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_BirchSomethingToShowYouAtLab, MSGBOX_DEFAULT
# 224 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 225 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_RIVAL
# 226 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH
# 227 "data/maps/LittlerootTown/scripts.pory"
	delay 20
# 228 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 229 "data/maps/LittlerootTown/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB, 6, 5
# 230 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 231 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 232 "data/maps/LittlerootTown/scripts.pory"
	end
# 233 "data/maps/LittlerootTown/scripts.pory"

# 234 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnWarp:
# 235 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_SetRivalBirchPosForDexUpgrade
# 236 "data/maps/LittlerootTown/scripts.pory"
	.2byte 0
# 237 "data/maps/LittlerootTown/scripts.pory"

# 238 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgrade::
# 239 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_BIRCH
# 240 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_RIVAL
# 241 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 242 "data/maps/LittlerootTown/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeMale
# 243 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeFemale
# 244 "data/maps/LittlerootTown/scripts.pory"
	end
# 245 "data/maps/LittlerootTown/scripts.pory"

# 246 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeMale::
# 247 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_RIVAL, 6, 10
# 248 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_BIRCH, 5, 10
# 249 "data/maps/LittlerootTown/scripts.pory"
	end
# 250 "data/maps/LittlerootTown/scripts.pory"

# 251 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeFemale::
# 252 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_RIVAL, 13, 10
# 253 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_BIRCH, 14, 10
# 254 "data/maps/LittlerootTown/scripts.pory"
	end
# 255 "data/maps/LittlerootTown/scripts.pory"

# 256 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_FatMan::
# 257 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_Simulation, MSGBOX_NPC
# 258 "data/maps/LittlerootTown/scripts.pory"
	end
# 259 "data/maps/LittlerootTown/scripts.pory"

# 260 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Boy::
# 261 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_BirchSpendsDaysInLab, MSGBOX_NPC
# 262 "data/maps/LittlerootTown/scripts.pory"
	end
# 263 "data/maps/LittlerootTown/scripts.pory"

# 264 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Twin::
# 265 "data/maps/LittlerootTown/scripts.pory"
	lock
# 266 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 267 "data/maps/LittlerootTown/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, LittlerootTown_EventScript_GoodLuck
# 268 "data/maps/LittlerootTown/scripts.pory"
	goto_if_set FLAG_RESCUED_BIRCH, LittlerootTown_EventScript_YouSavedBirch
# 269 "data/maps/LittlerootTown/scripts.pory"
	goto_if_ne VAR_LITTLEROOT_TOWN_STATE, 0, LittlerootTown_EventScript_GoSaveBirch
# 270 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut, MSGBOX_DEFAULT
# 271 "data/maps/LittlerootTown/scripts.pory"
	release
# 272 "data/maps/LittlerootTown/scripts.pory"
	end
# 273 "data/maps/LittlerootTown/scripts.pory"

# 274 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoSaveBirch::
# 275 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 276 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanYouGoSeeWhatsHappening, MSGBOX_DEFAULT
# 277 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 278 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_FaceOriginalDirection
# 279 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 280 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 281 "data/maps/LittlerootTown/scripts.pory"
	release
# 282 "data/maps/LittlerootTown/scripts.pory"
	end
# 283 "data/maps/LittlerootTown/scripts.pory"

# 284 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_YouSavedBirch::
# 285 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 286 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_YouSavedBirch, MSGBOX_DEFAULT
# 287 "data/maps/LittlerootTown/scripts.pory"
	release
# 288 "data/maps/LittlerootTown/scripts.pory"
	end
# 289 "data/maps/LittlerootTown/scripts.pory"

# 290 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoodLuck::
# 291 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_GoodLuckCatchingPokemon, MSGBOX_DEFAULT
# 292 "data/maps/LittlerootTown/scripts.pory"
	release
# 293 "data/maps/LittlerootTown/scripts.pory"
	end
# 294 "data/maps/LittlerootTown/scripts.pory"

# 295 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerLeft::
# 296 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 297 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinApproachPlayerLeft
# 298 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 299 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemon
# 300 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinReturnLeft
# 301 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 302 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 303 "data/maps/LittlerootTown/scripts.pory"
	end
# 304 "data/maps/LittlerootTown/scripts.pory"

# 305 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_DangerousWithoutPokemon::
# 306 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut, MSGBOX_DEFAULT
# 307 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 308 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_WalkDown
# 309 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PushPlayerBackFromRoute
# 310 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 311 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_DangerousIfYouDontHavePokemon, MSGBOX_DEFAULT
# 312 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 313 "data/maps/LittlerootTown/scripts.pory"
	return
# 314 "data/maps/LittlerootTown/scripts.pory"

# 315 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinApproachPlayerLeft:
# 316 "data/maps/LittlerootTown/scripts.pory"
	face_right
# 317 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 318 "data/maps/LittlerootTown/scripts.pory"
	disable_jump_landing_ground_effect
# 319 "data/maps/LittlerootTown/scripts.pory"
	jump_in_place_right
# 320 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 321 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 322 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 323 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 324 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 325 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 326 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 327 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_left
# 328 "data/maps/LittlerootTown/scripts.pory"
	face_down
# 329 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 330 "data/maps/LittlerootTown/scripts.pory"

# 331 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinReturnLeft:
# 332 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 333 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 334 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 335 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 336 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 337 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 338 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 339 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 340 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_down
# 341 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 342 "data/maps/LittlerootTown/scripts.pory"

# 343 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PushPlayerBackFromRoute:
# 344 "data/maps/LittlerootTown/scripts.pory"
	lock_facing_direction
# 345 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 346 "data/maps/LittlerootTown/scripts.pory"
	unlock_facing_direction
# 347 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 348 "data/maps/LittlerootTown/scripts.pory"

# 349 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerRight::
# 350 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 351 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinApproachPlayerRight
# 352 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 353 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemon
# 354 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinReturnRight
# 355 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 356 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 357 "data/maps/LittlerootTown/scripts.pory"
	end
# 358 "data/maps/LittlerootTown/scripts.pory"

# 359 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinApproachPlayerRight:
# 360 "data/maps/LittlerootTown/scripts.pory"
	face_right
# 361 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 362 "data/maps/LittlerootTown/scripts.pory"
	disable_jump_landing_ground_effect
# 363 "data/maps/LittlerootTown/scripts.pory"
	jump_in_place_right
# 364 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 365 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 366 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 367 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 368 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 369 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 370 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 371 "data/maps/LittlerootTown/scripts.pory"
	face_down
# 372 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 373 "data/maps/LittlerootTown/scripts.pory"

# 374 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinReturnRight:
# 375 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 376 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 377 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 378 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 379 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 380 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_down
# 381 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 382 "data/maps/LittlerootTown/scripts.pory"

# 383 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoSaveBirchTrigger::
# 384 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 385 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_WalkInPlaceFasterRight
# 386 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 387 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 388 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 389 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 390 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanYouGoSeeWhatsHappening, MSGBOX_DEFAULT
# 391 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 392 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_FaceOriginalDirection
# 393 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 394 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 395 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 396 "data/maps/LittlerootTown/scripts.pory"
	end
# 397 "data/maps/LittlerootTown/scripts.pory"

# 398 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_TownSign::
# 399 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_TownSign, MSGBOX_SIGN
# 400 "data/maps/LittlerootTown/scripts.pory"
	end
# 401 "data/maps/LittlerootTown/scripts.pory"

# 402 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BirchsLabSign::
# 403 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsLab, MSGBOX_SIGN
# 404 "data/maps/LittlerootTown/scripts.pory"
	end
# 405 "data/maps/LittlerootTown/scripts.pory"

# 406 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BrendansHouseSign::
# 407 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 408 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 409 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_PlayersHouseSignMale
# 410 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_BirchsHouseSignFemale
# 411 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 412 "data/maps/LittlerootTown/scripts.pory"
	end
# 413 "data/maps/LittlerootTown/scripts.pory"

# 414 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_PlayersHouseSignMale::
# 415 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_PlayersHouse, MSGBOX_DEFAULT
# 416 "data/maps/LittlerootTown/scripts.pory"
	return
# 417 "data/maps/LittlerootTown/scripts.pory"

# 418 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BirchsHouseSignFemale::
# 419 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsHouse, MSGBOX_DEFAULT
# 420 "data/maps/LittlerootTown/scripts.pory"
	return
# 421 "data/maps/LittlerootTown/scripts.pory"

# 422 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MaysHouseSign::
# 423 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 424 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 425 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_BirchsHouseSignMale
# 426 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_PlayersHouseSignFemale
# 427 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 428 "data/maps/LittlerootTown/scripts.pory"
	end
# 429 "data/maps/LittlerootTown/scripts.pory"

# 430 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BirchsHouseSignMale::
# 431 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsHouse, MSGBOX_DEFAULT
# 432 "data/maps/LittlerootTown/scripts.pory"
	return
# 433 "data/maps/LittlerootTown/scripts.pory"

# 434 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_PlayersHouseSignFemale::
# 435 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_PlayersHouse, MSGBOX_DEFAULT
# 436 "data/maps/LittlerootTown/scripts.pory"
	return
# 437 "data/maps/LittlerootTown/scripts.pory"

# 438 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger0::
# 439 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 440 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 0
# 441 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_MOM, 10, 9
# 442 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 443 "data/maps/LittlerootTown/scripts.pory"
	end
# 444 "data/maps/LittlerootTown/scripts.pory"

# 445 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger1::
# 446 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 447 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 1
# 448 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_MOM, 11, 9
# 449 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 450 "data/maps/LittlerootTown/scripts.pory"
	end
# 451 "data/maps/LittlerootTown/scripts.pory"

# 452 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger2::
# 453 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 454 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 2
# 455 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 456 "data/maps/LittlerootTown/scripts.pory"
	end
# 457 "data/maps/LittlerootTown/scripts.pory"

# 458 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger3::
# 459 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 460 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 3
# 461 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 462 "data/maps/LittlerootTown/scripts.pory"
	end
# 463 "data/maps/LittlerootTown/scripts.pory"

# 464 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger4::
# 465 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 466 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 4
# 467 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 468 "data/maps/LittlerootTown/scripts.pory"
	end
# 469 "data/maps/LittlerootTown/scripts.pory"

# 470 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger5::
# 471 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 472 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 5
# 473 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 474 "data/maps/LittlerootTown/scripts.pory"
	end
# 475 "data/maps/LittlerootTown/scripts.pory"

# 476 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger::
# 477 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 478 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomNoticePlayerMale
# 479 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomNoticePlayerFemale
# 480 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 481 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetHomeDoorCoordsMale
# 482 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetHomeDoorCoordsFemale
# 483 "data/maps/LittlerootTown/scripts.pory"
	speakername CommonText_Mom
# 484 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_WaitPlayer, MSGBOX_DEFAULT
# 485 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 486 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 487 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomApproachPlayerMale
# 488 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomApproachPlayerFemale
# 489 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GiveRunningShoes
# 490 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 491 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomReturnHomeMale
# 492 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomReturnHomeFemale
# 493 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetReceivedRunningShoes
# 494 "data/maps/LittlerootTown/scripts.pory"
	end
# 495 "data/maps/LittlerootTown/scripts.pory"

# 496 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetHomeDoorCoordsMale::
# 497 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8009, 5
# 498 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x800A, 8
# 499 "data/maps/LittlerootTown/scripts.pory"
	return
# 500 "data/maps/LittlerootTown/scripts.pory"

# 501 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetHomeDoorCoordsFemale::
# 502 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8009, 14
# 503 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x800A, 8
# 504 "data/maps/LittlerootTown/scripts.pory"
	return
# 505 "data/maps/LittlerootTown/scripts.pory"

# 506 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomNoticePlayerMale::
# 507 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceFasterRight
# 508 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 509 "data/maps/LittlerootTown/scripts.pory"
	return
# 510 "data/maps/LittlerootTown/scripts.pory"

# 511 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomNoticePlayerFemale::
# 512 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceFasterLeft
# 513 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 514 "data/maps/LittlerootTown/scripts.pory"
	return
# 515 "data/maps/LittlerootTown/scripts.pory"

# 516 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale::
# 517 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomApproachPlayer0
# 518 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomApproachPlayer1
# 519 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomApproachPlayerMale2
# 520 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomApproachPlayerMale3
# 521 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomApproachPlayerMale4
# 522 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomApproachPlayerMale5
# 523 "data/maps/LittlerootTown/scripts.pory"
	return
# 524 "data/maps/LittlerootTown/scripts.pory"

# 525 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale::
# 526 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomApproachPlayer0
# 527 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomApproachPlayer1
# 528 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomApproachPlayerFemale2
# 529 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomApproachPlayerFemale3
# 530 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomApproachPlayerFemale4
# 531 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomApproachPlayerFemale5
# 532 "data/maps/LittlerootTown/scripts.pory"
	return
# 533 "data/maps/LittlerootTown/scripts.pory"

# 534 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayer0::
# 535 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 536 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 537 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkUp6
# 538 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 539 "data/maps/LittlerootTown/scripts.pory"
	return
# 540 "data/maps/LittlerootTown/scripts.pory"

# 541 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayer1::
# 542 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 543 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 544 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkUp6
# 545 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 546 "data/maps/LittlerootTown/scripts.pory"
	return
# 547 "data/maps/LittlerootTown/scripts.pory"

# 548 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale2::
# 549 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 550 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 551 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkRight4
# 552 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 553 "data/maps/LittlerootTown/scripts.pory"
	return
# 554 "data/maps/LittlerootTown/scripts.pory"

# 555 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale3::
# 556 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 557 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 558 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkRight5
# 559 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 560 "data/maps/LittlerootTown/scripts.pory"
	return
# 561 "data/maps/LittlerootTown/scripts.pory"

# 562 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale4::
# 563 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 564 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 565 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkRight2
# 566 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 567 "data/maps/LittlerootTown/scripts.pory"
	return
# 568 "data/maps/LittlerootTown/scripts.pory"

# 569 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale5::
# 570 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 571 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 572 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkRight3
# 573 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 574 "data/maps/LittlerootTown/scripts.pory"
	return
# 575 "data/maps/LittlerootTown/scripts.pory"

# 576 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale2::
# 577 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 578 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 579 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkLeft3
# 580 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 581 "data/maps/LittlerootTown/scripts.pory"
	return
# 582 "data/maps/LittlerootTown/scripts.pory"

# 583 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale3::
# 584 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 585 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 586 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkLeft2
# 587 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 588 "data/maps/LittlerootTown/scripts.pory"
	return
# 589 "data/maps/LittlerootTown/scripts.pory"

# 590 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale4::
# 591 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 592 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 593 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkLeft5
# 594 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 595 "data/maps/LittlerootTown/scripts.pory"
	return
# 596 "data/maps/LittlerootTown/scripts.pory"

# 597 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale5::
# 598 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 599 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 600 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkLeft4
# 601 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 602 "data/maps/LittlerootTown/scripts.pory"
	return
# 603 "data/maps/LittlerootTown/scripts.pory"

# 604 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale::
# 605 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomReturnHome0
# 606 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomReturnHome1
# 607 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomReturnHomeMale2
# 608 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomReturnHomeMale3
# 609 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomReturnHomeMale4
# 610 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomReturnHomeMale5
# 611 "data/maps/LittlerootTown/scripts.pory"
	return
# 612 "data/maps/LittlerootTown/scripts.pory"

# 613 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale::
# 614 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomReturnHome0
# 615 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomReturnHome1
# 616 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomReturnHomeFemale2
# 617 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomReturnHomeFemale3
# 618 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomReturnHomeFemale4
# 619 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomReturnHomeFemale5
# 620 "data/maps/LittlerootTown/scripts.pory"
	return
# 621 "data/maps/LittlerootTown/scripts.pory"

# 622 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHome0::
# 623 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkDown5
# 624 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 625 "data/maps/LittlerootTown/scripts.pory"
	return
# 626 "data/maps/LittlerootTown/scripts.pory"

# 627 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHome1::
# 628 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkDown5
# 629 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 630 "data/maps/LittlerootTown/scripts.pory"
	return
# 631 "data/maps/LittlerootTown/scripts.pory"

# 632 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale2::
# 633 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale2
# 634 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 635 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 636 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 637 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkUp
# 638 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 639 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 640 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 641 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 642 "data/maps/LittlerootTown/scripts.pory"
	return
# 643 "data/maps/LittlerootTown/scripts.pory"

# 644 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale3::
# 645 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale3
# 646 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 647 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 648 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 649 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkUp
# 650 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 651 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 652 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 653 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 654 "data/maps/LittlerootTown/scripts.pory"
	return
# 655 "data/maps/LittlerootTown/scripts.pory"

# 656 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale4::
# 657 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale4
# 658 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 659 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 660 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 661 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkUp
# 662 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 663 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 664 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 665 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 666 "data/maps/LittlerootTown/scripts.pory"
	return
# 667 "data/maps/LittlerootTown/scripts.pory"

# 668 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale5::
# 669 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale5
# 670 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 671 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 672 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 673 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkUp
# 674 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 675 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 676 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 677 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 678 "data/maps/LittlerootTown/scripts.pory"
	return
# 679 "data/maps/LittlerootTown/scripts.pory"

# 680 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale2::
# 681 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale2
# 682 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 683 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 684 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 685 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkUp
# 686 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 687 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 688 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 689 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 690 "data/maps/LittlerootTown/scripts.pory"
	return
# 691 "data/maps/LittlerootTown/scripts.pory"

# 692 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale3::
# 693 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale3
# 694 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 695 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 696 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 697 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkUp
# 698 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 699 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 700 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 701 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 702 "data/maps/LittlerootTown/scripts.pory"
	return
# 703 "data/maps/LittlerootTown/scripts.pory"

# 704 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale4::
# 705 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale4
# 706 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 707 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 708 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 709 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkUp
# 710 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 711 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 712 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 713 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 714 "data/maps/LittlerootTown/scripts.pory"
	return
# 715 "data/maps/LittlerootTown/scripts.pory"

# 716 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale5::
# 717 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale5
# 718 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 719 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 720 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 721 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkUp
# 722 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 723 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 724 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 725 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 726 "data/maps/LittlerootTown/scripts.pory"
	return
# 727 "data/maps/LittlerootTown/scripts.pory"

# 728 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale2:
# 729 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 730 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 731 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 732 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 733 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 734 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 735 "data/maps/LittlerootTown/scripts.pory"

# 736 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale3:
# 737 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 738 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 739 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 740 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 741 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 742 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 743 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 744 "data/maps/LittlerootTown/scripts.pory"

# 745 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale4:
# 746 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 747 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 748 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 749 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 750 "data/maps/LittlerootTown/scripts.pory"

# 751 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale5:
# 752 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 753 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 754 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 755 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 756 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 757 "data/maps/LittlerootTown/scripts.pory"

# 758 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale2:
# 759 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 760 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 761 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 762 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 763 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 764 "data/maps/LittlerootTown/scripts.pory"

# 765 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale3:
# 766 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 767 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 768 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 769 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 770 "data/maps/LittlerootTown/scripts.pory"

# 771 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale4:
# 772 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 773 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 774 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 775 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 776 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 777 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 778 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 779 "data/maps/LittlerootTown/scripts.pory"

# 780 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale5:
# 781 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 782 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 783 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 784 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 785 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 786 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 787 "data/maps/LittlerootTown/scripts.pory"

# 788 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Mom::
# 789 "data/maps/LittlerootTown/scripts.pory"
	lock
# 790 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 791 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 792 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetHomeDoorCoordsMale
# 793 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetHomeDoorCoordsFemale
# 794 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GiveRunningShoes
# 795 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceFasterUp
# 796 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 797 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 798 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 799 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkUp
# 800 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 801 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 802 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 803 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 804 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetReceivedRunningShoes
# 805 "data/maps/LittlerootTown/scripts.pory"
	end
# 806 "data/maps/LittlerootTown/scripts.pory"

# 807 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetReceivedRunningShoes::
# 808 "data/maps/LittlerootTown/scripts.pory"
	removeobject LOCALID_MOM
# 809 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 4
# 810 "data/maps/LittlerootTown/scripts.pory"
	release
# 811 "data/maps/LittlerootTown/scripts.pory"
	end
# 812 "data/maps/LittlerootTown/scripts.pory"

# 813 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoes::
# 814 "data/maps/LittlerootTown/scripts.pory"
	speakername CommonText_Mom
# 815 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_WearTheseRunningShoes, MSGBOX_DEFAULT
# 816 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 817 "data/maps/LittlerootTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 818 "data/maps/LittlerootTown/scripts.pory"
	message LittlerootTown_Text_SwitchShoesWithRunningShoes
# 819 "data/maps/LittlerootTown/scripts.pory"
	waitfanfare
# 820 "data/maps/LittlerootTown/scripts.pory"
	speakername CommonText_Mom
# 821 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ExplainRunningShoes, MSGBOX_DEFAULT
# 822 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 823 "data/maps/LittlerootTown/scripts.pory"
	giveitem ITEM_OLD_ROD
# 824 "data/maps/LittlerootTown/scripts.pory"
	speakername CommonText_Mom
# 825 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ComeHomeIfAnythingHappens, MSGBOX_DEFAULT
# 826 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 827 "data/maps/LittlerootTown/scripts.pory"
	delay 30
# 828 "data/maps/LittlerootTown/scripts.pory"
	return
# 829 "data/maps/LittlerootTown/scripts.pory"

# 830 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_OurNewHomeLetsGoInside:
# 831 "data/maps/LittlerootTown/scripts.pory"
	.string "{PLAYER}, we're here, honey!\p"
# 832 "data/maps/LittlerootTown/scripts.pory"
	.string "It must be tiring riding with our things\n"
# 833 "data/maps/LittlerootTown/scripts.pory"
	.string "in the moving truck.\p"
# 834 "data/maps/LittlerootTown/scripts.pory"
	.string "Well, this is Littleroot Town.\p"
# 835 "data/maps/LittlerootTown/scripts.pory"
	.string "How do you like it?\n"
# 836 "data/maps/LittlerootTown/scripts.pory"
	.string "This is our new home!\p"
# 837 "data/maps/LittlerootTown/scripts.pory"
	.string "It has a quaint feel, but it seems to be\n"
# 838 "data/maps/LittlerootTown/scripts.pory"
	.string "an easy place to live, don't you think?\p"
# 839 "data/maps/LittlerootTown/scripts.pory"
	.string "And, you get your own room, {PLAYER}!\n"
# 840 "data/maps/LittlerootTown/scripts.pory"
	.string "Let's go inside.$"
# 841 "data/maps/LittlerootTown/scripts.pory"

# 842 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_WaitPlayer:
# 843 "data/maps/LittlerootTown/scripts.pory"
	.string "Wait, {PLAYER}!$"
# 844 "data/maps/LittlerootTown/scripts.pory"

# 845 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_WearTheseRunningShoes:
# 846 "data/maps/LittlerootTown/scripts.pory"
	.string "{PLAYER}! {PLAYER}! Did you\n"
# 847 "data/maps/LittlerootTown/scripts.pory"
	.string "introduce yourself to Prof. Birch?\p"
# 848 "data/maps/LittlerootTown/scripts.pory"
	.string "Oh! What an adorable Pokémon!\n"
# 849 "data/maps/LittlerootTown/scripts.pory"
	.string "You got it from Prof. Birch. How nice!\p"
# 850 "data/maps/LittlerootTown/scripts.pory"
	.string "You're your father's child, all right.\n"
# 851 "data/maps/LittlerootTown/scripts.pory"
	.string "You look good together with Pokémon!\p"
# 852 "data/maps/LittlerootTown/scripts.pory"
	.string "Here, honey! If you're going out on an\n"
# 853 "data/maps/LittlerootTown/scripts.pory"
	.string "adventure, wear these new shoes I got\l"
# 854 "data/maps/LittlerootTown/scripts.pory"
	.string "for you!$"
# 855 "data/maps/LittlerootTown/scripts.pory"

# 856 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_SwitchShoesWithRunningShoes:
# 857 "data/maps/LittlerootTown/scripts.pory"
	.string "{PLAYER} switched shoes with the\n"
# 858 "data/maps/LittlerootTown/scripts.pory"
	.string "new pair from Mom!$"
# 859 "data/maps/LittlerootTown/scripts.pory"

# 860 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ExplainRunningShoes:
# 861 "data/maps/LittlerootTown/scripts.pory"
	.string "{PLAYER}, those shoes look so\n"
# 862 "data/maps/LittlerootTown/scripts.pory"
	.string "stylish on you!\p"
# 863 "data/maps/LittlerootTown/scripts.pory"
	.string "Oh!\n"
# 864 "data/maps/LittlerootTown/scripts.pory"
	.string "Let me give you your old fishing rod.$"
# 865 "data/maps/LittlerootTown/scripts.pory"

# 866 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ComeHomeIfAnythingHappens:
# 867 "data/maps/LittlerootTown/scripts.pory"
	.string "… … … … … … … …\n"
# 868 "data/maps/LittlerootTown/scripts.pory"
	.string "… … … … … … … …\p"
# 869 "data/maps/LittlerootTown/scripts.pory"
	.string "To think that you have your very own\n"
# 870 "data/maps/LittlerootTown/scripts.pory"
	.string "Pokémon now…\l"
# 871 "data/maps/LittlerootTown/scripts.pory"
	.string "Your father will be overjoyed.\p"
# 872 "data/maps/LittlerootTown/scripts.pory"
	.string "…But please be careful.\n"
# 873 "data/maps/LittlerootTown/scripts.pory"
	.string "If anything happens, you can come home.\p"
# 874 "data/maps/LittlerootTown/scripts.pory"
	.string "Go on, go get them, honey!$"
# 875 "data/maps/LittlerootTown/scripts.pory"

# 876 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_Simulation:
# 877 "data/maps/LittlerootTown/scripts.pory"
	.string "Experts have said that we could\n"
# 878 "data/maps/LittlerootTown/scripts.pory"
	.string "be living inside of a simulation.\p"
# 879 "data/maps/LittlerootTown/scripts.pory"
	.string "The power of science is staggering!$"
# 880 "data/maps/LittlerootTown/scripts.pory"

# 881 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_BirchSpendsDaysInLab:
# 882 "data/maps/LittlerootTown/scripts.pory"
	.string "Prof. Birch spends days in his Lab\n"
# 883 "data/maps/LittlerootTown/scripts.pory"
	.string "studying, then he'll suddenly go out in\l"
# 884 "data/maps/LittlerootTown/scripts.pory"
	.string "the wild to do more research…\p"
# 885 "data/maps/LittlerootTown/scripts.pory"
	.string "When does Prof. Birch spend time\n"
# 886 "data/maps/LittlerootTown/scripts.pory"
	.string "at home?$"
# 887 "data/maps/LittlerootTown/scripts.pory"

# 888 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut:
# 889 "data/maps/LittlerootTown/scripts.pory"
	.string "Um, um, um!\p"
# 890 "data/maps/LittlerootTown/scripts.pory"
	.string "If you go outside and go in the grass,\n"
# 891 "data/maps/LittlerootTown/scripts.pory"
	.string "wild Pokémon will jump out!$"
# 892 "data/maps/LittlerootTown/scripts.pory"

# 893 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_DangerousIfYouDontHavePokemon:
# 894 "data/maps/LittlerootTown/scripts.pory"
	.string "It's dangerous if you don't have\n"
# 895 "data/maps/LittlerootTown/scripts.pory"
	.string "your own Pokémon.$"
# 896 "data/maps/LittlerootTown/scripts.pory"

# 897 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_CanYouGoSeeWhatsHappening:
# 898 "data/maps/LittlerootTown/scripts.pory"
	.string "Um, hi!\p"
# 899 "data/maps/LittlerootTown/scripts.pory"
	.string "There are scary Pokémon outside!\n"
# 900 "data/maps/LittlerootTown/scripts.pory"
	.string "I can hear their cries!\p"
# 901 "data/maps/LittlerootTown/scripts.pory"
	.string "I want to go see what's going on,\n"
# 902 "data/maps/LittlerootTown/scripts.pory"
	.string "but I don't have any Pokémon…\p"
# 903 "data/maps/LittlerootTown/scripts.pory"
	.string "Can you go see what's happening\n"
# 904 "data/maps/LittlerootTown/scripts.pory"
	.string "for me?$"
# 905 "data/maps/LittlerootTown/scripts.pory"

# 906 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_YouSavedBirch:
# 907 "data/maps/LittlerootTown/scripts.pory"
	.string "You saved Prof. Birch!\n"
# 908 "data/maps/LittlerootTown/scripts.pory"
	.string "I'm so glad!$"
# 909 "data/maps/LittlerootTown/scripts.pory"

# 910 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_GoodLuckCatchingPokemon:
# 911 "data/maps/LittlerootTown/scripts.pory"
	.string "Are you going to catch Pokémon?\n"
# 912 "data/maps/LittlerootTown/scripts.pory"
	.string "Good luck!$"
# 913 "data/maps/LittlerootTown/scripts.pory"

# 914 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_TownSign:
# 915 "data/maps/LittlerootTown/scripts.pory"
	.string "Littleroot Town\n"
# 916 "data/maps/LittlerootTown/scripts.pory"
	.string "“A town that can't be shaded any hue.”$"
# 917 "data/maps/LittlerootTown/scripts.pory"

# 918 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ProfBirchsLab:
# 919 "data/maps/LittlerootTown/scripts.pory"
	.string "Prof. Birch's Pokémon Lab$"
# 920 "data/maps/LittlerootTown/scripts.pory"

# 921 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_PlayersHouse:
# 922 "data/maps/LittlerootTown/scripts.pory"
	.string "{PLAYER}'s House$"
# 923 "data/maps/LittlerootTown/scripts.pory"

# 924 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ProfBirchsHouse:
# 925 "data/maps/LittlerootTown/scripts.pory"
	.string "Prof. Birch's House$"
# 926 "data/maps/LittlerootTown/scripts.pory"

# 927 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_BirchSomethingToShowYouAtLab:
# 928 "data/maps/LittlerootTown/scripts.pory"
	.string "Well, well, {PLAYER}{KUN}!\n"
# 929 "data/maps/LittlerootTown/scripts.pory"
	.string "That was good work out there!\p"
# 930 "data/maps/LittlerootTown/scripts.pory"
	.string "I knew there was something special\n"
# 931 "data/maps/LittlerootTown/scripts.pory"
	.string "about you when I first saw you,\l"
# 932 "data/maps/LittlerootTown/scripts.pory"
	.string "but I never expected this.\p"
# 933 "data/maps/LittlerootTown/scripts.pory"
	.string "Oh, yes. Do you still have the Pokédex\n"
# 934 "data/maps/LittlerootTown/scripts.pory"
	.string "I gave you?\p"
# 935 "data/maps/LittlerootTown/scripts.pory"
	.string "I have something to show you.\n"
# 936 "data/maps/LittlerootTown/scripts.pory"
	.string "Let's go to my Lab.$"
