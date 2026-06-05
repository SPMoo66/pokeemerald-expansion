EventScript_JaksonExpansion1Call::
# 24 "data/expansion_1/rival_scripts.pory"
	lockall
# 25 "data/expansion_1/rival_scripts.pory"
	pokenavcall Call1_JaksonText
# 26 "data/expansion_1/rival_scripts.pory"
	waitmessage
# 27 "data/expansion_1/rival_scripts.pory"
	playfanfare MUS_HG_POKEGEAR_REGISTERED
# 28 "data/expansion_1/rival_scripts.pory"
	waitfanfare
# 29 "data/expansion_1/rival_scripts.pory"
	setvar VAR_EMERALBODY_RIVAL_STATE, 19
# 30 "data/expansion_1/rival_scripts.pory"
	releaseall
	return


Sakura_Exp1_Town01::
# 34 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Sakura
# 35 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town01_SakuraText, MSGBOX_NPC
	return


Harper_Exp1_Town01::
# 39 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Harper
# 40 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town01_HarperText, MSGBOX_NPC
	return


Redd_Exp1_Town01::
# 44 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Redd
# 45 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town01_ReddText, MSGBOX_NPC
	return


Baron_Exp1_Town01::
# 49 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Baron
# 50 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town01_BaronText, MSGBOX_NPC
	return


Jakson_Exp1_Town01::
# 54 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Jakson
# 55 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town01_JaksonText, MSGBOX_YESNO
# 56 "data/expansion_1/rival_scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Jakson_Exp1_Town01_1
# 61 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town01_JaksonTextDecline, MSGBOX_AUTOCLOSE
	return

Jakson_Exp1_Town01_1:
# 57 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town01_JaksonTextAccept, MSGBOX_AUTOCLOSE
# 58 "data/expansion_1/rival_scripts.pory"
	goto SlateportRegionMap_BoatSceneInit
	return


Sakura_Exp1_Town02::
# 66 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Sakura
# 67 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town02_SakuraText, MSGBOX_NPC
	return


Redd_Exp1_Town02::
# 71 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Redd
# 72 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town02_ReddText, MSGBOX_NPC
	return


Baron_Exp1_Town02::
# 76 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Baron
# 77 "data/expansion_1/rival_scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 26
	goto_if_lt Baron_Exp1_Town02_1
# 81 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town02b_BaronText, MSGBOX_NPC
	return

Baron_Exp1_Town02_1:
# 78 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town02_BaronText, MSGBOX_NPC
	return


Jakson_Exp1_Town02::
# 86 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Jakson
# 87 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town02_JaksonText, MSGBOX_NPC
	return

