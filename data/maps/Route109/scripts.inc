# 1 "data/maps/Route109/scripts.pory"

# 2 "data/maps/Route109/scripts.pory"
@ NOTE: Route 109's sail to Dewford script references local IDs from Dewford's map.
# 3 "data/maps/Route109/scripts.pory"
@  These are labeled in DewfordTown/scripts.inc
# 4 "data/maps/Route109/scripts.pory"

# 5 "data/maps/Route109/scripts.pory"
Route109_MapScripts::
# 6 "data/maps/Route109/scripts.pory"
	.byte 0
# 7 "data/maps/Route109/scripts.pory"

# 8 "data/maps/Route109/scripts.pory"
Route109_EventScript_StartDepartForDewford::
# 9 "data/maps/Route109/scripts.pory"
	call EventScript_BackupMrBrineyLocation
# 10 "data/maps/Route109/scripts.pory"
	setobjectsubpriority LOCALID_BRINEY_R109, MAP_ROUTE109, 0
# 11 "data/maps/Route109/scripts.pory"
	setobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_ROUTE109, 0
# 12 "data/maps/Route109/scripts.pory"
	applymovement LOCALID_BRINEY_R109, Common_Movement_WalkDown
# 13 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 14 "data/maps/Route109/scripts.pory"
	removeobject LOCALID_BRINEY_R109
# 15 "data/maps/Route109/scripts.pory"
	switch VAR_FACING
# 16 "data/maps/Route109/scripts.pory"
	case DIR_SOUTH, Route109_EventScript_EnterBoatSouth
# 17 "data/maps/Route109/scripts.pory"
	case DIR_WEST, Route109_EventScript_EnterBoatWest
# 18 "data/maps/Route109/scripts.pory"
	case DIR_EAST, Route109_EventScript_EnterBoatEast
# 19 "data/maps/Route109/scripts.pory"
	end
# 20 "data/maps/Route109/scripts.pory"

# 21 "data/maps/Route109/scripts.pory"
Route109_EventScript_EnterBoatSouth::
# 22 "data/maps/Route109/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown2
# 23 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 24 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_DoSailToDewford
# 25 "data/maps/Route109/scripts.pory"
	end
# 26 "data/maps/Route109/scripts.pory"

# 27 "data/maps/Route109/scripts.pory"
Route109_EventScript_EnterBoatEast::
# 28 "data/maps/Route109/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route109_Movement_PlayerEnterBoatEast
# 29 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 30 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_DoSailToDewford
# 31 "data/maps/Route109/scripts.pory"
	end
# 32 "data/maps/Route109/scripts.pory"

# 33 "data/maps/Route109/scripts.pory"
Route109_EventScript_EnterBoatWest::
# 34 "data/maps/Route109/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route109_Movement_PlayerEnterBoatWest
# 35 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 36 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_DoSailToDewford
# 37 "data/maps/Route109/scripts.pory"
	end
# 38 "data/maps/Route109/scripts.pory"

# 39 "data/maps/Route109/scripts.pory"
Route109_EventScript_DoSailToDewford::
# 40 "data/maps/Route109/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_ROUTE109
# 41 "data/maps/Route109/scripts.pory"
	call Common_EventScript_PlayBrineysBoatMusic
# 42 "data/maps/Route109/scripts.pory"
	applymovement LOCALID_BOAT_R109, Route109_Movement_SailToDewford
# 43 "data/maps/Route109/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route109_Movement_SailToDewford
# 44 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 45 "data/maps/Route109/scripts.pory"
	delay 50
# 46 "data/maps/Route109/scripts.pory"
	call Common_EventScript_StopBrineysBoatMusic
# 47 "data/maps/Route109/scripts.pory"
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_DEWFORD_TOWN
# 48 "data/maps/Route109/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route109_Movement_PlayerExitBoat
# 49 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 50 "data/maps/Route109/scripts.pory"
	addobject LOCALID_BOAT_DEWFORD
# 51 "data/maps/Route109/scripts.pory"
	clearflag FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN
# 52 "data/maps/Route109/scripts.pory"
	setobjectxyperm LOCALID_BRINEY_DEWFORD, 12, 8
# 53 "data/maps/Route109/scripts.pory"
	addobject LOCALID_BRINEY_DEWFORD
# 54 "data/maps/Route109/scripts.pory"
	setobjectsubpriority LOCALID_BRINEY_DEWFORD, MAP_DEWFORD_TOWN, 0
# 55 "data/maps/Route109/scripts.pory"
	applymovement LOCALID_BRINEY_DEWFORD, Route109_Movement_BrineyExitBoat
# 56 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 57 "data/maps/Route109/scripts.pory"
	clearflag FLAG_HIDE_MR_BRINEY_DEWFORD_TOWN
# 58 "data/maps/Route109/scripts.pory"
	setflag FLAG_HIDE_ROUTE_109_MR_BRINEY_BOAT
# 59 "data/maps/Route109/scripts.pory"
	hideobjectat LOCALID_BOAT_R109, MAP_ROUTE109
# 60 "data/maps/Route109/scripts.pory"
	msgbox DewfordTown_Text_BrineyLandedInDewford, MSGBOX_DEFAULT
# 61 "data/maps/Route109/scripts.pory"
	closemessage
# 62 "data/maps/Route109/scripts.pory"
	copyvar VAR_BRINEY_LOCATION, VAR_0x8008
# 63 "data/maps/Route109/scripts.pory"
	resetobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_ROUTE109
# 64 "data/maps/Route109/scripts.pory"
	resetobjectsubpriority LOCALID_BRINEY_DEWFORD, MAP_DEWFORD_TOWN
# 65 "data/maps/Route109/scripts.pory"
	copyobjectxytoperm LOCALID_BRINEY_DEWFORD
# 66 "data/maps/Route109/scripts.pory"
	release
# 67 "data/maps/Route109/scripts.pory"
	end
# 68 "data/maps/Route109/scripts.pory"

# 69 "data/maps/Route109/scripts.pory"
Route109_Movement_SailToDewford:
# 70 "data/maps/Route109/scripts.pory"
	walk_in_place_faster_down
# 71 "data/maps/Route109/scripts.pory"
	walk_down
# 72 "data/maps/Route109/scripts.pory"
	walk_down
# 73 "data/maps/Route109/scripts.pory"
	walk_fast_down
# 74 "data/maps/Route109/scripts.pory"
	walk_fast_down
# 75 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 76 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 77 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 78 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 79 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 80 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 81 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 82 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 83 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 84 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 85 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 86 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 87 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 88 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 89 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 90 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 91 "data/maps/Route109/scripts.pory"
	walk_fast_down
# 92 "data/maps/Route109/scripts.pory"
	walk_fast_down
# 93 "data/maps/Route109/scripts.pory"
	walk_fast_left
# 94 "data/maps/Route109/scripts.pory"
	walk_fast_left
# 95 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 96 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 97 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 98 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 99 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 100 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 101 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 102 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 103 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 104 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 105 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 106 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 107 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 108 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 109 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 110 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 111 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 112 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 113 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 114 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 115 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 116 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 117 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 118 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 119 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 120 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 121 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 122 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 123 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 124 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 125 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 126 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 127 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 128 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 129 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 130 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 131 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 132 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 133 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 134 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 135 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 136 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 137 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 138 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 139 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 140 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 141 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 142 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 143 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 144 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 145 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 146 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 147 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 148 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 149 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 150 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 151 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 152 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 153 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 154 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 155 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 156 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 157 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 158 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 159 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 160 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 161 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 162 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 163 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 164 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 165 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 166 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 167 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 168 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 169 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 170 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 171 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 172 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 173 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 174 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 175 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 176 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 177 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 178 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 179 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 180 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 181 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 182 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 183 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 184 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 185 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 186 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 187 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 188 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 189 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 190 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 191 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 192 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 193 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 194 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 195 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 196 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 197 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 198 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 199 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 200 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 201 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 202 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 203 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 204 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 205 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 206 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 207 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 208 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 209 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 210 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 211 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 212 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 213 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 214 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 215 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 216 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 217 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 218 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 219 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 220 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 221 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 222 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 223 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 224 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 225 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 226 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 227 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 228 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 229 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 230 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 231 "data/maps/Route109/scripts.pory"
	walk_fast_left
# 232 "data/maps/Route109/scripts.pory"
	walk_fast_left
# 233 "data/maps/Route109/scripts.pory"
	walk_fast_left
# 234 "data/maps/Route109/scripts.pory"
	walk_fast_left
# 235 "data/maps/Route109/scripts.pory"
	walk_fast_left
# 236 "data/maps/Route109/scripts.pory"
	walk_fast_left
# 237 "data/maps/Route109/scripts.pory"
	walk_fast_left
# 238 "data/maps/Route109/scripts.pory"
	walk_fast_left
# 239 "data/maps/Route109/scripts.pory"
	walk_fast_left
# 240 "data/maps/Route109/scripts.pory"
	walk_left
# 241 "data/maps/Route109/scripts.pory"
	walk_left
# 242 "data/maps/Route109/scripts.pory"
	walk_in_place_faster_down
# 243 "data/maps/Route109/scripts.pory"
	step_end
# 244 "data/maps/Route109/scripts.pory"

# 245 "data/maps/Route109/scripts.pory"
Route109_Movement_PlayerExitBoat:
# 246 "data/maps/Route109/scripts.pory"
	walk_down
# 247 "data/maps/Route109/scripts.pory"
	walk_down
# 248 "data/maps/Route109/scripts.pory"
	walk_left
# 249 "data/maps/Route109/scripts.pory"
	walk_in_place_faster_right
# 250 "data/maps/Route109/scripts.pory"
	step_end
# 251 "data/maps/Route109/scripts.pory"

# 252 "data/maps/Route109/scripts.pory"
Route109_Movement_PlayerEnterBoatEast:
# 253 "data/maps/Route109/scripts.pory"
	walk_right
# 254 "data/maps/Route109/scripts.pory"
	walk_down
# 255 "data/maps/Route109/scripts.pory"
	step_end
# 256 "data/maps/Route109/scripts.pory"

# 257 "data/maps/Route109/scripts.pory"
Route109_Movement_PlayerEnterBoatWest:
# 258 "data/maps/Route109/scripts.pory"
	walk_left
# 259 "data/maps/Route109/scripts.pory"
	walk_down
# 260 "data/maps/Route109/scripts.pory"
	step_end
# 261 "data/maps/Route109/scripts.pory"

# 262 "data/maps/Route109/scripts.pory"
Route109_Movement_BrineyExitBoat:
# 263 "data/maps/Route109/scripts.pory"
	walk_down
# 264 "data/maps/Route109/scripts.pory"
	walk_in_place_faster_left
# 265 "data/maps/Route109/scripts.pory"
	step_end
# 266 "data/maps/Route109/scripts.pory"

# 267 "data/maps/Route109/scripts.pory"
Route109_EventScript_MrBriney::
# 268 "data/maps/Route109/scripts.pory"
	lock
# 269 "data/maps/Route109/scripts.pory"
	faceplayer
# 270 "data/maps/Route109/scripts.pory"
	goto_if_unset FLAG_DELIVERED_DEVON_GOODS, Route109_EventScript_HaveNotDeliveredDevonGood
# 271 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_DeliveredDevonGoods
# 272 "data/maps/Route109/scripts.pory"
	end
# 273 "data/maps/Route109/scripts.pory"

# 274 "data/maps/Route109/scripts.pory"
Route109_EventScript_HaveNotDeliveredDevonGood::
# 275 "data/maps/Route109/scripts.pory"
	speakername (CommonText_MrBriney)
# 276 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_BrineySailToDewfordQuestion, MSGBOX_YESNO
# 277 "data/maps/Route109/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route109_EventScript_StayHere
# 278 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_SailToDewford
# 279 "data/maps/Route109/scripts.pory"
	end
# 280 "data/maps/Route109/scripts.pory"

# 281 "data/maps/Route109/scripts.pory"
Route109_EventScript_DeliveredDevonGoods::
# 282 "data/maps/Route109/scripts.pory"
	speakername (CommonText_MrBriney)
# 283 "data/maps/Route109/scripts.pory"
	message Route109_Text_BrineyWhereAreWeBound
# 284 "data/maps/Route109/scripts.pory"
	waitmessage
# 285 "data/maps/Route109/scripts.pory"
	multichoicedefault 21, 8, MULTI_BRINEY_OFF_DEWFORD, 1, FALSE
# 286 "data/maps/Route109/scripts.pory"
	switch VAR_RESULT
# 287 "data/maps/Route109/scripts.pory"
	case 0, Route109_EventScript_SailToDewford
# 288 "data/maps/Route109/scripts.pory"
	case 1, Route109_EventScript_ChoseNotToSail
# 289 "data/maps/Route109/scripts.pory"
	case MULTI_B_PRESSED, Route109_EventScript_ChoseNotToSail
# 290 "data/maps/Route109/scripts.pory"
	end
# 291 "data/maps/Route109/scripts.pory"

# 292 "data/maps/Route109/scripts.pory"
Route109_EventScript_SailToDewford::
# 293 "data/maps/Route109/scripts.pory"
	speakername (CommonText_MrBriney)
# 294 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_BrineyDewfordItIs, MSGBOX_DEFAULT
# 295 "data/maps/Route109/scripts.pory"
	closemessage
# 296 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_StartDepartForDewford
# 297 "data/maps/Route109/scripts.pory"
	end
# 298 "data/maps/Route109/scripts.pory"

# 299 "data/maps/Route109/scripts.pory"
Route109_EventScript_StayHere::
# 300 "data/maps/Route109/scripts.pory"
	speakername (CommonText_MrBriney)
# 301 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_BrineyDeliverDevonGoods, MSGBOX_DEFAULT
# 302 "data/maps/Route109/scripts.pory"
	release
# 303 "data/maps/Route109/scripts.pory"
	end
# 304 "data/maps/Route109/scripts.pory"

# 305 "data/maps/Route109/scripts.pory"
Route109_EventScript_ChoseNotToSail::
# 306 "data/maps/Route109/scripts.pory"
	speakername (CommonText_MrBriney)
# 307 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_BrineyTellMeWhenYouNeedToSail, MSGBOX_DEFAULT
# 308 "data/maps/Route109/scripts.pory"
	release
# 309 "data/maps/Route109/scripts.pory"
	end
# 310 "data/maps/Route109/scripts.pory"

# 311 "data/maps/Route109/scripts.pory"
Route109_EventScript_SeashoreHouseGirl::
# 312 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_ChillAtMyPapasSpot, MSGBOX_NPC
# 313 "data/maps/Route109/scripts.pory"
	end
# 314 "data/maps/Route109/scripts.pory"

# 315 "data/maps/Route109/scripts.pory"
Route109_EventScript_SandCastleBoy::
# 316 "data/maps/Route109/scripts.pory"
	lock
# 317 "data/maps/Route109/scripts.pory"
	faceplayer
# 318 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_SandCastleTakingLongTime, MSGBOX_DEFAULT
# 319 "data/maps/Route109/scripts.pory"
	closemessage
# 320 "data/maps/Route109/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 321 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 322 "data/maps/Route109/scripts.pory"
	release
# 323 "data/maps/Route109/scripts.pory"
	end
# 324 "data/maps/Route109/scripts.pory"

# 325 "data/maps/Route109/scripts.pory"
Route109_EventScript_SoftSandGirl::
# 326 "data/maps/Route109/scripts.pory"
	lock
# 327 "data/maps/Route109/scripts.pory"
	faceplayer
# 328 "data/maps/Route109/scripts.pory"
	special GetPlayerBigGuyGirlString
# 329 "data/maps/Route109/scripts.pory"
	goto_if_set FLAG_RECEIVED_SOFT_SAND, Route109_EventScript_AlreadyReceivedSoftSand
# 330 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_YouCanHaveThis, MSGBOX_DEFAULT
# 331 "data/maps/Route109/scripts.pory"
	giveitem ITEM_SOFT_SAND
# 332 "data/maps/Route109/scripts.pory"
	goto_if_eq VAR_RESULT, 0, Common_EventScript_ShowBagIsFull
# 333 "data/maps/Route109/scripts.pory"
	closemessage
# 334 "data/maps/Route109/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 335 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 336 "data/maps/Route109/scripts.pory"
	setflag FLAG_RECEIVED_SOFT_SAND
# 337 "data/maps/Route109/scripts.pory"
	release
# 338 "data/maps/Route109/scripts.pory"
	end
# 339 "data/maps/Route109/scripts.pory"

# 340 "data/maps/Route109/scripts.pory"
Route109_EventScript_AlreadyReceivedSoftSand::
# 341 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_WereGoingToMakeBigCastle, MSGBOX_DEFAULT
# 342 "data/maps/Route109/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 343 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 344 "data/maps/Route109/scripts.pory"
	release
# 345 "data/maps/Route109/scripts.pory"
	end
# 346 "data/maps/Route109/scripts.pory"

# 347 "data/maps/Route109/scripts.pory"
Route109_EventScript_Woman::
# 348 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_LittleKidsDartAround, MSGBOX_NPC
# 349 "data/maps/Route109/scripts.pory"
	end
# 350 "data/maps/Route109/scripts.pory"

# 351 "data/maps/Route109/scripts.pory"
Route109_EventScript_OldMan::
# 352 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_ZigzagoonPicksUpLitter, MSGBOX_NPC
# 353 "data/maps/Route109/scripts.pory"
	end
# 354 "data/maps/Route109/scripts.pory"

# 355 "data/maps/Route109/scripts.pory"
Route109_EventScript_Zigzagoon::
# 356 "data/maps/Route109/scripts.pory"
	lock
# 357 "data/maps/Route109/scripts.pory"
	faceplayer
# 358 "data/maps/Route109/scripts.pory"
	waitse
# 359 "data/maps/Route109/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
# 360 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_ZigzagoonCry, MSGBOX_DEFAULT
# 361 "data/maps/Route109/scripts.pory"
	waitmoncry
# 362 "data/maps/Route109/scripts.pory"
	release
# 363 "data/maps/Route109/scripts.pory"
	end
# 364 "data/maps/Route109/scripts.pory"

# 365 "data/maps/Route109/scripts.pory"
Route109_EventScript_SeashoreHouseSign::
# 366 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_SeashoreHouseSign, MSGBOX_SIGN
# 367 "data/maps/Route109/scripts.pory"
	end
# 368 "data/maps/Route109/scripts.pory"

# 369 "data/maps/Route109/scripts.pory"
Route109_EventScript_TrainerTipsSign::
# 370 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_TrainerTipsSign, MSGBOX_SIGN
# 371 "data/maps/Route109/scripts.pory"
	end
# 372 "data/maps/Route109/scripts.pory"

# 373 "data/maps/Route109/scripts.pory"
Route109_EventScript_David::
# 374 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_DAVID, Route109_Text_DavidIntro, Route109_Text_DavidDefeated
# 375 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_DavidPostBattle, MSGBOX_AUTOCLOSE
# 376 "data/maps/Route109/scripts.pory"
	end
# 377 "data/maps/Route109/scripts.pory"

# 378 "data/maps/Route109/scripts.pory"
Route109_EventScript_Alice::
# 379 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_ALICE, Route109_Text_AliceIntro, Route109_Text_AliceDefeated
# 380 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_AlicePostBattle, MSGBOX_AUTOCLOSE
# 381 "data/maps/Route109/scripts.pory"
	end
# 382 "data/maps/Route109/scripts.pory"

# 383 "data/maps/Route109/scripts.pory"
Route109_EventScript_Huey::
# 384 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_HUEY, Route109_Text_HueyIntro, Route109_Text_HueyDefeated
# 385 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_HueyPostBattle, MSGBOX_AUTOCLOSE
# 386 "data/maps/Route109/scripts.pory"
	end
# 387 "data/maps/Route109/scripts.pory"

# 388 "data/maps/Route109/scripts.pory"
Route109_EventScript_Edmond::
# 389 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_EDMOND, Route109_Text_EdmondIntro, Route109_Text_EdmondDefeated
# 390 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_EdmondPostBattle, MSGBOX_AUTOCLOSE
# 391 "data/maps/Route109/scripts.pory"
	end
# 392 "data/maps/Route109/scripts.pory"

# 393 "data/maps/Route109/scripts.pory"
Route109_EventScript_Ricky::
# 394 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_RICKY_1, Route109_Text_RickyIntro, Route109_Text_RickyDefeated, Route109_EventScript_RickyRegisterMatchCallAfterBattle
# 395 "data/maps/Route109/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 396 "data/maps/Route109/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route109_EventScript_RickyRematch
# 397 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_RickyPostBattle, MSGBOX_DEFAULT
# 398 "data/maps/Route109/scripts.pory"
	release
# 399 "data/maps/Route109/scripts.pory"
	end
# 400 "data/maps/Route109/scripts.pory"

# 401 "data/maps/Route109/scripts.pory"
Route109_EventScript_RickyRegisterMatchCallAfterBattle::
# 402 "data/maps/Route109/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 403 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 404 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_RickyRegister, MSGBOX_DEFAULT
# 405 "data/maps/Route109/scripts.pory"
	register_matchcall TRAINER_RICKY_1
# 406 "data/maps/Route109/scripts.pory"
	release
# 407 "data/maps/Route109/scripts.pory"
	end
# 408 "data/maps/Route109/scripts.pory"

# 409 "data/maps/Route109/scripts.pory"
Route109_EventScript_RickyRematch::
# 410 "data/maps/Route109/scripts.pory"
	trainerbattle_rematch TRAINER_RICKY_1, Route109_Text_RickyRematchIntro, Route109_Text_RickyRematchDefeated
# 411 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_RickyRematchPostBattle, MSGBOX_AUTOCLOSE
# 412 "data/maps/Route109/scripts.pory"
	end
# 413 "data/maps/Route109/scripts.pory"

# 414 "data/maps/Route109/scripts.pory"
Route109_EventScript_Lola::
# 415 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_LOLA_1, Route109_Text_LolaIntro, Route109_Text_LolaDefeated, Route109_EventScript_LolaRegisterMatchCallAfterBattle
# 416 "data/maps/Route109/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 417 "data/maps/Route109/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route109_EventScript_LolaRematch
# 418 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_LolaPostBattle, MSGBOX_DEFAULT
# 419 "data/maps/Route109/scripts.pory"
	release
# 420 "data/maps/Route109/scripts.pory"
	end
# 421 "data/maps/Route109/scripts.pory"

# 422 "data/maps/Route109/scripts.pory"
Route109_EventScript_LolaRegisterMatchCallAfterBattle::
# 423 "data/maps/Route109/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 424 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 425 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_LolaRegister, MSGBOX_DEFAULT
# 426 "data/maps/Route109/scripts.pory"
	register_matchcall TRAINER_LOLA_1
# 427 "data/maps/Route109/scripts.pory"
	release
# 428 "data/maps/Route109/scripts.pory"
	end
# 429 "data/maps/Route109/scripts.pory"

# 430 "data/maps/Route109/scripts.pory"
Route109_EventScript_LolaRematch::
# 431 "data/maps/Route109/scripts.pory"
	trainerbattle_rematch TRAINER_LOLA_1, Route109_Text_LolaRematchIntro, Route109_Text_LolaRematchDefeated
# 432 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_LolaRematchPostBattle, MSGBOX_AUTOCLOSE
# 433 "data/maps/Route109/scripts.pory"
	end
# 434 "data/maps/Route109/scripts.pory"

# 435 "data/maps/Route109/scripts.pory"
Route109_EventScript_Austina::
# 436 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_AUSTINA, Route109_Text_AustinaIntro, Route109_Text_AustinaDefeated
# 437 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_AustinaPostBattle, MSGBOX_AUTOCLOSE
# 438 "data/maps/Route109/scripts.pory"
	end
# 439 "data/maps/Route109/scripts.pory"

# 440 "data/maps/Route109/scripts.pory"
Route109_EventScript_Gwen::
# 441 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_GWEN, Route109_Text_GwenIntro, Route109_Text_GwenDefeated
# 442 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_GwenPostBattle, MSGBOX_AUTOCLOSE
# 443 "data/maps/Route109/scripts.pory"
	end
# 444 "data/maps/Route109/scripts.pory"

# 445 "data/maps/Route109/scripts.pory"
Route109_EventScript_Carter::
# 446 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_CARTER, Route109_Text_CarterIntro, Route109_Text_CarterDefeated
# 447 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_CarterPostBattle, MSGBOX_AUTOCLOSE
# 448 "data/maps/Route109/scripts.pory"
	end
# 449 "data/maps/Route109/scripts.pory"

# 450 "data/maps/Route109/scripts.pory"
Route109_EventScript_Paul::
# 451 "data/maps/Route109/scripts.pory"
	trainerbattle_double TRAINER_MEL_AND_PAUL, Route109_Text_PaulIntro, Route109_Text_PaulDefeated, Route109_Text_PaulNotEnoughPokemon
# 452 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_PaulPostBattle, MSGBOX_AUTOCLOSE
# 453 "data/maps/Route109/scripts.pory"
	end
# 454 "data/maps/Route109/scripts.pory"

# 455 "data/maps/Route109/scripts.pory"
Route109_EventScript_Mel::
# 456 "data/maps/Route109/scripts.pory"
	trainerbattle_double TRAINER_MEL_AND_PAUL, Route109_Text_MelIntro, Route109_Text_MelDefeated, Route109_Text_MelNotEnoughPokemon
# 457 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_MelPostBattle, MSGBOX_AUTOCLOSE
# 458 "data/maps/Route109/scripts.pory"
	end
# 459 "data/maps/Route109/scripts.pory"

# 460 "data/maps/Route109/scripts.pory"
Route109_EventScript_Chandler::
# 461 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_CHANDLER, Route109_Text_ChandlerIntro, Route109_Text_ChandlerDefeated
# 462 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_ChandlerPostBattle, MSGBOX_AUTOCLOSE
# 463 "data/maps/Route109/scripts.pory"
	end
# 464 "data/maps/Route109/scripts.pory"

# 465 "data/maps/Route109/scripts.pory"
Route109_EventScript_Hailey::
# 466 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_HAILEY, Route109_Text_HaileyIntro, Route109_Text_HaileyDefeated
# 467 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_HaileyPostBattle, MSGBOX_AUTOCLOSE
# 468 "data/maps/Route109/scripts.pory"
	end
# 469 "data/maps/Route109/scripts.pory"

# 470 "data/maps/Route109/scripts.pory"
Route109_EventScript_Elijah::
# 471 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_ELIJAH, Route109_Text_ElijahIntro, Route109_Text_ElijahDefeated
# 472 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_ElijahPostBattle, MSGBOX_AUTOCLOSE
# 473 "data/maps/Route109/scripts.pory"
	end
# 474 "data/maps/Route109/scripts.pory"

# 475 "data/maps/Route109/scripts.pory"
DewfordTown_Text_BrineyLandedInSlateportDeliverGoods:
# 476 "data/maps/Route109/scripts.pory"
	.string "Ahoy!\n"
# 477 "data/maps/Route109/scripts.pory"
	.string "We've made land in Slateport!\p"
# 478 "data/maps/Route109/scripts.pory"
	.string "I suppose you're going to visit Capt.\n"
# 479 "data/maps/Route109/scripts.pory"
	.string "Stern and deliver the Devon Goods?$"
# 480 "data/maps/Route109/scripts.pory"

# 481 "data/maps/Route109/scripts.pory"
Route109_Text_BrineySailToDewfordQuestion:
# 482 "data/maps/Route109/scripts.pory"
	.string "I thought you're supposed to deliver\n"
# 483 "data/maps/Route109/scripts.pory"
	.string "the Devon Goods.\p"
# 484 "data/maps/Route109/scripts.pory"
	.string "Would you like to sail back to\n"
# 485 "data/maps/Route109/scripts.pory"
	.string "Dewford, then?$"
# 486 "data/maps/Route109/scripts.pory"

# 487 "data/maps/Route109/scripts.pory"
Route109_Text_BrineyDewfordItIs:
# 488 "data/maps/Route109/scripts.pory"
	.string "Dewford it is, then!\p"
# 489 "data/maps/Route109/scripts.pory"
	.string "Anchors aweigh!\n"
# 490 "data/maps/Route109/scripts.pory"
	.string "Peeko, we're setting sail, my darling!$"
# 491 "data/maps/Route109/scripts.pory"

# 492 "data/maps/Route109/scripts.pory"
Route109_Text_BrineyDeliverDevonGoods:
# 493 "data/maps/Route109/scripts.pory"
	.string "Then you go on and deliver the\n"
# 494 "data/maps/Route109/scripts.pory"
	.string "Devon Goods. I'll be waiting.$"
# 495 "data/maps/Route109/scripts.pory"

# 496 "data/maps/Route109/scripts.pory"
DewfordTown_Text_BrineyLandedInSlateport:
# 497 "data/maps/Route109/scripts.pory"
	.string "Ahoy! We've made land in Slateport!\p"
# 498 "data/maps/Route109/scripts.pory"
	.string "You just go on and tell me whenever\n"
# 499 "data/maps/Route109/scripts.pory"
	.string "you want to set sail again!$"
# 500 "data/maps/Route109/scripts.pory"

# 501 "data/maps/Route109/scripts.pory"
Route109_Text_BrineyWhereAreWeBound:
# 502 "data/maps/Route109/scripts.pory"
	.string "Ahoy!\n"
# 503 "data/maps/Route109/scripts.pory"
	.string "For you, I'll go out to sea anytime!\p"
# 504 "data/maps/Route109/scripts.pory"
	.string "Now, my friend, where are we bound?$"
# 505 "data/maps/Route109/scripts.pory"

# 506 "data/maps/Route109/scripts.pory"
Route109_Text_BrineyTellMeWhenYouNeedToSail:
# 507 "data/maps/Route109/scripts.pory"
	.string "You just tell me whenever you need\n"
# 508 "data/maps/Route109/scripts.pory"
	.string "to set sail again!$"
# 509 "data/maps/Route109/scripts.pory"

# 510 "data/maps/Route109/scripts.pory"
Route109_Text_ChillAtMyPapasSpot:
# 511 "data/maps/Route109/scripts.pory"
	.string "Yo, Trainers!\n"
# 512 "data/maps/Route109/scripts.pory"
	.string "Whether you're hot to trot,\l"
# 513 "data/maps/Route109/scripts.pory"
	.string "or cool cat not,\l"
# 514 "data/maps/Route109/scripts.pory"
	.string "chill at my papa's spot!$"
# 515 "data/maps/Route109/scripts.pory"

# 516 "data/maps/Route109/scripts.pory"
Route109_Text_LittleKidsDartAround:
# 517 "data/maps/Route109/scripts.pory"
	.string "Little kids can dart around so quickly…\p"
# 518 "data/maps/Route109/scripts.pory"
	.string "You don't dare take your eyes off them\n"
# 519 "data/maps/Route109/scripts.pory"
	.string "for an instant. It's very taxing.\p"
# 520 "data/maps/Route109/scripts.pory"
	.string "Mine are with my Pokémon, so they\n"
# 521 "data/maps/Route109/scripts.pory"
	.string "should be okay, but…$"
# 522 "data/maps/Route109/scripts.pory"

# 523 "data/maps/Route109/scripts.pory"
Route109_Text_SandCastleTakingLongTime:
# 524 "data/maps/Route109/scripts.pory"
	.string "Our sand castle's taking a long time\n"
# 525 "data/maps/Route109/scripts.pory"
	.string "to make.$"
# 526 "data/maps/Route109/scripts.pory"

# 527 "data/maps/Route109/scripts.pory"
Route109_Text_YouCanHaveThis:
# 528 "data/maps/Route109/scripts.pory"
	.string "You can have this!$"
# 529 "data/maps/Route109/scripts.pory"

# 530 "data/maps/Route109/scripts.pory"
Route109_Text_WereGoingToMakeBigCastle:
# 531 "data/maps/Route109/scripts.pory"
	.string "We're going to get all the sand from\n"
# 532 "data/maps/Route109/scripts.pory"
	.string "the beach and make a big castle!\p"
# 533 "data/maps/Route109/scripts.pory"
	.string "And then we're going to be a king and\n"
# 534 "data/maps/Route109/scripts.pory"
	.string "queen.\p"
# 535 "data/maps/Route109/scripts.pory"
	.string "We'll let you be a servant.$"
# 536 "data/maps/Route109/scripts.pory"

# 537 "data/maps/Route109/scripts.pory"
Route109_Text_ZigzagoonPicksUpLitter:
# 538 "data/maps/Route109/scripts.pory"
	.string "The water around these parts is clean.\p"
# 539 "data/maps/Route109/scripts.pory"
	.string "But, I get my Zigzagoon to pick up\n"
# 540 "data/maps/Route109/scripts.pory"
	.string "litter from the shoreline at times.\p"
# 541 "data/maps/Route109/scripts.pory"
	.string "Dirty water becomes rain and joins our\n"
# 542 "data/maps/Route109/scripts.pory"
	.string "rivers, which we drink from…\p"
# 543 "data/maps/Route109/scripts.pory"
	.string "If we pollute the sea, it all comes\n"
# 544 "data/maps/Route109/scripts.pory"
	.string "back to haunt us eventually.$"
# 545 "data/maps/Route109/scripts.pory"

# 546 "data/maps/Route109/scripts.pory"
Route109_Text_ZigzagoonCry:
# 547 "data/maps/Route109/scripts.pory"
	.string "Zigzagoon: Guguu?$"
# 548 "data/maps/Route109/scripts.pory"

# 549 "data/maps/Route109/scripts.pory"
Route109_Text_SeashoreHouseSign:
# 550 "data/maps/Route109/scripts.pory"
	.string "Seashore House\p"
# 551 "data/maps/Route109/scripts.pory"
	.string "“May hot battles rage on hot sands!\n"
# 552 "data/maps/Route109/scripts.pory"
	.string "The place for hot Trainers!”$"
# 553 "data/maps/Route109/scripts.pory"

# 554 "data/maps/Route109/scripts.pory"
Route109_Text_TrainerTipsSign:
# 555 "data/maps/Route109/scripts.pory"
	.string "Trainer Tips\p"
# 556 "data/maps/Route109/scripts.pory"
	.string "Pokémon at the same level may not\n"
# 557 "data/maps/Route109/scripts.pory"
	.string "always have identical stats.\p"
# 558 "data/maps/Route109/scripts.pory"
	.string "Pokémon raised by Trainers are said\n"
# 559 "data/maps/Route109/scripts.pory"
	.string "to grow stronger than wild Pokémon.$"
