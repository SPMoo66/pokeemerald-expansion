EventScript_JaksonExpansion1Call::
# 15 "data/expansion_1/rival_scripts.pory"
	lockall
# 16 "data/expansion_1/rival_scripts.pory"
	pokenavcall Call1_JaksonText
# 17 "data/expansion_1/rival_scripts.pory"
	waitmessage
# 18 "data/expansion_1/rival_scripts.pory"
	playfanfare MUS_HG_POKEGEAR_REGISTERED
# 19 "data/expansion_1/rival_scripts.pory"
	waitfanfare
# 20 "data/expansion_1/rival_scripts.pory"
	setvar VAR_EMERALBODY_RIVAL_STATE, 19
# 21 "data/expansion_1/rival_scripts.pory"
	releaseall
	return


Sakura_Exp1_Town01::
# 25 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Sakura
# 26 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town01_SakuraText, MSGBOX_NPC
	return


Harper_Exp1_Town01::
# 30 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Harper
# 31 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town01_HarperText, MSGBOX_NPC
	return


Redd_Exp1_Town01::
# 35 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Redd
# 36 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town01_ReddText, MSGBOX_NPC
	return


Baron_Exp1_Town01::
# 40 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Baron
# 41 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town01_BaronText, MSGBOX_NPC
	return


Jakson_Exp1_Town01::
# 45 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Jakson
# 46 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town01_JaksonText, MSGBOX_YESNO
# 47 "data/expansion_1/rival_scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Jakson_Exp1_Town01_1
# 52 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town01_JaksonTextDecline, MSGBOX_AUTOCLOSE
	return

Jakson_Exp1_Town01_1:
# 48 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town01_JaksonTextAccept, MSGBOX_AUTOCLOSE
# 49 "data/expansion_1/rival_scripts.pory"
	goto SlateportRegionMap_BoatSceneInit
	return

