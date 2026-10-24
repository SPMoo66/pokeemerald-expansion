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
# 90 "data/scripts/tuning_fork.pory"
	compare VAR_RESULT, 127
	goto_if_ne EventScript_TuningFork_5
EventScript_TuningFork_4:
# 94 "data/scripts/tuning_fork.pory"
	closemessage
# 95 "data/scripts/tuning_fork.pory"
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
	checkifmusicunlocked 7, 1
# 87 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork
	goto EventScript_TuningFork_1

EventScript_TuningFork_5:
# 92 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_ChooseType
	goto EventScript_TuningFork_4


EventScript_TuningFork_ChooseType::
# 100 "data/scripts/tuning_fork.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 102 "data/scripts/tuning_fork.pory"
	msgbox EventScript_TuningFork_ChooseType_Text_0
# 103 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_ChooseType_Text_1, 0
# 104 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_ChooseType_Text_2, 1
# 105 "data/scripts/tuning_fork.pory"
	compare VAR_TUNING_FORK_WILD, 0
	goto_if_ne EventScript_TuningFork_ChooseType_4
EventScript_TuningFork_ChooseType_3:
# 105 "data/scripts/tuning_fork.pory"
	compare VAR_TUNING_FORK_TRAINER, 0
	goto_if_ne EventScript_TuningFork_ChooseType_7
EventScript_TuningFork_ChooseType_1:
# 109 "data/scripts/tuning_fork.pory"
	dynmultistack 0, 6, FALSE, 5, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 111 "data/scripts/tuning_fork.pory"
	compare VAR_RESULT, 127
	goto_if_eq EventScript_TuningFork_ChooseType_11
# 116 "data/scripts/tuning_fork.pory"
	compare VAR_RESULT, 0
	goto_if_eq EventScript_TuningFork_ChooseType_12
# 121 "data/scripts/tuning_fork.pory"
	compare VAR_RESULT, 1
	goto_if_eq EventScript_TuningFork_ChooseType_13
# 126 "data/scripts/tuning_fork.pory"
	compare VAR_RESULT, 2
	goto_if_eq EventScript_TuningFork_ChooseType_14
EventScript_TuningFork_ChooseType_10:
# 139 "data/scripts/tuning_fork.pory"
	release
	return

EventScript_TuningFork_ChooseType_2:
# 107 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_ChooseType_Text_3, 2
	goto EventScript_TuningFork_ChooseType_1

EventScript_TuningFork_ChooseType_4:
# 105 "data/scripts/tuning_fork.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq EventScript_TuningFork_ChooseType_2
	goto EventScript_TuningFork_ChooseType_3

EventScript_TuningFork_ChooseType_7:
# 105 "data/scripts/tuning_fork.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq EventScript_TuningFork_ChooseType_2
	goto EventScript_TuningFork_ChooseType_1

EventScript_TuningFork_ChooseType_11:
# 113 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork
	goto EventScript_TuningFork_ChooseType_10

EventScript_TuningFork_ChooseType_12:
# 118 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_Pokemon
	goto EventScript_TuningFork_ChooseType_10

EventScript_TuningFork_ChooseType_13:
# 123 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_Other
	goto EventScript_TuningFork_ChooseType_10

EventScript_TuningFork_ChooseType_14:
# 128 "data/scripts/tuning_fork.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq EventScript_TuningFork_ChooseType_20
# 134 "data/scripts/tuning_fork.pory"
	setvar VAR_TUNING_FORK_TRAINER, 0
EventScript_TuningFork_ChooseType_19:
# 136 "data/scripts/tuning_fork.pory"
	msgbox EventScript_TuningFork_ChooseType_Text_4
# 137 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork
	goto EventScript_TuningFork_ChooseType_10

EventScript_TuningFork_ChooseType_20:
# 130 "data/scripts/tuning_fork.pory"
	setvar VAR_TUNING_FORK_WILD, 0
	goto EventScript_TuningFork_ChooseType_19


EventScript_TuningFork_Pokemon::
# 144 "data/scripts/tuning_fork.pory"
	msgbox EventScript_TuningFork_Pokemon_Text_0
# 145 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_Pokemon_Text_1, 0
# 146 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_Pokemon_Text_2, 1
# 147 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_Pokemon_Text_3, 2
# 148 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_Pokemon_Text_4, 3
# 149 "data/scripts/tuning_fork.pory"
	checkifmusicunlocked 3
# 150 "data/scripts/tuning_fork.pory"
	compare VAR_RESULT, 0
	goto_if_ne EventScript_TuningFork_Pokemon_2
EventScript_TuningFork_Pokemon_1:
# 154 "data/scripts/tuning_fork.pory"
	checkifmusicunlocked 6
# 155 "data/scripts/tuning_fork.pory"
	compare VAR_RESULT, 0
	goto_if_ne EventScript_TuningFork_Pokemon_5
EventScript_TuningFork_Pokemon_4:
# 159 "data/scripts/tuning_fork.pory"
	dynmultistack 0, 2, FALSE, 5, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 161 "data/scripts/tuning_fork.pory"
	compare VAR_RESULT, 0
	goto_if_eq EventScript_TuningFork_Pokemon_7
# 166 "data/scripts/tuning_fork.pory"
	compare VAR_RESULT, 1
	goto_if_eq EventScript_TuningFork_Pokemon_8
# 171 "data/scripts/tuning_fork.pory"
	compare VAR_RESULT, 2
	goto_if_eq EventScript_TuningFork_Pokemon_9
# 176 "data/scripts/tuning_fork.pory"
	compare VAR_RESULT, 3
	goto_if_eq EventScript_TuningFork_Pokemon_10
# 181 "data/scripts/tuning_fork.pory"
	compare VAR_RESULT, 4
	goto_if_eq EventScript_TuningFork_Pokemon_11
# 186 "data/scripts/tuning_fork.pory"
	compare VAR_RESULT, 5
	goto_if_eq EventScript_TuningFork_Pokemon_12
# 193 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_ChooseType
	return

EventScript_TuningFork_Pokemon_2:
# 152 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_Pokemon_Text_5, 4
	goto EventScript_TuningFork_Pokemon_1

EventScript_TuningFork_Pokemon_5:
# 157 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_ChooseType_Text_2, 5
	goto EventScript_TuningFork_Pokemon_4

EventScript_TuningFork_Pokemon_7:
# 163 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_PokemonRSE
	return

EventScript_TuningFork_Pokemon_8:
# 168 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_PokemonFRLG
	return

EventScript_TuningFork_Pokemon_9:
# 173 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_PokemonDPPt
	return

EventScript_TuningFork_Pokemon_10:
# 178 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_PokemonHGSS
	return

EventScript_TuningFork_Pokemon_11:
# 183 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_PokemonBW
	return

EventScript_TuningFork_Pokemon_12:
# 188 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_PokemonOther
	return


EventScript_TuningFork_PokemonRSE::
# 198 "data/scripts/tuning_fork.pory"
	msgbox TextChooseSong
# 199 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonRSE_Text_0, 0
# 200 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonRSE_Text_1, 1
# 201 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonRSE_Text_2, 2
# 202 "data/scripts/tuning_fork.pory"
	checkifmusicunlocked 0
# 203 "data/scripts/tuning_fork.pory"
	compare VAR_RESULT, 0
	goto_if_ne EventScript_TuningFork_PokemonRSE_2
EventScript_TuningFork_PokemonRSE_1:
# 207 "data/scripts/tuning_fork.pory"
	checkifmusicunlocked 1
# 208 "data/scripts/tuning_fork.pory"
	compare VAR_RESULT, 0
	goto_if_ne EventScript_TuningFork_PokemonRSE_5
EventScript_TuningFork_PokemonRSE_4:
# 214 "data/scripts/tuning_fork.pory"
	checkifmusicunlocked 2
# 215 "data/scripts/tuning_fork.pory"
	compare VAR_RESULT, 0
	goto_if_ne EventScript_TuningFork_PokemonRSE_8
EventScript_TuningFork_PokemonRSE_7:
# 222 "data/scripts/tuning_fork.pory"
	dynmultistack 0, 2, FALSE, 5, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 223 "data/scripts/tuning_fork.pory"
	switch VAR_RESULT
# 225 "data/scripts/tuning_fork.pory"
	case 0, EventScript_TuningFork_PokemonRSE_11
# 228 "data/scripts/tuning_fork.pory"
	case 1, EventScript_TuningFork_PokemonRSE_12
# 231 "data/scripts/tuning_fork.pory"
	case 2, EventScript_TuningFork_PokemonRSE_13
# 234 "data/scripts/tuning_fork.pory"
	case 3, EventScript_TuningFork_PokemonRSE_14
# 237 "data/scripts/tuning_fork.pory"
	case 4, EventScript_TuningFork_PokemonRSE_15
# 240 "data/scripts/tuning_fork.pory"
	case 5, EventScript_TuningFork_PokemonRSE_16
# 243 "data/scripts/tuning_fork.pory"
	case 6, EventScript_TuningFork_PokemonRSE_17
# 246 "data/scripts/tuning_fork.pory"
	case 7, EventScript_TuningFork_PokemonRSE_18
# 249 "data/scripts/tuning_fork.pory"
	case 8, EventScript_TuningFork_PokemonRSE_19
# 252 "data/scripts/tuning_fork.pory"
	case 9, EventScript_TuningFork_PokemonRSE_20
# 255 "data/scripts/tuning_fork.pory"
	case 10, EventScript_TuningFork_PokemonRSE_21
# 259 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_Pokemon
	return

EventScript_TuningFork_PokemonRSE_2:
# 205 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonRSE_Text_3, 3
	goto EventScript_TuningFork_PokemonRSE_1

EventScript_TuningFork_PokemonRSE_5:
# 210 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonRSE_Text_4, 4
# 211 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonRSE_Text_5, 5
# 212 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonRSE_Text_6, 6
	goto EventScript_TuningFork_PokemonRSE_4

EventScript_TuningFork_PokemonRSE_8:
# 217 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonRSE_Text_7, 7
# 218 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonRSE_Text_8, 8
# 219 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonRSE_Text_9, 9
# 220 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonRSE_Text_10, 10
	goto EventScript_TuningFork_PokemonRSE_7

EventScript_TuningFork_PokemonRSE_11:
# 226 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 1
# 227 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return

EventScript_TuningFork_PokemonRSE_12:
# 229 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 2
# 230 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return

EventScript_TuningFork_PokemonRSE_13:
# 232 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 3
# 233 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return

EventScript_TuningFork_PokemonRSE_14:
# 235 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 4
# 236 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return

EventScript_TuningFork_PokemonRSE_15:
# 238 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 5
# 239 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return

EventScript_TuningFork_PokemonRSE_16:
# 241 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 6
# 242 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return

EventScript_TuningFork_PokemonRSE_17:
# 244 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 7
# 245 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return

EventScript_TuningFork_PokemonRSE_18:
# 247 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 8
# 248 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return

EventScript_TuningFork_PokemonRSE_19:
# 250 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 9
# 251 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return

EventScript_TuningFork_PokemonRSE_20:
# 253 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 10
# 254 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return

EventScript_TuningFork_PokemonRSE_21:
# 256 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 11
# 257 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return


EventScript_TuningFork_PokemonFRLG::
# 264 "data/scripts/tuning_fork.pory"
	msgbox TextChooseSong
# 265 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonFRLG_Text_0, 0
# 266 "data/scripts/tuning_fork.pory"
	checkifmusicunlocked 1
# 267 "data/scripts/tuning_fork.pory"
	compare VAR_RESULT, 0
	goto_if_ne EventScript_TuningFork_PokemonFRLG_2
EventScript_TuningFork_PokemonFRLG_1:
# 271 "data/scripts/tuning_fork.pory"
	checkifmusicunlocked 2
# 272 "data/scripts/tuning_fork.pory"
	compare VAR_RESULT, 0
	goto_if_ne EventScript_TuningFork_PokemonFRLG_5
EventScript_TuningFork_PokemonFRLG_4:
# 278 "data/scripts/tuning_fork.pory"
	dynmultistack 0, 2, FALSE, 5, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 279 "data/scripts/tuning_fork.pory"
	switch VAR_RESULT
# 281 "data/scripts/tuning_fork.pory"
	case 0, EventScript_TuningFork_PokemonFRLG_8
# 284 "data/scripts/tuning_fork.pory"
	case 1, EventScript_TuningFork_PokemonFRLG_9
# 287 "data/scripts/tuning_fork.pory"
	case 2, EventScript_TuningFork_PokemonFRLG_10
# 290 "data/scripts/tuning_fork.pory"
	case 3, EventScript_TuningFork_PokemonFRLG_11
# 293 "data/scripts/tuning_fork.pory"
	case 4, EventScript_TuningFork_PokemonFRLG_12
# 297 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_Pokemon
	return

EventScript_TuningFork_PokemonFRLG_2:
# 269 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonFRLG_Text_1, 1
	goto EventScript_TuningFork_PokemonFRLG_1

EventScript_TuningFork_PokemonFRLG_5:
# 274 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonFRLG_Text_2, 2
# 275 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonFRLG_Text_3, 3
# 276 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonFRLG_Text_4, 4
	goto EventScript_TuningFork_PokemonFRLG_4

EventScript_TuningFork_PokemonFRLG_8:
# 282 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 12
# 283 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return

EventScript_TuningFork_PokemonFRLG_9:
# 285 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 13
# 286 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return

EventScript_TuningFork_PokemonFRLG_10:
# 288 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 14
# 289 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return

EventScript_TuningFork_PokemonFRLG_11:
# 291 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 15
# 292 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return

EventScript_TuningFork_PokemonFRLG_12:
# 294 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 16
# 295 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return


EventScript_TuningFork_PokemonDPPt::
# 302 "data/scripts/tuning_fork.pory"
	msgbox TextChooseSong
# 303 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonDPPt_Text_0, 0
# 304 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonDPPt_Text_1, 1
# 305 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonDPPt_Text_2, 2
# 306 "data/scripts/tuning_fork.pory"
	checkifmusicunlocked 0
# 307 "data/scripts/tuning_fork.pory"
	compare VAR_RESULT, 0
	goto_if_ne EventScript_TuningFork_PokemonDPPt_2
EventScript_TuningFork_PokemonDPPt_1:
# 312 "data/scripts/tuning_fork.pory"
	checkifmusicunlocked 1
# 313 "data/scripts/tuning_fork.pory"
	compare VAR_RESULT, 0
	goto_if_ne EventScript_TuningFork_PokemonDPPt_5
EventScript_TuningFork_PokemonDPPt_4:
# 319 "data/scripts/tuning_fork.pory"
	checkifmusicunlocked 2
# 320 "data/scripts/tuning_fork.pory"
	compare VAR_RESULT, 0
	goto_if_ne EventScript_TuningFork_PokemonDPPt_8
EventScript_TuningFork_PokemonDPPt_7:
# 329 "data/scripts/tuning_fork.pory"
	dynmultistack 0, 2, FALSE, 5, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 330 "data/scripts/tuning_fork.pory"
	switch VAR_RESULT
# 332 "data/scripts/tuning_fork.pory"
	case 0, EventScript_TuningFork_PokemonDPPt_11
# 335 "data/scripts/tuning_fork.pory"
	case 1, EventScript_TuningFork_PokemonDPPt_12
# 338 "data/scripts/tuning_fork.pory"
	case 2, EventScript_TuningFork_PokemonDPPt_13
# 341 "data/scripts/tuning_fork.pory"
	case 3, EventScript_TuningFork_PokemonDPPt_14
# 344 "data/scripts/tuning_fork.pory"
	case 4, EventScript_TuningFork_PokemonDPPt_15
# 347 "data/scripts/tuning_fork.pory"
	case 5, EventScript_TuningFork_PokemonDPPt_16
# 350 "data/scripts/tuning_fork.pory"
	case 6, EventScript_TuningFork_PokemonDPPt_17
# 353 "data/scripts/tuning_fork.pory"
	case 7, EventScript_TuningFork_PokemonDPPt_18
# 356 "data/scripts/tuning_fork.pory"
	case 8, EventScript_TuningFork_PokemonDPPt_19
# 359 "data/scripts/tuning_fork.pory"
	case 9, EventScript_TuningFork_PokemonDPPt_20
# 362 "data/scripts/tuning_fork.pory"
	case 10, EventScript_TuningFork_PokemonDPPt_21
# 365 "data/scripts/tuning_fork.pory"
	case 11, EventScript_TuningFork_PokemonDPPt_22
# 368 "data/scripts/tuning_fork.pory"
	case 12, EventScript_TuningFork_PokemonDPPt_23
# 371 "data/scripts/tuning_fork.pory"
	case 13, EventScript_TuningFork_PokemonDPPt_24
# 375 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_Pokemon
	return

EventScript_TuningFork_PokemonDPPt_2:
# 309 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonDPPt_Text_3, 3
# 310 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonDPPt_Text_4, 4
	goto EventScript_TuningFork_PokemonDPPt_1

EventScript_TuningFork_PokemonDPPt_5:
# 315 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonDPPt_Text_5, 5
# 316 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonDPPt_Text_6, 6
# 317 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonDPPt_Text_7, 11
	goto EventScript_TuningFork_PokemonDPPt_4

EventScript_TuningFork_PokemonDPPt_8:
# 322 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonDPPt_Text_8, 7
# 323 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonDPPt_Text_9, 8
# 324 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonDPPt_Text_10, 9
# 325 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonDPPt_Text_11, 10
# 326 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonDPPt_Text_12, 12
# 327 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonDPPt_Text_13, 13
	goto EventScript_TuningFork_PokemonDPPt_7

EventScript_TuningFork_PokemonDPPt_11:
# 333 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 17
# 334 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return

EventScript_TuningFork_PokemonDPPt_12:
# 336 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 18
# 337 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return

EventScript_TuningFork_PokemonDPPt_13:
# 339 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 19
# 340 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return

EventScript_TuningFork_PokemonDPPt_14:
# 342 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 20
# 343 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return

EventScript_TuningFork_PokemonDPPt_15:
# 345 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 21
# 346 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return

EventScript_TuningFork_PokemonDPPt_16:
# 348 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 22
# 349 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return

EventScript_TuningFork_PokemonDPPt_17:
# 351 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 23
# 352 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return

EventScript_TuningFork_PokemonDPPt_18:
# 354 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 24
# 355 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return

EventScript_TuningFork_PokemonDPPt_19:
# 357 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 25
# 358 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return

EventScript_TuningFork_PokemonDPPt_20:
# 360 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 26
# 361 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return

EventScript_TuningFork_PokemonDPPt_21:
# 363 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 27
# 364 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return

EventScript_TuningFork_PokemonDPPt_22:
# 366 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 28
# 367 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return

EventScript_TuningFork_PokemonDPPt_23:
# 369 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 29
# 370 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return

EventScript_TuningFork_PokemonDPPt_24:
# 372 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 30
# 373 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return


EventScript_TuningFork_PokemonHGSS::
# 380 "data/scripts/tuning_fork.pory"
	msgbox TextChooseSong
# 381 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonHGSS_Text_0, 0
# 382 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonHGSS_Text_1, 1
# 383 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonHGSS_Text_2, 2
# 384 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonHGSS_Text_3, 3
# 385 "data/scripts/tuning_fork.pory"
	checkifmusicunlocked 1
# 386 "data/scripts/tuning_fork.pory"
	compare VAR_RESULT, 0
	goto_if_ne EventScript_TuningFork_PokemonHGSS_2
EventScript_TuningFork_PokemonHGSS_1:
# 390 "data/scripts/tuning_fork.pory"
	checkifmusicunlocked 2
# 391 "data/scripts/tuning_fork.pory"
	compare VAR_RESULT, 0
	goto_if_ne EventScript_TuningFork_PokemonHGSS_5
EventScript_TuningFork_PokemonHGSS_4:
# 400 "data/scripts/tuning_fork.pory"
	dynmultistack 0, 2, FALSE, 5, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 401 "data/scripts/tuning_fork.pory"
	switch VAR_RESULT
# 403 "data/scripts/tuning_fork.pory"
	case 0, EventScript_TuningFork_PokemonHGSS_8
# 406 "data/scripts/tuning_fork.pory"
	case 1, EventScript_TuningFork_PokemonHGSS_9
# 409 "data/scripts/tuning_fork.pory"
	case 2, EventScript_TuningFork_PokemonHGSS_10
# 412 "data/scripts/tuning_fork.pory"
	case 3, EventScript_TuningFork_PokemonHGSS_11
# 415 "data/scripts/tuning_fork.pory"
	case 4, EventScript_TuningFork_PokemonHGSS_12
# 418 "data/scripts/tuning_fork.pory"
	case 5, EventScript_TuningFork_PokemonHGSS_13
# 421 "data/scripts/tuning_fork.pory"
	case 6, EventScript_TuningFork_PokemonHGSS_14
# 424 "data/scripts/tuning_fork.pory"
	case 7, EventScript_TuningFork_PokemonHGSS_15
# 427 "data/scripts/tuning_fork.pory"
	case 8, EventScript_TuningFork_PokemonHGSS_16
# 430 "data/scripts/tuning_fork.pory"
	case 9, EventScript_TuningFork_PokemonHGSS_17
# 433 "data/scripts/tuning_fork.pory"
	case 10, EventScript_TuningFork_PokemonHGSS_18
# 437 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_Pokemon
	return

EventScript_TuningFork_PokemonHGSS_2:
# 388 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonHGSS_Text_4, 4
	goto EventScript_TuningFork_PokemonHGSS_1

EventScript_TuningFork_PokemonHGSS_5:
# 393 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonHGSS_Text_5, 5
# 394 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonHGSS_Text_6, 6
# 395 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonHGSS_Text_7, 7
# 396 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonHGSS_Text_8, 8
# 397 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonHGSS_Text_9, 9
# 398 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonHGSS_Text_10, 10
	goto EventScript_TuningFork_PokemonHGSS_4

EventScript_TuningFork_PokemonHGSS_8:
# 404 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 31
# 405 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return

EventScript_TuningFork_PokemonHGSS_9:
# 407 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 32
# 408 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return

EventScript_TuningFork_PokemonHGSS_10:
# 410 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 33
# 411 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return

EventScript_TuningFork_PokemonHGSS_11:
# 413 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 34
# 414 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return

EventScript_TuningFork_PokemonHGSS_12:
# 416 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 35
# 417 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return

EventScript_TuningFork_PokemonHGSS_13:
# 419 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 36
# 420 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return

EventScript_TuningFork_PokemonHGSS_14:
# 422 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 37
# 423 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return

EventScript_TuningFork_PokemonHGSS_15:
# 425 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 38
# 426 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return

EventScript_TuningFork_PokemonHGSS_16:
# 428 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 39
# 429 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return

EventScript_TuningFork_PokemonHGSS_17:
# 431 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 40
# 432 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return

EventScript_TuningFork_PokemonHGSS_18:
# 434 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 41
# 435 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return


EventScript_TuningFork_PokemonBW::
# 442 "data/scripts/tuning_fork.pory"
	msgbox TextChooseSong
# 443 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonBW_Text_0, 0
# 444 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonBW_Text_1, 1
# 445 "data/scripts/tuning_fork.pory"
	checkifmusicunlocked 4
# 446 "data/scripts/tuning_fork.pory"
	compare VAR_RESULT, 0
	goto_if_ne EventScript_TuningFork_PokemonBW_2
EventScript_TuningFork_PokemonBW_1:
# 450 "data/scripts/tuning_fork.pory"
	dynmultistack 0, 2, FALSE, 5, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 451 "data/scripts/tuning_fork.pory"
	switch VAR_RESULT
# 453 "data/scripts/tuning_fork.pory"
	case 0, EventScript_TuningFork_PokemonBW_5
# 456 "data/scripts/tuning_fork.pory"
	case 1, EventScript_TuningFork_PokemonBW_6
# 459 "data/scripts/tuning_fork.pory"
	case 2, EventScript_TuningFork_PokemonBW_7
# 463 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_Pokemon
	return

EventScript_TuningFork_PokemonBW_2:
# 448 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonBW_Text_2, 2
	goto EventScript_TuningFork_PokemonBW_1

EventScript_TuningFork_PokemonBW_5:
# 454 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 43
# 455 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return

EventScript_TuningFork_PokemonBW_6:
# 457 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 42
# 458 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return

EventScript_TuningFork_PokemonBW_7:
# 460 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 44
# 461 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return


EventScript_TuningFork_PokemonOther::
# 468 "data/scripts/tuning_fork.pory"
	msgbox TextChooseSong
# 469 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonOther_Text_0, 0
# 470 "data/scripts/tuning_fork.pory"
	checkifmusicunlocked 5
# 471 "data/scripts/tuning_fork.pory"
	compare VAR_RESULT, 0
	goto_if_ne EventScript_TuningFork_PokemonOther_2
EventScript_TuningFork_PokemonOther_1:
# 475 "data/scripts/tuning_fork.pory"
	dynmultistack 0, 2, FALSE, 5, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 477 "data/scripts/tuning_fork.pory"
	switch VAR_RESULT
# 479 "data/scripts/tuning_fork.pory"
	case 0, EventScript_TuningFork_PokemonOther_5
# 482 "data/scripts/tuning_fork.pory"
	case 1, EventScript_TuningFork_PokemonOther_6
# 486 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_Pokemon
	return

EventScript_TuningFork_PokemonOther_2:
# 473 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_PokemonOther_Text_1, 1
	goto EventScript_TuningFork_PokemonOther_1

EventScript_TuningFork_PokemonOther_5:
# 480 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 47
# 481 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return

EventScript_TuningFork_PokemonOther_6:
# 483 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 46
# 484 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return


EventScript_TuningFork_Other::
# 491 "data/scripts/tuning_fork.pory"
	msgbox TextChooseSong
# 492 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_Other_Text_0, 0
# 493 "data/scripts/tuning_fork.pory"
	checkifmusicunlocked 7
# 494 "data/scripts/tuning_fork.pory"
	compare VAR_RESULT, 0
	goto_if_ne EventScript_TuningFork_Other_2
EventScript_TuningFork_Other_1:
# 499 "data/scripts/tuning_fork.pory"
	dynmultistack 0, 2, FALSE, 5, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 501 "data/scripts/tuning_fork.pory"
	switch VAR_RESULT
# 503 "data/scripts/tuning_fork.pory"
	case 0, EventScript_TuningFork_Other_5
# 506 "data/scripts/tuning_fork.pory"
	case 1, EventScript_TuningFork_Other_6
# 510 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_ChooseType
	return

EventScript_TuningFork_Other_2:
# 496 "data/scripts/tuning_fork.pory"
	dynmultipush EventScript_TuningFork_Other_Text_1, 1
	goto EventScript_TuningFork_Other_1

EventScript_TuningFork_Other_5:
# 504 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 45
# 505 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return

EventScript_TuningFork_Other_6:
# 507 "data/scripts/tuning_fork.pory"
	setvar VAR_TEMP_2, 48
# 508 "data/scripts/tuning_fork.pory"
	goto EventScript_TuningFork_SetMusic
	return


EventScript_TuningFork_SetMusic::
# 515 "data/scripts/tuning_fork.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq EventScript_TuningFork_SetMusic_2
# 521 "data/scripts/tuning_fork.pory"
	copyvar VAR_TUNING_FORK_TRAINER, VAR_TEMP_2
EventScript_TuningFork_SetMusic_1:
# 523 "data/scripts/tuning_fork.pory"
	msgbox EventScript_TuningFork_SetMusic_Text_0
# 524 "data/scripts/tuning_fork.pory"
	closemessage
# 525 "data/scripts/tuning_fork.pory"
	release
	return

EventScript_TuningFork_SetMusic_2:
# 517 "data/scripts/tuning_fork.pory"
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
# 102 "data/scripts/tuning_fork.pory"
	.string "Choose music.$"

EventScript_TuningFork_ChooseType_Text_1:
# 103 "data/scripts/tuning_fork.pory"
	.string "Pokémon$"

EventScript_TuningFork_ChooseType_Text_2:
# 104 "data/scripts/tuning_fork.pory"
	.string "Other$"

EventScript_TuningFork_ChooseType_Text_3:
# 107 "data/scripts/tuning_fork.pory"
	.string "Reset music$"

EventScript_TuningFork_ChooseType_Text_4:
# 136 "data/scripts/tuning_fork.pory"
	.string "Music reset!$"

EventScript_TuningFork_Pokemon_Text_0:
# 144 "data/scripts/tuning_fork.pory"
	.string "Choose game.$"

EventScript_TuningFork_Pokemon_Text_1:
# 145 "data/scripts/tuning_fork.pory"
	.string "RSE$"

EventScript_TuningFork_Pokemon_Text_2:
# 146 "data/scripts/tuning_fork.pory"
	.string "FRLG$"

EventScript_TuningFork_Pokemon_Text_3:
# 147 "data/scripts/tuning_fork.pory"
	.string "DPPt$"

EventScript_TuningFork_Pokemon_Text_4:
# 148 "data/scripts/tuning_fork.pory"
	.string "HGSS$"

EventScript_TuningFork_Pokemon_Text_5:
# 152 "data/scripts/tuning_fork.pory"
	.string "BW$"

EventScript_TuningFork_PokemonRSE_Text_0:
# 199 "data/scripts/tuning_fork.pory"
	.string "RSE Vs. Rival$"

EventScript_TuningFork_PokemonRSE_Text_1:
# 200 "data/scripts/tuning_fork.pory"
	.string "RSE Vs. Gym Leader$"

EventScript_TuningFork_PokemonRSE_Text_2:
# 201 "data/scripts/tuning_fork.pory"
	.string "RSE Vs. Aqua/Magma$"

EventScript_TuningFork_PokemonRSE_Text_3:
# 205 "data/scripts/tuning_fork.pory"
	.string "RSE Vs. Aqua/Magma Leader$"

EventScript_TuningFork_PokemonRSE_Text_4:
# 210 "data/scripts/tuning_fork.pory"
	.string "RSE Vs. Elite Four$"

EventScript_TuningFork_PokemonRSE_Text_5:
# 211 "data/scripts/tuning_fork.pory"
	.string "RSE Vs. Champion$"

EventScript_TuningFork_PokemonRSE_Text_6:
# 212 "data/scripts/tuning_fork.pory"
	.string "RSE Vs. Frontier Brain$"

EventScript_TuningFork_PokemonRSE_Text_7:
# 217 "data/scripts/tuning_fork.pory"
	.string "RSE Vs. Kyogre/Groudon$"

EventScript_TuningFork_PokemonRSE_Text_8:
# 218 "data/scripts/tuning_fork.pory"
	.string "RSE Vs. Regi$"

EventScript_TuningFork_PokemonRSE_Text_9:
# 219 "data/scripts/tuning_fork.pory"
	.string "RSE Vs. Rayquaza$"

EventScript_TuningFork_PokemonRSE_Text_10:
# 220 "data/scripts/tuning_fork.pory"
	.string "RSE Vs. Mew$"

EventScript_TuningFork_PokemonFRLG_Text_0:
# 265 "data/scripts/tuning_fork.pory"
	.string "FRLG Vs. Gym Leader$"

EventScript_TuningFork_PokemonFRLG_Text_1:
# 269 "data/scripts/tuning_fork.pory"
	.string "FRLG Vs. Champion$"

EventScript_TuningFork_PokemonFRLG_Text_2:
# 274 "data/scripts/tuning_fork.pory"
	.string "FRLG Vs. Deoxys$"

EventScript_TuningFork_PokemonFRLG_Text_3:
# 275 "data/scripts/tuning_fork.pory"
	.string "FRLG Vs. Mewtwo$"

EventScript_TuningFork_PokemonFRLG_Text_4:
# 276 "data/scripts/tuning_fork.pory"
	.string "FRLG Vs. Legendary$"

EventScript_TuningFork_PokemonDPPt_Text_0:
# 303 "data/scripts/tuning_fork.pory"
	.string "DP Vs. Rival$"

EventScript_TuningFork_PokemonDPPt_Text_1:
# 304 "data/scripts/tuning_fork.pory"
	.string "DP Vs. Gym Leader$"

EventScript_TuningFork_PokemonDPPt_Text_2:
# 305 "data/scripts/tuning_fork.pory"
	.string "DP Vs. Galactic$"

EventScript_TuningFork_PokemonDPPt_Text_3:
# 309 "data/scripts/tuning_fork.pory"
	.string "DP Vs. Galactic Commander$"

EventScript_TuningFork_PokemonDPPt_Text_4:
# 310 "data/scripts/tuning_fork.pory"
	.string "DP Vs. Galactic Boss$"

EventScript_TuningFork_PokemonDPPt_Text_5:
# 315 "data/scripts/tuning_fork.pory"
	.string "DP Vs. Elite Four$"

EventScript_TuningFork_PokemonDPPt_Text_6:
# 316 "data/scripts/tuning_fork.pory"
	.string "DP Vs. Champion$"

EventScript_TuningFork_PokemonDPPt_Text_7:
# 317 "data/scripts/tuning_fork.pory"
	.string "Pt Vs. Frontier Brain$"

EventScript_TuningFork_PokemonDPPt_Text_8:
# 322 "data/scripts/tuning_fork.pory"
	.string "DP Vs. Dialga/Palkia$"

EventScript_TuningFork_PokemonDPPt_Text_9:
# 323 "data/scripts/tuning_fork.pory"
	.string "DP Vs. Uxie/Mesprit/Azelf$"

EventScript_TuningFork_PokemonDPPt_Text_10:
# 324 "data/scripts/tuning_fork.pory"
	.string "DP Vs. Legendary$"

EventScript_TuningFork_PokemonDPPt_Text_11:
# 325 "data/scripts/tuning_fork.pory"
	.string "DP Vs. Arceus$"

EventScript_TuningFork_PokemonDPPt_Text_12:
# 326 "data/scripts/tuning_fork.pory"
	.string "Pt Vs. Giratina$"

EventScript_TuningFork_PokemonDPPt_Text_13:
# 327 "data/scripts/tuning_fork.pory"
	.string "Pt Vs. Regi$"

EventScript_TuningFork_PokemonHGSS_Text_0:
# 381 "data/scripts/tuning_fork.pory"
	.string "HGSS Vs. Rival$"

EventScript_TuningFork_PokemonHGSS_Text_1:
# 382 "data/scripts/tuning_fork.pory"
	.string "HGSS Vs. Gym Leader$"

EventScript_TuningFork_PokemonHGSS_Text_2:
# 383 "data/scripts/tuning_fork.pory"
	.string "HGSS Vs. Gym Leader/Kanto$"

EventScript_TuningFork_PokemonHGSS_Text_3:
# 384 "data/scripts/tuning_fork.pory"
	.string "HGSS Vs. Rocket$"

EventScript_TuningFork_PokemonHGSS_Text_4:
# 388 "data/scripts/tuning_fork.pory"
	.string "HGSS Vs. Champion$"

EventScript_TuningFork_PokemonHGSS_Text_5:
# 393 "data/scripts/tuning_fork.pory"
	.string "HGSS Vs. Ho-Oh$"

EventScript_TuningFork_PokemonHGSS_Text_6:
# 394 "data/scripts/tuning_fork.pory"
	.string "HGSS Vs. Lugia$"

EventScript_TuningFork_PokemonHGSS_Text_7:
# 395 "data/scripts/tuning_fork.pory"
	.string "HGSS Vs. Suicune$"

EventScript_TuningFork_PokemonHGSS_Text_8:
# 396 "data/scripts/tuning_fork.pory"
	.string "HGSS Vs. Entei$"

EventScript_TuningFork_PokemonHGSS_Text_9:
# 397 "data/scripts/tuning_fork.pory"
	.string "HGSS Vs. Raikou$"

EventScript_TuningFork_PokemonHGSS_Text_10:
# 398 "data/scripts/tuning_fork.pory"
	.string "HGSS Vs. Kyogre/Groudon$"

EventScript_TuningFork_PokemonBW_Text_0:
# 443 "data/scripts/tuning_fork.pory"
	.string "BW Vs. Wild$"

EventScript_TuningFork_PokemonBW_Text_1:
# 444 "data/scripts/tuning_fork.pory"
	.string "BW Vs. Trainer$"

EventScript_TuningFork_PokemonBW_Text_2:
# 448 "data/scripts/tuning_fork.pory"
	.string "B2W2 Vs. Ghetsis$"

EventScript_TuningFork_PokemonOther_Text_0:
# 469 "data/scripts/tuning_fork.pory"
	.string "XD Vs. Cipher Peon$"

EventScript_TuningFork_PokemonOther_Text_1:
# 473 "data/scripts/tuning_fork.pory"
	.string "MD2 Vs. Dialga$"

EventScript_TuningFork_Other_Text_0:
# 492 "data/scripts/tuning_fork.pory"
	.string "FF4: Battle 2$"

EventScript_TuningFork_Other_Text_1:
# 496 "data/scripts/tuning_fork.pory"
	.string "KH1: Disappeared$"

EventScript_TuningFork_SetMusic_Text_0:
# 523 "data/scripts/tuning_fork.pory"
	.string "Music set!$"

TextChooseSong::
# 528 "data/scripts/tuning_fork.pory"
	.string "Choose song.$"
