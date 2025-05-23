Magearna_Escape::
# 2 "data/magearna_encounter.pory"
	lock
# 3 "data/magearna_encounter.pory"
	playbgm MUS_HG_RADIO_BUENA, FALSE
# 4 "data/magearna_encounter.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 5 "data/magearna_encounter.pory"
	addobject 24
# 6 "data/magearna_encounter.pory"
	playse SE_EXIT
# 7 "data/magearna_encounter.pory"
	delay 10
# 8 "data/magearna_encounter.pory"
	compare VAR_TEMP_0, 11
	goto_if_eq Magearna_Escape_2
# 12 "data/magearna_encounter.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Magearna_Face
Magearna_Escape_1:
# 14 "data/magearna_encounter.pory"
	applymovement 24, Common_Movement_WalkFastDown6
# 15 "data/magearna_encounter.pory"
	waitmovement 0
# 16 "data/magearna_encounter.pory"
	addobject 15
# 17 "data/magearna_encounter.pory"
	playse SE_EXIT
# 18 "data/magearna_encounter.pory"
	delay 10
# 19 "data/magearna_encounter.pory"
	applymovement 15, Common_Movement_WalkDown
# 20 "data/magearna_encounter.pory"
	applymovement 24, Common_Movement_WalkFastRight9
# 21 "data/magearna_encounter.pory"
	waitmovement 0
# 22 "data/magearna_encounter.pory"
	removeobject 24
# 23 "data/magearna_encounter.pory"
	msgbox Magearna_Escape_Text_0
# 25 "data/magearna_encounter.pory"
	closemessage
# 26 "data/magearna_encounter.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 27 "data/magearna_encounter.pory"
	applymovement 15, Common_Movement_WalkInPlaceRight
# 28 "data/magearna_encounter.pory"
	waitmovement 0
# 29 "data/magearna_encounter.pory"
	msgbox Magearna_Escape_Text_1
# 35 "data/magearna_encounter.pory"
	giveitem ITEM_QUICK_BALL, 3
# 36 "data/magearna_encounter.pory"
	setvar VAR_MAGEARNA_STATE, 2
# 37 "data/magearna_encounter.pory"
	clearflag FLAG_HIDE_MAGEARNA_SCIENTIST
# 38 "data/magearna_encounter.pory"
	clearflag FLAG_TEMP_2
# 39 "data/magearna_encounter.pory"
	setflag FLAG_TEMP_5
# 40 "data/magearna_encounter.pory"
	release
	return

Magearna_Escape_2:
# 9 "data/magearna_encounter.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Magearna_PushPlayerRight
	goto Magearna_Escape_1


Magearna_Escape2::
# 44 "data/magearna_encounter.pory"
	lock
# 45 "data/magearna_encounter.pory"
	goto_if_unset FLAG_TEMP_5, Magearna_Escape2_2
Magearna_Escape2_1:
# 48 "data/magearna_encounter.pory"
	applymovement 25, Common_Movement_FaceDown
# 49 "data/magearna_encounter.pory"
	playse SE_PIN
# 50 "data/magearna_encounter.pory"
	applymovement 25, Common_Movement_ExclamationMark
# 51 "data/magearna_encounter.pory"
	delay 30
# 52 "data/magearna_encounter.pory"
	applymovement 25, Common_Movement_WalkFastDown
# 53 "data/magearna_encounter.pory"
	waitmovement 0
# 54 "data/magearna_encounter.pory"
	playse SE_LEDGE
# 55 "data/magearna_encounter.pory"
	applymovement 25, Common_Movement_JumpDown2
# 56 "data/magearna_encounter.pory"
	waitmovement 0
# 57 "data/magearna_encounter.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 58 "data/magearna_encounter.pory"
	applymovement 25, Common_Movement_WalkFastDown3
# 59 "data/magearna_encounter.pory"
	waitmovement 0
# 60 "data/magearna_encounter.pory"
	applymovement 25, Common_Movement_WalkFastLeft9
# 61 "data/magearna_encounter.pory"
	waitmovement 0
# 62 "data/magearna_encounter.pory"
	delay 10
# 63 "data/magearna_encounter.pory"
	removeobject 25
# 64 "data/magearna_encounter.pory"
	setvar VAR_MAGEARNA_STATE, 3
# 65 "data/magearna_encounter.pory"
	clearflag FLAG_TEMP_3
# 66 "data/magearna_encounter.pory"
	setflag FLAG_TEMP_2
# 67 "data/magearna_encounter.pory"
	release
	return

Magearna_Escape2_2:
# 46 "data/magearna_encounter.pory"
	playbgm MUS_HG_RADIO_BUENA, FALSE
	goto Magearna_Escape2_1


Magearna_Escape3::
# 71 "data/magearna_encounter.pory"
	lock
# 72 "data/magearna_encounter.pory"
	goto_if_unset FLAG_TEMP_5, Magearna_Escape3_2
Magearna_Escape3_1:
# 75 "data/magearna_encounter.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 76 "data/magearna_encounter.pory"
	applymovement 26, Common_Movement_FaceUp
# 77 "data/magearna_encounter.pory"
	playse SE_PIN
# 78 "data/magearna_encounter.pory"
	applymovement 26, Common_Movement_ExclamationMark
# 79 "data/magearna_encounter.pory"
	delay 30
# 80 "data/magearna_encounter.pory"
	applymovement 26, Common_Movement_WalkFastLeft3
# 81 "data/magearna_encounter.pory"
	waitmovement 0
# 82 "data/magearna_encounter.pory"
	playse SE_LEDGE
# 83 "data/magearna_encounter.pory"
	applymovement 26, Common_Movement_JumpLeft2
# 84 "data/magearna_encounter.pory"
	waitmovement 0
# 85 "data/magearna_encounter.pory"
	applymovement 26, Common_Movement_WalkFastLeft3
# 86 "data/magearna_encounter.pory"
	waitmovement 0
# 87 "data/magearna_encounter.pory"
	delay 10
# 88 "data/magearna_encounter.pory"
	removeobject 26
# 89 "data/magearna_encounter.pory"
	addobject 30
# 90 "data/magearna_encounter.pory"
	setobjectxy 30, 27, 48
# 91 "data/magearna_encounter.pory"
	applymovement 30, Common_Movement_WalkRight8
# 92 "data/magearna_encounter.pory"
	waitmovement 0
# 93 "data/magearna_encounter.pory"
	applymovement 30, Common_Movement_WalkInPlaceDown
# 94 "data/magearna_encounter.pory"
	waitmovement 0
# 95 "data/magearna_encounter.pory"
	msgbox Magearna_Escape3_Text_0
# 97 "data/magearna_encounter.pory"
	closemessage
# 98 "data/magearna_encounter.pory"
	applymovement 30, Common_Movement_WalkLeft8
# 99 "data/magearna_encounter.pory"
	waitmovement 0
# 100 "data/magearna_encounter.pory"
	removeobject 30
# 101 "data/magearna_encounter.pory"
	delay 20
# 102 "data/magearna_encounter.pory"
	msgbox Magearna_Escape3_Text_1
# 103 "data/magearna_encounter.pory"
	setvar VAR_MAGEARNA_STATE, 4
# 104 "data/magearna_encounter.pory"
	setflag FLAG_HIDE_MAGEARNA_SCIENTIST
# 105 "data/magearna_encounter.pory"
	clearflag FLAG_TEMP_4
# 106 "data/magearna_encounter.pory"
	setflag FLAG_TEMP_3
# 107 "data/magearna_encounter.pory"
	fadedefaultbgm
# 108 "data/magearna_encounter.pory"
	release
	return

Magearna_Escape3_2:
# 73 "data/magearna_encounter.pory"
	playbgm MUS_HG_RADIO_BUENA, FALSE
	goto Magearna_Escape3_1


Magearna_ScientistHelpMe::
# 112 "data/magearna_encounter.pory"
	msgbox Magearna_ScientistHelpMe_Text_0, MSGBOX_NPC
	return


Magearna_ScientistDontLeave::
# 116 "data/magearna_encounter.pory"
	msgbox Magearna_Text_ScientistDontLeave, MSGBOX_NPC
	return


Magearna_CheckActive::
# 120 "data/magearna_encounter.pory"
	compare VAR_MAGEARNA_STATE, 5
	goto_if_eq Magearna_CheckActive_1
	return

Magearna_CheckActive_1:
# 121 "data/magearna_encounter.pory"
	release
	return


Magearna_ScientistDontLeaveNorth::
# 126 "data/magearna_encounter.pory"
	call Magearna_CheckActive
# 127 "data/magearna_encounter.pory"
	lock
# 128 "data/magearna_encounter.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 129 "data/magearna_encounter.pory"
	compare VAR_TEMP_0, 21
	goto_if_lt Magearna_ScientistDontLeaveNorth_2
# 133 "data/magearna_encounter.pory"
	applymovement 28, Common_Movement_WalkInPlaceRight
Magearna_ScientistDontLeaveNorth_1:
# 135 "data/magearna_encounter.pory"
	waitmovement 0
# 136 "data/magearna_encounter.pory"
	call Magearna_ScientistDontLeave
# 137 "data/magearna_encounter.pory"
	closemessage
# 138 "data/magearna_encounter.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 139 "data/magearna_encounter.pory"
	waitmovement 0
# 140 "data/magearna_encounter.pory"
	release
	return

Magearna_ScientistDontLeaveNorth_2:
# 130 "data/magearna_encounter.pory"
	applymovement 28, Common_Movement_WalkInPlaceLeft
	goto Magearna_ScientistDontLeaveNorth_1


Magearna_ScientistDontLeaveEast::
# 144 "data/magearna_encounter.pory"
	call Magearna_CheckActive
# 145 "data/magearna_encounter.pory"
	lock
# 146 "data/magearna_encounter.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 147 "data/magearna_encounter.pory"
	compare VAR_TEMP_1, 10
	goto_if_lt Magearna_ScientistDontLeaveEast_2
# 151 "data/magearna_encounter.pory"
	applymovement 29, Common_Movement_WalkInPlaceDown
Magearna_ScientistDontLeaveEast_1:
# 153 "data/magearna_encounter.pory"
	waitmovement 0
# 154 "data/magearna_encounter.pory"
	call Magearna_ScientistDontLeave
# 155 "data/magearna_encounter.pory"
	closemessage
# 156 "data/magearna_encounter.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 157 "data/magearna_encounter.pory"
	waitmovement 0
# 158 "data/magearna_encounter.pory"
	release
	return

Magearna_ScientistDontLeaveEast_2:
# 148 "data/magearna_encounter.pory"
	applymovement 29, Common_Movement_WalkInPlaceUp
	goto Magearna_ScientistDontLeaveEast_1


Magearna_ScientistDontLeaveSouth::
# 162 "data/magearna_encounter.pory"
	call Magearna_CheckActive
# 163 "data/magearna_encounter.pory"
	lock
# 164 "data/magearna_encounter.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 165 "data/magearna_encounter.pory"
	compare VAR_TEMP_0, 16
	goto_if_lt Magearna_ScientistDontLeaveSouth_2
# 169 "data/magearna_encounter.pory"
	applymovement 30, Common_Movement_WalkInPlaceRight
Magearna_ScientistDontLeaveSouth_1:
# 171 "data/magearna_encounter.pory"
	waitmovement 0
# 172 "data/magearna_encounter.pory"
	call Magearna_ScientistDontLeave
# 173 "data/magearna_encounter.pory"
	closemessage
# 174 "data/magearna_encounter.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 175 "data/magearna_encounter.pory"
	waitmovement 0
# 176 "data/magearna_encounter.pory"
	release
	return

Magearna_ScientistDontLeaveSouth_2:
# 166 "data/magearna_encounter.pory"
	applymovement 30, Common_Movement_WalkInPlaceLeft
	goto Magearna_ScientistDontLeaveSouth_1


# 179 "data/magearna_encounter.pory"
Magearna_PushPlayerRight:
# 180 "data/magearna_encounter.pory"
	delay_4
# 181 "data/magearna_encounter.pory"
	face_left
# 182 "data/magearna_encounter.pory"
	lock_facing_direction
# 183 "data/magearna_encounter.pory"
	walk_right
# 184 "data/magearna_encounter.pory"
	unlock_facing_direction
# 185 "data/magearna_encounter.pory"
	delay_16
# 186 "data/magearna_encounter.pory"
	walk_in_place_faster_down
	step_end

# 189 "data/magearna_encounter.pory"
Magearna_Face:
# 190 "data/magearna_encounter.pory"
	delay_4
# 191 "data/magearna_encounter.pory"
	walk_in_place_faster_left
# 192 "data/magearna_encounter.pory"
	delay_16
# 193 "data/magearna_encounter.pory"
	delay_16
# 194 "data/magearna_encounter.pory"
	walk_in_place_faster_down
	step_end

BattleMagearna::
# 204 "data/magearna_encounter.pory"
	lock
# 205 "data/magearna_encounter.pory"
	faceplayer
# 206 "data/magearna_encounter.pory"
	setvar VAR_LAST_TALKED, 27
# 207 "data/magearna_encounter.pory"
	playmoncry SPECIES_MAGEARNA, CRY_MODE_ENCOUNTER
# 208 "data/magearna_encounter.pory"
	msgbox BattleMagearna_Text_0
# 209 "data/magearna_encounter.pory"
	waitmoncry
# 210 "data/magearna_encounter.pory"
	seteventmon SPECIES_MAGEARNA, 50
# 211 "data/magearna_encounter.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 212 "data/magearna_encounter.pory"
	special BattleSetup_StartLegendaryBattle
# 213 "data/magearna_encounter.pory"
	waitstate
# 214 "data/magearna_encounter.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 215 "data/magearna_encounter.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 216 "data/magearna_encounter.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq BattleMagearna_2
BattleMagearna_1:
# 219 "data/magearna_encounter.pory"
	release
	end

BattleMagearna_2:
# 217 "data/magearna_encounter.pory"
	setflag FLAG_CAUGHT_MAGEARNA
	goto BattleMagearna_1


Magearna_Escape_Text_0:
# 23 "data/magearna_encounter.pory"
	.string "No!\n"
	.string "Come back here!$"

Magearna_Escape_Text_1:
# 29 "data/magearna_encounter.pory"
	.string "Ah, you saw that display…\p"
	.string "Our latest experiment has escaped!\n"
	.string "Please help us chase it down!\p"
	.string "Surely you can tell that I am in no\n"
	.string "shape to catch it…\p"
	.string "… … …\n"
	.string "Here, this will probably help you.$"

Magearna_Escape3_Text_0:
# 95 "data/magearna_encounter.pory"
	.string "Agh, I'm giving up…\p"
	.string "Thanks for you help, but I'll be\n"
	.string "chalking this one up as a loss.$"

Magearna_Escape3_Text_1:
# 102 "data/magearna_encounter.pory"
	.string "The ‘experiment’ is likely still nearby…$"

Magearna_ScientistHelpMe_Text_0:
# 112 "data/magearna_encounter.pory"
	.string "Please…\nHelp me out…$"

BattleMagearna_Text_0:
# 208 "data/magearna_encounter.pory"
	.string "Rii-wa-iii!$"

Magearna_Text_ScientistDontLeave::
# 197 "data/magearna_encounter.pory"
	.string "Please, don't leave!\p"
	.string "We need to find my experiment!$"
