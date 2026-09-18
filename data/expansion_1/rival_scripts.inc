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
	compare VAR_EMERALBODY_RIVAL, 0
	goto_if_eq EventScript_JaksonExpansion1Call_2
# 49 "data/expansion_1/rival_scripts.pory"
	compare VAR_EMERALBODY_RIVAL, 5
	goto_if_eq EventScript_JaksonExpansion1Call_2
EventScript_JaksonExpansion1Call_1:
# 52 "data/expansion_1/rival_scripts.pory"
	releaseall
	return

EventScript_JaksonExpansion1Call_2:
# 50 "data/expansion_1/rival_scripts.pory"
	setflag FLAG_ENABLE_BARONS_MOM_MATCH_CALL
	goto EventScript_JaksonExpansion1Call_1


Sakura_Exp1_Town01::
# 57 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Sakura
# 58 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town01_SakuraText, MSGBOX_NPC
	return


Harper_Exp1_Town01::
# 62 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Harper
# 63 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town01_HarperText, MSGBOX_NPC
	return


Redd_Exp1_Town01::
# 67 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Redd
# 68 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town01_ReddText, MSGBOX_NPC
	return


Baron_Exp1_Town01::
# 72 "data/expansion_1/rival_scripts.pory"
	call GetBaronsName
# 73 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town01_BaronText, MSGBOX_NPC
	return


Jakson_Exp1_Town01::
# 77 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Jakson
# 78 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town01_JaksonText, MSGBOX_YESNO
# 79 "data/expansion_1/rival_scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Jakson_Exp1_Town01_1
# 84 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town01_JaksonTextDecline, MSGBOX_AUTOCLOSE
	return

Jakson_Exp1_Town01_1:
# 80 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town01_JaksonTextAccept, MSGBOX_AUTOCLOSE
# 81 "data/expansion_1/rival_scripts.pory"
	goto SlateportRegionMap_BoatSceneInit
	return


Sakura_Exp1_Town02::
# 90 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Sakura
# 91 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town02_SakuraText, MSGBOX_NPC
	return


Redd_Exp1_Town02::
# 95 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Redd
# 96 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town02_ReddText, MSGBOX_NPC
	return


Baron_Exp1_Town02::
# 100 "data/expansion_1/rival_scripts.pory"
	call GetBaronsName
# 101 "data/expansion_1/rival_scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 26
	goto_if_lt Baron_Exp1_Town02_1
# 105 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town02b_BaronText, MSGBOX_NPC
	return

Baron_Exp1_Town02_1:
# 102 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town02_BaronText, MSGBOX_NPC
	return


Jakson_Exp1_Town02::
# 110 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Jakson
# 111 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town02_JaksonText, MSGBOX_NPC
	return


Sakura_Exp1_Town03::
# 116 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Sakura
# 117 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town03_SakuraText, MSGBOX_NPC
	return


Redd_Exp1_Town03::
# 121 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Redd
# 122 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town03_ReddText, MSGBOX_NPC
	return


Baron_Exp1_Town03::
# 126 "data/expansion_1/rival_scripts.pory"
	call GetBaronsName
# 127 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town03_BaronText, MSGBOX_NPC
	return


Jakson_Exp1_Town03::
# 131 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Jakson
# 132 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town03_JaksonText, MSGBOX_NPC
	return


Sakura_Exp1_Town04::
# 137 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Sakura
# 138 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town04_SakuraText, MSGBOX_NPC
# 139 "data/expansion_1/rival_scripts.pory"
	setflag FLAG_SYS_SPAWN_INVISIBLE
# 140 "data/expansion_1/rival_scripts.pory"
	setflag FLAG_SYS_DONT_SPAWN_SURF_BLOB
# 141 "data/expansion_1/rival_scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 142 "data/expansion_1/rival_scripts.pory"
	setvar VAR_EMERALBODY_RIVAL_STATE, 41
# 143 "data/expansion_1/rival_scripts.pory"
	fadescreen FADE_TO_BLACK
# 144 "data/expansion_1/rival_scripts.pory"
	warpcontinuescript MAP_FAR_OFF_SEA_WEST, 55, 5, Expansion1_Rival_Scene08
	return


Harper_Exp1_Town04::
# 148 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Harper
# 149 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town04_HarperText, MSGBOX_NPC
	return


Redd_Exp1_Town04::
# 153 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Redd
# 154 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town04_ReddText, MSGBOX_NPC
	return


Baron_Exp1_Town04::
# 158 "data/expansion_1/rival_scripts.pory"
	lock
# 159 "data/expansion_1/rival_scripts.pory"
	faceplayer
# 160 "data/expansion_1/rival_scripts.pory"
	call GetBaronsName
# 161 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town04_BaronText
# 162 "data/expansion_1/rival_scripts.pory"
	compare VAR_EMERALBODY_RIVAL, 0
	goto_if_ne Baron_Exp1_Town04_3
Baron_Exp1_Town04_1:
# 165 "data/expansion_1/rival_scripts.pory"
	closemessage
# 166 "data/expansion_1/rival_scripts.pory"
	release
	return

Baron_Exp1_Town04_2:
# 163 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town04b_BaronText
	goto Baron_Exp1_Town04_1

Baron_Exp1_Town04_3:
# 162 "data/expansion_1/rival_scripts.pory"
	compare VAR_EMERALBODY_RIVAL, 5
	goto_if_ne Baron_Exp1_Town04_2
	goto Baron_Exp1_Town04_1


Jakson_Exp1_Town04::
# 170 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Jakson
# 171 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town04_JaksonText, MSGBOX_NPC
	return


Sakura_Exp1_Town05::
# 176 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Sakura
# 177 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town05_SakuraText, MSGBOX_NPC
	return


Harper_Exp1_Town05::
# 181 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Harper
# 182 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town05_HarperText, MSGBOX_NPC
	return


Baron_Exp1_Town05::
# 186 "data/expansion_1/rival_scripts.pory"
	call GetBaronsName
# 187 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town05_BaronText, MSGBOX_NPC
	return


Jakson_Exp1_Town05::
# 191 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Jakson
# 192 "data/expansion_1/rival_scripts.pory"
	goto_if_unset FLAG_EXP_1_BYGONE_VAULT_LEFT_SWITCH, Jakson_Exp1_Town05_2
# 196 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town05b_JaksonText, MSGBOX_NPC
Jakson_Exp1_Town05_1:
# 198 "data/expansion_1/rival_scripts.pory"
	release
	return

Jakson_Exp1_Town05_2:
# 193 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town05_JaksonText, MSGBOX_NPC
	goto Jakson_Exp1_Town05_1


Sakura_Exp1_Town06::
# 203 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Sakura
# 204 "data/expansion_1/rival_scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 43
	goto_if_eq Sakura_Exp1_Town06_1
# 208 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town06b_SakuraText, MSGBOX_NPC
	return

Sakura_Exp1_Town06_1:
# 205 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town06_SakuraText, MSGBOX_NPC
	return


Harper_Exp1_Town06::
# 213 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Harper
# 214 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town06_HarperText, MSGBOX_NPC
	return


Redd_Exp1_Town06::
# 218 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Redd
# 219 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town06_ReddText, MSGBOX_NPC
	return


Baron_Exp1_Town06::
# 223 "data/expansion_1/rival_scripts.pory"
	call GetBaronsName
# 224 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town06_BaronText, MSGBOX_NPC
	return


Jakson_Exp1_Town06::
# 228 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Jakson
# 229 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town06_JaksonText, MSGBOX_NPC
	return


Sakura_Exp1_Town07::
# 234 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Sakura
# 235 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town07_SakuraText, MSGBOX_NPC
	return


Harper_Exp1_Town07::
# 239 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Harper
# 240 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town07_HarperText, MSGBOX_NPC
	return


Redd_Exp1_Town07::
# 244 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Redd
# 245 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town07_ReddText, MSGBOX_NPC
	return


Baron_Exp1_Town07::
# 249 "data/expansion_1/rival_scripts.pory"
	call GetBaronsName
# 250 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town07_BaronText, MSGBOX_NPC
	return


Jakson_Exp1_Town07::
# 254 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Jakson
# 255 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town07_JaksonText, MSGBOX_NPC
	return


Sakura_Exp1_Town09::
# 260 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Sakura
# 261 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town09_SakuraText, MSGBOX_NPC
# 262 "data/expansion_1/rival_scripts.pory"
	turnobject 8, DIR_SOUTH
	return


Harper_Exp1_Town09::
# 266 "data/expansion_1/rival_scripts.pory"
	goto_if_unset FLAG_TEMP_6, Harper_Exp1_Town09_2
Harper_Exp1_Town09_1:
# 269 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Harper
# 270 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town09_HarperText, MSGBOX_NPC
	return

Harper_Exp1_Town09_2:
# 267 "data/expansion_1/rival_scripts.pory"
	goto Town09_MiniScene
	goto Harper_Exp1_Town09_1


Redd_Exp1_Town09::
# 274 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Redd
# 275 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town09_ReddText, MSGBOX_NPC
	return


Baron_Exp1_Town09::
# 279 "data/expansion_1/rival_scripts.pory"
	faceplayer
# 280 "data/expansion_1/rival_scripts.pory"
	call GetBaronsName
# 281 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town09_BaronText
# 282 "data/expansion_1/rival_scripts.pory"
	compare VAR_EMERALBODY_RIVAL, 0
	goto_if_eq Baron_Exp1_Town09_2
# 282 "data/expansion_1/rival_scripts.pory"
	compare VAR_EMERALBODY_RIVAL, 5
	goto_if_eq Baron_Exp1_Town09_2
# 286 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town09b_BaronText
Baron_Exp1_Town09_1:
# 288 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town09c_BaronText, MSGBOX_AUTOCLOSE
	return

Baron_Exp1_Town09_2:
# 283 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town09a_BaronText
	goto Baron_Exp1_Town09_1


Jakson_Exp1_Town09::
# 292 "data/expansion_1/rival_scripts.pory"
	goto_if_unset FLAG_TEMP_6, Jakson_Exp1_Town09_2
Jakson_Exp1_Town09_1:
# 295 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Jakson
# 296 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town09_JaksonText, MSGBOX_NPC
	return

Jakson_Exp1_Town09_2:
# 293 "data/expansion_1/rival_scripts.pory"
	goto Town09_MiniScene
	goto Jakson_Exp1_Town09_1


Town09_MiniScene::
# 303 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Harper
# 304 "data/expansion_1/rival_scripts.pory"
	msgbox Town09_MiniScene_Text_0
# 311 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Jakson
# 312 "data/expansion_1/rival_scripts.pory"
	msgbox Town09_MiniScene_Text_1, MSGBOX_AUTOCLOSE
# 314 "data/expansion_1/rival_scripts.pory"
	applymovement 32, Common_Movement_FacePlayer
# 315 "data/expansion_1/rival_scripts.pory"
	applymovement 31, Common_Movement_FacePlayer
# 316 "data/expansion_1/rival_scripts.pory"
	waitmovement 0
# 317 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Jakson
# 318 "data/expansion_1/rival_scripts.pory"
	msgbox Town09_MiniScene_Text_2
# 321 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Harper
# 322 "data/expansion_1/rival_scripts.pory"
	msgbox Town09_MiniScene_Text_3
# 325 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Jakson
# 326 "data/expansion_1/rival_scripts.pory"
	msgbox Town09_MiniScene_Text_4, MSGBOX_AUTOCLOSE
# 330 "data/expansion_1/rival_scripts.pory"
	applymovement 32, Common_Movement_FaceOriginalDirection
# 331 "data/expansion_1/rival_scripts.pory"
	waitmovement 0
# 332 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Jakson
# 333 "data/expansion_1/rival_scripts.pory"
	msgbox Town09_MiniScene_Text_5
# 334 "data/expansion_1/rival_scripts.pory"
	applymovement 31, Common_Movement_FaceOriginalDirection
# 335 "data/expansion_1/rival_scripts.pory"
	waitmovement 0
# 336 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Harper
# 337 "data/expansion_1/rival_scripts.pory"
	msgbox Town09_MiniScene_Text_6, MSGBOX_AUTOCLOSE
# 340 "data/expansion_1/rival_scripts.pory"
	applymovement 31, Common_Movement_FacePlayer
# 341 "data/expansion_1/rival_scripts.pory"
	waitmovement 0
# 342 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Harper
# 343 "data/expansion_1/rival_scripts.pory"
	msgbox Town09_MiniScene_Text_7
# 347 "data/expansion_1/rival_scripts.pory"
	applymovement 32, Common_Movement_FacePlayer
# 348 "data/expansion_1/rival_scripts.pory"
	waitmovement 0
# 349 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Jakson
# 350 "data/expansion_1/rival_scripts.pory"
	msgbox Town09_MiniScene_Text_8, MSGBOX_AUTOCLOSE
# 353 "data/expansion_1/rival_scripts.pory"
	applymovement 32, Common_Movement_FaceOriginalDirection
# 354 "data/expansion_1/rival_scripts.pory"
	applymovement 31, Common_Movement_FaceOriginalDirection
# 355 "data/expansion_1/rival_scripts.pory"
	waitmovement 0
# 356 "data/expansion_1/rival_scripts.pory"
	setflag FLAG_TEMP_6
	return


Town09_MiniScene_Text_0:
# 304 "data/expansion_1/rival_scripts.pory"
	.string "Hmm…{PAUSE 100}\n"
	.string "Well, it's not a bad idea, but are you\l"
	.string "sure players wouldn't get bored\l"
	.string "without battles for so long?\p"
	.string "And you better plan this out so we\n"
	.string "can't, y'know, sequence break the\l"
	.string "entire damn thing again?$"

Town09_MiniScene_Text_1:
# 312 "data/expansion_1/rival_scripts.pory"
	.string "…{PAUSE 60}Ah, yeah. I think I see what you mean.\p"
	.string "Damn, I'll have to rethink that section.$"

Town09_MiniScene_Text_2:
# 318 "data/expansion_1/rival_scripts.pory"
	.string "Oh, hey there, {PLAYER}.\p"
	.string "I'm just bouncing some ideas off of\n"
	.string "Harper for future content.$"

Town09_MiniScene_Text_3:
# 322 "data/expansion_1/rival_scripts.pory"
	.string "I'm not sure if it's a waste of my time\n"
	.string "yet, but I guess this guy's got a poor\l"
	.string "track record so far.$"

Town09_MiniScene_Text_4:
# 326 "data/expansion_1/rival_scripts.pory"
	.string "… {PAUSE 30}… {PAUSE 30}…{PAUSE 30}\n"
	.string "Well, if it means I get some more help,\l"
	.string "maybe I'll play up incompetence some\l"
	.string "more.$"

Town09_MiniScene_Text_5:
# 333 "data/expansion_1/rival_scripts.pory"
	.string "But really, you're a big help, Harper.$"

Town09_MiniScene_Text_6:
# 337 "data/expansion_1/rival_scripts.pory"
	.string "Yeah, yeah… {PAUSE 100}I just hope it's good in\n"
	.string "the end. If you can't do it, I'll have\l"
	.string "to step in.$"

Town09_MiniScene_Text_7:
# 343 "data/expansion_1/rival_scripts.pory"
	.string "Oh, and when you want to tell me how\n"
	.string "much it sucks, {PLAYER}, please\l"
	.string "redirect your ire in the general\l"
	.string "direction of Jakson.$"

Town09_MiniScene_Text_8:
# 350 "data/expansion_1/rival_scripts.pory"
	.string "… {PAUSE 30}… {PAUSE 30}…\p"
	.string "Don't worry, I think this is how she\n"
	.string "shows affection, {PLAYER}.$"
