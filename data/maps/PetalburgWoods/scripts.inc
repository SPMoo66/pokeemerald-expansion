# 1 "data/maps/PetalburgWoods/scripts.pory"

# 2 "data/maps/PetalburgWoods/scripts.pory"
.set LOCALID_GRUNT, 3
# 3 "data/maps/PetalburgWoods/scripts.pory"
.set LOCALID_DEVON_EMPLOYEE, 4
# 4 "data/maps/PetalburgWoods/scripts.pory"

# 5 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherLeft::
# 6 "data/maps/PetalburgWoods/scripts.pory"
	lockall
# 7 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherIntro
# 8 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherApproachPlayerLeft
# 9 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 10 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HaveYouSeenShroomish, MSGBOX_DEFAULT
# 11 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 12 "data/maps/PetalburgWoods/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 13 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaEntrance
# 14 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 15 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWasGoingToAmbushYou, MSGBOX_DEFAULT
# 16 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 17 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaApproachResearcherLeft
# 18 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 19 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterUp
# 20 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 21 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HandOverThosePapers, MSGBOX_DEFAULT
# 22 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 23 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherFleeToPlayerLeft
# 24 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 25 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YouHaveToHelpMe, MSGBOX_DEFAULT
# 26 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 27 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, Common_Movement_WalkDown
# 28 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 29 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_NoOneCrossesTeamAqua, MSGBOX_DEFAULT
# 30 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_PETALBURG_WOODS, PetalburgWoods_Text_YoureKiddingMe
# 31 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaBackOff
# 32 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 33 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherPostBattle
# 34 "data/maps/PetalburgWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgWoods_Movement_WatchResearcherLeave
# 35 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherExitLeft
# 36 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 37 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_RemoveDevonResearcher
# 38 "data/maps/PetalburgWoods/scripts.pory"
	end
# 39 "data/maps/PetalburgWoods/scripts.pory"

# 40 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherRight::
# 41 "data/maps/PetalburgWoods/scripts.pory"
	lockall
# 42 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherIntro
# 43 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherApproachPlayerRight
# 44 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 45 "data/maps/PetalburgWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 46 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 47 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HaveYouSeenShroomish, MSGBOX_DEFAULT
# 48 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 49 "data/maps/PetalburgWoods/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 50 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaEntrance
# 51 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 52 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWasGoingToAmbushYou, MSGBOX_DEFAULT
# 53 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 54 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaApproachResearcherRight
# 55 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 56 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterUp
# 57 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 58 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HandOverThosePapers, MSGBOX_DEFAULT
# 59 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 60 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherFleeToPlayerRight
# 61 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 62 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YouHaveToHelpMe, MSGBOX_DEFAULT
# 63 "data/maps/PetalburgWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 64 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 65 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_NoOneCrossesTeamAqua, MSGBOX_DEFAULT
# 66 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_PETALBURG_WOODS, PetalburgWoods_Text_YoureKiddingMe
# 67 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaBackOff
# 68 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 69 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherPostBattle
# 70 "data/maps/PetalburgWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgWoods_Movement_WatchResearcherLeave
# 71 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherExitRight
# 72 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 73 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_RemoveDevonResearcher
# 74 "data/maps/PetalburgWoods/scripts.pory"
	end
# 75 "data/maps/PetalburgWoods/scripts.pory"

# 76 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherIntro::
# 77 "data/maps/PetalburgWoods/scripts.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 78 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherLookAround
# 79 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 80 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_NotAOneToBeFound, MSGBOX_DEFAULT
# 81 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 82 "data/maps/PetalburgWoods/scripts.pory"
	return
# 83 "data/maps/PetalburgWoods/scripts.pory"

# 84 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherPostBattle::
# 85 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YouveGotSomeNerve, MSGBOX_DEFAULT
# 86 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 87 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaRunAway
# 88 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 89 "data/maps/PetalburgWoods/scripts.pory"
	removeobject LOCALID_GRUNT
# 90 "data/maps/PetalburgWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 91 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 92 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_ThatWasAwfullyClose, MSGBOX_DEFAULT
# 93 "data/maps/PetalburgWoods/scripts.pory"
	giveitem ITEM_GREAT_BALL
# 94 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, PetalburgWoods_EventScript_BagFull
# 95 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_DevonResearcherFinish
# 96 "data/maps/PetalburgWoods/scripts.pory"
	end
# 97 "data/maps/PetalburgWoods/scripts.pory"

# 98 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_BagFull::
# 99 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YoureLoadedWithItems, MSGBOX_DEFAULT
# 100 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_DevonResearcherFinish
# 101 "data/maps/PetalburgWoods/scripts.pory"
	end
# 102 "data/maps/PetalburgWoods/scripts.pory"

# 103 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherFinish::
# 104 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TeamAquaAfterSomethingInRustboro, MSGBOX_DEFAULT
# 105 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherStartExit
# 106 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 107 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_ICantBeWastingTime, MSGBOX_DEFAULT
# 108 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 109 "data/maps/PetalburgWoods/scripts.pory"
	return
# 110 "data/maps/PetalburgWoods/scripts.pory"

# 111 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_RemoveDevonResearcher::
# 112 "data/maps/PetalburgWoods/scripts.pory"
	removeobject LOCALID_DEVON_EMPLOYEE
# 113 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_PETALBURG_WOODS_STATE, 1
# 114 "data/maps/PetalburgWoods/scripts.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 115 "data/maps/PetalburgWoods/scripts.pory"
	releaseall
# 116 "data/maps/PetalburgWoods/scripts.pory"
	end
# 117 "data/maps/PetalburgWoods/scripts.pory"

# 118 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherLookAround:
# 119 "data/maps/PetalburgWoods/scripts.pory"
	face_up
# 120 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 121 "data/maps/PetalburgWoods/scripts.pory"
	delay_4
# 122 "data/maps/PetalburgWoods/scripts.pory"
	face_right
# 123 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 124 "data/maps/PetalburgWoods/scripts.pory"
	delay_8
# 125 "data/maps/PetalburgWoods/scripts.pory"
	face_left
# 126 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 127 "data/maps/PetalburgWoods/scripts.pory"
	delay_8
# 128 "data/maps/PetalburgWoods/scripts.pory"
	face_down
# 129 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 130 "data/maps/PetalburgWoods/scripts.pory"
	face_right
# 131 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 132 "data/maps/PetalburgWoods/scripts.pory"
	delay_8
# 133 "data/maps/PetalburgWoods/scripts.pory"
	face_up
# 134 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 135 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 136 "data/maps/PetalburgWoods/scripts.pory"

# 137 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherExitLeft:
# 138 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 139 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 140 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 141 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 142 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 143 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 144 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 145 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 146 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 147 "data/maps/PetalburgWoods/scripts.pory"

# 148 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherApproachPlayerLeft:
# 149 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 150 "data/maps/PetalburgWoods/scripts.pory"
	face_player
# 151 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 152 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 153 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 154 "data/maps/PetalburgWoods/scripts.pory"

# 155 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherApproachPlayerRight:
# 156 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 157 "data/maps/PetalburgWoods/scripts.pory"
	face_player
# 158 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 159 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 160 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 161 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_right
# 162 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 163 "data/maps/PetalburgWoods/scripts.pory"

# 164 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherExitRight:
# 165 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_left
# 166 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 167 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 168 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 169 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 170 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 171 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 172 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 173 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 174 "data/maps/PetalburgWoods/scripts.pory"

# 175 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_WatchResearcherLeave:
# 176 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 177 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 178 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_up
# 179 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 180 "data/maps/PetalburgWoods/scripts.pory"

# 181 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherFleeToPlayerLeft:
# 182 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 183 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 184 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 185 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_left
# 186 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_up
# 187 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 188 "data/maps/PetalburgWoods/scripts.pory"

# 189 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherFleeToPlayerRight:
# 190 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 191 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 192 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_up
# 193 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 194 "data/maps/PetalburgWoods/scripts.pory"

# 195 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherStartExit:
# 196 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_down
# 197 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 198 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 199 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 200 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 201 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 202 "data/maps/PetalburgWoods/scripts.pory"
	face_up
# 203 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 204 "data/maps/PetalburgWoods/scripts.pory"

# 205 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaApproachResearcherLeft:
# 206 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 207 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 208 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 209 "data/maps/PetalburgWoods/scripts.pory"

# 210 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaBackOff:
# 211 "data/maps/PetalburgWoods/scripts.pory"
	lock_facing_direction
# 212 "data/maps/PetalburgWoods/scripts.pory"
	walk_up
# 213 "data/maps/PetalburgWoods/scripts.pory"
	unlock_facing_direction
# 214 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 215 "data/maps/PetalburgWoods/scripts.pory"

# 216 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaRunAway:
# 217 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 218 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 219 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 220 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 221 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 222 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 223 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 224 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 225 "data/maps/PetalburgWoods/scripts.pory"

# 226 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaApproachResearcherRight:
# 227 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 228 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 229 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 230 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 231 "data/maps/PetalburgWoods/scripts.pory"

# 232 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaEntrance:
# 233 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 234 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 235 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 236 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 237 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 238 "data/maps/PetalburgWoods/scripts.pory"

# 239 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Boy1::
# 240 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_StayOutOfTallGrass, MSGBOX_NPC
# 241 "data/maps/PetalburgWoods/scripts.pory"
	end
# 242 "data/maps/PetalburgWoods/scripts.pory"

# 243 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Boy2::
# 244 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HiddenItemsExplanation, MSGBOX_NPC
# 245 "data/maps/PetalburgWoods/scripts.pory"
	end
# 246 "data/maps/PetalburgWoods/scripts.pory"

# 247 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Girl::
# 248 "data/maps/PetalburgWoods/scripts.pory"
	lock
# 249 "data/maps/PetalburgWoods/scripts.pory"
	faceplayer
# 250 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_set FLAG_RECEIVED_SITRUS_BERRY, PetalburgWoods_EventScript_ExplainSitrusBerry
# 251 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TryUsingThisItem, MSGBOX_DEFAULT
# 252 "data/maps/PetalburgWoods/scripts.pory"
	giveitem ITEM_SITRUS_BERRY
# 253 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 254 "data/maps/PetalburgWoods/scripts.pory"
	setflag FLAG_RECEIVED_SITRUS_BERRY
# 255 "data/maps/PetalburgWoods/scripts.pory"
	release
# 256 "data/maps/PetalburgWoods/scripts.pory"
	end
# 257 "data/maps/PetalburgWoods/scripts.pory"

# 258 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_ExplainSitrusBerry::
# 259 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_SitrusBerryExplanation, MSGBOX_DEFAULT
# 260 "data/maps/PetalburgWoods/scripts.pory"
	release
# 261 "data/maps/PetalburgWoods/scripts.pory"
	end
# 262 "data/maps/PetalburgWoods/scripts.pory"

# 263 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Sign1::
# 264 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TrainerTipsExperience, MSGBOX_SIGN
# 265 "data/maps/PetalburgWoods/scripts.pory"
	end
# 266 "data/maps/PetalburgWoods/scripts.pory"

# 267 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Sign2::
# 268 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TrainerTipsPP, MSGBOX_SIGN
# 269 "data/maps/PetalburgWoods/scripts.pory"
	end
# 270 "data/maps/PetalburgWoods/scripts.pory"

# 271 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Lyle::
# 272 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_single TRAINER_LYLE, PetalburgWoods_Text_GoBugPokemonTeam, PetalburgWoods_Text_ICouldntWin
# 273 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_ImOutOfPokeBalls, MSGBOX_AUTOCLOSE
# 274 "data/maps/PetalburgWoods/scripts.pory"
	end
# 275 "data/maps/PetalburgWoods/scripts.pory"

# 276 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_James::
# 277 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_single TRAINER_JAMES_1, PetalburgWoods_Text_InstantlyPopularWithBugPokemon, PetalburgWoods_Text_CantBePopularIfILose, PetalburgWoods_EventScript_TryRegisterJames
# 278 "data/maps/PetalburgWoods/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 279 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, PetalburgWoods_EventScript_JamesRematch
# 280 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_0x8004, TRAINER_JAMES_1
# 281 "data/maps/PetalburgWoods/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 282 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, PetalburgWoods_EventScript_TryRegisterJames2
# 283 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_PeopleRespectYou, MSGBOX_DEFAULT
# 284 "data/maps/PetalburgWoods/scripts.pory"
	release
# 285 "data/maps/PetalburgWoods/scripts.pory"
	end
# 286 "data/maps/PetalburgWoods/scripts.pory"

# 287 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_TryRegisterJames::
# 288 "data/maps/PetalburgWoods/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 289 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 290 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, PetalburgWoods_EventScript_RegisterJames
# 291 "data/maps/PetalburgWoods/scripts.pory"
	release
# 292 "data/maps/PetalburgWoods/scripts.pory"
	end
# 293 "data/maps/PetalburgWoods/scripts.pory"

# 294 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_RegisterJames::
# 295 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWantRematch1, MSGBOX_DEFAULT
# 296 "data/maps/PetalburgWoods/scripts.pory"
	register_matchcall TRAINER_JAMES_1
# 297 "data/maps/PetalburgWoods/scripts.pory"
	release
# 298 "data/maps/PetalburgWoods/scripts.pory"
	end
# 299 "data/maps/PetalburgWoods/scripts.pory"

# 300 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_TryRegisterJames2::
# 301 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, PetalburgWoods_EventScript_RegisterJames2
# 302 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_PeopleRespectYou, MSGBOX_DEFAULT
# 303 "data/maps/PetalburgWoods/scripts.pory"
	release
# 304 "data/maps/PetalburgWoods/scripts.pory"
	end
# 305 "data/maps/PetalburgWoods/scripts.pory"

# 306 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_RegisterJames2::
# 307 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWantRematch2, MSGBOX_DEFAULT
# 308 "data/maps/PetalburgWoods/scripts.pory"
	register_matchcall TRAINER_JAMES_1
# 309 "data/maps/PetalburgWoods/scripts.pory"
	release
# 310 "data/maps/PetalburgWoods/scripts.pory"
	end
# 311 "data/maps/PetalburgWoods/scripts.pory"

# 312 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_JamesRematch::
# 313 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_rematch TRAINER_JAMES_1, PetalburgWoods_Text_MyPokemonHaveGrown, PetalburgWoods_Text_CantBePopularIfLose
# 314 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IveBeenTrainingHard, MSGBOX_AUTOCLOSE
# 315 "data/maps/PetalburgWoods/scripts.pory"
	end
# 316 "data/maps/PetalburgWoods/scripts.pory"

# 317 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_NotAOneToBeFound:
# 318 "data/maps/PetalburgWoods/scripts.pory"
	.string "Hmmm…\n"
# 319 "data/maps/PetalburgWoods/scripts.pory"
	.string "Not a one to be found…$"
# 320 "data/maps/PetalburgWoods/scripts.pory"

# 321 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_HaveYouSeenShroomish:
# 322 "data/maps/PetalburgWoods/scripts.pory"
	.string "Hello, have you seen any Pokémon\n"
# 323 "data/maps/PetalburgWoods/scripts.pory"
	.string "called Shroomish around here?\p"
# 324 "data/maps/PetalburgWoods/scripts.pory"
	.string "I really love that Pokémon.$"
# 325 "data/maps/PetalburgWoods/scripts.pory"

# 326 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_IWasGoingToAmbushYou:
# 327 "data/maps/PetalburgWoods/scripts.pory"
	.string "I was going to ambush you, but you\n"
# 328 "data/maps/PetalburgWoods/scripts.pory"
	.string "had to dawdle in Petalburg Woods\l"
# 329 "data/maps/PetalburgWoods/scripts.pory"
	.string "forever, didn't you?\p"
# 330 "data/maps/PetalburgWoods/scripts.pory"
	.string "I got sick of waiting, so here I am!$"
# 331 "data/maps/PetalburgWoods/scripts.pory"

# 332 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_HandOverThosePapers:
# 333 "data/maps/PetalburgWoods/scripts.pory"
	.string "You! Devon Researcher!\p"
# 334 "data/maps/PetalburgWoods/scripts.pory"
	.string "Hand over those papers!$"
# 335 "data/maps/PetalburgWoods/scripts.pory"

# 336 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_YouHaveToHelpMe:
# 337 "data/maps/PetalburgWoods/scripts.pory"
	.string "Aiyeeeh!\p"
# 338 "data/maps/PetalburgWoods/scripts.pory"
	.string "You're a Pokémon Trainer, aren't you?\n"
# 339 "data/maps/PetalburgWoods/scripts.pory"
	.string "You've got to help me, please!$"
# 340 "data/maps/PetalburgWoods/scripts.pory"

# 341 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_NoOneCrossesTeamAqua:
# 342 "data/maps/PetalburgWoods/scripts.pory"
	.string "Hunh? What do you think you're doing?\n"
# 343 "data/maps/PetalburgWoods/scripts.pory"
	.string "What, you're going to protect him?\p"
# 344 "data/maps/PetalburgWoods/scripts.pory"
	.string "No one who crosses Team Aqua\n"
# 345 "data/maps/PetalburgWoods/scripts.pory"
	.string "gets any mercy, not even a kid!\p"
# 346 "data/maps/PetalburgWoods/scripts.pory"
	.string "Come on and battle me!$"
# 347 "data/maps/PetalburgWoods/scripts.pory"

# 348 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_YoureKiddingMe:
# 349 "data/maps/PetalburgWoods/scripts.pory"
	.string "You're kidding me! You're tough!$"
# 350 "data/maps/PetalburgWoods/scripts.pory"

# 351 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_YouveGotSomeNerve:
# 352 "data/maps/PetalburgWoods/scripts.pory"
	.string "Grrr… You've got some nerve\n"
# 353 "data/maps/PetalburgWoods/scripts.pory"
	.string "meddling with Team Aqua!\l"
# 354 "data/maps/PetalburgWoods/scripts.pory"
	.string "Come on and battle me again!\p"
# 355 "data/maps/PetalburgWoods/scripts.pory"
	.string "I wish I could say that, but I'm out of\n"
# 356 "data/maps/PetalburgWoods/scripts.pory"
	.string "Pokémon…\p"
# 357 "data/maps/PetalburgWoods/scripts.pory"
	.string "And, hey, we of Team Aqua are also\n"
# 358 "data/maps/PetalburgWoods/scripts.pory"
	.string "after something in Rustboro.\p"
# 359 "data/maps/PetalburgWoods/scripts.pory"
	.string "I'll let you go today!$"
# 360 "data/maps/PetalburgWoods/scripts.pory"

# 361 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_ThatWasAwfullyClose:
# 362 "data/maps/PetalburgWoods/scripts.pory"
	.string "Whew…\n"
# 363 "data/maps/PetalburgWoods/scripts.pory"
	.string "That was awfully close!\p"
# 364 "data/maps/PetalburgWoods/scripts.pory"
	.string "Thanks to you, he didn't rob me of\n"
# 365 "data/maps/PetalburgWoods/scripts.pory"
	.string "these important papers.\p"
# 366 "data/maps/PetalburgWoods/scripts.pory"
	.string "I know, I'll give you a Great Ball as\n"
# 367 "data/maps/PetalburgWoods/scripts.pory"
	.string "my thanks!$"
# 368 "data/maps/PetalburgWoods/scripts.pory"

# 369 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_TeamAquaAfterSomethingInRustboro:
# 370 "data/maps/PetalburgWoods/scripts.pory"
	.string "Didn't that Team Aqua thug say\n"
# 371 "data/maps/PetalburgWoods/scripts.pory"
	.string "they were after something in\l"
# 372 "data/maps/PetalburgWoods/scripts.pory"
	.string "Rustboro, too?$"
# 373 "data/maps/PetalburgWoods/scripts.pory"

# 374 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_ICantBeWastingTime:
# 375 "data/maps/PetalburgWoods/scripts.pory"
	.string "Uh-oh! It's a crisis!\n"
# 376 "data/maps/PetalburgWoods/scripts.pory"
	.string "I can't be wasting time!$"
# 377 "data/maps/PetalburgWoods/scripts.pory"

# 378 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_YoureLoadedWithItems:
# 379 "data/maps/PetalburgWoods/scripts.pory"
	.string "You're loaded with items.\n"
# 380 "data/maps/PetalburgWoods/scripts.pory"
	.string "I can't give you this Great Ball.$"
# 381 "data/maps/PetalburgWoods/scripts.pory"

# 382 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_GoBugPokemonTeam:
# 383 "data/maps/PetalburgWoods/scripts.pory"
	.string "I caught a whole bunch of Pokémon!\p"
# 384 "data/maps/PetalburgWoods/scripts.pory"
	.string "Go, go, go!\n"
# 385 "data/maps/PetalburgWoods/scripts.pory"
	.string "My Bug Pokémon team!$"
# 386 "data/maps/PetalburgWoods/scripts.pory"

# 387 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_ICouldntWin:
# 388 "data/maps/PetalburgWoods/scripts.pory"
	.string "I have all these Pokémon,\n"
# 389 "data/maps/PetalburgWoods/scripts.pory"
	.string "but I couldn't win…$"
# 390 "data/maps/PetalburgWoods/scripts.pory"

# 391 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_ImOutOfPokeBalls:
# 392 "data/maps/PetalburgWoods/scripts.pory"
	.string "I caught a bunch of Pokémon.\n"
# 393 "data/maps/PetalburgWoods/scripts.pory"
	.string "Now I'm out of Poké Balls.$"
# 394 "data/maps/PetalburgWoods/scripts.pory"

# 395 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_InstantlyPopularWithBugPokemon:
# 396 "data/maps/PetalburgWoods/scripts.pory"
	.string "If you take Bug Pokémon to school,\n"
# 397 "data/maps/PetalburgWoods/scripts.pory"
	.string "you get to be instantly popular!$"
# 398 "data/maps/PetalburgWoods/scripts.pory"

# 399 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_CantBePopularIfILose:
# 400 "data/maps/PetalburgWoods/scripts.pory"
	.string "I can't be popular if I lose.$"
# 401 "data/maps/PetalburgWoods/scripts.pory"

# 402 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_PeopleRespectYou:
# 403 "data/maps/PetalburgWoods/scripts.pory"
	.string "If you have a big Bug Pokémon,\n"
# 404 "data/maps/PetalburgWoods/scripts.pory"
	.string "people respect you for it.$"
# 405 "data/maps/PetalburgWoods/scripts.pory"

# 406 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_IWantRematch1:
# 407 "data/maps/PetalburgWoods/scripts.pory"
	.string "I want a rematch when my Bug\n"
# 408 "data/maps/PetalburgWoods/scripts.pory"
	.string "Pokémon grow up!\p"
# 409 "data/maps/PetalburgWoods/scripts.pory"
	.string "I'm registering you in my Pokénav!$"
# 410 "data/maps/PetalburgWoods/scripts.pory"

# 411 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_IWantRematch2:
# 412 "data/maps/PetalburgWoods/scripts.pory"
	.string "I want a rematch when my Bug \n"
# 413 "data/maps/PetalburgWoods/scripts.pory"
	.string "Pokémon grow up!\p"
# 414 "data/maps/PetalburgWoods/scripts.pory"
	.string "I'm registering you in my Pokénav!$"
# 415 "data/maps/PetalburgWoods/scripts.pory"

# 416 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_MyPokemonHaveGrown:
# 417 "data/maps/PetalburgWoods/scripts.pory"
	.string "My Bug Pokémon have grown.\n"
# 418 "data/maps/PetalburgWoods/scripts.pory"
	.string "I'll be popular again.$"
# 419 "data/maps/PetalburgWoods/scripts.pory"

# 420 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_CantBePopularIfLose:
# 421 "data/maps/PetalburgWoods/scripts.pory"
	.string "I can't be popular if I lose.$"
# 422 "data/maps/PetalburgWoods/scripts.pory"

# 423 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_IveBeenTrainingHard:
# 424 "data/maps/PetalburgWoods/scripts.pory"
	.string "You get to be popular if you have\n"
# 425 "data/maps/PetalburgWoods/scripts.pory"
	.string "strong Pokémon, right?\l"
# 426 "data/maps/PetalburgWoods/scripts.pory"
	.string "So, I've been training hard.$"
# 427 "data/maps/PetalburgWoods/scripts.pory"

# 428 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_StayOutOfTallGrass:
# 429 "data/maps/PetalburgWoods/scripts.pory"
	.string "Yo, there!\n"
# 430 "data/maps/PetalburgWoods/scripts.pory"
	.string "Your Pokémon doing okay?\p"
# 431 "data/maps/PetalburgWoods/scripts.pory"
	.string "If your Pokémon are weak and you want\n"
# 432 "data/maps/PetalburgWoods/scripts.pory"
	.string "to avoid battles, you should stay out\l"
# 433 "data/maps/PetalburgWoods/scripts.pory"
	.string "of tall grass.$"
# 434 "data/maps/PetalburgWoods/scripts.pory"

# 435 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_HiddenItemsExplanation:
# 436 "data/maps/PetalburgWoods/scripts.pory"
	.string "Sometimes, there are things on the\n"
# 437 "data/maps/PetalburgWoods/scripts.pory"
	.string "ground even if you can't see them.\p"
# 438 "data/maps/PetalburgWoods/scripts.pory"
	.string "That's why I always check where I'm\n"
# 439 "data/maps/PetalburgWoods/scripts.pory"
	.string "walking.$"
# 440 "data/maps/PetalburgWoods/scripts.pory"

# 441 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_TryUsingThisItem:
# 442 "data/maps/PetalburgWoods/scripts.pory"
	.string "Oh, neat!\n"
# 443 "data/maps/PetalburgWoods/scripts.pory"
	.string "That's the Badge from Rustboro Gym!\p"
# 444 "data/maps/PetalburgWoods/scripts.pory"
	.string "You must be a Trainer.\n"
# 445 "data/maps/PetalburgWoods/scripts.pory"
	.string "You should try using this item.$"
# 446 "data/maps/PetalburgWoods/scripts.pory"

# 447 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_SitrusBerryExplanation:
# 448 "data/maps/PetalburgWoods/scripts.pory"
	.string "If a Pokémon holds that berry, its\n"
# 449 "data/maps/PetalburgWoods/scripts.pory"
	.string "HP will be restored if it drops\l"
# 450 "data/maps/PetalburgWoods/scripts.pory"
	.string "below half.$"
# 451 "data/maps/PetalburgWoods/scripts.pory"

# 452 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_TrainerTipsExperience:
# 453 "data/maps/PetalburgWoods/scripts.pory"
	.string "Trainer Tips\p"
# 454 "data/maps/PetalburgWoods/scripts.pory"
	.string "Any Pokémon that appears even once\n"
# 455 "data/maps/PetalburgWoods/scripts.pory"
	.string "in a battle is awarded Exp Points.\p"
# 456 "data/maps/PetalburgWoods/scripts.pory"
	.string "To raise a weak Pokémon, put it at the\n"
# 457 "data/maps/PetalburgWoods/scripts.pory"
	.string "left of the team list.\p"
# 458 "data/maps/PetalburgWoods/scripts.pory"
	.string "As soon as a battle starts, switch it\n"
# 459 "data/maps/PetalburgWoods/scripts.pory"
	.string "out. It will earn Exp Points without\l"
# 460 "data/maps/PetalburgWoods/scripts.pory"
	.string "being exposed to any harm.$"
# 461 "data/maps/PetalburgWoods/scripts.pory"

# 462 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_TrainerTipsPP:
# 463 "data/maps/PetalburgWoods/scripts.pory"
	.string "Trainer Tips\p"
# 464 "data/maps/PetalburgWoods/scripts.pory"
	.string "In addition to Hit Points (HP), Pokémon\n"
# 465 "data/maps/PetalburgWoods/scripts.pory"
	.string "have Power Points (PP) that are used to\l"
# 466 "data/maps/PetalburgWoods/scripts.pory"
	.string "make moves during battle.\p"
# 467 "data/maps/PetalburgWoods/scripts.pory"
	.string "If a Pokémon runs out of PP, it must be\n"
# 468 "data/maps/PetalburgWoods/scripts.pory"
	.string "taken to a Pokémon Center.$"

PetalburgWoods_MapScripts::
# 472 "data/maps/PetalburgWoods/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, PetalburgWoods_MapScripts_MAP_SCRIPT_ON_LOAD
# 486 "data/maps/PetalburgWoods/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PetalburgWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

PetalburgWoods_MapScripts_MAP_SCRIPT_ON_LOAD:
# 473 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, PetalburgWoods_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

PetalburgWoods_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 474 "data/maps/PetalburgWoods/scripts.pory"
	setmetatile 40, 27, METATILE_General_TallGrass, FALSE
# 475 "data/maps/PetalburgWoods/scripts.pory"
	setmetatile 41, 27, METATILE_General_TallGrass, FALSE
# 476 "data/maps/PetalburgWoods/scripts.pory"
	setmetatile 40, 28, METATILE_General_Grass, FALSE
# 477 "data/maps/PetalburgWoods/scripts.pory"
	setmetatile 41, 28, METATILE_General_Grass, FALSE
# 478 "data/maps/PetalburgWoods/scripts.pory"
	setmetatile 40, 29, METATILE_General_Grass, FALSE
# 479 "data/maps/PetalburgWoods/scripts.pory"
	setmetatile 41, 29, METATILE_General_Grass, FALSE
# 480 "data/maps/PetalburgWoods/scripts.pory"
	setmetatile 40, 30, METATILE_General_Grass, FALSE
# 481 "data/maps/PetalburgWoods/scripts.pory"
	setmetatile 41, 30, METATILE_General_Grass, FALSE
# 482 "data/maps/PetalburgWoods/scripts.pory"
	setmetatile 40, 31, METATILE_General_Grass, FALSE
# 483 "data/maps/PetalburgWoods/scripts.pory"
	setmetatile 41, 31, METATILE_General_Grass, FALSE
	return

PetalburgWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 487 "data/maps/PetalburgWoods/scripts.pory"
	setflag FLAG_TEMP_1
# 488 "data/maps/PetalburgWoods/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 2
	goto_if_eq PetalburgWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

PetalburgWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 489 "data/maps/PetalburgWoods/scripts.pory"
	clearflag FLAG_TEMP_1
	return

