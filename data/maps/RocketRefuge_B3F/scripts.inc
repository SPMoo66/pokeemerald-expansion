RocketRefuge_B3F_MapScripts::
	.byte 0


RocketRefuge_Teleport::
# 4 "data/maps/RocketRefuge_B3F/scripts.pory"
	lock
# 5 "data/maps/RocketRefuge_B3F/scripts.pory"
	warp MAP_ROCKET_REFUGE_B1F, 2
# 6 "data/maps/RocketRefuge_B3F/scripts.pory"
	setvar VAR_TEMP_0, 1
# 7 "data/maps/RocketRefuge_B3F/scripts.pory"
	delay 100
# 8 "data/maps/RocketRefuge_B3F/scripts.pory"
	release
	return

