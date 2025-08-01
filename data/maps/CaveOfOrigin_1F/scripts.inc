CaveOfOrigin_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, CaveOfOrigin_1F_OnTransition
	.byte 0

CaveOfOrigin_1F_OnTransition:
	setflag FLAG_TEMP_1
	call_if_eq VAR_EMERALBODY_RIVAL_BATTLE_STATE, 2, LavaridgeTown_Gym_1F_CheckSakura
	end

CaveOfOrigin_1F_CheckSakura:
	call_if_eq VAR_EMERALBODY_RIVAL, 4, EventScript_Clear_FlagTemp1
	return
