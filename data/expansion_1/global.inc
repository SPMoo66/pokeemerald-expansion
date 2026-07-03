HealingSpring_Exp1::
# 2 "data/expansion_1/global.pory"
	msgbox HealingSpring_Exp1_Text_0
# 3 "data/expansion_1/global.pory"
	closemessage
# 4 "data/expansion_1/global.pory"
	call Common_EventScript_OutOfCenterPartyHeal
	return


IllusoryGrottoMovableRock_Exp1::
# 8 "data/expansion_1/global.pory"
	getobjectfacingdirection LOCALID_PLAYER, VAR_RESULT
# 9 "data/expansion_1/global.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq IllusoryGrottoMovableRock_Exp1_1
# 20 "data/expansion_1/global.pory"
	msgbox IllusoryGrottoMovableRock_Exp1_Text_1
# 21 "data/expansion_1/global.pory"
	closemessage
# 22 "data/expansion_1/global.pory"
	release
	end

IllusoryGrottoMovableRock_Exp1_1:
# 10 "data/expansion_1/global.pory"
	msgbox IllusoryGrottoMovableRock_Exp1_Text_0
# 11 "data/expansion_1/global.pory"
	closemessage
# 12 "data/expansion_1/global.pory"
	setfieldeffectargument 0, VAR_RESULT
# 13 "data/expansion_1/global.pory"
	dofieldeffect FLDEFF_USE_STRENGTH
# 14 "data/expansion_1/global.pory"
	waitstate
# 15 "data/expansion_1/global.pory"
	playse SE_M_STRENGTH
# 16 "data/expansion_1/global.pory"
	delay 20
# 17 "data/expansion_1/global.pory"
	playse SE_FALL
	return


IllusoryGrotto_MonsterCommon1_Exp1::
# 28 "data/expansion_1/global.pory"
	delay 10
# 29 "data/expansion_1/global.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceUp
# 30 "data/expansion_1/global.pory"
	waitmovement 0
# 31 "data/expansion_1/global.pory"
	delay 10
	return


IllusoryGrotto_MonsterCommon2_Exp1::
# 35 "data/expansion_1/global.pory"
	special DrawWholeMapView
# 36 "data/expansion_1/global.pory"
	delay 10
# 37 "data/expansion_1/global.pory"
	playse SE_M_SNORE
# 38 "data/expansion_1/global.pory"
	delay 20
# 39 "data/expansion_1/global.pory"
	playse SE_M_HYDRO_PUMP
# 40 "data/expansion_1/global.pory"
	applymovement LOCALID_PLAYER, Common_Movement_LockFacingDirection
# 41 "data/expansion_1/global.pory"
	waitmovement 0
	return


SlateportCity_Harbor_MauveIslandSailor::
# 53 "data/expansion_1/global.pory"
	faceplayer
# 54 "data/expansion_1/global.pory"
	msgbox SlateportCity_Harbor_MauveIslandSailor_Text_0, MSGBOX_YESNO
# 55 "data/expansion_1/global.pory"
	compare VAR_RESULT, YES
	goto_if_eq SlateportCity_Harbor_MauveIslandSailor_2
SlateportCity_Harbor_MauveIslandSailor_1:
# 58 "data/expansion_1/global.pory"
	closemessage
	return

SlateportCity_Harbor_MauveIslandSailor_2:
# 56 "data/expansion_1/global.pory"
	goto SlateportRegionMap_BoatSceneInit
	goto SlateportCity_Harbor_MauveIslandSailor_1


HealingSpring_Exp1_Text_0:
# 2 "data/expansion_1/global.pory"
	.string "It's a restorative spring.$"

IllusoryGrottoMovableRock_Exp1_Text_0:
# 10 "data/expansion_1/global.pory"
	.string "Oh! Your Pokémon may be able to push\n"
	.string "this boulder aside!$"

IllusoryGrottoMovableRock_Exp1_Text_1:
# 20 "data/expansion_1/global.pory"
	.string "Dad's advice…\n"
	.string "… … …\p"
	.string "… … …\p"
	.string "… … …\p"
	.string "{PLAYER}! Try a different side!$"

SlateportCity_Harbor_MauveIslandSailor_Text_0:
# 54 "data/expansion_1/global.pory"
	.string "Ahoy!\nAre you looking to return to Mauve\lIsland?$"

Text_TooDarkLetsTurnBack::
# 44 "data/expansion_1/global.pory"
	.string "…\n"
	.string "…\l"
	.string "…\l"
	.string "It appears to be too dark to continue…\l"
	.string "Let's turn back.$"

Exp1_WildPokemonTrainerText_Intro::
# 61 "data/expansion_1/global.pory"
	.string "Grrrooo!!$"

Exp1_WildPokemonTrainerText_Defeat::
# 65 "data/expansion_1/global.pory"
	.string "Grooo.$"
