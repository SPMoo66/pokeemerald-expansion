# 1 "data/maps/MossdeepCity/scripts.pory"

# 2 "data/maps/MossdeepCity/scripts.pory"
.set LOCALID_GRUNT_1, 10
# 3 "data/maps/MossdeepCity/scripts.pory"
.set LOCALID_GRUNT_2, 11
# 4 "data/maps/MossdeepCity/scripts.pory"
.set LOCALID_GRUNT_3, 12
# 5 "data/maps/MossdeepCity/scripts.pory"
.set LOCALID_GRUNT_4, 13
# 6 "data/maps/MossdeepCity/scripts.pory"
.set LOCALID_MAXIE, 14
# 7 "data/maps/MossdeepCity/scripts.pory"
.set LOCALID_SCOTT, 16
# 8 "data/maps/MossdeepCity/scripts.pory"

# 9 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_PokefanF::
# 10 "data/maps/MossdeepCity/scripts.pory"
	lock
# 11 "data/maps/MossdeepCity/scripts.pory"
	faceplayer
# 12 "data/maps/MossdeepCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM_DIVE, MossdeepCity_EventScript_PokefanFMagmaGone
# 13 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_SpaceCenterReceivedLetter, MSGBOX_DEFAULT
# 14 "data/maps/MossdeepCity/scripts.pory"
	release
# 15 "data/maps/MossdeepCity/scripts.pory"
	end
# 16 "data/maps/MossdeepCity/scripts.pory"

# 17 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_PokefanFMagmaGone::
# 18 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_SpaceCenterLaunchingRockets, MSGBOX_DEFAULT
# 19 "data/maps/MossdeepCity/scripts.pory"
	release
# 20 "data/maps/MossdeepCity/scripts.pory"
	end
# 21 "data/maps/MossdeepCity/scripts.pory"

# 22 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_Sailor::
# 23 "data/maps/MossdeepCity/scripts.pory"
	lock
# 24 "data/maps/MossdeepCity/scripts.pory"
	faceplayer
# 25 "data/maps/MossdeepCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM_DIVE, MossdeepCity_EventScript_SailorMagmaGone
# 26 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_MossdeepTargetedByMagma, MSGBOX_DEFAULT
# 27 "data/maps/MossdeepCity/scripts.pory"
	release
# 28 "data/maps/MossdeepCity/scripts.pory"
	end
# 29 "data/maps/MossdeepCity/scripts.pory"

# 30 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_SailorMagmaGone::
# 31 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_FeelReliefOnLand, MSGBOX_DEFAULT
# 32 "data/maps/MossdeepCity/scripts.pory"
	release
# 33 "data/maps/MossdeepCity/scripts.pory"
	end
# 34 "data/maps/MossdeepCity/scripts.pory"

# 35 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_NinjaBoy::
# 36 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_WailmerWatching, MSGBOX_NPC
# 37 "data/maps/MossdeepCity/scripts.pory"
	end
# 38 "data/maps/MossdeepCity/scripts.pory"

# 39 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_ExpertM::
# 40 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_LifeNeedsSeaToLive, MSGBOX_NPC
# 41 "data/maps/MossdeepCity/scripts.pory"
	end
# 42 "data/maps/MossdeepCity/scripts.pory"

# 43 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_Girl::
# 44 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_NiceIfWorldCoveredByFlowers, MSGBOX_NPC
# 45 "data/maps/MossdeepCity/scripts.pory"
	end
# 46 "data/maps/MossdeepCity/scripts.pory"

# 47 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_Woman::
# 48 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_SpecialSpaceCenterRock, MSGBOX_NPC
# 49 "data/maps/MossdeepCity/scripts.pory"
	end
# 50 "data/maps/MossdeepCity/scripts.pory"

# 51 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_GymSign::
# 52 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_GymSign, MSGBOX_SIGN
# 53 "data/maps/MossdeepCity/scripts.pory"
	end
# 54 "data/maps/MossdeepCity/scripts.pory"

# 55 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_CitySign::
# 56 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_CitySign, MSGBOX_SIGN
# 57 "data/maps/MossdeepCity/scripts.pory"
	end
# 58 "data/maps/MossdeepCity/scripts.pory"

# 59 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_SpaceCenterSign::
# 60 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_SpaceCenterSign, MSGBOX_SIGN
# 61 "data/maps/MossdeepCity/scripts.pory"
	end
# 62 "data/maps/MossdeepCity/scripts.pory"

# 63 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_VisitedMossdeep::
# 64 "data/maps/MossdeepCity/scripts.pory"
	setflag FLAG_VISITED_MOSSDEEP_CITY
# 65 "data/maps/MossdeepCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 66 "data/maps/MossdeepCity/scripts.pory"
	end
# 67 "data/maps/MossdeepCity/scripts.pory"

# 68 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_TeamMagmaEnterSpaceCenter::
# 69 "data/maps/MossdeepCity/scripts.pory"
	lockall
# 70 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_MAXIE, MossdeepCity_Movement_MaxieGestureToSpaceCenter
# 71 "data/maps/MossdeepCity/scripts.pory"
	waitmovement 0
# 72 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_GRUNT_1, MossdeepCity_Movement_GruntFaceSpaceCenter
# 73 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_GRUNT_2, MossdeepCity_Movement_GruntFaceSpaceCenter
# 74 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_GRUNT_3, MossdeepCity_Movement_GruntFaceSpaceCenter
# 75 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_GRUNT_4, MossdeepCity_Movement_GruntFaceSpaceCenter
# 76 "data/maps/MossdeepCity/scripts.pory"
	waitmovement 0
# 77 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_MAXIE, MossdeepCity_Movement_MaxieEnterSpaceCenter
# 78 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_GRUNT_1, MossdeepCity_Movement_Grunt1EnterSpaceCenter
# 79 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_GRUNT_2, MossdeepCity_Movement_Grunt2EnterSpaceCenter
# 80 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_GRUNT_3, MossdeepCity_Movement_Grunt3EnterSpaceCenter
# 81 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_GRUNT_4, MossdeepCity_Movement_Grunt4EnterSpaceCenter
# 82 "data/maps/MossdeepCity/scripts.pory"
	waitmovement 0
# 83 "data/maps/MossdeepCity/scripts.pory"
	removeobject LOCALID_MAXIE
# 84 "data/maps/MossdeepCity/scripts.pory"
	removeobject LOCALID_GRUNT_1
# 85 "data/maps/MossdeepCity/scripts.pory"
	removeobject LOCALID_GRUNT_2
# 86 "data/maps/MossdeepCity/scripts.pory"
	removeobject LOCALID_GRUNT_3
# 87 "data/maps/MossdeepCity/scripts.pory"
	removeobject LOCALID_GRUNT_4
# 88 "data/maps/MossdeepCity/scripts.pory"
	delay 30
# 89 "data/maps/MossdeepCity/scripts.pory"
	setvar VAR_MOSSDEEP_CITY_STATE, 2
# 90 "data/maps/MossdeepCity/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_TEAM_MAGMA
# 91 "data/maps/MossdeepCity/scripts.pory"
	releaseall
# 92 "data/maps/MossdeepCity/scripts.pory"
	end
# 93 "data/maps/MossdeepCity/scripts.pory"

# 94 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_MaxieGestureToSpaceCenter:
# 95 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 96 "data/maps/MossdeepCity/scripts.pory"
	face_right
# 97 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 98 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 99 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 100 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 101 "data/maps/MossdeepCity/scripts.pory"
	face_left
# 102 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 103 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 104 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 105 "data/maps/MossdeepCity/scripts.pory"

# 106 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_GruntFaceSpaceCenter:
# 107 "data/maps/MossdeepCity/scripts.pory"
	face_right
# 108 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 109 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 110 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 111 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 112 "data/maps/MossdeepCity/scripts.pory"

# 113 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_MaxieEnterSpaceCenter:
# 114 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 115 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 116 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 117 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 118 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 119 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 120 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 121 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 122 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 123 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 124 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 125 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 126 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 127 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 128 "data/maps/MossdeepCity/scripts.pory"

# 129 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_Grunt1EnterSpaceCenter:
# 130 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 131 "data/maps/MossdeepCity/scripts.pory"
	delay_8
# 132 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 133 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 134 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 135 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 136 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 137 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 138 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 139 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 140 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 141 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 142 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 143 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 144 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 145 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 146 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 147 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 148 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 149 "data/maps/MossdeepCity/scripts.pory"

# 150 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_Grunt2EnterSpaceCenter:
# 151 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 152 "data/maps/MossdeepCity/scripts.pory"
	delay_8
# 153 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 154 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 155 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 156 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 157 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 158 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 159 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 160 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 161 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 162 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 163 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 164 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 165 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 166 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 167 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 168 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 169 "data/maps/MossdeepCity/scripts.pory"

# 170 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_Grunt3EnterSpaceCenter:
# 171 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 172 "data/maps/MossdeepCity/scripts.pory"
	delay_8
# 173 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 174 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 175 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 176 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 177 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 178 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 179 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 180 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 181 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 182 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 183 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 184 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 185 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 186 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 187 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 188 "data/maps/MossdeepCity/scripts.pory"

# 189 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_Grunt4EnterSpaceCenter:
# 190 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 191 "data/maps/MossdeepCity/scripts.pory"
	delay_8
# 192 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 193 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 194 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 195 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 196 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 197 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 198 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 199 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 200 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 201 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 202 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 203 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 204 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 205 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 206 "data/maps/MossdeepCity/scripts.pory"

# 207 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_Man::
# 208 "data/maps/MossdeepCity/scripts.pory"
	lock
# 209 "data/maps/MossdeepCity/scripts.pory"
	faceplayer
# 210 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_SurfExhilarating, MSGBOX_DEFAULT
# 211 "data/maps/MossdeepCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 212 "data/maps/MossdeepCity/scripts.pory"
	waitmovement 0
# 213 "data/maps/MossdeepCity/scripts.pory"
	release
# 214 "data/maps/MossdeepCity/scripts.pory"
	end
# 215 "data/maps/MossdeepCity/scripts.pory"

# 216 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_KingsRockBoy::
# 217 "data/maps/MossdeepCity/scripts.pory"
	lock
# 218 "data/maps/MossdeepCity/scripts.pory"
	faceplayer
# 219 "data/maps/MossdeepCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_KINGS_ROCK, MossdeepCity_EventScript_ReceivedKingsRock
# 220 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_WantKingsRockStevenGaveMe, MSGBOX_YESNO
# 221 "data/maps/MossdeepCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MossdeepCity_EventScript_DeclineKingsRock
# 222 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_YouCanKeepIt, MSGBOX_DEFAULT
# 223 "data/maps/MossdeepCity/scripts.pory"
	giveitem ITEM_KINGS_ROCK
# 224 "data/maps/MossdeepCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 225 "data/maps/MossdeepCity/scripts.pory"
	setflag FLAG_RECEIVED_KINGS_ROCK
# 226 "data/maps/MossdeepCity/scripts.pory"
	release
# 227 "data/maps/MossdeepCity/scripts.pory"
	end
# 228 "data/maps/MossdeepCity/scripts.pory"

# 229 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_ReceivedKingsRock::
# 230 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_StevensHouseOverThere, MSGBOX_DEFAULT
# 231 "data/maps/MossdeepCity/scripts.pory"
	release
# 232 "data/maps/MossdeepCity/scripts.pory"
	end
# 233 "data/maps/MossdeepCity/scripts.pory"

# 234 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_DeclineKingsRock::
# 235 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_WhatToDoWithWeirdRock, MSGBOX_DEFAULT
# 236 "data/maps/MossdeepCity/scripts.pory"
	release
# 237 "data/maps/MossdeepCity/scripts.pory"
	end
# 238 "data/maps/MossdeepCity/scripts.pory"

# 239 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_BlackBelt::
# 240 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_SootopolisNewGymLeader, MSGBOX_NPC
# 241 "data/maps/MossdeepCity/scripts.pory"
	end
# 242 "data/maps/MossdeepCity/scripts.pory"

# 243 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_Scott::
# 244 "data/maps/MossdeepCity/scripts.pory"
	lock
# 245 "data/maps/MossdeepCity/scripts.pory"
	faceplayer
# 246 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_ScottSomethingWrongWithTown, MSGBOX_DEFAULT
# 247 "data/maps/MossdeepCity/scripts.pory"
	closemessage
# 248 "data/maps/MossdeepCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, MossdeepCity_EventScript_ScottExitNorth
# 249 "data/maps/MossdeepCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, MossdeepCity_EventScript_ScottExitEast
# 250 "data/maps/MossdeepCity/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 251 "data/maps/MossdeepCity/scripts.pory"
	removeobject LOCALID_SCOTT
# 252 "data/maps/MossdeepCity/scripts.pory"
	release
# 253 "data/maps/MossdeepCity/scripts.pory"
	end
# 254 "data/maps/MossdeepCity/scripts.pory"

# 255 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_ScottExitNorth::
# 256 "data/maps/MossdeepCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Movement_PlayerWatchScottExit
# 257 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_SCOTT, MossdeepCity_Movement_ScottExitNorth
# 258 "data/maps/MossdeepCity/scripts.pory"
	waitmovement 0
# 259 "data/maps/MossdeepCity/scripts.pory"
	return
# 260 "data/maps/MossdeepCity/scripts.pory"

# 261 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_ScottExitEast::
# 262 "data/maps/MossdeepCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Movement_PlayerWatchScottExit
# 263 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_SCOTT, MossdeepCity_Movement_ScottExitEast
# 264 "data/maps/MossdeepCity/scripts.pory"
	waitmovement 0
# 265 "data/maps/MossdeepCity/scripts.pory"
	return
# 266 "data/maps/MossdeepCity/scripts.pory"

# 267 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_PlayerWatchScottExit:
# 268 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 269 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 270 "data/maps/MossdeepCity/scripts.pory"
	walk_in_place_faster_left
# 271 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 272 "data/maps/MossdeepCity/scripts.pory"

# 273 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_ScottExitNorth:
# 274 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 275 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 276 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 277 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 278 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 279 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 280 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 281 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 282 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 283 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 284 "data/maps/MossdeepCity/scripts.pory"

# 285 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_ScottExitEast:
# 286 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 287 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 288 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 289 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 290 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 291 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 292 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 293 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 294 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 295 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 296 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 297 "data/maps/MossdeepCity/scripts.pory"

# 298 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_WantKingsRockStevenGaveMe:
# 299 "data/maps/MossdeepCity/scripts.pory"
	.string "I got this from Steven, but I don't\n"
# 300 "data/maps/MossdeepCity/scripts.pory"
	.string "know what it's good for.\p"
# 301 "data/maps/MossdeepCity/scripts.pory"
	.string "I think it's called King's Rock.\n"
# 302 "data/maps/MossdeepCity/scripts.pory"
	.string "Do you want it?$"
# 303 "data/maps/MossdeepCity/scripts.pory"

# 304 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_YouCanKeepIt:
# 305 "data/maps/MossdeepCity/scripts.pory"
	.string "Why would you want it?\n"
# 306 "data/maps/MossdeepCity/scripts.pory"
	.string "You're weird.\p"
# 307 "data/maps/MossdeepCity/scripts.pory"
	.string "You can keep it, but keep it a secret\n"
# 308 "data/maps/MossdeepCity/scripts.pory"
	.string "from Steven.$"
# 309 "data/maps/MossdeepCity/scripts.pory"

# 310 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_StevensHouseOverThere:
# 311 "data/maps/MossdeepCity/scripts.pory"
	.string "Steven's house is right over there!$"
# 312 "data/maps/MossdeepCity/scripts.pory"

# 313 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_WhatToDoWithWeirdRock:
# 314 "data/maps/MossdeepCity/scripts.pory"
	.string "Yeah, you think so, too! What are you\n"
# 315 "data/maps/MossdeepCity/scripts.pory"
	.string "supposed to do with some weird rock?$"
# 316 "data/maps/MossdeepCity/scripts.pory"

# 317 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_WailmerWatching:
# 318 "data/maps/MossdeepCity/scripts.pory"
	.string "Around Mossdeep, you can see wild\n"
# 319 "data/maps/MossdeepCity/scripts.pory"
	.string "Wailmer.\p"
# 320 "data/maps/MossdeepCity/scripts.pory"
	.string "It's called, uh…\n"
# 321 "data/maps/MossdeepCity/scripts.pory"
	.string "What was it now…\p"
# 322 "data/maps/MossdeepCity/scripts.pory"
	.string "Wai, Wai, Wai…\p"
# 323 "data/maps/MossdeepCity/scripts.pory"
	.string "Wailmer watching!$"
# 324 "data/maps/MossdeepCity/scripts.pory"

# 325 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_SpaceCenterReceivedLetter:
# 326 "data/maps/MossdeepCity/scripts.pory"
	.string "The island's Space Center has been\n"
# 327 "data/maps/MossdeepCity/scripts.pory"
	.string "launching huge rockets.\p"
# 328 "data/maps/MossdeepCity/scripts.pory"
	.string "There's been some kind of an uproar\n"
# 329 "data/maps/MossdeepCity/scripts.pory"
	.string "over a letter they received recently.$"
# 330 "data/maps/MossdeepCity/scripts.pory"

# 331 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_SpaceCenterLaunchingRockets:
# 332 "data/maps/MossdeepCity/scripts.pory"
	.string "The island's Space Center has been\n"
# 333 "data/maps/MossdeepCity/scripts.pory"
	.string "launching huge rockets.$"
# 334 "data/maps/MossdeepCity/scripts.pory"

# 335 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_MossdeepTargetedByMagma:
# 336 "data/maps/MossdeepCity/scripts.pory"
	.string "I heard from a Sailor buddy that\n"
# 337 "data/maps/MossdeepCity/scripts.pory"
	.string "Team Aqua set up shop in Lilycove.\p"
# 338 "data/maps/MossdeepCity/scripts.pory"
	.string "I also heard that someone came along\n"
# 339 "data/maps/MossdeepCity/scripts.pory"
	.string "and wiped the floor with them!\p"
# 340 "data/maps/MossdeepCity/scripts.pory"
	.string "But Mossdeep here's been targeted\n"
# 341 "data/maps/MossdeepCity/scripts.pory"
	.string "by that Team Magma.\p"
# 342 "data/maps/MossdeepCity/scripts.pory"
	.string "If you want to know what they're up to,\n"
# 343 "data/maps/MossdeepCity/scripts.pory"
	.string "go visit the Space Center.$"
# 344 "data/maps/MossdeepCity/scripts.pory"

# 345 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_FeelReliefOnLand:
# 346 "data/maps/MossdeepCity/scripts.pory"
	.string "I'm a Sailor, so the sea's obviously\n"
# 347 "data/maps/MossdeepCity/scripts.pory"
	.string "more important to me.\p"
# 348 "data/maps/MossdeepCity/scripts.pory"
	.string "But you know? When I get back on land\n"
# 349 "data/maps/MossdeepCity/scripts.pory"
	.string "after a long voyage, I do feel relief!$"
# 350 "data/maps/MossdeepCity/scripts.pory"

# 351 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_NiceIfWorldCoveredByFlowers:
# 352 "data/maps/MossdeepCity/scripts.pory"
	.string "Wouldn't it be nice?\p"
# 353 "data/maps/MossdeepCity/scripts.pory"
	.string "If the whole world was covered in\n"
# 354 "data/maps/MossdeepCity/scripts.pory"
	.string "plants and flowers like this island?$"
# 355 "data/maps/MossdeepCity/scripts.pory"

# 356 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_LifeNeedsSeaToLive:
# 357 "data/maps/MossdeepCity/scripts.pory"
	.string "All life needs the sea to live, even\n"
# 358 "data/maps/MossdeepCity/scripts.pory"
	.string "though it makes its home on the land.\p"
# 359 "data/maps/MossdeepCity/scripts.pory"
	.string "Life, having run its course, becomes\n"
# 360 "data/maps/MossdeepCity/scripts.pory"
	.string "soil and returns to the land.\p"
# 361 "data/maps/MossdeepCity/scripts.pory"
	.string "And the sea is always connected to\n"
# 362 "data/maps/MossdeepCity/scripts.pory"
	.string "the land.\p"
# 363 "data/maps/MossdeepCity/scripts.pory"
	.string "Yes, like the very shoreline here.$"
# 364 "data/maps/MossdeepCity/scripts.pory"

# 365 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_SurfExhilarating:
# 366 "data/maps/MossdeepCity/scripts.pory"
	.string "A voyage on a ship is fine.\p"
# 367 "data/maps/MossdeepCity/scripts.pory"
	.string "But crossing the sea with Pokémon\n"
# 368 "data/maps/MossdeepCity/scripts.pory"
	.string "using Surf…\p"
# 369 "data/maps/MossdeepCity/scripts.pory"
	.string "Now that's an exhilarating trip!\n"
# 370 "data/maps/MossdeepCity/scripts.pory"
	.string "Wouldn't you agree, youngster?$"
# 371 "data/maps/MossdeepCity/scripts.pory"

# 372 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_SpecialSpaceCenterRock:
# 373 "data/maps/MossdeepCity/scripts.pory"
	.string "This rock has a special meaning to\n"
# 374 "data/maps/MossdeepCity/scripts.pory"
	.string "the people at the Space Center.\p"
# 375 "data/maps/MossdeepCity/scripts.pory"
	.string "They put it here as their wish for\n"
# 376 "data/maps/MossdeepCity/scripts.pory"
	.string "their rockets to fly safely.\p"
# 377 "data/maps/MossdeepCity/scripts.pory"
	.string "When you make a wish, what do you use?\n"
# 378 "data/maps/MossdeepCity/scripts.pory"
	.string "Do you wish upon a star?\p"
# 379 "data/maps/MossdeepCity/scripts.pory"
	.string "I use a wish tag to make it happen.\n"
# 380 "data/maps/MossdeepCity/scripts.pory"
	.string "That's what I do.$"
# 381 "data/maps/MossdeepCity/scripts.pory"

# 382 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_GymSign:
# 383 "data/maps/MossdeepCity/scripts.pory"
	.string "Mossdeep City Pokémon Gym\n"
# 384 "data/maps/MossdeepCity/scripts.pory"
	.string "Leaders: Liza & Tate\p"
# 385 "data/maps/MossdeepCity/scripts.pory"
	.string "“The mystic combination!”$"
# 386 "data/maps/MossdeepCity/scripts.pory"

# 387 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_CitySign:
# 388 "data/maps/MossdeepCity/scripts.pory"
	.string "Mossdeep City\n"
# 389 "data/maps/MossdeepCity/scripts.pory"
	.string "“Our slogan: Cherish Pokémon!”$"
# 390 "data/maps/MossdeepCity/scripts.pory"

# 391 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_SpaceCenterSign:
# 392 "data/maps/MossdeepCity/scripts.pory"
	.string "Mossdeep Space Center\n"
# 393 "data/maps/MossdeepCity/scripts.pory"
	.string "“The closest place to space.”$"
# 394 "data/maps/MossdeepCity/scripts.pory"

# 395 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_ScottSomethingWrongWithTown:
# 396 "data/maps/MossdeepCity/scripts.pory"
	.string "Scott: {PLAYER}{KUN}, feeling good?\n"
# 397 "data/maps/MossdeepCity/scripts.pory"
	.string "I'm doing great!\p"
# 398 "data/maps/MossdeepCity/scripts.pory"
	.string "I'd heard Mossdeep's Gym Leader is\n"
# 399 "data/maps/MossdeepCity/scripts.pory"
	.string "pretty strong, so I decided to come\l"
# 400 "data/maps/MossdeepCity/scripts.pory"
	.string "take a look-see for myself.\p"
# 401 "data/maps/MossdeepCity/scripts.pory"
	.string "But there's something wrong about\n"
# 402 "data/maps/MossdeepCity/scripts.pory"
	.string "this town.\p"
# 403 "data/maps/MossdeepCity/scripts.pory"
	.string "People are going on about a warning\n"
# 404 "data/maps/MossdeepCity/scripts.pory"
	.string "letter and the Space Center…\p"
# 405 "data/maps/MossdeepCity/scripts.pory"
	.string "I don't think it concerns me in any\n"
# 406 "data/maps/MossdeepCity/scripts.pory"
	.string "way, though.$"
# 407 "data/maps/MossdeepCity/scripts.pory"

# 408 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_SootopolisNewGymLeader:
# 409 "data/maps/MossdeepCity/scripts.pory"
	.string "Ahh… It feels great letting the waves\n"
# 410 "data/maps/MossdeepCity/scripts.pory"
	.string "wash over my feet…\p"
# 411 "data/maps/MossdeepCity/scripts.pory"
	.string "Speaking of the waves, you know that\n"
# 412 "data/maps/MossdeepCity/scripts.pory"
	.string "island city Sootopolis?\p"
# 413 "data/maps/MossdeepCity/scripts.pory"
	.string "I think the Gym there had a new\n"
# 414 "data/maps/MossdeepCity/scripts.pory"
	.string "Leader come in.\p"
# 415 "data/maps/MossdeepCity/scripts.pory"
	.string "People tell me the new Leader once\n"
# 416 "data/maps/MossdeepCity/scripts.pory"
	.string "mentored Wallace.$"

MossdeepCity_MapScripts::
# 422 "data/maps/MossdeepCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MossdeepCity_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

MossdeepCity_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 423 "data/maps/MossdeepCity/scripts.pory"
	goto_if_set FLAG_SYS_WEATHER_CTRL, MossdeepCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
MossdeepCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 426 "data/maps/MossdeepCity/scripts.pory"
	setflag FLAG_TEMP_2
	return

MossdeepCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 424 "data/maps/MossdeepCity/scripts.pory"
	call Common_EventScript_SetAbnormalWeather
	goto MossdeepCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1


MossdeepCity_EventScript_ChallengeBall1::
# 431 "data/maps/MossdeepCity/scripts.pory"
	lock
# 432 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_EventScript_ChallengeBall1_Text_0, MSGBOX_YESNO
# 433 "data/maps/MossdeepCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MossdeepCity_EventScript_ChallengeBall1_2
MossdeepCity_EventScript_ChallengeBall1_1:
# 447 "data/maps/MossdeepCity/scripts.pory"
	release
	return

MossdeepCity_EventScript_ChallengeBall1_2:
# 434 "data/maps/MossdeepCity/scripts.pory"
	setflag FLAG_NO_CATCHING
# 435 "data/maps/MossdeepCity/scripts.pory"
	setflag FLAG_NO_RUNNING
# 436 "data/maps/MossdeepCity/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 437 "data/maps/MossdeepCity/scripts.pory"
	setvar VAR_STARTING_STATUS, 6
# 438 "data/maps/MossdeepCity/scripts.pory"
	setwildbattle SPECIES_CONTAGEON, 40, ITEM_NONE, 2, SPECIES_SLAKING, 40, ITEM_NONE, 0, MOVE_PROTECT, MOVE_DIRE_CLAW, MOVE_SPECTRAL_THIEF, MOVE_TAUNT, MOVE_BODY_SLAM, MOVE_HAMMER_ARM, MOVE_PLAY_ROUGH, MOVE_SHADOW_CLAW
# 439 "data/maps/MossdeepCity/scripts.pory"
	dowildbattle
# 440 "data/maps/MossdeepCity/scripts.pory"
	setvar VAR_STARTING_STATUS, 0
# 441 "data/maps/MossdeepCity/scripts.pory"
	clearflag FLAG_NO_CATCHING
# 442 "data/maps/MossdeepCity/scripts.pory"
	clearflag FLAG_NO_RUNNING
# 443 "data/maps/MossdeepCity/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 444 "data/maps/MossdeepCity/scripts.pory"
	finditem ITEM_FOCUS_SASH, 1
# 445 "data/maps/MossdeepCity/scripts.pory"
	setwildbattle SPECIES_BULBASAUR, 1
	goto MossdeepCity_EventScript_ChallengeBall1_1


MossdeepCity_EventScript_WhiteRock::
# 451 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_EventScript_WhiteRock_Text_0, MSGBOX_SIGN
	return


MossdeepCity_EventScript_ChallengeBall1_Text_0:
# 432 "data/maps/MossdeepCity/scripts.pory"
	.string "You feel a magical sensation as you\n"
	.string "approach.\p"
	.string "Reach out for the item?$"

MossdeepCity_EventScript_WhiteRock_Text_0:
# 451 "data/maps/MossdeepCity/scripts.pory"
	.string "It's a white rock.$"
