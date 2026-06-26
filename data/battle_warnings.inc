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
	goto_if_eq CheckBattleWarningLevel_4
	return

CheckBattleWarningLevel_2:
	end

CheckBattleWarningLevel_4:
# 8 "data/battle_warnings.pory"
	msgbox ChallengingBattleImminent, MSGBOX_AUTOCLOSE
	end


BattleWarningRegiagua::
# 18 "data/battle_warnings.pory"
	call CheckBattleWarningLevel
# 19 "data/battle_warnings.pory"
	msgbox ChallengingBattleImminent
# 20 "data/battle_warnings.pory"
	msgbox BattleWarningRegiagua_Text_0, MSGBOX_AUTOCLOSE
	return


BattleWarningRegiagua_Text_0:
# 20 "data/battle_warnings.pory"
	.string "The opponent is Water Type.$"

ChallengingBattleImminent::
# 13 "data/battle_warnings.pory"
	.string "A challenging battle is imminent.$"
