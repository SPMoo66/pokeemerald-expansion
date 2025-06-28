Route110_TrickHousePuzzle5_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route110_TrickHousePuzzle5_OnTransition
	.byte 0

Route110_TrickHousePuzzle5_OnTransition:
	setvar VAR_TEMP_1, 0
	setvar VAR_TEMP_2, 0
	setvar VAR_TEMP_3, 0
	setvar VAR_TEMP_4, 0
	setvar VAR_TEMP_5, 0
	setvar VAR_TEMP_8, 0
	end

Route110_TrickHousePuzzle5_EventScript_Scroll::
	lockall
	goto_if_eq VAR_TRICK_HOUSE_PUZZLE_5_STATE, 0, Route110_TrickHousePuzzle5_EventScript_FoundScroll
	goto Route110_TrickHousePuzzle_EventScript_ReadScrollAgain
	end

Route110_TrickHousePuzzle5_EventScript_FoundScroll::
	setvar VAR_TRICK_HOUSE_PUZZLE_5_STATE, 1
	goto Route110_TrickHousePuzzle_EventScript_FoundScroll
	end

Route110_TrickHousePuzzle5_EventScript_Mechadoll1::
	lockall
	applymovement LOCALID_MECHADOLL_1, Common_Movement_FacePlayer
	waitmovement 0
	goto_if_eq VAR_TEMP_1, 1, Route110_TrickHousePuzzle5_EventScript_CorrectGoThrough
	setvar VAR_TEMP_9, 0
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll1Activate
	end

Route110_TrickHousePuzzle5_EventScript_Mechadoll2::
	lockall
	applymovement LOCALID_MECHADOLL_2, Common_Movement_FacePlayer
	waitmovement 0
	goto_if_eq VAR_TEMP_2, 1, Route110_TrickHousePuzzle5_EventScript_CorrectGoThrough
	setvar VAR_TEMP_9, 0
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll2Activate
	end

Route110_TrickHousePuzzle5_EventScript_Mechadoll3::
	lockall
	applymovement LOCALID_MECHADOLL_3, Common_Movement_FacePlayer
	waitmovement 0
	goto_if_eq VAR_TEMP_3, 1, Route110_TrickHousePuzzle5_EventScript_CorrectGoThrough
	setvar VAR_TEMP_9, 0
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll3Activate
	end

Route110_TrickHousePuzzle5_EventScript_Mechadoll4::
	lockall
	applymovement LOCALID_MECHADOLL_4, Common_Movement_FacePlayer
	waitmovement 0
	goto_if_eq VAR_TEMP_4, 1, Route110_TrickHousePuzzle5_EventScript_CorrectGoThrough
	setvar VAR_TEMP_9, 0
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll4Activate
	end

Route110_TrickHousePuzzle5_EventScript_Mechadoll5::
	lockall
	applymovement LOCALID_MECHADOLL_5, Common_Movement_FacePlayer
	waitmovement 0
	goto_if_eq VAR_TEMP_5, 1, Route110_TrickHousePuzzle5_EventScript_CorrectGoThrough
	setvar VAR_TEMP_9, 0
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll5Activate
	end

Route110_TrickHousePuzzle5_EventScript_Mechadoll1Trigger0::
	lockall
	setvar VAR_TEMP_9, 0
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll1Activate
	end

Route110_TrickHousePuzzle5_EventScript_Mechadoll1Trigger1::
	lockall
	setvar VAR_TEMP_9, 1
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll1Activate
	end

Route110_TrickHousePuzzle5_EventScript_Mechadoll1Trigger2::
	lockall
	setvar VAR_TEMP_9, 2
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll1Activate
	end

Route110_TrickHousePuzzle5_EventScript_Mechadoll1Trigger3::
	lockall
	setvar VAR_TEMP_9, 3
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll1Activate
	end

Route110_TrickHousePuzzle5_EventScript_Mechadoll1Trigger4::
	lockall
	setvar VAR_TEMP_9, 4
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll1Activate
	end

Route110_TrickHousePuzzle5_EventScript_Mechadoll2Trigger0::
	lockall
	setvar VAR_TEMP_9, 0
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll2Activate
	end

Route110_TrickHousePuzzle5_EventScript_Mechadoll2Trigger1::
	lockall
	setvar VAR_TEMP_9, 1
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll2Activate
	end

Route110_TrickHousePuzzle5_EventScript_Mechadoll2Trigger2::
	lockall
	setvar VAR_TEMP_9, 2
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll2Activate
	end

Route110_TrickHousePuzzle5_EventScript_Mechadoll2Trigger3::
	lockall
	setvar VAR_TEMP_9, 3
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll2Activate
	end

Route110_TrickHousePuzzle5_EventScript_Mechadoll2Trigger4::
	lockall
	setvar VAR_TEMP_9, 4
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll2Activate
	end

Route110_TrickHousePuzzle5_EventScript_Mechadoll2Trigger5::
	lockall
	setvar VAR_TEMP_9, 5
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll2Activate
	end

Route110_TrickHousePuzzle5_EventScript_Mechadoll3Trigger0::
	lockall
	setvar VAR_TEMP_9, 0
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll3Activate
	end

Route110_TrickHousePuzzle5_EventScript_Mechadoll3Trigger1::
	lockall
	setvar VAR_TEMP_9, 1
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll3Activate
	end

Route110_TrickHousePuzzle5_EventScript_Mechadoll3Trigger2::
	lockall
	setvar VAR_TEMP_9, 2
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll3Activate
	end

Route110_TrickHousePuzzle5_EventScript_Mechadoll3Trigger3::
	lockall
	setvar VAR_TEMP_9, 3
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll3Activate
	end

Route110_TrickHousePuzzle5_EventScript_Mechadoll3Trigger4::
	lockall
	setvar VAR_TEMP_9, 4
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll3Activate
	end

Route110_TrickHousePuzzle5_EventScript_Mechadoll4Trigger0::
	lockall
	setvar VAR_TEMP_9, 0
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll4Activate
	end

Route110_TrickHousePuzzle5_EventScript_Mechadoll4Trigger1::
	lockall
	setvar VAR_TEMP_9, 1
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll4Activate
	end

Route110_TrickHousePuzzle5_EventScript_Mechadoll4Trigger2::
	lockall
	setvar VAR_TEMP_9, 2
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll4Activate
	end

Route110_TrickHousePuzzle5_EventScript_Mechadoll4Trigger3::
	lockall
	setvar VAR_TEMP_9, 3
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll4Activate
	end

Route110_TrickHousePuzzle5_EventScript_Mechadoll4Trigger4::
	lockall
	setvar VAR_TEMP_9, 4
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll4Activate
	end

Route110_TrickHousePuzzle5_EventScript_Mechadoll5Trigger0::
	lockall
	setvar VAR_TEMP_9, 0
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll5Activate
	end

Route110_TrickHousePuzzle5_EventScript_Mechadoll1Activate::
	setvar VAR_TEMP_1, 1
	setvar VAR_TEMP_8, LOCALID_MECHADOLL_1
	playse SE_PIN
	applymovement LOCALID_MECHADOLL_1, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_MECHADOLL_1, Common_Movement_Delay48
	waitmovement 0
	call_if_eq VAR_TEMP_9, 1, Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft1
	call_if_eq VAR_TEMP_9, 2, Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft2
	call_if_eq VAR_TEMP_9, 3, Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft3
	call_if_eq VAR_TEMP_9, 4, Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft4
	msgbox Route110_TrickHousePuzzle5_Text_Mechadoll1Intro, MSGBOX_DEFAULT
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll1Quiz
	end

Route110_TrickHousePuzzle5_EventScript_Mechadoll2Activate::
	setvar VAR_TEMP_2, 1
	setvar VAR_TEMP_8, LOCALID_MECHADOLL_2
	playse SE_PIN
	applymovement LOCALID_MECHADOLL_2, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_MECHADOLL_2, Common_Movement_Delay48
	waitmovement 0
	call_if_eq VAR_TEMP_9, 1, Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight1
	call_if_eq VAR_TEMP_9, 2, Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight2
	call_if_eq VAR_TEMP_9, 3, Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight3
	call_if_eq VAR_TEMP_9, 4, Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight4
	call_if_eq VAR_TEMP_9, 5, Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight5
	msgbox Route110_TrickHousePuzzle5_Text_Mechadoll2Intro, MSGBOX_DEFAULT
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll2Quiz
	end

Route110_TrickHousePuzzle5_EventScript_Mechadoll3Activate::
	setvar VAR_TEMP_3, 1
	setvar VAR_TEMP_8, LOCALID_MECHADOLL_3
	playse SE_PIN
	applymovement LOCALID_MECHADOLL_3, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_MECHADOLL_3, Common_Movement_Delay48
	waitmovement 0
	call_if_eq VAR_TEMP_9, 1, Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft1
	call_if_eq VAR_TEMP_9, 2, Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft2
	call_if_eq VAR_TEMP_9, 3, Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft3
	call_if_eq VAR_TEMP_9, 4, Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft4
	msgbox Route110_TrickHousePuzzle5_Text_Mechadoll3Intro, MSGBOX_DEFAULT
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll3Quiz
	end

Route110_TrickHousePuzzle5_EventScript_Mechadoll4Activate::
	setvar VAR_TEMP_4, 1
	setvar VAR_TEMP_8, LOCALID_MECHADOLL_4
	playse SE_PIN
	applymovement LOCALID_MECHADOLL_4, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_MECHADOLL_4, Common_Movement_Delay48
	waitmovement 0
	call_if_eq VAR_TEMP_9, 1, Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft1
	call_if_eq VAR_TEMP_9, 2, Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft2
	call_if_eq VAR_TEMP_9, 3, Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft3
	call_if_eq VAR_TEMP_9, 4, Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft4
	msgbox Route110_TrickHousePuzzle5_Text_Mechadoll4Intro, MSGBOX_DEFAULT
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll4Quiz
	end

Route110_TrickHousePuzzle5_EventScript_Mechadoll5Activate::
	setvar VAR_TEMP_5, 1
	setvar VAR_TEMP_8, LOCALID_MECHADOLL_5
	playse SE_PIN
	applymovement LOCALID_MECHADOLL_5, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_MECHADOLL_5, Common_Movement_Delay48
	waitmovement 0
	msgbox Route110_TrickHousePuzzle5_Text_Mechadoll5Intro, MSGBOX_DEFAULT
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll5Quiz
	end

Route110_TrickHousePuzzle5_EventScript_Mechadoll1Quiz::
	msgbox Route110_TrickHousePuzzle5_Text_Mechadoll1Quiz, MSGBOX_DEFAULT
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, Route110_TrickHousePuzzle5_Text_Mechadoll1Answer1, Route110_TrickHousePuzzle5_Text_Mechadoll1Answer2, Route110_TrickHousePuzzle5_Text_Mechadoll1Answer3
	switch VAR_RESULT
	case 1, Route110_TrickHousePuzzle5_EventScript_CorrectAnswer
	goto Route110_TrickHousePuzzle5_EventScript_IncorrectAnswer
	end

Route110_TrickHousePuzzle5_EventScript_Mechadoll2Quiz::
	msgbox Route110_TrickHousePuzzle5_Text_Mechadoll2Quiz, MSGBOX_DEFAULT
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, Route110_TrickHousePuzzle5_Text_Mechadoll2Answer1, Route110_TrickHousePuzzle5_Text_Mechadoll2Answer2, Route110_TrickHousePuzzle5_Text_Mechadoll2Answer3
	switch VAR_RESULT
	case 2, Route110_TrickHousePuzzle5_EventScript_CorrectAnswer
	goto Route110_TrickHousePuzzle5_EventScript_IncorrectAnswer
	end

Route110_TrickHousePuzzle5_EventScript_Mechadoll3Quiz::
	msgbox Route110_TrickHousePuzzle5_Text_Mechadoll3Quiz, MSGBOX_DEFAULT
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, Route110_TrickHousePuzzle5_Text_Mechadoll3Answer1, Route110_TrickHousePuzzle5_Text_Mechadoll3Answer2, Route110_TrickHousePuzzle5_Text_Mechadoll3Answer3
	switch VAR_RESULT
	case 1, Route110_TrickHousePuzzle5_EventScript_CorrectAnswer
	goto Route110_TrickHousePuzzle5_EventScript_IncorrectAnswer
	end

Route110_TrickHousePuzzle5_EventScript_Mechadoll4Quiz::
	msgbox Route110_TrickHousePuzzle5_Text_Mechadoll4Quiz, MSGBOX_DEFAULT
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, Route110_TrickHousePuzzle5_Text_Mechadoll4Answer1, Route110_TrickHousePuzzle5_Text_Mechadoll4Answer2, Route110_TrickHousePuzzle5_Text_Mechadoll4Answer3
	switch VAR_RESULT
	case 0, Route110_TrickHousePuzzle5_EventScript_CorrectAnswer
	goto Route110_TrickHousePuzzle5_EventScript_IncorrectAnswer
	end

Route110_TrickHousePuzzle5_EventScript_Mechadoll5Quiz::
	msgbox Route110_TrickHousePuzzle5_Text_Mechadoll5Quiz, MSGBOX_DEFAULT
	setvar VAR_0x8000, MUGSHOT_JIGGLYPUFF_1
	callnative DrawMugshot
	delay 60
	waitbuttonpress
	callnative ClearMugshot
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, Route110_TrickHousePuzzle5_Text_Mechadoll5Answer1, Route110_TrickHousePuzzle5_Text_Mechadoll5Answer2, Route110_TrickHousePuzzle5_Text_Mechadoll5Answer3
	setvar VAR_0x8000, MUGSHOT_JIGGLYPUFF_2
	callnative DrawMugshot
	switch VAR_RESULT
	case 2, Route110_TrickHousePuzzle5_EventScript_CorrectAnswer
	goto Route110_TrickHousePuzzle5_EventScript_IncorrectAnswer
	end

Route110_TrickHousePuzzle5_EventScript_IncorrectAnswer::
	waitse
	playse SE_FAILURE
	msgbox Route110_TrickHousePuzzle5_Text_DisappointmentError, MSGBOX_DEFAULT
	applymovement LOCALID_MECHADOLL_1, Route110_TrickHousePuzzle5_Movement_MechadollShake
	applymovement LOCALID_MECHADOLL_2, Route110_TrickHousePuzzle5_Movement_MechadollShake
	applymovement LOCALID_MECHADOLL_3, Route110_TrickHousePuzzle5_Movement_MechadollShake
	applymovement LOCALID_MECHADOLL_4, Route110_TrickHousePuzzle5_Movement_MechadollShake
	applymovement LOCALID_MECHADOLL_5, Route110_TrickHousePuzzle5_Movement_MechadollShake
	msgbox Route110_TrickHousePuzzle5_Text_Wahahahaha, MSGBOX_DEFAULT
	waitmovement 0
	msgbox Route110_TrickHousePuzzle5_Text_WaitForNextChallenge, MSGBOX_DEFAULT
	closemessage
	callnative ClearMugshot
	warp MAP_ROUTE110_TRICK_HOUSE_PUZZLE5, 0, 21
	waitstate
	releaseall
	end

Route110_TrickHousePuzzle5_EventScript_CorrectAnswer::
	waitse
	playse SE_SUCCESS
	goto Route110_TrickHousePuzzle5_EventScript_CorrectGoThrough
	end

Route110_TrickHousePuzzle5_EventScript_CorrectGoThrough::
	msgbox Route110_TrickHousePuzzle5_Text_CorrectGoThrough, MSGBOX_DEFAULT
	callnative ClearMugshot
	releaseall
	end

@ Absurd redundancy in movement scripts that could be resolved by using VAR_TEMP_8 for applymovement instead
@ Many of the below movement scripts arent even used, see below
@   Mechadoll 2 is the only mechadoll to walk right, all the other WalkRight scripts are unused
@   Mechadoll 5 never walks, all the Mechadoll5Walk scripts are unused
@   No mechadoll walks left 5 paces, all the WalkLeft5 scripts are unused
Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft1::
	call_if_eq VAR_TEMP_8, LOCALID_MECHADOLL_1, Route110_TrickHousePuzzle5_EventScript_Mechadoll1WalkLeft1
	call_if_eq VAR_TEMP_8, LOCALID_MECHADOLL_3, Route110_TrickHousePuzzle5_EventScript_Mechadoll3WalkLeft1
	call_if_eq VAR_TEMP_8, LOCALID_MECHADOLL_4, Route110_TrickHousePuzzle5_EventScript_Mechadoll4WalkLeft1
	return

Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft2::
	call_if_eq VAR_TEMP_8, LOCALID_MECHADOLL_1, Route110_TrickHousePuzzle5_EventScript_Mechadoll1WalkLeft2
	call_if_eq VAR_TEMP_8, LOCALID_MECHADOLL_3, Route110_TrickHousePuzzle5_EventScript_Mechadoll3WalkLeft2
	call_if_eq VAR_TEMP_8, LOCALID_MECHADOLL_4, Route110_TrickHousePuzzle5_EventScript_Mechadoll4WalkLeft2
	return

Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft3::
	call_if_eq VAR_TEMP_8, LOCALID_MECHADOLL_1, Route110_TrickHousePuzzle5_EventScript_Mechadoll1WalkLeft3
	call_if_eq VAR_TEMP_8, LOCALID_MECHADOLL_3, Route110_TrickHousePuzzle5_EventScript_Mechadoll3WalkLeft3
	call_if_eq VAR_TEMP_8, LOCALID_MECHADOLL_4, Route110_TrickHousePuzzle5_EventScript_Mechadoll4WalkLeft3
	return

Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft4::
	call_if_eq VAR_TEMP_8, LOCALID_MECHADOLL_1, Route110_TrickHousePuzzle5_EventScript_Mechadoll1WalkLeft4
	call_if_eq VAR_TEMP_8, LOCALID_MECHADOLL_3, Route110_TrickHousePuzzle5_EventScript_Mechadoll3WalkLeft4
	call_if_eq VAR_TEMP_8, LOCALID_MECHADOLL_4, Route110_TrickHousePuzzle5_EventScript_Mechadoll4WalkLeft4
	return

Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight1::
	call_if_eq VAR_TEMP_8, LOCALID_MECHADOLL_2, Route110_TrickHousePuzzle5_EventScript_Mechadoll2WalkRight1
	return

Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight2::
	call_if_eq VAR_TEMP_8, LOCALID_MECHADOLL_2, Route110_TrickHousePuzzle5_EventScript_Mechadoll2WalkRight2
	return

Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight3::
	call_if_eq VAR_TEMP_8, LOCALID_MECHADOLL_2, Route110_TrickHousePuzzle5_EventScript_Mechadoll2WalkRight3
	return

Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight4::
	call_if_eq VAR_TEMP_8, LOCALID_MECHADOLL_2, Route110_TrickHousePuzzle5_EventScript_Mechadoll2WalkRight4
	return

Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight5::
	call_if_eq VAR_TEMP_8, LOCALID_MECHADOLL_2, Route110_TrickHousePuzzle5_EventScript_Mechadoll2WalkRight5
	return

Route110_TrickHousePuzzle5_EventScript_Mechadoll1WalkLeft1::
	applymovement LOCALID_MECHADOLL_1, Common_Movement_WalkLeft
	waitmovement 0
	return

Route110_TrickHousePuzzle5_EventScript_Mechadoll3WalkLeft1::
	applymovement LOCALID_MECHADOLL_3, Common_Movement_WalkLeft
	waitmovement 0
	return

Route110_TrickHousePuzzle5_EventScript_Mechadoll4WalkLeft1::
	applymovement LOCALID_MECHADOLL_4, Common_Movement_WalkLeft
	waitmovement 0
	return

Route110_TrickHousePuzzle5_EventScript_Mechadoll1WalkLeft2::
	applymovement LOCALID_MECHADOLL_1, Common_Movement_WalkLeft2
	waitmovement 0
	return

Route110_TrickHousePuzzle5_EventScript_Mechadoll3WalkLeft2::
	applymovement LOCALID_MECHADOLL_3, Common_Movement_WalkLeft2
	waitmovement 0
	return

Route110_TrickHousePuzzle5_EventScript_Mechadoll4WalkLeft2::
	applymovement LOCALID_MECHADOLL_4, Common_Movement_WalkLeft2
	waitmovement 0
	return

Route110_TrickHousePuzzle5_EventScript_Mechadoll1WalkLeft3::
	applymovement LOCALID_MECHADOLL_1, Common_Movement_WalkLeft3
	waitmovement 0
	return

Route110_TrickHousePuzzle5_EventScript_Mechadoll3WalkLeft3::
	applymovement LOCALID_MECHADOLL_3, Common_Movement_WalkLeft3
	waitmovement 0
	return

Route110_TrickHousePuzzle5_EventScript_Mechadoll4WalkLeft3::
	applymovement LOCALID_MECHADOLL_4, Common_Movement_WalkLeft3
	waitmovement 0
	return

Route110_TrickHousePuzzle5_EventScript_Mechadoll1WalkLeft4::
	applymovement LOCALID_MECHADOLL_1, Common_Movement_WalkLeft4
	waitmovement 0
	return

Route110_TrickHousePuzzle5_EventScript_Mechadoll3WalkLeft4::
	applymovement LOCALID_MECHADOLL_3, Common_Movement_WalkLeft4
	waitmovement 0
	return

Route110_TrickHousePuzzle5_EventScript_Mechadoll4WalkLeft4::
	applymovement LOCALID_MECHADOLL_4, Common_Movement_WalkLeft4
	waitmovement 0
	return

Route110_TrickHousePuzzle5_EventScript_Mechadoll2WalkRight1::
	applymovement LOCALID_MECHADOLL_2, Common_Movement_WalkRight
	waitmovement 0
	return

Route110_TrickHousePuzzle5_EventScript_Mechadoll2WalkRight2::
	applymovement LOCALID_MECHADOLL_2, Common_Movement_WalkRight2
	waitmovement 0
	return

Route110_TrickHousePuzzle5_EventScript_Mechadoll2WalkRight3::
	applymovement LOCALID_MECHADOLL_2, Common_Movement_WalkRight3
	waitmovement 0
	return

Route110_TrickHousePuzzle5_EventScript_Mechadoll2WalkRight4::
	applymovement LOCALID_MECHADOLL_2, Common_Movement_WalkRight4
	waitmovement 0
	return

Route110_TrickHousePuzzle5_EventScript_Mechadoll2WalkRight5::
	applymovement LOCALID_MECHADOLL_2, Common_Movement_WalkRight5
	waitmovement 0
	return

Route110_TrickHousePuzzle5_Movement_MechadollShake:
	face_left
	delay_2
	face_right
	delay_2
	face_left
	delay_2
	face_right
	delay_2
	face_left
	delay_2
	face_right
	delay_2
	face_left
	delay_2
	face_right
	delay_2
	face_left
	delay_2
	face_right
	delay_2
	face_left
	delay_2
	face_right
	delay_2
	face_left
	delay_2
	face_right
	delay_2
	face_left
	delay_2
	face_right
	delay_2
	face_left
	delay_2
	face_right
	delay_2
	face_left
	delay_2
	face_right
	delay_2
	face_left
	delay_2
	face_right
	delay_2
	face_down
	step_end

Route110_TrickHousePuzzle5_Text_Mechadoll1Intro:
	.string "Clickety-clack…\n"
	.string "Mechadoll 1 am I!\p"
	.string "If you answer quizzes correctly,\n"
	.string "then you will go to Mechadoll 5.\l"
	.string "Then you can obtain the secret code.$"

Route110_TrickHousePuzzle5_Text_Mechadoll1Quiz:
	.string "Mechadoll 1 quiz.\p"
	.string "What is the current base power of\n"
	.string "the move Tackle?$"

Route110_TrickHousePuzzle5_Text_Mechadoll1Answer1:
	.string "35$"

Route110_TrickHousePuzzle5_Text_Mechadoll1Answer2:
	.string "40$"

Route110_TrickHousePuzzle5_Text_Mechadoll1Answer3:
	.string "50$"

Route110_TrickHousePuzzle5_Text_CorrectGoThrough:
	.string "Congratulations. Correct you are.\n"
	.string "Go through. Please.$"

Route110_TrickHousePuzzle5_Text_DisappointmentError:
	.string "Bzzzt. Disappointment.\n"
	.string "Error.$"

Route110_TrickHousePuzzle5_Text_Wahahahaha:
	.string "Wahahahaha! Wahahahaha!\n"
	.string "Clickety-clack!$"

Route110_TrickHousePuzzle5_Text_WaitForNextChallenge:
	.string "Your next challenge we wait for.$"

Route110_TrickHousePuzzle5_Text_Mechadoll2Intro:
	.string "Clickety-clack…\n"
	.string "Mechadoll 2 am I!\p"
	.string "Mechadoll 1's quiz difficulty level\n"
	.string "is set too low.$"

Route110_TrickHousePuzzle5_Text_Mechadoll2Quiz:
	.string "Mechadoll 2 quiz.\p"
	.string "Which Pokémon was chasing\n"
	.string "Professor Birch?$"

Route110_TrickHousePuzzle5_Text_Mechadoll2Answer1:
	.string "Poochyena$"

Route110_TrickHousePuzzle5_Text_Mechadoll2Answer2:
	.string "Slakoth$"

Route110_TrickHousePuzzle5_Text_Mechadoll2Answer3:
	.string "Zigzagoon$"

Route110_TrickHousePuzzle5_Text_Mechadoll3Intro:
	.string "Clickety-clack…\n"
	.string "Mechadoll 3 am I!\p"
	.string "Matters of money are my sole focus.$"

Route110_TrickHousePuzzle5_Text_Mechadoll3Quiz:
	.string "Mechadoll 3 quiz.\p"
	.string "How many appliance forms does Rotom\n"
	.string "have?$"

Route110_TrickHousePuzzle5_Text_Mechadoll3Answer1:
	.string "4$"

Route110_TrickHousePuzzle5_Text_Mechadoll3Answer2:
	.string "5$"

Route110_TrickHousePuzzle5_Text_Mechadoll3Answer3:
	.string "6$"

Route110_TrickHousePuzzle5_Text_Mechadoll4Intro:
	.string "Clickety-clack…\n"
	.string "Mechadoll 4 that is me!\p"
	.string "My quiz is an object of beauty.$"

Route110_TrickHousePuzzle5_Text_Mechadoll4Quiz:
	.string "Mechadoll 4 quiz.\p"
	.string "Which of the following Pokémon can\n"
	.string "learn Fly?$"

Route110_TrickHousePuzzle5_Text_Mechadoll4Answer1:
	.string "Volcarona$"

Route110_TrickHousePuzzle5_Text_Mechadoll4Answer2:
	.string "Beautifly$"

Route110_TrickHousePuzzle5_Text_Mechadoll4Answer3:
	.string "Yanmega$"

Route110_TrickHousePuzzle5_Text_Mechadoll5Intro:
	.string "Clickety-clack…\n"
	.string "Mechadoll 5 am I!\p"
	.string "The Master's best and proudest\n"
	.string "achievement am I.$"

Route110_TrickHousePuzzle5_Text_Mechadoll5Quiz:
	.string "Mechadoll 5 quiz.\p"
	.string "Which Pokémon does this silhouette\n"
	.string "belong to?$"

Route110_TrickHousePuzzle5_Text_Mechadoll5Answer1:
	.string "Voltorb$"

Route110_TrickHousePuzzle5_Text_Mechadoll5Answer2:
	.string "Spheal$"

Route110_TrickHousePuzzle5_Text_Mechadoll5Answer3:
	.string "Jigglypuff seen from above$"
