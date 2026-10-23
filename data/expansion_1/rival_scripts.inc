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
	faceplayer
# 78 "data/expansion_1/rival_scripts.pory"
	goto_if_unset FLAG_RECEIVED_TUNING_FORK, Jakson_Exp1_Town01_1
# 82 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Jakson
# 83 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town01_JaksonText, MSGBOX_YESNO
# 84 "data/expansion_1/rival_scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Jakson_Exp1_Town01_4
# 89 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town01_JaksonTextDecline, MSGBOX_AUTOCLOSE
	return

Jakson_Exp1_Town01_1:
# 79 "data/expansion_1/rival_scripts.pory"
	call EventScript_JaksonGivesTuningFork
	return

Jakson_Exp1_Town01_4:
# 85 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town01_JaksonTextAccept, MSGBOX_AUTOCLOSE
# 86 "data/expansion_1/rival_scripts.pory"
	goto SlateportRegionMap_BoatSceneInit
	return


Sakura_Exp1_Town02::
# 96 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Sakura
# 97 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town02_SakuraText, MSGBOX_NPC
	return


Redd_Exp1_Town02::
# 101 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Redd
# 102 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town02_ReddText, MSGBOX_NPC
	return


Baron_Exp1_Town02::
# 106 "data/expansion_1/rival_scripts.pory"
	call GetBaronsName
# 107 "data/expansion_1/rival_scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 26
	goto_if_lt Baron_Exp1_Town02_1
# 111 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town02b_BaronText, MSGBOX_NPC
	return

Baron_Exp1_Town02_1:
# 108 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town02_BaronText, MSGBOX_NPC
	return


Jakson_Exp1_Town02::
# 116 "data/expansion_1/rival_scripts.pory"
	goto_if_unset FLAG_RECEIVED_TUNING_FORK, Jakson_Exp1_Town02_1
# 120 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Jakson
# 121 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town02_JaksonText, MSGBOX_NPC
	return

Jakson_Exp1_Town02_1:
# 117 "data/expansion_1/rival_scripts.pory"
	call EventScript_JaksonGivesTuningFork
	return


Sakura_Exp1_Town03::
# 127 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Sakura
# 128 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town03_SakuraText, MSGBOX_NPC
	return


Redd_Exp1_Town03::
# 132 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Redd
# 133 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town03_ReddText, MSGBOX_NPC
	return


Baron_Exp1_Town03::
# 137 "data/expansion_1/rival_scripts.pory"
	call GetBaronsName
# 138 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town03_BaronText, MSGBOX_NPC
	return


Jakson_Exp1_Town03::
# 142 "data/expansion_1/rival_scripts.pory"
	goto_if_unset FLAG_RECEIVED_TUNING_FORK, Jakson_Exp1_Town03_1
# 146 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Jakson
# 147 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town03_JaksonText, MSGBOX_NPC
	return

Jakson_Exp1_Town03_1:
# 143 "data/expansion_1/rival_scripts.pory"
	call EventScript_JaksonGivesTuningFork
	return


Sakura_Exp1_Town04::
# 153 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Sakura
# 154 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town04_SakuraText, MSGBOX_NPC
# 155 "data/expansion_1/rival_scripts.pory"
	setflag FLAG_SYS_SPAWN_INVISIBLE
# 156 "data/expansion_1/rival_scripts.pory"
	setflag FLAG_SYS_DONT_SPAWN_SURF_BLOB
# 157 "data/expansion_1/rival_scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 158 "data/expansion_1/rival_scripts.pory"
	setvar VAR_EMERALBODY_RIVAL_STATE, 41
# 159 "data/expansion_1/rival_scripts.pory"
	fadescreen FADE_TO_BLACK
# 160 "data/expansion_1/rival_scripts.pory"
	warpcontinuescript MAP_FAR_OFF_SEA_WEST, 55, 5, Expansion1_Rival_Scene08
	return


Harper_Exp1_Town04::
# 164 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Harper
# 165 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town04_HarperText, MSGBOX_NPC
	return


Redd_Exp1_Town04::
# 169 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Redd
# 170 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town04_ReddText, MSGBOX_NPC
	return


Baron_Exp1_Town04::
# 174 "data/expansion_1/rival_scripts.pory"
	lock
# 175 "data/expansion_1/rival_scripts.pory"
	faceplayer
# 176 "data/expansion_1/rival_scripts.pory"
	call GetBaronsName
# 177 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town04_BaronText
# 178 "data/expansion_1/rival_scripts.pory"
	compare VAR_EMERALBODY_RIVAL, 0
	goto_if_ne Baron_Exp1_Town04_3
Baron_Exp1_Town04_1:
# 181 "data/expansion_1/rival_scripts.pory"
	closemessage
# 182 "data/expansion_1/rival_scripts.pory"
	release
	return

Baron_Exp1_Town04_2:
# 179 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town04b_BaronText
	goto Baron_Exp1_Town04_1

Baron_Exp1_Town04_3:
# 178 "data/expansion_1/rival_scripts.pory"
	compare VAR_EMERALBODY_RIVAL, 5
	goto_if_ne Baron_Exp1_Town04_2
	goto Baron_Exp1_Town04_1


Jakson_Exp1_Town04::
# 186 "data/expansion_1/rival_scripts.pory"
	goto_if_unset FLAG_RECEIVED_TUNING_FORK, Jakson_Exp1_Town04_1
# 190 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Jakson
# 191 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town04_JaksonText, MSGBOX_NPC
	return

Jakson_Exp1_Town04_1:
# 187 "data/expansion_1/rival_scripts.pory"
	call EventScript_JaksonGivesTuningFork
	return


Sakura_Exp1_Town05::
# 197 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Sakura
# 198 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town05_SakuraText, MSGBOX_NPC
	return


Harper_Exp1_Town05::
# 202 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Harper
# 203 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town05_HarperText, MSGBOX_NPC
	return


Baron_Exp1_Town05::
# 207 "data/expansion_1/rival_scripts.pory"
	call GetBaronsName
# 208 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town05_BaronText, MSGBOX_NPC
	return


Jakson_Exp1_Town05::
# 212 "data/expansion_1/rival_scripts.pory"
	goto_if_unset FLAG_RECEIVED_TUNING_FORK, Jakson_Exp1_Town05_2
# 216 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Jakson
# 217 "data/expansion_1/rival_scripts.pory"
	goto_if_unset FLAG_EXP_1_BYGONE_VAULT_LEFT_SWITCH, Jakson_Exp1_Town05_5
# 221 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town05b_JaksonText, MSGBOX_NPC
Jakson_Exp1_Town05_1:
# 224 "data/expansion_1/rival_scripts.pory"
	release
	return

Jakson_Exp1_Town05_2:
# 213 "data/expansion_1/rival_scripts.pory"
	call EventScript_JaksonGivesTuningFork
	goto Jakson_Exp1_Town05_1

Jakson_Exp1_Town05_5:
# 218 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town05_JaksonText, MSGBOX_NPC
	goto Jakson_Exp1_Town05_1


Sakura_Exp1_Town06::
# 229 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Sakura
# 230 "data/expansion_1/rival_scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 43
	goto_if_eq Sakura_Exp1_Town06_1
# 234 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town06b_SakuraText, MSGBOX_NPC
	return

Sakura_Exp1_Town06_1:
# 231 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town06_SakuraText, MSGBOX_NPC
	return


Harper_Exp1_Town06::
# 239 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Harper
# 240 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town06_HarperText, MSGBOX_NPC
	return


Redd_Exp1_Town06::
# 244 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Redd
# 245 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town06_ReddText, MSGBOX_NPC
	return


Baron_Exp1_Town06::
# 249 "data/expansion_1/rival_scripts.pory"
	call GetBaronsName
# 250 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town06_BaronText, MSGBOX_NPC
	return


Jakson_Exp1_Town06::
# 254 "data/expansion_1/rival_scripts.pory"
	goto_if_unset FLAG_RECEIVED_TUNING_FORK, Jakson_Exp1_Town06_1
# 258 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Jakson
# 259 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town06_JaksonText, MSGBOX_NPC
	return

Jakson_Exp1_Town06_1:
# 255 "data/expansion_1/rival_scripts.pory"
	call EventScript_JaksonGivesTuningFork
	return


Sakura_Exp1_Town07::
# 265 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Sakura
# 266 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town07_SakuraText, MSGBOX_NPC
	return


Harper_Exp1_Town07::
# 270 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Harper
# 271 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town07_HarperText, MSGBOX_NPC
	return


Redd_Exp1_Town07::
# 275 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Redd
# 276 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town07_ReddText, MSGBOX_NPC
	return


Baron_Exp1_Town07::
# 280 "data/expansion_1/rival_scripts.pory"
	call GetBaronsName
# 281 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town07_BaronText, MSGBOX_NPC
	return


Jakson_Exp1_Town07::
# 285 "data/expansion_1/rival_scripts.pory"
	goto_if_unset FLAG_RECEIVED_TUNING_FORK, Jakson_Exp1_Town07_1
# 289 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Jakson
# 290 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town07_JaksonText, MSGBOX_NPC
	return

Jakson_Exp1_Town07_1:
# 286 "data/expansion_1/rival_scripts.pory"
	call EventScript_JaksonGivesTuningFork
	return


Sakura_Exp1_Town09::
# 296 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Sakura
# 297 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town09_SakuraText, MSGBOX_NPC
# 298 "data/expansion_1/rival_scripts.pory"
	turnobject 8, DIR_SOUTH
	return


Harper_Exp1_Town09::
# 302 "data/expansion_1/rival_scripts.pory"
	goto_if_unset FLAG_TEMP_6, Harper_Exp1_Town09_2
Harper_Exp1_Town09_1:
# 305 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Harper
# 306 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town09_HarperText, MSGBOX_NPC
	return

Harper_Exp1_Town09_2:
# 303 "data/expansion_1/rival_scripts.pory"
	goto Town09_MiniScene
	goto Harper_Exp1_Town09_1


Redd_Exp1_Town09::
# 310 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Redd
# 311 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town09_ReddText, MSGBOX_NPC
	return


Baron_Exp1_Town09::
# 315 "data/expansion_1/rival_scripts.pory"
	faceplayer
# 316 "data/expansion_1/rival_scripts.pory"
	call GetBaronsName
# 317 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town09_BaronText
# 318 "data/expansion_1/rival_scripts.pory"
	compare VAR_EMERALBODY_RIVAL, 0
	goto_if_eq Baron_Exp1_Town09_2
# 318 "data/expansion_1/rival_scripts.pory"
	compare VAR_EMERALBODY_RIVAL, 5
	goto_if_eq Baron_Exp1_Town09_2
# 322 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town09b_BaronText
Baron_Exp1_Town09_1:
# 324 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town09c_BaronText, MSGBOX_AUTOCLOSE
	return

Baron_Exp1_Town09_2:
# 319 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town09a_BaronText
	goto Baron_Exp1_Town09_1


Jakson_Exp1_Town09::
# 328 "data/expansion_1/rival_scripts.pory"
	goto_if_unset FLAG_TEMP_6, Jakson_Exp1_Town09_2
Jakson_Exp1_Town09_1:
# 331 "data/expansion_1/rival_scripts.pory"
	goto_if_unset FLAG_RECEIVED_TUNING_FORK, Jakson_Exp1_Town09_4
# 335 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Jakson
# 336 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town09_JaksonText, MSGBOX_NPC
	return

Jakson_Exp1_Town09_2:
# 329 "data/expansion_1/rival_scripts.pory"
	goto Town09_MiniScene
	goto Jakson_Exp1_Town09_1

Jakson_Exp1_Town09_4:
# 332 "data/expansion_1/rival_scripts.pory"
	call EventScript_JaksonGivesTuningFork
	return


Town09_MiniScene::
# 344 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Harper
# 345 "data/expansion_1/rival_scripts.pory"
	msgbox Town09_MiniScene_Text_0
# 352 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Jakson
# 353 "data/expansion_1/rival_scripts.pory"
	msgbox Town09_MiniScene_Text_1, MSGBOX_AUTOCLOSE
# 355 "data/expansion_1/rival_scripts.pory"
	applymovement 32, Common_Movement_FacePlayer
# 356 "data/expansion_1/rival_scripts.pory"
	applymovement 31, Common_Movement_FacePlayer
# 357 "data/expansion_1/rival_scripts.pory"
	waitmovement 0
# 358 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Jakson
# 359 "data/expansion_1/rival_scripts.pory"
	msgbox Town09_MiniScene_Text_2
# 362 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Harper
# 363 "data/expansion_1/rival_scripts.pory"
	msgbox Town09_MiniScene_Text_3
# 366 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Jakson
# 367 "data/expansion_1/rival_scripts.pory"
	msgbox Town09_MiniScene_Text_4, MSGBOX_AUTOCLOSE
# 371 "data/expansion_1/rival_scripts.pory"
	applymovement 32, Common_Movement_FaceOriginalDirection
# 372 "data/expansion_1/rival_scripts.pory"
	waitmovement 0
# 373 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Jakson
# 374 "data/expansion_1/rival_scripts.pory"
	msgbox Town09_MiniScene_Text_5
# 375 "data/expansion_1/rival_scripts.pory"
	applymovement 31, Common_Movement_FaceOriginalDirection
# 376 "data/expansion_1/rival_scripts.pory"
	waitmovement 0
# 377 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Harper
# 378 "data/expansion_1/rival_scripts.pory"
	msgbox Town09_MiniScene_Text_6, MSGBOX_AUTOCLOSE
# 381 "data/expansion_1/rival_scripts.pory"
	applymovement 31, Common_Movement_FacePlayer
# 382 "data/expansion_1/rival_scripts.pory"
	waitmovement 0
# 383 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Harper
# 384 "data/expansion_1/rival_scripts.pory"
	msgbox Town09_MiniScene_Text_7
# 388 "data/expansion_1/rival_scripts.pory"
	applymovement 32, Common_Movement_FacePlayer
# 389 "data/expansion_1/rival_scripts.pory"
	waitmovement 0
# 390 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Jakson
# 391 "data/expansion_1/rival_scripts.pory"
	msgbox Town09_MiniScene_Text_8, MSGBOX_AUTOCLOSE
# 394 "data/expansion_1/rival_scripts.pory"
	applymovement 32, Common_Movement_FaceOriginalDirection
# 395 "data/expansion_1/rival_scripts.pory"
	applymovement 31, Common_Movement_FaceOriginalDirection
# 396 "data/expansion_1/rival_scripts.pory"
	waitmovement 0
# 397 "data/expansion_1/rival_scripts.pory"
	setflag FLAG_TEMP_6
	return


Town09_MiniScene_Text_0:
# 345 "data/expansion_1/rival_scripts.pory"
	.string "Hmm…{PAUSE 100}\n"
	.string "Well, it's not a bad idea, but are you\l"
	.string "sure players wouldn't get bored\l"
	.string "without battles for so long?\p"
	.string "And you better plan this out so we\n"
	.string "can't, y'know, sequence break the\l"
	.string "entire damn thing again?$"

Town09_MiniScene_Text_1:
# 353 "data/expansion_1/rival_scripts.pory"
	.string "…{PAUSE 60}Ah, yeah. I think I see what you mean.\p"
	.string "Damn, I'll have to rethink that section.$"

Town09_MiniScene_Text_2:
# 359 "data/expansion_1/rival_scripts.pory"
	.string "Oh, hey there, {PLAYER}.\p"
	.string "I'm just bouncing some ideas off of\n"
	.string "Harper for future content.$"

Town09_MiniScene_Text_3:
# 363 "data/expansion_1/rival_scripts.pory"
	.string "I'm not sure if it's a waste of my time\n"
	.string "yet, but I guess this guy's got a poor\l"
	.string "track record so far.$"

Town09_MiniScene_Text_4:
# 367 "data/expansion_1/rival_scripts.pory"
	.string "… {PAUSE 30}… {PAUSE 30}…{PAUSE 30}\n"
	.string "Well, if it means I get some more help,\l"
	.string "maybe I'll play up incompetence some\l"
	.string "more.$"

Town09_MiniScene_Text_5:
# 374 "data/expansion_1/rival_scripts.pory"
	.string "But really, you're a big help, Harper.$"

Town09_MiniScene_Text_6:
# 378 "data/expansion_1/rival_scripts.pory"
	.string "Yeah, yeah… {PAUSE 100}I just hope it's good in\n"
	.string "the end. If you can't do it, I'll have\l"
	.string "to step in.$"

Town09_MiniScene_Text_7:
# 384 "data/expansion_1/rival_scripts.pory"
	.string "Oh, and when you want to tell me how\n"
	.string "much it sucks, {PLAYER}, please\l"
	.string "redirect your ire in the general\l"
	.string "direction of Jakson.$"

Town09_MiniScene_Text_8:
# 391 "data/expansion_1/rival_scripts.pory"
	.string "… {PAUSE 30}… {PAUSE 30}…\p"
	.string "Don't worry, I think this is how she\n"
	.string "shows affection, {PLAYER}.$"
