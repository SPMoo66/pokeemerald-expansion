EventScript_JaksonExpansion1Call::
# 43 "data/expansion_1/rival_scripts.pory"
	lockall
# 44 "data/expansion_1/rival_scripts.pory"
	pokenavcall Call1_JaksonText
# 45 "data/expansion_1/rival_scripts.pory"
	waitmessage
# 46 "data/expansion_1/rival_scripts.pory"
	playfanfare MUS_HG_POKEGEAR_REGISTERED
# 47 "data/expansion_1/rival_scripts.pory"
	waitfanfare
# 48 "data/expansion_1/rival_scripts.pory"
	setvar VAR_EMERALBODY_RIVAL_STATE, 19
# 49 "data/expansion_1/rival_scripts.pory"
	releaseall
	return


Sakura_Exp1_Town01::
# 54 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Sakura
# 55 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town01_SakuraText, MSGBOX_NPC
	return


Harper_Exp1_Town01::
# 59 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Harper
# 60 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town01_HarperText, MSGBOX_NPC
	return


Redd_Exp1_Town01::
# 64 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Redd
# 65 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town01_ReddText, MSGBOX_NPC
	return


Baron_Exp1_Town01::
# 69 "data/expansion_1/rival_scripts.pory"
	call GetBaronsName
# 70 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town01_BaronText, MSGBOX_NPC
	return


Jakson_Exp1_Town01::
# 74 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Jakson
# 75 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town01_JaksonText, MSGBOX_YESNO
# 76 "data/expansion_1/rival_scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Jakson_Exp1_Town01_1
# 81 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town01_JaksonTextDecline, MSGBOX_AUTOCLOSE
	return

Jakson_Exp1_Town01_1:
# 77 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town01_JaksonTextAccept, MSGBOX_AUTOCLOSE
# 78 "data/expansion_1/rival_scripts.pory"
	goto SlateportRegionMap_BoatSceneInit
	return


Sakura_Exp1_Town02::
# 87 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Sakura
# 88 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town02_SakuraText, MSGBOX_NPC
	return


Redd_Exp1_Town02::
# 92 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Redd
# 93 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town02_ReddText, MSGBOX_NPC
	return


Baron_Exp1_Town02::
# 97 "data/expansion_1/rival_scripts.pory"
	call GetBaronsName
# 98 "data/expansion_1/rival_scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 26
	goto_if_lt Baron_Exp1_Town02_1
# 102 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town02b_BaronText, MSGBOX_NPC
	return

Baron_Exp1_Town02_1:
# 99 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town02_BaronText, MSGBOX_NPC
	return


Jakson_Exp1_Town02::
# 107 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Jakson
# 108 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town02_JaksonText, MSGBOX_NPC
	return


Sakura_Exp1_Town03::
# 113 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Sakura
# 114 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town03_SakuraText, MSGBOX_NPC
	return


Redd_Exp1_Town03::
# 118 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Redd
# 119 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town03_ReddText, MSGBOX_NPC
	return


Baron_Exp1_Town03::
# 123 "data/expansion_1/rival_scripts.pory"
	call GetBaronsName
# 124 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town03_BaronText, MSGBOX_NPC
	return


Jakson_Exp1_Town03::
# 128 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Jakson
# 129 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town03_JaksonText, MSGBOX_NPC
	return


Sakura_Exp1_Town04::
# 134 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Sakura
# 135 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town04_SakuraText, MSGBOX_NPC
# 136 "data/expansion_1/rival_scripts.pory"
	setflag FLAG_SYS_SPAWN_INVISIBLE
# 137 "data/expansion_1/rival_scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 138 "data/expansion_1/rival_scripts.pory"
	setvar VAR_EMERALBODY_RIVAL_STATE, 41
# 139 "data/expansion_1/rival_scripts.pory"
	fadescreen FADE_TO_BLACK
# 140 "data/expansion_1/rival_scripts.pory"
	warpcontinuescript MAP_FAR_OFF_SEA_WEST, 55, 5, Expansion1_Rival_Scene08
	return


Harper_Exp1_Town04::
# 144 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Harper
# 145 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town04_HarperText, MSGBOX_NPC
	return


Redd_Exp1_Town04::
# 149 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Redd
# 150 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town04_ReddText, MSGBOX_NPC
	return


Baron_Exp1_Town04::
# 154 "data/expansion_1/rival_scripts.pory"
	lock
# 155 "data/expansion_1/rival_scripts.pory"
	faceplayer
# 156 "data/expansion_1/rival_scripts.pory"
	call GetBaronsName
# 157 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town04_BaronText
# 158 "data/expansion_1/rival_scripts.pory"
	compare VAR_EMERALBODY_RIVAL, 0
	goto_if_ne Baron_Exp1_Town04_2
# 158 "data/expansion_1/rival_scripts.pory"
	compare VAR_EMERALBODY_RIVAL, 5
	goto_if_ne Baron_Exp1_Town04_2
Baron_Exp1_Town04_1:
# 161 "data/expansion_1/rival_scripts.pory"
	closemessage
# 162 "data/expansion_1/rival_scripts.pory"
	release
	return

Baron_Exp1_Town04_2:
# 159 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town04b_BaronText
	goto Baron_Exp1_Town04_1


Jakson_Exp1_Town04::
# 166 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Jakson
# 167 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town04_JaksonText, MSGBOX_NPC
	return


Sakura_Exp1_Town05::
# 172 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Sakura
# 173 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town05_SakuraText, MSGBOX_NPC
	return


Harper_Exp1_Town05::
# 177 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Harper
# 178 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town05_HarperText, MSGBOX_NPC
	return


Baron_Exp1_Town05::
# 182 "data/expansion_1/rival_scripts.pory"
	call GetBaronsName
# 183 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town05_BaronText, MSGBOX_NPC
	return


Jakson_Exp1_Town05::
# 187 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Jakson
# 188 "data/expansion_1/rival_scripts.pory"
	goto_if_unset FLAG_EXP_1_BYGONE_VAULT_LEFT_SWITCH, Jakson_Exp1_Town05_2
# 192 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town05b_JaksonText, MSGBOX_NPC
Jakson_Exp1_Town05_1:
# 194 "data/expansion_1/rival_scripts.pory"
	release
	return

Jakson_Exp1_Town05_2:
# 189 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town05_JaksonText, MSGBOX_NPC
	goto Jakson_Exp1_Town05_1


Sakura_Exp1_Town06::
# 199 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Sakura
# 200 "data/expansion_1/rival_scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 43
	goto_if_eq Sakura_Exp1_Town06_1
# 204 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town06b_SakuraText, MSGBOX_NPC
	return

Sakura_Exp1_Town06_1:
# 201 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town06_SakuraText, MSGBOX_NPC
	return


Harper_Exp1_Town06::
# 209 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Harper
# 210 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town06_HarperText, MSGBOX_NPC
	return


Redd_Exp1_Town06::
# 214 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Redd
# 215 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town06_ReddText, MSGBOX_NPC
	return


Baron_Exp1_Town06::
# 219 "data/expansion_1/rival_scripts.pory"
	call GetBaronsName
# 220 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town06_BaronText, MSGBOX_NPC
	return


Jakson_Exp1_Town06::
# 224 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Jakson
# 225 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town06_JaksonText, MSGBOX_NPC
	return


Sakura_Exp1_Town07::
# 230 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Sakura
# 231 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town07_SakuraText, MSGBOX_NPC
	return


Harper_Exp1_Town07::
# 235 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Harper
# 236 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town07_HarperText, MSGBOX_NPC
	return


Redd_Exp1_Town07::
# 240 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Redd
# 241 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town07_ReddText, MSGBOX_NPC
	return


Baron_Exp1_Town07::
# 245 "data/expansion_1/rival_scripts.pory"
	call GetBaronsName
# 246 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town07_BaronText, MSGBOX_NPC
	return


Jakson_Exp1_Town07::
# 250 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Jakson
# 251 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town07_JaksonText, MSGBOX_NPC
	return

