# 1 "data/maps/LittlerootTown/scripts.pory"

# 2 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_MapScripts::
# 3 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_OnTransition
# 4 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_OnFrame
# 5 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LittlerootTown_OnWarp
# 6 "data/maps/LittlerootTown/scripts.pory"
	.byte 0
# 7 "data/maps/LittlerootTown/scripts.pory"

# 8 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_TOWN_STATE
# 9 "data/maps/LittlerootTown/scripts.pory"
	@ 1: Met Rival
# 10 "data/maps/LittlerootTown/scripts.pory"
	@ 2: Saving Birch
# 11 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Received Pokedex
# 12 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Received Running Shoes
# 13 "data/maps/LittlerootTown/scripts.pory"

# 14 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_INTRO_STATE
# 15 "data/maps/LittlerootTown/scripts.pory"
	@ 1: In truck male
# 16 "data/maps/LittlerootTown/scripts.pory"
	@ 2: In truck female
# 17 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Entered house
# 18 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Told to go set clock
# 19 "data/maps/LittlerootTown/scripts.pory"
	@ 5: Entered 2F to set clock
# 20 "data/maps/LittlerootTown/scripts.pory"
	@ 6: Set clock
# 21 "data/maps/LittlerootTown/scripts.pory"
	@ 7: Told to go meet rival
# 22 "data/maps/LittlerootTown/scripts.pory"

# 23 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_HOUSES_STATE_MAY
# 24 "data/maps/LittlerootTown/scripts.pory"
	@                    and VAR_LITTLEROOT_HOUSES_STATE_BRENDAN
# 25 "data/maps/LittlerootTown/scripts.pory"
	@ 1: On Truck (and is corresponding gender)
# 26 "data/maps/LittlerootTown/scripts.pory"
	@ 2: Met Rival's Mom (and is corresponding gender)
# 27 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Entered Hall of Fame
# 28 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Completed Lati TV / SS Ticket event
# 29 "data/maps/LittlerootTown/scripts.pory"
	@ 5: Exited house after above event
# 30 "data/maps/LittlerootTown/scripts.pory"

# 31 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_RIVAL_STATE
# 32 "data/maps/LittlerootTown/scripts.pory"
	@ 1: Never occurs
# 33 "data/maps/LittlerootTown/scripts.pory"
	@ 2: Entered Rival's bedroom
# 34 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Met Rival
# 35 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Received Pokedex
# 36 "data/maps/LittlerootTown/scripts.pory"

# 37 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_EMERALBODY_RIVAL_STATE
# 38 "data/maps/LittlerootTown/scripts.pory"
	@ 1: Set after scene outside Birch's Lab
# 39 "data/maps/LittlerootTown/scripts.pory"
	@ 2: Set after rival fight in Petalburg City
# 40 "data/maps/LittlerootTown/scripts.pory"

# 41 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnTransition:
# 42 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_VISITED_LITTLEROOT_TOWN
# 43 "data/maps/LittlerootTown/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 44 "data/maps/LittlerootTown/scripts.pory"
	call Common_EventScript_SetupEmRivalGfxId
# 45 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 2, LittlerootTown_EventScript_MoveMomToMaysDoor
# 46 "data/maps/LittlerootTown/scripts.pory"
	call_if_unset FLAG_RESCUED_BIRCH, LittlerootTown_EventScript_SetTwinPos
# 47 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_TOWN_STATE, 3, LittlerootTown_EventScript_SetMomStandingInFrontOfDoorPos
# 48 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_HOUSES_STATE_MAY, 4, LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent
# 49 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 4, LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent
# 50 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_OLDALE_RIVAL_STATE, 1, LittlerootTown_EventScript_MoveRivalFromOldale
# 51 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_RIVAL_STATE, 3, LittlerootTown_EventScript_SetRivalLeftForRoute103
# 52 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, EventScript_HideMapNamePopup
# 53 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2, LittlerootTown_EventScript_LeftLabAfterDexUpgrade
# 54 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_TEMP_1
# 55 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_TEMP_2
# 56 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_EMERALBODY_RIVAL_STATE, 1, LittlerootTown_EventScript_ShowBaron
# 57 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_EMERALBODY_RIVAL_STATE, 0, LittlerootTown_EventScript_ShowRivalCheck
# 58 "data/maps/LittlerootTown/scripts.pory"
	end
# 59 "data/maps/LittlerootTown/scripts.pory"

# 60 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_ShowBaron::
# 61 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_TEMP_1
# 62 "data/maps/LittlerootTown/scripts.pory"
	return
# 63 "data/maps/LittlerootTown/scripts.pory"

# 64 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_ShowRivalCheck::
# 65 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_BIRCH_LAB_STATE, 3, EventScript_Clear_FlagTemp2
# 66 "data/maps/LittlerootTown/scripts.pory"
	return
# 67 "data/maps/LittlerootTown/scripts.pory"

# 68 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_LeftLabAfterDexUpgrade::
# 69 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 3
# 70 "data/maps/LittlerootTown/scripts.pory"
	return
# 71 "data/maps/LittlerootTown/scripts.pory"

# 72 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalLeftForRoute103::
# 73 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_RIVAL_LEFT_FOR_ROUTE103
# 74 "data/maps/LittlerootTown/scripts.pory"
	return
# 75 "data/maps/LittlerootTown/scripts.pory"

# 76 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MoveRivalFromOldale::
# 77 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_OLDALE_RIVAL_STATE, 2
# 78 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_OLDALE_TOWN_RIVAL
# 79 "data/maps/LittlerootTown/scripts.pory"
	return
# 80 "data/maps/LittlerootTown/scripts.pory"

# 81 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent::
# 82 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 5
# 83 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 5
# 84 "data/maps/LittlerootTown/scripts.pory"
	return
# 85 "data/maps/LittlerootTown/scripts.pory"

# 86 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MoveMomToMaysDoor::
# 87 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_LITTLEROOT_MOM, 14, 8
# 88 "data/maps/LittlerootTown/scripts.pory"
	return
# 89 "data/maps/LittlerootTown/scripts.pory"

# 90 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetTwinPos::
# 91 "data/maps/LittlerootTown/scripts.pory"
	goto_if_eq VAR_LITTLEROOT_TOWN_STATE, 0, LittlerootTown_EventScript_SetTwinGuardingRoutePos
# 92 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_LITTLEROOT_TWIN, 10, 1
# 93 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_LITTLEROOT_TWIN, MOVEMENT_TYPE_FACE_UP
# 94 "data/maps/LittlerootTown/scripts.pory"
	return
# 95 "data/maps/LittlerootTown/scripts.pory"

# 96 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetTwinGuardingRoutePos::
# 97 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_LITTLEROOT_TWIN, 7, 2
# 98 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_LITTLEROOT_TWIN, MOVEMENT_TYPE_FACE_DOWN
# 99 "data/maps/LittlerootTown/scripts.pory"
	return
# 100 "data/maps/LittlerootTown/scripts.pory"

# 101 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetMomStandingInFrontOfDoorPos::
# 102 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
# 103 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_LITTLEROOT_MOM, MOVEMENT_TYPE_FACE_DOWN
# 104 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 105 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetMomInFrontOfDoorMale
# 106 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetMomInFrontOfDoorFemale
# 107 "data/maps/LittlerootTown/scripts.pory"
	return
# 108 "data/maps/LittlerootTown/scripts.pory"

# 109 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetMomInFrontOfDoorMale::
# 110 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_LITTLEROOT_MOM, 5, 9
# 111 "data/maps/LittlerootTown/scripts.pory"
	return
# 112 "data/maps/LittlerootTown/scripts.pory"

# 113 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetMomInFrontOfDoorFemale::
# 114 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_LITTLEROOT_MOM, 14, 9
# 115 "data/maps/LittlerootTown/scripts.pory"
	return
# 116 "data/maps/LittlerootTown/scripts.pory"

# 117 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnFrame:
# 118 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 1, LittlerootTown_EventScript_StepOffTruckMale
# 119 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 2, LittlerootTown_EventScript_StepOffTruckFemale
# 120 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_BeginDexUpgradeScene
# 121 "data/maps/LittlerootTown/scripts.pory"
	.2byte 0
# 122 "data/maps/LittlerootTown/scripts.pory"

# 123 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_StepOffTruckMale::
# 124 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 125 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8004, 5
# 126 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8005, 8
# 127 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GoInsideWithMom
# 128 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_TRUCK
# 129 "data/maps/LittlerootTown/scripts.pory"
	warpsilent MAP_LITTLEROOT_TOWN_BRENDANS_HOUSE_1F, 8, 8
# 130 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 131 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 132 "data/maps/LittlerootTown/scripts.pory"
	end
# 133 "data/maps/LittlerootTown/scripts.pory"

# 134 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_StepOffTruckFemale::
# 135 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 136 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8004, 14
# 137 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8005, 8
# 138 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GoInsideWithMom
# 139 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_TRUCK
# 140 "data/maps/LittlerootTown/scripts.pory"
	warpsilent MAP_LITTLEROOT_TOWN_MAYS_HOUSE_1F, 2, 8
# 141 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 142 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 143 "data/maps/LittlerootTown/scripts.pory"
	end
# 144 "data/maps/LittlerootTown/scripts.pory"

# 145 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoInsideWithMom::
# 146 "data/maps/LittlerootTown/scripts.pory"
	delay 15
# 147 "data/maps/LittlerootTown/scripts.pory"
	playse SE_LEDGE
# 148 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_Movement_PlayerStepOffTruck
# 149 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 150 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 151 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 152 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_LITTLEROOT_MOM
# 153 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, Common_Movement_WalkDown
# 154 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 155 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 156 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 157 "data/maps/LittlerootTown/scripts.pory"
	delay 10
# 158 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayerAtTruck
# 159 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 160 "data/maps/LittlerootTown/scripts.pory"
	speakername CommonText_Mom
# 161 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_OurNewHomeLetsGoInside, MSGBOX_DEFAULT
# 162 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 163 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachDoor
# 164 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_Movement_PlayerApproachDoor
# 165 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 166 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 167 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 168 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, Common_Movement_EnterHouse
# 169 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp2
# 170 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 171 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
# 172 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 3
# 173 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_PLAYER, 0
# 174 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 175 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 176 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_FAT_MAN
# 177 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 178 "data/maps/LittlerootTown/scripts.pory"
	return
# 179 "data/maps/LittlerootTown/scripts.pory"

# 180 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerAtTruck:
# 181 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 182 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_left
# 183 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 184 "data/maps/LittlerootTown/scripts.pory"

# 185 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachDoor:
# 186 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 187 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 188 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 189 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 190 "data/maps/LittlerootTown/scripts.pory"

# 191 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PlayerApproachDoor:
# 192 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 193 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 194 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 195 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 196 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 197 "data/maps/LittlerootTown/scripts.pory"

# 198 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PlayerStepOffTruck:
# 199 "data/maps/LittlerootTown/scripts.pory"
	jump_right
# 200 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 201 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 202 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 203 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 204 "data/maps/LittlerootTown/scripts.pory"

# 205 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BeginDexUpgradeScene::
# 206 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 207 "data/maps/LittlerootTown/scripts.pory"
	playse SE_PIN
# 208 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_BIRCH, Common_Movement_ExclamationMark
# 209 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 210 "data/maps/LittlerootTown/scripts.pory"
	delay 80
# 211 "data/maps/LittlerootTown/scripts.pory"
	speakername CommonText_Birch
# 212 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_BirchSomethingToShowYouAtLab, MSGBOX_DEFAULT
# 213 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 214 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_RIVAL
# 215 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH
# 216 "data/maps/LittlerootTown/scripts.pory"
	delay 20
# 217 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 218 "data/maps/LittlerootTown/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB, 6, 5
# 219 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 220 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 221 "data/maps/LittlerootTown/scripts.pory"
	end
# 222 "data/maps/LittlerootTown/scripts.pory"

# 223 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnWarp:
# 224 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_SetRivalBirchPosForDexUpgrade
# 225 "data/maps/LittlerootTown/scripts.pory"
	.2byte 0
# 226 "data/maps/LittlerootTown/scripts.pory"

# 227 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgrade::
# 228 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_LITTLEROOT_BIRCH
# 229 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_LITTLEROOT_RIVAL
# 230 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 231 "data/maps/LittlerootTown/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeMale
# 232 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeFemale
# 233 "data/maps/LittlerootTown/scripts.pory"
	end
# 234 "data/maps/LittlerootTown/scripts.pory"

# 235 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeMale::
# 236 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_LITTLEROOT_RIVAL, 6, 10
# 237 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_LITTLEROOT_BIRCH, 5, 10
# 238 "data/maps/LittlerootTown/scripts.pory"
	end
# 239 "data/maps/LittlerootTown/scripts.pory"

# 240 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeFemale::
# 241 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_LITTLEROOT_RIVAL, 13, 10
# 242 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_LITTLEROOT_BIRCH, 14, 10
# 243 "data/maps/LittlerootTown/scripts.pory"
	end
# 244 "data/maps/LittlerootTown/scripts.pory"

# 245 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_FatMan::
# 246 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_Simulation, MSGBOX_NPC
# 247 "data/maps/LittlerootTown/scripts.pory"
	end
# 248 "data/maps/LittlerootTown/scripts.pory"

# 249 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Boy::
# 250 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_BirchSpendsDaysInLab, MSGBOX_NPC
# 251 "data/maps/LittlerootTown/scripts.pory"
	end
# 252 "data/maps/LittlerootTown/scripts.pory"

# 253 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Twin::
# 254 "data/maps/LittlerootTown/scripts.pory"
	lock
# 255 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 256 "data/maps/LittlerootTown/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, LittlerootTown_EventScript_GoodLuck
# 257 "data/maps/LittlerootTown/scripts.pory"
	goto_if_set FLAG_RESCUED_BIRCH, LittlerootTown_EventScript_YouSavedBirch
# 258 "data/maps/LittlerootTown/scripts.pory"
	goto_if_ne VAR_LITTLEROOT_TOWN_STATE, 0, LittlerootTown_EventScript_GoSaveBirch
# 259 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut, MSGBOX_DEFAULT
# 260 "data/maps/LittlerootTown/scripts.pory"
	release
# 261 "data/maps/LittlerootTown/scripts.pory"
	end
# 262 "data/maps/LittlerootTown/scripts.pory"

# 263 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoSaveBirch::
# 264 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 265 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanYouGoSeeWhatsHappening, MSGBOX_DEFAULT
# 266 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 267 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, Common_Movement_FaceOriginalDirection
# 268 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 269 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 270 "data/maps/LittlerootTown/scripts.pory"
	release
# 271 "data/maps/LittlerootTown/scripts.pory"
	end
# 272 "data/maps/LittlerootTown/scripts.pory"

# 273 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_YouSavedBirch::
# 274 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 275 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_YouSavedBirch, MSGBOX_DEFAULT
# 276 "data/maps/LittlerootTown/scripts.pory"
	release
# 277 "data/maps/LittlerootTown/scripts.pory"
	end
# 278 "data/maps/LittlerootTown/scripts.pory"

# 279 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoodLuck::
# 280 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_GoodLuckCatchingPokemon, MSGBOX_DEFAULT
# 281 "data/maps/LittlerootTown/scripts.pory"
	release
# 282 "data/maps/LittlerootTown/scripts.pory"
	end
# 283 "data/maps/LittlerootTown/scripts.pory"

# 284 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerLeft::
# 285 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 286 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, LittlerootTown_Movement_TwinApproachPlayerLeft
# 287 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 288 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemon
# 289 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, LittlerootTown_Movement_TwinReturnLeft
# 290 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 291 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 292 "data/maps/LittlerootTown/scripts.pory"
	end
# 293 "data/maps/LittlerootTown/scripts.pory"

# 294 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_DangerousWithoutPokemon::
# 295 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut, MSGBOX_DEFAULT
# 296 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 297 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, Common_Movement_WalkDown
# 298 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_Movement_PushPlayerBackFromRoute
# 299 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 300 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_DangerousIfYouDontHavePokemon, MSGBOX_DEFAULT
# 301 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 302 "data/maps/LittlerootTown/scripts.pory"
	return
# 303 "data/maps/LittlerootTown/scripts.pory"

# 304 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinApproachPlayerLeft:
# 305 "data/maps/LittlerootTown/scripts.pory"
	face_right
# 306 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 307 "data/maps/LittlerootTown/scripts.pory"
	disable_jump_landing_ground_effect
# 308 "data/maps/LittlerootTown/scripts.pory"
	jump_in_place_right
# 309 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 310 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 311 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 312 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 313 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 314 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 315 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 316 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_left
# 317 "data/maps/LittlerootTown/scripts.pory"
	face_down
# 318 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 319 "data/maps/LittlerootTown/scripts.pory"

# 320 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinReturnLeft:
# 321 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 322 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 323 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 324 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 325 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 326 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 327 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 328 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 329 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_down
# 330 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 331 "data/maps/LittlerootTown/scripts.pory"

# 332 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PushPlayerBackFromRoute:
# 333 "data/maps/LittlerootTown/scripts.pory"
	lock_facing_direction
# 334 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 335 "data/maps/LittlerootTown/scripts.pory"
	unlock_facing_direction
# 336 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 337 "data/maps/LittlerootTown/scripts.pory"

# 338 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerRight::
# 339 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 340 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, LittlerootTown_Movement_TwinApproachPlayerRight
# 341 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 342 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemon
# 343 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, LittlerootTown_Movement_TwinReturnRight
# 344 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 345 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 346 "data/maps/LittlerootTown/scripts.pory"
	end
# 347 "data/maps/LittlerootTown/scripts.pory"

# 348 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinApproachPlayerRight:
# 349 "data/maps/LittlerootTown/scripts.pory"
	face_right
# 350 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 351 "data/maps/LittlerootTown/scripts.pory"
	disable_jump_landing_ground_effect
# 352 "data/maps/LittlerootTown/scripts.pory"
	jump_in_place_right
# 353 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 354 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 355 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 356 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 357 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 358 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 359 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 360 "data/maps/LittlerootTown/scripts.pory"
	face_down
# 361 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 362 "data/maps/LittlerootTown/scripts.pory"

# 363 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinReturnRight:
# 364 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 365 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 366 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 367 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 368 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 369 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_down
# 370 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 371 "data/maps/LittlerootTown/scripts.pory"

# 372 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoSaveBirchTrigger::
# 373 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 374 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, Common_Movement_WalkInPlaceFasterRight
# 375 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 376 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 377 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 378 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 379 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanYouGoSeeWhatsHappening, MSGBOX_DEFAULT
# 380 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 381 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, Common_Movement_FaceOriginalDirection
# 382 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 383 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 384 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 385 "data/maps/LittlerootTown/scripts.pory"
	end
# 386 "data/maps/LittlerootTown/scripts.pory"

# 387 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_TownSign::
# 388 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_TownSign, MSGBOX_SIGN
# 389 "data/maps/LittlerootTown/scripts.pory"
	end
# 390 "data/maps/LittlerootTown/scripts.pory"

# 391 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BirchsLabSign::
# 392 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsLab, MSGBOX_SIGN
# 393 "data/maps/LittlerootTown/scripts.pory"
	end
# 394 "data/maps/LittlerootTown/scripts.pory"

# 395 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BrendansHouseSign::
# 396 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 397 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 398 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_PlayersHouseSignMale
# 399 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_BirchsHouseSignFemale
# 400 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 401 "data/maps/LittlerootTown/scripts.pory"
	end
# 402 "data/maps/LittlerootTown/scripts.pory"

# 403 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_PlayersHouseSignMale::
# 404 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_PlayersHouse, MSGBOX_DEFAULT
# 405 "data/maps/LittlerootTown/scripts.pory"
	return
# 406 "data/maps/LittlerootTown/scripts.pory"

# 407 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BirchsHouseSignFemale::
# 408 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsHouse, MSGBOX_DEFAULT
# 409 "data/maps/LittlerootTown/scripts.pory"
	return
# 410 "data/maps/LittlerootTown/scripts.pory"

# 411 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MaysHouseSign::
# 412 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 413 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 414 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_BirchsHouseSignMale
# 415 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_PlayersHouseSignFemale
# 416 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 417 "data/maps/LittlerootTown/scripts.pory"
	end
# 418 "data/maps/LittlerootTown/scripts.pory"

# 419 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BirchsHouseSignMale::
# 420 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsHouse, MSGBOX_DEFAULT
# 421 "data/maps/LittlerootTown/scripts.pory"
	return
# 422 "data/maps/LittlerootTown/scripts.pory"

# 423 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_PlayersHouseSignFemale::
# 424 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_PlayersHouse, MSGBOX_DEFAULT
# 425 "data/maps/LittlerootTown/scripts.pory"
	return
# 426 "data/maps/LittlerootTown/scripts.pory"

# 427 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger0::
# 428 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 429 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 0
# 430 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_LITTLEROOT_MOM, 10, 9
# 431 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 432 "data/maps/LittlerootTown/scripts.pory"
	end
# 433 "data/maps/LittlerootTown/scripts.pory"

# 434 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger1::
# 435 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 436 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 1
# 437 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_LITTLEROOT_MOM, 11, 9
# 438 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 439 "data/maps/LittlerootTown/scripts.pory"
	end
# 440 "data/maps/LittlerootTown/scripts.pory"

# 441 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger2::
# 442 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 443 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 2
# 444 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 445 "data/maps/LittlerootTown/scripts.pory"
	end
# 446 "data/maps/LittlerootTown/scripts.pory"

# 447 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger3::
# 448 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 449 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 3
# 450 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 451 "data/maps/LittlerootTown/scripts.pory"
	end
# 452 "data/maps/LittlerootTown/scripts.pory"

# 453 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger4::
# 454 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 455 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 4
# 456 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 457 "data/maps/LittlerootTown/scripts.pory"
	end
# 458 "data/maps/LittlerootTown/scripts.pory"

# 459 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger5::
# 460 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 461 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 5
# 462 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 463 "data/maps/LittlerootTown/scripts.pory"
	end
# 464 "data/maps/LittlerootTown/scripts.pory"

# 465 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger::
# 466 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 467 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomNoticePlayerMale
# 468 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomNoticePlayerFemale
# 469 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 470 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetHomeDoorCoordsMale
# 471 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetHomeDoorCoordsFemale
# 472 "data/maps/LittlerootTown/scripts.pory"
	speakername CommonText_Mom
# 473 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_WaitPlayer, MSGBOX_DEFAULT
# 474 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 475 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 476 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomApproachPlayerMale
# 477 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomApproachPlayerFemale
# 478 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GiveRunningShoes
# 479 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 480 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomReturnHomeMale
# 481 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomReturnHomeFemale
# 482 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetReceivedRunningShoes
# 483 "data/maps/LittlerootTown/scripts.pory"
	end
# 484 "data/maps/LittlerootTown/scripts.pory"

# 485 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetHomeDoorCoordsMale::
# 486 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8009, 5
# 487 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x800A, 8
# 488 "data/maps/LittlerootTown/scripts.pory"
	return
# 489 "data/maps/LittlerootTown/scripts.pory"

# 490 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetHomeDoorCoordsFemale::
# 491 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8009, 14
# 492 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x800A, 8
# 493 "data/maps/LittlerootTown/scripts.pory"
	return
# 494 "data/maps/LittlerootTown/scripts.pory"

# 495 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomNoticePlayerMale::
# 496 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, Common_Movement_WalkInPlaceFasterRight
# 497 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 498 "data/maps/LittlerootTown/scripts.pory"
	return
# 499 "data/maps/LittlerootTown/scripts.pory"

# 500 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomNoticePlayerFemale::
# 501 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, Common_Movement_WalkInPlaceFasterLeft
# 502 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 503 "data/maps/LittlerootTown/scripts.pory"
	return
# 504 "data/maps/LittlerootTown/scripts.pory"

# 505 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale::
# 506 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomApproachPlayer0
# 507 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomApproachPlayer1
# 508 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomApproachPlayerMale2
# 509 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomApproachPlayerMale3
# 510 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomApproachPlayerMale4
# 511 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomApproachPlayerMale5
# 512 "data/maps/LittlerootTown/scripts.pory"
	return
# 513 "data/maps/LittlerootTown/scripts.pory"

# 514 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale::
# 515 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomApproachPlayer0
# 516 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomApproachPlayer1
# 517 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomApproachPlayerFemale2
# 518 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomApproachPlayerFemale3
# 519 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomApproachPlayerFemale4
# 520 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomApproachPlayerFemale5
# 521 "data/maps/LittlerootTown/scripts.pory"
	return
# 522 "data/maps/LittlerootTown/scripts.pory"

# 523 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayer0::
# 524 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 525 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 526 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, Common_Movement_WalkUp6
# 527 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 528 "data/maps/LittlerootTown/scripts.pory"
	return
# 529 "data/maps/LittlerootTown/scripts.pory"

# 530 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayer1::
# 531 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 532 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 533 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, Common_Movement_WalkUp6
# 534 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 535 "data/maps/LittlerootTown/scripts.pory"
	return
# 536 "data/maps/LittlerootTown/scripts.pory"

# 537 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale2::
# 538 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 539 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 540 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, Common_Movement_WalkRight4
# 541 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 542 "data/maps/LittlerootTown/scripts.pory"
	return
# 543 "data/maps/LittlerootTown/scripts.pory"

# 544 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale3::
# 545 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 546 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 547 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, Common_Movement_WalkRight5
# 548 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 549 "data/maps/LittlerootTown/scripts.pory"
	return
# 550 "data/maps/LittlerootTown/scripts.pory"

# 551 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale4::
# 552 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 553 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 554 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, Common_Movement_WalkRight2
# 555 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 556 "data/maps/LittlerootTown/scripts.pory"
	return
# 557 "data/maps/LittlerootTown/scripts.pory"

# 558 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale5::
# 559 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 560 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 561 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, Common_Movement_WalkRight3
# 562 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 563 "data/maps/LittlerootTown/scripts.pory"
	return
# 564 "data/maps/LittlerootTown/scripts.pory"

# 565 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale2::
# 566 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 567 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 568 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, Common_Movement_WalkLeft3
# 569 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 570 "data/maps/LittlerootTown/scripts.pory"
	return
# 571 "data/maps/LittlerootTown/scripts.pory"

# 572 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale3::
# 573 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 574 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 575 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, Common_Movement_WalkLeft2
# 576 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 577 "data/maps/LittlerootTown/scripts.pory"
	return
# 578 "data/maps/LittlerootTown/scripts.pory"

# 579 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale4::
# 580 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 581 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 582 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, Common_Movement_WalkLeft5
# 583 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 584 "data/maps/LittlerootTown/scripts.pory"
	return
# 585 "data/maps/LittlerootTown/scripts.pory"

# 586 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale5::
# 587 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 588 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 589 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, Common_Movement_WalkLeft4
# 590 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 591 "data/maps/LittlerootTown/scripts.pory"
	return
# 592 "data/maps/LittlerootTown/scripts.pory"

# 593 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale::
# 594 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomReturnHome0
# 595 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomReturnHome1
# 596 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomReturnHomeMale2
# 597 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomReturnHomeMale3
# 598 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomReturnHomeMale4
# 599 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomReturnHomeMale5
# 600 "data/maps/LittlerootTown/scripts.pory"
	return
# 601 "data/maps/LittlerootTown/scripts.pory"

# 602 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale::
# 603 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomReturnHome0
# 604 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomReturnHome1
# 605 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomReturnHomeFemale2
# 606 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomReturnHomeFemale3
# 607 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomReturnHomeFemale4
# 608 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomReturnHomeFemale5
# 609 "data/maps/LittlerootTown/scripts.pory"
	return
# 610 "data/maps/LittlerootTown/scripts.pory"

# 611 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHome0::
# 612 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, Common_Movement_WalkDown5
# 613 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 614 "data/maps/LittlerootTown/scripts.pory"
	return
# 615 "data/maps/LittlerootTown/scripts.pory"

# 616 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHome1::
# 617 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, Common_Movement_WalkDown5
# 618 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 619 "data/maps/LittlerootTown/scripts.pory"
	return
# 620 "data/maps/LittlerootTown/scripts.pory"

# 621 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale2::
# 622 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHomeMale2
# 623 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 624 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 625 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 626 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, Common_Movement_WalkUp
# 627 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 628 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 629 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 630 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 631 "data/maps/LittlerootTown/scripts.pory"
	return
# 632 "data/maps/LittlerootTown/scripts.pory"

# 633 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale3::
# 634 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHomeMale3
# 635 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 636 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 637 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 638 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, Common_Movement_WalkUp
# 639 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 640 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 641 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 642 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 643 "data/maps/LittlerootTown/scripts.pory"
	return
# 644 "data/maps/LittlerootTown/scripts.pory"

# 645 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale4::
# 646 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHomeMale4
# 647 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 648 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 649 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 650 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, Common_Movement_WalkUp
# 651 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 652 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 653 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 654 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 655 "data/maps/LittlerootTown/scripts.pory"
	return
# 656 "data/maps/LittlerootTown/scripts.pory"

# 657 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale5::
# 658 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHomeMale5
# 659 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 660 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 661 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 662 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, Common_Movement_WalkUp
# 663 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 664 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 665 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 666 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 667 "data/maps/LittlerootTown/scripts.pory"
	return
# 668 "data/maps/LittlerootTown/scripts.pory"

# 669 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale2::
# 670 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHomeFemale2
# 671 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 672 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 673 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 674 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, Common_Movement_WalkUp
# 675 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 676 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 677 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 678 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 679 "data/maps/LittlerootTown/scripts.pory"
	return
# 680 "data/maps/LittlerootTown/scripts.pory"

# 681 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale3::
# 682 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHomeFemale3
# 683 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 684 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 685 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 686 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, Common_Movement_WalkUp
# 687 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 688 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 689 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 690 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 691 "data/maps/LittlerootTown/scripts.pory"
	return
# 692 "data/maps/LittlerootTown/scripts.pory"

# 693 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale4::
# 694 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHomeFemale4
# 695 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 696 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 697 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 698 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, Common_Movement_WalkUp
# 699 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 700 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 701 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 702 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 703 "data/maps/LittlerootTown/scripts.pory"
	return
# 704 "data/maps/LittlerootTown/scripts.pory"

# 705 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale5::
# 706 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHomeFemale5
# 707 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 708 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 709 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 710 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, Common_Movement_WalkUp
# 711 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 712 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 713 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 714 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 715 "data/maps/LittlerootTown/scripts.pory"
	return
# 716 "data/maps/LittlerootTown/scripts.pory"

# 717 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale2:
# 718 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 719 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 720 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 721 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 722 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 723 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 724 "data/maps/LittlerootTown/scripts.pory"

# 725 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale3:
# 726 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 727 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 728 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 729 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 730 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 731 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 732 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 733 "data/maps/LittlerootTown/scripts.pory"

# 734 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale4:
# 735 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 736 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 737 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 738 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 739 "data/maps/LittlerootTown/scripts.pory"

# 740 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale5:
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
LittlerootTown_Movement_MomReturnHomeFemale2:
# 748 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 749 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 750 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 751 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 752 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 753 "data/maps/LittlerootTown/scripts.pory"

# 754 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale3:
# 755 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 756 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 757 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 758 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 759 "data/maps/LittlerootTown/scripts.pory"

# 760 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale4:
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
	walk_in_place_faster_up
# 767 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 768 "data/maps/LittlerootTown/scripts.pory"

# 769 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale5:
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
LittlerootTown_EventScript_Mom::
# 778 "data/maps/LittlerootTown/scripts.pory"
	lock
# 779 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 780 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 781 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetHomeDoorCoordsMale
# 782 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetHomeDoorCoordsFemale
# 783 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GiveRunningShoes
# 784 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, Common_Movement_WalkInPlaceFasterUp
# 785 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 786 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 787 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 788 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, Common_Movement_WalkUp
# 789 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 790 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 791 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 792 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 793 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetReceivedRunningShoes
# 794 "data/maps/LittlerootTown/scripts.pory"
	end
# 795 "data/maps/LittlerootTown/scripts.pory"

# 796 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetReceivedRunningShoes::
# 797 "data/maps/LittlerootTown/scripts.pory"
	removeobject LOCALID_LITTLEROOT_MOM
# 798 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 4
# 799 "data/maps/LittlerootTown/scripts.pory"
	release
# 800 "data/maps/LittlerootTown/scripts.pory"
	end
# 801 "data/maps/LittlerootTown/scripts.pory"

# 802 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoes::
# 803 "data/maps/LittlerootTown/scripts.pory"
	speakername CommonText_Mom
# 804 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_WearTheseRunningShoes, MSGBOX_DEFAULT
# 805 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 806 "data/maps/LittlerootTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 807 "data/maps/LittlerootTown/scripts.pory"
	message LittlerootTown_Text_SwitchShoesWithRunningShoes
# 808 "data/maps/LittlerootTown/scripts.pory"
	waitfanfare
# 809 "data/maps/LittlerootTown/scripts.pory"
	speakername CommonText_Mom
# 810 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ExplainRunningShoes, MSGBOX_DEFAULT
# 811 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 812 "data/maps/LittlerootTown/scripts.pory"
	giveitem ITEM_OLD_ROD
# 813 "data/maps/LittlerootTown/scripts.pory"
	speakername CommonText_Mom
# 814 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ComeHomeIfAnythingHappens, MSGBOX_DEFAULT
# 815 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 816 "data/maps/LittlerootTown/scripts.pory"
	delay 30
# 817 "data/maps/LittlerootTown/scripts.pory"
	return
# 818 "data/maps/LittlerootTown/scripts.pory"

# 819 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_OurNewHomeLetsGoInside:
# 820 "data/maps/LittlerootTown/scripts.pory"
	.string "{PLAYER}, we're here, honey!\p"
# 821 "data/maps/LittlerootTown/scripts.pory"
	.string "It must be tiring riding with our things\n"
# 822 "data/maps/LittlerootTown/scripts.pory"
	.string "in the moving truck.\p"
# 823 "data/maps/LittlerootTown/scripts.pory"
	.string "Well, this is Littleroot Town.\p"
# 824 "data/maps/LittlerootTown/scripts.pory"
	.string "How do you like it?\n"
# 825 "data/maps/LittlerootTown/scripts.pory"
	.string "This is our new home!\p"
# 826 "data/maps/LittlerootTown/scripts.pory"
	.string "It has a quaint feel, but it seems to be\n"
# 827 "data/maps/LittlerootTown/scripts.pory"
	.string "an easy place to live, don't you think?\p"
# 828 "data/maps/LittlerootTown/scripts.pory"
	.string "And, you get your own room, {PLAYER}!\n"
# 829 "data/maps/LittlerootTown/scripts.pory"
	.string "Let's go inside.$"
# 830 "data/maps/LittlerootTown/scripts.pory"

# 831 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_WaitPlayer:
# 832 "data/maps/LittlerootTown/scripts.pory"
	.string "Wait, {PLAYER}!$"
# 833 "data/maps/LittlerootTown/scripts.pory"

# 834 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_WearTheseRunningShoes:
# 835 "data/maps/LittlerootTown/scripts.pory"
	.string "{PLAYER}! {PLAYER}! Did you\n"
# 836 "data/maps/LittlerootTown/scripts.pory"
	.string "introduce yourself to Prof. Birch?\p"
# 837 "data/maps/LittlerootTown/scripts.pory"
	.string "Oh! What an adorable Pokémon!\n"
# 838 "data/maps/LittlerootTown/scripts.pory"
	.string "You got it from Prof. Birch. How nice!\p"
# 839 "data/maps/LittlerootTown/scripts.pory"
	.string "You're your father's child, all right.\n"
# 840 "data/maps/LittlerootTown/scripts.pory"
	.string "You look good together with Pokémon!\p"
# 841 "data/maps/LittlerootTown/scripts.pory"
	.string "Here, honey! If you're going out on an\n"
# 842 "data/maps/LittlerootTown/scripts.pory"
	.string "adventure, wear these new shoes I got\l"
# 843 "data/maps/LittlerootTown/scripts.pory"
	.string "for you!$"
# 844 "data/maps/LittlerootTown/scripts.pory"

# 845 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_SwitchShoesWithRunningShoes:
# 846 "data/maps/LittlerootTown/scripts.pory"
	.string "{PLAYER} switched shoes with the\n"
# 847 "data/maps/LittlerootTown/scripts.pory"
	.string "new pair from Mom!$"
# 848 "data/maps/LittlerootTown/scripts.pory"

# 849 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ExplainRunningShoes:
# 850 "data/maps/LittlerootTown/scripts.pory"
	.string "{PLAYER}, those shoes look so\n"
# 851 "data/maps/LittlerootTown/scripts.pory"
	.string "stylish on you!\p"
# 852 "data/maps/LittlerootTown/scripts.pory"
	.string "Oh!\n"
# 853 "data/maps/LittlerootTown/scripts.pory"
	.string "Let me give you your old fishing rod.$"
# 854 "data/maps/LittlerootTown/scripts.pory"

# 855 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ComeHomeIfAnythingHappens:
# 856 "data/maps/LittlerootTown/scripts.pory"
	.string "… … … … … … … …\n"
# 857 "data/maps/LittlerootTown/scripts.pory"
	.string "… … … … … … … …\p"
# 858 "data/maps/LittlerootTown/scripts.pory"
	.string "To think that you have your very own\n"
# 859 "data/maps/LittlerootTown/scripts.pory"
	.string "Pokémon now…\l"
# 860 "data/maps/LittlerootTown/scripts.pory"
	.string "Your father will be overjoyed.\p"
# 861 "data/maps/LittlerootTown/scripts.pory"
	.string "…But please be careful.\n"
# 862 "data/maps/LittlerootTown/scripts.pory"
	.string "If anything happens, you can come home.\p"
# 863 "data/maps/LittlerootTown/scripts.pory"
	.string "Go on, go get them, honey!$"
# 864 "data/maps/LittlerootTown/scripts.pory"

# 865 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_Simulation:
# 866 "data/maps/LittlerootTown/scripts.pory"
	.string "Experts have said that we could\n"
# 867 "data/maps/LittlerootTown/scripts.pory"
	.string "be living inside of a simulation.\p"
# 868 "data/maps/LittlerootTown/scripts.pory"
	.string "The power of science is staggering!$"
# 869 "data/maps/LittlerootTown/scripts.pory"

# 870 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_BirchSpendsDaysInLab:
# 871 "data/maps/LittlerootTown/scripts.pory"
	.string "Prof. Birch spends days in his Lab\n"
# 872 "data/maps/LittlerootTown/scripts.pory"
	.string "studying, then he'll suddenly go out in\l"
# 873 "data/maps/LittlerootTown/scripts.pory"
	.string "the wild to do more research…\p"
# 874 "data/maps/LittlerootTown/scripts.pory"
	.string "When does Prof. Birch spend time\n"
# 875 "data/maps/LittlerootTown/scripts.pory"
	.string "at home?$"
# 876 "data/maps/LittlerootTown/scripts.pory"

# 877 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut:
# 878 "data/maps/LittlerootTown/scripts.pory"
	.string "Um, um, um!\p"
# 879 "data/maps/LittlerootTown/scripts.pory"
	.string "If you go outside and go in the grass,\n"
# 880 "data/maps/LittlerootTown/scripts.pory"
	.string "wild Pokémon will jump out!$"
# 881 "data/maps/LittlerootTown/scripts.pory"

# 882 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_DangerousIfYouDontHavePokemon:
# 883 "data/maps/LittlerootTown/scripts.pory"
	.string "It's dangerous if you don't have\n"
# 884 "data/maps/LittlerootTown/scripts.pory"
	.string "your own Pokémon.$"
# 885 "data/maps/LittlerootTown/scripts.pory"

# 886 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_CanYouGoSeeWhatsHappening:
# 887 "data/maps/LittlerootTown/scripts.pory"
	.string "Um, hi!\p"
# 888 "data/maps/LittlerootTown/scripts.pory"
	.string "There are scary Pokémon outside!\n"
# 889 "data/maps/LittlerootTown/scripts.pory"
	.string "I can hear their cries!\p"
# 890 "data/maps/LittlerootTown/scripts.pory"
	.string "I want to go see what's going on,\n"
# 891 "data/maps/LittlerootTown/scripts.pory"
	.string "but I don't have any Pokémon…\p"
# 892 "data/maps/LittlerootTown/scripts.pory"
	.string "Can you go see what's happening\n"
# 893 "data/maps/LittlerootTown/scripts.pory"
	.string "for me?$"
# 894 "data/maps/LittlerootTown/scripts.pory"

# 895 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_YouSavedBirch:
# 896 "data/maps/LittlerootTown/scripts.pory"
	.string "You saved Prof. Birch!\n"
# 897 "data/maps/LittlerootTown/scripts.pory"
	.string "I'm so glad!$"
# 898 "data/maps/LittlerootTown/scripts.pory"

# 899 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_GoodLuckCatchingPokemon:
# 900 "data/maps/LittlerootTown/scripts.pory"
	.string "Are you going to catch Pokémon?\n"
# 901 "data/maps/LittlerootTown/scripts.pory"
	.string "Good luck!$"
# 902 "data/maps/LittlerootTown/scripts.pory"

# 903 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_TownSign:
# 904 "data/maps/LittlerootTown/scripts.pory"
	.string "Littleroot Town\n"
# 905 "data/maps/LittlerootTown/scripts.pory"
	.string "“A town that can't be shaded any hue.”$"
# 906 "data/maps/LittlerootTown/scripts.pory"

# 907 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ProfBirchsLab:
# 908 "data/maps/LittlerootTown/scripts.pory"
	.string "Prof. Birch's Pokémon Lab$"
# 909 "data/maps/LittlerootTown/scripts.pory"

# 910 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_PlayersHouse:
# 911 "data/maps/LittlerootTown/scripts.pory"
	.string "{PLAYER}'s House$"
# 912 "data/maps/LittlerootTown/scripts.pory"

# 913 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ProfBirchsHouse:
# 914 "data/maps/LittlerootTown/scripts.pory"
	.string "Prof. Birch's House$"
# 915 "data/maps/LittlerootTown/scripts.pory"

# 916 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_BirchSomethingToShowYouAtLab:
# 917 "data/maps/LittlerootTown/scripts.pory"
	.string "Well, well, {PLAYER}{KUN}!\n"
# 918 "data/maps/LittlerootTown/scripts.pory"
	.string "That was good work out there!\p"
# 919 "data/maps/LittlerootTown/scripts.pory"
	.string "I knew there was something special\n"
# 920 "data/maps/LittlerootTown/scripts.pory"
	.string "about you when I first saw you,\l"
# 921 "data/maps/LittlerootTown/scripts.pory"
	.string "but I never expected this.\p"
# 922 "data/maps/LittlerootTown/scripts.pory"
	.string "Oh, yes. Do you still have the Pokédex\n"
# 923 "data/maps/LittlerootTown/scripts.pory"
	.string "I gave you?\p"
# 924 "data/maps/LittlerootTown/scripts.pory"
	.string "I have something to show you.\n"
# 925 "data/maps/LittlerootTown/scripts.pory"
	.string "Let's go to my Lab.$"
