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
	playfanfare MUS_HG_LETS_GO_TOGETHER
# 49 "data/expansion_1/follower01.pory"
	delay 20
# 50 "data/expansion_1/follower01.pory"
	call SubmergedCave_1F_3R_StartHarperFollower
# 51 "data/expansion_1/follower01.pory"
	delay 20
# 52 "data/expansion_1/follower01.pory"
	helpwindow HELP_EXPANSION_1_NPC_FOLLOWERS
# 53 "data/expansion_1/follower01.pory"
	helpwindow HELP_EXPANSION_1_NPC_FOLLOWERS_2
# 54 "data/expansion_1/follower01.pory"
	release
	return


Expansion1_Follower1_Restart::
# 58 "data/expansion_1/follower01.pory"
	speakername CommonText_Harper
# 59 "data/expansion_1/follower01.pory"
	msgbox Expansion1_Follower1_Restart_Text_0, MSGBOX_AUTOCLOSE
# 61 "data/expansion_1/follower01.pory"
	call SubmergedCave_1F_3R_StartHarperFollower
# 62 "data/expansion_1/follower01.pory"
	release
	return


SubmergedCave_1F_3R_StartHarperFollower::
# 67 "data/expansion_1/follower01.pory"
	setfollowernpc 1, 0, Expansion1_Follower_Harper1, PARTNER_FOLLOWER_HARPER_SUBMERGED_CAVE
# 68 "data/expansion_1/follower01.pory"
	hidefollowernpc
# 69 "data/expansion_1/follower01.pory"
	setflag FLAG_SYS_HIDE_FOLLOWERS
# 70 "data/expansion_1/follower01.pory"
	setflag FLAG_TEMP_1
# 71 "data/expansion_1/follower01.pory"
	setvar VAR_TEMP_5, 0
# 72 "data/expansion_1/follower01.pory"
	setrespawn HEAL_LOCATION_SUBMERGED_CAVE_1F_3R
	return


SubmergedCave_1F_3R_ClearHarperFollower::
# 76 "data/expansion_1/follower01.pory"
	goto_if_set FLAG_SYS_HIDE_FOLLOWERS, SubmergedCave_1F_3R_ClearHarperFollower_2
	return

SubmergedCave_1F_3R_ClearHarperFollower_1:
# 77 "data/expansion_1/follower01.pory"
	getobjectfacingdirection LOCALID_PLAYER, VAR_TEMP_0
# 78 "data/expansion_1/follower01.pory"
	facefollowernpc
# 79 "data/expansion_1/follower01.pory"
	speakername CommonText_Harper
# 80 "data/expansion_1/follower01.pory"
	msgbox SubmergedCave_1F_3R_ClearHarperFollower_Text_0, MSGBOX_YESNO
# 83 "data/expansion_1/follower01.pory"
	closemessage
# 84 "data/expansion_1/follower01.pory"
	speakername CommonText_Harper
# 85 "data/expansion_1/follower01.pory"
	compare VAR_RESULT, 1
	goto_if_eq SubmergedCave_1F_3R_ClearHarperFollower_6
# 125 "data/expansion_1/follower01.pory"
	msgbox SubmergedCave_1F_3R_ClearHarperFollower_Text_2, MSGBOX_AUTOCLOSE
# 126 "data/expansion_1/follower01.pory"
	switch VAR_TEMP_0
# 127 "data/expansion_1/follower01.pory"
	case DIR_NORTH, SubmergedCave_1F_3R_ClearHarperFollower_18
# 129 "data/expansion_1/follower01.pory"
	case DIR_SOUTH, SubmergedCave_1F_3R_ClearHarperFollower_19
# 132 "data/expansion_1/follower01.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkLeft
SubmergedCave_1F_3R_ClearHarperFollower_16:
# 134 "data/expansion_1/follower01.pory"
	waitmovement 0
SubmergedCave_1F_3R_ClearHarperFollower_5:
# 136 "data/expansion_1/follower01.pory"
	release
	return

SubmergedCave_1F_3R_ClearHarperFollower_2:
# 76 "data/expansion_1/follower01.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 31
	goto_if_lt SubmergedCave_1F_3R_ClearHarperFollower_1
	return

SubmergedCave_1F_3R_ClearHarperFollower_6:
# 86 "data/expansion_1/follower01.pory"
	clearflag FLAG_SYS_HIDE_FOLLOWERS
# 87 "data/expansion_1/follower01.pory"
	compare VAR_TEMP_0, DIR_SOUTH
	goto_if_eq SubmergedCave_1F_3R_ClearHarperFollower_10
# 91 "data/expansion_1/follower01.pory"
	compare VAR_TEMP_0, DIR_EAST
	goto_if_eq SubmergedCave_1F_3R_ClearHarperFollower_11
# 95 "data/expansion_1/follower01.pory"
	compare VAR_TEMP_0, DIR_NORTH
	goto_if_eq SubmergedCave_1F_3R_ClearHarperFollower_12
SubmergedCave_1F_3R_ClearHarperFollower_9:
# 99 "data/expansion_1/follower01.pory"
	msgbox SubmergedCave_1F_3R_ClearHarperFollower_Text_1, MSGBOX_AUTOCLOSE
# 101 "data/expansion_1/follower01.pory"
	addobject 1
# 102 "data/expansion_1/follower01.pory"
	destroyfollowernpc
# 104 "data/expansion_1/follower01.pory"
	compare VAR_TEMP_0, DIR_SOUTH
	goto_if_eq SubmergedCave_1F_3R_ClearHarperFollower_22
# 109 "data/expansion_1/follower01.pory"
	compare VAR_TEMP_0, DIR_EAST
	goto_if_eq SubmergedCave_1F_3R_ClearHarperFollower_23
# 112 "data/expansion_1/follower01.pory"
	compare VAR_TEMP_0, DIR_NORTH
	goto_if_eq SubmergedCave_1F_3R_ClearHarperFollower_24
SubmergedCave_1F_3R_ClearHarperFollower_21:
# 117 "data/expansion_1/follower01.pory"
	waitmovement 0
# 118 "data/expansion_1/follower01.pory"
	turnobject 1, DIR_EAST
# 119 "data/expansion_1/follower01.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_LOOK_AROUND
# 120 "data/expansion_1/follower01.pory"
	setvar VAR_TEMP_1, 0
# 121 "data/expansion_1/follower01.pory"
	setvar VAR_TEMP_5, 1
# 122 "data/expansion_1/follower01.pory"
	setrespawn HEAL_LOCATION_MAUVE_CAMP
	goto SubmergedCave_1F_3R_ClearHarperFollower_5

SubmergedCave_1F_3R_ClearHarperFollower_10:
# 88 "data/expansion_1/follower01.pory"
	setobjectxyperm 1, 8, 3
# 89 "data/expansion_1/follower01.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
	goto SubmergedCave_1F_3R_ClearHarperFollower_9

SubmergedCave_1F_3R_ClearHarperFollower_11:
# 92 "data/expansion_1/follower01.pory"
	setobjectxyperm 1, 7, 4
# 93 "data/expansion_1/follower01.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_RIGHT
	goto SubmergedCave_1F_3R_ClearHarperFollower_9

SubmergedCave_1F_3R_ClearHarperFollower_12:
# 96 "data/expansion_1/follower01.pory"
	setobjectxyperm 1, 8, 5
# 97 "data/expansion_1/follower01.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_UP
	goto SubmergedCave_1F_3R_ClearHarperFollower_9

SubmergedCave_1F_3R_ClearHarperFollower_18:
# 128 "data/expansion_1/follower01.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
	goto SubmergedCave_1F_3R_ClearHarperFollower_16

SubmergedCave_1F_3R_ClearHarperFollower_19:
# 130 "data/expansion_1/follower01.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
	goto SubmergedCave_1F_3R_ClearHarperFollower_16

SubmergedCave_1F_3R_ClearHarperFollower_22:
# 105 "data/expansion_1/follower01.pory"
	applymovement 1, Common_Movement_WalkLeft3
# 106 "data/expansion_1/follower01.pory"
	waitmovement 0
# 107 "data/expansion_1/follower01.pory"
	applymovement 1, Common_Movement_WalkDown
	goto SubmergedCave_1F_3R_ClearHarperFollower_21

SubmergedCave_1F_3R_ClearHarperFollower_23:
# 110 "data/expansion_1/follower01.pory"
	applymovement 1, Common_Movement_WalkLeft2
	goto SubmergedCave_1F_3R_ClearHarperFollower_21

SubmergedCave_1F_3R_ClearHarperFollower_24:
# 113 "data/expansion_1/follower01.pory"
	applymovement 1, Common_Movement_WalkLeft3
# 114 "data/expansion_1/follower01.pory"
	waitmovement 0
# 115 "data/expansion_1/follower01.pory"
	applymovement 1, Common_Movement_WalkUp
	goto SubmergedCave_1F_3R_ClearHarperFollower_21


Expansion1_Follower_Harper1_Talking1::
# 141 "data/expansion_1/follower01.pory"
	playse SE_CLICK
# 142 "data/expansion_1/follower01.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_Talking
# 143 "data/expansion_1/follower01.pory"
	delay 60
# 144 "data/expansion_1/follower01.pory"
	facefollowernpc
# 145 "data/expansion_1/follower01.pory"
	speakername CommonText_Harper
# 146 "data/expansion_1/follower01.pory"
	msgbox Expansion1_Follower_Harper1_Talking1_Text_0, MSGBOX_AUTOCLOSE
# 162 "data/expansion_1/follower01.pory"
	setvar VAR_EMERALBODY_RIVAL_STATE, 28
	return


Expansion1_Follower_Harper1_Talking2::
# 166 "data/expansion_1/follower01.pory"
	playse SE_CLICK
# 167 "data/expansion_1/follower01.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_Talking
# 168 "data/expansion_1/follower01.pory"
	delay 60
# 169 "data/expansion_1/follower01.pory"
	facefollowernpc
# 170 "data/expansion_1/follower01.pory"
	speakername CommonText_Harper
# 171 "data/expansion_1/follower01.pory"
	msgbox Expansion1_Follower_Harper1_Talking2_Text_0, MSGBOX_AUTOCLOSE
# 190 "data/expansion_1/follower01.pory"
	setvar VAR_EMERALBODY_RIVAL_STATE, 29
	return


Expansion1_Follower_Harper1_Talking3::
# 194 "data/expansion_1/follower01.pory"
	playse SE_CLICK
# 195 "data/expansion_1/follower01.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_Talking
# 196 "data/expansion_1/follower01.pory"
	delay 60
# 197 "data/expansion_1/follower01.pory"
	facefollowernpc
# 198 "data/expansion_1/follower01.pory"
	speakername CommonText_Harper
# 199 "data/expansion_1/follower01.pory"
	msgbox Expansion1_Follower_Harper1_Talking3_Text_0, MSGBOX_AUTOCLOSE
# 212 "data/expansion_1/follower01.pory"
	setvar VAR_EMERALBODY_RIVAL_STATE, 30
	return


Expansion1_Rival_Scene04::
# 216 "data/expansion_1/follower01.pory"
	playse SE_CLICK
# 217 "data/expansion_1/follower01.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_Talking
# 218 "data/expansion_1/follower01.pory"
	delay 60
# 219 "data/expansion_1/follower01.pory"
	facefollowernpc
# 220 "data/expansion_1/follower01.pory"
	speakername CommonText_Harper
# 221 "data/expansion_1/follower01.pory"
	msgbox Expansion1_Rival_Scene04_Text_0, MSGBOX_AUTOCLOSE
# 234 "data/expansion_1/follower01.pory"
	applymovement LOCALID_PLAYER, Common_Movement_LockFacingDirection
# 235 "data/expansion_1/follower01.pory"
	waitmovement 0
# 236 "data/expansion_1/follower01.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkLeft
# 237 "data/expansion_1/follower01.pory"
	waitmovement 0
# 238 "data/expansion_1/follower01.pory"
	addobject 6
# 239 "data/expansion_1/follower01.pory"
	destroyfollowernpc
# 240 "data/expansion_1/follower01.pory"
	applymovement 6, Common_Movement_WalkLeft
# 241 "data/expansion_1/follower01.pory"
	waitmovement 0
# 242 "data/expansion_1/follower01.pory"
	applymovement LOCALID_PLAYER, Common_Movement_UnlockFacingDirection
# 243 "data/expansion_1/follower01.pory"
	applymovement 6, Common_Movement_WalkDown
# 244 "data/expansion_1/follower01.pory"
	waitmovement 0
# 245 "data/expansion_1/follower01.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceDown
# 246 "data/expansion_1/follower01.pory"
	applymovement 6, Common_Movement_WalkLeft
# 247 "data/expansion_1/follower01.pory"
	waitmovement 0
# 248 "data/expansion_1/follower01.pory"
	applymovement 6, Common_Movement_WalkInPlaceDown
# 249 "data/expansion_1/follower01.pory"
	waitmovement 0
# 250 "data/expansion_1/follower01.pory"
	delay 10
# 251 "data/expansion_1/follower01.pory"
	removeobject 6
# 252 "data/expansion_1/follower01.pory"
	playse SE_EXIT
# 253 "data/expansion_1/follower01.pory"
	waitse
# 254 "data/expansion_1/follower01.pory"
	clearflag FLAG_SYS_HIDE_FOLLOWERS
# 255 "data/expansion_1/follower01.pory"
	setrespawn HEAL_LOCATION_MAUVE_CAMP
# 256 "data/expansion_1/follower01.pory"
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
	.string "Let's just… {PAUSE 100}forget that happened…\p"
	.string "… {PAUSE 30}… {PAUSE 30}…{PAUSE 30}\n"
	.string "… {PAUSE 30}… {PAUSE 30}…\l"
	.string "Oh, {PLAYER}, how wonderful it is to\l"
	.string "see you!\p"
	.string "… {PAUSE 30}… {PAUSE 30}…{PAUSE 30}\n"
	.string "… {PAUSE 30}… {PAUSE 30}…\l"
	.string "Now that that's out of the way…\p"
	.string "WHAT THE HELL IS GOING ON HERE?\p"
	.string "I'VE BEEN STUCK IN THIS DARK CAVE {PAUSE 30}FOR{PAUSE 60}\n"
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
# 59 "data/expansion_1/follower01.pory"
	.string "{PLAYER}, let's get moving.\p"
	.string "I can taste my revenge already.$"

SubmergedCave_1F_3R_ClearHarperFollower_Text_0:
# 80 "data/expansion_1/follower01.pory"
	.string "I want to get moving, but…\p"
	.string "Do you really need to go back,\n"
	.string "{PLAYER}?$"

SubmergedCave_1F_3R_ClearHarperFollower_Text_1:
# 99 "data/expansion_1/follower01.pory"
	.string "Alright, fine… Just hurry up and get\n"
	.string "back as soon as you can.$"

SubmergedCave_1F_3R_ClearHarperFollower_Text_2:
# 125 "data/expansion_1/follower01.pory"
	.string "Good, let's get going.$"

Expansion1_Follower_Harper1_Talking1_Text_0:
# 146 "data/expansion_1/follower01.pory"
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
# 171 "data/expansion_1/follower01.pory"
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
	.string "You could just… {PAUSE 100}torture the sillly\n"
	.string "goobers. No consequence. No pain.\p"
	.string "…{PAUSE 100}Shit.\p"
	.string "If it works like that here, would my\n"
	.string "revenge really be satisfying here…?\p"
	.string "{EMOJI_BIGWHEEL}Crosses fingers{EMOJI_BIGWHEEL}{PAUSE 60}\n"
	.string "Please use the VR headset's physics\l"
	.string "engine…!$"

Expansion1_Follower_Harper1_Talking3_Text_0:
# 199 "data/expansion_1/follower01.pory"
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
# 221 "data/expansion_1/follower01.pory"
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
