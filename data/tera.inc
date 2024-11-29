Route104_EventScript_RowanTera::
# 2 "data/tera.pory"
	lock
# 3 "data/tera.pory"
	addobject ROWAN_ROUTE104
# 4 "data/tera.pory"
	setobjectxy ROWAN_ROUTE104, 23, 57
# 5 "data/tera.pory"
	speakername CommonText_Q
# 6 "data/tera.pory"
	msgbox Route104_EventScript_RowanTera_Text_0
# 8 "data/tera.pory"
	closemessage
# 9 "data/tera.pory"
	playbgm MUS_DP_ROWAN, FALSE
# 10 "data/tera.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 11 "data/tera.pory"
	applymovement ROWAN_ROUTE104, Common_Movement_WalkUp4
# 12 "data/tera.pory"
	waitmovement 0
# 13 "data/tera.pory"
	delay 20
# 14 "data/tera.pory"
	applymovement ROWAN_ROUTE104, Common_Movement_WalkInPlaceDown
# 15 "data/tera.pory"
	waitmovement 0
# 16 "data/tera.pory"
	speakername CommonText_Q
# 17 "data/tera.pory"
	msgbox Route104_EventScript_RowanTera_Text_1
# 18 "data/tera.pory"
	closemessage
# 19 "data/tera.pory"
	applymovement ROWAN_ROUTE104, Common_Movement_WalkUp2
# 20 "data/tera.pory"
	waitmovement 0
# 21 "data/tera.pory"
	applymovement ROWAN_ROUTE104, Common_Movement_WalkLeft5
# 22 "data/tera.pory"
	waitmovement 0
# 23 "data/tera.pory"
	speakername CommonText_Q
# 24 "data/tera.pory"
	msgbox Route104_EventScript_RowanTera_Text_2
# 25 "data/tera.pory"
	applymovement ROWAN_ROUTE104, Common_Movement_WalkInPlaceRight
# 26 "data/tera.pory"
	waitmovement 0
# 27 "data/tera.pory"
	speakername CommonText_Q
# 28 "data/tera.pory"
	msgbox Route104_EventScript_RowanTera_Text_3
# 29 "data/tera.pory"
	closemessage
# 30 "data/tera.pory"
	applymovement ROWAN_ROUTE104, Common_Movement_WalkInPlaceLeft
# 31 "data/tera.pory"
	waitmovement 0
# 32 "data/tera.pory"
	speakername CommonText_Rowan
# 33 "data/tera.pory"
	msgbox Route104_EventScript_RowanTera_Text_4
# 38 "data/tera.pory"
	applymovement ROWAN_ROUTE104, Common_Movement_WalkInPlaceDown
# 39 "data/tera.pory"
	waitmovement 0
# 40 "data/tera.pory"
	msgbox Route104_EventScript_RowanTera_Text_5
# 42 "data/tera.pory"
	applymovement ROWAN_ROUTE104, Common_Movement_WalkInPlaceLeft
# 43 "data/tera.pory"
	waitmovement 0
# 44 "data/tera.pory"
	msgbox Route104_EventScript_RowanTera_Text_6
# 48 "data/tera.pory"
	closemessage
# 49 "data/tera.pory"
	giveitem ITEM_TERA_ORB
# 50 "data/tera.pory"
	speakername CommonText_Rowan
# 51 "data/tera.pory"
	msgbox Route104_EventScript_RowanTera_Text_7
# 54 "data/tera.pory"
	closemessage
# 55 "data/tera.pory"
	giveitem ITEM_NORMAL_TERA_SHARD, 3
# 56 "data/tera.pory"
	speakername CommonText_Rowan
# 57 "data/tera.pory"
	msgbox Route104_EventScript_RowanTera_Text_8
# 59 "data/tera.pory"
	closemessage
# 60 "data/tera.pory"
	applymovement ROWAN_ROUTE104, Common_Movement_WalkRight5
# 61 "data/tera.pory"
	waitmovement 0
# 62 "data/tera.pory"
	applymovement ROWAN_ROUTE104, Common_Movement_WalkDown6
# 63 "data/tera.pory"
	waitmovement 0
# 64 "data/tera.pory"
	removeobject ROWAN_ROUTE104
# 65 "data/tera.pory"
	fadedefaultbgm
# 66 "data/tera.pory"
	setvar VAR_ROUTE104_STATE, 3
# 67 "data/tera.pory"
	setflag FLAG_TERA_ENABLED
# 68 "data/tera.pory"
	release
	return


Route104_EventScript_RowanTera_Text_0:
# 6 "data/tera.pory"
	.string "Wait!\n"
	.string "Hold on, if you could!$"

Route104_EventScript_RowanTera_Text_1:
# 17 "data/tera.pory"
	.string "Huff…$"

Route104_EventScript_RowanTera_Text_2:
# 24 "data/tera.pory"
	.string "Thank you for waiting.$"

Route104_EventScript_RowanTera_Text_3:
# 28 "data/tera.pory"
	.string "And to think I'm going to return home\n"
	.string "and resume my duties like this…$"

Route104_EventScript_RowanTera_Text_4:
# 33 "data/tera.pory"
	.string "Er-hem.\n"
	.string "My name is Rowan.\p"
	.string "I work as a professor out in Sinnoh.\p"
	.string "I stopped you today when I saw the\n"
	.string "badge you were wearing.\p"
	.string "As a trainer strong enough to challenge\n"
	.string "gyms, I though you may be able to\l"
	.string "assist me in some of my reaserch here.$"

Route104_EventScript_RowanTera_Text_5:
# 40 "data/tera.pory"
	.string "There exists a phenomenon known as\n"
	.string "Terastallization in which Pokémon are\l"
	.string "able to change their type temporarily.\p"
	.string "This allows a great deal of complexity\n"
	.string "to battles and a great advantage to\l"
	.string "those who are able to use it well.$"

Route104_EventScript_RowanTera_Text_6:
# 44 "data/tera.pory"
	.string "Each Pokémon has its own\n"
	.string "Terastallization Type, or Tera Type.\p"
	.string "That Tera Type does not necessarily\n"
	.string "match with the type of the Pokémon.\p"
	.string "All that being said, my request of you is\n"
	.string "to go out and gather data for me on the\l"
	.string "Terastal phenomenon.\p"
	.string "This Tera Orb will allow you to utilize\n"
	.string "the phenomenon once per battle.$"

Route104_EventScript_RowanTera_Text_7:
# 51 "data/tera.pory"
	.string "It's also possible to change a\n"
	.string "Pokémon's Tera Type.\p"
	.string "If you bring me Tera Shards, I will do\n"
	.string "that for you.\p"
	.string "I'll give you some now, so look for more\n"
	.string "of these in the future.$"

Route104_EventScript_RowanTera_Text_8:
# 57 "data/tera.pory"
	.string "I'll be staying with Professor Birch out\n"
	.string "in Littleroot Town while I'm here in\l"
	.string "Hoenn.\p"
	.string "Come see me there if you need to know\n"
	.string "more or if you want to change your\l"
	.string "Pokémon's Tera Type.$"
