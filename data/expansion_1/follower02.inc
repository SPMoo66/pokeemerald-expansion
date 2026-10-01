Expansion1_Rival_Scene06::
# 7 "data/expansion_1/follower02.pory"
	speakername CommonText_Harper
# 8 "data/expansion_1/follower02.pory"
	msgbox Expansion1_Rival_Scene06_Text_0, MSGBOX_AUTOCLOSE
# 20 "data/expansion_1/follower02.pory"
	setvar VAR_EMERALBODY_RIVAL_STATE, 34
# 21 "data/expansion_1/follower02.pory"
	playfanfare MUS_HG_LETS_GO_TOGETHER
# 22 "data/expansion_1/follower02.pory"
	delay 20
# 23 "data/expansion_1/follower02.pory"
	goto SSTidalDungeon_StartHarperFollower
	return


Expansion1_Follower2_Restart::
# 27 "data/expansion_1/follower02.pory"
	speakername CommonText_Harper
# 28 "data/expansion_1/follower02.pory"
	msgbox Expansion1_Follower2_Restart_Text_0, MSGBOX_AUTOCLOSE
# 30 "data/expansion_1/follower02.pory"
	goto SSTidalDungeon_StartHarperFollower
	return


SSTidalDungeon_StartHarperFollower::
# 35 "data/expansion_1/follower02.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
# 36 "data/expansion_1/follower02.pory"
	waitmovement 0
# 37 "data/expansion_1/follower02.pory"
	setfollowernpc HARPER_SUBMERGED_CAVE, 0, Expansion1_Follower_Harper2, PARTNER_FOLLOWER_HARPER_SUBMERGED_CAVE
# 38 "data/expansion_1/follower02.pory"
	hidefollowernpc
# 39 "data/expansion_1/follower02.pory"
	setflag FLAG_SYS_HIDE_FOLLOWERS
# 40 "data/expansion_1/follower02.pory"
	setflag FLAG_TEMP_1
# 41 "data/expansion_1/follower02.pory"
	setvar VAR_TEMP_5, 0
# 42 "data/expansion_1/follower02.pory"
	setrespawn HEAL_LOCATION_SS_TIDAL_DUNGEON_1F_1R
# 43 "data/expansion_1/follower02.pory"
	release
	return


SSTidalDungeon_ClearHarperFollower::
# 47 "data/expansion_1/follower02.pory"
	goto_if_set FLAG_SYS_HIDE_FOLLOWERS, SSTidalDungeon_ClearHarperFollower_2
	return

SSTidalDungeon_ClearHarperFollower_1:
# 48 "data/expansion_1/follower02.pory"
	getobjectfacingdirection LOCALID_PLAYER, VAR_TEMP_0
# 49 "data/expansion_1/follower02.pory"
	facefollowernpc
# 50 "data/expansion_1/follower02.pory"
	speakername CommonText_Harper
# 51 "data/expansion_1/follower02.pory"
	msgbox SSTidalDungeon_ClearHarperFollower_Text_0, MSGBOX_YESNO
# 52 "data/expansion_1/follower02.pory"
	closemessage
# 53 "data/expansion_1/follower02.pory"
	speakername CommonText_Harper
# 54 "data/expansion_1/follower02.pory"
	compare VAR_RESULT, 1
	goto_if_eq SSTidalDungeon_ClearHarperFollower_6
# 65 "data/expansion_1/follower02.pory"
	msgbox SSTidalDungeon_ClearHarperFollower_Text_2, MSGBOX_AUTOCLOSE
# 67 "data/expansion_1/follower02.pory"
	compare VAR_TEMP_0, DIR_WEST
	goto_if_eq SSTidalDungeon_ClearHarperFollower_10
# 71 "data/expansion_1/follower02.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
SSTidalDungeon_ClearHarperFollower_9:
# 73 "data/expansion_1/follower02.pory"
	waitmovement 0
SSTidalDungeon_ClearHarperFollower_5:
# 75 "data/expansion_1/follower02.pory"
	release
	return

SSTidalDungeon_ClearHarperFollower_2:
# 47 "data/expansion_1/follower02.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 39
	goto_if_lt SSTidalDungeon_ClearHarperFollower_1
	return

SSTidalDungeon_ClearHarperFollower_6:
# 55 "data/expansion_1/follower02.pory"
	clearflag FLAG_SYS_HIDE_FOLLOWERS
# 56 "data/expansion_1/follower02.pory"
	msgbox SSTidalDungeon_ClearHarperFollower_Text_1
# 57 "data/expansion_1/follower02.pory"
	closemessage
# 58 "data/expansion_1/follower02.pory"
	setvar VAR_TEMP_5, 1
# 59 "data/expansion_1/follower02.pory"
	fadescreen FADE_TO_BLACK
# 60 "data/expansion_1/follower02.pory"
	destroyfollowernpc
# 61 "data/expansion_1/follower02.pory"
	setrespawn HEAL_LOCATION_MAUVE_CAMP
# 62 "data/expansion_1/follower02.pory"
	warp MAP_MAUVE_ISLAND_SOUTH, 0
	goto SSTidalDungeon_ClearHarperFollower_5

SSTidalDungeon_ClearHarperFollower_10:
# 68 "data/expansion_1/follower02.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight
	goto SSTidalDungeon_ClearHarperFollower_9


Expansion1_Follower_Harper2_Talking1::
# 80 "data/expansion_1/follower02.pory"
	playse SE_CLICK
# 81 "data/expansion_1/follower02.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_Talking
# 82 "data/expansion_1/follower02.pory"
	delay 60
# 83 "data/expansion_1/follower02.pory"
	facefollowernpc
# 84 "data/expansion_1/follower02.pory"
	speakername CommonText_Harper
# 85 "data/expansion_1/follower02.pory"
	msgbox Expansion1_Follower_Harper2_Talking1_Text_0, MSGBOX_AUTOCLOSE
# 97 "data/expansion_1/follower02.pory"
	setvar VAR_EMERALBODY_RIVAL_STATE, 35
	return


Expansion1_Follower_Harper2_Talking2::
# 101 "data/expansion_1/follower02.pory"
	playse SE_CLICK
# 102 "data/expansion_1/follower02.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_Talking
# 103 "data/expansion_1/follower02.pory"
	delay 60
# 104 "data/expansion_1/follower02.pory"
	facefollowernpc
# 105 "data/expansion_1/follower02.pory"
	speakername CommonText_Harper
# 106 "data/expansion_1/follower02.pory"
	msgbox Expansion1_Follower_Harper2_Talking2_Text_0, MSGBOX_AUTOCLOSE
# 116 "data/expansion_1/follower02.pory"
	setvar VAR_EMERALBODY_RIVAL_STATE, 36
	return


Expansion1_Rival_Scene06_Text_0:
# 8 "data/expansion_1/follower02.pory"
	.string "It's about time you showed up,\n"
	.string "{PLAYER}.\p"
	.string "{EMOJI_BIGWHEEL}Cracks her neck{EMOJI_BIGWHEEL}\p"
	.string "I'll let you take point again.\p"
	.string "Just make sure we find some action.\n"
	.string "I need to vent a bit.\p"
	.string "So…\p"
	.string "Let's get that dynamite and well…{PAUSE 100}\n"
	.string "…\l"
	.string "…{PAUSE 100}blow this popsicle stand… {PAUSE 100}right?\p"
	.string "Agh, sorry about that one.\p"
	.string "Just do what you have to.$"

Expansion1_Follower2_Restart_Text_0:
# 28 "data/expansion_1/follower02.pory"
	.string "Yo, let's get a move on.\p"
	.string "There's gotta be something in here.$"

SSTidalDungeon_ClearHarperFollower_Text_0:
# 51 "data/expansion_1/follower02.pory"
	.string "What, are you calling it off for now?$"

SSTidalDungeon_ClearHarperFollower_Text_1:
# 56 "data/expansion_1/follower02.pory"
	.string "Alright. I'll wait, then.$"

SSTidalDungeon_ClearHarperFollower_Text_2:
# 65 "data/expansion_1/follower02.pory"
	.string "Good, let's hurry up and get that\n"
	.string "dynamite.$"

Expansion1_Follower_Harper2_Talking1_Text_0:
# 85 "data/expansion_1/follower02.pory"
	.string "Well, it doesn't really seem like this is\n"
	.string "much of a ‘shipwreck’, does it?\p"
	.string "The environment just pulls graphics\n"
	.string "from the other ships we've been on.\p"
	.string "…{PAUSE 100}I'm starting to think the monster\n"
	.string "attack wasn't even a scripted event.\p"
	.string "Not like it'd be the first thing to just\n"
	.string "break outright in this mod.\p"
	.string "Has me on my toes, at least?\n"
	.string "There are less interesting journeys.\p"
	.string "…{PAUSE 100}better than getting stuck in a dark\n"
	.string "cave for most of it, eh?$"

Expansion1_Follower_Harper2_Talking2_Text_0:
# 106 "data/expansion_1/follower02.pory"
	.string "Well, through the basement and now\n"
	.string "we're to… {PAUSE 100}more cabins?\p"
	.string "Imagine having to walk through storage\n"
	.string "every time you go to your room.\p"
	.string "I'd criticize Game Freak for the map\n"
	.string "design like all the ones before it\l"
	.string "but this is all custom, right?\p"
	.string "Ah, Jakson…{PAUSE 100}\n"
	.string "Vet the mods a little more before you\l"
	.string "add them, please.$"
