# 1 "data/maps/CaveOfDreams/scripts.pory"

# 2 "data/maps/CaveOfDreams/scripts.pory"
CaveOfDreams_MapScripts::
# 3 "data/maps/CaveOfDreams/scripts.pory"
	.byte 0

BattleDarkrai::
# 7 "data/maps/CaveOfDreams/scripts.pory"
	lock
# 8 "data/maps/CaveOfDreams/scripts.pory"
	playmoncry SPECIES_DARKRAI, CRY_MODE_ENCOUNTER
# 9 "data/maps/CaveOfDreams/scripts.pory"
	msgbox BattleDarkrai_Text_0
# 10 "data/maps/CaveOfDreams/scripts.pory"
	waitmoncry
# 11 "data/maps/CaveOfDreams/scripts.pory"
	seteventmon SPECIES_DARKRAI, 50
# 12 "data/maps/CaveOfDreams/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 13 "data/maps/CaveOfDreams/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 14 "data/maps/CaveOfDreams/scripts.pory"
	waitstate
# 15 "data/maps/CaveOfDreams/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 16 "data/maps/CaveOfDreams/scripts.pory"
	release
	end


CaveOfDreamsHex::
# 21 "data/maps/CaveOfDreams/scripts.pory"
	lock
# 22 "data/maps/CaveOfDreams/scripts.pory"
	faceplayer
# 23 "data/maps/CaveOfDreams/scripts.pory"
	msgbox CaveOfDreamsHex_Text_0
# 24 "data/maps/CaveOfDreams/scripts.pory"
	release
	end


BattleDarkrai_Text_0:
# 9 "data/maps/CaveOfDreams/scripts.pory"
	.string "...\p...$"

CaveOfDreamsHex_Text_0:
# 23 "data/maps/CaveOfDreams/scripts.pory"
	.string "Heehee...\p"
	.string "They call this the Cave Of Dreams, but\n"
	.string "it exudes the essence of nightmares.$"
