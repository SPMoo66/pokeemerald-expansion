Expansion1_Rival_Scene03::
# 7 "data/expansion_1/follower01.pory"
	speakername CommonText_Harper
# 8 "data/expansion_1/follower01.pory"
	msgbox Expansion1_Rival_Scene03_Text_0, MSGBOX_AUTOCLOSE
# 19 "data/expansion_1/follower01.pory"
	applymovement 1, Common_Movement_SweatDrop
# 20 "data/expansion_1/follower01.pory"
	playse SE_M_METRONOME
# 21 "data/expansion_1/follower01.pory"
	delay 40
# 22 "data/expansion_1/follower01.pory"
	speakername CommonText_Harper
# 23 "data/expansion_1/follower01.pory"
	msgbox Expansion1_Rival_Scene03_Text_1, MSGBOX_AUTOCLOSE
# 36 "data/expansion_1/follower01.pory"
	applymovement 1, Common_Movement_XMark
# 37 "data/expansion_1/follower01.pory"
	playse SE_THUNDER
# 38 "data/expansion_1/follower01.pory"
	delay 80
# 39 "data/expansion_1/follower01.pory"
	speakername CommonText_Harper
# 40 "data/expansion_1/follower01.pory"
	msgbox Expansion1_Rival_Scene03_Text_2, MSGBOX_AUTOCLOSE
# 47 "data/expansion_1/follower01.pory"
	setvar VAR_EMERALBODY_RIVAL_STATE, 27
# 48 "data/expansion_1/follower01.pory"
	goto SubmergedCave_1F_3R_StartHarperFollower
	return


Expansion1_Follower1_Restart::
# 52 "data/expansion_1/follower01.pory"
	speakername CommonText_Harper
# 53 "data/expansion_1/follower01.pory"
	msgbox Expansion1_Follower1_Restart_Text_0, MSGBOX_AUTOCLOSE
# 55 "data/expansion_1/follower01.pory"
	goto SubmergedCave_1F_3R_StartHarperFollower
	return


SubmergedCave_1F_3R_StartHarperFollower::
# 60 "data/expansion_1/follower01.pory"
	setfollowernpc 1, 0, Expansion1_Follower_Harper1, PARTNER_FOLLOWER_HARPER_SUBMERGED_CAVE
# 61 "data/expansion_1/follower01.pory"
	hidefollowernpc
# 62 "data/expansion_1/follower01.pory"
	setflag FLAG_SYS_HIDE_FOLLOWERS
# 63 "data/expansion_1/follower01.pory"
	setflag FLAG_TEMP_1
# 64 "data/expansion_1/follower01.pory"
	setvar VAR_TEMP_5, 0
# 65 "data/expansion_1/follower01.pory"
	release
	return


SubmergedCave_1F_3R_ClearHarperFollower::
# 69 "data/expansion_1/follower01.pory"
	goto_if_set FLAG_SYS_HIDE_FOLLOWERS, SubmergedCave_1F_3R_ClearHarperFollower_2
	return

SubmergedCave_1F_3R_ClearHarperFollower_1:
# 70 "data/expansion_1/follower01.pory"
	getobjectfacingdirection LOCALID_PLAYER, VAR_TEMP_0
# 71 "data/expansion_1/follower01.pory"
	facefollowernpc
# 72 "data/expansion_1/follower01.pory"
	speakername CommonText_Harper
# 73 "data/expansion_1/follower01.pory"
	msgbox SubmergedCave_1F_3R_ClearHarperFollower_Text_0, MSGBOX_YESNO
# 76 "data/expansion_1/follower01.pory"
	closemessage
# 77 "data/expansion_1/follower01.pory"
	speakername CommonText_Harper
# 78 "data/expansion_1/follower01.pory"
	compare VAR_RESULT, 1
	goto_if_eq SubmergedCave_1F_3R_ClearHarperFollower_6
# 118 "data/expansion_1/follower01.pory"
	msgbox SubmergedCave_1F_3R_ClearHarperFollower_Text_2, MSGBOX_AUTOCLOSE
# 119 "data/expansion_1/follower01.pory"
	switch VAR_TEMP_0
# 120 "data/expansion_1/follower01.pory"
	case DIR_NORTH, SubmergedCave_1F_3R_ClearHarperFollower_18
# 122 "data/expansion_1/follower01.pory"
	case DIR_SOUTH, SubmergedCave_1F_3R_ClearHarperFollower_19
# 125 "data/expansion_1/follower01.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkLeft
SubmergedCave_1F_3R_ClearHarperFollower_16:
# 127 "data/expansion_1/follower01.pory"
	waitmovement 0
SubmergedCave_1F_3R_ClearHarperFollower_5:
# 129 "data/expansion_1/follower01.pory"
	release
	return

SubmergedCave_1F_3R_ClearHarperFollower_2:
# 69 "data/expansion_1/follower01.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 31
	goto_if_lt SubmergedCave_1F_3R_ClearHarperFollower_1
	return

SubmergedCave_1F_3R_ClearHarperFollower_6:
# 79 "data/expansion_1/follower01.pory"
	clearflag FLAG_SYS_HIDE_FOLLOWERS
# 80 "data/expansion_1/follower01.pory"
	compare VAR_TEMP_0, DIR_SOUTH
	goto_if_eq SubmergedCave_1F_3R_ClearHarperFollower_10
# 84 "data/expansion_1/follower01.pory"
	compare VAR_TEMP_0, DIR_EAST
	goto_if_eq SubmergedCave_1F_3R_ClearHarperFollower_11
# 88 "data/expansion_1/follower01.pory"
	compare VAR_TEMP_0, DIR_NORTH
	goto_if_eq SubmergedCave_1F_3R_ClearHarperFollower_12
SubmergedCave_1F_3R_ClearHarperFollower_9:
# 92 "data/expansion_1/follower01.pory"
	msgbox SubmergedCave_1F_3R_ClearHarperFollower_Text_1, MSGBOX_AUTOCLOSE
# 94 "data/expansion_1/follower01.pory"
	addobject 1
# 95 "data/expansion_1/follower01.pory"
	destroyfollowernpc
# 97 "data/expansion_1/follower01.pory"
	compare VAR_TEMP_0, DIR_SOUTH
	goto_if_eq SubmergedCave_1F_3R_ClearHarperFollower_22
# 102 "data/expansion_1/follower01.pory"
	compare VAR_TEMP_0, DIR_EAST
	goto_if_eq SubmergedCave_1F_3R_ClearHarperFollower_23
# 105 "data/expansion_1/follower01.pory"
	compare VAR_TEMP_0, DIR_NORTH
	goto_if_eq SubmergedCave_1F_3R_ClearHarperFollower_24
SubmergedCave_1F_3R_ClearHarperFollower_21:
# 111 "data/expansion_1/follower01.pory"
	waitmovement 0
# 112 "data/expansion_1/follower01.pory"
	turnobject 1, DIR_EAST
# 113 "data/expansion_1/follower01.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_LOOK_AROUND
# 114 "data/expansion_1/follower01.pory"
	setvar VAR_TEMP_1, 0
# 115 "data/expansion_1/follower01.pory"
	setvar VAR_TEMP_5, 1
	goto SubmergedCave_1F_3R_ClearHarperFollower_5

SubmergedCave_1F_3R_ClearHarperFollower_10:
# 81 "data/expansion_1/follower01.pory"
	setobjectxyperm 1, 8, 3
# 82 "data/expansion_1/follower01.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
	goto SubmergedCave_1F_3R_ClearHarperFollower_9

SubmergedCave_1F_3R_ClearHarperFollower_11:
# 85 "data/expansion_1/follower01.pory"
	setobjectxyperm 1, 7, 4
# 86 "data/expansion_1/follower01.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_RIGHT
	goto SubmergedCave_1F_3R_ClearHarperFollower_9

SubmergedCave_1F_3R_ClearHarperFollower_12:
# 89 "data/expansion_1/follower01.pory"
	setobjectxyperm 1, 8, 5
# 90 "data/expansion_1/follower01.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_UP
	goto SubmergedCave_1F_3R_ClearHarperFollower_9

SubmergedCave_1F_3R_ClearHarperFollower_18:
# 121 "data/expansion_1/follower01.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
	goto SubmergedCave_1F_3R_ClearHarperFollower_16

SubmergedCave_1F_3R_ClearHarperFollower_19:
# 123 "data/expansion_1/follower01.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
	goto SubmergedCave_1F_3R_ClearHarperFollower_16

SubmergedCave_1F_3R_ClearHarperFollower_22:
# 98 "data/expansion_1/follower01.pory"
	applymovement 1, Common_Movement_WalkLeft3
# 99 "data/expansion_1/follower01.pory"
	waitmovement 0
# 100 "data/expansion_1/follower01.pory"
	applymovement 1, Common_Movement_WalkDown
	goto SubmergedCave_1F_3R_ClearHarperFollower_21

SubmergedCave_1F_3R_ClearHarperFollower_23:
# 103 "data/expansion_1/follower01.pory"
	applymovement 1, Common_Movement_WalkLeft2
	goto SubmergedCave_1F_3R_ClearHarperFollower_21

SubmergedCave_1F_3R_ClearHarperFollower_24:
# 106 "data/expansion_1/follower01.pory"
	applymovement 1, Common_Movement_WalkLeft3
# 107 "data/expansion_1/follower01.pory"
	waitmovement 0
# 108 "data/expansion_1/follower01.pory"
	applymovement 1, Common_Movement_WalkUp
	goto SubmergedCave_1F_3R_ClearHarperFollower_21


Expansion1_Follower_Harper1_Talking1::
# 134 "data/expansion_1/follower01.pory"
	playse SE_CLICK
# 135 "data/expansion_1/follower01.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_Talking
# 136 "data/expansion_1/follower01.pory"
	delay 60
# 137 "data/expansion_1/follower01.pory"
	facefollowernpc
# 138 "data/expansion_1/follower01.pory"
	speakername CommonText_Harper
# 139 "data/expansion_1/follower01.pory"
	msgbox Expansion1_Follower_Harper1_Talking1_Text_0, MSGBOX_AUTOCLOSE
# 155 "data/expansion_1/follower01.pory"
	setvar VAR_EMERALBODY_RIVAL_STATE, 28
	return


Expansion1_Follower_Harper1_Talking2::
# 159 "data/expansion_1/follower01.pory"
	playse SE_CLICK
# 160 "data/expansion_1/follower01.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_Talking
# 161 "data/expansion_1/follower01.pory"
	delay 60
# 162 "data/expansion_1/follower01.pory"
	facefollowernpc
# 163 "data/expansion_1/follower01.pory"
	speakername CommonText_Harper
# 164 "data/expansion_1/follower01.pory"
	msgbox Expansion1_Follower_Harper1_Talking2_Text_0, MSGBOX_AUTOCLOSE
# 183 "data/expansion_1/follower01.pory"
	setvar VAR_EMERALBODY_RIVAL_STATE, 29
	return


Expansion1_Follower_Harper1_Talking3::
# 187 "data/expansion_1/follower01.pory"
	playse SE_CLICK
# 188 "data/expansion_1/follower01.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_Talking
# 189 "data/expansion_1/follower01.pory"
	delay 60
# 190 "data/expansion_1/follower01.pory"
	facefollowernpc
# 191 "data/expansion_1/follower01.pory"
	speakername CommonText_Harper
# 192 "data/expansion_1/follower01.pory"
	msgbox Expansion1_Follower_Harper1_Talking3_Text_0, MSGBOX_AUTOCLOSE
# 205 "data/expansion_1/follower01.pory"
	setvar VAR_EMERALBODY_RIVAL_STATE, 30
	return


Expansion1_Rival_Scene04::
# 209 "data/expansion_1/follower01.pory"
	facefollowernpc
# 210 "data/expansion_1/follower01.pory"
	speakername CommonText_Harper
# 211 "data/expansion_1/follower01.pory"
	msgbox Expansion1_Rival_Scene04_Text_0, MSGBOX_AUTOCLOSE
# 224 "data/expansion_1/follower01.pory"
	applymovement LOCALID_PLAYER, Common_Movement_LockFacingDirection
# 225 "data/expansion_1/follower01.pory"
	waitmovement 0
# 226 "data/expansion_1/follower01.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkLeft
# 227 "data/expansion_1/follower01.pory"
	waitmovement 0
# 228 "data/expansion_1/follower01.pory"
	addobject 6
# 229 "data/expansion_1/follower01.pory"
	destroyfollowernpc
# 230 "data/expansion_1/follower01.pory"
	applymovement 6, Common_Movement_WalkLeft
# 231 "data/expansion_1/follower01.pory"
	waitmovement 0
# 232 "data/expansion_1/follower01.pory"
	applymovement LOCALID_PLAYER, Common_Movement_UnlockFacingDirection
# 233 "data/expansion_1/follower01.pory"
	applymovement 6, Common_Movement_WalkDown
# 234 "data/expansion_1/follower01.pory"
	waitmovement 0
# 235 "data/expansion_1/follower01.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceDown
# 236 "data/expansion_1/follower01.pory"
	applymovement 6, Common_Movement_WalkLeft
# 237 "data/expansion_1/follower01.pory"
	waitmovement 0
# 238 "data/expansion_1/follower01.pory"
	applymovement 6, Common_Movement_WalkInPlaceDown
# 239 "data/expansion_1/follower01.pory"
	waitmovement 0
# 240 "data/expansion_1/follower01.pory"
	delay 10
# 241 "data/expansion_1/follower01.pory"
	removeobject 6
# 242 "data/expansion_1/follower01.pory"
	playse SE_EXIT
# 243 "data/expansion_1/follower01.pory"
	waitse
# 244 "data/expansion_1/follower01.pory"
	clearflag FLAG_SYS_HIDE_FOLLOWERS
# 245 "data/expansion_1/follower01.pory"
	setvar VAR_EMERALBODY_RIVAL_STATE, 31
	return


Expansion1_Rival_Scene03_Text_0:
# 8 "data/expansion_1/follower01.pory"
	.string "Hm?\p"
	.string "Well, isn't that a familiar face?\p"
	.string "Anyone could log-in using that generic,\n"
	.string "avatar though…\p"
	.string "{EMOJI_BIGWHEEL}Furrows brow{EMOJI_BIGWHEEL}\p"
	.string "Say something only {PLAYER}\n"
	.string "would know.\p"
	.string "… {PAUSE 30}… {PAUSE 30}…{PAUSE 30}\n"
	.string "… {PAUSE 30}… {PAUSE 30}…\p"
	.string "S- Shut up! I meant something less\n"
	.string "“trauma-bonding memory” coded!!!$"

Expansion1_Rival_Scene03_Text_1:
# 23 "data/expansion_1/follower01.pory"
	.string "Let's just… forget that happened…\p"
	.string "… {PAUSE 30}… {PAUSE 30}…{PAUSE 30}\n"
	.string "… {PAUSE 30}… {PAUSE 30}…\l"
	.string "Oh, {PLAYER}, how wonderful it is to\l"
	.string "see you!\p"
	.string "… {PAUSE 30}… {PAUSE 30}…{PAUSE 30}\n"
	.string "… {PAUSE 30}… {PAUSE 30}…\l"
	.string "Now that that's out of the way…\p"
	.string "WHAT THE HELL IS GOING ON HERE?\p"
	.string "I'VE BEEN STUCK IN THIS DARK CAVE FOR\n"
	.string "HOURS!\p"
	.string "NOBODY EVEN REPLIES TO MY MESSAGES\n"
	.string "ON ENCORE ASKING FOR HELP!$"

Expansion1_Rival_Scene03_Text_2:
# 40 "data/expansion_1/follower01.pory"
	.string "Jakson better have a good reason for\n"
	.string "this.\p"
	.string "You probably didn't have a part in this.\p"
	.string "Still… {PAUSE 100}I command you to take me to\n"
	.string "Jakson right now!\p"
	.string "That face is gonna get a piece of\n"
	.string "my mind…!$"

Expansion1_Follower1_Restart_Text_0:
# 53 "data/expansion_1/follower01.pory"
	.string "{PLAYER}, let's get moving.\p"
	.string "I can taste my revenge already.$"

SubmergedCave_1F_3R_ClearHarperFollower_Text_0:
# 73 "data/expansion_1/follower01.pory"
	.string "I want to get moving, but…\p"
	.string "Do you really need to go back,\n"
	.string "{PLAYER}?$"

SubmergedCave_1F_3R_ClearHarperFollower_Text_1:
# 92 "data/expansion_1/follower01.pory"
	.string "Alright, fine… Just hurry up and get\n"
	.string "back as soon as you can.$"

SubmergedCave_1F_3R_ClearHarperFollower_Text_2:
# 118 "data/expansion_1/follower01.pory"
	.string "Good, let's get going.$"

Expansion1_Follower_Harper1_Talking1_Text_0:
# 139 "data/expansion_1/follower01.pory"
	.string "Heaven forbid the mod devs let you\n"
	.string "see in front of your face here…\l"
	.string "It… {PAUSE 100}was… {PAUSE 100}SO dark earlier!\p"
	.string "I sometimes wonder if mod creators\n"
	.string "do it on purpose. If they're trying\l"
	.string "to troll people.\p"
	.string "… {PAUSE 30}… {PAUSE 30}…{PAUSE 30}\n"
	.string "… {PAUSE 30}… {PAUSE 30}…\l"
	.string "I know, you're right. They did make\l"
	.string "that “light” item… {PAUSE 100}Even still.\p"
	.string "I've downloaded my share of add-ons\n"
	.string "to games, and it always feels like\l"
	.string "there's… {PAUSE 100}something that happens.\p"
	.string "Now the question is what did they\n"
	.string "hide beyond the light at the end\l"
	.string "of the tunnel…?$"

Expansion1_Follower_Harper1_Talking2_Text_0:
# 164 "data/expansion_1/follower01.pory"
	.string "Hey, about the boat crash.\p"
	.string "You don't think this game simulates\n"
	.string "injury to the characters or anything,\l"
	.string "right?\p"
	.string "It's kind of funny to imagine us all\n"
	.string "being thrown around violently, but\l"
	.string "completely safe at the same time.\p"
	.string "Ah… {PAUSE 100}I remember when that trend came\n"
	.string "around again when we were kids.\l"
	.string "Physics games designed to play\l"
	.string "around with the ragdoll mechanics.\p"
	.string "You could just… torture the sillly\n"
	.string "goobers. No consequence. No pain.\p"
	.string "…{PAUSE 100}Shit.\p"
	.string "If it works like that here, would my\n"
	.string "revenge really be satisfying here…?\p"
	.string "{EMOJI_BIGWHEEL}Crosses fingers{EMOJI_BIGWHEEL}\n"
	.string "Please use the VR headset's physics\l"
	.string "engine…!$"

Expansion1_Follower_Harper1_Talking3_Text_0:
# 192 "data/expansion_1/follower01.pory"
	.string "Hey, {PLAYER}.\p"
	.string "I haven't said it yet, so…\p"
	.string "Thanks for coming to save me.\p"
	.string "I was really mad before, but working\n"
	.string "through this with you has helped me\l"
	.string "cool down.\p"
	.string "I mean, I'm still going to give Jakson\n"
	.string "what for, but…\p"
	.string "Anyway, I always have appreciated the\n"
	.string "help and support you've given me in\l"
	.string "this game.\p"
	.string "I'll try to give you help, too.\n"
	.string "At least, where I can.$"

Expansion1_Rival_Scene04_Text_0:
# 211 "data/expansion_1/follower01.pory"
	.string "Looks like we're free at last!\p"
	.string "All that and we didn't even run into\n"
	.string "whatever story event is in there.\p"
	.string "Maybe the modder just forgot?\p"
	.string "Argh! {PAUSE 30}Screw them, too!\p"
	.string "Point me to wherever Jakson is.\n"
	.string "He's got an appointment with a boot.\p"
	.string "…\p"
	.string "Just surface and head East, right?\p"
	.string "Perfect.\n"
	.string "{EMOJI_BIGWHEEL}Cracks knuckles{EMOJI_BIGWHEEL}\p"
	.string "I'll meet back with you, {PAUSE 30}and the others,{PAUSE 30}\n"
	.string "there!$"
