EverGrandeCity_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, EverGrandeCity_OnTransition
	.byte 0

EverGrandeCity_OnTransition:
	setflag FLAG_TEMP_1
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather
	call_if_eq VAR_EMERALBODY_RIVAL_STATE, 15, EventScript_Clear_FlagTemp1 @ Show Rivals
	end

EverGrandeCity_EventScript_VictoryRoadSign::
	msgbox EverGrandeCity_Text_EnteringVictoryRoad, MSGBOX_SIGN
	end

EverGrandeCity_EventScript_CitySign::
	msgbox EverGrandeCity_Text_CitySign, MSGBOX_SIGN
	end

EverGrandeCity_EventScript_PokemonLeagueSign::
	msgbox EverGrandeCity_Text_EnteringPokemonLeague, MSGBOX_SIGN
	end

EverGrandeCity_EventScript_SetVisitedEverGrande::
	setflag FLAG_VISITED_EVER_GRANDE_CITY
	setvar VAR_TEMP_1, 1
	end

EverGrandeCity_Text_EnteringVictoryRoad:
	.string "Entering Victory Road$"

EverGrandeCity_Text_EnteringPokemonLeague:
	.string "Entering Pokémon League\n"
	.string "Center Gate$"

EverGrandeCity_Text_CitySign:
	.string "Ever Grande City\p"
	.string "“The paradise of flowers, the sea,\n"
	.string "and Pokémon.”$"

