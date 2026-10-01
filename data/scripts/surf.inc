EventScript_UseSurf::
	checkitem ITEM_HM03
	goto_if_eq VAR_RESULT, FALSE, EventScript_EndUseSurf
	setfieldeffectargument 0, VAR_RESULT
	lockall
	dofieldeffect FLDEFF_USE_SURF
EventScript_ReleaseUseSurf::
	releaseall
EventScript_EndUseSurf::
	end

EventScript_CurrentTooFast::
	lockall
	checkfieldmove FIELD_MOVE_SURF
	goto_if_eq VAR_RESULT, FALSE, EventScript_CurrentTooFastEndMsg
	playse SE_SELECT
	msgbox Text_CurrentTooFast
EventScript_CurrentTooFastEndMsg::
	releaseall
	end

Text_CurrentTooFast::
	.string "The current is much too fast!\n"
	.string "SURF can't be used here…$"
