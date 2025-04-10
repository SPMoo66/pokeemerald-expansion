RustboroCity_Gym_EventScript_GymStatue::
# 78 "data/gym_statues.pory"
	lockall
# 79 "data/gym_statues.pory"
	bufferstring STR_VAR_1, CommonText_RustboroCity
# 80 "data/gym_statues.pory"
	bufferstring STR_VAR_2, CommonText_Roxanne
# 81 "data/gym_statues.pory"
	goto_if_set FLAG_BADGE06_GET, RustboroCity_Gym_EventScript_GymStatue_2
# 84 "data/gym_statues.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 4
	goto_if_ge RustboroCity_Gym_EventScript_GymStatue_3
# 87 "data/gym_statues.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_Gym_EventScript_GymStatue_4
# 91 "data/gym_statues.pory"
	msgbox Text_GymStatue_Sakura_Jakson, MSGBOX_DEFAULT
RustboroCity_Gym_EventScript_GymStatue_1:
# 93 "data/gym_statues.pory"
	releaseall
	return

RustboroCity_Gym_EventScript_GymStatue_2:
# 82 "data/gym_statues.pory"
	msgbox Text_GymStatue_Sakura_Jakson_Player_Redd_Harper_Baron_Wally, MSGBOX_DEFAULT
	goto RustboroCity_Gym_EventScript_GymStatue_1

RustboroCity_Gym_EventScript_GymStatue_3:
# 85 "data/gym_statues.pory"
	msgbox Text_GymStatue_Sakura_Jakson_Player_Redd_Harper_Baron, MSGBOX_DEFAULT
	goto RustboroCity_Gym_EventScript_GymStatue_1

RustboroCity_Gym_EventScript_GymStatue_4:
# 88 "data/gym_statues.pory"
	msgbox Text_GymStatue_Sakura_Jakson_Player, MSGBOX_DEFAULT
	goto RustboroCity_Gym_EventScript_GymStatue_1


DewfordTown_Gym_EventScript_GymStatue::
# 97 "data/gym_statues.pory"
	lockall
# 98 "data/gym_statues.pory"
	bufferstring STR_VAR_1, CommonText_DewfordTown
# 99 "data/gym_statues.pory"
	bufferstring STR_VAR_2, CommonText_Brawly
# 100 "data/gym_statues.pory"
	goto_if_set FLAG_BADGE06_GET, DewfordTown_Gym_EventScript_GymStatue_2
# 103 "data/gym_statues.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 5
	goto_if_ge DewfordTown_Gym_EventScript_GymStatue_3
# 106 "data/gym_statues.pory"
	goto_if_set FLAG_BADGE02_GET, DewfordTown_Gym_EventScript_GymStatue_4
# 110 "data/gym_statues.pory"
	msgbox Text_GymStatue_Sakura_Jakson, MSGBOX_DEFAULT
DewfordTown_Gym_EventScript_GymStatue_1:
# 112 "data/gym_statues.pory"
	releaseall
	return

DewfordTown_Gym_EventScript_GymStatue_2:
# 101 "data/gym_statues.pory"
	msgbox Text_GymStatue_Sakura_Jakson_Player_Redd_Harper_Baron_Wally, MSGBOX_DEFAULT
	goto DewfordTown_Gym_EventScript_GymStatue_1

DewfordTown_Gym_EventScript_GymStatue_3:
# 104 "data/gym_statues.pory"
	msgbox Text_GymStatue_Sakura_Jakson_Player_Redd_Harper_Baron, MSGBOX_DEFAULT
	goto DewfordTown_Gym_EventScript_GymStatue_1

DewfordTown_Gym_EventScript_GymStatue_4:
# 107 "data/gym_statues.pory"
	msgbox Text_GymStatue_Sakura_Jakson_Player, MSGBOX_DEFAULT
	goto DewfordTown_Gym_EventScript_GymStatue_1


MauvilleCity_Gym_EventScript_GymStatue::
# 116 "data/gym_statues.pory"
	lockall
# 117 "data/gym_statues.pory"
	bufferstring STR_VAR_1, CommonText_MauvilleCity
# 118 "data/gym_statues.pory"
	bufferstring STR_VAR_2, CommonText_Wattson
# 119 "data/gym_statues.pory"
	goto_if_set FLAG_RECEIVED_RED_OR_BLUE_ORB, MauvilleCity_Gym_EventScript_GymStatue_2
# 122 "data/gym_statues.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 7
	goto_if_ge MauvilleCity_Gym_EventScript_GymStatue_3
# 125 "data/gym_statues.pory"
	goto_if_set FLAG_BADGE03_GET, MauvilleCity_Gym_EventScript_GymStatue_4
# 129 "data/gym_statues.pory"
	msgbox Text_GymStatue_Sakura_Jakson, MSGBOX_DEFAULT
MauvilleCity_Gym_EventScript_GymStatue_1:
# 131 "data/gym_statues.pory"
	releaseall
	return

MauvilleCity_Gym_EventScript_GymStatue_2:
# 120 "data/gym_statues.pory"
	msgbox Text_GymStatue_Sakura_Jakson_Player_Redd_Harper_Baron_Wally, MSGBOX_DEFAULT
	goto MauvilleCity_Gym_EventScript_GymStatue_1

MauvilleCity_Gym_EventScript_GymStatue_3:
# 123 "data/gym_statues.pory"
	msgbox Text_GymStatue_Sakura_Jakson_Player_Redd_Harper_Baron, MSGBOX_DEFAULT
	goto MauvilleCity_Gym_EventScript_GymStatue_1

MauvilleCity_Gym_EventScript_GymStatue_4:
# 126 "data/gym_statues.pory"
	msgbox Text_GymStatue_Sakura_Jakson_Player, MSGBOX_DEFAULT
	goto MauvilleCity_Gym_EventScript_GymStatue_1


LavaridgeTown_Gym_1F_EventScript_GymStatue::
# 135 "data/gym_statues.pory"
	lockall
# 136 "data/gym_statues.pory"
	bufferstring STR_VAR_1, CommonText_LavaridgeTown
# 137 "data/gym_statues.pory"
	bufferstring STR_VAR_2, CommonText_Flannery
# 138 "data/gym_statues.pory"
	goto_if_set FLAG_RECEIVED_RED_OR_BLUE_ORB, LavaridgeTown_Gym_1F_EventScript_GymStatue_2
# 141 "data/gym_statues.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 7
	goto_if_ge LavaridgeTown_Gym_1F_EventScript_GymStatue_3
# 144 "data/gym_statues.pory"
	goto_if_set FLAG_BADGE04_GET, LavaridgeTown_Gym_1F_EventScript_GymStatue_4
# 148 "data/gym_statues.pory"
	msgbox Text_GymStatue_Sakura_Jakson, MSGBOX_DEFAULT
LavaridgeTown_Gym_1F_EventScript_GymStatue_1:
# 150 "data/gym_statues.pory"
	releaseall
	return

LavaridgeTown_Gym_1F_EventScript_GymStatue_2:
# 139 "data/gym_statues.pory"
	msgbox Text_GymStatue_Sakura_Jakson_Player_Redd_Harper_Baron_Wally, MSGBOX_DEFAULT
	goto LavaridgeTown_Gym_1F_EventScript_GymStatue_1

LavaridgeTown_Gym_1F_EventScript_GymStatue_3:
# 142 "data/gym_statues.pory"
	msgbox Text_GymStatue_Sakura_Jakson_Player_Redd_Harper_Baron, MSGBOX_DEFAULT
	goto LavaridgeTown_Gym_1F_EventScript_GymStatue_1

LavaridgeTown_Gym_1F_EventScript_GymStatue_4:
# 145 "data/gym_statues.pory"
	msgbox Text_GymStatue_Sakura_Jakson_Player, MSGBOX_DEFAULT
	goto LavaridgeTown_Gym_1F_EventScript_GymStatue_1


PetalburgCity_Gym_EventScript_GymStatue::
# 154 "data/gym_statues.pory"
	lockall
# 155 "data/gym_statues.pory"
	bufferstring STR_VAR_1, CommonText_PetalburgCity
# 156 "data/gym_statues.pory"
	bufferstring STR_VAR_2, CommonText_Norman
# 157 "data/gym_statues.pory"
	goto_if_set FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE, PetalburgCity_Gym_EventScript_GymStatue_2
# 160 "data/gym_statues.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 7
	goto_if_ge PetalburgCity_Gym_EventScript_GymStatue_3
# 163 "data/gym_statues.pory"
	goto_if_set FLAG_BADGE05_GET, PetalburgCity_Gym_EventScript_GymStatue_4
# 167 "data/gym_statues.pory"
	msgbox Text_GymStatue_Sakura_Jakson, MSGBOX_DEFAULT
PetalburgCity_Gym_EventScript_GymStatue_1:
# 169 "data/gym_statues.pory"
	releaseall
	return

PetalburgCity_Gym_EventScript_GymStatue_2:
# 158 "data/gym_statues.pory"
	msgbox Text_GymStatue_Sakura_Jakson_Player_Redd_Harper_Baron_Wally, MSGBOX_DEFAULT
	goto PetalburgCity_Gym_EventScript_GymStatue_1

PetalburgCity_Gym_EventScript_GymStatue_3:
# 161 "data/gym_statues.pory"
	msgbox Text_GymStatue_Sakura_Jakson_Player_Redd_Harper_Baron, MSGBOX_DEFAULT
	goto PetalburgCity_Gym_EventScript_GymStatue_1

PetalburgCity_Gym_EventScript_GymStatue_4:
# 164 "data/gym_statues.pory"
	msgbox Text_GymStatue_Sakura_Jakson_Player, MSGBOX_DEFAULT
	goto PetalburgCity_Gym_EventScript_GymStatue_1


FortreeCity_Gym_EventScript_GymStatue::
# 173 "data/gym_statues.pory"
	lockall
# 174 "data/gym_statues.pory"
	bufferstring STR_VAR_1, CommonText_FortreeCity
# 175 "data/gym_statues.pory"
	bufferstring STR_VAR_2, CommonText_Winona
# 176 "data/gym_statues.pory"
	goto_if_set FLAG_BADGE07_GET, FortreeCity_Gym_EventScript_GymStatue_2
# 179 "data/gym_statues.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 7
	goto_if_ge FortreeCity_Gym_EventScript_GymStatue_3
# 182 "data/gym_statues.pory"
	goto_if_set FLAG_BADGE06_GET, FortreeCity_Gym_EventScript_GymStatue_4
# 186 "data/gym_statues.pory"
	msgbox Text_GymStatue_Sakura_Jakson_Redd, MSGBOX_DEFAULT
FortreeCity_Gym_EventScript_GymStatue_1:
# 188 "data/gym_statues.pory"
	releaseall
	return

FortreeCity_Gym_EventScript_GymStatue_2:
# 177 "data/gym_statues.pory"
	msgbox Text_GymStatue_Sakura_Jakson_Redd_Player_Harper_Baron_Wally, MSGBOX_DEFAULT
	goto FortreeCity_Gym_EventScript_GymStatue_1

FortreeCity_Gym_EventScript_GymStatue_3:
# 180 "data/gym_statues.pory"
	msgbox Text_GymStatue_Sakura_Jakson_Redd_Player_Harper_Baron, MSGBOX_DEFAULT
	goto FortreeCity_Gym_EventScript_GymStatue_1

FortreeCity_Gym_EventScript_GymStatue_4:
# 183 "data/gym_statues.pory"
	msgbox Text_GymStatue_Sakura_Jakson_Redd_Player, MSGBOX_DEFAULT
	goto FortreeCity_Gym_EventScript_GymStatue_1


MossdeepCity_Gym_EventScript_GymStatue::
# 192 "data/gym_statues.pory"
	lockall
# 193 "data/gym_statues.pory"
	bufferstring STR_VAR_1, CommonText_MossdeepCity
# 194 "data/gym_statues.pory"
	bufferstring STR_VAR_2, CommonText_LizaAndTate
# 195 "data/gym_statues.pory"
	goto_if_set FLAG_VISITED_SOOTOPOLIS_CITY, MossdeepCity_Gym_EventScript_GymStatue_2
# 198 "data/gym_statues.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 7
	goto_if_ge MossdeepCity_Gym_EventScript_GymStatue_3
# 201 "data/gym_statues.pory"
	goto_if_set FLAG_BADGE07_GET, MossdeepCity_Gym_EventScript_GymStatue_4
# 205 "data/gym_statues.pory"
	msgbox Text_GymStatue_Sakura_Jakson_Redd, MSGBOX_DEFAULT
MossdeepCity_Gym_EventScript_GymStatue_1:
# 207 "data/gym_statues.pory"
	releaseall
	return

MossdeepCity_Gym_EventScript_GymStatue_2:
# 196 "data/gym_statues.pory"
	msgbox Text_GymStatue_Sakura_Jakson_Redd_Player_Harper_Baron_Wally, MSGBOX_DEFAULT
	goto MossdeepCity_Gym_EventScript_GymStatue_1

MossdeepCity_Gym_EventScript_GymStatue_3:
# 199 "data/gym_statues.pory"
	msgbox Text_GymStatue_Sakura_Jakson_Redd_Player_Harper_Baron, MSGBOX_DEFAULT
	goto MossdeepCity_Gym_EventScript_GymStatue_1

MossdeepCity_Gym_EventScript_GymStatue_4:
# 202 "data/gym_statues.pory"
	msgbox Text_GymStatue_Sakura_Jakson_Redd_Player, MSGBOX_DEFAULT
	goto MossdeepCity_Gym_EventScript_GymStatue_1


SootopolisCity_Gym_1F_EventScript_GymStatue::
# 211 "data/gym_statues.pory"
	lockall
# 212 "data/gym_statues.pory"
	bufferstring STR_VAR_1, CommonText_SootopolisCity
# 213 "data/gym_statues.pory"
	bufferstring STR_VAR_2, CommonText_Juan
# 214 "data/gym_statues.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 7
	goto_if_ge SootopolisCity_Gym_1F_EventScript_GymStatue_2
# 217 "data/gym_statues.pory"
	goto_if_set FLAG_BADGE08_GET, SootopolisCity_Gym_1F_EventScript_GymStatue_3
# 221 "data/gym_statues.pory"
	msgbox Text_GymStatue_Wally_Sakura_Jakson_Redd, MSGBOX_DEFAULT
SootopolisCity_Gym_1F_EventScript_GymStatue_1:
# 223 "data/gym_statues.pory"
	releaseall
	return

SootopolisCity_Gym_1F_EventScript_GymStatue_2:
# 215 "data/gym_statues.pory"
	msgbox Text_GymStatue_Wally_Sakura_Jakson_Redd_Player_Harper_Baron, MSGBOX_DEFAULT
	goto SootopolisCity_Gym_1F_EventScript_GymStatue_1

SootopolisCity_Gym_1F_EventScript_GymStatue_3:
# 218 "data/gym_statues.pory"
	msgbox Text_GymStatue_Wally_Sakura_Jakson_Redd_Player, MSGBOX_DEFAULT
	goto SootopolisCity_Gym_1F_EventScript_GymStatue_1


Text_GymStatue_Sakura_Jakson::
# 2 "data/gym_statues.pory"
	.string "{STR_VAR_1} Pokémon Gym\p"
	.string "{STR_VAR_2}'s certified Trainers:\n"
	.string "Sakura, Jakson$"

Text_GymStatue_Sakura_Jakson_Player::
# 8 "data/gym_statues.pory"
	.string "{STR_VAR_1} Pokémon Gym\p"
	.string "{STR_VAR_2}'s certified Trainers:\n"
	.string "Sakura, Jakson, {PLAYER}$"

Text_GymStatue_Sakura_Jakson_Player_Redd_Harper_Baron::
# 14 "data/gym_statues.pory"
	.string "{STR_VAR_1} Pokémon Gym\p"
	.string "{STR_VAR_2}'s certified Trainers:\n"
	.string "Sakura, Jakson, {PLAYER}, Redd,\l"
	.string "Harper, Baron$"

Text_GymStatue_Sakura_Jakson_Player_Redd_Harper_Baron_Wally::
# 21 "data/gym_statues.pory"
	.string "{STR_VAR_1} Pokémon Gym\p"
	.string "{STR_VAR_2}'s certified Trainers:\n"
	.string "Sakura, Jakson, {PLAYER}, Redd,\l"
	.string "Harper, Baron, Wally$"

Text_GymStatue_Sakura_Jakson_Redd::
# 29 "data/gym_statues.pory"
	.string "{STR_VAR_1} Pokémon Gym\p"
	.string "{STR_VAR_2}'s certified Trainers:\n"
	.string "Sakura, Jakson, Redd$"

Text_GymStatue_Sakura_Jakson_Redd_Player::
# 35 "data/gym_statues.pory"
	.string "{STR_VAR_1} Pokémon Gym\p"
	.string "{STR_VAR_2}'s certified Trainers:\n"
	.string "Sakura, Jakson, Redd, {PLAYER}$"

Text_GymStatue_Sakura_Jakson_Redd_Player_Harper_Baron::
# 41 "data/gym_statues.pory"
	.string "{STR_VAR_1} Pokémon Gym\p"
	.string "{STR_VAR_2}'s certified Trainers:\n"
	.string "Sakura, Jakson, Redd, {PLAYER}\l"
	.string "Harper, Baron$"

Text_GymStatue_Sakura_Jakson_Redd_Player_Harper_Baron_Wally::
# 48 "data/gym_statues.pory"
	.string "{STR_VAR_1} Pokémon Gym\p"
	.string "{STR_VAR_2}'s certified Trainers:\n"
	.string "Sakura, Jakson, Redd, {PLAYER}\l"
	.string "Harper, Baron, Wally$"

Text_GymStatue_Wally_Sakura_Jakson_Redd::
# 56 "data/gym_statues.pory"
	.string "{STR_VAR_1} Pokémon Gym\p"
	.string "{STR_VAR_2}'s certified Trainers:\n"
	.string "Wally, Sakura, Jakson, Redd$"

Text_GymStatue_Wally_Sakura_Jakson_Redd_Player::
# 62 "data/gym_statues.pory"
	.string "{STR_VAR_1} Pokémon Gym\p"
	.string "{STR_VAR_2}'s certified Trainers:\n"
	.string "Wally, Sakura, Jakson, Redd,\l"
	.string "{PLAYER}$"

Text_GymStatue_Wally_Sakura_Jakson_Redd_Player_Harper_Baron::
# 69 "data/gym_statues.pory"
	.string "{STR_VAR_1} Pokémon Gym\p"
	.string "{STR_VAR_2}'s certified Trainers:\n"
	.string "Wally, Sakura, Jakson, Redd\l"
	.string "{PLAYER}, Harper, Baron$"
