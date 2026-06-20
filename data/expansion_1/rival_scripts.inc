EventScript_JaksonExpansion1Call::
# 33 "data/expansion_1/rival_scripts.pory"
	lockall
# 34 "data/expansion_1/rival_scripts.pory"
	pokenavcall Call1_JaksonText
# 35 "data/expansion_1/rival_scripts.pory"
	waitmessage
# 36 "data/expansion_1/rival_scripts.pory"
	playfanfare MUS_HG_POKEGEAR_REGISTERED
# 37 "data/expansion_1/rival_scripts.pory"
	waitfanfare
# 38 "data/expansion_1/rival_scripts.pory"
	setvar VAR_EMERALBODY_RIVAL_STATE, 19
# 39 "data/expansion_1/rival_scripts.pory"
	releaseall
	return


Sakura_Exp1_Town01::
# 44 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Sakura
# 45 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town01_SakuraText, MSGBOX_NPC
	return


Harper_Exp1_Town01::
# 49 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Harper
# 50 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town01_HarperText, MSGBOX_NPC
	return


Redd_Exp1_Town01::
# 54 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Redd
# 55 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town01_ReddText, MSGBOX_NPC
	return


Baron_Exp1_Town01::
# 59 "data/expansion_1/rival_scripts.pory"
	call GetBaronsName
# 60 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town01_BaronText, MSGBOX_NPC
	return


Jakson_Exp1_Town01::
# 64 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Jakson
# 65 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town01_JaksonText, MSGBOX_YESNO
# 66 "data/expansion_1/rival_scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Jakson_Exp1_Town01_1
# 71 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town01_JaksonTextDecline, MSGBOX_AUTOCLOSE
	return

Jakson_Exp1_Town01_1:
# 67 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town01_JaksonTextAccept, MSGBOX_AUTOCLOSE
# 68 "data/expansion_1/rival_scripts.pory"
	goto SlateportRegionMap_BoatSceneInit
	return


Sakura_Exp1_Town02::
# 77 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Sakura
# 78 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town02_SakuraText, MSGBOX_NPC
	return


Redd_Exp1_Town02::
# 82 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Redd
# 83 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town02_ReddText, MSGBOX_NPC
	return


Baron_Exp1_Town02::
# 87 "data/expansion_1/rival_scripts.pory"
	call GetBaronsName
# 88 "data/expansion_1/rival_scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 26
	goto_if_lt Baron_Exp1_Town02_1
# 92 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town02b_BaronText, MSGBOX_NPC
	return

Baron_Exp1_Town02_1:
# 89 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town02_BaronText, MSGBOX_NPC
	return


Jakson_Exp1_Town02::
# 97 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Jakson
# 98 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town02_JaksonText, MSGBOX_NPC
	return


Sakura_Exp1_Town03::
# 103 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Sakura
# 104 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town03_SakuraText, MSGBOX_NPC
	return


Redd_Exp1_Town03::
# 108 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Redd
# 109 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town03_ReddText, MSGBOX_NPC
	return


Baron_Exp1_Town03::
# 113 "data/expansion_1/rival_scripts.pory"
	call GetBaronsName
# 114 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town03_BaronText, MSGBOX_NPC
	return


Jakson_Exp1_Town03::
# 118 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Jakson
# 119 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town03_JaksonText, MSGBOX_NPC
	return


Sakura_Exp1_Town04::
# 124 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Sakura
# 125 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town04_SakuraText, MSGBOX_NPC
# 126 "data/expansion_1/rival_scripts.pory"
	setflag FLAG_SYS_SPAWN_INVISIBLE
# 127 "data/expansion_1/rival_scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 128 "data/expansion_1/rival_scripts.pory"
	setvar VAR_EMERALBODY_RIVAL_STATE, 41
# 129 "data/expansion_1/rival_scripts.pory"
	fadescreen FADE_TO_BLACK
# 130 "data/expansion_1/rival_scripts.pory"
	warpcontinuescript MAP_FAR_OFF_SEA_WEST, 55, 5, Expansion1_Rival_Scene08
	return


Harper_Exp1_Town04::
# 134 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Harper
# 135 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town04_HarperText, MSGBOX_NPC
	return


Redd_Exp1_Town04::
# 139 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Redd
# 140 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town04_ReddText, MSGBOX_NPC
	return


Baron_Exp1_Town04::
# 144 "data/expansion_1/rival_scripts.pory"
	call GetBaronsName
# 145 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town04_BaronText
# 146 "data/expansion_1/rival_scripts.pory"
	compare VAR_EMERALBODY_RIVAL, 0
	goto_if_ne Baron_Exp1_Town04_2
# 146 "data/expansion_1/rival_scripts.pory"
	compare VAR_EMERALBODY_RIVAL, 5
	goto_if_ne Baron_Exp1_Town04_2
Baron_Exp1_Town04_1:
# 149 "data/expansion_1/rival_scripts.pory"
	closemessage
	return

Baron_Exp1_Town04_2:
# 147 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town04b_BaronText
	goto Baron_Exp1_Town04_1


Jakson_Exp1_Town04::
# 153 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Jakson
# 154 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town04_JaksonText, MSGBOX_NPC
	return

