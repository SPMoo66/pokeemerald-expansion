# 1 "data/scripts/rival_graphics.pory"

# 2 "data/scripts/rival_graphics.pory"
Common_EventScript_SetupRivalGfxId::
# 3 "data/scripts/rival_graphics.pory"
	checkplayergender
# 4 "data/scripts/rival_graphics.pory"
	goto_if_eq VAR_RESULT, MALE, EventScript_SetupRivalGfxIdFemale
# 5 "data/scripts/rival_graphics.pory"
	goto_if_eq VAR_RESULT, FEMALE, EventScript_SetupRivalGfxIdMale
# 6 "data/scripts/rival_graphics.pory"
	end
# 7 "data/scripts/rival_graphics.pory"

# 8 "data/scripts/rival_graphics.pory"
EventScript_SetupRivalGfxIdFemale::
# 9 "data/scripts/rival_graphics.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_RIVAL_MAY_NORMAL
# 10 "data/scripts/rival_graphics.pory"
	return
# 11 "data/scripts/rival_graphics.pory"

# 12 "data/scripts/rival_graphics.pory"
EventScript_SetupRivalGfxIdMale::
# 13 "data/scripts/rival_graphics.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_RIVAL_BRENDAN_NORMAL
# 14 "data/scripts/rival_graphics.pory"
	return
# 15 "data/scripts/rival_graphics.pory"

# 16 "data/scripts/rival_graphics.pory"
Common_EventScript_SetupRivalOnBikeGfxId::
# 17 "data/scripts/rival_graphics.pory"
	checkplayergender
# 18 "data/scripts/rival_graphics.pory"
	goto_if_eq VAR_RESULT, MALE, EventScript_SetupRivalOnBikeGfxIdFemale
# 19 "data/scripts/rival_graphics.pory"
	goto_if_eq VAR_RESULT, FEMALE, EventScript_SetupRivalOnBikeGfxIdMale
# 20 "data/scripts/rival_graphics.pory"
	end
# 21 "data/scripts/rival_graphics.pory"

# 22 "data/scripts/rival_graphics.pory"
EventScript_SetupRivalOnBikeGfxIdFemale::
# 23 "data/scripts/rival_graphics.pory"
	setvar VAR_OBJ_GFX_ID_3, OBJ_EVENT_GFX_RIVAL_MAY_MACH_BIKE
# 24 "data/scripts/rival_graphics.pory"
	return
# 25 "data/scripts/rival_graphics.pory"

# 26 "data/scripts/rival_graphics.pory"
EventScript_SetupRivalOnBikeGfxIdMale::
# 27 "data/scripts/rival_graphics.pory"
	setvar VAR_OBJ_GFX_ID_3, OBJ_EVENT_GFX_RIVAL_BRENDAN_MACH_BIKE
# 28 "data/scripts/rival_graphics.pory"
	return

Common_EventScript_SetupEmRivalGfxId::
# 32 "data/scripts/rival_graphics.pory"
	compare VAR_TEMP_A, 0
	goto_if_eq Common_EventScript_SetupEmRivalGfxId_2
Common_EventScript_SetupEmRivalGfxId_1:
# 35 "data/scripts/rival_graphics.pory"
	switch VAR_TEMP_A
# 36 "data/scripts/rival_graphics.pory"
	case 1, Common_EventScript_SetupEmRivalGfxId_5
# 38 "data/scripts/rival_graphics.pory"
	case 2, Common_EventScript_SetupEmRivalGfxId_6
# 40 "data/scripts/rival_graphics.pory"
	case 3, Common_EventScript_SetupEmRivalGfxId_7
# 42 "data/scripts/rival_graphics.pory"
	case 4, Common_EventScript_SetupEmRivalGfxId_8
# 45 "data/scripts/rival_graphics.pory"
	setvar VAR_OBJ_GFX_ID_B, OBJ_EVENT_GFX_BARON
	return

Common_EventScript_SetupEmRivalGfxId_2:
# 33 "data/scripts/rival_graphics.pory"
	copyvar VAR_TEMP_A, VAR_EMERALBODY_RIVAL
	goto Common_EventScript_SetupEmRivalGfxId_1

Common_EventScript_SetupEmRivalGfxId_5:
# 37 "data/scripts/rival_graphics.pory"
	setvar VAR_OBJ_GFX_ID_B, OBJ_EVENT_GFX_HARPER
	return

Common_EventScript_SetupEmRivalGfxId_6:
# 39 "data/scripts/rival_graphics.pory"
	setvar VAR_OBJ_GFX_ID_B, OBJ_EVENT_GFX_JAKSON
	return

Common_EventScript_SetupEmRivalGfxId_7:
# 41 "data/scripts/rival_graphics.pory"
	setvar VAR_OBJ_GFX_ID_B, OBJ_EVENT_GFX_REDD
	return

Common_EventScript_SetupEmRivalGfxId_8:
# 43 "data/scripts/rival_graphics.pory"
	setvar VAR_OBJ_GFX_ID_B, OBJ_EVENT_GFX_SAKURA
	return

