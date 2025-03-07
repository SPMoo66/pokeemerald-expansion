RustboroCity_EventScript_Looker::
# 2 "data/looker.pory"
	lock
# 3 "data/looker.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 4 "data/looker.pory"
	addobject LOOKER_RUSTBORO
# 5 "data/looker.pory"
	setobjectxy LOOKER_RUSTBORO, 21, 15
# 6 "data/looker.pory"
	special SpawnCameraObject
# 7 "data/looker.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkRight2
# 8 "data/looker.pory"
	waitmovement 0
# 9 "data/looker.pory"
	playbgm MUS_PL_LOOKER, FALSE
# 10 "data/looker.pory"
	applymovement LOOKER_RUSTBORO, RustboroCity_LookerMove
# 11 "data/looker.pory"
	waitmovement 0
# 12 "data/looker.pory"
	removeobject LOOKER_RUSTBORO
# 13 "data/looker.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 8
# 14 "data/looker.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkLeft2
# 15 "data/looker.pory"
	waitmovement 0
# 16 "data/looker.pory"
	special RemoveCameraObject
# 17 "data/looker.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 18 "data/looker.pory"
	fadedefaultbgm
# 19 "data/looker.pory"
	goto Rival_Scene03
	return


# 22 "data/looker.pory"
RustboroCity_LookerMove:
# 23 "data/looker.pory"
	walk_down
# 23 "data/looker.pory"
	walk_down
# 23 "data/looker.pory"
	walk_down
# 23 "data/looker.pory"
	walk_down
# 24 "data/looker.pory"
	delay_16
# 24 "data/looker.pory"
	delay_16
# 25 "data/looker.pory"
	walk_in_place_faster_up
# 26 "data/looker.pory"
	delay_16
# 26 "data/looker.pory"
	delay_16
# 26 "data/looker.pory"
	delay_16
# 26 "data/looker.pory"
	delay_16
# 27 "data/looker.pory"
	walk_down
# 27 "data/looker.pory"
	walk_down
# 28 "data/looker.pory"
	delay_16
# 29 "data/looker.pory"
	walk_in_place_right
# 30 "data/looker.pory"
	delay_16
# 30 "data/looker.pory"
	delay_16
# 30 "data/looker.pory"
	delay_16
# 30 "data/looker.pory"
	delay_16
# 31 "data/looker.pory"
	walk_down
# 31 "data/looker.pory"
	walk_down
# 32 "data/looker.pory"
	delay_16
# 32 "data/looker.pory"
	delay_16
# 33 "data/looker.pory"
	walk_faster_up
# 33 "data/looker.pory"
	walk_faster_up
# 33 "data/looker.pory"
	walk_faster_up
# 33 "data/looker.pory"
	walk_faster_up
# 34 "data/looker.pory"
	delay_16
# 34 "data/looker.pory"
	delay_16
# 34 "data/looker.pory"
	delay_16
# 34 "data/looker.pory"
	delay_16
# 35 "data/looker.pory"
	lock_facing_direction
# 36 "data/looker.pory"
	walk_slow_down
# 36 "data/looker.pory"
	walk_slow_down
# 36 "data/looker.pory"
	walk_slow_down
# 37 "data/looker.pory"
	delay_16
# 38 "data/looker.pory"
	unlock_facing_direction
# 39 "data/looker.pory"
	walk_faster_down
# 39 "data/looker.pory"
	walk_faster_down
# 39 "data/looker.pory"
	walk_faster_down
# 39 "data/looker.pory"
	walk_faster_down
# 39 "data/looker.pory"
	walk_faster_down
# 39 "data/looker.pory"
	walk_faster_down
# 39 "data/looker.pory"
	walk_faster_down
	step_end

SlateportCity_EventScript_Looker::
# 43 "data/looker.pory"
	lock
# 44 "data/looker.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 45 "data/looker.pory"
	addobject LOOKER_SLATEPORT
# 46 "data/looker.pory"
	setobjectxy LOOKER_SLATEPORT, VAR_TEMP_0, 16
# 47 "data/looker.pory"
	playbgm MUS_PL_LOOKER, FALSE
# 48 "data/looker.pory"
	applymovement LOOKER_SLATEPORT, SlateportCity_LookerMove1
# 49 "data/looker.pory"
	waitmovement 0
# 50 "data/looker.pory"
	playse SE_SUPER_EFFECTIVE
# 51 "data/looker.pory"
	applymovement LOOKER_SLATEPORT, SlateportCity_LookerMove2
# 52 "data/looker.pory"
	waitmovement 0
# 53 "data/looker.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 54 "data/looker.pory"
	waitmovement 0
# 55 "data/looker.pory"
	speakername CommonText_Q
# 56 "data/looker.pory"
	msgbox SlateportCity_EventScript_Looker_Text_0
# 59 "data/looker.pory"
	playse SE_PIN
# 60 "data/looker.pory"
	applymovement LOOKER_SLATEPORT, Common_Movement_ExclamationMark
# 61 "data/looker.pory"
	waitmovement 0
# 62 "data/looker.pory"
	delay 50
# 63 "data/looker.pory"
	msgbox SlateportCity_EventScript_Looker_Text_1
# 65 "data/looker.pory"
	applymovement LOOKER_SLATEPORT, Common_Movement_WalkInPlaceFasterDown
# 66 "data/looker.pory"
	waitmovement 0
# 67 "data/looker.pory"
	msgbox SlateportCity_EventScript_Looker_Text_2
# 69 "data/looker.pory"
	closemessage
# 70 "data/looker.pory"
	delay 30
# 71 "data/looker.pory"
	applymovement LOOKER_SLATEPORT, Common_Movement_WalkInPlaceFasterUp
# 72 "data/looker.pory"
	waitmovement 0
# 73 "data/looker.pory"
	speakername CommonText_Looker
# 74 "data/looker.pory"
	msgbox SlateportCity_EventScript_Looker_Text_3
# 84 "data/looker.pory"
	closemessage
# 85 "data/looker.pory"
	compare VAR_TEMP_0, 19
	goto_if_eq SlateportCity_EventScript_Looker_2
# 89 "data/looker.pory"
	applymovement LOOKER_SLATEPORT, Common_Movement_WalkRight
SlateportCity_EventScript_Looker_1:
# 91 "data/looker.pory"
	waitmovement 0
# 92 "data/looker.pory"
	applymovement LOOKER_SLATEPORT, Common_Movement_WalkUp7
# 93 "data/looker.pory"
	waitmovement 0
# 94 "data/looker.pory"
	removeobject LOOKER_SLATEPORT
# 95 "data/looker.pory"
	setvar VAR_SLATEPORT_CITY_STATE, 1
# 96 "data/looker.pory"
	fadedefaultbgm
# 97 "data/looker.pory"
	release
	return

SlateportCity_EventScript_Looker_2:
# 86 "data/looker.pory"
	applymovement LOOKER_SLATEPORT, Common_Movement_WalkLeft
	goto SlateportCity_EventScript_Looker_1


# 100 "data/looker.pory"
SlateportCity_LookerMove1:
# 101 "data/looker.pory"
	walk_faster_up
# 101 "data/looker.pory"
	walk_faster_up
# 101 "data/looker.pory"
	walk_faster_up
# 101 "data/looker.pory"
	walk_faster_up
# 101 "data/looker.pory"
	walk_faster_up
# 101 "data/looker.pory"
	walk_faster_up
	step_end

# 104 "data/looker.pory"
SlateportCity_LookerMove2:
# 105 "data/looker.pory"
	lock_facing_direction
# 106 "data/looker.pory"
	walk_slow_down
# 107 "data/looker.pory"
	unlock_facing_direction
# 108 "data/looker.pory"
	delay_16
# 108 "data/looker.pory"
	delay_16
	step_end

Route115_EventScript_Looker::
# 112 "data/looker.pory"
	lock
# 113 "data/looker.pory"
	playbgm MUS_DP_LAKE_EVENT, FALSE
# 114 "data/looker.pory"
	pokenavcall Route115_Text_Looker_Call
# 115 "data/looker.pory"
	waitmessage
# 116 "data/looker.pory"
	delay 30
# 117 "data/looker.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 118 "data/looker.pory"
	msgbox MatchCall_Text_RegisteredLooker, MSGBOX_DEFAULT
# 119 "data/looker.pory"
	waitfanfare
# 120 "data/looker.pory"
	closemessage
# 121 "data/looker.pory"
	delay 30
# 122 "data/looker.pory"
	setflag FLAG_ENABLE_LOOKER_MATCH_CALL
# 123 "data/looker.pory"
	setvar VAR_LOOKER_ROCKET, 1
# 124 "data/looker.pory"
	fadedefaultbgm
# 125 "data/looker.pory"
	release
	return


RustboroCity_EventScript_Looker_2::
# 149 "data/looker.pory"
	lock
# 150 "data/looker.pory"
	playbgm MUS_PL_LOOKER, FALSE
# 151 "data/looker.pory"
	pokenavcall RustboroCity_Text_Looker_Call
# 152 "data/looker.pory"
	waitmessage
# 153 "data/looker.pory"
	closemessage
# 154 "data/looker.pory"
	setvar VAR_LOOKER_ROCKET, 8
# 155 "data/looker.pory"
	fadedefaultbgm
# 156 "data/looker.pory"
	release
	return


FortreeCity_EventScript_Looker::
# 182 "data/looker.pory"
	lock
# 183 "data/looker.pory"
	speakername CommonText_Looker
# 184 "data/looker.pory"
	msgbox FortreeCity_EventScript_Looker_Text_0
# 188 "data/looker.pory"
	release
	return


SootopolisCity_EventScript_Looker::
# 192 "data/looker.pory"
	lock
# 193 "data/looker.pory"
	playbgm MUS_PL_LOOKER, FALSE
# 194 "data/looker.pory"
	pokenavcall SootopolisCity_Text_Looker_Call
# 195 "data/looker.pory"
	waitmessage
# 196 "data/looker.pory"
	closemessage
# 197 "data/looker.pory"
	setvar VAR_LOOKER_ROCKET, 9
# 198 "data/looker.pory"
	fadedefaultbgm
# 199 "data/looker.pory"
	release
	return


TrainerHill_Looker1::
# 215 "data/looker.pory"
	lock
# 216 "data/looker.pory"
	speakername CommonText_Looker
# 217 "data/looker.pory"
	msgbox TrainerHill_Looker1_Text_0
# 219 "data/looker.pory"
	closemessage
# 220 "data/looker.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 221 "data/looker.pory"
	waitmovement 0
# 222 "data/looker.pory"
	applymovement LOOKER_TRAINERHILL, Common_Movement_WalkLeft
# 223 "data/looker.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 224 "data/looker.pory"
	waitmovement 0
# 225 "data/looker.pory"
	applymovement LOOKER_TRAINERHILL, Common_Movement_WalkLeft6
# 226 "data/looker.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft6
# 227 "data/looker.pory"
	waitmovement 0
# 228 "data/looker.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 229 "data/looker.pory"
	applymovement LOOKER_TRAINERHILL, Common_Movement_WalkUp
# 230 "data/looker.pory"
	waitmovement 0
# 231 "data/looker.pory"
	applymovement LOOKER_TRAINERHILL, Common_Movement_WalkLeft
# 232 "data/looker.pory"
	waitmovement 0
# 233 "data/looker.pory"
	applymovement LOOKER_TRAINERHILL, Common_Movement_WalkInPlaceDown
# 234 "data/looker.pory"
	waitmovement 0
# 235 "data/looker.pory"
	speakername CommonText_Looker
# 236 "data/looker.pory"
	msgbox TrainerHill_Looker1_Text_1
# 242 "data/looker.pory"
	closemessage
# 243 "data/looker.pory"
	setvar VAR_LOOKER_ROCKET, 10
# 244 "data/looker.pory"
	release
	return


TrainerHill_SetLooker::
# 248 "data/looker.pory"
	compare VAR_LOOKER_ROCKET, 11
	goto_if_le TrainerHill_SetLooker_4
TrainerHill_SetLooker_3:
# 253 "data/looker.pory"
	compare VAR_LOOKER_ROCKET, 9
	goto_if_eq TrainerHill_SetLooker_2
	return

TrainerHill_SetLooker_1:
# 249 "data/looker.pory"
	clearflag FLAG_TEMP_1
# 250 "data/looker.pory"
	addobject LOOKER_TRAINERHILL
# 251 "data/looker.pory"
	setobjectxyperm LOOKER_TRAINERHILL, 1, 13
	return

TrainerHill_SetLooker_2:
# 254 "data/looker.pory"
	clearflag FLAG_TEMP_1
	return

TrainerHill_SetLooker_4:
# 248 "data/looker.pory"
	compare VAR_LOOKER_ROCKET, 10
	goto_if_ge TrainerHill_SetLooker_1
	goto TrainerHill_SetLooker_3


TrainerHill_LookerSwitch::
# 260 "data/looker.pory"
	compare VAR_LOOKER_ROCKET, 10
	goto_if_eq TrainerHill_LookerSwitch_1
	return

TrainerHill_LookerSwitch_1:
# 261 "data/looker.pory"
	lock
# 262 "data/looker.pory"
	playse SE_SWITCH
# 263 "data/looker.pory"
	delay 20
# 264 "data/looker.pory"
	playse SE_UNLOCK
# 265 "data/looker.pory"
	call TrainerHill_SetRocketRefuge
# 266 "data/looker.pory"
	delay 30
# 267 "data/looker.pory"
	playse SE_PIN
# 268 "data/looker.pory"
	applymovement LOOKER_TRAINERHILL, Common_Movement_ExclamationMark
# 269 "data/looker.pory"
	waitmovement 0
# 270 "data/looker.pory"
	delay 50
# 271 "data/looker.pory"
	speakername CommonText_Looker
# 272 "data/looker.pory"
	msgbox TrainerHill_LookerSwitch_Text_0
# 274 "data/looker.pory"
	msgbox TrainerHill_Text_LookerGoIn, MSGBOX_DEFAULT
# 275 "data/looker.pory"
	setvar VAR_LOOKER_ROCKET, 11
# 276 "data/looker.pory"
	release
	return


TrainerHill_SetRocketRefuge::
# 281 "data/looker.pory"
	setmetatile 0, 14, 0x3D0, TRUE
# 282 "data/looker.pory"
	setmetatile 1, 14, 0x3D1, TRUE
# 283 "data/looker.pory"
	setmetatile 2, 14, 0x3D2, FALSE
# 284 "data/looker.pory"
	setmetatile 0, 15, 0x3D8, TRUE
# 285 "data/looker.pory"
	setmetatile 1, 15, 0x3D9, TRUE
# 286 "data/looker.pory"
	setmetatile 2, 15, 0x3DA, FALSE
# 287 "data/looker.pory"
	setmetatile 0, 16, 0x3E0, TRUE
# 288 "data/looker.pory"
	setmetatile 1, 16, 0x3E1, TRUE
# 289 "data/looker.pory"
	setmetatile 2, 16, 0x3E2, FALSE
# 290 "data/looker.pory"
	special DrawWholeMapView
	return


TrainerHill_LookerTalk::
# 295 "data/looker.pory"
	compare VAR_LOOKER_ROCKET, 10
	goto_if_eq TrainerHill_LookerTalk_2
TrainerHill_LookerTalk_1:
# 298 "data/looker.pory"
	compare VAR_LOOKER_ROCKET, 11
	goto_if_eq TrainerHill_LookerTalk_4
	return

TrainerHill_LookerTalk_2:
# 296 "data/looker.pory"
	goto TrainerHill_Looker2
	goto TrainerHill_LookerTalk_1

TrainerHill_LookerTalk_4:
# 299 "data/looker.pory"
	goto TrainerHill_Looker3
	return


TrainerHill_Looker2::
# 305 "data/looker.pory"
	lock
# 306 "data/looker.pory"
	faceplayer
# 307 "data/looker.pory"
	speakername CommonText_Looker
# 308 "data/looker.pory"
	msgbox TrainerHill_Looker2_Text_0
# 310 "data/looker.pory"
	closemessage
# 311 "data/looker.pory"
	applymovement LOOKER_TRAINERHILL, Common_Movement_WalkInPlaceDown
# 312 "data/looker.pory"
	waitmovement 0
# 313 "data/looker.pory"
	release
	return


TrainerHill_Looker3::
# 317 "data/looker.pory"
	lock
# 318 "data/looker.pory"
	faceplayer
# 319 "data/looker.pory"
	speakername CommonText_Looker
# 320 "data/looker.pory"
	msgbox TrainerHill_Text_LookerGoIn, MSGBOX_DEFAULT
# 321 "data/looker.pory"
	release
	return


SlateportCity_EventScript_Looker_Text_0:
# 56 "data/looker.pory"
	.string "Ah!\n"
	.string "My greatest apologies. It seems as\l"
	.string "though running through the City\l"
	.string "without paying any mind was a poor\l"
	.string "choice.\p"
	.string "I am-$"

SlateportCity_EventScript_Looker_Text_1:
# 63 "data/looker.pory"
	.string "No!\n"
	.string "Is it possible that you have already\l"
	.string "suspected that I am a part of the\l"
	.string "International Police?$"

SlateportCity_EventScript_Looker_Text_2:
# 67 "data/looker.pory"
	.string "No, this is very bad, for an agent such\n"
	.string "as myself to have his cover blown so\l"
	.string "quickly…\p"
	.string "How could I ever show my face again at\n"
	.string "headquarters?!$"

SlateportCity_EventScript_Looker_Text_3:
# 74 "data/looker.pory"
	.string "Very well, you may refer to me as\n"
	.string "Looker!\p"
	.string "My name? A codename, yes.\n"
	.string "An elite agent such as myself must keep\l"
	.string "many secrets.\p"
	.string "I am here in Hoenn to root out enemy\n"
	.string "agents of the world!\p"
	.string "Team Aqua?\n"
	.string "Team Magma?\l"
	.string "I know none of the sort!\p"
	.string "No, I am on the tail of other evildoers\n"
	.string "that spread chaos through the world.\p"
	.string "If you come across any such persons, be\n"
	.string "sure to make me aware!\p"
	.string "Farewell, then!$"

FortreeCity_EventScript_Looker_Text_0:
# 184 "data/looker.pory"
	.string "Greetings, {PLAYER}.\p"
	.string "I am still on the hunt for Team Rocket,\n"
	.string "but I will inform you immediately should\l"
	.string "I get a lead on them.$"

TrainerHill_Looker1_Text_0:
# 217 "data/looker.pory"
	.string "It is good that you are here.\p"
	.string "Follow me. We cannot squander any time.$"

TrainerHill_Looker1_Text_1:
# 236 "data/looker.pory"
	.string "Feast your eyes on this!\p"
	.string "… … …\n"
	.string "No, this is not just a bollard, but one\l"
	.string "with a secret switch hidden on it!\p"
	.string "Go ahead, press the switch and see for\n"
	.string "yourself!$"

TrainerHill_LookerSwitch_Text_0:
# 272 "data/looker.pory"
	.string "Yes!\n"
	.string "Just as I suspected!$"

TrainerHill_Looker2_Text_0:
# 308 "data/looker.pory"
	.string "What are you waiting for?\p"
	.string "Go ahead and press the switch.$"

Route115_Text_Looker_Call::
# 128 "data/looker.pory"
	.string "… … … … … Beep!\p"
	.string "Looker: {PLAYER}!\p"
	.string "Quickly, I am in dire need of your\n"
	.string "help!\l"
	.string "I have managed to track down our\l"
	.string "adversaries at last!\p"
	.string "Come to Devoncorp in Rustboro as\n"
	.string "soon as you are able.\l"
	.string "The enemy, they've already\l"
	.string "launched an attack!\p"
	.string "… … … … … Click!$"

MatchCall_Text_RegisteredLooker::
# 142 "data/looker.pory"
	.string "Registered Looker\n"
	.string "in the Pokénav.$"

RustboroCity_Text_Looker_Call::
# 159 "data/looker.pory"
	.string "… … … … … Beep!\p"
	.string "Looker: {PLAYER}!\p"
	.string "You are safe, yes?\p"
	.string "It seems that in my haste,\n"
	.string "focusing on the safety of\l"
	.string "civilians while escorting our\l"
	.string "villainous boss to the police,\l"
	.string "he gave me the slip!\p"
	.string "You have not seen him, no?\p"
	.string "… … … … …\n"
	.string "No? That is unfortunate.\p"
	.string "Continue on your journey then.\n"
	.string "I will begin the manhunt for our\l"
	.string "escapee.\p"
	.string "Your job will be to stay safe, and\n"
	.string "if you sight him, contact me\l"
	.string "immediately.\p"
	.string "Stay safe, {PLAYER}!\p"
	.string "… … … … … Click!$"

SootopolisCity_Text_Looker_Call::
# 202 "data/looker.pory"
	.string "… … … … … Beep!\p"
	.string "Looker: I have discerned the\n"
	.string "current location of Team Rocket!\p"
	.string "{PLAYER}, please join me at\n"
	.string "Trainer Hill on Route 111!\p"
	.string "There is the location at which we\n"
	.string "will make our stand against Team\l"
	.string "Rocket!$"

TrainerHill_Text_LookerGoIn::
# 324 "data/looker.pory"
	.string "Go on inside.\n"
	.string "I will be right behind you.$"
