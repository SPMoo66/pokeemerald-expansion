EventScript_JaksonExpansion1Call::
# 12 "data/expansion_1/rival_scripts.pory"
	lockall
# 13 "data/expansion_1/rival_scripts.pory"
	pokenavcall Call1_JaksonText
# 14 "data/expansion_1/rival_scripts.pory"
	waitmessage
# 15 "data/expansion_1/rival_scripts.pory"
	playfanfare MUS_HG_POKEGEAR_REGISTERED
# 16 "data/expansion_1/rival_scripts.pory"
	waitfanfare
# 17 "data/expansion_1/rival_scripts.pory"
	setvar VAR_EMERALBODY_RIVAL_STATE, 19
# 18 "data/expansion_1/rival_scripts.pory"
	releaseall
	return


Sakura_Exp1_Town01::
# 22 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Sakura
# 23 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town01_SakuraText, MSGBOX_NPC
	return


Harper_Exp1_Town01::
# 27 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Harper
# 28 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town01_HarperText, MSGBOX_NPC
	return


Redd_Exp1_Town01::
# 32 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Redd
# 33 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town01_ReddText, MSGBOX_NPC
	return


Baron_Exp1_Town01::
# 37 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Baron
# 38 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town01_BaronText, MSGBOX_NPC
	return


Jakson_Exp1_Town01::
# 42 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Jakson
# 43 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town01_JaksonText, MSGBOX_YESNO
# 44 "data/expansion_1/rival_scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Jakson_Exp1_Town01_1
# 49 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town01_JaksonTextDecline, MSGBOX_AUTOCLOSE
	return

Jakson_Exp1_Town01_1:
# 45 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town01_JaksonTextAccept, MSGBOX_AUTOCLOSE
# 46 "data/expansion_1/rival_scripts.pory"
	goto SlateportRegionMap_BoatSceneInit
	return

