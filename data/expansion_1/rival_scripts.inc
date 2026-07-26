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
	setflag FLAG_SYS_DONT_SPAWN_SURF_BLOB
# 138 "data/expansion_1/rival_scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 139 "data/expansion_1/rival_scripts.pory"
	setvar VAR_EMERALBODY_RIVAL_STATE, 41
# 140 "data/expansion_1/rival_scripts.pory"
	fadescreen FADE_TO_BLACK
# 141 "data/expansion_1/rival_scripts.pory"
	warpcontinuescript MAP_FAR_OFF_SEA_WEST, 55, 5, Expansion1_Rival_Scene08
	return


Harper_Exp1_Town04::
# 145 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Harper
# 146 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town04_HarperText, MSGBOX_NPC
	return


Redd_Exp1_Town04::
# 150 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Redd
# 151 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town04_ReddText, MSGBOX_NPC
	return


Baron_Exp1_Town04::
# 155 "data/expansion_1/rival_scripts.pory"
	lock
# 156 "data/expansion_1/rival_scripts.pory"
	faceplayer
# 157 "data/expansion_1/rival_scripts.pory"
	call GetBaronsName
# 158 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town04_BaronText
# 159 "data/expansion_1/rival_scripts.pory"
	compare VAR_EMERALBODY_RIVAL, 0
	goto_if_ne Baron_Exp1_Town04_2
# 159 "data/expansion_1/rival_scripts.pory"
	compare VAR_EMERALBODY_RIVAL, 5
	goto_if_ne Baron_Exp1_Town04_2
Baron_Exp1_Town04_1:
# 162 "data/expansion_1/rival_scripts.pory"
	closemessage
# 163 "data/expansion_1/rival_scripts.pory"
	release
	return

Baron_Exp1_Town04_2:
# 160 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town04b_BaronText
	goto Baron_Exp1_Town04_1


Jakson_Exp1_Town04::
# 167 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Jakson
# 168 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town04_JaksonText, MSGBOX_NPC
	return


Sakura_Exp1_Town05::
# 173 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Sakura
# 174 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town05_SakuraText, MSGBOX_NPC
	return


Harper_Exp1_Town05::
# 178 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Harper
# 179 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town05_HarperText, MSGBOX_NPC
	return


Baron_Exp1_Town05::
# 183 "data/expansion_1/rival_scripts.pory"
	call GetBaronsName
# 184 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town05_BaronText, MSGBOX_NPC
	return


Jakson_Exp1_Town05::
# 188 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Jakson
# 189 "data/expansion_1/rival_scripts.pory"
	goto_if_unset FLAG_EXP_1_BYGONE_VAULT_LEFT_SWITCH, Jakson_Exp1_Town05_2
# 193 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town05b_JaksonText, MSGBOX_NPC
Jakson_Exp1_Town05_1:
# 195 "data/expansion_1/rival_scripts.pory"
	release
	return

Jakson_Exp1_Town05_2:
# 190 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town05_JaksonText, MSGBOX_NPC
	goto Jakson_Exp1_Town05_1


Sakura_Exp1_Town06::
# 200 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Sakura
# 201 "data/expansion_1/rival_scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 43
	goto_if_eq Sakura_Exp1_Town06_1
# 205 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town06b_SakuraText, MSGBOX_NPC
	return

Sakura_Exp1_Town06_1:
# 202 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town06_SakuraText, MSGBOX_NPC
	return


Harper_Exp1_Town06::
# 210 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Harper
# 211 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town06_HarperText, MSGBOX_NPC
	return


Redd_Exp1_Town06::
# 215 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Redd
# 216 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town06_ReddText, MSGBOX_NPC
	return


Baron_Exp1_Town06::
# 220 "data/expansion_1/rival_scripts.pory"
	call GetBaronsName
# 221 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town06_BaronText, MSGBOX_NPC
	return


Jakson_Exp1_Town06::
# 225 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Jakson
# 226 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town06_JaksonText, MSGBOX_NPC
	return


Sakura_Exp1_Town07::
# 231 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Sakura
# 232 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town07_SakuraText, MSGBOX_NPC
	return


Harper_Exp1_Town07::
# 236 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Harper
# 237 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town07_HarperText, MSGBOX_NPC
	return


Redd_Exp1_Town07::
# 241 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Redd
# 242 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town07_ReddText, MSGBOX_NPC
	return


Baron_Exp1_Town07::
# 246 "data/expansion_1/rival_scripts.pory"
	call GetBaronsName
# 247 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town07_BaronText, MSGBOX_NPC
	return


Jakson_Exp1_Town07::
# 251 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Jakson
# 252 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town07_JaksonText, MSGBOX_NPC
	return


Sakura_Exp1_Town09::
# 257 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Sakura
# 258 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town09_SakuraText, MSGBOX_NPC
# 259 "data/expansion_1/rival_scripts.pory"
	turnobject 8, DIR_SOUTH
	return


Harper_Exp1_Town09::
# 263 "data/expansion_1/rival_scripts.pory"
	goto_if_unset FLAG_TEMP_6, Harper_Exp1_Town09_2
Harper_Exp1_Town09_1:
# 266 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Harper
# 267 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town09_HarperText, MSGBOX_NPC
	return

Harper_Exp1_Town09_2:
# 264 "data/expansion_1/rival_scripts.pory"
	goto Town09_MiniScene
	goto Harper_Exp1_Town09_1


Redd_Exp1_Town09::
# 271 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Redd
# 272 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town09_ReddText, MSGBOX_NPC
	return


Baron_Exp1_Town09::
# 276 "data/expansion_1/rival_scripts.pory"
	faceplayer
# 277 "data/expansion_1/rival_scripts.pory"
	call GetBaronsName
# 278 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town09_BaronText
# 279 "data/expansion_1/rival_scripts.pory"
	compare VAR_EMERALBODY_RIVAL, 0
	goto_if_eq Baron_Exp1_Town09_2
# 279 "data/expansion_1/rival_scripts.pory"
	compare VAR_EMERALBODY_RIVAL, 5
	goto_if_eq Baron_Exp1_Town09_2
# 283 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town09b_BaronText
Baron_Exp1_Town09_1:
# 285 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town09c_BaronText, MSGBOX_AUTOCLOSE
	return

Baron_Exp1_Town09_2:
# 280 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town09a_BaronText
	goto Baron_Exp1_Town09_1


Jakson_Exp1_Town09::
# 289 "data/expansion_1/rival_scripts.pory"
	goto_if_unset FLAG_TEMP_6, Jakson_Exp1_Town09_2
Jakson_Exp1_Town09_1:
# 292 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Jakson
# 293 "data/expansion_1/rival_scripts.pory"
	msgbox Exp1_Town09_JaksonText, MSGBOX_NPC
	return

Jakson_Exp1_Town09_2:
# 290 "data/expansion_1/rival_scripts.pory"
	goto Town09_MiniScene
	goto Jakson_Exp1_Town09_1


Town09_MiniScene::
# 300 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Harper
# 301 "data/expansion_1/rival_scripts.pory"
	msgbox Town09_MiniScene_Text_0
# 308 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Jakson
# 309 "data/expansion_1/rival_scripts.pory"
	msgbox Town09_MiniScene_Text_1, MSGBOX_AUTOCLOSE
# 311 "data/expansion_1/rival_scripts.pory"
	applymovement 32, Common_Movement_FacePlayer
# 312 "data/expansion_1/rival_scripts.pory"
	applymovement 31, Common_Movement_FacePlayer
# 313 "data/expansion_1/rival_scripts.pory"
	waitmovement 0
# 314 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Jakson
# 315 "data/expansion_1/rival_scripts.pory"
	msgbox Town09_MiniScene_Text_2
# 318 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Harper
# 319 "data/expansion_1/rival_scripts.pory"
	msgbox Town09_MiniScene_Text_3
# 322 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Jakson
# 323 "data/expansion_1/rival_scripts.pory"
	msgbox Town09_MiniScene_Text_4, MSGBOX_AUTOCLOSE
# 327 "data/expansion_1/rival_scripts.pory"
	applymovement 32, Common_Movement_FaceOriginalDirection
# 328 "data/expansion_1/rival_scripts.pory"
	waitmovement 0
# 329 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Jakson
# 330 "data/expansion_1/rival_scripts.pory"
	msgbox Town09_MiniScene_Text_5
# 331 "data/expansion_1/rival_scripts.pory"
	applymovement 31, Common_Movement_FaceOriginalDirection
# 332 "data/expansion_1/rival_scripts.pory"
	waitmovement 0
# 333 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Harper
# 334 "data/expansion_1/rival_scripts.pory"
	msgbox Town09_MiniScene_Text_6, MSGBOX_AUTOCLOSE
# 337 "data/expansion_1/rival_scripts.pory"
	applymovement 31, Common_Movement_FacePlayer
# 338 "data/expansion_1/rival_scripts.pory"
	waitmovement 0
# 339 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Harper
# 340 "data/expansion_1/rival_scripts.pory"
	msgbox Town09_MiniScene_Text_7
# 344 "data/expansion_1/rival_scripts.pory"
	applymovement 32, Common_Movement_FacePlayer
# 345 "data/expansion_1/rival_scripts.pory"
	waitmovement 0
# 346 "data/expansion_1/rival_scripts.pory"
	speakername CommonText_Jakson
# 347 "data/expansion_1/rival_scripts.pory"
	msgbox Town09_MiniScene_Text_8, MSGBOX_AUTOCLOSE
# 350 "data/expansion_1/rival_scripts.pory"
	applymovement 32, Common_Movement_FaceOriginalDirection
# 351 "data/expansion_1/rival_scripts.pory"
	applymovement 31, Common_Movement_FaceOriginalDirection
# 352 "data/expansion_1/rival_scripts.pory"
	waitmovement 0
# 353 "data/expansion_1/rival_scripts.pory"
	setflag FLAG_TEMP_6
	return


Town09_MiniScene_Text_0:
# 301 "data/expansion_1/rival_scripts.pory"
	.string "Hmm…{PAUSE 100}\n"
	.string "Well, it's not a bad idea, but are you\l"
	.string "sure players wouldn't get bored\l"
	.string "without battles for so long?\p"
	.string "And you better plan this out so we\n"
	.string "can't, y'know, sequence break the\l"
	.string "entire damn thing again?$"

Town09_MiniScene_Text_1:
# 309 "data/expansion_1/rival_scripts.pory"
	.string "…{PAUSE 60}Ah, yeah. I think I see what you mean.\p"
	.string "Damn, I'll have to rethink that section.$"

Town09_MiniScene_Text_2:
# 315 "data/expansion_1/rival_scripts.pory"
	.string "Oh, hey there, {PLAYER}.\p"
	.string "I'm just bouncing some ideas off of\n"
	.string "Harper for future content.$"

Town09_MiniScene_Text_3:
# 319 "data/expansion_1/rival_scripts.pory"
	.string "I'm not sure if it's a waste of my time\n"
	.string "yet, but I guess this guy's got a poor\l"
	.string "track record so far.$"

Town09_MiniScene_Text_4:
# 323 "data/expansion_1/rival_scripts.pory"
	.string "… {PAUSE 30}… {PAUSE 30}…{PAUSE 30}\n"
	.string "Well, if it means I get some more help,\l"
	.string "maybe I'll play up incompetence some\l"
	.string "more.$"

Town09_MiniScene_Text_5:
# 330 "data/expansion_1/rival_scripts.pory"
	.string "But really, you're a big help, Harper.$"

Town09_MiniScene_Text_6:
# 334 "data/expansion_1/rival_scripts.pory"
	.string "Yeah, yeah… {PAUSE 100}I just hope it's good in\n"
	.string "the end. If you can't do it, I'll have\l"
	.string "to step in.$"

Town09_MiniScene_Text_7:
# 340 "data/expansion_1/rival_scripts.pory"
	.string "Oh, and when you want to tell me how\n"
	.string "much it sucks, {PLAYER}, please\l"
	.string "redirect your ire in the general\l"
	.string "direction of Jakson.$"

Town09_MiniScene_Text_8:
# 347 "data/expansion_1/rival_scripts.pory"
	.string "… {PAUSE 30}… {PAUSE 30}…\p"
	.string "Don't worry, I think this is how she\n"
	.string "shows affection, {PLAYER}.$"
