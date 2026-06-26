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
# 23 "data/battle_warnings.pory"
	compare VAR_ROUTE119_STATE, 1
	goto_if_ge BattleWarningRoute119Rival_2
# 27 "data/battle_warnings.pory"
	call CheckBattleWarningLevel
# 28 "data/battle_warnings.pory"
	msgbox OpponentBrendanMay, MSGBOX_AUTOCLOSE
	return

BattleWarningRoute119Rival_2:
# 24 "data/battle_warnings.pory"
	setvar VAR_TEMP_6, 1
	end


BattleWarningSkyPillarRival::
# 32 "data/battle_warnings.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_SKY_PILLAR, BattleWarningSkyPillarRival_2
# 36 "data/battle_warnings.pory"
	call CheckBattleWarningLevel
# 37 "data/battle_warnings.pory"
	msgbox OpponentBrendanMay, MSGBOX_AUTOCLOSE
	return

BattleWarningSkyPillarRival_2:
# 33 "data/battle_warnings.pory"
	setvar VAR_TEMP_6, 1
	end


BattleWarningRegiagua::
# 41 "data/battle_warnings.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 40
	goto_if_ge BattleWarningRegiagua_2
# 45 "data/battle_warnings.pory"
	call CheckBattleWarningLevel
# 46 "data/battle_warnings.pory"
	msgbox BattleWarningRegiagua_Text_0, MSGBOX_AUTOCLOSE
	return

BattleWarningRegiagua_2:
# 42 "data/battle_warnings.pory"
	setvar VAR_TEMP_6, 1
	end


BattleWarningRegiagua_Text_0:
# 46 "data/battle_warnings.pory"
	.string "The opponent is Water Type.$"

ChallengingBattleImminent::
# 14 "data/battle_warnings.pory"
	.string "A challenging battle is imminent.$"

OpponentBrendanMay::
# 18 "data/battle_warnings.pory"
	.string "The opponent is May/Brendan.$"
