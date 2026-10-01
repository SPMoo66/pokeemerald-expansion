FarOffSeaSouth_MapScripts::
	.byte 0


FarOffSeaSouth_EventScript_Seraphina::
# 4 "data/maps/FarOffSeaSouth/scripts.pory"
	trainerbattle_single TRAINER_SERAPHINA, FarOffSeaSouth_EventScript_Seraphina_Text_0, FarOffSeaSouth_EventScript_Seraphina_Text_1
# 5 "data/maps/FarOffSeaSouth/scripts.pory"
	msgbox FarOffSeaSouth_EventScript_Seraphina_Text_2, MSGBOX_AUTOCLOSE
	return


FarOffSeaSouth_EventScript_Elara::
# 9 "data/maps/FarOffSeaSouth/scripts.pory"
	trainerbattle_single TRAINER_ELARA, FarOffSeaSouth_EventScript_Elara_Text_0, FarOffSeaSouth_EventScript_Elara_Text_1
# 10 "data/maps/FarOffSeaSouth/scripts.pory"
	msgbox FarOffSeaSouth_EventScript_Elara_Text_2, MSGBOX_AUTOCLOSE
	return


FarOffSeaSouth_EventScript_Jon::
# 14 "data/maps/FarOffSeaSouth/scripts.pory"
	trainerbattle_single TRAINER_JON, FarOffSeaSouth_EventScript_Jon_Text_0, FarOffSeaSouth_EventScript_Jon_Text_1
# 15 "data/maps/FarOffSeaSouth/scripts.pory"
	msgbox FarOffSeaSouth_EventScript_Jon_Text_2, MSGBOX_AUTOCLOSE
	return


FarOffSeaSouth_EventScript_Elmer::
# 19 "data/maps/FarOffSeaSouth/scripts.pory"
	trainerbattle_single TRAINER_ELMER, FarOffSeaSouth_EventScript_Elmer_Text_0, FarOffSeaSouth_EventScript_Elmer_Text_1
# 20 "data/maps/FarOffSeaSouth/scripts.pory"
	msgbox FarOffSeaSouth_EventScript_Elmer_Text_2, MSGBOX_AUTOCLOSE
	return


FarOffSeaSouth_EventScript_Sailor::
# 24 "data/maps/FarOffSeaSouth/scripts.pory"
	msgbox FarOffSeaSouth_EventScript_Sailor_Text_0, MSGBOX_NPC
	return


FarOffSeaSouth_EventScript_Seraphina_Text_0:
# 4 "data/maps/FarOffSeaSouth/scripts.pory"
	.string "I'm tired!\pGive me a ride on your Pokémon if I win!$"

FarOffSeaSouth_EventScript_Seraphina_Text_1:
# 4 "data/maps/FarOffSeaSouth/scripts.pory"
	.string "Aww.$"

FarOffSeaSouth_EventScript_Seraphina_Text_2:
# 5 "data/maps/FarOffSeaSouth/scripts.pory"
	.string "If your Pokémon fainted, I couldn't\nget a ride anyway.$"

FarOffSeaSouth_EventScript_Elara_Text_0:
# 9 "data/maps/FarOffSeaSouth/scripts.pory"
	.string "This water is so much colder than I\nexpected!$"

FarOffSeaSouth_EventScript_Elara_Text_1:
# 9 "data/maps/FarOffSeaSouth/scripts.pory"
	.string "I'm heated now!$"

FarOffSeaSouth_EventScript_Elara_Text_2:
# 10 "data/maps/FarOffSeaSouth/scripts.pory"
	.string "The water is so clear around this\nisland.$"

FarOffSeaSouth_EventScript_Jon_Text_0:
# 14 "data/maps/FarOffSeaSouth/scripts.pory"
	.string "I swam here all the way from Hoenn!$"

FarOffSeaSouth_EventScript_Jon_Text_1:
# 14 "data/maps/FarOffSeaSouth/scripts.pory"
	.string "I was already tired!$"

FarOffSeaSouth_EventScript_Jon_Text_2:
# 15 "data/maps/FarOffSeaSouth/scripts.pory"
	.string "Okay, that was a lie.\pI rode the boat like everyone else.$"

FarOffSeaSouth_EventScript_Elmer_Text_0:
# 19 "data/maps/FarOffSeaSouth/scripts.pory"
	.string "Big catch!$"

FarOffSeaSouth_EventScript_Elmer_Text_1:
# 19 "data/maps/FarOffSeaSouth/scripts.pory"
	.string "Hmm. Not fresh enough?$"

FarOffSeaSouth_EventScript_Elmer_Text_2:
# 20 "data/maps/FarOffSeaSouth/scripts.pory"
	.string "I need a bigger catch.$"

FarOffSeaSouth_EventScript_Sailor_Text_0:
# 24 "data/maps/FarOffSeaSouth/scripts.pory"
	.string "Urp.\nThere are a lot of shallows out here.$"
