RealmsFray_MapScripts::
	.byte 0


RealmsFray_Portal::
# 4 "data/maps/RealmsFray/scripts.pory"
	warp MAP_ROUTE120, 2
# 5 "data/maps/RealmsFray/scripts.pory"
	waitstate
	return


RealmsFray_MegaStone_Vending_Machine::
# 9 "data/maps/RealmsFray/scripts.pory"
	lock
# 10 "data/maps/RealmsFray/scripts.pory"
	msgbox gText_HowMayIServeYou
# 11 "data/maps/RealmsFray/scripts.pory"
	pokemart MegaStonesMart
# 12 "data/maps/RealmsFray/scripts.pory"
	msgbox gText_PleaseComeAgain
# 13 "data/maps/RealmsFray/scripts.pory"
	release
	return


	.align 2
# 16 "data/maps/RealmsFray/scripts.pory"
MegaStonesMart:
# 17 "data/maps/RealmsFray/scripts.pory"
	.2byte ITEM_MEGA_STONE_X
# 18 "data/maps/RealmsFray/scripts.pory"
	.2byte ITEM_MEGA_STONE_Y
# 19 "data/maps/RealmsFray/scripts.pory"
	.2byte ITEM_MEGA_STONE_G
	.2byte ITEM_NONE
