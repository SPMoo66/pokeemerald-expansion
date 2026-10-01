BlanchedDepths_2F_1R_MapScripts::
	.byte 0


BlanchedDepths_2F_1R_EventScript_AquaGrunt3::
# 5 "data/maps/BlanchedDepths_2F_1R/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_BLANCHED_DEPTHS_3, BlanchedDepths_2F_1R_EventScript_AquaGrunt3_Text_0, BlanchedDepths_2F_1R_EventScript_AquaGrunt3_Text_1
# 6 "data/maps/BlanchedDepths_2F_1R/scripts.pory"
	msgbox BlanchedDepths_2F_1R_EventScript_AquaGrunt3_Text_2, MSGBOX_AUTOCLOSE
	return


BlanchedDepths_2F_1R_EventScript_AquaGrunt4::
# 10 "data/maps/BlanchedDepths_2F_1R/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_BLANCHED_DEPTHS_4, BlanchedDepths_2F_1R_EventScript_AquaGrunt4_Text_0, BlanchedDepths_2F_1R_EventScript_AquaGrunt4_Text_1
# 11 "data/maps/BlanchedDepths_2F_1R/scripts.pory"
	msgbox BlanchedDepths_2F_1R_EventScript_AquaGrunt4_Text_2, MSGBOX_AUTOCLOSE
	return


BlanchedDepths_2F_1R_EventScript_AquaGrunt5::
# 15 "data/maps/BlanchedDepths_2F_1R/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_BLANCHED_DEPTHS_5, BlanchedDepths_2F_1R_EventScript_AquaGrunt5_Text_0, BlanchedDepths_2F_1R_EventScript_AquaGrunt5_Text_1
# 16 "data/maps/BlanchedDepths_2F_1R/scripts.pory"
	msgbox BlanchedDepths_2F_1R_EventScript_AquaGrunt5_Text_2, MSGBOX_AUTOCLOSE
	return


BlanchedDepths_2F_1R_EventScript_AquaGrunt6::
# 20 "data/maps/BlanchedDepths_2F_1R/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_BLANCHED_DEPTHS_6, BlanchedDepths_2F_1R_EventScript_AquaGrunt6_Text_0, BlanchedDepths_2F_1R_EventScript_AquaGrunt6_Text_1
# 21 "data/maps/BlanchedDepths_2F_1R/scripts.pory"
	msgbox BlanchedDepths_2F_1R_EventScript_AquaGrunt6_Text_2, MSGBOX_AUTOCLOSE
	return


BlanchedDepths_2F_1R_EventScript_Matt::
# 25 "data/maps/BlanchedDepths_2F_1R/scripts.pory"
	trainerbattle_single TRAINER_MATT_BLANCHED_DEPTHS, BlanchedDepths_2F_1R_EventScript_Matt_Text_0, BlanchedDepths_2F_1R_EventScript_Matt_Text_1, BlanchedDepths_2F_1R_EventScript_MattPostBattle
# 26 "data/maps/BlanchedDepths_2F_1R/scripts.pory"
	msgbox BlanchedDepths_2F_1R_EventScript_Matt_Text_2, MSGBOX_AUTOCLOSE
	return


BlanchedDepths_2F_1R_EventScript_MattPostBattle::
# 30 "data/maps/BlanchedDepths_2F_1R/scripts.pory"
	msgbox BlanchedDepths_2F_1R_EventScript_MattPostBattle_Text_0, MSGBOX_AUTOCLOSE
	return


BlanchedDepths_2F_1R_EventScript_Sailor::
# 34 "data/maps/BlanchedDepths_2F_1R/scripts.pory"
	lock
# 35 "data/maps/BlanchedDepths_2F_1R/scripts.pory"
	faceplayer
# 36 "data/maps/BlanchedDepths_2F_1R/scripts.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 26
	goto_if_lt BlanchedDepths_2F_1R_EventScript_Sailor_2
BlanchedDepths_2F_1R_EventScript_Sailor_1:
# 40 "data/maps/BlanchedDepths_2F_1R/scripts.pory"
	msgbox BlanchedDepths_2F_1R_EventScript_Sailor_Text_1, MSGBOX_AUTOCLOSE
# 41 "data/maps/BlanchedDepths_2F_1R/scripts.pory"
	release
	return

BlanchedDepths_2F_1R_EventScript_Sailor_2:
# 37 "data/maps/BlanchedDepths_2F_1R/scripts.pory"
	msgbox BlanchedDepths_2F_1R_EventScript_Sailor_Text_0, MSGBOX_AUTOCLOSE
# 38 "data/maps/BlanchedDepths_2F_1R/scripts.pory"
	setvar VAR_EMERALBODY_RIVAL_STATE, 26
	goto BlanchedDepths_2F_1R_EventScript_Sailor_1


BlanchedDepths_2F_1R_EventScript_AquaGrunt3_Text_0:
# 5 "data/maps/BlanchedDepths_2F_1R/scripts.pory"
	.string "Boss, we've got an intruder!$"

BlanchedDepths_2F_1R_EventScript_AquaGrunt3_Text_1:
# 5 "data/maps/BlanchedDepths_2F_1R/scripts.pory"
	.string "Shoot!$"

BlanchedDepths_2F_1R_EventScript_AquaGrunt3_Text_2:
# 6 "data/maps/BlanchedDepths_2F_1R/scripts.pory"
	.string "Archie?\nNah, he's not leading us here.$"

BlanchedDepths_2F_1R_EventScript_AquaGrunt4_Text_0:
# 10 "data/maps/BlanchedDepths_2F_1R/scripts.pory"
	.string "Back, you monster!$"

BlanchedDepths_2F_1R_EventScript_AquaGrunt4_Text_1:
# 10 "data/maps/BlanchedDepths_2F_1R/scripts.pory"
	.string "Wait, a human?$"

BlanchedDepths_2F_1R_EventScript_AquaGrunt4_Text_2:
# 11 "data/maps/BlanchedDepths_2F_1R/scripts.pory"
	.string "The wild Pokémon in this place are\nmonsters.\pWe've been holding them off for days\nnow.\p…I want to go home.$"

BlanchedDepths_2F_1R_EventScript_AquaGrunt5_Text_0:
# 15 "data/maps/BlanchedDepths_2F_1R/scripts.pory"
	.string "Don't worry, boss, I'll protect you!$"

BlanchedDepths_2F_1R_EventScript_AquaGrunt5_Text_1:
# 15 "data/maps/BlanchedDepths_2F_1R/scripts.pory"
	.string "Nooooo!$"

BlanchedDepths_2F_1R_EventScript_AquaGrunt5_Text_2:
# 16 "data/maps/BlanchedDepths_2F_1R/scripts.pory"
	.string "My squadron calls me the weakest grunt.\pDid I just prove them right…?$"

BlanchedDepths_2F_1R_EventScript_AquaGrunt6_Text_0:
# 20 "data/maps/BlanchedDepths_2F_1R/scripts.pory"
	.string "I'll put you down, whelp!$"

BlanchedDepths_2F_1R_EventScript_AquaGrunt6_Text_1:
# 20 "data/maps/BlanchedDepths_2F_1R/scripts.pory"
	.string "Euthanized!$"

BlanchedDepths_2F_1R_EventScript_AquaGrunt6_Text_2:
# 21 "data/maps/BlanchedDepths_2F_1R/scripts.pory"
	.string "I'm sorry…\pMatt…$"

BlanchedDepths_2F_1R_EventScript_Matt_Text_0:
# 25 "data/maps/BlanchedDepths_2F_1R/scripts.pory"
	.string "You! Again!\pI remember what you've done!\pArchie's gone because of you!$"

BlanchedDepths_2F_1R_EventScript_Matt_Text_1:
# 25 "data/maps/BlanchedDepths_2F_1R/scripts.pory"
	.string "Agh, you brat!$"

BlanchedDepths_2F_1R_EventScript_Matt_Text_2:
# 26 "data/maps/BlanchedDepths_2F_1R/scripts.pory"
	.string "Get out of my sight, child.$"

BlanchedDepths_2F_1R_EventScript_MattPostBattle_Text_0:
# 30 "data/maps/BlanchedDepths_2F_1R/scripts.pory"
	.string "Blast you!\pIf it weren't for you, we would have\nbeaten that Team Magma.\pArchie would still…\nHe wouldn't have left Team Aqua!\pKids like you are just too meddlesome.\p… … …\pRun along then. Do what you wish. We'll\nhave to turn back and lick our wounds.$"

BlanchedDepths_2F_1R_EventScript_Sailor_Text_0:
# 37 "data/maps/BlanchedDepths_2F_1R/scripts.pory"
	.string "Ahoy!\nIt doesn't seem like your treasure is\lhere.\p… … …\pOh, the LIGHT?\pYes, I suppose I did bring it with me.\pHere, go ahead and take it with you.$"

BlanchedDepths_2F_1R_EventScript_Sailor_Text_1:
# 40 "data/maps/BlanchedDepths_2F_1R/scripts.pory"
	.string "Don't worry about me, my Pokémon will\nhelp me return to land.$"
