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
	speakername CommonText_Mom
# 174 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_OurNewHomeLetsGoInside, MSGBOX_DEFAULT
# 175 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 176 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachDoor
# 177 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PlayerApproachDoor
# 178 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 179 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 180 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 181 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomEnterHouse
# 182 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp2
# 183 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 184 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
# 185 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 3
# 186 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, 0
# 187 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 188 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 189 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_FAT_MAN
# 190 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 191 "data/maps/LittlerootTown/scripts.pory"
	return
# 192 "data/maps/LittlerootTown/scripts.pory"

# 193 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerAtTruck:
# 194 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 195 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_left
# 196 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 197 "data/maps/LittlerootTown/scripts.pory"

# 198 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachDoor:
# 199 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 200 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 201 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 202 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 203 "data/maps/LittlerootTown/scripts.pory"

# 204 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomEnterHouse:
# 205 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 206 "data/maps/LittlerootTown/scripts.pory"
	set_invisible
# 207 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 208 "data/maps/LittlerootTown/scripts.pory"

# 209 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PlayerApproachDoor:
# 210 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 211 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 212 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 213 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 214 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 215 "data/maps/LittlerootTown/scripts.pory"

# 216 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PlayerStepOffTruck:
# 217 "data/maps/LittlerootTown/scripts.pory"
	jump_right
# 218 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 219 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 220 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 221 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 222 "data/maps/LittlerootTown/scripts.pory"

# 223 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BeginDexUpgradeScene::
# 224 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 225 "data/maps/LittlerootTown/scripts.pory"
	playse SE_PIN
# 226 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_ExclamationMark
# 227 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 228 "data/maps/LittlerootTown/scripts.pory"
	delay 80
# 229 "data/maps/LittlerootTown/scripts.pory"
	speakername CommonText_Birch
# 230 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_BirchSomethingToShowYouAtLab, MSGBOX_DEFAULT
# 231 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 232 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_RIVAL
# 233 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH
# 234 "data/maps/LittlerootTown/scripts.pory"
	delay 20
# 235 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 236 "data/maps/LittlerootTown/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB, 6, 5
# 237 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 238 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 239 "data/maps/LittlerootTown/scripts.pory"
	end
# 240 "data/maps/LittlerootTown/scripts.pory"

# 241 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnWarp:
# 242 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_SetRivalBirchPosForDexUpgrade
# 243 "data/maps/LittlerootTown/scripts.pory"
	.2byte 0
# 244 "data/maps/LittlerootTown/scripts.pory"

# 245 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgrade::
# 246 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_BIRCH
# 247 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_RIVAL
# 248 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 249 "data/maps/LittlerootTown/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeMale
# 250 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeFemale
# 251 "data/maps/LittlerootTown/scripts.pory"
	end
# 252 "data/maps/LittlerootTown/scripts.pory"

# 253 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeMale::
# 254 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_RIVAL, 6, 10
# 255 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_BIRCH, 5, 10
# 256 "data/maps/LittlerootTown/scripts.pory"
	end
# 257 "data/maps/LittlerootTown/scripts.pory"

# 258 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeFemale::
# 259 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_RIVAL, 13, 10
# 260 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_BIRCH, 14, 10
# 261 "data/maps/LittlerootTown/scripts.pory"
	end
# 262 "data/maps/LittlerootTown/scripts.pory"

# 263 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_FatMan::
# 264 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanUsePCToStoreItems, MSGBOX_NPC
# 265 "data/maps/LittlerootTown/scripts.pory"
	end
# 266 "data/maps/LittlerootTown/scripts.pory"

# 267 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Boy::
# 268 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_BirchSpendsDaysInLab, MSGBOX_NPC
# 269 "data/maps/LittlerootTown/scripts.pory"
	end
# 270 "data/maps/LittlerootTown/scripts.pory"

# 271 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Twin::
# 272 "data/maps/LittlerootTown/scripts.pory"
	lock
# 273 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 274 "data/maps/LittlerootTown/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, LittlerootTown_EventScript_GoodLuck
# 275 "data/maps/LittlerootTown/scripts.pory"
	goto_if_set FLAG_RESCUED_BIRCH, LittlerootTown_EventScript_YouSavedBirch
# 276 "data/maps/LittlerootTown/scripts.pory"
	goto_if_ne VAR_LITTLEROOT_TOWN_STATE, 0, LittlerootTown_EventScript_GoSaveBirch
# 277 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut, MSGBOX_DEFAULT
# 278 "data/maps/LittlerootTown/scripts.pory"
	release
# 279 "data/maps/LittlerootTown/scripts.pory"
	end
# 280 "data/maps/LittlerootTown/scripts.pory"

# 281 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoSaveBirch::
# 282 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 283 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanYouGoSeeWhatsHappening, MSGBOX_DEFAULT
# 284 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 285 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_FaceOriginalDirection
# 286 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 287 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 288 "data/maps/LittlerootTown/scripts.pory"
	release
# 289 "data/maps/LittlerootTown/scripts.pory"
	end
# 290 "data/maps/LittlerootTown/scripts.pory"

# 291 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_YouSavedBirch::
# 292 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 293 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_YouSavedBirch, MSGBOX_DEFAULT
# 294 "data/maps/LittlerootTown/scripts.pory"
	release
# 295 "data/maps/LittlerootTown/scripts.pory"
	end
# 296 "data/maps/LittlerootTown/scripts.pory"

# 297 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoodLuck::
# 298 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_GoodLuckCatchingPokemon, MSGBOX_DEFAULT
# 299 "data/maps/LittlerootTown/scripts.pory"
	release
# 300 "data/maps/LittlerootTown/scripts.pory"
	end
# 301 "data/maps/LittlerootTown/scripts.pory"

# 302 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerLeft::
# 303 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 304 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinApproachPlayerLeft
# 305 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 306 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemon
# 307 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinReturnLeft
# 308 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 309 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 310 "data/maps/LittlerootTown/scripts.pory"
	end
# 311 "data/maps/LittlerootTown/scripts.pory"

# 312 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_DangerousWithoutPokemon::
# 313 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut, MSGBOX_DEFAULT
# 314 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 315 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinPushPlayerFromRoute
# 316 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PushPlayerBackFromRoute
# 317 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 318 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_DangerousIfYouDontHavePokemon, MSGBOX_DEFAULT
# 319 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 320 "data/maps/LittlerootTown/scripts.pory"
	return
# 321 "data/maps/LittlerootTown/scripts.pory"

# 322 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinApproachPlayerLeft:
# 323 "data/maps/LittlerootTown/scripts.pory"
	face_right
# 324 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 325 "data/maps/LittlerootTown/scripts.pory"
	disable_jump_landing_ground_effect
# 326 "data/maps/LittlerootTown/scripts.pory"
	jump_in_place_right
# 327 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 328 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 329 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 330 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 331 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 332 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 333 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 334 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_left
# 335 "data/maps/LittlerootTown/scripts.pory"
	face_down
# 336 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 337 "data/maps/LittlerootTown/scripts.pory"

# 338 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinPushPlayerFromRoute:
# 339 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 340 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 341 "data/maps/LittlerootTown/scripts.pory"

# 342 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinReturnLeft:
# 343 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 344 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 345 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 346 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 347 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 348 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 349 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 350 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 351 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_down
# 352 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 353 "data/maps/LittlerootTown/scripts.pory"

# 354 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PushPlayerBackFromRoute:
# 355 "data/maps/LittlerootTown/scripts.pory"
	lock_facing_direction
# 356 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 357 "data/maps/LittlerootTown/scripts.pory"
	unlock_facing_direction
# 358 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 359 "data/maps/LittlerootTown/scripts.pory"

# 360 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerRight::
# 361 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 362 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinApproachPlayerRight
# 363 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 364 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemon
# 365 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinReturnRight
# 366 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 367 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 368 "data/maps/LittlerootTown/scripts.pory"
	end
# 369 "data/maps/LittlerootTown/scripts.pory"

# 370 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinApproachPlayerRight:
# 371 "data/maps/LittlerootTown/scripts.pory"
	face_right
# 372 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 373 "data/maps/LittlerootTown/scripts.pory"
	disable_jump_landing_ground_effect
# 374 "data/maps/LittlerootTown/scripts.pory"
	jump_in_place_right
# 375 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 376 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 377 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 378 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 379 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 380 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 381 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 382 "data/maps/LittlerootTown/scripts.pory"
	face_down
# 383 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 384 "data/maps/LittlerootTown/scripts.pory"

# 385 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinReturnRight:
# 386 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 387 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 388 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 389 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 390 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 391 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_down
# 392 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 393 "data/maps/LittlerootTown/scripts.pory"

# 394 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoSaveBirchTrigger::
# 395 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 396 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_WalkInPlaceFasterRight
# 397 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 398 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 399 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 400 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 401 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanYouGoSeeWhatsHappening, MSGBOX_DEFAULT
# 402 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 403 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_FaceOriginalDirection
# 404 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 405 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 406 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 407 "data/maps/LittlerootTown/scripts.pory"
	end
# 408 "data/maps/LittlerootTown/scripts.pory"

# 409 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_TownSign::
# 410 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_TownSign, MSGBOX_SIGN
# 411 "data/maps/LittlerootTown/scripts.pory"
	end
# 412 "data/maps/LittlerootTown/scripts.pory"

# 413 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BirchsLabSign::
# 414 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsLab, MSGBOX_SIGN
# 415 "data/maps/LittlerootTown/scripts.pory"
	end
# 416 "data/maps/LittlerootTown/scripts.pory"

# 417 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BrendansHouseSign::
# 418 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 419 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 420 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_PlayersHouseSignMale
# 421 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_BirchsHouseSignFemale
# 422 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 423 "data/maps/LittlerootTown/scripts.pory"
	end
# 424 "data/maps/LittlerootTown/scripts.pory"

# 425 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_PlayersHouseSignMale::
# 426 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_PlayersHouse, MSGBOX_DEFAULT
# 427 "data/maps/LittlerootTown/scripts.pory"
	return
# 428 "data/maps/LittlerootTown/scripts.pory"

# 429 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BirchsHouseSignFemale::
# 430 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsHouse, MSGBOX_DEFAULT
# 431 "data/maps/LittlerootTown/scripts.pory"
	return
# 432 "data/maps/LittlerootTown/scripts.pory"

# 433 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MaysHouseSign::
# 434 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 435 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 436 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_BirchsHouseSignMale
# 437 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_PlayersHouseSignFemale
# 438 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 439 "data/maps/LittlerootTown/scripts.pory"
	end
# 440 "data/maps/LittlerootTown/scripts.pory"

# 441 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BirchsHouseSignMale::
# 442 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsHouse, MSGBOX_DEFAULT
# 443 "data/maps/LittlerootTown/scripts.pory"
	return
# 444 "data/maps/LittlerootTown/scripts.pory"

# 445 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_PlayersHouseSignFemale::
# 446 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_PlayersHouse, MSGBOX_DEFAULT
# 447 "data/maps/LittlerootTown/scripts.pory"
	return
# 448 "data/maps/LittlerootTown/scripts.pory"

# 449 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger0::
# 450 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 451 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 0
# 452 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_MOM, 10, 9
# 453 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 454 "data/maps/LittlerootTown/scripts.pory"
	end
# 455 "data/maps/LittlerootTown/scripts.pory"

# 456 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger1::
# 457 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 458 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 1
# 459 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_MOM, 11, 9
# 460 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 461 "data/maps/LittlerootTown/scripts.pory"
	end
# 462 "data/maps/LittlerootTown/scripts.pory"

# 463 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger2::
# 464 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 465 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 2
# 466 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 467 "data/maps/LittlerootTown/scripts.pory"
	end
# 468 "data/maps/LittlerootTown/scripts.pory"

# 469 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger3::
# 470 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 471 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 3
# 472 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 473 "data/maps/LittlerootTown/scripts.pory"
	end
# 474 "data/maps/LittlerootTown/scripts.pory"

# 475 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger4::
# 476 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 477 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 4
# 478 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 479 "data/maps/LittlerootTown/scripts.pory"
	end
# 480 "data/maps/LittlerootTown/scripts.pory"

# 481 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger5::
# 482 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 483 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 5
# 484 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 485 "data/maps/LittlerootTown/scripts.pory"
	end
# 486 "data/maps/LittlerootTown/scripts.pory"

# 487 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger::
# 488 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 489 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomNoticePlayerMale
# 490 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomNoticePlayerFemale
# 491 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 492 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetHomeDoorCoordsMale
# 493 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetHomeDoorCoordsFemale
# 494 "data/maps/LittlerootTown/scripts.pory"
	speakername CommonText_Mom
# 495 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_WaitPlayer, MSGBOX_DEFAULT
# 496 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 497 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 498 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomApproachPlayerMale
# 499 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomApproachPlayerFemale
# 500 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GiveRunningShoes
# 501 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 502 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomReturnHomeMale
# 503 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomReturnHomeFemale
# 504 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetReceivedRunningShoes
# 505 "data/maps/LittlerootTown/scripts.pory"
	end
# 506 "data/maps/LittlerootTown/scripts.pory"

# 507 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetHomeDoorCoordsMale::
# 508 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8009, 5
# 509 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x800A, 8
# 510 "data/maps/LittlerootTown/scripts.pory"
	return
# 511 "data/maps/LittlerootTown/scripts.pory"

# 512 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetHomeDoorCoordsFemale::
# 513 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8009, 14
# 514 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x800A, 8
# 515 "data/maps/LittlerootTown/scripts.pory"
	return
# 516 "data/maps/LittlerootTown/scripts.pory"

# 517 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomNoticePlayerMale::
# 518 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceFasterRight
# 519 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 520 "data/maps/LittlerootTown/scripts.pory"
	return
# 521 "data/maps/LittlerootTown/scripts.pory"

# 522 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomNoticePlayerFemale::
# 523 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceFasterLeft
# 524 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 525 "data/maps/LittlerootTown/scripts.pory"
	return
# 526 "data/maps/LittlerootTown/scripts.pory"

# 527 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale::
# 528 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomApproachPlayer0
# 529 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomApproachPlayer1
# 530 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomApproachPlayerMale2
# 531 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomApproachPlayerMale3
# 532 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomApproachPlayerMale4
# 533 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomApproachPlayerMale5
# 534 "data/maps/LittlerootTown/scripts.pory"
	return
# 535 "data/maps/LittlerootTown/scripts.pory"

# 536 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale::
# 537 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomApproachPlayer0
# 538 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomApproachPlayer1
# 539 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomApproachPlayerFemale2
# 540 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomApproachPlayerFemale3
# 541 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomApproachPlayerFemale4
# 542 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomApproachPlayerFemale5
# 543 "data/maps/LittlerootTown/scripts.pory"
	return
# 544 "data/maps/LittlerootTown/scripts.pory"

# 545 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayer0::
# 546 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 547 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 548 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkUp6
# 549 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 550 "data/maps/LittlerootTown/scripts.pory"
	return
# 551 "data/maps/LittlerootTown/scripts.pory"

# 552 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayer1::
# 553 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 554 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 555 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkUp6
# 556 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 557 "data/maps/LittlerootTown/scripts.pory"
	return
# 558 "data/maps/LittlerootTown/scripts.pory"

# 559 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale2::
# 560 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 561 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 562 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale2
# 563 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 564 "data/maps/LittlerootTown/scripts.pory"
	return
# 565 "data/maps/LittlerootTown/scripts.pory"

# 566 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale3::
# 567 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 568 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 569 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale3
# 570 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 571 "data/maps/LittlerootTown/scripts.pory"
	return
# 572 "data/maps/LittlerootTown/scripts.pory"

# 573 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale4::
# 574 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 575 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 576 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale4
# 577 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 578 "data/maps/LittlerootTown/scripts.pory"
	return
# 579 "data/maps/LittlerootTown/scripts.pory"

# 580 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale5::
# 581 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 582 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 583 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale5
# 584 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 585 "data/maps/LittlerootTown/scripts.pory"
	return
# 586 "data/maps/LittlerootTown/scripts.pory"

# 587 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale2::
# 588 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 589 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 590 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale2
# 591 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 592 "data/maps/LittlerootTown/scripts.pory"
	return
# 593 "data/maps/LittlerootTown/scripts.pory"

# 594 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale3::
# 595 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 596 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 597 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale3
# 598 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 599 "data/maps/LittlerootTown/scripts.pory"
	return
# 600 "data/maps/LittlerootTown/scripts.pory"

# 601 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale4::
# 602 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 603 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 604 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale4
# 605 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 606 "data/maps/LittlerootTown/scripts.pory"
	return
# 607 "data/maps/LittlerootTown/scripts.pory"

# 608 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale5::
# 609 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 610 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 611 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale5
# 612 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 613 "data/maps/LittlerootTown/scripts.pory"
	return
# 614 "data/maps/LittlerootTown/scripts.pory"

# 615 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale::
# 616 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomReturnHome0
# 617 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomReturnHome1
# 618 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomReturnHomeMale2
# 619 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomReturnHomeMale3
# 620 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomReturnHomeMale4
# 621 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomReturnHomeMale5
# 622 "data/maps/LittlerootTown/scripts.pory"
	return
# 623 "data/maps/LittlerootTown/scripts.pory"

# 624 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale::
# 625 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomReturnHome0
# 626 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomReturnHome1
# 627 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomReturnHomeFemale2
# 628 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomReturnHomeFemale3
# 629 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomReturnHomeFemale4
# 630 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomReturnHomeFemale5
# 631 "data/maps/LittlerootTown/scripts.pory"
	return
# 632 "data/maps/LittlerootTown/scripts.pory"

# 633 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHome0::
# 634 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHome0
# 635 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 636 "data/maps/LittlerootTown/scripts.pory"
	return
# 637 "data/maps/LittlerootTown/scripts.pory"

# 638 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHome1::
# 639 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHome0
# 640 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 641 "data/maps/LittlerootTown/scripts.pory"
	return
# 642 "data/maps/LittlerootTown/scripts.pory"

# 643 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale2::
# 644 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale2
# 645 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 646 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 647 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 648 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkUp
# 649 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 650 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 651 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 652 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 653 "data/maps/LittlerootTown/scripts.pory"
	return
# 654 "data/maps/LittlerootTown/scripts.pory"

# 655 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale3::
# 656 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale3
# 657 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 658 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 659 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 660 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkUp
# 661 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 662 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 663 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 664 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 665 "data/maps/LittlerootTown/scripts.pory"
	return
# 666 "data/maps/LittlerootTown/scripts.pory"

# 667 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale4::
# 668 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale4
# 669 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 670 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 671 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 672 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkUp
# 673 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 674 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 675 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 676 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 677 "data/maps/LittlerootTown/scripts.pory"
	return
# 678 "data/maps/LittlerootTown/scripts.pory"

# 679 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale5::
# 680 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale5
# 681 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 682 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 683 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 684 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkUp
# 685 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 686 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 687 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 688 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 689 "data/maps/LittlerootTown/scripts.pory"
	return
# 690 "data/maps/LittlerootTown/scripts.pory"

# 691 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale2::
# 692 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale2
# 693 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 694 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 695 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 696 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkUp
# 697 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 698 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 699 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 700 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 701 "data/maps/LittlerootTown/scripts.pory"
	return
# 702 "data/maps/LittlerootTown/scripts.pory"

# 703 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale3::
# 704 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale3
# 705 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 706 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 707 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 708 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkUp
# 709 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 710 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 711 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 712 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 713 "data/maps/LittlerootTown/scripts.pory"
	return
# 714 "data/maps/LittlerootTown/scripts.pory"

# 715 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale4::
# 716 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale4
# 717 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 718 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 719 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 720 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkUp
# 721 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 722 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 723 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 724 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 725 "data/maps/LittlerootTown/scripts.pory"
	return
# 726 "data/maps/LittlerootTown/scripts.pory"

# 727 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale5::
# 728 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale5
# 729 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 730 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 731 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 732 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkUp
# 733 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 734 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 735 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 736 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 737 "data/maps/LittlerootTown/scripts.pory"
	return
# 738 "data/maps/LittlerootTown/scripts.pory"

# 739 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale2:
# 740 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 741 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 742 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 743 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 744 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 745 "data/maps/LittlerootTown/scripts.pory"

# 746 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale3:
# 747 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 748 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 749 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 750 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 751 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 752 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 753 "data/maps/LittlerootTown/scripts.pory"

# 754 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale4:
# 755 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 756 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 757 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 758 "data/maps/LittlerootTown/scripts.pory"

# 759 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale5:
# 760 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 761 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 762 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 763 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 764 "data/maps/LittlerootTown/scripts.pory"

# 765 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale2:
# 766 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 767 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 768 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 769 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 770 "data/maps/LittlerootTown/scripts.pory"

# 771 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale3:
# 772 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 773 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 774 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 775 "data/maps/LittlerootTown/scripts.pory"

# 776 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale4:
# 777 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 778 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 779 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 780 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 781 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 782 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 783 "data/maps/LittlerootTown/scripts.pory"

# 784 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale5:
# 785 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 786 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 787 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 788 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 789 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 790 "data/maps/LittlerootTown/scripts.pory"

# 791 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHome0:
# 792 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 793 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 794 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 795 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 796 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 797 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 798 "data/maps/LittlerootTown/scripts.pory"

# 799 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale2:
# 800 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 801 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 802 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 803 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 804 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 805 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 806 "data/maps/LittlerootTown/scripts.pory"

# 807 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale3:
# 808 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 809 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 810 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 811 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 812 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 813 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 814 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 815 "data/maps/LittlerootTown/scripts.pory"

# 816 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale4:
# 817 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 818 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 819 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 820 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 821 "data/maps/LittlerootTown/scripts.pory"

# 822 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale5:
# 823 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 824 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 825 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 826 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 827 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 828 "data/maps/LittlerootTown/scripts.pory"

# 829 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale2:
# 830 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 831 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 832 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 833 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 834 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 835 "data/maps/LittlerootTown/scripts.pory"

# 836 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale3:
# 837 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 838 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 839 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 840 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 841 "data/maps/LittlerootTown/scripts.pory"

# 842 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale4:
# 843 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 844 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 845 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 846 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 847 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 848 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 849 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 850 "data/maps/LittlerootTown/scripts.pory"

# 851 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale5:
# 852 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 853 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 854 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 855 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 856 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 857 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 858 "data/maps/LittlerootTown/scripts.pory"

# 859 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Mom::
# 860 "data/maps/LittlerootTown/scripts.pory"
	lock
# 861 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 862 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 863 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetHomeDoorCoordsMale
# 864 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetHomeDoorCoordsFemale
# 865 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GiveRunningShoes
# 866 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceFasterUp
# 867 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 868 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 869 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 870 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkUp
# 871 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 872 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 873 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 874 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 875 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetReceivedRunningShoes
# 876 "data/maps/LittlerootTown/scripts.pory"
	end
# 877 "data/maps/LittlerootTown/scripts.pory"

# 878 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetReceivedRunningShoes::
# 879 "data/maps/LittlerootTown/scripts.pory"
	removeobject LOCALID_MOM
# 880 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 4
# 881 "data/maps/LittlerootTown/scripts.pory"
	release
# 882 "data/maps/LittlerootTown/scripts.pory"
	end
# 883 "data/maps/LittlerootTown/scripts.pory"

# 884 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoes::
# 885 "data/maps/LittlerootTown/scripts.pory"
	speakername CommonText_Mom
# 886 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_WearTheseRunningShoes, MSGBOX_DEFAULT
# 887 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 888 "data/maps/LittlerootTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 889 "data/maps/LittlerootTown/scripts.pory"
	message LittlerootTown_Text_SwitchShoesWithRunningShoes
# 890 "data/maps/LittlerootTown/scripts.pory"
	waitfanfare
# 891 "data/maps/LittlerootTown/scripts.pory"
	speakername CommonText_Mom
# 892 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ExplainRunningShoes, MSGBOX_DEFAULT
# 893 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 894 "data/maps/LittlerootTown/scripts.pory"
	giveitem ITEM_OLD_ROD
# 895 "data/maps/LittlerootTown/scripts.pory"
	speakername CommonText_Mom
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
	.string "{PLAYER}, we're here, honey!\p"
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
	.string "Wait, {PLAYER}!$"
# 915 "data/maps/LittlerootTown/scripts.pory"

# 916 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_WearTheseRunningShoes:
# 917 "data/maps/LittlerootTown/scripts.pory"
	.string "{PLAYER}! {PLAYER}! Did you\n"
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
	.string "{PLAYER}, those shoes look so\n"
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
	.string "Well, well, {PLAYER}{KUN}!\n"
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
	speakername CommonText_Baron
# 1020 "data/maps/LittlerootTown/scripts.pory"
	msgbox Baron_Town01_Text_0
# 1021 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 1022 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 1023 "data/maps/LittlerootTown/scripts.pory"
	playse SE_PIN
# 1024 "data/maps/LittlerootTown/scripts.pory"
	applymovement 9, Common_Movement_ExclamationMark
# 1025 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 1026 "data/maps/LittlerootTown/scripts.pory"
	delay 60
# 1027 "data/maps/LittlerootTown/scripts.pory"
	speakername CommonText_Baron
# 1028 "data/maps/LittlerootTown/scripts.pory"
	msgbox Baron_Town01_Text_1
# 1029 "data/maps/LittlerootTown/scripts.pory"
	applymovement 9, Common_Movement_FaceLeft
# 1030 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 1031 "data/maps/LittlerootTown/scripts.pory"
	release
	end


# 1035 "data/maps/LittlerootTown/scripts.pory"
Baron_Town01_Move:
# 1036 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_left
# 1037 "data/maps/LittlerootTown/scripts.pory"
	delay_16
	step_end

Rival_Scene01::
# 1041 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_BIRCH_LAB_STATE, 3
	goto_if_eq Rival_Scene01_2
Rival_Scene01_1:
# 1078 "data/maps/LittlerootTown/scripts.pory"
	release
	end

Rival_Scene01_2:
# 1042 "data/maps/LittlerootTown/scripts.pory"
	lock
# 1043 "data/maps/LittlerootTown/scripts.pory"
	call Common_EventScript_PlayEmRivalBgm
# 1044 "data/maps/LittlerootTown/scripts.pory"
	playse SE_PIN
# 1045 "data/maps/LittlerootTown/scripts.pory"
	applymovement 10, Rival_Scene01_Move1
# 1046 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 1047 "data/maps/LittlerootTown/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 1048 "data/maps/LittlerootTown/scripts.pory"
	switch VAR_TEMP_1
# 1049 "data/maps/LittlerootTown/scripts.pory"
	case 17, Rival_Scene01_6
Rival_Scene01_4:
# 1054 "data/maps/LittlerootTown/scripts.pory"
	call GetRivalForNameBox
# 1055 "data/maps/LittlerootTown/scripts.pory"
	switch VAR_EMERALBODY_RIVAL
# 1056 "data/maps/LittlerootTown/scripts.pory"
	case 1, Rival_Scene01_9
# 1058 "data/maps/LittlerootTown/scripts.pory"
	case 2, Rival_Scene01_10
# 1060 "data/maps/LittlerootTown/scripts.pory"
	case 3, Rival_Scene01_11
# 1062 "data/maps/LittlerootTown/scripts.pory"
	case 4, Rival_Scene01_12
# 1065 "data/maps/LittlerootTown/scripts.pory"
	msgbox Rival_Scene01_Text_4
Rival_Scene01_7:
# 1067 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 1068 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_EMERALBODY_RIVAL_STATE, 1
# 1069 "data/maps/LittlerootTown/scripts.pory"
	fadescreen FADE_TO_BLACK
# 1070 "data/maps/LittlerootTown/scripts.pory"
	fadedefaultbgm
# 1071 "data/maps/LittlerootTown/scripts.pory"
	applymovement 10, Rival_Scene01_Move2
# 1072 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 1073 "data/maps/LittlerootTown/scripts.pory"
	removeobject 10
# 1074 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_TEMP_1
# 1075 "data/maps/LittlerootTown/scripts.pory"
	addobject 9
# 1076 "data/maps/LittlerootTown/scripts.pory"
	fadescreen FADE_FROM_BLACK
	goto Rival_Scene01_1

Rival_Scene01_6:
# 1050 "data/maps/LittlerootTown/scripts.pory"
	applymovement 10, Common_Movement_FaceUp
# 1051 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
	goto Rival_Scene01_4

Rival_Scene01_9:
# 1057 "data/maps/LittlerootTown/scripts.pory"
	msgbox Rival_Scene01_Text_0
	goto Rival_Scene01_7

Rival_Scene01_10:
# 1059 "data/maps/LittlerootTown/scripts.pory"
	msgbox Rival_Scene01_Text_1
	goto Rival_Scene01_7

Rival_Scene01_11:
# 1061 "data/maps/LittlerootTown/scripts.pory"
	msgbox Rival_Scene01_Text_2
	goto Rival_Scene01_7

Rival_Scene01_12:
# 1063 "data/maps/LittlerootTown/scripts.pory"
	msgbox Rival_Scene01_Text_3
	goto Rival_Scene01_7


# 1082 "data/maps/LittlerootTown/scripts.pory"
Rival_Scene01_Move1:
# 1083 "data/maps/LittlerootTown/scripts.pory"
	emote_exclamation_mark
# 1084 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 1084 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 1084 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 1084 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 1085 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1085 "data/maps/LittlerootTown/scripts.pory"
	walk_left
	step_end

# 1088 "data/maps/LittlerootTown/scripts.pory"
Rival_Scene01_Move2:
# 1089 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_down
# 1089 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_down
# 1089 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_down
# 1089 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_down
# 1089 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_down
# 1089 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_down
# 1089 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_down
	step_end

Baron_Town01_Text_0:
# 1020 "data/maps/LittlerootTown/scripts.pory"
	.string "Left foot… Right foot…\nLeft foot… Right foot…$"

Baron_Town01_Text_1:
# 1028 "data/maps/LittlerootTown/scripts.pory"
	.string "O- Oh, there you are… {PLAYER}, right?\n"
	.string "I didn't notice you there.\p"
	.string "When I was told about… this control\n"
	.string "system… I didn't think…\p"
	.string "Well, I assumed it would be like a pop-up\n"
	.string "book where all the pixel sprites sprung\l"
	.string "up in a 3D area you walked around in.\p"
	.string "I didn't think it'd LITERALLY be a\n"
	.string "system for mapping perception of 2D\l"
	.string "pixel art worlds into your head to walk\l"
	.string "around in.\p"
	.string "Technology is…\p"
	.string "Technology can be incredible and very\n"
	.string "scary at times.$"

Rival_Scene01_Text_0:
# 1057 "data/maps/LittlerootTown/scripts.pory"
	.string "Harper:$"

Rival_Scene01_Text_1:
# 1059 "data/maps/LittlerootTown/scripts.pory"
	.string "Jakson:$"

Rival_Scene01_Text_2:
# 1061 "data/maps/LittlerootTown/scripts.pory"
	.string "Redd:$"

Rival_Scene01_Text_3:
# 1063 "data/maps/LittlerootTown/scripts.pory"
	.string "Sakura:$"

Rival_Scene01_Text_4:
# 1065 "data/maps/LittlerootTown/scripts.pory"
	.string "Baron:$"
