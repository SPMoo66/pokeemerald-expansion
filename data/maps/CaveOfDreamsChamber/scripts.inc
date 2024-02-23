CaveOfDreamsChamber_MapScripts::
# 2 "data/maps/CaveOfDreamsChamber/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CaveOfDreamsChamber_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 7 "data/maps/CaveOfDreamsChamber/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CaveOfDreamsChamber_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

CaveOfDreamsChamber_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	return

CaveOfDreamsChamber_MapScripts_MAP_SCRIPT_ON_RESUME:
# 8 "data/maps/CaveOfDreamsChamber/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, CaveOfDreamsChamber_MapScripts_MAP_SCRIPT_ON_RESUME_1
	return

CaveOfDreamsChamber_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 9 "data/maps/CaveOfDreamsChamber/scripts.pory"
	removeobject 1
	return

