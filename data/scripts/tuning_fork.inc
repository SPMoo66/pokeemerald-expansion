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
	dynmultichoice 0, 6, FALSE, 5, 0, DYN_MULTICHOICE_CB_NONE, EventScript_TuningFork_Text_1, EventScript_TuningFork_Text_2, EventScript_TuningFork_Text_3
# 74 "data/scripts/tuning_fork.pory"
	compare VAR_RESULT, 2
	goto_if_eq EventScript_TuningFork_2
EventScript_TuningFork_1:
# 86 "data/scripts/tuning_fork.pory"
	compare VAR_RESULT, 127
	goto_if_ne EventScript_TuningFork_5
EventScript_TuningFork_4:
# 90 "data/scripts/tuning_fork.pory"
	closemessage
	return

EventScript_TuningFork_2:
# 76 "data/scripts/tuning_fork.pory"
	checkifmusicunlocked 0, 1
# 77 "data/scripts/tuning_fork.pory"
	checkifmusicunlocked 1, 1
# 78 "data/scripts/tuning_fork.pory"
	checkifmusicunlocked 2, 1
# 79 "data/scripts/tuning_fork.pory"
	checkifmusicunlocked 3, 1
# 80 "data/scripts/tuning_fork.pory"
	checkifmusicunlocked 4, 1
# 81 "data/scripts/tuning_fork.pory"
	checkifmusicunlocked 5, 1
# 82 "data/scripts/tuning_fork.pory"
	checkifmusicunlocked 6, 1
# 83 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork
	goto EventScript_TuningFork_1

EventScript_TuningFork_5:
# 88 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_ChooseType
	goto EventScript_TuningFork_4


EventScript_TuningFork_ChooseType::
# 95 "data/scripts/tuning_fork.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 97 "data/scripts/tuning_fork.pory"
	msgbox EventScript_TuningFork_ChooseType_Text_0
# 98 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_ChooseType_Text_1, 0
# 99 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_ChooseType_Text_2, 1
# 100 "data/scripts/tuning_fork.pory"
	compare VAR_TUNING_FORK_WILD, 0
	goto_if_ne EventScript_TuningFork_ChooseType_4
EventScript_TuningFork_ChooseType_3:
# 100 "data/scripts/tuning_fork.pory"
	compare VAR_TUNING_FORK_TRAINER, 0
	goto_if_ne EventScript_TuningFork_ChooseType_7
EventScript_TuningFork_ChooseType_1:
# 104 "data/scripts/tuning_fork.pory"
	dynmultistack 0, 6, FALSE, 5, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 106 "data/scripts/tuning_fork.pory"
	compare VAR_RESULT, 127
	goto_if_eq EventScript_TuningFork_ChooseType_10
# 111 "data/scripts/tuning_fork.pory"
	compare VAR_RESULT, 0
	goto_if_eq EventScript_TuningFork_ChooseType_11
# 116 "data/scripts/tuning_fork.pory"
	compare VAR_RESULT, 1
	goto_if_eq EventScript_TuningFork_ChooseType_12
# 121 "data/scripts/tuning_fork.pory"
	compare VAR_RESULT, 2
	goto_if_eq EventScript_TuningFork_ChooseType_13
	return

EventScript_TuningFork_ChooseType_2:
# 102 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_ChooseType_Text_3, 2
	goto EventScript_TuningFork_ChooseType_1

EventScript_TuningFork_ChooseType_4:
# 100 "data/scripts/tuning_fork.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq EventScript_TuningFork_ChooseType_2
	goto EventScript_TuningFork_ChooseType_3

EventScript_TuningFork_ChooseType_7:
# 100 "data/scripts/tuning_fork.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq EventScript_TuningFork_ChooseType_2
	goto EventScript_TuningFork_ChooseType_1

EventScript_TuningFork_ChooseType_10:
# 108 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork
	return

EventScript_TuningFork_ChooseType_11:
# 113 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_Pokemon
	return

EventScript_TuningFork_ChooseType_12:
# 118 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_Other
	return

EventScript_TuningFork_ChooseType_13:
# 123 "data/scripts/tuning_fork.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq EventScript_TuningFork_ChooseType_19
# 129 "data/scripts/tuning_fork.pory"
	setvar VAR_TUNING_FORK_TRAINER, 0
EventScript_TuningFork_ChooseType_18:
# 131 "data/scripts/tuning_fork.pory"
	msgbox EventScript_TuningFork_ChooseType_Text_4
# 132 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork
	return

EventScript_TuningFork_ChooseType_19:
# 125 "data/scripts/tuning_fork.pory"
	setvar VAR_TUNING_FORK_WILD, 0
	goto EventScript_TuningFork_ChooseType_18


EventScript_TuningFork_Pokemon::
# 138 "data/scripts/tuning_fork.pory"
	msgbox EventScript_TuningFork_Pokemon_Text_0
# 139 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_Pokemon_Text_1, 0
# 140 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_Pokemon_Text_2, 1
# 141 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_Pokemon_Text_3, 2
# 142 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_Pokemon_Text_4, 3
# 143 "data/scripts/tuning_fork.pory"
	checkifmusicunlocked 3
# 144 "data/scripts/tuning_fork.pory"
	compare VAR_RESULT, 0
	goto_if_ne EventScript_TuningFork_Pokemon_2
EventScript_TuningFork_Pokemon_1:
# 148 "data/scripts/tuning_fork.pory"
	checkifmusicunlocked 6
# 149 "data/scripts/tuning_fork.pory"
	compare VAR_RESULT, 0
	goto_if_ne EventScript_TuningFork_Pokemon_5
EventScript_TuningFork_Pokemon_4:
# 153 "data/scripts/tuning_fork.pory"
	dynmultistack 0, 2, FALSE, 5, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 155 "data/scripts/tuning_fork.pory"
	compare VAR_RESULT, 0
	goto_if_eq EventScript_TuningFork_Pokemon_7
# 160 "data/scripts/tuning_fork.pory"
	compare VAR_RESULT, 1
	goto_if_eq EventScript_TuningFork_Pokemon_8
# 165 "data/scripts/tuning_fork.pory"
	compare VAR_RESULT, 2
	goto_if_eq EventScript_TuningFork_Pokemon_9
# 170 "data/scripts/tuning_fork.pory"
	compare VAR_RESULT, 3
	goto_if_eq EventScript_TuningFork_Pokemon_10
# 175 "data/scripts/tuning_fork.pory"
	compare VAR_RESULT, 4
	goto_if_eq EventScript_TuningFork_Pokemon_11
# 180 "data/scripts/tuning_fork.pory"
	compare VAR_RESULT, 5
	goto_if_eq EventScript_TuningFork_Pokemon_12
# 187 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_ChooseType
	return

EventScript_TuningFork_Pokemon_2:
# 146 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_Pokemon_Text_5, 4
	goto EventScript_TuningFork_Pokemon_1

EventScript_TuningFork_Pokemon_5:
# 151 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_ChooseType_Text_2, 5
	goto EventScript_TuningFork_Pokemon_4

EventScript_TuningFork_Pokemon_7:
# 157 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_PokemonRSE
	return

EventScript_TuningFork_Pokemon_8:
# 162 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_PokemonFRLG
	return

EventScript_TuningFork_Pokemon_9:
# 167 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_PokemonDPPt
	return

EventScript_TuningFork_Pokemon_10:
# 172 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_PokemonHGSS
	return

EventScript_TuningFork_Pokemon_11:
# 177 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_PokemonBW
	return

EventScript_TuningFork_Pokemon_12:
# 182 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_PokemonOther
	return


EventScript_TuningFork_PokemonRSE::
# 192 "data/scripts/tuning_fork.pory"
	msgbox TextChooseSong
# 193 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonRSE_Text_0, 0
# 194 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonRSE_Text_1, 1
# 195 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonRSE_Text_2, 2
# 196 "data/scripts/tuning_fork.pory"
	checkifmusicunlocked 0
# 197 "data/scripts/tuning_fork.pory"
	compare VAR_RESULT, 0
	goto_if_ne EventScript_TuningFork_PokemonRSE_2
EventScript_TuningFork_PokemonRSE_1:
# 201 "data/scripts/tuning_fork.pory"
	checkifmusicunlocked 1
# 202 "data/scripts/tuning_fork.pory"
	compare VAR_RESULT, 0
	goto_if_ne EventScript_TuningFork_PokemonRSE_5
EventScript_TuningFork_PokemonRSE_4:
# 208 "data/scripts/tuning_fork.pory"
	checkifmusicunlocked 2
# 209 "data/scripts/tuning_fork.pory"
	compare VAR_RESULT, 0
	goto_if_ne EventScript_TuningFork_PokemonRSE_8
EventScript_TuningFork_PokemonRSE_7:
# 216 "data/scripts/tuning_fork.pory"
	dynmultistack 0, 2, FALSE, 5, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 217 "data/scripts/tuning_fork.pory"
	switch VAR_RESULT
# 219 "data/scripts/tuning_fork.pory"
	case 0, EventScript_TuningFork_PokemonRSE_11
# 222 "data/scripts/tuning_fork.pory"
	case 1, EventScript_TuningFork_PokemonRSE_12
# 225 "data/scripts/tuning_fork.pory"
	case 2, EventScript_TuningFork_PokemonRSE_13
# 228 "data/scripts/tuning_fork.pory"
	case 3, EventScript_TuningFork_PokemonRSE_14
# 231 "data/scripts/tuning_fork.pory"
	case 4, EventScript_TuningFork_PokemonRSE_15
# 234 "data/scripts/tuning_fork.pory"
	case 5, EventScript_TuningFork_PokemonRSE_16
# 237 "data/scripts/tuning_fork.pory"
	case 6, EventScript_TuningFork_PokemonRSE_17
# 240 "data/scripts/tuning_fork.pory"
	case 7, EventScript_TuningFork_PokemonRSE_18
# 243 "data/scripts/tuning_fork.pory"
	case 8, EventScript_TuningFork_PokemonRSE_19
# 246 "data/scripts/tuning_fork.pory"
	case 9, EventScript_TuningFork_PokemonRSE_20
# 249 "data/scripts/tuning_fork.pory"
	case 10, EventScript_TuningFork_PokemonRSE_21
# 253 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_Pokemon
	return

EventScript_TuningFork_PokemonRSE_2:
# 199 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonRSE_Text_3, 3
	goto EventScript_TuningFork_PokemonRSE_1

EventScript_TuningFork_PokemonRSE_5:
# 204 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonRSE_Text_4, 4
# 205 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonRSE_Text_5, 5
# 206 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonRSE_Text_6, 6
	goto EventScript_TuningFork_PokemonRSE_4

EventScript_TuningFork_PokemonRSE_8:
# 211 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonRSE_Text_7, 7
# 212 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonRSE_Text_8, 8
# 213 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonRSE_Text_9, 9
# 214 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonRSE_Text_10, 10
	goto EventScript_TuningFork_PokemonRSE_7

EventScript_TuningFork_PokemonRSE_11:
# 220 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 1
# 221 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return

EventScript_TuningFork_PokemonRSE_12:
# 223 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 2
# 224 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return

EventScript_TuningFork_PokemonRSE_13:
# 226 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 3
# 227 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return

EventScript_TuningFork_PokemonRSE_14:
# 229 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 4
# 230 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return

EventScript_TuningFork_PokemonRSE_15:
# 232 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 5
# 233 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return

EventScript_TuningFork_PokemonRSE_16:
# 235 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 6
# 236 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return

EventScript_TuningFork_PokemonRSE_17:
# 238 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 7
# 239 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return

EventScript_TuningFork_PokemonRSE_18:
# 241 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 8
# 242 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return

EventScript_TuningFork_PokemonRSE_19:
# 244 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 9
# 245 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return

EventScript_TuningFork_PokemonRSE_20:
# 247 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 10
# 248 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return

EventScript_TuningFork_PokemonRSE_21:
# 250 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 11
# 251 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return


EventScript_TuningFork_PokemonFRLG::
# 258 "data/scripts/tuning_fork.pory"
	msgbox TextChooseSong
# 259 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonFRLG_Text_0, 0
# 260 "data/scripts/tuning_fork.pory"
	checkifmusicunlocked 1
# 261 "data/scripts/tuning_fork.pory"
	compare VAR_RESULT, 0
	goto_if_ne EventScript_TuningFork_PokemonFRLG_2
EventScript_TuningFork_PokemonFRLG_1:
# 265 "data/scripts/tuning_fork.pory"
	checkifmusicunlocked 2
# 266 "data/scripts/tuning_fork.pory"
	compare VAR_RESULT, 0
	goto_if_ne EventScript_TuningFork_PokemonFRLG_5
EventScript_TuningFork_PokemonFRLG_4:
# 272 "data/scripts/tuning_fork.pory"
	dynmultistack 0, 2, FALSE, 5, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 273 "data/scripts/tuning_fork.pory"
	switch VAR_RESULT
# 275 "data/scripts/tuning_fork.pory"
	case 0, EventScript_TuningFork_PokemonFRLG_8
# 278 "data/scripts/tuning_fork.pory"
	case 1, EventScript_TuningFork_PokemonFRLG_9
# 281 "data/scripts/tuning_fork.pory"
	case 2, EventScript_TuningFork_PokemonFRLG_10
# 284 "data/scripts/tuning_fork.pory"
	case 3, EventScript_TuningFork_PokemonFRLG_11
# 287 "data/scripts/tuning_fork.pory"
	case 4, EventScript_TuningFork_PokemonFRLG_12
# 291 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_Pokemon
	return

EventScript_TuningFork_PokemonFRLG_2:
# 263 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonFRLG_Text_1, 1
	goto EventScript_TuningFork_PokemonFRLG_1

EventScript_TuningFork_PokemonFRLG_5:
# 268 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonFRLG_Text_2, 2
# 269 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonFRLG_Text_3, 3
# 270 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonFRLG_Text_4, 4
	goto EventScript_TuningFork_PokemonFRLG_4

EventScript_TuningFork_PokemonFRLG_8:
# 276 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 12
# 277 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return

EventScript_TuningFork_PokemonFRLG_9:
# 279 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 13
# 280 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return

EventScript_TuningFork_PokemonFRLG_10:
# 282 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 14
# 283 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return

EventScript_TuningFork_PokemonFRLG_11:
# 285 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 15
# 286 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return

EventScript_TuningFork_PokemonFRLG_12:
# 288 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 16
# 289 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return


EventScript_TuningFork_PokemonDPPt::
# 296 "data/scripts/tuning_fork.pory"
	msgbox TextChooseSong
# 297 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonDPPt_Text_0, 0
# 298 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonDPPt_Text_1, 1
# 299 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonDPPt_Text_2, 2
# 300 "data/scripts/tuning_fork.pory"
	checkifmusicunlocked 0
# 301 "data/scripts/tuning_fork.pory"
	compare VAR_RESULT, 0
	goto_if_ne EventScript_TuningFork_PokemonDPPt_2
EventScript_TuningFork_PokemonDPPt_1:
# 306 "data/scripts/tuning_fork.pory"
	checkifmusicunlocked 1
# 307 "data/scripts/tuning_fork.pory"
	compare VAR_RESULT, 0
	goto_if_ne EventScript_TuningFork_PokemonDPPt_5
EventScript_TuningFork_PokemonDPPt_4:
# 313 "data/scripts/tuning_fork.pory"
	checkifmusicunlocked 2
# 314 "data/scripts/tuning_fork.pory"
	compare VAR_RESULT, 0
	goto_if_ne EventScript_TuningFork_PokemonDPPt_8
EventScript_TuningFork_PokemonDPPt_7:
# 323 "data/scripts/tuning_fork.pory"
	dynmultistack 0, 2, FALSE, 5, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 324 "data/scripts/tuning_fork.pory"
	switch VAR_RESULT
# 326 "data/scripts/tuning_fork.pory"
	case 0, EventScript_TuningFork_PokemonDPPt_11
# 329 "data/scripts/tuning_fork.pory"
	case 1, EventScript_TuningFork_PokemonDPPt_12
# 332 "data/scripts/tuning_fork.pory"
	case 2, EventScript_TuningFork_PokemonDPPt_13
# 335 "data/scripts/tuning_fork.pory"
	case 3, EventScript_TuningFork_PokemonDPPt_14
# 338 "data/scripts/tuning_fork.pory"
	case 4, EventScript_TuningFork_PokemonDPPt_15
# 341 "data/scripts/tuning_fork.pory"
	case 5, EventScript_TuningFork_PokemonDPPt_16
# 344 "data/scripts/tuning_fork.pory"
	case 6, EventScript_TuningFork_PokemonDPPt_17
# 347 "data/scripts/tuning_fork.pory"
	case 7, EventScript_TuningFork_PokemonDPPt_18
# 350 "data/scripts/tuning_fork.pory"
	case 8, EventScript_TuningFork_PokemonDPPt_19
# 353 "data/scripts/tuning_fork.pory"
	case 9, EventScript_TuningFork_PokemonDPPt_20
# 356 "data/scripts/tuning_fork.pory"
	case 10, EventScript_TuningFork_PokemonDPPt_21
# 359 "data/scripts/tuning_fork.pory"
	case 11, EventScript_TuningFork_PokemonDPPt_22
# 362 "data/scripts/tuning_fork.pory"
	case 12, EventScript_TuningFork_PokemonDPPt_23
# 365 "data/scripts/tuning_fork.pory"
	case 13, EventScript_TuningFork_PokemonDPPt_24
# 369 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_Pokemon
	return

EventScript_TuningFork_PokemonDPPt_2:
# 303 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonDPPt_Text_3, 3
# 304 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonDPPt_Text_4, 4
	goto EventScript_TuningFork_PokemonDPPt_1

EventScript_TuningFork_PokemonDPPt_5:
# 309 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonDPPt_Text_5, 5
# 310 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonDPPt_Text_6, 6
# 311 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonDPPt_Text_7, 11
	goto EventScript_TuningFork_PokemonDPPt_4

EventScript_TuningFork_PokemonDPPt_8:
# 316 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonDPPt_Text_8, 7
# 317 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonDPPt_Text_9, 8
# 318 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonDPPt_Text_10, 9
# 319 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonDPPt_Text_11, 10
# 320 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonDPPt_Text_12, 12
# 321 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonDPPt_Text_13, 13
	goto EventScript_TuningFork_PokemonDPPt_7

EventScript_TuningFork_PokemonDPPt_11:
# 327 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 17
# 328 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return

EventScript_TuningFork_PokemonDPPt_12:
# 330 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 18
# 331 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return

EventScript_TuningFork_PokemonDPPt_13:
# 333 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 19
# 334 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return

EventScript_TuningFork_PokemonDPPt_14:
# 336 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 20
# 337 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return

EventScript_TuningFork_PokemonDPPt_15:
# 339 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 21
# 340 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return

EventScript_TuningFork_PokemonDPPt_16:
# 342 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 22
# 343 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return

EventScript_TuningFork_PokemonDPPt_17:
# 345 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 23
# 346 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return

EventScript_TuningFork_PokemonDPPt_18:
# 348 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 24
# 349 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return

EventScript_TuningFork_PokemonDPPt_19:
# 351 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 25
# 352 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return

EventScript_TuningFork_PokemonDPPt_20:
# 354 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 26
# 355 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return

EventScript_TuningFork_PokemonDPPt_21:
# 357 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 27
# 358 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return

EventScript_TuningFork_PokemonDPPt_22:
# 360 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 28
# 361 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return

EventScript_TuningFork_PokemonDPPt_23:
# 363 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 29
# 364 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return

EventScript_TuningFork_PokemonDPPt_24:
# 366 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 30
# 367 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return


EventScript_TuningFork_PokemonHGSS::
# 374 "data/scripts/tuning_fork.pory"
	msgbox TextChooseSong
# 375 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonHGSS_Text_0, 0
# 376 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonHGSS_Text_1, 1
# 377 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonHGSS_Text_2, 2
# 378 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonHGSS_Text_3, 3
# 379 "data/scripts/tuning_fork.pory"
	checkifmusicunlocked 1
# 380 "data/scripts/tuning_fork.pory"
	compare VAR_RESULT, 0
	goto_if_ne EventScript_TuningFork_PokemonHGSS_2
EventScript_TuningFork_PokemonHGSS_1:
# 384 "data/scripts/tuning_fork.pory"
	checkifmusicunlocked 2
# 385 "data/scripts/tuning_fork.pory"
	compare VAR_RESULT, 0
	goto_if_ne EventScript_TuningFork_PokemonHGSS_5
EventScript_TuningFork_PokemonHGSS_4:
# 394 "data/scripts/tuning_fork.pory"
	dynmultistack 0, 2, FALSE, 5, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 395 "data/scripts/tuning_fork.pory"
	switch VAR_RESULT
# 397 "data/scripts/tuning_fork.pory"
	case 0, EventScript_TuningFork_PokemonHGSS_8
# 400 "data/scripts/tuning_fork.pory"
	case 1, EventScript_TuningFork_PokemonHGSS_9
# 403 "data/scripts/tuning_fork.pory"
	case 2, EventScript_TuningFork_PokemonHGSS_10
# 406 "data/scripts/tuning_fork.pory"
	case 3, EventScript_TuningFork_PokemonHGSS_11
# 409 "data/scripts/tuning_fork.pory"
	case 4, EventScript_TuningFork_PokemonHGSS_12
# 412 "data/scripts/tuning_fork.pory"
	case 5, EventScript_TuningFork_PokemonHGSS_13
# 415 "data/scripts/tuning_fork.pory"
	case 6, EventScript_TuningFork_PokemonHGSS_14
# 418 "data/scripts/tuning_fork.pory"
	case 7, EventScript_TuningFork_PokemonHGSS_15
# 421 "data/scripts/tuning_fork.pory"
	case 8, EventScript_TuningFork_PokemonHGSS_16
# 424 "data/scripts/tuning_fork.pory"
	case 9, EventScript_TuningFork_PokemonHGSS_17
# 427 "data/scripts/tuning_fork.pory"
	case 10, EventScript_TuningFork_PokemonHGSS_18
# 431 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_Pokemon
	return

EventScript_TuningFork_PokemonHGSS_2:
# 382 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonHGSS_Text_4, 4
	goto EventScript_TuningFork_PokemonHGSS_1

EventScript_TuningFork_PokemonHGSS_5:
# 387 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonHGSS_Text_5, 5
# 388 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonHGSS_Text_6, 6
# 389 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonHGSS_Text_7, 7
# 390 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonHGSS_Text_8, 8
# 391 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonHGSS_Text_9, 9
# 392 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonHGSS_Text_10, 10
	goto EventScript_TuningFork_PokemonHGSS_4

EventScript_TuningFork_PokemonHGSS_8:
# 398 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 31
# 399 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return

EventScript_TuningFork_PokemonHGSS_9:
# 401 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 32
# 402 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return

EventScript_TuningFork_PokemonHGSS_10:
# 404 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 33
# 405 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return

EventScript_TuningFork_PokemonHGSS_11:
# 407 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 34
# 408 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return

EventScript_TuningFork_PokemonHGSS_12:
# 410 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 35
# 411 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return

EventScript_TuningFork_PokemonHGSS_13:
# 413 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 36
# 414 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return

EventScript_TuningFork_PokemonHGSS_14:
# 416 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 37
# 417 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return

EventScript_TuningFork_PokemonHGSS_15:
# 419 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 38
# 420 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return

EventScript_TuningFork_PokemonHGSS_16:
# 422 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 39
# 423 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return

EventScript_TuningFork_PokemonHGSS_17:
# 425 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 40
# 426 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return

EventScript_TuningFork_PokemonHGSS_18:
# 428 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 41
# 429 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return


EventScript_TuningFork_PokemonBW::
# 436 "data/scripts/tuning_fork.pory"
	msgbox TextChooseSong
# 437 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonBW_Text_0, 0
# 438 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonBW_Text_1, 1
# 439 "data/scripts/tuning_fork.pory"
	checkifmusicunlocked 4
# 440 "data/scripts/tuning_fork.pory"
	compare VAR_RESULT, 0
	goto_if_ne EventScript_TuningFork_PokemonBW_2
EventScript_TuningFork_PokemonBW_1:
# 444 "data/scripts/tuning_fork.pory"
	dynmultistack 0, 2, FALSE, 5, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 445 "data/scripts/tuning_fork.pory"
	switch VAR_RESULT
# 447 "data/scripts/tuning_fork.pory"
	case 0, EventScript_TuningFork_PokemonBW_5
# 450 "data/scripts/tuning_fork.pory"
	case 1, EventScript_TuningFork_PokemonBW_6
# 453 "data/scripts/tuning_fork.pory"
	case 2, EventScript_TuningFork_PokemonBW_7
# 457 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_Pokemon
	return

EventScript_TuningFork_PokemonBW_2:
# 442 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonBW_Text_2, 2
	goto EventScript_TuningFork_PokemonBW_1

EventScript_TuningFork_PokemonBW_5:
# 448 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 43
# 449 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return

EventScript_TuningFork_PokemonBW_6:
# 451 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 42
# 452 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return

EventScript_TuningFork_PokemonBW_7:
# 454 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 44
# 455 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return


EventScript_TuningFork_PokemonOther::
# 462 "data/scripts/tuning_fork.pory"
	msgbox TextChooseSong
# 463 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonOther_Text_0, 0
# 464 "data/scripts/tuning_fork.pory"
	checkifmusicunlocked 5
# 465 "data/scripts/tuning_fork.pory"
	compare VAR_RESULT, 0
	goto_if_ne EventScript_TuningFork_PokemonOther_2
EventScript_TuningFork_PokemonOther_1:
# 469 "data/scripts/tuning_fork.pory"
	dynmultistack 0, 2, FALSE, 5, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 471 "data/scripts/tuning_fork.pory"
	switch VAR_RESULT
# 473 "data/scripts/tuning_fork.pory"
	case 0, EventScript_TuningFork_PokemonOther_5
# 476 "data/scripts/tuning_fork.pory"
	case 1, EventScript_TuningFork_PokemonOther_6
# 480 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_Pokemon
	return

EventScript_TuningFork_PokemonOther_2:
# 467 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonOther_Text_1, 1
	goto EventScript_TuningFork_PokemonOther_1

EventScript_TuningFork_PokemonOther_5:
# 474 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 47
# 475 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return

EventScript_TuningFork_PokemonOther_6:
# 477 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 46
# 478 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return


EventScript_TuningFork_Other::
# 485 "data/scripts/tuning_fork.pory"
	msgbox TextChooseSong
# 486 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_Other_Text_0, 0
# 488 "data/scripts/tuning_fork.pory"
	dynmultistack 0, 2, FALSE, 5, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 490 "data/scripts/tuning_fork.pory"
	switch VAR_RESULT
# 492 "data/scripts/tuning_fork.pory"
	case 0, EventScript_TuningFork_Other_2
# 496 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_ChooseType
	return

EventScript_TuningFork_Other_2:
# 493 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 45
# 494 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return


EventScript_TuningFork_SetMusic::
# 501 "data/scripts/tuning_fork.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq EventScript_TuningFork_SetMusic_2
# 507 "data/scripts/tuning_fork.pory"
	copyvar VAR_TUNING_FORK_TRAINER, VAR_TEMP_2
EventScript_TuningFork_SetMusic_1:
# 509 "data/scripts/tuning_fork.pory"
	msgbox EventScript_TuningFork_SetMusic_Text_0
# 510 "data/scripts/tuning_fork.pory"
	closemessage
	return

EventScript_TuningFork_SetMusic_2:
# 503 "data/scripts/tuning_fork.pory"
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
# 72 "data/scripts/tuning_fork.pory"
	.string "Trainer Battle Music$"

EventScript_TuningFork_Text_3:
# 72 "data/scripts/tuning_fork.pory"
	.string "Debug: Set All$"

EventScript_TuningFork_ChooseType_Text_0:
# 97 "data/scripts/tuning_fork.pory"
	.string "Choose music.$"

EventScript_TuningFork_ChooseType_Text_1:
# 98 "data/scripts/tuning_fork.pory"
	.string "Pokémon$"

EventScript_TuningFork_ChooseType_Text_2:
# 99 "data/scripts/tuning_fork.pory"
	.string "Other$"

EventScript_TuningFork_ChooseType_Text_3:
# 102 "data/scripts/tuning_fork.pory"
	.string "Reset music$"

EventScript_TuningFork_ChooseType_Text_4:
# 131 "data/scripts/tuning_fork.pory"
	.string "Music reset!$"

EventScript_TuningFork_Pokemon_Text_0:
# 138 "data/scripts/tuning_fork.pory"
	.string "Choose game.$"

EventScript_TuningFork_Pokemon_Text_1:
# 139 "data/scripts/tuning_fork.pory"
	.string "RSE$"

EventScript_TuningFork_Pokemon_Text_2:
# 140 "data/scripts/tuning_fork.pory"
	.string "FRLG$"

EventScript_TuningFork_Pokemon_Text_3:
# 141 "data/scripts/tuning_fork.pory"
	.string "DPPt$"

EventScript_TuningFork_Pokemon_Text_4:
# 142 "data/scripts/tuning_fork.pory"
	.string "HGSS$"

EventScript_TuningFork_Pokemon_Text_5:
# 146 "data/scripts/tuning_fork.pory"
	.string "BW$"

EventScript_TuningFork_PokemonRSE_Text_0:
# 193 "data/scripts/tuning_fork.pory"
	.string "RSE Vs. Rival$"

EventScript_TuningFork_PokemonRSE_Text_1:
# 194 "data/scripts/tuning_fork.pory"
	.string "RSE Vs. Gym Leader$"

EventScript_TuningFork_PokemonRSE_Text_2:
# 195 "data/scripts/tuning_fork.pory"
	.string "RSE Vs. Aqua/Magma$"

EventScript_TuningFork_PokemonRSE_Text_3:
# 199 "data/scripts/tuning_fork.pory"
	.string "RSE Vs. Aqua/Magma Leader$"

EventScript_TuningFork_PokemonRSE_Text_4:
# 204 "data/scripts/tuning_fork.pory"
	.string "RSE Vs. Elite Four$"

EventScript_TuningFork_PokemonRSE_Text_5:
# 205 "data/scripts/tuning_fork.pory"
	.string "RSE Vs. Champion$"

EventScript_TuningFork_PokemonRSE_Text_6:
# 206 "data/scripts/tuning_fork.pory"
	.string "RSE Vs. Frontier Brain$"

EventScript_TuningFork_PokemonRSE_Text_7:
# 211 "data/scripts/tuning_fork.pory"
	.string "RSE Vs. Kyogre/Groudon$"

EventScript_TuningFork_PokemonRSE_Text_8:
# 212 "data/scripts/tuning_fork.pory"
	.string "RSE Vs. Regi$"

EventScript_TuningFork_PokemonRSE_Text_9:
# 213 "data/scripts/tuning_fork.pory"
	.string "RSE Vs. Rayquaza$"

EventScript_TuningFork_PokemonRSE_Text_10:
# 214 "data/scripts/tuning_fork.pory"
	.string "RSE Vs. Mew$"

EventScript_TuningFork_PokemonFRLG_Text_0:
# 259 "data/scripts/tuning_fork.pory"
	.string "FRLG Vs. Gym Leader$"

EventScript_TuningFork_PokemonFRLG_Text_1:
# 263 "data/scripts/tuning_fork.pory"
	.string "FRLG Vs. Champion$"

EventScript_TuningFork_PokemonFRLG_Text_2:
# 268 "data/scripts/tuning_fork.pory"
	.string "FRLG Vs. Deoxys$"

EventScript_TuningFork_PokemonFRLG_Text_3:
# 269 "data/scripts/tuning_fork.pory"
	.string "FRLG Vs. Mewtwo$"

EventScript_TuningFork_PokemonFRLG_Text_4:
# 270 "data/scripts/tuning_fork.pory"
	.string "FRLG Vs. Legendary$"

EventScript_TuningFork_PokemonDPPt_Text_0:
# 297 "data/scripts/tuning_fork.pory"
	.string "DP Vs. Rival$"

EventScript_TuningFork_PokemonDPPt_Text_1:
# 298 "data/scripts/tuning_fork.pory"
	.string "DP Vs. Gym Leader$"

EventScript_TuningFork_PokemonDPPt_Text_2:
# 299 "data/scripts/tuning_fork.pory"
	.string "DP Vs. Galactic$"

EventScript_TuningFork_PokemonDPPt_Text_3:
# 303 "data/scripts/tuning_fork.pory"
	.string "DP Vs. Galactic Commander$"

EventScript_TuningFork_PokemonDPPt_Text_4:
# 304 "data/scripts/tuning_fork.pory"
	.string "DP Vs. Galactic Boss$"

EventScript_TuningFork_PokemonDPPt_Text_5:
# 309 "data/scripts/tuning_fork.pory"
	.string "DP Vs. Elite Four$"

EventScript_TuningFork_PokemonDPPt_Text_6:
# 310 "data/scripts/tuning_fork.pory"
	.string "DP Vs. Champion$"

EventScript_TuningFork_PokemonDPPt_Text_7:
# 311 "data/scripts/tuning_fork.pory"
	.string "Pt Vs. Frontier Brain$"

EventScript_TuningFork_PokemonDPPt_Text_8:
# 316 "data/scripts/tuning_fork.pory"
	.string "DP Vs. Dialga/Palkia$"

EventScript_TuningFork_PokemonDPPt_Text_9:
# 317 "data/scripts/tuning_fork.pory"
	.string "DP Vs. Uxie/Mesprit/Azelf$"

EventScript_TuningFork_PokemonDPPt_Text_10:
# 318 "data/scripts/tuning_fork.pory"
	.string "DP Vs. Legendary$"

EventScript_TuningFork_PokemonDPPt_Text_11:
# 319 "data/scripts/tuning_fork.pory"
	.string "DP Vs. Arceus$"

EventScript_TuningFork_PokemonDPPt_Text_12:
# 320 "data/scripts/tuning_fork.pory"
	.string "Pt Vs. Giratina$"

EventScript_TuningFork_PokemonDPPt_Text_13:
# 321 "data/scripts/tuning_fork.pory"
	.string "Pt Vs. Regi$"

EventScript_TuningFork_PokemonHGSS_Text_0:
# 375 "data/scripts/tuning_fork.pory"
	.string "HGSS Vs. Rival$"

EventScript_TuningFork_PokemonHGSS_Text_1:
# 376 "data/scripts/tuning_fork.pory"
	.string "HGSS Vs. Gym Leader$"

EventScript_TuningFork_PokemonHGSS_Text_2:
# 377 "data/scripts/tuning_fork.pory"
	.string "HGSS Vs. Gym Leader/Kanto$"

EventScript_TuningFork_PokemonHGSS_Text_3:
# 378 "data/scripts/tuning_fork.pory"
	.string "HGSS Vs. Rocket$"

EventScript_TuningFork_PokemonHGSS_Text_4:
# 382 "data/scripts/tuning_fork.pory"
	.string "HGSS Vs. Champion$"

EventScript_TuningFork_PokemonHGSS_Text_5:
# 387 "data/scripts/tuning_fork.pory"
	.string "HGSS Vs. Ho-Oh$"

EventScript_TuningFork_PokemonHGSS_Text_6:
# 388 "data/scripts/tuning_fork.pory"
	.string "HGSS Vs. Lugia$"

EventScript_TuningFork_PokemonHGSS_Text_7:
# 389 "data/scripts/tuning_fork.pory"
	.string "HGSS Vs. Suicune$"

EventScript_TuningFork_PokemonHGSS_Text_8:
# 390 "data/scripts/tuning_fork.pory"
	.string "HGSS Vs. Entei$"

EventScript_TuningFork_PokemonHGSS_Text_9:
# 391 "data/scripts/tuning_fork.pory"
	.string "HGSS Vs. Raikou$"

EventScript_TuningFork_PokemonHGSS_Text_10:
# 392 "data/scripts/tuning_fork.pory"
	.string "HGSS Vs. Kyogre/Groudon$"

EventScript_TuningFork_PokemonBW_Text_0:
# 437 "data/scripts/tuning_fork.pory"
	.string "BW Vs. Wild$"

EventScript_TuningFork_PokemonBW_Text_1:
# 438 "data/scripts/tuning_fork.pory"
	.string "BW Vs. Trainer$"

EventScript_TuningFork_PokemonBW_Text_2:
# 442 "data/scripts/tuning_fork.pory"
	.string "B2W2 Vs. Ghetsis$"

EventScript_TuningFork_PokemonOther_Text_0:
# 463 "data/scripts/tuning_fork.pory"
	.string "XD Vs. Cipher Peon$"

EventScript_TuningFork_PokemonOther_Text_1:
# 467 "data/scripts/tuning_fork.pory"
	.string "MD2 Vs. Dialga$"

EventScript_TuningFork_Other_Text_0:
# 486 "data/scripts/tuning_fork.pory"
	.string "FF4: Battle 2$"

EventScript_TuningFork_SetMusic_Text_0:
# 509 "data/scripts/tuning_fork.pory"
	.string "Music set!$"

TextChooseSong::
# 513 "data/scripts/tuning_fork.pory"
	.string "Choose song.$"
