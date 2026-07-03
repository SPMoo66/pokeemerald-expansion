BygoneVault_TreasureRoom_MapScripts::
# 8 "data/maps/BygoneVault_TreasureRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BygoneVault_TreasureRoom_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 13 "data/maps/BygoneVault_TreasureRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, BygoneVault_TreasureRoom_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

BygoneVault_TreasureRoom_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 9 "data/maps/BygoneVault_TreasureRoom/scripts.pory"
	checktrainerflag TRAINER_WILD_POKEMON_BV_2
	goto_if 1, BygoneVault_TreasureRoom_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

BygoneVault_TreasureRoom_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 10 "data/maps/BygoneVault_TreasureRoom/scripts.pory"
	setflag FLAG_TEMP_1
	return

BygoneVault_TreasureRoom_MapScripts_MAP_SCRIPT_ON_RESUME:
# 14 "data/maps/BygoneVault_TreasureRoom/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, BygoneVault_TreasureRoom_MapScripts_MAP_SCRIPT_ON_RESUME_2
BygoneVault_TreasureRoom_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 17 "data/maps/BygoneVault_TreasureRoom/scripts.pory"
	goto_if_set FLAG_SEMI_TEMP_1, BygoneVault_TreasureRoom_MapScripts_MAP_SCRIPT_ON_RESUME_4
	return

BygoneVault_TreasureRoom_MapScripts_MAP_SCRIPT_ON_RESUME_2:
# 15 "data/maps/BygoneVault_TreasureRoom/scripts.pory"
	removeobject 1
	goto BygoneVault_TreasureRoom_MapScripts_MAP_SCRIPT_ON_RESUME_1

BygoneVault_TreasureRoom_MapScripts_MAP_SCRIPT_ON_RESUME_4:
# 18 "data/maps/BygoneVault_TreasureRoom/scripts.pory"
	removeobject 7
# 19 "data/maps/BygoneVault_TreasureRoom/scripts.pory"
	removeobject 8
# 20 "data/maps/BygoneVault_TreasureRoom/scripts.pory"
	removeobject 9
# 21 "data/maps/BygoneVault_TreasureRoom/scripts.pory"
	removeobject 10
	return

