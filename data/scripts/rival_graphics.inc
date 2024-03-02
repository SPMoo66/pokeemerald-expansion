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
# 29 "data/scripts/rival_graphics.pory"

# 30 "data/scripts/rival_graphics.pory"
@ Unused
# 31 "data/scripts/rival_graphics.pory"
Common_EventScript_SetupRivalGfxIdSameGender::
# 32 "data/scripts/rival_graphics.pory"
	checkplayergender
# 33 "data/scripts/rival_graphics.pory"
	goto_if_eq VAR_RESULT, MALE, EventScript_SetupRivalGfxIdMale2
# 34 "data/scripts/rival_graphics.pory"
	goto_if_eq VAR_RESULT, FEMALE, EventScript_SetupRivalGfxIdFemale2
# 35 "data/scripts/rival_graphics.pory"
	end
# 36 "data/scripts/rival_graphics.pory"

# 37 "data/scripts/rival_graphics.pory"
EventScript_SetupRivalGfxIdMale2::
# 38 "data/scripts/rival_graphics.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_RIVAL_BRENDAN_NORMAL
# 39 "data/scripts/rival_graphics.pory"
	return
# 40 "data/scripts/rival_graphics.pory"

# 41 "data/scripts/rival_graphics.pory"
EventScript_SetupRivalGfxIdFemale2::
# 42 "data/scripts/rival_graphics.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_RIVAL_MAY_NORMAL
# 43 "data/scripts/rival_graphics.pory"
	return

Common_EventScript_SetupEmRivalGfxId::
# 47 "data/scripts/rival_graphics.pory"
	switch VAR_EMERALBODY_RIVAL
# 48 "data/scripts/rival_graphics.pory"
	case 1, Common_EventScript_SetupEmRivalGfxId_2
# 50 "data/scripts/rival_graphics.pory"
	case 2, Common_EventScript_SetupEmRivalGfxId_3
# 52 "data/scripts/rival_graphics.pory"
	case 3, Common_EventScript_SetupEmRivalGfxId_4
# 54 "data/scripts/rival_graphics.pory"
	case 4, Common_EventScript_SetupEmRivalGfxId_5
# 57 "data/scripts/rival_graphics.pory"
	setvar VAR_OBJ_GFX_ID_B, OBJ_EVENT_GFX_BARON
	return

Common_EventScript_SetupEmRivalGfxId_2:
# 49 "data/scripts/rival_graphics.pory"
	setvar VAR_OBJ_GFX_ID_B, OBJ_EVENT_GFX_HARPER
	return

Common_EventScript_SetupEmRivalGfxId_3:
# 51 "data/scripts/rival_graphics.pory"
	setvar VAR_OBJ_GFX_ID_B, OBJ_EVENT_GFX_JAKSON
	return

Common_EventScript_SetupEmRivalGfxId_4:
# 53 "data/scripts/rival_graphics.pory"
	setvar VAR_OBJ_GFX_ID_B, OBJ_EVENT_GFX_REDD
	return

Common_EventScript_SetupEmRivalGfxId_5:
# 55 "data/scripts/rival_graphics.pory"
	setvar VAR_OBJ_GFX_ID_B, OBJ_EVENT_GFX_SAKURA
	return

