Expansion1_Rival_Scene09::
# 19 "data/expansion_1/scene09.pory"
	setvar VAR_TEMP_3, 1
# 370 "data/expansion_1/scene09.pory"
	warpcontinuescript MAP_MAUVE_ISLAND_WEST, 9, 9, Expansion1_Rival_Scene09b
	return


Expansion1_Rival_Scene09b::
# 374 "data/expansion_1/scene09.pory"
	setobjectxyperm 5, 8, 11
# 375 "data/expansion_1/scene09.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_UP
# 376 "data/expansion_1/scene09.pory"
	setobjectxyperm 4, 6, 10
# 377 "data/expansion_1/scene09.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_RIGHT
# 378 "data/expansion_1/scene09.pory"
	setobjectxyperm 6, 7, 9
# 379 "data/expansion_1/scene09.pory"
	setobjectxyperm 7, 10, 10
# 380 "data/expansion_1/scene09.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_LEFT
# 381 "data/expansion_1/scene09.pory"
	setobjectxyperm 8, 8, 7
# 382 "data/expansion_1/scene09.pory"
	addobject 6
# 383 "data/expansion_1/scene09.pory"
	addobject 7
# 384 "data/expansion_1/scene09.pory"
	addobject 8
# 385 "data/expansion_1/scene09.pory"
	addobject 5
# 386 "data/expansion_1/scene09.pory"
	addobject 4
# 387 "data/expansion_1/scene09.pory"
	fadescreen FADE_FROM_BLACK
# 388 "data/expansion_1/scene09.pory"
	special SpawnCameraObject
# 389 "data/expansion_1/scene09.pory"
	applymovement LOCALID_CAMERA, Common_Movement_WalkDiagSW
# 390 "data/expansion_1/scene09.pory"
	waitmovement 0
# 391 "data/expansion_1/scene09.pory"
	call GetBaronsName
# 392 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09b_Text_0, MSGBOX_AUTOCLOSE
# 393 "data/expansion_1/scene09.pory"
	applymovement 4, Common_Movement_Thinking
# 394 "data/expansion_1/scene09.pory"
	delay 40
# 395 "data/expansion_1/scene09.pory"
	speakername CommonText_Redd
# 396 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09b_Text_1
# 400 "data/expansion_1/scene09.pory"
	speakername CommonText_Jakson
# 401 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09b_Text_2
# 404 "data/expansion_1/scene09.pory"
	call GetBaronsName
# 405 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09b_Text_3
# 406 "data/expansion_1/scene09.pory"
	speakername CommonText_Sakura
# 407 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09b_Text_4
# 409 "data/expansion_1/scene09.pory"
	speakername CommonText_Jakson
# 410 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09b_Text_5
# 414 "data/expansion_1/scene09.pory"
	speakername CommonText_Redd
# 415 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09b_Text_6
# 419 "data/expansion_1/scene09.pory"
	call GetBaronsName
# 420 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09b_Text_7
# 421 "data/expansion_1/scene09.pory"
	speakername CommonText_Harper
# 422 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09b_Text_8
# 429 "data/expansion_1/scene09.pory"
	speakername CommonText_Jakson
# 430 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09b_Text_9
# 433 "data/expansion_1/scene09.pory"
	speakername CommonText_Harper
# 434 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09b_Text_10
# 439 "data/expansion_1/scene09.pory"
	speakername CommonText_Sakura
# 440 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09b_Text_11
# 442 "data/expansion_1/scene09.pory"
	speakername CommonText_Harper
# 443 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09b_Text_12
# 448 "data/expansion_1/scene09.pory"
	speakername CommonText_Jakson
# 449 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09b_Text_13
# 451 "data/expansion_1/scene09.pory"
	call GetBaronsName
# 452 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09b_Text_14
# 454 "data/expansion_1/scene09.pory"
	speakername CommonText_Jakson
# 455 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09b_Text_15
# 456 "data/expansion_1/scene09.pory"
	speakername CommonText_Redd
# 457 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09b_Text_16
# 459 "data/expansion_1/scene09.pory"
	speakername CommonText_Harper
# 460 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09b_Text_17
# 464 "data/expansion_1/scene09.pory"
	speakername CommonText_Jakson
# 465 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09b_Text_18
	return


Expansion1_Rival_Scene09b_Text_0:
# 392 "data/expansion_1/scene09.pory"
	.string "And… {PAUSE 100}safe.$"

Expansion1_Rival_Scene09b_Text_1:
# 396 "data/expansion_1/scene09.pory"
	.string "Hey, I was thinking as we headed out…\p"
	.string "Do you think… {PAUSE 100}maybe that thing that\n"
	.string "attacked us at the start was the\l"
	.string "monster?$"

Expansion1_Rival_Scene09b_Text_2:
# 401 "data/expansion_1/scene09.pory"
	.string "You mean back in the treasure room?\n"
	.string "When we got that glitched spawn?\p"
	.string "It… {PAUSE 100}wouldn't surprise me.$"

Expansion1_Rival_Scene09b_Text_3:
# 405 "data/expansion_1/scene09.pory"
	.string "So, we're stuck then?$"

Expansion1_Rival_Scene09b_Text_4:
# 407 "data/expansion_1/scene09.pory"
	.string "A sequence break to end all sequence\n"
	.string "breaks.$"

Expansion1_Rival_Scene09b_Text_5:
# 410 "data/expansion_1/scene09.pory"
	.string "Agh, I'm sorry guys. It looks like this\n"
	.string "one just isn't going to work out. If you\l"
	.string "want, we can all log off and I can try to\l"
	.string "find- {PAUSE 30}well, make something different.$"

Expansion1_Rival_Scene09b_Text_6:
# 415 "data/expansion_1/scene09.pory"
	.string "If you think that's the best option,\n"
	.string "then maybe it's all we can do. If the\l"
	.string "game master can't fix it then who would\l"
	.string "I be to second guess him?$"

Expansion1_Rival_Scene09b_Text_7:
# 420 "data/expansion_1/scene09.pory"
	.string "Harper…{PAUSE 100}? What are you up to?$"

Expansion1_Rival_Scene09b_Text_8:
# 422 "data/expansion_1/scene09.pory"
	.string "… … …\n"
	.string "… … …\l"
	.string "Oh? Oh yeah… Did you notice there's\l"
	.string "a debug menu available?\p"
	.string "Not for the game, but for the mod.\n"
	.string "It was just left in the game if you\l"
	.string "press enough buttons in the menu.$"

Expansion1_Rival_Scene09b_Text_9:
# 430 "data/expansion_1/scene09.pory"
	.string "Ah…\n"
	.string "Hah… hahaha…\p"
	.string "Was that… Did I leave that there?$"

Expansion1_Rival_Scene09b_Text_10:
# 434 "data/expansion_1/scene09.pory"
	.string "I don't know. But given the state of\n"
	.string "this mod, I wouldn't b e surprised if\l"
	.string "it was the creators who did it.\p"
	.string "The important part is that it gives\n"
	.string "a bit of behind the scenes context.$"

Expansion1_Rival_Scene09b_Text_11:
# 440 "data/expansion_1/scene09.pory"
	.string "Oh, Harper-sensei, do spill ALL the\n"
	.string "beans{EMOJI_BIGWHEEL}{UNK_SPACER}$"

Expansion1_Rival_Scene09b_Text_12:
# 443 "data/expansion_1/scene09.pory"
	.string "Uh… well, it almost seems like a flag\n"
	.string "that was meant for later, around this\l"
	.string "point actually, was tripped really early\l"
	.string "on.\p"
	.string "See here? Right in this menu.$"

Expansion1_Rival_Scene09b_Text_13:
# 449 "data/expansion_1/scene09.pory"
	.string "That's the switch menu. It lets you\n"
	.string "control the stat of logic flags.$"

Expansion1_Rival_Scene09b_Text_14:
# 452 "data/expansion_1/scene09.pory"
	.string "Is this related to all the\n"
	.string "“progression” stuff?$"

Expansion1_Rival_Scene09b_Text_15:
# 455 "data/expansion_1/scene09.pory"
	.string "I mean, yeah… but…$"

Expansion1_Rival_Scene09b_Text_16:
# 457 "data/expansion_1/scene09.pory"
	.string "Like… is one of them connected to the\n"
	.string "monster attacking us at the start?$"

Expansion1_Rival_Scene09b_Text_17:
# 460 "data/expansion_1/scene09.pory"
	.string "Yeah, actually, exactly like that.\n"
	.string "There's one labeled “monster moved”.\p"
	.string "Or maybe the more practical way to\n"
	.string "phrase it would be “moving”.$"

Expansion1_Rival_Scene09b_Text_18:
# 465 "data/expansion_1/scene09.pory"
	.string "Moving… Moving somewhere…\n"
	.string "…somewhere like…\p"
	.string "{PLAYER}, didn't you mention some sort\n"
	.string "of monster stalking you in the dungeon\l"
	.string "you spawned in at?$"
