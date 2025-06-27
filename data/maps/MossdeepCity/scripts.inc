# 1 "data/maps/MossdeepCity/scripts.pory"

# 2 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_PokefanF::
# 3 "data/maps/MossdeepCity/scripts.pory"
	lock
# 4 "data/maps/MossdeepCity/scripts.pory"
	faceplayer
# 5 "data/maps/MossdeepCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM_DIVE, MossdeepCity_EventScript_PokefanFMagmaGone
# 6 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_SpaceCenterReceivedLetter, MSGBOX_DEFAULT
# 7 "data/maps/MossdeepCity/scripts.pory"
	release
# 8 "data/maps/MossdeepCity/scripts.pory"
	end
# 9 "data/maps/MossdeepCity/scripts.pory"

# 10 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_PokefanFMagmaGone::
# 11 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_SpaceCenterLaunchingRockets, MSGBOX_DEFAULT
# 12 "data/maps/MossdeepCity/scripts.pory"
	release
# 13 "data/maps/MossdeepCity/scripts.pory"
	end
# 14 "data/maps/MossdeepCity/scripts.pory"

# 15 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_Sailor::
# 16 "data/maps/MossdeepCity/scripts.pory"
	lock
# 17 "data/maps/MossdeepCity/scripts.pory"
	faceplayer
# 18 "data/maps/MossdeepCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM_DIVE, MossdeepCity_EventScript_SailorMagmaGone
# 19 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_MossdeepTargetedByMagma, MSGBOX_DEFAULT
# 20 "data/maps/MossdeepCity/scripts.pory"
	release
# 21 "data/maps/MossdeepCity/scripts.pory"
	end
# 22 "data/maps/MossdeepCity/scripts.pory"

# 23 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_SailorMagmaGone::
# 24 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_FeelReliefOnLand, MSGBOX_DEFAULT
# 25 "data/maps/MossdeepCity/scripts.pory"
	release
# 26 "data/maps/MossdeepCity/scripts.pory"
	end
# 27 "data/maps/MossdeepCity/scripts.pory"

# 28 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_NinjaBoy::
# 29 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_WailmerWatching, MSGBOX_NPC
# 30 "data/maps/MossdeepCity/scripts.pory"
	end
# 31 "data/maps/MossdeepCity/scripts.pory"

# 32 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_ExpertM::
# 33 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_LifeNeedsSeaToLive, MSGBOX_NPC
# 34 "data/maps/MossdeepCity/scripts.pory"
	end
# 35 "data/maps/MossdeepCity/scripts.pory"

# 36 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_Girl::
# 37 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_NiceIfWorldCoveredByFlowers, MSGBOX_NPC
# 38 "data/maps/MossdeepCity/scripts.pory"
	end
# 39 "data/maps/MossdeepCity/scripts.pory"

# 40 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_Woman::
# 41 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_SpecialSpaceCenterRock, MSGBOX_NPC
# 42 "data/maps/MossdeepCity/scripts.pory"
	end
# 43 "data/maps/MossdeepCity/scripts.pory"

# 44 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_GymSign::
# 45 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_GymSign, MSGBOX_SIGN
# 46 "data/maps/MossdeepCity/scripts.pory"
	end
# 47 "data/maps/MossdeepCity/scripts.pory"

# 48 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_CitySign::
# 49 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_CitySign, MSGBOX_SIGN
# 50 "data/maps/MossdeepCity/scripts.pory"
	end
# 51 "data/maps/MossdeepCity/scripts.pory"

# 52 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_SpaceCenterSign::
# 53 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_SpaceCenterSign, MSGBOX_SIGN
# 54 "data/maps/MossdeepCity/scripts.pory"
	end
# 55 "data/maps/MossdeepCity/scripts.pory"

# 56 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_VisitedMossdeep::
# 57 "data/maps/MossdeepCity/scripts.pory"
	setflag FLAG_VISITED_MOSSDEEP_CITY
# 58 "data/maps/MossdeepCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 59 "data/maps/MossdeepCity/scripts.pory"
	end
# 60 "data/maps/MossdeepCity/scripts.pory"

# 61 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_TeamMagmaEnterSpaceCenter::
# 62 "data/maps/MossdeepCity/scripts.pory"
	lockall
# 63 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_MOSSDEEP_MAXIE, MossdeepCity_Movement_MaxieGestureToSpaceCenter
# 64 "data/maps/MossdeepCity/scripts.pory"
	waitmovement 0
# 65 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_MOSSDEEP_GRUNT_1, MossdeepCity_Movement_GruntFaceSpaceCenter
# 66 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_MOSSDEEP_GRUNT_2, MossdeepCity_Movement_GruntFaceSpaceCenter
# 67 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_MOSSDEEP_GRUNT_3, MossdeepCity_Movement_GruntFaceSpaceCenter
# 68 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_MOSSDEEP_GRUNT_4, MossdeepCity_Movement_GruntFaceSpaceCenter
# 69 "data/maps/MossdeepCity/scripts.pory"
	waitmovement 0
# 70 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_MOSSDEEP_MAXIE, MossdeepCity_Movement_MaxieEnterSpaceCenter
# 71 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_MOSSDEEP_GRUNT_1, MossdeepCity_Movement_Grunt1EnterSpaceCenter
# 72 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_MOSSDEEP_GRUNT_2, MossdeepCity_Movement_Grunt2EnterSpaceCenter
# 73 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_MOSSDEEP_GRUNT_3, MossdeepCity_Movement_Grunt3EnterSpaceCenter
# 74 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_MOSSDEEP_GRUNT_4, MossdeepCity_Movement_Grunt4EnterSpaceCenter
# 75 "data/maps/MossdeepCity/scripts.pory"
	waitmovement 0
# 76 "data/maps/MossdeepCity/scripts.pory"
	removeobject LOCALID_MOSSDEEP_MAXIE
# 77 "data/maps/MossdeepCity/scripts.pory"
	removeobject LOCALID_MOSSDEEP_GRUNT_1
# 78 "data/maps/MossdeepCity/scripts.pory"
	removeobject LOCALID_MOSSDEEP_GRUNT_2
# 79 "data/maps/MossdeepCity/scripts.pory"
	removeobject LOCALID_MOSSDEEP_GRUNT_3
# 80 "data/maps/MossdeepCity/scripts.pory"
	removeobject LOCALID_MOSSDEEP_GRUNT_4
# 81 "data/maps/MossdeepCity/scripts.pory"
	delay 30
# 82 "data/maps/MossdeepCity/scripts.pory"
	setvar VAR_MOSSDEEP_CITY_STATE, 2
# 83 "data/maps/MossdeepCity/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_TEAM_MAGMA
# 84 "data/maps/MossdeepCity/scripts.pory"
	releaseall
# 85 "data/maps/MossdeepCity/scripts.pory"
	end
# 86 "data/maps/MossdeepCity/scripts.pory"

# 87 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_MaxieGestureToSpaceCenter:
# 88 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 89 "data/maps/MossdeepCity/scripts.pory"
	face_right
# 90 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 91 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 92 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 93 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 94 "data/maps/MossdeepCity/scripts.pory"
	face_left
# 95 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 96 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 97 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 98 "data/maps/MossdeepCity/scripts.pory"

# 99 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_GruntFaceSpaceCenter:
# 100 "data/maps/MossdeepCity/scripts.pory"
	face_right
# 101 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 102 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 103 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 104 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 105 "data/maps/MossdeepCity/scripts.pory"

# 106 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_MaxieEnterSpaceCenter:
# 107 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 108 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 109 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 110 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 111 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 112 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 113 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 114 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 115 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 116 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 117 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 118 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 119 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 120 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 121 "data/maps/MossdeepCity/scripts.pory"

# 122 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_Grunt1EnterSpaceCenter:
# 123 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 124 "data/maps/MossdeepCity/scripts.pory"
	delay_8
# 125 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 126 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 127 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 128 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 129 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 130 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 131 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 132 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 133 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 134 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 135 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 136 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 137 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 138 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 139 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 140 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 141 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 142 "data/maps/MossdeepCity/scripts.pory"

# 143 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_Grunt2EnterSpaceCenter:
# 144 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 145 "data/maps/MossdeepCity/scripts.pory"
	delay_8
# 146 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 147 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 148 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 149 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 150 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 151 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 152 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 153 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 154 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 155 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 156 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 157 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 158 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 159 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 160 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 161 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 162 "data/maps/MossdeepCity/scripts.pory"

# 163 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_Grunt3EnterSpaceCenter:
# 164 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 165 "data/maps/MossdeepCity/scripts.pory"
	delay_8
# 166 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 167 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 168 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 169 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 170 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 171 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 172 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 173 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 174 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 175 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 176 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 177 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 178 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 179 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 180 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 181 "data/maps/MossdeepCity/scripts.pory"

# 182 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_Grunt4EnterSpaceCenter:
# 183 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 184 "data/maps/MossdeepCity/scripts.pory"
	delay_8
# 185 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 186 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 187 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 188 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 189 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 190 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 191 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 192 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 193 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 194 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 195 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 196 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 197 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 198 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 199 "data/maps/MossdeepCity/scripts.pory"

# 200 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_Man::
# 201 "data/maps/MossdeepCity/scripts.pory"
	lock
# 202 "data/maps/MossdeepCity/scripts.pory"
	faceplayer
# 203 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_SurfExhilarating, MSGBOX_DEFAULT
# 204 "data/maps/MossdeepCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 205 "data/maps/MossdeepCity/scripts.pory"
	waitmovement 0
# 206 "data/maps/MossdeepCity/scripts.pory"
	release
# 207 "data/maps/MossdeepCity/scripts.pory"
	end
# 208 "data/maps/MossdeepCity/scripts.pory"

# 209 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_KingsRockBoy::
# 210 "data/maps/MossdeepCity/scripts.pory"
	lock
# 211 "data/maps/MossdeepCity/scripts.pory"
	faceplayer
# 212 "data/maps/MossdeepCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_KINGS_ROCK, MossdeepCity_EventScript_ReceivedKingsRock
# 213 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_WantKingsRockStevenGaveMe, MSGBOX_YESNO
# 214 "data/maps/MossdeepCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MossdeepCity_EventScript_DeclineKingsRock
# 215 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_YouCanKeepIt, MSGBOX_DEFAULT
# 216 "data/maps/MossdeepCity/scripts.pory"
	giveitem ITEM_KINGS_ROCK
# 217 "data/maps/MossdeepCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 218 "data/maps/MossdeepCity/scripts.pory"
	setflag FLAG_RECEIVED_KINGS_ROCK
# 219 "data/maps/MossdeepCity/scripts.pory"
	release
# 220 "data/maps/MossdeepCity/scripts.pory"
	end
# 221 "data/maps/MossdeepCity/scripts.pory"

# 222 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_ReceivedKingsRock::
# 223 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_StevensHouseOverThere, MSGBOX_DEFAULT
# 224 "data/maps/MossdeepCity/scripts.pory"
	release
# 225 "data/maps/MossdeepCity/scripts.pory"
	end
# 226 "data/maps/MossdeepCity/scripts.pory"

# 227 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_DeclineKingsRock::
# 228 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_WhatToDoWithWeirdRock, MSGBOX_DEFAULT
# 229 "data/maps/MossdeepCity/scripts.pory"
	release
# 230 "data/maps/MossdeepCity/scripts.pory"
	end
# 231 "data/maps/MossdeepCity/scripts.pory"

# 232 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_BlackBelt::
# 233 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_SootopolisNewGymLeader, MSGBOX_NPC
# 234 "data/maps/MossdeepCity/scripts.pory"
	end
# 235 "data/maps/MossdeepCity/scripts.pory"

# 236 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_Scott::
# 237 "data/maps/MossdeepCity/scripts.pory"
	lock
# 238 "data/maps/MossdeepCity/scripts.pory"
	faceplayer
# 239 "data/maps/MossdeepCity/scripts.pory"
	speakername (CommonText_Scott)
# 240 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_ScottSomethingWrongWithTown, MSGBOX_DEFAULT
# 241 "data/maps/MossdeepCity/scripts.pory"
	closemessage
# 242 "data/maps/MossdeepCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, MossdeepCity_EventScript_ScottExitNorth
# 243 "data/maps/MossdeepCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, MossdeepCity_EventScript_ScottExitEast
# 244 "data/maps/MossdeepCity/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 245 "data/maps/MossdeepCity/scripts.pory"
	removeobject LOCALID_MOSSDEEP_SCOTT
# 246 "data/maps/MossdeepCity/scripts.pory"
	release
# 247 "data/maps/MossdeepCity/scripts.pory"
	end
# 248 "data/maps/MossdeepCity/scripts.pory"

# 249 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_ScottExitNorth::
# 250 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_PLAYER, MossdeepCity_Movement_PlayerWatchScottExit
# 251 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_MOSSDEEP_SCOTT, Common_Movement_WalkLeft9
# 252 "data/maps/MossdeepCity/scripts.pory"
	waitmovement 0
# 253 "data/maps/MossdeepCity/scripts.pory"
	return
# 254 "data/maps/MossdeepCity/scripts.pory"

# 255 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_ScottExitEast::
# 256 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_PLAYER, MossdeepCity_Movement_PlayerWatchScottExit
# 257 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_MOSSDEEP_SCOTT, MossdeepCity_Movement_ScottExitEast
# 258 "data/maps/MossdeepCity/scripts.pory"
	waitmovement 0
# 259 "data/maps/MossdeepCity/scripts.pory"
	return
# 260 "data/maps/MossdeepCity/scripts.pory"

# 261 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_PlayerWatchScottExit:
# 262 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 263 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 264 "data/maps/MossdeepCity/scripts.pory"
	walk_in_place_faster_left
# 265 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 266 "data/maps/MossdeepCity/scripts.pory"

# 267 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_ScottExitEast:
# 268 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 269 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 270 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 271 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 272 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 273 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 274 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 275 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 276 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 277 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 278 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 279 "data/maps/MossdeepCity/scripts.pory"

# 280 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_WantKingsRockStevenGaveMe:
# 281 "data/maps/MossdeepCity/scripts.pory"
	.string "I got this from Steven, but I don't\n"
# 282 "data/maps/MossdeepCity/scripts.pory"
	.string "know what it's good for.\p"
# 283 "data/maps/MossdeepCity/scripts.pory"
	.string "I think it's called King's Rock.\n"
# 284 "data/maps/MossdeepCity/scripts.pory"
	.string "Do you want it?$"
# 285 "data/maps/MossdeepCity/scripts.pory"

# 286 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_YouCanKeepIt:
# 287 "data/maps/MossdeepCity/scripts.pory"
	.string "Why would you want it?\n"
# 288 "data/maps/MossdeepCity/scripts.pory"
	.string "You're weird.\p"
# 289 "data/maps/MossdeepCity/scripts.pory"
	.string "You can keep it, but keep it a secret\n"
# 290 "data/maps/MossdeepCity/scripts.pory"
	.string "from Steven.$"
# 291 "data/maps/MossdeepCity/scripts.pory"

# 292 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_StevensHouseOverThere:
# 293 "data/maps/MossdeepCity/scripts.pory"
	.string "Steven's house is right over there!$"
# 294 "data/maps/MossdeepCity/scripts.pory"

# 295 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_WhatToDoWithWeirdRock:
# 296 "data/maps/MossdeepCity/scripts.pory"
	.string "Yeah, you think so, too! What are you\n"
# 297 "data/maps/MossdeepCity/scripts.pory"
	.string "supposed to do with some weird rock?$"
# 298 "data/maps/MossdeepCity/scripts.pory"

# 299 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_WailmerWatching:
# 300 "data/maps/MossdeepCity/scripts.pory"
	.string "Around Mossdeep, you can see wild\n"
# 301 "data/maps/MossdeepCity/scripts.pory"
	.string "Wailmer.\p"
# 302 "data/maps/MossdeepCity/scripts.pory"
	.string "It's called, uh…\n"
# 303 "data/maps/MossdeepCity/scripts.pory"
	.string "What was it now…\p"
# 304 "data/maps/MossdeepCity/scripts.pory"
	.string "Wai, Wai, Wai…\p"
# 305 "data/maps/MossdeepCity/scripts.pory"
	.string "Wailmer watching!$"
# 306 "data/maps/MossdeepCity/scripts.pory"

# 307 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_SpaceCenterReceivedLetter:
# 308 "data/maps/MossdeepCity/scripts.pory"
	.string "The island's Space Center has been\n"
# 309 "data/maps/MossdeepCity/scripts.pory"
	.string "launching huge rockets.\p"
# 310 "data/maps/MossdeepCity/scripts.pory"
	.string "There's been some kind of an uproar\n"
# 311 "data/maps/MossdeepCity/scripts.pory"
	.string "over a letter they received recently.$"
# 312 "data/maps/MossdeepCity/scripts.pory"

# 313 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_SpaceCenterLaunchingRockets:
# 314 "data/maps/MossdeepCity/scripts.pory"
	.string "The island's Space Center has been\n"
# 315 "data/maps/MossdeepCity/scripts.pory"
	.string "launching huge rockets.$"
# 316 "data/maps/MossdeepCity/scripts.pory"

# 317 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_MossdeepTargetedByMagma:
# 318 "data/maps/MossdeepCity/scripts.pory"
	.string "I heard from a Sailor buddy that\n"
# 319 "data/maps/MossdeepCity/scripts.pory"
	.string "Team Aqua set up shop in Lilycove.\p"
# 320 "data/maps/MossdeepCity/scripts.pory"
	.string "I also heard that someone came along\n"
# 321 "data/maps/MossdeepCity/scripts.pory"
	.string "and wiped the floor with them!\p"
# 322 "data/maps/MossdeepCity/scripts.pory"
	.string "But Mossdeep here's been targeted\n"
# 323 "data/maps/MossdeepCity/scripts.pory"
	.string "by that Team Magma.\p"
# 324 "data/maps/MossdeepCity/scripts.pory"
	.string "If you want to know what they're up to,\n"
# 325 "data/maps/MossdeepCity/scripts.pory"
	.string "go visit the Space Center.$"
# 326 "data/maps/MossdeepCity/scripts.pory"

# 327 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_FeelReliefOnLand:
# 328 "data/maps/MossdeepCity/scripts.pory"
	.string "I'm a Sailor, so the sea's obviously\n"
# 329 "data/maps/MossdeepCity/scripts.pory"
	.string "more important to me.\p"
# 330 "data/maps/MossdeepCity/scripts.pory"
	.string "But you know? When I get back on land\n"
# 331 "data/maps/MossdeepCity/scripts.pory"
	.string "after a long voyage, I do feel relief!$"
# 332 "data/maps/MossdeepCity/scripts.pory"

# 333 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_NiceIfWorldCoveredByFlowers:
# 334 "data/maps/MossdeepCity/scripts.pory"
	.string "Wouldn't it be nice?\p"
# 335 "data/maps/MossdeepCity/scripts.pory"
	.string "If the whole world was covered in\n"
# 336 "data/maps/MossdeepCity/scripts.pory"
	.string "plants and flowers like this island?$"
# 337 "data/maps/MossdeepCity/scripts.pory"

# 338 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_LifeNeedsSeaToLive:
# 339 "data/maps/MossdeepCity/scripts.pory"
	.string "All life needs the sea to live, even\n"
# 340 "data/maps/MossdeepCity/scripts.pory"
	.string "though it makes its home on the land.\p"
# 341 "data/maps/MossdeepCity/scripts.pory"
	.string "Life, having run its course, becomes\n"
# 342 "data/maps/MossdeepCity/scripts.pory"
	.string "soil and returns to the land.\p"
# 343 "data/maps/MossdeepCity/scripts.pory"
	.string "And the sea is always connected to\n"
# 344 "data/maps/MossdeepCity/scripts.pory"
	.string "the land.\p"
# 345 "data/maps/MossdeepCity/scripts.pory"
	.string "Yes, like the very shoreline here.$"
# 346 "data/maps/MossdeepCity/scripts.pory"

# 347 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_SurfExhilarating:
# 348 "data/maps/MossdeepCity/scripts.pory"
	.string "A voyage on a ship is fine.\p"
# 349 "data/maps/MossdeepCity/scripts.pory"
	.string "But crossing the sea with Pokémon\n"
# 350 "data/maps/MossdeepCity/scripts.pory"
	.string "using Surf…\p"
# 351 "data/maps/MossdeepCity/scripts.pory"
	.string "Now that's an exhilarating trip!\n"
# 352 "data/maps/MossdeepCity/scripts.pory"
	.string "Wouldn't you agree, youngster?$"
# 353 "data/maps/MossdeepCity/scripts.pory"

# 354 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_SpecialSpaceCenterRock:
# 355 "data/maps/MossdeepCity/scripts.pory"
	.string "This rock has a special meaning to\n"
# 356 "data/maps/MossdeepCity/scripts.pory"
	.string "the people at the Space Center.\p"
# 357 "data/maps/MossdeepCity/scripts.pory"
	.string "They put it here as their wish for\n"
# 358 "data/maps/MossdeepCity/scripts.pory"
	.string "their rockets to fly safely.\p"
# 359 "data/maps/MossdeepCity/scripts.pory"
	.string "When you make a wish, what do you use?\n"
# 360 "data/maps/MossdeepCity/scripts.pory"
	.string "Do you wish upon a star?\p"
# 361 "data/maps/MossdeepCity/scripts.pory"
	.string "I use a Wish Tag to make it happen.\n"
# 362 "data/maps/MossdeepCity/scripts.pory"
	.string "That's what I do.$"
# 363 "data/maps/MossdeepCity/scripts.pory"

# 364 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_GymSign:
# 365 "data/maps/MossdeepCity/scripts.pory"
	.string "Mossdeep City Pokémon Gym\n"
# 366 "data/maps/MossdeepCity/scripts.pory"
	.string "Leaders: Liza & Tate\p"
# 367 "data/maps/MossdeepCity/scripts.pory"
	.string "“The mystic combination!”$"
# 368 "data/maps/MossdeepCity/scripts.pory"

# 369 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_CitySign:
# 370 "data/maps/MossdeepCity/scripts.pory"
	.string "Mossdeep City\n"
# 371 "data/maps/MossdeepCity/scripts.pory"
	.string "“Our slogan: Cherish Pokémon!”$"
# 372 "data/maps/MossdeepCity/scripts.pory"

# 373 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_SpaceCenterSign:
# 374 "data/maps/MossdeepCity/scripts.pory"
	.string "Mossdeep Space Center\n"
# 375 "data/maps/MossdeepCity/scripts.pory"
	.string "“The closest place to space.”$"
# 376 "data/maps/MossdeepCity/scripts.pory"

# 377 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_ScottSomethingWrongWithTown:
# 378 "data/maps/MossdeepCity/scripts.pory"
	.string "{PLAYER}{KUN}, feeling good?\n"
# 379 "data/maps/MossdeepCity/scripts.pory"
	.string "I'm doing great!\p"
# 380 "data/maps/MossdeepCity/scripts.pory"
	.string "I'd heard Mossdeep's Gym Leader is\n"
# 381 "data/maps/MossdeepCity/scripts.pory"
	.string "pretty strong, so I decided to come\l"
# 382 "data/maps/MossdeepCity/scripts.pory"
	.string "take a look-see for myself.\p"
# 383 "data/maps/MossdeepCity/scripts.pory"
	.string "But there's something wrong about\n"
# 384 "data/maps/MossdeepCity/scripts.pory"
	.string "this town.\p"
# 385 "data/maps/MossdeepCity/scripts.pory"
	.string "People are going on about a warning\n"
# 386 "data/maps/MossdeepCity/scripts.pory"
	.string "letter and the Space Center…\p"
# 387 "data/maps/MossdeepCity/scripts.pory"
	.string "I don't think it concerns me in any\n"
# 388 "data/maps/MossdeepCity/scripts.pory"
	.string "way, though.$"
# 389 "data/maps/MossdeepCity/scripts.pory"

# 390 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_SootopolisNewGymLeader:
# 391 "data/maps/MossdeepCity/scripts.pory"
	.string "Ahh… It feels great letting the waves\n"
# 392 "data/maps/MossdeepCity/scripts.pory"
	.string "wash over my feet…\p"
# 393 "data/maps/MossdeepCity/scripts.pory"
	.string "Speaking of the waves, you know that\n"
# 394 "data/maps/MossdeepCity/scripts.pory"
	.string "island city Sootopolis?\p"
# 395 "data/maps/MossdeepCity/scripts.pory"
	.string "I think the Gym there had a new\n"
# 396 "data/maps/MossdeepCity/scripts.pory"
	.string "Leader come in.\p"
# 397 "data/maps/MossdeepCity/scripts.pory"
	.string "People tell me the new Leader once\n"
# 398 "data/maps/MossdeepCity/scripts.pory"
	.string "mentored Wallace.$"
# 399 "data/maps/MossdeepCity/scripts.pory"

# 400 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_JirachiAppearance:
# 401 "data/maps/MossdeepCity/scripts.pory"
	walk_slow_down
# 402 "data/maps/MossdeepCity/scripts.pory"
	walk_slow_down
# 403 "data/maps/MossdeepCity/scripts.pory"
	walk_slow_down
# 404 "data/maps/MossdeepCity/scripts.pory"
	walk_slow_down
# 405 "data/maps/MossdeepCity/scripts.pory"
	step_end

MossdeepCity_MapScripts::
# 412 "data/maps/MossdeepCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MossdeepCity_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 422 "data/maps/MossdeepCity/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, MossdeepCity_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

MossdeepCity_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 413 "data/maps/MossdeepCity/scripts.pory"
	goto_if_set FLAG_SYS_WEATHER_CTRL, MossdeepCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
MossdeepCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 416 "data/maps/MossdeepCity/scripts.pory"
	setflag FLAG_TEMP_1
# 417 "data/maps/MossdeepCity/scripts.pory"
	setflag FLAG_TEMP_2
# 418 "data/maps/MossdeepCity/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 12
	goto_if_eq MossdeepCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
	return

MossdeepCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 414 "data/maps/MossdeepCity/scripts.pory"
	call Common_EventScript_SetAbnormalWeather
	goto MossdeepCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

MossdeepCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 419 "data/maps/MossdeepCity/scripts.pory"
	call EventScript_Clear_FlagTemp1
	return

MossdeepCity_MapScripts_MAP_SCRIPT_ON_RESUME:
# 423 "data/maps/MossdeepCity/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, MossdeepCity_MapScripts_MAP_SCRIPT_ON_RESUME_1
	return

MossdeepCity_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 424 "data/maps/MossdeepCity/scripts.pory"
	removeobject 18
	return


MossdeepCity_EventScript_WhiteRock::
# 430 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_EventScript_WhiteRock_Text_0, MSGBOX_SIGN
# 431 "data/maps/MossdeepCity/scripts.pory"
	checkitem ITEM_WISH_TAG
# 432 "data/maps/MossdeepCity/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MossdeepCity_EventScript_WhiteRock_3
	return

MossdeepCity_EventScript_WhiteRock_1:
# 433 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_EventScript_WhiteRock_Text_1, MSGBOX_YESNO
# 434 "data/maps/MossdeepCity/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MossdeepCity_EventScript_WhiteRock_7
	return

MossdeepCity_EventScript_WhiteRock_2:
# 432 "data/maps/MossdeepCity/scripts.pory"
	goto_if_unset FLAG_CAUGHT_JIRACHI, MossdeepCity_EventScript_WhiteRock_1
	return

MossdeepCity_EventScript_WhiteRock_3:
# 432 "data/maps/MossdeepCity/scripts.pory"
	goto_if_unset FLAG_TEMP_3, MossdeepCity_EventScript_WhiteRock_2
	return

MossdeepCity_EventScript_WhiteRock_7:
# 435 "data/maps/MossdeepCity/scripts.pory"
	closemessage
# 436 "data/maps/MossdeepCity/scripts.pory"
	clearflag FLAG_TEMP_2
# 437 "data/maps/MossdeepCity/scripts.pory"
	applymovement 8, Common_Movement_FaceUp
# 438 "data/maps/MossdeepCity/scripts.pory"
	waitmovement 0
# 439 "data/maps/MossdeepCity/scripts.pory"
	playse SE_PIN
# 440 "data/maps/MossdeepCity/scripts.pory"
	applymovement 8, Common_Movement_ExclamationMark
# 441 "data/maps/MossdeepCity/scripts.pory"
	waitmovement 0
# 442 "data/maps/MossdeepCity/scripts.pory"
	addobject 18
# 443 "data/maps/MossdeepCity/scripts.pory"
	applymovement 18, MossdeepCity_Movement_JirachiAppearance
# 444 "data/maps/MossdeepCity/scripts.pory"
	waitmovement 0
# 445 "data/maps/MossdeepCity/scripts.pory"
	setvar VAR_LAST_TALKED, 18
# 446 "data/maps/MossdeepCity/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
# 447 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_EventScript_WhiteRock_Text_2
# 448 "data/maps/MossdeepCity/scripts.pory"
	waitmoncry
# 449 "data/maps/MossdeepCity/scripts.pory"
	seteventmon SPECIES_JIRACHI, 50
# 450 "data/maps/MossdeepCity/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 451 "data/maps/MossdeepCity/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 452 "data/maps/MossdeepCity/scripts.pory"
	waitstate
# 453 "data/maps/MossdeepCity/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 454 "data/maps/MossdeepCity/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 455 "data/maps/MossdeepCity/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq MossdeepCity_EventScript_WhiteRock_10
MossdeepCity_EventScript_WhiteRock_9:
# 458 "data/maps/MossdeepCity/scripts.pory"
	setflag FLAG_TEMP_3
	return

MossdeepCity_EventScript_WhiteRock_10:
# 456 "data/maps/MossdeepCity/scripts.pory"
	setflag FLAG_CAUGHT_JIRACHI
	goto MossdeepCity_EventScript_WhiteRock_9


TrainerTipsDiveSprinting::
# 464 "data/maps/MossdeepCity/scripts.pory"
	msgbox TrainerTipsDiveSprinting_Text_0, MSGBOX_SIGN
	return


MossdeepCity_EventScript_WhiteRock_Text_0:
# 430 "data/maps/MossdeepCity/scripts.pory"
	.string "It's a white rock.$"

MossdeepCity_EventScript_WhiteRock_Text_1:
# 433 "data/maps/MossdeepCity/scripts.pory"
	.string "Use the Wish Tag to make a wish?$"

MossdeepCity_EventScript_WhiteRock_Text_2:
# 447 "data/maps/MossdeepCity/scripts.pory"
	.string "Shii?$"

TrainerTipsDiveSprinting_Text_0:
# 464 "data/maps/MossdeepCity/scripts.pory"
	.string "Trainer Tips\p"
	.string "While diving, hold {A_BUTTON} or {B_BUTTON} to move faster.$"
