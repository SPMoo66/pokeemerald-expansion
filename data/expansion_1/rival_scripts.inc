EventScript_JaksonExpansion1Call::
# 23 "data/expansion_1/rival_scripts.pory"
	lockall
# 24 "data/expansion_1/rival_scripts.pory"
	pokenavcall Call1_JaksonText
# 25 "data/expansion_1/rival_scripts.pory"
	waitmessage
# 26 "data/expansion_1/rival_scripts.pory"
	playfanfare MUS_HG_POKEGEAR_REGISTERED
# 27 "data/expansion_1/rival_scripts.pory"
	waitfanfare
# 28 "data/expansion_1/rival_scripts.pory"
	setvar VAR_EMERALBODY_RIVAL_STATE, 19
# 29 "data/expansion_1/rival_scripts.pory"
	releaseall
	return


Sakura_Exp1_Town01::
# 33 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Sakura
# 34 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town01_SakuraText, MSGBOX_NPC
	return


Harper_Exp1_Town01::
# 38 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Harper
# 39 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town01_HarperText, MSGBOX_NPC
	return


Redd_Exp1_Town01::
# 43 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Redd
# 44 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town01_ReddText, MSGBOX_NPC
	return


Baron_Exp1_Town01::
# 48 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Baron
# 49 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town01_BaronText, MSGBOX_NPC
	return


Jakson_Exp1_Town01::
# 53 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Jakson
# 54 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town01_JaksonText, MSGBOX_YESNO
# 55 "data/expansion_1/rival_scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Jakson_Exp1_Town01_1
# 60 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town01_JaksonTextDecline, MSGBOX_AUTOCLOSE
	return

Jakson_Exp1_Town01_1:
# 56 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town01_JaksonTextAccept, MSGBOX_AUTOCLOSE
# 57 "data/expansion_1/rival_scripts.pory"
	goto SlateportRegionMap_BoatSceneInit
	return

