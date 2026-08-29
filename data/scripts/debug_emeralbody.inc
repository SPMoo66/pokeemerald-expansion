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


EmeralbodyDebug_Expansion1_GotDynamite::
# 82 "data/scripts/debug_emeralbody.pory"
	setvar VAR_EMERALBODY_RIVAL_STATE, 40
# 83 "data/scripts/debug_emeralbody.pory"
	release
	return


EmeralbodyDebug_Expansion1_DidBygoneVault::
# 87 "data/scripts/debug_emeralbody.pory"
	setvar VAR_EMERALBODY_RIVAL_STATE, 45
# 88 "data/scripts/debug_emeralbody.pory"
	release
	return


EmeralbodyDebug_Expansion1_CompletedExp1::
# 92 "data/scripts/debug_emeralbody.pory"
	setvar VAR_EMERALBODY_RIVAL_STATE, 51
# 93 "data/scripts/debug_emeralbody.pory"
	release
	return


EmeralbodyDebug_WhoIsRival_Text_0:
# 14 "data/scripts/debug_emeralbody.pory"
	.string "You will be challenged by all rivals.$"

EmeralbodyDebug_WhoIsRival_Text_1:
# 19 "data/scripts/debug_emeralbody.pory"
	.string "Your current rival is {STR_VAR_1}.$"
