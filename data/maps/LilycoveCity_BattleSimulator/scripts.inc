LilycoveCity_BattleSimulator_MapScripts::
# 2 "data/maps/LilycoveCity_BattleSimulator/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LilycoveCity_BattleSimulator_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

LilycoveCity_BattleSimulator_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 3 "data/maps/LilycoveCity_BattleSimulator/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, LilycoveCity_BattleSimulator_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0
	.2byte 0

LilycoveCity_BattleSimulator_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0:
# 4 "data/maps/LilycoveCity_BattleSimulator/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_EAST
	return

