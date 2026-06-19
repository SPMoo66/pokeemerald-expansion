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
# 42 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Sakura
# 43 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town01_SakuraText, MSGBOX_NPC
	return


Harper_Exp1_Town01::
# 47 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Harper
# 48 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town01_HarperText, MSGBOX_NPC
	return


Redd_Exp1_Town01::
# 52 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Redd
# 53 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town01_ReddText, MSGBOX_NPC
	return


Baron_Exp1_Town01::
# 57 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Baron
# 58 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town01_BaronText, MSGBOX_NPC
	return


Jakson_Exp1_Town01::
# 62 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Jakson
# 63 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town01_JaksonText, MSGBOX_YESNO
# 64 "data/expansion_1/rival_scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Jakson_Exp1_Town01_1
# 69 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town01_JaksonTextDecline, MSGBOX_AUTOCLOSE
	return

Jakson_Exp1_Town01_1:
# 65 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town01_JaksonTextAccept, MSGBOX_AUTOCLOSE
# 66 "data/expansion_1/rival_scripts.pory"
	goto SlateportRegionMap_BoatSceneInit
	return


Sakura_Exp1_Town02::
# 75 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Sakura
# 76 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town02_SakuraText, MSGBOX_NPC
	return


Redd_Exp1_Town02::
# 80 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Redd
# 81 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town02_ReddText, MSGBOX_NPC
	return


Baron_Exp1_Town02::
# 85 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Baron
# 86 "data/expansion_1/rival_scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 26
	goto_if_lt Baron_Exp1_Town02_1
# 90 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town02b_BaronText, MSGBOX_NPC
	return

Baron_Exp1_Town02_1:
# 87 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town02_BaronText, MSGBOX_NPC
	return


Jakson_Exp1_Town02::
# 95 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Jakson
# 96 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town02_JaksonText, MSGBOX_NPC
	return


Sakura_Exp1_Town03::
# 101 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Sakura
# 102 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town03_SakuraText, MSGBOX_NPC
	return


Redd_Exp1_Town03::
# 106 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Redd
# 107 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town03_ReddText, MSGBOX_NPC
	return


Baron_Exp1_Town03::
# 111 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Baron
# 112 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town03_BaronText, MSGBOX_NPC
	return


Jakson_Exp1_Town03::
# 116 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Jakson
# 117 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town03_JaksonText, MSGBOX_NPC
	return


Sakura_Exp1_Town04::
# 122 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Sakura
# 123 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town04_SakuraText, MSGBOX_NPC
	return


Harper_Exp1_Town04::
# 127 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Harper
# 128 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town04_HarperText, MSGBOX_NPC
	return


Redd_Exp1_Town04::
# 132 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Redd
# 133 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town04_ReddText, MSGBOX_NPC
	return


Baron_Exp1_Town04::
# 137 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Baron
# 138 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town04_BaronText, MSGBOX_NPC
	return


Jakson_Exp1_Town04::
# 142 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Jakson
# 143 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town04_JaksonText, MSGBOX_NPC
	return

