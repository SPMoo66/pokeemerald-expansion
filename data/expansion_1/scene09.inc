Expansion1_Rival_Scene09::
# 19 "data/expansion_1/scene09.pory"
	setvar VAR_TEMP_3, 1
# 370 "data/expansion_1/scene09.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 371 "data/expansion_1/scene09.pory"
	setflag FLAG_SCENE09_TRANSITION
# 372 "data/expansion_1/scene09.pory"
	warpcontinuescript MAP_MAUVE_ISLAND_WEST, 9, 9, Expansion1_Rival_Scene09b
	return


Expansion1_Rival_Scene09b::
# 376 "data/expansion_1/scene09.pory"
	setobjectxyperm 5, 8, 11
# 377 "data/expansion_1/scene09.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_UP
# 378 "data/expansion_1/scene09.pory"
	setobjectxyperm 4, 6, 10
# 379 "data/expansion_1/scene09.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_RIGHT
# 380 "data/expansion_1/scene09.pory"
	setobjectxyperm 6, 7, 9
# 381 "data/expansion_1/scene09.pory"
	setobjectxyperm 7, 10, 10
# 382 "data/expansion_1/scene09.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_LEFT
# 383 "data/expansion_1/scene09.pory"
	setobjectxyperm 8, 8, 7
# 384 "data/expansion_1/scene09.pory"
	addobject 6
# 385 "data/expansion_1/scene09.pory"
	addobject 7
# 386 "data/expansion_1/scene09.pory"
	addobject 8
# 387 "data/expansion_1/scene09.pory"
	addobject 5
# 388 "data/expansion_1/scene09.pory"
	addobject 4
# 389 "data/expansion_1/scene09.pory"
	fadescreen FADE_FROM_BLACK
# 390 "data/expansion_1/scene09.pory"
	clearflag FLAG_SCENE09_TRANSITION
# 391 "data/expansion_1/scene09.pory"
	special SpawnCameraObject
# 392 "data/expansion_1/scene09.pory"
	applymovement LOCALID_CAMERA, Common_Movement_WalkDiagSW
# 393 "data/expansion_1/scene09.pory"
	waitmovement 0
# 394 "data/expansion_1/scene09.pory"
	call GetBaronsName
# 395 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09b_Text_0, MSGBOX_AUTOCLOSE
# 396 "data/expansion_1/scene09.pory"
	applymovement 4, Common_Movement_Thinking
# 397 "data/expansion_1/scene09.pory"
	delay 40
# 398 "data/expansion_1/scene09.pory"
	speakername CommonText_Redd
# 399 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09b_Text_1, MSGBOX_AUTOCLOSE
# 403 "data/expansion_1/scene09.pory"
	applymovement 5, Common_Movement_WalkInPlaceFasterLeft
# 404 "data/expansion_1/scene09.pory"
	waitmovement 0
# 405 "data/expansion_1/scene09.pory"
	speakername CommonText_Jakson
# 406 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09b_Text_2, MSGBOX_AUTOCLOSE
# 408 "data/expansion_1/scene09.pory"
	applymovement 7, Common_Movement_WalkInPlaceFasterRight
# 409 "data/expansion_1/scene09.pory"
	applymovement 5, Common_Movement_WalkInPlaceFasterUp
# 410 "data/expansion_1/scene09.pory"
	speakername CommonText_Jakson
# 411 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09b_Text_3
# 412 "data/expansion_1/scene09.pory"
	call GetBaronsName
# 413 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09b_Text_4
# 414 "data/expansion_1/scene09.pory"
	speakername CommonText_Sakura
# 415 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09b_Text_5, MSGBOX_AUTOCLOSE
# 417 "data/expansion_1/scene09.pory"
	applymovement 5, Common_Movement_SweatDrop
# 418 "data/expansion_1/scene09.pory"
	playse SE_M_METRONOME
# 419 "data/expansion_1/scene09.pory"
	delay 40
# 420 "data/expansion_1/scene09.pory"
	speakername CommonText_Jakson
# 421 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09b_Text_6
# 425 "data/expansion_1/scene09.pory"
	speakername CommonText_Redd
# 426 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09b_Text_7, MSGBOX_AUTOCLOSE
# 430 "data/expansion_1/scene09.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterRight
# 431 "data/expansion_1/scene09.pory"
	waitmovement 0
# 432 "data/expansion_1/scene09.pory"
	delay 30
# 433 "data/expansion_1/scene09.pory"
	applymovement 6, Common_Movement_QuestionMark
# 434 "data/expansion_1/scene09.pory"
	delay 40
# 435 "data/expansion_1/scene09.pory"
	call GetBaronsName
# 436 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09b_Text_8, MSGBOX_AUTOCLOSE
# 437 "data/expansion_1/scene09.pory"
	applymovement 5, Common_Movement_WalkInPlaceFasterRight
# 438 "data/expansion_1/scene09.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 439 "data/expansion_1/scene09.pory"
	waitmovement 0
# 440 "data/expansion_1/scene09.pory"
	speakername CommonText_Harper
# 441 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09b_Text_9, MSGBOX_AUTOCLOSE
# 443 "data/expansion_1/scene09.pory"
	applymovement 7, Common_Movement_WalkInPlaceFasterLeft
# 444 "data/expansion_1/scene09.pory"
	waitmovement 0
# 445 "data/expansion_1/scene09.pory"
	speakername CommonText_Harper
# 446 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09b_Text_10, MSGBOX_AUTOCLOSE
# 451 "data/expansion_1/scene09.pory"
	applymovement 5, Common_Movement_WalkInPlaceFasterUp
# 452 "data/expansion_1/scene09.pory"
	waitmovement 0
# 453 "data/expansion_1/scene09.pory"
	speakername CommonText_Jakson
# 454 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09b_Text_11
# 457 "data/expansion_1/scene09.pory"
	speakername CommonText_Harper
# 458 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09b_Text_12, MSGBOX_AUTOCLOSE
# 461 "data/expansion_1/scene09.pory"
	applymovement 5, Common_Movement_WalkInPlaceFasterRight
# 462 "data/expansion_1/scene09.pory"
	waitmovement 0
# 463 "data/expansion_1/scene09.pory"
	speakername CommonText_Harper
# 464 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09b_Text_13, MSGBOX_AUTOCLOSE
# 466 "data/expansion_1/scene09.pory"
	applymovement 8, Common_Movement_MusicNote
# 467 "data/expansion_1/scene09.pory"
	playse SE_RG_HELP_OPEN
# 468 "data/expansion_1/scene09.pory"
	delay 60
# 469 "data/expansion_1/scene09.pory"
	speakername CommonText_Sakura
# 470 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09b_Text_14, MSGBOX_AUTOCLOSE
# 472 "data/expansion_1/scene09.pory"
	delay 40
# 473 "data/expansion_1/scene09.pory"
	speakername CommonText_Harper
# 474 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09b_Text_15, MSGBOX_AUTOCLOSE
# 479 "data/expansion_1/scene09.pory"
	applymovement 5, Common_Movement_WalkRight
# 480 "data/expansion_1/scene09.pory"
	waitmovement 0
# 481 "data/expansion_1/scene09.pory"
	delay 20
# 482 "data/expansion_1/scene09.pory"
	speakername CommonText_Jakson
# 483 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09b_Text_16, MSGBOX_AUTOCLOSE
# 485 "data/expansion_1/scene09.pory"
	applymovement 6, Common_Movement_QuestionMark
# 486 "data/expansion_1/scene09.pory"
	delay 40
# 487 "data/expansion_1/scene09.pory"
	call GetBaronsName
# 488 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09b_Text_17, MSGBOX_AUTOCLOSE
# 490 "data/expansion_1/scene09.pory"
	applymovement 5, Common_Movement_WalkInPlaceFasterLeft
# 491 "data/expansion_1/scene09.pory"
	waitmovement 0
# 492 "data/expansion_1/scene09.pory"
	speakername CommonText_Jakson
# 493 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09b_Text_18
# 494 "data/expansion_1/scene09.pory"
	speakername CommonText_Redd
# 495 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09b_Text_19, MSGBOX_AUTOCLOSE
# 497 "data/expansion_1/scene09.pory"
	applymovement 5, Common_Movement_WalkInPlaceFasterRight
# 498 "data/expansion_1/scene09.pory"
	waitmovement 0
# 499 "data/expansion_1/scene09.pory"
	speakername CommonText_Harper
# 500 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09b_Text_20, MSGBOX_AUTOCLOSE
# 504 "data/expansion_1/scene09.pory"
	applymovement 5, Common_Movement_Thinking
# 505 "data/expansion_1/scene09.pory"
	delay 60
# 506 "data/expansion_1/scene09.pory"
	speakername CommonText_Jakson
# 507 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09b_Text_21, MSGBOX_AUTOCLOSE
# 509 "data/expansion_1/scene09.pory"
	playse SE_PIN
# 510 "data/expansion_1/scene09.pory"
	applymovement 5, Common_Movement_ExclamationMark
# 511 "data/expansion_1/scene09.pory"
	delay 20
# 512 "data/expansion_1/scene09.pory"
	applymovement 5, Common_Movement_WalkInPlaceFasterUp
# 513 "data/expansion_1/scene09.pory"
	waitmovement 0
# 514 "data/expansion_1/scene09.pory"
	speakername CommonText_Jakson
# 515 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09b_Text_22, MSGBOX_AUTOCLOSE
# 518 "data/expansion_1/scene09.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 519 "data/expansion_1/scene09.pory"
	waitmovement 0
# 520 "data/expansion_1/scene09.pory"
	speakername CommonText_Harper
# 521 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09b_Text_23, MSGBOX_AUTOCLOSE
# 525 "data/expansion_1/scene09.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterDown
# 526 "data/expansion_1/scene09.pory"
	waitmovement 0
# 527 "data/expansion_1/scene09.pory"
	speakername CommonText_Jakson
# 528 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09b_Text_24
# 531 "data/expansion_1/scene09.pory"
	applymovement 6, Common_Movement_QuestionMark
# 532 "data/expansion_1/scene09.pory"
	applymovement 4, Common_Movement_WalkInPlaceFasterUp
# 533 "data/expansion_1/scene09.pory"
	waitmovement 0
# 534 "data/expansion_1/scene09.pory"
	speakername CommonText_Harper
# 535 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09b_Text_25
# 536 "data/expansion_1/scene09.pory"
	applymovement 4, Common_Movement_SweatDrop
# 537 "data/expansion_1/scene09.pory"
	playse SE_M_METRONOME
# 538 "data/expansion_1/scene09.pory"
	speakername CommonText_Jakson
# 539 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09b_Text_26
# 544 "data/expansion_1/scene09.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterRight
# 545 "data/expansion_1/scene09.pory"
	applymovement 4, Common_Movement_WalkInPlaceFasterRight
# 546 "data/expansion_1/scene09.pory"
	waitmovement 0
# 547 "data/expansion_1/scene09.pory"
	speakername CommonText_Harper
# 548 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09b_Text_27
# 549 "data/expansion_1/scene09.pory"
	call GetBaronsName
# 550 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09b_Text_28
# 551 "data/expansion_1/scene09.pory"
	speakername CommonText_Harper
# 552 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09b_Text_29
# 556 "data/expansion_1/scene09.pory"
	speakername CommonText_Redd
# 557 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09b_Text_30
# 558 "data/expansion_1/scene09.pory"
	speakername CommonText_Jakson
# 559 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09b_Text_31
# 561 "data/expansion_1/scene09.pory"
	speakername CommonText_Harper
# 562 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09b_Text_32, MSGBOX_AUTOCLOSE
# 565 "data/expansion_1/scene09.pory"
	applymovement 8, Common_Movement_Smile
# 566 "data/expansion_1/scene09.pory"
	playse SE_M_MORNING_SUN
# 567 "data/expansion_1/scene09.pory"
	delay 40
# 568 "data/expansion_1/scene09.pory"
	speakername CommonText_Sakura
# 569 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09b_Text_33
# 572 "data/expansion_1/scene09.pory"
	speakername CommonText_Jakson
# 573 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09b_Text_34, MSGBOX_AUTOCLOSE
# 574 "data/expansion_1/scene09.pory"
	applymovement 5, Common_Movement_WalkInPlaceFasterRight
# 575 "data/expansion_1/scene09.pory"
	waitmovement 0
# 576 "data/expansion_1/scene09.pory"
	speakername CommonText_Jakson
# 577 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09b_Text_35
# 578 "data/expansion_1/scene09.pory"
	speakername CommonText_Harper
# 579 "data/expansion_1/scene09.pory"
	msgbox Expansion1_Rival_Scene09b_Text_36, MSGBOX_AUTOCLOSE
# 584 "data/expansion_1/scene09.pory"
	playse SE_LEDGE
# 585 "data/expansion_1/scene09.pory"
	applymovement 8, Common_Movement_JumpInPlaceDown
# 586 "data/expansion_1/scene09.pory"
	waitmovement 0
# 587 "data/expansion_1/scene09.pory"
	applymovement 5, Common_Movement_WalkInPlaceFasterUp
# 588 "data/expansion_1/scene09.pory"
	applymovement 6, Common_Movement_Smile
# 589 "data/expansion_1/scene09.pory"
	playse SE_M_MORNING_SUN
# 590 "data/expansion_1/scene09.pory"
	delay 40
# 591 "data/expansion_1/scene09.pory"
	applymovement 8, Common_Movement_WalkLeft4
# 592 "data/expansion_1/scene09.pory"
	waitmovement 0
# 593 "data/expansion_1/scene09.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterLeft
# 594 "data/expansion_1/scene09.pory"
	applymovement 4, Common_Movement_WalkInPlaceFasterUp
# 595 "data/expansion_1/scene09.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 596 "data/expansion_1/scene09.pory"
	applymovement 8, Common_Movement_WalkUp
# 597 "data/expansion_1/scene09.pory"
	waitmovement 0
# 598 "data/expansion_1/scene09.pory"
	applymovement 8, Common_Movement_WalkLeft
# 599 "data/expansion_1/scene09.pory"
	waitmovement 0
# 600 "data/expansion_1/scene09.pory"
	playse SE_LEDGE
# 601 "data/expansion_1/scene09.pory"
	applymovement 8, Common_Movement_JumpLeft2
# 602 "data/expansion_1/scene09.pory"
	waitmovement 0
# 603 "data/expansion_1/scene09.pory"
	playse SE_LEDGE
# 604 "data/expansion_1/scene09.pory"
	applymovement 8, Common_Movement_JumpLeft2
# 605 "data/expansion_1/scene09.pory"
	waitmovement 0
# 606 "data/expansion_1/scene09.pory"
	applymovement 7, Common_Movement_SweatDrop
# 608 "data/expansion_1/scene09.pory"
	setvar VAR_EMERALBODY_RIVAL_STATE, 45
# 609 "data/expansion_1/scene09.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 610 "data/expansion_1/scene09.pory"
	warpcontinuescript MAP_MAUVE_CAMP, 16, 16, Expansion1_Rival_Scene02e
	return


Expansion1_Rival_Scene09b_Text_0:
# 395 "data/expansion_1/scene09.pory"
	.string "And… {PAUSE 100}safe.$"

Expansion1_Rival_Scene09b_Text_1:
# 399 "data/expansion_1/scene09.pory"
	.string "Hey, I was thinking as we headed out…\p"
	.string "Do you think… {PAUSE 100}maybe that thing that\n"
	.string "attacked us at the start was the\l"
	.string "monster?$"

Expansion1_Rival_Scene09b_Text_2:
# 406 "data/expansion_1/scene09.pory"
	.string "You mean back in the treasure room?\n"
	.string "When we got that glitched spawn?$"

Expansion1_Rival_Scene09b_Text_3:
# 411 "data/expansion_1/scene09.pory"
	.string "It… {PAUSE 100}wouldn't surprise me.$"

Expansion1_Rival_Scene09b_Text_4:
# 413 "data/expansion_1/scene09.pory"
	.string "So, we're stuck then?$"

Expansion1_Rival_Scene09b_Text_5:
# 415 "data/expansion_1/scene09.pory"
	.string "A sequence break to end all sequence\n"
	.string "breaks.$"

Expansion1_Rival_Scene09b_Text_6:
# 421 "data/expansion_1/scene09.pory"
	.string "Agh, I'm sorry guys. It looks like this\n"
	.string "one just isn't going to work out. If you\l"
	.string "want, we can all log off and I can try to\l"
	.string "find- {PAUSE 30}well, make something different.$"

Expansion1_Rival_Scene09b_Text_7:
# 426 "data/expansion_1/scene09.pory"
	.string "If you think that's the best option,\n"
	.string "then maybe it's all we can do. If the\l"
	.string "game master can't fix it then who would\l"
	.string "I be to second guess him?$"

Expansion1_Rival_Scene09b_Text_8:
# 436 "data/expansion_1/scene09.pory"
	.string "Harper…{PAUSE 100}? What are you up to?$"

Expansion1_Rival_Scene09b_Text_9:
# 441 "data/expansion_1/scene09.pory"
	.string "… {PAUSE 30}… {PAUSE 30}…{PAUSE 30}\n"
	.string "… {PAUSE 30}… {PAUSE 30}…$"

Expansion1_Rival_Scene09b_Text_10:
# 446 "data/expansion_1/scene09.pory"
	.string "Oh? {PAUSE 30}Oh yeah… {PAUSE 100}Did you notice there's\n"
	.string "a debug menu available?\p"
	.string "Not for the game, but for the mod.\n"
	.string "It was just left in the game if you\l"
	.string "press enough buttons in the menu.$"

Expansion1_Rival_Scene09b_Text_11:
# 454 "data/expansion_1/scene09.pory"
	.string "Ah…{PAUSE 100}\n"
	.string "Hah… {PAUSE 60}hahaha…\p"
	.string "Was that… {PAUSE 100}Did I leave that there?$"

Expansion1_Rival_Scene09b_Text_12:
# 458 "data/expansion_1/scene09.pory"
	.string "I don't know. But given the state of\n"
	.string "this mod, I wouldn't be surprised if\l"
	.string "it was the creators who did it.$"

Expansion1_Rival_Scene09b_Text_13:
# 464 "data/expansion_1/scene09.pory"
	.string "The important part is that it gives\n"
	.string "a bit of behind the scenes context.$"

Expansion1_Rival_Scene09b_Text_14:
# 470 "data/expansion_1/scene09.pory"
	.string "Oh, Harper-sensei, do spill {PAUSE 30}ALL {PAUSE 60}the\n"
	.string "beans{EMOJI_TILDE}{UNK_SPACER}$"

Expansion1_Rival_Scene09b_Text_15:
# 474 "data/expansion_1/scene09.pory"
	.string "Uh… {PAUSE 100}well, it almost seems like a flag\n"
	.string "that was meant for later, around this\l"
	.string "point actually, was tripped really early\l"
	.string "on.\p"
	.string "See here? Right in this menu.$"

Expansion1_Rival_Scene09b_Text_16:
# 483 "data/expansion_1/scene09.pory"
	.string "That's the switch menu. It lets you\n"
	.string "control the state of logic flags.$"

Expansion1_Rival_Scene09b_Text_17:
# 488 "data/expansion_1/scene09.pory"
	.string "Is this related to all the\n"
	.string "“progression” stuff?$"

Expansion1_Rival_Scene09b_Text_18:
# 493 "data/expansion_1/scene09.pory"
	.string "I mean, yeah… {PAUSE 100}but…$"

Expansion1_Rival_Scene09b_Text_19:
# 495 "data/expansion_1/scene09.pory"
	.string "Like… {PAUSE 100}is one of them connected to the\n"
	.string "monster attacking us at the start?$"

Expansion1_Rival_Scene09b_Text_20:
# 500 "data/expansion_1/scene09.pory"
	.string "Yeah, actually, exactly like that.\n"
	.string "There's one labeled “monster moved”.\p"
	.string "Or maybe the more practical way to\n"
	.string "phrase it would be “moving”.$"

Expansion1_Rival_Scene09b_Text_21:
# 507 "data/expansion_1/scene09.pory"
	.string "Moving… {PAUSE 100}Moving somewhere…{PAUSE 60}\n"
	.string "…{PAUSE 60}somewhere like…$"

Expansion1_Rival_Scene09b_Text_22:
# 515 "data/expansion_1/scene09.pory"
	.string "{PLAYER}, didn't you mention some sort\n"
	.string "of monster stalking you in the dungeon\l"
	.string "you spawned in at?$"

Expansion1_Rival_Scene09b_Text_23:
# 521 "data/expansion_1/scene09.pory"
	.string "Good idea. {PAUSE 30}In fact…{PAUSE 60}\n"
	.string "… {PAUSE 30}… {PAUSE 30}…\l"
	.string "Jakson, these “switches” can be\l"
	.string "associated with a map, right?$"

Expansion1_Rival_Scene09b_Text_24:
# 528 "data/expansion_1/scene09.pory"
	.string "Yeah, it's like a local switch for that\n"
	.string "map. Simplifies some of the management\l"
	.string "on the development end.$"

Expansion1_Rival_Scene09b_Text_25:
# 535 "data/expansion_1/scene09.pory"
	.string "So these {PAUSE 30}Map IDs…{PAUSE 60}?$"

Expansion1_Rival_Scene09b_Text_26:
# 539 "data/expansion_1/scene09.pory"
	.string "I mean, they're nameless numbers, so…{PAUSE 60}\n"
	.string "… {PAUSE 30}… {PAUSE 30}…\l"
	.string "Actually, one of them has some other\l"
	.string "map switches flipped. That matches up\l"
	.string "too well with what {PLAYER} did.$"

Expansion1_Rival_Scene09b_Text_27:
# 548 "data/expansion_1/scene09.pory"
	.string "Now, if I were to just…$"

Expansion1_Rival_Scene09b_Text_28:
# 550 "data/expansion_1/scene09.pory"
	.string "Wait, do you think you could fix it?$"

Expansion1_Rival_Scene09b_Text_29:
# 552 "data/expansion_1/scene09.pory"
	.string "… {PAUSE 30}… {PAUSE 30}…\p"
	.string "There, I think that'll do it. {PAUSE 60}I hope.\p"
	.string "I reset the switches in that area,\n"
	.string "bar the monster moving one.$"

Expansion1_Rival_Scene09b_Text_30:
# 557 "data/expansion_1/scene09.pory"
	.string "So, what? That means we go…$"

Expansion1_Rival_Scene09b_Text_31:
# 559 "data/expansion_1/scene09.pory"
	.string "Yeah. To the dungeon that {PLAYER}\n"
	.string "spawned in.$"

Expansion1_Rival_Scene09b_Text_32:
# 562 "data/expansion_1/scene09.pory"
	.string "If we weren't supposed to be there\n"
	.string "yet… {PAUSE 100}Well we've got a shot at the\l"
	.string "endgame now.$"

Expansion1_Rival_Scene09b_Text_33:
# 569 "data/expansion_1/scene09.pory"
	.string "The ‘Illusory Grotto’, was it?\n"
	.string "Time to see what this place is like\l"
	.string "for myself{EMOJI_TILDE}{UNK_SPACER}$"

Expansion1_Rival_Scene09b_Text_34:
# 573 "data/expansion_1/scene09.pory"
	.string "Alright, team. {PAUSE 30}Let's head-$"

Expansion1_Rival_Scene09b_Text_35:
# 577 "data/expansion_1/scene09.pory"
	.string "Well, actually. {PAUSE 60}Harper, {PAUSE 30}if you would.$"

Expansion1_Rival_Scene09b_Text_36:
# 579 "data/expansion_1/scene09.pory"
	.string "All that work and you're foisting\n"
	.string "this responsibility onto me, too?\p"
	.string "Heh. Very well.\n"
	.string "Not really my style, but…\p"
	.string "‘Let's head out, {PAUSE 30}team!’$"
