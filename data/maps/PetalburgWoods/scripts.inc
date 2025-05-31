# 1 "data/maps/PetalburgWoods/scripts.pory"

# 2 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherLeft::
# 3 "data/maps/PetalburgWoods/scripts.pory"
	lockall
# 4 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherIntro
# 5 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherApproachPlayerLeft
# 6 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 7 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HaveYouSeenShroomish, MSGBOX_DEFAULT
# 8 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 9 "data/maps/PetalburgWoods/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 10 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_Movement_AquaEntrance
# 11 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 12 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWasGoingToAmbushYou, MSGBOX_DEFAULT
# 13 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 14 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_Movement_AquaApproachResearcherLeft
# 15 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 16 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterUp
# 17 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 18 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HandOverThosePapers, MSGBOX_DEFAULT
# 19 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 20 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherFleeToPlayerLeft
# 21 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 22 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YouHaveToHelpMe, MSGBOX_DEFAULT
# 23 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 24 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, Common_Movement_WalkDown
# 25 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 26 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_NoOneCrossesTeamAqua, MSGBOX_DEFAULT
# 27 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_PETALBURG_WOODS, PetalburgWoods_Text_YoureKiddingMe
# 28 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_Movement_AquaBackOff
# 29 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 30 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherPostBattle
# 31 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgWoods_Movement_WatchResearcherLeave
# 32 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherExitLeft
# 33 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 34 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_RemoveDevonResearcher
# 35 "data/maps/PetalburgWoods/scripts.pory"
	end
# 36 "data/maps/PetalburgWoods/scripts.pory"

# 37 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherRight::
# 38 "data/maps/PetalburgWoods/scripts.pory"
	lockall
# 39 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherIntro
# 40 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherApproachPlayerRight
# 41 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 42 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 43 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 44 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HaveYouSeenShroomish, MSGBOX_DEFAULT
# 45 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 46 "data/maps/PetalburgWoods/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 47 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_Movement_AquaEntrance
# 48 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 49 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWasGoingToAmbushYou, MSGBOX_DEFAULT
# 50 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 51 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_Movement_AquaApproachResearcherRight
# 52 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 53 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterUp
# 54 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 55 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HandOverThosePapers, MSGBOX_DEFAULT
# 56 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 57 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherFleeToPlayerRight
# 58 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 59 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YouHaveToHelpMe, MSGBOX_DEFAULT
# 60 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 61 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 62 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_NoOneCrossesTeamAqua, MSGBOX_DEFAULT
# 63 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_PETALBURG_WOODS, PetalburgWoods_Text_YoureKiddingMe
# 64 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_Movement_AquaBackOff
# 65 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 66 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherPostBattle
# 67 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgWoods_Movement_WatchResearcherLeave
# 68 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherExitRight
# 69 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 70 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_RemoveDevonResearcher
# 71 "data/maps/PetalburgWoods/scripts.pory"
	end
# 72 "data/maps/PetalburgWoods/scripts.pory"

# 73 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherIntro::
# 74 "data/maps/PetalburgWoods/scripts.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 75 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherLookAround
# 76 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 77 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_NotAOneToBeFound, MSGBOX_DEFAULT
# 78 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 79 "data/maps/PetalburgWoods/scripts.pory"
	return
# 80 "data/maps/PetalburgWoods/scripts.pory"

# 81 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherPostBattle::
# 82 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YouveGotSomeNerve, MSGBOX_DEFAULT
# 83 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 84 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_Movement_AquaRunAway
# 85 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 86 "data/maps/PetalburgWoods/scripts.pory"
	removeobject LOCALID_PETALBURG_WOODS_GRUNT
# 87 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 88 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 89 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_ThatWasAwfullyClose, MSGBOX_DEFAULT
# 90 "data/maps/PetalburgWoods/scripts.pory"
	giveitem ITEM_GREAT_BALL
# 91 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, PetalburgWoods_EventScript_BagFull
# 92 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_DevonResearcherFinish
# 93 "data/maps/PetalburgWoods/scripts.pory"
	end
# 94 "data/maps/PetalburgWoods/scripts.pory"

# 95 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_BagFull::
# 96 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YoureLoadedWithItems, MSGBOX_DEFAULT
# 97 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_DevonResearcherFinish
# 98 "data/maps/PetalburgWoods/scripts.pory"
	end
# 99 "data/maps/PetalburgWoods/scripts.pory"

# 100 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherFinish::
# 101 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TeamAquaAfterSomethingInRustboro, MSGBOX_DEFAULT
# 102 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherStartExit
# 103 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 104 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_ICantBeWastingTime, MSGBOX_DEFAULT
# 105 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 106 "data/maps/PetalburgWoods/scripts.pory"
	return
# 107 "data/maps/PetalburgWoods/scripts.pory"

# 108 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_RemoveDevonResearcher::
# 109 "data/maps/PetalburgWoods/scripts.pory"
	removeobject LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE
# 110 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_PETALBURG_WOODS_STATE, 1
# 111 "data/maps/PetalburgWoods/scripts.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 112 "data/maps/PetalburgWoods/scripts.pory"
	releaseall
# 113 "data/maps/PetalburgWoods/scripts.pory"
	end
# 114 "data/maps/PetalburgWoods/scripts.pory"

# 115 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherLookAround:
# 116 "data/maps/PetalburgWoods/scripts.pory"
	face_up
# 117 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 118 "data/maps/PetalburgWoods/scripts.pory"
	delay_4
# 119 "data/maps/PetalburgWoods/scripts.pory"
	face_right
# 120 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 121 "data/maps/PetalburgWoods/scripts.pory"
	delay_8
# 122 "data/maps/PetalburgWoods/scripts.pory"
	face_left
# 123 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 124 "data/maps/PetalburgWoods/scripts.pory"
	delay_8
# 125 "data/maps/PetalburgWoods/scripts.pory"
	face_down
# 126 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 127 "data/maps/PetalburgWoods/scripts.pory"
	face_right
# 128 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 129 "data/maps/PetalburgWoods/scripts.pory"
	delay_8
# 130 "data/maps/PetalburgWoods/scripts.pory"
	face_up
# 131 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 132 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 133 "data/maps/PetalburgWoods/scripts.pory"

# 134 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherExitLeft:
# 135 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 136 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 137 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 138 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 139 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 140 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 141 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 142 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 143 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 144 "data/maps/PetalburgWoods/scripts.pory"

# 145 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherApproachPlayerLeft:
# 146 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 147 "data/maps/PetalburgWoods/scripts.pory"
	face_player
# 148 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 149 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 150 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 151 "data/maps/PetalburgWoods/scripts.pory"

# 152 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherApproachPlayerRight:
# 153 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 154 "data/maps/PetalburgWoods/scripts.pory"
	face_player
# 155 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 156 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 157 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 158 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_right
# 159 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 160 "data/maps/PetalburgWoods/scripts.pory"

# 161 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherExitRight:
# 162 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_left
# 163 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 164 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 165 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 166 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 167 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 168 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 169 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 170 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 171 "data/maps/PetalburgWoods/scripts.pory"

# 172 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_WatchResearcherLeave:
# 173 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 174 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 175 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_up
# 176 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 177 "data/maps/PetalburgWoods/scripts.pory"

# 178 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherFleeToPlayerLeft:
# 179 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 180 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 181 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 182 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_left
# 183 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_up
# 184 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 185 "data/maps/PetalburgWoods/scripts.pory"

# 186 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherFleeToPlayerRight:
# 187 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 188 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 189 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_up
# 190 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 191 "data/maps/PetalburgWoods/scripts.pory"

# 192 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherStartExit:
# 193 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_down
# 194 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 195 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 196 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 197 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 198 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 199 "data/maps/PetalburgWoods/scripts.pory"
	face_up
# 200 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 201 "data/maps/PetalburgWoods/scripts.pory"

# 202 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaApproachResearcherLeft:
# 203 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 204 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 205 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 206 "data/maps/PetalburgWoods/scripts.pory"

# 207 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaBackOff:
# 208 "data/maps/PetalburgWoods/scripts.pory"
	lock_facing_direction
# 209 "data/maps/PetalburgWoods/scripts.pory"
	walk_up
# 210 "data/maps/PetalburgWoods/scripts.pory"
	unlock_facing_direction
# 211 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 212 "data/maps/PetalburgWoods/scripts.pory"

# 213 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaRunAway:
# 214 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 215 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 216 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 217 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 218 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 219 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 220 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 221 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 222 "data/maps/PetalburgWoods/scripts.pory"

# 223 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaApproachResearcherRight:
# 224 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 225 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 226 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 227 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 228 "data/maps/PetalburgWoods/scripts.pory"

# 229 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaEntrance:
# 230 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 231 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 232 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 233 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 234 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 235 "data/maps/PetalburgWoods/scripts.pory"

# 236 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Boy1::
# 237 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_StayOutOfTallGrass, MSGBOX_NPC
# 238 "data/maps/PetalburgWoods/scripts.pory"
	end
# 239 "data/maps/PetalburgWoods/scripts.pory"

# 240 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Boy2::
# 241 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HiddenItemsExplanation, MSGBOX_NPC
# 242 "data/maps/PetalburgWoods/scripts.pory"
	end
# 243 "data/maps/PetalburgWoods/scripts.pory"

# 244 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Girl::
# 245 "data/maps/PetalburgWoods/scripts.pory"
	lock
# 246 "data/maps/PetalburgWoods/scripts.pory"
	faceplayer
# 247 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_set FLAG_RECEIVED_SITRUS_BERRY, PetalburgWoods_EventScript_ExplainSitrusBerry
# 248 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TryUsingThisItem, MSGBOX_DEFAULT
# 249 "data/maps/PetalburgWoods/scripts.pory"
	giveitem ITEM_SITRUS_BERRY
# 250 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 251 "data/maps/PetalburgWoods/scripts.pory"
	setflag FLAG_RECEIVED_SITRUS_BERRY
# 252 "data/maps/PetalburgWoods/scripts.pory"
	release
# 253 "data/maps/PetalburgWoods/scripts.pory"
	end
# 254 "data/maps/PetalburgWoods/scripts.pory"

# 255 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_ExplainSitrusBerry::
# 256 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_SitrusBerryExplanation, MSGBOX_DEFAULT
# 257 "data/maps/PetalburgWoods/scripts.pory"
	release
# 258 "data/maps/PetalburgWoods/scripts.pory"
	end
# 259 "data/maps/PetalburgWoods/scripts.pory"

# 260 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Sign1::
# 261 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TrainerTipsExperience, MSGBOX_SIGN
# 262 "data/maps/PetalburgWoods/scripts.pory"
	end
# 263 "data/maps/PetalburgWoods/scripts.pory"

# 264 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Sign2::
# 265 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TrainerTipsPP, MSGBOX_SIGN
# 266 "data/maps/PetalburgWoods/scripts.pory"
	end
# 267 "data/maps/PetalburgWoods/scripts.pory"

# 268 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Lyle::
# 269 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_single TRAINER_LYLE, PetalburgWoods_Text_GoBugPokemonTeam, PetalburgWoods_Text_ICouldntWin
# 270 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_ImOutOfPokeBalls, MSGBOX_AUTOCLOSE
# 271 "data/maps/PetalburgWoods/scripts.pory"
	end
# 272 "data/maps/PetalburgWoods/scripts.pory"

# 273 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_James::
# 274 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_single TRAINER_JAMES_1, PetalburgWoods_Text_InstantlyPopularWithBugPokemon, PetalburgWoods_Text_CantBePopularIfILose, PetalburgWoods_EventScript_TryRegisterJames
# 275 "data/maps/PetalburgWoods/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 276 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, PetalburgWoods_EventScript_JamesRematch
# 277 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_0x8004, TRAINER_JAMES_1
# 278 "data/maps/PetalburgWoods/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 279 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, PetalburgWoods_EventScript_TryRegisterJames2
# 280 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_PeopleRespectYou, MSGBOX_DEFAULT
# 281 "data/maps/PetalburgWoods/scripts.pory"
	release
# 282 "data/maps/PetalburgWoods/scripts.pory"
	end
# 283 "data/maps/PetalburgWoods/scripts.pory"

# 284 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_TryRegisterJames::
# 285 "data/maps/PetalburgWoods/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 286 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 287 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, PetalburgWoods_EventScript_RegisterJames
# 288 "data/maps/PetalburgWoods/scripts.pory"
	release
# 289 "data/maps/PetalburgWoods/scripts.pory"
	end
# 290 "data/maps/PetalburgWoods/scripts.pory"

# 291 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_RegisterJames::
# 292 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWantRematch1, MSGBOX_DEFAULT
# 293 "data/maps/PetalburgWoods/scripts.pory"
	register_matchcall TRAINER_JAMES_1
# 294 "data/maps/PetalburgWoods/scripts.pory"
	release
# 295 "data/maps/PetalburgWoods/scripts.pory"
	end
# 296 "data/maps/PetalburgWoods/scripts.pory"

# 297 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_TryRegisterJames2::
# 298 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, PetalburgWoods_EventScript_RegisterJames2
# 299 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_PeopleRespectYou, MSGBOX_DEFAULT
# 300 "data/maps/PetalburgWoods/scripts.pory"
	release
# 301 "data/maps/PetalburgWoods/scripts.pory"
	end
# 302 "data/maps/PetalburgWoods/scripts.pory"

# 303 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_RegisterJames2::
# 304 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWantRematch2, MSGBOX_DEFAULT
# 305 "data/maps/PetalburgWoods/scripts.pory"
	register_matchcall TRAINER_JAMES_1
# 306 "data/maps/PetalburgWoods/scripts.pory"
	release
# 307 "data/maps/PetalburgWoods/scripts.pory"
	end
# 308 "data/maps/PetalburgWoods/scripts.pory"

# 309 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_JamesRematch::
# 310 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_rematch TRAINER_JAMES_1, PetalburgWoods_Text_MyPokemonHaveGrown, PetalburgWoods_Text_CantBePopularIfLose
# 311 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IveBeenTrainingHard, MSGBOX_AUTOCLOSE
# 312 "data/maps/PetalburgWoods/scripts.pory"
	end
# 313 "data/maps/PetalburgWoods/scripts.pory"

# 314 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_NotAOneToBeFound:
# 315 "data/maps/PetalburgWoods/scripts.pory"
	.string "Hmmm…\n"
# 316 "data/maps/PetalburgWoods/scripts.pory"
	.string "Not a one to be found…$"
# 317 "data/maps/PetalburgWoods/scripts.pory"

# 318 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_HaveYouSeenShroomish:
# 319 "data/maps/PetalburgWoods/scripts.pory"
	.string "Hello, have you seen any Pokémon\n"
# 320 "data/maps/PetalburgWoods/scripts.pory"
	.string "called Shroomish around here?\p"
# 321 "data/maps/PetalburgWoods/scripts.pory"
	.string "I really love that Pokémon.$"
# 322 "data/maps/PetalburgWoods/scripts.pory"

# 323 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_IWasGoingToAmbushYou:
# 324 "data/maps/PetalburgWoods/scripts.pory"
	.string "I was going to ambush you, but you\n"
# 325 "data/maps/PetalburgWoods/scripts.pory"
	.string "had to dawdle in Petalburg Woods\l"
# 326 "data/maps/PetalburgWoods/scripts.pory"
	.string "forever, didn't you?\p"
# 327 "data/maps/PetalburgWoods/scripts.pory"
	.string "I got sick of waiting, so here I am!$"
# 328 "data/maps/PetalburgWoods/scripts.pory"

# 329 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_HandOverThosePapers:
# 330 "data/maps/PetalburgWoods/scripts.pory"
	.string "You! Devon Researcher!\p"
# 331 "data/maps/PetalburgWoods/scripts.pory"
	.string "Hand over those papers!$"
# 332 "data/maps/PetalburgWoods/scripts.pory"

# 333 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_YouHaveToHelpMe:
# 334 "data/maps/PetalburgWoods/scripts.pory"
	.string "Aiyeeeh!\p"
# 335 "data/maps/PetalburgWoods/scripts.pory"
	.string "You're a Pokémon Trainer, aren't you?\n"
# 336 "data/maps/PetalburgWoods/scripts.pory"
	.string "You've got to help me, please!$"
# 337 "data/maps/PetalburgWoods/scripts.pory"

# 338 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_NoOneCrossesTeamAqua:
# 339 "data/maps/PetalburgWoods/scripts.pory"
	.string "Hunh? What do you think you're doing?\n"
# 340 "data/maps/PetalburgWoods/scripts.pory"
	.string "What, you're going to protect him?\p"
# 341 "data/maps/PetalburgWoods/scripts.pory"
	.string "No one who crosses Team Aqua\n"
# 342 "data/maps/PetalburgWoods/scripts.pory"
	.string "gets any mercy, not even a kid!\p"
# 343 "data/maps/PetalburgWoods/scripts.pory"
	.string "Come on and battle me!$"
# 344 "data/maps/PetalburgWoods/scripts.pory"

# 345 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_YoureKiddingMe:
# 346 "data/maps/PetalburgWoods/scripts.pory"
	.string "You're kidding me! You're tough!$"
# 347 "data/maps/PetalburgWoods/scripts.pory"

# 348 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_YouveGotSomeNerve:
# 349 "data/maps/PetalburgWoods/scripts.pory"
	.string "Grrr… You've got some nerve\n"
# 350 "data/maps/PetalburgWoods/scripts.pory"
	.string "meddling with Team Aqua!\l"
# 351 "data/maps/PetalburgWoods/scripts.pory"
	.string "Come on and battle me again!\p"
# 352 "data/maps/PetalburgWoods/scripts.pory"
	.string "I wish I could say that, but I'm out of\n"
# 353 "data/maps/PetalburgWoods/scripts.pory"
	.string "Pokémon…\p"
# 354 "data/maps/PetalburgWoods/scripts.pory"
	.string "And, hey, we of Team Aqua are also\n"
# 355 "data/maps/PetalburgWoods/scripts.pory"
	.string "after something in Rustboro.\p"
# 356 "data/maps/PetalburgWoods/scripts.pory"
	.string "I'll let you go today!$"
# 357 "data/maps/PetalburgWoods/scripts.pory"

# 358 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_ThatWasAwfullyClose:
# 359 "data/maps/PetalburgWoods/scripts.pory"
	.string "Whew…\n"
# 360 "data/maps/PetalburgWoods/scripts.pory"
	.string "That was awfully close!\p"
# 361 "data/maps/PetalburgWoods/scripts.pory"
	.string "Thanks to you, he didn't rob me of\n"
# 362 "data/maps/PetalburgWoods/scripts.pory"
	.string "these important papers.\p"
# 363 "data/maps/PetalburgWoods/scripts.pory"
	.string "I know, I'll give you a Great Ball as\n"
# 364 "data/maps/PetalburgWoods/scripts.pory"
	.string "my thanks!$"
# 365 "data/maps/PetalburgWoods/scripts.pory"

# 366 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_TeamAquaAfterSomethingInRustboro:
# 367 "data/maps/PetalburgWoods/scripts.pory"
	.string "Didn't that Team Aqua thug say\n"
# 368 "data/maps/PetalburgWoods/scripts.pory"
	.string "they were after something in\l"
# 369 "data/maps/PetalburgWoods/scripts.pory"
	.string "Rustboro, too?$"
# 370 "data/maps/PetalburgWoods/scripts.pory"

# 371 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_ICantBeWastingTime:
# 372 "data/maps/PetalburgWoods/scripts.pory"
	.string "Uh-oh! It's a crisis!\n"
# 373 "data/maps/PetalburgWoods/scripts.pory"
	.string "I can't be wasting time!$"
# 374 "data/maps/PetalburgWoods/scripts.pory"

# 375 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_YoureLoadedWithItems:
# 376 "data/maps/PetalburgWoods/scripts.pory"
	.string "You're loaded with items.\n"
# 377 "data/maps/PetalburgWoods/scripts.pory"
	.string "I can't give you this Great Ball.$"
# 378 "data/maps/PetalburgWoods/scripts.pory"

# 379 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_GoBugPokemonTeam:
# 380 "data/maps/PetalburgWoods/scripts.pory"
	.string "I caught a whole bunch of Pokémon!\p"
# 381 "data/maps/PetalburgWoods/scripts.pory"
	.string "Go, go, go!\n"
# 382 "data/maps/PetalburgWoods/scripts.pory"
	.string "My Bug Pokémon team!$"
# 383 "data/maps/PetalburgWoods/scripts.pory"

# 384 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_ICouldntWin:
# 385 "data/maps/PetalburgWoods/scripts.pory"
	.string "I have all these Pokémon,\n"
# 386 "data/maps/PetalburgWoods/scripts.pory"
	.string "but I couldn't win…$"
# 387 "data/maps/PetalburgWoods/scripts.pory"

# 388 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_ImOutOfPokeBalls:
# 389 "data/maps/PetalburgWoods/scripts.pory"
	.string "I caught a bunch of Pokémon.\n"
# 390 "data/maps/PetalburgWoods/scripts.pory"
	.string "Now I'm out of Poké Balls.$"
# 391 "data/maps/PetalburgWoods/scripts.pory"

# 392 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_InstantlyPopularWithBugPokemon:
# 393 "data/maps/PetalburgWoods/scripts.pory"
	.string "If you take Bug Pokémon to school,\n"
# 394 "data/maps/PetalburgWoods/scripts.pory"
	.string "you get to be instantly popular!$"
# 395 "data/maps/PetalburgWoods/scripts.pory"

# 396 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_CantBePopularIfILose:
# 397 "data/maps/PetalburgWoods/scripts.pory"
	.string "I can't be popular if I lose.$"
# 398 "data/maps/PetalburgWoods/scripts.pory"

# 399 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_PeopleRespectYou:
# 400 "data/maps/PetalburgWoods/scripts.pory"
	.string "If you have a big Bug Pokémon,\n"
# 401 "data/maps/PetalburgWoods/scripts.pory"
	.string "people respect you for it.$"
# 402 "data/maps/PetalburgWoods/scripts.pory"

# 403 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_IWantRematch1:
# 404 "data/maps/PetalburgWoods/scripts.pory"
	.string "I want a rematch when my Bug\n"
# 405 "data/maps/PetalburgWoods/scripts.pory"
	.string "Pokémon grow up!\p"
# 406 "data/maps/PetalburgWoods/scripts.pory"
	.string "I'm registering you in my Pokénav!$"
# 407 "data/maps/PetalburgWoods/scripts.pory"

# 408 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_IWantRematch2:
# 409 "data/maps/PetalburgWoods/scripts.pory"
	.string "I want a rematch when my Bug \n"
# 410 "data/maps/PetalburgWoods/scripts.pory"
	.string "Pokémon grow up!\p"
# 411 "data/maps/PetalburgWoods/scripts.pory"
	.string "I'm registering you in my Pokénav!$"
# 412 "data/maps/PetalburgWoods/scripts.pory"

# 413 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_MyPokemonHaveGrown:
# 414 "data/maps/PetalburgWoods/scripts.pory"
	.string "My Bug Pokémon have grown.\n"
# 415 "data/maps/PetalburgWoods/scripts.pory"
	.string "I'll be popular again.$"
# 416 "data/maps/PetalburgWoods/scripts.pory"

# 417 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_CantBePopularIfLose:
# 418 "data/maps/PetalburgWoods/scripts.pory"
	.string "I can't be popular if I lose.$"
# 419 "data/maps/PetalburgWoods/scripts.pory"

# 420 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_IveBeenTrainingHard:
# 421 "data/maps/PetalburgWoods/scripts.pory"
	.string "You get to be popular if you have\n"
# 422 "data/maps/PetalburgWoods/scripts.pory"
	.string "strong Pokémon, right?\l"
# 423 "data/maps/PetalburgWoods/scripts.pory"
	.string "So, I've been training hard.$"
# 424 "data/maps/PetalburgWoods/scripts.pory"

# 425 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_StayOutOfTallGrass:
# 426 "data/maps/PetalburgWoods/scripts.pory"
	.string "Yo, there!\n"
# 427 "data/maps/PetalburgWoods/scripts.pory"
	.string "Your Pokémon doing okay?\p"
# 428 "data/maps/PetalburgWoods/scripts.pory"
	.string "If your Pokémon are weak and you want\n"
# 429 "data/maps/PetalburgWoods/scripts.pory"
	.string "to avoid battles, you should stay out\l"
# 430 "data/maps/PetalburgWoods/scripts.pory"
	.string "of tall grass.$"
# 431 "data/maps/PetalburgWoods/scripts.pory"

# 432 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_HiddenItemsExplanation:
# 433 "data/maps/PetalburgWoods/scripts.pory"
	.string "Sometimes, there are things on the\n"
# 434 "data/maps/PetalburgWoods/scripts.pory"
	.string "ground even if you can't see them.\p"
# 435 "data/maps/PetalburgWoods/scripts.pory"
	.string "That's why I always check where I'm\n"
# 436 "data/maps/PetalburgWoods/scripts.pory"
	.string "walking.$"
# 437 "data/maps/PetalburgWoods/scripts.pory"

# 438 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_TryUsingThisItem:
# 439 "data/maps/PetalburgWoods/scripts.pory"
	.string "Oh, neat!\n"
# 440 "data/maps/PetalburgWoods/scripts.pory"
	.string "That's the Badge from Rustboro Gym!\p"
# 441 "data/maps/PetalburgWoods/scripts.pory"
	.string "You must be a Trainer.\n"
# 442 "data/maps/PetalburgWoods/scripts.pory"
	.string "You should try using this item.$"
# 443 "data/maps/PetalburgWoods/scripts.pory"

# 444 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_SitrusBerryExplanation:
# 445 "data/maps/PetalburgWoods/scripts.pory"
	.string "If a Pokémon holds that berry, its\n"
# 446 "data/maps/PetalburgWoods/scripts.pory"
	.string "HP will be restored if it drops\l"
# 447 "data/maps/PetalburgWoods/scripts.pory"
	.string "below half.$"
# 448 "data/maps/PetalburgWoods/scripts.pory"

# 449 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_TrainerTipsExperience:
# 450 "data/maps/PetalburgWoods/scripts.pory"
	.string "Trainer Tips\p"
# 451 "data/maps/PetalburgWoods/scripts.pory"
	.string "Any Pokémon that appears even once\n"
# 452 "data/maps/PetalburgWoods/scripts.pory"
	.string "in a battle is awarded Exp Points.\p"
# 453 "data/maps/PetalburgWoods/scripts.pory"
	.string "To raise a weak Pokémon, put it at the\n"
# 454 "data/maps/PetalburgWoods/scripts.pory"
	.string "left of the team list.\p"
# 455 "data/maps/PetalburgWoods/scripts.pory"
	.string "As soon as a battle starts, switch it\n"
# 456 "data/maps/PetalburgWoods/scripts.pory"
	.string "out. It will earn Exp Points without\l"
# 457 "data/maps/PetalburgWoods/scripts.pory"
	.string "being exposed to any harm.$"
# 458 "data/maps/PetalburgWoods/scripts.pory"

# 459 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_TrainerTipsPP:
# 460 "data/maps/PetalburgWoods/scripts.pory"
	.string "Trainer Tips\p"
# 461 "data/maps/PetalburgWoods/scripts.pory"
	.string "In addition to Hit Points (HP), Pokémon\n"
# 462 "data/maps/PetalburgWoods/scripts.pory"
	.string "have Power Points (PP) that are used to\l"
# 463 "data/maps/PetalburgWoods/scripts.pory"
	.string "make moves during battle.\p"
# 464 "data/maps/PetalburgWoods/scripts.pory"
	.string "If a Pokémon runs out of PP, it must be\n"
# 465 "data/maps/PetalburgWoods/scripts.pory"
	.string "taken to a Pokémon Center.$"

PetalburgWoods_MapScripts::
# 469 "data/maps/PetalburgWoods/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, PetalburgWoods_MapScripts_MAP_SCRIPT_ON_LOAD
# 483 "data/maps/PetalburgWoods/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PetalburgWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

PetalburgWoods_MapScripts_MAP_SCRIPT_ON_LOAD:
# 470 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, PetalburgWoods_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

PetalburgWoods_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 471 "data/maps/PetalburgWoods/scripts.pory"
	setmetatile 40, 27, METATILE_General_TallGrass, FALSE
# 472 "data/maps/PetalburgWoods/scripts.pory"
	setmetatile 41, 27, METATILE_General_TallGrass, FALSE
# 473 "data/maps/PetalburgWoods/scripts.pory"
	setmetatile 40, 28, METATILE_General_Grass, FALSE
# 474 "data/maps/PetalburgWoods/scripts.pory"
	setmetatile 41, 28, METATILE_General_Grass, FALSE
# 475 "data/maps/PetalburgWoods/scripts.pory"
	setmetatile 40, 29, METATILE_General_Grass, FALSE
# 476 "data/maps/PetalburgWoods/scripts.pory"
	setmetatile 41, 29, METATILE_General_Grass, FALSE
# 477 "data/maps/PetalburgWoods/scripts.pory"
	setmetatile 40, 30, METATILE_General_Grass, FALSE
# 478 "data/maps/PetalburgWoods/scripts.pory"
	setmetatile 41, 30, METATILE_General_Grass, FALSE
# 479 "data/maps/PetalburgWoods/scripts.pory"
	setmetatile 40, 31, METATILE_General_Grass, FALSE
# 480 "data/maps/PetalburgWoods/scripts.pory"
	setmetatile 41, 31, METATILE_General_Grass, FALSE
	return

PetalburgWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 484 "data/maps/PetalburgWoods/scripts.pory"
	setflag FLAG_TEMP_1
# 485 "data/maps/PetalburgWoods/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 2
	goto_if_eq PetalburgWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

PetalburgWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 486 "data/maps/PetalburgWoods/scripts.pory"
	clearflag FLAG_TEMP_1
	return

