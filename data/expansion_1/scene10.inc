IGB4_MoveCameraUp::
# 17 "data/expansion_1/scene10.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 50
	goto_if_eq IGB4_MoveCameraUp_1
# 25 "data/expansion_1/scene10.pory"
	setvar VAR_TEMP_2, 2
	return

IGB4_MoveCameraUp_1:
# 18 "data/expansion_1/scene10.pory"
	setvar VAR_TEMP_2, 1
# 19 "data/expansion_1/scene10.pory"
	special SpawnCameraObject
# 20 "data/expansion_1/scene10.pory"
	applymovement LOCALID_CAMERA, Common_Movement_WalkUp2
# 21 "data/expansion_1/scene10.pory"
	waitmovement 0
# 22 "data/expansion_1/scene10.pory"
	special RemoveCameraObject
	return


IGB4_MoveCameraDown::
# 30 "data/expansion_1/scene10.pory"
	special SpawnCameraObject
# 31 "data/expansion_1/scene10.pory"
	applymovement LOCALID_CAMERA, Common_Movement_WalkDown2
# 32 "data/expansion_1/scene10.pory"
	waitmovement 0
# 33 "data/expansion_1/scene10.pory"
	special RemoveCameraObject
# 34 "data/expansion_1/scene10.pory"
	setvar VAR_TEMP_2, 0
	return


Expansion1_Rival_Scene10::
# 39 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10_Text_0, MSGBOX_YESNO
# 41 "data/expansion_1/scene10.pory"
	closemessage
# 42 "data/expansion_1/scene10.pory"
	compare VAR_RESULT, YES
	goto_if_eq Expansion1_Rival_Scene10_1
# 46 "data/expansion_1/scene10.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 47 "data/expansion_1/scene10.pory"
	waitmovement 0
	return

Expansion1_Rival_Scene10_1:
# 43 "data/expansion_1/scene10.pory"
	goto Expansion1_Rival_Scene10b
	return


Expansion1_Rival_Scene10b::
# 52 "data/expansion_1/scene10.pory"
	applymovement 4, Common_Movement_WalkInPlaceFasterDown
# 53 "data/expansion_1/scene10.pory"
	waitmovement 0
# 54 "data/expansion_1/scene10.pory"
	speakername CommonText_Harper
# 55 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10b_Text_0, MSGBOX_AUTOCLOSE
# 58 "data/expansion_1/scene10.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 59 "data/expansion_1/scene10.pory"
	switch VAR_TEMP_0
# 60 "data/expansion_1/scene10.pory"
	case 23, Expansion1_Rival_Scene10b_3
# 62 "data/expansion_1/scene10.pory"
	case 24, Expansion1_Rival_Scene10b_4
# 64 "data/expansion_1/scene10.pory"
	case 26, Expansion1_Rival_Scene10b_5
# 66 "data/expansion_1/scene10.pory"
	case 27, Expansion1_Rival_Scene10b_6
# 68 "data/expansion_1/scene10.pory"
	case 28, Expansion1_Rival_Scene10b_7
# 70 "data/expansion_1/scene10.pory"
	case 29, Expansion1_Rival_Scene10b_8
Expansion1_Rival_Scene10b_1:
# 73 "data/expansion_1/scene10.pory"
	waitmovement 0
# 74 "data/expansion_1/scene10.pory"
	special SpawnCameraObject
# 75 "data/expansion_1/scene10.pory"
	applymovement 4, Common_Movement_WalkInPlaceFasterUp
# 76 "data/expansion_1/scene10.pory"
	applymovement LOCALID_CAMERA, Common_Movement_WalkDiagNE
# 77 "data/expansion_1/scene10.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp2
# 78 "data/expansion_1/scene10.pory"
	waitmovement 0
# 79 "data/expansion_1/scene10.pory"
	playbgm MUS_DP_CATASTROPHE, FALSE
# 80 "data/expansion_1/scene10.pory"
	speakername CommonText_Jakson
# 81 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10b_Text_1
# 83 "data/expansion_1/scene10.pory"
	speakername CommonText_Redd
# 84 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10b_Text_2, MSGBOX_AUTOCLOSE
# 87 "data/expansion_1/scene10.pory"
	applymovement 7, Common_Movement_WalkInPlaceFasterLeft
# 88 "data/expansion_1/scene10.pory"
	waitmovement 0
# 89 "data/expansion_1/scene10.pory"
	call GetBaronsName
# 90 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10b_Text_3
# 91 "data/expansion_1/scene10.pory"
	speakername CommonText_Sakura
# 92 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10b_Text_4, MSGBOX_AUTOCLOSE
# 95 "data/expansion_1/scene10.pory"
	applymovement 7, Common_Movement_WalkInPlaceFasterUp
# 96 "data/expansion_1/scene10.pory"
	waitmovement 0
# 97 "data/expansion_1/scene10.pory"
	playbgm MUS_B2W2_VS_GHETSIS, TRUE
# 98 "data/expansion_1/scene10.pory"
	applymovement 3, Common_Movement_ShakeHorizontal
# 99 "data/expansion_1/scene10.pory"
	playmoncry SPECIES_GYARADOS, CRY_MODE_ENCOUNTER
# 100 "data/expansion_1/scene10.pory"
	waitmoncry
# 103 "data/expansion_1/scene10.pory"
	setflag FLAG_DONT_TRANSITION_BATTLE_MUSIC
# 104 "data/expansion_1/scene10.pory"
	setflag FLAG_DONT_PLAY_VICTORY_MUSIC
# 105 "data/expansion_1/scene10.pory"
	setflag FLAG_NO_MONEY_LOSS_ON_DEFEAT
# 106 "data/expansion_1/scene10.pory"
	setflag FLAG_SINGLE_WILD_OPPONENT
# 107 "data/expansion_1/scene10.pory"
	settotemboost B_POSITION_OPPONENT_LEFT, 0, 1, 0, 0, 1
# 108 "data/expansion_1/scene10.pory"
	multi_2_vs_1 TRAINER_EXP_1_FINAL_BATTLE_1, Exp1_WildPokemonTrainerText_Defeat, PARTNER_FOLLOWER_HARPER_EXP_1_FINAL_BOSS
# 109 "data/expansion_1/scene10.pory"
	clearflag FLAG_SINGLE_WILD_OPPONENT
# 110 "data/expansion_1/scene10.pory"
	clearflag FLAG_DONT_TRANSITION_BATTLE_MUSIC
# 113 "data/expansion_1/scene10.pory"
	call GetBaronsName
# 114 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10b_Text_5
# 116 "data/expansion_1/scene10.pory"
	speakername CommonText_Harper
# 117 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10b_Text_6, MSGBOX_AUTOCLOSE
# 122 "data/expansion_1/scene10.pory"
	playmoncry SPECIES_GYARADOS, CRY_MODE_HIGH_PITCH
# 123 "data/expansion_1/scene10.pory"
	call WeatherScript_SetAndDo_Rain
# 124 "data/expansion_1/scene10.pory"
	delay 60
# 126 "data/expansion_1/scene10.pory"
	playmoncry SPECIES_LUCARIO, CRY_MODE_ENCOUNTER
# 127 "data/expansion_1/scene10.pory"
	waitmoncry
# 128 "data/expansion_1/scene10.pory"
	addobject 9
# 129 "data/expansion_1/scene10.pory"
	addobject 10
# 130 "data/expansion_1/scene10.pory"
	playse SE_PIN
# 131 "data/expansion_1/scene10.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 132 "data/expansion_1/scene10.pory"
	applymovement 4, Common_Movement_ExclamationMark
# 133 "data/expansion_1/scene10.pory"
	applymovement 9, Common_Movement_WalkUp
# 134 "data/expansion_1/scene10.pory"
	applymovement 10, Common_Movement_WalkUp
# 135 "data/expansion_1/scene10.pory"
	waitmovement 0
# 136 "data/expansion_1/scene10.pory"
	playse SE_LEDGE
# 137 "data/expansion_1/scene10.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 138 "data/expansion_1/scene10.pory"
	applymovement 4, Common_Movement_WalkInPlaceFasterDown
# 139 "data/expansion_1/scene10.pory"
	applymovement 9, Common_Movement_JumpUp
# 140 "data/expansion_1/scene10.pory"
	applymovement 10, Common_Movement_JumpUp
# 141 "data/expansion_1/scene10.pory"
	waitmovement 0
# 142 "data/expansion_1/scene10.pory"
	applymovement 9, Common_Movement_WalkUp2
# 143 "data/expansion_1/scene10.pory"
	applymovement 10, Common_Movement_WalkUp2
# 144 "data/expansion_1/scene10.pory"
	waitmovement 0
# 147 "data/expansion_1/scene10.pory"
	setflag FLAG_NO_MONEY_LOSS_ON_DEFEAT
# 148 "data/expansion_1/scene10.pory"
	setflag FLAG_WILD_OPPONENT
# 149 "data/expansion_1/scene10.pory"
	setflag FLAG_SYS_SET_BATTLE_BGM
# 150 "data/expansion_1/scene10.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 151 "data/expansion_1/scene10.pory"
	setvar VAR_BATTLE_BGM, MUS_XD_VS_CIPHER_PEON
# 152 "data/expansion_1/scene10.pory"
	setflag FLAG_DONT_PLAY_VICTORY_MUSIC
# 153 "data/expansion_1/scene10.pory"
	multi_2_vs_2 TRAINER_WILD_POKEMON_IG_5, Exp1_WildPokemonTrainerText_Defeat, TRAINER_WILD_POKEMON_IG_6, Exp1_WildPokemonTrainerText_Defeat, PARTNER_FOLLOWER_HARPER_EXP_1_FINAL_BOSS
# 154 "data/expansion_1/scene10.pory"
	clearflag FLAG_WILD_OPPONENT
# 155 "data/expansion_1/scene10.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 156 "data/expansion_1/scene10.pory"
	call WeatherScript_SetAndDo_None
# 157 "data/expansion_1/scene10.pory"
	delay 30
# 160 "data/expansion_1/scene10.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 161 "data/expansion_1/scene10.pory"
	applymovement 4, Common_Movement_WalkInPlaceFasterUp
# 162 "data/expansion_1/scene10.pory"
	waitmovement 0
# 163 "data/expansion_1/scene10.pory"
	speakername CommonText_Redd
# 164 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10b_Text_7
# 165 "data/expansion_1/scene10.pory"
	speakername CommonText_Sakura
# 166 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10b_Text_8, MSGBOX_AUTOCLOSE
# 170 "data/expansion_1/scene10.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterRight
# 171 "data/expansion_1/scene10.pory"
	waitmovement 0
# 172 "data/expansion_1/scene10.pory"
	speakername CommonText_Redd
# 173 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10b_Text_9
# 175 "data/expansion_1/scene10.pory"
	speakername CommonText_Jakson
# 176 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10b_Text_10, MSGBOX_AUTOCLOSE
# 178 "data/expansion_1/scene10.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterUp
# 179 "data/expansion_1/scene10.pory"
	waitmovement 0
# 180 "data/expansion_1/scene10.pory"
	speakername CommonText_Harper
# 181 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10b_Text_11
# 182 "data/expansion_1/scene10.pory"
	playmoncry SPECIES_GYARADOS, CRY_MODE_ENCOUNTER
# 183 "data/expansion_1/scene10.pory"
	waitmoncry
# 184 "data/expansion_1/scene10.pory"
	savebgm MUS_VICTORY_TRAINER
# 187 "data/expansion_1/scene10.pory"
	setstartingstatus STARTING_STATUS_RAINBOW_PLAYER
# 188 "data/expansion_1/scene10.pory"
	setflag FLAG_DONT_TRANSITION_BATTLE_MUSIC
# 189 "data/expansion_1/scene10.pory"
	setflag FLAG_NO_MONEY_LOSS_ON_DEFEAT
# 190 "data/expansion_1/scene10.pory"
	setflag FLAG_SINGLE_WILD_OPPONENT
# 191 "data/expansion_1/scene10.pory"
	settotemboost B_POSITION_OPPONENT_LEFT, 0, 1, 0, 0, 1
# 192 "data/expansion_1/scene10.pory"
	setflag FLAG_SYS_SET_BATTLE_BGM
# 193 "data/expansion_1/scene10.pory"
	setvar VAR_BATTLE_BGM, MUS_B2W2_VS_GHETSIS
# 194 "data/expansion_1/scene10.pory"
	multi_2_vs_1 TRAINER_EXP_1_FINAL_BATTLE_2, Exp1_WildPokemonTrainerText_Defeat, PARTNER_FOLLOWER_HARPER_EXP_1_FINAL_BOSS
# 195 "data/expansion_1/scene10.pory"
	clearflag FLAG_SINGLE_WILD_OPPONENT
# 196 "data/expansion_1/scene10.pory"
	clearflag FLAG_DONT_TRANSITION_BATTLE_MUSIC
# 199 "data/expansion_1/scene10.pory"
	speakername CommonText_Redd
# 200 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10b_Text_12
# 201 "data/expansion_1/scene10.pory"
	call GetBaronsName
# 202 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10b_Text_13, MSGBOX_AUTOCLOSE
# 204 "data/expansion_1/scene10.pory"
	speakername CommonText_Harper
# 205 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10b_Text_14
# 206 "data/expansion_1/scene10.pory"
	speakername CommonText_Jakson
# 207 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10b_Text_15
# 208 "data/expansion_1/scene10.pory"
	call GetBaronsName
# 209 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10b_Text_16
# 210 "data/expansion_1/scene10.pory"
	speakername CommonText_Sakura
# 211 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10b_Text_17
# 212 "data/expansion_1/scene10.pory"
	call GetBaronsName
# 213 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10b_Text_18
# 217 "data/expansion_1/scene10.pory"
	speakername CommonText_Redd
# 218 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10b_Text_19
# 219 "data/expansion_1/scene10.pory"
	call GetBaronsName
# 220 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10b_Text_20
# 221 "data/expansion_1/scene10.pory"
	speakername CommonText_Jakson
# 222 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10b_Text_21, MSGBOX_AUTOCLOSE
# 225 "data/expansion_1/scene10.pory"
	fadescreen FADE_TO_BLACK
# 226 "data/expansion_1/scene10.pory"
	warpcontinuescript MAP_MAUVE_CAMP, 16, 8, Expansion1_Rival_Scene10c
	return

Expansion1_Rival_Scene10b_3:
# 61 "data/expansion_1/scene10.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight2
	goto Expansion1_Rival_Scene10b_1

Expansion1_Rival_Scene10b_4:
# 63 "data/expansion_1/scene10.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight
	goto Expansion1_Rival_Scene10b_1

Expansion1_Rival_Scene10b_5:
# 65 "data/expansion_1/scene10.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkLeft
	goto Expansion1_Rival_Scene10b_1

Expansion1_Rival_Scene10b_6:
# 67 "data/expansion_1/scene10.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkLeft2
	goto Expansion1_Rival_Scene10b_1

Expansion1_Rival_Scene10b_7:
# 69 "data/expansion_1/scene10.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkLeft3
	goto Expansion1_Rival_Scene10b_1

Expansion1_Rival_Scene10b_8:
# 71 "data/expansion_1/scene10.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkLeft4
	goto Expansion1_Rival_Scene10b_1


Expansion1_Rival_Scene10c::
# 230 "data/expansion_1/scene10.pory"
	setobjectxyperm 6, 15, 10
# 231 "data/expansion_1/scene10.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_UP
# 232 "data/expansion_1/scene10.pory"
	setobjectxyperm 10, 17, 10
# 233 "data/expansion_1/scene10.pory"
	setobjectxyperm 7, 17, 8
# 234 "data/expansion_1/scene10.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_DOWN
# 235 "data/expansion_1/scene10.pory"
	setobjectxyperm 11, 16, 10
# 236 "data/expansion_1/scene10.pory"
	setobjectmovementtype 11, MOVEMENT_TYPE_FACE_UP
# 237 "data/expansion_1/scene10.pory"
	setobjectxyperm 8, 15, 8
# 238 "data/expansion_1/scene10.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_FACE_DOWN
# 239 "data/expansion_1/scene10.pory"
	addobject 7
# 240 "data/expansion_1/scene10.pory"
	addobject 11
# 241 "data/expansion_1/scene10.pory"
	addobject 8
# 242 "data/expansion_1/scene10.pory"
	addobject 6
# 243 "data/expansion_1/scene10.pory"
	addobject 10
# 244 "data/expansion_1/scene10.pory"
	fadescreen FADE_FROM_BLACK
# 246 "data/expansion_1/scene10.pory"
	speakername CommonText_Sakura
# 247 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10c_Text_0
# 250 "data/expansion_1/scene10.pory"
	speakername CommonText_Redd
# 251 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10c_Text_1
# 252 "data/expansion_1/scene10.pory"
	speakername CommonText_Jakson
# 253 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10c_Text_2
# 255 "data/expansion_1/scene10.pory"
	speakername CommonText_Redd
# 256 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10c_Text_3
# 258 "data/expansion_1/scene10.pory"
	speakername CommonText_Jakson
# 259 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10c_Text_4
# 261 "data/expansion_1/scene10.pory"
	speakername CommonText_Sakura
# 262 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10c_Text_5
# 265 "data/expansion_1/scene10.pory"
	call GetBaronsName
# 266 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10c_Text_6
# 268 "data/expansion_1/scene10.pory"
	speakername CommonText_Redd
# 269 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10c_Text_7
# 271 "data/expansion_1/scene10.pory"
	speakername CommonText_Harper
# 272 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10c_Text_8
# 276 "data/expansion_1/scene10.pory"
	speakername CommonText_Jakson
# 277 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10c_Text_9
# 285 "data/expansion_1/scene10.pory"
	speakername CommonText_Sakura
# 286 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10c_Text_10
# 288 "data/expansion_1/scene10.pory"
	speakername CommonText_Redd
# 289 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10c_Text_11
# 291 "data/expansion_1/scene10.pory"
	speakername CommonText_Sakura
# 292 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10c_Text_12
# 295 "data/expansion_1/scene10.pory"
	call GetBaronsName
# 296 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10c_Text_13
# 298 "data/expansion_1/scene10.pory"
	speakername CommonText_Redd
# 299 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10c_Text_14
# 302 "data/expansion_1/scene10.pory"
	speakername CommonText_Jakson
# 303 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10c_Text_15
# 304 "data/expansion_1/scene10.pory"
	speakername CommonText_Harper
# 305 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10c_Text_16
# 307 "data/expansion_1/scene10.pory"
	speakername CommonText_Jakson
# 308 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10c_Text_17
# 311 "data/expansion_1/scene10.pory"
	speakername CommonText_Redd
# 312 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10c_Text_18
# 314 "data/expansion_1/scene10.pory"
	speakername CommonText_Jakson
# 315 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10c_Text_19
# 318 "data/expansion_1/scene10.pory"
	call GetBaronsName
# 319 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10c_Text_20
# 321 "data/expansion_1/scene10.pory"
	speakername CommonText_Sakura
# 322 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10c_Text_21
# 325 "data/expansion_1/scene10.pory"
	speakername CommonText_Jakson
# 326 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10c_Text_22
# 330 "data/expansion_1/scene10.pory"
	speakername CommonText_Harper
# 331 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10c_Text_23, MSGBOX_AUTOCLOSE
# 333 "data/expansion_1/scene10.pory"
	speakername CommonText_Jakson
# 334 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10c_Text_24
# 335 "data/expansion_1/scene10.pory"
	speakername CommonText_Harper
# 336 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10c_Text_25, MSGBOX_AUTOCLOSE
# 339 "data/expansion_1/scene10.pory"
	call GetBaronsName
# 340 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10c_Text_26
# 342 "data/expansion_1/scene10.pory"
	speakername CommonText_Redd
# 343 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10c_Text_27
# 345 "data/expansion_1/scene10.pory"
	speakername CommonText_Sakura
# 346 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10c_Text_28, MSGBOX_AUTOCLOSE
# 348 "data/expansion_1/scene10.pory"
	speakername CommonText_Jakson
# 349 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10c_Text_29
	return


Expansion1_Rival_Scene10_Text_0:
# 39 "data/expansion_1/scene10.pory"
	.string "Are you prepared to face off\n"
	.string "against your final opponents?$"

Expansion1_Rival_Scene10b_Text_0:
# 55 "data/expansion_1/scene10.pory"
	.string "{PLAYER}!\n"
	.string "It looks like it worked in the end!\l"
	.string "Let's take this on together.$"

Expansion1_Rival_Scene10b_Text_1:
# 81 "data/expansion_1/scene10.pory"
	.string "Everyone, get ready! This'll be custom,\n"
	.string "so there's no telling how it will go!$"

Expansion1_Rival_Scene10b_Text_2:
# 84 "data/expansion_1/scene10.pory"
	.string "Hah… {PAUSE 100}with how everything else has\n"
	.string "gone? Custom mechanics sound like a\l"
	.string "perfectly chaotic climax.$"

Expansion1_Rival_Scene10b_Text_3:
# 90 "data/expansion_1/scene10.pory"
	.string "What?! {PAUSE 60}What do you mean ‘no telling’?!$"

Expansion1_Rival_Scene10b_Text_4:
# 92 "data/expansion_1/scene10.pory"
	.string "Baron, we can take it! Back to back.\n"
	.string "Allies that fight until the final\l"
	.string "breath!$"

Expansion1_Rival_Scene10b_Text_5:
# 114 "data/expansion_1/scene10.pory"
	.string "It-{PAUSE 30}It looks almost dead…{PAUSE 100}?\n"
	.string "Did we beat it?$"

Expansion1_Rival_Scene10b_Text_6:
# 117 "data/expansion_1/scene10.pory"
	.string "Tsk. This is when they're at their\n"
	.string "most dangerous.\p"
	.string "{EMOJI_BIGWHEEL}Clenches fist{EMOJI_BIGWHEEL}\n"
	.string "Down with you!$"

Expansion1_Rival_Scene10b_Text_7:
# 164 "data/expansion_1/scene10.pory"
	.string "Again? Jeez! This guy won't give up!$"

Expansion1_Rival_Scene10b_Text_8:
# 166 "data/expansion_1/scene10.pory"
	.string "HAHAHA!\n"
	.string "Live up to your name, {PAUSE 60}“Redd”!\l"
	.string "Let us BATHE IN THE BLOOD OF OUR\l"
	.string "ENEMIES!!!$"

Expansion1_Rival_Scene10b_Text_9:
# 173 "data/expansion_1/scene10.pory"
	.string "That's not-…{PAUSE 100}! F-{PAUSE 30}FINE!\n"
	.string "I can go another round!$"

Expansion1_Rival_Scene10b_Text_10:
# 176 "data/expansion_1/scene10.pory"
	.string "Everything comes in threes.\n"
	.string "This should be the last phase!$"

Expansion1_Rival_Scene10b_Text_11:
# 181 "data/expansion_1/scene10.pory"
	.string "One more time!$"

Expansion1_Rival_Scene10b_Text_12:
# 200 "data/expansion_1/scene10.pory"
	.string "Is that…{PAUSE 100}?!$"

Expansion1_Rival_Scene10b_Text_13:
# 202 "data/expansion_1/scene10.pory"
	.string "Did it… {PAUSE 100}Did it actually…{PAUSE 100}?$"

Expansion1_Rival_Scene10b_Text_14:
# 205 "data/expansion_1/scene10.pory"
	.string "Whew… {PAUSE 100}Looks like that's finally it!$"

Expansion1_Rival_Scene10b_Text_15:
# 207 "data/expansion_1/scene10.pory"
	.string "Yeah, I think we did it, guys!$"

Expansion1_Rival_Scene10b_Text_16:
# 209 "data/expansion_1/scene10.pory"
	.string "I… {PAUSE 100}I did! I did it$"

Expansion1_Rival_Scene10b_Text_17:
# 211 "data/expansion_1/scene10.pory"
	.string "We {PAUSE 30}ALL {PAUSE 60}did it, Baron{EMOJI_TILDE}{UNK_SPACER}$"

Expansion1_Rival_Scene10b_Text_18:
# 213 "data/expansion_1/scene10.pory"
	.string "We all… {PAUSE 100}Baron…{PAUSE 100}?\p"
	.string "…{PAUSE 60}uh, yeah, haha…\p"
	.string "You can really lose where you are in\n"
	.string "some of those moments, can't you?$"

Expansion1_Rival_Scene10b_Text_19:
# 218 "data/expansion_1/scene10.pory"
	.string "Mission accomplished?$"

Expansion1_Rival_Scene10b_Text_20:
# 220 "data/expansion_1/scene10.pory"
	.string "That was… {PAUSE 100}blood pumping…{PAUSE 100}!$"

Expansion1_Rival_Scene10b_Text_21:
# 222 "data/expansion_1/scene10.pory"
	.string "“Mission accomplished” seems right.\p"
	.string "Time for some fresh air?$"

Expansion1_Rival_Scene10c_Text_0:
# 247 "data/expansion_1/scene10.pory"
	.string "We did it!\p"
	.string "… {PAUSE 30}… {PAUSE 30}…\p"
	.string "Where's my treasure, Jakson?$"

Expansion1_Rival_Scene10c_Text_1:
# 251 "data/expansion_1/scene10.pory"
	.string "No one got any drops?$"

Expansion1_Rival_Scene10c_Text_2:
# 253 "data/expansion_1/scene10.pory"
	.string "That's the question of the hour,\n"
	.string "isn't it?$"

Expansion1_Rival_Scene10c_Text_3:
# 256 "data/expansion_1/scene10.pory"
	.string "What, so our gamemaster doesn't know\n"
	.string "either?$"

Expansion1_Rival_Scene10c_Text_4:
# 259 "data/expansion_1/scene10.pory"
	.string "Well… {PAUSE 100}it's possible that there was never\n"
	.string "a real treasure, right?$"

Expansion1_Rival_Scene10c_Text_5:
# 262 "data/expansion_1/scene10.pory"
	.string "So you set the stage for our grand\n"
	.string "treasure hunt without knowing if\l"
	.string "there was a treasure to be had?$"

Expansion1_Rival_Scene10c_Text_6:
# 266 "data/expansion_1/scene10.pory"
	.string "Aww… {PAUSE 100}I was really looking forward to\n"
	.string "some healing items.$"

Expansion1_Rival_Scene10c_Text_7:
# 269 "data/expansion_1/scene10.pory"
	.string "Baron, you know that…\p"
	.string "Never mind.$"

Expansion1_Rival_Scene10c_Text_8:
# 272 "data/expansion_1/scene10.pory"
	.string "Jakson, you think the logic for the\n"
	.string "reward being dropped also got\l"
	.string "compromised?\p"
	.string "That would explain it, if true.$"

Expansion1_Rival_Scene10c_Text_9:
# 277 "data/expansion_1/scene10.pory"
	.string "We could look into the code behind this\n"
	.string "all to see if there was something there.\p"
	.string "But… {PAUSE 100}I guess it's hard to know if it\n"
	.string "was a weird bug or general messiness\l"
	.string "of the mod's creators…\l"
	.string "I…\l"
	.string "Argh…\l"
	.string "I can just spawn in a reward.$"

Expansion1_Rival_Scene10c_Text_10:
# 286 "data/expansion_1/scene10.pory"
	.string "I sense a thief! The scallywags must've\n"
	.string "took our plunder for themselves.$"

Expansion1_Rival_Scene10c_Text_11:
# 289 "data/expansion_1/scene10.pory"
	.string "No, I'm pretty sure that's the end of\n"
	.string "the mod's story.$"

Expansion1_Rival_Scene10c_Text_12:
# 292 "data/expansion_1/scene10.pory"
	.string "Darn. And if they're already gone it'll\n"
	.string "be too late for my Sakura Senses to\n"
	.string "pick them up.$"

Expansion1_Rival_Scene10c_Text_13:
# 296 "data/expansion_1/scene10.pory"
	.string "{EMOJI_BIGWHEEL}Sigh{EMOJI_BIGWHEEL} It's such an unfortunate\n"
	.string "limitation to the Sakura Senses.$"

Expansion1_Rival_Scene10c_Text_14:
# 299 "data/expansion_1/scene10.pory"
	.string "Jakson, I think she's asking for the\n"
	.string "reward to be spawned for each one of\l"
	.string "us.$"

Expansion1_Rival_Scene10c_Text_15:
# 303 "data/expansion_1/scene10.pory"
	.string "{EMOJI_BIGWHEEL}Sigh{EMOJI_BIGWHEEL}…$"

Expansion1_Rival_Scene10c_Text_16:
# 305 "data/expansion_1/scene10.pory"
	.string "…{PAUSE 100}Well, anyway. I agree that it seems\n"
	.string "like we've hit the ending.$"

Expansion1_Rival_Scene10c_Text_17:
# 308 "data/expansion_1/scene10.pory"
	.string "I can check again, but I believe we've\n"
	.string "concluded with that ‘main story’ part of\l"
	.string "this little expansion.$"

Expansion1_Rival_Scene10c_Text_18:
# 312 "data/expansion_1/scene10.pory"
	.string "Anything else? Do you think I could get\n"
	.string "one of those ‘Calamity Maw’ for myself?$"

Expansion1_Rival_Scene10c_Text_19:
# 315 "data/expansion_1/scene10.pory"
	.string "I think so. Pretty sure that was the\n"
	.string "Paradox Pokémon naming scheme.\l"
	.string "And if not I'll make it so you can.$"

Expansion1_Rival_Scene10c_Text_20:
# 319 "data/expansion_1/scene10.pory"
	.string "It certainly wasn't the only new…{PAUSE 100}\n"
	.string "Pokémon… {PAUSE 100}that I saw. I wonder…$"

Expansion1_Rival_Scene10c_Text_21:
# 322 "data/expansion_1/scene10.pory"
	.string "Gotta prepare for the next expansion\n"
	.string "pack, right? Catch 'em all. All the cute\l"
	.string "and cool ones, at least.$"

Expansion1_Rival_Scene10c_Text_22:
# 326 "data/expansion_1/scene10.pory"
	.string "Yeah… {PAUSE 100}I'll keep working on that idea\n"
	.string "I had. And…\l"
	.string "And I'll not rush anything just because\l"
	.string "I'm taking forever myself.$"

Expansion1_Rival_Scene10c_Text_23:
# 331 "data/expansion_1/scene10.pory"
	.string "Pfft. Fine, I'll fix your gaffs.$"

Expansion1_Rival_Scene10c_Text_24:
# 334 "data/expansion_1/scene10.pory"
	.string "I… {PAUSE 100}didn't…$"

Expansion1_Rival_Scene10c_Text_25:
# 336 "data/expansion_1/scene10.pory"
	.string "So there were a couple of mods I saw\n"
	.string "online that…$"

Expansion1_Rival_Scene10c_Text_26:
# 340 "data/expansion_1/scene10.pory"
	.string "Was… {PAUSE 100}Harper always this into this\n"
	.string "topic?$"

Expansion1_Rival_Scene10c_Text_27:
# 343 "data/expansion_1/scene10.pory"
	.string "Maybe she just likes things feeling\n"
	.string "neat and tidy?$"

Expansion1_Rival_Scene10c_Text_28:
# 346 "data/expansion_1/scene10.pory"
	.string "Or maybe those two are fucking?$"

Expansion1_Rival_Scene10c_Text_29:
# 349 "data/expansion_1/scene10.pory"
	.string "Sakura… {PAUSE 100}We're still here.$"
