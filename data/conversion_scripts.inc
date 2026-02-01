Upgrade_EmeralbodyRivalBattleState_Var::
# 2 "data/conversion_scripts.pory"
	compare VAR_EMERALBODY_RIVAL_BATTLE_STATE, 5
	goto_if_lt Upgrade_EmeralbodyRivalBattleState_Var_4
Upgrade_EmeralbodyRivalBattleState_Var_3:
# 57 "data/conversion_scripts.pory"
	msgbox Upgrade_EmeralbodyRivalBattleState_Var_Text_1
Upgrade_EmeralbodyRivalBattleState_Var_1:
# 60 "data/conversion_scripts.pory"
	closemessage
	return

Upgrade_EmeralbodyRivalBattleState_Var_2:
# 3 "data/conversion_scripts.pory"
	compare VAR_EMERALBODY_RIVAL_BATTLE_STATE, 4
	goto_if_eq Upgrade_EmeralbodyRivalBattleState_Var_8
Upgrade_EmeralbodyRivalBattleState_Var_7:
# 6 "data/conversion_scripts.pory"
	switch VAR_EMERALBODY_RIVAL
# 7 "data/conversion_scripts.pory"
	case 0, Upgrade_EmeralbodyRivalBattleState_Var_12
# 16 "data/conversion_scripts.pory"
	case 1, Upgrade_EmeralbodyRivalBattleState_Var_13
# 25 "data/conversion_scripts.pory"
	case 2, Upgrade_EmeralbodyRivalBattleState_Var_14
# 34 "data/conversion_scripts.pory"
	case 3, Upgrade_EmeralbodyRivalBattleState_Var_15
# 43 "data/conversion_scripts.pory"
	case 4, Upgrade_EmeralbodyRivalBattleState_Var_16
Upgrade_EmeralbodyRivalBattleState_Var_10:
# 53 "data/conversion_scripts.pory"
	msgbox Upgrade_EmeralbodyRivalBattleState_Var_Text_0
	goto Upgrade_EmeralbodyRivalBattleState_Var_1

Upgrade_EmeralbodyRivalBattleState_Var_4:
# 2 "data/conversion_scripts.pory"
	compare VAR_EMERALBODY_RIVAL_BATTLE_STATE, 0
	goto_if_ne Upgrade_EmeralbodyRivalBattleState_Var_2
	goto Upgrade_EmeralbodyRivalBattleState_Var_3

Upgrade_EmeralbodyRivalBattleState_Var_8:
# 4 "data/conversion_scripts.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 25
	goto Upgrade_EmeralbodyRivalBattleState_Var_7

Upgrade_EmeralbodyRivalBattleState_Var_12:
# 8 "data/conversion_scripts.pory"
	switch VAR_EMERALBODY_RIVAL_BATTLE_STATE
# 9 "data/conversion_scripts.pory"
	case 1, Upgrade_EmeralbodyRivalBattleState_Var_18
# 11 "data/conversion_scripts.pory"
	case 2, Upgrade_EmeralbodyRivalBattleState_Var_19
# 13 "data/conversion_scripts.pory"
	case 3, Upgrade_EmeralbodyRivalBattleState_Var_20
	goto Upgrade_EmeralbodyRivalBattleState_Var_10

Upgrade_EmeralbodyRivalBattleState_Var_13:
# 17 "data/conversion_scripts.pory"
	switch VAR_EMERALBODY_RIVAL_BATTLE_STATE
# 18 "data/conversion_scripts.pory"
	case 1, Upgrade_EmeralbodyRivalBattleState_Var_22
# 20 "data/conversion_scripts.pory"
	case 2, Upgrade_EmeralbodyRivalBattleState_Var_23
# 22 "data/conversion_scripts.pory"
	case 3, Upgrade_EmeralbodyRivalBattleState_Var_24
	goto Upgrade_EmeralbodyRivalBattleState_Var_10

Upgrade_EmeralbodyRivalBattleState_Var_14:
# 26 "data/conversion_scripts.pory"
	switch VAR_EMERALBODY_RIVAL_BATTLE_STATE
# 27 "data/conversion_scripts.pory"
	case 1, Upgrade_EmeralbodyRivalBattleState_Var_26
# 29 "data/conversion_scripts.pory"
	case 2, Upgrade_EmeralbodyRivalBattleState_Var_27
# 31 "data/conversion_scripts.pory"
	case 3, Upgrade_EmeralbodyRivalBattleState_Var_28
	goto Upgrade_EmeralbodyRivalBattleState_Var_10

Upgrade_EmeralbodyRivalBattleState_Var_15:
# 35 "data/conversion_scripts.pory"
	switch VAR_EMERALBODY_RIVAL_BATTLE_STATE
# 36 "data/conversion_scripts.pory"
	case 1, Upgrade_EmeralbodyRivalBattleState_Var_30
# 38 "data/conversion_scripts.pory"
	case 2, Upgrade_EmeralbodyRivalBattleState_Var_31
# 40 "data/conversion_scripts.pory"
	case 3, Upgrade_EmeralbodyRivalBattleState_Var_32
	goto Upgrade_EmeralbodyRivalBattleState_Var_10

Upgrade_EmeralbodyRivalBattleState_Var_16:
# 44 "data/conversion_scripts.pory"
	switch VAR_EMERALBODY_RIVAL_BATTLE_STATE
# 45 "data/conversion_scripts.pory"
	case 1, Upgrade_EmeralbodyRivalBattleState_Var_34
# 47 "data/conversion_scripts.pory"
	case 2, Upgrade_EmeralbodyRivalBattleState_Var_35
# 49 "data/conversion_scripts.pory"
	case 3, Upgrade_EmeralbodyRivalBattleState_Var_36
	goto Upgrade_EmeralbodyRivalBattleState_Var_10

Upgrade_EmeralbodyRivalBattleState_Var_18:
# 10 "data/conversion_scripts.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 8
	goto Upgrade_EmeralbodyRivalBattleState_Var_10

Upgrade_EmeralbodyRivalBattleState_Var_19:
# 12 "data/conversion_scripts.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 13
	goto Upgrade_EmeralbodyRivalBattleState_Var_10

Upgrade_EmeralbodyRivalBattleState_Var_20:
# 14 "data/conversion_scripts.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 16
	goto Upgrade_EmeralbodyRivalBattleState_Var_10

Upgrade_EmeralbodyRivalBattleState_Var_22:
# 19 "data/conversion_scripts.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 6
	goto Upgrade_EmeralbodyRivalBattleState_Var_10

Upgrade_EmeralbodyRivalBattleState_Var_23:
# 21 "data/conversion_scripts.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 12
	goto Upgrade_EmeralbodyRivalBattleState_Var_10

Upgrade_EmeralbodyRivalBattleState_Var_24:
# 23 "data/conversion_scripts.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 17
	goto Upgrade_EmeralbodyRivalBattleState_Var_10

Upgrade_EmeralbodyRivalBattleState_Var_26:
# 28 "data/conversion_scripts.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 10
	goto Upgrade_EmeralbodyRivalBattleState_Var_10

Upgrade_EmeralbodyRivalBattleState_Var_27:
# 30 "data/conversion_scripts.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 14
	goto Upgrade_EmeralbodyRivalBattleState_Var_10

Upgrade_EmeralbodyRivalBattleState_Var_28:
# 32 "data/conversion_scripts.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 20
	goto Upgrade_EmeralbodyRivalBattleState_Var_10

Upgrade_EmeralbodyRivalBattleState_Var_30:
# 37 "data/conversion_scripts.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 9
	goto Upgrade_EmeralbodyRivalBattleState_Var_10

Upgrade_EmeralbodyRivalBattleState_Var_31:
# 39 "data/conversion_scripts.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 15
	goto Upgrade_EmeralbodyRivalBattleState_Var_10

Upgrade_EmeralbodyRivalBattleState_Var_32:
# 41 "data/conversion_scripts.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 18
	goto Upgrade_EmeralbodyRivalBattleState_Var_10

Upgrade_EmeralbodyRivalBattleState_Var_34:
# 46 "data/conversion_scripts.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 7
	goto Upgrade_EmeralbodyRivalBattleState_Var_10

Upgrade_EmeralbodyRivalBattleState_Var_35:
# 48 "data/conversion_scripts.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 11
	goto Upgrade_EmeralbodyRivalBattleState_Var_10

Upgrade_EmeralbodyRivalBattleState_Var_36:
# 50 "data/conversion_scripts.pory"
	setvar VAR_EMERALBODY_RIVAL_BATTLE_STATE, 19
	goto Upgrade_EmeralbodyRivalBattleState_Var_10


Upgrade_EmeralbodyRivalBattleState_Var_Text_0:
# 53 "data/conversion_scripts.pory"
	.string "Your save has been successfully\n"
	.string "updated.$"

Upgrade_EmeralbodyRivalBattleState_Var_Text_1:
# 57 "data/conversion_scripts.pory"
	.string "Your save does not need to be updated.\n"
	.string "Terminating script.$"
