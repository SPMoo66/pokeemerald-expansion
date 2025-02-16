MagmaHideout_PortalRoom_MapScripts::
# 4 "data/maps/MagmaHideout_PortalRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MagmaHideout_PortalRoom_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 10 "data/maps/MagmaHideout_PortalRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, MagmaHideout_PortalRoom_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

MagmaHideout_PortalRoom_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 5 "data/maps/MagmaHideout_PortalRoom/scripts.pory"
	goto_if_set FLAG_CAUGHT_HOOPA, MagmaHideout_PortalRoom_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

MagmaHideout_PortalRoom_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 6 "data/maps/MagmaHideout_PortalRoom/scripts.pory"
	setflag FLAG_TEMP_2
# 7 "data/maps/MagmaHideout_PortalRoom/scripts.pory"
	removeobject 2
	return

MagmaHideout_PortalRoom_MapScripts_MAP_SCRIPT_ON_RESUME:
# 11 "data/maps/MagmaHideout_PortalRoom/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, MagmaHideout_PortalRoom_MapScripts_MAP_SCRIPT_ON_RESUME_1
	return

MagmaHideout_PortalRoom_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 12 "data/maps/MagmaHideout_PortalRoom/scripts.pory"
	removeobject VAR_LAST_TALKED
	return


MagmaHideout_PortalRoom_EventScript_PortalTeleport::
# 18 "data/maps/MagmaHideout_PortalRoom/scripts.pory"
	warp MAP_MAGMA_HIDEOUT_1F, 4
	return


BattleHoopa::
# 22 "data/maps/MagmaHideout_PortalRoom/scripts.pory"
	lock
# 23 "data/maps/MagmaHideout_PortalRoom/scripts.pory"
	faceplayer
# 24 "data/maps/MagmaHideout_PortalRoom/scripts.pory"
	setvar VAR_LAST_TALKED, 2
# 25 "data/maps/MagmaHideout_PortalRoom/scripts.pory"
	playmoncry SPECIES_HOOPA, CRY_MODE_ENCOUNTER
# 26 "data/maps/MagmaHideout_PortalRoom/scripts.pory"
	msgbox BattleHoopa_Text_0
# 27 "data/maps/MagmaHideout_PortalRoom/scripts.pory"
	waitmoncry
# 28 "data/maps/MagmaHideout_PortalRoom/scripts.pory"
	setwildbattle SPECIES_HOOPA, 50
# 29 "data/maps/MagmaHideout_PortalRoom/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 30 "data/maps/MagmaHideout_PortalRoom/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 31 "data/maps/MagmaHideout_PortalRoom/scripts.pory"
	waitstate
# 32 "data/maps/MagmaHideout_PortalRoom/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 33 "data/maps/MagmaHideout_PortalRoom/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 34 "data/maps/MagmaHideout_PortalRoom/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq BattleHoopa_2
BattleHoopa_1:
# 37 "data/maps/MagmaHideout_PortalRoom/scripts.pory"
	release
	end

BattleHoopa_2:
# 35 "data/maps/MagmaHideout_PortalRoom/scripts.pory"
	setflag FLAG_CAUGHT_HOOPA
	goto BattleHoopa_1


BattleHoopa_Text_0:
# 26 "data/maps/MagmaHideout_PortalRoom/scripts.pory"
	.string "Hiihiihiii!$"
