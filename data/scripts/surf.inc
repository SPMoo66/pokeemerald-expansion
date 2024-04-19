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
