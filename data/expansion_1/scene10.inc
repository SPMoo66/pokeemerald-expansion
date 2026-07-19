IGB4_MoveCameraUp::
# 18 "data/expansion_1/scene10.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 50
	goto_if_eq IGB4_MoveCameraUp_1
# 26 "data/expansion_1/scene10.pory"
	setvar VAR_TEMP_2, 2
	return

IGB4_MoveCameraUp_1:
# 19 "data/expansion_1/scene10.pory"
	setvar VAR_TEMP_2, 1
# 20 "data/expansion_1/scene10.pory"
	special SpawnCameraObject
# 21 "data/expansion_1/scene10.pory"
	applymovement LOCALID_CAMERA, Common_Movement_WalkUp2
# 22 "data/expansion_1/scene10.pory"
	waitmovement 0
# 23 "data/expansion_1/scene10.pory"
	special RemoveCameraObject
	return


IGB4_MoveCameraDown::
# 31 "data/expansion_1/scene10.pory"
	special SpawnCameraObject
# 32 "data/expansion_1/scene10.pory"
	applymovement LOCALID_CAMERA, Common_Movement_WalkDown2
# 33 "data/expansion_1/scene10.pory"
	waitmovement 0
# 34 "data/expansion_1/scene10.pory"
	special RemoveCameraObject
# 35 "data/expansion_1/scene10.pory"
	setvar VAR_TEMP_2, 0
	return


Expansion1_Rival_Scene10::
# 40 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10_Text_0, MSGBOX_YESNO
# 42 "data/expansion_1/scene10.pory"
	closemessage
# 43 "data/expansion_1/scene10.pory"
	compare VAR_RESULT, YES
	goto_if_eq Expansion1_Rival_Scene10_1
# 47 "data/expansion_1/scene10.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 48 "data/expansion_1/scene10.pory"
	waitmovement 0
	return

Expansion1_Rival_Scene10_1:
# 44 "data/expansion_1/scene10.pory"
	goto Expansion1_Rival_Scene10b
	return


Expansion1_Rival_Scene10b::
# 53 "data/expansion_1/scene10.pory"
	applymovement 4, Common_Movement_WalkInPlaceFasterDown
# 54 "data/expansion_1/scene10.pory"
	waitmovement 0
# 55 "data/expansion_1/scene10.pory"
	speakername CommonText_Harper
# 56 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10b_Text_0, MSGBOX_AUTOCLOSE
# 59 "data/expansion_1/scene10.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 60 "data/expansion_1/scene10.pory"
	switch VAR_TEMP_0
# 61 "data/expansion_1/scene10.pory"
	case 23, Expansion1_Rival_Scene10b_3
# 63 "data/expansion_1/scene10.pory"
	case 24, Expansion1_Rival_Scene10b_4
# 65 "data/expansion_1/scene10.pory"
	case 26, Expansion1_Rival_Scene10b_5
# 67 "data/expansion_1/scene10.pory"
	case 27, Expansion1_Rival_Scene10b_6
# 69 "data/expansion_1/scene10.pory"
	case 28, Expansion1_Rival_Scene10b_7
# 71 "data/expansion_1/scene10.pory"
	case 29, Expansion1_Rival_Scene10b_8
Expansion1_Rival_Scene10b_1:
# 74 "data/expansion_1/scene10.pory"
	waitmovement 0
# 75 "data/expansion_1/scene10.pory"
	special SpawnCameraObject
# 76 "data/expansion_1/scene10.pory"
	applymovement 4, Common_Movement_WalkInPlaceFasterUp
# 77 "data/expansion_1/scene10.pory"
	applymovement LOCALID_CAMERA, Common_Movement_WalkDiagNE
# 78 "data/expansion_1/scene10.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp2
# 79 "data/expansion_1/scene10.pory"
	waitmovement 0
# 80 "data/expansion_1/scene10.pory"
	playbgm MUS_DP_CATASTROPHE, FALSE
# 81 "data/expansion_1/scene10.pory"
	speakername CommonText_Jakson
# 82 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10b_Text_1
# 84 "data/expansion_1/scene10.pory"
	speakername CommonText_Redd
# 85 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10b_Text_2, MSGBOX_AUTOCLOSE
# 88 "data/expansion_1/scene10.pory"
	applymovement 7, Common_Movement_WalkInPlaceFasterLeft
# 89 "data/expansion_1/scene10.pory"
	waitmovement 0
# 90 "data/expansion_1/scene10.pory"
	call GetBaronsName
# 91 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10b_Text_3
# 92 "data/expansion_1/scene10.pory"
	speakername CommonText_Sakura
# 93 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10b_Text_4, MSGBOX_AUTOCLOSE
# 96 "data/expansion_1/scene10.pory"
	applymovement 7, Common_Movement_WalkInPlaceFasterUp
# 97 "data/expansion_1/scene10.pory"
	waitmovement 0
# 98 "data/expansion_1/scene10.pory"
	playbgm MUS_B2W2_VS_GHETSIS, TRUE
# 99 "data/expansion_1/scene10.pory"
	applymovement 3, Common_Movement_ShakeHorizontal
# 100 "data/expansion_1/scene10.pory"
	playmoncry SPECIES_GYARADOS, CRY_MODE_ENCOUNTER
# 101 "data/expansion_1/scene10.pory"
	waitmoncry
# 104 "data/expansion_1/scene10.pory"
	setflag FLAG_DONT_TRANSITION_BATTLE_MUSIC
# 105 "data/expansion_1/scene10.pory"
	setflag FLAG_DONT_PLAY_VICTORY_MUSIC
# 106 "data/expansion_1/scene10.pory"
	setflag FLAG_NO_MONEY_LOSS_ON_DEFEAT
# 107 "data/expansion_1/scene10.pory"
	setflag FLAG_SINGLE_WILD_OPPONENT
# 108 "data/expansion_1/scene10.pory"
	settotemboost B_POSITION_OPPONENT_LEFT, 0, 1, 0, 0, 1
# 109 "data/expansion_1/scene10.pory"
	multi_2_vs_1 TRAINER_EXP_1_FINAL_BATTLE_1, Exp1_WildPokemonTrainerText_Defeat, PARTNER_FOLLOWER_HARPER_EXP_1_FINAL_BOSS
# 110 "data/expansion_1/scene10.pory"
	clearflag FLAG_SINGLE_WILD_OPPONENT
# 111 "data/expansion_1/scene10.pory"
	clearflag FLAG_DONT_TRANSITION_BATTLE_MUSIC
# 114 "data/expansion_1/scene10.pory"
	call GetBaronsName
# 115 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10b_Text_5
# 117 "data/expansion_1/scene10.pory"
	speakername CommonText_Harper
# 118 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10b_Text_6, MSGBOX_AUTOCLOSE
# 123 "data/expansion_1/scene10.pory"
	playmoncry SPECIES_GYARADOS, CRY_MODE_HIGH_PITCH
# 124 "data/expansion_1/scene10.pory"
	call WeatherScript_SetAndDo_Rain
# 125 "data/expansion_1/scene10.pory"
	delay 60
# 127 "data/expansion_1/scene10.pory"
	playmoncry SPECIES_LUCARIO, CRY_MODE_ENCOUNTER
# 128 "data/expansion_1/scene10.pory"
	waitmoncry
# 129 "data/expansion_1/scene10.pory"
	addobject 9
# 130 "data/expansion_1/scene10.pory"
	addobject 10
# 131 "data/expansion_1/scene10.pory"
	playse SE_PIN
# 132 "data/expansion_1/scene10.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 133 "data/expansion_1/scene10.pory"
	applymovement 4, Common_Movement_ExclamationMark
# 134 "data/expansion_1/scene10.pory"
	applymovement 9, Common_Movement_WalkUp
# 135 "data/expansion_1/scene10.pory"
	applymovement 10, Common_Movement_WalkUp
# 136 "data/expansion_1/scene10.pory"
	waitmovement 0
# 137 "data/expansion_1/scene10.pory"
	playse SE_LEDGE
# 138 "data/expansion_1/scene10.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 139 "data/expansion_1/scene10.pory"
	applymovement 4, Common_Movement_WalkInPlaceFasterDown
# 140 "data/expansion_1/scene10.pory"
	applymovement 9, Common_Movement_JumpUp
# 141 "data/expansion_1/scene10.pory"
	applymovement 10, Common_Movement_JumpUp
# 142 "data/expansion_1/scene10.pory"
	waitmovement 0
# 143 "data/expansion_1/scene10.pory"
	applymovement 9, Common_Movement_WalkUp2
# 144 "data/expansion_1/scene10.pory"
	applymovement 10, Common_Movement_WalkUp2
# 145 "data/expansion_1/scene10.pory"
	waitmovement 0
# 148 "data/expansion_1/scene10.pory"
	setflag FLAG_NO_MONEY_LOSS_ON_DEFEAT
# 149 "data/expansion_1/scene10.pory"
	setflag FLAG_WILD_OPPONENT
# 150 "data/expansion_1/scene10.pory"
	setflag FLAG_SYS_SET_BATTLE_BGM
# 151 "data/expansion_1/scene10.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 152 "data/expansion_1/scene10.pory"
	setvar VAR_BATTLE_BGM, MUS_XD_VS_CIPHER_PEON
# 153 "data/expansion_1/scene10.pory"
	setflag FLAG_DONT_PLAY_VICTORY_MUSIC
# 154 "data/expansion_1/scene10.pory"
	multi_2_vs_2 TRAINER_WILD_POKEMON_IG_5, Exp1_WildPokemonTrainerText_Defeat, TRAINER_WILD_POKEMON_IG_6, Exp1_WildPokemonTrainerText_Defeat, PARTNER_FOLLOWER_HARPER_EXP_1_FINAL_BOSS
# 155 "data/expansion_1/scene10.pory"
	clearflag FLAG_WILD_OPPONENT
# 156 "data/expansion_1/scene10.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 157 "data/expansion_1/scene10.pory"
	call WeatherScript_SetAndDo_None
# 158 "data/expansion_1/scene10.pory"
	delay 30
# 161 "data/expansion_1/scene10.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 162 "data/expansion_1/scene10.pory"
	applymovement 4, Common_Movement_WalkInPlaceFasterUp
# 163 "data/expansion_1/scene10.pory"
	waitmovement 0
# 164 "data/expansion_1/scene10.pory"
	speakername CommonText_Redd
# 165 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10b_Text_7
# 166 "data/expansion_1/scene10.pory"
	speakername CommonText_Sakura
# 167 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10b_Text_8, MSGBOX_AUTOCLOSE
# 171 "data/expansion_1/scene10.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterRight
# 172 "data/expansion_1/scene10.pory"
	waitmovement 0
# 173 "data/expansion_1/scene10.pory"
	speakername CommonText_Redd
# 174 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10b_Text_9
# 176 "data/expansion_1/scene10.pory"
	speakername CommonText_Jakson
# 177 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10b_Text_10, MSGBOX_AUTOCLOSE
# 179 "data/expansion_1/scene10.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterUp
# 180 "data/expansion_1/scene10.pory"
	waitmovement 0
# 181 "data/expansion_1/scene10.pory"
	speakername CommonText_Harper
# 182 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10b_Text_11
# 183 "data/expansion_1/scene10.pory"
	playmoncry SPECIES_GYARADOS, CRY_MODE_ENCOUNTER
# 184 "data/expansion_1/scene10.pory"
	waitmoncry
# 185 "data/expansion_1/scene10.pory"
	savebgm MUS_NONE
# 188 "data/expansion_1/scene10.pory"
	setstartingstatus STARTING_STATUS_RAINBOW_PLAYER
# 189 "data/expansion_1/scene10.pory"
	setflag FLAG_DONT_TRANSITION_BATTLE_MUSIC
# 190 "data/expansion_1/scene10.pory"
	setflag FLAG_NO_MONEY_LOSS_ON_DEFEAT
# 191 "data/expansion_1/scene10.pory"
	setflag FLAG_SINGLE_WILD_OPPONENT
# 192 "data/expansion_1/scene10.pory"
	setflag FLAG_DONT_PLAY_VICTORY_MUSIC
# 193 "data/expansion_1/scene10.pory"
	settotemboost B_POSITION_OPPONENT_LEFT, 0, 1, 0, 0, 1
# 194 "data/expansion_1/scene10.pory"
	setflag FLAG_SYS_SET_BATTLE_BGM
# 195 "data/expansion_1/scene10.pory"
	setvar VAR_BATTLE_BGM, MUS_B2W2_VS_GHETSIS
# 196 "data/expansion_1/scene10.pory"
	multi_2_vs_1 TRAINER_EXP_1_FINAL_BATTLE_2, Exp1_WildPokemonTrainerText_Defeat, PARTNER_FOLLOWER_HARPER_EXP_1_FINAL_BOSS
# 197 "data/expansion_1/scene10.pory"
	clearflag FLAG_SINGLE_WILD_OPPONENT
# 198 "data/expansion_1/scene10.pory"
	clearflag FLAG_DONT_TRANSITION_BATTLE_MUSIC
# 200 "data/expansion_1/scene10.pory"
	setvar VAR_0x8004, 2
# 201 "data/expansion_1/scene10.pory"
	setvar VAR_0x8005, 6
# 202 "data/expansion_1/scene10.pory"
	setvar VAR_0x8006, 20
# 203 "data/expansion_1/scene10.pory"
	setvar VAR_0x8007, 3
# 204 "data/expansion_1/scene10.pory"
	special ShakeCamera
# 205 "data/expansion_1/scene10.pory"
	delay 50
# 206 "data/expansion_1/scene10.pory"
	playmoncry SPECIES_GYARADOS, CRY_MODE_FAINT
# 207 "data/expansion_1/scene10.pory"
	mosaicmorph 3, OBJ_EVENT_GFX_NONE
# 208 "data/expansion_1/scene10.pory"
	delay 80
# 209 "data/expansion_1/scene10.pory"
	removeobject 3
# 211 "data/expansion_1/scene10.pory"
	speakername CommonText_Redd
# 212 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10b_Text_12
# 213 "data/expansion_1/scene10.pory"
	call GetBaronsName
# 214 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10b_Text_13, MSGBOX_AUTOCLOSE
# 216 "data/expansion_1/scene10.pory"
	playbgm MUS_PL_VICTORY_FRONTIER_BRAIN, FALSE
# 217 "data/expansion_1/scene10.pory"
	speakername CommonText_Harper
# 218 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10b_Text_14
# 219 "data/expansion_1/scene10.pory"
	speakername CommonText_Jakson
# 220 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10b_Text_15
# 221 "data/expansion_1/scene10.pory"
	call GetBaronsName
# 222 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10b_Text_16
# 223 "data/expansion_1/scene10.pory"
	speakername CommonText_Sakura
# 224 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10b_Text_17, MSGBOX_AUTOCLOSE
# 225 "data/expansion_1/scene10.pory"
	applymovement 7, Common_Movement_WalkInPlaceFasterLeft
# 226 "data/expansion_1/scene10.pory"
	waitmovement 0
# 227 "data/expansion_1/scene10.pory"
	call GetBaronsName
# 228 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10b_Text_18
# 232 "data/expansion_1/scene10.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterRight
# 233 "data/expansion_1/scene10.pory"
	waitmovement 0
# 234 "data/expansion_1/scene10.pory"
	speakername CommonText_Redd
# 235 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10b_Text_19
# 236 "data/expansion_1/scene10.pory"
	call GetBaronsName
# 237 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10b_Text_20
# 238 "data/expansion_1/scene10.pory"
	applymovement 5, Common_Movement_WalkInPlaceFasterRight
# 239 "data/expansion_1/scene10.pory"
	waitmovement 0
# 240 "data/expansion_1/scene10.pory"
	speakername CommonText_Jakson
# 241 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10b_Text_21, MSGBOX_AUTOCLOSE
# 243 "data/expansion_1/scene10.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 244 "data/expansion_1/scene10.pory"
	setflag FLAG_SCENE10_TRANSITION
# 245 "data/expansion_1/scene10.pory"
	fadescreen FADE_TO_BLACK
# 246 "data/expansion_1/scene10.pory"
	warpcontinuescript MAP_MAUVE_CAMP, 16, 8, Expansion1_Rival_Scene10c
	return

Expansion1_Rival_Scene10b_3:
# 62 "data/expansion_1/scene10.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight2
	goto Expansion1_Rival_Scene10b_1

Expansion1_Rival_Scene10b_4:
# 64 "data/expansion_1/scene10.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight
	goto Expansion1_Rival_Scene10b_1

Expansion1_Rival_Scene10b_5:
# 66 "data/expansion_1/scene10.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkLeft
	goto Expansion1_Rival_Scene10b_1

Expansion1_Rival_Scene10b_6:
# 68 "data/expansion_1/scene10.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkLeft2
	goto Expansion1_Rival_Scene10b_1

Expansion1_Rival_Scene10b_7:
# 70 "data/expansion_1/scene10.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkLeft3
	goto Expansion1_Rival_Scene10b_1

Expansion1_Rival_Scene10b_8:
# 72 "data/expansion_1/scene10.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkLeft4
	goto Expansion1_Rival_Scene10b_1


Expansion1_Rival_Scene10c::
# 250 "data/expansion_1/scene10.pory"
	setobjectxyperm 6, 15, 10
# 251 "data/expansion_1/scene10.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_UP
# 252 "data/expansion_1/scene10.pory"
	setobjectxyperm 10, 17, 10
# 253 "data/expansion_1/scene10.pory"
	setobjectxyperm 7, 17, 8
# 254 "data/expansion_1/scene10.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_DOWN
# 255 "data/expansion_1/scene10.pory"
	setobjectxyperm 11, 16, 10
# 256 "data/expansion_1/scene10.pory"
	setobjectmovementtype 11, MOVEMENT_TYPE_FACE_UP
# 257 "data/expansion_1/scene10.pory"
	setobjectxyperm 8, 15, 8
# 258 "data/expansion_1/scene10.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_FACE_DOWN
# 259 "data/expansion_1/scene10.pory"
	addobject 7
# 260 "data/expansion_1/scene10.pory"
	addobject 11
# 261 "data/expansion_1/scene10.pory"
	addobject 8
# 262 "data/expansion_1/scene10.pory"
	addobject 6
# 263 "data/expansion_1/scene10.pory"
	addobject 10
# 264 "data/expansion_1/scene10.pory"
	fadescreen FADE_FROM_BLACK
# 265 "data/expansion_1/scene10.pory"
	special SpawnCameraObject
# 266 "data/expansion_1/scene10.pory"
	delay 40
# 267 "data/expansion_1/scene10.pory"
	applymovement LOCALID_CAMERA, Common_Movement_WalkDown
# 268 "data/expansion_1/scene10.pory"
	waitmovement 0
# 269 "data/expansion_1/scene10.pory"
	delay 20
# 270 "data/expansion_1/scene10.pory"
	applymovement MAUVEISLANDWEST_SAKURA, Common_Movement_MusicNote
# 271 "data/expansion_1/scene10.pory"
	playse SE_RG_HELP_OPEN
# 272 "data/expansion_1/scene10.pory"
	delay 60
# 273 "data/expansion_1/scene10.pory"
	speakername CommonText_Sakura
# 274 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10c_Text_0
# 277 "data/expansion_1/scene10.pory"
	speakername CommonText_Redd
# 278 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10c_Text_1
# 279 "data/expansion_1/scene10.pory"
	speakername CommonText_Jakson
# 280 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10c_Text_2, MSGBOX_AUTOCLOSE
# 282 "data/expansion_1/scene10.pory"
	applymovement 10, Common_Movement_WalkInPlaceFasterLeft
# 283 "data/expansion_1/scene10.pory"
	waitmovement 0
# 284 "data/expansion_1/scene10.pory"
	speakername CommonText_Redd
# 285 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10c_Text_3
# 287 "data/expansion_1/scene10.pory"
	speakername CommonText_Jakson
# 288 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10c_Text_4
# 290 "data/expansion_1/scene10.pory"
	speakername CommonText_Sakura
# 291 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10c_Text_5
# 294 "data/expansion_1/scene10.pory"
	call GetBaronsName
# 295 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10c_Text_6, MSGBOX_AUTOCLOSE
# 297 "data/expansion_1/scene10.pory"
	applymovement 10, Common_Movement_WalkInPlaceFasterUp
# 298 "data/expansion_1/scene10.pory"
	waitmovement 0
# 299 "data/expansion_1/scene10.pory"
	speakername CommonText_Redd
# 300 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10c_Text_7, MSGBOX_AUTOCLOSE
# 301 "data/expansion_1/scene10.pory"
	applymovement 10, Common_Movement_Thinking
# 302 "data/expansion_1/scene10.pory"
	delay 60
# 303 "data/expansion_1/scene10.pory"
	speakername CommonText_Redd
# 304 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10c_Text_8, MSGBOX_AUTOCLOSE
# 305 "data/expansion_1/scene10.pory"
	applymovement 11, Common_Movement_WalkInPlaceFasterLeft
# 306 "data/expansion_1/scene10.pory"
	waitmovement 0
# 307 "data/expansion_1/scene10.pory"
	speakername CommonText_Harper
# 308 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10c_Text_9, MSGBOX_AUTOCLOSE
# 312 "data/expansion_1/scene10.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterRight
# 313 "data/expansion_1/scene10.pory"
	waitmovement 0
# 314 "data/expansion_1/scene10.pory"
	speakername CommonText_Jakson
# 315 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10c_Text_10
# 323 "data/expansion_1/scene10.pory"
	speakername CommonText_Sakura
# 324 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10c_Text_11
# 326 "data/expansion_1/scene10.pory"
	speakername CommonText_Redd
# 327 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10c_Text_12
# 329 "data/expansion_1/scene10.pory"
	speakername CommonText_Sakura
# 330 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10c_Text_13
# 333 "data/expansion_1/scene10.pory"
	call GetBaronsName
# 334 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10c_Text_14, MSGBOX_AUTOCLOSE
# 336 "data/expansion_1/scene10.pory"
	applymovement 10, Common_Movement_WalkInPlaceFasterLeft
# 337 "data/expansion_1/scene10.pory"
	waitmovement 0
# 338 "data/expansion_1/scene10.pory"
	speakername CommonText_Redd
# 339 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10c_Text_15
# 342 "data/expansion_1/scene10.pory"
	speakername CommonText_Jakson
# 343 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10c_Text_16, MSGBOX_AUTOCLOSE
# 344 "data/expansion_1/scene10.pory"
	applymovement 11, Common_Movement_WalkInPlaceFasterUp
# 345 "data/expansion_1/scene10.pory"
	waitmovement 0
# 346 "data/expansion_1/scene10.pory"
	speakername CommonText_Harper
# 347 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10c_Text_17, MSGBOX_AUTOCLOSE
# 349 "data/expansion_1/scene10.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterUp
# 350 "data/expansion_1/scene10.pory"
	waitmovement 0
# 351 "data/expansion_1/scene10.pory"
	speakername CommonText_Jakson
# 352 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10c_Text_18
# 355 "data/expansion_1/scene10.pory"
	speakername CommonText_Redd
# 356 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10c_Text_19, MSGBOX_AUTOCLOSE
# 358 "data/expansion_1/scene10.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterRight
# 359 "data/expansion_1/scene10.pory"
	waitmovement 0
# 360 "data/expansion_1/scene10.pory"
	speakername CommonText_Jakson
# 361 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10c_Text_20
# 364 "data/expansion_1/scene10.pory"
	call GetBaronsName
# 365 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10c_Text_21
# 367 "data/expansion_1/scene10.pory"
	speakername CommonText_Sakura
# 368 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10c_Text_22, MSGBOX_AUTOCLOSE
# 371 "data/expansion_1/scene10.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterUp
# 372 "data/expansion_1/scene10.pory"
	waitmovement 0
# 373 "data/expansion_1/scene10.pory"
	speakername CommonText_Jakson
# 374 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10c_Text_23, MSGBOX_AUTOCLOSE
# 378 "data/expansion_1/scene10.pory"
	applymovement 11, Common_Movement_WalkInPlaceFasterLeft
# 379 "data/expansion_1/scene10.pory"
	waitmovement 0
# 380 "data/expansion_1/scene10.pory"
	speakername CommonText_Harper
# 381 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10c_Text_24, MSGBOX_AUTOCLOSE
# 382 "data/expansion_1/scene10.pory"
	applymovement 6, Common_Movement_SweatDrop
# 383 "data/expansion_1/scene10.pory"
	playse SE_M_METRONOME
# 384 "data/expansion_1/scene10.pory"
	delay 60
# 385 "data/expansion_1/scene10.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterRight
# 386 "data/expansion_1/scene10.pory"
	waitmovement 0
# 387 "data/expansion_1/scene10.pory"
	speakername CommonText_Jakson
# 388 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10c_Text_25
# 389 "data/expansion_1/scene10.pory"
	speakername CommonText_Harper
# 390 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10c_Text_26, MSGBOX_AUTOCLOSE
# 392 "data/expansion_1/scene10.pory"
	applymovement 11, Common_Movement_Talking
# 393 "data/expansion_1/scene10.pory"
	delay 100
# 394 "data/expansion_1/scene10.pory"
	applymovement 6, Common_Movement_Talking
# 395 "data/expansion_1/scene10.pory"
	delay 80
# 396 "data/expansion_1/scene10.pory"
	applymovement 7, Common_Movement_Thinking
# 397 "data/expansion_1/scene10.pory"
	delay 60
# 398 "data/expansion_1/scene10.pory"
	call GetBaronsName
# 399 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10c_Text_27, MSGBOX_AUTOCLOSE
# 401 "data/expansion_1/scene10.pory"
	applymovement 10, Common_Movement_WalkInPlaceFasterUp
# 402 "data/expansion_1/scene10.pory"
	waitmovement 0
# 403 "data/expansion_1/scene10.pory"
	speakername CommonText_Redd
# 404 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10c_Text_28
# 406 "data/expansion_1/scene10.pory"
	speakername CommonText_Sakura
# 407 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10c_Text_29, MSGBOX_AUTOCLOSE
# 408 "data/expansion_1/scene10.pory"
	playse SE_PIN
# 409 "data/expansion_1/scene10.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 410 "data/expansion_1/scene10.pory"
	delay 60
# 411 "data/expansion_1/scene10.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterUp
# 412 "data/expansion_1/scene10.pory"
	applymovement 11, Common_Movement_WalkInPlaceFasterUp
# 413 "data/expansion_1/scene10.pory"
	waitmovement 0
# 414 "data/expansion_1/scene10.pory"
	speakername CommonText_Jakson
# 415 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10c_Text_30
# 416 "data/expansion_1/scene10.pory"
	speakername CommonText_Sakura
# 417 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10c_Text_31
# 418 "data/expansion_1/scene10.pory"
	speakername CommonText_Harper
# 419 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10c_Text_32, MSGBOX_AUTOCLOSE
# 421 "data/expansion_1/scene10.pory"
	playse SE_PIN
# 422 "data/expansion_1/scene10.pory"
	applymovement 7, Common_Movement_DoubleExclamationMark
# 423 "data/expansion_1/scene10.pory"
	applymovement 10, Common_Movement_ExclamationMark
# 424 "data/expansion_1/scene10.pory"
	delay 60
# 425 "data/expansion_1/scene10.pory"
	speakername CommonText_Sakura
# 426 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10c_Text_33
# 427 "data/expansion_1/scene10.pory"
	applymovement 7, Common_Movement_WalkInPlaceFasterLeft
# 428 "data/expansion_1/scene10.pory"
	waitmovement 0
# 429 "data/expansion_1/scene10.pory"
	call GetBaronsName
# 430 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10c_Text_34, MSGBOX_AUTOCLOSE
# 431 "data/expansion_1/scene10.pory"
	applymovement 6, Common_Movement_SweatDrop
# 432 "data/expansion_1/scene10.pory"
	playse SE_M_METRONOME
# 433 "data/expansion_1/scene10.pory"
	delay 40
# 434 "data/expansion_1/scene10.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterRight
# 435 "data/expansion_1/scene10.pory"
	waitmovement 0
# 436 "data/expansion_1/scene10.pory"
	speakername CommonText_Jakson
# 437 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10c_Text_35, MSGBOX_AUTOCLOSE
# 439 "data/expansion_1/scene10.pory"
	applymovement 7, Common_Movement_WalkInPlaceFasterDown
# 440 "data/expansion_1/scene10.pory"
	waitmovement 0
# 441 "data/expansion_1/scene10.pory"
	speakername CommonText_Harper
# 442 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10c_Text_36
# 445 "data/expansion_1/scene10.pory"
	speakername CommonText_Sakura
# 446 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10c_Text_37, MSGBOX_AUTOCLOSE
# 448 "data/expansion_1/scene10.pory"
	applymovement 10, Common_Movement_Thinking
# 449 "data/expansion_1/scene10.pory"
	delay 60
# 450 "data/expansion_1/scene10.pory"
	speakername CommonText_Redd
# 451 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10c_Text_38
# 453 "data/expansion_1/scene10.pory"
	speakername CommonText_Jakson
# 454 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10c_Text_39
# 455 "data/expansion_1/scene10.pory"
	speakername CommonText_Redd
# 456 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10c_Text_40, MSGBOX_AUTOCLOSE
# 459 "data/expansion_1/scene10.pory"
	applymovement 10, Common_Movement_WalkDown2
# 460 "data/expansion_1/scene10.pory"
	waitmovement 0
# 461 "data/expansion_1/scene10.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterDown
# 462 "data/expansion_1/scene10.pory"
	applymovement 10, Common_Movement_WalkLeft9
# 463 "data/expansion_1/scene10.pory"
	waitmovement 0
# 464 "data/expansion_1/scene10.pory"
	playse SE_PIN
# 465 "data/expansion_1/scene10.pory"
	applymovement 8, Common_Movement_ExclamationMark
# 466 "data/expansion_1/scene10.pory"
	delay 60
# 467 "data/expansion_1/scene10.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterUp
# 468 "data/expansion_1/scene10.pory"
	waitmovement 0
# 469 "data/expansion_1/scene10.pory"
	speakername CommonText_Sakura
# 470 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10c_Text_41, MSGBOX_AUTOCLOSE
# 471 "data/expansion_1/scene10.pory"
	applymovement 8, Common_Movement_WalkFastDown
# 472 "data/expansion_1/scene10.pory"
	waitmovement 0
# 473 "data/expansion_1/scene10.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 474 "data/expansion_1/scene10.pory"
	applymovement 8, Common_Movement_WalkFastLeft4
# 475 "data/expansion_1/scene10.pory"
	waitmovement 0
# 476 "data/expansion_1/scene10.pory"
	applymovement 7, Common_Movement_WalkInPlaceFasterLeft
# 477 "data/expansion_1/scene10.pory"
	applymovement 8, Common_Movement_WalkFastDown2
# 478 "data/expansion_1/scene10.pory"
	waitmovement 0
# 479 "data/expansion_1/scene10.pory"
	applymovement 8, Common_Movement_WalkFastLeft3
# 480 "data/expansion_1/scene10.pory"
	waitmovement 0
# 481 "data/expansion_1/scene10.pory"
	playse SE_PIN
# 482 "data/expansion_1/scene10.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 483 "data/expansion_1/scene10.pory"
	delay 60
# 484 "data/expansion_1/scene10.pory"
	call GetBaronsName
# 485 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10c_Text_42, MSGBOX_AUTOCLOSE
# 486 "data/expansion_1/scene10.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 487 "data/expansion_1/scene10.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterUp
# 488 "data/expansion_1/scene10.pory"
	applymovement 7, Common_Movement_WalkDown4
# 489 "data/expansion_1/scene10.pory"
	waitmovement 0
# 490 "data/expansion_1/scene10.pory"
	applymovement 6, Common_Movement_Thinking
# 491 "data/expansion_1/scene10.pory"
	applymovement 7, Common_Movement_WalkLeft9
# 492 "data/expansion_1/scene10.pory"
	delay 80
# 493 "data/expansion_1/scene10.pory"
	applymovement 11, Common_Movement_WalkDown5
# 494 "data/expansion_1/scene10.pory"
	delay 100
# 495 "data/expansion_1/scene10.pory"
	fadescreen FADE_TO_BLACK
# 497 "data/expansion_1/scene10.pory"
	removeobject 7
# 498 "data/expansion_1/scene10.pory"
	removeobject 11
# 499 "data/expansion_1/scene10.pory"
	removeobject 8
# 500 "data/expansion_1/scene10.pory"
	removeobject 6
# 501 "data/expansion_1/scene10.pory"
	removeobject 10
# 502 "data/expansion_1/scene10.pory"
	setobjectxyperm 6, 16, 14
# 503 "data/expansion_1/scene10.pory"
	addobject 12
# 504 "data/expansion_1/scene10.pory"
	applymovement 12, Common_Movement_WalkQuarterDown
# 505 "data/expansion_1/scene10.pory"
	waitmovement 0
# 507 "data/expansion_1/scene10.pory"
	fadescreen FADE_FROM_BLACK
# 508 "data/expansion_1/scene10.pory"
	applymovement LOCALID_CAMERA, Common_Movement_WalkUp
# 509 "data/expansion_1/scene10.pory"
	waitmovement 0
# 510 "data/expansion_1/scene10.pory"
	fadenewbgm MUS_B_PIKE
# 511 "data/expansion_1/scene10.pory"
	delay 80
# 512 "data/expansion_1/scene10.pory"
	applymovement LOCALID_PLAYER, Common_Movement_QuestionMark
# 513 "data/expansion_1/scene10.pory"
	delay 80
# 514 "data/expansion_1/scene10.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 515 "data/expansion_1/scene10.pory"
	waitmovement 0
# 516 "data/expansion_1/scene10.pory"
	delay 40
# 517 "data/expansion_1/scene10.pory"
	playse SE_PIN
# 518 "data/expansion_1/scene10.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 519 "data/expansion_1/scene10.pory"
	delay 100
# 520 "data/expansion_1/scene10.pory"
	applymovement LOCALID_PLAYER, Common_Movement_Talking
# 521 "data/expansion_1/scene10.pory"
	delay 100
# 522 "data/expansion_1/scene10.pory"
	applymovement 12, Common_Movement_WalkUp2
# 523 "data/expansion_1/scene10.pory"
	waitmovement 0
# 524 "data/expansion_1/scene10.pory"
	removeobject 12
# 525 "data/expansion_1/scene10.pory"
	addobject 6
# 526 "data/expansion_1/scene10.pory"
	applymovement 6, Common_Movement_WalkUp3
# 527 "data/expansion_1/scene10.pory"
	waitmovement 0
# 528 "data/expansion_1/scene10.pory"
	speakername CommonText_Jakson
# 529 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10c_Text_43, MSGBOX_AUTOCLOSE
# 530 "data/expansion_1/scene10.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 531 "data/expansion_1/scene10.pory"
	waitmovement 0
# 532 "data/expansion_1/scene10.pory"
	applymovement 6, Common_Movement_WalkUp2
# 533 "data/expansion_1/scene10.pory"
	waitmovement 0
# 534 "data/expansion_1/scene10.pory"
	delay 20
# 535 "data/expansion_1/scene10.pory"
	applymovement LOCALID_PLAYER, Common_Movement_Talking
# 536 "data/expansion_1/scene10.pory"
	delay 100
# 537 "data/expansion_1/scene10.pory"
	applymovement 6, Common_Movement_QuestionMark
# 538 "data/expansion_1/scene10.pory"
	delay 40
# 539 "data/expansion_1/scene10.pory"
	speakername CommonText_Jakson
# 540 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10c_Text_44, MSGBOX_AUTOCLOSE
# 555 "data/expansion_1/scene10.pory"
	applymovement 6, Common_Movement_WalkRight2
# 556 "data/expansion_1/scene10.pory"
	waitmovement 0
# 557 "data/expansion_1/scene10.pory"
	applymovement 6, Common_Movement_WalkDown5
# 558 "data/expansion_1/scene10.pory"
	delay 40
# 559 "data/expansion_1/scene10.pory"
	fadescreen FADE_TO_BLACK
# 561 "data/expansion_1/scene10.pory"
	warpcontinuescript MAP_MAUVE_CAMP, 16, 16, Expansion1_Rival_Scene02e
	return


Expansion1_Rival_Scene10_Text_0:
# 40 "data/expansion_1/scene10.pory"
	.string "Are you prepared to face off\n"
	.string "against your final opponents?$"

Expansion1_Rival_Scene10b_Text_0:
# 56 "data/expansion_1/scene10.pory"
	.string "{PLAYER}!\n"
	.string "It looks like it worked in the end!\l"
	.string "Let's take this on together.$"

Expansion1_Rival_Scene10b_Text_1:
# 82 "data/expansion_1/scene10.pory"
	.string "Everyone, get ready! This'll be custom,\n"
	.string "so there's no telling how it will go!$"

Expansion1_Rival_Scene10b_Text_2:
# 85 "data/expansion_1/scene10.pory"
	.string "Hah… {PAUSE 100}with how everything else has\n"
	.string "gone? Custom mechanics sound like a\l"
	.string "perfectly chaotic climax.$"

Expansion1_Rival_Scene10b_Text_3:
# 91 "data/expansion_1/scene10.pory"
	.string "What?! {PAUSE 60}What do you mean ‘no telling’?!$"

Expansion1_Rival_Scene10b_Text_4:
# 93 "data/expansion_1/scene10.pory"
	.string "Baron, we can take it! Back to back.\n"
	.string "Allies that fight until the final\l"
	.string "breath!$"

Expansion1_Rival_Scene10b_Text_5:
# 115 "data/expansion_1/scene10.pory"
	.string "It-{PAUSE 30}It looks almost dead…{PAUSE 100}?\n"
	.string "Did we beat it?$"

Expansion1_Rival_Scene10b_Text_6:
# 118 "data/expansion_1/scene10.pory"
	.string "Tsk. This is when they're at their\n"
	.string "most dangerous.\p"
	.string "{EMOJI_BIGWHEEL}Clenches fist{EMOJI_BIGWHEEL}\n"
	.string "Down with you!$"

Expansion1_Rival_Scene10b_Text_7:
# 165 "data/expansion_1/scene10.pory"
	.string "Again? Jeez! This guy won't give up!$"

Expansion1_Rival_Scene10b_Text_8:
# 167 "data/expansion_1/scene10.pory"
	.string "HAHAHA!\n"
	.string "Live up to your name, {PAUSE 60}“Redd”!\l"
	.string "Let us BATHE IN THE BLOOD OF OUR\l"
	.string "ENEMIES!!!$"

Expansion1_Rival_Scene10b_Text_9:
# 174 "data/expansion_1/scene10.pory"
	.string "That's not-…{PAUSE 100}! F-{PAUSE 30}FINE!\n"
	.string "I can go another round!$"

Expansion1_Rival_Scene10b_Text_10:
# 177 "data/expansion_1/scene10.pory"
	.string "Everything comes in threes.\n"
	.string "This should be the last phase!$"

Expansion1_Rival_Scene10b_Text_11:
# 182 "data/expansion_1/scene10.pory"
	.string "One more time!$"

Expansion1_Rival_Scene10b_Text_12:
# 212 "data/expansion_1/scene10.pory"
	.string "Is that…{PAUSE 60}?!$"

Expansion1_Rival_Scene10b_Text_13:
# 214 "data/expansion_1/scene10.pory"
	.string "Did it… {PAUSE 100}Did it actually…{PAUSE 60}?$"

Expansion1_Rival_Scene10b_Text_14:
# 218 "data/expansion_1/scene10.pory"
	.string "Whew… {PAUSE 100}Looks like that's finally it!$"

Expansion1_Rival_Scene10b_Text_15:
# 220 "data/expansion_1/scene10.pory"
	.string "Yeah, I think we did it, guys!$"

Expansion1_Rival_Scene10b_Text_16:
# 222 "data/expansion_1/scene10.pory"
	.string "I… {PAUSE 100}I did! I did it!$"

Expansion1_Rival_Scene10b_Text_17:
# 224 "data/expansion_1/scene10.pory"
	.string "We {PAUSE 30}ALL {PAUSE 60}did it, Baron{EMOJI_TILDE}{UNK_SPACER}$"

Expansion1_Rival_Scene10b_Text_18:
# 228 "data/expansion_1/scene10.pory"
	.string "We all… {PAUSE 100}Baron…{PAUSE 60}?\p"
	.string "…{PAUSE 60}uh, yeah, haha…\p"
	.string "You can really lose where you are in\n"
	.string "some of those moments, can't you?$"

Expansion1_Rival_Scene10b_Text_19:
# 235 "data/expansion_1/scene10.pory"
	.string "Mission accomplished?$"

Expansion1_Rival_Scene10b_Text_20:
# 237 "data/expansion_1/scene10.pory"
	.string "That was… {PAUSE 100}blood pumping…{PAUSE 60}!$"

Expansion1_Rival_Scene10b_Text_21:
# 241 "data/expansion_1/scene10.pory"
	.string "“Mission accomplished” seems right.\p"
	.string "Time for some fresh air?$"

Expansion1_Rival_Scene10c_Text_0:
# 274 "data/expansion_1/scene10.pory"
	.string "We did it!\p"
	.string "… {PAUSE 30}… {PAUSE 30}…\p"
	.string "Where's my treasure, Jakson?$"

Expansion1_Rival_Scene10c_Text_1:
# 278 "data/expansion_1/scene10.pory"
	.string "No one got any drops?$"

Expansion1_Rival_Scene10c_Text_2:
# 280 "data/expansion_1/scene10.pory"
	.string "That's the question of the hour,\n"
	.string "isn't it?$"

Expansion1_Rival_Scene10c_Text_3:
# 285 "data/expansion_1/scene10.pory"
	.string "What, so our gamemaster doesn't know\n"
	.string "either?$"

Expansion1_Rival_Scene10c_Text_4:
# 288 "data/expansion_1/scene10.pory"
	.string "Well… {PAUSE 100}it's possible that there was never\n"
	.string "a real treasure, right?$"

Expansion1_Rival_Scene10c_Text_5:
# 291 "data/expansion_1/scene10.pory"
	.string "So you set the stage for our grand\n"
	.string "treasure hunt without knowing if\l"
	.string "there was a treasure to be had?$"

Expansion1_Rival_Scene10c_Text_6:
# 295 "data/expansion_1/scene10.pory"
	.string "Aww… {PAUSE 100}I was really looking forward to\n"
	.string "some healing items.$"

Expansion1_Rival_Scene10c_Text_7:
# 300 "data/expansion_1/scene10.pory"
	.string "Baron, you know that…$"

Expansion1_Rival_Scene10c_Text_8:
# 304 "data/expansion_1/scene10.pory"
	.string "Never mind.$"

Expansion1_Rival_Scene10c_Text_9:
# 308 "data/expansion_1/scene10.pory"
	.string "Jakson, you think the logic for the\n"
	.string "reward being dropped also got\l"
	.string "compromised?\p"
	.string "That would explain it, if true.$"

Expansion1_Rival_Scene10c_Text_10:
# 315 "data/expansion_1/scene10.pory"
	.string "We could look into the code behind this\n"
	.string "all to see if there was something there.\p"
	.string "But… {PAUSE 100}I guess it's hard to know if it\n"
	.string "was a weird bug or general messiness\l"
	.string "of the mod's creators…\l"
	.string "I…\l"
	.string "Argh…\l"
	.string "I can just spawn in a reward.$"

Expansion1_Rival_Scene10c_Text_11:
# 324 "data/expansion_1/scene10.pory"
	.string "I sense a thief! The scallywags must've\n"
	.string "took our plunder for themselves.$"

Expansion1_Rival_Scene10c_Text_12:
# 327 "data/expansion_1/scene10.pory"
	.string "No, I'm pretty sure that's the end of\n"
	.string "the mod's story.$"

Expansion1_Rival_Scene10c_Text_13:
# 330 "data/expansion_1/scene10.pory"
	.string "Darn. And if they're already gone it'll\n"
	.string "be too late for my Sakura Senses to\l"
	.string "pick them up.$"

Expansion1_Rival_Scene10c_Text_14:
# 334 "data/expansion_1/scene10.pory"
	.string "{EMOJI_BIGWHEEL}Sigh{EMOJI_BIGWHEEL} {PAUSE 60}It's such an unfortunate\n"
	.string "limitation to the Sakura Senses.$"

Expansion1_Rival_Scene10c_Text_15:
# 339 "data/expansion_1/scene10.pory"
	.string "Jakson, I think she's asking for the\n"
	.string "reward to be spawned for each one of\l"
	.string "us.$"

Expansion1_Rival_Scene10c_Text_16:
# 343 "data/expansion_1/scene10.pory"
	.string "{EMOJI_BIGWHEEL}Sigh{EMOJI_BIGWHEEL}…$"

Expansion1_Rival_Scene10c_Text_17:
# 347 "data/expansion_1/scene10.pory"
	.string "…{PAUSE 100}Well, anyway. I agree that it seems\n"
	.string "like we've hit the ending.$"

Expansion1_Rival_Scene10c_Text_18:
# 352 "data/expansion_1/scene10.pory"
	.string "I can check again, but I believe we've\n"
	.string "concluded with that ‘main story’ part of\l"
	.string "this little expansion.$"

Expansion1_Rival_Scene10c_Text_19:
# 356 "data/expansion_1/scene10.pory"
	.string "Anything else? Do you think I could get\n"
	.string "one of those ‘Calamity Maw’ for myself?$"

Expansion1_Rival_Scene10c_Text_20:
# 361 "data/expansion_1/scene10.pory"
	.string "I think so. Pretty sure that was the\n"
	.string "Paradox Pokémon naming scheme.\l"
	.string "And if not I'll make it so you can.$"

Expansion1_Rival_Scene10c_Text_21:
# 365 "data/expansion_1/scene10.pory"
	.string "It certainly wasn't the only new…{PAUSE 100}\n"
	.string "Pokémon… {PAUSE 100}that I saw. I wonder…$"

Expansion1_Rival_Scene10c_Text_22:
# 368 "data/expansion_1/scene10.pory"
	.string "Gotta prepare for the next expansion\n"
	.string "pack, right? Catch 'em all. All the cute\l"
	.string "and cool ones, at least.$"

Expansion1_Rival_Scene10c_Text_23:
# 374 "data/expansion_1/scene10.pory"
	.string "Yeah… {PAUSE 100}I'll keep working on that idea\n"
	.string "I had. And…\l"
	.string "And I'll not rush anything just because\l"
	.string "I'm taking forever myself.$"

Expansion1_Rival_Scene10c_Text_24:
# 381 "data/expansion_1/scene10.pory"
	.string "Pfft. Fine, I'll fix your gaffs.$"

Expansion1_Rival_Scene10c_Text_25:
# 388 "data/expansion_1/scene10.pory"
	.string "I… {PAUSE 100}didn't…$"

Expansion1_Rival_Scene10c_Text_26:
# 390 "data/expansion_1/scene10.pory"
	.string "So there were a couple of mods I saw\n"
	.string "online that…$"

Expansion1_Rival_Scene10c_Text_27:
# 399 "data/expansion_1/scene10.pory"
	.string "Was… {PAUSE 100}Harper always this into this\n"
	.string "topic?$"

Expansion1_Rival_Scene10c_Text_28:
# 404 "data/expansion_1/scene10.pory"
	.string "Maybe she just likes things feeling\n"
	.string "neat and tidy?$"

Expansion1_Rival_Scene10c_Text_29:
# 407 "data/expansion_1/scene10.pory"
	.string "Or maybe those two are fucking?$"

Expansion1_Rival_Scene10c_Text_30:
# 415 "data/expansion_1/scene10.pory"
	.string "Sakura… {PAUSE 100}We're still here.$"

Expansion1_Rival_Scene10c_Text_31:
# 417 "data/expansion_1/scene10.pory"
	.string "I mean platonically! Sheesh.$"

Expansion1_Rival_Scene10c_Text_32:
# 419 "data/expansion_1/scene10.pory"
	.string "I think I'll let people fill in the\n"
	.string "blanks however they want.$"

Expansion1_Rival_Scene10c_Text_33:
# 426 "data/expansion_1/scene10.pory"
	.string "Scandalous{EMOJI_TILDE}{UNK_SPACER}$"

Expansion1_Rival_Scene10c_Text_34:
# 430 "data/expansion_1/scene10.pory"
	.string "Are they… {PAUSE 100}actually…{PAUSE 60}?$"

Expansion1_Rival_Scene10c_Text_35:
# 437 "data/expansion_1/scene10.pory"
	.string "Harper… {PAUSE 100}maybe don't imply something\n"
	.string "that isn't happening…{PAUSE 60}?$"

Expansion1_Rival_Scene10c_Text_36:
# 442 "data/expansion_1/scene10.pory"
	.string "Pfft. {PAUSE 60}Consider it penance for you not\n"
	.string "testing this thing properly.\l"
	.string "{EMOJI_BIGWHEEL}Sticks out her tongue playfully{EMOJI_BIGWHEEL}$"

Expansion1_Rival_Scene10c_Text_37:
# 446 "data/expansion_1/scene10.pory"
	.string "If only we were back in high school,\n"
	.string "this gossip would be all the rage.$"

Expansion1_Rival_Scene10c_Text_38:
# 451 "data/expansion_1/scene10.pory"
	.string "Well, I don't really wanna talk about\n"
	.string "anyone's love life.$"

Expansion1_Rival_Scene10c_Text_39:
# 454 "data/expansion_1/scene10.pory"
	.string "We're not-{PAUSE 20}!$"

Expansion1_Rival_Scene10c_Text_40:
# 456 "data/expansion_1/scene10.pory"
	.string "If that's all, I think I do want to look\n"
	.string "around a bit more now that I have the\l"
	.string "chance.$"

Expansion1_Rival_Scene10c_Text_41:
# 470 "data/expansion_1/scene10.pory"
	.string "Oh, you're not getting ahead of me!$"

Expansion1_Rival_Scene10c_Text_42:
# 485 "data/expansion_1/scene10.pory"
	.string "W-{PAUSE 30}wait! Me as well!$"

Expansion1_Rival_Scene10c_Text_43:
# 529 "data/expansion_1/scene10.pory"
	.string "Uh, you good, {PLAYER}?$"

Expansion1_Rival_Scene10c_Text_44:
# 540 "data/expansion_1/scene10.pory"
	.string "You saw something?\p"
	.string "… {PAUSE 30}… {PAUSE 30}…\p"
	.string "If you really think so…\p"
	.string "NPCs should be pretty static now,\n"
	.string "so…\l"
	.string "Well… {PAUSE 100} Hmmm…\p"
	.string "… {PAUSE 30}… {PAUSE 30}… {PAUSE 30}\n"
	.string "… {PAUSE 30}… {PAUSE 30}…\l"
	.string "Let me know if you see anything else.\p"
	.string "…{PAUSE 100}Why?\p"
	.string "I… {PAUSE 100}I've got a running theory on why\n"
	.string "some of the bugs we saw happened.\p"
	.string "Don't worry, it's not anything serious.\n"
	.string "Or… {PAUSE 100}even likely.\l"
	.string "Probably…$"
