RustboroCity_Gym_EventScript_GymStatue::
# 29 "data/gym_statues.pory"
	lockall
# 30 "data/gym_statues.pory"
	bufferstring STR_VAR_1, CommonText_RustboroCity
# 31 "data/gym_statues.pory"
	bufferstring STR_VAR_2, CommonText_Roxanne
# 32 "data/gym_statues.pory"
	goto_if_set FLAG_BADGE06_GET, RustboroCity_Gym_EventScript_GymStatue_2
# 35 "data/gym_statues.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 4
	goto_if_ge RustboroCity_Gym_EventScript_GymStatue_3
# 38 "data/gym_statues.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_Gym_EventScript_GymStatue_4
# 42 "data/gym_statues.pory"
	msgbox Text_GymStatue_Sakura_Jakson, MSGBOX_DEFAULT
RustboroCity_Gym_EventScript_GymStatue_1:
# 44 "data/gym_statues.pory"
	releaseall
	return

RustboroCity_Gym_EventScript_GymStatue_2:
# 33 "data/gym_statues.pory"
	msgbox Text_GymStatue_Sakura_Jakson_Player_Redd_Harper_Baron_Wally, MSGBOX_DEFAULT
	goto RustboroCity_Gym_EventScript_GymStatue_1

RustboroCity_Gym_EventScript_GymStatue_3:
# 36 "data/gym_statues.pory"
	msgbox Text_GymStatue_Sakura_Jakson_Player_Redd_Harper_Baron, MSGBOX_DEFAULT
	goto RustboroCity_Gym_EventScript_GymStatue_1

RustboroCity_Gym_EventScript_GymStatue_4:
# 39 "data/gym_statues.pory"
	msgbox Text_GymStatue_Sakura_Jakson_Player, MSGBOX_DEFAULT
	goto RustboroCity_Gym_EventScript_GymStatue_1


Text_GymStatue_Sakura_Jakson::
# 1 "data/gym_statues.pory"
	.string "{STR_VAR_1} Pokémon Gym\p"
	.string "{STR_VAR_2}'s certified Trainers:\n"
	.string "Sakura, Jakson$"

Text_GymStatue_Sakura_Jakson_Player::
# 7 "data/gym_statues.pory"
	.string "{STR_VAR_1} Pokémon Gym\p"
	.string "{STR_VAR_2}'s certified Trainers:\n"
	.string "Sakura, Jakson, {PLAYER}$"

Text_GymStatue_Sakura_Jakson_Player_Redd_Harper_Baron::
# 13 "data/gym_statues.pory"
	.string "{STR_VAR_1} Pokémon Gym\p"
	.string "{STR_VAR_2}'s certified Trainers:\n"
	.string "Sakura, Jakson, {PLAYER}, Redd,\l"
	.string "Harper, Baron$"

Text_GymStatue_Sakura_Jakson_Player_Redd_Harper_Baron_Wally::
# 20 "data/gym_statues.pory"
	.string "{STR_VAR_1} Pokémon Gym\p"
	.string "{STR_VAR_2}'s certified Trainers:\n"
	.string "Sakura, Jakson, {PLAYER}, Redd,\l"
	.string "Harper, Baron, Wally$"
