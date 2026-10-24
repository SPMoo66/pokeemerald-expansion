EmeralbodyDebug_WhoIsRival::
# 2 "data/scripts/debug_emeralbody.pory"
	switch VAR_EMERALBODY_RIVAL
# 3 "data/scripts/debug_emeralbody.pory"
	case 0, EmeralbodyDebug_WhoIsRival_3
# 5 "data/scripts/debug_emeralbody.pory"
	case 1, EmeralbodyDebug_WhoIsRival_4
# 7 "data/scripts/debug_emeralbody.pory"
	case 2, EmeralbodyDebug_WhoIsRival_5
# 9 "data/scripts/debug_emeralbody.pory"
	case 3, EmeralbodyDebug_WhoIsRival_6
# 11 "data/scripts/debug_emeralbody.pory"
	case 4, EmeralbodyDebug_WhoIsRival_7
# 13 "data/scripts/debug_emeralbody.pory"
	case 5, EmeralbodyDebug_WhoIsRival_8
EmeralbodyDebug_WhoIsRival_1:
# 19 "data/scripts/debug_emeralbody.pory"
	msgbox EmeralbodyDebug_WhoIsRival_Text_1
# 20 "data/scripts/debug_emeralbody.pory"
	closemessage
# 21 "data/scripts/debug_emeralbody.pory"
	release
	return

EmeralbodyDebug_WhoIsRival_3:
# 4 "data/scripts/debug_emeralbody.pory"
	bufferstring STR_VAR_1, CommonText_Baron
	goto EmeralbodyDebug_WhoIsRival_1

EmeralbodyDebug_WhoIsRival_4:
# 6 "data/scripts/debug_emeralbody.pory"
	bufferstring STR_VAR_1, CommonText_Harper
	goto EmeralbodyDebug_WhoIsRival_1

EmeralbodyDebug_WhoIsRival_5:
# 8 "data/scripts/debug_emeralbody.pory"
	bufferstring STR_VAR_1, CommonText_Jakson
	goto EmeralbodyDebug_WhoIsRival_1

EmeralbodyDebug_WhoIsRival_6:
# 10 "data/scripts/debug_emeralbody.pory"
	bufferstring STR_VAR_1, CommonText_Redd
	goto EmeralbodyDebug_WhoIsRival_1

EmeralbodyDebug_WhoIsRival_7:
# 12 "data/scripts/debug_emeralbody.pory"
	bufferstring STR_VAR_1, CommonText_Sakura
	goto EmeralbodyDebug_WhoIsRival_1

EmeralbodyDebug_WhoIsRival_8:
# 14 "data/scripts/debug_emeralbody.pory"
	msgbox EmeralbodyDebug_WhoIsRival_Text_0
# 15 "data/scripts/debug_emeralbody.pory"
	closemessage
# 16 "data/scripts/debug_emeralbody.pory"
	release
	end


EmeralbodyDebug_SetRival_Baron::
# 26 "data/scripts/debug_emeralbody.pory"
	setvar VAR_EMERALBODY_RIVAL, 0
# 27 "data/scripts/debug_emeralbody.pory"
	release
	return


EmeralbodyDebug_SetRival_Harper::
# 31 "data/scripts/debug_emeralbody.pory"
	setvar VAR_EMERALBODY_RIVAL, 1
# 32 "data/scripts/debug_emeralbody.pory"
	release
	return


EmeralbodyDebug_SetRival_Jakson::
# 36 "data/scripts/debug_emeralbody.pory"
	setvar VAR_EMERALBODY_RIVAL, 2
# 37 "data/scripts/debug_emeralbody.pory"
	release
	return


EmeralbodyDebug_SetRival_Redd::
# 41 "data/scripts/debug_emeralbody.pory"
	setvar VAR_EMERALBODY_RIVAL, 3
# 42 "data/scripts/debug_emeralbody.pory"
	release
	return


EmeralbodyDebug_SetRival_Sakura::
# 46 "data/scripts/debug_emeralbody.pory"
	setvar VAR_EMERALBODY_RIVAL, 4
# 47 "data/scripts/debug_emeralbody.pory"
	release
	return


EmeralbodyDebug_SetRival_All::
# 51 "data/scripts/debug_emeralbody.pory"
	setvar VAR_EMERALBODY_RIVAL, 5
# 52 "data/scripts/debug_emeralbody.pory"
	release
	return


EmeralbodyDebug_Expansion1_JaksonsCall::
# 57 "data/scripts/debug_emeralbody.pory"
	setvar VAR_EMERALBODY_RIVAL_STATE, 19
# 58 "data/scripts/debug_emeralbody.pory"
	release
	return


EmeralbodyDebug_Expansion1_IllusoryGrotto_1::
# 62 "data/scripts/debug_emeralbody.pory"
	setvar VAR_EMERALBODY_RIVAL_STATE, 21
# 63 "data/scripts/debug_emeralbody.pory"
	release
	return


EmeralbodyDebug_Expansion1_MauveIsland::
# 67 "data/scripts/debug_emeralbody.pory"
	setvar VAR_EMERALBODY_RIVAL_STATE, 24
# 68 "data/scripts/debug_emeralbody.pory"
	release
	return


EmeralbodyDebug_Expansion1_GotLantern::
# 72 "data/scripts/debug_emeralbody.pory"
	setvar VAR_EMERALBODY_RIVAL_STATE, 26
# 73 "data/scripts/debug_emeralbody.pory"
	release
	return


EmeralbodyDebug_Expansion1_RescuedHarper::
# 77 "data/scripts/debug_emeralbody.pory"
	setvar VAR_EMERALBODY_RIVAL_STATE, 31
# 78 "data/scripts/debug_emeralbody.pory"
	release
	return


EmeralbodyDebug_Expansion1_BeforeRegiagua::
# 82 "data/scripts/debug_emeralbody.pory"
	setvar VAR_EMERALBODY_RIVAL_STATE, 37
# 83 "data/scripts/debug_emeralbody.pory"
	release
	return


EmeralbodyDebug_Expansion1_GotDynamite::
# 87 "data/scripts/debug_emeralbody.pory"
	setvar VAR_EMERALBODY_RIVAL_STATE, 40
# 88 "data/scripts/debug_emeralbody.pory"
	release
	return


EmeralbodyDebug_Expansion1_DidBygoneVault::
# 92 "data/scripts/debug_emeralbody.pory"
	setvar VAR_EMERALBODY_RIVAL_STATE, 45
# 93 "data/scripts/debug_emeralbody.pory"
	release
	return


EmeralbodyDebug_Expansion1_CompletedExp1::
# 97 "data/scripts/debug_emeralbody.pory"
	setvar VAR_EMERALBODY_RIVAL_STATE, 51
# 98 "data/scripts/debug_emeralbody.pory"
	release
	return


EmeralbodyDebug_VarRivalState::
# 102 "data/scripts/debug_emeralbody.pory"
	buffernumberstring 0, VAR_EMERALBODY_RIVAL_STATE
# 103 "data/scripts/debug_emeralbody.pory"
	msgbox EmeralbodyDebug_VarRivalState_Text_0
# 104 "data/scripts/debug_emeralbody.pory"
	closemessage
# 105 "data/scripts/debug_emeralbody.pory"
	release
	return


EmeralbodyDebug_VarRivalBattleState::
# 109 "data/scripts/debug_emeralbody.pory"
	buffernumberstring 0, VAR_EMERALBODY_RIVAL_BATTLE_STATE
# 110 "data/scripts/debug_emeralbody.pory"
	msgbox EmeralbodyDebug_VarRivalState_Text_0
# 111 "data/scripts/debug_emeralbody.pory"
	closemessage
# 112 "data/scripts/debug_emeralbody.pory"
	release
	return


EmeralbodyDebug_ToggleTuningForkMusic_0::
# 116 "data/scripts/debug_emeralbody.pory"
	checkifmusicunlocked 0
# 117 "data/scripts/debug_emeralbody.pory"
	compare VAR_RESULT, 0
	goto_if_eq EmeralbodyDebug_ToggleTuningForkMusic_0_2
# 121 "data/scripts/debug_emeralbody.pory"
	checkifmusicunlocked 0, 2
EmeralbodyDebug_ToggleTuningForkMusic_0_1:
# 123 "data/scripts/debug_emeralbody.pory"
	release
	return

EmeralbodyDebug_ToggleTuningForkMusic_0_2:
# 118 "data/scripts/debug_emeralbody.pory"
	checkifmusicunlocked 0, 1
	goto EmeralbodyDebug_ToggleTuningForkMusic_0_1


EmeralbodyDebug_ToggleTuningForkMusic_1::
# 127 "data/scripts/debug_emeralbody.pory"
	checkifmusicunlocked 1
# 128 "data/scripts/debug_emeralbody.pory"
	compare VAR_RESULT, 0
	goto_if_eq EmeralbodyDebug_ToggleTuningForkMusic_1_2
# 132 "data/scripts/debug_emeralbody.pory"
	checkifmusicunlocked 1, 2
EmeralbodyDebug_ToggleTuningForkMusic_1_1:
# 134 "data/scripts/debug_emeralbody.pory"
	release
	return

EmeralbodyDebug_ToggleTuningForkMusic_1_2:
# 129 "data/scripts/debug_emeralbody.pory"
	checkifmusicunlocked 1, 1
	goto EmeralbodyDebug_ToggleTuningForkMusic_1_1


EmeralbodyDebug_ToggleTuningForkMusic_2::
# 138 "data/scripts/debug_emeralbody.pory"
	checkifmusicunlocked 2
# 139 "data/scripts/debug_emeralbody.pory"
	compare VAR_RESULT, 0
	goto_if_eq EmeralbodyDebug_ToggleTuningForkMusic_2_2
# 143 "data/scripts/debug_emeralbody.pory"
	checkifmusicunlocked 2, 2
EmeralbodyDebug_ToggleTuningForkMusic_2_1:
# 145 "data/scripts/debug_emeralbody.pory"
	release
	return

EmeralbodyDebug_ToggleTuningForkMusic_2_2:
# 140 "data/scripts/debug_emeralbody.pory"
	checkifmusicunlocked 2, 1
	goto EmeralbodyDebug_ToggleTuningForkMusic_2_1


EmeralbodyDebug_ToggleTuningForkMusic_3::
# 149 "data/scripts/debug_emeralbody.pory"
	checkifmusicunlocked 3
# 150 "data/scripts/debug_emeralbody.pory"
	compare VAR_RESULT, 0
	goto_if_eq EmeralbodyDebug_ToggleTuningForkMusic_3_2
# 154 "data/scripts/debug_emeralbody.pory"
	checkifmusicunlocked 3, 2
EmeralbodyDebug_ToggleTuningForkMusic_3_1:
# 156 "data/scripts/debug_emeralbody.pory"
	release
	return

EmeralbodyDebug_ToggleTuningForkMusic_3_2:
# 151 "data/scripts/debug_emeralbody.pory"
	checkifmusicunlocked 3, 1
	goto EmeralbodyDebug_ToggleTuningForkMusic_3_1


EmeralbodyDebug_ToggleTuningForkMusic_4::
# 160 "data/scripts/debug_emeralbody.pory"
	checkifmusicunlocked 4
# 161 "data/scripts/debug_emeralbody.pory"
	compare VAR_RESULT, 0
	goto_if_eq EmeralbodyDebug_ToggleTuningForkMusic_4_2
# 165 "data/scripts/debug_emeralbody.pory"
	checkifmusicunlocked 4, 2
EmeralbodyDebug_ToggleTuningForkMusic_4_1:
# 167 "data/scripts/debug_emeralbody.pory"
	release
	return

EmeralbodyDebug_ToggleTuningForkMusic_4_2:
# 162 "data/scripts/debug_emeralbody.pory"
	checkifmusicunlocked 4, 1
	goto EmeralbodyDebug_ToggleTuningForkMusic_4_1


EmeralbodyDebug_ToggleTuningForkMusic_5::
# 171 "data/scripts/debug_emeralbody.pory"
	checkifmusicunlocked 5
# 172 "data/scripts/debug_emeralbody.pory"
	compare VAR_RESULT, 0
	goto_if_eq EmeralbodyDebug_ToggleTuningForkMusic_5_2
# 176 "data/scripts/debug_emeralbody.pory"
	checkifmusicunlocked 5, 2
EmeralbodyDebug_ToggleTuningForkMusic_5_1:
# 178 "data/scripts/debug_emeralbody.pory"
	release
	return

EmeralbodyDebug_ToggleTuningForkMusic_5_2:
# 173 "data/scripts/debug_emeralbody.pory"
	checkifmusicunlocked 5, 1
	goto EmeralbodyDebug_ToggleTuningForkMusic_5_1


EmeralbodyDebug_ToggleTuningForkMusic_6::
# 182 "data/scripts/debug_emeralbody.pory"
	checkifmusicunlocked 6
# 183 "data/scripts/debug_emeralbody.pory"
	compare VAR_RESULT, 0
	goto_if_eq EmeralbodyDebug_ToggleTuningForkMusic_6_2
# 187 "data/scripts/debug_emeralbody.pory"
	checkifmusicunlocked 6, 2
EmeralbodyDebug_ToggleTuningForkMusic_6_1:
# 189 "data/scripts/debug_emeralbody.pory"
	release
	return

EmeralbodyDebug_ToggleTuningForkMusic_6_2:
# 184 "data/scripts/debug_emeralbody.pory"
	checkifmusicunlocked 6, 1
	goto EmeralbodyDebug_ToggleTuningForkMusic_6_1


EmeralbodyDebug_ToggleTuningForkMusic_7::
# 193 "data/scripts/debug_emeralbody.pory"
	checkifmusicunlocked 7
# 194 "data/scripts/debug_emeralbody.pory"
	compare VAR_RESULT, 0
	goto_if_eq EmeralbodyDebug_ToggleTuningForkMusic_7_2
# 198 "data/scripts/debug_emeralbody.pory"
	checkifmusicunlocked 7, 2
EmeralbodyDebug_ToggleTuningForkMusic_7_1:
# 200 "data/scripts/debug_emeralbody.pory"
	release
	return

EmeralbodyDebug_ToggleTuningForkMusic_7_2:
# 195 "data/scripts/debug_emeralbody.pory"
	checkifmusicunlocked 7, 1
	goto EmeralbodyDebug_ToggleTuningForkMusic_7_1


EmeralbodyDebug_WhoIsRival_Text_0:
# 14 "data/scripts/debug_emeralbody.pory"
	.string "You will be challenged by all rivals.$"

EmeralbodyDebug_WhoIsRival_Text_1:
# 19 "data/scripts/debug_emeralbody.pory"
	.string "Your current rival is {STR_VAR_1}.$"

EmeralbodyDebug_VarRivalState_Text_0:
# 103 "data/scripts/debug_emeralbody.pory"
	.string "{STR_VAR_1}$"
