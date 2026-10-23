EventScript_MusicUnlocked::
# 63 "data/scripts/tuning_fork.pory"
	message EventScript_MusicUnlocked_Text_0
# 64 "data/scripts/tuning_fork.pory"
	playse SE_CONTEST_PLACE
# 65 "data/scripts/tuning_fork.pory"
	waitse
# 66 "data/scripts/tuning_fork.pory"
	waitbuttonpress
# 67 "data/scripts/tuning_fork.pory"
	closemessage
	return


EventScript_TuningFork::
# 71 "data/scripts/tuning_fork.pory"
	msgbox EventScript_TuningFork_Text_0
# 72 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_Text_1, 0
# 73 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_Text_2, 1
# 75 "data/scripts/tuning_fork.pory"
	dynmultistack 0, 6, FALSE, 5, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 77 "data/scripts/tuning_fork.pory"
	compare VAR_RESULT, 2
	goto_if_eq EventScript_TuningFork_2
EventScript_TuningFork_1:
# 89 "data/scripts/tuning_fork.pory"
	compare VAR_RESULT, 127
	goto_if_ne EventScript_TuningFork_5
EventScript_TuningFork_4:
# 93 "data/scripts/tuning_fork.pory"
	closemessage
# 94 "data/scripts/tuning_fork.pory"
	release
	return

EventScript_TuningFork_2:
# 79 "data/scripts/tuning_fork.pory"
	checkifmusicunlocked 0, 1
# 80 "data/scripts/tuning_fork.pory"
	checkifmusicunlocked 1, 1
# 81 "data/scripts/tuning_fork.pory"
	checkifmusicunlocked 2, 1
# 82 "data/scripts/tuning_fork.pory"
	checkifmusicunlocked 3, 1
# 83 "data/scripts/tuning_fork.pory"
	checkifmusicunlocked 4, 1
# 84 "data/scripts/tuning_fork.pory"
	checkifmusicunlocked 5, 1
# 85 "data/scripts/tuning_fork.pory"
	checkifmusicunlocked 6, 1
# 86 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork
	goto EventScript_TuningFork_1

EventScript_TuningFork_5:
# 91 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_ChooseType
	goto EventScript_TuningFork_4


EventScript_TuningFork_ChooseType::
# 99 "data/scripts/tuning_fork.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 101 "data/scripts/tuning_fork.pory"
	msgbox EventScript_TuningFork_ChooseType_Text_0
# 102 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_ChooseType_Text_1, 0
# 103 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_ChooseType_Text_2, 1
# 104 "data/scripts/tuning_fork.pory"
	compare VAR_TUNING_FORK_WILD, 0
	goto_if_ne EventScript_TuningFork_ChooseType_4
EventScript_TuningFork_ChooseType_3:
# 104 "data/scripts/tuning_fork.pory"
	compare VAR_TUNING_FORK_TRAINER, 0
	goto_if_ne EventScript_TuningFork_ChooseType_7
EventScript_TuningFork_ChooseType_1:
# 108 "data/scripts/tuning_fork.pory"
	dynmultistack 0, 6, FALSE, 5, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 110 "data/scripts/tuning_fork.pory"
	compare VAR_RESULT, 127
	goto_if_eq EventScript_TuningFork_ChooseType_11
# 115 "data/scripts/tuning_fork.pory"
	compare VAR_RESULT, 0
	goto_if_eq EventScript_TuningFork_ChooseType_12
# 120 "data/scripts/tuning_fork.pory"
	compare VAR_RESULT, 1
	goto_if_eq EventScript_TuningFork_ChooseType_13
# 125 "data/scripts/tuning_fork.pory"
	compare VAR_RESULT, 2
	goto_if_eq EventScript_TuningFork_ChooseType_14
EventScript_TuningFork_ChooseType_10:
# 138 "data/scripts/tuning_fork.pory"
	release
	return

EventScript_TuningFork_ChooseType_2:
# 106 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_ChooseType_Text_3, 2
	goto EventScript_TuningFork_ChooseType_1

EventScript_TuningFork_ChooseType_4:
# 104 "data/scripts/tuning_fork.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq EventScript_TuningFork_ChooseType_2
	goto EventScript_TuningFork_ChooseType_3

EventScript_TuningFork_ChooseType_7:
# 104 "data/scripts/tuning_fork.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq EventScript_TuningFork_ChooseType_2
	goto EventScript_TuningFork_ChooseType_1

EventScript_TuningFork_ChooseType_11:
# 112 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork
	goto EventScript_TuningFork_ChooseType_10

EventScript_TuningFork_ChooseType_12:
# 117 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_Pokemon
	goto EventScript_TuningFork_ChooseType_10

EventScript_TuningFork_ChooseType_13:
# 122 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_Other
	goto EventScript_TuningFork_ChooseType_10

EventScript_TuningFork_ChooseType_14:
# 127 "data/scripts/tuning_fork.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq EventScript_TuningFork_ChooseType_20
# 133 "data/scripts/tuning_fork.pory"
	setvar VAR_TUNING_FORK_TRAINER, 0
EventScript_TuningFork_ChooseType_19:
# 135 "data/scripts/tuning_fork.pory"
	msgbox EventScript_TuningFork_ChooseType_Text_4
# 136 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork
	goto EventScript_TuningFork_ChooseType_10

EventScript_TuningFork_ChooseType_20:
# 129 "data/scripts/tuning_fork.pory"
	setvar VAR_TUNING_FORK_WILD, 0
	goto EventScript_TuningFork_ChooseType_19


EventScript_TuningFork_Pokemon::
# 143 "data/scripts/tuning_fork.pory"
	msgbox EventScript_TuningFork_Pokemon_Text_0
# 144 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_Pokemon_Text_1, 0
# 145 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_Pokemon_Text_2, 1
# 146 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_Pokemon_Text_3, 2
# 147 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_Pokemon_Text_4, 3
# 148 "data/scripts/tuning_fork.pory"
	checkifmusicunlocked 3
# 149 "data/scripts/tuning_fork.pory"
	compare VAR_RESULT, 0
	goto_if_ne EventScript_TuningFork_Pokemon_2
EventScript_TuningFork_Pokemon_1:
# 153 "data/scripts/tuning_fork.pory"
	checkifmusicunlocked 6
# 154 "data/scripts/tuning_fork.pory"
	compare VAR_RESULT, 0
	goto_if_ne EventScript_TuningFork_Pokemon_5
EventScript_TuningFork_Pokemon_4:
# 158 "data/scripts/tuning_fork.pory"
	dynmultistack 0, 2, FALSE, 5, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 160 "data/scripts/tuning_fork.pory"
	compare VAR_RESULT, 0
	goto_if_eq EventScript_TuningFork_Pokemon_7
# 165 "data/scripts/tuning_fork.pory"
	compare VAR_RESULT, 1
	goto_if_eq EventScript_TuningFork_Pokemon_8
# 170 "data/scripts/tuning_fork.pory"
	compare VAR_RESULT, 2
	goto_if_eq EventScript_TuningFork_Pokemon_9
# 175 "data/scripts/tuning_fork.pory"
	compare VAR_RESULT, 3
	goto_if_eq EventScript_TuningFork_Pokemon_10
# 180 "data/scripts/tuning_fork.pory"
	compare VAR_RESULT, 4
	goto_if_eq EventScript_TuningFork_Pokemon_11
# 185 "data/scripts/tuning_fork.pory"
	compare VAR_RESULT, 5
	goto_if_eq EventScript_TuningFork_Pokemon_12
# 192 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_ChooseType
	return

EventScript_TuningFork_Pokemon_2:
# 151 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_Pokemon_Text_5, 4
	goto EventScript_TuningFork_Pokemon_1

EventScript_TuningFork_Pokemon_5:
# 156 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_ChooseType_Text_2, 5
	goto EventScript_TuningFork_Pokemon_4

EventScript_TuningFork_Pokemon_7:
# 162 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_PokemonRSE
	return

EventScript_TuningFork_Pokemon_8:
# 167 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_PokemonFRLG
	return

EventScript_TuningFork_Pokemon_9:
# 172 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_PokemonDPPt
	return

EventScript_TuningFork_Pokemon_10:
# 177 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_PokemonHGSS
	return

EventScript_TuningFork_Pokemon_11:
# 182 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_PokemonBW
	return

EventScript_TuningFork_Pokemon_12:
# 187 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_PokemonOther
	return


EventScript_TuningFork_PokemonRSE::
# 197 "data/scripts/tuning_fork.pory"
	msgbox TextChooseSong
# 198 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonRSE_Text_0, 0
# 199 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonRSE_Text_1, 1
# 200 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonRSE_Text_2, 2
# 201 "data/scripts/tuning_fork.pory"
	checkifmusicunlocked 0
# 202 "data/scripts/tuning_fork.pory"
	compare VAR_RESULT, 0
	goto_if_ne EventScript_TuningFork_PokemonRSE_2
EventScript_TuningFork_PokemonRSE_1:
# 206 "data/scripts/tuning_fork.pory"
	checkifmusicunlocked 1
# 207 "data/scripts/tuning_fork.pory"
	compare VAR_RESULT, 0
	goto_if_ne EventScript_TuningFork_PokemonRSE_5
EventScript_TuningFork_PokemonRSE_4:
# 213 "data/scripts/tuning_fork.pory"
	checkifmusicunlocked 2
# 214 "data/scripts/tuning_fork.pory"
	compare VAR_RESULT, 0
	goto_if_ne EventScript_TuningFork_PokemonRSE_8
EventScript_TuningFork_PokemonRSE_7:
# 221 "data/scripts/tuning_fork.pory"
	dynmultistack 0, 2, FALSE, 5, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 222 "data/scripts/tuning_fork.pory"
	switch VAR_RESULT
# 224 "data/scripts/tuning_fork.pory"
	case 0, EventScript_TuningFork_PokemonRSE_11
# 227 "data/scripts/tuning_fork.pory"
	case 1, EventScript_TuningFork_PokemonRSE_12
# 230 "data/scripts/tuning_fork.pory"
	case 2, EventScript_TuningFork_PokemonRSE_13
# 233 "data/scripts/tuning_fork.pory"
	case 3, EventScript_TuningFork_PokemonRSE_14
# 236 "data/scripts/tuning_fork.pory"
	case 4, EventScript_TuningFork_PokemonRSE_15
# 239 "data/scripts/tuning_fork.pory"
	case 5, EventScript_TuningFork_PokemonRSE_16
# 242 "data/scripts/tuning_fork.pory"
	case 6, EventScript_TuningFork_PokemonRSE_17
# 245 "data/scripts/tuning_fork.pory"
	case 7, EventScript_TuningFork_PokemonRSE_18
# 248 "data/scripts/tuning_fork.pory"
	case 8, EventScript_TuningFork_PokemonRSE_19
# 251 "data/scripts/tuning_fork.pory"
	case 9, EventScript_TuningFork_PokemonRSE_20
# 254 "data/scripts/tuning_fork.pory"
	case 10, EventScript_TuningFork_PokemonRSE_21
# 258 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_Pokemon
	return

EventScript_TuningFork_PokemonRSE_2:
# 204 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonRSE_Text_3, 3
	goto EventScript_TuningFork_PokemonRSE_1

EventScript_TuningFork_PokemonRSE_5:
# 209 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonRSE_Text_4, 4
# 210 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonRSE_Text_5, 5
# 211 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonRSE_Text_6, 6
	goto EventScript_TuningFork_PokemonRSE_4

EventScript_TuningFork_PokemonRSE_8:
# 216 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonRSE_Text_7, 7
# 217 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonRSE_Text_8, 8
# 218 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonRSE_Text_9, 9
# 219 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonRSE_Text_10, 10
	goto EventScript_TuningFork_PokemonRSE_7

EventScript_TuningFork_PokemonRSE_11:
# 225 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 1
# 226 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return

EventScript_TuningFork_PokemonRSE_12:
# 228 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 2
# 229 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return

EventScript_TuningFork_PokemonRSE_13:
# 231 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 3
# 232 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return

EventScript_TuningFork_PokemonRSE_14:
# 234 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 4
# 235 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return

EventScript_TuningFork_PokemonRSE_15:
# 237 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 5
# 238 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return

EventScript_TuningFork_PokemonRSE_16:
# 240 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 6
# 241 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return

EventScript_TuningFork_PokemonRSE_17:
# 243 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 7
# 244 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return

EventScript_TuningFork_PokemonRSE_18:
# 246 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 8
# 247 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return

EventScript_TuningFork_PokemonRSE_19:
# 249 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 9
# 250 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return

EventScript_TuningFork_PokemonRSE_20:
# 252 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 10
# 253 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return

EventScript_TuningFork_PokemonRSE_21:
# 255 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 11
# 256 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return


EventScript_TuningFork_PokemonFRLG::
# 263 "data/scripts/tuning_fork.pory"
	msgbox TextChooseSong
# 264 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonFRLG_Text_0, 0
# 265 "data/scripts/tuning_fork.pory"
	checkifmusicunlocked 1
# 266 "data/scripts/tuning_fork.pory"
	compare VAR_RESULT, 0
	goto_if_ne EventScript_TuningFork_PokemonFRLG_2
EventScript_TuningFork_PokemonFRLG_1:
# 270 "data/scripts/tuning_fork.pory"
	checkifmusicunlocked 2
# 271 "data/scripts/tuning_fork.pory"
	compare VAR_RESULT, 0
	goto_if_ne EventScript_TuningFork_PokemonFRLG_5
EventScript_TuningFork_PokemonFRLG_4:
# 277 "data/scripts/tuning_fork.pory"
	dynmultistack 0, 2, FALSE, 5, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 278 "data/scripts/tuning_fork.pory"
	switch VAR_RESULT
# 280 "data/scripts/tuning_fork.pory"
	case 0, EventScript_TuningFork_PokemonFRLG_8
# 283 "data/scripts/tuning_fork.pory"
	case 1, EventScript_TuningFork_PokemonFRLG_9
# 286 "data/scripts/tuning_fork.pory"
	case 2, EventScript_TuningFork_PokemonFRLG_10
# 289 "data/scripts/tuning_fork.pory"
	case 3, EventScript_TuningFork_PokemonFRLG_11
# 292 "data/scripts/tuning_fork.pory"
	case 4, EventScript_TuningFork_PokemonFRLG_12
# 296 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_Pokemon
	return

EventScript_TuningFork_PokemonFRLG_2:
# 268 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonFRLG_Text_1, 1
	goto EventScript_TuningFork_PokemonFRLG_1

EventScript_TuningFork_PokemonFRLG_5:
# 273 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonFRLG_Text_2, 2
# 274 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonFRLG_Text_3, 3
# 275 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonFRLG_Text_4, 4
	goto EventScript_TuningFork_PokemonFRLG_4

EventScript_TuningFork_PokemonFRLG_8:
# 281 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 12
# 282 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return

EventScript_TuningFork_PokemonFRLG_9:
# 284 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 13
# 285 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return

EventScript_TuningFork_PokemonFRLG_10:
# 287 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 14
# 288 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return

EventScript_TuningFork_PokemonFRLG_11:
# 290 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 15
# 291 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return

EventScript_TuningFork_PokemonFRLG_12:
# 293 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 16
# 294 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return


EventScript_TuningFork_PokemonDPPt::
# 301 "data/scripts/tuning_fork.pory"
	msgbox TextChooseSong
# 302 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonDPPt_Text_0, 0
# 303 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonDPPt_Text_1, 1
# 304 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonDPPt_Text_2, 2
# 305 "data/scripts/tuning_fork.pory"
	checkifmusicunlocked 0
# 306 "data/scripts/tuning_fork.pory"
	compare VAR_RESULT, 0
	goto_if_ne EventScript_TuningFork_PokemonDPPt_2
EventScript_TuningFork_PokemonDPPt_1:
# 311 "data/scripts/tuning_fork.pory"
	checkifmusicunlocked 1
# 312 "data/scripts/tuning_fork.pory"
	compare VAR_RESULT, 0
	goto_if_ne EventScript_TuningFork_PokemonDPPt_5
EventScript_TuningFork_PokemonDPPt_4:
# 318 "data/scripts/tuning_fork.pory"
	checkifmusicunlocked 2
# 319 "data/scripts/tuning_fork.pory"
	compare VAR_RESULT, 0
	goto_if_ne EventScript_TuningFork_PokemonDPPt_8
EventScript_TuningFork_PokemonDPPt_7:
# 328 "data/scripts/tuning_fork.pory"
	dynmultistack 0, 2, FALSE, 5, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 329 "data/scripts/tuning_fork.pory"
	switch VAR_RESULT
# 331 "data/scripts/tuning_fork.pory"
	case 0, EventScript_TuningFork_PokemonDPPt_11
# 334 "data/scripts/tuning_fork.pory"
	case 1, EventScript_TuningFork_PokemonDPPt_12
# 337 "data/scripts/tuning_fork.pory"
	case 2, EventScript_TuningFork_PokemonDPPt_13
# 340 "data/scripts/tuning_fork.pory"
	case 3, EventScript_TuningFork_PokemonDPPt_14
# 343 "data/scripts/tuning_fork.pory"
	case 4, EventScript_TuningFork_PokemonDPPt_15
# 346 "data/scripts/tuning_fork.pory"
	case 5, EventScript_TuningFork_PokemonDPPt_16
# 349 "data/scripts/tuning_fork.pory"
	case 6, EventScript_TuningFork_PokemonDPPt_17
# 352 "data/scripts/tuning_fork.pory"
	case 7, EventScript_TuningFork_PokemonDPPt_18
# 355 "data/scripts/tuning_fork.pory"
	case 8, EventScript_TuningFork_PokemonDPPt_19
# 358 "data/scripts/tuning_fork.pory"
	case 9, EventScript_TuningFork_PokemonDPPt_20
# 361 "data/scripts/tuning_fork.pory"
	case 10, EventScript_TuningFork_PokemonDPPt_21
# 364 "data/scripts/tuning_fork.pory"
	case 11, EventScript_TuningFork_PokemonDPPt_22
# 367 "data/scripts/tuning_fork.pory"
	case 12, EventScript_TuningFork_PokemonDPPt_23
# 370 "data/scripts/tuning_fork.pory"
	case 13, EventScript_TuningFork_PokemonDPPt_24
# 374 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_Pokemon
	return

EventScript_TuningFork_PokemonDPPt_2:
# 308 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonDPPt_Text_3, 3
# 309 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonDPPt_Text_4, 4
	goto EventScript_TuningFork_PokemonDPPt_1

EventScript_TuningFork_PokemonDPPt_5:
# 314 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonDPPt_Text_5, 5
# 315 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonDPPt_Text_6, 6
# 316 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonDPPt_Text_7, 11
	goto EventScript_TuningFork_PokemonDPPt_4

EventScript_TuningFork_PokemonDPPt_8:
# 321 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonDPPt_Text_8, 7
# 322 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonDPPt_Text_9, 8
# 323 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonDPPt_Text_10, 9
# 324 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonDPPt_Text_11, 10
# 325 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonDPPt_Text_12, 12
# 326 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonDPPt_Text_13, 13
	goto EventScript_TuningFork_PokemonDPPt_7

EventScript_TuningFork_PokemonDPPt_11:
# 332 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 17
# 333 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return

EventScript_TuningFork_PokemonDPPt_12:
# 335 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 18
# 336 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return

EventScript_TuningFork_PokemonDPPt_13:
# 338 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 19
# 339 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return

EventScript_TuningFork_PokemonDPPt_14:
# 341 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 20
# 342 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return

EventScript_TuningFork_PokemonDPPt_15:
# 344 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 21
# 345 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return

EventScript_TuningFork_PokemonDPPt_16:
# 347 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 22
# 348 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return

EventScript_TuningFork_PokemonDPPt_17:
# 350 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 23
# 351 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return

EventScript_TuningFork_PokemonDPPt_18:
# 353 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 24
# 354 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return

EventScript_TuningFork_PokemonDPPt_19:
# 356 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 25
# 357 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return

EventScript_TuningFork_PokemonDPPt_20:
# 359 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 26
# 360 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return

EventScript_TuningFork_PokemonDPPt_21:
# 362 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 27
# 363 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return

EventScript_TuningFork_PokemonDPPt_22:
# 365 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 28
# 366 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return

EventScript_TuningFork_PokemonDPPt_23:
# 368 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 29
# 369 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return

EventScript_TuningFork_PokemonDPPt_24:
# 371 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 30
# 372 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return


EventScript_TuningFork_PokemonHGSS::
# 379 "data/scripts/tuning_fork.pory"
	msgbox TextChooseSong
# 380 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonHGSS_Text_0, 0
# 381 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonHGSS_Text_1, 1
# 382 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonHGSS_Text_2, 2
# 383 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonHGSS_Text_3, 3
# 384 "data/scripts/tuning_fork.pory"
	checkifmusicunlocked 1
# 385 "data/scripts/tuning_fork.pory"
	compare VAR_RESULT, 0
	goto_if_ne EventScript_TuningFork_PokemonHGSS_2
EventScript_TuningFork_PokemonHGSS_1:
# 389 "data/scripts/tuning_fork.pory"
	checkifmusicunlocked 2
# 390 "data/scripts/tuning_fork.pory"
	compare VAR_RESULT, 0
	goto_if_ne EventScript_TuningFork_PokemonHGSS_5
EventScript_TuningFork_PokemonHGSS_4:
# 399 "data/scripts/tuning_fork.pory"
	dynmultistack 0, 2, FALSE, 5, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 400 "data/scripts/tuning_fork.pory"
	switch VAR_RESULT
# 402 "data/scripts/tuning_fork.pory"
	case 0, EventScript_TuningFork_PokemonHGSS_8
# 405 "data/scripts/tuning_fork.pory"
	case 1, EventScript_TuningFork_PokemonHGSS_9
# 408 "data/scripts/tuning_fork.pory"
	case 2, EventScript_TuningFork_PokemonHGSS_10
# 411 "data/scripts/tuning_fork.pory"
	case 3, EventScript_TuningFork_PokemonHGSS_11
# 414 "data/scripts/tuning_fork.pory"
	case 4, EventScript_TuningFork_PokemonHGSS_12
# 417 "data/scripts/tuning_fork.pory"
	case 5, EventScript_TuningFork_PokemonHGSS_13
# 420 "data/scripts/tuning_fork.pory"
	case 6, EventScript_TuningFork_PokemonHGSS_14
# 423 "data/scripts/tuning_fork.pory"
	case 7, EventScript_TuningFork_PokemonHGSS_15
# 426 "data/scripts/tuning_fork.pory"
	case 8, EventScript_TuningFork_PokemonHGSS_16
# 429 "data/scripts/tuning_fork.pory"
	case 9, EventScript_TuningFork_PokemonHGSS_17
# 432 "data/scripts/tuning_fork.pory"
	case 10, EventScript_TuningFork_PokemonHGSS_18
# 436 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_Pokemon
	return

EventScript_TuningFork_PokemonHGSS_2:
# 387 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonHGSS_Text_4, 4
	goto EventScript_TuningFork_PokemonHGSS_1

EventScript_TuningFork_PokemonHGSS_5:
# 392 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonHGSS_Text_5, 5
# 393 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonHGSS_Text_6, 6
# 394 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonHGSS_Text_7, 7
# 395 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonHGSS_Text_8, 8
# 396 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonHGSS_Text_9, 9
# 397 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonHGSS_Text_10, 10
	goto EventScript_TuningFork_PokemonHGSS_4

EventScript_TuningFork_PokemonHGSS_8:
# 403 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 31
# 404 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return

EventScript_TuningFork_PokemonHGSS_9:
# 406 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 32
# 407 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return

EventScript_TuningFork_PokemonHGSS_10:
# 409 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 33
# 410 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return

EventScript_TuningFork_PokemonHGSS_11:
# 412 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 34
# 413 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return

EventScript_TuningFork_PokemonHGSS_12:
# 415 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 35
# 416 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return

EventScript_TuningFork_PokemonHGSS_13:
# 418 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 36
# 419 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return

EventScript_TuningFork_PokemonHGSS_14:
# 421 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 37
# 422 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return

EventScript_TuningFork_PokemonHGSS_15:
# 424 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 38
# 425 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return

EventScript_TuningFork_PokemonHGSS_16:
# 427 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 39
# 428 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return

EventScript_TuningFork_PokemonHGSS_17:
# 430 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 40
# 431 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return

EventScript_TuningFork_PokemonHGSS_18:
# 433 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 41
# 434 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return


EventScript_TuningFork_PokemonBW::
# 441 "data/scripts/tuning_fork.pory"
	msgbox TextChooseSong
# 442 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonBW_Text_0, 0
# 443 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonBW_Text_1, 1
# 444 "data/scripts/tuning_fork.pory"
	checkifmusicunlocked 4
# 445 "data/scripts/tuning_fork.pory"
	compare VAR_RESULT, 0
	goto_if_ne EventScript_TuningFork_PokemonBW_2
EventScript_TuningFork_PokemonBW_1:
# 449 "data/scripts/tuning_fork.pory"
	dynmultistack 0, 2, FALSE, 5, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 450 "data/scripts/tuning_fork.pory"
	switch VAR_RESULT
# 452 "data/scripts/tuning_fork.pory"
	case 0, EventScript_TuningFork_PokemonBW_5
# 455 "data/scripts/tuning_fork.pory"
	case 1, EventScript_TuningFork_PokemonBW_6
# 458 "data/scripts/tuning_fork.pory"
	case 2, EventScript_TuningFork_PokemonBW_7
# 462 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_Pokemon
	return

EventScript_TuningFork_PokemonBW_2:
# 447 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonBW_Text_2, 2
	goto EventScript_TuningFork_PokemonBW_1

EventScript_TuningFork_PokemonBW_5:
# 453 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 43
# 454 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return

EventScript_TuningFork_PokemonBW_6:
# 456 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 42
# 457 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return

EventScript_TuningFork_PokemonBW_7:
# 459 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 44
# 460 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return


EventScript_TuningFork_PokemonOther::
# 467 "data/scripts/tuning_fork.pory"
	msgbox TextChooseSong
# 468 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonOther_Text_0, 0
# 469 "data/scripts/tuning_fork.pory"
	checkifmusicunlocked 5
# 470 "data/scripts/tuning_fork.pory"
	compare VAR_RESULT, 0
	goto_if_ne EventScript_TuningFork_PokemonOther_2
EventScript_TuningFork_PokemonOther_1:
# 474 "data/scripts/tuning_fork.pory"
	dynmultistack 0, 2, FALSE, 5, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 476 "data/scripts/tuning_fork.pory"
	switch VAR_RESULT
# 478 "data/scripts/tuning_fork.pory"
	case 0, EventScript_TuningFork_PokemonOther_5
# 481 "data/scripts/tuning_fork.pory"
	case 1, EventScript_TuningFork_PokemonOther_6
# 485 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_Pokemon
	return

EventScript_TuningFork_PokemonOther_2:
# 472 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonOther_Text_1, 1
	goto EventScript_TuningFork_PokemonOther_1

EventScript_TuningFork_PokemonOther_5:
# 479 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 47
# 480 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return

EventScript_TuningFork_PokemonOther_6:
# 482 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 46
# 483 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return


EventScript_TuningFork_Other::
# 490 "data/scripts/tuning_fork.pory"
	msgbox TextChooseSong
# 491 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_Other_Text_0, 0
# 493 "data/scripts/tuning_fork.pory"
	dynmultistack 0, 2, FALSE, 5, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 495 "data/scripts/tuning_fork.pory"
	switch VAR_RESULT
# 497 "data/scripts/tuning_fork.pory"
	case 0, EventScript_TuningFork_Other_2
# 501 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_ChooseType
	return

EventScript_TuningFork_Other_2:
# 498 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 45
# 499 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return


EventScript_TuningFork_SetMusic::
# 506 "data/scripts/tuning_fork.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq EventScript_TuningFork_SetMusic_2
# 512 "data/scripts/tuning_fork.pory"
	copyvar VAR_TUNING_FORK_TRAINER, VAR_TEMP_2
EventScript_TuningFork_SetMusic_1:
# 514 "data/scripts/tuning_fork.pory"
	msgbox EventScript_TuningFork_SetMusic_Text_0
# 515 "data/scripts/tuning_fork.pory"
	closemessage
# 516 "data/scripts/tuning_fork.pory"
	release
	return

EventScript_TuningFork_SetMusic_2:
# 508 "data/scripts/tuning_fork.pory"
	copyvar VAR_TUNING_FORK_WILD, VAR_TEMP_2
	goto EventScript_TuningFork_SetMusic_1


EventScript_MusicUnlocked_Text_0:
# 63 "data/scripts/tuning_fork.pory"
	.string "Additional battle music unlocked\nfor the Tuning Fork!$"

EventScript_TuningFork_Text_0:
# 71 "data/scripts/tuning_fork.pory"
	.string "Change music?$"

EventScript_TuningFork_Text_1:
# 72 "data/scripts/tuning_fork.pory"
	.string "Wild Battle Music$"

EventScript_TuningFork_Text_2:
# 73 "data/scripts/tuning_fork.pory"
	.string "Trainer Battle Music$"

EventScript_TuningFork_ChooseType_Text_0:
# 101 "data/scripts/tuning_fork.pory"
	.string "Choose music.$"

EventScript_TuningFork_ChooseType_Text_1:
# 102 "data/scripts/tuning_fork.pory"
	.string "Pokémon$"

EventScript_TuningFork_ChooseType_Text_2:
# 103 "data/scripts/tuning_fork.pory"
	.string "Other$"

EventScript_TuningFork_ChooseType_Text_3:
# 106 "data/scripts/tuning_fork.pory"
	.string "Reset music$"

EventScript_TuningFork_ChooseType_Text_4:
# 135 "data/scripts/tuning_fork.pory"
	.string "Music reset!$"

EventScript_TuningFork_Pokemon_Text_0:
# 143 "data/scripts/tuning_fork.pory"
	.string "Choose game.$"

EventScript_TuningFork_Pokemon_Text_1:
# 144 "data/scripts/tuning_fork.pory"
	.string "RSE$"

EventScript_TuningFork_Pokemon_Text_2:
# 145 "data/scripts/tuning_fork.pory"
	.string "FRLG$"

EventScript_TuningFork_Pokemon_Text_3:
# 146 "data/scripts/tuning_fork.pory"
	.string "DPPt$"

EventScript_TuningFork_Pokemon_Text_4:
# 147 "data/scripts/tuning_fork.pory"
	.string "HGSS$"

EventScript_TuningFork_Pokemon_Text_5:
# 151 "data/scripts/tuning_fork.pory"
	.string "BW$"

EventScript_TuningFork_PokemonRSE_Text_0:
# 198 "data/scripts/tuning_fork.pory"
	.string "RSE Vs. Rival$"

EventScript_TuningFork_PokemonRSE_Text_1:
# 199 "data/scripts/tuning_fork.pory"
	.string "RSE Vs. Gym Leader$"

EventScript_TuningFork_PokemonRSE_Text_2:
# 200 "data/scripts/tuning_fork.pory"
	.string "RSE Vs. Aqua/Magma$"

EventScript_TuningFork_PokemonRSE_Text_3:
# 204 "data/scripts/tuning_fork.pory"
	.string "RSE Vs. Aqua/Magma Leader$"

EventScript_TuningFork_PokemonRSE_Text_4:
# 209 "data/scripts/tuning_fork.pory"
	.string "RSE Vs. Elite Four$"

EventScript_TuningFork_PokemonRSE_Text_5:
# 210 "data/scripts/tuning_fork.pory"
	.string "RSE Vs. Champion$"

EventScript_TuningFork_PokemonRSE_Text_6:
# 211 "data/scripts/tuning_fork.pory"
	.string "RSE Vs. Frontier Brain$"

EventScript_TuningFork_PokemonRSE_Text_7:
# 216 "data/scripts/tuning_fork.pory"
	.string "RSE Vs. Kyogre/Groudon$"

EventScript_TuningFork_PokemonRSE_Text_8:
# 217 "data/scripts/tuning_fork.pory"
	.string "RSE Vs. Regi$"

EventScript_TuningFork_PokemonRSE_Text_9:
# 218 "data/scripts/tuning_fork.pory"
	.string "RSE Vs. Rayquaza$"

EventScript_TuningFork_PokemonRSE_Text_10:
# 219 "data/scripts/tuning_fork.pory"
	.string "RSE Vs. Mew$"

EventScript_TuningFork_PokemonFRLG_Text_0:
# 264 "data/scripts/tuning_fork.pory"
	.string "FRLG Vs. Gym Leader$"

EventScript_TuningFork_PokemonFRLG_Text_1:
# 268 "data/scripts/tuning_fork.pory"
	.string "FRLG Vs. Champion$"

EventScript_TuningFork_PokemonFRLG_Text_2:
# 273 "data/scripts/tuning_fork.pory"
	.string "FRLG Vs. Deoxys$"

EventScript_TuningFork_PokemonFRLG_Text_3:
# 274 "data/scripts/tuning_fork.pory"
	.string "FRLG Vs. Mewtwo$"

EventScript_TuningFork_PokemonFRLG_Text_4:
# 275 "data/scripts/tuning_fork.pory"
	.string "FRLG Vs. Legendary$"

EventScript_TuningFork_PokemonDPPt_Text_0:
# 302 "data/scripts/tuning_fork.pory"
	.string "DP Vs. Rival$"

EventScript_TuningFork_PokemonDPPt_Text_1:
# 303 "data/scripts/tuning_fork.pory"
	.string "DP Vs. Gym Leader$"

EventScript_TuningFork_PokemonDPPt_Text_2:
# 304 "data/scripts/tuning_fork.pory"
	.string "DP Vs. Galactic$"

EventScript_TuningFork_PokemonDPPt_Text_3:
# 308 "data/scripts/tuning_fork.pory"
	.string "DP Vs. Galactic Commander$"

EventScript_TuningFork_PokemonDPPt_Text_4:
# 309 "data/scripts/tuning_fork.pory"
	.string "DP Vs. Galactic Boss$"

EventScript_TuningFork_PokemonDPPt_Text_5:
# 314 "data/scripts/tuning_fork.pory"
	.string "DP Vs. Elite Four$"

EventScript_TuningFork_PokemonDPPt_Text_6:
# 315 "data/scripts/tuning_fork.pory"
	.string "DP Vs. Champion$"

EventScript_TuningFork_PokemonDPPt_Text_7:
# 316 "data/scripts/tuning_fork.pory"
	.string "Pt Vs. Frontier Brain$"

EventScript_TuningFork_PokemonDPPt_Text_8:
# 321 "data/scripts/tuning_fork.pory"
	.string "DP Vs. Dialga/Palkia$"

EventScript_TuningFork_PokemonDPPt_Text_9:
# 322 "data/scripts/tuning_fork.pory"
	.string "DP Vs. Uxie/Mesprit/Azelf$"

EventScript_TuningFork_PokemonDPPt_Text_10:
# 323 "data/scripts/tuning_fork.pory"
	.string "DP Vs. Legendary$"

EventScript_TuningFork_PokemonDPPt_Text_11:
# 324 "data/scripts/tuning_fork.pory"
	.string "DP Vs. Arceus$"

EventScript_TuningFork_PokemonDPPt_Text_12:
# 325 "data/scripts/tuning_fork.pory"
	.string "Pt Vs. Giratina$"

EventScript_TuningFork_PokemonDPPt_Text_13:
# 326 "data/scripts/tuning_fork.pory"
	.string "Pt Vs. Regi$"

EventScript_TuningFork_PokemonHGSS_Text_0:
# 380 "data/scripts/tuning_fork.pory"
	.string "HGSS Vs. Rival$"

EventScript_TuningFork_PokemonHGSS_Text_1:
# 381 "data/scripts/tuning_fork.pory"
	.string "HGSS Vs. Gym Leader$"

EventScript_TuningFork_PokemonHGSS_Text_2:
# 382 "data/scripts/tuning_fork.pory"
	.string "HGSS Vs. Gym Leader/Kanto$"

EventScript_TuningFork_PokemonHGSS_Text_3:
# 383 "data/scripts/tuning_fork.pory"
	.string "HGSS Vs. Rocket$"

EventScript_TuningFork_PokemonHGSS_Text_4:
# 387 "data/scripts/tuning_fork.pory"
	.string "HGSS Vs. Champion$"

EventScript_TuningFork_PokemonHGSS_Text_5:
# 392 "data/scripts/tuning_fork.pory"
	.string "HGSS Vs. Ho-Oh$"

EventScript_TuningFork_PokemonHGSS_Text_6:
# 393 "data/scripts/tuning_fork.pory"
	.string "HGSS Vs. Lugia$"

EventScript_TuningFork_PokemonHGSS_Text_7:
# 394 "data/scripts/tuning_fork.pory"
	.string "HGSS Vs. Suicune$"

EventScript_TuningFork_PokemonHGSS_Text_8:
# 395 "data/scripts/tuning_fork.pory"
	.string "HGSS Vs. Entei$"

EventScript_TuningFork_PokemonHGSS_Text_9:
# 396 "data/scripts/tuning_fork.pory"
	.string "HGSS Vs. Raikou$"

EventScript_TuningFork_PokemonHGSS_Text_10:
# 397 "data/scripts/tuning_fork.pory"
	.string "HGSS Vs. Kyogre/Groudon$"

EventScript_TuningFork_PokemonBW_Text_0:
# 442 "data/scripts/tuning_fork.pory"
	.string "BW Vs. Wild$"

EventScript_TuningFork_PokemonBW_Text_1:
# 443 "data/scripts/tuning_fork.pory"
	.string "BW Vs. Trainer$"

EventScript_TuningFork_PokemonBW_Text_2:
# 447 "data/scripts/tuning_fork.pory"
	.string "B2W2 Vs. Ghetsis$"

EventScript_TuningFork_PokemonOther_Text_0:
# 468 "data/scripts/tuning_fork.pory"
	.string "XD Vs. Cipher Peon$"

EventScript_TuningFork_PokemonOther_Text_1:
# 472 "data/scripts/tuning_fork.pory"
	.string "MD2 Vs. Dialga$"

EventScript_TuningFork_Other_Text_0:
# 491 "data/scripts/tuning_fork.pory"
	.string "FF4: Battle 2$"

EventScript_TuningFork_SetMusic_Text_0:
# 514 "data/scripts/tuning_fork.pory"
	.string "Music set!$"

TextChooseSong::
# 519 "data/scripts/tuning_fork.pory"
	.string "Choose song.$"
