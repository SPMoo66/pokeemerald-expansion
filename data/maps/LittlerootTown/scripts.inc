# 1 "data/maps/LittlerootTown/scripts.pory"

# 2 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_MapScripts::
# 3 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, LittlerootTown_OnLoad
# 4 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_OnTransition
# 5 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_OnFrame
# 6 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LittlerootTown_OnWarp
# 7 "data/maps/LittlerootTown/scripts.pory"
	.byte 0
# 8 "data/maps/LittlerootTown/scripts.pory"

# 9 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_TOWN_STATE
# 10 "data/maps/LittlerootTown/scripts.pory"
	@ 1: Met Rival
# 11 "data/maps/LittlerootTown/scripts.pory"
	@ 2: Saving Birch
# 12 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Received Pokedex
# 13 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Received Running Shoes
# 14 "data/maps/LittlerootTown/scripts.pory"

# 15 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_INTRO_STATE
# 16 "data/maps/LittlerootTown/scripts.pory"
	@ 1: In truck male
# 17 "data/maps/LittlerootTown/scripts.pory"
	@ 2: In truck female
# 18 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Entered house
# 19 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Told to go set clock
# 20 "data/maps/LittlerootTown/scripts.pory"
	@ 5: Entered 2F to set clock
# 21 "data/maps/LittlerootTown/scripts.pory"
	@ 6: Set clock
# 22 "data/maps/LittlerootTown/scripts.pory"
	@ 7: Told to go meet rival
# 23 "data/maps/LittlerootTown/scripts.pory"

# 24 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_HOUSES_STATE_MAY
# 25 "data/maps/LittlerootTown/scripts.pory"
	@                    and VAR_LITTLEROOT_HOUSES_STATE_BRENDAN
# 26 "data/maps/LittlerootTown/scripts.pory"
	@ 1: On Truck (and is corresponding gender)
# 27 "data/maps/LittlerootTown/scripts.pory"
	@ 2: Met Rival's Mom (and is corresponding gender)
# 28 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Entered Hall of Fame
# 29 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Completed Lati TV / SS Ticket event
# 30 "data/maps/LittlerootTown/scripts.pory"
	@ 5: Exited house after above event
# 31 "data/maps/LittlerootTown/scripts.pory"

# 32 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_RIVAL_STATE
# 33 "data/maps/LittlerootTown/scripts.pory"
	@ 1: Never occurs
# 34 "data/maps/LittlerootTown/scripts.pory"
	@ 2: Entered Rival's bedroom
# 35 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Met Rival
# 36 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Received Pokedex
# 37 "data/maps/LittlerootTown/scripts.pory"

# 38 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_EMERALBODY_RIVAL_STATE
# 39 "data/maps/LittlerootTown/scripts.pory"
	@ 1: Set after scene outside Birch's Lab
# 40 "data/maps/LittlerootTown/scripts.pory"
	@ 2: Set after rival fight in Petalburg City
# 41 "data/maps/LittlerootTown/scripts.pory"

# 42 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnLoad:
# 43 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_EMERALBODY_RIVAL_STATE, 17, EventScript_DoNotDoor
# 44 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_EMERALBODY_RIVAL_STATE, 17, EventScript_SpawnInvisible
# 45 "data/maps/LittlerootTown/scripts.pory"
	end
# 46 "data/maps/LittlerootTown/scripts.pory"

# 47 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnTransition:
# 48 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_VISITED_LITTLEROOT_TOWN
# 49 "data/maps/LittlerootTown/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 50 "data/maps/LittlerootTown/scripts.pory"
	call Common_EventScript_SetupEmRivalGfxId
# 51 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 2, LittlerootTown_EventScript_MoveMomToMaysDoor
# 52 "data/maps/LittlerootTown/scripts.pory"
	call_if_unset FLAG_RESCUED_BIRCH, LittlerootTown_EventScript_SetTwinPos
# 53 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_TOWN_STATE, 3, LittlerootTown_EventScript_SetMomStandingInFrontOfDoorPos
# 54 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_HOUSES_STATE_MAY, 4, LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent
# 55 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 4, LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent
# 56 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_OLDALE_RIVAL_STATE, 1, LittlerootTown_EventScript_MoveRivalFromOldale
# 57 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_RIVAL_STATE, 3, LittlerootTown_EventScript_SetRivalLeftForRoute103
# 58 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, EventScript_HideMapNamePopup
# 59 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2, LittlerootTown_EventScript_LeftLabAfterDexUpgrade
# 60 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_TEMP_1
# 61 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_TEMP_2
# 62 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_TEMP_3
# 63 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_TEMP_4
# 64 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_EMERALBODY_RIVAL_STATE, 1, EventScript_Clear_FlagTemp1
# 65 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_EMERALBODY_RIVAL_STATE, 0, LittlerootTown_EventScript_ShowRivalCheck
# 66 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_EMERALBODY_RIVAL_STATE, 17, EventScript_Clear_FlagTemp3
# 67 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_EMERALBODY_RIVAL_STATE, 17, Rival_Scene05_MapOnTransition
# 68 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_EMERALBODY_RIVAL_STATE, 18, EventScript_Clear_FlagTemp4
# 69 "data/maps/LittlerootTown/scripts.pory"
	end
# 70 "data/maps/LittlerootTown/scripts.pory"

# 71 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_ShowRivalCheck::
# 72 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_BIRCH_LAB_STATE, 3, EventScript_Clear_FlagTemp2
# 73 "data/maps/LittlerootTown/scripts.pory"
	return
# 74 "data/maps/LittlerootTown/scripts.pory"

# 75 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_LeftLabAfterDexUpgrade::
# 76 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 3
# 77 "data/maps/LittlerootTown/scripts.pory"
	return
# 78 "data/maps/LittlerootTown/scripts.pory"

# 79 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalLeftForRoute103::
# 80 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_RIVAL_LEFT_FOR_ROUTE103
# 81 "data/maps/LittlerootTown/scripts.pory"
	return
# 82 "data/maps/LittlerootTown/scripts.pory"

# 83 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MoveRivalFromOldale::
# 84 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_OLDALE_RIVAL_STATE, 2
# 85 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_OLDALE_TOWN_RIVAL
# 86 "data/maps/LittlerootTown/scripts.pory"
	return
# 87 "data/maps/LittlerootTown/scripts.pory"

# 88 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent::
# 89 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 5
# 90 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 5
# 91 "data/maps/LittlerootTown/scripts.pory"
	return
# 92 "data/maps/LittlerootTown/scripts.pory"

# 93 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MoveMomToMaysDoor::
# 94 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_LITTLEROOT_MOM, 14, 8
# 95 "data/maps/LittlerootTown/scripts.pory"
	return
# 96 "data/maps/LittlerootTown/scripts.pory"

# 97 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetTwinPos::
# 98 "data/maps/LittlerootTown/scripts.pory"
	goto_if_eq VAR_LITTLEROOT_TOWN_STATE, 0, LittlerootTown_EventScript_SetTwinGuardingRoutePos
# 99 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_LITTLEROOT_TWIN, 10, 1
# 100 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_LITTLEROOT_TWIN, MOVEMENT_TYPE_FACE_UP
# 101 "data/maps/LittlerootTown/scripts.pory"
	return
# 102 "data/maps/LittlerootTown/scripts.pory"

# 103 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetTwinGuardingRoutePos::
# 104 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_LITTLEROOT_TWIN, 7, 2
# 105 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_LITTLEROOT_TWIN, MOVEMENT_TYPE_FACE_DOWN
# 106 "data/maps/LittlerootTown/scripts.pory"
	return
# 107 "data/maps/LittlerootTown/scripts.pory"

# 108 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetMomStandingInFrontOfDoorPos::
# 109 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
# 110 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_LITTLEROOT_MOM, MOVEMENT_TYPE_FACE_DOWN
# 111 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 112 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetMomInFrontOfDoorMale
# 113 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetMomInFrontOfDoorFemale
# 114 "data/maps/LittlerootTown/scripts.pory"
	return
# 115 "data/maps/LittlerootTown/scripts.pory"

# 116 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetMomInFrontOfDoorMale::
# 117 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_LITTLEROOT_MOM, 5, 9
# 118 "data/maps/LittlerootTown/scripts.pory"
	return
# 119 "data/maps/LittlerootTown/scripts.pory"

# 120 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetMomInFrontOfDoorFemale::
# 121 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_LITTLEROOT_MOM, 14, 9
# 122 "data/maps/LittlerootTown/scripts.pory"
	return
# 123 "data/maps/LittlerootTown/scripts.pory"

# 124 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnFrame:
# 125 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 1, LittlerootTown_EventScript_StepOffTruckMale
# 126 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 2, LittlerootTown_EventScript_StepOffTruckFemale
# 127 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_BeginDexUpgradeScene
# 128 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_EMERALBODY_RIVAL_STATE, 17, Rival_Scene05
# 129 "data/maps/LittlerootTown/scripts.pory"
	.2byte 0
# 130 "data/maps/LittlerootTown/scripts.pory"

# 131 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_StepOffTruckMale::
# 132 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 133 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8004, 5
# 134 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8005, 8
# 135 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GoInsideWithMom
# 136 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_TRUCK
# 137 "data/maps/LittlerootTown/scripts.pory"
	warpsilent MAP_LITTLEROOT_TOWN_BRENDANS_HOUSE_1F, 8, 8
# 138 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 139 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 140 "data/maps/LittlerootTown/scripts.pory"
	end
# 141 "data/maps/LittlerootTown/scripts.pory"

# 142 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_StepOffTruckFemale::
# 143 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 144 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8004, 14
# 145 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8005, 8
# 146 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GoInsideWithMom
# 147 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_TRUCK
# 148 "data/maps/LittlerootTown/scripts.pory"
	warpsilent MAP_LITTLEROOT_TOWN_MAYS_HOUSE_1F, 2, 8
# 149 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 150 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 151 "data/maps/LittlerootTown/scripts.pory"
	end
# 152 "data/maps/LittlerootTown/scripts.pory"

# 153 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoInsideWithMom::
# 154 "data/maps/LittlerootTown/scripts.pory"
	delay 15
# 155 "data/maps/LittlerootTown/scripts.pory"
	playse SE_LEDGE
# 156 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_Movement_PlayerStepOffTruck
# 157 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 158 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 159 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 160 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_LITTLEROOT_MOM
# 161 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, Common_Movement_WalkDown
# 162 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 163 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 164 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 165 "data/maps/LittlerootTown/scripts.pory"
	delay 10
# 166 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayerAtTruck
# 167 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 168 "data/maps/LittlerootTown/scripts.pory"
	speakername CommonText_Mom
# 169 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_OurNewHomeLetsGoInside, MSGBOX_DEFAULT
# 170 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 171 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachDoor
# 172 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_Movement_PlayerApproachDoor
# 173 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 174 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 175 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 176 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, Common_Movement_EnterHouse
# 177 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp2
# 178 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 179 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
# 180 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 3
# 181 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_PLAYER, 0
# 182 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 183 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 184 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_FAT_MAN
# 185 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 186 "data/maps/LittlerootTown/scripts.pory"
	return
# 187 "data/maps/LittlerootTown/scripts.pory"

# 188 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerAtTruck:
# 189 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 190 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_left
# 191 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 192 "data/maps/LittlerootTown/scripts.pory"

# 193 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachDoor:
# 194 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 195 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 196 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 197 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 198 "data/maps/LittlerootTown/scripts.pory"

# 199 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PlayerApproachDoor:
# 200 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 201 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 202 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 203 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 204 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 205 "data/maps/LittlerootTown/scripts.pory"

# 206 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PlayerStepOffTruck:
# 207 "data/maps/LittlerootTown/scripts.pory"
	jump_right
# 208 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 209 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 210 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 211 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 212 "data/maps/LittlerootTown/scripts.pory"

# 213 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BeginDexUpgradeScene::
# 214 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 215 "data/maps/LittlerootTown/scripts.pory"
	playse SE_PIN
# 216 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_BIRCH, Common_Movement_ExclamationMark
# 217 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 218 "data/maps/LittlerootTown/scripts.pory"
	delay 80
# 219 "data/maps/LittlerootTown/scripts.pory"
	speakername CommonText_Birch
# 220 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_BirchSomethingToShowYouAtLab, MSGBOX_DEFAULT
# 221 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 222 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_RIVAL
# 223 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH
# 224 "data/maps/LittlerootTown/scripts.pory"
	delay 20
# 225 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 226 "data/maps/LittlerootTown/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB, 6, 5
# 227 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 228 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 229 "data/maps/LittlerootTown/scripts.pory"
	end
# 230 "data/maps/LittlerootTown/scripts.pory"

# 231 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnWarp:
# 232 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_SetRivalBirchPosForDexUpgrade
# 233 "data/maps/LittlerootTown/scripts.pory"
	.2byte 0
# 234 "data/maps/LittlerootTown/scripts.pory"

# 235 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgrade::
# 236 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_LITTLEROOT_BIRCH
# 237 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_LITTLEROOT_RIVAL
# 238 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 239 "data/maps/LittlerootTown/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeMale
# 240 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeFemale
# 241 "data/maps/LittlerootTown/scripts.pory"
	end
# 242 "data/maps/LittlerootTown/scripts.pory"

# 243 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeMale::
# 244 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_LITTLEROOT_RIVAL, 6, 10
# 245 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_LITTLEROOT_BIRCH, 5, 10
# 246 "data/maps/LittlerootTown/scripts.pory"
	end
# 247 "data/maps/LittlerootTown/scripts.pory"

# 248 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeFemale::
# 249 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_LITTLEROOT_RIVAL, 13, 10
# 250 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_LITTLEROOT_BIRCH, 14, 10
# 251 "data/maps/LittlerootTown/scripts.pory"
	end
# 252 "data/maps/LittlerootTown/scripts.pory"

# 253 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_FatMan::
# 254 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_Simulation, MSGBOX_NPC
# 255 "data/maps/LittlerootTown/scripts.pory"
	end
# 256 "data/maps/LittlerootTown/scripts.pory"

# 257 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Boy::
# 258 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_BirchSpendsDaysInLab, MSGBOX_NPC
# 259 "data/maps/LittlerootTown/scripts.pory"
	end
# 260 "data/maps/LittlerootTown/scripts.pory"

# 261 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Twin::
# 262 "data/maps/LittlerootTown/scripts.pory"
	lock
# 263 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 264 "data/maps/LittlerootTown/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, LittlerootTown_EventScript_GoodLuck
# 265 "data/maps/LittlerootTown/scripts.pory"
	goto_if_set FLAG_RESCUED_BIRCH, LittlerootTown_EventScript_YouSavedBirch
# 266 "data/maps/LittlerootTown/scripts.pory"
	goto_if_ne VAR_LITTLEROOT_TOWN_STATE, 0, LittlerootTown_EventScript_GoSaveBirch
# 267 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut, MSGBOX_DEFAULT
# 268 "data/maps/LittlerootTown/scripts.pory"
	release
# 269 "data/maps/LittlerootTown/scripts.pory"
	end
# 270 "data/maps/LittlerootTown/scripts.pory"

# 271 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoSaveBirch::
# 272 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 273 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanYouGoSeeWhatsHappening, MSGBOX_DEFAULT
# 274 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 275 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, Common_Movement_FaceOriginalDirection
# 276 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 277 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 278 "data/maps/LittlerootTown/scripts.pory"
	release
# 279 "data/maps/LittlerootTown/scripts.pory"
	end
# 280 "data/maps/LittlerootTown/scripts.pory"

# 281 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_YouSavedBirch::
# 282 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 283 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_YouSavedBirch, MSGBOX_DEFAULT
# 284 "data/maps/LittlerootTown/scripts.pory"
	release
# 285 "data/maps/LittlerootTown/scripts.pory"
	end
# 286 "data/maps/LittlerootTown/scripts.pory"

# 287 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoodLuck::
# 288 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_GoodLuckCatchingPokemon, MSGBOX_DEFAULT
# 289 "data/maps/LittlerootTown/scripts.pory"
	release
# 290 "data/maps/LittlerootTown/scripts.pory"
	end
# 291 "data/maps/LittlerootTown/scripts.pory"

# 292 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerLeft::
# 293 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 294 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, LittlerootTown_Movement_TwinApproachPlayerLeft
# 295 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 296 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemon
# 297 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, LittlerootTown_Movement_TwinReturnLeft
# 298 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 299 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 300 "data/maps/LittlerootTown/scripts.pory"
	end
# 301 "data/maps/LittlerootTown/scripts.pory"

# 302 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_DangerousWithoutPokemon::
# 303 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut, MSGBOX_DEFAULT
# 304 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 305 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, Common_Movement_WalkDown
# 306 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_Movement_PushPlayerBackFromRoute
# 307 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 308 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_DangerousIfYouDontHavePokemon, MSGBOX_DEFAULT
# 309 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 310 "data/maps/LittlerootTown/scripts.pory"
	return
# 311 "data/maps/LittlerootTown/scripts.pory"

# 312 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinApproachPlayerLeft:
# 313 "data/maps/LittlerootTown/scripts.pory"
	face_right
# 314 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 315 "data/maps/LittlerootTown/scripts.pory"
	disable_jump_landing_ground_effect
# 316 "data/maps/LittlerootTown/scripts.pory"
	jump_in_place_right
# 317 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 318 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 319 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 320 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 321 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 322 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 323 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 324 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_left
# 325 "data/maps/LittlerootTown/scripts.pory"
	face_down
# 326 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 327 "data/maps/LittlerootTown/scripts.pory"

# 328 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinReturnLeft:
# 329 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 330 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 331 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 332 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 333 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 334 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 335 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 336 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 337 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_down
# 338 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 339 "data/maps/LittlerootTown/scripts.pory"

# 340 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PushPlayerBackFromRoute:
# 341 "data/maps/LittlerootTown/scripts.pory"
	lock_facing_direction
# 342 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 343 "data/maps/LittlerootTown/scripts.pory"
	unlock_facing_direction
# 344 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 345 "data/maps/LittlerootTown/scripts.pory"

# 346 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerRight::
# 347 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 348 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, LittlerootTown_Movement_TwinApproachPlayerRight
# 349 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 350 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemon
# 351 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, LittlerootTown_Movement_TwinReturnRight
# 352 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 353 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 354 "data/maps/LittlerootTown/scripts.pory"
	end
# 355 "data/maps/LittlerootTown/scripts.pory"

# 356 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinApproachPlayerRight:
# 357 "data/maps/LittlerootTown/scripts.pory"
	face_right
# 358 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 359 "data/maps/LittlerootTown/scripts.pory"
	disable_jump_landing_ground_effect
# 360 "data/maps/LittlerootTown/scripts.pory"
	jump_in_place_right
# 361 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 362 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 363 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 364 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 365 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 366 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 367 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 368 "data/maps/LittlerootTown/scripts.pory"
	face_down
# 369 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 370 "data/maps/LittlerootTown/scripts.pory"

# 371 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinReturnRight:
# 372 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 373 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 374 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 375 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 376 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 377 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_down
# 378 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 379 "data/maps/LittlerootTown/scripts.pory"

# 380 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoSaveBirchTrigger::
# 381 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 382 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, Common_Movement_WalkInPlaceFasterRight
# 383 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 384 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 385 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 386 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 387 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanYouGoSeeWhatsHappening, MSGBOX_DEFAULT
# 388 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 389 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, Common_Movement_FaceOriginalDirection
# 390 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 391 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 392 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 393 "data/maps/LittlerootTown/scripts.pory"
	end
# 394 "data/maps/LittlerootTown/scripts.pory"

# 395 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_TownSign::
# 396 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_TownSign, MSGBOX_SIGN
# 397 "data/maps/LittlerootTown/scripts.pory"
	end
# 398 "data/maps/LittlerootTown/scripts.pory"

# 399 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BirchsLabSign::
# 400 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsLab, MSGBOX_SIGN
# 401 "data/maps/LittlerootTown/scripts.pory"
	end
# 402 "data/maps/LittlerootTown/scripts.pory"

# 403 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BrendansHouseSign::
# 404 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 405 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 406 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_PlayersHouseSignMale
# 407 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_BirchsHouseSignFemale
# 408 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 409 "data/maps/LittlerootTown/scripts.pory"
	end
# 410 "data/maps/LittlerootTown/scripts.pory"

# 411 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_PlayersHouseSignMale::
# 412 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_PlayersHouse, MSGBOX_DEFAULT
# 413 "data/maps/LittlerootTown/scripts.pory"
	return
# 414 "data/maps/LittlerootTown/scripts.pory"

# 415 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BirchsHouseSignFemale::
# 416 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsHouse, MSGBOX_DEFAULT
# 417 "data/maps/LittlerootTown/scripts.pory"
	return
# 418 "data/maps/LittlerootTown/scripts.pory"

# 419 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MaysHouseSign::
# 420 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 421 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 422 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_BirchsHouseSignMale
# 423 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_PlayersHouseSignFemale
# 424 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 425 "data/maps/LittlerootTown/scripts.pory"
	end
# 426 "data/maps/LittlerootTown/scripts.pory"

# 427 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BirchsHouseSignMale::
# 428 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsHouse, MSGBOX_DEFAULT
# 429 "data/maps/LittlerootTown/scripts.pory"
	return
# 430 "data/maps/LittlerootTown/scripts.pory"

# 431 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_PlayersHouseSignFemale::
# 432 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_PlayersHouse, MSGBOX_DEFAULT
# 433 "data/maps/LittlerootTown/scripts.pory"
	return
# 434 "data/maps/LittlerootTown/scripts.pory"

# 435 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger0::
# 436 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 437 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 0
# 438 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_LITTLEROOT_MOM, 10, 9
# 439 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 440 "data/maps/LittlerootTown/scripts.pory"
	end
# 441 "data/maps/LittlerootTown/scripts.pory"

# 442 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger1::
# 443 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 444 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 1
# 445 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_LITTLEROOT_MOM, 11, 9
# 446 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 447 "data/maps/LittlerootTown/scripts.pory"
	end
# 448 "data/maps/LittlerootTown/scripts.pory"

# 449 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger2::
# 450 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 451 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 2
# 452 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 453 "data/maps/LittlerootTown/scripts.pory"
	end
# 454 "data/maps/LittlerootTown/scripts.pory"

# 455 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger3::
# 456 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 457 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 3
# 458 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 459 "data/maps/LittlerootTown/scripts.pory"
	end
# 460 "data/maps/LittlerootTown/scripts.pory"

# 461 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger4::
# 462 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 463 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 4
# 464 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 465 "data/maps/LittlerootTown/scripts.pory"
	end
# 466 "data/maps/LittlerootTown/scripts.pory"

# 467 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger5::
# 468 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 469 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 5
# 470 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 471 "data/maps/LittlerootTown/scripts.pory"
	end
# 472 "data/maps/LittlerootTown/scripts.pory"

# 473 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger::
# 474 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 475 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomNoticePlayerMale
# 476 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomNoticePlayerFemale
# 477 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 478 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetHomeDoorCoordsMale
# 479 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetHomeDoorCoordsFemale
# 480 "data/maps/LittlerootTown/scripts.pory"
	speakername CommonText_Mom
# 481 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_WaitPlayer, MSGBOX_DEFAULT
# 482 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 483 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 484 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomApproachPlayerMale
# 485 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomApproachPlayerFemale
# 486 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GiveRunningShoes
# 487 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 488 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomReturnHomeMale
# 489 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomReturnHomeFemale
# 490 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetReceivedRunningShoes
# 491 "data/maps/LittlerootTown/scripts.pory"
	end
# 492 "data/maps/LittlerootTown/scripts.pory"

# 493 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetHomeDoorCoordsMale::
# 494 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8009, 5
# 495 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x800A, 8
# 496 "data/maps/LittlerootTown/scripts.pory"
	return
# 497 "data/maps/LittlerootTown/scripts.pory"

# 498 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetHomeDoorCoordsFemale::
# 499 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8009, 14
# 500 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x800A, 8
# 501 "data/maps/LittlerootTown/scripts.pory"
	return
# 502 "data/maps/LittlerootTown/scripts.pory"

# 503 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomNoticePlayerMale::
# 504 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, Common_Movement_WalkInPlaceFasterRight
# 505 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 506 "data/maps/LittlerootTown/scripts.pory"
	return
# 507 "data/maps/LittlerootTown/scripts.pory"

# 508 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomNoticePlayerFemale::
# 509 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, Common_Movement_WalkInPlaceFasterLeft
# 510 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 511 "data/maps/LittlerootTown/scripts.pory"
	return
# 512 "data/maps/LittlerootTown/scripts.pory"

# 513 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale::
# 514 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomApproachPlayer0
# 515 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomApproachPlayer1
# 516 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomApproachPlayerMale2
# 517 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomApproachPlayerMale3
# 518 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomApproachPlayerMale4
# 519 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomApproachPlayerMale5
# 520 "data/maps/LittlerootTown/scripts.pory"
	return
# 521 "data/maps/LittlerootTown/scripts.pory"

# 522 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale::
# 523 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomApproachPlayer0
# 524 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomApproachPlayer1
# 525 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomApproachPlayerFemale2
# 526 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomApproachPlayerFemale3
# 527 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomApproachPlayerFemale4
# 528 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomApproachPlayerFemale5
# 529 "data/maps/LittlerootTown/scripts.pory"
	return
# 530 "data/maps/LittlerootTown/scripts.pory"

# 531 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayer0::
# 532 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 533 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 534 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, Common_Movement_WalkUp6
# 535 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 536 "data/maps/LittlerootTown/scripts.pory"
	return
# 537 "data/maps/LittlerootTown/scripts.pory"

# 538 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayer1::
# 539 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 540 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 541 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, Common_Movement_WalkUp6
# 542 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 543 "data/maps/LittlerootTown/scripts.pory"
	return
# 544 "data/maps/LittlerootTown/scripts.pory"

# 545 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale2::
# 546 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 547 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 548 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, Common_Movement_WalkRight4
# 549 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 550 "data/maps/LittlerootTown/scripts.pory"
	return
# 551 "data/maps/LittlerootTown/scripts.pory"

# 552 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale3::
# 553 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 554 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 555 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, Common_Movement_WalkRight5
# 556 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 557 "data/maps/LittlerootTown/scripts.pory"
	return
# 558 "data/maps/LittlerootTown/scripts.pory"

# 559 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale4::
# 560 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 561 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 562 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, Common_Movement_WalkRight2
# 563 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 564 "data/maps/LittlerootTown/scripts.pory"
	return
# 565 "data/maps/LittlerootTown/scripts.pory"

# 566 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale5::
# 567 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 568 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 569 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, Common_Movement_WalkRight3
# 570 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 571 "data/maps/LittlerootTown/scripts.pory"
	return
# 572 "data/maps/LittlerootTown/scripts.pory"

# 573 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale2::
# 574 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 575 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 576 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, Common_Movement_WalkLeft3
# 577 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 578 "data/maps/LittlerootTown/scripts.pory"
	return
# 579 "data/maps/LittlerootTown/scripts.pory"

# 580 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale3::
# 581 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 582 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 583 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, Common_Movement_WalkLeft2
# 584 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 585 "data/maps/LittlerootTown/scripts.pory"
	return
# 586 "data/maps/LittlerootTown/scripts.pory"

# 587 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale4::
# 588 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 589 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 590 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, Common_Movement_WalkLeft5
# 591 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 592 "data/maps/LittlerootTown/scripts.pory"
	return
# 593 "data/maps/LittlerootTown/scripts.pory"

# 594 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale5::
# 595 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 596 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 597 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, Common_Movement_WalkLeft4
# 598 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 599 "data/maps/LittlerootTown/scripts.pory"
	return
# 600 "data/maps/LittlerootTown/scripts.pory"

# 601 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale::
# 602 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomReturnHome0
# 603 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomReturnHome1
# 604 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomReturnHomeMale2
# 605 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomReturnHomeMale3
# 606 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomReturnHomeMale4
# 607 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomReturnHomeMale5
# 608 "data/maps/LittlerootTown/scripts.pory"
	return
# 609 "data/maps/LittlerootTown/scripts.pory"

# 610 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale::
# 611 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomReturnHome0
# 612 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomReturnHome1
# 613 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomReturnHomeFemale2
# 614 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomReturnHomeFemale3
# 615 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomReturnHomeFemale4
# 616 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomReturnHomeFemale5
# 617 "data/maps/LittlerootTown/scripts.pory"
	return
# 618 "data/maps/LittlerootTown/scripts.pory"

# 619 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHome0::
# 620 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, Common_Movement_WalkDown5
# 621 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 622 "data/maps/LittlerootTown/scripts.pory"
	return
# 623 "data/maps/LittlerootTown/scripts.pory"

# 624 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHome1::
# 625 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, Common_Movement_WalkDown5
# 626 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 627 "data/maps/LittlerootTown/scripts.pory"
	return
# 628 "data/maps/LittlerootTown/scripts.pory"

# 629 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale2::
# 630 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHomeMale2
# 631 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 632 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 633 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 634 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, Common_Movement_WalkUp
# 635 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 636 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 637 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 638 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 639 "data/maps/LittlerootTown/scripts.pory"
	return
# 640 "data/maps/LittlerootTown/scripts.pory"

# 641 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale3::
# 642 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHomeMale3
# 643 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 644 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 645 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 646 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, Common_Movement_WalkUp
# 647 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 648 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 649 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 650 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 651 "data/maps/LittlerootTown/scripts.pory"
	return
# 652 "data/maps/LittlerootTown/scripts.pory"

# 653 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale4::
# 654 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHomeMale4
# 655 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 656 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 657 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 658 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, Common_Movement_WalkUp
# 659 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 660 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 661 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 662 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 663 "data/maps/LittlerootTown/scripts.pory"
	return
# 664 "data/maps/LittlerootTown/scripts.pory"

# 665 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale5::
# 666 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHomeMale5
# 667 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 668 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 669 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 670 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, Common_Movement_WalkUp
# 671 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 672 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 673 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 674 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 675 "data/maps/LittlerootTown/scripts.pory"
	return
# 676 "data/maps/LittlerootTown/scripts.pory"

# 677 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale2::
# 678 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHomeFemale2
# 679 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 680 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 681 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 682 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, Common_Movement_WalkUp
# 683 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 684 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 685 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 686 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 687 "data/maps/LittlerootTown/scripts.pory"
	return
# 688 "data/maps/LittlerootTown/scripts.pory"

# 689 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale3::
# 690 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHomeFemale3
# 691 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 692 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 693 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 694 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, Common_Movement_WalkUp
# 695 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 696 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 697 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 698 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 699 "data/maps/LittlerootTown/scripts.pory"
	return
# 700 "data/maps/LittlerootTown/scripts.pory"

# 701 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale4::
# 702 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHomeFemale4
# 703 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 704 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 705 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 706 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, Common_Movement_WalkUp
# 707 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 708 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 709 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 710 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 711 "data/maps/LittlerootTown/scripts.pory"
	return
# 712 "data/maps/LittlerootTown/scripts.pory"

# 713 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale5::
# 714 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHomeFemale5
# 715 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 716 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 717 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 718 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, Common_Movement_WalkUp
# 719 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 720 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 721 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 722 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 723 "data/maps/LittlerootTown/scripts.pory"
	return
# 724 "data/maps/LittlerootTown/scripts.pory"

# 725 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale2:
# 726 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 727 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 728 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 729 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 730 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 731 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 732 "data/maps/LittlerootTown/scripts.pory"

# 733 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale3:
# 734 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 735 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 736 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 737 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 738 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 739 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 740 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 741 "data/maps/LittlerootTown/scripts.pory"

# 742 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale4:
# 743 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 744 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 745 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 746 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 747 "data/maps/LittlerootTown/scripts.pory"

# 748 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale5:
# 749 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 750 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 751 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 752 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 753 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 754 "data/maps/LittlerootTown/scripts.pory"

# 755 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale2:
# 756 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 757 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 758 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 759 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 760 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 761 "data/maps/LittlerootTown/scripts.pory"

# 762 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale3:
# 763 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 764 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 765 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 766 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 767 "data/maps/LittlerootTown/scripts.pory"

# 768 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale4:
# 769 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 770 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 771 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 772 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 773 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 774 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 775 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 776 "data/maps/LittlerootTown/scripts.pory"

# 777 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale5:
# 778 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 779 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 780 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 781 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 782 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 783 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 784 "data/maps/LittlerootTown/scripts.pory"

# 785 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Mom::
# 786 "data/maps/LittlerootTown/scripts.pory"
	lock
# 787 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 788 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 789 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetHomeDoorCoordsMale
# 790 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetHomeDoorCoordsFemale
# 791 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GiveRunningShoes
# 792 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, Common_Movement_WalkInPlaceFasterUp
# 793 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 794 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 795 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 796 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, Common_Movement_WalkUp
# 797 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 798 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 799 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 800 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 801 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetReceivedRunningShoes
# 802 "data/maps/LittlerootTown/scripts.pory"
	end
# 803 "data/maps/LittlerootTown/scripts.pory"

# 804 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetReceivedRunningShoes::
# 805 "data/maps/LittlerootTown/scripts.pory"
	removeobject LOCALID_LITTLEROOT_MOM
# 806 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 4
# 807 "data/maps/LittlerootTown/scripts.pory"
	release
# 808 "data/maps/LittlerootTown/scripts.pory"
	end
# 809 "data/maps/LittlerootTown/scripts.pory"

# 810 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoes::
# 811 "data/maps/LittlerootTown/scripts.pory"
	speakername CommonText_Mom
# 812 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_WearTheseRunningShoes, MSGBOX_DEFAULT
# 813 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 814 "data/maps/LittlerootTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 815 "data/maps/LittlerootTown/scripts.pory"
	message LittlerootTown_Text_SwitchShoesWithRunningShoes
# 816 "data/maps/LittlerootTown/scripts.pory"
	waitfanfare
# 817 "data/maps/LittlerootTown/scripts.pory"
	speakername CommonText_Mom
# 818 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ExplainRunningShoes, MSGBOX_DEFAULT
# 819 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 820 "data/maps/LittlerootTown/scripts.pory"
	giveitem ITEM_OLD_ROD
# 821 "data/maps/LittlerootTown/scripts.pory"
	speakername CommonText_Mom
# 822 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ComeHomeIfAnythingHappens, MSGBOX_DEFAULT
# 823 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 824 "data/maps/LittlerootTown/scripts.pory"
	delay 30
# 825 "data/maps/LittlerootTown/scripts.pory"
	return
# 826 "data/maps/LittlerootTown/scripts.pory"

# 827 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_OurNewHomeLetsGoInside:
# 828 "data/maps/LittlerootTown/scripts.pory"
	.string "{PLAYER}, we're here, honey!\p"
# 829 "data/maps/LittlerootTown/scripts.pory"
	.string "It must be tiring riding with our things\n"
# 830 "data/maps/LittlerootTown/scripts.pory"
	.string "in the moving truck.\p"
# 831 "data/maps/LittlerootTown/scripts.pory"
	.string "Well, this is Littleroot Town.\p"
# 832 "data/maps/LittlerootTown/scripts.pory"
	.string "How do you like it?\n"
# 833 "data/maps/LittlerootTown/scripts.pory"
	.string "This is our new home!\p"
# 834 "data/maps/LittlerootTown/scripts.pory"
	.string "It has a quaint feel, but it seems to be\n"
# 835 "data/maps/LittlerootTown/scripts.pory"
	.string "an easy place to live, don't you think?\p"
# 836 "data/maps/LittlerootTown/scripts.pory"
	.string "And, you get your own room, {PLAYER}!\n"
# 837 "data/maps/LittlerootTown/scripts.pory"
	.string "Let's go inside.$"
# 838 "data/maps/LittlerootTown/scripts.pory"

# 839 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_WaitPlayer:
# 840 "data/maps/LittlerootTown/scripts.pory"
	.string "Wait, {PLAYER}!$"
# 841 "data/maps/LittlerootTown/scripts.pory"

# 842 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_WearTheseRunningShoes:
# 843 "data/maps/LittlerootTown/scripts.pory"
	.string "{PLAYER}! {PLAYER}! Did you\n"
# 844 "data/maps/LittlerootTown/scripts.pory"
	.string "introduce yourself to Prof. Birch?\p"
# 845 "data/maps/LittlerootTown/scripts.pory"
	.string "Oh! What an adorable Pokémon!\n"
# 846 "data/maps/LittlerootTown/scripts.pory"
	.string "You got it from Prof. Birch. How nice!\p"
# 847 "data/maps/LittlerootTown/scripts.pory"
	.string "You're your father's child, all right.\n"
# 848 "data/maps/LittlerootTown/scripts.pory"
	.string "You look good together with Pokémon!\p"
# 849 "data/maps/LittlerootTown/scripts.pory"
	.string "Here, honey! If you're going out on an\n"
# 850 "data/maps/LittlerootTown/scripts.pory"
	.string "adventure, wear these new shoes I got\l"
# 851 "data/maps/LittlerootTown/scripts.pory"
	.string "for you!$"
# 852 "data/maps/LittlerootTown/scripts.pory"

# 853 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_SwitchShoesWithRunningShoes:
# 854 "data/maps/LittlerootTown/scripts.pory"
	.string "{PLAYER} switched shoes with the\n"
# 855 "data/maps/LittlerootTown/scripts.pory"
	.string "new pair from Mom!$"
# 856 "data/maps/LittlerootTown/scripts.pory"

# 857 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ExplainRunningShoes:
# 858 "data/maps/LittlerootTown/scripts.pory"
	.string "{PLAYER}, those shoes look so\n"
# 859 "data/maps/LittlerootTown/scripts.pory"
	.string "stylish on you!\p"
# 860 "data/maps/LittlerootTown/scripts.pory"
	.string "Oh!\n"
# 861 "data/maps/LittlerootTown/scripts.pory"
	.string "Let me give you your old fishing rod.$"
# 862 "data/maps/LittlerootTown/scripts.pory"

# 863 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ComeHomeIfAnythingHappens:
# 864 "data/maps/LittlerootTown/scripts.pory"
	.string "… … … … … … … …\n"
# 865 "data/maps/LittlerootTown/scripts.pory"
	.string "… … … … … … … …\p"
# 866 "data/maps/LittlerootTown/scripts.pory"
	.string "To think that you have your very own\n"
# 867 "data/maps/LittlerootTown/scripts.pory"
	.string "Pokémon now…\l"
# 868 "data/maps/LittlerootTown/scripts.pory"
	.string "Your father will be overjoyed.\p"
# 869 "data/maps/LittlerootTown/scripts.pory"
	.string "…But please be careful.\n"
# 870 "data/maps/LittlerootTown/scripts.pory"
	.string "If anything happens, you can come home.\p"
# 871 "data/maps/LittlerootTown/scripts.pory"
	.string "Go on, go get them, honey!$"
# 872 "data/maps/LittlerootTown/scripts.pory"

# 873 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_Simulation:
# 874 "data/maps/LittlerootTown/scripts.pory"
	.string "Experts have said that we could\n"
# 875 "data/maps/LittlerootTown/scripts.pory"
	.string "be living inside of a simulation.\p"
# 876 "data/maps/LittlerootTown/scripts.pory"
	.string "The power of science is staggering!$"
# 877 "data/maps/LittlerootTown/scripts.pory"

# 878 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_BirchSpendsDaysInLab:
# 879 "data/maps/LittlerootTown/scripts.pory"
	.string "Prof. Birch spends days in his Lab\n"
# 880 "data/maps/LittlerootTown/scripts.pory"
	.string "studying, then he'll suddenly go out in\l"
# 881 "data/maps/LittlerootTown/scripts.pory"
	.string "the wild to do more research…\p"
# 882 "data/maps/LittlerootTown/scripts.pory"
	.string "When does Prof. Birch spend time\n"
# 883 "data/maps/LittlerootTown/scripts.pory"
	.string "at home?$"
# 884 "data/maps/LittlerootTown/scripts.pory"

# 885 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut:
# 886 "data/maps/LittlerootTown/scripts.pory"
	.string "Um, um, um!\p"
# 887 "data/maps/LittlerootTown/scripts.pory"
	.string "If you go outside and go in the grass,\n"
# 888 "data/maps/LittlerootTown/scripts.pory"
	.string "wild Pokémon will jump out!$"
# 889 "data/maps/LittlerootTown/scripts.pory"

# 890 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_DangerousIfYouDontHavePokemon:
# 891 "data/maps/LittlerootTown/scripts.pory"
	.string "It's dangerous if you don't have\n"
# 892 "data/maps/LittlerootTown/scripts.pory"
	.string "your own Pokémon.$"
# 893 "data/maps/LittlerootTown/scripts.pory"

# 894 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_CanYouGoSeeWhatsHappening:
# 895 "data/maps/LittlerootTown/scripts.pory"
	.string "Um, hi!\p"
# 896 "data/maps/LittlerootTown/scripts.pory"
	.string "There are scary Pokémon outside!\n"
# 897 "data/maps/LittlerootTown/scripts.pory"
	.string "I can hear their cries!\p"
# 898 "data/maps/LittlerootTown/scripts.pory"
	.string "I want to go see what's going on,\n"
# 899 "data/maps/LittlerootTown/scripts.pory"
	.string "but I don't have any Pokémon…\p"
# 900 "data/maps/LittlerootTown/scripts.pory"
	.string "Can you go see what's happening\n"
# 901 "data/maps/LittlerootTown/scripts.pory"
	.string "for me?$"
# 902 "data/maps/LittlerootTown/scripts.pory"

# 903 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_YouSavedBirch:
# 904 "data/maps/LittlerootTown/scripts.pory"
	.string "You saved Prof. Birch!\n"
# 905 "data/maps/LittlerootTown/scripts.pory"
	.string "I'm so glad!$"
# 906 "data/maps/LittlerootTown/scripts.pory"

# 907 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_GoodLuckCatchingPokemon:
# 908 "data/maps/LittlerootTown/scripts.pory"
	.string "Are you going to catch Pokémon?\n"
# 909 "data/maps/LittlerootTown/scripts.pory"
	.string "Good luck!$"
# 910 "data/maps/LittlerootTown/scripts.pory"

# 911 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_TownSign:
# 912 "data/maps/LittlerootTown/scripts.pory"
	.string "Littleroot Town\n"
# 913 "data/maps/LittlerootTown/scripts.pory"
	.string "“A town that can't be shaded any hue.”$"
# 914 "data/maps/LittlerootTown/scripts.pory"

# 915 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ProfBirchsLab:
# 916 "data/maps/LittlerootTown/scripts.pory"
	.string "Prof. Birch's Pokémon Lab$"
# 917 "data/maps/LittlerootTown/scripts.pory"

# 918 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_PlayersHouse:
# 919 "data/maps/LittlerootTown/scripts.pory"
	.string "{PLAYER}'s House$"
# 920 "data/maps/LittlerootTown/scripts.pory"

# 921 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ProfBirchsHouse:
# 922 "data/maps/LittlerootTown/scripts.pory"
	.string "Prof. Birch's House$"
# 923 "data/maps/LittlerootTown/scripts.pory"

# 924 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_BirchSomethingToShowYouAtLab:
# 925 "data/maps/LittlerootTown/scripts.pory"
	.string "Well, well, {PLAYER}{KUN}!\n"
# 926 "data/maps/LittlerootTown/scripts.pory"
	.string "That was good work out there!\p"
# 927 "data/maps/LittlerootTown/scripts.pory"
	.string "I knew there was something special\n"
# 928 "data/maps/LittlerootTown/scripts.pory"
	.string "about you when I first saw you,\l"
# 929 "data/maps/LittlerootTown/scripts.pory"
	.string "but I never expected this.\p"
# 930 "data/maps/LittlerootTown/scripts.pory"
	.string "Oh, yes. Do you still have the Pokédex\n"
# 931 "data/maps/LittlerootTown/scripts.pory"
	.string "I gave you?\p"
# 932 "data/maps/LittlerootTown/scripts.pory"
	.string "I have something to show you.\n"
# 933 "data/maps/LittlerootTown/scripts.pory"
	.string "Let's go to my Lab.$"
