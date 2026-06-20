EventScript_JaksonExpansion1Call::
# 34 "data/expansion_1/rival_scripts.pory"
	lockall
# 35 "data/expansion_1/rival_scripts.pory"
	pokenavcall Call1_JaksonText
# 36 "data/expansion_1/rival_scripts.pory"
	waitmessage
# 37 "data/expansion_1/rival_scripts.pory"
	playfanfare MUS_HG_POKEGEAR_REGISTERED
# 38 "data/expansion_1/rival_scripts.pory"
	waitfanfare
# 39 "data/expansion_1/rival_scripts.pory"
	setvar VAR_EMERALBODY_RIVAL_STATE, 19
# 40 "data/expansion_1/rival_scripts.pory"
	releaseall
	return


Sakura_Exp1_Town01::
# 45 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Sakura
# 46 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town01_SakuraText, MSGBOX_NPC
	return


Harper_Exp1_Town01::
# 50 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Harper
# 51 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town01_HarperText, MSGBOX_NPC
	return


Redd_Exp1_Town01::
# 55 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Redd
# 56 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town01_ReddText, MSGBOX_NPC
	return


Baron_Exp1_Town01::
# 60 "data/expansion_1/rival_scripts.pory"
	call GetBaronsName
# 61 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town01_BaronText, MSGBOX_NPC
	return


Jakson_Exp1_Town01::
# 65 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Jakson
# 66 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town01_JaksonText, MSGBOX_YESNO
# 67 "data/expansion_1/rival_scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Jakson_Exp1_Town01_1
# 72 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town01_JaksonTextDecline, MSGBOX_AUTOCLOSE
	return

Jakson_Exp1_Town01_1:
# 68 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town01_JaksonTextAccept, MSGBOX_AUTOCLOSE
# 69 "data/expansion_1/rival_scripts.pory"
	goto SlateportRegionMap_BoatSceneInit
	return


Sakura_Exp1_Town02::
# 78 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Sakura
# 79 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town02_SakuraText, MSGBOX_NPC
	return


Redd_Exp1_Town02::
# 83 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Redd
# 84 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town02_ReddText, MSGBOX_NPC
	return


Baron_Exp1_Town02::
# 88 "data/expansion_1/rival_scripts.pory"
	call GetBaronsName
# 89 "data/expansion_1/rival_scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 26
	goto_if_lt Baron_Exp1_Town02_1
# 93 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town02b_BaronText, MSGBOX_NPC
	return

Baron_Exp1_Town02_1:
# 90 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town02_BaronText, MSGBOX_NPC
	return


Jakson_Exp1_Town02::
# 98 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Jakson
# 99 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town02_JaksonText, MSGBOX_NPC
	return


Sakura_Exp1_Town03::
# 104 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Sakura
# 105 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town03_SakuraText, MSGBOX_NPC
	return


Redd_Exp1_Town03::
# 109 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Redd
# 110 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town03_ReddText, MSGBOX_NPC
	return


Baron_Exp1_Town03::
# 114 "data/expansion_1/rival_scripts.pory"
	call GetBaronsName
# 115 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town03_BaronText, MSGBOX_NPC
	return


Jakson_Exp1_Town03::
# 119 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Jakson
# 120 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town03_JaksonText, MSGBOX_NPC
	return


Sakura_Exp1_Town04::
# 125 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Sakura
# 126 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town04_SakuraText, MSGBOX_NPC
# 127 "data/expansion_1/rival_scripts.pory"
	setflag FLAG_SYS_SPAWN_INVISIBLE
# 128 "data/expansion_1/rival_scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 129 "data/expansion_1/rival_scripts.pory"
	setvar VAR_EMERALBODY_RIVAL_STATE, 41
# 130 "data/expansion_1/rival_scripts.pory"
	fadescreen FADE_TO_BLACK
# 131 "data/expansion_1/rival_scripts.pory"
	warpcontinuescript MAP_FAR_OFF_SEA_WEST, 55, 5, Expansion1_Rival_Scene08
	return


Harper_Exp1_Town04::
# 135 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Harper
# 136 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town04_HarperText, MSGBOX_NPC
	return


Redd_Exp1_Town04::
# 140 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Redd
# 141 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town04_ReddText, MSGBOX_NPC
	return


Baron_Exp1_Town04::
# 145 "data/expansion_1/rival_scripts.pory"
	call GetBaronsName
# 146 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town04_BaronText
# 147 "data/expansion_1/rival_scripts.pory"
	compare VAR_EMERALBODY_RIVAL, 0
	goto_if_ne Baron_Exp1_Town04_2
# 147 "data/expansion_1/rival_scripts.pory"
	compare VAR_EMERALBODY_RIVAL, 5
	goto_if_ne Baron_Exp1_Town04_2
Baron_Exp1_Town04_1:
# 150 "data/expansion_1/rival_scripts.pory"
	closemessage
	return

Baron_Exp1_Town04_2:
# 148 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town04b_BaronText
	goto Baron_Exp1_Town04_1


Jakson_Exp1_Town04::
# 154 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Jakson
# 155 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town04_JaksonText, MSGBOX_NPC
	return

