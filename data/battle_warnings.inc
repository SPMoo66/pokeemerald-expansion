CheckBattleWarningLevel::
# 2 "data/battle_warnings.pory"
	setvar VAR_TEMP_6, 1
# 3 "data/battle_warnings.pory"
	checkwarningoption
# 4 "data/battle_warnings.pory"
	compare VAR_RESULT, 0
	goto_if_eq CheckBattleWarningLevel_2
# 7 "data/battle_warnings.pory"
	compare VAR_RESULT, 1
	goto_if_eq CheckBattleWarningLevel_5
# 11 "data/battle_warnings.pory"
	msgbox ChallengingBattleImminent
	return

CheckBattleWarningLevel_2:
	end

CheckBattleWarningLevel_5:
# 8 "data/battle_warnings.pory"
	msgbox ChallengingBattleImminent, MSGBOX_AUTOCLOSE
	end


BattleWarningRoute119Rival::
# 30 "data/battle_warnings.pory"
	compare VAR_ROUTE119_STATE, 1
	goto_if_ge BattleWarningRoute119Rival_2
# 34 "data/battle_warnings.pory"
	call CheckBattleWarningLevel
# 35 "data/battle_warnings.pory"
	msgbox OpponentBrendanMay, MSGBOX_AUTOCLOSE
	return

BattleWarningRoute119Rival_2:
# 31 "data/battle_warnings.pory"
	setvar VAR_TEMP_6, 1
	end


BattleWarningSkyPillarRival::
# 39 "data/battle_warnings.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_SKY_PILLAR, BattleWarningSkyPillarRival_2
# 43 "data/battle_warnings.pory"
	call CheckBattleWarningLevel
# 44 "data/battle_warnings.pory"
	msgbox OpponentBrendanMay, MSGBOX_AUTOCLOSE
	return

BattleWarningSkyPillarRival_2:
# 40 "data/battle_warnings.pory"
	setvar VAR_TEMP_6, 1
	end


BattleWarningPetalburgWally::
# 51 "data/battle_warnings.pory"
	compare VAR_PETALBURG_CITY_STATE, 5
	goto_if_ne BattleWarningPetalburgWally_2
# 55 "data/battle_warnings.pory"
	call CheckBattleWarningLevel
# 56 "data/battle_warnings.pory"
	bufferstring STR_VAR_1, CommonText_Wally
# 57 "data/battle_warnings.pory"
	msgbox OpponentVar, MSGBOX_AUTOCLOSE
	return

BattleWarningPetalburgWally_2:
# 52 "data/battle_warnings.pory"
	setvar VAR_TEMP_6, 1
	end


BattleWarningVRWally::
# 61 "data/battle_warnings.pory"
	goto_if_set FLAG_DEFEATED_WALLY_VICTORY_ROAD, BattleWarningVRWally_2
# 65 "data/battle_warnings.pory"
	call CheckBattleWarningLevel
# 66 "data/battle_warnings.pory"
	bufferstring STR_VAR_1, CommonText_Wally
# 67 "data/battle_warnings.pory"
	msgbox OpponentVar, MSGBOX_AUTOCLOSE
	return

BattleWarningVRWally_2:
# 62 "data/battle_warnings.pory"
	setvar VAR_TEMP_6, 1
	end


BattleWarningPetalburgRival::
# 81 "data/battle_warnings.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 1
	goto_if_ne BattleWarningPetalburgRival_2
# 85 "data/battle_warnings.pory"
	call CheckBattleWarningLevel
# 86 "data/battle_warnings.pory"
	msgbox ChallengingBattleImminent, MSGBOX_AUTOCLOSE
	return

BattleWarningPetalburgRival_2:
# 82 "data/battle_warnings.pory"
	setvar VAR_TEMP_6, 1
	end


BattleWarningPokemonLeagueRival::
# 90 "data/battle_warnings.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 25
	goto_if_ge BattleWarningPokemonLeagueRival_2
# 94 "data/battle_warnings.pory"
	call CheckBattleWarningLevel
# 95 "data/battle_warnings.pory"
	switch VAR_EMERALBODY_RIVAL
# 96 "data/battle_warnings.pory"
	case 0, BattleWarningPokemonLeagueRival_6
# 98 "data/battle_warnings.pory"
	case 1, BattleWarningPokemonLeagueRival_7
# 100 "data/battle_warnings.pory"
	case 2, BattleWarningPokemonLeagueRival_8
# 102 "data/battle_warnings.pory"
	case 3, BattleWarningPokemonLeagueRival_9
# 104 "data/battle_warnings.pory"
	case 4, BattleWarningPokemonLeagueRival_10
# 106 "data/battle_warnings.pory"
	case 5, BattleWarningPokemonLeagueRival_11
BattleWarningPokemonLeagueRival_4:
# 111 "data/battle_warnings.pory"
	msgbox OpponentVar, MSGBOX_AUTOCLOSE
# 112 "data/battle_warnings.pory"
	releaseall
	return

BattleWarningPokemonLeagueRival_2:
# 91 "data/battle_warnings.pory"
	setvar VAR_TEMP_6, 1
	end

BattleWarningPokemonLeagueRival_6:
# 97 "data/battle_warnings.pory"
	bufferstring STR_VAR_1, CommonText_Baron
	goto BattleWarningPokemonLeagueRival_4

BattleWarningPokemonLeagueRival_7:
# 99 "data/battle_warnings.pory"
	bufferstring STR_VAR_1, CommonText_Harper
	goto BattleWarningPokemonLeagueRival_4

BattleWarningPokemonLeagueRival_8:
# 101 "data/battle_warnings.pory"
	bufferstring STR_VAR_1, CommonText_Jakson
	goto BattleWarningPokemonLeagueRival_4

BattleWarningPokemonLeagueRival_9:
# 103 "data/battle_warnings.pory"
	bufferstring STR_VAR_1, CommonText_Redd
	goto BattleWarningPokemonLeagueRival_4

BattleWarningPokemonLeagueRival_10:
# 105 "data/battle_warnings.pory"
	bufferstring STR_VAR_1, CommonText_Sakura
	goto BattleWarningPokemonLeagueRival_4

BattleWarningPokemonLeagueRival_11:
# 107 "data/battle_warnings.pory"
	msgbox OpponentAllRivals, MSGBOX_AUTOCLOSE
# 108 "data/battle_warnings.pory"
	releaseall
	end


BattleWarningGraniteCaveHarper::
# 116 "data/battle_warnings.pory"
	compare VAR_EMERALBODY_RIVAL_BATTLE_STATE, 6
	goto_if_ge BattleWarningGraniteCaveHarper_2
# 116 "data/battle_warnings.pory"
	compare VAR_EMERALBODY_RIVAL, 1
	goto_if_ne BattleWarningGraniteCaveHarper_5
BattleWarningGraniteCaveHarper_1:
# 120 "data/battle_warnings.pory"
	call CheckBattleWarningLevel
# 121 "data/battle_warnings.pory"
	bufferstring STR_VAR_1, CommonText_Harper
# 122 "data/battle_warnings.pory"
	msgbox OpponentVar, MSGBOX_AUTOCLOSE
	return

BattleWarningGraniteCaveHarper_2:
# 117 "data/battle_warnings.pory"
	setvar VAR_TEMP_6, 1
	end

BattleWarningGraniteCaveHarper_5:
# 116 "data/battle_warnings.pory"
	compare VAR_EMERALBODY_RIVAL, 5
	goto_if_ne BattleWarningGraniteCaveHarper_2
	goto BattleWarningGraniteCaveHarper_1


BattleWarningGraniteCaveSakura::
# 126 "data/battle_warnings.pory"
	compare VAR_EMERALBODY_RIVAL_BATTLE_STATE, 7
	goto_if_ge BattleWarningGraniteCaveSakura_2
# 126 "data/battle_warnings.pory"
	compare VAR_EMERALBODY_RIVAL, 4
	goto_if_ne BattleWarningGraniteCaveSakura_5
BattleWarningGraniteCaveSakura_1:
# 130 "data/battle_warnings.pory"
	call CheckBattleWarningLevel
# 131 "data/battle_warnings.pory"
	bufferstring STR_VAR_1, CommonText_Sakura
# 132 "data/battle_warnings.pory"
	msgbox OpponentVar, MSGBOX_AUTOCLOSE
	return

BattleWarningGraniteCaveSakura_2:
# 127 "data/battle_warnings.pory"
	setvar VAR_TEMP_6, 1
	end

BattleWarningGraniteCaveSakura_5:
# 126 "data/battle_warnings.pory"
	compare VAR_EMERALBODY_RIVAL, 5
	goto_if_ne BattleWarningGraniteCaveSakura_2
	goto BattleWarningGraniteCaveSakura_1


BattleWarningDewfordBaron::
# 136 "data/battle_warnings.pory"
	compare VAR_EMERALBODY_RIVAL_BATTLE_STATE, 8
	goto_if_ge BattleWarningDewfordBaron_2
# 136 "data/battle_warnings.pory"
	compare VAR_EMERALBODY_RIVAL, 0
	goto_if_ne BattleWarningDewfordBaron_5
BattleWarningDewfordBaron_1:
# 140 "data/battle_warnings.pory"
	call CheckBattleWarningLevel
# 141 "data/battle_warnings.pory"
	bufferstring STR_VAR_1, CommonText_Baron
# 142 "data/battle_warnings.pory"
	msgbox OpponentVar, MSGBOX_AUTOCLOSE
	return

BattleWarningDewfordBaron_2:
# 137 "data/battle_warnings.pory"
	setvar VAR_TEMP_6, 1
	end

BattleWarningDewfordBaron_5:
# 136 "data/battle_warnings.pory"
	compare VAR_EMERALBODY_RIVAL, 5
	goto_if_ne BattleWarningDewfordBaron_2
	goto BattleWarningDewfordBaron_1


BattleWarningSlateportRedd::
# 146 "data/battle_warnings.pory"
	compare VAR_EMERALBODY_RIVAL_BATTLE_STATE, 9
	goto_if_ge BattleWarningSlateportRedd_2
# 146 "data/battle_warnings.pory"
	compare VAR_EMERALBODY_RIVAL, 3
	goto_if_ne BattleWarningSlateportRedd_5
BattleWarningSlateportRedd_1:
# 150 "data/battle_warnings.pory"
	call CheckBattleWarningLevel
# 151 "data/battle_warnings.pory"
	bufferstring STR_VAR_1, CommonText_Redd
# 152 "data/battle_warnings.pory"
	msgbox OpponentVar, MSGBOX_AUTOCLOSE
	return

BattleWarningSlateportRedd_2:
# 147 "data/battle_warnings.pory"
	setvar VAR_TEMP_6, 1
	end

BattleWarningSlateportRedd_5:
# 146 "data/battle_warnings.pory"
	compare VAR_EMERALBODY_RIVAL, 5
	goto_if_ne BattleWarningSlateportRedd_2
	goto BattleWarningSlateportRedd_1


BattleWarningFallarborJakson::
# 156 "data/battle_warnings.pory"
	compare VAR_EMERALBODY_RIVAL_BATTLE_STATE, 10
	goto_if_ge BattleWarningFallarborJakson_2
# 156 "data/battle_warnings.pory"
	compare VAR_EMERALBODY_RIVAL, 2
	goto_if_ne BattleWarningFallarborJakson_5
BattleWarningFallarborJakson_1:
# 160 "data/battle_warnings.pory"
	call CheckBattleWarningLevel
# 161 "data/battle_warnings.pory"
	bufferstring STR_VAR_1, CommonText_Jakson
# 162 "data/battle_warnings.pory"
	msgbox OpponentVar, MSGBOX_AUTOCLOSE
	return

BattleWarningFallarborJakson_2:
# 157 "data/battle_warnings.pory"
	setvar VAR_TEMP_6, 1
	end

BattleWarningFallarborJakson_5:
# 156 "data/battle_warnings.pory"
	compare VAR_EMERALBODY_RIVAL, 5
	goto_if_ne BattleWarningFallarborJakson_2
	goto BattleWarningFallarborJakson_1


BattleWarningLavaridgeSakuraHelper::
# 166 "data/battle_warnings.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 167 "data/battle_warnings.pory"
	compare VAR_TEMP_0, 12
	goto_if_eq BattleWarningLavaridgeSakuraHelper_3
BattleWarningLavaridgeSakuraHelper_2:
# 171 "data/battle_warnings.pory"
	setvar VAR_TEMP_6, 1
	return

BattleWarningLavaridgeSakuraHelper_1:
# 168 "data/battle_warnings.pory"
	call BattleWarningLavaridgeSakura
	return

BattleWarningLavaridgeSakuraHelper_3:
# 167 "data/battle_warnings.pory"
	compare VAR_TEMP_1, 12
	goto_if_eq BattleWarningLavaridgeSakuraHelper_1
	goto BattleWarningLavaridgeSakuraHelper_2


BattleWarningLavaridgeSakura::
# 176 "data/battle_warnings.pory"
	compare VAR_EMERALBODY_RIVAL_BATTLE_STATE, 11
	goto_if_ge BattleWarningLavaridgeSakura_2
# 176 "data/battle_warnings.pory"
	compare VAR_EMERALBODY_RIVAL, 4
	goto_if_ne BattleWarningLavaridgeSakura_5
BattleWarningLavaridgeSakura_1:
# 180 "data/battle_warnings.pory"
	call CheckBattleWarningLevel
# 181 "data/battle_warnings.pory"
	bufferstring STR_VAR_1, CommonText_Sakura
# 182 "data/battle_warnings.pory"
	msgbox OpponentVar, MSGBOX_AUTOCLOSE
	return

BattleWarningLavaridgeSakura_2:
# 177 "data/battle_warnings.pory"
	setvar VAR_TEMP_6, 1
	end

BattleWarningLavaridgeSakura_5:
# 176 "data/battle_warnings.pory"
	compare VAR_EMERALBODY_RIVAL, 5
	goto_if_ne BattleWarningLavaridgeSakura_2
	goto BattleWarningLavaridgeSakura_1


BattleWarningPetalburgHarper::
# 186 "data/battle_warnings.pory"
	compare VAR_EMERALBODY_RIVAL_BATTLE_STATE, 11
	goto_if_ne BattleWarningPetalburgHarper_4
BattleWarningPetalburgHarper_3:
# 186 "data/battle_warnings.pory"
	compare VAR_EMERALBODY_RIVAL_BATTLE_STATE, 6
	goto_if_ne BattleWarningPetalburgHarper_7
BattleWarningPetalburgHarper_1:
# 190 "data/battle_warnings.pory"
	call CheckBattleWarningLevel
# 191 "data/battle_warnings.pory"
	bufferstring STR_VAR_1, CommonText_Harper
# 192 "data/battle_warnings.pory"
	msgbox OpponentVar, MSGBOX_AUTOCLOSE
	return

BattleWarningPetalburgHarper_2:
# 187 "data/battle_warnings.pory"
	setvar VAR_TEMP_6, 1
	end

BattleWarningPetalburgHarper_4:
# 186 "data/battle_warnings.pory"
	compare VAR_EMERALBODY_RIVAL, 1
	goto_if_ne BattleWarningPetalburgHarper_2
	goto BattleWarningPetalburgHarper_3

BattleWarningPetalburgHarper_7:
# 186 "data/battle_warnings.pory"
	compare VAR_EMERALBODY_RIVAL, 5
	goto_if_ne BattleWarningPetalburgHarper_2
	goto BattleWarningPetalburgHarper_1


BattleWarningMauvilleBaron::
# 196 "data/battle_warnings.pory"
	compare VAR_EMERALBODY_RIVAL_BATTLE_STATE, 8
	goto_if_ne BattleWarningMauvilleBaron_4
BattleWarningMauvilleBaron_3:
# 196 "data/battle_warnings.pory"
	compare VAR_EMERALBODY_RIVAL_BATTLE_STATE, 12
	goto_if_ne BattleWarningMauvilleBaron_7
BattleWarningMauvilleBaron_1:
# 200 "data/battle_warnings.pory"
	call CheckBattleWarningLevel
# 201 "data/battle_warnings.pory"
	bufferstring STR_VAR_1, CommonText_Baron
# 202 "data/battle_warnings.pory"
	msgbox OpponentVar, MSGBOX_AUTOCLOSE
	return

BattleWarningMauvilleBaron_2:
# 197 "data/battle_warnings.pory"
	setvar VAR_TEMP_6, 1
	end

BattleWarningMauvilleBaron_4:
# 196 "data/battle_warnings.pory"
	compare VAR_EMERALBODY_RIVAL, 0
	goto_if_ne BattleWarningMauvilleBaron_2
	goto BattleWarningMauvilleBaron_3

BattleWarningMauvilleBaron_7:
# 196 "data/battle_warnings.pory"
	compare VAR_EMERALBODY_RIVAL, 5
	goto_if_ne BattleWarningMauvilleBaron_2
	goto BattleWarningMauvilleBaron_1


BattleWarningRoute119Jakson::
# 206 "data/battle_warnings.pory"
	compare VAR_EMERALBODY_RIVAL_BATTLE_STATE, 14
	goto_if_ge BattleWarningRoute119Jakson_2
# 206 "data/battle_warnings.pory"
	compare VAR_EMERALBODY_RIVAL, 2
	goto_if_ne BattleWarningRoute119Jakson_5
BattleWarningRoute119Jakson_1:
# 210 "data/battle_warnings.pory"
	call CheckBattleWarningLevel
# 211 "data/battle_warnings.pory"
	bufferstring STR_VAR_1, CommonText_Jakson
# 212 "data/battle_warnings.pory"
	msgbox OpponentVar, MSGBOX_AUTOCLOSE
	return

BattleWarningRoute119Jakson_2:
# 207 "data/battle_warnings.pory"
	setvar VAR_TEMP_6, 1
	end

BattleWarningRoute119Jakson_5:
# 206 "data/battle_warnings.pory"
	compare VAR_EMERALBODY_RIVAL, 5
	goto_if_ne BattleWarningRoute119Jakson_2
	goto BattleWarningRoute119Jakson_1


BattleWarningMtPyreRedd::
# 216 "data/battle_warnings.pory"
	compare VAR_EMERALBODY_RIVAL_BATTLE_STATE, 15
	goto_if_ge BattleWarningMtPyreRedd_2
# 216 "data/battle_warnings.pory"
	compare VAR_EMERALBODY_RIVAL, 3
	goto_if_ne BattleWarningMtPyreRedd_5
BattleWarningMtPyreRedd_1:
# 220 "data/battle_warnings.pory"
	call CheckBattleWarningLevel
# 221 "data/battle_warnings.pory"
	bufferstring STR_VAR_1, CommonText_Redd
# 222 "data/battle_warnings.pory"
	msgbox OpponentVar, MSGBOX_AUTOCLOSE
	return

BattleWarningMtPyreRedd_2:
# 217 "data/battle_warnings.pory"
	setvar VAR_TEMP_6, 1
	end

BattleWarningMtPyreRedd_5:
# 216 "data/battle_warnings.pory"
	compare VAR_EMERALBODY_RIVAL, 5
	goto_if_ne BattleWarningMtPyreRedd_2
	goto BattleWarningMtPyreRedd_1


BattleWarningLilycoveBaron::
# 226 "data/battle_warnings.pory"
	compare VAR_EMERALBODY_RIVAL_BATTLE_STATE, 16
	goto_if_ne BattleWarningLilycoveBaron_4
BattleWarningLilycoveBaron_3:
# 226 "data/battle_warnings.pory"
	compare VAR_EMERALBODY_RIVAL_BATTLE_STATE, 12
	goto_if_ne BattleWarningLilycoveBaron_7
BattleWarningLilycoveBaron_1:
# 230 "data/battle_warnings.pory"
	call CheckBattleWarningLevel
# 231 "data/battle_warnings.pory"
	bufferstring STR_VAR_1, CommonText_Baron
# 232 "data/battle_warnings.pory"
	msgbox OpponentVar, MSGBOX_AUTOCLOSE
	return

BattleWarningLilycoveBaron_2:
# 227 "data/battle_warnings.pory"
	setvar VAR_TEMP_6, 1
	end

BattleWarningLilycoveBaron_4:
# 226 "data/battle_warnings.pory"
	compare VAR_EMERALBODY_RIVAL, 0
	goto_if_ne BattleWarningLilycoveBaron_2
	goto BattleWarningLilycoveBaron_3

BattleWarningLilycoveBaron_7:
# 226 "data/battle_warnings.pory"
	compare VAR_EMERALBODY_RIVAL, 5
	goto_if_ne BattleWarningLilycoveBaron_2
	goto BattleWarningLilycoveBaron_1


BattleWarningMossdeepHarper::
# 236 "data/battle_warnings.pory"
	compare VAR_EMERALBODY_RIVAL_BATTLE_STATE, 17
	goto_if_ge BattleWarningMossdeepHarper_2
# 236 "data/battle_warnings.pory"
	compare VAR_EMERALBODY_RIVAL, 1
	goto_if_ne BattleWarningMossdeepHarper_5
BattleWarningMossdeepHarper_1:
# 240 "data/battle_warnings.pory"
	call CheckBattleWarningLevel
# 241 "data/battle_warnings.pory"
	bufferstring STR_VAR_1, CommonText_Harper
# 242 "data/battle_warnings.pory"
	msgbox OpponentVar, MSGBOX_AUTOCLOSE
	return

BattleWarningMossdeepHarper_2:
# 237 "data/battle_warnings.pory"
	setvar VAR_TEMP_6, 1
	end

BattleWarningMossdeepHarper_5:
# 236 "data/battle_warnings.pory"
	compare VAR_EMERALBODY_RIVAL, 5
	goto_if_ne BattleWarningMossdeepHarper_2
	goto BattleWarningMossdeepHarper_1


BattleWarningMossdeepRedd::
# 246 "data/battle_warnings.pory"
	goto_if_unset FLAG_BADGE07_GET, BattleWarningMossdeepRedd_2
# 246 "data/battle_warnings.pory"
	compare VAR_EMERALBODY_RIVAL_BATTLE_STATE, 18
	goto_if_ge BattleWarningMossdeepRedd_2
# 246 "data/battle_warnings.pory"
	compare VAR_EMERALBODY_RIVAL, 3
	goto_if_ne BattleWarningMossdeepRedd_7
BattleWarningMossdeepRedd_1:
# 250 "data/battle_warnings.pory"
	call CheckBattleWarningLevel
# 251 "data/battle_warnings.pory"
	bufferstring STR_VAR_1, CommonText_Redd
# 252 "data/battle_warnings.pory"
	msgbox OpponentVar, MSGBOX_AUTOCLOSE
	return

BattleWarningMossdeepRedd_2:
# 247 "data/battle_warnings.pory"
	setvar VAR_TEMP_6, 1
	end

BattleWarningMossdeepRedd_7:
# 246 "data/battle_warnings.pory"
	compare VAR_EMERALBODY_RIVAL, 5
	goto_if_ne BattleWarningMossdeepRedd_2
	goto BattleWarningMossdeepRedd_1


BattleWarningSootopolisSakura::
# 256 "data/battle_warnings.pory"
	compare VAR_EMERALBODY_RIVAL_BATTLE_STATE, 19
	goto_if_ge BattleWarningSootopolisSakura_2
# 256 "data/battle_warnings.pory"
	compare VAR_EMERALBODY_RIVAL, 4
	goto_if_ne BattleWarningSootopolisSakura_5
BattleWarningSootopolisSakura_1:
# 260 "data/battle_warnings.pory"
	call CheckBattleWarningLevel
# 261 "data/battle_warnings.pory"
	bufferstring STR_VAR_1, CommonText_Sakura
# 262 "data/battle_warnings.pory"
	msgbox OpponentVar, MSGBOX_AUTOCLOSE
	return

BattleWarningSootopolisSakura_2:
# 257 "data/battle_warnings.pory"
	setvar VAR_TEMP_6, 1
	end

BattleWarningSootopolisSakura_5:
# 256 "data/battle_warnings.pory"
	compare VAR_EMERALBODY_RIVAL, 5
	goto_if_ne BattleWarningSootopolisSakura_2
	goto BattleWarningSootopolisSakura_1


BattleWarningSootopolisJakson::
# 266 "data/battle_warnings.pory"
	compare VAR_SKY_PILLAR_STATE, 2
	goto_if_lt BattleWarningSootopolisJakson_2
# 266 "data/battle_warnings.pory"
	compare VAR_EMERALBODY_RIVAL_BATTLE_STATE, 20
	goto_if_ge BattleWarningSootopolisJakson_2
# 266 "data/battle_warnings.pory"
	compare VAR_EMERALBODY_RIVAL, 2
	goto_if_ne BattleWarningSootopolisJakson_7
BattleWarningSootopolisJakson_1:
# 270 "data/battle_warnings.pory"
	call CheckBattleWarningLevel
# 271 "data/battle_warnings.pory"
	bufferstring STR_VAR_1, CommonText_Jakson
# 272 "data/battle_warnings.pory"
	msgbox OpponentVar, MSGBOX_AUTOCLOSE
	return

BattleWarningSootopolisJakson_2:
# 267 "data/battle_warnings.pory"
	setvar VAR_TEMP_6, 1
	end

BattleWarningSootopolisJakson_7:
# 266 "data/battle_warnings.pory"
	compare VAR_EMERALBODY_RIVAL, 5
	goto_if_ne BattleWarningSootopolisJakson_2
	goto BattleWarningSootopolisJakson_1


BattleWarningRegiagua::
# 280 "data/battle_warnings.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 40
	goto_if_ge BattleWarningRegiagua_2
# 284 "data/battle_warnings.pory"
	call CheckBattleWarningLevel
# 285 "data/battle_warnings.pory"
	msgbox BattleWarningRegiagua_Text_0, MSGBOX_AUTOCLOSE
	return

BattleWarningRegiagua_2:
# 281 "data/battle_warnings.pory"
	setvar VAR_TEMP_6, 1
	end


BattleWarningRegiagua_Text_0:
# 285 "data/battle_warnings.pory"
	.string "The opponent is Water Type.$"

ChallengingBattleImminent::
# 14 "data/battle_warnings.pory"
	.string "A challenging battle is imminent.$"

OpponentVar::
# 18 "data/battle_warnings.pory"
	.string "The opponent is {STR_VAR_1}.$"

OpponentBrendanMay::
# 25 "data/battle_warnings.pory"
	.string "The opponent is Brendan/May.$"

OpponentAllRivals::
# 73 "data/battle_warnings.pory"
	.string "The opponents will be all rivals in\n"
	.string "sequence.\p"
	.string "You will be healed between battles.\n"
	.string "Victories are saved if a battle is lost.$"
