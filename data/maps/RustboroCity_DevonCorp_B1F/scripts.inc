RustboroCity_DevonCorp_B1F_MapScripts::
# 7 "data/maps/RustboroCity_DevonCorp_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RustboroCity_DevonCorp_B1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 4 "data/maps/RustboroCity_DevonCorp_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, RustboroCity_DevonCorp_B1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

RustboroCity_DevonCorp_B1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 8 "data/maps/RustboroCity_DevonCorp_B1F/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
	return

RustboroCity_DevonCorp_B1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 5 "data/maps/RustboroCity_DevonCorp_B1F/scripts.pory"
	map_script_2 VAR_LOOKER_ROCKET, 4, Devoncorp_B1F_Intro
	.2byte 0


Devoncorp_B1F_Intro::
# 13 "data/maps/RustboroCity_DevonCorp_B1F/scripts.pory"
	special SpawnCameraObject
# 14 "data/maps/RustboroCity_DevonCorp_B1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PanDownLeft3
# 15 "data/maps/RustboroCity_DevonCorp_B1F/scripts.pory"
	waitmovement 0
# 16 "data/maps/RustboroCity_DevonCorp_B1F/scripts.pory"
	delay 20
# 17 "data/maps/RustboroCity_DevonCorp_B1F/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterDown
# 18 "data/maps/RustboroCity_DevonCorp_B1F/scripts.pory"
	waitmovement 0
# 19 "data/maps/RustboroCity_DevonCorp_B1F/scripts.pory"
	delay 20
# 20 "data/maps/RustboroCity_DevonCorp_B1F/scripts.pory"
	msgbox Devoncorp_B1F_Intro_Text_0, MSGBOX_AUTOCLOSE
# 21 "data/maps/RustboroCity_DevonCorp_B1F/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterLeft
# 22 "data/maps/RustboroCity_DevonCorp_B1F/scripts.pory"
	waitmovement 0
# 23 "data/maps/RustboroCity_DevonCorp_B1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PanUpRight3
# 24 "data/maps/RustboroCity_DevonCorp_B1F/scripts.pory"
	waitmovement 0
# 25 "data/maps/RustboroCity_DevonCorp_B1F/scripts.pory"
	special RemoveCameraObject
# 26 "data/maps/RustboroCity_DevonCorp_B1F/scripts.pory"
	setvar VAR_LOOKER_ROCKET, 5
	return


Devoncorp_B1F_RocketGrunt_1::
# 30 "data/maps/RustboroCity_DevonCorp_B1F/scripts.pory"
	trainerbattle_single TRAINER_ROCKET_GRUNT_DEVONCORP_1, Devoncorp_B1F_RocketGrunt_1_Text_0, Devoncorp_B1F_RocketGrunt_1_Text_1
# 31 "data/maps/RustboroCity_DevonCorp_B1F/scripts.pory"
	msgbox Devoncorp_B1F_RocketGrunt_1_Text_2, MSGBOX_AUTOCLOSE
	return


Devoncorp_B1F_RocketGrunt_2::
# 35 "data/maps/RustboroCity_DevonCorp_B1F/scripts.pory"
	trainerbattle_single TRAINER_ROCKET_GRUNT_DEVONCORP_2, Devoncorp_B1F_RocketGrunt_2_Text_0, Devoncorp_B1F_RocketGrunt_2_Text_1
# 36 "data/maps/RustboroCity_DevonCorp_B1F/scripts.pory"
	msgbox Devoncorp_B1F_RocketGrunt_2_Text_2, MSGBOX_AUTOCLOSE
	return


Devoncorp_B1F_RocketGrunt_3::
# 40 "data/maps/RustboroCity_DevonCorp_B1F/scripts.pory"
	trainerbattle_single TRAINER_ROCKET_GRUNT_DEVONCORP_3, Devoncorp_B1F_RocketGrunt_3_Text_0, Devoncorp_B1F_RocketGrunt_3_Text_1
# 41 "data/maps/RustboroCity_DevonCorp_B1F/scripts.pory"
	msgbox Devoncorp_B1F_RocketGrunt_3_Text_2, MSGBOX_AUTOCLOSE
	return


Devoncorp_B1F_RocketGrunt_4::
# 45 "data/maps/RustboroCity_DevonCorp_B1F/scripts.pory"
	trainerbattle_single TRAINER_ROCKET_GRUNT_DEVONCORP_4, Devoncorp_B1F_RocketGrunt_4_Text_0, Devoncorp_B1F_RocketGrunt_4_Text_1
# 46 "data/maps/RustboroCity_DevonCorp_B1F/scripts.pory"
	msgbox Devoncorp_B1F_RocketGrunt_4_Text_2, MSGBOX_AUTOCLOSE
	return


Devoncorp_B1F_RocketGrunt_5::
# 50 "data/maps/RustboroCity_DevonCorp_B1F/scripts.pory"
	trainerbattle_single TRAINER_ROCKET_GRUNT_DEVONCORP_5, Devoncorp_B1F_RocketGrunt_5_Text_0, Devoncorp_B1F_RocketGrunt_5_Text_1
# 51 "data/maps/RustboroCity_DevonCorp_B1F/scripts.pory"
	msgbox Devoncorp_B1F_RocketGrunt_5_Text_2, MSGBOX_AUTOCLOSE
	return


# 54 "data/maps/RustboroCity_DevonCorp_B1F/scripts.pory"
PanDownLeft3:
# 55 "data/maps/RustboroCity_DevonCorp_B1F/scripts.pory"
	walk_slow_diag_southwest
# 55 "data/maps/RustboroCity_DevonCorp_B1F/scripts.pory"
	walk_slow_diag_southwest
# 55 "data/maps/RustboroCity_DevonCorp_B1F/scripts.pory"
	walk_slow_diag_southwest
	step_end

# 58 "data/maps/RustboroCity_DevonCorp_B1F/scripts.pory"
PanUpRight3:
# 59 "data/maps/RustboroCity_DevonCorp_B1F/scripts.pory"
	walk_slow_diag_northeast
# 59 "data/maps/RustboroCity_DevonCorp_B1F/scripts.pory"
	walk_slow_diag_northeast
# 59 "data/maps/RustboroCity_DevonCorp_B1F/scripts.pory"
	walk_slow_diag_northeast
	step_end

Devoncorp_B1F_Intro_Text_0:
# 20 "data/maps/RustboroCity_DevonCorp_B1F/scripts.pory"
	.string "Urk.\n"
	.string "Not feeling good about this first job.\p"
	.string "I know that I made the choice to join\n"
	.string "Team Rocket, but I didn't expect one of\l"
	.string "our first operations to be out here in\l"
	.string "Hoenn.\p"
	.string "I really thought we were starting out\n"
	.string "in Kanto…\p"
	.string "Whatever.\n"
	.string "Boss trusted us to prevent anyone from\l"
	.string "interfering, so we'll do it.$"

Devoncorp_B1F_RocketGrunt_1_Text_0:
# 30 "data/maps/RustboroCity_DevonCorp_B1F/scripts.pory"
	.string "What!? A kid?\nYou're not supposed to be here!$"

Devoncorp_B1F_RocketGrunt_1_Text_1:
# 30 "data/maps/RustboroCity_DevonCorp_B1F/scripts.pory"
	.string "No!\nYou're going to screw this up for us!$"

Devoncorp_B1F_RocketGrunt_1_Text_2:
# 31 "data/maps/RustboroCity_DevonCorp_B1F/scripts.pory"
	.string "Don't you dare take another step\nforward!\pThe others will crush you!$"

Devoncorp_B1F_RocketGrunt_2_Text_0:
# 35 "data/maps/RustboroCity_DevonCorp_B1F/scripts.pory"
	.string "You don't know us?\pWe're Team Rocket, and a kid isn't going\nto stop us!$"

Devoncorp_B1F_RocketGrunt_2_Text_1:
# 35 "data/maps/RustboroCity_DevonCorp_B1F/scripts.pory"
	.string "Ah! Oh no!$"

Devoncorp_B1F_RocketGrunt_2_Text_2:
# 36 "data/maps/RustboroCity_DevonCorp_B1F/scripts.pory"
	.string "Hm.\nDid I make a mistake joining up?$"

Devoncorp_B1F_RocketGrunt_3_Text_0:
# 40 "data/maps/RustboroCity_DevonCorp_B1F/scripts.pory"
	.string "Oh no! I left the oven on!\nBoss said I have to beat any intruders,\lthen I'll race home!$"

Devoncorp_B1F_RocketGrunt_3_Text_1:
# 40 "data/maps/RustboroCity_DevonCorp_B1F/scripts.pory"
	.string "Nooo!\nThe oven!$"

Devoncorp_B1F_RocketGrunt_3_Text_2:
# 41 "data/maps/RustboroCity_DevonCorp_B1F/scripts.pory"
	.string "My family are at home…\nYou've done a horrible thing…$"

Devoncorp_B1F_RocketGrunt_4_Text_0:
# 45 "data/maps/RustboroCity_DevonCorp_B1F/scripts.pory"
	.string "Wait, is this Hoenn?\nI thought we were being shipped out to\lKanto.$"

Devoncorp_B1F_RocketGrunt_4_Text_1:
# 45 "data/maps/RustboroCity_DevonCorp_B1F/scripts.pory"
	.string "Aw, darn…$"

Devoncorp_B1F_RocketGrunt_4_Text_2:
# 46 "data/maps/RustboroCity_DevonCorp_B1F/scripts.pory"
	.string "I heard the boss isn't very happy about\nwomen joining Team Rocket.$"

Devoncorp_B1F_RocketGrunt_5_Text_0:
# 50 "data/maps/RustboroCity_DevonCorp_B1F/scripts.pory"
	.string "So you're the kid I've been hearing\nabout.\pYour intrusion ends here!$"

Devoncorp_B1F_RocketGrunt_5_Text_1:
# 50 "data/maps/RustboroCity_DevonCorp_B1F/scripts.pory"
	.string "Well, well.$"

Devoncorp_B1F_RocketGrunt_5_Text_2:
# 51 "data/maps/RustboroCity_DevonCorp_B1F/scripts.pory"
	.string "Alright. Go on ahead.\nThe boss is here, and there's no chance\lyou'll get past him.$"
