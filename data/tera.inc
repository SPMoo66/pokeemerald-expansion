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


Aide_SetTeraType::
# 72 "data/tera.pory"
	lock
# 73 "data/tera.pory"
	faceplayer
# 74 "data/tera.pory"
	goto_if_unset FLAG_TEMP_6, Aide_SetTeraType_2
Aide_SetTeraType_1:
# 80 "data/tera.pory"
	checkitem ITEM_STELLAR_TERA_SHARD
# 81 "data/tera.pory"
	compare VAR_RESULT, 0
	goto_if_ne Aide_SetTeraType_5
Aide_SetTeraType_4:
# 110 "data/tera.pory"
	checkitem ITEM_NORMAL_TERA_SHARD
# 111 "data/tera.pory"
	compare VAR_RESULT, 0
	goto_if_ne Aide_SetTeraType_8
# 218 "data/tera.pory"
	msgbox Aide_SetTeraType_Text_9
Aide_SetTeraType_7:
# 220 "data/tera.pory"
	closemessage
# 221 "data/tera.pory"
	release
	return

Aide_SetTeraType_2:
# 75 "data/tera.pory"
	msgbox Aide_SetTeraType_Text_0
# 78 "data/tera.pory"
	setflag FLAG_TEMP_6
	goto Aide_SetTeraType_1

Aide_SetTeraType_5:
# 82 "data/tera.pory"
	msgbox Aide_SetTeraType_Text_1, MSGBOX_YESNO
# 85 "data/tera.pory"
	compare VAR_RESULT, 0
	goto_if_ne Aide_SetTeraType_11
	goto Aide_SetTeraType_4

Aide_SetTeraType_8:
# 112 "data/tera.pory"
	msgbox Aide_SetTeraType_Text_4, MSGBOX_YESNO
# 113 "data/tera.pory"
	compare VAR_RESULT, 0
	goto_if_ne Aide_SetTeraType_13
# 212 "data/tera.pory"
	msgbox Aide_SetTeraType_Text_8
# 213 "data/tera.pory"
	closemessage
	end

Aide_SetTeraType_11:
# 86 "data/tera.pory"
	msgbox Aide_SetTeraType_Text_2
# 88 "data/tera.pory"
	special ChoosePartyMon
# 89 "data/tera.pory"
	waitstate
# 90 "data/tera.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_ne Aide_SetTeraType_16
	goto Aide_SetTeraType_4

Aide_SetTeraType_13:
# 114 "data/tera.pory"
	msgbox Aide_SetTeraType_Text_5
# 116 "data/tera.pory"
	special ChoosePartyMon
# 117 "data/tera.pory"
	waitstate
# 118 "data/tera.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_ne Aide_SetTeraType_18
# 208 "data/tera.pory"
	msgbox Aide_SetTeraType_Text_7
	goto Aide_SetTeraType_7

Aide_SetTeraType_16:
# 91 "data/tera.pory"
	specialvar VAR_TEMP_2, ScriptGetPartyMonSpecies
# 92 "data/tera.pory"
	bufferspeciesname STR_VAR_1, VAR_TEMP_2
# 93 "data/tera.pory"
	bufferstring STR_VAR_2, CommonText_StellarType
# 94 "data/tera.pory"
	compare VAR_TEMP_2, SPECIES_EGG
	goto_if_ne Aide_SetTeraType_26
Aide_SetTeraType_25:
# 99 "data/tera.pory"
	compare VAR_TEMP_2, SPECIES_OGERPON
	goto_if_eq Aide_SetTeraType_23
# 103 "data/tera.pory"
	msgbox Text_EggTeraType
Aide_SetTeraType_21:
# 105 "data/tera.pory"
	closemessage
	end

Aide_SetTeraType_18:
# 119 "data/tera.pory"
	specialvar VAR_TEMP_2, ScriptGetPartyMonSpecies
# 120 "data/tera.pory"
	compare VAR_TEMP_2, SPECIES_EGG
	goto_if_ne Aide_SetTeraType_29
# 204 "data/tera.pory"
	msgbox Text_EggTeraType
	goto Aide_SetTeraType_7

Aide_SetTeraType_22:
# 95 "data/tera.pory"
	setteratype TYPE_STELLAR, VAR_0x8004
# 96 "data/tera.pory"
	msgbox Text_ChangedTeraType
# 97 "data/tera.pory"
	removeitem ITEM_STELLAR_TERA_SHARD
	goto Aide_SetTeraType_21

Aide_SetTeraType_23:
# 100 "data/tera.pory"
	msgbox Aide_SetTeraType_Text_3
	goto Aide_SetTeraType_21

Aide_SetTeraType_26:
# 94 "data/tera.pory"
	compare VAR_TEMP_2, SPECIES_OGERPON
	goto_if_ne Aide_SetTeraType_22
	goto Aide_SetTeraType_25

Aide_SetTeraType_29:
# 121 "data/tera.pory"
	bufferspeciesname STR_VAR_1, VAR_TEMP_2
# 122 "data/tera.pory"
	msgbox Aide_SetTeraType_Text_6
# 124 "data/tera.pory"
	dynmultipush CommonText_NormalType, 0
# 125 "data/tera.pory"
	dynmultipush CommonText_FightingType, 1
# 126 "data/tera.pory"
	dynmultipush CommonText_FlyingType, 2
# 127 "data/tera.pory"
	dynmultipush CommonText_PoisonType, 3
# 128 "data/tera.pory"
	dynmultipush CommonText_GroundType, 4
# 129 "data/tera.pory"
	dynmultipush CommonText_RockType, 5
# 130 "data/tera.pory"
	dynmultipush CommonText_BugType, 6
# 131 "data/tera.pory"
	dynmultipush CommonText_GhostType, 7
# 132 "data/tera.pory"
	dynmultipush CommonText_SteelType, 8
# 133 "data/tera.pory"
	dynmultipush CommonText_FireType, 9
# 134 "data/tera.pory"
	dynmultipush CommonText_WaterType, 10
# 135 "data/tera.pory"
	dynmultipush CommonText_GrassType, 11
# 136 "data/tera.pory"
	dynmultipush CommonText_ElectricType, 12
# 137 "data/tera.pory"
	dynmultipush CommonText_PsychicType, 13
# 138 "data/tera.pory"
	dynmultipush CommonText_IceType, 14
# 139 "data/tera.pory"
	dynmultipush CommonText_DragonType, 15
# 140 "data/tera.pory"
	dynmultipush CommonText_DarkType, 16
# 141 "data/tera.pory"
	dynmultipush CommonText_FairyType, 17
# 142 "data/tera.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, VAR_0x800A, DYN_MULTICHOICE_CB_NONE
# 143 "data/tera.pory"
	switch VAR_RESULT
# 144 "data/tera.pory"
	case 0, Aide_SetTeraType_34
# 147 "data/tera.pory"
	case 1, Aide_SetTeraType_35
# 150 "data/tera.pory"
	case 2, Aide_SetTeraType_36
# 153 "data/tera.pory"
	case 3, Aide_SetTeraType_37
# 156 "data/tera.pory"
	case 4, Aide_SetTeraType_38
# 159 "data/tera.pory"
	case 5, Aide_SetTeraType_39
# 162 "data/tera.pory"
	case 6, Aide_SetTeraType_40
# 165 "data/tera.pory"
	case 7, Aide_SetTeraType_41
# 168 "data/tera.pory"
	case 8, Aide_SetTeraType_42
# 171 "data/tera.pory"
	case 9, Aide_SetTeraType_43
# 174 "data/tera.pory"
	case 10, Aide_SetTeraType_44
# 177 "data/tera.pory"
	case 11, Aide_SetTeraType_45
# 180 "data/tera.pory"
	case 12, Aide_SetTeraType_46
# 183 "data/tera.pory"
	case 13, Aide_SetTeraType_47
# 186 "data/tera.pory"
	case 14, Aide_SetTeraType_48
# 189 "data/tera.pory"
	case 15, Aide_SetTeraType_49
# 192 "data/tera.pory"
	case 16, Aide_SetTeraType_50
# 195 "data/tera.pory"
	case 17, Aide_SetTeraType_51
Aide_SetTeraType_32:
# 200 "data/tera.pory"
	msgbox Text_ChangedTeraType
# 201 "data/tera.pory"
	removeitem ITEM_NORMAL_TERA_SHARD
	goto Aide_SetTeraType_7

Aide_SetTeraType_34:
# 145 "data/tera.pory"
	setteratype TYPE_NORMAL, VAR_0x8004
# 146 "data/tera.pory"
	bufferstring STR_VAR_2, CommonText_NormalType
	goto Aide_SetTeraType_32

Aide_SetTeraType_35:
# 148 "data/tera.pory"
	setteratype TYPE_FIGHTING, VAR_0x8004
# 149 "data/tera.pory"
	bufferstring STR_VAR_2, CommonText_FightingType
	goto Aide_SetTeraType_32

Aide_SetTeraType_36:
# 151 "data/tera.pory"
	setteratype TYPE_FLYING, VAR_0x8004
# 152 "data/tera.pory"
	bufferstring STR_VAR_2, CommonText_FlyingType
	goto Aide_SetTeraType_32

Aide_SetTeraType_37:
# 154 "data/tera.pory"
	setteratype TYPE_POISON, VAR_0x8004
# 155 "data/tera.pory"
	bufferstring STR_VAR_2, CommonText_PoisonType
	goto Aide_SetTeraType_32

Aide_SetTeraType_38:
# 157 "data/tera.pory"
	setteratype TYPE_GROUND, VAR_0x8004
# 158 "data/tera.pory"
	bufferstring STR_VAR_2, CommonText_GroundType
	goto Aide_SetTeraType_32

Aide_SetTeraType_39:
# 160 "data/tera.pory"
	setteratype TYPE_ROCK, VAR_0x8004
# 161 "data/tera.pory"
	bufferstring STR_VAR_2, CommonText_RockType
	goto Aide_SetTeraType_32

Aide_SetTeraType_40:
# 163 "data/tera.pory"
	setteratype TYPE_BUG, VAR_0x8004
# 164 "data/tera.pory"
	bufferstring STR_VAR_2, CommonText_BugType
	goto Aide_SetTeraType_32

Aide_SetTeraType_41:
# 166 "data/tera.pory"
	setteratype TYPE_GHOST, VAR_0x8004
# 167 "data/tera.pory"
	bufferstring STR_VAR_2, CommonText_GhostType
	goto Aide_SetTeraType_32

Aide_SetTeraType_42:
# 169 "data/tera.pory"
	setteratype TYPE_STEEL, VAR_0x8004
# 170 "data/tera.pory"
	bufferstring STR_VAR_2, CommonText_SteelType
	goto Aide_SetTeraType_32

Aide_SetTeraType_43:
# 172 "data/tera.pory"
	setteratype TYPE_FIRE, VAR_0x8004
# 173 "data/tera.pory"
	bufferstring STR_VAR_2, CommonText_FireType
	goto Aide_SetTeraType_32

Aide_SetTeraType_44:
# 175 "data/tera.pory"
	setteratype TYPE_WATER, VAR_0x8004
# 176 "data/tera.pory"
	bufferstring STR_VAR_2, CommonText_WaterType
	goto Aide_SetTeraType_32

Aide_SetTeraType_45:
# 178 "data/tera.pory"
	setteratype TYPE_GRASS, VAR_0x8004
# 179 "data/tera.pory"
	bufferstring STR_VAR_2, CommonText_GrassType
	goto Aide_SetTeraType_32

Aide_SetTeraType_46:
# 181 "data/tera.pory"
	setteratype TYPE_ELECTRIC, VAR_0x8004
# 182 "data/tera.pory"
	bufferstring STR_VAR_2, CommonText_ElectricType
	goto Aide_SetTeraType_32

Aide_SetTeraType_47:
# 184 "data/tera.pory"
	setteratype TYPE_PSYCHIC, VAR_0x8004
# 185 "data/tera.pory"
	bufferstring STR_VAR_2, CommonText_PsychicType
	goto Aide_SetTeraType_32

Aide_SetTeraType_48:
# 187 "data/tera.pory"
	setteratype TYPE_ICE, VAR_0x8004
# 188 "data/tera.pory"
	bufferstring STR_VAR_2, CommonText_IceType
	goto Aide_SetTeraType_32

Aide_SetTeraType_49:
# 190 "data/tera.pory"
	setteratype TYPE_DRAGON, VAR_0x8004
# 191 "data/tera.pory"
	bufferstring STR_VAR_2, CommonText_DragonType
	goto Aide_SetTeraType_32

Aide_SetTeraType_50:
# 193 "data/tera.pory"
	setteratype TYPE_DARK, VAR_0x8004
# 194 "data/tera.pory"
	bufferstring STR_VAR_2, CommonText_DarkType
	goto Aide_SetTeraType_32

Aide_SetTeraType_51:
# 196 "data/tera.pory"
	setteratype TYPE_FAIRY, VAR_0x8004
# 197 "data/tera.pory"
	bufferstring STR_VAR_2, CommonText_FairyType
	goto Aide_SetTeraType_32


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

Aide_SetTeraType_Text_0:
# 75 "data/tera.pory"
	.string "Hello!\n"
	.string "I work with Professor Rowan.\l"
	.string "If you have any Tera Shards, I can\l"
	.string "change the Tera Type of one of your\l"
	.string "Pokémon.$"

Aide_SetTeraType_Text_1:
# 82 "data/tera.pory"
	.string "Oh!\n"
	.string "That's a Stellar Tera Shard!\p"
	.string "Would you like me to set one of your\n"
	.string "Pokémon's Tera Type to Stellar?$"

Aide_SetTeraType_Text_2:
# 86 "data/tera.pory"
	.string "Great!\n"
	.string "Go ahead for me and pick the Pokémon\l"
	.string "whose Tera Type you'd like changed to\l"
	.string "Stellar.$"

Aide_SetTeraType_Text_3:
# 100 "data/tera.pory"
	.string "I'm sorry, the Tera Type of your\n"
	.string "{STR_VAR_1} can't be changed to the\l"
	.string "{STR_VAR_2}.$"

Aide_SetTeraType_Text_4:
# 112 "data/tera.pory"
	.string "Do you want me to change the Tera Type\n"
	.string "of one of your Pokémon in exchange for\l"
	.string "a Normal Tera Shard?$"

Aide_SetTeraType_Text_5:
# 114 "data/tera.pory"
	.string "Great!\n"
	.string "Go ahead for me and pick the Pokémon\l"
	.string "whose Tera Type you'd like changed.$"

Aide_SetTeraType_Text_6:
# 122 "data/tera.pory"
	.string "Your {STR_VAR_1}?\n"
	.string "Ok, which type?$"

Aide_SetTeraType_Text_7:
# 208 "data/tera.pory"
	.string "Nothing chosen.$"

Aide_SetTeraType_Text_8:
# 212 "data/tera.pory"
	.string "Do return to me if you change your mind.$"

Aide_SetTeraType_Text_9:
# 218 "data/tera.pory"
	.string "If you get some Tera Shards into your\n"
	.string "hands, come back to me and I can change\l"
	.string "the Tera Type of one of your Pokémon.$"

Text_ChangedTeraType::
# 224 "data/tera.pory"
	.string "The Tera Type of your {STR_VAR_1}\n"
	.string "has been changed to {STR_VAR_2}.$"

Text_EggTeraType::
# 229 "data/tera.pory"
	.string "Umm…\n"
	.string "That's a Pokémon Egg.\l"
	.string "I'm not sure what you expect me to do\l"
	.string "with that.$"
