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
	applymovement LOCALID_MOM, Common_Movement_EnterHouse
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
LittlerootTown_Movement_PlayerApproachDoor:
# 205 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 206 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 207 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 208 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 209 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 210 "data/maps/LittlerootTown/scripts.pory"

# 211 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PlayerStepOffTruck:
# 212 "data/maps/LittlerootTown/scripts.pory"
	jump_right
# 213 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 214 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 215 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 216 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 217 "data/maps/LittlerootTown/scripts.pory"

# 218 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BeginDexUpgradeScene::
# 219 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 220 "data/maps/LittlerootTown/scripts.pory"
	playse SE_PIN
# 221 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_ExclamationMark
# 222 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 223 "data/maps/LittlerootTown/scripts.pory"
	delay 80
# 224 "data/maps/LittlerootTown/scripts.pory"
	speakername CommonText_Birch
# 225 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_BirchSomethingToShowYouAtLab, MSGBOX_DEFAULT
# 226 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 227 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_RIVAL
# 228 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH
# 229 "data/maps/LittlerootTown/scripts.pory"
	delay 20
# 230 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 231 "data/maps/LittlerootTown/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB, 6, 5
# 232 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 233 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 234 "data/maps/LittlerootTown/scripts.pory"
	end
# 235 "data/maps/LittlerootTown/scripts.pory"

# 236 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnWarp:
# 237 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_SetRivalBirchPosForDexUpgrade
# 238 "data/maps/LittlerootTown/scripts.pory"
	.2byte 0
# 239 "data/maps/LittlerootTown/scripts.pory"

# 240 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgrade::
# 241 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_BIRCH
# 242 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_RIVAL
# 243 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 244 "data/maps/LittlerootTown/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeMale
# 245 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeFemale
# 246 "data/maps/LittlerootTown/scripts.pory"
	end
# 247 "data/maps/LittlerootTown/scripts.pory"

# 248 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeMale::
# 249 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_RIVAL, 6, 10
# 250 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_BIRCH, 5, 10
# 251 "data/maps/LittlerootTown/scripts.pory"
	end
# 252 "data/maps/LittlerootTown/scripts.pory"

# 253 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeFemale::
# 254 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_RIVAL, 13, 10
# 255 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_BIRCH, 14, 10
# 256 "data/maps/LittlerootTown/scripts.pory"
	end
# 257 "data/maps/LittlerootTown/scripts.pory"

# 258 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_FatMan::
# 259 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_Simulation, MSGBOX_NPC
# 260 "data/maps/LittlerootTown/scripts.pory"
	end
# 261 "data/maps/LittlerootTown/scripts.pory"

# 262 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Boy::
# 263 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_BirchSpendsDaysInLab, MSGBOX_NPC
# 264 "data/maps/LittlerootTown/scripts.pory"
	end
# 265 "data/maps/LittlerootTown/scripts.pory"

# 266 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Twin::
# 267 "data/maps/LittlerootTown/scripts.pory"
	lock
# 268 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 269 "data/maps/LittlerootTown/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, LittlerootTown_EventScript_GoodLuck
# 270 "data/maps/LittlerootTown/scripts.pory"
	goto_if_set FLAG_RESCUED_BIRCH, LittlerootTown_EventScript_YouSavedBirch
# 271 "data/maps/LittlerootTown/scripts.pory"
	goto_if_ne VAR_LITTLEROOT_TOWN_STATE, 0, LittlerootTown_EventScript_GoSaveBirch
# 272 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut, MSGBOX_DEFAULT
# 273 "data/maps/LittlerootTown/scripts.pory"
	release
# 274 "data/maps/LittlerootTown/scripts.pory"
	end
# 275 "data/maps/LittlerootTown/scripts.pory"

# 276 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoSaveBirch::
# 277 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 278 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanYouGoSeeWhatsHappening, MSGBOX_DEFAULT
# 279 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 280 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_FaceOriginalDirection
# 281 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 282 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 283 "data/maps/LittlerootTown/scripts.pory"
	release
# 284 "data/maps/LittlerootTown/scripts.pory"
	end
# 285 "data/maps/LittlerootTown/scripts.pory"

# 286 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_YouSavedBirch::
# 287 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 288 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_YouSavedBirch, MSGBOX_DEFAULT
# 289 "data/maps/LittlerootTown/scripts.pory"
	release
# 290 "data/maps/LittlerootTown/scripts.pory"
	end
# 291 "data/maps/LittlerootTown/scripts.pory"

# 292 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoodLuck::
# 293 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_GoodLuckCatchingPokemon, MSGBOX_DEFAULT
# 294 "data/maps/LittlerootTown/scripts.pory"
	release
# 295 "data/maps/LittlerootTown/scripts.pory"
	end
# 296 "data/maps/LittlerootTown/scripts.pory"

# 297 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerLeft::
# 298 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 299 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinApproachPlayerLeft
# 300 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 301 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemon
# 302 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinReturnLeft
# 303 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 304 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 305 "data/maps/LittlerootTown/scripts.pory"
	end
# 306 "data/maps/LittlerootTown/scripts.pory"

# 307 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_DangerousWithoutPokemon::
# 308 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut, MSGBOX_DEFAULT
# 309 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 310 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_WalkDown
# 311 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PushPlayerBackFromRoute
# 312 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 313 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_DangerousIfYouDontHavePokemon, MSGBOX_DEFAULT
# 314 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 315 "data/maps/LittlerootTown/scripts.pory"
	return
# 316 "data/maps/LittlerootTown/scripts.pory"

# 317 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinApproachPlayerLeft:
# 318 "data/maps/LittlerootTown/scripts.pory"
	face_right
# 319 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 320 "data/maps/LittlerootTown/scripts.pory"
	disable_jump_landing_ground_effect
# 321 "data/maps/LittlerootTown/scripts.pory"
	jump_in_place_right
# 322 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 323 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 324 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 325 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 326 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 327 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 328 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 329 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_left
# 330 "data/maps/LittlerootTown/scripts.pory"
	face_down
# 331 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 332 "data/maps/LittlerootTown/scripts.pory"

# 333 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinReturnLeft:
# 334 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 335 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 336 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 337 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 338 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 339 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 340 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 341 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 342 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_down
# 343 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 344 "data/maps/LittlerootTown/scripts.pory"

# 345 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PushPlayerBackFromRoute:
# 346 "data/maps/LittlerootTown/scripts.pory"
	lock_facing_direction
# 347 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 348 "data/maps/LittlerootTown/scripts.pory"
	unlock_facing_direction
# 349 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 350 "data/maps/LittlerootTown/scripts.pory"

# 351 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerRight::
# 352 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 353 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinApproachPlayerRight
# 354 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 355 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemon
# 356 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinReturnRight
# 357 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 358 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 359 "data/maps/LittlerootTown/scripts.pory"
	end
# 360 "data/maps/LittlerootTown/scripts.pory"

# 361 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinApproachPlayerRight:
# 362 "data/maps/LittlerootTown/scripts.pory"
	face_right
# 363 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 364 "data/maps/LittlerootTown/scripts.pory"
	disable_jump_landing_ground_effect
# 365 "data/maps/LittlerootTown/scripts.pory"
	jump_in_place_right
# 366 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 367 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 368 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 369 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 370 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 371 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 372 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 373 "data/maps/LittlerootTown/scripts.pory"
	face_down
# 374 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 375 "data/maps/LittlerootTown/scripts.pory"

# 376 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinReturnRight:
# 377 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 378 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 379 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 380 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 381 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 382 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_down
# 383 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 384 "data/maps/LittlerootTown/scripts.pory"

# 385 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoSaveBirchTrigger::
# 386 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 387 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_WalkInPlaceFasterRight
# 388 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 389 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 390 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 391 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 392 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanYouGoSeeWhatsHappening, MSGBOX_DEFAULT
# 393 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 394 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_FaceOriginalDirection
# 395 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 396 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 397 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 398 "data/maps/LittlerootTown/scripts.pory"
	end
# 399 "data/maps/LittlerootTown/scripts.pory"

# 400 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_TownSign::
# 401 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_TownSign, MSGBOX_SIGN
# 402 "data/maps/LittlerootTown/scripts.pory"
	end
# 403 "data/maps/LittlerootTown/scripts.pory"

# 404 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BirchsLabSign::
# 405 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsLab, MSGBOX_SIGN
# 406 "data/maps/LittlerootTown/scripts.pory"
	end
# 407 "data/maps/LittlerootTown/scripts.pory"

# 408 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BrendansHouseSign::
# 409 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 410 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 411 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_PlayersHouseSignMale
# 412 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_BirchsHouseSignFemale
# 413 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 414 "data/maps/LittlerootTown/scripts.pory"
	end
# 415 "data/maps/LittlerootTown/scripts.pory"

# 416 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_PlayersHouseSignMale::
# 417 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_PlayersHouse, MSGBOX_DEFAULT
# 418 "data/maps/LittlerootTown/scripts.pory"
	return
# 419 "data/maps/LittlerootTown/scripts.pory"

# 420 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BirchsHouseSignFemale::
# 421 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsHouse, MSGBOX_DEFAULT
# 422 "data/maps/LittlerootTown/scripts.pory"
	return
# 423 "data/maps/LittlerootTown/scripts.pory"

# 424 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MaysHouseSign::
# 425 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 426 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 427 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_BirchsHouseSignMale
# 428 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_PlayersHouseSignFemale
# 429 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 430 "data/maps/LittlerootTown/scripts.pory"
	end
# 431 "data/maps/LittlerootTown/scripts.pory"

# 432 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BirchsHouseSignMale::
# 433 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsHouse, MSGBOX_DEFAULT
# 434 "data/maps/LittlerootTown/scripts.pory"
	return
# 435 "data/maps/LittlerootTown/scripts.pory"

# 436 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_PlayersHouseSignFemale::
# 437 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_PlayersHouse, MSGBOX_DEFAULT
# 438 "data/maps/LittlerootTown/scripts.pory"
	return
# 439 "data/maps/LittlerootTown/scripts.pory"

# 440 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger0::
# 441 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 442 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 0
# 443 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_MOM, 10, 9
# 444 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 445 "data/maps/LittlerootTown/scripts.pory"
	end
# 446 "data/maps/LittlerootTown/scripts.pory"

# 447 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger1::
# 448 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 449 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 1
# 450 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_MOM, 11, 9
# 451 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 452 "data/maps/LittlerootTown/scripts.pory"
	end
# 453 "data/maps/LittlerootTown/scripts.pory"

# 454 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger2::
# 455 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 456 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 2
# 457 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 458 "data/maps/LittlerootTown/scripts.pory"
	end
# 459 "data/maps/LittlerootTown/scripts.pory"

# 460 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger3::
# 461 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 462 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 3
# 463 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 464 "data/maps/LittlerootTown/scripts.pory"
	end
# 465 "data/maps/LittlerootTown/scripts.pory"

# 466 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger4::
# 467 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 468 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 4
# 469 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 470 "data/maps/LittlerootTown/scripts.pory"
	end
# 471 "data/maps/LittlerootTown/scripts.pory"

# 472 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger5::
# 473 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 474 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 5
# 475 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 476 "data/maps/LittlerootTown/scripts.pory"
	end
# 477 "data/maps/LittlerootTown/scripts.pory"

# 478 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger::
# 479 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 480 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomNoticePlayerMale
# 481 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomNoticePlayerFemale
# 482 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 483 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetHomeDoorCoordsMale
# 484 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetHomeDoorCoordsFemale
# 485 "data/maps/LittlerootTown/scripts.pory"
	speakername CommonText_Mom
# 486 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_WaitPlayer, MSGBOX_DEFAULT
# 487 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 488 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 489 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomApproachPlayerMale
# 490 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomApproachPlayerFemale
# 491 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GiveRunningShoes
# 492 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 493 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomReturnHomeMale
# 494 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomReturnHomeFemale
# 495 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetReceivedRunningShoes
# 496 "data/maps/LittlerootTown/scripts.pory"
	end
# 497 "data/maps/LittlerootTown/scripts.pory"

# 498 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetHomeDoorCoordsMale::
# 499 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8009, 5
# 500 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x800A, 8
# 501 "data/maps/LittlerootTown/scripts.pory"
	return
# 502 "data/maps/LittlerootTown/scripts.pory"

# 503 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetHomeDoorCoordsFemale::
# 504 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8009, 14
# 505 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x800A, 8
# 506 "data/maps/LittlerootTown/scripts.pory"
	return
# 507 "data/maps/LittlerootTown/scripts.pory"

# 508 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomNoticePlayerMale::
# 509 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceFasterRight
# 510 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 511 "data/maps/LittlerootTown/scripts.pory"
	return
# 512 "data/maps/LittlerootTown/scripts.pory"

# 513 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomNoticePlayerFemale::
# 514 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceFasterLeft
# 515 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 516 "data/maps/LittlerootTown/scripts.pory"
	return
# 517 "data/maps/LittlerootTown/scripts.pory"

# 518 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale::
# 519 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomApproachPlayer0
# 520 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomApproachPlayer1
# 521 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomApproachPlayerMale2
# 522 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomApproachPlayerMale3
# 523 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomApproachPlayerMale4
# 524 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomApproachPlayerMale5
# 525 "data/maps/LittlerootTown/scripts.pory"
	return
# 526 "data/maps/LittlerootTown/scripts.pory"

# 527 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale::
# 528 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomApproachPlayer0
# 529 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomApproachPlayer1
# 530 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomApproachPlayerFemale2
# 531 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomApproachPlayerFemale3
# 532 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomApproachPlayerFemale4
# 533 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomApproachPlayerFemale5
# 534 "data/maps/LittlerootTown/scripts.pory"
	return
# 535 "data/maps/LittlerootTown/scripts.pory"

# 536 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayer0::
# 537 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 538 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 539 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkUp6
# 540 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 541 "data/maps/LittlerootTown/scripts.pory"
	return
# 542 "data/maps/LittlerootTown/scripts.pory"

# 543 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayer1::
# 544 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 545 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 546 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkUp6
# 547 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 548 "data/maps/LittlerootTown/scripts.pory"
	return
# 549 "data/maps/LittlerootTown/scripts.pory"

# 550 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale2::
# 551 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 552 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 553 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkRight4
# 554 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 555 "data/maps/LittlerootTown/scripts.pory"
	return
# 556 "data/maps/LittlerootTown/scripts.pory"

# 557 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale3::
# 558 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 559 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 560 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkRight5
# 561 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 562 "data/maps/LittlerootTown/scripts.pory"
	return
# 563 "data/maps/LittlerootTown/scripts.pory"

# 564 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale4::
# 565 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 566 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 567 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkRight2
# 568 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 569 "data/maps/LittlerootTown/scripts.pory"
	return
# 570 "data/maps/LittlerootTown/scripts.pory"

# 571 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale5::
# 572 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 573 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 574 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkRight3
# 575 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 576 "data/maps/LittlerootTown/scripts.pory"
	return
# 577 "data/maps/LittlerootTown/scripts.pory"

# 578 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale2::
# 579 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 580 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 581 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkLeft3
# 582 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 583 "data/maps/LittlerootTown/scripts.pory"
	return
# 584 "data/maps/LittlerootTown/scripts.pory"

# 585 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale3::
# 586 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 587 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 588 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkLeft2
# 589 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 590 "data/maps/LittlerootTown/scripts.pory"
	return
# 591 "data/maps/LittlerootTown/scripts.pory"

# 592 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale4::
# 593 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 594 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 595 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkLeft5
# 596 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 597 "data/maps/LittlerootTown/scripts.pory"
	return
# 598 "data/maps/LittlerootTown/scripts.pory"

# 599 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale5::
# 600 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 601 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 602 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkLeft4
# 603 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 604 "data/maps/LittlerootTown/scripts.pory"
	return
# 605 "data/maps/LittlerootTown/scripts.pory"

# 606 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale::
# 607 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomReturnHome0
# 608 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomReturnHome1
# 609 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomReturnHomeMale2
# 610 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomReturnHomeMale3
# 611 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomReturnHomeMale4
# 612 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomReturnHomeMale5
# 613 "data/maps/LittlerootTown/scripts.pory"
	return
# 614 "data/maps/LittlerootTown/scripts.pory"

# 615 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale::
# 616 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomReturnHome0
# 617 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomReturnHome1
# 618 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomReturnHomeFemale2
# 619 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomReturnHomeFemale3
# 620 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomReturnHomeFemale4
# 621 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomReturnHomeFemale5
# 622 "data/maps/LittlerootTown/scripts.pory"
	return
# 623 "data/maps/LittlerootTown/scripts.pory"

# 624 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHome0::
# 625 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkDown5
# 626 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 627 "data/maps/LittlerootTown/scripts.pory"
	return
# 628 "data/maps/LittlerootTown/scripts.pory"

# 629 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHome1::
# 630 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkDown5
# 631 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 632 "data/maps/LittlerootTown/scripts.pory"
	return
# 633 "data/maps/LittlerootTown/scripts.pory"

# 634 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale2::
# 635 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale2
# 636 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 637 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 638 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 639 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkUp
# 640 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 641 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 642 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 643 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 644 "data/maps/LittlerootTown/scripts.pory"
	return
# 645 "data/maps/LittlerootTown/scripts.pory"

# 646 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale3::
# 647 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale3
# 648 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 649 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 650 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 651 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkUp
# 652 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 653 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 654 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 655 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 656 "data/maps/LittlerootTown/scripts.pory"
	return
# 657 "data/maps/LittlerootTown/scripts.pory"

# 658 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale4::
# 659 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale4
# 660 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 661 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 662 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 663 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkUp
# 664 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 665 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 666 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 667 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 668 "data/maps/LittlerootTown/scripts.pory"
	return
# 669 "data/maps/LittlerootTown/scripts.pory"

# 670 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale5::
# 671 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale5
# 672 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 673 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 674 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 675 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkUp
# 676 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 677 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 678 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 679 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 680 "data/maps/LittlerootTown/scripts.pory"
	return
# 681 "data/maps/LittlerootTown/scripts.pory"

# 682 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale2::
# 683 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale2
# 684 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 685 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 686 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 687 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkUp
# 688 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 689 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 690 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 691 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 692 "data/maps/LittlerootTown/scripts.pory"
	return
# 693 "data/maps/LittlerootTown/scripts.pory"

# 694 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale3::
# 695 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale3
# 696 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 697 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 698 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 699 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkUp
# 700 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 701 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 702 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 703 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 704 "data/maps/LittlerootTown/scripts.pory"
	return
# 705 "data/maps/LittlerootTown/scripts.pory"

# 706 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale4::
# 707 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale4
# 708 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 709 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 710 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 711 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkUp
# 712 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 713 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 714 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 715 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 716 "data/maps/LittlerootTown/scripts.pory"
	return
# 717 "data/maps/LittlerootTown/scripts.pory"

# 718 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale5::
# 719 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale5
# 720 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 721 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 722 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 723 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkUp
# 724 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 725 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 726 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 727 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 728 "data/maps/LittlerootTown/scripts.pory"
	return
# 729 "data/maps/LittlerootTown/scripts.pory"

# 730 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale2:
# 731 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 732 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 733 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 734 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 735 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 736 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 737 "data/maps/LittlerootTown/scripts.pory"

# 738 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale3:
# 739 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 740 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 741 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 742 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 743 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 744 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 745 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 746 "data/maps/LittlerootTown/scripts.pory"

# 747 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale4:
# 748 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 749 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 750 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 751 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 752 "data/maps/LittlerootTown/scripts.pory"

# 753 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale5:
# 754 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 755 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 756 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 757 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 758 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 759 "data/maps/LittlerootTown/scripts.pory"

# 760 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale2:
# 761 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 762 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 763 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 764 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 765 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 766 "data/maps/LittlerootTown/scripts.pory"

# 767 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale3:
# 768 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 769 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 770 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 771 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 772 "data/maps/LittlerootTown/scripts.pory"

# 773 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale4:
# 774 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 775 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 776 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 777 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 778 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 779 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 780 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 781 "data/maps/LittlerootTown/scripts.pory"

# 782 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale5:
# 783 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 784 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 785 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 786 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 787 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 788 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 789 "data/maps/LittlerootTown/scripts.pory"

# 790 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Mom::
# 791 "data/maps/LittlerootTown/scripts.pory"
	lock
# 792 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 793 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 794 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetHomeDoorCoordsMale
# 795 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetHomeDoorCoordsFemale
# 796 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GiveRunningShoes
# 797 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceFasterUp
# 798 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 799 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 800 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 801 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkUp
# 802 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 803 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 804 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 805 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 806 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetReceivedRunningShoes
# 807 "data/maps/LittlerootTown/scripts.pory"
	end
# 808 "data/maps/LittlerootTown/scripts.pory"

# 809 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetReceivedRunningShoes::
# 810 "data/maps/LittlerootTown/scripts.pory"
	removeobject LOCALID_MOM
# 811 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 4
# 812 "data/maps/LittlerootTown/scripts.pory"
	release
# 813 "data/maps/LittlerootTown/scripts.pory"
	end
# 814 "data/maps/LittlerootTown/scripts.pory"

# 815 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoes::
# 816 "data/maps/LittlerootTown/scripts.pory"
	speakername CommonText_Mom
# 817 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_WearTheseRunningShoes, MSGBOX_DEFAULT
# 818 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 819 "data/maps/LittlerootTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 820 "data/maps/LittlerootTown/scripts.pory"
	message LittlerootTown_Text_SwitchShoesWithRunningShoes
# 821 "data/maps/LittlerootTown/scripts.pory"
	waitfanfare
# 822 "data/maps/LittlerootTown/scripts.pory"
	speakername CommonText_Mom
# 823 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ExplainRunningShoes, MSGBOX_DEFAULT
# 824 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 825 "data/maps/LittlerootTown/scripts.pory"
	giveitem ITEM_OLD_ROD
# 826 "data/maps/LittlerootTown/scripts.pory"
	speakername CommonText_Mom
# 827 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ComeHomeIfAnythingHappens, MSGBOX_DEFAULT
# 828 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 829 "data/maps/LittlerootTown/scripts.pory"
	delay 30
# 830 "data/maps/LittlerootTown/scripts.pory"
	return
# 831 "data/maps/LittlerootTown/scripts.pory"

# 832 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_OurNewHomeLetsGoInside:
# 833 "data/maps/LittlerootTown/scripts.pory"
	.string "{PLAYER}, we're here, honey!\p"
# 834 "data/maps/LittlerootTown/scripts.pory"
	.string "It must be tiring riding with our things\n"
# 835 "data/maps/LittlerootTown/scripts.pory"
	.string "in the moving truck.\p"
# 836 "data/maps/LittlerootTown/scripts.pory"
	.string "Well, this is Littleroot Town.\p"
# 837 "data/maps/LittlerootTown/scripts.pory"
	.string "How do you like it?\n"
# 838 "data/maps/LittlerootTown/scripts.pory"
	.string "This is our new home!\p"
# 839 "data/maps/LittlerootTown/scripts.pory"
	.string "It has a quaint feel, but it seems to be\n"
# 840 "data/maps/LittlerootTown/scripts.pory"
	.string "an easy place to live, don't you think?\p"
# 841 "data/maps/LittlerootTown/scripts.pory"
	.string "And, you get your own room, {PLAYER}!\n"
# 842 "data/maps/LittlerootTown/scripts.pory"
	.string "Let's go inside.$"
# 843 "data/maps/LittlerootTown/scripts.pory"

# 844 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_WaitPlayer:
# 845 "data/maps/LittlerootTown/scripts.pory"
	.string "Wait, {PLAYER}!$"
# 846 "data/maps/LittlerootTown/scripts.pory"

# 847 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_WearTheseRunningShoes:
# 848 "data/maps/LittlerootTown/scripts.pory"
	.string "{PLAYER}! {PLAYER}! Did you\n"
# 849 "data/maps/LittlerootTown/scripts.pory"
	.string "introduce yourself to Prof. Birch?\p"
# 850 "data/maps/LittlerootTown/scripts.pory"
	.string "Oh! What an adorable Pokémon!\n"
# 851 "data/maps/LittlerootTown/scripts.pory"
	.string "You got it from Prof. Birch. How nice!\p"
# 852 "data/maps/LittlerootTown/scripts.pory"
	.string "You're your father's child, all right.\n"
# 853 "data/maps/LittlerootTown/scripts.pory"
	.string "You look good together with Pokémon!\p"
# 854 "data/maps/LittlerootTown/scripts.pory"
	.string "Here, honey! If you're going out on an\n"
# 855 "data/maps/LittlerootTown/scripts.pory"
	.string "adventure, wear these new shoes I got\l"
# 856 "data/maps/LittlerootTown/scripts.pory"
	.string "for you!$"
# 857 "data/maps/LittlerootTown/scripts.pory"

# 858 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_SwitchShoesWithRunningShoes:
# 859 "data/maps/LittlerootTown/scripts.pory"
	.string "{PLAYER} switched shoes with the\n"
# 860 "data/maps/LittlerootTown/scripts.pory"
	.string "new pair from Mom!$"
# 861 "data/maps/LittlerootTown/scripts.pory"

# 862 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ExplainRunningShoes:
# 863 "data/maps/LittlerootTown/scripts.pory"
	.string "{PLAYER}, those shoes look so\n"
# 864 "data/maps/LittlerootTown/scripts.pory"
	.string "stylish on you!\p"
# 865 "data/maps/LittlerootTown/scripts.pory"
	.string "Oh!\n"
# 866 "data/maps/LittlerootTown/scripts.pory"
	.string "Let me give you your old fishing rod.$"
# 867 "data/maps/LittlerootTown/scripts.pory"

# 868 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ComeHomeIfAnythingHappens:
# 869 "data/maps/LittlerootTown/scripts.pory"
	.string "… … … … … … … …\n"
# 870 "data/maps/LittlerootTown/scripts.pory"
	.string "… … … … … … … …\p"
# 871 "data/maps/LittlerootTown/scripts.pory"
	.string "To think that you have your very own\n"
# 872 "data/maps/LittlerootTown/scripts.pory"
	.string "Pokémon now…\l"
# 873 "data/maps/LittlerootTown/scripts.pory"
	.string "Your father will be overjoyed.\p"
# 874 "data/maps/LittlerootTown/scripts.pory"
	.string "…But please be careful.\n"
# 875 "data/maps/LittlerootTown/scripts.pory"
	.string "If anything happens, you can come home.\p"
# 876 "data/maps/LittlerootTown/scripts.pory"
	.string "Go on, go get them, honey!$"
# 877 "data/maps/LittlerootTown/scripts.pory"

# 878 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_Simulation:
# 879 "data/maps/LittlerootTown/scripts.pory"
	.string "Experts have said that we could\n"
# 880 "data/maps/LittlerootTown/scripts.pory"
	.string "be living inside of a simulation.\p"
# 881 "data/maps/LittlerootTown/scripts.pory"
	.string "The power of science is staggering!$"
# 882 "data/maps/LittlerootTown/scripts.pory"

# 883 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_BirchSpendsDaysInLab:
# 884 "data/maps/LittlerootTown/scripts.pory"
	.string "Prof. Birch spends days in his Lab\n"
# 885 "data/maps/LittlerootTown/scripts.pory"
	.string "studying, then he'll suddenly go out in\l"
# 886 "data/maps/LittlerootTown/scripts.pory"
	.string "the wild to do more research…\p"
# 887 "data/maps/LittlerootTown/scripts.pory"
	.string "When does Prof. Birch spend time\n"
# 888 "data/maps/LittlerootTown/scripts.pory"
	.string "at home?$"
# 889 "data/maps/LittlerootTown/scripts.pory"

# 890 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut:
# 891 "data/maps/LittlerootTown/scripts.pory"
	.string "Um, um, um!\p"
# 892 "data/maps/LittlerootTown/scripts.pory"
	.string "If you go outside and go in the grass,\n"
# 893 "data/maps/LittlerootTown/scripts.pory"
	.string "wild Pokémon will jump out!$"
# 894 "data/maps/LittlerootTown/scripts.pory"

# 895 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_DangerousIfYouDontHavePokemon:
# 896 "data/maps/LittlerootTown/scripts.pory"
	.string "It's dangerous if you don't have\n"
# 897 "data/maps/LittlerootTown/scripts.pory"
	.string "your own Pokémon.$"
# 898 "data/maps/LittlerootTown/scripts.pory"

# 899 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_CanYouGoSeeWhatsHappening:
# 900 "data/maps/LittlerootTown/scripts.pory"
	.string "Um, hi!\p"
# 901 "data/maps/LittlerootTown/scripts.pory"
	.string "There are scary Pokémon outside!\n"
# 902 "data/maps/LittlerootTown/scripts.pory"
	.string "I can hear their cries!\p"
# 903 "data/maps/LittlerootTown/scripts.pory"
	.string "I want to go see what's going on,\n"
# 904 "data/maps/LittlerootTown/scripts.pory"
	.string "but I don't have any Pokémon…\p"
# 905 "data/maps/LittlerootTown/scripts.pory"
	.string "Can you go see what's happening\n"
# 906 "data/maps/LittlerootTown/scripts.pory"
	.string "for me?$"
# 907 "data/maps/LittlerootTown/scripts.pory"

# 908 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_YouSavedBirch:
# 909 "data/maps/LittlerootTown/scripts.pory"
	.string "You saved Prof. Birch!\n"
# 910 "data/maps/LittlerootTown/scripts.pory"
	.string "I'm so glad!$"
# 911 "data/maps/LittlerootTown/scripts.pory"

# 912 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_GoodLuckCatchingPokemon:
# 913 "data/maps/LittlerootTown/scripts.pory"
	.string "Are you going to catch Pokémon?\n"
# 914 "data/maps/LittlerootTown/scripts.pory"
	.string "Good luck!$"
# 915 "data/maps/LittlerootTown/scripts.pory"

# 916 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_TownSign:
# 917 "data/maps/LittlerootTown/scripts.pory"
	.string "Littleroot Town\n"
# 918 "data/maps/LittlerootTown/scripts.pory"
	.string "“A town that can't be shaded any hue.”$"
# 919 "data/maps/LittlerootTown/scripts.pory"

# 920 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ProfBirchsLab:
# 921 "data/maps/LittlerootTown/scripts.pory"
	.string "Prof. Birch's Pokémon Lab$"
# 922 "data/maps/LittlerootTown/scripts.pory"

# 923 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_PlayersHouse:
# 924 "data/maps/LittlerootTown/scripts.pory"
	.string "{PLAYER}'s House$"
# 925 "data/maps/LittlerootTown/scripts.pory"

# 926 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ProfBirchsHouse:
# 927 "data/maps/LittlerootTown/scripts.pory"
	.string "Prof. Birch's House$"
# 928 "data/maps/LittlerootTown/scripts.pory"

# 929 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_BirchSomethingToShowYouAtLab:
# 930 "data/maps/LittlerootTown/scripts.pory"
	.string "Well, well, {PLAYER}{KUN}!\n"
# 931 "data/maps/LittlerootTown/scripts.pory"
	.string "That was good work out there!\p"
# 932 "data/maps/LittlerootTown/scripts.pory"
	.string "I knew there was something special\n"
# 933 "data/maps/LittlerootTown/scripts.pory"
	.string "about you when I first saw you,\l"
# 934 "data/maps/LittlerootTown/scripts.pory"
	.string "but I never expected this.\p"
# 935 "data/maps/LittlerootTown/scripts.pory"
	.string "Oh, yes. Do you still have the Pokédex\n"
# 936 "data/maps/LittlerootTown/scripts.pory"
	.string "I gave you?\p"
# 937 "data/maps/LittlerootTown/scripts.pory"
	.string "I have something to show you.\n"
# 938 "data/maps/LittlerootTown/scripts.pory"
	.string "Let's go to my Lab.$"

Baron_Town01::
# 945 "data/maps/LittlerootTown/scripts.pory"
	lock
# 946 "data/maps/LittlerootTown/scripts.pory"
	applymovement 9, Baron_Town01_Move
# 947 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 948 "data/maps/LittlerootTown/scripts.pory"
	applymovement 9, Baron_Town01_Move
# 949 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 950 "data/maps/LittlerootTown/scripts.pory"
	speakername CommonText_Baron
# 951 "data/maps/LittlerootTown/scripts.pory"
	msgbox Baron_Town01_Text_0
# 952 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 953 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 954 "data/maps/LittlerootTown/scripts.pory"
	playse SE_PIN
# 955 "data/maps/LittlerootTown/scripts.pory"
	applymovement 9, Common_Movement_ExclamationMark
# 956 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 957 "data/maps/LittlerootTown/scripts.pory"
	delay 60
# 958 "data/maps/LittlerootTown/scripts.pory"
	speakername CommonText_Baron
# 959 "data/maps/LittlerootTown/scripts.pory"
	msgbox Town01_BaronText
# 960 "data/maps/LittlerootTown/scripts.pory"
	applymovement 9, Common_Movement_FaceLeft
# 961 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 962 "data/maps/LittlerootTown/scripts.pory"
	release
	return


# 965 "data/maps/LittlerootTown/scripts.pory"
Baron_Town01_Move:
# 966 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_left
# 967 "data/maps/LittlerootTown/scripts.pory"
	delay_16
	step_end

Rival_Scene01::
# 971 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_BIRCH_LAB_STATE, 3
	goto_if_eq Rival_Scene01_2
Rival_Scene01_1:
# 1008 "data/maps/LittlerootTown/scripts.pory"
	release
	end

Rival_Scene01_2:
# 972 "data/maps/LittlerootTown/scripts.pory"
	lock
# 973 "data/maps/LittlerootTown/scripts.pory"
	call Common_EventScript_PlayEmRivalBgm
# 974 "data/maps/LittlerootTown/scripts.pory"
	playse SE_PIN
# 975 "data/maps/LittlerootTown/scripts.pory"
	applymovement 10, Rival_Scene01_Move1
# 976 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 977 "data/maps/LittlerootTown/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 978 "data/maps/LittlerootTown/scripts.pory"
	switch VAR_TEMP_1
# 979 "data/maps/LittlerootTown/scripts.pory"
	case 17, Rival_Scene01_6
Rival_Scene01_4:
# 984 "data/maps/LittlerootTown/scripts.pory"
	call GetRivalForNameBox
# 985 "data/maps/LittlerootTown/scripts.pory"
	switch VAR_EMERALBODY_RIVAL
# 986 "data/maps/LittlerootTown/scripts.pory"
	case 1, Rival_Scene01_9
# 988 "data/maps/LittlerootTown/scripts.pory"
	case 2, Rival_Scene01_10
# 990 "data/maps/LittlerootTown/scripts.pory"
	case 3, Rival_Scene01_11
# 992 "data/maps/LittlerootTown/scripts.pory"
	case 4, Rival_Scene01_12
# 995 "data/maps/LittlerootTown/scripts.pory"
	msgbox Scene01_BaronText
Rival_Scene01_7:
# 997 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 998 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_EMERALBODY_RIVAL_STATE, 1
# 999 "data/maps/LittlerootTown/scripts.pory"
	fadescreen FADE_TO_BLACK
# 1000 "data/maps/LittlerootTown/scripts.pory"
	fadedefaultbgm
# 1001 "data/maps/LittlerootTown/scripts.pory"
	applymovement 10, Rival_Scene01_Move2
# 1002 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 1003 "data/maps/LittlerootTown/scripts.pory"
	removeobject 10
# 1004 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_TEMP_1
# 1005 "data/maps/LittlerootTown/scripts.pory"
	addobject 9
# 1006 "data/maps/LittlerootTown/scripts.pory"
	fadescreen FADE_FROM_BLACK
	goto Rival_Scene01_1

Rival_Scene01_6:
# 980 "data/maps/LittlerootTown/scripts.pory"
	applymovement 10, Common_Movement_FaceUp
# 981 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
	goto Rival_Scene01_4

Rival_Scene01_9:
# 987 "data/maps/LittlerootTown/scripts.pory"
	msgbox Scene01_HarperText
	goto Rival_Scene01_7

Rival_Scene01_10:
# 989 "data/maps/LittlerootTown/scripts.pory"
	msgbox Scene01_JaksonText
	goto Rival_Scene01_7

Rival_Scene01_11:
# 991 "data/maps/LittlerootTown/scripts.pory"
	msgbox Scene01_ReddText
	goto Rival_Scene01_7

Rival_Scene01_12:
# 993 "data/maps/LittlerootTown/scripts.pory"
	msgbox Scene01_SakuraText
	goto Rival_Scene01_7


# 1012 "data/maps/LittlerootTown/scripts.pory"
Rival_Scene01_Move1:
# 1013 "data/maps/LittlerootTown/scripts.pory"
	emote_exclamation_mark
# 1014 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 1014 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 1014 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 1014 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 1015 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1015 "data/maps/LittlerootTown/scripts.pory"
	walk_left
	step_end

# 1018 "data/maps/LittlerootTown/scripts.pory"
Rival_Scene01_Move2:
# 1019 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_down
# 1019 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_down
# 1019 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_down
# 1019 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_down
# 1019 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_down
# 1019 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_down
# 1019 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_down
	step_end

Baron_Town01_Text_0:
# 951 "data/maps/LittlerootTown/scripts.pory"
	.string "Left foot… Right foot…\nLeft foot… Right foot…$"
