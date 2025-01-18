PokemonLeague_EliteFour_SetAdvanceToNextRoomMetatiles::
# 2 "data/scripts/elite_four.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay32
# 3 "data/scripts/elite_four.pory"
	waitmovement 0
# 4 "data/scripts/elite_four.pory"
	playse SE_DOOR
# 5 "data/scripts/elite_four.pory"
	setmetatile 6, 1, METATILE_EliteFour_OpenDoor_Frame, FALSE
# 6 "data/scripts/elite_four.pory"
	setmetatile 6, 2, METATILE_EliteFour_OpenDoor_Opening, FALSE
# 7 "data/scripts/elite_four.pory"
	setmetatile 0, 2, METATILE_EliteFour_RightSpotlightOff, TRUE
# 8 "data/scripts/elite_four.pory"
	setmetatile 1, 2, METATILE_EliteFour_LeftSpotlightOff, TRUE
# 9 "data/scripts/elite_four.pory"
	setmetatile 2, 2, METATILE_EliteFour_RightSpotlightOff, TRUE
# 10 "data/scripts/elite_four.pory"
	setmetatile 3, 2, METATILE_EliteFour_LeftSpotlightOff, TRUE
# 11 "data/scripts/elite_four.pory"
	setmetatile 4, 2, METATILE_EliteFour_RightSpotlightOff, TRUE
# 12 "data/scripts/elite_four.pory"
	setmetatile 8, 2, METATILE_EliteFour_LeftSpotlightOff, TRUE
# 13 "data/scripts/elite_four.pory"
	setmetatile 9, 2, METATILE_EliteFour_RightSpotlightOff, TRUE
# 14 "data/scripts/elite_four.pory"
	setmetatile 10, 2, METATILE_EliteFour_LeftSpotlightOff, TRUE
# 15 "data/scripts/elite_four.pory"
	setmetatile 11, 2, METATILE_EliteFour_RightSpotlightOff, TRUE
# 16 "data/scripts/elite_four.pory"
	setmetatile 12, 2, METATILE_EliteFour_LeftSpotlightOff, TRUE
# 17 "data/scripts/elite_four.pory"
	special DrawWholeMapView
	return


PokemonLeague_EliteFour_EventScript_WalkInCloseDoor::
# 22 "data/scripts/elite_four.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp6
# 23 "data/scripts/elite_four.pory"
	waitmovement 0
# 24 "data/scripts/elite_four.pory"
	playse SE_TRUCK_DOOR
# 25 "data/scripts/elite_four.pory"
	setmetatile 5, 12, METATILE_EliteFour_EntryDoor_ClosedTop, TRUE
# 26 "data/scripts/elite_four.pory"
	setmetatile 6, 12, METATILE_EliteFour_EntryDoor_ClosedTop, TRUE
# 27 "data/scripts/elite_four.pory"
	setmetatile 7, 12, METATILE_EliteFour_EntryDoor_ClosedTop, TRUE
# 28 "data/scripts/elite_four.pory"
	setmetatile 5, 13, METATILE_EliteFour_EntryDoor_ClosedBottom, TRUE
# 29 "data/scripts/elite_four.pory"
	setmetatile 6, 13, METATILE_EliteFour_EntryDoor_ClosedBottom, TRUE
# 30 "data/scripts/elite_four.pory"
	setmetatile 7, 13, METATILE_EliteFour_EntryDoor_ClosedBottom, TRUE
# 31 "data/scripts/elite_four.pory"
	special DrawWholeMapView
	return


PokemonLeague_EliteFour_EventScript_CloseDoor::
# 36 "data/scripts/elite_four.pory"
	setmetatile 5, 12, METATILE_EliteFour_EntryDoor_ClosedTop, TRUE
# 37 "data/scripts/elite_four.pory"
	setmetatile 6, 12, METATILE_EliteFour_EntryDoor_ClosedTop, TRUE
# 38 "data/scripts/elite_four.pory"
	setmetatile 7, 12, METATILE_EliteFour_EntryDoor_ClosedTop, TRUE
# 39 "data/scripts/elite_four.pory"
	setmetatile 5, 13, METATILE_EliteFour_EntryDoor_ClosedBottom, TRUE
# 40 "data/scripts/elite_four.pory"
	setmetatile 6, 13, METATILE_EliteFour_EntryDoor_ClosedBottom, TRUE
# 41 "data/scripts/elite_four.pory"
	setmetatile 7, 13, METATILE_EliteFour_EntryDoor_ClosedBottom, TRUE
	return

