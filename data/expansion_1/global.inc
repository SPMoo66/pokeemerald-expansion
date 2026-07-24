Expansion1_ClearUnusedFlag::
# 2 "data/expansion_1/global.pory"
	clearflag FLAG_UNUSED_0x0FF
# 3 "data/expansion_1/global.pory"
	clearflag FLAG_UNUSED_0x34D
# 4 "data/expansion_1/global.pory"
	clearflag FLAG_UNUSED_0x34E
# 5 "data/expansion_1/global.pory"
	clearflag FLAG_UNUSED_0x38E
# 6 "data/expansion_1/global.pory"
	clearflag FLAG_UNUSED_0x38F
	return


HealingSpring_Exp1::
# 10 "data/expansion_1/global.pory"
	msgbox HealingSpring_Exp1_Text_0
# 11 "data/expansion_1/global.pory"
	closemessage
# 12 "data/expansion_1/global.pory"
	call Common_EventScript_OutOfCenterPartyHeal
	return


IllusoryGrottoMovableRock_Exp1::
# 16 "data/expansion_1/global.pory"
	getobjectfacingdirection LOCALID_PLAYER, VAR_RESULT
# 17 "data/expansion_1/global.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq IllusoryGrottoMovableRock_Exp1_1
# 28 "data/expansion_1/global.pory"
	msgbox IllusoryGrottoMovableRock_Exp1_Text_1
# 29 "data/expansion_1/global.pory"
	closemessage
# 30 "data/expansion_1/global.pory"
	release
	end

IllusoryGrottoMovableRock_Exp1_1:
# 18 "data/expansion_1/global.pory"
	msgbox IllusoryGrottoMovableRock_Exp1_Text_0
# 19 "data/expansion_1/global.pory"
	closemessage
# 20 "data/expansion_1/global.pory"
	setfieldeffectargument 0, VAR_RESULT
# 21 "data/expansion_1/global.pory"
	dofieldeffect FLDEFF_USE_STRENGTH
# 22 "data/expansion_1/global.pory"
	waitstate
# 23 "data/expansion_1/global.pory"
	playse SE_M_STRENGTH
# 24 "data/expansion_1/global.pory"
	delay 20
# 25 "data/expansion_1/global.pory"
	playse SE_FALL
	return


IllusoryGrotto_MonsterCommon1_Exp1::
# 36 "data/expansion_1/global.pory"
	delay 10
# 37 "data/expansion_1/global.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceUp
# 38 "data/expansion_1/global.pory"
	waitmovement 0
# 39 "data/expansion_1/global.pory"
	delay 10
	return


IllusoryGrotto_MonsterCommon2_Exp1::
# 43 "data/expansion_1/global.pory"
	special DrawWholeMapView
# 44 "data/expansion_1/global.pory"
	delay 10
# 45 "data/expansion_1/global.pory"
	playse SE_M_SNORE
# 46 "data/expansion_1/global.pory"
	delay 20
# 47 "data/expansion_1/global.pory"
	playse SE_M_HYDRO_PUMP
# 48 "data/expansion_1/global.pory"
	applymovement LOCALID_PLAYER, Common_Movement_LockFacingDirection
# 49 "data/expansion_1/global.pory"
	waitmovement 0
	return


SlateportCity_Harbor_MauveIslandSailor::
# 61 "data/expansion_1/global.pory"
	faceplayer
# 62 "data/expansion_1/global.pory"
	msgbox SlateportCity_Harbor_MauveIslandSailor_Text_0, MSGBOX_YESNO
# 63 "data/expansion_1/global.pory"
	compare VAR_RESULT, YES
	goto_if_eq SlateportCity_Harbor_MauveIslandSailor_2
SlateportCity_Harbor_MauveIslandSailor_1:
# 66 "data/expansion_1/global.pory"
	closemessage
	return

SlateportCity_Harbor_MauveIslandSailor_2:
# 64 "data/expansion_1/global.pory"
	goto SlateportRegionMap_BoatSceneInit
	goto SlateportCity_Harbor_MauveIslandSailor_1


HealingSpring_Exp1_Text_0:
# 10 "data/expansion_1/global.pory"
	.string "It's a restorative spring.$"

IllusoryGrottoMovableRock_Exp1_Text_0:
# 18 "data/expansion_1/global.pory"
	.string "Oh! Your Pokémon may be able to push\n"
	.string "this boulder aside!$"

IllusoryGrottoMovableRock_Exp1_Text_1:
# 28 "data/expansion_1/global.pory"
	.string "Dad's advice…\n"
	.string "… … …\p"
	.string "… … …\p"
	.string "… … …\p"
	.string "{PLAYER}! Try a different side!$"

SlateportCity_Harbor_MauveIslandSailor_Text_0:
# 62 "data/expansion_1/global.pory"
	.string "Ahoy!\nAre you looking to return to Mauve\lIsland?$"

Text_TooDarkLetsTurnBack::
# 52 "data/expansion_1/global.pory"
	.string "…\n"
	.string "…\l"
	.string "…\l"
	.string "It appears to be too dark to continue…\l"
	.string "Let's turn back.$"

Exp1_WildPokemonTrainerText_Intro::
# 69 "data/expansion_1/global.pory"
	.string "Grrrooo!!$"

Exp1_WildPokemonTrainerText_Defeat::
# 73 "data/expansion_1/global.pory"
	.string "Grooo.$"
