EventScript_JaksonExpansion1Call::
# 35 "data/expansion_1/rival_scripts.pory"
	lockall
# 36 "data/expansion_1/rival_scripts.pory"
	pokenavcall Call1_JaksonText
# 37 "data/expansion_1/rival_scripts.pory"
	waitmessage
# 38 "data/expansion_1/rival_scripts.pory"
	playfanfare MUS_HG_POKEGEAR_REGISTERED
# 39 "data/expansion_1/rival_scripts.pory"
	waitfanfare
# 40 "data/expansion_1/rival_scripts.pory"
	setvar VAR_EMERALBODY_RIVAL_STATE, 19
# 41 "data/expansion_1/rival_scripts.pory"
	releaseall
	return


Sakura_Exp1_Town01::
# 46 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Sakura
# 47 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town01_SakuraText, MSGBOX_NPC
	return


Harper_Exp1_Town01::
# 51 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Harper
# 52 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town01_HarperText, MSGBOX_NPC
	return


Redd_Exp1_Town01::
# 56 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Redd
# 57 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town01_ReddText, MSGBOX_NPC
	return


Baron_Exp1_Town01::
# 61 "data/expansion_1/rival_scripts.pory"
	call GetBaronsName
# 62 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town01_BaronText, MSGBOX_NPC
	return


Jakson_Exp1_Town01::
# 66 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Jakson
# 67 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town01_JaksonText, MSGBOX_YESNO
# 68 "data/expansion_1/rival_scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Jakson_Exp1_Town01_1
# 73 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town01_JaksonTextDecline, MSGBOX_AUTOCLOSE
	return

Jakson_Exp1_Town01_1:
# 69 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town01_JaksonTextAccept, MSGBOX_AUTOCLOSE
# 70 "data/expansion_1/rival_scripts.pory"
	goto SlateportRegionMap_BoatSceneInit
	return


Sakura_Exp1_Town02::
# 79 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Sakura
# 80 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town02_SakuraText, MSGBOX_NPC
	return


Redd_Exp1_Town02::
# 84 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Redd
# 85 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town02_ReddText, MSGBOX_NPC
	return


Baron_Exp1_Town02::
# 89 "data/expansion_1/rival_scripts.pory"
	call GetBaronsName
# 90 "data/expansion_1/rival_scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 26
	goto_if_lt Baron_Exp1_Town02_1
# 94 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town02b_BaronText, MSGBOX_NPC
	return

Baron_Exp1_Town02_1:
# 91 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town02_BaronText, MSGBOX_NPC
	return


Jakson_Exp1_Town02::
# 99 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Jakson
# 100 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town02_JaksonText, MSGBOX_NPC
	return


Sakura_Exp1_Town03::
# 105 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Sakura
# 106 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town03_SakuraText, MSGBOX_NPC
	return


Redd_Exp1_Town03::
# 110 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Redd
# 111 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town03_ReddText, MSGBOX_NPC
	return


Baron_Exp1_Town03::
# 115 "data/expansion_1/rival_scripts.pory"
	call GetBaronsName
# 116 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town03_BaronText, MSGBOX_NPC
	return


Jakson_Exp1_Town03::
# 120 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Jakson
# 121 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town03_JaksonText, MSGBOX_NPC
	return


Sakura_Exp1_Town04::
# 126 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Sakura
# 127 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town04_SakuraText, MSGBOX_NPC
# 128 "data/expansion_1/rival_scripts.pory"
	setflag FLAG_SYS_SPAWN_INVISIBLE
# 129 "data/expansion_1/rival_scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 130 "data/expansion_1/rival_scripts.pory"
	setvar VAR_EMERALBODY_RIVAL_STATE, 41
# 131 "data/expansion_1/rival_scripts.pory"
	fadescreen FADE_TO_BLACK
# 132 "data/expansion_1/rival_scripts.pory"
	warpcontinuescript MAP_FAR_OFF_SEA_WEST, 55, 5, Expansion1_Rival_Scene08
	return


Harper_Exp1_Town04::
# 136 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Harper
# 137 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town04_HarperText, MSGBOX_NPC
	return


Redd_Exp1_Town04::
# 141 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Redd
# 142 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town04_ReddText, MSGBOX_NPC
	return


Baron_Exp1_Town04::
# 146 "data/expansion_1/rival_scripts.pory"
	lock
# 147 "data/expansion_1/rival_scripts.pory"
	faceplayer
# 148 "data/expansion_1/rival_scripts.pory"
	call GetBaronsName
# 149 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town04_BaronText
# 150 "data/expansion_1/rival_scripts.pory"
	compare VAR_EMERALBODY_RIVAL, 0
	goto_if_ne Baron_Exp1_Town04_2
# 150 "data/expansion_1/rival_scripts.pory"
	compare VAR_EMERALBODY_RIVAL, 5
	goto_if_ne Baron_Exp1_Town04_2
Baron_Exp1_Town04_1:
# 153 "data/expansion_1/rival_scripts.pory"
	closemessage
# 154 "data/expansion_1/rival_scripts.pory"
	release
	return

Baron_Exp1_Town04_2:
# 151 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town04b_BaronText
	goto Baron_Exp1_Town04_1


Jakson_Exp1_Town04::
# 158 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Jakson
# 159 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town04_JaksonText, MSGBOX_NPC
	return


Sakura_Exp1_Town05::
# 164 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Sakura
# 165 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town05_SakuraText, MSGBOX_NPC
	return


Harper_Exp1_Town05::
# 169 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Harper
# 170 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town05_HarperText, MSGBOX_NPC
	return


Baron_Exp1_Town05::
# 174 "data/expansion_1/rival_scripts.pory"
	call GetBaronsName
# 175 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town05_BaronText, MSGBOX_NPC
	return


Jakson_Exp1_Town05::
# 179 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Jakson
# 180 "data/expansion_1/rival_scripts.pory"
	goto_if_unset FLAG_EXP_1_BYGONE_VAULT_LEFT_SWITCH, Jakson_Exp1_Town05_2
# 184 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town05b_JaksonText, MSGBOX_NPC
Jakson_Exp1_Town05_1:
# 186 "data/expansion_1/rival_scripts.pory"
	release
	return

Jakson_Exp1_Town05_2:
# 181 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town05_JaksonText, MSGBOX_NPC
	goto Jakson_Exp1_Town05_1


Sakura_Exp1_Town06::
# 191 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Sakura
# 192 "data/expansion_1/rival_scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 43
	goto_if_eq Sakura_Exp1_Town06_1
# 196 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town06b_SakuraText, MSGBOX_NPC
	return

Sakura_Exp1_Town06_1:
# 193 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town06_SakuraText, MSGBOX_NPC
	return


Harper_Exp1_Town06::
# 201 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Harper
# 202 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town06_HarperText, MSGBOX_NPC
	return


Redd_Exp1_Town06::
# 206 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Redd
# 207 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town06_ReddText, MSGBOX_NPC
	return


Baron_Exp1_Town06::
# 211 "data/expansion_1/rival_scripts.pory"
	call GetBaronsName
# 212 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town06_BaronText, MSGBOX_NPC
	return


Jakson_Exp1_Town06::
# 216 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Jakson
# 217 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town06_JaksonText, MSGBOX_NPC
	return

