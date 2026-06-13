EventScript_JaksonExpansion1Call::
# 31 "data/expansion_1/rival_scripts.pory"
	lockall
# 32 "data/expansion_1/rival_scripts.pory"
	pokenavcall Call1_JaksonText
# 33 "data/expansion_1/rival_scripts.pory"
	waitmessage
# 34 "data/expansion_1/rival_scripts.pory"
	playfanfare MUS_HG_POKEGEAR_REGISTERED
# 35 "data/expansion_1/rival_scripts.pory"
	waitfanfare
# 36 "data/expansion_1/rival_scripts.pory"
	setvar VAR_EMERALBODY_RIVAL_STATE, 19
# 37 "data/expansion_1/rival_scripts.pory"
	releaseall
	return


Sakura_Exp1_Town01::
# 41 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Sakura
# 42 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town01_SakuraText, MSGBOX_NPC
	return


Harper_Exp1_Town01::
# 46 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Harper
# 47 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town01_HarperText, MSGBOX_NPC
	return


Redd_Exp1_Town01::
# 51 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Redd
# 52 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town01_ReddText, MSGBOX_NPC
	return


Baron_Exp1_Town01::
# 56 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Baron
# 57 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town01_BaronText, MSGBOX_NPC
	return


Jakson_Exp1_Town01::
# 61 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Jakson
# 62 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town01_JaksonText, MSGBOX_YESNO
# 63 "data/expansion_1/rival_scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Jakson_Exp1_Town01_1
# 68 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town01_JaksonTextDecline, MSGBOX_AUTOCLOSE
	return

Jakson_Exp1_Town01_1:
# 64 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town01_JaksonTextAccept, MSGBOX_AUTOCLOSE
# 65 "data/expansion_1/rival_scripts.pory"
	goto SlateportRegionMap_BoatSceneInit
	return


Sakura_Exp1_Town02::
# 73 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Sakura
# 74 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town02_SakuraText, MSGBOX_NPC
	return


Redd_Exp1_Town02::
# 78 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Redd
# 79 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town02_ReddText, MSGBOX_NPC
	return


Baron_Exp1_Town02::
# 83 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Baron
# 84 "data/expansion_1/rival_scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 26
	goto_if_lt Baron_Exp1_Town02_1
# 88 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town02b_BaronText, MSGBOX_NPC
	return

Baron_Exp1_Town02_1:
# 85 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town02_BaronText, MSGBOX_NPC
	return


Jakson_Exp1_Town02::
# 93 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Jakson
# 94 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town02_JaksonText, MSGBOX_NPC
	return

