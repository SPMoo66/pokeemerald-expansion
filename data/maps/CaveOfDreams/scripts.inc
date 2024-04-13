# 1 "data/maps/CaveOfDreams/scripts.pory"

# 2 "data/maps/CaveOfDreams/scripts.pory"
CaveOfDreams_MapScripts::
# 3 "data/maps/CaveOfDreams/scripts.pory"
	.byte 0

CaveOfDreamsHex::
# 7 "data/maps/CaveOfDreams/scripts.pory"
	lock
# 8 "data/maps/CaveOfDreams/scripts.pory"
	faceplayer
# 9 "data/maps/CaveOfDreams/scripts.pory"
	msgbox CaveOfDreamsHex_Text_0
# 10 "data/maps/CaveOfDreams/scripts.pory"
	release
	end


CaveOfDreamsHex_Text_0:
# 9 "data/maps/CaveOfDreams/scripts.pory"
	.string "Heehee...\p"
	.string "They call this the Cave of Dreams, but\n"
	.string "it exudes the essence of nightmares.$"
