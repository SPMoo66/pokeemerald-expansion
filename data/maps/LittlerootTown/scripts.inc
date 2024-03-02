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
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_OnTransition2
# 10 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_OnFrame
# 11 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LittlerootTown_OnWarp
# 12 "data/maps/LittlerootTown/scripts.pory"
	.byte 0
# 13 "data/maps/LittlerootTown/scripts.pory"

# 14 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_TOWN_STATE
# 15 "data/maps/LittlerootTown/scripts.pory"
	@ 1: Met Rival
# 16 "data/maps/LittlerootTown/scripts.pory"
	@ 2: Saving Birch
# 17 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Received Pokedex
# 18 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Received Running Shoes
# 19 "data/maps/LittlerootTown/scripts.pory"

# 20 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_INTRO_STATE
# 21 "data/maps/LittlerootTown/scripts.pory"
	@ 1: In truck male
# 22 "data/maps/LittlerootTown/scripts.pory"
	@ 2: In truck female
# 23 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Entered house
# 24 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Told to go set clock
# 25 "data/maps/LittlerootTown/scripts.pory"
	@ 5: Entered 2F to set clock
# 26 "data/maps/LittlerootTown/scripts.pory"
	@ 6: Set clock
# 27 "data/maps/LittlerootTown/scripts.pory"
	@ 7: Told to go meet rival
# 28 "data/maps/LittlerootTown/scripts.pory"

# 29 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_HOUSES_STATE_MAY
# 30 "data/maps/LittlerootTown/scripts.pory"
	@                    and VAR_LITTLEROOT_HOUSES_STATE_BRENDAN
# 31 "data/maps/LittlerootTown/scripts.pory"
	@ 1: On Truck (and is corresponding gender)
# 32 "data/maps/LittlerootTown/scripts.pory"
	@ 2: Met Rival's Mom (and is corresponding gender)
# 33 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Entered Hall of Fame
# 34 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Completed Lati TV / SS Ticket event
# 35 "data/maps/LittlerootTown/scripts.pory"
	@ 5: Exited house after above event
# 36 "data/maps/LittlerootTown/scripts.pory"

# 37 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_RIVAL_STATE
# 38 "data/maps/LittlerootTown/scripts.pory"
	@ 1: Never occurs
# 39 "data/maps/LittlerootTown/scripts.pory"
	@ 2: Entered Rival's bedroom
# 40 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Met Rival
# 41 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Received Pokedex
# 42 "data/maps/LittlerootTown/scripts.pory"

# 43 "data/maps/LittlerootTown/scripts.pory"

# 44 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnTransition:
# 45 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_VISITED_LITTLEROOT_TOWN
# 46 "data/maps/LittlerootTown/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 47 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 2, LittlerootTown_EventScript_MoveMomToMaysDoor
# 48 "data/maps/LittlerootTown/scripts.pory"
	call_if_unset FLAG_RESCUED_BIRCH, LittlerootTown_EventScript_SetTwinPos
# 49 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_TOWN_STATE, 3, LittlerootTown_EventScript_SetMomStandingInFrontOfDoorPos
# 50 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_HOUSES_STATE_MAY, 4, LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent
# 51 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 4, LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent
# 52 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_OLDALE_RIVAL_STATE, 1, LittlerootTown_EventScript_MoveRivalFromOldale
# 53 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_RIVAL_STATE, 3, LittlerootTown_EventScript_SetRivalLeftForRoute103
# 54 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_HideMapNamePopup
# 55 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2, LittlerootTown_EventScript_LeftLabAfterDexUpgrade
# 56 "data/maps/LittlerootTown/scripts.pory"
	end
# 57 "data/maps/LittlerootTown/scripts.pory"

# 58 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnTransition2:
# 59 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_TEMP_1
# 60 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_BIRCH_LAB_STATE, 3, LittlerootTown_EventScript_ShowBaron
# 61 "data/maps/LittlerootTown/scripts.pory"
	end
# 62 "data/maps/LittlerootTown/scripts.pory"

# 63 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_ShowBaron::
# 64 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_TEMP_1
# 65 "data/maps/LittlerootTown/scripts.pory"
	end
# 66 "data/maps/LittlerootTown/scripts.pory"

# 67 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_LeftLabAfterDexUpgrade::
# 68 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 3
# 69 "data/maps/LittlerootTown/scripts.pory"
	return
# 70 "data/maps/LittlerootTown/scripts.pory"

# 71 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_HideMapNamePopup::
# 72 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 73 "data/maps/LittlerootTown/scripts.pory"
	return
# 74 "data/maps/LittlerootTown/scripts.pory"

# 75 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalLeftForRoute103::
# 76 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_RIVAL_LEFT_FOR_ROUTE103
# 77 "data/maps/LittlerootTown/scripts.pory"
	return
# 78 "data/maps/LittlerootTown/scripts.pory"

# 79 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MoveRivalFromOldale::
# 80 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_OLDALE_RIVAL_STATE, 2
# 81 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_OLDALE_TOWN_RIVAL
# 82 "data/maps/LittlerootTown/scripts.pory"
	return
# 83 "data/maps/LittlerootTown/scripts.pory"

# 84 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent::
# 85 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 5
# 86 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 5
# 87 "data/maps/LittlerootTown/scripts.pory"
	return
# 88 "data/maps/LittlerootTown/scripts.pory"

# 89 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MoveMomToMaysDoor::
# 90 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_MOM, 14, 8
# 91 "data/maps/LittlerootTown/scripts.pory"
	return
# 92 "data/maps/LittlerootTown/scripts.pory"

# 93 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetTwinPos::
# 94 "data/maps/LittlerootTown/scripts.pory"
	goto_if_eq VAR_LITTLEROOT_TOWN_STATE, 0, LittlerootTown_EventScript_SetTwinGuardingRoutePos
# 95 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_TWIN, 10, 1
# 96 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_TWIN, MOVEMENT_TYPE_FACE_UP
# 97 "data/maps/LittlerootTown/scripts.pory"
	return
# 98 "data/maps/LittlerootTown/scripts.pory"

# 99 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetTwinGuardingRoutePos::
# 100 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_TWIN, 7, 2
# 101 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_TWIN, MOVEMENT_TYPE_FACE_DOWN
# 102 "data/maps/LittlerootTown/scripts.pory"
	return
# 103 "data/maps/LittlerootTown/scripts.pory"

# 104 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetMomStandingInFrontOfDoorPos::
# 105 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
# 106 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_DOWN
# 107 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 108 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetMomInFrontOfDoorMale
# 109 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetMomInFrontOfDoorFemale
# 110 "data/maps/LittlerootTown/scripts.pory"
	return
# 111 "data/maps/LittlerootTown/scripts.pory"

# 112 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetMomInFrontOfDoorMale::
# 113 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_MOM, 5, 9
# 114 "data/maps/LittlerootTown/scripts.pory"
	return
# 115 "data/maps/LittlerootTown/scripts.pory"

# 116 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetMomInFrontOfDoorFemale::
# 117 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_MOM, 14, 9
# 118 "data/maps/LittlerootTown/scripts.pory"
	return
# 119 "data/maps/LittlerootTown/scripts.pory"

# 120 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnFrame:
# 121 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 1, LittlerootTown_EventScript_StepOffTruckMale
# 122 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 2, LittlerootTown_EventScript_StepOffTruckFemale
# 123 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_BeginDexUpgradeScene
# 124 "data/maps/LittlerootTown/scripts.pory"
	.2byte 0
# 125 "data/maps/LittlerootTown/scripts.pory"

# 126 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_StepOffTruckMale::
# 127 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 128 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8004, 5
# 129 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8005, 8
# 130 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GoInsideWithMom
# 131 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_TRUCK
# 132 "data/maps/LittlerootTown/scripts.pory"
	warpsilent MAP_LITTLEROOT_TOWN_BRENDANS_HOUSE_1F, 8, 8
# 133 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 134 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 135 "data/maps/LittlerootTown/scripts.pory"
	end
# 136 "data/maps/LittlerootTown/scripts.pory"

# 137 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_StepOffTruckFemale::
# 138 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 139 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8004, 14
# 140 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8005, 8
# 141 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GoInsideWithMom
# 142 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_TRUCK
# 143 "data/maps/LittlerootTown/scripts.pory"
	warpsilent MAP_LITTLEROOT_TOWN_MAYS_HOUSE_1F, 2, 8
# 144 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 145 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 146 "data/maps/LittlerootTown/scripts.pory"
	end
# 147 "data/maps/LittlerootTown/scripts.pory"

# 148 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoInsideWithMom::
# 149 "data/maps/LittlerootTown/scripts.pory"
	delay 15
# 150 "data/maps/LittlerootTown/scripts.pory"
	playse SE_LEDGE
# 151 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PlayerStepOffTruck
# 152 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 153 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 154 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 155 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_MOM
# 156 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitHouse
# 157 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 158 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 159 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 160 "data/maps/LittlerootTown/scripts.pory"
	delay 10
# 161 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerAtTruck
# 162 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 163 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_OurNewHomeLetsGoInside, MSGBOX_DEFAULT
# 164 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 165 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachDoor
# 166 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PlayerApproachDoor
# 167 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 168 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 169 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 170 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomEnterHouse
# 171 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PlayerEnterHouse
# 172 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 173 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
# 174 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 3
# 175 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, 0
# 176 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 177 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 178 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_FAT_MAN
# 179 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 180 "data/maps/LittlerootTown/scripts.pory"
	return
# 181 "data/maps/LittlerootTown/scripts.pory"

# 182 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomExitHouse:
# 183 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 184 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 185 "data/maps/LittlerootTown/scripts.pory"

# 186 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerAtTruck:
# 187 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 188 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_left
# 189 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 190 "data/maps/LittlerootTown/scripts.pory"

# 191 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachDoor:
# 192 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 193 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 194 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 195 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 196 "data/maps/LittlerootTown/scripts.pory"

# 197 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomEnterHouse:
# 198 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 199 "data/maps/LittlerootTown/scripts.pory"
	set_invisible
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
LittlerootTown_Movement_PlayerEnterHouse:
# 210 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 211 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 212 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 213 "data/maps/LittlerootTown/scripts.pory"

# 214 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PlayerStepOffTruck:
# 215 "data/maps/LittlerootTown/scripts.pory"
	jump_right
# 216 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 217 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 218 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 219 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 220 "data/maps/LittlerootTown/scripts.pory"

# 221 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BeginDexUpgradeScene::
# 222 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 223 "data/maps/LittlerootTown/scripts.pory"
	playse SE_PIN
# 224 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_ExclamationMark
# 225 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 226 "data/maps/LittlerootTown/scripts.pory"
	delay 80
# 227 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_BirchSomethingToShowYouAtLab, MSGBOX_DEFAULT
# 228 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 229 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_RIVAL
# 230 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH
# 231 "data/maps/LittlerootTown/scripts.pory"
	delay 20
# 232 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 233 "data/maps/LittlerootTown/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB, 6, 5
# 234 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 235 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 236 "data/maps/LittlerootTown/scripts.pory"
	end
# 237 "data/maps/LittlerootTown/scripts.pory"

# 238 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnWarp:
# 239 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_SetRivalBirchPosForDexUpgrade
# 240 "data/maps/LittlerootTown/scripts.pory"
	.2byte 0
# 241 "data/maps/LittlerootTown/scripts.pory"

# 242 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgrade::
# 243 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_BIRCH
# 244 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_RIVAL
# 245 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 246 "data/maps/LittlerootTown/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeMale
# 247 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeFemale
# 248 "data/maps/LittlerootTown/scripts.pory"
	end
# 249 "data/maps/LittlerootTown/scripts.pory"

# 250 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeMale::
# 251 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_RIVAL, 6, 10
# 252 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_BIRCH, 5, 10
# 253 "data/maps/LittlerootTown/scripts.pory"
	end
# 254 "data/maps/LittlerootTown/scripts.pory"

# 255 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeFemale::
# 256 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_RIVAL, 13, 10
# 257 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_BIRCH, 14, 10
# 258 "data/maps/LittlerootTown/scripts.pory"
	end
# 259 "data/maps/LittlerootTown/scripts.pory"

# 260 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_FatMan::
# 261 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanUsePCToStoreItems, MSGBOX_NPC
# 262 "data/maps/LittlerootTown/scripts.pory"
	end
# 263 "data/maps/LittlerootTown/scripts.pory"

# 264 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Boy::
# 265 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_BirchSpendsDaysInLab, MSGBOX_NPC
# 266 "data/maps/LittlerootTown/scripts.pory"
	end
# 267 "data/maps/LittlerootTown/scripts.pory"

# 268 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Twin::
# 269 "data/maps/LittlerootTown/scripts.pory"
	lock
# 270 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 271 "data/maps/LittlerootTown/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, LittlerootTown_EventScript_GoodLuck
# 272 "data/maps/LittlerootTown/scripts.pory"
	goto_if_set FLAG_RESCUED_BIRCH, LittlerootTown_EventScript_YouSavedBirch
# 273 "data/maps/LittlerootTown/scripts.pory"
	goto_if_ne VAR_LITTLEROOT_TOWN_STATE, 0, LittlerootTown_EventScript_GoSaveBirch
# 274 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut, MSGBOX_DEFAULT
# 275 "data/maps/LittlerootTown/scripts.pory"
	release
# 276 "data/maps/LittlerootTown/scripts.pory"
	end
# 277 "data/maps/LittlerootTown/scripts.pory"

# 278 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoSaveBirch::
# 279 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 280 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanYouGoSeeWhatsHappening, MSGBOX_DEFAULT
# 281 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 282 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_FaceOriginalDirection
# 283 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 284 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 285 "data/maps/LittlerootTown/scripts.pory"
	release
# 286 "data/maps/LittlerootTown/scripts.pory"
	end
# 287 "data/maps/LittlerootTown/scripts.pory"

# 288 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_YouSavedBirch::
# 289 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 290 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_YouSavedBirch, MSGBOX_DEFAULT
# 291 "data/maps/LittlerootTown/scripts.pory"
	release
# 292 "data/maps/LittlerootTown/scripts.pory"
	end
# 293 "data/maps/LittlerootTown/scripts.pory"

# 294 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoodLuck::
# 295 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_GoodLuckCatchingPokemon, MSGBOX_DEFAULT
# 296 "data/maps/LittlerootTown/scripts.pory"
	release
# 297 "data/maps/LittlerootTown/scripts.pory"
	end
# 298 "data/maps/LittlerootTown/scripts.pory"

# 299 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerLeft::
# 300 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 301 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinApproachPlayerLeft
# 302 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 303 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemon
# 304 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinReturnLeft
# 305 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 306 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 307 "data/maps/LittlerootTown/scripts.pory"
	end
# 308 "data/maps/LittlerootTown/scripts.pory"

# 309 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_DangerousWithoutPokemon::
# 310 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut, MSGBOX_DEFAULT
# 311 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 312 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinPushPlayerFromRoute
# 313 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PushPlayerBackFromRoute
# 314 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 315 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_DangerousIfYouDontHavePokemon, MSGBOX_DEFAULT
# 316 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 317 "data/maps/LittlerootTown/scripts.pory"
	return
# 318 "data/maps/LittlerootTown/scripts.pory"

# 319 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinApproachPlayerLeft:
# 320 "data/maps/LittlerootTown/scripts.pory"
	face_right
# 321 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 322 "data/maps/LittlerootTown/scripts.pory"
	disable_jump_landing_ground_effect
# 323 "data/maps/LittlerootTown/scripts.pory"
	jump_in_place_right
# 324 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 325 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 326 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 327 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 328 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 329 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 330 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 331 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_left
# 332 "data/maps/LittlerootTown/scripts.pory"
	face_down
# 333 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 334 "data/maps/LittlerootTown/scripts.pory"

# 335 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinPushPlayerFromRoute:
# 336 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 337 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 338 "data/maps/LittlerootTown/scripts.pory"

# 339 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinReturnLeft:
# 340 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 341 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 342 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 343 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 344 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 345 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 346 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 347 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 348 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_down
# 349 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 350 "data/maps/LittlerootTown/scripts.pory"

# 351 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PushPlayerBackFromRoute:
# 352 "data/maps/LittlerootTown/scripts.pory"
	lock_facing_direction
# 353 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 354 "data/maps/LittlerootTown/scripts.pory"
	unlock_facing_direction
# 355 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 356 "data/maps/LittlerootTown/scripts.pory"

# 357 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerRight::
# 358 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 359 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinApproachPlayerRight
# 360 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 361 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemon
# 362 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinReturnRight
# 363 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 364 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 365 "data/maps/LittlerootTown/scripts.pory"
	end
# 366 "data/maps/LittlerootTown/scripts.pory"

# 367 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinApproachPlayerRight:
# 368 "data/maps/LittlerootTown/scripts.pory"
	face_right
# 369 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 370 "data/maps/LittlerootTown/scripts.pory"
	disable_jump_landing_ground_effect
# 371 "data/maps/LittlerootTown/scripts.pory"
	jump_in_place_right
# 372 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 373 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 374 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 375 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 376 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 377 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 378 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 379 "data/maps/LittlerootTown/scripts.pory"
	face_down
# 380 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 381 "data/maps/LittlerootTown/scripts.pory"

# 382 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinReturnRight:
# 383 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 384 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 385 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 386 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 387 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 388 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_down
# 389 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 390 "data/maps/LittlerootTown/scripts.pory"

# 391 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoSaveBirchTrigger::
# 392 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 393 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_WalkInPlaceFasterRight
# 394 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 395 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 396 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 397 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 398 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanYouGoSeeWhatsHappening, MSGBOX_DEFAULT
# 399 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 400 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_FaceOriginalDirection
# 401 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 402 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 403 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 404 "data/maps/LittlerootTown/scripts.pory"
	end
# 405 "data/maps/LittlerootTown/scripts.pory"

# 406 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_TownSign::
# 407 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_TownSign, MSGBOX_SIGN
# 408 "data/maps/LittlerootTown/scripts.pory"
	end
# 409 "data/maps/LittlerootTown/scripts.pory"

# 410 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BirchsLabSign::
# 411 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsLab, MSGBOX_SIGN
# 412 "data/maps/LittlerootTown/scripts.pory"
	end
# 413 "data/maps/LittlerootTown/scripts.pory"

# 414 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BrendansHouseSign::
# 415 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 416 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 417 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_PlayersHouseSignMale
# 418 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_BirchsHouseSignFemale
# 419 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 420 "data/maps/LittlerootTown/scripts.pory"
	end
# 421 "data/maps/LittlerootTown/scripts.pory"

# 422 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_PlayersHouseSignMale::
# 423 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_PlayersHouse, MSGBOX_DEFAULT
# 424 "data/maps/LittlerootTown/scripts.pory"
	return
# 425 "data/maps/LittlerootTown/scripts.pory"

# 426 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BirchsHouseSignFemale::
# 427 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsHouse, MSGBOX_DEFAULT
# 428 "data/maps/LittlerootTown/scripts.pory"
	return
# 429 "data/maps/LittlerootTown/scripts.pory"

# 430 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MaysHouseSign::
# 431 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 432 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 433 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_BirchsHouseSignMale
# 434 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_PlayersHouseSignFemale
# 435 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 436 "data/maps/LittlerootTown/scripts.pory"
	end
# 437 "data/maps/LittlerootTown/scripts.pory"

# 438 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BirchsHouseSignMale::
# 439 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsHouse, MSGBOX_DEFAULT
# 440 "data/maps/LittlerootTown/scripts.pory"
	return
# 441 "data/maps/LittlerootTown/scripts.pory"

# 442 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_PlayersHouseSignFemale::
# 443 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_PlayersHouse, MSGBOX_DEFAULT
# 444 "data/maps/LittlerootTown/scripts.pory"
	return
# 445 "data/maps/LittlerootTown/scripts.pory"

# 446 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger0::
# 447 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 448 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 0
# 449 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_MOM, 10, 9
# 450 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 451 "data/maps/LittlerootTown/scripts.pory"
	end
# 452 "data/maps/LittlerootTown/scripts.pory"

# 453 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger1::
# 454 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 455 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 1
# 456 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_MOM, 11, 9
# 457 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 458 "data/maps/LittlerootTown/scripts.pory"
	end
# 459 "data/maps/LittlerootTown/scripts.pory"

# 460 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger2::
# 461 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 462 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 2
# 463 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 464 "data/maps/LittlerootTown/scripts.pory"
	end
# 465 "data/maps/LittlerootTown/scripts.pory"

# 466 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger3::
# 467 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 468 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 3
# 469 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 470 "data/maps/LittlerootTown/scripts.pory"
	end
# 471 "data/maps/LittlerootTown/scripts.pory"

# 472 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger4::
# 473 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 474 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 4
# 475 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 476 "data/maps/LittlerootTown/scripts.pory"
	end
# 477 "data/maps/LittlerootTown/scripts.pory"

# 478 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger5::
# 479 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 480 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 5
# 481 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 482 "data/maps/LittlerootTown/scripts.pory"
	end
# 483 "data/maps/LittlerootTown/scripts.pory"

# 484 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger::
# 485 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 486 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomNoticePlayerMale
# 487 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomNoticePlayerFemale
# 488 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 489 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetHomeDoorCoordsMale
# 490 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetHomeDoorCoordsFemale
# 491 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_WaitPlayer, MSGBOX_DEFAULT
# 492 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 493 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 494 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomApproachPlayerMale
# 495 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomApproachPlayerFemale
# 496 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GiveRunningShoes
# 497 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 498 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomReturnHomeMale
# 499 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomReturnHomeFemale
# 500 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetReceivedRunningShoes
# 501 "data/maps/LittlerootTown/scripts.pory"
	end
# 502 "data/maps/LittlerootTown/scripts.pory"

# 503 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetHomeDoorCoordsMale::
# 504 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8009, 5
# 505 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x800A, 8
# 506 "data/maps/LittlerootTown/scripts.pory"
	return
# 507 "data/maps/LittlerootTown/scripts.pory"

# 508 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetHomeDoorCoordsFemale::
# 509 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8009, 14
# 510 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x800A, 8
# 511 "data/maps/LittlerootTown/scripts.pory"
	return
# 512 "data/maps/LittlerootTown/scripts.pory"

# 513 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomNoticePlayerMale::
# 514 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceFasterRight
# 515 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 516 "data/maps/LittlerootTown/scripts.pory"
	return
# 517 "data/maps/LittlerootTown/scripts.pory"

# 518 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomNoticePlayerFemale::
# 519 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceFasterLeft
# 520 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 521 "data/maps/LittlerootTown/scripts.pory"
	return
# 522 "data/maps/LittlerootTown/scripts.pory"

# 523 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale::
# 524 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomApproachPlayer0
# 525 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomApproachPlayer1
# 526 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomApproachPlayerMale2
# 527 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomApproachPlayerMale3
# 528 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomApproachPlayerMale4
# 529 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomApproachPlayerMale5
# 530 "data/maps/LittlerootTown/scripts.pory"
	return
# 531 "data/maps/LittlerootTown/scripts.pory"

# 532 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale::
# 533 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomApproachPlayer0
# 534 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomApproachPlayer1
# 535 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomApproachPlayerFemale2
# 536 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomApproachPlayerFemale3
# 537 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomApproachPlayerFemale4
# 538 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomApproachPlayerFemale5
# 539 "data/maps/LittlerootTown/scripts.pory"
	return
# 540 "data/maps/LittlerootTown/scripts.pory"

# 541 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayer0::
# 542 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 543 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 544 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayer0
# 545 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 546 "data/maps/LittlerootTown/scripts.pory"
	return
# 547 "data/maps/LittlerootTown/scripts.pory"

# 548 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayer1::
# 549 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 550 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 551 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayer1
# 552 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 553 "data/maps/LittlerootTown/scripts.pory"
	return
# 554 "data/maps/LittlerootTown/scripts.pory"

# 555 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale2::
# 556 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 557 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 558 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale2
# 559 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 560 "data/maps/LittlerootTown/scripts.pory"
	return
# 561 "data/maps/LittlerootTown/scripts.pory"

# 562 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale3::
# 563 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 564 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 565 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale3
# 566 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 567 "data/maps/LittlerootTown/scripts.pory"
	return
# 568 "data/maps/LittlerootTown/scripts.pory"

# 569 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale4::
# 570 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 571 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 572 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale4
# 573 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 574 "data/maps/LittlerootTown/scripts.pory"
	return
# 575 "data/maps/LittlerootTown/scripts.pory"

# 576 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale5::
# 577 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 578 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 579 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale5
# 580 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 581 "data/maps/LittlerootTown/scripts.pory"
	return
# 582 "data/maps/LittlerootTown/scripts.pory"

# 583 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale2::
# 584 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 585 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 586 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale2
# 587 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 588 "data/maps/LittlerootTown/scripts.pory"
	return
# 589 "data/maps/LittlerootTown/scripts.pory"

# 590 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale3::
# 591 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 592 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 593 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale3
# 594 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 595 "data/maps/LittlerootTown/scripts.pory"
	return
# 596 "data/maps/LittlerootTown/scripts.pory"

# 597 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale4::
# 598 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 599 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 600 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale4
# 601 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 602 "data/maps/LittlerootTown/scripts.pory"
	return
# 603 "data/maps/LittlerootTown/scripts.pory"

# 604 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale5::
# 605 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 606 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 607 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale5
# 608 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 609 "data/maps/LittlerootTown/scripts.pory"
	return
# 610 "data/maps/LittlerootTown/scripts.pory"

# 611 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale::
# 612 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomReturnHome0
# 613 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomReturnHome1
# 614 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomReturnHomeMale2
# 615 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomReturnHomeMale3
# 616 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomReturnHomeMale4
# 617 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomReturnHomeMale5
# 618 "data/maps/LittlerootTown/scripts.pory"
	return
# 619 "data/maps/LittlerootTown/scripts.pory"

# 620 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale::
# 621 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomReturnHome0
# 622 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomReturnHome1
# 623 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomReturnHomeFemale2
# 624 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomReturnHomeFemale3
# 625 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomReturnHomeFemale4
# 626 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomReturnHomeFemale5
# 627 "data/maps/LittlerootTown/scripts.pory"
	return
# 628 "data/maps/LittlerootTown/scripts.pory"

# 629 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHome0::
# 630 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHome0
# 631 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 632 "data/maps/LittlerootTown/scripts.pory"
	return
# 633 "data/maps/LittlerootTown/scripts.pory"

# 634 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHome1::
# 635 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHome1
# 636 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 637 "data/maps/LittlerootTown/scripts.pory"
	return
# 638 "data/maps/LittlerootTown/scripts.pory"

# 639 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale2::
# 640 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale2
# 641 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 642 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 643 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 644 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 645 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 646 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 647 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 648 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 649 "data/maps/LittlerootTown/scripts.pory"
	return
# 650 "data/maps/LittlerootTown/scripts.pory"

# 651 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale3::
# 652 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale3
# 653 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 654 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 655 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 656 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 657 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 658 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 659 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 660 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 661 "data/maps/LittlerootTown/scripts.pory"
	return
# 662 "data/maps/LittlerootTown/scripts.pory"

# 663 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale4::
# 664 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale4
# 665 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 666 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 667 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 668 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 669 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 670 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 671 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 672 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 673 "data/maps/LittlerootTown/scripts.pory"
	return
# 674 "data/maps/LittlerootTown/scripts.pory"

# 675 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale5::
# 676 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale5
# 677 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 678 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 679 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 680 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 681 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 682 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 683 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 684 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 685 "data/maps/LittlerootTown/scripts.pory"
	return
# 686 "data/maps/LittlerootTown/scripts.pory"

# 687 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale2::
# 688 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale2
# 689 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 690 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 691 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 692 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 693 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 694 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 695 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 696 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 697 "data/maps/LittlerootTown/scripts.pory"
	return
# 698 "data/maps/LittlerootTown/scripts.pory"

# 699 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale3::
# 700 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale3
# 701 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 702 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 703 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 704 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 705 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 706 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 707 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 708 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 709 "data/maps/LittlerootTown/scripts.pory"
	return
# 710 "data/maps/LittlerootTown/scripts.pory"

# 711 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale4::
# 712 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale4
# 713 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 714 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 715 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 716 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 717 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 718 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 719 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 720 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 721 "data/maps/LittlerootTown/scripts.pory"
	return
# 722 "data/maps/LittlerootTown/scripts.pory"

# 723 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale5::
# 724 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale5
# 725 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 726 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 727 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 728 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 729 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 730 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 731 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 732 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 733 "data/maps/LittlerootTown/scripts.pory"
	return
# 734 "data/maps/LittlerootTown/scripts.pory"

# 735 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayer0:
# 736 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 737 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 738 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 739 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 740 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 741 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 742 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 743 "data/maps/LittlerootTown/scripts.pory"

# 744 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayer1:
# 745 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 746 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 747 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 748 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 749 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 750 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 751 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 752 "data/maps/LittlerootTown/scripts.pory"

# 753 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale2:
# 754 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 755 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 756 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 757 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 758 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 759 "data/maps/LittlerootTown/scripts.pory"

# 760 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale3:
# 761 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 762 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 763 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 764 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 765 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 766 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 767 "data/maps/LittlerootTown/scripts.pory"

# 768 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale4:
# 769 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 770 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 771 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 772 "data/maps/LittlerootTown/scripts.pory"

# 773 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale5:
# 774 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 775 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 776 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 777 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 778 "data/maps/LittlerootTown/scripts.pory"

# 779 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale2:
# 780 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 781 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 782 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 783 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 784 "data/maps/LittlerootTown/scripts.pory"

# 785 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale3:
# 786 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 787 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 788 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 789 "data/maps/LittlerootTown/scripts.pory"

# 790 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale4:
# 791 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 792 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 793 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 794 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 795 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 796 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 797 "data/maps/LittlerootTown/scripts.pory"

# 798 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale5:
# 799 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 800 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 801 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 802 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 803 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 804 "data/maps/LittlerootTown/scripts.pory"

# 805 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHome0:
# 806 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 807 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 808 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 809 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 810 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 811 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 812 "data/maps/LittlerootTown/scripts.pory"

# 813 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHome1:
# 814 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 815 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 816 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 817 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 818 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 819 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 820 "data/maps/LittlerootTown/scripts.pory"

# 821 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale2:
# 822 "data/maps/LittlerootTown/scripts.pory"
	walk_left
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
LittlerootTown_Movement_MomReturnHomeMale3:
# 830 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 831 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 832 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 833 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 834 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 835 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 836 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 837 "data/maps/LittlerootTown/scripts.pory"

# 838 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale4:
# 839 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 840 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 841 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 842 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 843 "data/maps/LittlerootTown/scripts.pory"

# 844 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale5:
# 845 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 846 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 847 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 848 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 849 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 850 "data/maps/LittlerootTown/scripts.pory"

# 851 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale2:
# 852 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 853 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 854 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 855 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 856 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 857 "data/maps/LittlerootTown/scripts.pory"

# 858 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale3:
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
LittlerootTown_Movement_MomReturnHomeFemale4:
# 865 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 866 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 867 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 868 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 869 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 870 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 871 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 872 "data/maps/LittlerootTown/scripts.pory"

# 873 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale5:
# 874 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 875 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 876 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 877 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 878 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 879 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 880 "data/maps/LittlerootTown/scripts.pory"

# 881 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomExitThroughDoor:
# 882 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 883 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 884 "data/maps/LittlerootTown/scripts.pory"

# 885 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Mom::
# 886 "data/maps/LittlerootTown/scripts.pory"
	lock
# 887 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 888 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 889 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetHomeDoorCoordsMale
# 890 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetHomeDoorCoordsFemale
# 891 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GiveRunningShoes
# 892 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceFasterUp
# 893 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 894 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 895 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 896 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 897 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 898 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 899 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 900 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 901 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetReceivedRunningShoes
# 902 "data/maps/LittlerootTown/scripts.pory"
	end
# 903 "data/maps/LittlerootTown/scripts.pory"

# 904 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetReceivedRunningShoes::
# 905 "data/maps/LittlerootTown/scripts.pory"
	removeobject LOCALID_MOM
# 906 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 907 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 4
# 908 "data/maps/LittlerootTown/scripts.pory"
	release
# 909 "data/maps/LittlerootTown/scripts.pory"
	end
# 910 "data/maps/LittlerootTown/scripts.pory"

# 911 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoes::
# 912 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_WearTheseRunningShoes, MSGBOX_DEFAULT
# 913 "data/maps/LittlerootTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 914 "data/maps/LittlerootTown/scripts.pory"
	message LittlerootTown_Text_SwitchShoesWithRunningShoes
# 915 "data/maps/LittlerootTown/scripts.pory"
	waitfanfare
# 916 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 917 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ExplainRunningShoes, MSGBOX_DEFAULT
# 918 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ComeHomeIfAnythingHappens, MSGBOX_DEFAULT
# 919 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 920 "data/maps/LittlerootTown/scripts.pory"
	delay 30
# 921 "data/maps/LittlerootTown/scripts.pory"
	return
# 922 "data/maps/LittlerootTown/scripts.pory"

# 923 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_OurNewHomeLetsGoInside:
# 924 "data/maps/LittlerootTown/scripts.pory"
	.string "Mom: {PLAYER}, we're here, honey!\p"
# 925 "data/maps/LittlerootTown/scripts.pory"
	.string "It must be tiring riding with our things\n"
# 926 "data/maps/LittlerootTown/scripts.pory"
	.string "in the moving truck.\p"
# 927 "data/maps/LittlerootTown/scripts.pory"
	.string "Well, this is Littleroot Town.\p"
# 928 "data/maps/LittlerootTown/scripts.pory"
	.string "How do you like it?\n"
# 929 "data/maps/LittlerootTown/scripts.pory"
	.string "This is our new home!\p"
# 930 "data/maps/LittlerootTown/scripts.pory"
	.string "It has a quaint feel, but it seems to be\n"
# 931 "data/maps/LittlerootTown/scripts.pory"
	.string "an easy place to live, don't you think?\p"
# 932 "data/maps/LittlerootTown/scripts.pory"
	.string "And, you get your own room, {PLAYER}!\n"
# 933 "data/maps/LittlerootTown/scripts.pory"
	.string "Let's go inside.$"
# 934 "data/maps/LittlerootTown/scripts.pory"

# 935 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_WaitPlayer:
# 936 "data/maps/LittlerootTown/scripts.pory"
	.string "Mom: Wait, {PLAYER}!$"
# 937 "data/maps/LittlerootTown/scripts.pory"

# 938 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_WearTheseRunningShoes:
# 939 "data/maps/LittlerootTown/scripts.pory"
	.string "Mom: {PLAYER}! {PLAYER}! Did you\n"
# 940 "data/maps/LittlerootTown/scripts.pory"
	.string "introduce yourself to Prof. Birch?\p"
# 941 "data/maps/LittlerootTown/scripts.pory"
	.string "Oh! What an adorable Pokémon!\n"
# 942 "data/maps/LittlerootTown/scripts.pory"
	.string "You got it from Prof. Birch. How nice!\p"
# 943 "data/maps/LittlerootTown/scripts.pory"
	.string "You're your father's child, all right.\n"
# 944 "data/maps/LittlerootTown/scripts.pory"
	.string "You look good together with Pokémon!\p"
# 945 "data/maps/LittlerootTown/scripts.pory"
	.string "Here, honey! If you're going out on an\n"
# 946 "data/maps/LittlerootTown/scripts.pory"
	.string "adventure, wear these Running Shoes.\p"
# 947 "data/maps/LittlerootTown/scripts.pory"
	.string "They'll put a zip in your step!$"
# 948 "data/maps/LittlerootTown/scripts.pory"

# 949 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_SwitchShoesWithRunningShoes:
# 950 "data/maps/LittlerootTown/scripts.pory"
	.string "{PLAYER} switched shoes with the\n"
# 951 "data/maps/LittlerootTown/scripts.pory"
	.string "Running Shoes.$"
# 952 "data/maps/LittlerootTown/scripts.pory"

# 953 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ExplainRunningShoes:
# 954 "data/maps/LittlerootTown/scripts.pory"
	.string "Mom: {PLAYER}, those shoes came with\n"
# 955 "data/maps/LittlerootTown/scripts.pory"
	.string "instructions.\p"
# 956 "data/maps/LittlerootTown/scripts.pory"
	.string "“Press the B Button while wearing these\n"
# 957 "data/maps/LittlerootTown/scripts.pory"
	.string "Running Shoes to run extra-fast!\p"
# 958 "data/maps/LittlerootTown/scripts.pory"
	.string "“Slip on these Running Shoes and race\n"
# 959 "data/maps/LittlerootTown/scripts.pory"
	.string "in the great outdoors!”$"
# 960 "data/maps/LittlerootTown/scripts.pory"

# 961 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ComeHomeIfAnythingHappens:
# 962 "data/maps/LittlerootTown/scripts.pory"
	.string "… … … … … … … …\n"
# 963 "data/maps/LittlerootTown/scripts.pory"
	.string "… … … … … … … …\p"
# 964 "data/maps/LittlerootTown/scripts.pory"
	.string "To think that you have your very own\n"
# 965 "data/maps/LittlerootTown/scripts.pory"
	.string "Pokémon now…\l"
# 966 "data/maps/LittlerootTown/scripts.pory"
	.string "Your father will be overjoyed.\p"
# 967 "data/maps/LittlerootTown/scripts.pory"
	.string "…But please be careful.\n"
# 968 "data/maps/LittlerootTown/scripts.pory"
	.string "If anything happens, you can come home.\p"
# 969 "data/maps/LittlerootTown/scripts.pory"
	.string "Go on, go get them, honey!$"
# 970 "data/maps/LittlerootTown/scripts.pory"

# 971 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_CanUsePCToStoreItems:
# 972 "data/maps/LittlerootTown/scripts.pory"
	.string "Experts have said that we could\n"
# 973 "data/maps/LittlerootTown/scripts.pory"
	.string "be living inside of a simulation.\p"
# 974 "data/maps/LittlerootTown/scripts.pory"
	.string "The power of science is staggering!$"
# 975 "data/maps/LittlerootTown/scripts.pory"

# 976 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_BirchSpendsDaysInLab:
# 977 "data/maps/LittlerootTown/scripts.pory"
	.string "Prof. Birch spends days in his Lab\n"
# 978 "data/maps/LittlerootTown/scripts.pory"
	.string "studying, then he'll suddenly go out in\l"
# 979 "data/maps/LittlerootTown/scripts.pory"
	.string "the wild to do more research…\p"
# 980 "data/maps/LittlerootTown/scripts.pory"
	.string "When does Prof. Birch spend time\n"
# 981 "data/maps/LittlerootTown/scripts.pory"
	.string "at home?$"
# 982 "data/maps/LittlerootTown/scripts.pory"

# 983 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut:
# 984 "data/maps/LittlerootTown/scripts.pory"
	.string "Um, um, um!\p"
# 985 "data/maps/LittlerootTown/scripts.pory"
	.string "If you go outside and go in the grass,\n"
# 986 "data/maps/LittlerootTown/scripts.pory"
	.string "wild Pokémon will jump out!$"
# 987 "data/maps/LittlerootTown/scripts.pory"

# 988 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_DangerousIfYouDontHavePokemon:
# 989 "data/maps/LittlerootTown/scripts.pory"
	.string "It's dangerous if you don't have\n"
# 990 "data/maps/LittlerootTown/scripts.pory"
	.string "your own Pokémon.$"
# 991 "data/maps/LittlerootTown/scripts.pory"

# 992 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_CanYouGoSeeWhatsHappening:
# 993 "data/maps/LittlerootTown/scripts.pory"
	.string "Um, hi!\p"
# 994 "data/maps/LittlerootTown/scripts.pory"
	.string "There are scary Pokémon outside!\n"
# 995 "data/maps/LittlerootTown/scripts.pory"
	.string "I can hear their cries!\p"
# 996 "data/maps/LittlerootTown/scripts.pory"
	.string "I want to go see what's going on,\n"
# 997 "data/maps/LittlerootTown/scripts.pory"
	.string "but I don't have any Pokémon…\p"
# 998 "data/maps/LittlerootTown/scripts.pory"
	.string "Can you go see what's happening\n"
# 999 "data/maps/LittlerootTown/scripts.pory"
	.string "for me?$"
# 1000 "data/maps/LittlerootTown/scripts.pory"

# 1001 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_YouSavedBirch:
# 1002 "data/maps/LittlerootTown/scripts.pory"
	.string "You saved Prof. Birch!\n"
# 1003 "data/maps/LittlerootTown/scripts.pory"
	.string "I'm so glad!$"
# 1004 "data/maps/LittlerootTown/scripts.pory"

# 1005 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_GoodLuckCatchingPokemon:
# 1006 "data/maps/LittlerootTown/scripts.pory"
	.string "Are you going to catch Pokémon?\n"
# 1007 "data/maps/LittlerootTown/scripts.pory"
	.string "Good luck!$"
# 1008 "data/maps/LittlerootTown/scripts.pory"

# 1009 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_TownSign:
# 1010 "data/maps/LittlerootTown/scripts.pory"
	.string "Littleroot Town\n"
# 1011 "data/maps/LittlerootTown/scripts.pory"
	.string "“A town that can't be shaded any hue.”$"
# 1012 "data/maps/LittlerootTown/scripts.pory"

# 1013 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ProfBirchsLab:
# 1014 "data/maps/LittlerootTown/scripts.pory"
	.string "Prof. Birch's Pokémon Lab$"
# 1015 "data/maps/LittlerootTown/scripts.pory"

# 1016 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_PlayersHouse:
# 1017 "data/maps/LittlerootTown/scripts.pory"
	.string "{PLAYER}'s House$"
# 1018 "data/maps/LittlerootTown/scripts.pory"

# 1019 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ProfBirchsHouse:
# 1020 "data/maps/LittlerootTown/scripts.pory"
	.string "Prof. Birch's House$"
# 1021 "data/maps/LittlerootTown/scripts.pory"

# 1022 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_BirchSomethingToShowYouAtLab:
# 1023 "data/maps/LittlerootTown/scripts.pory"
	.string "Prof. Birch: Well, well, {PLAYER}{KUN}!\n"
# 1024 "data/maps/LittlerootTown/scripts.pory"
	.string "That was good work out there!\p"
# 1025 "data/maps/LittlerootTown/scripts.pory"
	.string "I knew there was something special\n"
# 1026 "data/maps/LittlerootTown/scripts.pory"
	.string "about you when I first saw you,\l"
# 1027 "data/maps/LittlerootTown/scripts.pory"
	.string "but I never expected this.\p"
# 1028 "data/maps/LittlerootTown/scripts.pory"
	.string "Oh, yes. Do you still have the Pokédex\n"
# 1029 "data/maps/LittlerootTown/scripts.pory"
	.string "I gave you?\p"
# 1030 "data/maps/LittlerootTown/scripts.pory"
	.string "I have something to show you.\n"
# 1031 "data/maps/LittlerootTown/scripts.pory"
	.string "Let's go to my Lab.$"

Baron_Town01::
# 1037 "data/maps/LittlerootTown/scripts.pory"
	lock
# 1038 "data/maps/LittlerootTown/scripts.pory"
	applymovement 9, Baron_Town01_Move
# 1039 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 1040 "data/maps/LittlerootTown/scripts.pory"
	applymovement 9, Baron_Town01_Move
# 1041 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 1042 "data/maps/LittlerootTown/scripts.pory"
	msgbox Baron_Town01_Text_0
# 1043 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 1044 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 1045 "data/maps/LittlerootTown/scripts.pory"
	playse SE_PIN
# 1046 "data/maps/LittlerootTown/scripts.pory"
	applymovement 9, Common_Movement_ExclamationMark
# 1047 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 1048 "data/maps/LittlerootTown/scripts.pory"
	delay 60
# 1049 "data/maps/LittlerootTown/scripts.pory"
	msgbox Baron_Town01_Text_1
# 1050 "data/maps/LittlerootTown/scripts.pory"
	applymovement 9, Common_Movement_FaceLeft
# 1051 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 1052 "data/maps/LittlerootTown/scripts.pory"
	release
	end


# 1056 "data/maps/LittlerootTown/scripts.pory"
Baron_Town01_Move:
# 1057 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_left
# 1058 "data/maps/LittlerootTown/scripts.pory"
	delay_16
	step_end

Baron_Town01_Text_0:
# 1042 "data/maps/LittlerootTown/scripts.pory"
	.string "Baron: Left foot... Right foot..\nLeft foot.. Right foot...$"

Baron_Town01_Text_1:
# 1049 "data/maps/LittlerootTown/scripts.pory"
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
