EventScript_JaksonExpansion1Call::
# 29 "data/expansion_1/rival_scripts.pory"
	lockall
# 30 "data/expansion_1/rival_scripts.pory"
	pokenavcall Call1_JaksonText
# 31 "data/expansion_1/rival_scripts.pory"
	waitmessage
# 32 "data/expansion_1/rival_scripts.pory"
	playfanfare MUS_HG_POKEGEAR_REGISTERED
# 33 "data/expansion_1/rival_scripts.pory"
	waitfanfare
# 34 "data/expansion_1/rival_scripts.pory"
	setvar VAR_EMERALBODY_RIVAL_STATE, 19
# 35 "data/expansion_1/rival_scripts.pory"
	releaseall
	return


Sakura_Exp1_Town01::
# 39 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Sakura
# 40 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town01_SakuraText, MSGBOX_NPC
	return


Harper_Exp1_Town01::
# 44 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Harper
# 45 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town01_HarperText, MSGBOX_NPC
	return


Redd_Exp1_Town01::
# 49 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Redd
# 50 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town01_ReddText, MSGBOX_NPC
	return


Baron_Exp1_Town01::
# 54 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Baron
# 55 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town01_BaronText, MSGBOX_NPC
	return


Jakson_Exp1_Town01::
# 59 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Jakson
# 60 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town01_JaksonText, MSGBOX_YESNO
# 61 "data/expansion_1/rival_scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Jakson_Exp1_Town01_1
# 66 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town01_JaksonTextDecline, MSGBOX_AUTOCLOSE
	return

Jakson_Exp1_Town01_1:
# 62 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town01_JaksonTextAccept, MSGBOX_AUTOCLOSE
# 63 "data/expansion_1/rival_scripts.pory"
	goto SlateportRegionMap_BoatSceneInit
	return


Sakura_Exp1_Town02::
# 71 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Sakura
# 72 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town02_SakuraText, MSGBOX_NPC
	return


Redd_Exp1_Town02::
# 76 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Redd
# 77 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town02_ReddText, MSGBOX_NPC
	return


Baron_Exp1_Town02::
# 81 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Baron
# 82 "data/expansion_1/rival_scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 26
	goto_if_lt Baron_Exp1_Town02_1
# 86 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town02b_BaronText, MSGBOX_NPC
	return

Baron_Exp1_Town02_1:
# 83 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town02_BaronText, MSGBOX_NPC
	return


Jakson_Exp1_Town02::
# 91 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Jakson
# 92 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town02_JaksonText, MSGBOX_NPC
	return

