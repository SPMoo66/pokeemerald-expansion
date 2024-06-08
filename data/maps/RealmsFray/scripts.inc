RealmsFray_MapScripts::
	.byte 0


RealmsFray_Portal::
# 4 "data/maps/RealmsFray/scripts.pory"
	warp MAP_ROUTE120, 2
	return


RealmsFray_MegaStone_Vending_Machine::
# 8 "data/maps/RealmsFray/scripts.pory"
	lock
# 9 "data/maps/RealmsFray/scripts.pory"
	msgbox gText_HowMayIServeYou
# 10 "data/maps/RealmsFray/scripts.pory"
	pokemart MegaStonesMart
# 11 "data/maps/RealmsFray/scripts.pory"
	msgbox gText_PleaseComeAgain
# 12 "data/maps/RealmsFray/scripts.pory"
	release
	return


	.align 2
# 15 "data/maps/RealmsFray/scripts.pory"
MegaStonesMart:
# 16 "data/maps/RealmsFray/scripts.pory"
	.2byte ITEM_MEGA_STONE_X
# 17 "data/maps/RealmsFray/scripts.pory"
	.2byte ITEM_MEGA_STONE_Y
# 18 "data/maps/RealmsFray/scripts.pory"
	.2byte ITEM_MEGA_STONE_G
	.2byte ITEM_NONE
