MagmaHideout_2F_3R_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, MagmaHideout_2F_3R_OnTransition
	.byte 0

MagmaHideout_2F_3R_OnTransition:
	setflag FLAG_TEMP_1
	call_if_eq VAR_EMERALBODY_RIVAL_STATE, 11, EventScript_Clear_FlagTemp1 @ Show Rivals
	end
