SootopolisCity_House1_MapScripts::
	.byte 0

SootopolisCity_House1_EventScript_BrickBreakBlackBelt::
	lock
	faceplayer
	msgbox SootopolisCity_House1_Text_DevelopedThisTM, MSGBOX_DEFAULT
	release
	end

SootopolisCity_House1_EventScript_Kecleon::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_KECLEON, CRY_MODE_NORMAL
	msgbox SootopolisCity_House1_Text_Kecleon, MSGBOX_DEFAULT
	waitmoncry
	release
	end

SootopolisCity_House1_Text_DevelopedThisTM:
	.string "For thirty years I've remained in\n"
	.string "Sootopolis honing my skills.$"

SootopolisCity_House1_Text_Kecleon:
	.string "Kecleon: Puu puhyaah.$"

