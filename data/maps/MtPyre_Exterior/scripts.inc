# 1 "data/maps/MtPyre_Exterior/scripts.pory"

# 2 "data/maps/MtPyre_Exterior/scripts.pory"
MtPyre_Exterior_MapScripts::
# 3 "data/maps/MtPyre_Exterior/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MtPyre_Exterior_OnTransition
# 4 "data/maps/MtPyre_Exterior/scripts.pory"
	.byte 0
# 5 "data/maps/MtPyre_Exterior/scripts.pory"

# 6 "data/maps/MtPyre_Exterior/scripts.pory"
MtPyre_Exterior_OnTransition:
# 7 "data/maps/MtPyre_Exterior/scripts.pory"
	call MtPyre_Exterior_EventScript_CheckEnterFromSummit
# 8 "data/maps/MtPyre_Exterior/scripts.pory"
	end
# 9 "data/maps/MtPyre_Exterior/scripts.pory"

# 10 "data/maps/MtPyre_Exterior/scripts.pory"
MtPyre_Exterior_EventScript_CheckEnterFromSummit::
# 11 "data/maps/MtPyre_Exterior/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 12 "data/maps/MtPyre_Exterior/scripts.pory"
	goto_if_lt VAR_TEMP_1, 12, MtPyre_Exterior_EventScript_EnterFromSummit
# 13 "data/maps/MtPyre_Exterior/scripts.pory"
	return
# 14 "data/maps/MtPyre_Exterior/scripts.pory"

# 15 "data/maps/MtPyre_Exterior/scripts.pory"
MtPyre_Exterior_EventScript_EnterFromSummit::
# 16 "data/maps/MtPyre_Exterior/scripts.pory"
	setweather WEATHER_FOG_HORIZONTAL
# 17 "data/maps/MtPyre_Exterior/scripts.pory"
	return
# 18 "data/maps/MtPyre_Exterior/scripts.pory"

# 19 "data/maps/MtPyre_Exterior/scripts.pory"
MtPyre_Exterior_EventScript_FogTrigger::
# 20 "data/maps/MtPyre_Exterior/scripts.pory"
	setweather WEATHER_FOG_HORIZONTAL
# 21 "data/maps/MtPyre_Exterior/scripts.pory"
	doweather
# 22 "data/maps/MtPyre_Exterior/scripts.pory"
	end
# 23 "data/maps/MtPyre_Exterior/scripts.pory"

# 24 "data/maps/MtPyre_Exterior/scripts.pory"
MtPyre_Exterior_EventScript_SunTrigger::
# 25 "data/maps/MtPyre_Exterior/scripts.pory"
	setweather WEATHER_SUNNY
# 26 "data/maps/MtPyre_Exterior/scripts.pory"
	doweather
# 27 "data/maps/MtPyre_Exterior/scripts.pory"
	end

MtPyre_Exterior_EventScript_ChallengeBall1::
# 31 "data/maps/MtPyre_Exterior/scripts.pory"
	lock
# 32 "data/maps/MtPyre_Exterior/scripts.pory"
	msgbox MtPyre_Exterior_EventScript_ChallengeBall1_Text_0, MSGBOX_YESNO
# 33 "data/maps/MtPyre_Exterior/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MtPyre_Exterior_EventScript_ChallengeBall1_2
MtPyre_Exterior_EventScript_ChallengeBall1_1:
# 46 "data/maps/MtPyre_Exterior/scripts.pory"
	release
	return

MtPyre_Exterior_EventScript_ChallengeBall1_2:
# 34 "data/maps/MtPyre_Exterior/scripts.pory"
	setflag FLAG_NO_CATCHING
# 35 "data/maps/MtPyre_Exterior/scripts.pory"
	setflag FLAG_NO_RUNNING
# 36 "data/maps/MtPyre_Exterior/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 37 "data/maps/MtPyre_Exterior/scripts.pory"
	setvar VAR_STARTING_STATUS, 9
# 38 "data/maps/MtPyre_Exterior/scripts.pory"
	setwildbattle SPECIES_GOLEM_FRIBIAN, 37, ITEM_NONE, 2, SPECIES_NOCTOWL_EMERIBIAN, 37, ITEM_NONE, 2, MOVE_EARTHQUAKE, MOVE_FLAME_WHEEL, MOVE_SHADOW_PUNCH, MOVE_ROCK_BLAST, MOVE_HYPNOSIS, MOVE_NIGHT_DAZE, MOVE_EXTRASENSORY, MOVE_AIR_SLASH
# 39 "data/maps/MtPyre_Exterior/scripts.pory"
	dowildbattle
# 40 "data/maps/MtPyre_Exterior/scripts.pory"
	setvar VAR_STARTING_STATUS, 0
# 41 "data/maps/MtPyre_Exterior/scripts.pory"
	clearflag FLAG_NO_CATCHING
# 42 "data/maps/MtPyre_Exterior/scripts.pory"
	clearflag FLAG_NO_RUNNING
# 43 "data/maps/MtPyre_Exterior/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 44 "data/maps/MtPyre_Exterior/scripts.pory"
	finditem ITEM_BLACK_SLUDGE, 1
	goto MtPyre_Exterior_EventScript_ChallengeBall1_1


MtPyre_Exterior_EventScript_ChallengeBall1_Text_0:
# 32 "data/maps/MtPyre_Exterior/scripts.pory"
	.string "A strong wind blows against you.\p"
	.string "Reach out for the item?$"
