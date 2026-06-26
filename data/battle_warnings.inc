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
# 26 "data/battle_warnings.pory"
	compare VAR_ROUTE119_STATE, 1
	goto_if_ge BattleWarningRoute119Rival_2
# 30 "data/battle_warnings.pory"
	call CheckBattleWarningLevel
# 31 "data/battle_warnings.pory"
	msgbox OpponentBrendanMay, MSGBOX_AUTOCLOSE
	return

BattleWarningRoute119Rival_2:
# 27 "data/battle_warnings.pory"
	setvar VAR_TEMP_6, 1
	end


BattleWarningSkyPillarRival::
# 35 "data/battle_warnings.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_SKY_PILLAR, BattleWarningSkyPillarRival_2
# 39 "data/battle_warnings.pory"
	call CheckBattleWarningLevel
# 40 "data/battle_warnings.pory"
	msgbox OpponentBrendanMay, MSGBOX_AUTOCLOSE
	return

BattleWarningSkyPillarRival_2:
# 36 "data/battle_warnings.pory"
	setvar VAR_TEMP_6, 1
	end


BattleWarningPetalburgWally::
# 51 "data/battle_warnings.pory"
	compare VAR_PETALBURG_CITY_STATE, 5
	goto_if_ne BattleWarningPetalburgWally_2
# 55 "data/battle_warnings.pory"
	call CheckBattleWarningLevel
# 56 "data/battle_warnings.pory"
	msgbox OpponentWally, MSGBOX_AUTOCLOSE
	return

BattleWarningPetalburgWally_2:
# 52 "data/battle_warnings.pory"
	setvar VAR_TEMP_6, 1
	end


BattleWarningVRWally::
# 60 "data/battle_warnings.pory"
	goto_if_set FLAG_DEFEATED_WALLY_VICTORY_ROAD, BattleWarningVRWally_2
# 64 "data/battle_warnings.pory"
	call CheckBattleWarningLevel
# 65 "data/battle_warnings.pory"
	msgbox OpponentWally, MSGBOX_AUTOCLOSE
	return

BattleWarningVRWally_2:
# 61 "data/battle_warnings.pory"
	setvar VAR_TEMP_6, 1
	end


BattleWarningRegiagua::
# 72 "data/battle_warnings.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 40
	goto_if_ge BattleWarningRegiagua_2
# 76 "data/battle_warnings.pory"
	call CheckBattleWarningLevel
# 77 "data/battle_warnings.pory"
	msgbox BattleWarningRegiagua_Text_0, MSGBOX_AUTOCLOSE
	return

BattleWarningRegiagua_2:
# 73 "data/battle_warnings.pory"
	setvar VAR_TEMP_6, 1
	end


BattleWarningRegiagua_Text_0:
# 77 "data/battle_warnings.pory"
	.string "The opponent is Water Type.$"

ChallengingBattleImminent::
# 14 "data/battle_warnings.pory"
	.string "A challenging battle is imminent.$"

OpponentBrendanMay::
# 21 "data/battle_warnings.pory"
	.string "The opponent is Brendan/May.$"

OpponentWally::
# 46 "data/battle_warnings.pory"
	.string "The opponent is Wally.$"
